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
  FIX::Account Account_22("STRING_671134595");
  msg.set(Account_22);
  OrderCancelReject_0.insert(Account_22.getString());
  FIX::AccountType AccountType_19(2);
  msg.set(AccountType_19);
  OrderCancelReject_0.insert(AccountType_19.getString());
  FIX::AcctIDSource AcctIDSource_15(5);
  msg.set(AcctIDSource_15);
  OrderCancelReject_0.insert(AcctIDSource_15.getString());
  FIX::ClOrdID ClOrdID_34("STRING_556533514");
  msg.set(ClOrdID_34);
  OrderCancelReject_0.insert(ClOrdID_34.getString());
  FIX::ClOrdLinkID ClOrdLinkID_13("STRING_419601912");
  msg.set(ClOrdLinkID_13);
  OrderCancelReject_0.insert(ClOrdLinkID_13.getString());
  FIX::CxlRejReason CxlRejReason_0(99);
  msg.set(CxlRejReason_0);
  OrderCancelReject_0.insert(CxlRejReason_0.getString());
  FIX::CxlRejResponseTo CxlRejResponseTo_0('2');
  msg.set(CxlRejResponseTo_0);
  OrderCancelReject_0.insert(CxlRejResponseTo_0.getString());
  FIX::EncodedText EncodedText_69("DATA_1867307578");
  msg.set(EncodedText_69);
  OrderCancelReject_0.insert(EncodedText_69.getString());
  FIX::EncodedTextLen EncodedTextLen_69(1447942677);
  msg.set(EncodedTextLen_69);
  OrderCancelReject_0.insert(EncodedTextLen_69.getString());
  FIX::ListID ListID_21("STRING_391073318");
  msg.set(ListID_21);
  OrderCancelReject_0.insert(ListID_21.getString());
  FIX::OrdStatus OrdStatus_4('7');
  msg.set(OrdStatus_4);
  OrderCancelReject_0.insert(OrdStatus_4.getString());
  FIX::OrderID OrderID_29("STRING_610876777");
  msg.set(OrderID_29);
  OrderCancelReject_0.insert(OrderID_29.getString());
  FIX::OrigClOrdID OrigClOrdID_10("STRING_1366930407");
  msg.set(OrigClOrdID_10);
  OrderCancelReject_0.insert(OrigClOrdID_10.getString());
  FIX::OrigOrdModTime OrigOrdModTime_4(FIX::UTCTIMESTAMP(20, 38, 29, 18, 4, 2011));
  msg.set(OrigOrdModTime_4);
  OrderCancelReject_0.insert(OrigOrdModTime_4.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_32("STRING_2008518213");
  msg.set(SecondaryClOrdID_32);
  OrderCancelReject_0.insert(SecondaryClOrdID_32.getString());
  FIX::SecondaryOrderID SecondaryOrderID_22("STRING_803618959");
  msg.set(SecondaryOrderID_22);
  OrderCancelReject_0.insert(SecondaryOrderID_22.getString());
  FIX::Text Text_69("STRING_1623933163");
  msg.set(Text_69);
  OrderCancelReject_0.insert(Text_69.getString());
  FIX::TradeDate TradeDate_25("LOCALMKTDATE_175432190");
  msg.set(TradeDate_25);
  OrderCancelReject_0.insert(TradeDate_25.getString());
  FIX::TradeOriginationDate TradeOriginationDate_17("LOCALMKTDATE_1992646383");
  msg.set(TradeOriginationDate_17);
  OrderCancelReject_0.insert(TradeOriginationDate_17.getString());
  FIX::TransactTime TransactTime_39(FIX::UTCTIMESTAMP(8, 14, 7, 22, 1, 2000));
  msg.set(TransactTime_39);
  OrderCancelReject_0.insert(TransactTime_39.getString());
  FIX::WorkingIndicator WorkingIndicator_4(true);
  msg.set(WorkingIndicator_4);
  OrderCancelReject_0.insert(WorkingIndicator_4.getString());
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
