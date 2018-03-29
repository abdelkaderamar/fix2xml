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
  multiset<string> all_compo_names;
  multiset<string> MarketDefinitionUpdateReport_0;
  FIX::Currency Currency_29("CHF");
  msg.set(Currency_29);
  MarketDefinitionUpdateReport_0.insert(Currency_29.getString());
  FIX::EncodedMktSegmDesc EncodedMktSegmDesc_1("DATA_283793087");
  msg.set(EncodedMktSegmDesc_1);
  MarketDefinitionUpdateReport_0.insert(EncodedMktSegmDesc_1.getString());
  FIX::EncodedMktSegmDescLen EncodedMktSegmDescLen_1(1883786229);
  msg.set(EncodedMktSegmDescLen_1);
  MarketDefinitionUpdateReport_0.insert(EncodedMktSegmDescLen_1.getString());
  FIX::EncodedText EncodedText_51("DATA_697329705");
  msg.set(EncodedText_51);
  MarketDefinitionUpdateReport_0.insert(EncodedText_51.getString());
  FIX::EncodedTextLen EncodedTextLen_51(1787343709);
  msg.set(EncodedTextLen_51);
  MarketDefinitionUpdateReport_0.insert(EncodedTextLen_51.getString());
  FIX::MarketID MarketID_9("EXCHANGE_495387663");
  msg.set(MarketID_9);
  MarketDefinitionUpdateReport_0.insert(MarketID_9.getString());
  FIX::MarketReportID MarketReportID_1("STRING_177052087");
  msg.set(MarketReportID_1);
  MarketDefinitionUpdateReport_0.insert(MarketReportID_1.getString());
  FIX::MarketReqID MarketReqID_2("STRING_603000109");
  msg.set(MarketReqID_2);
  MarketDefinitionUpdateReport_0.insert(MarketReqID_2.getString());
  FIX::MarketSegmentDesc MarketSegmentDesc_1("STRING_1186189936");
  msg.set(MarketSegmentDesc_1);
  MarketDefinitionUpdateReport_0.insert(MarketSegmentDesc_1.getString());
  FIX::MarketSegmentID MarketSegmentID_9("STRING_2107105975");
  msg.set(MarketSegmentID_9);
  MarketDefinitionUpdateReport_0.insert(MarketSegmentID_9.getString());
  FIX::MarketUpdateAction MarketUpdateAction_0('D');
  msg.set(MarketUpdateAction_0);
  MarketDefinitionUpdateReport_0.insert(MarketUpdateAction_0.getString());
  FIX::ParentMktSegmID ParentMktSegmID_2("STRING_497143864");
  msg.set(ParentMktSegmID_2);
  MarketDefinitionUpdateReport_0.insert(ParentMktSegmID_2.getString());
  FIX::Text Text_51("STRING_1158276484");
  msg.set(Text_51);
  MarketDefinitionUpdateReport_0.insert(Text_51.getString());
  FIX::TransactTime TransactTime_25(FIX::UTCTIMESTAMP(17, 42, 48, 1, 10, 2017));
  msg.set(TransactTime_25);
  MarketDefinitionUpdateReport_0.insert(TransactTime_25.getString());
  all_values.push_back(MarketDefinitionUpdateReport_0);

  all_compo_names.insert("MarketDefinitionUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_9;
  FIX::ApplID ApplID_9("STRING_255771957");
  msg.set(ApplID_9);
  ApplicationSequenceControl_9.insert(ApplID_9.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_9(804527647);
  msg.set(ApplLastSeqNum_9);
  ApplicationSequenceControl_9.insert(ApplLastSeqNum_9.getString());
  FIX::ApplResendFlag ApplResendFlag_9(false);
  msg.set(ApplResendFlag_9);
  ApplicationSequenceControl_9.insert(ApplResendFlag_9.getString());
  FIX::ApplSeqNum ApplSeqNum_9(913108718);
  msg.set(ApplSeqNum_9);
  ApplicationSequenceControl_9.insert(ApplSeqNum_9.getString());
  all_values.push_back(ApplicationSequenceControl_9);
  all_compo_names.insert("ApplicationSequenceControl");

  // BaseTradingRules
  multiset<string> BaseTradingRules_7;
  FIX::ExpirationCycle ExpirationCycle_7(0);
  msg.set(ExpirationCycle_7);
  BaseTradingRules_7.insert(ExpirationCycle_7.getString());
  FIX::ImpliedMarketIndicator ImpliedMarketIndicator_7(1);
  msg.set(ImpliedMarketIndicator_7);
  BaseTradingRules_7.insert(ImpliedMarketIndicator_7.getString());
  FIX::MaxPriceVariation MaxPriceVariation_7;
  MaxPriceVariation_7.setString("275757");
  msg.set(MaxPriceVariation_7);
  BaseTradingRules_7.insert(MaxPriceVariation_7.getString());
  FIX::MaxTradeVol MaxTradeVol_7;
  MaxTradeVol_7.setString("6307334");
  msg.set(MaxTradeVol_7);
  BaseTradingRules_7.insert(MaxTradeVol_7.getString());
  FIX::MinTradeVol MinTradeVol_7;
  MinTradeVol_7.setString("18477165");
  msg.set(MinTradeVol_7);
  BaseTradingRules_7.insert(MinTradeVol_7.getString());
  FIX::MultilegModel MultilegModel_7(2);
  msg.set(MultilegModel_7);
  BaseTradingRules_7.insert(MultilegModel_7.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_7(5);
  msg.set(MultilegPriceMethod_7);
  BaseTradingRules_7.insert(MultilegPriceMethod_7.getString());
  FIX::PriceType PriceType_26(18);
  msg.set(PriceType_26);
  BaseTradingRules_7.insert(PriceType_26.getString());
  FIX::RoundLot RoundLot_7;
  RoundLot_7.setString("3939229");
  msg.set(RoundLot_7);
  BaseTradingRules_7.insert(RoundLot_7.getString());
  FIX::TradingCurrency TradingCurrency_7("GBP");
  msg.set(TradingCurrency_7);
  BaseTradingRules_7.insert(TradingCurrency_7.getString());
  all_values.push_back(BaseTradingRules_7);
  all_compo_names.insert("BaseTradingRules");

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_13;
    FIX::LotType LotType_17('3');
    noLotTypeRules_0_0.set(LotType_17);
    LotTypeRules_NoLotTypeRules_13.insert(LotType_17.getString());
    FIX::MinLotSize MinLotSize_13;
    MinLotSize_13.setString("21028424");
    noLotTypeRules_0_0.set(MinLotSize_13);
    LotTypeRules_NoLotTypeRules_13.insert(MinLotSize_13.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_13);
    all_compo_names.insert("LotTypeRules.NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_0);
  }
  // PriceLimits
  multiset<string> PriceLimits_7;
  FIX::HighLimitPrice HighLimitPrice_7;
  HighLimitPrice_7.setString("6367831");
  msg.set(HighLimitPrice_7);
  PriceLimits_7.insert(HighLimitPrice_7.getString());
  FIX::LowLimitPrice LowLimitPrice_7;
  LowLimitPrice_7.setString("17857496");
  msg.set(LowLimitPrice_7);
  PriceLimits_7.insert(LowLimitPrice_7.getString());
  FIX::PriceLimitType PriceLimitType_7(2);
  msg.set(PriceLimitType_7);
  PriceLimits_7.insert(PriceLimitType_7.getString());
  FIX::TradingReferencePrice TradingReferencePrice_7;
  TradingReferencePrice_7.setString("7154985");
  msg.set(TradingReferencePrice_7);
  PriceLimits_7.insert(TradingReferencePrice_7.getString());
  all_values.push_back(PriceLimits_7);
  all_compo_names.insert("PriceLimits");

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_16;
    FIX::EndTickPriceRange EndTickPriceRange_16;
    EndTickPriceRange_16.setString("10732576");
    noTickRules_0_0.set(EndTickPriceRange_16);
    TickRules_NoTickRules_16.insert(EndTickPriceRange_16.getString());
    FIX::StartTickPriceRange StartTickPriceRange_16;
    StartTickPriceRange_16.setString("4428515");
    noTickRules_0_0.set(StartTickPriceRange_16);
    TickRules_NoTickRules_16.insert(StartTickPriceRange_16.getString());
    FIX::TickIncrement TickIncrement_16;
    TickIncrement_16.setString("10400463");
    noTickRules_0_0.set(TickIncrement_16);
    TickRules_NoTickRules_16.insert(TickIncrement_16.getString());
    FIX::TickRuleType TickRuleType_16(1);
    noTickRules_0_0.set(TickRuleType_16);
    TickRules_NoTickRules_16.insert(TickRuleType_16.getString());
    all_values.push_back(TickRules_NoTickRules_16);
    all_compo_names.insert("TickRules.NoTickRules");

    msg.addGroup(noTickRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTickRules noTickRules_0_1;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_17;
    FIX::EndTickPriceRange EndTickPriceRange_17;
    EndTickPriceRange_17.setString("11728017");
    noTickRules_0_1.set(EndTickPriceRange_17);
    TickRules_NoTickRules_17.insert(EndTickPriceRange_17.getString());
    FIX::StartTickPriceRange StartTickPriceRange_17;
    StartTickPriceRange_17.setString("13517126");
    noTickRules_0_1.set(StartTickPriceRange_17);
    TickRules_NoTickRules_17.insert(StartTickPriceRange_17.getString());
    FIX::TickIncrement TickIncrement_17;
    TickIncrement_17.setString("1225382");
    noTickRules_0_1.set(TickIncrement_17);
    TickRules_NoTickRules_17.insert(TickIncrement_17.getString());
    FIX::TickRuleType TickRuleType_17(1);
    noTickRules_0_1.set(TickRuleType_17);
    TickRules_NoTickRules_17.insert(TickRuleType_17.getString());
    all_values.push_back(TickRules_NoTickRules_17);
    all_compo_names.insert("TickRules.NoTickRules");

    msg.addGroup(noTickRules_0_1);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTickRules noTickRules_0_2;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_18;
    FIX::EndTickPriceRange EndTickPriceRange_18;
    EndTickPriceRange_18.setString("16074846");
    noTickRules_0_2.set(EndTickPriceRange_18);
    TickRules_NoTickRules_18.insert(EndTickPriceRange_18.getString());
    FIX::StartTickPriceRange StartTickPriceRange_18;
    StartTickPriceRange_18.setString("9270658");
    noTickRules_0_2.set(StartTickPriceRange_18);
    TickRules_NoTickRules_18.insert(StartTickPriceRange_18.getString());
    FIX::TickIncrement TickIncrement_18;
    TickIncrement_18.setString("20586130");
    noTickRules_0_2.set(TickIncrement_18);
    TickRules_NoTickRules_18.insert(TickIncrement_18.getString());
    FIX::TickRuleType TickRuleType_18(2);
    noTickRules_0_2.set(TickRuleType_18);
    TickRules_NoTickRules_18.insert(TickRuleType_18.getString());
    all_values.push_back(TickRules_NoTickRules_18);
    all_compo_names.insert("TickRules.NoTickRules");

    msg.addGroup(noTickRules_0_2);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_25;
    FIX::ExecInstValue ExecInstValue_25('1');
    noExecInstRules_0_0.set(ExecInstValue_25);
    ExecInstRules_NoExecInstRules_25.insert(ExecInstValue_25.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_25);
    all_compo_names.insert("ExecInstRules.NoExecInstRules");

    msg.addGroup(noExecInstRules_0_0);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_25;
    FIX::OrdType OrdType_30('A');
    noOrdTypeRules_0_0.set(OrdType_30);
    OrdTypeRules_NoOrdTypeRules_25.insert(OrdType_30.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_25);
    all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_1;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_26;
    FIX::OrdType OrdType_31('2');
    noOrdTypeRules_0_1.set(OrdType_31);
    OrdTypeRules_NoOrdTypeRules_26.insert(OrdType_31.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_26);
    all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_1);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_2;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_27;
    FIX::OrdType OrdType_32('8');
    noOrdTypeRules_0_2.set(OrdType_32);
    OrdTypeRules_NoOrdTypeRules_27.insert(OrdType_32.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_27);
    all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_2);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_25;
    FIX::TimeInForce TimeInForce_30('2');
    noTimeInForceRules_0_0.set(TimeInForce_30);
    TimeInForceRules_NoTimeInForceRules_25.insert(TimeInForce_30.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_25);
    all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

    msg.addGroup(noTimeInForceRules_0_0);
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
