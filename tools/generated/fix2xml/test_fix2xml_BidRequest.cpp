#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::BidRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BidRequest_0;
  set_field(msg, FIX::BasisPxType{'4'}, BidRequest_0);
  set_field(msg, FIX::BidID{"STRING_65678055"}, BidRequest_0);
  set_field(msg, FIX::BidRequestTransType{'N'}, BidRequest_0);
  set_field(msg, FIX::BidTradeType{'A'}, BidRequest_0);
  set_field(msg, FIX::BidType{3}, BidRequest_0);
  set_field(msg, FIX::ClientBidID{"STRING_510594408"}, BidRequest_0);
  FIX::CrossPercent CrossPercent_0;
  CrossPercent_0.setString("44.810000");
set_field(msg, CrossPercent_0, BidRequest_0);
  set_field(msg, FIX::Currency{"GBP"}, BidRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1237119207"}, BidRequest_0);
  set_field(msg, FIX::EncodedTextLen{1962657527}, BidRequest_0);
  set_field(msg, FIX::ExchangeForPhysical{true}, BidRequest_0);
  set_field(msg, FIX::ForexReq{true}, BidRequest_0);
  set_field(msg, FIX::IncTaxInd{2}, BidRequest_0);
  set_field(msg, FIX::LiquidityIndType{1}, BidRequest_0);
  set_field(msg, FIX::ListName{"STRING_851729883"}, BidRequest_0);
  set_field(msg, FIX::NumBidders{1320722754}, BidRequest_0);
  set_field(msg, FIX::NumTickets{548500664}, BidRequest_0);
  FIX::OutMainCntryUIndex OutMainCntryUIndex_0;
  OutMainCntryUIndex_0.setString("20540160");
set_field(msg, OutMainCntryUIndex_0, BidRequest_0);
  set_field(msg, FIX::ProgPeriodInterval{879911726}, BidRequest_0);
  set_field(msg, FIX::ProgRptReqs{1}, BidRequest_0);
  FIX::SideValue1 SideValue1_0;
  SideValue1_0.setString("18871944");
set_field(msg, SideValue1_0, BidRequest_0);
  FIX::SideValue2 SideValue2_0;
  SideValue2_0.setString("6086351");
set_field(msg, SideValue2_0, BidRequest_0);
  set_field(msg, FIX::StrikeTime{FIX::UTCTIMESTAMP(5, 22, 22, 24, 10, 2008)}, BidRequest_0);
  set_field(msg, FIX::Text{"STRING_443596273"}, BidRequest_0);
  set_field(msg, FIX::TotNoRelatedSym{812484455}, BidRequest_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_537563400"}, BidRequest_0);
  FIX::WtAverageLiquidity WtAverageLiquidity_0;
  WtAverageLiquidity_0.setString("75.640000");
set_field(msg, WtAverageLiquidity_0, BidRequest_0);
  all_values.push_back(BidRequest_0);

  all_compo_names.insert("BidRequest");

  // BidCompReqGrp
  // Group BidCompReqGrp.NoBidComponents
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_0;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_0;
    set_field(noBidComponents_0_0, FIX::Account{"STRING_1341352469"}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::AcctIDSource{3}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::ListID{"STRING_376943324"}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::NetGrossInd{1}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::SettlDate{"LOCALMKTDATE_1524333206"}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::SettlType{"STRING_0"}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::Side{'G'}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::TradingSessionID{"STRING_2"}, BidCompReqGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::TradingSessionSubID{"STRING_5"}, BidCompReqGrp_NoBidComponents_0);
    all_values.push_back(BidCompReqGrp_NoBidComponents_0);
    all_compo_names.insert("...NoBidComponents");

    msg.addGroup(noBidComponents_0_0);
  }
  // BidDescReqGrp
  // Group BidDescReqGrp.NoBidDescriptors
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_0;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_0;
    set_field(noBidDescriptors_0_0, FIX::BidDescriptor{"STRING_1997918353"}, BidDescReqGrp_NoBidDescriptors_0);
    set_field(noBidDescriptors_0_0, FIX::BidDescriptorType{3}, BidDescReqGrp_NoBidDescriptors_0);
    FIX::EFPTrackingError EFPTrackingError_0;
    EFPTrackingError_0.setString("43.630000");
set_field(noBidDescriptors_0_0, EFPTrackingError_0, BidDescReqGrp_NoBidDescriptors_0);
    FIX::FairValue FairValue_0;
    FairValue_0.setString("3989353");
set_field(noBidDescriptors_0_0, FairValue_0, BidDescReqGrp_NoBidDescriptors_0);
    set_field(noBidDescriptors_0_0, FIX::LiquidityNumSecurities{441000661}, BidDescReqGrp_NoBidDescriptors_0);
    FIX::LiquidityPctHigh LiquidityPctHigh_0;
    LiquidityPctHigh_0.setString("60.890000");
set_field(noBidDescriptors_0_0, LiquidityPctHigh_0, BidDescReqGrp_NoBidDescriptors_0);
    FIX::LiquidityPctLow LiquidityPctLow_0;
    LiquidityPctLow_0.setString("94.500000");
set_field(noBidDescriptors_0_0, LiquidityPctLow_0, BidDescReqGrp_NoBidDescriptors_0);
    FIX::LiquidityValue LiquidityValue_0;
    LiquidityValue_0.setString("1807114");
set_field(noBidDescriptors_0_0, LiquidityValue_0, BidDescReqGrp_NoBidDescriptors_0);
    FIX::OutsideIndexPct OutsideIndexPct_0;
    OutsideIndexPct_0.setString("75.570000");
set_field(noBidDescriptors_0_0, OutsideIndexPct_0, BidDescReqGrp_NoBidDescriptors_0);
    set_field(noBidDescriptors_0_0, FIX::SideValueInd{1}, BidDescReqGrp_NoBidDescriptors_0);
    FIX::ValueOfFutures ValueOfFutures_0;
    ValueOfFutures_0.setString("17050331");
set_field(noBidDescriptors_0_0, ValueOfFutures_0, BidDescReqGrp_NoBidDescriptors_0);
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_0);
    all_compo_names.insert("...NoBidDescriptors");

    msg.addGroup(noBidDescriptors_0_0);
  }
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_1;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_1;
    set_field(noBidDescriptors_0_1, FIX::BidDescriptor{"STRING_71452"}, BidDescReqGrp_NoBidDescriptors_1);
    set_field(noBidDescriptors_0_1, FIX::BidDescriptorType{2}, BidDescReqGrp_NoBidDescriptors_1);
    FIX::EFPTrackingError EFPTrackingError_1;
    EFPTrackingError_1.setString("41.630000");
