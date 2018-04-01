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

#include "field_helper.hxx"
#include "fix/fix_parser.hxx"
#include "fixml/fixml_xsd_parser.hxx"
#include "generation_util.hxx"
#include "util/fix_env.hxx"

#include <boost/algorithm/string.hpp>
#include <boost/log/trivial.hpp>

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace fix2xml;
using namespace std;

void generate_component(ostream &os, const fix_component_type &compo_type,
                        const shared_ptr<fix_dico_container> &dico,
                        const shared_ptr<fixml_dico_container> &fixml_dico,
                        const string &field_map, const string &parent_type,
                        const int level, const string var_level,
                        const string &parent_name);
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
void generate_group(ostream &os, const fix_component_type &compo_type,
                    const fix_component_type &group_compo_type,
                    const shared_ptr<fix_dico_container> &dico,
                    const shared_ptr<fixml_dico_container> &fixml_dico,
                    const string &field_map, const string &parent_type,
                    const int level, const string var_level,
                    const string &parent_name) {
  string fullname = parent_name + "." + compo_type._short_name;
  os << TAB(level) << "// Group " << group_compo_type._name << endl;
  auto group_type_name = parent_type + "::" + group_compo_type._short_name;
  auto first_letter = group_compo_type._short_name.substr(0, 1);
  boost::to_lower(first_letter);
  int r = rand() % 3 + 1;
  for (int i = 0; i < r; ++i) {
    string group_var_name = first_letter +
                            group_compo_type._short_name.substr(1) + "_" +
                            var_level + to_string(level) + "_" + to_string(i);
    os << TAB(level) << "{" << endl;
    os << TAB(level + 1) << group_type_name << " " << group_var_name << ";"
       << endl;
    generate_component(os, group_compo_type, dico, fixml_dico, group_var_name,
                       group_type_name, level + 1,
                       var_level + to_string(i) + "_", fullname);
    os << TAB(level + 1) << field_map << ".addGroup(" << group_var_name << ");"
       << endl;
    os << TAB(level) << "}" << endl;
  }
}

void generate_component(ostream &os, const fix_component_type &compo_type,
                        const shared_ptr<fix_dico_container> &dico,
                        const shared_ptr<fixml_dico_container> &fixml_dico,
                        const string &field_map, const string &parent_type,
                        const int level, const string var_level,
                        const string &parent_name) {
  os << TAB(level) << "// " << compo_type._name << endl;
  string fullname = parent_name + "." + compo_type._short_name;
  const string compo_var_name =
      field_helper::generate_var_name(compo_type._name);
  if (compo_type._fields.size() > 0) {
    os << TAB(level) << "multiset<string> " << compo_var_name << ";" << endl;
    for (const auto &field_name : compo_type._fields) {
      string value = field_helper::generate_field(os, field_name, field_map,
                                                  dico, level, compo_var_name);
      if (!value.empty() && fixml_dico->has_fix_tag(field_name)) {
        // os << TAB(level) << compo_var_name << ".insert(" << value
        //    << ".getString());" << endl;
      } else {
        BOOST_LOG_TRIVIAL(warning) << "Not adding field " << field_name
                                   << " with value [" << value << "]";
      }
    }
    os << TAB(level) << "all_values.push_back(" << compo_var_name << ");"
       << endl;
    // os << TAB(level) << "all_compo_names.insert(\"" << compo_type._name <<
    // "\");"
    os << TAB(level) << "all_compo_names.insert(\"" << fullname << "\");"
       << endl
       << endl;
  }
  for (const auto &child_compo_name : compo_type._components) {
    fix_component_type child_compo_type;
    if (!dico->get_fix_component(child_compo_name, child_compo_type)) {
      exit(1);
      continue;
    }
    if (child_compo_type._type == "group") {
      // os << TAB(level) << "// Group " << child_compo_type._name << endl;
      // auto group_type_name = parent_type + "::" +
      // child_compo_type._short_name;
      // auto first_letter = child_compo_type._short_name.substr(0, 1);
      // boost::to_lower(first_letter);
      // int r = rand() % 3 + 1;
      // r = 1;
      // for (int i = 0; i < r; ++i) {
      //   string group_var_name =
      //       first_letter + child_compo_type._short_name.substr(1) + "_" +
      //       var_level + to_string(level) + "_" + to_string(i);
      //   os << TAB(level) << "{" << endl;
      //   os << TAB(level + 1) << group_type_name << " " << group_var_name <<
      //   ";"
      //      << endl;
      //   generate_component(os, child_compo_type, dico, fixml_dico,
      //                      group_var_name, group_type_name, level + 1,
      //                      var_level + to_string(i) + "_", fullname);
      //   os << TAB(level + 1) << field_map << ".addGroup(" << group_var_name
      //      << ");" << endl;
      //   os << TAB(level) << "}" << endl;
      // }
      generate_group(os, compo_type, child_compo_type, dico, fixml_dico,
                     field_map, parent_type, level, var_level, fullname);
    } else {
      generate_component(os, child_compo_type, dico, fixml_dico, field_map,
                         parent_type, level, var_level, fullname);
    }
  }
}

