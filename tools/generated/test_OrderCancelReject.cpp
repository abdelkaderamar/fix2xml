#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderCancelReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelReject, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderCancelReject msg;

  list<multiset<string>> all_values;
  multiset<string> OrderCancelReject_0;
  FIX::Account Account_23("STRING_2016210398");
  msg.set(Account_23);
  OrderCancelReject_0.insert(Account_23.getString());
  FIX::AccountType AccountType_21(8);
  msg.set(AccountType_21);
  OrderCancelReject_0.insert(AccountType_21.getString());
  FIX::AcctIDSource AcctIDSource_16(3);
  msg.set(AcctIDSource_16);
  OrderCancelReject_0.insert(AcctIDSource_16.getString());
  FIX::ClOrdID ClOrdID_34("STRING_60313447");
  msg.set(ClOrdID_34);
  OrderCancelReject_0.insert(ClOrdID_34.getString());
  FIX::ClOrdLinkID ClOrdLinkID_14("STRING_985327263");
  msg.set(ClOrdLinkID_14);
  OrderCancelReject_0.insert(ClOrdLinkID_14.getString());
  FIX::CxlRejReason CxlRejReason_0(2);
  msg.set(CxlRejReason_0);
  OrderCancelReject_0.insert(CxlRejReason_0.getString());
  FIX::CxlRejResponseTo CxlRejResponseTo_0('2');
  msg.set(CxlRejResponseTo_0);
  OrderCancelReject_0.insert(CxlRejResponseTo_0.getString());
  FIX::EncodedText EncodedText_60("DATA_1725593528");
  msg.set(EncodedText_60);
  OrderCancelReject_0.insert(EncodedText_60.getString());
  FIX::EncodedTextLen EncodedTextLen_60(1371285231);
  msg.set(EncodedTextLen_60);
  OrderCancelReject_0.insert(EncodedTextLen_60.getString());
  FIX::ListID ListID_19("STRING_1024829947");
  msg.set(ListID_19);
  OrderCancelReject_0.insert(ListID_19.getString());
  FIX::OrdStatus OrdStatus_2('9');
  msg.set(OrdStatus_2);
  OrderCancelReject_0.insert(OrdStatus_2.getString());
  FIX::OrderID OrderID_26("STRING_102332678");
  msg.set(OrderID_26);
  OrderCancelReject_0.insert(OrderID_26.getString());
  FIX::OrigClOrdID OrigClOrdID_9("STRING_2024212437");
  msg.set(OrigClOrdID_9);
  OrderCancelReject_0.insert(OrigClOrdID_9.getString());
  FIX::OrigOrdModTime OrigOrdModTime_3(FIX::UTCTIMESTAMP(6, 18, 49, 14, 102011));
  msg.set(OrigOrdModTime_3);
  OrderCancelReject_0.insert(OrigOrdModTime_3.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_32("STRING_2105624253");
  msg.set(SecondaryClOrdID_32);
  OrderCancelReject_0.insert(SecondaryClOrdID_32.getString());
  FIX::SecondaryOrderID SecondaryOrderID_21("STRING_518863186");
  msg.set(SecondaryOrderID_21);
  OrderCancelReject_0.insert(SecondaryOrderID_21.getString());
  FIX::Text Text_60("STRING_921319762");
  msg.set(Text_60);
  OrderCancelReject_0.insert(Text_60.getString());
  FIX::TradeDate TradeDate_26("LOCALMKTDATE_1273613821");
  msg.set(TradeDate_26);
  OrderCancelReject_0.insert(TradeDate_26.getString());
  FIX::TradeOriginationDate TradeOriginationDate_18("LOCALMKTDATE_686000490");
  msg.set(TradeOriginationDate_18);
  OrderCancelReject_0.insert(TradeOriginationDate_18.getString());
  FIX::TransactTime TransactTime_36(FIX::UTCTIMESTAMP(17, 7, 10, 0, 22004));
  msg.set(TransactTime_36);
  OrderCancelReject_0.insert(TransactTime_36.getString());
  FIX::WorkingIndicator WorkingIndicator_2(false);
  msg.set(WorkingIndicator_2);
  OrderCancelReject_0.insert(WorkingIndicator_2.getString());
  all_values.push_back(OrderCancelReject_0);


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
