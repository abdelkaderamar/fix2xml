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

#include "xsd_annotation_parser.hxx"

#include "data/fixml_type.hxx"
#include "util/xml_helper.hxx"

#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/dom/DOMNodeList.hpp>
#include <xercesc/framework/MemBufInputSource.hpp>
#include <xercesc/parsers/XercesDOMParser.hpp>

#include <iostream>

namespace fix2xml {
using namespace std;
XERCES_CPP_NAMESPACE_USE
//----------------------------------------------------------------------------
xsd_annotation_parser::xsd_annotation_parser() {
  APPINFO_ELT = XMLString::transcode("xs:appinfo");
  XREF_ELT = XMLString::transcode("fm:Xref");
  PROTOCOL_ATTR = XMLString::transcode("Protocol");
  NAME_ATTR = XMLString::transcode("name");
  COMPONENT_TYPE_ATTR = XMLString::transcode("ComponentType");
  TAG_ATTR = XMLString::transcode("Tag");

  _parser = new XercesDOMParser();
} // end ctor

//----------------------------------------------------------------------------

xsd_annotation_parser::~xsd_annotation_parser() {
  XMLString::release(&APPINFO_ELT);
  XMLString::release(&XREF_ELT);
  XMLString::release(&PROTOCOL_ATTR);
  XMLString::release(&NAME_ATTR);
  XMLString::release(&COMPONENT_TYPE_ATTR);
  XMLString::release(&TAG_ATTR);
  delete _parser;
} // end dtor

//----------------------------------------------------------------------------

bool xsd_annotation_parser::parse_type_annotation(const string &annotation,
                                                  fixml_type &type) {
  try {
    MemBufInputSource input_source((const XMLByte *)annotation.c_str(),
                                   annotation.size(), "fakeId");
    _parser->parse(input_source);

    DOMDocument *doc = _parser->getDocument();
    if (doc == nullptr) {
      cerr << "@ERROR - Failed to parsea annotation " << endl
           << annotation << endl
           << "@@@@" << endl;
      return false;
    }

    DOMElement *root = doc->getDocumentElement();
    if (root == nullptr) {
      cerr << "@ERROR - Failed to parsea annotation " << endl
           << annotation << endl
           << "@@@@" << endl;
      return true;
    }

    list<DOMElement *> app_info_elts =
        xml_helper::get_elements_by_tag(root, APPINFO_ELT);
    for (DOMElement *elt : app_info_elts) {
      std::list<DOMElement *> xref_elts =
          xml_helper::get_elements_by_tag(elt, XREF_ELT);
      parse_xref_elements(xref_elts, type);
    }
  } catch (...) {
    // TODO : log
  }
  return true;
}

//----------------------------------------------------------------------------

void xsd_annotation_parser::parse_xref_elements(
    const list<DOMElement *> &xref_elts, fixml_type &type) {
  for (DOMElement *xref_elt : xref_elts) {
    const XMLCh *protocol_xmlch = xref_elt->getAttribute(PROTOCOL_ATTR);
    if (protocol_xmlch == nullptr)
      continue;

    const string protocol = xml_string::to_string(protocol_xmlch);
    if (protocol != "FIX")
      continue;

    const string name =
        xml_string::to_string(xref_elt->getAttribute(NAME_ATTR));
    const string component_type =
        xml_string::to_string(xref_elt->getAttribute(COMPONENT_TYPE_ATTR));
    const string tag = xml_string::to_string(xref_elt->getAttribute(TAG_ATTR));
    type._fix_data = fixml_fix_data{name, component_type, tag};
  }
} // end parse_xref_elements

//----------------------------------------------------------------------------
}