//-----------------------------------------------------------------------------

void generate_test(ostream &os, const fix_message_type &msg_type,
                   const shared_ptr<fix_dico_container> &dico,
                   const shared_ptr<fixml_dico_container> &fixml_dico,
                   const string &ns, const string &fix_filename,
                   const string &xsd_schema) {
  const string msg_type_name = ns + "::" + msg_type._name;
  os << "TEST ( " << msg_type._name << ", set_fields)\n"
     << "{" << endl
     << endl
     << TAB(0) << "fixml2fix_converter converter {\"" << fix_filename
     << "\", \"" << xsd_schema << "\"};" << endl
     << TAB(0) << "auto& fixml_dict = converter.fixml_dico();" << endl
     << TAB(0) << "ASSERT_TRUE(converter.init());" << endl
     << TAB(0) << msg_type_name << " "
     << "msg;" << endl
     << endl
     << TAB(0) << "list<multiset<string>> all_values;" << endl
     << TAB(0) << "multiset<string> all_compo_names;" << endl;
  const string msg_var_name = field_helper::generate_var_name(msg_type._name);
  os << TAB(0) << "multiset<string> " << msg_var_name << ";" << endl;
  for (auto &field_name : msg_type._fields) {
    const string value = field_helper::generate_field(os, field_name, "msg",
                                                      dico, 0, msg_var_name);
    if (!value.empty() && fixml_dico->has_fix_tag(field_name)) {
      // os << TAB(0) << msg_var_name << ".insert(" << value << ".getString());"
      //     << endl;
    }
  }
  os << TAB(0) << "all_values.push_back(" << msg_var_name << ");" << endl
     << endl;
  os << TAB(0) << "all_compo_names.insert(\"" << msg_type._name << "\");"
     << endl
     << endl;

  for (auto &compo_name : msg_type._components) {
    fix_component_type compo_type;
    if (dico->get_fix_component(compo_name, compo_type))
      generate_component(os, compo_type, dico, fixml_dico, "msg", msg_type_name,
                         0, "", "");
  }

  // FIX2FIXML code generation
  os << endl
     << TAB(0) << "xml_element elt;" << endl
     << TAB(0) << "converter.fix2fixml(msg, elt);" << endl
     << TAB(0) << "BOOST_LOG_TRIVIAL(debug) << \"The resulting XML is\";"
     << endl
     << "cout << \"////////////////////////////////////////////\" << endl;"
     << endl
     << TAB(0) << "cout << elt.to_string() << endl;" << endl
     << "cout << \"////////////////////////////////////////////\" << endl << "
        "endl;"
     << endl
     << endl
     << TAB(0)
     << "BOOST_LOG_TRIVIAL(debug) << \"Quickfix XML representation is\";"
     << "cout << \"////////////////////////////////////////////\" << endl;"
     << endl
     << "cout << msg.toXML() << endl;" << endl
     << "cout << \"////////////////////////////////////////////\" << endl << "
        "endl;"
     << endl
     << TAB(0) << "list<multiset<string>> elt_lists;" << endl
     << TAB(0) << "elt.to_list(elt_lists);" << endl
     << TAB(0) << "EXPECT_EQ(elt_lists.size(), all_values.size());" << endl
     << endl
     << TAB(0) << "if (elt_lists.size() != all_values.size())" << TAB(0) << "{"
     << endl
     << TAB(1) << "multiset<string> elt_compo_name;" << endl
     << TAB(1) << "elt.all_components(elt_compo_name);" << endl
     << TAB(1) << "BOOST_LOG_TRIVIAL(debug) << \"XML Elements are:\";" << endl
     << TAB(1) << "cout << \"\t[\";" << endl
     << TAB(1) << "copy(elt_compo_name.begin(), elt_compo_name.end(), "
                  "ostream_iterator<string>(cout, \" \"));"
     << TAB(1) << "cout << \"]\" << endl;" << endl
     << endl
     << TAB(1) << "BOOST_LOG_TRIVIAL(debug) << \"FIX Components are:\"; "
     << endl
     << TAB(1) << "cout << \"\t[\";" << endl
     << TAB(1) << "copy(all_compo_names.begin(), all_compo_names.end(), "
                  "ostream_iterator<string>(cout, \" \"));"
     << TAB(1) << "cout << \"]\" << endl;" << endl
     << endl
     << TAB(0) << "}" << endl
     << TAB(0) << "BOOST_LOG_TRIVIAL(debug) << \"All FIX components\";" << endl
     << TAB(0) << "for (const auto& l : all_values) {" << endl
     << TAB(1) << "cout << \"\t[\";" << endl
     << "copy(l.begin(), l.end(), ostream_iterator<string>(cout, \" \"));"
     << endl
     << TAB(1) << "cout << \"]\" << endl;" << endl
     << TAB(0) << "}" << endl
     << TAB(0) << "BOOST_LOG_TRIVIAL(debug) << \"All XML components\";" << endl
     << TAB(0) << "for (const auto& l : elt_lists) {" << endl
     << TAB(1) << "cout << \"\t[\";" << endl
     << "copy(l.begin(), l.end(), ostream_iterator<string>(cout, \" \"));"
     << endl
     << TAB(1) << "cout << \"]\" << endl;" << endl
     << endl
     << TAB(0) << "}" << endl
     << endl

     << TAB(0) << "for (const auto& xml_l : elt_lists) {" << endl
     << TAB(1) << "bool found = false;" << endl
     << TAB(1) << "for (const auto& l : all_values) {" << endl
     << TAB(2)
     << "if (includes(l.begin(), l.end(), xml_l.begin(), xml_l.end())) {"
     << endl
     << TAB(3) << "found = true;" << endl
     << TAB(3) << "break;" << endl
     << TAB(2) << "} // end if includes" << endl
     << TAB(1) << "} // end for all_values" << endl
     << TAB(1) << "EXPECT_TRUE(found);" << endl
     << TAB(1) << "if ( ! found) {" << endl
     << TAB(2) << "BOOST_LOG_TRIVIAL(debug) << \"[TO CHECK] This XML component "
                  "was not found in FIX message\";"
     << endl
     << TAB(2) << "cout << \"\t ---> [\";" << endl
     << TAB(2) << "copy(xml_l.begin(), xml_l.end(), "
                  "ostream_iterator<string>(cout, \" \"));"
     << TAB(2) << "cout << \"]\" << endl << endl;" << endl
     << TAB(1) << "} // end if ! found" << endl
     << TAB(0) << "} // end for elt_lists" << endl;

  os << "}" << endl;
}

