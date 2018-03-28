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
  FIX::Currency Currency_31("EUR");
  msg.set(Currency_31);
  MarketDefinition_0.insert(Currency_31.getString());
  FIX::EncodedMktSegmDesc EncodedMktSegmDesc_0("DATA_988170623");
  msg.set(EncodedMktSegmDesc_0);
  MarketDefinition_0.insert(EncodedMktSegmDesc_0.getString());
  FIX::EncodedMktSegmDescLen EncodedMktSegmDescLen_0(390782099);
  msg.set(EncodedMktSegmDescLen_0);
  MarketDefinition_0.insert(EncodedMktSegmDescLen_0.getString());
  FIX::EncodedText EncodedText_57("DATA_1446738913");
  msg.set(EncodedText_57);
  MarketDefinition_0.insert(EncodedText_57.getString());
  FIX::EncodedTextLen EncodedTextLen_57(483198343);
  msg.set(EncodedTextLen_57);
  MarketDefinition_0.insert(EncodedTextLen_57.getString());
  FIX::MarketID MarketID_6("EXCHANGE_998946493");
  msg.set(MarketID_6);
  MarketDefinition_0.insert(MarketID_6.getString());
  FIX::MarketReportID MarketReportID_0("STRING_2063592641");
  msg.set(MarketReportID_0);
  MarketDefinition_0.insert(MarketReportID_0.getString());
  FIX::MarketReqID MarketReqID_0("STRING_445172436");
  msg.set(MarketReqID_0);
  MarketDefinition_0.insert(MarketReqID_0.getString());
  FIX::MarketSegmentDesc MarketSegmentDesc_0("STRING_916305907");
  msg.set(MarketSegmentDesc_0);
  MarketDefinition_0.insert(MarketSegmentDesc_0.getString());
  FIX::MarketSegmentID MarketSegmentID_6("STRING_1148456412");
  msg.set(MarketSegmentID_6);
  MarketDefinition_0.insert(MarketSegmentID_6.getString());
  FIX::ParentMktSegmID ParentMktSegmID_0("STRING_1988406240");
  msg.set(ParentMktSegmID_0);
  MarketDefinition_0.insert(ParentMktSegmID_0.getString());
  FIX::Text Text_57("STRING_1686071682");
  msg.set(Text_57);
  MarketDefinition_0.insert(Text_57.getString());
  FIX::TransactTime TransactTime_25(FIX::UTCTIMESTAMP(20, 34, 41, 26, 7, 2005));
  msg.set(TransactTime_25);
  MarketDefinition_0.insert(TransactTime_25.getString());
  all_values.push_back(MarketDefinition_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_8;
  FIX::ApplID ApplID_8("STRING_442673943");
  msg.set(ApplID_8);
  ApplicationSequenceControl_8.insert(ApplID_8.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_8(14726913);
  msg.set(ApplLastSeqNum_8);
  ApplicationSequenceControl_8.insert(ApplLastSeqNum_8.getString());
  FIX::ApplResendFlag ApplResendFlag_8(true);
  msg.set(ApplResendFlag_8);
  ApplicationSequenceControl_8.insert(ApplResendFlag_8.getString());
  FIX::ApplSeqNum ApplSeqNum_8(1148128816);
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
  MaxPriceVariation_5.setString("4924381");
  msg.set(MaxPriceVariation_5);
  BaseTradingRules_5.insert(MaxPriceVariation_5.getString());
  FIX::MaxTradeVol MaxTradeVol_5;
  MaxTradeVol_5.setString("19466305");
  msg.set(MaxTradeVol_5);
  BaseTradingRules_5.insert(MaxTradeVol_5.getString());
  FIX::MinTradeVol MinTradeVol_5;
  MinTradeVol_5.setString("13804198");
  msg.set(MinTradeVol_5);
  BaseTradingRules_5.insert(MinTradeVol_5.getString());
  FIX::MultilegModel MultilegModel_5(2);
  msg.set(MultilegModel_5);
  BaseTradingRules_5.insert(MultilegModel_5.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_5(5);
  msg.set(MultilegPriceMethod_5);
  BaseTradingRules_5.insert(MultilegPriceMethod_5.getString());
  FIX::PriceType PriceType_26(4);
  msg.set(PriceType_26);
  BaseTradingRules_5.insert(PriceType_26.getString());
  FIX::RoundLot RoundLot_5;
  RoundLot_5.setString("6390778");
  msg.set(RoundLot_5);
  BaseTradingRules_5.insert(RoundLot_5.getString());
  FIX::TradingCurrency TradingCurrency_5("GBP");
  msg.set(TradingCurrency_5);
  BaseTradingRules_5.insert(TradingCurrency_5.getString());
  all_values.push_back(BaseTradingRules_5);

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_12;
    FIX::LotType LotType_18('1');
    noLotTypeRules_0_0.set(LotType_18);
    LotTypeRules_NoLotTypeRules_12.insert(LotType_18.getString());
    FIX::MinLotSize MinLotSize_12;
    MinLotSize_12.setString("15773338");
    noLotTypeRules_0_0.set(MinLotSize_12);
    LotTypeRules_NoLotTypeRules_12.insert(MinLotSize_12.getString());
    all_values.push_back(LotTypeRules_NoLotTypeRules_12);

    msg.addGroup(noLotTypeRules_0_0);
  }
  // PriceLimits
  multiset<string> PriceLimits_5;
  FIX::HighLimitPrice HighLimitPrice_5;
  HighLimitPrice_5.setString("20019257");
  msg.set(HighLimitPrice_5);
  PriceLimits_5.insert(HighLimitPrice_5.getString());
  FIX::LowLimitPrice LowLimitPrice_5;
  LowLimitPrice_5.setString("8421332");
  msg.set(LowLimitPrice_5);
  PriceLimits_5.insert(LowLimitPrice_5.getString());
  FIX::PriceLimitType PriceLimitType_5(0);
  msg.set(PriceLimitType_5);
  PriceLimits_5.insert(PriceLimitType_5.getString());
  FIX::TradingReferencePrice TradingReferencePrice_5;
  TradingReferencePrice_5.setString("10028985");
  msg.set(TradingReferencePrice_5);
  PriceLimits_5.insert(TradingReferencePrice_5.getString());
  all_values.push_back(PriceLimits_5);

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_10;
    FIX::EndTickPriceRange EndTickPriceRange_10;
    EndTickPriceRange_10.setString("20322277");
    noTickRules_0_0.set(EndTickPriceRange_10);
    TickRules_NoTickRules_10.insert(EndTickPriceRange_10.getString());
    FIX::StartTickPriceRange StartTickPriceRange_10;
    StartTickPriceRange_10.setString("9203264");
    noTickRules_0_0.set(StartTickPriceRange_10);
    TickRules_NoTickRules_10.insert(StartTickPriceRange_10.getString());
    FIX::TickIncrement TickIncrement_10;
    TickIncrement_10.setString("7005117");
    noTickRules_0_0.set(TickIncrement_10);
    TickRules_NoTickRules_10.insert(TickIncrement_10.getString());
    FIX::TickRuleType TickRuleType_10(1);
    noTickRules_0_0.set(TickRuleType_10);
    TickRules_NoTickRules_10.insert(TickRuleType_10.getString());
    all_values.push_back(TickRules_NoTickRules_10);

    msg.addGroup(noTickRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_1;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_11;
    FIX::EndTickPriceRange EndTickPriceRange_11;
    EndTickPriceRange_11.setString("11599307");
    noTickRules_0_1.set(EndTickPriceRange_11);
    TickRules_NoTickRules_11.insert(EndTickPriceRange_11.getString());
    FIX::StartTickPriceRange StartTickPriceRange_11;
    StartTickPriceRange_11.setString("3690759");
    noTickRules_0_1.set(StartTickPriceRange_11);
    TickRules_NoTickRules_11.insert(StartTickPriceRange_11.getString());
    FIX::TickIncrement TickIncrement_11;
    TickIncrement_11.setString("5728398");
    noTickRules_0_1.set(TickIncrement_11);
    TickRules_NoTickRules_11.insert(TickIncrement_11.getString());
    FIX::TickRuleType TickRuleType_11(3);
    noTickRules_0_1.set(TickRuleType_11);
    TickRules_NoTickRules_11.insert(TickRuleType_11.getString());
    all_values.push_back(TickRules_NoTickRules_11);

    msg.addGroup(noTickRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_2;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_12;
    FIX::EndTickPriceRange EndTickPriceRange_12;
    EndTickPriceRange_12.setString("8117498");
    noTickRules_0_2.set(EndTickPriceRange_12);
    TickRules_NoTickRules_12.insert(EndTickPriceRange_12.getString());
    FIX::StartTickPriceRange StartTickPriceRange_12;
    StartTickPriceRange_12.setString("5875667");
    noTickRules_0_2.set(StartTickPriceRange_12);
    TickRules_NoTickRules_12.insert(StartTickPriceRange_12.getString());
    FIX::TickIncrement TickIncrement_12;
    TickIncrement_12.setString("18922581");
    noTickRules_0_2.set(TickIncrement_12);
    TickRules_NoTickRules_12.insert(TickIncrement_12.getString());
    FIX::TickRuleType TickRuleType_12(1);
    noTickRules_0_2.set(TickRuleType_12);
    TickRules_NoTickRules_12.insert(TickRuleType_12.getString());
    all_values.push_back(TickRules_NoTickRules_12);

    msg.addGroup(noTickRules_0_2);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_17;
    FIX::ExecInstValue ExecInstValue_17('1');
    noExecInstRules_0_0.set(ExecInstValue_17);
    ExecInstRules_NoExecInstRules_17.insert(ExecInstValue_17.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_17);

    msg.addGroup(noExecInstRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_1;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_18;
    FIX::ExecInstValue ExecInstValue_18('3');
    noExecInstRules_0_1.set(ExecInstValue_18);
    ExecInstRules_NoExecInstRules_18.insert(ExecInstValue_18.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_18);

    msg.addGroup(noExecInstRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_2;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_19;
    FIX::ExecInstValue ExecInstValue_19('1');
    noExecInstRules_0_2.set(ExecInstValue_19);
    ExecInstRules_NoExecInstRules_19.insert(ExecInstValue_19.getString());
    all_values.push_back(ExecInstRules_NoExecInstRules_19);

    msg.addGroup(noExecInstRules_0_2);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_21;
    FIX::OrdType OrdType_28('K');
    noOrdTypeRules_0_0.set(OrdType_28);
    OrdTypeRules_NoOrdTypeRules_21.insert(OrdType_28.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_21);

    msg.addGroup(noOrdTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_1;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_22;
    FIX::OrdType OrdType_29('E');
    noOrdTypeRules_0_1.set(OrdType_29);
    OrdTypeRules_NoOrdTypeRules_22.insert(OrdType_29.getString());
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_22);

    msg.addGroup(noOrdTypeRules_0_1);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_17;
    FIX::TimeInForce TimeInForce_24('9');
    noTimeInForceRules_0_0.set(TimeInForce_24);
    TimeInForceRules_NoTimeInForceRules_17.insert(TimeInForce_24.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_17);

    msg.addGroup(noTimeInForceRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_1;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_18;
    FIX::TimeInForce TimeInForce_25('3');
    noTimeInForceRules_0_1.set(TimeInForce_25);
    TimeInForceRules_NoTimeInForceRules_18.insert(TimeInForce_25.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_18);

    msg.addGroup(noTimeInForceRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_2;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_19;
    FIX::TimeInForce TimeInForce_26('1');
    noTimeInForceRules_0_2.set(TimeInForce_26);
    TimeInForceRules_NoTimeInForceRules_19.insert(TimeInForce_26.getString());
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_19);

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
