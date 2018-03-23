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

const string TAB("  ");
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
      field_type._type == "MULTIPLEVALUESTRING" ||
      field_type._type == "MULTIPLECHARVALUE" ||
      field_type._type == "EXCHANGE" || field_type._type == "LOCALMKTDATE" ||
      field_type._type == "DATA" || field_type._type == "COUNTRY")
    return "\"" + field_type._type + "_" + value + "\"";
  return string();
}

//-----------------------------------------------------------------------------

void generate_field(ostream &os, const fix_message_type &msg_type,
                    const string field_name,
                    const shared_ptr<fix_dico_container> &dico) {
  fix_field_type field_type;
  if (!dico->get_fix_field(field_name, field_type)) {
    BOOST_LOG_TRIVIAL(error) << "The field " << field_name << " not found";
    return;
  }
  string value = generate_random_value(field_type);
  if (value.empty())
    os << TAB << "//msg.set(FIX::" << field_name << "(" << value << "));\n";
  else
    os << TAB << "msg.set(FIX::" << field_name << "(" << value << "));\n";
}

//-----------------------------------------------------------------------------

void generate_test(ostream &os, const fix_message_type &msg_type,
                   const shared_ptr<fix_dico_container> &dico,
                   const string &ns) {
  os << "TEST ( " << msg_type._name << ", set_fields)\n"
     << "{\n"
     << TAB << ns << "::" << msg_type._name << " "
     << "msg;\n";
  for (auto &field : msg_type._fields) {
    generate_field(os, msg_type, field, dico);
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
