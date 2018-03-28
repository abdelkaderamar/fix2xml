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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::BidRequest msg;

  list<multiset<string>> all_values;
  multiset<string> BidRequest_0;
  FIX::BasisPxType BasisPxType_0('7');
  msg.set(BasisPxType_0);
  BidRequest_0.insert(BasisPxType_0.getString());
  FIX::BidID BidID_0("STRING_532295793");
  msg.set(BidID_0);
  BidRequest_0.insert(BidID_0.getString());
  FIX::BidRequestTransType BidRequestTransType_0('C');
  msg.set(BidRequestTransType_0);
  BidRequest_0.insert(BidRequestTransType_0.getString());
  FIX::BidTradeType BidTradeType_0('R');
  msg.set(BidTradeType_0);
  BidRequest_0.insert(BidTradeType_0.getString());
  FIX::BidType BidType_0(3);
  msg.set(BidType_0);
  BidRequest_0.insert(BidType_0.getString());
  FIX::ClientBidID ClientBidID_0("STRING_1467641186");
  msg.set(ClientBidID_0);
  BidRequest_0.insert(ClientBidID_0.getString());
  FIX::CrossPercent CrossPercent_0;
  CrossPercent_0.setString("73.120000");
  msg.set(CrossPercent_0);
  BidRequest_0.insert(CrossPercent_0.getString());
  FIX::Currency Currency_5("JPY");
  msg.set(Currency_5);
  BidRequest_0.insert(Currency_5.getString());
  FIX::EncodedText EncodedText_10("DATA_769017313");
  msg.set(EncodedText_10);
  BidRequest_0.insert(EncodedText_10.getString());
  FIX::EncodedTextLen EncodedTextLen_10(962428867);
  msg.set(EncodedTextLen_10);
  BidRequest_0.insert(EncodedTextLen_10.getString());
  FIX::ExchangeForPhysical ExchangeForPhysical_0(false);
  msg.set(ExchangeForPhysical_0);
  BidRequest_0.insert(ExchangeForPhysical_0.getString());
  FIX::ForexReq ForexReq_0(true);
  msg.set(ForexReq_0);
  BidRequest_0.insert(ForexReq_0.getString());
  FIX::IncTaxInd IncTaxInd_0(2);
  msg.set(IncTaxInd_0);
  BidRequest_0.insert(IncTaxInd_0.getString());
  FIX::LiquidityIndType LiquidityIndType_0(3);
  msg.set(LiquidityIndType_0);
  BidRequest_0.insert(LiquidityIndType_0.getString());
  FIX::ListName ListName_0("STRING_1902385119");
  msg.set(ListName_0);
  BidRequest_0.insert(ListName_0.getString());
  FIX::NumBidders NumBidders_0(177242553);
  msg.set(NumBidders_0);
  BidRequest_0.insert(NumBidders_0.getString());
  FIX::NumTickets NumTickets_0(1929630422);
  msg.set(NumTickets_0);
  BidRequest_0.insert(NumTickets_0.getString());
  FIX::OutMainCntryUIndex OutMainCntryUIndex_0;
  OutMainCntryUIndex_0.setString("8121190");
  msg.set(OutMainCntryUIndex_0);
  BidRequest_0.insert(OutMainCntryUIndex_0.getString());
  FIX::ProgPeriodInterval ProgPeriodInterval_0(942836011);
  msg.set(ProgPeriodInterval_0);
  BidRequest_0.insert(ProgPeriodInterval_0.getString());
  FIX::ProgRptReqs ProgRptReqs_0(3);
  msg.set(ProgRptReqs_0);
  BidRequest_0.insert(ProgRptReqs_0.getString());
  FIX::SideValue1 SideValue1_0;
  SideValue1_0.setString("18124633");
  msg.set(SideValue1_0);
  BidRequest_0.insert(SideValue1_0.getString());
  FIX::SideValue2 SideValue2_0;
  SideValue2_0.setString("9090375");
  msg.set(SideValue2_0);
  BidRequest_0.insert(SideValue2_0.getString());
  FIX::StrikeTime StrikeTime_0(FIX::UTCTIMESTAMP(19, 13, 21, 27, 3, 2004));
  msg.set(StrikeTime_0);
  BidRequest_0.insert(StrikeTime_0.getString());
  FIX::Text Text_10("STRING_1452528274");
  msg.set(Text_10);
  BidRequest_0.insert(Text_10.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_0(2019233282);
  msg.set(TotNoRelatedSym_0);
  BidRequest_0.insert(TotNoRelatedSym_0.getString());
  FIX::TradeDate TradeDate_6("LOCALMKTDATE_493996133");
  msg.set(TradeDate_6);
  BidRequest_0.insert(TradeDate_6.getString());
  FIX::WtAverageLiquidity WtAverageLiquidity_0;
  WtAverageLiquidity_0.setString("72.900000");
  msg.set(WtAverageLiquidity_0);
  BidRequest_0.insert(WtAverageLiquidity_0.getString());
  all_values.push_back(BidRequest_0);

  // BidCompReqGrp
  // Group BidCompReqGrp.NoBidComponents
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_0;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_0;
    FIX::Account Account_1("STRING_1832115134");
    noBidComponents_0_0.set(Account_1);
    BidCompReqGrp_NoBidComponents_0.insert(Account_1.getString());
    FIX::AcctIDSource AcctIDSource_0(3);
    noBidComponents_0_0.set(AcctIDSource_0);
    BidCompReqGrp_NoBidComponents_0.insert(AcctIDSource_0.getString());
    FIX::ListID ListID_6("STRING_2086588402");
    noBidComponents_0_0.set(ListID_6);
    BidCompReqGrp_NoBidComponents_0.insert(ListID_6.getString());
    FIX::NetGrossInd NetGrossInd_0(1);
    noBidComponents_0_0.set(NetGrossInd_0);
    BidCompReqGrp_NoBidComponents_0.insert(NetGrossInd_0.getString());
    FIX::SettlDate SettlDate_3("LOCALMKTDATE_552093083");
    noBidComponents_0_0.set(SettlDate_3);
    BidCompReqGrp_NoBidComponents_0.insert(SettlDate_3.getString());
    FIX::SettlType SettlType_3("STRING_3");
    noBidComponents_0_0.set(SettlType_3);
    BidCompReqGrp_NoBidComponents_0.insert(SettlType_3.getString());
    FIX::Side Side_3('C');
    noBidComponents_0_0.set(Side_3);
    BidCompReqGrp_NoBidComponents_0.insert(Side_3.getString());
    FIX::TradingSessionID TradingSessionID_4("STRING_1");
    noBidComponents_0_0.set(TradingSessionID_4);
    BidCompReqGrp_NoBidComponents_0.insert(TradingSessionID_4.getString());
    FIX::TradingSessionSubID TradingSessionSubID_4("STRING_7");
    noBidComponents_0_0.set(TradingSessionSubID_4);
    BidCompReqGrp_NoBidComponents_0.insert(TradingSessionSubID_4.getString());
    all_values.push_back(BidCompReqGrp_NoBidComponents_0);

    msg.addGroup(noBidComponents_0_0);
  }
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_1;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_1;
    FIX::Account Account_2("STRING_1036149796");
    noBidComponents_0_1.set(Account_2);
    BidCompReqGrp_NoBidComponents_1.insert(Account_2.getString());
    FIX::AcctIDSource AcctIDSource_1(3);
    noBidComponents_0_1.set(AcctIDSource_1);
    BidCompReqGrp_NoBidComponents_1.insert(AcctIDSource_1.getString());
    FIX::ListID ListID_7("STRING_921874984");
    noBidComponents_0_1.set(ListID_7);
    BidCompReqGrp_NoBidComponents_1.insert(ListID_7.getString());
    FIX::NetGrossInd NetGrossInd_1(1);
    noBidComponents_0_1.set(NetGrossInd_1);
    BidCompReqGrp_NoBidComponents_1.insert(NetGrossInd_1.getString());
    FIX::SettlDate SettlDate_4("LOCALMKTDATE_1337752334");
    noBidComponents_0_1.set(SettlDate_4);
    BidCompReqGrp_NoBidComponents_1.insert(SettlDate_4.getString());
    FIX::SettlType SettlType_4("STRING_5");
    noBidComponents_0_1.set(SettlType_4);
    BidCompReqGrp_NoBidComponents_1.insert(SettlType_4.getString());
    FIX::Side Side_4('A');
    noBidComponents_0_1.set(Side_4);
    BidCompReqGrp_NoBidComponents_1.insert(Side_4.getString());
    FIX::TradingSessionID TradingSessionID_5("STRING_6");
    noBidComponents_0_1.set(TradingSessionID_5);
    BidCompReqGrp_NoBidComponents_1.insert(TradingSessionID_5.getString());
    FIX::TradingSessionSubID TradingSessionSubID_5("STRING_5");
    noBidComponents_0_1.set(TradingSessionSubID_5);
    BidCompReqGrp_NoBidComponents_1.insert(TradingSessionSubID_5.getString());
    all_values.push_back(BidCompReqGrp_NoBidComponents_1);

    msg.addGroup(noBidComponents_0_1);
  }
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_2;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_2;
    FIX::Account Account_3("STRING_917782290");
    noBidComponents_0_2.set(Account_3);
    BidCompReqGrp_NoBidComponents_2.insert(Account_3.getString());
    FIX::AcctIDSource AcctIDSource_2(2);
    noBidComponents_0_2.set(AcctIDSource_2);
    BidCompReqGrp_NoBidComponents_2.insert(AcctIDSource_2.getString());
    FIX::ListID ListID_8("STRING_1518386607");
    noBidComponents_0_2.set(ListID_8);
    BidCompReqGrp_NoBidComponents_2.insert(ListID_8.getString());
    FIX::NetGrossInd NetGrossInd_2(2);
    noBidComponents_0_2.set(NetGrossInd_2);
    BidCompReqGrp_NoBidComponents_2.insert(NetGrossInd_2.getString());
    FIX::SettlDate SettlDate_5("LOCALMKTDATE_1570666529");
    noBidComponents_0_2.set(SettlDate_5);
    BidCompReqGrp_NoBidComponents_2.insert(SettlDate_5.getString());
    FIX::SettlType SettlType_5("STRING_6");
    noBidComponents_0_2.set(SettlType_5);
    BidCompReqGrp_NoBidComponents_2.insert(SettlType_5.getString());
    FIX::Side Side_5('E');
    noBidComponents_0_2.set(Side_5);
    BidCompReqGrp_NoBidComponents_2.insert(Side_5.getString());
    FIX::TradingSessionID TradingSessionID_6("STRING_2");
    noBidComponents_0_2.set(TradingSessionID_6);
    BidCompReqGrp_NoBidComponents_2.insert(TradingSessionID_6.getString());
    FIX::TradingSessionSubID TradingSessionSubID_6("STRING_2");
    noBidComponents_0_2.set(TradingSessionSubID_6);
    BidCompReqGrp_NoBidComponents_2.insert(TradingSessionSubID_6.getString());
    all_values.push_back(BidCompReqGrp_NoBidComponents_2);

    msg.addGroup(noBidComponents_0_2);
  }
  // BidDescReqGrp
  // Group BidDescReqGrp.NoBidDescriptors
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_0;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_0;
    FIX::BidDescriptor BidDescriptor_0("STRING_2026363002");
    noBidDescriptors_0_0.set(BidDescriptor_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(BidDescriptor_0.getString());
    FIX::BidDescriptorType BidDescriptorType_0(1);
    noBidDescriptors_0_0.set(BidDescriptorType_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(BidDescriptorType_0.getString());
    FIX::EFPTrackingError EFPTrackingError_0;
    EFPTrackingError_0.setString("0.330000");
    noBidDescriptors_0_0.set(EFPTrackingError_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(EFPTrackingError_0.getString());
    FIX::FairValue FairValue_0;
    FairValue_0.setString("17109944");
    noBidDescriptors_0_0.set(FairValue_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(FairValue_0.getString());
    FIX::LiquidityNumSecurities LiquidityNumSecurities_0(2108298479);
    noBidDescriptors_0_0.set(LiquidityNumSecurities_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityNumSecurities_0.getString());
    FIX::LiquidityPctHigh LiquidityPctHigh_0;
    LiquidityPctHigh_0.setString("47.870000");
    noBidDescriptors_0_0.set(LiquidityPctHigh_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityPctHigh_0.getString());
    FIX::LiquidityPctLow LiquidityPctLow_0;
    LiquidityPctLow_0.setString("80.970000");
    noBidDescriptors_0_0.set(LiquidityPctLow_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityPctLow_0.getString());
    FIX::LiquidityValue LiquidityValue_0;
    LiquidityValue_0.setString("5129079");
    noBidDescriptors_0_0.set(LiquidityValue_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityValue_0.getString());
    FIX::OutsideIndexPct OutsideIndexPct_0;
    OutsideIndexPct_0.setString("68.540000");
    noBidDescriptors_0_0.set(OutsideIndexPct_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(OutsideIndexPct_0.getString());
    FIX::SideValueInd SideValueInd_0(1);
    noBidDescriptors_0_0.set(SideValueInd_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(SideValueInd_0.getString());
    FIX::ValueOfFutures ValueOfFutures_0;
    ValueOfFutures_0.setString("3891422");
    noBidDescriptors_0_0.set(ValueOfFutures_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(ValueOfFutures_0.getString());
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_0);

    msg.addGroup(noBidDescriptors_0_0);
  }
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_1;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_1;
    FIX::BidDescriptor BidDescriptor_1("STRING_371456719");
    noBidDescriptors_0_1.set(BidDescriptor_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(BidDescriptor_1.getString());
    FIX::BidDescriptorType BidDescriptorType_1(2);
    noBidDescriptors_0_1.set(BidDescriptorType_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(BidDescriptorType_1.getString());
    FIX::EFPTrackingError EFPTrackingError_1;
    EFPTrackingError_1.setString("77.760000");
    noBidDescriptors_0_1.set(EFPTrackingError_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(EFPTrackingError_1.getString());
    FIX::FairValue FairValue_1;
    FairValue_1.setString("12933317");
    noBidDescriptors_0_1.set(FairValue_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(FairValue_1.getString());
    FIX::LiquidityNumSecurities LiquidityNumSecurities_1(231445423);
    noBidDescriptors_0_1.set(LiquidityNumSecurities_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(LiquidityNumSecurities_1.getString());
    FIX::LiquidityPctHigh LiquidityPctHigh_1;
    LiquidityPctHigh_1.setString("64.620000");
    noBidDescriptors_0_1.set(LiquidityPctHigh_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(LiquidityPctHigh_1.getString());
    FIX::LiquidityPctLow LiquidityPctLow_1;
    LiquidityPctLow_1.setString("20.730000");
    noBidDescriptors_0_1.set(LiquidityPctLow_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(LiquidityPctLow_1.getString());
    FIX::LiquidityValue LiquidityValue_1;
    LiquidityValue_1.setString("2401901");
    noBidDescriptors_0_1.set(LiquidityValue_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(LiquidityValue_1.getString());
    FIX::OutsideIndexPct OutsideIndexPct_1;
    OutsideIndexPct_1.setString("31.790000");
    noBidDescriptors_0_1.set(OutsideIndexPct_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(OutsideIndexPct_1.getString());
    FIX::SideValueInd SideValueInd_1(1);
    noBidDescriptors_0_1.set(SideValueInd_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(SideValueInd_1.getString());
    FIX::ValueOfFutures ValueOfFutures_1;
    ValueOfFutures_1.setString("11579724");
    noBidDescriptors_0_1.set(ValueOfFutures_1);
    BidDescReqGrp_NoBidDescriptors_1.insert(ValueOfFutures_1.getString());
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_1);

    msg.addGroup(noBidDescriptors_0_1);
  }
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_2;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_2;
    FIX::BidDescriptor BidDescriptor_2("STRING_830874607");
    noBidDescriptors_0_2.set(BidDescriptor_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(BidDescriptor_2.getString());
    FIX::BidDescriptorType BidDescriptorType_2(3);
    noBidDescriptors_0_2.set(BidDescriptorType_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(BidDescriptorType_2.getString());
    FIX::EFPTrackingError EFPTrackingError_2;
    EFPTrackingError_2.setString("66.620000");
    noBidDescriptors_0_2.set(EFPTrackingError_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(EFPTrackingError_2.getString());
    FIX::FairValue FairValue_2;
    FairValue_2.setString("2540574");
    noBidDescriptors_0_2.set(FairValue_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(FairValue_2.getString());
    FIX::LiquidityNumSecurities LiquidityNumSecurities_2(1475040466);
    noBidDescriptors_0_2.set(LiquidityNumSecurities_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(LiquidityNumSecurities_2.getString());
    FIX::LiquidityPctHigh LiquidityPctHigh_2;
    LiquidityPctHigh_2.setString("59.710000");
    noBidDescriptors_0_2.set(LiquidityPctHigh_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(LiquidityPctHigh_2.getString());
    FIX::LiquidityPctLow LiquidityPctLow_2;
    LiquidityPctLow_2.setString("43.570000");
    noBidDescriptors_0_2.set(LiquidityPctLow_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(LiquidityPctLow_2.getString());
    FIX::LiquidityValue LiquidityValue_2;
    LiquidityValue_2.setString("6054068");
    noBidDescriptors_0_2.set(LiquidityValue_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(LiquidityValue_2.getString());
    FIX::OutsideIndexPct OutsideIndexPct_2;
    OutsideIndexPct_2.setString("49.150000");
    noBidDescriptors_0_2.set(OutsideIndexPct_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(OutsideIndexPct_2.getString());
    FIX::SideValueInd SideValueInd_2(2);
    noBidDescriptors_0_2.set(SideValueInd_2);
    BidDescReqGrp_NoBidDescriptors_2.insert(SideValueInd_2.getString());
    FIX::ValueOfFutures ValueOfFutures_2;
    ValueOfFutures_2.setString("15646604");
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
