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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDefinitionUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> MarketDefinitionUpdateReport_0;
  FIX::Currency Currency_28("JPY");
  msg.set(Currency_28);
  MarketDefinitionUpdateReport_0.insert(Currency_28.getString());
  FIX::EncodedMktSegmDesc EncodedMktSegmDesc_1("DATA_1212807163");
  msg.set(EncodedMktSegmDesc_1);
  MarketDefinitionUpdateReport_0.insert(EncodedMktSegmDesc_1.getString());
  FIX::EncodedMktSegmDescLen EncodedMktSegmDescLen_1(1372603869);
  msg.set(EncodedMktSegmDescLen_1);
  MarketDefinitionUpdateReport_0.insert(EncodedMktSegmDescLen_1.getString());
  FIX::EncodedText EncodedText_48("DATA_1508027057");
  msg.set(EncodedText_48);
  MarketDefinitionUpdateReport_0.insert(EncodedText_48.getString());
  FIX::EncodedTextLen EncodedTextLen_48(1233340629);
  msg.set(EncodedTextLen_48);
  MarketDefinitionUpdateReport_0.insert(EncodedTextLen_48.getString());
  FIX::MarketID MarketID_6("EXCHANGE_1438601201");
  msg.set(MarketID_6);
  MarketDefinitionUpdateReport_0.insert(MarketID_6.getString());
  FIX::MarketReportID MarketReportID_1("STRING_1433653286");
  msg.set(MarketReportID_1);
  MarketDefinitionUpdateReport_0.insert(MarketReportID_1.getString());
  FIX::MarketReqID MarketReqID_2("STRING_2072706175");
  msg.set(MarketReqID_2);
  MarketDefinitionUpdateReport_0.insert(MarketReqID_2.getString());
  FIX::MarketSegmentDesc MarketSegmentDesc_1("STRING_1946458887");
  msg.set(MarketSegmentDesc_1);
  MarketDefinitionUpdateReport_0.insert(MarketSegmentDesc_1.getString());
  FIX::MarketSegmentID MarketSegmentID_6("STRING_2078780169");
  msg.set(MarketSegmentID_6);
  MarketDefinitionUpdateReport_0.insert(MarketSegmentID_6.getString());
  FIX::MarketUpdateAction MarketUpdateAction_0('A');
  msg.set(MarketUpdateAction_0);
  MarketDefinitionUpdateReport_0.insert(MarketUpdateAction_0.getString());
  FIX::ParentMktSegmID ParentMktSegmID_2("STRING_1894465892");
  msg.set(ParentMktSegmID_2);
  MarketDefinitionUpdateReport_0.insert(ParentMktSegmID_2.getString());
  FIX::Text Text_48("STRING_231417244");
  msg.set(Text_48);
  MarketDefinitionUpdateReport_0.insert(Text_48.getString());
  FIX::TransactTime TransactTime_25(FIX::UTCTIMESTAMP(5, 8, 9, 14, 7, 2009));
  msg.set(TransactTime_25);
  MarketDefinitionUpdateReport_0.insert(TransactTime_25.getString());
  all_values.push_back(MarketDefinitionUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_9;
  FIX::ApplID ApplID_9("STRING_586648284");
  msg.set(ApplID_9);
  ApplicationSequenceControl_9.insert(ApplID_9.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_9(695047568);
  msg.set(ApplLastSeqNum_9);
  ApplicationSequenceControl_9.insert(ApplLastSeqNum_9.getString());
  FIX::ApplResendFlag ApplResendFlag_9(true);
  msg.set(ApplResendFlag_9);
  ApplicationSequenceControl_9.insert(ApplResendFlag_9.getString());
  FIX::ApplSeqNum ApplSeqNum_9(1766124622);
  msg.set(ApplSeqNum_9);
  ApplicationSequenceControl_9.insert(ApplSeqNum_9.getString());
  all_values.push_back(ApplicationSequenceControl_9);

  // BaseTradingRules
  multiset<string> BaseTradingRules_4;
  FIX::ExpirationCycle ExpirationCycle_4(2);
  msg.set(ExpirationCycle_4);
  BaseTradingRules_4.insert(ExpirationCycle_4.getString());
  FIX::ImpliedMarketIndicator ImpliedMarketIndicator_4(3);
  msg.set(ImpliedMarketIndicator_4);
  BaseTradingRules_4.insert(ImpliedMarketIndicator_4.getString());
  FIX::MaxPriceVariation MaxPriceVariation_4;
  MaxPriceVariation_4.setString("16508553");
  msg.set(MaxPriceVariation_4);
  BaseTradingRules_4.insert(MaxPriceVariation_4.getString());
  FIX::MaxTradeVol MaxTradeVol_4;
  MaxTradeVol_4.setString("15975774");
  msg.set(MaxTradeVol_4);
  BaseTradingRules_4.insert(MaxTradeVol_4.getString());
  FIX::MinTradeVol MinTradeVol_4;
  MinTradeVol_4.setString("16926448");
  msg.set(MinTradeVol_4);
  BaseTradingRules_4.insert(MinTradeVol_4.getString());
  FIX::MultilegModel MultilegModel_4(1);
  msg.set(MultilegModel_4);
  BaseTradingRules_4.insert(MultilegModel_4.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_4(5);
  msg.set(MultilegPriceMethod_4);
  BaseTradingRules_4.insert(MultilegPriceMethod_4.getString());
  FIX::PriceType PriceType_20(13);
  msg.set(PriceType_20);
  BaseTradingRules_4.insert(PriceType_20.getString());
  FIX::RoundLot RoundLot_4;
  RoundLot_4.setString("13181228");
  msg.set(RoundLot_4);
  BaseTradingRules_4.insert(RoundLot_4.getString());
  FIX::TradingCurrency TradingCurrency_4("GBP");
  msg.set(TradingCurrency_4);
  BaseTradingRules_4.insert(TradingCurrency_4.getString());
  all_values.push_back(BaseTradingRules_4);

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_6;
    FIX::LotType LotType_9('2');
    noLotTypeRules_0_0.set(LotType_9);
    LotTypeRules_NoLotTypeRules_6.insert(LotType_9.getString());
    FIX::MinLotSize MinLotSize_6;
    MinLotSize_6.setString("21410886");
    noLotTypeRules_0_0.set(MinLotSize_6);
    LotTypeRules_NoLotTypeRules_6.insert(MinLotSize_6.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_6);

    msg.addGroup(noLotTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_1;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_7;
    FIX::LotType LotType_10('4');
    noLotTypeRules_0_1.set(LotType_10);
    LotTypeRules_NoLotTypeRules_7.insert(LotType_10.getString());
    FIX::MinLotSize MinLotSize_7;
    MinLotSize_7.setString("1674437");
    noLotTypeRules_0_1.set(MinLotSize_7);
    LotTypeRules_NoLotTypeRules_7.insert(MinLotSize_7.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_7);

    msg.addGroup(noLotTypeRules_0_1);
  }
  // PriceLimits
  multiset<string> PriceLimits_4;
  FIX::HighLimitPrice HighLimitPrice_4;
  HighLimitPrice_4.setString("20723851");
  msg.set(HighLimitPrice_4);
  PriceLimits_4.insert(HighLimitPrice_4.getString());
  FIX::LowLimitPrice LowLimitPrice_4;
  LowLimitPrice_4.setString("1609476");
  msg.set(LowLimitPrice_4);
  PriceLimits_4.insert(LowLimitPrice_4.getString());
  FIX::PriceLimitType PriceLimitType_4(0);
  msg.set(PriceLimitType_4);
  PriceLimits_4.insert(PriceLimitType_4.getString());
  FIX::TradingReferencePrice TradingReferencePrice_4;
  TradingReferencePrice_4.setString("1563187");
  msg.set(TradingReferencePrice_4);
  PriceLimits_4.insert(TradingReferencePrice_4.getString());
  all_values.push_back(PriceLimits_4);

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_7;
    FIX::EndTickPriceRange EndTickPriceRange_7;
    EndTickPriceRange_7.setString("9253603");
    noTickRules_0_0.set(EndTickPriceRange_7);
    TickRules_NoTickRules_7.insert(EndTickPriceRange_7.getString());
    FIX::StartTickPriceRange StartTickPriceRange_7;
    StartTickPriceRange_7.setString("15889912");
    noTickRules_0_0.set(StartTickPriceRange_7);
    TickRules_NoTickRules_7.insert(StartTickPriceRange_7.getString());
    FIX::TickIncrement TickIncrement_7;
    TickIncrement_7.setString("12290918");
    noTickRules_0_0.set(TickIncrement_7);
    TickRules_NoTickRules_7.insert(TickIncrement_7.getString());
    FIX::TickRuleType TickRuleType_7(0);
    noTickRules_0_0.set(TickRuleType_7);
    TickRules_NoTickRules_7.insert(TickRuleType_7.getString());
    all_values.push_back(TickRules_NoTickRules_7);

    msg.addGroup(noTickRules_0_0);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_10;
    FIX::ExecInstValue ExecInstValue_10('7');
    noExecInstRules_0_0.set(ExecInstValue_10);
    ExecInstRules_NoExecInstRules_10.insert(ExecInstValue_10.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_10);

    msg.addGroup(noExecInstRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoExecInstRules noExecInstRules_0_1;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_11;
    FIX::ExecInstValue ExecInstValue_11('4');
    noExecInstRules_0_1.set(ExecInstValue_11);
    ExecInstRules_NoExecInstRules_11.insert(ExecInstValue_11.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_11);

    msg.addGroup(noExecInstRules_0_1);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_14;
    FIX::OrdType OrdType_18('4');
    noOrdTypeRules_0_0.set(OrdType_18);
    OrdTypeRules_NoOrdTypeRules_14.insert(OrdType_18.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_14);

    msg.addGroup(noOrdTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_1;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_15;
    FIX::OrdType OrdType_19('A');
    noOrdTypeRules_0_1.set(OrdType_19);
    OrdTypeRules_NoOrdTypeRules_15.insert(OrdType_19.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_15);

    msg.addGroup(noOrdTypeRules_0_1);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_11;
    FIX::TimeInForce TimeInForce_15('4');
    noTimeInForceRules_0_0.set(TimeInForce_15);
    TimeInForceRules_NoTimeInForceRules_11.insert(TimeInForce_15.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_11);

    msg.addGroup(noTimeInForceRules_0_0);
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
