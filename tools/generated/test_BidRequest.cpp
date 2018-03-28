#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

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
  multiset<string> BidRequest_0;
  FIX::BasisPxType BasisPxType_0('2');
  msg.set(BasisPxType_0);
  BidRequest_0.insert(BasisPxType_0.getString());
  FIX::BidID BidID_0("STRING_850469388");
  msg.set(BidID_0);
  BidRequest_0.insert(BidID_0.getString());
  FIX::BidRequestTransType BidRequestTransType_0('C');
  msg.set(BidRequestTransType_0);
  BidRequest_0.insert(BidRequestTransType_0.getString());
  FIX::BidTradeType BidTradeType_0('G');
  msg.set(BidTradeType_0);
  BidRequest_0.insert(BidTradeType_0.getString());
  FIX::BidType BidType_0(1);
  msg.set(BidType_0);
  BidRequest_0.insert(BidType_0.getString());
  FIX::ClientBidID ClientBidID_0("STRING_600309636");
  msg.set(ClientBidID_0);
  BidRequest_0.insert(ClientBidID_0.getString());
  FIX::CrossPercent CrossPercent_0;
  CrossPercent_0.setString("73.710000");
  msg.set(CrossPercent_0);
  BidRequest_0.insert(CrossPercent_0.getString());
  FIX::Currency Currency_5("JPY");
  msg.set(Currency_5);
  BidRequest_0.insert(Currency_5.getString());
  FIX::EncodedText EncodedText_10("DATA_53585767");
  msg.set(EncodedText_10);
  BidRequest_0.insert(EncodedText_10.getString());
  FIX::EncodedTextLen EncodedTextLen_10(1418848264);
  msg.set(EncodedTextLen_10);
  BidRequest_0.insert(EncodedTextLen_10.getString());
  FIX::ExchangeForPhysical ExchangeForPhysical_0(false);
  msg.set(ExchangeForPhysical_0);
  BidRequest_0.insert(ExchangeForPhysical_0.getString());
  FIX::ForexReq ForexReq_0(false);
  msg.set(ForexReq_0);
  BidRequest_0.insert(ForexReq_0.getString());
  FIX::IncTaxInd IncTaxInd_0(1);
  msg.set(IncTaxInd_0);
  BidRequest_0.insert(IncTaxInd_0.getString());
  FIX::LiquidityIndType LiquidityIndType_0(3);
  msg.set(LiquidityIndType_0);
  BidRequest_0.insert(LiquidityIndType_0.getString());
  FIX::ListName ListName_0("STRING_928941055");
  msg.set(ListName_0);
  BidRequest_0.insert(ListName_0.getString());
  FIX::NumBidders NumBidders_0(2123810890);
  msg.set(NumBidders_0);
  BidRequest_0.insert(NumBidders_0.getString());
  FIX::NumTickets NumTickets_0(569952709);
  msg.set(NumTickets_0);
  BidRequest_0.insert(NumTickets_0.getString());
  FIX::OutMainCntryUIndex OutMainCntryUIndex_0;
  OutMainCntryUIndex_0.setString("14427897");
  msg.set(OutMainCntryUIndex_0);
  BidRequest_0.insert(OutMainCntryUIndex_0.getString());
  FIX::ProgPeriodInterval ProgPeriodInterval_0(1260330197);
  msg.set(ProgPeriodInterval_0);
  BidRequest_0.insert(ProgPeriodInterval_0.getString());
  FIX::ProgRptReqs ProgRptReqs_0(3);
  msg.set(ProgRptReqs_0);
  BidRequest_0.insert(ProgRptReqs_0.getString());
  FIX::SideValue1 SideValue1_0;
  SideValue1_0.setString("21172106");
  msg.set(SideValue1_0);
  BidRequest_0.insert(SideValue1_0.getString());
  FIX::SideValue2 SideValue2_0;
  SideValue2_0.setString("2804664");
  msg.set(SideValue2_0);
  BidRequest_0.insert(SideValue2_0.getString());
  FIX::StrikeTime StrikeTime_0(FIX::UTCTIMESTAMP(8, 27, 51, 26, 1, 2016));
  msg.set(StrikeTime_0);
  BidRequest_0.insert(StrikeTime_0.getString());
  FIX::Text Text_10("STRING_377155148");
  msg.set(Text_10);
  BidRequest_0.insert(Text_10.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_0(1458661391);
  msg.set(TotNoRelatedSym_0);
  BidRequest_0.insert(TotNoRelatedSym_0.getString());
  FIX::TradeDate TradeDate_6("LOCALMKTDATE_2117230366");
  msg.set(TradeDate_6);
  BidRequest_0.insert(TradeDate_6.getString());
  FIX::WtAverageLiquidity WtAverageLiquidity_0;
  WtAverageLiquidity_0.setString("56.180000");
  msg.set(WtAverageLiquidity_0);
  BidRequest_0.insert(WtAverageLiquidity_0.getString());
  all_values.push_back(BidRequest_0);

  // BidCompReqGrp
  // Group BidCompReqGrp.NoBidComponents
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_0;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_0;
    FIX::Account Account_1("STRING_787707759");
    noBidComponents_0_0.set(Account_1);
    BidCompReqGrp_NoBidComponents_0.insert(Account_1.getString());
    FIX::AcctIDSource AcctIDSource_0(1);
    noBidComponents_0_0.set(AcctIDSource_0);
    BidCompReqGrp_NoBidComponents_0.insert(AcctIDSource_0.getString());
    FIX::ListID ListID_7("STRING_63138235");
    noBidComponents_0_0.set(ListID_7);
    BidCompReqGrp_NoBidComponents_0.insert(ListID_7.getString());
    FIX::NetGrossInd NetGrossInd_0(1);
    noBidComponents_0_0.set(NetGrossInd_0);
    BidCompReqGrp_NoBidComponents_0.insert(NetGrossInd_0.getString());
    FIX::SettlDate SettlDate_3("LOCALMKTDATE_108092960");
    noBidComponents_0_0.set(SettlDate_3);
    BidCompReqGrp_NoBidComponents_0.insert(SettlDate_3.getString());
    FIX::SettlType SettlType_3("STRING_2");
    noBidComponents_0_0.set(SettlType_3);
    BidCompReqGrp_NoBidComponents_0.insert(SettlType_3.getString());
    FIX::Side Side_3('8');
    noBidComponents_0_0.set(Side_3);
    BidCompReqGrp_NoBidComponents_0.insert(Side_3.getString());
    FIX::TradingSessionID TradingSessionID_4("STRING_5");
    noBidComponents_0_0.set(TradingSessionID_4);
    BidCompReqGrp_NoBidComponents_0.insert(TradingSessionID_4.getString());
    FIX::TradingSessionSubID TradingSessionSubID_4("STRING_5");
    noBidComponents_0_0.set(TradingSessionSubID_4);
    BidCompReqGrp_NoBidComponents_0.insert(TradingSessionSubID_4.getString());
    all_values.push_back(BidCompReqGrp_NoBidComponents_0);

    msg.addGroup(noBidComponents_0_0);
  }
  // BidDescReqGrp
  // Group BidDescReqGrp.NoBidDescriptors
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_0;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_0;
    FIX::BidDescriptor BidDescriptor_0("STRING_1784122280");
    noBidDescriptors_0_0.set(BidDescriptor_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(BidDescriptor_0.getString());
    FIX::BidDescriptorType BidDescriptorType_0(2);
    noBidDescriptors_0_0.set(BidDescriptorType_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(BidDescriptorType_0.getString());
    FIX::EFPTrackingError EFPTrackingError_0;
    EFPTrackingError_0.setString("38.490000");
    noBidDescriptors_0_0.set(EFPTrackingError_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(EFPTrackingError_0.getString());
    FIX::FairValue FairValue_0;
    FairValue_0.setString("2065913");
    noBidDescriptors_0_0.set(FairValue_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(FairValue_0.getString());
    FIX::LiquidityNumSecurities LiquidityNumSecurities_0(1286284360);
    noBidDescriptors_0_0.set(LiquidityNumSecurities_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityNumSecurities_0.getString());
    FIX::LiquidityPctHigh LiquidityPctHigh_0;
    LiquidityPctHigh_0.setString("3.980000");
    noBidDescriptors_0_0.set(LiquidityPctHigh_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityPctHigh_0.getString());
    FIX::LiquidityPctLow LiquidityPctLow_0;
    LiquidityPctLow_0.setString("12.690000");
    noBidDescriptors_0_0.set(LiquidityPctLow_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityPctLow_0.getString());
    FIX::LiquidityValue LiquidityValue_0;
    LiquidityValue_0.setString("12560114");
    noBidDescriptors_0_0.set(LiquidityValue_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityValue_0.getString());
    FIX::OutsideIndexPct OutsideIndexPct_0;
    OutsideIndexPct_0.setString("68.340000");
    noBidDescriptors_0_0.set(OutsideIndexPct_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(OutsideIndexPct_0.getString());
    FIX::SideValueInd SideValueInd_0(2);
    noBidDescriptors_0_0.set(SideValueInd_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(SideValueInd_0.getString());
    FIX::ValueOfFutures ValueOfFutures_0;
    ValueOfFutures_0.setString("7417794");
    noBidDescriptors_0_0.set(ValueOfFutures_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(ValueOfFutures_0.getString());
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_0);

    msg.addGroup(noBidDescriptors_0_0);
  }
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_1;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_1;
    FIX::BidDescriptor BidDescriptor_1("STRING_1829192522");
    noBidDescriptors_0_1.set(BidDescriptor_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(BidDescriptor_1.getString());
    FIX::BidDescriptorType BidDescriptorType_1(3);
    noBidDescriptors_0_1.set(BidDescriptorType_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(BidDescriptorType_1.getString());
    FIX::EFPTrackingError EFPTrackingError_1;
    EFPTrackingError_1.setString("85.810000");
    noBidDescriptors_0_1.set(EFPTrackingError_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(EFPTrackingError_1.getString());
    FIX::FairValue FairValue_1;
    FairValue_1.setString("16411009");
    noBidDescriptors_0_1.set(FairValue_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(FairValue_1.getString());
    FIX::LiquidityNumSecurities LiquidityNumSecurities_1(2011410075);
    noBidDescriptors_0_1.set(LiquidityNumSecurities_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(LiquidityNumSecurities_1.getString());
    FIX::LiquidityPctHigh LiquidityPctHigh_1;
    LiquidityPctHigh_1.setString("37.290000");
    noBidDescriptors_0_1.set(LiquidityPctHigh_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(LiquidityPctHigh_1.getString());
    FIX::LiquidityPctLow LiquidityPctLow_1;
    LiquidityPctLow_1.setString("87.290000");
    noBidDescriptors_0_1.set(LiquidityPctLow_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(LiquidityPctLow_1.getString());
    FIX::LiquidityValue LiquidityValue_1;
    LiquidityValue_1.setString("19811567");
    noBidDescriptors_0_1.set(LiquidityValue_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(LiquidityValue_1.getString());
    FIX::OutsideIndexPct OutsideIndexPct_1;
    OutsideIndexPct_1.setString("93.470000");
    noBidDescriptors_0_1.set(OutsideIndexPct_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(OutsideIndexPct_1.getString());
    FIX::SideValueInd SideValueInd_1(2);
    noBidDescriptors_0_1.set(SideValueInd_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(SideValueInd_1.getString());
    FIX::ValueOfFutures ValueOfFutures_1;
    ValueOfFutures_1.setString("6213809");
    noBidDescriptors_0_1.set(ValueOfFutures_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(ValueOfFutures_1.getString());
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_1);

    msg.addGroup(noBidDescriptors_0_1);
  }
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_2;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_2;
    FIX::BidDescriptor BidDescriptor_2("STRING_1708064601");
    noBidDescriptors_0_2.set(BidDescriptor_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(BidDescriptor_2.getString());
    FIX::BidDescriptorType BidDescriptorType_2(2);
    noBidDescriptors_0_2.set(BidDescriptorType_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(BidDescriptorType_2.getString());
    FIX::EFPTrackingError EFPTrackingError_2;
    EFPTrackingError_2.setString("37.830000");
    noBidDescriptors_0_2.set(EFPTrackingError_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(EFPTrackingError_2.getString());
    FIX::FairValue FairValue_2;
    FairValue_2.setString("18161575");
    noBidDescriptors_0_2.set(FairValue_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(FairValue_2.getString());
    FIX::LiquidityNumSecurities LiquidityNumSecurities_2(1952705478);
    noBidDescriptors_0_2.set(LiquidityNumSecurities_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(LiquidityNumSecurities_2.getString());
    FIX::LiquidityPctHigh LiquidityPctHigh_2;
    LiquidityPctHigh_2.setString("49.260000");
    noBidDescriptors_0_2.set(LiquidityPctHigh_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(LiquidityPctHigh_2.getString());
    FIX::LiquidityPctLow LiquidityPctLow_2;
    LiquidityPctLow_2.setString("29.760000");
    noBidDescriptors_0_2.set(LiquidityPctLow_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(LiquidityPctLow_2.getString());
    FIX::LiquidityValue LiquidityValue_2;
    LiquidityValue_2.setString("8672590");
    noBidDescriptors_0_2.set(LiquidityValue_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(LiquidityValue_2.getString());
    FIX::OutsideIndexPct OutsideIndexPct_2;
    OutsideIndexPct_2.setString("78.850000");
    noBidDescriptors_0_2.set(OutsideIndexPct_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(OutsideIndexPct_2.getString());
    FIX::SideValueInd SideValueInd_2(1);
    noBidDescriptors_0_2.set(SideValueInd_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(SideValueInd_2.getString());
    FIX::ValueOfFutures ValueOfFutures_2;
    ValueOfFutures_2.setString("7107537");
    noBidDescriptors_0_2.set(ValueOfFutures_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(ValueOfFutures_2.getString());
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_2);

    msg.addGroup(noBidDescriptors_0_2);
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
