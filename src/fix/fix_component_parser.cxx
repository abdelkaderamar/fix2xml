#include "fix_component_parser.hxx"

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

  fix_component_parser::fix_component_parser()
  {
    NAME_ATTR = XMLString::transcode("name");
    REQUIRED_ATTR = XMLString::transcode("required");
  } // end ctor

  //----------------------------------------------------------------------------

  fix_component_parser::~fix_component_parser()
  {
    XMLString::release(&NAME_ATTR);
    XMLString::release(&REQUIRED_ATTR);
  }

  //----------------------------------------------------------------------------

  void fix_component_parser::parse(DOMElement * compo_elt,
                                   fix_component_type& compo_type,
                                   list<fix_component_type>& groups)
  {
    compo_type._name = xml_string::to_string(compo_elt->getAttribute(NAME_ATTR));
    list<pair<string, DOMElement*>> child_elts = xml_helper::get_child_elements(compo_elt);
    for (auto& p : child_elts) {
      if (p.first == "component") parse_component_component(p.second, compo_type, groups);
      else if (p.first == "group") parse_component_group(p.second, compo_type, groups);
      else if (p.first == "field") parse_component_field(p.second, compo_type);
    }
  }

  //----------------------------------------------------------------------------

  void fix_component_parser::parse_component_component(DOMElement *compo_compo_elt,
                                                       fix_component_type& compo_type,
                                                       list<fix_component_type>& groups)
  {
    const std::string name = xml_string::to_string(compo_compo_elt->getAttribute(NAME_ATTR));
    compo_type.add_component(name);
  }

  //----------------------------------------------------------------------------

  void fix_component_parser::parse_component_group(DOMElement *compo_group_elt,
                                                   fix_component_type& compo_type,
                                                   list<fix_component_type>& groups)
  {
    const std::string name = xml_string::to_string(compo_group_elt->getAttribute(NAME_ATTR));
    compo_type.add_component(name);

    // Add another type for the group
    fix_component_type group_type;
    group_type._name = name;
    parse(compo_group_elt, group_type, groups);
    groups.push_back(group_type);
  }

  //----------------------------------------------------------------------------

  void fix_component_parser::parse_component_field(DOMElement *compo_field_elt,
                                                   fix_component_type& compo_type)
  {
    const std::string name = xml_string::to_string(compo_field_elt->getAttribute(NAME_ATTR));
    compo_type.add_field(name);
  }

  //----------------------------------------------------------------------------

}
