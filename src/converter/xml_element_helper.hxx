#pragma once

#include "data/xml_element.hxx"
#include "fixml/fixml_dico_container.hxx"

#include <list>
#include <memory>
#include <set>
#include <string>

namespace fix2xml {
void elt_to_list(const xml_element &elt,
                 const std::shared_ptr<fixml_dico_container> &fixml_dict,
                 std::multiset<std::string> &s,
                 std::list<std::multiset<std::string>> &ls);
}
