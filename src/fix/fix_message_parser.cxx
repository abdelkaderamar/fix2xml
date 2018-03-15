#include "fix_message_parser.hxx"

#include "util/xml_helper.hxx"
#include "util/xml_string.hxx"

#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOMNodeList.hpp>
#include <xercesc/dom/DOMElement.hpp>

namespace fix2xml
{
  using namespace std;
  XERCES_CPP_NAMESPACE_USE

  //----------------------------------------------------------------------------

  fix_message_parser::fix_message_parser()
  {
    NAME_ATTR = XMLString::transcode("name");
    MSGTYPE_ATTR = XMLString::transcode("msgtype");
    REQUIRED_ATTR = XMLString::transcode("required");
  } // end ctor

  //----------------------------------------------------------------------------

  fix_message_parser::~fix_message_parser()
  {
    XMLString::release(&NAME_ATTR);
    XMLString::release(&MSGTYPE_ATTR);
    XMLString::release(&REQUIRED_ATTR);
  }

  //----------------------------------------------------------------------------

  void fix_message_parser::parse(DOMElement * msg_elt,
                                 fix_message_type& msg_type)
  {
    msg_type._name = xml_string::to_string(msg_elt->getAttribute(NAME_ATTR));
    msg_type._msgtype = xml_string::to_string(msg_elt->getAttribute(MSGTYPE_ATTR));
    list<pair<string, DOMElement*>> child_elts = xml_helper::get_child_elements(msg_elt);
    for (auto& p : child_elts) {
      if (p.first == "component") parse_msg_component(p.second, msg_type);
      else if (p.first == "field") parse_msg_field(p.second, msg_type);
    }
  }

  //----------------------------------------------------------------------------

  void fix_message_parser::parse_msg_component(DOMElement *msg_compo_elt,
                                               fix_message_type& msg_type)
  {
    const std::string name = xml_string::to_string(msg_compo_elt->getAttribute(NAME_ATTR));
    msg_type.add_component(name);
  }

  //----------------------------------------------------------------------------

  void fix_message_parser::parse_msg_field(DOMElement *msg_field_elt,
                                           fix_message_type& msg_type)
  {
    const std::string name = xml_string::to_string(msg_field_elt->getAttribute(NAME_ATTR));
    msg_type.add_field(name);
  }

  //----------------------------------------------------------------------------

}
