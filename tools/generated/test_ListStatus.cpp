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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListStatus msg;

  list<multiset<string>> all_values;
  multiset<string> ListStatus_0;
  FIX::ContingencyType ContingencyType_0(1);
  msg.set(ContingencyType_0);
  ListStatus_0.insert(ContingencyType_0.getString());
  FIX::EncodedListStatusText EncodedListStatusText_0("DATA_1089561867");
  msg.set(EncodedListStatusText_0);
  ListStatus_0.insert(EncodedListStatusText_0.getString());
  FIX::EncodedListStatusTextLen EncodedListStatusTextLen_0(1174913660);
  msg.set(EncodedListStatusTextLen_0);
  ListStatus_0.insert(EncodedListStatusTextLen_0.getString());
  FIX::LastFragment LastFragment_6(true);
  msg.set(LastFragment_6);
  ListStatus_0.insert(LastFragment_6.getString());
  FIX::ListID ListID_15("STRING_1693800415");
  msg.set(ListID_15);
  ListStatus_0.insert(ListID_15.getString());
  FIX::ListOrderStatus ListOrderStatus_0(4);
  msg.set(ListOrderStatus_0);
  ListStatus_0.insert(ListOrderStatus_0.getString());
  FIX::ListRejectReason ListRejectReason_0(0);
  msg.set(ListRejectReason_0);
  ListStatus_0.insert(ListRejectReason_0.getString());
  FIX::ListStatusText ListStatusText_0("STRING_1019529795");
  msg.set(ListStatusText_0);
  ListStatus_0.insert(ListStatusText_0.getString());
  FIX::ListStatusType ListStatusType_0(2);
  msg.set(ListStatusType_0);
  ListStatus_0.insert(ListStatusType_0.getString());
  FIX::NoRpts NoRpts_0(1279275577);
  msg.set(NoRpts_0);
  ListStatus_0.insert(NoRpts_0.getString());
  FIX::RptSeq RptSeq_0(416792340);
  msg.set(RptSeq_0);
  ListStatus_0.insert(RptSeq_0.getString());
  FIX::TotNoOrders TotNoOrders_0(340232966);
  msg.set(TotNoOrders_0);
  ListStatus_0.insert(TotNoOrders_0.getString());
  FIX::TransactTime TransactTime_22(FIX::UTCTIMESTAMP(4, 23, 23, 14, 92017));
  msg.set(TransactTime_22);
  ListStatus_0.insert(TransactTime_22.getString());
  all_values.push_back(ListStatus_0);

  // OrdListStatGrp
  // Group OrdListStatGrp.NoOrders
  {
    FIX50SP2::ListStatus::NoOrders noOrders_0_0;
    // OrdListStatGrp.NoOrders
    multiset<string> OrdListStatGrp_NoOrders_0;
    FIX::AvgPx AvgPx_6;
    AvgPx_6.setString("15953831");
    noOrders_0_0.set(AvgPx_6);
    OrdListStatGrp_NoOrders_0.insert(AvgPx_6.getString());
    FIX::ClOrdID ClOrdID_23("STRING_1378916896");
    noOrders_0_0.set(ClOrdID_23);
    OrdListStatGrp_NoOrders_0.insert(ClOrdID_23.getString());
    FIX::CumQty CumQty_2;
    CumQty_2.setString("19260399");
    noOrders_0_0.set(CumQty_2);
    OrdListStatGrp_NoOrders_0.insert(CumQty_2.getString());
    FIX::CxlQty CxlQty_0;
    CxlQty_0.setString("16064557");
    noOrders_0_0.set(CxlQty_0);
    OrdListStatGrp_NoOrders_0.insert(CxlQty_0.getString());
    FIX::EncodedText EncodedText_40("DATA_941946582");
    noOrders_0_0.set(EncodedText_40);
    OrdListStatGrp_NoOrders_0.insert(EncodedText_40.getString());
    FIX::EncodedTextLen EncodedTextLen_40(1271100978);
    noOrders_0_0.set(EncodedTextLen_40);
    OrdListStatGrp_NoOrders_0.insert(EncodedTextLen_40.getString());
    FIX::LeavesQty LeavesQty_1;
    LeavesQty_1.setString("7267554");
    noOrders_0_0.set(LeavesQty_1);
    OrdListStatGrp_NoOrders_0.insert(LeavesQty_1.getString());
    FIX::OrdRejReason OrdRejReason_1(14);
    noOrders_0_0.set(OrdRejReason_1);
    OrdListStatGrp_NoOrders_0.insert(OrdRejReason_1.getString());
    FIX::OrdStatus OrdStatus_1('B');
    noOrders_0_0.set(OrdStatus_1);
    OrdListStatGrp_NoOrders_0.insert(OrdStatus_1.getString());
    FIX::OrderID OrderID_21("STRING_796670186");
    noOrders_0_0.set(OrderID_21);
    OrdListStatGrp_NoOrders_0.insert(OrderID_21.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_21("STRING_2021900942");
    noOrders_0_0.set(SecondaryClOrdID_21);
    OrdListStatGrp_NoOrders_0.insert(SecondaryClOrdID_21.getString());
    FIX::Text Text_40("STRING_53508773");
    noOrders_0_0.set(Text_40);
    OrdListStatGrp_NoOrders_0.insert(Text_40.getString());
    FIX::WorkingIndicator WorkingIndicator_1(true);
    noOrders_0_0.set(WorkingIndicator_1);
    OrdListStatGrp_NoOrders_0.insert(WorkingIndicator_1.getString());
    all_values.push_back(OrdListStatGrp_NoOrders_0);

    msg.addGroup(noOrders_0_0);
  }

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