//-----------------------------------------------------------------------------

void generate_header(ostream &os, const fix_message_type &msg_type,
                     const shared_ptr<fix_dico_container> &dico,
                     const string &ns) {
  os << "#include <gtest/gtest.h>" << endl << endl;

  os << "#include \"converter/fixml2fix_converter.hxx\"" << endl
     << "#include \"util/fix_env.hxx\"" << endl
     << "#include \"tools/test_util.hxx\"" << endl
     << endl;

  const std::string lower_ns = boost::algorithm::to_lower_copy(ns);

  os << "#include <boost/log/trivial.hpp>" << endl
     << endl
     << "#include <quickfix/" << lower_ns << "/" + msg_type._name + ".h>"
     << endl
     << endl
     << "#include <list>" << endl
     << "#include <set>" << endl
     << "#include <string>" << endl
     << "#include <utility>" << endl
     << endl
     << "using namespace std;" << endl
     << "using namespace fix2xml;" << endl
     << endl;
}

//-----------------------------------------------------------------------------

void generate_message_test(const fix_message_type &msg_type,
                           const shared_ptr<fix_dico_container> &dico,
                           const shared_ptr<fixml_dico_container> &fixml_dico,
                           const string &ns, const string &fix_filename,
                           const string &xsd_schema) {
  const string filename = "generated/test_fix2xml_" + msg_type._name + ".cpp";
  BOOST_LOG_TRIVIAL(info) << "Generating file " << filename;
  ofstream ofs(filename.c_str());
  generate_header(ofs, msg_type, dico, ns);
  generate_test(ofs, msg_type, dico, fixml_dico, ns, fix_filename, xsd_schema);
  ofs.close();
} // end generate_message_test

//-----------------------------------------------------------------------------

int main(int argc, char *argv[]) {
  if (argc < 4)
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
    const string xsd_schema{argv[3]};
    ns = boost::algorithm::to_upper_copy(ns);
    fix_parser parser;
    if (!parser.parse(fix_filename)) {
      BOOST_LOG_TRIVIAL(error) << "Failed to parse " << fix_filename;
      return 1;
    }
    fixml_xsd_parser xsd_parser;
    if (!xsd_parser.parse(xsd_schema.c_str())) {
      BOOST_LOG_TRIVIAL(error) << "Failed to parse " << xsd_schema;
      return 1;
    }
    auto dico = parser.dico();
    auto fixml_dico = xsd_parser.dico();
    auto messages = dico->messages();
    auto &name_index = messages.get<0>();
    for (const auto msg_type : name_index) {
      generate_message_test(msg_type, dico, fixml_dico, ns, fix_filename,
                            xsd_schema);
    }
  }

  fix_env::terminate_xerces();
  BOOST_LOG_TRIVIAL(info) << "xerces environment terminated";

  return 0;
}
