#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/MarketDefinition.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinition, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDefinition msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinition_0;
  FIX::Currency Currency_28("CHF");
  msg.set(Currency_28);
  MarketDefinition_0.insert(Currency_28.getString());
  FIX::EncodedMktSegmDesc EncodedMktSegmDesc_0("DATA_2038866457");
  msg.set(EncodedMktSegmDesc_0);
  MarketDefinition_0.insert(EncodedMktSegmDesc_0.getString());
  FIX::EncodedMktSegmDescLen EncodedMktSegmDescLen_0(793886235);
  msg.set(EncodedMktSegmDescLen_0);
  MarketDefinition_0.insert(EncodedMktSegmDescLen_0.getString());
  FIX::EncodedText EncodedText_50("DATA_345296956");
  msg.set(EncodedText_50);
  MarketDefinition_0.insert(EncodedText_50.getString());
  FIX::EncodedTextLen EncodedTextLen_50(363473152);
  msg.set(EncodedTextLen_50);
  MarketDefinition_0.insert(EncodedTextLen_50.getString());
  FIX::MarketID MarketID_7("EXCHANGE_136984581");
  msg.set(MarketID_7);
  MarketDefinition_0.insert(MarketID_7.getString());
  FIX::MarketReportID MarketReportID_0("STRING_1461846865");
  msg.set(MarketReportID_0);
  MarketDefinition_0.insert(MarketReportID_0.getString());
  FIX::MarketReqID MarketReqID_0("STRING_1380635519");
  msg.set(MarketReqID_0);
  MarketDefinition_0.insert(MarketReqID_0.getString());
  FIX::MarketSegmentDesc MarketSegmentDesc_0("STRING_786644148");
  msg.set(MarketSegmentDesc_0);
  MarketDefinition_0.insert(MarketSegmentDesc_0.getString());
  FIX::MarketSegmentID MarketSegmentID_7("STRING_330283618");
  msg.set(MarketSegmentID_7);
  MarketDefinition_0.insert(MarketSegmentID_7.getString());
  FIX::ParentMktSegmID ParentMktSegmID_0("STRING_1302311665");
  msg.set(ParentMktSegmID_0);
  MarketDefinition_0.insert(ParentMktSegmID_0.getString());
  FIX::Text Text_50("STRING_759918524");
  msg.set(Text_50);
  MarketDefinition_0.insert(Text_50.getString());
  FIX::TransactTime TransactTime_24(FIX::UTCTIMESTAMP(2, 19, 17, 17, 8, 2013));
  msg.set(TransactTime_24);
  MarketDefinition_0.insert(TransactTime_24.getString());
  all_values.push_back(MarketDefinition_0);

  all_compo_names.insert("MarketDefinition");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_8;
  FIX::ApplID ApplID_8("STRING_172922398");
  msg.set(ApplID_8);
  ApplicationSequenceControl_8.insert(ApplID_8.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_8(1096538713);
  msg.set(ApplLastSeqNum_8);
  ApplicationSequenceControl_8.insert(ApplLastSeqNum_8.getString());
  FIX::ApplResendFlag ApplResendFlag_8(false);
  msg.set(ApplResendFlag_8);
  ApplicationSequenceControl_8.insert(ApplResendFlag_8.getString());
  FIX::ApplSeqNum ApplSeqNum_8(1353959531);
  msg.set(ApplSeqNum_8);
  ApplicationSequenceControl_8.insert(ApplSeqNum_8.getString());
  all_values.push_back(ApplicationSequenceControl_8);
  all_compo_names.insert("ApplicationSequenceControl");

  // BaseTradingRules
  multiset<string> BaseTradingRules_6;
  FIX::ExpirationCycle ExpirationCycle_6(0);
  msg.set(ExpirationCycle_6);
  BaseTradingRules_6.insert(ExpirationCycle_6.getString());
  FIX::ImpliedMarketIndicator ImpliedMarketIndicator_6(1);
  msg.set(ImpliedMarketIndicator_6);
  BaseTradingRules_6.insert(ImpliedMarketIndicator_6.getString());
  FIX::MaxPriceVariation MaxPriceVariation_6;
  MaxPriceVariation_6.setString("10124274");
  msg.set(MaxPriceVariation_6);
  BaseTradingRules_6.insert(MaxPriceVariation_6.getString());
  FIX::MaxTradeVol MaxTradeVol_6;
  MaxTradeVol_6.setString("5370758");
  msg.set(MaxTradeVol_6);
  BaseTradingRules_6.insert(MaxTradeVol_6.getString());
  FIX::MinTradeVol MinTradeVol_6;
  MinTradeVol_6.setString("5000469");
  msg.set(MinTradeVol_6);
  BaseTradingRules_6.insert(MinTradeVol_6.getString());
  FIX::MultilegModel MultilegModel_6(2);
  msg.set(MultilegModel_6);
  BaseTradingRules_6.insert(MultilegModel_6.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_6(0);
  msg.set(MultilegPriceMethod_6);
  BaseTradingRules_6.insert(MultilegPriceMethod_6.getString());
  FIX::PriceType PriceType_25(15);
  msg.set(PriceType_25);
  BaseTradingRules_6.insert(PriceType_25.getString());
  FIX::RoundLot RoundLot_6;
  RoundLot_6.setString("13266417");
  msg.set(RoundLot_6);
  BaseTradingRules_6.insert(RoundLot_6.getString());
  FIX::TradingCurrency TradingCurrency_6("JPY");
  msg.set(TradingCurrency_6);
  BaseTradingRules_6.insert(TradingCurrency_6.getString());
  all_values.push_back(BaseTradingRules_6);
  all_compo_names.insert("BaseTradingRules");

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_10;
    FIX::LotType LotType_14('2');
    noLotTypeRules_0_0.set(LotType_14);
    LotTypeRules_NoLotTypeRules_10.insert(LotType_14.getString());
    FIX::MinLotSize MinLotSize_10;
    MinLotSize_10.setString("13600060");
    noLotTypeRules_0_0.set(MinLotSize_10);
    LotTypeRules_NoLotTypeRules_10.insert(MinLotSize_10.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_10);
    all_compo_names.insert("LotTypeRules.NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_1;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_11;
    FIX::LotType LotType_15('3');
    noLotTypeRules_0_1.set(LotType_15);
    LotTypeRules_NoLotTypeRules_11.insert(LotType_15.getString());
    FIX::MinLotSize MinLotSize_11;
    MinLotSize_11.setString("2012389");
    noLotTypeRules_0_1.set(MinLotSize_11);
    LotTypeRules_NoLotTypeRules_11.insert(MinLotSize_11.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_11);
    all_compo_names.insert("LotTypeRules.NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_2;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_12;
    FIX::LotType LotType_16('2');
    noLotTypeRules_0_2.set(LotType_16);
    LotTypeRules_NoLotTypeRules_12.insert(LotType_16.getString());
    FIX::MinLotSize MinLotSize_12;
    MinLotSize_12.setString("13165855");
    noLotTypeRules_0_2.set(MinLotSize_12);
    LotTypeRules_NoLotTypeRules_12.insert(MinLotSize_12.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_12);
    all_compo_names.insert("LotTypeRules.NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_2);
  }
  // PriceLimits
  multiset<string> PriceLimits_6;
  FIX::HighLimitPrice HighLimitPrice_6;
  HighLimitPrice_6.setString("15035506");
  msg.set(HighLimitPrice_6);
  PriceLimits_6.insert(HighLimitPrice_6.getString());
  FIX::LowLimitPrice LowLimitPrice_6;
  LowLimitPrice_6.setString("7590850");
  msg.set(LowLimitPrice_6);
  PriceLimits_6.insert(LowLimitPrice_6.getString());
  FIX::PriceLimitType PriceLimitType_6(0);
  msg.set(PriceLimitType_6);
  PriceLimits_6.insert(PriceLimitType_6.getString());
  FIX::TradingReferencePrice TradingReferencePrice_6;
  TradingReferencePrice_6.setString("9631400");
  msg.set(TradingReferencePrice_6);
  PriceLimits_6.insert(TradingReferencePrice_6.getString());
  all_values.push_back(PriceLimits_6);
  all_compo_names.insert("PriceLimits");

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_14;
    FIX::EndTickPriceRange EndTickPriceRange_14;
    EndTickPriceRange_14.setString("19300538");
    noTickRules_0_0.set(EndTickPriceRange_14);
    TickRules_NoTickRules_14.insert(EndTickPriceRange_14.getString());
    FIX::StartTickPriceRange StartTickPriceRange_14;
    StartTickPriceRange_14.setString("16231989");
    noTickRules_0_0.set(StartTickPriceRange_14);
    TickRules_NoTickRules_14.insert(StartTickPriceRange_14.getString());
    FIX::TickIncrement TickIncrement_14;
    TickIncrement_14.setString("14584375");
    noTickRules_0_0.set(TickIncrement_14);
    TickRules_NoTickRules_14.insert(TickIncrement_14.getString());
    FIX::TickRuleType TickRuleType_14(2);
    noTickRules_0_0.set(TickRuleType_14);
    TickRules_NoTickRules_14.insert(TickRuleType_14.getString());
    all_values.push_back(TickRules_NoTickRules_14);
    all_compo_names.insert("TickRules.NoTickRules");

    msg.addGroup(noTickRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_1;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_15;
    FIX::EndTickPriceRange EndTickPriceRange_15;
    EndTickPriceRange_15.setString("17961213");
    noTickRules_0_1.set(EndTickPriceRange_15);
    TickRules_NoTickRules_15.insert(EndTickPriceRange_15.getString());
    FIX::StartTickPriceRange StartTickPriceRange_15;
    StartTickPriceRange_15.setString("4074926");
    noTickRules_0_1.set(StartTickPriceRange_15);
    TickRules_NoTickRules_15.insert(StartTickPriceRange_15.getString());
    FIX::TickIncrement TickIncrement_15;
    TickIncrement_15.setString("2539006");
    noTickRules_0_1.set(TickIncrement_15);
    TickRules_NoTickRules_15.insert(TickIncrement_15.getString());
    FIX::TickRuleType TickRuleType_15(2);
    noTickRules_0_1.set(TickRuleType_15);
    TickRules_NoTickRules_15.insert(TickRuleType_15.getString());
    all_values.push_back(TickRules_NoTickRules_15);
    all_compo_names.insert("TickRules.NoTickRules");

    msg.addGroup(noTickRules_0_1);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_23;
    FIX::ExecInstValue ExecInstValue_23('5');
    noExecInstRules_0_0.set(ExecInstValue_23);
    ExecInstRules_NoExecInstRules_23.insert(ExecInstValue_23.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_23);
    all_compo_names.insert("ExecInstRules.NoExecInstRules");

    msg.addGroup(noExecInstRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_1;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_24;
    FIX::ExecInstValue ExecInstValue_24('2');
    noExecInstRules_0_1.set(ExecInstValue_24);
    ExecInstRules_NoExecInstRules_24.insert(ExecInstValue_24.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_24);
    all_compo_names.insert("ExecInstRules.NoExecInstRules");

    msg.addGroup(noExecInstRules_0_1);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_24;
    FIX::OrdType OrdType_29('J');
    noOrdTypeRules_0_0.set(OrdType_29);
    OrdTypeRules_NoOrdTypeRules_24.insert(OrdType_29.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_24);
    all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_0);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_23;
    FIX::TimeInForce TimeInForce_28('0');
    noTimeInForceRules_0_0.set(TimeInForce_28);
    TimeInForceRules_NoTimeInForceRules_23.insert(TimeInForce_28.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_23);
    all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

    msg.addGroup(noTimeInForceRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_1;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_24;
    FIX::TimeInForce TimeInForce_29('7');
    noTimeInForceRules_0_1.set(TimeInForce_29);
    TimeInForceRules_NoTimeInForceRules_24.insert(TimeInForce_29.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_24);
    all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

    msg.addGroup(noTimeInForceRules_0_1);
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
