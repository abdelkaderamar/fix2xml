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
  multiset<string> ListStatus_0;
  FIX::ContingencyType ContingencyType_0(3);
  msg.set(ContingencyType_0);
  ListStatus_0.insert(ContingencyType_0.getString());
  FIX::EncodedListStatusText EncodedListStatusText_0("DATA_1989493595");
  msg.set(EncodedListStatusText_0);
  ListStatus_0.insert(EncodedListStatusText_0.getString());
  FIX::EncodedListStatusTextLen EncodedListStatusTextLen_0(1025561061);
  msg.set(EncodedListStatusTextLen_0);
  ListStatus_0.insert(EncodedListStatusTextLen_0.getString());
  FIX::LastFragment LastFragment_6(false);
  msg.set(LastFragment_6);
  ListStatus_0.insert(LastFragment_6.getString());
  FIX::ListID ListID_16("STRING_62199361");
  msg.set(ListID_16);
  ListStatus_0.insert(ListID_16.getString());
  FIX::ListOrderStatus ListOrderStatus_0(7);
  msg.set(ListOrderStatus_0);
  ListStatus_0.insert(ListOrderStatus_0.getString());
  FIX::ListRejectReason ListRejectReason_0(11);
  msg.set(ListRejectReason_0);
  ListStatus_0.insert(ListRejectReason_0.getString());
  FIX::ListStatusText ListStatusText_0("STRING_1816859039");
  msg.set(ListStatusText_0);
  ListStatus_0.insert(ListStatusText_0.getString());
  FIX::ListStatusType ListStatusType_0(4);
  msg.set(ListStatusType_0);
  ListStatus_0.insert(ListStatusType_0.getString());
  FIX::NoRpts NoRpts_0(1985389151);
  msg.set(NoRpts_0);
  ListStatus_0.insert(NoRpts_0.getString());
  FIX::RptSeq RptSeq_0(361039950);
  msg.set(RptSeq_0);
  ListStatus_0.insert(RptSeq_0.getString());
  FIX::TotNoOrders TotNoOrders_0(1492809090);
  msg.set(TotNoOrders_0);
  ListStatus_0.insert(TotNoOrders_0.getString());
  FIX::TransactTime TransactTime_22(FIX::UTCTIMESTAMP(6, 58, 43, 9, 3, 2014));
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
    AvgPx_6.setString("14014840");
    noOrders_0_0.set(AvgPx_6);
    OrdListStatGrp_NoOrders_0.insert(AvgPx_6.getString());
    FIX::ClOrdID ClOrdID_23("STRING_2139073616");
    noOrders_0_0.set(ClOrdID_23);
    OrdListStatGrp_NoOrders_0.insert(ClOrdID_23.getString());
    FIX::CumQty CumQty_2;
    CumQty_2.setString("6074299");
    noOrders_0_0.set(CumQty_2);
    OrdListStatGrp_NoOrders_0.insert(CumQty_2.getString());
    FIX::CxlQty CxlQty_0;
    CxlQty_0.setString("1461481");
    noOrders_0_0.set(CxlQty_0);
    OrdListStatGrp_NoOrders_0.insert(CxlQty_0.getString());
    FIX::EncodedText EncodedText_40("DATA_660139264");
    noOrders_0_0.set(EncodedText_40);
    OrdListStatGrp_NoOrders_0.insert(EncodedText_40.getString());
    FIX::EncodedTextLen EncodedTextLen_40(485127249);
    noOrders_0_0.set(EncodedTextLen_40);
    OrdListStatGrp_NoOrders_0.insert(EncodedTextLen_40.getString());
    FIX::LeavesQty LeavesQty_1;
    LeavesQty_1.setString("2940631");
    noOrders_0_0.set(LeavesQty_1);
    OrdListStatGrp_NoOrders_0.insert(LeavesQty_1.getString());
    FIX::OrdRejReason OrdRejReason_1(11);
    noOrders_0_0.set(OrdRejReason_1);
    OrdListStatGrp_NoOrders_0.insert(OrdRejReason_1.getString());
    FIX::OrdStatus OrdStatus_1('7');
    noOrders_0_0.set(OrdStatus_1);
    OrdListStatGrp_NoOrders_0.insert(OrdStatus_1.getString());
    FIX::OrderID OrderID_23("STRING_1994271987");
    noOrders_0_0.set(OrderID_23);
    OrdListStatGrp_NoOrders_0.insert(OrderID_23.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_21("STRING_502117762");
    noOrders_0_0.set(SecondaryClOrdID_21);
    OrdListStatGrp_NoOrders_0.insert(SecondaryClOrdID_21.getString());
    FIX::Text Text_40("STRING_224204405");
    noOrders_0_0.set(Text_40);
    OrdListStatGrp_NoOrders_0.insert(Text_40.getString());
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
    AvgPx_7.setString("15276788");
    noOrders_0_1.set(AvgPx_7);
    OrdListStatGrp_NoOrders_1.insert(AvgPx_7.getString());
    FIX::ClOrdID ClOrdID_24("STRING_269569486");
    noOrders_0_1.set(ClOrdID_24);
    OrdListStatGrp_NoOrders_1.insert(ClOrdID_24.getString());
    FIX::CumQty CumQty_3;
    CumQty_3.setString("18984812");
    noOrders_0_1.set(CumQty_3);
    OrdListStatGrp_NoOrders_1.insert(CumQty_3.getString());
    FIX::CxlQty CxlQty_1;
    CxlQty_1.setString("5568173");
    noOrders_0_1.set(CxlQty_1);
    OrdListStatGrp_NoOrders_1.insert(CxlQty_1.getString());
    FIX::EncodedText EncodedText_41("DATA_1134742331");
    noOrders_0_1.set(EncodedText_41);
    OrdListStatGrp_NoOrders_1.insert(EncodedText_41.getString());
    FIX::EncodedTextLen EncodedTextLen_41(1567856687);
    noOrders_0_1.set(EncodedTextLen_41);
    OrdListStatGrp_NoOrders_1.insert(EncodedTextLen_41.getString());
    FIX::LeavesQty LeavesQty_2;
    LeavesQty_2.setString("15826173");
    noOrders_0_1.set(LeavesQty_2);
    OrdListStatGrp_NoOrders_1.insert(LeavesQty_2.getString());
    FIX::OrdRejReason OrdRejReason_2(5);
    noOrders_0_1.set(OrdRejReason_2);
    OrdListStatGrp_NoOrders_1.insert(OrdRejReason_2.getString());
    FIX::OrdStatus OrdStatus_2('3');
    noOrders_0_1.set(OrdStatus_2);
    OrdListStatGrp_NoOrders_1.insert(OrdStatus_2.getString());
    FIX::OrderID OrderID_24("STRING_927942783");
    noOrders_0_1.set(OrderID_24);
    OrdListStatGrp_NoOrders_1.insert(OrderID_24.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_22("STRING_1380246888");
    noOrders_0_1.set(SecondaryClOrdID_22);
    OrdListStatGrp_NoOrders_1.insert(SecondaryClOrdID_22.getString());
    FIX::Text Text_41("STRING_2063039388");
    noOrders_0_1.set(Text_41);
    OrdListStatGrp_NoOrders_1.insert(Text_41.getString());
    FIX::WorkingIndicator WorkingIndicator_2(false);
    noOrders_0_1.set(WorkingIndicator_2);
    OrdListStatGrp_NoOrders_1.insert(WorkingIndicator_2.getString());
    all_values.push_back(OrdListStatGrp_NoOrders_1);

    msg.addGroup(noOrders_0_1);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
