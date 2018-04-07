#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DerivativeSecurityListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityListUpdateReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DerivativeSecurityListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListUpdateReport_0;
  set_field(msg, FIX::LastFragment{true}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1582032624"}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityRequestResult{1}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_2005799683"}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityUpdateAction{'M'}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::TotNoRelatedSym{969648210}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(22, 23, 42, 25, 10, 2001)}, DerivativeSecurityListUpdateReport_0);
  all_values.push_back(DerivativeSecurityListUpdateReport_0);

  all_compo_names.insert("DerivativeSecurityListUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_3;
  set_field(msg, FIX::ApplID{"STRING_1430008536"}, ApplicationSequenceControl_3);
  set_field(msg, FIX::ApplLastSeqNum{1597668665}, ApplicationSequenceControl_3);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_3);
  set_field(msg, FIX::ApplSeqNum{880258164}, ApplicationSequenceControl_3);
  all_values.push_back(ApplicationSequenceControl_3);
  all_compo_names.insert(".");

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_2;
  set_field(msg, FIX::DerivFlexProductEligibilityIndicator{false}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeCFICode{"STRING_1235353952"}, DerivativeInstrument_2);
  FIX::DerivativeCapPrice DerivativeCapPrice_2;
  DerivativeCapPrice_2.setString("12205864");
set_field(msg, DerivativeCapPrice_2, DerivativeInstrument_2);
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_2;
  DerivativeContractMultiplier_2.setString("16432133");
