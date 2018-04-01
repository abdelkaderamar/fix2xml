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

#include "fixml2fix_converter.hxx"

#include "fix/fix_parser.hxx"
#include "fixml/fixml_xsd_parser.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/Message.h>

namespace fix2xml {
using namespace std;
using namespace FIX;
//----------------------------------------------------------------------------

fixml2fix_converter::fixml2fix_converter(const string &fix_xml_filename,
                                         const string &fixml_xsd_schema)
    : _fix_xml_filename(fix_xml_filename), _fixml_xsd_schema(fixml_xsd_schema),
      _fixml_dictionary(), _fix_dictionary(), _quickfix_dictionary(),
      _fixml_parser(), _initialized(false) {}

//----------------------------------------------------------------------------

bool fixml2fix_converter::init() {
  fix_parser _fix_parser;
  bool fix_initialized = _fix_parser.parse(_fix_xml_filename.c_str());
  if (fix_initialized)
    _fix_dictionary = _fix_parser.dico();

  fixml_xsd_parser _fixml_parser;
  bool fixml_initialized = _fixml_parser.parse(_fixml_xsd_schema.c_str());
  if (fixml_initialized)
    _fixml_dictionary = _fixml_parser.dico();

  _quickfix_dictionary.readFromURL(_fix_xml_filename.c_str());

  _initialized = fix_initialized && fixml_initialized;

  return _initialized;
}

//----------------------------------------------------------------------------

const bool fixml2fix_converter::fix2fixml(const Message &fix_msg,
                                          std::string &xml_string) {
  xml_element fixml_elt;
  bool result = fix2fixml(fix_msg, fixml_elt);
  if (result)
    xml_string = fixml_elt.to_string();
  return result;
}

//----------------------------------------------------------------------------

const bool fixml2fix_converter::fix2fixml(const Message &fix_msg,
                                          xml_element &fixml_elt) {
  fixml_type fixml_msg_type;
  if (!set_msg_type(fix_msg, fixml_elt, fixml_msg_type))
    return false;

  add_fixml_attributes(fixml_msg_type, fix_msg, fixml_elt);
  add_fixml_components(fixml_msg_type, fix_msg, fixml_elt);
  return true;
}

//----------------------------------------------------------------------------

bool fixml2fix_converter::set_msg_type(const Message &fix_msg,
                                       xml_element &fixml_elt,
                                       fixml_type &fixml_msg_type) {
  MsgType msgtype_field;
  if (!fix_msg.getHeader().getFieldIfSet(msgtype_field)) {
    BOOST_LOG_TRIVIAL(error) << "FIX message doesn't contain message type "
                             << "[MsgType field not set in the header]";
    return false;
  }
  fix_message_type fix_msg_type;
  if (!_fix_dictionary->get_fix_message_by_type(msgtype_field.getString(),
                                                fix_msg_type)) {
    return false;
  }
  // fixml_type fixml_msg_type;
  string fixml_msg_name;
  if (!_fixml_dictionary->get_message_type(fix_msg_type._name, fixml_msg_type,
                                           fixml_msg_name)) {
    return false;
  }
  fixml_elt.set_name(fixml_msg_name);

  return true;
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fixml_attrs_and_compos(const fixml_type &type,
                                                     const FieldMap &fix_msg,
                                                     xml_element &fixml_elt) {
  add_fixml_attributes(type, fix_msg, fixml_elt);
  add_fixml_components(type, fix_msg, fixml_elt);
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fixml_attributes(const fixml_type &type,
                                               const FieldMap &fix_msg,
                                               xml_element &fixml_elt) {
  for (const auto &it : type.fields()) {
    add_fixml_attribute(it, fix_msg, fixml_elt);
  }
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fixml_attribute(
    const fixml_field_data &field_data, const FIX::FieldMap &fix_msg,
    xml_element &fixml_elt) {
  int tag = _fixml_dictionary->get_field_fix_tag(field_data._type);
  if (tag == -1) {
    BOOST_LOG_TRIVIAL(warning) << "FIX tag for " << field_data._type
                               << " not found";
    return;
  }
  if (!fix_msg.isSetField(tag))
    return;
  string value = fix_msg.getField(tag);
  BOOST_LOG_TRIVIAL(debug) << "[FIELD] Setting FIX field " << field_data._name
                           << " to " << field_data._name << "={" << value
                           << "}";
  fixml_elt.add_attribute(field_data._name, value);
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fixml_components(const fixml_type &type,
                                               const FieldMap &fix_msg,
                                               xml_element &fixml_elt) {
  for (const auto &it : type.components()) {
    BOOST_LOG_TRIVIAL(debug) << "[COMPONENT] Start adding component "
                             << it._name;
    add_fixml_component(it, fix_msg, fixml_elt);
    BOOST_LOG_TRIVIAL(debug) << "[COMPONENT] Adding component " << it._name
                             << " done";
  }
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fixml_component(
    const fixml_component_data &compo_data, const FieldMap &fix_msg,
    xml_element &fixml_elt) {
  xml_element compo_elt;
  compo_elt.set_name(compo_data._name);
  fixml_type fixml_compo_type;
  if (!_fixml_dictionary->get_type_by_name(compo_data._type, fixml_compo_type))
    return;
  if (compo_data.is_block()) {
    add_fixml_attrs_and_compos(fixml_compo_type, fix_msg, compo_elt);
  } else if (compo_data.is_group()) {
    add_fixml_group(compo_data, fix_msg, fixml_elt, fixml_compo_type);
  }
  if (!compo_elt.empty()) {
    BOOST_LOG_TRIVIAL(debug) << "[COMPONENT] Adding XML component "
                             << compo_elt.name();
    fixml_elt.add_element(compo_elt);
  } else {
    BOOST_LOG_TRIVIAL(debug) << "[COMPONENT] Component " << compo_elt.name()
                             << " is empty -> not added ";
  }
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fixml_group(
    const fixml_component_data &compo_data, const FieldMap &fix_msg,
    xml_element &fixml_elt, fixml_type &fixml_compo_type) {
  int tag = -1;
  fix_component_type fix_compo_type;
  if (!_fix_dictionary->get_fix_group_tag(fixml_compo_type._fix_data._name,
                                          fix_compo_type, tag)) {
    BOOST_LOG_TRIVIAL(warning)
        << "The FIX tag of repeating group " << fixml_compo_type._fix_data._name
        << " not found [FIXML name= " << fixml_compo_type._name << "]";
    return;
  }

  if (!fix_msg.hasGroup(tag))
    return;

  int count = atoi(fix_msg.getField(tag).c_str());
  for (int i = 1; i <= count; ++i) {
    FieldMap group;
    fix_msg.getGroup(i, tag, group);
    xml_element group_elt;
    group_elt.set_name(compo_data._name);
    add_fixml_attrs_and_compos(fixml_compo_type, group, group_elt);
    fixml_elt.add_element(group_elt);
  }
}

//----------------------------------------------------------------------------

const bool fixml2fix_converter::fixml2fix(const std::string &str,
                                          Message &fix_msg) {
  xml_element xml_elt;
  if (!_fixml_parser.to_xml_element(str, xml_elt)) {
    BOOST_LOG_TRIVIAL(warning) << "Failed to parse FIXML"
                               << "\t" << str;
    return false;
  }
  // BOOST_LOG_TRIVIAL(debug) << xml_elt.to_string();
  return fixml2fix(xml_elt, fix_msg);
}

//----------------------------------------------------------------------------

const bool fixml2fix_converter::fixml2fix(const xml_element &fixml_elt,
                                          Message &fix_msg) {
  const string fixml_msg_type = fixml_elt.name();
  fixml_type msg_type;
  if (!_fixml_dictionary->get_type_by_fixml_name(fixml_msg_type, msg_type)) {
    return false;
  }
  BOOST_LOG_TRIVIAL(debug) << "FIXML message = " << msg_type._name
                           << " => FIX message = " << msg_type._fix_data._name;
  fix_message_type fix_msg_type;
  if (!_fix_dictionary->get_fix_message_by_name(msg_type._fix_data._name,
                                                fix_msg_type)) {
    BOOST_LOG_TRIVIAL(error) << "FIX message not found for "
                             << msg_type._fix_data._name;
    return false;
  }
  fix_msg.getHeader().setField(MsgType(fix_msg_type._msgtype));
  add_fix_fields_and_compos(fix_msg_type._msgtype, msg_type, fixml_elt,
                            fix_msg);
  return true;
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fix_fields_and_compos(
    const string &fix_msg_type, const fixml_type &type,
    const xml_element &fixml_elt, FieldMap &fix_msg) {
  add_fix_fields(type, fixml_elt, fix_msg);
  add_fix_components(fix_msg_type, type, fixml_elt, fix_msg);
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fix_fields(const fixml_type &type,
                                         const xml_element &fixml_elt,
                                         FIX::FieldMap &fix_msg) {
  for (const auto &attr : type.fields()) {
    add_fix_field(attr, fixml_elt, fix_msg);
  }
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fix_field(const fixml_field_data &fixml_field,
                                        const xml_element &fixml_elt,
                                        FIX::FieldMap &fix_msg) {
  auto it = fixml_elt.attributes().find(fixml_field._name);
  if (it == fixml_elt.attributes().end())
    return;
  fixml_type attr_fixml_type;
  if (!_fixml_dictionary->get_type_by_name(fixml_field._type,
                                           attr_fixml_type)) {
    BOOST_LOG_TRIVIAL(error) << "FIXML type " << fixml_field._type
                             << " not found";
    return;
  }
  if (attr_fixml_type._fix_data._tag.empty()) {
    BOOST_LOG_TRIVIAL(error) << "FIX tag not defined for FIXML type "
                             << fixml_field._type;
    return;
  }
  int tag = atoi(attr_fixml_type._fix_data._tag.c_str());
  fix_msg.setField(tag, it->second);
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fix_components(const string &fix_msg_type,
                                             const fixml_type &type,
                                             const xml_element &fixml_elt,
                                             FieldMap &fix_msg) {
  for (const auto &compo : type.components()) {
    if (compo.is_block()) {
      add_fix_component(fix_msg_type, compo, fixml_elt, fix_msg);
    } else if (compo.is_group()) {
      add_fix_group(fix_msg_type, compo, fixml_elt, fix_msg);
    }
  }
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fix_component(
    const string &fix_msg_type, const fixml_component_data &fixml_compo,
    const xml_element &fixml_elt, FieldMap &fix_msg) {
  xml_element compo_elt;
  if (!fixml_elt.get_component(fixml_compo._name, compo_elt)) {
    return;
  }
  fixml_type compo_type;
  if (!_fixml_dictionary->get_type_by_name(fixml_compo._type, compo_type)) {
    BOOST_LOG_TRIVIAL(error) << "FIXML type for " << compo_elt.name()
                             << " not found";
    return;
  }
  add_fix_fields_and_compos(fix_msg_type, compo_type, compo_elt, fix_msg);
}

//----------------------------------------------------------------------------

void fixml2fix_converter::add_fix_group(const string &fix_msg_type,
                                        const fixml_component_data &fixml_compo,
                                        const xml_element &fixml_elt,
                                        FieldMap &fix_msg) {
  xml_element compo_elt;
  if (!fixml_elt.get_component(fixml_compo._name, compo_elt)) {
    return;
  }
  fixml_type compo_type;
  if (!_fixml_dictionary->get_type_by_name(fixml_compo._type, compo_type)) {
    BOOST_LOG_TRIVIAL(error) << "FIXML type for " << compo_elt.name()
                             << " not found";
    return;
  }
  const string &fix_name = compo_type._fix_data._name;
  if (fix_name.empty()) {
    BOOST_LOG_TRIVIAL(error) << "FIX name not set for " << compo_elt.name();
    return;
  }
  fix_component_type fix_compo;
  if (!_fix_dictionary->get_fix_component(fix_name, fix_compo)) {
    BOOST_LOG_TRIVIAL(error) << "FIX component " << fix_name << " not found";
    return;
  }
  if (fix_compo._components.size() != 1) {
    BOOST_LOG_TRIVIAL(error) << "FIX component " << fix_name
                             << " has zero or more than one subcomponent";
    return;
  }
  const string numingroup_name = *(fix_compo._components.begin());
  fix_field_type fix_field;
  if (!_fix_dictionary->get_fix_field(numingroup_name, fix_field)) {
    BOOST_LOG_TRIVIAL(error) << "FIX field " << numingroup_name << " not found";
    return;
  }
  int tag = atoi(fix_field._tag.c_str());
  BOOST_LOG_TRIVIAL(debug) << "Group tag for " << fix_name << " = " << tag
                           << "/" << fix_msg_type;
  const DataDictionary *group_dict{nullptr};
  int delimiter = 1;
  if (!_quickfix_dictionary.getGroup(fix_msg_type, tag, delimiter,
                                     group_dict)) {
    BOOST_LOG_TRIVIAL(error) << "FIX group " << fix_name
                             << " not found in quickfix dictionary";
    return;
  }
  message_order field_order = group_dict->getOrderedFields();

  list<xml_element> compo_elts;
  fixml_elt.get_components(fixml_compo._name, compo_elts);

  for (const auto &group_elt : compo_elts) {
    Group fix_group(tag, delimiter, field_order);
    add_fix_fields_and_compos(fix_msg_type, compo_type, group_elt, fix_group);
    fix_msg.addGroup(tag, fix_group);
  }
}

//----------------------------------------------------------------------------
}
