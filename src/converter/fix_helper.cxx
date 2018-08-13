#include "fix_helper.hxx"

#include <quickfix/FixFieldNumbers.h>

#include <algorithm>
#include <functional>
#include <vector>

namespace fix2xml {
using namespace std;

//-----------------------------------------------------------------------------

void msg_to_list(const FIX::Message &fix_msg,
                 const FIX::DataDictionary &fix_dict,
                 multiset<string> &fields_set, list<multiset<string>> &ls) {
  ls.push_back(fieldmap_to_list(fix_msg.getHeader(), fix_dict, ls));
  fields_set = fieldmap_to_list(fix_msg, fix_dict, ls);
}

//-----------------------------------------------------------------------------

multiset<string> fieldmap_to_list(const FIX::FieldMap &fix_msg,
                                  const FIX::DataDictionary &fix_dict,
                                  list<multiset<string>> &ls) {
  // Insert all the fields that are not NumInGroup in the multiset fields_set
  multiset<string> fields_set;
  for (auto it = fix_msg.begin(); it != fix_msg.end(); ++it) {
    if (it->getField() == FIX::FIELD::MsgType)
      continue;
    FIX::TYPE::Type fix_type;
    if (fix_dict.getFieldType(it->getField(), fix_type) &&
        (fix_type == FIX::TYPE::NumInGroup))
      continue;

    fields_set.insert(it->getString());
  }
  // For each group insert its fields (as multiset) in the list ls
  for (auto it = fix_msg.g_begin(); it != fix_msg.g_end(); ++it) {
    const vector<FIX::FieldMap *> &groups = it->second;
    for (size_t i = 0; i < groups.size(); ++i) {
       ls.push_back(fieldmap_to_list(*groups[i], fix_dict, ls));
    }
  }
  return fields_set;
}
//-----------------------------------------------------------------------------

} // end namespace fix2xml
