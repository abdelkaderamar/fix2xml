#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ListStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStatus, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListStatus msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStatus_0;
  FIX::ContingencyType ContingencyType_0(2);
  msg.set(ContingencyType_0);
  ListStatus_0.insert(ContingencyType_0.getString());
  FIX::EncodedListStatusText EncodedListStatusText_0("DATA_1750452629");
  msg.set(EncodedListStatusText_0);
  ListStatus_0.insert(EncodedListStatusText_0.getString());
  FIX::EncodedListStatusTextLen EncodedListStatusTextLen_0(1438523064);
  msg.set(EncodedListStatusTextLen_0);
  ListStatus_0.insert(EncodedListStatusTextLen_0.getString());
  FIX::LastFragment LastFragment_6(false);
  msg.set(LastFragment_6);
  ListStatus_0.insert(LastFragment_6.getString());
  FIX::ListID ListID_19("STRING_354005694");
  msg.set(ListID_19);
  ListStatus_0.insert(ListID_19.getString());
  FIX::ListOrderStatus ListOrderStatus_0(1);
  msg.set(ListOrderStatus_0);
  ListStatus_0.insert(ListOrderStatus_0.getString());
  FIX::ListRejectReason ListRejectReason_0(4);
  msg.set(ListRejectReason_0);
  ListStatus_0.insert(ListRejectReason_0.getString());
  FIX::ListStatusText ListStatusText_0("STRING_1873384367");
  msg.set(ListStatusText_0);
  ListStatus_0.insert(ListStatusText_0.getString());
  FIX::ListStatusType ListStatusType_0(2);
  msg.set(ListStatusType_0);
  ListStatus_0.insert(ListStatusType_0.getString());
  FIX::NoRpts NoRpts_0(716788343);
  msg.set(NoRpts_0);
  ListStatus_0.insert(NoRpts_0.getString());
  FIX::RptSeq RptSeq_0(960315244);
  msg.set(RptSeq_0);
  ListStatus_0.insert(RptSeq_0.getString());
  FIX::TotNoOrders TotNoOrders_0(424684966);
  msg.set(TotNoOrders_0);
  ListStatus_0.insert(TotNoOrders_0.getString());
  FIX::TransactTime TransactTime_22(FIX::UTCTIMESTAMP(5, 17, 21, 0, 12, 2015));
  msg.set(TransactTime_22);
  ListStatus_0.insert(TransactTime_22.getString());
  all_values.push_back(ListStatus_0);

  all_compo_names.insert("ListStatus");

  // OrdListStatGrp
  // Group OrdListStatGrp.NoOrders
  {
    FIX50SP2::ListStatus::NoOrders noOrders_0_0;
    // OrdListStatGrp.NoOrders
    multiset<string> OrdListStatGrp_NoOrders_0;
    FIX::AvgPx AvgPx_6;
    AvgPx_6.setString("4002497");
    noOrders_0_0.set(AvgPx_6);
    OrdListStatGrp_NoOrders_0.insert(AvgPx_6.getString());
    FIX::ClOrdID ClOrdID_23("STRING_1255801080");
    noOrders_0_0.set(ClOrdID_23);
    OrdListStatGrp_NoOrders_0.insert(ClOrdID_23.getString());
    FIX::CumQty CumQty_2;
    CumQty_2.setString("16759632");
    noOrders_0_0.set(CumQty_2);
    OrdListStatGrp_NoOrders_0.insert(CumQty_2.getString());
    FIX::CxlQty CxlQty_0;
    CxlQty_0.setString("2799031");
    noOrders_0_0.set(CxlQty_0);
    OrdListStatGrp_NoOrders_0.insert(CxlQty_0.getString());
    FIX::EncodedText EncodedText_43("DATA_321430785");
    noOrders_0_0.set(EncodedText_43);
    OrdListStatGrp_NoOrders_0.insert(EncodedText_43.getString());
    FIX::EncodedTextLen EncodedTextLen_43(181391989);
    noOrders_0_0.set(EncodedTextLen_43);
    OrdListStatGrp_NoOrders_0.insert(EncodedTextLen_43.getString());
    FIX::LeavesQty LeavesQty_1;
    LeavesQty_1.setString("18979744");
    noOrders_0_0.set(LeavesQty_1);
    OrdListStatGrp_NoOrders_0.insert(LeavesQty_1.getString());
    FIX::OrdRejReason OrdRejReason_1(4);
    noOrders_0_0.set(OrdRejReason_1);
    OrdListStatGrp_NoOrders_0.insert(OrdRejReason_1.getString());
    FIX::OrdStatus OrdStatus_1('5');
    noOrders_0_0.set(OrdStatus_1);
    OrdListStatGrp_NoOrders_0.insert(OrdStatus_1.getString());
    FIX::OrderID OrderID_22("STRING_462450840");
    noOrders_0_0.set(OrderID_22);
    OrdListStatGrp_NoOrders_0.insert(OrderID_22.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_21("STRING_399604898");
    noOrders_0_0.set(SecondaryClOrdID_21);
    OrdListStatGrp_NoOrders_0.insert(SecondaryClOrdID_21.getString());
    FIX::Text Text_43("STRING_1055618991");
    noOrders_0_0.set(Text_43);
    OrdListStatGrp_NoOrders_0.insert(Text_43.getString());
    FIX::WorkingIndicator WorkingIndicator_1(false);
    noOrders_0_0.set(WorkingIndicator_1);
    OrdListStatGrp_NoOrders_0.insert(WorkingIndicator_1.getString());
    all_values.push_back(OrdListStatGrp_NoOrders_0);
    all_compo_names.insert("OrdListStatGrp.NoOrders");

    msg.addGroup(noOrders_0_0);
  }

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
