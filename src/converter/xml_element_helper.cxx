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

#include "xml_element_helper.hxx"

#include <iostream>

namespace fix2xml {
using namespace std;

void elt_to_list(const xml_element &elt, const string &type_name,
                 const shared_ptr<fixml_dico_container> &fixml_dict,
                 std::multiset<std::string> &s,
                 std::list<std::multiset<std::string>> &ls) {
  for (auto &it : elt.attributes()) {
    s.insert(it.second);
  }
  fixml_type elt_type;
  if (!fixml_dict->get_msgtype_by_fixml_name(type_name, elt_type) &&
      !fixml_dict->get_type_by_name(type_name, elt_type))
    return;
  for (auto &it : elt.elements()) {
    fixml_component_data compo_data{it.first, "", 0, 0};
    if (!elt_type.get_componet(it.first, compo_data))
      continue;
    if (compo_data.is_block()) {
      if (compo_data._name != "Hdr") {
        elt_to_list(it.second, compo_data._type, fixml_dict, s, ls);
      } else {
        multiset<string> header_set;
        elt_to_list(it.second, compo_data._type, fixml_dict, header_set, ls);
        ls.push_back(header_set);
      }
    } else if (compo_data.is_group()) {
      multiset<string> group_set;
      elt_to_list(it.second, compo_data._type, fixml_dict, group_set, ls);
      ls.push_back(group_set);
    }
  }
}

void elt_to_list(const xml_element &elt,
                 const shared_ptr<fixml_dico_container> &fixml_dict,
                 std::multiset<std::string> &s,
                 std::list<std::multiset<std::string>> &ls) {
  for (auto &it : elt.attributes()) {
    s.insert(it.second);
  }
  fixml_type elt_type;
  if (!fixml_dict->get_msgtype_by_fixml_name(elt.name(), elt_type) &&
      !fixml_dict->get_type_by_name(elt.name(), elt_type))
    return;
  for (auto &it : elt.elements()) {
    fixml_component_data compo_data{it.first, "", 0, 0};
    if (!elt_type.get_componet(it.first, compo_data))
      continue;
    if (compo_data.is_block()) {
      if (compo_data._name != "Hdr") {
        elt_to_list(it.second, compo_data._type, fixml_dict, s, ls);
      } else {
        multiset<string> header_set;
        elt_to_list(it.second, compo_data._type, fixml_dict, header_set, ls);
        ls.push_back(header_set);
      }
    } else if (compo_data.is_group()) {
      multiset<string> group_set;
      elt_to_list(it.second, compo_data._type, fixml_dict, group_set, ls);
      ls.push_back(group_set);
    }
  }
}
}
