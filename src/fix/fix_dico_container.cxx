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

#include "fix_dico_container.hxx"

#include <boost/log/trivial.hpp>

namespace fix2xml {
using namespace std;
//----------------------------------------------------------------------------

fix_dico_container::fix_dico_container()
    : _msg_name_index(_messages.get<0>()),
      _msg_msgtype_index(_messages.get<1>()) {} // end ctor

//----------------------------------------------------------------------------

fix_dico_container::~fix_dico_container() {} // end dtor

//----------------------------------------------------------------------------

void fix_dico_container::add_message(const fix_message_type &msg) {
  _messages.insert(msg);
} // end add_message

//----------------------------------------------------------------------------

void fix_dico_container::add_component(const fix_component_type &compo) {
  _components[compo._name] = compo;
} // end add_component

//----------------------------------------------------------------------------

void fix_dico_container::add_field(const fix_field_type &field) {
  _fields[field._name] = field;
} // end add_field

//----------------------------------------------------------------------------

bool fix_dico_container::get_fix_message_by_name(const std::string &name,
                                                 fix_message_type &msg) const {
  auto it = _msg_name_index.find(name);
  if (it == _msg_name_index.end())
    return false;
  msg = *it;
  return true;
}

//----------------------------------------------------------------------------

bool fix_dico_container::get_fix_message_by_type(const std::string &msgtype,
                                                 fix_message_type &msg) const {
  auto it = _msg_msgtype_index.find(msgtype);
  if (it == _msg_msgtype_index.end())
    return false;
  msg = *it;
  return true;
}

//----------------------------------------------------------------------------

bool fix_dico_container::get_fix_group_tag(const std::string &name,
                                           fix_component_type &type,
                                           int &tag) const {
  if (!get_fix_component(name, type)) {
    BOOST_LOG_TRIVIAL(warning)
        << "Corresponding FIX type not found for XML type {" << name << "}";
    return false;
  }
  BOOST_LOG_TRIVIAL(debug) << "Corresponding FIX type found => " << type._name;
  BOOST_LOG_TRIVIAL(debug) << "The group inside the FIX component = "
                           << *(type._components.begin());
  const string group_fullname = *(type._components.begin());
  fix_component_type group_type;
  if (!get_fix_component(group_fullname, group_type)) {
    BOOST_LOG_TRIVIAL(warning) << "Group component " << group_fullname
                               << " not found";
    return false;
  }
  const string numingroup_field_name = group_type._short_name;
  fix_field_type fix_field;
  if (!get_fix_field(numingroup_field_name, fix_field)) {
    BOOST_LOG_TRIVIAL(warning) << "FIX type " << numingroup_field_name
                               << " not found";
    return false;
  }
  tag = atoi(fix_field._tag.c_str());
  return true;
}

//----------------------------------------------------------------------------
}