set_field(msg, DerivativeContractMultiplier_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeContractMultiplierUnit{68317692}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeContractSettlMonth{"MONTHYEAR_1241288481"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeCountryOfIssue{"COUNTRY_2062242703"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeEncodedIssuer{"DATA_672826463"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeEncodedIssuerLen{568952031}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeEncodedSecurityDesc{"DATA_2038903170"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeEncodedSecurityDescLen{1367938868}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeExerciseStyle{'1'}, DerivativeInstrument_2);
  FIX::DerivativeFloorPrice DerivativeFloorPrice_2;
  DerivativeFloorPrice_2.setString("19713279");
set_field(msg, DerivativeFloorPrice_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeFlowScheduleType{1995405654}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeInstrRegistry{"STRING_863485853"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeInstrmtAssignmentMethod{'1'}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeIssueDate{"LOCALMKTDATE_214378020"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeIssuer{"STRING_721801888"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeListMethod{312999174}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeLocaleOfIssue{"STRING_1184026230"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeMaturityDate{"LOCALMKTDATE_1228200930"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeMaturityMonthYear{"MONTHYEAR_562417156"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeMaturityTime{"TZTIMEONLY_369149325"}, DerivativeInstrument_2);
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_2;
  DerivativeMinPriceIncrement_2.setString("18912481");
set_field(msg, DerivativeMinPriceIncrement_2, DerivativeInstrument_2);
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_2;
  DerivativeMinPriceIncrementAmount_2.setString("10217545");
set_field(msg, DerivativeMinPriceIncrementAmount_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeNTPositionLimit{541335127}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeOptAttribute{'1'}, DerivativeInstrument_2);
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_2;
  DerivativeOptPayAmount_2.setString("3042794");
set_field(msg, DerivativeOptPayAmount_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativePositionLimit{2139003792}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativePriceQuoteMethod{"STRING_699953771"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativePriceUnitOfMeasure{"STRING_1184537574"}, DerivativeInstrument_2);
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_2;
  DerivativePriceUnitOfMeasureQty_2.setString("17498287");
set_field(msg, DerivativePriceUnitOfMeasureQty_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeProduct{1935307723}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeProductComplex{"STRING_257640330"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativePutOrCall{1245558415}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityDesc{"STRING_2003625415"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityExchange{"EXCHANGE_1498928811"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityGroup{"STRING_1160317470"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityID{"STRING_528968231"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityIDSource{"STRING_2067880843"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityStatus{"STRING_1051736992"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecuritySubType{"STRING_1896907099"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityType{"STRING_1770024334"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSettlMethod{'8'}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSettleOnOpenFlag{"STRING_1744829106"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeStateOrProvinceOfIssue{"STRING_486026539"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeStrikeCurrency{"USD"}, DerivativeInstrument_2);
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_2;
  DerivativeStrikeMultiplier_2.setString("12078284");
set_field(msg, DerivativeStrikeMultiplier_2, DerivativeInstrument_2);
  FIX::DerivativeStrikePrice DerivativeStrikePrice_2;
  DerivativeStrikePrice_2.setString("4469736");
set_field(msg, DerivativeStrikePrice_2, DerivativeInstrument_2);
  FIX::DerivativeStrikeValue DerivativeStrikeValue_2;
  DerivativeStrikeValue_2.setString("9957497");
set_field(msg, DerivativeStrikeValue_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSymbol{"STRING_288545710"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSymbolSfx{"STRING_1009390805"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeTimeUnit{"STRING_1364899033"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeUnitOfMeasure{"STRING_32310254"}, DerivativeInstrument_2);
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_2;
  DerivativeUnitOfMeasureQty_2.setString("20311453");
set_field(msg, DerivativeUnitOfMeasureQty_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeValuationMethod{"STRING_1906234160"}, DerivativeInstrument_2);
  all_values.push_back(DerivativeInstrument_2);
  all_compo_names.insert("..");

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_5;
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventDate{"LOCALMKTDATE_187941089"}, DerivativeEventsGrp_NoDerivativeEvents_5);
    FIX::DerivativeEventPx DerivativeEventPx_5;
    DerivativeEventPx_5.setString("18977543");
set_field(noDerivativeEvents_0_0, DerivativeEventPx_5, DerivativeEventsGrp_NoDerivativeEvents_5);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventText{"STRING_173350415"}, DerivativeEventsGrp_NoDerivativeEvents_5);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(13, 18, 54, 5, 6, 2001)}, DerivativeEventsGrp_NoDerivativeEvents_5);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventType{1758491611}, DerivativeEventsGrp_NoDerivativeEvents_5);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_5);
    all_compo_names.insert(".....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_6;
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventDate{"LOCALMKTDATE_346284488"}, DerivativeEventsGrp_NoDerivativeEvents_6);
    FIX::DerivativeEventPx DerivativeEventPx_6;
    DerivativeEventPx_6.setString("9019613");
set_field(noDerivativeEvents_0_1, DerivativeEventPx_6, DerivativeEventsGrp_NoDerivativeEvents_6);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventText{"STRING_662744956"}, DerivativeEventsGrp_NoDerivativeEvents_6);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(14, 1, 26, 9, 9, 2006)}, DerivativeEventsGrp_NoDerivativeEvents_6);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventType{70873357}, DerivativeEventsGrp_NoDerivativeEvents_6);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_6);
    all_compo_names.insert(".....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_7;
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventDate{"LOCALMKTDATE_2119274325"}, DerivativeEventsGrp_NoDerivativeEvents_7);
    FIX::DerivativeEventPx DerivativeEventPx_7;
    DerivativeEventPx_7.setString("5005265");
set_field(noDerivativeEvents_0_2, DerivativeEventPx_7, DerivativeEventsGrp_NoDerivativeEvents_7);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventText{"STRING_359419067"}, DerivativeEventsGrp_NoDerivativeEvents_7);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(9, 1, 42, 10, 10, 2000)}, DerivativeEventsGrp_NoDerivativeEvents_7);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventType{1374446786}, DerivativeEventsGrp_NoDerivativeEvents_7);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_7);
    all_compo_names.insert(".....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_2);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_6;
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyID{"STRING_277779267"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_6);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyIDSource{"STRING_727062512"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_6);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyRole{2147134518}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_6);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_6);
    all_compo_names.insert(".....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11;
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_1325236653"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11);
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubIDType{1964450776}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6;
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltID{"STRING_936244616"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6);
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltIDSource{"STRING_163251616"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6);
    all_compo_names.insert(".....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_4;
  set_field(msg, FIX::DerivativeSecurityXML{"DATA_1643940123"}, DerivativeSecurityXML_4);
  set_field(msg, FIX::DerivativeSecurityXMLLen{1598989572}, DerivativeSecurityXML_4);
  set_field(msg, FIX::DerivativeSecurityXMLSchema{"STRING_258959556"}, DerivativeSecurityXML_4);
  all_values.push_back(DerivativeSecurityXML_4);
  all_compo_names.insert("...");

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2;
    set_field(noDerivativeInstrAttrib_0_0, FIX::DerivativeInstrAttribType{989832126}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2);
    set_field(noDerivativeInstrAttrib_0_0, FIX::DerivativeInstrAttribValue{"STRING_2099496602"}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2);
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2);
    all_compo_names.insert("....NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_1;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_3;
    set_field(noDerivativeInstrAttrib_0_1, FIX::DerivativeInstrAttribType{1031487091}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_3);
    set_field(noDerivativeInstrAttrib_0_1, FIX::DerivativeInstrAttribValue{"STRING_514649154"}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_3);
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_3);
    all_compo_names.insert("....NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_1);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_1;
    set_field(noMarketSegments_0_0, FIX::MarketID{"EXCHANGE_1102360448"}, MarketSegmentGrp_NoMarketSegments_1);
    set_field(noMarketSegments_0_0, FIX::MarketSegmentID{"STRING_486439832"}, MarketSegmentGrp_NoMarketSegments_1);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_1);
    all_compo_names.insert("....NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_1;
    set_field(noMarketSegments_0_0, FIX::ExpirationCycle{2}, BaseTradingRules_1);
    set_field(noMarketSegments_0_0, FIX::ImpliedMarketIndicator{3}, BaseTradingRules_1);
    FIX::MaxPriceVariation MaxPriceVariation_1;
    MaxPriceVariation_1.setString("14676213");
set_field(noMarketSegments_0_0, MaxPriceVariation_1, BaseTradingRules_1);
    FIX::MaxTradeVol MaxTradeVol_1;
    MaxTradeVol_1.setString("18227420");
set_field(noMarketSegments_0_0, MaxTradeVol_1, BaseTradingRules_1);
    FIX::MinTradeVol MinTradeVol_1;
    MinTradeVol_1.setString("18535088");
set_field(noMarketSegments_0_0, MinTradeVol_1, BaseTradingRules_1);
    set_field(noMarketSegments_0_0, FIX::MultilegModel{1}, BaseTradingRules_1);
    set_field(noMarketSegments_0_0, FIX::MultilegPriceMethod{0}, BaseTradingRules_1);
    set_field(noMarketSegments_0_0, FIX::PriceType{5}, BaseTradingRules_1);
    FIX::RoundLot RoundLot_1;
    RoundLot_1.setString("12377650");
set_field(noMarketSegments_0_0, RoundLot_1, BaseTradingRules_1);
    set_field(noMarketSegments_0_0, FIX::TradingCurrency{"CAN"}, BaseTradingRules_1);
    all_values.push_back(BaseTradingRules_1);
    all_compo_names.insert("....NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_2;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_2);
      FIX::MinLotSize MinLotSize_2;
      MinLotSize_2.setString("17567620");
set_field(noLotTypeRules_0_1_0, MinLotSize_2, LotTypeRules_NoLotTypeRules_2);
      all_values.push_back(LotTypeRules_NoLotTypeRules_2);
      all_compo_names.insert("....NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_3;
      set_field(noLotTypeRules_0_1_1, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_3);
      FIX::MinLotSize MinLotSize_3;
      MinLotSize_3.setString("4312131");
set_field(noLotTypeRules_0_1_1, MinLotSize_3, LotTypeRules_NoLotTypeRules_3);
      all_values.push_back(LotTypeRules_NoLotTypeRules_3);
      all_compo_names.insert("....NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_4;
      set_field(noLotTypeRules_0_1_2, FIX::LotType{'2'}, LotTypeRules_NoLotTypeRules_4);
      FIX::MinLotSize MinLotSize_4;
      MinLotSize_4.setString("20179377");
set_field(noLotTypeRules_0_1_2, MinLotSize_4, LotTypeRules_NoLotTypeRules_4);
      all_values.push_back(LotTypeRules_NoLotTypeRules_4);
      all_compo_names.insert("....NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_1;
    FIX::HighLimitPrice HighLimitPrice_1;
    HighLimitPrice_1.setString("13674577");
set_field(noMarketSegments_0_0, HighLimitPrice_1, PriceLimits_1);
    FIX::LowLimitPrice LowLimitPrice_1;
    LowLimitPrice_1.setString("17369807");
set_field(noMarketSegments_0_0, LowLimitPrice_1, PriceLimits_1);
    set_field(noMarketSegments_0_0, FIX::PriceLimitType{2}, PriceLimits_1);
    FIX::TradingReferencePrice TradingReferencePrice_1;
    TradingReferencePrice_1.setString("8189637");
set_field(noMarketSegments_0_0, TradingReferencePrice_1, PriceLimits_1);
    all_values.push_back(PriceLimits_1);
    all_compo_names.insert("....NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_2;
      FIX::EndTickPriceRange EndTickPriceRange_2;
      EndTickPriceRange_2.setString("15353527");
set_field(noTickRules_0_1_0, EndTickPriceRange_2, TickRules_NoTickRules_2);
      FIX::StartTickPriceRange StartTickPriceRange_2;
      StartTickPriceRange_2.setString("18087958");
set_field(noTickRules_0_1_0, StartTickPriceRange_2, TickRules_NoTickRules_2);
      FIX::TickIncrement TickIncrement_2;
      TickIncrement_2.setString("19479533");
set_field(noTickRules_0_1_0, TickIncrement_2, TickRules_NoTickRules_2);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{1}, TickRules_NoTickRules_2);
      all_values.push_back(TickRules_NoTickRules_2);
      all_compo_names.insert("....NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_3;
      FIX::EndTickPriceRange EndTickPriceRange_3;
      EndTickPriceRange_3.setString("1759613");
set_field(noTickRules_0_1_1, EndTickPriceRange_3, TickRules_NoTickRules_3);
      FIX::StartTickPriceRange StartTickPriceRange_3;
      StartTickPriceRange_3.setString("14047431");
set_field(noTickRules_0_1_1, StartTickPriceRange_3, TickRules_NoTickRules_3);
      FIX::TickIncrement TickIncrement_3;
      TickIncrement_3.setString("15217166");
set_field(noTickRules_0_1_1, TickIncrement_3, TickRules_NoTickRules_3);
      set_field(noTickRules_0_1_1, FIX::TickRuleType{0}, TickRules_NoTickRules_3);
      all_values.push_back(TickRules_NoTickRules_3);
      all_compo_names.insert("....NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_3;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{836012482}, NestedInstrumentAttribute_NoNestedInstrAttrib_3);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_2130022490"}, NestedInstrumentAttribute_NoNestedInstrAttrib_3);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_3);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_4;
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribType{1037317938}, NestedInstrumentAttribute_NoNestedInstrAttrib_4);
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribValue{"STRING_542037671"}, NestedInstrumentAttribute_NoNestedInstrAttrib_4);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_4);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_3;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_3);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_3);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_3);
      all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_6;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'7'}, ExecInstRules_NoExecInstRules_6);
        all_values.push_back(ExecInstRules_NoExecInstRules_6);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_7;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_7);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_1969126621"}, MarketDataFeedTypes_NoMDFeedTypes_7);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{1479578414}, MarketDataFeedTypes_NoMDFeedTypes_7);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_7);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_8;
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_8);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDFeedType{"STRING_252856142"}, MarketDataFeedTypes_NoMDFeedTypes_8);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MarketDepth{905823948}, MarketDataFeedTypes_NoMDFeedTypes_8);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_8);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_7;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_1620313928"}, MatchRules_NoMatchRules_7);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_A1"}, MatchRules_NoMatchRules_7);
        all_values.push_back(MatchRules_NoMatchRules_7);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_8;
        set_field(noMatchRules_0_0_2_1, FIX::MatchAlgorithm{"STRING_1286669063"}, MatchRules_NoMatchRules_8);
        set_field(noMatchRules_0_0_2_1, FIX::MatchType{"STRING_S4"}, MatchRules_NoMatchRules_8);
        all_values.push_back(MatchRules_NoMatchRules_8);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_9;
        set_field(noMatchRules_0_0_2_2, FIX::MatchAlgorithm{"STRING_343777804"}, MatchRules_NoMatchRules_9);
        set_field(noMatchRules_0_0_2_2, FIX::MatchType{"STRING_A3"}, MatchRules_NoMatchRules_9);
        all_values.push_back(MatchRules_NoMatchRules_9);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_7;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'2'}, OrdTypeRules_NoOrdTypeRules_7);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_7);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_8;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_8);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_8);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_9;
        set_field(noTimeInForceRules_0_0_2_1, FIX::TimeInForce{'5'}, TimeInForceRules_NoTimeInForceRules_9);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_9);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_10;
        set_field(noTimeInForceRules_0_0_2_2, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_10);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_10);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_4;
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_4);
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionSubID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_4);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_4);
      all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_7;
        set_field(noExecInstRules_0_1_2_0, FIX::ExecInstValue{'7'}, ExecInstRules_NoExecInstRules_7);
        all_values.push_back(ExecInstRules_NoExecInstRules_7);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_8;
        set_field(noExecInstRules_0_1_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_8);
        all_values.push_back(ExecInstRules_NoExecInstRules_8);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_9;
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_9);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDFeedType{"STRING_1990153253"}, MarketDataFeedTypes_NoMDFeedTypes_9);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MarketDepth{1959366251}, MarketDataFeedTypes_NoMDFeedTypes_9);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_9);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_10;
        set_field(noMatchRules_0_1_2_0, FIX::MatchAlgorithm{"STRING_558336061"}, MatchRules_NoMatchRules_10);
        set_field(noMatchRules_0_1_2_0, FIX::MatchType{"STRING_7"}, MatchRules_NoMatchRules_10);
        all_values.push_back(MatchRules_NoMatchRules_10);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_8;
        set_field(noOrdTypeRules_0_1_2_0, FIX::OrdType{'J'}, OrdTypeRules_NoOrdTypeRules_8);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_8);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_11;
        set_field(noTimeInForceRules_0_1_2_0, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_11);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_11);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_12;
        set_field(noTimeInForceRules_0_1_2_1, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_12);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_12);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_13;
        set_field(noTimeInForceRules_0_1_2_2, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_13);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_13);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_2;
      FIX::EndStrikePxRange EndStrikePxRange_2;
      EndStrikePxRange_2.setString("1056654");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_2, StrikeRules_NoStrikeRules_2);
      FIX::StartStrikePxRange StartStrikePxRange_2;
      StartStrikePxRange_2.setString("2679387");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_2, StrikeRules_NoStrikeRules_2);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{1933438455}, StrikeRules_NoStrikeRules_2);
      FIX::StrikeIncrement StrikeIncrement_2;
      StrikeIncrement_2.setString("3974594");
