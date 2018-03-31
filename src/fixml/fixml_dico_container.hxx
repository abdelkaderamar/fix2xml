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
#include "data/xml_element.hxx"
#include "util/fix2xml_utils.hxx"

#include <boost/multi_index/identity.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index_container.hpp>

#include <map>
#include <string>

namespace fix2xml {
//----------------------------------------------------------------------------
typedef boost::multi_index::multi_index_container<
    fixml_type,
    boost::multi_index::indexed_by<
        // Index by type name
        boost::multi_index::ordered_non_unique<boost::multi_index::member<
            fixml_type, std::string, &fixml_type::_name>>,
        // Index by FIX name (non unique if not defined)
        boost::multi_index::ordered_non_unique<key_from_key<
            BOOST_MULTI_INDEX_MEMBER(fixml_fix_data, std::string, _name),
            BOOST_MULTI_INDEX_MEMBER(fixml_type, fixml_fix_data, _fix_data)>>,
        // Index by FIX tag (non unique if not defined)
        boost::multi_index::ordered_non_unique<key_from_key<
            BOOST_MULTI_INDEX_MEMBER(fixml_fix_data, std::string, _tag),
            BOOST_MULTI_INDEX_MEMBER(fixml_type, fixml_fix_data, _fix_data)>>,
        // Index by type fullname
        boost::multi_index::ordered_unique<boost::multi_index::member<
            fixml_type, std::string, &fixml_type::_fullname>>

        > // end indexed_by
    >
    fixml_type_multi_index_container;
//----------------------------------------------------------------------------
typedef boost::multi_index::multi_index_container<
    fixml_element_data,
    boost::multi_index::indexed_by<
        // Index by type name
        boost::multi_index::ordered_unique<boost::multi_index::member<
            fixml_element_data, std::string, &fixml_element_data::_name>>,
        // Index by type
        boost::multi_index::ordered_unique<boost::multi_index::member<
            fixml_element_data, std::string,
            &fixml_element_data::_type>>> // end indexed_by
    >
    fixml_element_multi_index_container;

class fixml_dico_container {
public:
  fixml_dico_container();

  std::string to_string() const;

  bool validate() const;

  void add_element(const std::string &name, const std::string &type);

  void add_type_definition(const fixml_type &type);

  const fixml_type_multi_index_container &get_type_definitions() const {
    return _type_definitions;
  }

  bool get_type_by_name(const std::string &type_name, fixml_type &type) const;

  bool get_message_type(const std::string &fix_msg_name,
                        fixml_type &fixml_msg_type) const;

  bool get_message_type(const std::string &fix_msg_name,
                        fixml_type &fixml_msg_type,
                        std::string &fixml_msg_name) const;

  int get_field_fix_tag(const std::string &fixml_field_type) const;

  bool get_type_by_fixml_name(const std::string &fixml_msg_name,
                              fixml_type &fix_msg_type) const;

  bool get_type_by_fix_name(const std::string &fixname,
                            fixml_type &fix_msg_type) const;

  bool has_fix_tag(const std::string &fixname) const;

  xml_element to_xml_model(const fixml_type &type) const;

protected:
  fixml_type_multi_index_container _type_definitions;
  fixml_element_multi_index_container _element_definitions;

  fixml_type_multi_index_container::nth_index<0>::type &_fixml_name_index;
  fixml_type_multi_index_container::nth_index<1>::type &_fix_name_index;
  fixml_type_multi_index_container::nth_index<2>::type &_fix_tag_index;
  fixml_type_multi_index_container::nth_index<3>::type &_fixml_fullname_index;

  fixml_element_multi_index_container::nth_index<0>::type &_element_name_index;
  fixml_element_multi_index_container::nth_index<1>::type &_element_type_index;

private:
}; // enf fixml_dico_container

} // end namespace fix2xml

std::ostream &operator<<(std::ostream &os,
                         const fix2xml::fixml_dico_container &dico);
