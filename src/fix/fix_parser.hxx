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

#include "fix_dico_container.hxx"
#include "fix_message_parser.hxx"
#include "fix_component_parser.hxx"
#include "fix_field_parser.hxx"

#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/framework/psvi/XSConstants.hpp>

#include <memory>

namespace XERCES_CPP_NAMESPACE
{
  class XercesDOMParser;
  class DOMElement;
}

namespace fix2xml
{
  class fix_parser
  {
  public:

    fix_parser();
    ~fix_parser();

    bool parse(const char *fix_dico_filename);

    std::shared_ptr<fix_dico_container> dico() { return _fix_dico; }

  protected:

    void parse_messages(XERCES_CPP_NAMESPACE::DOMElement *messages_elt);
    void parse_components(XERCES_CPP_NAMESPACE::DOMElement *components_elt);
    void parse_fields(XERCES_CPP_NAMESPACE::DOMElement *fields_elt);

    XERCES_CPP_NAMESPACE::XercesDOMParser *_parser;

    std::shared_ptr<fix_dico_container> _fix_dico;
    fix_message_parser _message_parser;
    fix_component_parser _component_parser;
    fix_field_parser _field_parser;
  private:
  };
};
