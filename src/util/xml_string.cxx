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

#include "xml_string.hxx"

#include <xercesc/util/XMLString.hpp>

#include <string.h>

namespace fix2xml
{
  XERCES_CPP_NAMESPACE_USE
  using namespace std;

  //----------------------------------------------------------------------------

  xml_string::xml_string() : _str(nullptr)
  {
  }

  //----------------------------------------------------------------------------

  xml_string::xml_string(const XMLCh * xmlch)
  {
    _str = XMLString::transcode(xmlch);
  }

  //----------------------------------------------------------------------------

  xml_string::~xml_string()
  {
    if (_str != nullptr)
      XMLString::release(&_str);
  }

  //----------------------------------------------------------------------------

  string xml_string::to_string() const
  {
    if (_str == nullptr) return string();
    return _str;
  }

  //----------------------------------------------------------------------------

  string xml_string::to_string(const XMLCh *xmlch)
  {
    char *ch = XMLString::transcode(xmlch);
    string str(ch);
    XMLString::release(&ch);
    return str;
  }

  //----------------------------------------------------------------------------

  xml_string::operator const char*() const
  {
    return _str;
  }

  //----------------------------------------------------------------------------
  xml_string& xml_string::operator = (const XMLCh *xmlch)
  {
    if (_str != nullptr) XMLString::release(&_str);

    _str = XMLString::transcode(xmlch);
    return *this;
  }

  //----------------------------------------------------------------------------

  bool xml_string::operator == (const char *str) const
  {
    return strcmp(_str, str) == 0;
  }

  //----------------------------------------------------------------------------
}