set_field(noStrikeRules_0_1_0, StrikeIncrement_2, StrikeRules_NoStrikeRules_2);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_611716581"}, StrikeRules_NoStrikeRules_2);
      all_values.push_back(StrikeRules_NoStrikeRules_2);
      all_compo_names.insert("....NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_3;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_350565628"}, MaturityRules_NoMaturityRules_3);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_3);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{1554387250}, MaturityRules_NoMaturityRules_3);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_3);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_157471004"}, MaturityRules_NoMaturityRules_3);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_2022514521"}, MaturityRules_NoMaturityRules_3);
        all_values.push_back(MaturityRules_NoMaturityRules_3);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_4;
        set_field(noMaturityRules_0_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1271101848"}, MaturityRules_NoMaturityRules_4);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_4);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrement{1179170627}, MaturityRules_NoMaturityRules_4);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_4);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityRuleID{"STRING_574438316"}, MaturityRules_NoMaturityRules_4);
        set_field(noMaturityRules_0_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_877864405"}, MaturityRules_NoMaturityRules_4);
        all_values.push_back(MaturityRules_NoMaturityRules_4);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_3;
      FIX::EndStrikePxRange EndStrikePxRange_3;
      EndStrikePxRange_3.setString("8391529");
set_field(noStrikeRules_0_1_1, EndStrikePxRange_3, StrikeRules_NoStrikeRules_3);
      FIX::StartStrikePxRange StartStrikePxRange_3;
      StartStrikePxRange_3.setString("4171079");
set_field(noStrikeRules_0_1_1, StartStrikePxRange_3, StrikeRules_NoStrikeRules_3);
      set_field(noStrikeRules_0_1_1, FIX::StrikeExerciseStyle{689747008}, StrikeRules_NoStrikeRules_3);
      FIX::StrikeIncrement StrikeIncrement_3;
      StrikeIncrement_3.setString("10384812");
set_field(noStrikeRules_0_1_1, StrikeIncrement_3, StrikeRules_NoStrikeRules_3);
      set_field(noStrikeRules_0_1_1, FIX::StrikeRuleID{"STRING_975443982"}, StrikeRules_NoStrikeRules_3);
      all_values.push_back(StrikeRules_NoStrikeRules_3);
      all_compo_names.insert("....NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_5;
        set_field(noMaturityRules_0_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_2011155036"}, MaturityRules_NoMaturityRules_5);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_5);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrement{1238723352}, MaturityRules_NoMaturityRules_5);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_5);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityRuleID{"STRING_1988258194"}, MaturityRules_NoMaturityRules_5);
        set_field(noMaturityRules_0_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1011341031"}, MaturityRules_NoMaturityRules_5);
        all_values.push_back(MaturityRules_NoMaturityRules_5);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_6;
        set_field(noMaturityRules_0_1_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1384935319"}, MaturityRules_NoMaturityRules_6);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_6);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityMonthYearIncrement{1279279808}, MaturityRules_NoMaturityRules_6);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_6);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityRuleID{"STRING_343899452"}, MaturityRules_NoMaturityRules_6);
        set_field(noMaturityRules_0_1_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1890996389"}, MaturityRules_NoMaturityRules_6);
        all_values.push_back(MaturityRules_NoMaturityRules_6);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  // RelSymDerivSecUpdGrp
  // Group RelSymDerivSecUpdGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::CorporateAction{"MULTIPLECHARVALUE_V"}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Currency{"USD"}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedText{"DATA_1174098230"}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedTextLen{656947792}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::ListUpdateAction{'9'}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(19, 55, 50, 19, 1, 2002)}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Text{"STRING_422047896"}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_28;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_2072976387"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{1397491879}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_1737061914"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{1936647775}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_605431248"}, InstrumentLeg_28);
      FIX::LegContractMultiplier LegContractMultiplier_28;
      LegContractMultiplier_28.setString("8283016");
set_field(noLegs_0_1_0, LegContractMultiplier_28, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{527330054}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_446205794"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1839642649"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1912265374"}, InstrumentLeg_28);
      FIX::LegCouponRate LegCouponRate_28;
      LegCouponRate_28.setString("57.970000");
set_field(noLegs_0_1_0, LegCouponRate_28, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_971438809"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_714951550"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{419571277}, InstrumentLeg_28);
      FIX::LegFactor LegFactor_28;
      LegFactor_28.setString("14310103");
set_field(noLegs_0_1_0, LegFactor_28, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{1214428339}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_1457857952"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_457624912"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1871376131"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_223691852"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_755341342"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1301877791"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_168696379"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_950683512"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_28);
      FIX::LegOptionRatio LegOptionRatio_28;
      LegOptionRatio_28.setString("9915653");
set_field(noLegs_0_1_0, LegOptionRatio_28, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_1985178633"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1728865663"}, InstrumentLeg_28);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_28;
      LegPriceUnitOfMeasureQty_28.setString("3566976");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_28, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegProduct{1910671372}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{978873894}, InstrumentLeg_28);
      FIX::LegRatioQty LegRatioQty_28;
      LegRatioQty_28.setString("20937595");
set_field(noLegs_0_1_0, LegRatioQty_28, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1699835499"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1584305142"}, InstrumentLeg_28);
      FIX::LegRepurchaseRate LegRepurchaseRate_28;
      LegRepurchaseRate_28.setString("74.890000");
set_field(noLegs_0_1_0, LegRepurchaseRate_28, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{79681906}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_2030510936"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_466736490"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_1991947280"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_275673085"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_1438175299"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_780135485"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_5643201"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_28);
      FIX::LegStrikePrice LegStrikePrice_28;
      LegStrikePrice_28.setString("12200715");
set_field(noLegs_0_1_0, LegStrikePrice_28, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_510081066"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_753369928"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_943964024"}, InstrumentLeg_28);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_733772918"}, InstrumentLeg_28);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_28;
      LegUnitOfMeasureQty_28.setString("15087112");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_28, InstrumentLeg_28);
      all_values.push_back(InstrumentLeg_28);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_55;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_902469298"}, LegSecAltIDGrp_NoLegSecurityAltID_55);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_311911135"}, LegSecAltIDGrp_NoLegSecurityAltID_55);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_55);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_56;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_1405175933"}, LegSecAltIDGrp_NoLegSecurityAltID_56);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_1894034610"}, LegSecAltIDGrp_NoLegSecurityAltID_56);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_56);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_57;
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltID{"STRING_149606120"}, LegSecAltIDGrp_NoLegSecurityAltID_57);
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltIDSource{"STRING_986557948"}, LegSecAltIDGrp_NoLegSecurityAltID_57);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_57);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_29;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_103248567"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{2060277492}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_1965431842"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{49524438}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_1612629344"}, InstrumentLeg_29);
      FIX::LegContractMultiplier LegContractMultiplier_29;
      LegContractMultiplier_29.setString("14022533");
set_field(noLegs_0_1_1, LegContractMultiplier_29, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{824101927}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_1692311250"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_1285280624"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1290838417"}, InstrumentLeg_29);
      FIX::LegCouponRate LegCouponRate_29;
      LegCouponRate_29.setString("48.820000");
set_field(noLegs_0_1_1, LegCouponRate_29, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_1560953710"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_425688397"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{587173269}, InstrumentLeg_29);
      FIX::LegFactor LegFactor_29;
      LegFactor_29.setString("13691334");
set_field(noLegs_0_1_1, LegFactor_29, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{721433413}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_1807244810"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1879214548"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_1474803342"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_603725186"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_465503818"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_836030965"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_702083353"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_1367973116"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_29);
      FIX::LegOptionRatio LegOptionRatio_29;
      LegOptionRatio_29.setString("21072592");
set_field(noLegs_0_1_1, LegOptionRatio_29, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_1114524078"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1297548221"}, InstrumentLeg_29);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_29;
      LegPriceUnitOfMeasureQty_29.setString("9463335");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_29, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegProduct{1217772645}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{1210342065}, InstrumentLeg_29);
      FIX::LegRatioQty LegRatioQty_29;
      LegRatioQty_29.setString("7642817");
set_field(noLegs_0_1_1, LegRatioQty_29, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1267297083"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_675487761"}, InstrumentLeg_29);
      FIX::LegRepurchaseRate LegRepurchaseRate_29;
      LegRepurchaseRate_29.setString("14.700000");
set_field(noLegs_0_1_1, LegRepurchaseRate_29, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{2091399010}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_220315363"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_1304332094"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_1234753779"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_1757090245"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_717802156"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_1816283847"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegSide{'1'}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_1143490553"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_29);
      FIX::LegStrikePrice LegStrikePrice_29;
      LegStrikePrice_29.setString("18649239");
set_field(noLegs_0_1_1, LegStrikePrice_29, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_2063218279"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_879897698"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_1192243661"}, InstrumentLeg_29);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_519459817"}, InstrumentLeg_29);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_29;
      LegUnitOfMeasureQty_29.setString("13454015");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_29, InstrumentLeg_29);
      all_values.push_back(InstrumentLeg_29);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_58;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_1221543170"}, LegSecAltIDGrp_NoLegSecurityAltID_58);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_565890985"}, LegSecAltIDGrp_NoLegSecurityAltID_58);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_58);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_30;
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuer{"DATA_1028733078"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuerLen{1181318808}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDesc{"DATA_1680415063"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDescLen{178797651}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegCFICode{"STRING_2127652395"}, InstrumentLeg_30);
      FIX::LegContractMultiplier LegContractMultiplier_30;
      LegContractMultiplier_30.setString("7507040");
set_field(noLegs_0_1_2, LegContractMultiplier_30, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegContractMultiplierUnit{1389139717}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_744450529"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegCountryOfIssue{"COUNTRY_2018001144"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2064627478"}, InstrumentLeg_30);
      FIX::LegCouponRate LegCouponRate_30;
      LegCouponRate_30.setString("19.990000");
