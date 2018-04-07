#include "xml_element_helper.hxx"

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
      elt_to_list(it.second, compo_data._type, fixml_dict, s, ls);
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
      elt_to_list(it.second, compo_data._type, fixml_dict, s, ls);
    } else if (compo_data.is_group()) {
      multiset<string> group_set;
      elt_to_list(it.second, compo_data._type, fixml_dict, group_set, ls);
      ls.push_back(group_set);
    }
  }
}
}
