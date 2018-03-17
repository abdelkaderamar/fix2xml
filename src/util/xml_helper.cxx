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

#include "xml_helper.hxx"

#include "util/xml_string.hxx"

#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/dom/DOMNodeList.hpp>

#include <iostream>

namespace fix2xml
{
  using namespace std;
  XERCES_CPP_NAMESPACE_USE

  //----------------------------------------------------------------------------

  list<pair<string, DOMElement*>>
  xml_helper::get_child_elements(const DOMElement *element)
  {
    list<pair<string, DOMElement*>> child_elts;

    DOMNodeList * child_nodes = element->getChildNodes();
    if (child_nodes == nullptr) return child_elts;

    for (size_t i=0; i<child_nodes->getLength(); ++i) {
      DOMNode *node = child_nodes->item(i);
      if (node->getNodeType() != DOMNode::NodeType::ELEMENT_NODE) continue;
      const string name = xml_string::to_string(node->getNodeName());
      child_elts.push_back(make_pair(name, (DOMElement*)node));
    }

    return child_elts;
  }

  //----------------------------------------------------------------------------

  list<DOMElement*>
  xml_helper::get_elements_by_tag(const DOMElement *element, const std::string& tag_name)
  {
    list<DOMElement*> child_elts;

    DOMNodeList * child_nodes = element->getChildNodes();
    if (child_nodes == nullptr) return child_elts;
    for (size_t i=0; i<child_nodes->getLength(); ++i) {
      DOMNode *node = child_nodes->item(i);
      if (node->getNodeType() != DOMNode::NodeType::ELEMENT_NODE) continue;

      xml_string name {node->getNodeName()};
      if (name == tag_name.c_str())
        child_elts.push_back((DOMElement*)node);
    }

    return child_elts;
  }

  //----------------------------------------------------------------------------

  list<DOMElement*>
  xml_helper::get_elements_by_tag(const DOMElement *element, const XMLCh *tag_name)
  {
    return get_elements_by_tag(element, xml_string::to_string(tag_name));
  }


  //----------------------------------------------------------------------------

}
