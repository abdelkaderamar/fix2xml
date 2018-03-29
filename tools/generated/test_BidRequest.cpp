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
  multiset<string> all_compo_names;
  multiset<string> BidRequest_0;
  FIX::BasisPxType BasisPxType_0('C');
  msg.set(BasisPxType_0);
  BidRequest_0.insert(BasisPxType_0.getString());
  FIX::BidID BidID_0("STRING_2010152100");
  msg.set(BidID_0);
  BidRequest_0.insert(BidID_0.getString());
  FIX::BidRequestTransType BidRequestTransType_0('N');
  msg.set(BidRequestTransType_0);
  BidRequest_0.insert(BidRequestTransType_0.getString());
  FIX::BidTradeType BidTradeType_0('A');
  msg.set(BidTradeType_0);
  BidRequest_0.insert(BidTradeType_0.getString());
  FIX::BidType BidType_0(3);
  msg.set(BidType_0);
  BidRequest_0.insert(BidType_0.getString());
  FIX::ClientBidID ClientBidID_0("STRING_1332350063");
  msg.set(ClientBidID_0);
  BidRequest_0.insert(ClientBidID_0.getString());
  FIX::CrossPercent CrossPercent_0;
  CrossPercent_0.setString("64.920000");
  msg.set(CrossPercent_0);
  BidRequest_0.insert(CrossPercent_0.getString());
  FIX::Currency Currency_5("CAN");
  msg.set(Currency_5);
  BidRequest_0.insert(Currency_5.getString());
  FIX::EncodedText EncodedText_10("DATA_386540892");
  msg.set(EncodedText_10);
  BidRequest_0.insert(EncodedText_10.getString());
  FIX::EncodedTextLen EncodedTextLen_10(1505525278);
  msg.set(EncodedTextLen_10);
  BidRequest_0.insert(EncodedTextLen_10.getString());
  FIX::ExchangeForPhysical ExchangeForPhysical_0(true);
  msg.set(ExchangeForPhysical_0);
  BidRequest_0.insert(ExchangeForPhysical_0.getString());
  FIX::ForexReq ForexReq_0(true);
  msg.set(ForexReq_0);
  BidRequest_0.insert(ForexReq_0.getString());
  FIX::IncTaxInd IncTaxInd_0(1);
  msg.set(IncTaxInd_0);
  BidRequest_0.insert(IncTaxInd_0.getString());
  FIX::LiquidityIndType LiquidityIndType_0(1);
  msg.set(LiquidityIndType_0);
  BidRequest_0.insert(LiquidityIndType_0.getString());
  FIX::ListName ListName_0("STRING_1261757809");
  msg.set(ListName_0);
  BidRequest_0.insert(ListName_0.getString());
  FIX::NumBidders NumBidders_0(1320427853);
  msg.set(NumBidders_0);
  BidRequest_0.insert(NumBidders_0.getString());
  FIX::NumTickets NumTickets_0(465992130);
  msg.set(NumTickets_0);
  BidRequest_0.insert(NumTickets_0.getString());
  FIX::OutMainCntryUIndex OutMainCntryUIndex_0;
  OutMainCntryUIndex_0.setString("20079953");
  msg.set(OutMainCntryUIndex_0);
  BidRequest_0.insert(OutMainCntryUIndex_0.getString());
  FIX::ProgPeriodInterval ProgPeriodInterval_0(1326413127);
  msg.set(ProgPeriodInterval_0);
  BidRequest_0.insert(ProgPeriodInterval_0.getString());
  FIX::ProgRptReqs ProgRptReqs_0(2);
  msg.set(ProgRptReqs_0);
  BidRequest_0.insert(ProgRptReqs_0.getString());
  FIX::SideValue1 SideValue1_0;
  SideValue1_0.setString("17710831");
  msg.set(SideValue1_0);
  BidRequest_0.insert(SideValue1_0.getString());
  FIX::SideValue2 SideValue2_0;
  SideValue2_0.setString("11166798");
  msg.set(SideValue2_0);
  BidRequest_0.insert(SideValue2_0.getString());
  FIX::StrikeTime StrikeTime_0(FIX::UTCTIMESTAMP(16, 1, 17, 6, 6, 2012));
  msg.set(StrikeTime_0);
  BidRequest_0.insert(StrikeTime_0.getString());
  FIX::Text Text_10("STRING_1998963526");
  msg.set(Text_10);
  BidRequest_0.insert(Text_10.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_0(585630596);
  msg.set(TotNoRelatedSym_0);
  BidRequest_0.insert(TotNoRelatedSym_0.getString());
  FIX::TradeDate TradeDate_6("LOCALMKTDATE_713670628");
  msg.set(TradeDate_6);
  BidRequest_0.insert(TradeDate_6.getString());
  FIX::WtAverageLiquidity WtAverageLiquidity_0;
  WtAverageLiquidity_0.setString("82.590000");
  msg.set(WtAverageLiquidity_0);
  BidRequest_0.insert(WtAverageLiquidity_0.getString());
  all_values.push_back(BidRequest_0);

  all_compo_names.insert("BidRequest");

  // BidCompReqGrp
  // Group BidCompReqGrp.NoBidComponents
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_0;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_0;
    FIX::Account Account_1("STRING_1378086303");
    noBidComponents_0_0.set(Account_1);
    BidCompReqGrp_NoBidComponents_0.insert(Account_1.getString());
    FIX::AcctIDSource AcctIDSource_0(1);
    noBidComponents_0_0.set(AcctIDSource_0);
    BidCompReqGrp_NoBidComponents_0.insert(AcctIDSource_0.getString());
    FIX::ListID ListID_6("STRING_619556532");
    noBidComponents_0_0.set(ListID_6);
    BidCompReqGrp_NoBidComponents_0.insert(ListID_6.getString());
    FIX::NetGrossInd NetGrossInd_0(2);
    noBidComponents_0_0.set(NetGrossInd_0);
    BidCompReqGrp_NoBidComponents_0.insert(NetGrossInd_0.getString());
    FIX::SettlDate SettlDate_3("LOCALMKTDATE_1878754680");
    noBidComponents_0_0.set(SettlDate_3);
    BidCompReqGrp_NoBidComponents_0.insert(SettlDate_3.getString());
    FIX::SettlType SettlType_3("STRING_0");
    noBidComponents_0_0.set(SettlType_3);
    BidCompReqGrp_NoBidComponents_0.insert(SettlType_3.getString());
    FIX::Side Side_3('B');
    noBidComponents_0_0.set(Side_3);
    BidCompReqGrp_NoBidComponents_0.insert(Side_3.getString());
    FIX::TradingSessionID TradingSessionID_4("STRING_1");
    noBidComponents_0_0.set(TradingSessionID_4);
    BidCompReqGrp_NoBidComponents_0.insert(TradingSessionID_4.getString());
    FIX::TradingSessionSubID TradingSessionSubID_4("STRING_4");
    noBidComponents_0_0.set(TradingSessionSubID_4);
    BidCompReqGrp_NoBidComponents_0.insert(TradingSessionSubID_4.getString());
    all_values.push_back(BidCompReqGrp_NoBidComponents_0);
    all_compo_names.insert("BidCompReqGrp.NoBidComponents");

    msg.addGroup(noBidComponents_0_0);
  }
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_1;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_1;
    FIX::Account Account_2("STRING_1058644364");
    noBidComponents_0_1.set(Account_2);
    BidCompReqGrp_NoBidComponents_1.insert(Account_2.getString());
    FIX::AcctIDSource AcctIDSource_1(99);
    noBidComponents_0_1.set(AcctIDSource_1);
    BidCompReqGrp_NoBidComponents_1.insert(AcctIDSource_1.getString());
    FIX::ListID ListID_7("STRING_1177964457");
    noBidComponents_0_1.set(ListID_7);
    BidCompReqGrp_NoBidComponents_1.insert(ListID_7.getString());
    FIX::NetGrossInd NetGrossInd_1(2);
    noBidComponents_0_1.set(NetGrossInd_1);
    BidCompReqGrp_NoBidComponents_1.insert(NetGrossInd_1.getString());
    FIX::SettlDate SettlDate_4("LOCALMKTDATE_1017690575");
    noBidComponents_0_1.set(SettlDate_4);
    BidCompReqGrp_NoBidComponents_1.insert(SettlDate_4.getString());
    FIX::SettlType SettlType_4("STRING_2");
    noBidComponents_0_1.set(SettlType_4);
    BidCompReqGrp_NoBidComponents_1.insert(SettlType_4.getString());
    FIX::Side Side_4('1');
    noBidComponents_0_1.set(Side_4);
    BidCompReqGrp_NoBidComponents_1.insert(Side_4.getString());
    FIX::TradingSessionID TradingSessionID_5("STRING_4");
    noBidComponents_0_1.set(TradingSessionID_5);
    BidCompReqGrp_NoBidComponents_1.insert(TradingSessionID_5.getString());
    FIX::TradingSessionSubID TradingSessionSubID_5("STRING_6");
    noBidComponents_0_1.set(TradingSessionSubID_5);
    BidCompReqGrp_NoBidComponents_1.insert(TradingSessionSubID_5.getString());
    all_values.push_back(BidCompReqGrp_NoBidComponents_1);
    all_compo_names.insert("BidCompReqGrp.NoBidComponents");

    msg.addGroup(noBidComponents_0_1);
  }
  {
    FIX50SP2::BidRequest::NoBidComponents noBidComponents_0_2;
    // BidCompReqGrp.NoBidComponents
    multiset<string> BidCompReqGrp_NoBidComponents_2;
    FIX::Account Account_3("STRING_527197849");
    noBidComponents_0_2.set(Account_3);
    BidCompReqGrp_NoBidComponents_2.insert(Account_3.getString());
    FIX::AcctIDSource AcctIDSource_2(5);
    noBidComponents_0_2.set(AcctIDSource_2);
    BidCompReqGrp_NoBidComponents_2.insert(AcctIDSource_2.getString());
    FIX::ListID ListID_8("STRING_685005379");
    noBidComponents_0_2.set(ListID_8);
    BidCompReqGrp_NoBidComponents_2.insert(ListID_8.getString());
    FIX::NetGrossInd NetGrossInd_2(2);
    noBidComponents_0_2.set(NetGrossInd_2);
    BidCompReqGrp_NoBidComponents_2.insert(NetGrossInd_2.getString());
    FIX::SettlDate SettlDate_5("LOCALMKTDATE_381074179");
    noBidComponents_0_2.set(SettlDate_5);
    BidCompReqGrp_NoBidComponents_2.insert(SettlDate_5.getString());
    FIX::SettlType SettlType_5("STRING_1");
    noBidComponents_0_2.set(SettlType_5);
    BidCompReqGrp_NoBidComponents_2.insert(SettlType_5.getString());
    FIX::Side Side_5('1');
    noBidComponents_0_2.set(Side_5);
    BidCompReqGrp_NoBidComponents_2.insert(Side_5.getString());
    FIX::TradingSessionID TradingSessionID_6("STRING_2");
    noBidComponents_0_2.set(TradingSessionID_6);
    BidCompReqGrp_NoBidComponents_2.insert(TradingSessionID_6.getString());
    FIX::TradingSessionSubID TradingSessionSubID_6("STRING_1");
    noBidComponents_0_2.set(TradingSessionSubID_6);
    BidCompReqGrp_NoBidComponents_2.insert(TradingSessionSubID_6.getString());
    all_values.push_back(BidCompReqGrp_NoBidComponents_2);
    all_compo_names.insert("BidCompReqGrp.NoBidComponents");

    msg.addGroup(noBidComponents_0_2);
  }
  // BidDescReqGrp
  // Group BidDescReqGrp.NoBidDescriptors
  {
    FIX50SP2::BidRequest::NoBidDescriptors noBidDescriptors_0_0;
    // BidDescReqGrp.NoBidDescriptors
    multiset<string> BidDescReqGrp_NoBidDescriptors_0;
    FIX::BidDescriptor BidDescriptor_0("STRING_1945746983");
    noBidDescriptors_0_0.set(BidDescriptor_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(BidDescriptor_0.getString());
    FIX::BidDescriptorType BidDescriptorType_0(3);
    noBidDescriptors_0_0.set(BidDescriptorType_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(BidDescriptorType_0.getString());
    FIX::EFPTrackingError EFPTrackingError_0;
    EFPTrackingError_0.setString("10.680000");
    noBidDescriptors_0_0.set(EFPTrackingError_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(EFPTrackingError_0.getString());
    FIX::FairValue FairValue_0;
    FairValue_0.setString("11763496");
    noBidDescriptors_0_0.set(FairValue_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(FairValue_0.getString());
    FIX::LiquidityNumSecurities LiquidityNumSecurities_0(1314700762);
    noBidDescriptors_0_0.set(LiquidityNumSecurities_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityNumSecurities_0.getString());
    FIX::LiquidityPctHigh LiquidityPctHigh_0;
    LiquidityPctHigh_0.setString("39.520000");
    noBidDescriptors_0_0.set(LiquidityPctHigh_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityPctHigh_0.getString());
    FIX::LiquidityPctLow LiquidityPctLow_0;
    LiquidityPctLow_0.setString("18.580000");
    noBidDescriptors_0_0.set(LiquidityPctLow_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityPctLow_0.getString());
    FIX::LiquidityValue LiquidityValue_0;
    LiquidityValue_0.setString("10459717");
    noBidDescriptors_0_0.set(LiquidityValue_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(LiquidityValue_0.getString());
    FIX::OutsideIndexPct OutsideIndexPct_0;
    OutsideIndexPct_0.setString("13.770000");
    noBidDescriptors_0_0.set(OutsideIndexPct_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(OutsideIndexPct_0.getString());
    FIX::SideValueInd SideValueInd_0(1);
    noBidDescriptors_0_0.set(SideValueInd_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(SideValueInd_0.getString());
    FIX::ValueOfFutures ValueOfFutures_0;
    ValueOfFutures_0.setString("2850648");
    noBidDescriptors_0_0.set(ValueOfFutures_0);
    BidDescReqGrp_NoBidDescriptors_0.insert(ValueOfFutures_0.getString());
    all_values.push_back(BidDescReqGrp_NoBidDescriptors_0);
    all_compo_names.insert("BidDescReqGrp.NoBidDescriptors");

    msg.addGroup(noBidDescriptors_0_0);
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
