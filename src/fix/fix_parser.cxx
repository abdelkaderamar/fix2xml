#include "fix_parser.hxx"

#include "util/xml_helper.hxx"
#include "util/xml_string.hxx"
#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOMNodeList.hpp>
#include <xercesc/dom/DOMElement.hpp>

#include <iostream>

namespace fix2xml
{
  using namespace std;
  XERCES_CPP_NAMESPACE_USE
  //----------------------------------------------------------------------------

  fix_parser::fix_parser() :
    _fix_dico { make_shared<fix_dico_container>()}
  {
    _parser = new XercesDOMParser();
  } // end ctor

  //----------------------------------------------------------------------------

  fix_parser::~fix_parser()
  {
    if (_parser != nullptr) delete _parser;
  } // end dtor

  //----------------------------------------------------------------------------

  //----------------------------------------------------------------------------

  bool fix_parser::parse(const char *fix_dico_filename)
  {
    try {
      _parser->parse(fix_dico_filename);
      DOMDocument *doc = _parser->getDocument();
      DOMElement  *root_elt = doc->getDocumentElement();
      std::string name = xml_string::to_string(root_elt->getTagName());
      list<DOMElement*> messages_elts = xml_helper::get_elements_by_tag(root_elt, "messages");
      list<DOMElement*> components_elts = xml_helper::get_elements_by_tag(root_elt, "components");
      list<DOMElement*> fields_elts = xml_helper::get_elements_by_tag(root_elt, "fields");

      for (DOMElement *messages_elt : messages_elts) parse_messages(messages_elt);
      for (DOMElement *components_elt : components_elts) parse_components(components_elt);
      for (DOMElement *fields_elt : fields_elts) parse_fields(fields_elt);
    }
    catch (...) {
      // TODO log error message
      return false;
    }
  } // end parse

  //----------------------------------------------------------------------------

  void fix_parser::parse_messages(DOMElement *messages_elt)
  {
    list<DOMElement*> childs = xml_helper::get_elements_by_tag(messages_elt, "message");
    for (DOMElement * one_message_elt : childs) {
      fix_message_type msg_type;
      _message_parser.parse(one_message_elt, msg_type);
      _fix_dico->add_message(msg_type);
    }
  }

  //----------------------------------------------------------------------------

  void fix_parser::parse_components(DOMElement *components_elt)
  {
    list<DOMElement*> childs = xml_helper::get_elements_by_tag(components_elt, "component");
    for (DOMElement * one_component_elt : childs) {
      fix_component_type component_type;
      list<fix_component_type> groups;
      _component_parser.parse(one_component_elt, component_type, groups);
      _fix_dico->add_component(component_type);
      for (const auto& g : groups) {
       _fix_dico->add_component(g);
      }
    }
  }

  //----------------------------------------------------------------------------

  void fix_parser::parse_fields(DOMElement *fields_elt)
  {
    list<DOMElement*> childs = xml_helper::get_elements_by_tag(fields_elt, "field");
    for (DOMElement * one_field_elt : childs) {
      fix_field_type field_type;
      _field_parser.parse(one_field_elt, field_type);
      _fix_dico->add_field(field_type);
    }
  }

  //----------------------------------------------------------------------------

}
