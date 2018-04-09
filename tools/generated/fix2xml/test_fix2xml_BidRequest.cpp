#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/BidRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( BidRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::BidRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BidRequest_0;
  set_field(msg, FIX::BasisPxType{'5'}, BidRequest_0);
  set_field(msg, FIX::BidID{"STRING_1658835184"}, BidRequest_0);
  set_field(msg, FIX::BidRequestTransType{'C'}, BidRequest_0);
  set_field(msg, FIX::BidTradeType{'G'}, BidRequest_0);
  set_field(msg, FIX::BidType{3}, BidRequest_0);
  set_field(msg, FIX::ClientBidID{"STRING_615410183"}, BidRequest_0);
  FIX::CrossPercent CrossPercent_0;
  CrossPercent_0.setString("89.430000");
set_field(msg, CrossPercent_0, BidRequest_0);
  set_field(msg, FIX::Currency{"EUR"}, BidRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1771160547"}, BidRequest_0);
  set_field(msg, FIX::EncodedTextLen{92767861}, BidRequest_0);
  set_field(msg, FIX::ExchangeForPhysical{false}, BidRequest_0);
  set_field(msg, FIX::ForexReq{false}, BidRequest_0);
  set_field(msg, FIX::IncTaxInd{1}, BidRequest_0);
  set_field(msg, FIX::LiquidityIndType{2}, BidRequest_0);
  set_field(msg, FIX::ListName{"STRING_25062242"}, BidRequest_0);
  set_field(msg, FIX::NumBidders{1707673660}, BidRequest_0);
  set_field(msg, FIX::NumTickets{1432594751}, BidRequest_0);
  FIX::OutMainCntryUIndex OutMainCntryUIndex_0;
  OutMainCntryUIndex_0.setString("14967880");
set_field(msg, OutMainCntryUIndex_0, BidRequest_0);
  set_field(msg, FIX::ProgPeriodInterval{1410849142}, BidRequest_0);
  set_field(msg, FIX::ProgRptReqs{2}, BidRequest_0);
  FIX::SideValue1 SideValue1_0;
  SideValue1_0.setString("11716972");
set_field(msg, SideValue1_0, BidRequest_0);
  FIX::SideValue2 SideValue2_0;
  SideValue2_0.setString("13823777");
set_field(msg, SideValue2_0, BidRequest_0);
  set_field(msg, FIX::StrikeTime{FIX::UTCTIMESTAMP(3, 15, 0, 7, 8, 2015)}, BidRequest_0);
  set_field(msg, FIX::Text{"STRING_903339166"}, BidRequest_0);
  set_field(msg, FIX::TotNoRelatedSym{932889556}, BidRequest_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1190088179"}, BidRequest_0);
  FIX::WtAverageLiquidity WtAverageLiquidity_0;
  WtAverageLiquidity_0.setString("13.710000");
set_field(msg, WtAverageLiquidity_0, BidRequest_0);
  all_values.push_back(BidRequest_0);

  all_compo_names.insert("BidRequest");

  // BidCompReqGrp
  // Group BidCompReqGrp.NoBidComponents
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_0;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_0;
    set_field(noBidComponents_0_0, FIX::Account{"STRING_1233285091"}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::AcctIDSource{5}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::ListID{"STRING_399157353"}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::NetGrossInd{1}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::SettlDate{"LOCALMKTDATE_1710127883"}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::SettlType{"STRING_4"}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::Side{'1'}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::TradingSessionID{"STRING_2"}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::TradingSessionSubID{"STRING_3"}, BidCompReqGrp_NoBidComponents_0);
    all_values.push_back(BidCompReqGrp_NoBidComponents_0);
    all_compo_names.insert("...NoBidComponents");

    msg.addGroup(noBidComponents_0_0);
  }
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_1;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_1;
    set_field(noBidComponents_0_1, FIX::Account{"STRING_42105976"}, BidCompReqGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::AcctIDSource{1}, BidCompReqGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::ListID{"STRING_1583193722"}, BidCompReqGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::NetGrossInd{2}, BidCompReqGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::SettlDate{"LOCALMKTDATE_669867951"}, BidCompReqGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::SettlType{"STRING_6"}, BidCompReqGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::Side{'C'}, BidCompReqGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::TradingSessionID{"STRING_5"}, BidCompReqGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::TradingSessionSubID{"STRING_7"}, BidCompReqGrp_NoBidComponents_1);
    all_values.push_back(BidCompReqGrp_NoBidComponents_1);
    all_compo_names.insert("...NoBidComponents");

    msg.addGroup(noBidComponents_0_1);
  }
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_2;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_2;
    set_field(noBidComponents_0_2, FIX::Account{"STRING_248039254"}, BidCompReqGrp_NoBidComponents_2);
    set_field(noBidComponents_0_2, FIX::AcctIDSource{5}, BidCompReqGrp_NoBidComponents_2);
    set_field(noBidComponents_0_2, FIX::ListID{"STRING_1938350285"}, BidCompReqGrp_NoBidComponents_2);
    set_field(noBidComponents_0_2, FIX::NetGrossInd{2}, BidCompReqGrp_NoBidComponents_2);
    set_field(noBidComponents_0_2, FIX::SettlDate{"LOCALMKTDATE_1104287756"}, BidCompReqGrp_NoBidComponents_2);
    set_field(noBidComponents_0_2, FIX::SettlType{"STRING_4"}, BidCompReqGrp_NoBidComponents_2);
    set_field(noBidComponents_0_2, FIX::Side{'E'}, BidCompReqGrp_NoBidComponents_2);
    set_field(noBidComponents_0_2, FIX::TradingSessionID{"STRING_4"}, BidCompReqGrp_NoBidComponents_2);
    set_field(noBidComponents_0_2, FIX::TradingSessionSubID{"STRING_6"}, BidCompReqGrp_NoBidComponents_2);
    all_values.push_back(BidCompReqGrp_NoBidComponents_2);
    all_compo_names.insert("...NoBidComponents");

    msg.addGroup(noBidComponents_0_2);
  }
  // BidDescReqGrp
  // Group BidDescReqGrp.NoBidDescriptors
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_0;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_0;
    set_field(noBidDescriptors_0_0, FIX::BidDescriptor{"STRING_1825628931"}, BidDescReqGrp_NoBidDescriptors_0);
    set_field(noBidDescriptors_0_0, FIX::BidDescriptorType{3}, BidDescReqGrp_NoBidDescriptors_0);
    FIX::EFPTrackingError EFPTrackingError_0;
    EFPTrackingError_0.setString("83.630000");
