#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/MarketDefinitionUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinitionUpdateReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDefinitionUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> MarketDefinitionUpdateReport_0;
  FIX::Currency Currency_29("JPY");
  msg.set(Currency_29);
  MarketDefinitionUpdateReport_0.insert(Currency_29.getString());
  FIX::EncodedMktSegmDesc EncodedMktSegmDesc_1("DATA_1330800596");
  msg.set(EncodedMktSegmDesc_1);
  MarketDefinitionUpdateReport_0.insert(EncodedMktSegmDesc_1.getString());
  FIX::EncodedMktSegmDescLen EncodedMktSegmDescLen_1(1631260571);
  msg.set(EncodedMktSegmDescLen_1);
  MarketDefinitionUpdateReport_0.insert(EncodedMktSegmDescLen_1.getString());
  FIX::EncodedText EncodedText_49("DATA_1574386299");
  msg.set(EncodedText_49);
  MarketDefinitionUpdateReport_0.insert(EncodedText_49.getString());
  FIX::EncodedTextLen EncodedTextLen_49(572943697);
  msg.set(EncodedTextLen_49);
  MarketDefinitionUpdateReport_0.insert(EncodedTextLen_49.getString());
  FIX::MarketID MarketID_8("EXCHANGE_1535453432");
  msg.set(MarketID_8);
  MarketDefinitionUpdateReport_0.insert(MarketID_8.getString());
  FIX::MarketReportID MarketReportID_1("STRING_235422005");
  msg.set(MarketReportID_1);
  MarketDefinitionUpdateReport_0.insert(MarketReportID_1.getString());
  FIX::MarketReqID MarketReqID_2("STRING_846322331");
  msg.set(MarketReqID_2);
  MarketDefinitionUpdateReport_0.insert(MarketReqID_2.getString());
  FIX::MarketSegmentDesc MarketSegmentDesc_1("STRING_110601028");
  msg.set(MarketSegmentDesc_1);
  MarketDefinitionUpdateReport_0.insert(MarketSegmentDesc_1.getString());
  FIX::MarketSegmentID MarketSegmentID_8("STRING_1893787176");
  msg.set(MarketSegmentID_8);
  MarketDefinitionUpdateReport_0.insert(MarketSegmentID_8.getString());
  FIX::MarketUpdateAction MarketUpdateAction_0('A');
  msg.set(MarketUpdateAction_0);
  MarketDefinitionUpdateReport_0.insert(MarketUpdateAction_0.getString());
  FIX::ParentMktSegmID ParentMktSegmID_2("STRING_452791339");
  msg.set(ParentMktSegmID_2);
  MarketDefinitionUpdateReport_0.insert(ParentMktSegmID_2.getString());
  FIX::Text Text_49("STRING_1423330386");
  msg.set(Text_49);
  MarketDefinitionUpdateReport_0.insert(Text_49.getString());
  FIX::TransactTime TransactTime_25(FIX::UTCTIMESTAMP(18, 59, 2, 8, 72017));
  msg.set(TransactTime_25);
  MarketDefinitionUpdateReport_0.insert(TransactTime_25.getString());
  all_values.push_back(MarketDefinitionUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_9;
  FIX::ApplID ApplID_9("STRING_1260558264");
  msg.set(ApplID_9);
  ApplicationSequenceControl_9.insert(ApplID_9.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_9(1284376889);
  msg.set(ApplLastSeqNum_9);
  ApplicationSequenceControl_9.insert(ApplLastSeqNum_9.getString());
  FIX::ApplResendFlag ApplResendFlag_9(true);
  msg.set(ApplResendFlag_9);
  ApplicationSequenceControl_9.insert(ApplResendFlag_9.getString());
  FIX::ApplSeqNum ApplSeqNum_9(450425303);
  msg.set(ApplSeqNum_9);
  ApplicationSequenceControl_9.insert(ApplSeqNum_9.getString());
  all_values.push_back(ApplicationSequenceControl_9);

  // BaseTradingRules
  multiset<string> BaseTradingRules_6;
  FIX::ExpirationCycle ExpirationCycle_6(1);
  msg.set(ExpirationCycle_6);
  BaseTradingRules_6.insert(ExpirationCycle_6.getString());
  FIX::ImpliedMarketIndicator ImpliedMarketIndicator_6(0);
  msg.set(ImpliedMarketIndicator_6);
  BaseTradingRules_6.insert(ImpliedMarketIndicator_6.getString());
  FIX::MaxPriceVariation MaxPriceVariation_6;
  MaxPriceVariation_6.setString("16913510");
  msg.set(MaxPriceVariation_6);
  BaseTradingRules_6.insert(MaxPriceVariation_6.getString());
  FIX::MaxTradeVol MaxTradeVol_6;
  MaxTradeVol_6.setString("14716783");
  msg.set(MaxTradeVol_6);
  BaseTradingRules_6.insert(MaxTradeVol_6.getString());
  FIX::MinTradeVol MinTradeVol_6;
  MinTradeVol_6.setString("6278603");
  msg.set(MinTradeVol_6);
  BaseTradingRules_6.insert(MinTradeVol_6.getString());
  FIX::MultilegModel MultilegModel_6(0);
  msg.set(MultilegModel_6);
  BaseTradingRules_6.insert(MultilegModel_6.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_6(2);
  msg.set(MultilegPriceMethod_6);
  BaseTradingRules_6.insert(MultilegPriceMethod_6.getString());
  FIX::PriceType PriceType_23(9);
  msg.set(PriceType_23);
  BaseTradingRules_6.insert(PriceType_23.getString());
  FIX::RoundLot RoundLot_6;
  RoundLot_6.setString("2607970");
  msg.set(RoundLot_6);
  BaseTradingRules_6.insert(RoundLot_6.getString());
  FIX::TradingCurrency TradingCurrency_6("CAN");
  msg.set(TradingCurrency_6);
  BaseTradingRules_6.insert(TradingCurrency_6.getString());
  all_values.push_back(BaseTradingRules_6);

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_12;
    FIX::LotType LotType_16('4');
    noLotTypeRules_0_0.set(LotType_16);
    LotTypeRules_NoLotTypeRules_12.insert(LotType_16.getString());
    FIX::MinLotSize MinLotSize_12;
    MinLotSize_12.setString("1035596");
    noLotTypeRules_0_0.set(MinLotSize_12);
    LotTypeRules_NoLotTypeRules_12.insert(MinLotSize_12.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_12);

    msg.addGroup(noLotTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_1;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_13;
    FIX::LotType LotType_17('1');
    noLotTypeRules_0_1.set(LotType_17);
    LotTypeRules_NoLotTypeRules_13.insert(LotType_17.getString());
    FIX::MinLotSize MinLotSize_13;
    MinLotSize_13.setString("104981");
    noLotTypeRules_0_1.set(MinLotSize_13);
    LotTypeRules_NoLotTypeRules_13.insert(MinLotSize_13.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_13);

    msg.addGroup(noLotTypeRules_0_1);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_2;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_14;
    FIX::LotType LotType_18('2');
    noLotTypeRules_0_2.set(LotType_18);
    LotTypeRules_NoLotTypeRules_14.insert(LotType_18.getString());
    FIX::MinLotSize MinLotSize_14;
    MinLotSize_14.setString("13167553");
    noLotTypeRules_0_2.set(MinLotSize_14);
    LotTypeRules_NoLotTypeRules_14.insert(MinLotSize_14.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_14);

    msg.addGroup(noLotTypeRules_0_2);
  }
  // PriceLimits
  multiset<string> PriceLimits_6;
  FIX::HighLimitPrice HighLimitPrice_6;
  HighLimitPrice_6.setString("4632895");
  msg.set(HighLimitPrice_6);
  PriceLimits_6.insert(HighLimitPrice_6.getString());
  FIX::LowLimitPrice LowLimitPrice_6;
  LowLimitPrice_6.setString("12731935");
  msg.set(LowLimitPrice_6);
  PriceLimits_6.insert(LowLimitPrice_6.getString());
  FIX::PriceLimitType PriceLimitType_6(1);
  msg.set(PriceLimitType_6);
  PriceLimits_6.insert(PriceLimitType_6.getString());
  FIX::TradingReferencePrice TradingReferencePrice_6;
  TradingReferencePrice_6.setString("809197");
  msg.set(TradingReferencePrice_6);
  PriceLimits_6.insert(TradingReferencePrice_6.getString());
  all_values.push_back(PriceLimits_6);

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_11;
    FIX::EndTickPriceRange EndTickPriceRange_11;
    EndTickPriceRange_11.setString("4373765");
    noTickRules_0_0.set(EndTickPriceRange_11);
    TickRules_NoTickRules_11.insert(EndTickPriceRange_11.getString());
    FIX::StartTickPriceRange StartTickPriceRange_11;
    StartTickPriceRange_11.setString("10722699");
    noTickRules_0_0.set(StartTickPriceRange_11);
    TickRules_NoTickRules_11.insert(StartTickPriceRange_11.getString());
    FIX::TickIncrement TickIncrement_11;
    TickIncrement_11.setString("14554180");
    noTickRules_0_0.set(TickIncrement_11);
    TickRules_NoTickRules_11.insert(TickIncrement_11.getString());
    FIX::TickRuleType TickRuleType_11(0);
    noTickRules_0_0.set(TickRuleType_11);
    TickRules_NoTickRules_11.insert(TickRuleType_11.getString());
    all_values.push_back(TickRules_NoTickRules_11);

    msg.addGroup(noTickRules_0_0);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_26;
    FIX::ExecInstValue ExecInstValue_26('5');
    noExecInstRules_0_0.set(ExecInstValue_26);
    ExecInstRules_NoExecInstRules_26.insert(ExecInstValue_26.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_26);

    msg.addGroup(noExecInstRules_0_0);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_27;
    FIX::OrdType OrdType_32('6');
    noOrdTypeRules_0_0.set(OrdType_32);
    OrdTypeRules_NoOrdTypeRules_27.insert(OrdType_32.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_27);

    msg.addGroup(noOrdTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_1;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_28;
    FIX::OrdType OrdType_33('J');
    noOrdTypeRules_0_1.set(OrdType_33);
    OrdTypeRules_NoOrdTypeRules_28.insert(OrdType_33.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_28);

    msg.addGroup(noOrdTypeRules_0_1);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_2;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_29;
    FIX::OrdType OrdType_34('B');
    noOrdTypeRules_0_2.set(OrdType_34);
    OrdTypeRules_NoOrdTypeRules_29.insert(OrdType_34.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_29);

    msg.addGroup(noOrdTypeRules_0_2);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_27;
    FIX::TimeInForce TimeInForce_32('5');
    noTimeInForceRules_0_0.set(TimeInForce_32);
    TimeInForceRules_NoTimeInForceRules_27.insert(TimeInForce_32.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_27);

    msg.addGroup(noTimeInForceRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTimeInForceRules noTimeInForceRules_0_1;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_28;
    FIX::TimeInForce TimeInForce_33('4');
    noTimeInForceRules_0_1.set(TimeInForce_33);
    TimeInForceRules_NoTimeInForceRules_28.insert(TimeInForce_33.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_28);

    msg.addGroup(noTimeInForceRules_0_1);
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
