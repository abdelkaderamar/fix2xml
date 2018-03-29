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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::BusinessMessageReject msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BusinessMessageReject_0;
  FIX::BusinessRejectReason BusinessRejectReason_0(0);
  msg.set(BusinessRejectReason_0);
  BusinessMessageReject_0.insert(BusinessRejectReason_0.getString());
  FIX::BusinessRejectRefID BusinessRejectRefID_0("STRING_822130239");
  msg.set(BusinessRejectRefID_0);
  BusinessMessageReject_0.insert(BusinessRejectRefID_0.getString());
  FIX::EncodedText EncodedText_14("DATA_711710750");
  msg.set(EncodedText_14);
  BusinessMessageReject_0.insert(EncodedText_14.getString());
  FIX::EncodedTextLen EncodedTextLen_14(664801373);
  msg.set(EncodedTextLen_14);
  BusinessMessageReject_0.insert(EncodedTextLen_14.getString());
  FIX::RefApplExtID RefApplExtID_0(258880606);
  msg.set(RefApplExtID_0);
  BusinessMessageReject_0.insert(RefApplExtID_0.getString());
  FIX::RefApplVerID RefApplVerID_0("STRING_444861444");
  msg.set(RefApplVerID_0);
  BusinessMessageReject_0.insert(RefApplVerID_0.getString());
  FIX::RefCstmApplVerID RefCstmApplVerID_0("STRING_359843351");
  msg.set(RefCstmApplVerID_0);
  BusinessMessageReject_0.insert(RefCstmApplVerID_0.getString());
  FIX::RefMsgType RefMsgType_0("STRING_1550084847");
  msg.set(RefMsgType_0);
  BusinessMessageReject_0.insert(RefMsgType_0.getString());
  FIX::RefSeqNum RefSeqNum_0(1569617147);
  msg.set(RefSeqNum_0);
  BusinessMessageReject_0.insert(RefSeqNum_0.getString());
  FIX::Text Text_14("STRING_1953392020");
  msg.set(Text_14);
  BusinessMessageReject_0.insert(Text_14.getString());
  all_values.push_back(BusinessMessageReject_0);

  all_compo_names.insert("BusinessMessageReject");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
