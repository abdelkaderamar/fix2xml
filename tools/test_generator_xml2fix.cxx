#include "test_generator_xml2fix.hxx"

#include "field_helper.hxx"
#include "generation_util.hxx"

#include <boost/log/trivial.hpp>

using namespace std;
using namespace fix2xml;

//-----------------------------------------------------------------------------
void test_generator_xml2fix::generate_component(
    std::ostream &os, const fix2xml::fixml_component_data &compo,
    const int level, const string &parent_elt_name) {
  std::shared_ptr<fixml_dico_container> dico = _xsd_parser.dico();
  fixml_type type;
  if (dico->get_fieldtype_by_fixml_name(compo._type, type)) {
    BOOST_LOG_TRIVIAL(debug) << "# Processing Component " << compo._name
                             << " / " << type._name << " / " << type._base_type;
  } else {
    BOOST_LOG_TRIVIAL(error) << "# Type " << compo._type
                             << " not found => component " << compo._name
                             << " ignored";
    return;
  }

  // os << TAB(0) << "xml_element elt {\"" << compo._name << "\" };" << endl
  const string elt_name = field_helper::generate_var_name(compo._name);
  os << TAB(level) << "xml_element " << elt_name << "{\"" + compo._name + "\"};"
     << endl;
  if (type.fields().size() > 0) {
    const string elt_set_value = elt_name + "_set";
    os << TAB(level) << "multiset<string> " << elt_set_value << ";" << endl;
    for (const auto &field : type.fields()) {
      string value = field_helper::generate_attribute(os, field, elt_name, dico,
                                                      level, elt_set_value);
    }
    os << TAB(level) << "all_values.push_back(" << elt_set_value << ");"
       << endl;
    os << TAB(level) << "all_compo_names.insert(\"" << elt_set_value << "\");"
       << endl
       << endl;
  }
  for (const auto &compo : type.components()) {
    os << TAB(level) << "{" << endl;
    generate_component(os, compo, level + 1, elt_name);
    os << TAB(level) << "}" << endl;
  }
  os << TAB(level) << parent_elt_name << ".add_element(" << elt_name << ");"
     << endl;
}
void test_generator_xml2fix::generate_test(
    ostream &os, const fix_message_type &msg_type,
    const shared_ptr<fix_dico_container> &dico,
    const shared_ptr<fixml_dico_container> &fixml_dico, const string &ns,
    const string &fix_filename, const string &fixt_filename,
    const string &xsd_schema) {
  fixml_type xml_type;
  string xml_name;
  if (!fixml_dico->get_message_type(msg_type._name, xml_type, xml_name)) {
    BOOST_LOG_TRIVIAL(error) << "Cannot find the FIXML type for message "
                             << msg_type._name;
    return;
  }
  BOOST_LOG_TRIVIAL(debug) << "---> FIXML type is " << xml_type._name << " / "
                           << xml_name;

  os << "TEST ( " << xml_type._name << ", set_fields)\n"
     << "{" << endl
     << endl
     << TAB(0) << "fixml2fix_converter converter {\"" << fix_filename
     << "\", \"" << xsd_schema << "\"};" << endl
     << TAB(0) << "auto& fixml_dict = converter.fixml_dico();" << endl
     << TAB(0) << "auto &quickfix_dico = converter.quickfix_dico();" << endl
     << TAB(0) << "ASSERT_TRUE(converter.init());" << endl
     << endl
     << TAB(0) << "xml_element elt {\"" << xml_name << "\" };" << endl
     << endl
     << TAB(0) << "list<multiset<string>> all_values;" << endl
     << TAB(0) << "multiset<string> all_compo_names;" << endl;
  const string elt_var_name = field_helper::generate_var_name(xml_type._name);
  if (xml_type.fields().size() > 0) {
    os << TAB(0) << "multiset<string> " << elt_var_name << ";" << endl;
    for (const auto &field : xml_type.fields()) {
      string value = field_helper::generate_attribute(
          os, field, "elt", fixml_dico, 0, elt_var_name);
    }
    os << TAB(0) << "all_values.push_back(" << elt_var_name << ");" << endl;
    os << TAB(0) << "all_compo_names.insert(\"" << xml_type._name << "\");"
       << endl
       << endl;
  }
  for (const auto &compo : xml_type.components()) {
    int count = 1;
    if (compo.is_group()) {
      count = 1 + rand() % 3;
    }
    for (int i = 0; i < count; ++i) {
      os << TAB(0) << "{ // " << compo._name << endl;
      generate_component(os, compo, 1, "elt");
      os << TAB(0) << "} // end " << compo._name << endl;
    }
  }
  os << TAB(0)
     << "cout << \"////////////////////////////////////////////\" << endl;"
     << endl
     << TAB(0) << "cout << elt.to_string() << endl;" << endl
     << TAB(0)
     << "cout << \"////////////////////////////////////////////\" << endl << "
        "endl;"
     << endl
     << endl;
  os << TAB(0) << "FIX::Message fix_msg;" << endl
     << TAB(0) << "ASSERT_TRUE(converter.fixml2fix(elt, fix_msg));" << endl
     << endl;

  os << TAB(0) << "cout << endl << "
                  "\"////////////////////////////////////////////\" << endl;"
     << endl
     << TAB(0) << "cout << fix_msg.toXML() << endl;" << endl
     << TAB(0) << "cout << \"////////////////////////////////////////////\" << "
                  "endl << endl;"
     << endl
     << endl

     << TAB(0) << "cout << endl << "
                  "\"////////////////////////////////////////////\" << endl;"
     << endl
     << TAB(0) << "multiset<string> fix_s;" << endl
     << TAB(0) << "list<multiset<string>> fix_ls;" << endl
     << TAB(0) << "to_list(fix_msg, quickfix_dico, fix_s, fix_ls);" << endl
     << TAB(0) << "fix_ls.push_back(fix_s);" << endl
     << endl

     << TAB(0) << "BOOST_LOG_TRIVIAL(debug) << \"All FIX components (\" << "
                  "fix_ls.size() << \")\";"
     << endl
     << TAB(0) << "for (const auto &l : fix_ls) {" << endl
     << TAB(1) << "cout << \"	[\";" << endl
     << TAB(1)
     << "copy(l.begin(), l.end(), ostream_iterator<string>(cout, \" \"));"
     << endl
     << TAB(1) << "cout << \"]\" << endl;" << endl
     << TAB(0) << "}" << endl
     << endl

     << TAB(0) << "cout << endl << "
                  "\"////////////////////////////////////////////\" << endl;"
     << endl
     << TAB(0) << "multiset<string> xml_s;" << endl
     << TAB(0) << "list<multiset<string>> xml_ls;" << endl
     << TAB(0) << "elt_to_list(elt, fixml_dict, xml_s, xml_ls);" << endl
     << TAB(0) << "xml_ls.push_back(xml_s);" << endl

     << TAB(0) << "BOOST_LOG_TRIVIAL(debug) << \"All XML components (\" << "
                  "xml_ls.size() << \")\";"
     << endl
     << TAB(0) << "for (const auto &l : xml_ls) {" << endl
     << TAB(1) << "cout << \"	[\";" << endl
     << TAB(1)
     << "copy(l.begin(), l.end(), ostream_iterator<string>(cout, \" \"));"
     << endl
     << TAB(1) << "cout << \"]\" << endl;" << endl
     << TAB(0) << "}" << endl
     << endl

     << TAB(0) << "for (const auto &fix_l : fix_ls) {" << endl
     << TAB(1) << "bool found = false;" << endl
     << TAB(1) << "for (const auto &xml_l : xml_ls) {" << endl
     << TAB(2) << "if (includes(xml_l.begin(), xml_l.end(), fix_l.begin(), "
                  "fix_l.end())) {"
     << endl
     << TAB(3) << "found = true;" << endl
     << TAB(3) << "break;" << endl
     << TAB(2) << "} // end if includes" << endl
     << TAB(1) << "}   // end for all_values" << endl
     << TAB(1) << "EXPECT_TRUE(found);" << endl
     << TAB(1) << "if (!found) {" << endl
     << TAB(2) << "BOOST_LOG_TRIVIAL(debug)" << endl
     << TAB(3)
     << "<< \"[TO CHECK] This FIX component was not found in XML message\";"
     << endl
     << TAB(2) << "cout << \"	 ---> [\";" << endl
     << TAB(2) << "copy(fix_l.begin(), fix_l.end(), "
                  "ostream_iterator<string>(cout, \" \"));"
     << endl
     << TAB(2) << "cout << \"]\" << endl << endl;" << endl
     << TAB(1) << "} // end if ! found" << endl
     << TAB(0) << "}   // end for elt_lists" << endl;

  os << "}" << endl;

  BOOST_LOG_TRIVIAL(debug) << endl;
}

//-----------------------------------------------------------------------------
