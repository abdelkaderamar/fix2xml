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

#include "data/fix_types.hxx"

#include <xercesc/framework/psvi/XSConstants.hpp>
#include <xercesc/util/XercesVersion.hpp>

#include <list>

namespace XERCES_CPP_NAMESPACE {
class DOMElement;
}

namespace fix2xml {

class fix_component_parser {
public:
  fix_component_parser();
  ~fix_component_parser();

  void parse(XERCES_CPP_NAMESPACE::DOMElement *component_elt,
             fix_component_type &compo_type,
             std::list<fix_component_type> &groups,
             const std::string &parent_name);

  void
  parse_component_component(XERCES_CPP_NAMESPACE::DOMElement *compo_compo_elt,
                            fix_component_type &compo_type,
                            std::list<fix_component_type> &groups);

  void parse_component_group(XERCES_CPP_NAMESPACE::DOMElement *compo_group_elt,
                             fix_component_type &compo_type,
                             std::list<fix_component_type> &groups,
                             const std::string &parent_name);

  void parse_component_field(XERCES_CPP_NAMESPACE::DOMElement *compo_field_elt,
                             fix_component_type &compo_type);

  XMLCh *NAME_ATTR, *REQUIRED_ATTR;

}; // end fix_component_parser
}
