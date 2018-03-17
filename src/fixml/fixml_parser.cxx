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
