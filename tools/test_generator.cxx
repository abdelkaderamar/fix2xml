// MIT License
//
// Copyright 2018 Abdelkader Amar
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#include "fix/fix_parser.hxx"

#include "util/fix_env.hxx"

#include <boost/algorithm/string.hpp>
#include <boost/log/trivial.hpp>

#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace fix2xml;
using namespace std;

vector<string> init_tabs(const size_t len) {
  vector<string> v;
  for (size_t i = 0; i <= len; ++i)
    v.push_back(string((i + 1) * 2, ' '));
  return v;
}

const string &TAB(const int i) {
  static vector<string> TABS;
  if (i >= TABS.size())
    TABS = init_tabs(i);
  return TABS[i];
}

//-----------------------------------------------------------------------------
int usage(const int ret) {
  static string text = "Usage: test_generator <fix dictionary> <FIX version>";
  if (ret == 0)
    BOOST_LOG_TRIVIAL(info) << text;
  else
    BOOST_LOG_TRIVIAL(error) << text;
  return ret;
}
//-----------------------------------------------------------------------------

string generate_timestamp() {
  int hour = rand() % 24;
  int min = rand() % 60;
  int sec = rand() % 60;
  int date = rand() % 28;
  int month = 1 + rand() % 12;
  int year = 2000 + rand() % 18;
  return "FIX::UTCTIMESTAMP(" + to_string(hour) + ", " + to_string(min) + ", " +
         to_string(sec) + ", " + to_string(date) + ", " + to_string(month) +
         to_string(year) + ")";
}

//-----------------------------------------------------------------------------

string generate_timeonly() {
  int hour = rand() % 24;
  int min = rand() % 60;
  int sec = rand() % 60;
  return "FIX::UTCTIMEONLY(" + to_string(hour) + ", " + to_string(min) + ", " +
         to_string(sec) + ")";
}

string generate_dateonly() {
  int date = rand() % 28;
  int month = 1 + rand() % 12;
  int year = 2000 + rand() % 18;
  return "UTCDATEONLY(" + to_string(date) + ", " + to_string(month) +
         to_string(year) + ")";
}
string generate_currency() {
  static vector<string> CURRENCIES = {"USD", "EUR", "GBP", "CHF", "JPY", "CAN"};
  return "\"" + CURRENCIES[rand() % CURRENCIES.size()] + "\"";
}
//-----------------------------------------------------------------------------

