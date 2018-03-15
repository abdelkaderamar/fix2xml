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
