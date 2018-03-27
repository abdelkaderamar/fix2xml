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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDefinition msg;

  list<multiset<string>> all_values;
  multiset<string> MarketDefinition_0;
  FIX::Currency Currency_28("CHF");
  msg.set(Currency_28);
  MarketDefinition_0.insert(Currency_28.getString());
  FIX::EncodedMktSegmDesc EncodedMktSegmDesc_0("DATA_438602233");
  msg.set(EncodedMktSegmDesc_0);
  MarketDefinition_0.insert(EncodedMktSegmDesc_0.getString());
  FIX::EncodedMktSegmDescLen EncodedMktSegmDescLen_0(982916087);
  msg.set(EncodedMktSegmDescLen_0);
  MarketDefinition_0.insert(EncodedMktSegmDescLen_0.getString());
  FIX::EncodedText EncodedText_48("DATA_656764098");
  msg.set(EncodedText_48);
  MarketDefinition_0.insert(EncodedText_48.getString());
  FIX::EncodedTextLen EncodedTextLen_48(185189689);
  msg.set(EncodedTextLen_48);
  MarketDefinition_0.insert(EncodedTextLen_48.getString());
  FIX::MarketID MarketID_6("EXCHANGE_389112018");
  msg.set(MarketID_6);
  MarketDefinition_0.insert(MarketID_6.getString());
  FIX::MarketReportID MarketReportID_0("STRING_2053496672");
  msg.set(MarketReportID_0);
  MarketDefinition_0.insert(MarketReportID_0.getString());
  FIX::MarketReqID MarketReqID_0("STRING_1825762300");
  msg.set(MarketReqID_0);
  MarketDefinition_0.insert(MarketReqID_0.getString());
  FIX::MarketSegmentDesc MarketSegmentDesc_0("STRING_1651984420");
  msg.set(MarketSegmentDesc_0);
  MarketDefinition_0.insert(MarketSegmentDesc_0.getString());
  FIX::MarketSegmentID MarketSegmentID_6("STRING_1032580835");
  msg.set(MarketSegmentID_6);
  MarketDefinition_0.insert(MarketSegmentID_6.getString());
  FIX::ParentMktSegmID ParentMktSegmID_0("STRING_52643841");
  msg.set(ParentMktSegmID_0);
  MarketDefinition_0.insert(ParentMktSegmID_0.getString());
  FIX::Text Text_48("STRING_1592438924");
  msg.set(Text_48);
  MarketDefinition_0.insert(Text_48.getString());
  FIX::TransactTime TransactTime_24(FIX::UTCTIMESTAMP(0, 53, 43, 8, 102013));
  msg.set(TransactTime_24);
  MarketDefinition_0.insert(TransactTime_24.getString());
  all_values.push_back(MarketDefinition_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_8;
  FIX::ApplID ApplID_8("STRING_18661686");
  msg.set(ApplID_8);
  ApplicationSequenceControl_8.insert(ApplID_8.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_8(626714818);
  msg.set(ApplLastSeqNum_8);
  ApplicationSequenceControl_8.insert(ApplLastSeqNum_8.getString());
  FIX::ApplResendFlag ApplResendFlag_8(false);
  msg.set(ApplResendFlag_8);
  ApplicationSequenceControl_8.insert(ApplResendFlag_8.getString());
  FIX::ApplSeqNum ApplSeqNum_8(1286064151);
  msg.set(ApplSeqNum_8);
  ApplicationSequenceControl_8.insert(ApplSeqNum_8.getString());
  all_values.push_back(ApplicationSequenceControl_8);

  // BaseTradingRules
  multiset<string> BaseTradingRules_5;
  FIX::ExpirationCycle ExpirationCycle_5(1);
  msg.set(ExpirationCycle_5);
  BaseTradingRules_5.insert(ExpirationCycle_5.getString());
  FIX::ImpliedMarketIndicator ImpliedMarketIndicator_5(3);
  msg.set(ImpliedMarketIndicator_5);
  BaseTradingRules_5.insert(ImpliedMarketIndicator_5.getString());
  FIX::MaxPriceVariation MaxPriceVariation_5;
  MaxPriceVariation_5.setString("13311925");
  msg.set(MaxPriceVariation_5);
  BaseTradingRules_5.insert(MaxPriceVariation_5.getString());
  FIX::MaxTradeVol MaxTradeVol_5;
  MaxTradeVol_5.setString("4005880");
  msg.set(MaxTradeVol_5);
  BaseTradingRules_5.insert(MaxTradeVol_5.getString());
  FIX::MinTradeVol MinTradeVol_5;
  MinTradeVol_5.setString("10429718");
  msg.set(MinTradeVol_5);
  BaseTradingRules_5.insert(MinTradeVol_5.getString());
  FIX::MultilegModel MultilegModel_5(0);
  msg.set(MultilegModel_5);
  BaseTradingRules_5.insert(MultilegModel_5.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_5(4);
  msg.set(MultilegPriceMethod_5);
  BaseTradingRules_5.insert(MultilegPriceMethod_5.getString());
  FIX::PriceType PriceType_22(5);
  msg.set(PriceType_22);
  BaseTradingRules_5.insert(PriceType_22.getString());
  FIX::RoundLot RoundLot_5;
  RoundLot_5.setString("4794305");
  msg.set(RoundLot_5);
  BaseTradingRules_5.insert(RoundLot_5.getString());
  FIX::TradingCurrency TradingCurrency_5("CHF");
  msg.set(TradingCurrency_5);
  BaseTradingRules_5.insert(TradingCurrency_5.getString());
  all_values.push_back(BaseTradingRules_5);

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_9;
    FIX::LotType LotType_13('2');
    noLotTypeRules_0_0.set(LotType_13);
    LotTypeRules_NoLotTypeRules_9.insert(LotType_13.getString());
    FIX::MinLotSize MinLotSize_9;
    MinLotSize_9.setString("2926870");
    noLotTypeRules_0_0.set(MinLotSize_9);
    LotTypeRules_NoLotTypeRules_9.insert(MinLotSize_9.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_9);

    msg.addGroup(noLotTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_1;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_10;
    FIX::LotType LotType_14('3');
    noLotTypeRules_0_1.set(LotType_14);
    LotTypeRules_NoLotTypeRules_10.insert(LotType_14.getString());
    FIX::MinLotSize MinLotSize_10;
    MinLotSize_10.setString("17083678");
    noLotTypeRules_0_1.set(MinLotSize_10);
    LotTypeRules_NoLotTypeRules_10.insert(MinLotSize_10.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_10);

    msg.addGroup(noLotTypeRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_2;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_11;
    FIX::LotType LotType_15('1');
    noLotTypeRules_0_2.set(LotType_15);
    LotTypeRules_NoLotTypeRules_11.insert(LotType_15.getString());
    FIX::MinLotSize MinLotSize_11;
    MinLotSize_11.setString("20747884");
    noLotTypeRules_0_2.set(MinLotSize_11);
    LotTypeRules_NoLotTypeRules_11.insert(MinLotSize_11.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_11);

    msg.addGroup(noLotTypeRules_0_2);
  }
  // PriceLimits
  multiset<string> PriceLimits_5;
  FIX::HighLimitPrice HighLimitPrice_5;
  HighLimitPrice_5.setString("17610116");
  msg.set(HighLimitPrice_5);
  PriceLimits_5.insert(HighLimitPrice_5.getString());
  FIX::LowLimitPrice LowLimitPrice_5;
  LowLimitPrice_5.setString("13896267");
  msg.set(LowLimitPrice_5);
  PriceLimits_5.insert(LowLimitPrice_5.getString());
  FIX::PriceLimitType PriceLimitType_5(2);
  msg.set(PriceLimitType_5);
  PriceLimits_5.insert(PriceLimitType_5.getString());
  FIX::TradingReferencePrice TradingReferencePrice_5;
  TradingReferencePrice_5.setString("8085193");
  msg.set(TradingReferencePrice_5);
  PriceLimits_5.insert(TradingReferencePrice_5.getString());
  all_values.push_back(PriceLimits_5);

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_9;
    FIX::EndTickPriceRange EndTickPriceRange_9;
    EndTickPriceRange_9.setString("7226312");
    noTickRules_0_0.set(EndTickPriceRange_9);
    TickRules_NoTickRules_9.insert(EndTickPriceRange_9.getString());
    FIX::StartTickPriceRange StartTickPriceRange_9;
    StartTickPriceRange_9.setString("16583651");
    noTickRules_0_0.set(StartTickPriceRange_9);
    TickRules_NoTickRules_9.insert(StartTickPriceRange_9.getString());
    FIX::TickIncrement TickIncrement_9;
    TickIncrement_9.setString("9378535");
    noTickRules_0_0.set(TickIncrement_9);
    TickRules_NoTickRules_9.insert(TickIncrement_9.getString());
    FIX::TickRuleType TickRuleType_9(1);
    noTickRules_0_0.set(TickRuleType_9);
    TickRules_NoTickRules_9.insert(TickRuleType_9.getString());
    all_values.push_back(TickRules_NoTickRules_9);

    msg.addGroup(noTickRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_1;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_10;
    FIX::EndTickPriceRange EndTickPriceRange_10;
    EndTickPriceRange_10.setString("16770268");
    noTickRules_0_1.set(EndTickPriceRange_10);
    TickRules_NoTickRules_10.insert(EndTickPriceRange_10.getString());
    FIX::StartTickPriceRange StartTickPriceRange_10;
    StartTickPriceRange_10.setString("15645683");
    noTickRules_0_1.set(StartTickPriceRange_10);
    TickRules_NoTickRules_10.insert(StartTickPriceRange_10.getString());
    FIX::TickIncrement TickIncrement_10;
    TickIncrement_10.setString("13123225");
    noTickRules_0_1.set(TickIncrement_10);
    TickRules_NoTickRules_10.insert(TickIncrement_10.getString());
    FIX::TickRuleType TickRuleType_10(1);
    noTickRules_0_1.set(TickRuleType_10);
    TickRules_NoTickRules_10.insert(TickRuleType_10.getString());
    all_values.push_back(TickRules_NoTickRules_10);

    msg.addGroup(noTickRules_0_1);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_24;
    FIX::ExecInstValue ExecInstValue_24('1');
    noExecInstRules_0_0.set(ExecInstValue_24);
    ExecInstRules_NoExecInstRules_24.insert(ExecInstValue_24.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_24);

    msg.addGroup(noExecInstRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_1;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_25;
    FIX::ExecInstValue ExecInstValue_25('2');
    noExecInstRules_0_1.set(ExecInstValue_25);
    ExecInstRules_NoExecInstRules_25.insert(ExecInstValue_25.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_25);

    msg.addGroup(noExecInstRules_0_1);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_24;
    FIX::OrdType OrdType_29('L');
    noOrdTypeRules_0_0.set(OrdType_29);
    OrdTypeRules_NoOrdTypeRules_24.insert(OrdType_29.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_24);

    msg.addGroup(noOrdTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_1;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_25;
    FIX::OrdType OrdType_30('C');
    noOrdTypeRules_0_1.set(OrdType_30);
    OrdTypeRules_NoOrdTypeRules_25.insert(OrdType_30.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_25);

    msg.addGroup(noOrdTypeRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_2;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_26;
    FIX::OrdType OrdType_31('Q');
    noOrdTypeRules_0_2.set(OrdType_31);
    OrdTypeRules_NoOrdTypeRules_26.insert(OrdType_31.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_26);

    msg.addGroup(noOrdTypeRules_0_2);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_26;
    FIX::TimeInForce TimeInForce_31('0');
    noTimeInForceRules_0_0.set(TimeInForce_31);
    TimeInForceRules_NoTimeInForceRules_26.insert(TimeInForce_31.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_26);

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