set_field(noBidDescriptors_0_0, EFPTrackingError_0, BidDescReqGrp_NoBidDescriptors_0);
    FIX::FairValue FairValue_0;
    FairValue_0.setString("9114303");
set_field(noBidDescriptors_0_0, FairValue_0, BidDescReqGrp_NoBidDescriptors_0);
    set_field(noBidDescriptors_0_0, FIX::LiquidityNumSecurities{1020161020}, BidDescReqGrp_NoBidDescriptors_0);
    FIX::LiquidityPctHigh LiquidityPctHigh_0;
    LiquidityPctHigh_0.setString("57.160000");
set_field(noBidDescriptors_0_0, LiquidityPctHigh_0, BidDescReqGrp_NoBidDescriptors_0);
    FIX::LiquidityPctLow LiquidityPctLow_0;
    LiquidityPctLow_0.setString("20.490000");
set_field(noBidDescriptors_0_0, LiquidityPctLow_0, BidDescReqGrp_NoBidDescriptors_0);
    FIX::LiquidityValue LiquidityValue_0;
    LiquidityValue_0.setString("5828052");
set_field(noBidDescriptors_0_0, LiquidityValue_0, BidDescReqGrp_NoBidDescriptors_0);
    FIX::OutsideIndexPct OutsideIndexPct_0;
    OutsideIndexPct_0.setString("99.680000");
set_field(noBidDescriptors_0_0, OutsideIndexPct_0, BidDescReqGrp_NoBidDescriptors_0);
    set_field(noBidDescriptors_0_0, FIX::SideValueInd{2}, BidDescReqGrp_NoBidDescriptors_0);
    FIX::ValueOfFutures ValueOfFutures_0;
    ValueOfFutures_0.setString("2655101");
set_field(noBidDescriptors_0_0, ValueOfFutures_0, BidDescReqGrp_NoBidDescriptors_0);
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_0);
    all_compo_names.insert("...NoBidDescriptors");

    msg.addGroup(noBidDescriptors_0_0);
  }
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_1;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_1;
    set_field(noBidDescriptors_0_1, FIX::BidDescriptor{"STRING_522257800"}, BidDescReqGrp_NoBidDescriptors_1);
    set_field(noBidDescriptors_0_1, FIX::BidDescriptorType{1}, BidDescReqGrp_NoBidDescriptors_1);
    FIX::EFPTrackingError EFPTrackingError_1;
    EFPTrackingError_1.setString("69.940000");
set_field(noBidDescriptors_0_1, EFPTrackingError_1, BidDescReqGrp_NoBidDescriptors_1);
    FIX::FairValue FairValue_1;
    FairValue_1.setString("21054515");
set_field(noBidDescriptors_0_1, FairValue_1, BidDescReqGrp_NoBidDescriptors_1);
    set_field(noBidDescriptors_0_1, FIX::LiquidityNumSecurities{1670583550}, BidDescReqGrp_NoBidDescriptors_1);
    FIX::LiquidityPctHigh LiquidityPctHigh_1;
    LiquidityPctHigh_1.setString("12.970000");
