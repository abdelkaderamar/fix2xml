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
  FIX::Currency Currency_32("CAN");
  msg.set(Currency_32);
  MarketDefinitionUpdateReport_0.insert(Currency_32.getString());
  FIX::EncodedMktSegmDesc EncodedMktSegmDesc_1("DATA_40790358");
  msg.set(EncodedMktSegmDesc_1);
  MarketDefinitionUpdateReport_0.insert(EncodedMktSegmDesc_1.getString());
  FIX::EncodedMktSegmDescLen EncodedMktSegmDescLen_1(1458354471);
  msg.set(EncodedMktSegmDescLen_1);
  MarketDefinitionUpdateReport_0.insert(EncodedMktSegmDescLen_1.getString());
  FIX::EncodedText EncodedText_58("DATA_1821602788");
  msg.set(EncodedText_58);
  MarketDefinitionUpdateReport_0.insert(EncodedText_58.getString());
  FIX::EncodedTextLen EncodedTextLen_58(741302099);
  msg.set(EncodedTextLen_58);
  MarketDefinitionUpdateReport_0.insert(EncodedTextLen_58.getString());
  FIX::MarketID MarketID_8("EXCHANGE_1947924807");
  msg.set(MarketID_8);
  MarketDefinitionUpdateReport_0.insert(MarketID_8.getString());
  FIX::MarketReportID MarketReportID_1("STRING_834049847");
  msg.set(MarketReportID_1);
  MarketDefinitionUpdateReport_0.insert(MarketReportID_1.getString());
  FIX::MarketReqID MarketReqID_2("STRING_1110378047");
  msg.set(MarketReqID_2);
  MarketDefinitionUpdateReport_0.insert(MarketReqID_2.getString());
  FIX::MarketSegmentDesc MarketSegmentDesc_1("STRING_373280965");
  msg.set(MarketSegmentDesc_1);
  MarketDefinitionUpdateReport_0.insert(MarketSegmentDesc_1.getString());
  FIX::MarketSegmentID MarketSegmentID_8("STRING_1786905930");
  msg.set(MarketSegmentID_8);
  MarketDefinitionUpdateReport_0.insert(MarketSegmentID_8.getString());
  FIX::MarketUpdateAction MarketUpdateAction_0('D');
  msg.set(MarketUpdateAction_0);
  MarketDefinitionUpdateReport_0.insert(MarketUpdateAction_0.getString());
  FIX::ParentMktSegmID ParentMktSegmID_2("STRING_960847684");
  msg.set(ParentMktSegmID_2);
  MarketDefinitionUpdateReport_0.insert(ParentMktSegmID_2.getString());
  FIX::Text Text_58("STRING_1531680444");
  msg.set(Text_58);
  MarketDefinitionUpdateReport_0.insert(Text_58.getString());
  FIX::TransactTime TransactTime_26(FIX::UTCTIMESTAMP(22, 53, 16, 10, 5, 2009));
  msg.set(TransactTime_26);
  MarketDefinitionUpdateReport_0.insert(TransactTime_26.getString());
  all_values.push_back(MarketDefinitionUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_9;
  FIX::ApplID ApplID_9("STRING_72634891");
  msg.set(ApplID_9);
  ApplicationSequenceControl_9.insert(ApplID_9.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_9(1286216403);
  msg.set(ApplLastSeqNum_9);
  ApplicationSequenceControl_9.insert(ApplLastSeqNum_9.getString());
  FIX::ApplResendFlag ApplResendFlag_9(true);
  msg.set(ApplResendFlag_9);
  ApplicationSequenceControl_9.insert(ApplResendFlag_9.getString());
  FIX::ApplSeqNum ApplSeqNum_9(338759044);
  msg.set(ApplSeqNum_9);
  ApplicationSequenceControl_9.insert(ApplSeqNum_9.getString());
  all_values.push_back(ApplicationSequenceControl_9);

  // BaseTradingRules
  multiset<string> BaseTradingRules_6;
  FIX::ExpirationCycle ExpirationCycle_6(0);
  msg.set(ExpirationCycle_6);
  BaseTradingRules_6.insert(ExpirationCycle_6.getString());
  FIX::ImpliedMarketIndicator ImpliedMarketIndicator_6(3);
  msg.set(ImpliedMarketIndicator_6);
  BaseTradingRules_6.insert(ImpliedMarketIndicator_6.getString());
  FIX::MaxPriceVariation MaxPriceVariation_6;
  MaxPriceVariation_6.setString("10018439");
  msg.set(MaxPriceVariation_6);
  BaseTradingRules_6.insert(MaxPriceVariation_6.getString());
  FIX::MaxTradeVol MaxTradeVol_6;
  MaxTradeVol_6.setString("163073");
  msg.set(MaxTradeVol_6);
  BaseTradingRules_6.insert(MaxTradeVol_6.getString());
  FIX::MinTradeVol MinTradeVol_6;
  MinTradeVol_6.setString("15537966");
  msg.set(MinTradeVol_6);
  BaseTradingRules_6.insert(MinTradeVol_6.getString());
  FIX::MultilegModel MultilegModel_6(1);
  msg.set(MultilegModel_6);
  BaseTradingRules_6.insert(MultilegModel_6.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_6(5);
  msg.set(MultilegPriceMethod_6);
  BaseTradingRules_6.insert(MultilegPriceMethod_6.getString());
  FIX::PriceType PriceType_27(19);
  msg.set(PriceType_27);
  BaseTradingRules_6.insert(PriceType_27.getString());
  FIX::RoundLot RoundLot_6;
  RoundLot_6.setString("4003688");
  msg.set(RoundLot_6);
  BaseTradingRules_6.insert(RoundLot_6.getString());
  FIX::TradingCurrency TradingCurrency_6("CHF");
  msg.set(TradingCurrency_6);
  BaseTradingRules_6.insert(TradingCurrency_6.getString());
  all_values.push_back(BaseTradingRules_6);

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_13;
    FIX::LotType LotType_19('2');
    noLotTypeRules_0_0.set(LotType_19);
    LotTypeRules_NoLotTypeRules_13.insert(LotType_19.getString());
    FIX::MinLotSize MinLotSize_13;
    MinLotSize_13.setString("8157583");
    noLotTypeRules_0_0.set(MinLotSize_13);
    LotTypeRules_NoLotTypeRules_13.insert(MinLotSize_13.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_13);

    msg.addGroup(noLotTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_1;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_14;
    FIX::LotType LotType_20('2');
    noLotTypeRules_0_1.set(LotType_20);
    LotTypeRules_NoLotTypeRules_14.insert(LotType_20.getString());
    FIX::MinLotSize MinLotSize_14;
    MinLotSize_14.setString("10745106");
    noLotTypeRules_0_1.set(MinLotSize_14);
    LotTypeRules_NoLotTypeRules_14.insert(MinLotSize_14.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_14);

    msg.addGroup(noLotTypeRules_0_1);
  }
  // PriceLimits
  multiset<string> PriceLimits_6;
  FIX::HighLimitPrice HighLimitPrice_6;
  HighLimitPrice_6.setString("4551805");
  msg.set(HighLimitPrice_6);
  PriceLimits_6.insert(HighLimitPrice_6.getString());
  FIX::LowLimitPrice LowLimitPrice_6;
  LowLimitPrice_6.setString("20266933");
  msg.set(LowLimitPrice_6);
  PriceLimits_6.insert(LowLimitPrice_6.getString());
  FIX::PriceLimitType PriceLimitType_6(1);
  msg.set(PriceLimitType_6);
  PriceLimits_6.insert(PriceLimitType_6.getString());
  FIX::TradingReferencePrice TradingReferencePrice_6;
  TradingReferencePrice_6.setString("19868610");
  msg.set(TradingReferencePrice_6);
  PriceLimits_6.insert(TradingReferencePrice_6.getString());
  all_values.push_back(PriceLimits_6);

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_13;
    FIX::EndTickPriceRange EndTickPriceRange_13;
    EndTickPriceRange_13.setString("3288616");
    noTickRules_0_0.set(EndTickPriceRange_13);
    TickRules_NoTickRules_13.insert(EndTickPriceRange_13.getString());
    FIX::StartTickPriceRange StartTickPriceRange_13;
    StartTickPriceRange_13.setString("10222493");
    noTickRules_0_0.set(StartTickPriceRange_13);
    TickRules_NoTickRules_13.insert(StartTickPriceRange_13.getString());
    FIX::TickIncrement TickIncrement_13;
    TickIncrement_13.setString("15056052");
    noTickRules_0_0.set(TickIncrement_13);
    TickRules_NoTickRules_13.insert(TickIncrement_13.getString());
    FIX::TickRuleType TickRuleType_13(4);
    noTickRules_0_0.set(TickRuleType_13);
    TickRules_NoTickRules_13.insert(TickRuleType_13.getString());
    all_values.push_back(TickRules_NoTickRules_13);

    msg.addGroup(noTickRules_0_0);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_20;
    FIX::ExecInstValue ExecInstValue_20('8');
    noExecInstRules_0_0.set(ExecInstValue_20);
    ExecInstRules_NoExecInstRules_20.insert(ExecInstValue_20.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_20);

    msg.addGroup(noExecInstRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoExecInstRules noExecInstRules_0_1;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_21;
    FIX::ExecInstValue ExecInstValue_21('1');
    noExecInstRules_0_1.set(ExecInstValue_21);
    ExecInstRules_NoExecInstRules_21.insert(ExecInstValue_21.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_21);

    msg.addGroup(noExecInstRules_0_1);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_23;
    FIX::OrdType OrdType_30('E');
    noOrdTypeRules_0_0.set(OrdType_30);
    OrdTypeRules_NoOrdTypeRules_23.insert(OrdType_30.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_23);

    msg.addGroup(noOrdTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_1;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_24;
    FIX::OrdType OrdType_31('4');
    noOrdTypeRules_0_1.set(OrdType_31);
    OrdTypeRules_NoOrdTypeRules_24.insert(OrdType_31.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_24);

    msg.addGroup(noOrdTypeRules_0_1);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_2;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_25;
    FIX::OrdType OrdType_32('C');
    noOrdTypeRules_0_2.set(OrdType_32);
    OrdTypeRules_NoOrdTypeRules_25.insert(OrdType_32.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_25);

    msg.addGroup(noOrdTypeRules_0_2);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_20;
    FIX::TimeInForce TimeInForce_27('9');
    noTimeInForceRules_0_0.set(TimeInForce_27);
    TimeInForceRules_NoTimeInForceRules_20.insert(TimeInForce_27.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_20);

    msg.addGroup(noTimeInForceRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTimeInForceRules noTimeInForceRules_0_1;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_21;
    FIX::TimeInForce TimeInForce_28('6');
    noTimeInForceRules_0_1.set(TimeInForce_28);
    TimeInForceRules_NoTimeInForceRules_21.insert(TimeInForce_28.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_21);

    msg.addGroup(noTimeInForceRules_0_1);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTimeInForceRules noTimeInForceRules_0_2;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_22;
    FIX::TimeInForce TimeInForce_29('6');
    noTimeInForceRules_0_2.set(TimeInForce_29);
    TimeInForceRules_NoTimeInForceRules_22.insert(TimeInForce_29.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_22);

    msg.addGroup(noTimeInForceRules_0_2);
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
