#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/BusinessMessageReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( BusinessMessageReject, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::BusinessMessageReject msg;

  list<multiset<string>> all_values;
  multiset<string> BusinessMessageReject_0;
  FIX::BusinessRejectReason BusinessRejectReason_0(7);
  msg.set(BusinessRejectReason_0);
  BusinessMessageReject_0.insert(BusinessRejectReason_0.getString());
  FIX::BusinessRejectRefID BusinessRejectRefID_0("STRING_1128512487");
  msg.set(BusinessRejectRefID_0);
  BusinessMessageReject_0.insert(BusinessRejectRefID_0.getString());
  FIX::EncodedText EncodedText_12("DATA_211197061");
  msg.set(EncodedText_12);
  BusinessMessageReject_0.insert(EncodedText_12.getString());
  FIX::EncodedTextLen EncodedTextLen_12(1667016988);
  msg.set(EncodedTextLen_12);
  BusinessMessageReject_0.insert(EncodedTextLen_12.getString());
  FIX::RefApplExtID RefApplExtID_0(1836096007);
  msg.set(RefApplExtID_0);
  BusinessMessageReject_0.insert(RefApplExtID_0.getString());
  FIX::RefApplVerID RefApplVerID_0("STRING_696509501");
  msg.set(RefApplVerID_0);
  BusinessMessageReject_0.insert(RefApplVerID_0.getString());
  FIX::RefCstmApplVerID RefCstmApplVerID_0("STRING_97980758");
  msg.set(RefCstmApplVerID_0);
  BusinessMessageReject_0.insert(RefCstmApplVerID_0.getString());
  FIX::RefMsgType RefMsgType_0("STRING_656009291");
  msg.set(RefMsgType_0);
  BusinessMessageReject_0.insert(RefMsgType_0.getString());
  FIX::RefSeqNum RefSeqNum_0(707912743);
  msg.set(RefSeqNum_0);
  BusinessMessageReject_0.insert(RefSeqNum_0.getString());
  FIX::Text Text_12("STRING_1192983865");
  msg.set(Text_12);
  BusinessMessageReject_0.insert(Text_12.getString());
  all_values.push_back(BusinessMessageReject_0);


  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }

  for (const auto& xml_l : elt_lists) {
    bool found = false;
    for (const auto& l : all_values) {
      if (includes(l.begin(), l.end(), xml_l.begin(), xml_l.end())) {
        found = true;
        break;
      } // end if includes
    } // end for all_values
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
