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

#include "data/fixml_type.hxx"

#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/framework/psvi/XSConstants.hpp>

namespace XERCES_CPP_NAMESPACE
{
  class XSTypeDefinition;
  class XSComplexTypeDefinition;
  class XSParticle;
}

namespace fix2xml
{
  class xsd_typedefinition_parser
  {
  public:
    static bool parse_type_definition(XERCES_CPP_NAMESPACE::XSTypeDefinition* xs_type_def,
                                      fixml_type& type);

  protected:
    static bool parse_complex_type(XERCES_CPP_NAMESPACE::XSComplexTypeDefinition* xs_type_def,
                                  fixml_type& type);

    static bool parse_attributes(XERCES_CPP_NAMESPACE::XSComplexTypeDefinition* xs_type_def,
                                 fixml_type& type,
                                 XERCES_CPP_NAMESPACE::XSAttributeUseList *attr_list);

    static bool parse_components(XERCES_CPP_NAMESPACE::XSComplexTypeDefinition* xs_type_def,
                                 fixml_type& type,
                                 XERCES_CPP_NAMESPACE::XSParticle *particle);

  }; // end xsd_typedefinition_parser

} // end namespace fix2xml
