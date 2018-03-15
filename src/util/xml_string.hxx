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

#include <xercesc/util/Xerces_autoconf_config.hpp>

#include <string>

namespace fix2xml
{
  class xml_string
  {
  public:
    xml_string();
    xml_string(const XMLCh *xmlch);
    ~xml_string();

    operator const char * () const;

    std::string to_string() const;

    static std::string to_string(const XMLCh *xmlch);

    xml_string& operator = (const XMLCh *xmlch);

    bool operator == (const char* str) const;

  protected:

  private:
    char * _str;
  }; // end xml_string

} // end namespace fix2xml
