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

#include "fix_message_parser.hxx"

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

  fix_message_parser::fix_message_parser()
  {
    NAME_ATTR = XMLString::transcode("name");
    MSGTYPE_ATTR = XMLString::transcode("msgtype");
    REQUIRED_ATTR = XMLString::transcode("required");
  } // end ctor

  //----------------------------------------------------------------------------

  fix_message_parser::~fix_message_parser()
  {
    XMLString::release(&NAME_ATTR);
    XMLString::release(&MSGTYPE_ATTR);
    XMLString::release(&REQUIRED_ATTR);
  }

  //----------------------------------------------------------------------------

  void fix_message_parser::parse(DOMElement * msg_elt,
                                 fix_message_type& msg_type)
  {
    msg_type._name = xml_string::to_string(msg_elt->getAttribute(NAME_ATTR));
    msg_type._msgtype = xml_string::to_string(msg_elt->getAttribute(MSGTYPE_ATTR));
    list<pair<string, DOMElement*>> child_elts = xml_helper::get_child_elements(msg_elt);
    for (auto& p : child_elts) {
      if (p.first == "component") parse_msg_component(p.second, msg_type);
      else if (p.first == "field") parse_msg_field(p.second, msg_type);
    }
  }

  //----------------------------------------------------------------------------

  void fix_message_parser::parse_msg_component(DOMElement *msg_compo_elt,
                                               fix_message_type& msg_type)
  {
    const std::string name = xml_string::to_string(msg_compo_elt->getAttribute(NAME_ATTR));
    msg_type.add_component(name);
  }

  //----------------------------------------------------------------------------

  void fix_message_parser::parse_msg_field(DOMElement *msg_field_elt,
                                           fix_message_type& msg_type)
  {
    const std::string name = xml_string::to_string(msg_field_elt->getAttribute(NAME_ATTR));
    msg_type.add_field(name);
  }

  //----------------------------------------------------------------------------

}