set_field(noLegs_0_1_2, LegCouponRate_30, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegCreditRating{"STRING_1961916507"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegCurrency{"CHF"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegDatedDate{"LOCALMKTDATE_1049186638"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegExerciseStyle{1894549439}, InstrumentLeg_30);
      FIX::LegFactor LegFactor_30;
      LegFactor_30.setString("6381526");
set_field(noLegs_0_1_2, LegFactor_30, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegFlowScheduleType{717986838}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegInstrRegistry{"STRING_1673582756"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1781643155"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegIssueDate{"LOCALMKTDATE_973960307"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegIssuer{"STRING_674265906"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegLocaleOfIssue{"STRING_1499083474"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_889694938"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1554163604"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegMaturityTime{"TZTIMEONLY_543843487"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_30);
      FIX::LegOptionRatio LegOptionRatio_30;
      LegOptionRatio_30.setString("7520814");
set_field(noLegs_0_1_2, LegOptionRatio_30, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegPool{"STRING_424634465"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegPriceUnitOfMeasure{"STRING_483214277"}, InstrumentLeg_30);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_30;
      LegPriceUnitOfMeasureQty_30.setString("13179724");
set_field(noLegs_0_1_2, LegPriceUnitOfMeasureQty_30, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegProduct{1453367544}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegPutOrCall{1664533085}, InstrumentLeg_30);
      FIX::LegRatioQty LegRatioQty_30;
      LegRatioQty_30.setString("8509038");
set_field(noLegs_0_1_2, LegRatioQty_30, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1632165195"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegRepoCollateralSecurityType{"STRING_1644701833"}, InstrumentLeg_30);
      FIX::LegRepurchaseRate LegRepurchaseRate_30;
      LegRepurchaseRate_30.setString("79.340000");
set_field(noLegs_0_1_2, LegRepurchaseRate_30, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegRepurchaseTerm{873821264}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegSecurityDesc{"STRING_241668714"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegSecurityExchange{"EXCHANGE_1472125430"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegSecurityID{"STRING_790965095"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegSecurityIDSource{"STRING_1005170713"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegSecuritySubType{"STRING_1286558289"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegSecurityType{"STRING_928424289"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegSide{'9'}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_188261280"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_30);
      FIX::LegStrikePrice LegStrikePrice_30;
      LegStrikePrice_30.setString("9062481");
set_field(noLegs_0_1_2, LegStrikePrice_30, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegSymbol{"STRING_201589188"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegSymbolSfx{"STRING_1197833268"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegTimeUnit{"STRING_1880208425"}, InstrumentLeg_30);
      set_field(noLegs_0_1_2, FIX::LegUnitOfMeasure{"STRING_875855094"}, InstrumentLeg_30);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_30;
      LegUnitOfMeasureQty_30.setString("5494330");
set_field(noLegs_0_1_2, LegUnitOfMeasureQty_30, InstrumentLeg_30);
      all_values.push_back(InstrumentLeg_30);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_59;
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltID{"STRING_282535050"}, LegSecAltIDGrp_NoLegSecurityAltID_59);
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltIDSource{"STRING_1093276582"}, LegSecAltIDGrp_NoLegSecurityAltID_59);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_59);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_60;
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltID{"STRING_2031574470"}, LegSecAltIDGrp_NoLegSecurityAltID_60);
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltIDSource{"STRING_1034616523"}, LegSecAltIDGrp_NoLegSecurityAltID_60);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_60);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_19;
    FIX::AttachmentPoint AttachmentPoint_19;
    AttachmentPoint_19.setString("10.470000");
set_field(noRelatedSym_0_0, AttachmentPoint_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_367305099"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_823794943"}, Instrument_19);
    FIX::CapPrice CapPrice_19;
    CapPrice_19.setString("20318381");
set_field(noRelatedSym_0_0, CapPrice_19, Instrument_19);
    FIX::ContractMultiplier ContractMultiplier_19;
    ContractMultiplier_19.setString("10560092");
set_field(noRelatedSym_0_0, ContractMultiplier_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{0}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1529056369"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_510133491"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1182297755"}, Instrument_19);
    FIX::CouponRate CouponRate_19;
    CouponRate_19.setString("50.830000");
set_field(noRelatedSym_0_0, CouponRate_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_1982258922"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_1973262850"}, Instrument_19);
    FIX::DetachmentPoint DetachmentPoint_19;
    DetachmentPoint_19.setString("21.480000");
set_field(noRelatedSym_0_0, DetachmentPoint_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_1121333563"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{754203491}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1553933307"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1309594843}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{0}, Instrument_19);
    FIX::Factor Factor_19;
    Factor_19.setString("9701234");
set_field(noRelatedSym_0_0, Factor_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_19);
    FIX::FloorPrice FloorPrice_19;
    FloorPrice_19.setString("204730");
set_field(noRelatedSym_0_0, FloorPrice_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{3}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_359654207"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'5'}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_423503805"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_642189257"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1663182716"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_1676805780"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1033610115"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_674899726"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_1881911113"}, Instrument_19);
    FIX::MinPriceIncrement MinPriceIncrement_19;
    MinPriceIncrement_19.setString("18574050");
set_field(noRelatedSym_0_0, MinPriceIncrement_19, Instrument_19);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_19;
    MinPriceIncrementAmount_19.setString("5592542");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{790436670}, Instrument_19);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_19;
    NotionalPercentageOutstanding_19.setString("79.020000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'2'}, Instrument_19);
    FIX::OptPayoutAmount OptPayoutAmount_19;
    OptPayoutAmount_19.setString("13005701");
set_field(noRelatedSym_0_0, OptPayoutAmount_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{3}, Instrument_19);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_19;
    OriginalNotionalPercentageOutstanding_19.setString("20.680000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1135345436"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{1026474860}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_109195351"}, Instrument_19);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_19;
    PriceUnitOfMeasureQty_19.setString("17806783");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::Product{12}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_1418790195"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_569053647"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_1487149508"}, Instrument_19);
    FIX::RepurchaseRate RepurchaseRate_19;
    RepurchaseRate_19.setString("73.880000");
set_field(noRelatedSym_0_0, RepurchaseRate_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{589526686}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_XR"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_906341595"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1159432820"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1711737404"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1548530852"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_3"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_1077852985"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_DEFLTED"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SD"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_1418663415"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1106002373"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CHF"}, Instrument_19);
    FIX::StrikeMultiplier StrikeMultiplier_19;
    StrikeMultiplier_19.setString("10468293");
set_field(noRelatedSym_0_0, StrikeMultiplier_19, Instrument_19);
    FIX::StrikePrice StrikePrice_19;
    StrikePrice_19.setString("7558036");
set_field(noRelatedSym_0_0, StrikePrice_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{2}, Instrument_19);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_19;
    StrikePriceBoundaryPrecision_19.setString("77.780000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_19);
    FIX::StrikeValue StrikeValue_19;
    StrikeValue_19.setString("15167481");
set_field(noRelatedSym_0_0, StrikeValue_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_803378346"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Mo"}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_19);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_19;
    UnitOfMeasureQty_19.setString("653475");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_19, Instrument_19);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_19);
    all_values.push_back(Instrument_19);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_42;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_42);
      FIX::ComplexEventPrice ComplexEventPrice_42;
      ComplexEventPrice_42.setString("15608889");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_42, ComplexEvents_NoComplexEvents_42);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_42);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_42;
      ComplexEventPriceBoundaryPrecision_42.setString("65.000000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_42, ComplexEvents_NoComplexEvents_42);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_42);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_42);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_42;
      ComplexOptPayoutAmount_42.setString("9194237");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_42, ComplexEvents_NoComplexEvents_42);
      all_values.push_back(ComplexEvents_NoComplexEvents_42);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_89;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 44, 39, 24, 4, 2013)}, ComplexEventDates_NoComplexEventDates_89);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 23, 19, 19, 6, 2009)}, ComplexEventDates_NoComplexEventDates_89);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_89);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_180;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 55, 53)}, ComplexEventTimes_NoComplexEventTimes_180);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 6, 26)}, ComplexEventTimes_NoComplexEventTimes_180);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_180);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_181;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 14, 51)}, ComplexEventTimes_NoComplexEventTimes_181);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 16, 54)}, ComplexEventTimes_NoComplexEventTimes_181);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_181);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_90;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 31, 4, 2, 11, 2011)}, ComplexEventDates_NoComplexEventDates_90);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 44, 25, 22, 2, 2011)}, ComplexEventDates_NoComplexEventDates_90);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_90);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_182;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 59, 22)}, ComplexEventTimes_NoComplexEventTimes_182);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 20, 45)}, ComplexEventTimes_NoComplexEventTimes_182);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_182);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_43;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_43);
      FIX::ComplexEventPrice ComplexEventPrice_43;
      ComplexEventPrice_43.setString("20151947");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_43, ComplexEvents_NoComplexEvents_43);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_43);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_43;
      ComplexEventPriceBoundaryPrecision_43.setString("42.130000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_43, ComplexEvents_NoComplexEvents_43);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_43);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_43);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_43;
      ComplexOptPayoutAmount_43.setString("3254160");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_43, ComplexEvents_NoComplexEvents_43);
      all_values.push_back(ComplexEvents_NoComplexEvents_43);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_91;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 18, 51, 25, 9, 2000)}, ComplexEventDates_NoComplexEventDates_91);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 56, 33, 13, 2, 2000)}, ComplexEventDates_NoComplexEventDates_91);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_91);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_183;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 28, 8)}, ComplexEventTimes_NoComplexEventTimes_183);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 28, 43)}, ComplexEventTimes_NoComplexEventTimes_183);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_183);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_184;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 26, 20)}, ComplexEventTimes_NoComplexEventTimes_184);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 21, 26)}, ComplexEventTimes_NoComplexEventTimes_184);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_184);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_185;
          set_field(noComplexEventTimes_0_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 36, 4)}, ComplexEventTimes_NoComplexEventTimes_185);
          set_field(noComplexEventTimes_0_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 17, 14)}, ComplexEventTimes_NoComplexEventTimes_185);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_185);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_92;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 40, 10, 7, 5, 2003)}, ComplexEventDates_NoComplexEventDates_92);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 59, 25, 9, 12, 2003)}, ComplexEventDates_NoComplexEventDates_92);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_92);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_186;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 39, 9)}, ComplexEventTimes_NoComplexEventTimes_186);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 23, 46)}, ComplexEventTimes_NoComplexEventTimes_186);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_186);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_93;
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 23, 30, 26, 1, 2009)}, ComplexEventDates_NoComplexEventDates_93);
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 44, 21, 18, 8, 2007)}, ComplexEventDates_NoComplexEventDates_93);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_93);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_187;
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 40, 41)}, ComplexEventTimes_NoComplexEventTimes_187);
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 27, 19)}, ComplexEventTimes_NoComplexEventTimes_187);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_187);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_188;
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 50, 54)}, ComplexEventTimes_NoComplexEventTimes_188);
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 9, 6)}, ComplexEventTimes_NoComplexEventTimes_188);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_188);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_43;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1389349957"}, EvntGrp_NoEvents_43);
      FIX::EventPx EventPx_43;
      EventPx_43.setString("2622820");
