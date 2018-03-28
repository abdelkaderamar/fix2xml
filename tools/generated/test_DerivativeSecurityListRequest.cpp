#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/DerivativeSecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityListRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DerivativeSecurityListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> DerivativeSecurityListRequest_0;
  FIX::Currency Currency_17("GBP");
  msg.set(Currency_17);
  DerivativeSecurityListRequest_0.insert(Currency_17.getString());
  FIX::EncodedText EncodedText_29("DATA_1926661610");
  msg.set(EncodedText_29);
  DerivativeSecurityListRequest_0.insert(EncodedText_29.getString());
  FIX::EncodedTextLen EncodedTextLen_29(71648967);
  msg.set(EncodedTextLen_29);
  DerivativeSecurityListRequest_0.insert(EncodedTextLen_29.getString());
  FIX::MarketID MarketID_1("EXCHANGE_756568100");
  msg.set(MarketID_1);
  DerivativeSecurityListRequest_0.insert(MarketID_1.getString());
  FIX::MarketSegmentID MarketSegmentID_1("STRING_541278776");
  msg.set(MarketSegmentID_1);
  DerivativeSecurityListRequest_0.insert(MarketSegmentID_1.getString());
  FIX::SecurityListRequestType SecurityListRequestType_0(4);
  msg.set(SecurityListRequestType_0);
  DerivativeSecurityListRequest_0.insert(SecurityListRequestType_0.getString());
  FIX::SecurityReqID SecurityReqID_1("STRING_1728817984");
  msg.set(SecurityReqID_1);
  DerivativeSecurityListRequest_0.insert(SecurityReqID_1.getString());
  FIX::SecuritySubType SecuritySubType_21("STRING_140853554");
  msg.set(SecuritySubType_21);
  DerivativeSecurityListRequest_0.insert(SecuritySubType_21.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_1('2');
  msg.set(SubscriptionRequestType_1);
  DerivativeSecurityListRequest_0.insert(SubscriptionRequestType_1.getString());
  FIX::Text Text_29("STRING_1162128860");
  msg.set(Text_29);
  DerivativeSecurityListRequest_0.insert(Text_29.getString());
  FIX::TradingSessionID TradingSessionID_16("STRING_4");
  msg.set(TradingSessionID_16);
  DerivativeSecurityListRequest_0.insert(TradingSessionID_16.getString());
  FIX::TradingSessionSubID TradingSessionSubID_16("STRING_5");
  msg.set(TradingSessionSubID_16);
  DerivativeSecurityListRequest_0.insert(TradingSessionSubID_16.getString());
  all_values.push_back(DerivativeSecurityListRequest_0);

  // DerivativeInstrument
  multiset<string> DerivativeInstrument_1;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_1(true);
  msg.set(DerivFlexProductEligibilityIndicator_1);
  DerivativeInstrument_1.insert(DerivFlexProductEligibilityIndicator_1.getString());
  FIX::DerivativeCFICode DerivativeCFICode_1("STRING_916852909");
  msg.set(DerivativeCFICode_1);
  DerivativeInstrument_1.insert(DerivativeCFICode_1.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_1;
  DerivativeCapPrice_1.setString("17793728");
  msg.set(DerivativeCapPrice_1);
  DerivativeInstrument_1.insert(DerivativeCapPrice_1.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_1;
  DerivativeContractMultiplier_1.setString("2611182");
  msg.set(DerivativeContractMultiplier_1);
  DerivativeInstrument_1.insert(DerivativeContractMultiplier_1.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_1(1172580172);
  msg.set(DerivativeContractMultiplierUnit_1);
  DerivativeInstrument_1.insert(DerivativeContractMultiplierUnit_1.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_1("MONTHYEAR_1238938419");
  msg.set(DerivativeContractSettlMonth_1);
  DerivativeInstrument_1.insert(DerivativeContractSettlMonth_1.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_1("COUNTRY_1173401672");
  msg.set(DerivativeCountryOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeCountryOfIssue_1.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_1("DATA_924738344");
  msg.set(DerivativeEncodedIssuer_1);
  DerivativeInstrument_1.insert(DerivativeEncodedIssuer_1.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_1(807496535);
  msg.set(DerivativeEncodedIssuerLen_1);
  DerivativeInstrument_1.insert(DerivativeEncodedIssuerLen_1.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_1("DATA_756381132");
  msg.set(DerivativeEncodedSecurityDesc_1);
  DerivativeInstrument_1.insert(DerivativeEncodedSecurityDesc_1.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_1(642970573);
  msg.set(DerivativeEncodedSecurityDescLen_1);
  DerivativeInstrument_1.insert(DerivativeEncodedSecurityDescLen_1.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_1('4');
  msg.set(DerivativeExerciseStyle_1);
  DerivativeInstrument_1.insert(DerivativeExerciseStyle_1.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_1;
  DerivativeFloorPrice_1.setString("324827");
  msg.set(DerivativeFloorPrice_1);
  DerivativeInstrument_1.insert(DerivativeFloorPrice_1.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_1(1023583187);
  msg.set(DerivativeFlowScheduleType_1);
  DerivativeInstrument_1.insert(DerivativeFlowScheduleType_1.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_1("STRING_752450612");
  msg.set(DerivativeInstrRegistry_1);
  DerivativeInstrument_1.insert(DerivativeInstrRegistry_1.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_1('1');
  msg.set(DerivativeInstrmtAssignmentMethod_1);
  DerivativeInstrument_1.insert(DerivativeInstrmtAssignmentMethod_1.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_1("LOCALMKTDATE_1948417296");
  msg.set(DerivativeIssueDate_1);
  DerivativeInstrument_1.insert(DerivativeIssueDate_1.getString());
  FIX::DerivativeIssuer DerivativeIssuer_1("STRING_1395639666");
  msg.set(DerivativeIssuer_1);
  DerivativeInstrument_1.insert(DerivativeIssuer_1.getString());
  FIX::DerivativeListMethod DerivativeListMethod_1(1513604744);
  msg.set(DerivativeListMethod_1);
  DerivativeInstrument_1.insert(DerivativeListMethod_1.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_1("STRING_1073295985");
  msg.set(DerivativeLocaleOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeLocaleOfIssue_1.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_1("LOCALMKTDATE_1174817628");
  msg.set(DerivativeMaturityDate_1);
  DerivativeInstrument_1.insert(DerivativeMaturityDate_1.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_1("MONTHYEAR_1585253712");
  msg.set(DerivativeMaturityMonthYear_1);
  DerivativeInstrument_1.insert(DerivativeMaturityMonthYear_1.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_1("TZTIMEONLY_1829864085");
  msg.set(DerivativeMaturityTime_1);
  DerivativeInstrument_1.insert(DerivativeMaturityTime_1.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_1;
  DerivativeMinPriceIncrement_1.setString("17160964");
  msg.set(DerivativeMinPriceIncrement_1);
  DerivativeInstrument_1.insert(DerivativeMinPriceIncrement_1.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_1;
  DerivativeMinPriceIncrementAmount_1.setString("6220174");
  msg.set(DerivativeMinPriceIncrementAmount_1);
  DerivativeInstrument_1.insert(DerivativeMinPriceIncrementAmount_1.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_1(1411198421);
  msg.set(DerivativeNTPositionLimit_1);
  DerivativeInstrument_1.insert(DerivativeNTPositionLimit_1.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_1('1');
  msg.set(DerivativeOptAttribute_1);
  DerivativeInstrument_1.insert(DerivativeOptAttribute_1.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_1;
  DerivativeOptPayAmount_1.setString("18323700");
  msg.set(DerivativeOptPayAmount_1);
  DerivativeInstrument_1.insert(DerivativeOptPayAmount_1.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_1(425843633);
  msg.set(DerivativePositionLimit_1);
  DerivativeInstrument_1.insert(DerivativePositionLimit_1.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_1("STRING_25712831");
  msg.set(DerivativePriceQuoteMethod_1);
  DerivativeInstrument_1.insert(DerivativePriceQuoteMethod_1.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_1("STRING_1104263580");
  msg.set(DerivativePriceUnitOfMeasure_1);
  DerivativeInstrument_1.insert(DerivativePriceUnitOfMeasure_1.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_1;
  DerivativePriceUnitOfMeasureQty_1.setString("6898290");
  msg.set(DerivativePriceUnitOfMeasureQty_1);
  DerivativeInstrument_1.insert(DerivativePriceUnitOfMeasureQty_1.getString());
  FIX::DerivativeProduct DerivativeProduct_1(942565740);
  msg.set(DerivativeProduct_1);
  DerivativeInstrument_1.insert(DerivativeProduct_1.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_1("STRING_736152780");
  msg.set(DerivativeProductComplex_1);
  DerivativeInstrument_1.insert(DerivativeProductComplex_1.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_1(950947358);
  msg.set(DerivativePutOrCall_1);
  DerivativeInstrument_1.insert(DerivativePutOrCall_1.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_1("STRING_2115145912");
  msg.set(DerivativeSecurityDesc_1);
  DerivativeInstrument_1.insert(DerivativeSecurityDesc_1.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_1("EXCHANGE_1975091199");
  msg.set(DerivativeSecurityExchange_1);
  DerivativeInstrument_1.insert(DerivativeSecurityExchange_1.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_1("STRING_2124349030");
  msg.set(DerivativeSecurityGroup_1);
  DerivativeInstrument_1.insert(DerivativeSecurityGroup_1.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_1("STRING_892400609");
  msg.set(DerivativeSecurityID_1);
  DerivativeInstrument_1.insert(DerivativeSecurityID_1.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_1("STRING_635104086");
  msg.set(DerivativeSecurityIDSource_1);
  DerivativeInstrument_1.insert(DerivativeSecurityIDSource_1.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_1("STRING_733246515");
  msg.set(DerivativeSecurityStatus_1);
  DerivativeInstrument_1.insert(DerivativeSecurityStatus_1.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_1("STRING_1535371182");
  msg.set(DerivativeSecuritySubType_1);
  DerivativeInstrument_1.insert(DerivativeSecuritySubType_1.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_1("STRING_1096042034");
  msg.set(DerivativeSecurityType_1);
  DerivativeInstrument_1.insert(DerivativeSecurityType_1.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_1('7');
  msg.set(DerivativeSettlMethod_1);
  DerivativeInstrument_1.insert(DerivativeSettlMethod_1.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_1("STRING_411470722");
  msg.set(DerivativeSettleOnOpenFlag_1);
  DerivativeInstrument_1.insert(DerivativeSettleOnOpenFlag_1.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_1("STRING_1848492646");
  msg.set(DerivativeStateOrProvinceOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeStateOrProvinceOfIssue_1.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_1("GBP");
  msg.set(DerivativeStrikeCurrency_1);
  DerivativeInstrument_1.insert(DerivativeStrikeCurrency_1.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_1;
  DerivativeStrikeMultiplier_1.setString("10966486");
  msg.set(DerivativeStrikeMultiplier_1);
  DerivativeInstrument_1.insert(DerivativeStrikeMultiplier_1.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_1;
  DerivativeStrikePrice_1.setString("2362405");
  msg.set(DerivativeStrikePrice_1);
  DerivativeInstrument_1.insert(DerivativeStrikePrice_1.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_1;
  DerivativeStrikeValue_1.setString("12857003");
  msg.set(DerivativeStrikeValue_1);
  DerivativeInstrument_1.insert(DerivativeStrikeValue_1.getString());
  FIX::DerivativeSymbol DerivativeSymbol_1("STRING_123982644");
  msg.set(DerivativeSymbol_1);
  DerivativeInstrument_1.insert(DerivativeSymbol_1.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_1("STRING_1821494247");
  msg.set(DerivativeSymbolSfx_1);
  DerivativeInstrument_1.insert(DerivativeSymbolSfx_1.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_1("STRING_968080792");
  msg.set(DerivativeTimeUnit_1);
  DerivativeInstrument_1.insert(DerivativeTimeUnit_1.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_1("STRING_1840079049");
  msg.set(DerivativeUnitOfMeasure_1);
  DerivativeInstrument_1.insert(DerivativeUnitOfMeasure_1.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_1;
  DerivativeUnitOfMeasureQty_1.setString("2960280");
  msg.set(DerivativeUnitOfMeasureQty_1);
  DerivativeInstrument_1.insert(DerivativeUnitOfMeasureQty_1.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_1("STRING_231795565");
  msg.set(DerivativeValuationMethod_1);
  DerivativeInstrument_1.insert(DerivativeValuationMethod_1.getString());
  all_values.push_back(DerivativeInstrument_1);

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_3;
    FIX::DerivativeEventDate DerivativeEventDate_3("LOCALMKTDATE_2128398059");
    noDerivativeEvents_0_0.set(DerivativeEventDate_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventDate_3.getString());
    FIX::DerivativeEventPx DerivativeEventPx_3;
    DerivativeEventPx_3.setString("6576391");
    noDerivativeEvents_0_0.set(DerivativeEventPx_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventPx_3.getString());
    FIX::DerivativeEventText DerivativeEventText_3("STRING_1575258191");
    noDerivativeEvents_0_0.set(DerivativeEventText_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventText_3.getString());
    FIX::DerivativeEventTime DerivativeEventTime_3(FIX::UTCTIMESTAMP(0, 3, 52, 18, 1, 2011));
    noDerivativeEvents_0_0.set(DerivativeEventTime_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventTime_3.getString());
    FIX::DerivativeEventType DerivativeEventType_3(127797356);
    noDerivativeEvents_0_0.set(DerivativeEventType_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventType_3.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_3);

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_4;
    FIX::DerivativeEventDate DerivativeEventDate_4("LOCALMKTDATE_1230403157");
    noDerivativeEvents_0_1.set(DerivativeEventDate_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventDate_4.getString());
    FIX::DerivativeEventPx DerivativeEventPx_4;
    DerivativeEventPx_4.setString("1365587");
    noDerivativeEvents_0_1.set(DerivativeEventPx_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventPx_4.getString());
    FIX::DerivativeEventText DerivativeEventText_4("STRING_861043871");
    noDerivativeEvents_0_1.set(DerivativeEventText_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventText_4.getString());
    FIX::DerivativeEventTime DerivativeEventTime_4(FIX::UTCTIMESTAMP(11, 8, 13, 26, 4, 2004));
    noDerivativeEvents_0_1.set(DerivativeEventTime_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventTime_4.getString());
    FIX::DerivativeEventType DerivativeEventType_4(2030258458);
    noDerivativeEvents_0_1.set(DerivativeEventType_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventType_4.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_4);

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_5;
    FIX::DerivativeEventDate DerivativeEventDate_5("LOCALMKTDATE_585649434");
    noDerivativeEvents_0_2.set(DerivativeEventDate_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventDate_5.getString());
    FIX::DerivativeEventPx DerivativeEventPx_5;
    DerivativeEventPx_5.setString("3803824");
    noDerivativeEvents_0_2.set(DerivativeEventPx_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventPx_5.getString());
    FIX::DerivativeEventText DerivativeEventText_5("STRING_6757455");
    noDerivativeEvents_0_2.set(DerivativeEventText_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventText_5.getString());
    FIX::DerivativeEventTime DerivativeEventTime_5(FIX::UTCTIMESTAMP(4, 24, 18, 1, 4, 2003));
    noDerivativeEvents_0_2.set(DerivativeEventTime_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventTime_5.getString());
    FIX::DerivativeEventType DerivativeEventType_5(90414400);
    noDerivativeEvents_0_2.set(DerivativeEventType_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventType_5.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_5);

    msg.addGroup(noDerivativeEvents_0_2);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_3;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_3("STRING_1621780441");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyID_3.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_3("STRING_1437882664");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyIDSource_3.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_3(1047013042);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyRole_3.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_5("STRING_1588814638");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_5);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5.insert(DerivativeInstrumentPartySubID_5.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_5(1385015590);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_5);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5.insert(DerivativeInstrumentPartySubIDType_5.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_2("STRING_1716611994");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_2);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2.insert(DerivativeSecurityAltID_2.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_2("STRING_467935099");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_2);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2.insert(DerivativeSecurityAltIDSource_2.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2);

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_2;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_3("DATA_933641002");
  msg.set(DerivativeSecurityXML_3);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_1(430172218);
  msg.set(DerivativeSecurityXMLLen_1);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_1("STRING_1086225790");
  msg.set(DerivativeSecurityXMLSchema_1);
  DerivativeSecurityXML_2.insert(DerivativeSecurityXMLSchema_1.getString());
  all_values.push_back(DerivativeSecurityXML_2);

  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_34;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_34("DATA_18758149");
  msg.set(EncodedUnderlyingIssuer_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingIssuer_34.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_34(2056945326);
  msg.set(EncodedUnderlyingIssuerLen_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingIssuerLen_34.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_34("DATA_2115987204");
  msg.set(EncodedUnderlyingSecurityDesc_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingSecurityDesc_34.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_34(952367943);
  msg.set(EncodedUnderlyingSecurityDescLen_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingSecurityDescLen_34.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_34;
  UnderlyingAdjustedQuantity_34.setString("2588705");
  msg.set(UnderlyingAdjustedQuantity_34);
  UnderlyingInstrument_34.insert(UnderlyingAdjustedQuantity_34.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_34;
  UnderlyingAllocationPercent_34.setString("93.400000");
  msg.set(UnderlyingAllocationPercent_34);
  UnderlyingInstrument_34.insert(UnderlyingAllocationPercent_34.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_34;
  UnderlyingAttachmentPoint_34.setString("27.540000");
  msg.set(UnderlyingAttachmentPoint_34);
  UnderlyingInstrument_34.insert(UnderlyingAttachmentPoint_34.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_34("STRING_844520011");
  msg.set(UnderlyingCFICode_34);
  UnderlyingInstrument_34.insert(UnderlyingCFICode_34.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_34("STRING_1591051831");
  msg.set(UnderlyingCPProgram_34);
  UnderlyingInstrument_34.insert(UnderlyingCPProgram_34.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_34("STRING_841900209");
  msg.set(UnderlyingCPRegType_34);
  UnderlyingInstrument_34.insert(UnderlyingCPRegType_34.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_34;
  UnderlyingCapValue_34.setString("11041800");
  msg.set(UnderlyingCapValue_34);
  UnderlyingInstrument_34.insert(UnderlyingCapValue_34.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_34;
  UnderlyingCashAmount_34.setString("7920314");
  msg.set(UnderlyingCashAmount_34);
  UnderlyingInstrument_34.insert(UnderlyingCashAmount_34.getString());
  FIX::UnderlyingCashType UnderlyingCashType_34("STRING_DIFF");
  msg.set(UnderlyingCashType_34);
  UnderlyingInstrument_34.insert(UnderlyingCashType_34.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_34;
  UnderlyingContractMultiplier_34.setString("16598680");
  msg.set(UnderlyingContractMultiplier_34);
  UnderlyingInstrument_34.insert(UnderlyingContractMultiplier_34.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_34(224806669);
  msg.set(UnderlyingContractMultiplierUnit_34);
  UnderlyingInstrument_34.insert(UnderlyingContractMultiplierUnit_34.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_34("COUNTRY_1790151280");
  msg.set(UnderlyingCountryOfIssue_34);
  UnderlyingInstrument_34.insert(UnderlyingCountryOfIssue_34.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_34("LOCALMKTDATE_48986885");
  msg.set(UnderlyingCouponPaymentDate_34);
  UnderlyingInstrument_34.insert(UnderlyingCouponPaymentDate_34.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_34;
  UnderlyingCouponRate_34.setString("10.690000");
  msg.set(UnderlyingCouponRate_34);
  UnderlyingInstrument_34.insert(UnderlyingCouponRate_34.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_34("STRING_319340391");
  msg.set(UnderlyingCreditRating_34);
  UnderlyingInstrument_34.insert(UnderlyingCreditRating_34.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_34("CHF");
  msg.set(UnderlyingCurrency_34);
  UnderlyingInstrument_34.insert(UnderlyingCurrency_34.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_34;
  UnderlyingCurrentValue_34.setString("13663534");
  msg.set(UnderlyingCurrentValue_34);
  UnderlyingInstrument_34.insert(UnderlyingCurrentValue_34.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_34;
  UnderlyingDetachmentPoint_34.setString("12.440000");
  msg.set(UnderlyingDetachmentPoint_34);
  UnderlyingInstrument_34.insert(UnderlyingDetachmentPoint_34.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_34;
  UnderlyingDirtyPrice_34.setString("11944347");
  msg.set(UnderlyingDirtyPrice_34);
  UnderlyingInstrument_34.insert(UnderlyingDirtyPrice_34.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_34;
  UnderlyingEndPrice_34.setString("6038853");
  msg.set(UnderlyingEndPrice_34);
  UnderlyingInstrument_34.insert(UnderlyingEndPrice_34.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_34;
  UnderlyingEndValue_34.setString("16159934");
  msg.set(UnderlyingEndValue_34);
  UnderlyingInstrument_34.insert(UnderlyingEndValue_34.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_34(763563069);
  msg.set(UnderlyingExerciseStyle_34);
  UnderlyingInstrument_34.insert(UnderlyingExerciseStyle_34.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_34;
  UnderlyingFXRate_34.setString("10718204");
  msg.set(UnderlyingFXRate_34);
  UnderlyingInstrument_34.insert(UnderlyingFXRate_34.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_34('D');
  msg.set(UnderlyingFXRateCalc_34);
  UnderlyingInstrument_34.insert(UnderlyingFXRateCalc_34.getString());
  FIX::UnderlyingFactor UnderlyingFactor_34;
  UnderlyingFactor_34.setString("11937352");
  msg.set(UnderlyingFactor_34);
  UnderlyingInstrument_34.insert(UnderlyingFactor_34.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_34(10562616);
  msg.set(UnderlyingFlowScheduleType_34);
  UnderlyingInstrument_34.insert(UnderlyingFlowScheduleType_34.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_34("STRING_420908988");
  msg.set(UnderlyingInstrRegistry_34);
  UnderlyingInstrument_34.insert(UnderlyingInstrRegistry_34.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_34("LOCALMKTDATE_1103196965");
  msg.set(UnderlyingIssueDate_34);
  UnderlyingInstrument_34.insert(UnderlyingIssueDate_34.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_34("STRING_2126549820");
  msg.set(UnderlyingIssuer_34);
  UnderlyingInstrument_34.insert(UnderlyingIssuer_34.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_34("STRING_1373276931");
  msg.set(UnderlyingLocaleOfIssue_34);
  UnderlyingInstrument_34.insert(UnderlyingLocaleOfIssue_34.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_34("LOCALMKTDATE_1362067542");
  msg.set(UnderlyingMaturityDate_34);
  UnderlyingInstrument_34.insert(UnderlyingMaturityDate_34.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_34("MONTHYEAR_1189735512");
  msg.set(UnderlyingMaturityMonthYear_34);
  UnderlyingInstrument_34.insert(UnderlyingMaturityMonthYear_34.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_34("TZTIMEONLY_60936037");
  msg.set(UnderlyingMaturityTime_34);
  UnderlyingInstrument_34.insert(UnderlyingMaturityTime_34.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_34;
  UnderlyingNotionalPercentageOutstanding_34.setString("39.060000");
  msg.set(UnderlyingNotionalPercentageOutstanding_34);
  UnderlyingInstrument_34.insert(UnderlyingNotionalPercentageOutstanding_34.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_34('6');
  msg.set(UnderlyingOptAttribute_34);
  UnderlyingInstrument_34.insert(UnderlyingOptAttribute_34.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_34;
  UnderlyingOriginalNotionalPercentageOutstanding_34.setString("62.460000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_34);
  UnderlyingInstrument_34.insert(UnderlyingOriginalNotionalPercentageOutstanding_34.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_34("STRING_1163283951");
  msg.set(UnderlyingPriceUnitOfMeasure_34);
  UnderlyingInstrument_34.insert(UnderlyingPriceUnitOfMeasure_34.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_34;
  UnderlyingPriceUnitOfMeasureQty_34.setString("14253351");
  msg.set(UnderlyingPriceUnitOfMeasureQty_34);
  UnderlyingInstrument_34.insert(UnderlyingPriceUnitOfMeasureQty_34.getString());
  FIX::UnderlyingProduct UnderlyingProduct_34(1444089311);
  msg.set(UnderlyingProduct_34);
  UnderlyingInstrument_34.insert(UnderlyingProduct_34.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_34(675668387);
  msg.set(UnderlyingPutOrCall_34);
  UnderlyingInstrument_34.insert(UnderlyingPutOrCall_34.getString());
  FIX::UnderlyingPx UnderlyingPx_34;
  UnderlyingPx_34.setString("16501418");
  msg.set(UnderlyingPx_34);
  UnderlyingInstrument_34.insert(UnderlyingPx_34.getString());
  FIX::UnderlyingQty UnderlyingQty_34;
  UnderlyingQty_34.setString("10867569");
  msg.set(UnderlyingQty_34);
  UnderlyingInstrument_34.insert(UnderlyingQty_34.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_34("LOCALMKTDATE_724655272");
  msg.set(UnderlyingRedemptionDate_34);
  UnderlyingInstrument_34.insert(UnderlyingRedemptionDate_34.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_34("STRING_1965362901");
  msg.set(UnderlyingRepoCollateralSecurityType_34);
  UnderlyingInstrument_34.insert(UnderlyingRepoCollateralSecurityType_34.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_34;
  UnderlyingRepurchaseRate_34.setString("73.350000");
  msg.set(UnderlyingRepurchaseRate_34);
  UnderlyingInstrument_34.insert(UnderlyingRepurchaseRate_34.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_34(247938950);
  msg.set(UnderlyingRepurchaseTerm_34);
  UnderlyingInstrument_34.insert(UnderlyingRepurchaseTerm_34.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_34("STRING_1570982986");
  msg.set(UnderlyingRestructuringType_34);
  UnderlyingInstrument_34.insert(UnderlyingRestructuringType_34.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_34("STRING_624967120");
  msg.set(UnderlyingSecurityDesc_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityDesc_34.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_34("EXCHANGE_1066850194");
  msg.set(UnderlyingSecurityExchange_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityExchange_34.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_34("STRING_617934061");
  msg.set(UnderlyingSecurityID_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityID_34.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_34("STRING_1228852495");
  msg.set(UnderlyingSecurityIDSource_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityIDSource_34.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_34("STRING_535360031");
  msg.set(UnderlyingSecuritySubType_34);
  UnderlyingInstrument_34.insert(UnderlyingSecuritySubType_34.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_34("STRING_1381497131");
  msg.set(UnderlyingSecurityType_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityType_34.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_34("STRING_153189321");
  msg.set(UnderlyingSeniority_34);
  UnderlyingInstrument_34.insert(UnderlyingSeniority_34.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_34("STRING_937510869");
  msg.set(UnderlyingSettlMethod_34);
  UnderlyingInstrument_34.insert(UnderlyingSettlMethod_34.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_34(4);
  msg.set(UnderlyingSettlementType_34);
  UnderlyingInstrument_34.insert(UnderlyingSettlementType_34.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_34;
  UnderlyingStartValue_34.setString("1637519");
  msg.set(UnderlyingStartValue_34);
  UnderlyingInstrument_34.insert(UnderlyingStartValue_34.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_34("STRING_1358419857");
  msg.set(UnderlyingStateOrProvinceOfIssue_34);
  UnderlyingInstrument_34.insert(UnderlyingStateOrProvinceOfIssue_34.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_34("GBP");
  msg.set(UnderlyingStrikeCurrency_34);
  UnderlyingInstrument_34.insert(UnderlyingStrikeCurrency_34.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_34;
  UnderlyingStrikePrice_34.setString("5842131");
  msg.set(UnderlyingStrikePrice_34);
  UnderlyingInstrument_34.insert(UnderlyingStrikePrice_34.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_34("STRING_745529630");
  msg.set(UnderlyingSymbol_34);
  UnderlyingInstrument_34.insert(UnderlyingSymbol_34.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_34("STRING_1332553622");
  msg.set(UnderlyingSymbolSfx_34);
  UnderlyingInstrument_34.insert(UnderlyingSymbolSfx_34.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_34("STRING_645149178");
  msg.set(UnderlyingTimeUnit_34);
  UnderlyingInstrument_34.insert(UnderlyingTimeUnit_34.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_34("STRING_804633536");
  msg.set(UnderlyingUnitOfMeasure_34);
  UnderlyingInstrument_34.insert(UnderlyingUnitOfMeasure_34.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_34;
  UnderlyingUnitOfMeasureQty_34.setString("19658573");
  msg.set(UnderlyingUnitOfMeasureQty_34);
  UnderlyingInstrument_34.insert(UnderlyingUnitOfMeasureQty_34.getString());
  all_values.push_back(UnderlyingInstrument_34);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_70;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_70("STRING_1967917488");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_70);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_70.insert(UnderlyingSecurityAltID_70.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_70("STRING_1243708834");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_70);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_70.insert(UnderlyingSecurityAltIDSource_70.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_70);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_71;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_71("STRING_844591088");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_71);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_71.insert(UnderlyingSecurityAltID_71.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_71("STRING_496102227");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_71);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_71.insert(UnderlyingSecurityAltIDSource_71.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_71);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_72;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_72("STRING_746367018");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_72);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_72.insert(UnderlyingSecurityAltID_72.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_72("STRING_1931348032");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_72);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_72.insert(UnderlyingSecurityAltIDSource_72.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_72);

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_61;
    FIX::UnderlyingStipType UnderlyingStipType_61("STRING_564246272");
    noUnderlyingStips_0_0.set(UnderlyingStipType_61);
    UnderlyingStipulations_NoUnderlyingStips_61.insert(UnderlyingStipType_61.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_61("STRING_1189961719");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_61);
    UnderlyingStipulations_NoUnderlyingStips_61.insert(UnderlyingStipValue_61.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_61);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_62;
    FIX::UnderlyingStipType UnderlyingStipType_62("STRING_1468696449");
    noUnderlyingStips_0_1.set(UnderlyingStipType_62);
    UnderlyingStipulations_NoUnderlyingStips_62.insert(UnderlyingStipType_62.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_62("STRING_2135229258");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_62);
    UnderlyingStipulations_NoUnderlyingStips_62.insert(UnderlyingStipValue_62.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_62);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_69;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_69("STRING_388062996");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_69);
    UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyID_69.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_69('6');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_69);
    UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyIDSource_69.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_69(896297686);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_69);
    UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyRole_69.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_69);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_139("STRING_1987176803");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_139);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139.insert(UnderlyingInstrumentPartySubID_139.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_139(1049487007);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_139);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139.insert(UnderlyingInstrumentPartySubIDType_139.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_140("STRING_1860933896");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_140);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140.insert(UnderlyingInstrumentPartySubID_140.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_140(267441925);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_140);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140.insert(UnderlyingInstrumentPartySubIDType_140.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_141("STRING_1213238945");
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubID_141);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141.insert(UnderlyingInstrumentPartySubID_141.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_141(1071870106);
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubIDType_141);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141.insert(UnderlyingInstrumentPartySubIDType_141.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_141);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_70;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_70("STRING_1798387661");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_70);
    UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyID_70.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_70('1');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_70);
    UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyIDSource_70.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_70(1656083247);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_70);
    UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyRole_70.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_70);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_142("STRING_541127029");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_142);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142.insert(UnderlyingInstrumentPartySubID_142.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_142(153748777);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_142);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142.insert(UnderlyingInstrumentPartySubIDType_142.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_71;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_71("STRING_1201067180");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_71);
    UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyID_71.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_71('3');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_71);
    UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyIDSource_71.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_71(1701734202);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_71);
    UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyRole_71.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_71);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_143("STRING_1603209534");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_143);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143.insert(UnderlyingInstrumentPartySubID_143.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_143(398841643);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_143);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143.insert(UnderlyingInstrumentPartySubIDType_143.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
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
