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

#include "fix_parser.hxx"

#include "util/xml_helper.hxx"
#include "util/xml_string.hxx"

#include <boost/log/trivial.hpp>

#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/dom/DOMNodeList.hpp>
#include <xercesc/parsers/XercesDOMParser.hpp>

#include <iostream>

namespace fix2xml {
using namespace std;
XERCES_CPP_NAMESPACE_USE
//----------------------------------------------------------------------------

fix_parser::fix_parser() : _fix_dico{make_shared<fix_dico_container>()} {
  _parser = new XercesDOMParser();
} // end ctor

//----------------------------------------------------------------------------

fix_parser::~fix_parser() {
  if (_parser != nullptr)
    delete _parser;
} // end dtor

//----------------------------------------------------------------------------

bool fix_parser::parse(const char *fix_dico_filename) {
  return parse(fix_dico_filename, true, true, true);
}

//----------------------------------------------------------------------------

bool fix_parser::parse(const char *fix_dico_filename, const bool messages_parsing,
                       const bool components_parsing, const bool fields_parsing) {
  try {
    _parser->parse(fix_dico_filename);
    DOMDocument *doc = _parser->getDocument();
    DOMElement *root_elt = doc->getDocumentElement();
    std::string name = xml_string::to_string(root_elt->getTagName());

    if (messages_parsing) {
      list<DOMElement *> messages_elts =
          xml_helper::get_elements_by_tag(root_elt, "messages");
      for (DOMElement *messages_elt : messages_elts)
        parse_messages(messages_elt);
    }
    if (components_parsing) {
      list<DOMElement *> components_elts =
          xml_helper::get_elements_by_tag(root_elt, "components");
      for (DOMElement *components_elt : components_elts)
        parse_components(components_elt);
    }
    if (fields_parsing) {
      list<DOMElement *> fields_elts =
          xml_helper::get_elements_by_tag(root_elt, "fields");
      for (DOMElement *fields_elt : fields_elts)
        parse_fields(fields_elt);
    }

    if (components_parsing) {
      list<DOMElement *> header_elts =
          xml_helper::get_elements_by_tag(root_elt, "header");

      // Header special processing
      // There is only once header
      for (DOMElement *header_elt : header_elts) {
        fix_component_type component_type;
        component_type._name = "header";
        component_type._short_name = "header";
        list<pair<string, DOMElement *>> child_elts =
            xml_helper::get_child_elements(header_elt);
        for (auto &p : child_elts) {
          if (p.first == "field")
            _component_parser.parse_component_field(p.second, component_type);
        }
        _fix_dico->add_component(component_type);
      }
    }
  } catch (const exception &e) {
    BOOST_LOG_TRIVIAL(error) << "Exception " << e.what() << " when parsing"
                             << fix_dico_filename;
  } catch (...) {
    // TODO log error message
    BOOST_LOG_TRIVIAL(error) << "Exception when parsing " << fix_dico_filename;
    return false;
  }
  return true;
} // end parse

//----------------------------------------------------------------------------

void fix_parser::parse_messages(DOMElement *messages_elt) {
  list<DOMElement *> childs =
      xml_helper::get_elements_by_tag(messages_elt, "message");
  for (DOMElement *one_message_elt : childs) {
    fix_message_type msg_type;
    _message_parser.parse(one_message_elt, msg_type);
    _fix_dico->add_message(msg_type);
  }
}

//----------------------------------------------------------------------------

void fix_parser::parse_components(DOMElement *components_elt) {
  list<DOMElement *> childs =
      xml_helper::get_elements_by_tag(components_elt, "component");
  for (DOMElement *one_component_elt : childs) {
    fix_component_type component_type;
    list<fix_component_type> groups;
    _component_parser.parse(one_component_elt, component_type, groups, "");
    _fix_dico->add_component(component_type);
    for (const auto &g : groups) {
      _fix_dico->add_component(g);
    }
  }
}

//----------------------------------------------------------------------------

void fix_parser::parse_fields(DOMElement *fields_elt) {
  list<DOMElement *> childs =
      xml_helper::get_elements_by_tag(fields_elt, "field");
  for (DOMElement *one_field_elt : childs) {
    fix_field_type field_type;
    _field_parser.parse(one_field_elt, field_type);
    _fix_dico->add_field(field_type);
  }
}

//----------------------------------------------------------------------------
}