set_field(noBidDescriptors_0_1, EFPTrackingError_1, BidDescReqGrp_NoBidDescriptors_1);
    FIX::FairValue FairValue_1;
    FairValue_1.setString("11264575");
set_field(noBidDescriptors_0_1, FairValue_1, BidDescReqGrp_NoBidDescriptors_1);
    set_field(noBidDescriptors_0_1, FIX::LiquidityNumSecurities{1856664309}, BidDescReqGrp_NoBidDescriptors_1);
    FIX::LiquidityPctHigh LiquidityPctHigh_1;
    LiquidityPctHigh_1.setString("4.360000");
set_field(noBidDescriptors_0_1, LiquidityPctHigh_1, BidDescReqGrp_NoBidDescriptors_1);
    FIX::LiquidityPctLow LiquidityPctLow_1;
    LiquidityPctLow_1.setString("20.240000");
set_field(noBidDescriptors_0_1, LiquidityPctLow_1, BidDescReqGrp_NoBidDescriptors_1);
    FIX::LiquidityValue LiquidityValue_1;
    LiquidityValue_1.setString("2467440");
set_field(noBidDescriptors_0_1, LiquidityValue_1, BidDescReqGrp_NoBidDescriptors_1);
    FIX::OutsideIndexPct OutsideIndexPct_1;
    OutsideIndexPct_1.setString("80.000000");
set_field(noBidDescriptors_0_1, OutsideIndexPct_1, BidDescReqGrp_NoBidDescriptors_1);
    set_field(noBidDescriptors_0_1, FIX::SideValueInd{2}, BidDescReqGrp_NoBidDescriptors_1);
    FIX::ValueOfFutures ValueOfFutures_1;
    ValueOfFutures_1.setString("15880965");
set_field(noBidDescriptors_0_1, ValueOfFutures_1, BidDescReqGrp_NoBidDescriptors_1);
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_1);
    all_compo_names.insert("...NoBidDescriptors");

    msg.addGroup(noBidDescriptors_0_1);
  }
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_2;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_2;
    set_field(noBidDescriptors_0_2, FIX::BidDescriptor{"STRING_1707036324"}, BidDescReqGrp_NoBidDescriptors_2);
    set_field(noBidDescriptors_0_2, FIX::BidDescriptorType{2}, BidDescReqGrp_NoBidDescriptors_2);
    FIX::EFPTrackingError EFPTrackingError_2;
    EFPTrackingError_2.setString("97.230000");
set_field(noBidDescriptors_0_2, EFPTrackingError_2, BidDescReqGrp_NoBidDescriptors_2);
    FIX::FairValue FairValue_2;
    FairValue_2.setString("10838858");
set_field(noBidDescriptors_0_2, FairValue_2, BidDescReqGrp_NoBidDescriptors_2);
    set_field(noBidDescriptors_0_2, FIX::LiquidityNumSecurities{429733076}, BidDescReqGrp_NoBidDescriptors_2);
    FIX::LiquidityPctHigh LiquidityPctHigh_2;
    LiquidityPctHigh_2.setString("4.420000");
set_field(noBidDescriptors_0_2, LiquidityPctHigh_2, BidDescReqGrp_NoBidDescriptors_2);
    FIX::LiquidityPctLow LiquidityPctLow_2;
    LiquidityPctLow_2.setString("8.280000");
set_field(noBidDescriptors_0_2, LiquidityPctLow_2, BidDescReqGrp_NoBidDescriptors_2);
    FIX::LiquidityValue LiquidityValue_2;
    LiquidityValue_2.setString("1124714");
set_field(noBidDescriptors_0_2, LiquidityValue_2, BidDescReqGrp_NoBidDescriptors_2);
    FIX::OutsideIndexPct OutsideIndexPct_2;
    OutsideIndexPct_2.setString("20.510000");
set_field(noBidDescriptors_0_2, OutsideIndexPct_2, BidDescReqGrp_NoBidDescriptors_2);
    set_field(noBidDescriptors_0_2, FIX::SideValueInd{2}, BidDescReqGrp_NoBidDescriptors_2);
    FIX::ValueOfFutures ValueOfFutures_2;
    ValueOfFutures_2.setString("6469396");
set_field(noBidDescriptors_0_2, ValueOfFutures_2, BidDescReqGrp_NoBidDescriptors_2);
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_2);
    all_compo_names.insert("...NoBidDescriptors");

    msg.addGroup(noBidDescriptors_0_2);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";cout << "////////////////////////////////////////////" << endl;
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