set_field(noEvents_0_1_0, EventPx_43, EvntGrp_NoEvents_43);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1564551770"}, EvntGrp_NoEvents_43);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(21, 29, 53, 5, 6, 2002)}, EvntGrp_NoEvents_43);
      set_field(noEvents_0_1_0, FIX::EventType{5}, EvntGrp_NoEvents_43);
      all_values.push_back(EvntGrp_NoEvents_43);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_44;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_939325213"}, EvntGrp_NoEvents_44);
      FIX::EventPx EventPx_44;
      EventPx_44.setString("9179224");
set_field(noEvents_0_1_1, EventPx_44, EvntGrp_NoEvents_44);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_1259847705"}, EvntGrp_NoEvents_44);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(20, 26, 11, 3, 10, 2002)}, EvntGrp_NoEvents_44);
      set_field(noEvents_0_1_1, FIX::EventType{3}, EvntGrp_NoEvents_44);
      all_values.push_back(EvntGrp_NoEvents_44);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_45;
      set_field(noEvents_0_1_2, FIX::EventDate{"LOCALMKTDATE_193815666"}, EvntGrp_NoEvents_45);
      FIX::EventPx EventPx_45;
      EventPx_45.setString("1669850");
set_field(noEvents_0_1_2, EventPx_45, EvntGrp_NoEvents_45);
      set_field(noEvents_0_1_2, FIX::EventText{"STRING_151461964"}, EvntGrp_NoEvents_45);
      set_field(noEvents_0_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(13, 58, 2, 7, 7, 2002)}, EvntGrp_NoEvents_45);
      set_field(noEvents_0_1_2, FIX::EventType{17}, EvntGrp_NoEvents_45);
      all_values.push_back(EvntGrp_NoEvents_45);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_36;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1831218464"}, InstrumentParties_NoInstrumentParties_36);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_36);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{121925541}, InstrumentParties_NoInstrumentParties_36);
      all_values.push_back(InstrumentParties_NoInstrumentParties_36);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_2071253386"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{497560047}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_2111705623"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{1951911822}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72;
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubID{"STRING_1436885260"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72);
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubIDType{882144474}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_37;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1566952389"}, SecAltIDGrp_NoSecurityAltID_37);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1554511551"}, SecAltIDGrp_NoSecurityAltID_37);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_37);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_38;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_579542738"}, SecAltIDGrp_NoSecurityAltID_38);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_354100692"}, SecAltIDGrp_NoSecurityAltID_38);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_38);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_39;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_1901009454"}, SecAltIDGrp_NoSecurityAltID_39);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_1121070299"}, SecAltIDGrp_NoSecurityAltID_39);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_39);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_38;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_325018542"}, SecurityXML_38);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{1092741548}, SecurityXML_38);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1314885966"}, SecurityXML_38);
    all_values.push_back(SecurityXML_38);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_5;
    set_field(noRelatedSym_0_0, FIX::DeliveryForm{1}, InstrumentExtension_5);
    FIX::PctAtRisk PctAtRisk_5;
    PctAtRisk_5.setString("35.120000");
set_field(noRelatedSym_0_0, PctAtRisk_5, InstrumentExtension_5);
    all_values.push_back(InstrumentExtension_5);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_6;
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribType{2}, AttrbGrp_NoInstrAttrib_6);
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribValue{"STRING_1788832210"}, AttrbGrp_NoInstrAttrib_6);
      all_values.push_back(AttrbGrp_NoInstrAttrib_6);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_7;
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribType{2}, AttrbGrp_NoInstrAttrib_7);
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribValue{"STRING_94319328"}, AttrbGrp_NoInstrAttrib_7);
      all_values.push_back(AttrbGrp_NoInstrAttrib_7);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_8;
      set_field(noInstrAttrib_0_1_2, FIX::InstrAttribType{22}, AttrbGrp_NoInstrAttrib_8);
      set_field(noInstrAttrib_0_1_2, FIX::InstrAttribValue{"STRING_1915649973"}, AttrbGrp_NoInstrAttrib_8);
      all_values.push_back(AttrbGrp_NoInstrAttrib_8);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_1;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_1;
    SecondaryHighLimitPrice_1.setString("17157916");
set_field(noRelatedSym_0_0, SecondaryHighLimitPrice_1, SecondaryPriceLimits_1);
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_1;
    SecondaryLowLimitPrice_1.setString("15880522");
set_field(noRelatedSym_0_0, SecondaryLowLimitPrice_1, SecondaryPriceLimits_1);
    set_field(noRelatedSym_0_0, FIX::SecondaryPriceLimitType{1599384789}, SecondaryPriceLimits_1);
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_1;
    SecondaryTradingReferencePrice_1.setString("17779123");
set_field(noRelatedSym_0_0, SecondaryTradingReferencePrice_1, SecondaryPriceLimits_1);
    all_values.push_back(SecondaryPriceLimits_1);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_1;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_1;
    set_field(noRelatedSym_0_1, FIX::CorporateAction{"MULTIPLECHARVALUE_D"}, RelSymDerivSecUpdGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::Currency{"CAN"}, RelSymDerivSecUpdGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::EncodedText{"DATA_60054182"}, RelSymDerivSecUpdGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::EncodedTextLen{256261505}, RelSymDerivSecUpdGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::ListUpdateAction{'1'}, RelSymDerivSecUpdGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(12, 22, 43, 15, 1, 2008)}, RelSymDerivSecUpdGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::Text{"STRING_298959689"}, RelSymDerivSecUpdGrp_NoRelatedSym_1);
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_1);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_31;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_1595527418"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{1391701237}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_1290917817"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{2087530970}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_488421101"}, InstrumentLeg_31);
      FIX::LegContractMultiplier LegContractMultiplier_31;
      LegContractMultiplier_31.setString("2063386");
set_field(noLegs_1_1_0, LegContractMultiplier_31, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{822659983}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_129769663"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_2074682750"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_916979311"}, InstrumentLeg_31);
      FIX::LegCouponRate LegCouponRate_31;
      LegCouponRate_31.setString("60.040000");
set_field(noLegs_1_1_0, LegCouponRate_31, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_1842849075"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"USD"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1294750217"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{115716016}, InstrumentLeg_31);
      FIX::LegFactor LegFactor_31;
      LegFactor_31.setString("389987");
set_field(noLegs_1_1_0, LegFactor_31, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{1586789747}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_1817398072"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_99052915"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1843051253"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_1176024654"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_1595992357"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_833973585"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1598927116"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_364916892"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_31);
      FIX::LegOptionRatio LegOptionRatio_31;
      LegOptionRatio_31.setString("4538886");
set_field(noLegs_1_1_0, LegOptionRatio_31, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_1635425768"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1678367157"}, InstrumentLeg_31);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_31;
      LegPriceUnitOfMeasureQty_31.setString("4299205");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_31, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegProduct{1083469539}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{922584746}, InstrumentLeg_31);
      FIX::LegRatioQty LegRatioQty_31;
      LegRatioQty_31.setString("17208383");
set_field(noLegs_1_1_0, LegRatioQty_31, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1023516861"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1411005847"}, InstrumentLeg_31);
      FIX::LegRepurchaseRate LegRepurchaseRate_31;
      LegRepurchaseRate_31.setString("70.050000");
