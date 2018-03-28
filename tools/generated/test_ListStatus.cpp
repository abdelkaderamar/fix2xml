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
  FIX::EncodedListStatusText EncodedListStatusText_0("DATA_427601286");
  msg.set(EncodedListStatusText_0);
  ListStatus_0.insert(EncodedListStatusText_0.getString());
  FIX::EncodedListStatusTextLen EncodedListStatusTextLen_0(2117877245);
  msg.set(EncodedListStatusTextLen_0);
  ListStatus_0.insert(EncodedListStatusTextLen_0.getString());
  FIX::LastFragment LastFragment_6(false);
  msg.set(LastFragment_6);
  ListStatus_0.insert(LastFragment_6.getString());
  FIX::ListID ListID_17("STRING_2056549011");
  msg.set(ListID_17);
  ListStatus_0.insert(ListID_17.getString());
  FIX::ListOrderStatus ListOrderStatus_0(7);
  msg.set(ListOrderStatus_0);
  ListStatus_0.insert(ListOrderStatus_0.getString());
  FIX::ListRejectReason ListRejectReason_0(2);
  msg.set(ListRejectReason_0);
  ListStatus_0.insert(ListRejectReason_0.getString());
  FIX::ListStatusText ListStatusText_0("STRING_1176961508");
  msg.set(ListStatusText_0);
  ListStatus_0.insert(ListStatusText_0.getString());
  FIX::ListStatusType ListStatusType_0(6);
  msg.set(ListStatusType_0);
  ListStatus_0.insert(ListStatusType_0.getString());
  FIX::NoRpts NoRpts_0(1883188613);
  msg.set(NoRpts_0);
  ListStatus_0.insert(NoRpts_0.getString());
  FIX::RptSeq RptSeq_0(1779841466);
  msg.set(RptSeq_0);
  ListStatus_0.insert(RptSeq_0.getString());
  FIX::TotNoOrders TotNoOrders_0(1144663547);
  msg.set(TotNoOrders_0);
  ListStatus_0.insert(TotNoOrders_0.getString());
  FIX::TransactTime TransactTime_22(FIX::UTCTIMESTAMP(18, 10, 3, 13, 5, 2000));
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
    AvgPx_6.setString("9733998");
    noOrders_0_0.set(AvgPx_6);
    OrdListStatGrp_NoOrders_0.insert(AvgPx_6.getString());
    FIX::ClOrdID ClOrdID_22("STRING_267325089");
    noOrders_0_0.set(ClOrdID_22);
    OrdListStatGrp_NoOrders_0.insert(ClOrdID_22.getString());
    FIX::CumQty CumQty_2;
    CumQty_2.setString("14724537");
    noOrders_0_0.set(CumQty_2);
    OrdListStatGrp_NoOrders_0.insert(CumQty_2.getString());
    FIX::CxlQty CxlQty_0;
    CxlQty_0.setString("6898124");
    noOrders_0_0.set(CxlQty_0);
    OrdListStatGrp_NoOrders_0.insert(CxlQty_0.getString());
    FIX::EncodedText EncodedText_45("DATA_115202544");
    noOrders_0_0.set(EncodedText_45);
    OrdListStatGrp_NoOrders_0.insert(EncodedText_45.getString());
    FIX::EncodedTextLen EncodedTextLen_45(428937777);
    noOrders_0_0.set(EncodedTextLen_45);
    OrdListStatGrp_NoOrders_0.insert(EncodedTextLen_45.getString());
    FIX::LeavesQty LeavesQty_1;
    LeavesQty_1.setString("8177240");
    noOrders_0_0.set(LeavesQty_1);
    OrdListStatGrp_NoOrders_0.insert(LeavesQty_1.getString());
    FIX::OrdRejReason OrdRejReason_1(18);
    noOrders_0_0.set(OrdRejReason_1);
    OrdListStatGrp_NoOrders_0.insert(OrdRejReason_1.getString());
    FIX::OrdStatus OrdStatus_1('6');
    noOrders_0_0.set(OrdStatus_1);
    OrdListStatGrp_NoOrders_0.insert(OrdStatus_1.getString());
    FIX::OrderID OrderID_20("STRING_465346313");
    noOrders_0_0.set(OrderID_20);
    OrdListStatGrp_NoOrders_0.insert(OrderID_20.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_20("STRING_1656435619");
    noOrders_0_0.set(SecondaryClOrdID_20);
    OrdListStatGrp_NoOrders_0.insert(SecondaryClOrdID_20.getString());
    FIX::Text Text_45("STRING_1963858789");
    noOrders_0_0.set(Text_45);
    OrdListStatGrp_NoOrders_0.insert(Text_45.getString());
    FIX::WorkingIndicator WorkingIndicator_1(false);
    noOrders_0_0.set(WorkingIndicator_1);
    OrdListStatGrp_NoOrders_0.insert(WorkingIndicator_1.getString());
    all_values.push_back(OrdListStatGrp_NoOrders_0);

    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::ListStatus::NoOrders noOrders_0_1;
    // OrdListStatGrp.NoOrders
    multiset<string> OrdListStatGrp_NoOrders_1;
    FIX::AvgPx AvgPx_7;
    AvgPx_7.setString("16268292");
    noOrders_0_1.set(AvgPx_7);
    OrdListStatGrp_NoOrders_1.insert(AvgPx_7.getString());
    FIX::ClOrdID ClOrdID_23("STRING_625205616");
    noOrders_0_1.set(ClOrdID_23);
    OrdListStatGrp_NoOrders_1.insert(ClOrdID_23.getString());
    FIX::CumQty CumQty_3;
    CumQty_3.setString("8020129");
    noOrders_0_1.set(CumQty_3);
    OrdListStatGrp_NoOrders_1.insert(CumQty_3.getString());
    FIX::CxlQty CxlQty_1;
    CxlQty_1.setString("6012312");
    noOrders_0_1.set(CxlQty_1);
    OrdListStatGrp_NoOrders_1.insert(CxlQty_1.getString());
    FIX::EncodedText EncodedText_46("DATA_624056559");
    noOrders_0_1.set(EncodedText_46);
    OrdListStatGrp_NoOrders_1.insert(EncodedText_46.getString());
    FIX::EncodedTextLen EncodedTextLen_46(1978974470);
    noOrders_0_1.set(EncodedTextLen_46);
    OrdListStatGrp_NoOrders_1.insert(EncodedTextLen_46.getString());
    FIX::LeavesQty LeavesQty_2;
    LeavesQty_2.setString("5429273");
    noOrders_0_1.set(LeavesQty_2);
    OrdListStatGrp_NoOrders_1.insert(LeavesQty_2.getString());
    FIX::OrdRejReason OrdRejReason_2(1);
    noOrders_0_1.set(OrdRejReason_2);
    OrdListStatGrp_NoOrders_1.insert(OrdRejReason_2.getString());
    FIX::OrdStatus OrdStatus_2('9');
    noOrders_0_1.set(OrdStatus_2);
    OrdListStatGrp_NoOrders_1.insert(OrdStatus_2.getString());
    FIX::OrderID OrderID_21("STRING_1687590910");
    noOrders_0_1.set(OrderID_21);
    OrdListStatGrp_NoOrders_1.insert(OrderID_21.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_21("STRING_1879785264");
    noOrders_0_1.set(SecondaryClOrdID_21);
    OrdListStatGrp_NoOrders_1.insert(SecondaryClOrdID_21.getString());
    FIX::Text Text_46("STRING_429830707");
    noOrders_0_1.set(Text_46);
    OrdListStatGrp_NoOrders_1.insert(Text_46.getString());
    FIX::WorkingIndicator WorkingIndicator_2(true);
    noOrders_0_1.set(WorkingIndicator_2);
    OrdListStatGrp_NoOrders_1.insert(WorkingIndicator_2.getString());
    all_values.push_back(OrdListStatGrp_NoOrders_1);

    msg.addGroup(noOrders_0_1);
  }
  {
    FIX50SP2::ListStatus::NoOrders noOrders_0_2;
    // OrdListStatGrp.NoOrders
    multiset<string> OrdListStatGrp_NoOrders_2;
    FIX::AvgPx AvgPx_8;
    AvgPx_8.setString("3530615");
    noOrders_0_2.set(AvgPx_8);
    OrdListStatGrp_NoOrders_2.insert(AvgPx_8.getString());
    FIX::ClOrdID ClOrdID_24("STRING_1201262920");
    noOrders_0_2.set(ClOrdID_24);
    OrdListStatGrp_NoOrders_2.insert(ClOrdID_24.getString());
    FIX::CumQty CumQty_4;
    CumQty_4.setString("21147886");
    noOrders_0_2.set(CumQty_4);
    OrdListStatGrp_NoOrders_2.insert(CumQty_4.getString());
    FIX::CxlQty CxlQty_2;
    CxlQty_2.setString("1162413");
    noOrders_0_2.set(CxlQty_2);
    OrdListStatGrp_NoOrders_2.insert(CxlQty_2.getString());
    FIX::EncodedText EncodedText_47("DATA_1623874269");
    noOrders_0_2.set(EncodedText_47);
    OrdListStatGrp_NoOrders_2.insert(EncodedText_47.getString());
    FIX::EncodedTextLen EncodedTextLen_47(940704888);
    noOrders_0_2.set(EncodedTextLen_47);
    OrdListStatGrp_NoOrders_2.insert(EncodedTextLen_47.getString());
    FIX::LeavesQty LeavesQty_3;
    LeavesQty_3.setString("3835664");
    noOrders_0_2.set(LeavesQty_3);
    OrdListStatGrp_NoOrders_2.insert(LeavesQty_3.getString());
    FIX::OrdRejReason OrdRejReason_3(15);
    noOrders_0_2.set(OrdRejReason_3);
    OrdListStatGrp_NoOrders_2.insert(OrdRejReason_3.getString());
    FIX::OrdStatus OrdStatus_3('D');
    noOrders_0_2.set(OrdStatus_3);
    OrdListStatGrp_NoOrders_2.insert(OrdStatus_3.getString());
    FIX::OrderID OrderID_22("STRING_498768969");
    noOrders_0_2.set(OrderID_22);
    OrdListStatGrp_NoOrders_2.insert(OrderID_22.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_22("STRING_1377782098");
    noOrders_0_2.set(SecondaryClOrdID_22);
    OrdListStatGrp_NoOrders_2.insert(SecondaryClOrdID_22.getString());
    FIX::Text Text_47("STRING_300757724");
    noOrders_0_2.set(Text_47);
    OrdListStatGrp_NoOrders_2.insert(Text_47.getString());
    FIX::WorkingIndicator WorkingIndicator_3(true);
    noOrders_0_2.set(WorkingIndicator_3);
    OrdListStatGrp_NoOrders_2.insert(WorkingIndicator_3.getString());
    all_values.push_back(OrdListStatGrp_NoOrders_2);

    msg.addGroup(noOrders_0_2);
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
