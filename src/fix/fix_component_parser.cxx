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
