#include "test_generator_fix2xml.hxx"

#include "field_helper.hxx"
#include "generation_util.hxx"

#include <boost/algorithm/string.hpp>
#include <boost/log/trivial.hpp>

using namespace std;
using namespace fix2xml;

//-----------------------------------------------------------------------------

void test_generator_fix2xml::generate_group(
    ostream &os, const fix_component_type &compo_type,
    const fix_component_type &group_compo_type,
    const shared_ptr<fix_dico_container> &dico,
    const shared_ptr<fixml_dico_container> &fixml_dico, const string &field_map,
    const string &parent_type, const int level, const string var_level,
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

//-----------------------------------------------------------------------------

void test_generator_fix2xml::generate_component(
    ostream &os, const fix_component_type &compo_type,
    const shared_ptr<fix_dico_container> &dico,
    const shared_ptr<fixml_dico_container> &fixml_dico, const string &field_map,
    const string &parent_type, const int level, const string var_level,
    const string &parent_name) {
  os << TAB(level) << "// " << compo_type._name << endl;
  string fullname = parent_name + "." + compo_type._short_name;
  const string compo_var_name =
      field_helper::generate_var_name(compo_type._name);
  string attr_map = field_map;
  if (compo_type._name == "header")
    attr_map += ".getHeader()";
  if (compo_type._fields.size() > 0) {
    os << TAB(level) << "multiset<string> " << compo_var_name << ";" << endl;
    for (const auto &field_name : compo_type._fields) {
      string value = field_helper::generate_field(os, field_name, attr_map,
                                                  dico, level, compo_var_name);
      if (!value.empty() && fixml_dico->has_fix_tag(field_name)) {
      } else {
        BOOST_LOG_TRIVIAL(warning) << "Not adding field " << field_name
                                   << " with value [" << value << "]";
      }
    }
    os << TAB(level) << "all_values.push_back(" << compo_var_name << ");"
       << endl;
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
      generate_group(os, compo_type, child_compo_type, dico, fixml_dico,
                     field_map, parent_type, level, var_level, fullname);
    } else {
      generate_component(os, child_compo_type, dico, fixml_dico, field_map,
                         parent_type, level, var_level, fullname);
    }
  }
}

//-----------------------------------------------------------------------------

void test_generator_fix2xml::generate_test(
    ostream &os, const fix_message_type &msg_type,
    const shared_ptr<fix_dico_container> &dico,
    const shared_ptr<fixml_dico_container> &fixml_dico, const string &ns,
    const string &fix_filename, const string &fixt_filename,
    const string &xsd_schema) {
  string msg_type_name = ns + "::" + msg_type._name;
  BOOST_LOG_TRIVIAL(debug) << ns << "@" << msg_type._name;
  if (is_fixt_message(msg_type._name, ns))
    msg_type_name = "FIXT11::" + msg_type._name;
  os << "TEST ( " << msg_type._name << ", set_fields)\n"
     << "{" << endl
     << endl
     << TAB(0) << "fixml2fix_converter converter {\"" << fix_filename
     << "\", \"" << xsd_schema << "\"};" << endl
     << TAB(0) << "auto& fixml_dict = converter.fixml_dico();" << endl
     << TAB(0) << "ASSERT_TRUE(converter.init());" << endl
     << TAB(0) << "ASSERT_TRUE(converter.parse_fixt_dico(\"" << fixt_filename
     << "\"));" << endl
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
    else {
      BOOST_LOG_TRIVIAL(warning) << "Cannot find " << compo_name;
    }
  }

  // FIX2FIXML code generation
  os << endl
     << TAB(0) << "xml_element elt;" << endl
     << TAB(0) << "converter.fix2fixml(msg, elt);" << endl
     << TAB(0) << "BOOST_LOG_TRIVIAL(debug) << \"The resulting XML is\";"
     << endl
     << TAB(0)
     << "cout << \"////////////////////////////////////////////\" << endl;"
     << endl
     << TAB(0) << "cout << elt.to_string() << endl;" << endl
     << TAB(0)
     << "cout << \"////////////////////////////////////////////\" << endl << "
        "endl;"
     << endl
     << endl
     << TAB(0)
     << "BOOST_LOG_TRIVIAL(debug) << \"Quickfix XML representation is\";"
     << endl
     << TAB(0)
     << "cout << \"////////////////////////////////////////////\" << endl;"
     << endl
     << TAB(0) << "cout << msg.toXML() << endl;" << endl
     << TAB(0)
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
     << TAB(1)
     << "copy(l.begin(), l.end(), ostream_iterator<string>(cout, \" \"));"
     << endl
     << TAB(1) << "cout << \"]\" << endl;" << endl
     << TAB(0) << "}" << endl
     << TAB(0) << "BOOST_LOG_TRIVIAL(debug) << \"All XML components\";" << endl
     << TAB(0) << "for (const auto& l : elt_lists) {" << endl
     << TAB(1) << "cout << \"\t[\";" << endl
     << TAB(1)
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
