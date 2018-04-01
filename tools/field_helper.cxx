#include "field_helper.hxx"

#include "data/fix_types.hxx"
#include "generation_util.hxx"

#include <boost/algorithm/string.hpp>
#include <boost/log/trivial.hpp>

#include <algorithm>
#include <cstdlib>

using namespace std;
using namespace fix2xml;

map<string, int> field_helper::_variables;
vector<string> field_helper::_CURRENCIES = {"USD", "EUR", "GBP",
                                            "CHF", "JPY", "CAN"};

//-----------------------------------------------------------------------------

void field_helper::reset() { _variables.clear(); }

//-----------------------------------------------------------------------------

string field_helper::generate_var_name(const string &type) {
  string type_name = type;
  replace(type_name.begin(), type_name.end(), '.', '_');
  int i = -1;
  const auto it = _variables.find(type_name);
  if (it != _variables.end()) {
    i = it->second;
  }
  _variables[type_name] = ++i;
  return type_name + "_" + to_string(i);
}

//-----------------------------------------------------------------------------

string field_helper::generate_timestamp() {
  int hour = rand() % 24;
  int min = rand() % 60;
  int sec = rand() % 60;
  int date = rand() % 28;
  int month = 1 + rand() % 12;
  int year = 2000 + rand() % 18;
  return "FIX::UTCTIMESTAMP(" + to_string(hour) + ", " + to_string(min) + ", " +
         to_string(sec) + ", " + to_string(date) + ", " + to_string(month) +
         ", " + to_string(year) + ")";
}

//-----------------------------------------------------------------------------

string field_helper::generate_timeonly() {
  int hour = rand() % 24;
  int min = rand() % 60;
  int sec = rand() % 60;
  return "FIX::UTCTIMEONLY(" + to_string(hour) + ", " + to_string(min) + ", " +
         to_string(sec) + ")";
}

//-----------------------------------------------------------------------------

string field_helper::generate_dateonly() {
  int date = rand() % 28;
  int month = 1 + rand() % 12;
  int year = 2000 + rand() % 18;
  return "FIX::UTCDATEONLY(" + to_string(date) + ", " + to_string(month) +
         ", " + to_string(year) + ")";
}

//-----------------------------------------------------------------------------

string field_helper::generate_currency() {
  return "\"" + _CURRENCIES[rand() % _CURRENCIES.size()] + "\"";
}

//-----------------------------------------------------------------------------

string field_helper::generate_random_value(const fix_field_type &field_type) {
  string value;
  int r = rand();
  if (!field_type._values.empty()) {
    value = field_type._values[r % field_type._values.size()];
  } else {
    value = to_string(r);
  }
  if (field_type._type == "LENGTH" || field_type._type == "INT" ||
      field_type._type == "NUMINGROUP" || field_type._type == "SEQNUM")
    return value;
  if (field_type._type == "STRING" ||
      field_type._type == "MULTIPLESTRINGVALUE" ||
      field_type._type == "MULTIPLECHARVALUE" ||
      field_type._type == "EXCHANGE" || field_type._type == "LOCALMKTDATE" ||
      field_type._type == "DATA" || field_type._type == "COUNTRY" ||
      field_type._type == "XMLDATA" || field_type._type == "MONTHYEAR" ||
      field_type._type == "TZTIMEONLY" || field_type._type == "TZTIMESTAMP")
    return "\"" + field_type._type + "_" + value + "\"";
  if (field_type._type == "CURRENCY")
    return generate_currency();
  if (field_type._type == "PRICE" || field_type._type == "QTY" ||
      field_type._type == "FLOAT" || field_type._type == "AMT" ||
      field_type._type == "PRICEOFFSET")
    return to_string(r / 100);
  if (field_type._type == "PERCENTAGE")
    return to_string(((double)(r % 10000)) / 100);
  if (field_type._type == "BOOLEAN")
    return (r % 2 == 0 ? "true" : "false");
  if (field_type._type == "CHAR")
    return "'" + value.substr(0, 1) + "'";
  if (field_type._type == "UTCTIMESTAMP")
    return generate_timestamp();
  if (field_type._type == "UTCTIMEONLY")
    return generate_timeonly();
  if (field_type._type == "UTCDATEONLY")
    return generate_dateonly();
  if (field_type._type == "LANGUAGE")
    return "\"FR\"";
  return string();
}

//-----------------------------------------------------------------------------
bool field_helper::is_real_number_type(const fix_field_type &field_type) {
  if (field_type._type == "PRICE" || field_type._type == "QTY" ||
      field_type._type == "FLOAT" || field_type._type == "AMT" ||
      field_type._type == "PRICEOFFSET" || field_type._type == "PERCENTAGE")
    return true;
  return false;
}

//-----------------------------------------------------------------------------

string field_helper::generate_field(ostream &os, const string field_name,
                                    const string &field_map,
                                    const shared_ptr<fix_dico_container> &dico,
                                    const int level,
                                    const string &value_set_name) {
  fix_field_type field_type;
  if (!dico->get_fix_field(field_name, field_type)) {
    BOOST_LOG_TRIVIAL(error) << "The field " << field_name << " not found";
    return "";
  }
  string value = generate_random_value(field_type);
  string var_name;
  if (value.empty()) {
    BOOST_LOG_TRIVIAL(error) << "Cannot generate instruction for " << field_name
                             << " (" << field_type._type << ")";
    os << TAB(level) << "//" << field_map << ".set(FIX::" << field_name << "("
       << value << "));\n";
  } else {
    var_name = field_helper::generate_var_name(field_name);
    if (is_real_number_type(field_type)) {
      os << TAB(level) << "FIX::" << field_name << " " << var_name << ";"
         << endl
         << TAB(level) << var_name << ".setString(\"" << value << "\");"
         << endl;
      os << "set_field(" << field_map << ", " << var_name << ", "
         << value_set_name << ");" << endl;
    } else {
      os << TAB(level) << "set_field(" << field_map << ", "
         << "FIX::" << field_name << "{" << value << "}, " << value_set_name
         << ");" << endl;

      // os << TAB(level) << "FIX::" << field_name << " " << var_name << "("
      //    << value << ");" << endl;
    }
    // os << TAB(level) << field_map << ".set(" << var_name << ");" << endl;
  }
  return var_name;
}

//-----------------------------------------------------------------------------