set_field(noLegs_1_1_0, LegRepurchaseRate_31, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{1846176845}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_1540775510"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_1854376107"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_615672508"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_429227867"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_1549741535"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_1100959856"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegSide{'9'}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_697008104"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_31);
      FIX::LegStrikePrice LegStrikePrice_31;
      LegStrikePrice_31.setString("1363142");
set_field(noLegs_1_1_0, LegStrikePrice_31, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_886590296"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_1043784113"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_1979365456"}, InstrumentLeg_31);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_2062614950"}, InstrumentLeg_31);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_31;
      LegUnitOfMeasureQty_31.setString("4922928");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_31, InstrumentLeg_31);
      all_values.push_back(InstrumentLeg_31);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_61;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_1514058418"}, LegSecAltIDGrp_NoLegSecurityAltID_61);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_857209714"}, LegSecAltIDGrp_NoLegSecurityAltID_61);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_61);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_62;
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltID{"STRING_2045262861"}, LegSecAltIDGrp_NoLegSecurityAltID_62);
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltIDSource{"STRING_1967947086"}, LegSecAltIDGrp_NoLegSecurityAltID_62);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_62);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_63;
        set_field(noLegSecurityAltID_1_0_2_2, FIX::LegSecurityAltID{"STRING_345151835"}, LegSecAltIDGrp_NoLegSecurityAltID_63);
        set_field(noLegSecurityAltID_1_0_2_2, FIX::LegSecurityAltIDSource{"STRING_1576146370"}, LegSecAltIDGrp_NoLegSecurityAltID_63);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_63);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_32;
      set_field(noLegs_1_1_1, FIX::EncodedLegIssuer{"DATA_250383958"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::EncodedLegIssuerLen{1428621374}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::EncodedLegSecurityDesc{"DATA_351247468"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::EncodedLegSecurityDescLen{1971222295}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegCFICode{"STRING_304654587"}, InstrumentLeg_32);
      FIX::LegContractMultiplier LegContractMultiplier_32;
      LegContractMultiplier_32.setString("17622533");
set_field(noLegs_1_1_1, LegContractMultiplier_32, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegContractMultiplierUnit{1750915652}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_3347784"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegCountryOfIssue{"COUNTRY_1155545178"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1457808112"}, InstrumentLeg_32);
      FIX::LegCouponRate LegCouponRate_32;
      LegCouponRate_32.setString("2.930000");
set_field(noLegs_1_1_1, LegCouponRate_32, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegCreditRating{"STRING_1584773045"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegDatedDate{"LOCALMKTDATE_343021862"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegExerciseStyle{1557074103}, InstrumentLeg_32);
      FIX::LegFactor LegFactor_32;
      LegFactor_32.setString("7891723");
set_field(noLegs_1_1_1, LegFactor_32, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegFlowScheduleType{1287753060}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegInstrRegistry{"STRING_1693388306"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1675762670"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegIssueDate{"LOCALMKTDATE_184053525"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegIssuer{"STRING_1525270115"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegLocaleOfIssue{"STRING_1590893972"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_676346347"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_43641860"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegMaturityTime{"TZTIMEONLY_957468743"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_32);
      FIX::LegOptionRatio LegOptionRatio_32;
      LegOptionRatio_32.setString("20889047");
set_field(noLegs_1_1_1, LegOptionRatio_32, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegPool{"STRING_777932181"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1878707896"}, InstrumentLeg_32);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_32;
      LegPriceUnitOfMeasureQty_32.setString("15175674");
set_field(noLegs_1_1_1, LegPriceUnitOfMeasureQty_32, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegProduct{1028316139}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegPutOrCall{1159845622}, InstrumentLeg_32);
      FIX::LegRatioQty LegRatioQty_32;
      LegRatioQty_32.setString("18688149");
set_field(noLegs_1_1_1, LegRatioQty_32, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_852054786"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegRepoCollateralSecurityType{"STRING_1464500210"}, InstrumentLeg_32);
      FIX::LegRepurchaseRate LegRepurchaseRate_32;
      LegRepurchaseRate_32.setString("45.800000");
set_field(noLegs_1_1_1, LegRepurchaseRate_32, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegRepurchaseTerm{455486791}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegSecurityDesc{"STRING_1467847994"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegSecurityExchange{"EXCHANGE_491646110"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegSecurityID{"STRING_1913294903"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegSecurityIDSource{"STRING_2086868287"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegSecuritySubType{"STRING_2076419155"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegSecurityType{"STRING_625877254"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegSide{'1'}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_271957369"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_32);
      FIX::LegStrikePrice LegStrikePrice_32;
      LegStrikePrice_32.setString("15597104");
set_field(noLegs_1_1_1, LegStrikePrice_32, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegSymbol{"STRING_1728856015"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegSymbolSfx{"STRING_1976816184"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegTimeUnit{"STRING_1743763954"}, InstrumentLeg_32);
      set_field(noLegs_1_1_1, FIX::LegUnitOfMeasure{"STRING_1106642482"}, InstrumentLeg_32);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_32;
      LegUnitOfMeasureQty_32.setString("14202265");
set_field(noLegs_1_1_1, LegUnitOfMeasureQty_32, InstrumentLeg_32);
      all_values.push_back(InstrumentLeg_32);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_64;
        set_field(noLegSecurityAltID_1_1_2_0, FIX::LegSecurityAltID{"STRING_1150284343"}, LegSecAltIDGrp_NoLegSecurityAltID_64);
        set_field(noLegSecurityAltID_1_1_2_0, FIX::LegSecurityAltIDSource{"STRING_230211603"}, LegSecAltIDGrp_NoLegSecurityAltID_64);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_64);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_33;
      set_field(noLegs_1_1_2, FIX::EncodedLegIssuer{"DATA_1806182715"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::EncodedLegIssuerLen{1091705417}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::EncodedLegSecurityDesc{"DATA_1008143785"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::EncodedLegSecurityDescLen{1537406963}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegCFICode{"STRING_461789213"}, InstrumentLeg_33);
      FIX::LegContractMultiplier LegContractMultiplier_33;
      LegContractMultiplier_33.setString("20364599");
set_field(noLegs_1_1_2, LegContractMultiplier_33, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegContractMultiplierUnit{549768938}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_183120478"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegCountryOfIssue{"COUNTRY_741031063"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2014269148"}, InstrumentLeg_33);
      FIX::LegCouponRate LegCouponRate_33;
      LegCouponRate_33.setString("50.590000");
set_field(noLegs_1_1_2, LegCouponRate_33, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegCreditRating{"STRING_1196517854"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegCurrency{"CHF"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegDatedDate{"LOCALMKTDATE_962329109"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegExerciseStyle{1274018134}, InstrumentLeg_33);
      FIX::LegFactor LegFactor_33;
      LegFactor_33.setString("20872866");
set_field(noLegs_1_1_2, LegFactor_33, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegFlowScheduleType{1588206363}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegInstrRegistry{"STRING_785899274"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_211760398"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegIssueDate{"LOCALMKTDATE_1623674072"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegIssuer{"STRING_1086952788"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegLocaleOfIssue{"STRING_1771470828"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_1205046439"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_916285324"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegMaturityTime{"TZTIMEONLY_1367751134"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_33);
      FIX::LegOptionRatio LegOptionRatio_33;
      LegOptionRatio_33.setString("1890281");
set_field(noLegs_1_1_2, LegOptionRatio_33, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegPool{"STRING_1640377788"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegPriceUnitOfMeasure{"STRING_1314489617"}, InstrumentLeg_33);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_33;
      LegPriceUnitOfMeasureQty_33.setString("4192397");
set_field(noLegs_1_1_2, LegPriceUnitOfMeasureQty_33, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegProduct{1299076855}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegPutOrCall{258711386}, InstrumentLeg_33);
      FIX::LegRatioQty LegRatioQty_33;
      LegRatioQty_33.setString("14273835");
set_field(noLegs_1_1_2, LegRatioQty_33, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_689000170"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegRepoCollateralSecurityType{"STRING_720500599"}, InstrumentLeg_33);
      FIX::LegRepurchaseRate LegRepurchaseRate_33;
      LegRepurchaseRate_33.setString("98.500000");
set_field(noLegs_1_1_2, LegRepurchaseRate_33, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegRepurchaseTerm{1238769108}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegSecurityDesc{"STRING_903621078"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegSecurityExchange{"EXCHANGE_2057390913"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegSecurityID{"STRING_1105554608"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegSecurityIDSource{"STRING_422842489"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegSecuritySubType{"STRING_1106425119"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegSecurityType{"STRING_292704455"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegSide{'4'}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_2068754228"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_33);
      FIX::LegStrikePrice LegStrikePrice_33;
      LegStrikePrice_33.setString("15094769");
set_field(noLegs_1_1_2, LegStrikePrice_33, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegSymbol{"STRING_205138215"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegSymbolSfx{"STRING_585273438"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegTimeUnit{"STRING_985667367"}, InstrumentLeg_33);
      set_field(noLegs_1_1_2, FIX::LegUnitOfMeasure{"STRING_1292091004"}, InstrumentLeg_33);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_33;
      LegUnitOfMeasureQty_33.setString("2092606");
set_field(noLegs_1_1_2, LegUnitOfMeasureQty_33, InstrumentLeg_33);
      all_values.push_back(InstrumentLeg_33);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_65;
        set_field(noLegSecurityAltID_1_2_2_0, FIX::LegSecurityAltID{"STRING_60892680"}, LegSecAltIDGrp_NoLegSecurityAltID_65);
        set_field(noLegSecurityAltID_1_2_2_0, FIX::LegSecurityAltIDSource{"STRING_1577011752"}, LegSecAltIDGrp_NoLegSecurityAltID_65);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_65);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_66;
        set_field(noLegSecurityAltID_1_2_2_1, FIX::LegSecurityAltID{"STRING_207435432"}, LegSecAltIDGrp_NoLegSecurityAltID_66);
        set_field(noLegSecurityAltID_1_2_2_1, FIX::LegSecurityAltIDSource{"STRING_249920865"}, LegSecAltIDGrp_NoLegSecurityAltID_66);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_66);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_67;
        set_field(noLegSecurityAltID_1_2_2_2, FIX::LegSecurityAltID{"STRING_1069905892"}, LegSecAltIDGrp_NoLegSecurityAltID_67);
        set_field(noLegSecurityAltID_1_2_2_2, FIX::LegSecurityAltIDSource{"STRING_1521925049"}, LegSecAltIDGrp_NoLegSecurityAltID_67);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_67);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_2);
    }
    // Instrument
    multiset<string> Instrument_20;
    FIX::AttachmentPoint AttachmentPoint_20;
    AttachmentPoint_20.setString("6.540000");
set_field(noRelatedSym_0_1, AttachmentPoint_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_221499099"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::CPProgram{2}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_2096544227"}, Instrument_20);
    FIX::CapPrice CapPrice_20;
    CapPrice_20.setString("9104992");
set_field(noRelatedSym_0_1, CapPrice_20, Instrument_20);
    FIX::ContractMultiplier ContractMultiplier_20;
    ContractMultiplier_20.setString("3536533");
set_field(noRelatedSym_0_1, ContractMultiplier_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{2}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_1784730"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_1257274465"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1175327694"}, Instrument_20);
    FIX::CouponRate CouponRate_20;
    CouponRate_20.setString("93.390000");
set_field(noRelatedSym_0_1, CouponRate_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_1680116954"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_134269165"}, Instrument_20);
    FIX::DetachmentPoint DetachmentPoint_20;
    DetachmentPoint_20.setString("37.940000");
set_field(noRelatedSym_0_1, DetachmentPoint_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_2113826964"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{55539745}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_819282735"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{339856356}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{1}, Instrument_20);
    FIX::Factor Factor_20;
    Factor_20.setString("10244209");
set_field(noRelatedSym_0_1, Factor_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{false}, Instrument_20);
    FIX::FloorPrice FloorPrice_20;
    FloorPrice_20.setString("1690283");
set_field(noRelatedSym_0_1, FloorPrice_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{2}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_446430566"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'2'}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_563918516"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_653865998"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_479841852"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::ListMethod{1}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_28307400"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_1149002506"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_1855323508"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_1808943835"}, Instrument_20);
    FIX::MinPriceIncrement MinPriceIncrement_20;
    MinPriceIncrement_20.setString("10980630");
set_field(noRelatedSym_0_1, MinPriceIncrement_20, Instrument_20);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_20;
    MinPriceIncrementAmount_20.setString("6183391");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{15113574}, Instrument_20);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_20;
    NotionalPercentageOutstanding_20.setString("98.670000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'6'}, Instrument_20);
    FIX::OptPayoutAmount OptPayoutAmount_20;
    OptPayoutAmount_20.setString("12723880");
set_field(noRelatedSym_0_1, OptPayoutAmount_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{1}, Instrument_20);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_20;
    OriginalNotionalPercentageOutstanding_20.setString("32.000000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_805021345"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{1525596727}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_771364662"}, Instrument_20);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_20;
    PriceUnitOfMeasureQty_20.setString("15811364");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::Product{2}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_1111221018"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{1}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_676243383"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_2036350812"}, Instrument_20);
    FIX::RepurchaseRate RepurchaseRate_20;
    RepurchaseRate_20.setString("99.210000");
set_field(noRelatedSym_0_1, RepurchaseRate_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{845271690}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_FR"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_1848300487"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_1075192677"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_1587176092"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_354682837"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_G"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_382990237"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_YANK"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SD"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'P'}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_1654616474"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_1399695844"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"EUR"}, Instrument_20);
    FIX::StrikeMultiplier StrikeMultiplier_20;
    StrikeMultiplier_20.setString("20198197");
set_field(noRelatedSym_0_1, StrikeMultiplier_20, Instrument_20);
    FIX::StrikePrice StrikePrice_20;
    StrikePrice_20.setString("13319520");
set_field(noRelatedSym_0_1, StrikePrice_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{1}, Instrument_20);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_20;
    StrikePriceBoundaryPrecision_20.setString("92.570000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{1}, Instrument_20);
    FIX::StrikeValue StrikeValue_20;
    StrikeValue_20.setString("4925733");
set_field(noRelatedSym_0_1, StrikeValue_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_432338955"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_S"}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_20);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_20;
    UnitOfMeasureQty_20.setString("9248956");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_20, Instrument_20);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_20);
    all_values.push_back(Instrument_20);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_44;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_44);
      FIX::ComplexEventPrice ComplexEventPrice_44;
      ComplexEventPrice_44.setString("16056764");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_44, ComplexEvents_NoComplexEvents_44);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_44);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_44;
      ComplexEventPriceBoundaryPrecision_44.setString("24.330000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_44, ComplexEvents_NoComplexEvents_44);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_44);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_44);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_44;
      ComplexOptPayoutAmount_44.setString("2347816");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_44, ComplexEvents_NoComplexEvents_44);
      all_values.push_back(ComplexEvents_NoComplexEvents_44);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_94;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 0, 0, 25, 7, 2009)}, ComplexEventDates_NoComplexEventDates_94);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 34, 4, 7, 1, 2000)}, ComplexEventDates_NoComplexEventDates_94);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_94);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_189;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 10, 28)}, ComplexEventTimes_NoComplexEventTimes_189);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 20, 20)}, ComplexEventTimes_NoComplexEventTimes_189);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_189);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_190;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 0, 48)}, ComplexEventTimes_NoComplexEventTimes_190);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 51, 57)}, ComplexEventTimes_NoComplexEventTimes_190);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_190);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_95;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 50, 32, 25, 9, 2009)}, ComplexEventDates_NoComplexEventDates_95);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 56, 50, 0, 1, 2014)}, ComplexEventDates_NoComplexEventDates_95);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_95);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_191;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 45, 19)}, ComplexEventTimes_NoComplexEventTimes_191);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 31, 45)}, ComplexEventTimes_NoComplexEventTimes_191);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_191);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_96;
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 45, 51, 22, 12, 2000)}, ComplexEventDates_NoComplexEventDates_96);
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 6, 14, 19, 12, 2010)}, ComplexEventDates_NoComplexEventDates_96);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_96);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_192;
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 25, 19)}, ComplexEventTimes_NoComplexEventTimes_192);
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 1, 13)}, ComplexEventTimes_NoComplexEventTimes_192);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_192);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_193;
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 58, 32)}, ComplexEventTimes_NoComplexEventTimes_193);
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 55, 25)}, ComplexEventTimes_NoComplexEventTimes_193);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_193);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_194;
          set_field(noComplexEventTimes_1_0_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 2, 18)}, ComplexEventTimes_NoComplexEventTimes_194);
          set_field(noComplexEventTimes_1_0_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 53, 51)}, ComplexEventTimes_NoComplexEventTimes_194);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_194);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_46;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_1327963259"}, EvntGrp_NoEvents_46);
      FIX::EventPx EventPx_46;
      EventPx_46.setString("15349852");
