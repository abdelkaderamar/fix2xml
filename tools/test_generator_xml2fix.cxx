#include "test_generator_xml2fix.hxx"

#include "field_helper.hxx"
#include "generation_util.hxx"

#include <boost/log/trivial.hpp>

using namespace std;
using namespace fix2xml;

//-----------------------------------------------------------------------------

void test_generator_xml2fix::generate_test(
    ostream &os, const fix_message_type &msg_type,
    const shared_ptr<fix_dico_container> &dico,
    const shared_ptr<fixml_dico_container> &fixml_dico, const string &ns,
    const string &fix_filename, const string &xsd_schema) {
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
     << TAB(0) << "ASSERT_TRUE(converter.init());" << endl
     << endl
     << TAB(0) << "xml_element elt {\"" << xml_name << "\" };" << endl
     << endl
     << TAB(0) << "list<multiset<string>> all_values;" << endl
     << TAB(0) << "multiset<string> all_compo_names;" << endl;
  if (xml_type.fields().size() > 0) {
    const string elt_var_name = field_helper::generate_var_name(xml_type._name);
    os << TAB(0) << "multiset<string> " << elt_var_name << ";" << endl;
    for (const auto &field : xml_type.fields()) {
      string value = field_helper::generate_attribute(os, field, fixml_dico, 0,
                                                      elt_var_name);
    }
    os << TAB(0) << "all_values.push_back(" << elt_var_name << ");" << endl;
    os << TAB(0) << "all_compo_names.insert(\"" << xml_type._name << "\");"
       << endl
       << endl;
  }
  for (const auto &compo : xml_type.components()) {
  }
  os << TAB(0) << "cout << \"////////////////////////////////////////////\" << endl;"
     << endl
     << TAB(0) << "cout << elt.to_string() << endl;" << endl
     << TAB(0) << "cout << \"////////////////////////////////////////////\" << endl << "
        "endl;"
     << endl
     << endl;

  os << "}" << endl;

  BOOST_LOG_TRIVIAL(debug) << endl;
}

//-----------------------------------------------------------------------------
