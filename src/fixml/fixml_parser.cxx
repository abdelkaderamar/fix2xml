#include "fixml_parser.hxx"

#include "util/xml_string.hxx"
#include "util/xml_helper.hxx"

#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/framework/MemBufInputSource.hpp>
#include <xercesc/dom/DOMNodeList.hpp>
#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/dom/DOMAttr.hpp>
#include <xercesc/dom/DOMNamedNodeMap.hpp>

namespace fix2xml
{
  using namespace std;
  XERCES_CPP_NAMESPACE_USE
  //----------------------------------------------------------------------------

  fixml_parser::fixml_parser()
  {
    _parser = new XercesDOMParser();
  }

  //----------------------------------------------------------------------------

  bool fixml_parser::to_xml_element(const string& str, xml_element& elt)
  {
    try {
      MemBufInputSource input_source((const XMLByte*)str.c_str(),
                                     str.size(), "fakeId");
      _parser->parse(input_source);

      DOMDocument *doc = _parser->getDocument();
      if (doc == nullptr) { return false; }

      DOMElement *root = doc->getDocumentElement();
      if (root == nullptr) { return true; }

      parse(root, elt);
    }
    catch (...) {
      // TODO : log
    }

    return true;
  }

  void fixml_parser::parse(DOMElement *dom_elt, xml_element& elt)
  {
    elt.set_name(xml_string::to_string(dom_elt->getTagName()));
    DOMNamedNodeMap * attributes = dom_elt->getAttributes();
    for (size_t i=0; i<attributes->getLength(); ++i) {
      DOMAttr *attr = (DOMAttr*)attributes->item(i);
      elt.add_attribute(xml_string::to_string(attr->getName()),
                        xml_string::to_string(attr->getValue()));
    }
    std::list<pair<string, DOMElement*>> dom_childs = xml_helper::get_child_elements(dom_elt);
    for (pair<string, DOMElement*>& dom_child : dom_childs) {
      xml_element child_elt;
      parse(dom_child.second, child_elt);
      elt.add_element(child_elt);
    }

  }
}