set_field(noEvents_1_1_0, EventPx_46, EvntGrp_NoEvents_46);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_2065993452"}, EvntGrp_NoEvents_46);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(4, 33, 3, 19, 11, 2016)}, EvntGrp_NoEvents_46);
      set_field(noEvents_1_1_0, FIX::EventType{15}, EvntGrp_NoEvents_46);
      all_values.push_back(EvntGrp_NoEvents_46);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_47;
      set_field(noEvents_1_1_1, FIX::EventDate{"LOCALMKTDATE_1615889547"}, EvntGrp_NoEvents_47);
      FIX::EventPx EventPx_47;
      EventPx_47.setString("962921");
set_field(noEvents_1_1_1, EventPx_47, EvntGrp_NoEvents_47);
      set_field(noEvents_1_1_1, FIX::EventText{"STRING_426997087"}, EvntGrp_NoEvents_47);
      set_field(noEvents_1_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(18, 6, 11, 14, 6, 2007)}, EvntGrp_NoEvents_47);
      set_field(noEvents_1_1_1, FIX::EventType{16}, EvntGrp_NoEvents_47);
      all_values.push_back(EvntGrp_NoEvents_47);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_48;
      set_field(noEvents_1_1_2, FIX::EventDate{"LOCALMKTDATE_2069594284"}, EvntGrp_NoEvents_48);
      FIX::EventPx EventPx_48;
      EventPx_48.setString("1830941");
set_field(noEvents_1_1_2, EventPx_48, EvntGrp_NoEvents_48);
      set_field(noEvents_1_1_2, FIX::EventText{"STRING_2119292858"}, EvntGrp_NoEvents_48);
      set_field(noEvents_1_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(19, 43, 8, 11, 5, 2005)}, EvntGrp_NoEvents_48);
      set_field(noEvents_1_1_2, FIX::EventType{1}, EvntGrp_NoEvents_48);
      all_values.push_back(EvntGrp_NoEvents_48);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_37;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_194663905"}, InstrumentParties_NoInstrumentParties_37);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_37);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{982945817}, InstrumentParties_NoInstrumentParties_37);
      all_values.push_back(InstrumentParties_NoInstrumentParties_37);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_1499676751"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{676764247}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_1581889902"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{1523626405}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_38;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_145170146"}, InstrumentParties_NoInstrumentParties_38);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_38);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{1950623493}, InstrumentParties_NoInstrumentParties_38);
      all_values.push_back(InstrumentParties_NoInstrumentParties_38);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_586383740"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{1723670311}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76;
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubID{"STRING_1420865717"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76);
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubIDType{1480653270}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77;
        set_field(noInstrumentPartySubIDs_1_1_2_2, FIX::InstrumentPartySubID{"STRING_1971679860"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77);
        set_field(noInstrumentPartySubIDs_1_1_2_2, FIX::InstrumentPartySubIDType{541544896}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_39;
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyID{"STRING_1087347538"}, InstrumentParties_NoInstrumentParties_39);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_39);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyRole{724639088}, InstrumentParties_NoInstrumentParties_39);
      all_values.push_back(InstrumentParties_NoInstrumentParties_39);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78;
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubID{"STRING_786948364"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78);
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubIDType{244275619}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79;
        set_field(noInstrumentPartySubIDs_1_2_2_1, FIX::InstrumentPartySubID{"STRING_1609062431"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79);
        set_field(noInstrumentPartySubIDs_1_2_2_1, FIX::InstrumentPartySubIDType{428172664}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_40;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_512779603"}, SecAltIDGrp_NoSecurityAltID_40);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_1397360223"}, SecAltIDGrp_NoSecurityAltID_40);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_40);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_41;
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltID{"STRING_1622489303"}, SecAltIDGrp_NoSecurityAltID_41);
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltIDSource{"STRING_1482490227"}, SecAltIDGrp_NoSecurityAltID_41);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_41);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_40;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_1592024128"}, SecurityXML_40);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{1524309271}, SecurityXML_40);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_317952396"}, SecurityXML_40);
    all_values.push_back(SecurityXML_40);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_6;
    set_field(noRelatedSym_0_1, FIX::DeliveryForm{1}, InstrumentExtension_6);
    FIX::PctAtRisk PctAtRisk_6;
    PctAtRisk_6.setString("23.750000");
