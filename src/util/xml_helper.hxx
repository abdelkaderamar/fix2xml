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

#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/framework/psvi/XSConstants.hpp>

#include <list>
#include <string>
#include <utility>

namespace XERCES_CPP_NAMESPACE
{
  class XercesDOMParser;
  class DOMElement;
}


namespace fix2xml
{

  class xml_helper
  {
  public:
    static std::list<std::pair<std::string, XERCES_CPP_NAMESPACE::DOMElement*>>
    get_child_elements(const XERCES_CPP_NAMESPACE::DOMElement *elt);

    static std::list<XERCES_CPP_NAMESPACE::DOMElement*>
    get_elements_by_tag(const XERCES_CPP_NAMESPACE::DOMElement *elt,
                        const std::string& tag_name);

    static std::list<XERCES_CPP_NAMESPACE::DOMElement*>
    get_elements_by_tag(const XERCES_CPP_NAMESPACE::DOMElement *elt,
                        const XMLCh *tag_name);

  }; // end xml_helper

}
