#pragma once

#include <quickfix/DataDictionary.h>
#include <quickfix/Message.h>

#include <list>
#include <memory>
#include <set>
#include <string>

namespace fix2xml {
/**
 * Convert a FIX message to two containers :
 * - s is a multiset containing all the fields
 * - ls is a list of multiset. Each multiset contains the fields of a group
 */
void msg_to_list(const FIX::Message &fix_msg,
                 const FIX::DataDictionary &fix_dict,
                 std::multiset<std::string> &s,
                 std::list<std::multiset<std::string>> &ls);

std::multiset<std::string>
fieldmap_to_list(const FIX::FieldMap &fix_msg,
                 const FIX::DataDictionary &fix_dict,
                 std::list<std::multiset<std::string>> &ls);
} // namespace fix2xml