string generate_random_value(const fix_field_type &field_type) {
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

void generate_field(ostream &os, const string field_name,
                    const string &field_map,
                    const shared_ptr<fix_dico_container> &dico,
                    const int level) {
  fix_field_type field_type;
  if (!dico->get_fix_field(field_name, field_type)) {
    BOOST_LOG_TRIVIAL(error) << "The field " << field_name << " not found";
    return;
  }
  string value = generate_random_value(field_type);
  if (value.empty()) {
    BOOST_LOG_TRIVIAL(error) << "Cannot generate instruction for " << field_name
                             << " (" << field_type._type << ")";
    os << TAB(level) << "//" << field_map << ".set(FIX::" << field_name << "("
       << value << "));\n";
  } else
    os << TAB(level) << field_map << ".set(FIX::" << field_name << "(" << value
       << "));\n";
}

//-----------------------------------------------------------------------------

void generate_component(ostream &os, const fix_component_type &compo_type,
                        const shared_ptr<fix_dico_container> &dico,
                        const string &field_map, const string &parent_type,
                        const int level) {
  os << TAB(level) << "// " << compo_type._name << endl;
  for (const auto &field_name : compo_type._fields) {
    generate_field(os, field_name, field_map, dico, level);
  }
  for (const auto &child_compo_name : compo_type._components) {
    fix_component_type child_compo_type;
    if (!dico->get_fix_component(child_compo_name, child_compo_type)) {
      exit(1);
      continue;
    }
    if (child_compo_type._type == "group") {
      os << TAB(level) << "// Group " << child_compo_type._name << endl;
      auto group_type_name = parent_type + "::" + child_compo_type._short_name;
      auto first_letter = child_compo_type._short_name.substr(0, 1);
      boost::to_lower(first_letter);
      int r = rand() % 3 + 1;
      for (int i = 0; i < r; ++i) {
        string group_var_name = first_letter +
                                child_compo_type._short_name.substr(1) + "_" +
                                to_string(level) + "_" + to_string(i);
        os << TAB(level) << "{" << endl;
        os << TAB(level + 1) << group_type_name << " " << group_var_name << ";"
           << endl;
        generate_component(os, child_compo_type, dico, group_var_name,
                           group_type_name, level + 1);
        os << TAB(level + 1) << field_map << ".addGroup(" << group_var_name
           << ");" << endl;
        os << TAB(level) << "}" << endl;
      }
    } else {
      generate_component(os, child_compo_type, dico, field_map, parent_type,
                         level);
    }
  }
}

//-----------------------------------------------------------------------------

void generate_test(ostream &os, const fix_message_type &msg_type,
                   const shared_ptr<fix_dico_container> &dico,
                   const string &ns) {
  const string msg_type_name = ns + "::" + msg_type._name;
  os << "TEST ( " << msg_type._name << ", set_fields)\n"
     << "{\n"
     << TAB(0) << msg_type_name << " "
     << "msg;\n";
  for (auto &field_name : msg_type._fields) {
    generate_field(os, field_name, "msg", dico, 0);
  }
  for (auto &compo_name : msg_type._components) {
    fix_component_type compo_type;
    if (dico->get_fix_component(compo_name, compo_type))
      generate_component(os, compo_type, dico, "msg", msg_type_name, 0);
  }
  os << "}\n";
}

//-----------------------------------------------------------------------------

void generate_header(ostream &os, const fix_message_type &msg_type,
                     const shared_ptr<fix_dico_container> &dico,
                     const string &ns) {
  os << "#include <gtest/gtest.h>\n\n";

  const std::string lower_ns = boost::algorithm::to_lower_copy(ns);

  os << "#include <quickfix/" << lower_ns << "/" + msg_type._name + ".h>\n\n";
}

//-----------------------------------------------------------------------------

void generate_message_test(const fix_message_type &msg_type,
                           const shared_ptr<fix_dico_container> &dico,
                           const string &ns) {
  const string filename = "generated/test_" + msg_type._name + ".cpp";
  BOOST_LOG_TRIVIAL(info) << "Generating file " << filename;
  ofstream ofs(filename.c_str());
  generate_header(ofs, msg_type, dico, ns);
  generate_test(ofs, msg_type, dico, ns);
  ofs.close();
} // end generate_message_test

//-----------------------------------------------------------------------------

int main(int argc, char *argv[]) {
  if (argc < 3)
    return usage(1);

  if (!fix_env::init_xerces()) {
    BOOST_LOG_TRIVIAL(error) << "Failed to initialize xerces environment";
    return 1;
  }
  BOOST_LOG_TRIVIAL(info) << "xerces environment initialized";

  std::srand(std::time(0));
  {
    const char *fix_filename{argv[1]};
    string ns(argv[2]);
    ns = boost::algorithm::to_upper_copy(ns);
    fix_parser parser;
    if (!parser.parse(fix_filename)) {
      BOOST_LOG_TRIVIAL(error) << "Failed to parse " << fix_filename;
      return 1;
    }
    auto dico = parser.dico();
    auto messages = dico->messages();
    auto &name_index = messages.get<0>();
    for (const auto msg_type : name_index) {
      generate_message_test(msg_type, dico, ns);
    }
  }

  fix_env::terminate_xerces();
  BOOST_LOG_TRIVIAL(info) << "xerces environment terminated";

  return 0;
}