set_field(noRelatedSym_0_1, PctAtRisk_6, InstrumentExtension_6);
    all_values.push_back(InstrumentExtension_6);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_9;
      set_field(noInstrAttrib_1_1_0, FIX::InstrAttribType{23}, AttrbGrp_NoInstrAttrib_9);
      set_field(noInstrAttrib_1_1_0, FIX::InstrAttribValue{"STRING_252645132"}, AttrbGrp_NoInstrAttrib_9);
      all_values.push_back(AttrbGrp_NoInstrAttrib_9);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_10;
      set_field(noInstrAttrib_1_1_1, FIX::InstrAttribType{10}, AttrbGrp_NoInstrAttrib_10);
      set_field(noInstrAttrib_1_1_1, FIX::InstrAttribValue{"STRING_209151971"}, AttrbGrp_NoInstrAttrib_10);
      all_values.push_back(AttrbGrp_NoInstrAttrib_10);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_2;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_2;
    SecondaryHighLimitPrice_2.setString("557849");
set_field(noRelatedSym_0_1, SecondaryHighLimitPrice_2, SecondaryPriceLimits_2);
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_2;
    SecondaryLowLimitPrice_2.setString("15625398");
set_field(noRelatedSym_0_1, SecondaryLowLimitPrice_2, SecondaryPriceLimits_2);
    set_field(noRelatedSym_0_1, FIX::SecondaryPriceLimitType{795535711}, SecondaryPriceLimits_2);
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_2;
    SecondaryTradingReferencePrice_2.setString("17794552");
set_field(noRelatedSym_0_1, SecondaryTradingReferencePrice_2, SecondaryPriceLimits_2);
    all_values.push_back(SecondaryPriceLimits_2);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_35;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_835921944"}, UnderlyingInstrument_35);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{128705334}, UnderlyingInstrument_35);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_1603651501"}, UnderlyingInstrument_35);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{1377466840}, UnderlyingInstrument_35);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_35;
  UnderlyingAdjustedQuantity_35.setString("12160528");
set_field(msg, UnderlyingAdjustedQuantity_35, UnderlyingInstrument_35);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_35;
  UnderlyingAllocationPercent_35.setString("83.500000");
set_field(msg, UnderlyingAllocationPercent_35, UnderlyingInstrument_35);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_35;
  UnderlyingAttachmentPoint_35.setString("59.280000");
set_field(msg, UnderlyingAttachmentPoint_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_127725972"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_2136906714"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_198897899"}, UnderlyingInstrument_35);
  FIX::UnderlyingCapValue UnderlyingCapValue_35;
  UnderlyingCapValue_35.setString("17367884");
set_field(msg, UnderlyingCapValue_35, UnderlyingInstrument_35);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_35;
  UnderlyingCashAmount_35.setString("4175957");
set_field(msg, UnderlyingCashAmount_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_35);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_35;
  UnderlyingContractMultiplier_35.setString("1020843");
set_field(msg, UnderlyingContractMultiplier_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{1814955953}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_913535197"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1584574586"}, UnderlyingInstrument_35);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_35;
  UnderlyingCouponRate_35.setString("64.330000");
set_field(msg, UnderlyingCouponRate_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_290360820"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_35);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_35;
  UnderlyingCurrentValue_35.setString("11668631");
set_field(msg, UnderlyingCurrentValue_35, UnderlyingInstrument_35);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_35;
  UnderlyingDetachmentPoint_35.setString("99.780000");
set_field(msg, UnderlyingDetachmentPoint_35, UnderlyingInstrument_35);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_35;
  UnderlyingDirtyPrice_35.setString("10345136");
set_field(msg, UnderlyingDirtyPrice_35, UnderlyingInstrument_35);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_35;
  UnderlyingEndPrice_35.setString("14195083");
set_field(msg, UnderlyingEndPrice_35, UnderlyingInstrument_35);
  FIX::UnderlyingEndValue UnderlyingEndValue_35;
  UnderlyingEndValue_35.setString("18896467");
set_field(msg, UnderlyingEndValue_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingExerciseStyle{1243665626}, UnderlyingInstrument_35);
  FIX::UnderlyingFXRate UnderlyingFXRate_35;
  UnderlyingFXRate_35.setString("14752933");
set_field(msg, UnderlyingFXRate_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_35);
  FIX::UnderlyingFactor UnderlyingFactor_35;
  UnderlyingFactor_35.setString("20392013");
set_field(msg, UnderlyingFactor_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingFlowScheduleType{1107264946}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_2140624939"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_20423024"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_563432799"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_1370608131"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1236475896"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1913391149"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1325230411"}, UnderlyingInstrument_35);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_35;
  UnderlyingNotionalPercentageOutstanding_35.setString("18.680000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_35);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_35;
  UnderlyingOriginalNotionalPercentageOutstanding_35.setString("83.100000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_953506623"}, UnderlyingInstrument_35);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_35;
  UnderlyingPriceUnitOfMeasureQty_35.setString("1729262");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingProduct{815174204}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingPutOrCall{1055590982}, UnderlyingInstrument_35);
  FIX::UnderlyingPx UnderlyingPx_35;
  UnderlyingPx_35.setString("19878822");
set_field(msg, UnderlyingPx_35, UnderlyingInstrument_35);
  FIX::UnderlyingQty UnderlyingQty_35;
  UnderlyingQty_35.setString("17287094");
set_field(msg, UnderlyingQty_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_492681921"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1099895035"}, UnderlyingInstrument_35);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_35;
  UnderlyingRepurchaseRate_35.setString("2.220000");
set_field(msg, UnderlyingRepurchaseRate_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{247725256}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_1455955128"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_1038449769"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_997485234"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_342985135"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_310474449"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_739648354"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_1586650761"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_1785767755"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_2044351349"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_35);
  FIX::UnderlyingStartValue UnderlyingStartValue_35;
  UnderlyingStartValue_35.setString("7455490");
set_field(msg, UnderlyingStartValue_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2037492640"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_35);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_35;
  UnderlyingStrikePrice_35.setString("12606171");
set_field(msg, UnderlyingStrikePrice_35, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_587783723"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_1074889353"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_438363886"}, UnderlyingInstrument_35);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_1951985591"}, UnderlyingInstrument_35);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_35;
  UnderlyingUnitOfMeasureQty_35.setString("8302199");
set_field(msg, UnderlyingUnitOfMeasureQty_35, UnderlyingInstrument_35);
  all_values.push_back(UnderlyingInstrument_35);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_74;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_758008567"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_74);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1003146217"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_74);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_74);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_75;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_630182753"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_75);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1813599549"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_75);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_75);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_76;
    set_field(noUnderlyingSecurityAltID_0_2, FIX::UnderlyingSecurityAltID{"STRING_843544819"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_76);
    set_field(noUnderlyingSecurityAltID_0_2, FIX::UnderlyingSecurityAltIDSource{"STRING_211408507"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_76);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_76);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_72;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_1943439854"}, UnderlyingStipulations_NoUnderlyingStips_72);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_82995081"}, UnderlyingStipulations_NoUnderlyingStips_72);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_72);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_73;
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipType{"STRING_406523078"}, UnderlyingStipulations_NoUnderlyingStips_73);
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipValue{"STRING_1251911334"}, UnderlyingStipulations_NoUnderlyingStips_73);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_73);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_69;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_1404008313"}, UndlyInstrumentParties_NoUndlyInstrumentParties_69);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_69);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{1431919300}, UndlyInstrumentParties_NoUndlyInstrumentParties_69);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_69);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1034063582"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{1070203407}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2040524369"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{364948386}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";cout << "////////////////////////////////////////////" << endl;
cout << msg.toXML() << endl;
cout << "////////////////////////////////////////////" << endl << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    BOOST_LOG_TRIVIAL(debug) << "XML Elements are:";
    cout << "	[";
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

    BOOST_LOG_TRIVIAL(debug) << "FIX Components are:"; 
    cout << "	[";
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

  }
  BOOST_LOG_TRIVIAL(debug) << "All FIX components";
  for (const auto& l : all_values) {
    cout << "	[";
copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }
  BOOST_LOG_TRIVIAL(debug) << "All XML components";
  for (const auto& l : elt_lists) {
    cout << "	[";
copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;

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
      BOOST_LOG_TRIVIAL(debug) << "[TO CHECK] This XML component was not found in FIX message";
      cout << "	 ---> [";
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << "]" << endl << endl;
    } // end if ! found
  } // end for elt_lists
}