set_field(noBidDescriptors_0_1, LiquidityPctHigh_1, BidDescReqGrp_NoBidDescriptors_1);
    FIX::LiquidityPctLow LiquidityPctLow_1;
    LiquidityPctLow_1.setString("59.800000");
set_field(noBidDescriptors_0_1, LiquidityPctLow_1, BidDescReqGrp_NoBidDescriptors_1);
    FIX::LiquidityValue LiquidityValue_1;
    LiquidityValue_1.setString("5362450");
set_field(noBidDescriptors_0_1, LiquidityValue_1, BidDescReqGrp_NoBidDescriptors_1);
    FIX::OutsideIndexPct OutsideIndexPct_1;
    OutsideIndexPct_1.setString("37.500000");
set_field(noBidDescriptors_0_1, OutsideIndexPct_1, BidDescReqGrp_NoBidDescriptors_1);
    set_field(noBidDescriptors_0_1, FIX::SideValueInd{1}, BidDescReqGrp_NoBidDescriptors_1);
    FIX::ValueOfFutures ValueOfFutures_1;
    ValueOfFutures_1.setString("7842842");
set_field(noBidDescriptors_0_1, ValueOfFutures_1, BidDescReqGrp_NoBidDescriptors_1);
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_1);
    all_compo_names.insert("...NoBidDescriptors");

    msg.addGroup(noBidDescriptors_0_1);
  }
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_2;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_2;
    set_field(noBidDescriptors_0_2, FIX::BidDescriptor{"STRING_1683887546"}, BidDescReqGrp_NoBidDescriptors_2);
    set_field(noBidDescriptors_0_2, FIX::BidDescriptorType{1}, BidDescReqGrp_NoBidDescriptors_2);
    FIX::EFPTrackingError EFPTrackingError_2;
    EFPTrackingError_2.setString("44.980000");
set_field(noBidDescriptors_0_2, EFPTrackingError_2, BidDescReqGrp_NoBidDescriptors_2);
    FIX::FairValue FairValue_2;
    FairValue_2.setString("6406916");
set_field(noBidDescriptors_0_2, FairValue_2, BidDescReqGrp_NoBidDescriptors_2);
    set_field(noBidDescriptors_0_2, FIX::LiquidityNumSecurities{750296876}, BidDescReqGrp_NoBidDescriptors_2);
    FIX::LiquidityPctHigh LiquidityPctHigh_2;
    LiquidityPctHigh_2.setString("48.950000");
set_field(noBidDescriptors_0_2, LiquidityPctHigh_2, BidDescReqGrp_NoBidDescriptors_2);
    FIX::LiquidityPctLow LiquidityPctLow_2;
    LiquidityPctLow_2.setString("24.050000");
set_field(noBidDescriptors_0_2, LiquidityPctLow_2, BidDescReqGrp_NoBidDescriptors_2);
    FIX::LiquidityValue LiquidityValue_2;
    LiquidityValue_2.setString("17658886");
set_field(noBidDescriptors_0_2, LiquidityValue_2, BidDescReqGrp_NoBidDescriptors_2);
    FIX::OutsideIndexPct OutsideIndexPct_2;
    OutsideIndexPct_2.setString("12.000000");
set_field(noBidDescriptors_0_2, OutsideIndexPct_2, BidDescReqGrp_NoBidDescriptors_2);
    set_field(noBidDescriptors_0_2, FIX::SideValueInd{1}, BidDescReqGrp_NoBidDescriptors_2);
    FIX::ValueOfFutures ValueOfFutures_2;
    ValueOfFutures_2.setString("14023180");
set_field(noBidDescriptors_0_2, ValueOfFutures_2, BidDescReqGrp_NoBidDescriptors_2);
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_2);
    all_compo_names.insert("...NoBidDescriptors");

    msg.addGroup(noBidDescriptors_0_2);
  }
  // header
  multiset<string> header_11;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_11);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1865808063"}, header_11);
  set_header_field(msg.getHeader(), FIX::BodyLength{274995457}, header_11);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_904111632"}, header_11);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1140746464"}, header_11);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_857800712"}, header_11);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_2015721601"}, header_11);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1019444401}, header_11);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_11);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{390495753}, header_11);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_940248314"}, header_11);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_626094205"}, header_11);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_348463627"}, header_11);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 47, 31, 1, 6, 2013)}, header_11);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_11);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_11);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1372868389"}, header_11);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{652601157}, header_11);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1326964796"}, header_11);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1337519636"}, header_11);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1928833562"}, header_11);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(13, 43, 44, 13, 3, 2003)}, header_11);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1182684737"}, header_11);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1594798482"}, header_11);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1333000374"}, header_11);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1050922690"}, header_11);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{466759235}, header_11);
  all_values.push_back(header_11);
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
