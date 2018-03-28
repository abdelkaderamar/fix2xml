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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderCancelReject msg;

  list<multiset<string>> all_values;
  multiset<string> OrderCancelReject_0;
  FIX::Account Account_19("STRING_1719494410");
  msg.set(Account_19);
  OrderCancelReject_0.insert(Account_19.getString());
  FIX::AccountType AccountType_18(7);
  msg.set(AccountType_18);
  OrderCancelReject_0.insert(AccountType_18.getString());
  FIX::AcctIDSource AcctIDSource_12(3);
  msg.set(AcctIDSource_12);
  OrderCancelReject_0.insert(AcctIDSource_12.getString());
  FIX::ClOrdID ClOrdID_33("STRING_1370812207");
  msg.set(ClOrdID_33);
  OrderCancelReject_0.insert(ClOrdID_33.getString());
  FIX::ClOrdLinkID ClOrdLinkID_11("STRING_1737636115");
  msg.set(ClOrdLinkID_11);
  OrderCancelReject_0.insert(ClOrdLinkID_11.getString());
  FIX::CxlRejReason CxlRejReason_0(5);
  msg.set(CxlRejReason_0);
  OrderCancelReject_0.insert(CxlRejReason_0.getString());
  FIX::CxlRejResponseTo CxlRejResponseTo_0('1');
  msg.set(CxlRejResponseTo_0);
  OrderCancelReject_0.insert(CxlRejResponseTo_0.getString());
  FIX::EncodedText EncodedText_58("DATA_1484243632");
  msg.set(EncodedText_58);
  OrderCancelReject_0.insert(EncodedText_58.getString());
  FIX::EncodedTextLen EncodedTextLen_58(950016810);
  msg.set(EncodedTextLen_58);
  OrderCancelReject_0.insert(EncodedTextLen_58.getString());
  FIX::ListID ListID_20("STRING_381473960");
  msg.set(ListID_20);
  OrderCancelReject_0.insert(ListID_20.getString());
  FIX::OrdStatus OrdStatus_3('0');
  msg.set(OrdStatus_3);
  OrderCancelReject_0.insert(OrdStatus_3.getString());
  FIX::OrderID OrderID_28("STRING_553512955");
  msg.set(OrderID_28);
  OrderCancelReject_0.insert(OrderID_28.getString());
  FIX::OrigClOrdID OrigClOrdID_7("STRING_639151191");
  msg.set(OrigClOrdID_7);
  OrderCancelReject_0.insert(OrigClOrdID_7.getString());
  FIX::OrigOrdModTime OrigOrdModTime_3(FIX::UTCTIMESTAMP(16, 34, 55, 2, 3, 2012));
  msg.set(OrigOrdModTime_3);
  OrderCancelReject_0.insert(OrigOrdModTime_3.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_31("STRING_595117536");
  msg.set(SecondaryClOrdID_31);
  OrderCancelReject_0.insert(SecondaryClOrdID_31.getString());
  FIX::SecondaryOrderID SecondaryOrderID_22("STRING_1905448199");
  msg.set(SecondaryOrderID_22);
  OrderCancelReject_0.insert(SecondaryOrderID_22.getString());
  FIX::Text Text_58("STRING_1630893261");
  msg.set(Text_58);
  OrderCancelReject_0.insert(Text_58.getString());
  FIX::TradeDate TradeDate_23("LOCALMKTDATE_885159945");
  msg.set(TradeDate_23);
  OrderCancelReject_0.insert(TradeDate_23.getString());
  FIX::TradeOriginationDate TradeOriginationDate_15("LOCALMKTDATE_317574509");
  msg.set(TradeOriginationDate_15);
  OrderCancelReject_0.insert(TradeOriginationDate_15.getString());
  FIX::TransactTime TransactTime_43(FIX::UTCTIMESTAMP(5, 37, 8, 22, 12, 2004));
  msg.set(TransactTime_43);
  OrderCancelReject_0.insert(TransactTime_43.getString());
  FIX::WorkingIndicator WorkingIndicator_3(false);
  msg.set(WorkingIndicator_3);
  OrderCancelReject_0.insert(WorkingIndicator_3.getString());
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
