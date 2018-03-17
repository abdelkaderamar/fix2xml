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

#include "fix_field_parser.hxx"

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

  fix_field_parser::fix_field_parser()
  {
    NAME_ATTR = XMLString::transcode("name");
    NUMBER_ATTR = XMLString::transcode("number");
    TYPE_ATTR = XMLString::transcode("type");
  } // end ctor

  //----------------------------------------------------------------------------

  fix_field_parser::~fix_field_parser()
  {
    XMLString::release(&NAME_ATTR);
    XMLString::release(&NUMBER_ATTR);
    XMLString::release(&TYPE_ATTR);
  }

  //----------------------------------------------------------------------------

  void fix_field_parser::parse(DOMElement * field_elt,
                               fix_field_type& field_type)
  {
    field_type._name = xml_string::to_string(field_elt->getAttribute(NAME_ATTR));
    field_type._type = xml_string::to_string(field_elt->getAttribute(TYPE_ATTR));
    field_type._tag = xml_string::to_string(field_elt->getAttribute(NUMBER_ATTR));
  }

  //----------------------------------------------------------------------------

}
