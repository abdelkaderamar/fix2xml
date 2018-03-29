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
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReject_0;
  FIX::Account Account_25("STRING_1483876979");
  msg.set(Account_25);
  OrderCancelReject_0.insert(Account_25.getString());
  FIX::AccountType AccountType_22(3);
  msg.set(AccountType_22);
  OrderCancelReject_0.insert(AccountType_22.getString());
  FIX::AcctIDSource AcctIDSource_18(99);
  msg.set(AcctIDSource_18);
  OrderCancelReject_0.insert(AcctIDSource_18.getString());
  FIX::ClOrdID ClOrdID_34("STRING_1223169969");
  msg.set(ClOrdID_34);
  OrderCancelReject_0.insert(ClOrdID_34.getString());
  FIX::ClOrdLinkID ClOrdLinkID_14("STRING_1223511851");
  msg.set(ClOrdLinkID_14);
  OrderCancelReject_0.insert(ClOrdLinkID_14.getString());
  FIX::CxlRejReason CxlRejReason_0(3);
  msg.set(CxlRejReason_0);
  OrderCancelReject_0.insert(CxlRejReason_0.getString());
  FIX::CxlRejResponseTo CxlRejResponseTo_0('2');
  msg.set(CxlRejResponseTo_0);
  OrderCancelReject_0.insert(CxlRejResponseTo_0.getString());
  FIX::EncodedText EncodedText_65("DATA_382666899");
  msg.set(EncodedText_65);
  OrderCancelReject_0.insert(EncodedText_65.getString());
  FIX::EncodedTextLen EncodedTextLen_65(810360777);
  msg.set(EncodedTextLen_65);
  OrderCancelReject_0.insert(EncodedTextLen_65.getString());
  FIX::ListID ListID_23("STRING_1234526174");
  msg.set(ListID_23);
  OrderCancelReject_0.insert(ListID_23.getString());
  FIX::OrdStatus OrdStatus_2('3');
  msg.set(OrdStatus_2);
  OrderCancelReject_0.insert(OrdStatus_2.getString());
  FIX::OrderID OrderID_27("STRING_1029307900");
  msg.set(OrderID_27);
  OrderCancelReject_0.insert(OrderID_27.getString());
  FIX::OrigClOrdID OrigClOrdID_9("STRING_1197667038");
  msg.set(OrigClOrdID_9);
  OrderCancelReject_0.insert(OrigClOrdID_9.getString());
  FIX::OrigOrdModTime OrigOrdModTime_2(FIX::UTCTIMESTAMP(0, 2, 2, 2, 12, 2015));
  msg.set(OrigOrdModTime_2);
  OrderCancelReject_0.insert(OrigOrdModTime_2.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_32("STRING_1858479452");
  msg.set(SecondaryClOrdID_32);
  OrderCancelReject_0.insert(SecondaryClOrdID_32.getString());
  FIX::SecondaryOrderID SecondaryOrderID_22("STRING_1038361256");
  msg.set(SecondaryOrderID_22);
  OrderCancelReject_0.insert(SecondaryOrderID_22.getString());
  FIX::Text Text_65("STRING_869652676");
  msg.set(Text_65);
  OrderCancelReject_0.insert(Text_65.getString());
  FIX::TradeDate TradeDate_26("LOCALMKTDATE_516230141");
  msg.set(TradeDate_26);
  OrderCancelReject_0.insert(TradeDate_26.getString());
  FIX::TradeOriginationDate TradeOriginationDate_18("LOCALMKTDATE_1832332898");
  msg.set(TradeOriginationDate_18);
  OrderCancelReject_0.insert(TradeOriginationDate_18.getString());
  FIX::TransactTime TransactTime_47(FIX::UTCTIMESTAMP(20, 54, 16, 12, 2, 2002));
  msg.set(TransactTime_47);
  OrderCancelReject_0.insert(TransactTime_47.getString());
  FIX::WorkingIndicator WorkingIndicator_2(true);
  msg.set(WorkingIndicator_2);
  OrderCancelReject_0.insert(WorkingIndicator_2.getString());
  all_values.push_back(OrderCancelReject_0);

  all_compo_names.insert("OrderCancelReject");


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
