#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ListStatus msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStatus_0;
  set_field(msg, FIX::ContingencyType{3}, ListStatus_0);
  set_field(msg, FIX::EncodedListStatusText{"DATA_501932858"}, ListStatus_0);
  set_field(msg, FIX::EncodedListStatusTextLen{1210754708}, ListStatus_0);
  set_field(msg, FIX::LastFragment{false}, ListStatus_0);
  set_field(msg, FIX::ListID{"STRING_200336860"}, ListStatus_0);
  set_field(msg, FIX::ListOrderStatus{1}, ListStatus_0);
  set_field(msg, FIX::ListRejectReason{6}, ListStatus_0);
  set_field(msg, FIX::ListStatusText{"STRING_1291366912"}, ListStatus_0);
  set_field(msg, FIX::ListStatusType{5}, ListStatus_0);
  set_field(msg, FIX::NoRpts{1295487177}, ListStatus_0);
  set_field(msg, FIX::RptSeq{97029450}, ListStatus_0);
  set_field(msg, FIX::TotNoOrders{1411754247}, ListStatus_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(22, 45, 20, 17, 10, 2005)}, ListStatus_0);
  all_values.push_back(ListStatus_0);

  all_compo_names.insert("ListStatus");

  // OrdListStatGrp
  // Group OrdListStatGrp.NoOrders
  {
    FIX50SP2::ListStatus::NoOrders noOrders_0_0;
    // OrdListStatGrp.NoOrders
    multiset<string> OrdListStatGrp_NoOrders_0;
    FIX::AvgPx AvgPx_6;
    AvgPx_6.setString("9281424");
set_field(noOrders_0_0, AvgPx_6, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_1836240150"}, OrdListStatGrp_NoOrders_0);
    FIX::CumQty CumQty_2;
    CumQty_2.setString("5590604");
set_field(noOrders_0_0, CumQty_2, OrdListStatGrp_NoOrders_0);
    FIX::CxlQty CxlQty_0;
    CxlQty_0.setString("7727975");
set_field(noOrders_0_0, CxlQty_0, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::EncodedText{"DATA_2075653717"}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::EncodedTextLen{694803755}, OrdListStatGrp_NoOrders_0);
    FIX::LeavesQty LeavesQty_1;
    LeavesQty_1.setString("14707734");
set_field(noOrders_0_0, LeavesQty_1, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrdRejReason{3}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrdStatus{'B'}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_930344718"}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_1570958074"}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::Text{"STRING_1449665718"}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::WorkingIndicator{false}, OrdListStatGrp_NoOrders_0);
    all_values.push_back(OrdListStatGrp_NoOrders_0);
    all_compo_names.insert("...NoOrders");

    msg.addGroup(noOrders_0_0);
  }
  // header
  multiset<string> header_36;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_36);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_599344441"}, header_36);
  set_header_field(msg.getHeader(), FIX::BodyLength{1632614437}, header_36);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_185194035"}, header_36);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1712070360"}, header_36);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_776497701"}, header_36);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_952418263"}, header_36);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{860073889}, header_36);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_36);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{216688862}, header_36);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1474483644"}, header_36);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_675100662"}, header_36);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1619897987"}, header_36);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 24, 9, 25, 9, 2001)}, header_36);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_36);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_36);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_534329160"}, header_36);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1458990488}, header_36);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1454357947"}, header_36);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_370532630"}, header_36);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_402453716"}, header_36);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(0, 14, 15, 18, 8, 2014)}, header_36);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_613430226"}, header_36);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_2016050587"}, header_36);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1931125086"}, header_36);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1565848489"}, header_36);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{728640828}, header_36);
  all_values.push_back(header_36);
  all_compo_names.insert(".header");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";
  cout << "////////////////////////////////////////////" << endl;
  cout << msg.toXML() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    BOOST_LOG_TRIVIAL(debug) << "XML Elements are:";
    cout << "	[";
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

    BOOST_LOG_TRIVIAL(debug) << "FIX Components are:"; 
    cout << "	[";
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

  }
  BOOST_LOG_TRIVIAL(debug) << "All FIX components";
  for (const auto& l : all_values) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }
  BOOST_LOG_TRIVIAL(debug) << "All XML components";
  for (const auto& l : elt_lists) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;

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
      BOOST_LOG_TRIVIAL(debug) << "[TO CHECK] This XML component was not found in FIX message";
      cout << "	 ---> [";
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << "]" << endl << endl;
    } // end if ! found
  } // end for elt_lists
}
