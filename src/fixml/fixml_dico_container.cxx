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

#include "fixml_dico_container.hxx"

#include <boost/log/trivial.hpp>

#include <cstdlib>
#include <sstream>

namespace fix2xml {
using namespace std;

//----------------------------------------------------------------------------

fixml_dico_container::fixml_dico_container()
    : _fixml_name_index(_type_definitions.get<0>()),
      _fix_name_index(_type_definitions.get<1>()),
      _fix_tag_index(_type_definitions.get<2>()),
      _fixml_fullname_index(_type_definitions.get<3>()),
      _element_name_index(_element_definitions.get<0>()),
      _element_type_index(_element_definitions.get<1>()) {}

//----------------------------------------------------------------------------

void fixml_dico_container::add_element(const string &name, const string &type) {
  _element_definitions.insert(fixml_element_data{name, type});
}

//----------------------------------------------------------------------------

void fixml_dico_container::add_type_definition(const fixml_type &type) {
  _type_definitions.insert(type);
  BOOST_LOG_TRIVIAL(debug) << "****** Adding type [" << type._fullname << "] | "
                           << "[" << type._fix_data._name << "] | "
                           << _type_definitions.size();
}

//----------------------------------------------------------------------------

std::string fixml_dico_container::to_string() const {
  stringstream ss;
  // TODO
  return ss.str();
}

//----------------------------------------------------------------------------

bool fixml_dico_container::get_type_by_name(const string &type_name,
                                            fixml_type &type) const {
  auto it = _fixml_name_index.find(type_name);
  if (it == _fixml_name_index.end()) {
    BOOST_LOG_TRIVIAL(warning) << "Cannot find the FIXML type " << type_name;
    return false;
  }
  type = *it;
  return true;
}

//----------------------------------------------------------------------------

bool fixml_dico_container::get_message_type(const string &fix_msg_name,
                                            fixml_type &fixml_msg_type) const {
  BOOST_LOG_TRIVIAL(debug) << "@@@@ Searching for message type by fix name "
                           << fix_msg_name;
  auto range = _fix_name_index.equal_range(fix_msg_name);
  /*if (it == _fix_name_index.end()) {
    BOOST_LOG_TRIVIAL(warning) << "FIXML type not found for " << fix_msg_name;
    return false;
  }
  */

  for (auto it = range.first; it != range.second; ++it) {
    // BOOST_LOG_TRIVIAL(debug) << "#### " << it->_fullname;
    if (it->_base_type == "Abstract_message_t") {
      fixml_msg_type = *it;
      return true;
    }
  }
  return false;
}

//----------------------------------------------------------------------------

bool fixml_dico_container::get_message_type(const string &fix_msg_name,
                                            fixml_type &fixml_msg_type,
                                            string &fixml_msg_name) const {
  if (!get_message_type(fix_msg_name, fixml_msg_type))
    return false;

  auto it = _element_type_index.find(fixml_msg_type._name);
  if (it == _element_type_index.end()) {
    BOOST_LOG_TRIVIAL(warning) << "FIXML element not found for FIXML type "
                               << fixml_msg_type._name;
    return false;
  }
  fixml_msg_name = (*it)._name;
  return true;
}

//----------------------------------------------------------------------------

int fixml_dico_container::get_field_fix_tag(
    const string &fixml_field_type) const {
  auto it = _fixml_name_index.find(fixml_field_type);
  if (it == _fixml_name_index.end()) {
    BOOST_LOG_TRIVIAL(warning) << "FIXML type for " << fixml_field_type
                               << " not found";
    return -1;
  }
  string tag = it->_fix_data._tag;
  if (tag.empty()) {
    auto base_type_it = _fixml_name_index.find(it->_base_type);
    if (base_type_it == _fixml_name_index.end()) {
      BOOST_LOG_TRIVIAL(warning) << "FIXML type for " << it->_base_type
                                 << " not found";
      return -1;
    }
    BOOST_LOG_TRIVIAL(debug)
        << "type " << fixml_field_type << " not found =>"
        << " try with base type " << base_type_it->_name
        << " => fix_name = " << base_type_it->_fix_data._name;

    // BOOST_LOG_TRIVIAL(debug) << "Try with base_type " << it->_base_type;
    tag = base_type_it->_fix_data._tag;
  }
  if (tag.empty()) {
    BOOST_LOG_TRIVIAL(warning) << "FIX tag not set for type " << it->_name;
    return -1;
  }
  return atoi(tag.c_str());
}

//----------------------------------------------------------------------------

bool fixml_dico_container::get_type_by_fixml_name(
    const string &fixml_msg_name, fixml_type &fix_msg_type) const {
  auto it_msg_type = _fixml_name_index.find(fixml_msg_name);
  auto it_msg_elt = _element_name_index.find(fixml_msg_name);
  if (it_msg_type == _fixml_name_index.end() &&
      it_msg_elt == _element_name_index.end()) {
    BOOST_LOG_TRIVIAL(error) << "FIXML type " << fixml_msg_name << " not found";
    return false;
  }
  if (it_msg_type == _fixml_name_index.end()) {
    it_msg_type = _fixml_name_index.find(it_msg_elt->_type);
  }
  if (it_msg_type == _fixml_name_index.end()) {
    BOOST_LOG_TRIVIAL(error) << "FIXML type " << fixml_msg_name << " not found";
    return false;
  }
  fix_msg_type = *it_msg_type;
  return true;
}

//----------------------------------------------------------------------------

bool fixml_dico_container::get_type_by_fix_name(
    const std::string &fixname, fixml_type &fix_msg_type) const {
  // TODO: merge with get_message_type
  auto it = _fix_name_index.find(fixname);
  if (it == _fix_name_index.end()) {
    BOOST_LOG_TRIVIAL(warning) << "FIXML type not found for " << fixname;
    return false;
  }
  fix_msg_type = *it;
  return true;
}
//----------------------------------------------------------------------------

bool fixml_dico_container::has_fix_tag(const std::string &fixname) const {
  auto it = _fix_name_index.find(fixname);
  if (it == _fix_name_index.end()) {
    return false;
  }
  return (!it->_fix_data._tag.empty());
}
//----------------------------------------------------------------------------
}

std::ostream &operator<<(std::ostream &os,
                         const fix2xml::fixml_dico_container &dico) {
  os << dico.to_string();
  return os;
}
