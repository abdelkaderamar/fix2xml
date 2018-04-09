#pragma once

#include <quickfix/DataDictionary.h>
#include <quickfix/Message.h>

#include <list>
#include <memory>
#include <set>
#include <string>

namespace fix2xml {
void to_list(const FIX::Message &fix_msg, const FIX::DataDictionary &fix_dict,
             std::multiset<std::string> &s,
             std::list<std::multiset<std::string>> &ls);

void fieldmap_to_list(const FIX::FieldMap &fix_msg, const FIX::DataDictionary &fix_dict,
             std::multiset<std::string> &s,
             std::list<std::multiset<std::string>> &ls);
}
