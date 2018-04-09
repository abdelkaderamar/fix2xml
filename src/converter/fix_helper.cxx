#include "fix_helper.hxx"

#include <quickfix/FixFieldNumbers.h>

#include <vector>

namespace fix2xml {
using namespace std;

void to_list(const FIX::Message &fix_msg, const FIX::DataDictionary &fix_dict,
             std::multiset<std::string> &s,
             std::list<std::multiset<std::string>> &ls) {
  std::multiset<string> header_set;
  fieldmap_to_list(fix_msg.getHeader(), fix_dict, header_set, ls);
  ls.push_back(header_set);
  fieldmap_to_list(fix_msg, fix_dict, s, ls);
}

void fieldmap_to_list(const FIX::FieldMap &fix_msg,
                      const FIX::DataDictionary &fix_dict,
                      std::multiset<std::string> &s,
                      std::list<std::multiset<std::string>> &ls) {
  for (auto it = fix_msg.begin(); it != fix_msg.end(); ++it) {
    if (it->getField() == FIX::FIELD::MsgType)
      continue;
    FIX::TYPE::Type fix_type;
    if (fix_dict.getFieldType(it->getField(), fix_type) &&
        (fix_type == FIX::TYPE::NumInGroup))
      continue;

    s.insert(it->getString());
  }
  for (auto it = fix_msg.g_begin(); it != fix_msg.g_end(); ++it) {
    const vector<FIX::FieldMap *> &groups = it->second;
    for (size_t i = 0; i < groups.size(); ++i) {
      multiset<string> group_set;
      fieldmap_to_list(*groups[i], fix_dict, group_set, ls);
      ls.push_back(group_set);
    }
  }
}
}
