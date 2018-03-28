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
  multiset<string> MarketDefinition_0;
  FIX::Currency Currency_27("CAN");
  msg.set(Currency_27);
  MarketDefinition_0.insert(Currency_27.getString());
  FIX::EncodedMktSegmDesc EncodedMktSegmDesc_0("DATA_2011959014");
  msg.set(EncodedMktSegmDesc_0);
  MarketDefinition_0.insert(EncodedMktSegmDesc_0.getString());
  FIX::EncodedMktSegmDescLen EncodedMktSegmDescLen_0(251650037);
  msg.set(EncodedMktSegmDescLen_0);
  MarketDefinition_0.insert(EncodedMktSegmDescLen_0.getString());
  FIX::EncodedText EncodedText_47("DATA_1711733528");
  msg.set(EncodedText_47);
  MarketDefinition_0.insert(EncodedText_47.getString());
  FIX::EncodedTextLen EncodedTextLen_47(2041133383);
  msg.set(EncodedTextLen_47);
  MarketDefinition_0.insert(EncodedTextLen_47.getString());
  FIX::MarketID MarketID_4("EXCHANGE_1165141602");
  msg.set(MarketID_4);
  MarketDefinition_0.insert(MarketID_4.getString());
  FIX::MarketReportID MarketReportID_0("STRING_1302099295");
  msg.set(MarketReportID_0);
  MarketDefinition_0.insert(MarketReportID_0.getString());
  FIX::MarketReqID MarketReqID_0("STRING_1557154010");
  msg.set(MarketReqID_0);
  MarketDefinition_0.insert(MarketReqID_0.getString());
  FIX::MarketSegmentDesc MarketSegmentDesc_0("STRING_1095530436");
  msg.set(MarketSegmentDesc_0);
  MarketDefinition_0.insert(MarketSegmentDesc_0.getString());
  FIX::MarketSegmentID MarketSegmentID_4("STRING_219329943");
  msg.set(MarketSegmentID_4);
  MarketDefinition_0.insert(MarketSegmentID_4.getString());
  FIX::ParentMktSegmID ParentMktSegmID_0("STRING_818832081");
  msg.set(ParentMktSegmID_0);
  MarketDefinition_0.insert(ParentMktSegmID_0.getString());
  FIX::Text Text_47("STRING_441860354");
  msg.set(Text_47);
  MarketDefinition_0.insert(Text_47.getString());
  FIX::TransactTime TransactTime_24(FIX::UTCTIMESTAMP(20, 27, 28, 2, 1, 2013));
  msg.set(TransactTime_24);
  MarketDefinition_0.insert(TransactTime_24.getString());
  all_values.push_back(MarketDefinition_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_8;
  FIX::ApplID ApplID_8("STRING_277327465");
  msg.set(ApplID_8);
  ApplicationSequenceControl_8.insert(ApplID_8.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_8(1001836840);
  msg.set(ApplLastSeqNum_8);
  ApplicationSequenceControl_8.insert(ApplLastSeqNum_8.getString());
  FIX::ApplResendFlag ApplResendFlag_8(false);
  msg.set(ApplResendFlag_8);
  ApplicationSequenceControl_8.insert(ApplResendFlag_8.getString());
  FIX::ApplSeqNum ApplSeqNum_8(105740626);
  msg.set(ApplSeqNum_8);
  ApplicationSequenceControl_8.insert(ApplSeqNum_8.getString());
  all_values.push_back(ApplicationSequenceControl_8);

  // BaseTradingRules
  multiset<string> BaseTradingRules_3;
  FIX::ExpirationCycle ExpirationCycle_3(1);
  msg.set(ExpirationCycle_3);
  BaseTradingRules_3.insert(ExpirationCycle_3.getString());
  FIX::ImpliedMarketIndicator ImpliedMarketIndicator_3(1);
  msg.set(ImpliedMarketIndicator_3);
  BaseTradingRules_3.insert(ImpliedMarketIndicator_3.getString());
  FIX::MaxPriceVariation MaxPriceVariation_3;
  MaxPriceVariation_3.setString("6649763");
  msg.set(MaxPriceVariation_3);
  BaseTradingRules_3.insert(MaxPriceVariation_3.getString());
  FIX::MaxTradeVol MaxTradeVol_3;
  MaxTradeVol_3.setString("17220677");
  msg.set(MaxTradeVol_3);
  BaseTradingRules_3.insert(MaxTradeVol_3.getString());
  FIX::MinTradeVol MinTradeVol_3;
  MinTradeVol_3.setString("2358197");
  msg.set(MinTradeVol_3);
  BaseTradingRules_3.insert(MinTradeVol_3.getString());
  FIX::MultilegModel MultilegModel_3(0);
  msg.set(MultilegModel_3);
  BaseTradingRules_3.insert(MultilegModel_3.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_3(2);
  msg.set(MultilegPriceMethod_3);
  BaseTradingRules_3.insert(MultilegPriceMethod_3.getString());
  FIX::PriceType PriceType_19(1);
  msg.set(PriceType_19);
  BaseTradingRules_3.insert(PriceType_19.getString());
  FIX::RoundLot RoundLot_3;
  RoundLot_3.setString("9874307");
  msg.set(RoundLot_3);
  BaseTradingRules_3.insert(RoundLot_3.getString());
  FIX::TradingCurrency TradingCurrency_3("USD");
  msg.set(TradingCurrency_3);
  BaseTradingRules_3.insert(TradingCurrency_3.getString());
  all_values.push_back(BaseTradingRules_3);

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_4;
    FIX::LotType LotType_7('4');
    noLotTypeRules_0_0.set(LotType_7);
    LotTypeRules_NoLotTypeRules_4.insert(LotType_7.getString());
    FIX::MinLotSize MinLotSize_4;
    MinLotSize_4.setString("11179505");
    noLotTypeRules_0_0.set(MinLotSize_4);
    LotTypeRules_NoLotTypeRules_4.insert(MinLotSize_4.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_4);

    msg.addGroup(noLotTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_1;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_5;
    FIX::LotType LotType_8('3');
    noLotTypeRules_0_1.set(LotType_8);
    LotTypeRules_NoLotTypeRules_5.insert(LotType_8.getString());
    FIX::MinLotSize MinLotSize_5;
    MinLotSize_5.setString("205334");
    noLotTypeRules_0_1.set(MinLotSize_5);
    LotTypeRules_NoLotTypeRules_5.insert(MinLotSize_5.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_5);

    msg.addGroup(noLotTypeRules_0_1);
  }
  // PriceLimits
  multiset<string> PriceLimits_3;
  FIX::HighLimitPrice HighLimitPrice_3;
  HighLimitPrice_3.setString("659973");
  msg.set(HighLimitPrice_3);
  PriceLimits_3.insert(HighLimitPrice_3.getString());
  FIX::LowLimitPrice LowLimitPrice_3;
  LowLimitPrice_3.setString("20731098");
  msg.set(LowLimitPrice_3);
  PriceLimits_3.insert(LowLimitPrice_3.getString());
  FIX::PriceLimitType PriceLimitType_3(1);
  msg.set(PriceLimitType_3);
  PriceLimits_3.insert(PriceLimitType_3.getString());
  FIX::TradingReferencePrice TradingReferencePrice_3;
  TradingReferencePrice_3.setString("5078576");
  msg.set(TradingReferencePrice_3);
  PriceLimits_3.insert(TradingReferencePrice_3.getString());
  all_values.push_back(PriceLimits_3);

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_6;
    FIX::EndTickPriceRange EndTickPriceRange_6;
    EndTickPriceRange_6.setString("20540063");
    noTickRules_0_0.set(EndTickPriceRange_6);
    TickRules_NoTickRules_6.insert(EndTickPriceRange_6.getString());
    FIX::StartTickPriceRange StartTickPriceRange_6;
    StartTickPriceRange_6.setString("20954906");
    noTickRules_0_0.set(StartTickPriceRange_6);
    TickRules_NoTickRules_6.insert(StartTickPriceRange_6.getString());
    FIX::TickIncrement TickIncrement_6;
    TickIncrement_6.setString("3001207");
    noTickRules_0_0.set(TickIncrement_6);
    TickRules_NoTickRules_6.insert(TickIncrement_6.getString());
    FIX::TickRuleType TickRuleType_6(2);
    noTickRules_0_0.set(TickRuleType_6);
    TickRules_NoTickRules_6.insert(TickRuleType_6.getString());
    all_values.push_back(TickRules_NoTickRules_6);

    msg.addGroup(noTickRules_0_0);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_7;
    FIX::ExecInstValue ExecInstValue_7('1');
    noExecInstRules_0_0.set(ExecInstValue_7);
    ExecInstRules_NoExecInstRules_7.insert(ExecInstValue_7.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_7);

    msg.addGroup(noExecInstRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_1;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_8;
    FIX::ExecInstValue ExecInstValue_8('2');
    noExecInstRules_0_1.set(ExecInstValue_8);
    ExecInstRules_NoExecInstRules_8.insert(ExecInstValue_8.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_8);

    msg.addGroup(noExecInstRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_2;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_9;
    FIX::ExecInstValue ExecInstValue_9('1');
    noExecInstRules_0_2.set(ExecInstValue_9);
    ExecInstRules_NoExecInstRules_9.insert(ExecInstValue_9.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_9);

    msg.addGroup(noExecInstRules_0_2);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_11;
    FIX::OrdType OrdType_15('D');
    noOrdTypeRules_0_0.set(OrdType_15);
    OrdTypeRules_NoOrdTypeRules_11.insert(OrdType_15.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_11);

    msg.addGroup(noOrdTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_1;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_12;
    FIX::OrdType OrdType_16('F');
    noOrdTypeRules_0_1.set(OrdType_16);
    OrdTypeRules_NoOrdTypeRules_12.insert(OrdType_16.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_12);

    msg.addGroup(noOrdTypeRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_2;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_13;
    FIX::OrdType OrdType_17('F');
    noOrdTypeRules_0_2.set(OrdType_17);
    OrdTypeRules_NoOrdTypeRules_13.insert(OrdType_17.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_13);

    msg.addGroup(noOrdTypeRules_0_2);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_9;
    FIX::TimeInForce TimeInForce_13('8');
    noTimeInForceRules_0_0.set(TimeInForce_13);
    TimeInForceRules_NoTimeInForceRules_9.insert(TimeInForce_13.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_9);

    msg.addGroup(noTimeInForceRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_1;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_10;
    FIX::TimeInForce TimeInForce_14('8');
    noTimeInForceRules_0_1.set(TimeInForce_14);
    TimeInForceRules_NoTimeInForceRules_10.insert(TimeInForce_14.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_10);

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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
