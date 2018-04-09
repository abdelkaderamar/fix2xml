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

#include "data/xml_element.hxx"
#include "fix/fix_dico_container.hxx"
#include "fix/fix_parser.hxx"
#include "fixml/fixml_dico_container.hxx"
#include "fixml/fixml_parser.hxx"

#include <quickfix/DataDictionary.h>

#include <list>
#include <memory>
#include <string>

namespace FIX {
class Message;
class FieldMap;
}

namespace fix2xml {

class fixml2fix_converter {
public:
  fixml2fix_converter(const std::string &fix_xml_filename,
                      const std::string &fixml_xsd_schema);

  bool init();

  bool parse_fixt_dico(const std::string& fixt_filename);

  const bool fix2fixml(const FIX::Message &fix_msg, std::string &xml_string);

  const bool fix2fixml(const FIX::Message &fix_msg, xml_element &fixml_elt);

  const bool fixml2fix(const std::string &xml_string, FIX::Message &fix_msg);

  const bool fixml2fix(const xml_element &fixml_elt, FIX::Message &fix_msg);

  bool set_msg_type(const FIX::Message &fix_msg, xml_element &fixml_elt,
                    fixml_type &fixml_msg_type);

  const std::shared_ptr<fixml_dico_container> &fixml_dico() const {
    return _fixml_dictionary;
  }

  const std::shared_ptr<fix_dico_container> &fix_dico() const {
    return _fix_dictionary;
  }

  const FIX::DataDictionary &quickfix_dico() const {
    return _quickfix_dictionary;
  }

protected:
  std::string _fix_xml_filename;
  std::string _fixml_xsd_schema;
  std::shared_ptr<fixml_dico_container> _fixml_dictionary;
  std::shared_ptr<fix_dico_container> _fix_dictionary;
  FIX::DataDictionary _quickfix_dictionary;
  fixml_parser _fixml_parser;

  void add_fixml_attrs_and_compos(const fixml_type &type,
                                  const FIX::FieldMap &fix_msg,
                                  xml_element &fixml_elt);

  void add_fixml_attributes(const fixml_type &type,
                            const FIX::FieldMap &fix_msg,
                            xml_element &fixml_elt);

  void add_fixml_attribute(const fixml_field_data &field_data,
                           const FIX::FieldMap &fix_msg,
                           xml_element &fixml_elt);

  void add_fixml_components(const fixml_type &type,
                            const FIX::FieldMap &fix_msg,
                            xml_element &fixml_elt);

  void add_fixml_component(const fixml_component_data &compo_data,
                           const FIX::FieldMap &fix_msg,
                           xml_element &fixml_elt);

  void add_fixml_group(const fixml_component_data &compo_data,
                       const FIX::FieldMap &fix_msg, xml_element &fixml_elt,
                       fixml_type &fixml_compo_type);

  void add_fix_fields_and_compos(const std::string &fix_msg_type,
                                 const fixml_type &type,
                                 const xml_element &fixml_elt,
                                 FIX::FieldMap &fix_msg,
                                 const FIX::DataDictionary &quickfix_dico);

  void add_fix_fields(const fixml_type &type, const xml_element &fixml_elt,
                      FIX::FieldMap &fix_msg);

  void add_fix_field(const fixml_field_data &fixml_field,
                     const xml_element &fixml_elt, FIX::FieldMap &fix_msg);

  void add_fix_components(const std::string &fix_msg_type,
                          const fixml_type &type, const xml_element &fixml_elt,
                          FIX::FieldMap &fix_msg,
                          const FIX::DataDictionary &quickfix_dico);

  void add_fix_component(const std::string &fix_msg_type,
                         const fixml_component_data &fixml_compo,
                         const xml_element &fixml_elt, FIX::FieldMap &fix_msg,
                         const FIX::DataDictionary &quickfix_dico);

  void add_fix_group(const std::string &fix_msg_type,
                     const fixml_component_data &fixml_compo,
                     const xml_element &fixml_elt, FIX::FieldMap &fix_msg,
                     const FIX::DataDictionary &quickfix_dico);

private:
  bool _initialized;
  fix_parser _fix_parser;
};
}
