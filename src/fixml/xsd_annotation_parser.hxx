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

#pragma once

#include "util/xml_string.hxx"

#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/framework/psvi/XSConstants.hpp>

#include <list>
#include <string>

namespace XERCES_CPP_NAMESPACE
{
  class XercesDOMParser;
  class DOMElement;
}

namespace fix2xml
{
  class fixml_type;

  class xsd_annotation_parser
  {
  public:
    xsd_annotation_parser();
    virtual ~xsd_annotation_parser();

    bool parse_type_annotation(const std::string& annotation,
                               fixml_type& type);

    XMLCh *APPINFO_ELT, *XREF_ELT,
      *PROTOCOL_ATTR, *NAME_ATTR, *COMPONENT_TYPE_ATTR, *TAG_ATTR;

  protected:

    void parse_xref_elements(const std::list<XERCES_CPP_NAMESPACE::DOMElement*>& xref_elts,
                            fixml_type& type);

    XERCES_CPP_NAMESPACE::XercesDOMParser *_parser;

  }; // end xsd_annotation_parser

}
