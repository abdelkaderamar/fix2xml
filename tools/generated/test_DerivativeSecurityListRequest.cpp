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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DerivativeSecurityListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> DerivativeSecurityListRequest_0;
  FIX::Currency Currency_16("CHF");
  msg.set(Currency_16);
  DerivativeSecurityListRequest_0.insert(Currency_16.getString());
  FIX::EncodedText EncodedText_30("DATA_1269428364");
  msg.set(EncodedText_30);
  DerivativeSecurityListRequest_0.insert(EncodedText_30.getString());
  FIX::EncodedTextLen EncodedTextLen_30(1517074069);
  msg.set(EncodedTextLen_30);
  DerivativeSecurityListRequest_0.insert(EncodedTextLen_30.getString());
  FIX::MarketID MarketID_3("EXCHANGE_1335156848");
  msg.set(MarketID_3);
  DerivativeSecurityListRequest_0.insert(MarketID_3.getString());
  FIX::MarketSegmentID MarketSegmentID_3("STRING_1299683731");
  msg.set(MarketSegmentID_3);
  DerivativeSecurityListRequest_0.insert(MarketSegmentID_3.getString());
  FIX::SecurityListRequestType SecurityListRequestType_0(3);
  msg.set(SecurityListRequestType_0);
  DerivativeSecurityListRequest_0.insert(SecurityListRequestType_0.getString());
  FIX::SecurityReqID SecurityReqID_1("STRING_1382907078");
  msg.set(SecurityReqID_1);
  DerivativeSecurityListRequest_0.insert(SecurityReqID_1.getString());
  FIX::SecuritySubType SecuritySubType_19("STRING_1064132522");
  msg.set(SecuritySubType_19);
  DerivativeSecurityListRequest_0.insert(SecuritySubType_19.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_1('1');
  msg.set(SubscriptionRequestType_1);
  DerivativeSecurityListRequest_0.insert(SubscriptionRequestType_1.getString());
  FIX::Text Text_30("STRING_605282808");
  msg.set(Text_30);
  DerivativeSecurityListRequest_0.insert(Text_30.getString());
  FIX::TradingSessionID TradingSessionID_21("STRING_1");
  msg.set(TradingSessionID_21);
  DerivativeSecurityListRequest_0.insert(TradingSessionID_21.getString());
  FIX::TradingSessionSubID TradingSessionSubID_21("STRING_1");
  msg.set(TradingSessionSubID_21);
  DerivativeSecurityListRequest_0.insert(TradingSessionSubID_21.getString());
  all_values.push_back(DerivativeSecurityListRequest_0);

  // DerivativeInstrument
  multiset<string> DerivativeInstrument_1;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_1(false);
  msg.set(DerivFlexProductEligibilityIndicator_1);
  DerivativeInstrument_1.insert(DerivFlexProductEligibilityIndicator_1.getString());
  FIX::DerivativeCFICode DerivativeCFICode_1("STRING_1850846673");
  msg.set(DerivativeCFICode_1);
  DerivativeInstrument_1.insert(DerivativeCFICode_1.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_1;
  DerivativeCapPrice_1.setString("7077711");
  msg.set(DerivativeCapPrice_1);
  DerivativeInstrument_1.insert(DerivativeCapPrice_1.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_1;
  DerivativeContractMultiplier_1.setString("12134218");
  msg.set(DerivativeContractMultiplier_1);
  DerivativeInstrument_1.insert(DerivativeContractMultiplier_1.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_1(1901142724);
  msg.set(DerivativeContractMultiplierUnit_1);
  DerivativeInstrument_1.insert(DerivativeContractMultiplierUnit_1.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_1("MONTHYEAR_487134225");
  msg.set(DerivativeContractSettlMonth_1);
  DerivativeInstrument_1.insert(DerivativeContractSettlMonth_1.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_1("COUNTRY_1414448219");
  msg.set(DerivativeCountryOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeCountryOfIssue_1.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_1("DATA_1576645587");
  msg.set(DerivativeEncodedIssuer_1);
  DerivativeInstrument_1.insert(DerivativeEncodedIssuer_1.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_1(1553848606);
  msg.set(DerivativeEncodedIssuerLen_1);
  DerivativeInstrument_1.insert(DerivativeEncodedIssuerLen_1.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_1("DATA_463232384");
  msg.set(DerivativeEncodedSecurityDesc_1);
  DerivativeInstrument_1.insert(DerivativeEncodedSecurityDesc_1.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_1(1396509610);
  msg.set(DerivativeEncodedSecurityDescLen_1);
  DerivativeInstrument_1.insert(DerivativeEncodedSecurityDescLen_1.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_1('1');
  msg.set(DerivativeExerciseStyle_1);
  DerivativeInstrument_1.insert(DerivativeExerciseStyle_1.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_1;
  DerivativeFloorPrice_1.setString("45413");
  msg.set(DerivativeFloorPrice_1);
  DerivativeInstrument_1.insert(DerivativeFloorPrice_1.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_1(1952119332);
  msg.set(DerivativeFlowScheduleType_1);
  DerivativeInstrument_1.insert(DerivativeFlowScheduleType_1.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_1("STRING_136102359");
  msg.set(DerivativeInstrRegistry_1);
  DerivativeInstrument_1.insert(DerivativeInstrRegistry_1.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_1('1');
  msg.set(DerivativeInstrmtAssignmentMethod_1);
  DerivativeInstrument_1.insert(DerivativeInstrmtAssignmentMethod_1.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_1("LOCALMKTDATE_346125966");
  msg.set(DerivativeIssueDate_1);
  DerivativeInstrument_1.insert(DerivativeIssueDate_1.getString());
  FIX::DerivativeIssuer DerivativeIssuer_1("STRING_2032832249");
  msg.set(DerivativeIssuer_1);
  DerivativeInstrument_1.insert(DerivativeIssuer_1.getString());
  FIX::DerivativeListMethod DerivativeListMethod_1(905760541);
  msg.set(DerivativeListMethod_1);
  DerivativeInstrument_1.insert(DerivativeListMethod_1.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_1("STRING_1432393");
  msg.set(DerivativeLocaleOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeLocaleOfIssue_1.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_1("LOCALMKTDATE_1154776965");
  msg.set(DerivativeMaturityDate_1);
  DerivativeInstrument_1.insert(DerivativeMaturityDate_1.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_1("MONTHYEAR_275350962");
  msg.set(DerivativeMaturityMonthYear_1);
  DerivativeInstrument_1.insert(DerivativeMaturityMonthYear_1.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_1("TZTIMEONLY_1336589242");
  msg.set(DerivativeMaturityTime_1);
  DerivativeInstrument_1.insert(DerivativeMaturityTime_1.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_1;
  DerivativeMinPriceIncrement_1.setString("3069770");
  msg.set(DerivativeMinPriceIncrement_1);
  DerivativeInstrument_1.insert(DerivativeMinPriceIncrement_1.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_1;
  DerivativeMinPriceIncrementAmount_1.setString("7601503");
  msg.set(DerivativeMinPriceIncrementAmount_1);
  DerivativeInstrument_1.insert(DerivativeMinPriceIncrementAmount_1.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_1(572012672);
  msg.set(DerivativeNTPositionLimit_1);
  DerivativeInstrument_1.insert(DerivativeNTPositionLimit_1.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_1('1');
  msg.set(DerivativeOptAttribute_1);
  DerivativeInstrument_1.insert(DerivativeOptAttribute_1.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_1;
  DerivativeOptPayAmount_1.setString("5448714");
  msg.set(DerivativeOptPayAmount_1);
  DerivativeInstrument_1.insert(DerivativeOptPayAmount_1.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_1(1177295480);
  msg.set(DerivativePositionLimit_1);
  DerivativeInstrument_1.insert(DerivativePositionLimit_1.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_1("STRING_703226535");
  msg.set(DerivativePriceQuoteMethod_1);
  DerivativeInstrument_1.insert(DerivativePriceQuoteMethod_1.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_1("STRING_1984457658");
  msg.set(DerivativePriceUnitOfMeasure_1);
  DerivativeInstrument_1.insert(DerivativePriceUnitOfMeasure_1.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_1;
  DerivativePriceUnitOfMeasureQty_1.setString("18567803");
  msg.set(DerivativePriceUnitOfMeasureQty_1);
  DerivativeInstrument_1.insert(DerivativePriceUnitOfMeasureQty_1.getString());
  FIX::DerivativeProduct DerivativeProduct_1(406589560);
  msg.set(DerivativeProduct_1);
  DerivativeInstrument_1.insert(DerivativeProduct_1.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_1("STRING_544745123");
  msg.set(DerivativeProductComplex_1);
  DerivativeInstrument_1.insert(DerivativeProductComplex_1.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_1(922718577);
  msg.set(DerivativePutOrCall_1);
  DerivativeInstrument_1.insert(DerivativePutOrCall_1.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_1("STRING_160248637");
  msg.set(DerivativeSecurityDesc_1);
  DerivativeInstrument_1.insert(DerivativeSecurityDesc_1.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_1("EXCHANGE_1031879349");
  msg.set(DerivativeSecurityExchange_1);
  DerivativeInstrument_1.insert(DerivativeSecurityExchange_1.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_1("STRING_189683148");
  msg.set(DerivativeSecurityGroup_1);
  DerivativeInstrument_1.insert(DerivativeSecurityGroup_1.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_1("STRING_1736894224");
  msg.set(DerivativeSecurityID_1);
  DerivativeInstrument_1.insert(DerivativeSecurityID_1.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_1("STRING_438244307");
  msg.set(DerivativeSecurityIDSource_1);
  DerivativeInstrument_1.insert(DerivativeSecurityIDSource_1.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_1("STRING_652915532");
  msg.set(DerivativeSecurityStatus_1);
  DerivativeInstrument_1.insert(DerivativeSecurityStatus_1.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_1("STRING_985920187");
  msg.set(DerivativeSecuritySubType_1);
  DerivativeInstrument_1.insert(DerivativeSecuritySubType_1.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_1("STRING_1920806742");
  msg.set(DerivativeSecurityType_1);
  DerivativeInstrument_1.insert(DerivativeSecurityType_1.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_1('6');
  msg.set(DerivativeSettlMethod_1);
  DerivativeInstrument_1.insert(DerivativeSettlMethod_1.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_1("STRING_790555871");
  msg.set(DerivativeSettleOnOpenFlag_1);
  DerivativeInstrument_1.insert(DerivativeSettleOnOpenFlag_1.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_1("STRING_2056909101");
  msg.set(DerivativeStateOrProvinceOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeStateOrProvinceOfIssue_1.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_1("CAN");
  msg.set(DerivativeStrikeCurrency_1);
  DerivativeInstrument_1.insert(DerivativeStrikeCurrency_1.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_1;
  DerivativeStrikeMultiplier_1.setString("19422577");
  msg.set(DerivativeStrikeMultiplier_1);
  DerivativeInstrument_1.insert(DerivativeStrikeMultiplier_1.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_1;
  DerivativeStrikePrice_1.setString("7756577");
  msg.set(DerivativeStrikePrice_1);
  DerivativeInstrument_1.insert(DerivativeStrikePrice_1.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_1;
  DerivativeStrikeValue_1.setString("11381142");
  msg.set(DerivativeStrikeValue_1);
  DerivativeInstrument_1.insert(DerivativeStrikeValue_1.getString());
  FIX::DerivativeSymbol DerivativeSymbol_1("STRING_949551020");
  msg.set(DerivativeSymbol_1);
  DerivativeInstrument_1.insert(DerivativeSymbol_1.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_1("STRING_1051008732");
  msg.set(DerivativeSymbolSfx_1);
  DerivativeInstrument_1.insert(DerivativeSymbolSfx_1.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_1("STRING_327219825");
  msg.set(DerivativeTimeUnit_1);
  DerivativeInstrument_1.insert(DerivativeTimeUnit_1.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_1("STRING_1256528068");
  msg.set(DerivativeUnitOfMeasure_1);
  DerivativeInstrument_1.insert(DerivativeUnitOfMeasure_1.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_1;
  DerivativeUnitOfMeasureQty_1.setString("18111591");
  msg.set(DerivativeUnitOfMeasureQty_1);
  DerivativeInstrument_1.insert(DerivativeUnitOfMeasureQty_1.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_1("STRING_899232497");
  msg.set(DerivativeValuationMethod_1);
  DerivativeInstrument_1.insert(DerivativeValuationMethod_1.getString());
  all_values.push_back(DerivativeInstrument_1);

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_1;
    FIX::DerivativeEventDate DerivativeEventDate_1("LOCALMKTDATE_208546860");
    noDerivativeEvents_0_0.set(DerivativeEventDate_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventDate_1.getString());
    FIX::DerivativeEventPx DerivativeEventPx_1;
    DerivativeEventPx_1.setString("20765279");
    noDerivativeEvents_0_0.set(DerivativeEventPx_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventPx_1.getString());
    FIX::DerivativeEventText DerivativeEventText_1("STRING_1183380526");
    noDerivativeEvents_0_0.set(DerivativeEventText_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventText_1.getString());
    FIX::DerivativeEventTime DerivativeEventTime_1(FIX::UTCTIMESTAMP(2, 26, 34, 11, 42013));
    noDerivativeEvents_0_0.set(DerivativeEventTime_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventTime_1.getString());
    FIX::DerivativeEventType DerivativeEventType_1(750742791);
    noDerivativeEvents_0_0.set(DerivativeEventType_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventType_1.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_1);

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_2;
    FIX::DerivativeEventDate DerivativeEventDate_2("LOCALMKTDATE_1339629300");
    noDerivativeEvents_0_1.set(DerivativeEventDate_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventDate_2.getString());
    FIX::DerivativeEventPx DerivativeEventPx_2;
    DerivativeEventPx_2.setString("20603896");
    noDerivativeEvents_0_1.set(DerivativeEventPx_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventPx_2.getString());
    FIX::DerivativeEventText DerivativeEventText_2("STRING_1403658323");
    noDerivativeEvents_0_1.set(DerivativeEventText_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventText_2.getString());
    FIX::DerivativeEventTime DerivativeEventTime_2(FIX::UTCTIMESTAMP(17, 21, 10, 18, 42003));
    noDerivativeEvents_0_1.set(DerivativeEventTime_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventTime_2.getString());
    FIX::DerivativeEventType DerivativeEventType_2(1537912253);
    noDerivativeEvents_0_1.set(DerivativeEventType_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventType_2.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_2);

    msg.addGroup(noDerivativeEvents_0_1);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_2;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_2("STRING_1095934130");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyID_2.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_2("STRING_339979625");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyIDSource_2.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_2(1610195246);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyRole_2.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_5("STRING_1596507693");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_5);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5.insert(DerivativeInstrumentPartySubID_5.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_5(1273870701);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_5);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5.insert(DerivativeInstrumentPartySubIDType_5.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_6("STRING_174902804");
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubID_6);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6.insert(DerivativeInstrumentPartySubID_6.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_6(2076661684);
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubIDType_6);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6.insert(DerivativeInstrumentPartySubIDType_6.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_2;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_7("STRING_1482417562");
      noDerivativeInstrumentPartySubIDs_0_1_2.set(DerivativeInstrumentPartySubID_7);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7.insert(DerivativeInstrumentPartySubID_7.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_7(103947133);
      noDerivativeInstrumentPartySubIDs_0_1_2.set(DerivativeInstrumentPartySubIDType_7);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7.insert(DerivativeInstrumentPartySubIDType_7.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_3;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_3("STRING_1112558562");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyID_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyID_3.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_3("STRING_1527938433");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyIDSource_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyIDSource_3.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_3(1889771847);
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyRole_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyRole_3.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_8("STRING_2118204427");
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubID_8);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8.insert(DerivativeInstrumentPartySubID_8.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_8(303347842);
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubIDType_8);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8.insert(DerivativeInstrumentPartySubIDType_8.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_9("STRING_157780076");
      noDerivativeInstrumentPartySubIDs_1_1_1.set(DerivativeInstrumentPartySubID_9);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9.insert(DerivativeInstrumentPartySubID_9.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_9(1592866123);
      noDerivativeInstrumentPartySubIDs_1_1_1.set(DerivativeInstrumentPartySubIDType_9);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9.insert(DerivativeInstrumentPartySubIDType_9.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_1("STRING_1497409376");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_1);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1.insert(DerivativeSecurityAltID_1.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_1("STRING_1505772125");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_1);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1.insert(DerivativeSecurityAltIDSource_1.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1);

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_2("STRING_310265308");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltID_2);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2.insert(DerivativeSecurityAltID_2.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_2("STRING_1675475215");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltIDSource_2);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2.insert(DerivativeSecurityAltIDSource_2.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2);

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_2;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_3("DATA_1192001222");
  msg.set(DerivativeSecurityXML_3);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_1(223896822);
  msg.set(DerivativeSecurityXMLLen_1);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_1("STRING_496613277");
  msg.set(DerivativeSecurityXMLSchema_1);
  DerivativeSecurityXML_2.insert(DerivativeSecurityXMLSchema_1.getString());
  all_values.push_back(DerivativeSecurityXML_2);

  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_27;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_27("DATA_787655773");
  msg.set(EncodedUnderlyingIssuer_27);
  UnderlyingInstrument_27.insert(EncodedUnderlyingIssuer_27.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_27(7425565);
  msg.set(EncodedUnderlyingIssuerLen_27);
  UnderlyingInstrument_27.insert(EncodedUnderlyingIssuerLen_27.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_27("DATA_454433177");
  msg.set(EncodedUnderlyingSecurityDesc_27);
  UnderlyingInstrument_27.insert(EncodedUnderlyingSecurityDesc_27.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_27(178084378);
  msg.set(EncodedUnderlyingSecurityDescLen_27);
  UnderlyingInstrument_27.insert(EncodedUnderlyingSecurityDescLen_27.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_27;
  UnderlyingAdjustedQuantity_27.setString("5666120");
  msg.set(UnderlyingAdjustedQuantity_27);
  UnderlyingInstrument_27.insert(UnderlyingAdjustedQuantity_27.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_27;
  UnderlyingAllocationPercent_27.setString("73.070000");
  msg.set(UnderlyingAllocationPercent_27);
  UnderlyingInstrument_27.insert(UnderlyingAllocationPercent_27.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_27;
  UnderlyingAttachmentPoint_27.setString("40.030000");
  msg.set(UnderlyingAttachmentPoint_27);
  UnderlyingInstrument_27.insert(UnderlyingAttachmentPoint_27.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_27("STRING_29323676");
  msg.set(UnderlyingCFICode_27);
  UnderlyingInstrument_27.insert(UnderlyingCFICode_27.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_27("STRING_826037615");
  msg.set(UnderlyingCPProgram_27);
  UnderlyingInstrument_27.insert(UnderlyingCPProgram_27.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_27("STRING_2114571696");
  msg.set(UnderlyingCPRegType_27);
  UnderlyingInstrument_27.insert(UnderlyingCPRegType_27.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_27;
  UnderlyingCapValue_27.setString("13031943");
  msg.set(UnderlyingCapValue_27);
  UnderlyingInstrument_27.insert(UnderlyingCapValue_27.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_27;
  UnderlyingCashAmount_27.setString("10009404");
  msg.set(UnderlyingCashAmount_27);
  UnderlyingInstrument_27.insert(UnderlyingCashAmount_27.getString());
  FIX::UnderlyingCashType UnderlyingCashType_27("STRING_DIFF");
  msg.set(UnderlyingCashType_27);
  UnderlyingInstrument_27.insert(UnderlyingCashType_27.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_27;
  UnderlyingContractMultiplier_27.setString("6381282");
  msg.set(UnderlyingContractMultiplier_27);
  UnderlyingInstrument_27.insert(UnderlyingContractMultiplier_27.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_27(1104887553);
  msg.set(UnderlyingContractMultiplierUnit_27);
  UnderlyingInstrument_27.insert(UnderlyingContractMultiplierUnit_27.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_27("COUNTRY_1008824647");
  msg.set(UnderlyingCountryOfIssue_27);
  UnderlyingInstrument_27.insert(UnderlyingCountryOfIssue_27.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_27("LOCALMKTDATE_18583077");
  msg.set(UnderlyingCouponPaymentDate_27);
  UnderlyingInstrument_27.insert(UnderlyingCouponPaymentDate_27.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_27;
  UnderlyingCouponRate_27.setString("57.520000");
  msg.set(UnderlyingCouponRate_27);
  UnderlyingInstrument_27.insert(UnderlyingCouponRate_27.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_27("STRING_1563869648");
  msg.set(UnderlyingCreditRating_27);
  UnderlyingInstrument_27.insert(UnderlyingCreditRating_27.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_27("CHF");
  msg.set(UnderlyingCurrency_27);
  UnderlyingInstrument_27.insert(UnderlyingCurrency_27.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_27;
  UnderlyingCurrentValue_27.setString("17216497");
  msg.set(UnderlyingCurrentValue_27);
  UnderlyingInstrument_27.insert(UnderlyingCurrentValue_27.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_27;
  UnderlyingDetachmentPoint_27.setString("99.790000");
  msg.set(UnderlyingDetachmentPoint_27);
  UnderlyingInstrument_27.insert(UnderlyingDetachmentPoint_27.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_27;
  UnderlyingDirtyPrice_27.setString("571305");
  msg.set(UnderlyingDirtyPrice_27);
  UnderlyingInstrument_27.insert(UnderlyingDirtyPrice_27.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_27;
  UnderlyingEndPrice_27.setString("10715754");
  msg.set(UnderlyingEndPrice_27);
  UnderlyingInstrument_27.insert(UnderlyingEndPrice_27.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_27;
  UnderlyingEndValue_27.setString("9404584");
  msg.set(UnderlyingEndValue_27);
  UnderlyingInstrument_27.insert(UnderlyingEndValue_27.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_27(367395889);
  msg.set(UnderlyingExerciseStyle_27);
  UnderlyingInstrument_27.insert(UnderlyingExerciseStyle_27.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_27;
  UnderlyingFXRate_27.setString("5995670");
  msg.set(UnderlyingFXRate_27);
  UnderlyingInstrument_27.insert(UnderlyingFXRate_27.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_27('M');
  msg.set(UnderlyingFXRateCalc_27);
  UnderlyingInstrument_27.insert(UnderlyingFXRateCalc_27.getString());
  FIX::UnderlyingFactor UnderlyingFactor_27;
  UnderlyingFactor_27.setString("5912927");
  msg.set(UnderlyingFactor_27);
  UnderlyingInstrument_27.insert(UnderlyingFactor_27.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_27(1096180298);
  msg.set(UnderlyingFlowScheduleType_27);
  UnderlyingInstrument_27.insert(UnderlyingFlowScheduleType_27.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_27("STRING_772631804");
  msg.set(UnderlyingInstrRegistry_27);
  UnderlyingInstrument_27.insert(UnderlyingInstrRegistry_27.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_27("LOCALMKTDATE_598718276");
  msg.set(UnderlyingIssueDate_27);
  UnderlyingInstrument_27.insert(UnderlyingIssueDate_27.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_27("STRING_1550613475");
  msg.set(UnderlyingIssuer_27);
  UnderlyingInstrument_27.insert(UnderlyingIssuer_27.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_27("STRING_950716182");
  msg.set(UnderlyingLocaleOfIssue_27);
  UnderlyingInstrument_27.insert(UnderlyingLocaleOfIssue_27.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_27("LOCALMKTDATE_1165330354");
  msg.set(UnderlyingMaturityDate_27);
  UnderlyingInstrument_27.insert(UnderlyingMaturityDate_27.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_27("MONTHYEAR_953497135");
  msg.set(UnderlyingMaturityMonthYear_27);
  UnderlyingInstrument_27.insert(UnderlyingMaturityMonthYear_27.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_27("TZTIMEONLY_1468780185");
  msg.set(UnderlyingMaturityTime_27);
  UnderlyingInstrument_27.insert(UnderlyingMaturityTime_27.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_27;
  UnderlyingNotionalPercentageOutstanding_27.setString("40.310000");
  msg.set(UnderlyingNotionalPercentageOutstanding_27);
  UnderlyingInstrument_27.insert(UnderlyingNotionalPercentageOutstanding_27.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_27('1');
  msg.set(UnderlyingOptAttribute_27);
  UnderlyingInstrument_27.insert(UnderlyingOptAttribute_27.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_27;
  UnderlyingOriginalNotionalPercentageOutstanding_27.setString("82.340000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_27);
  UnderlyingInstrument_27.insert(UnderlyingOriginalNotionalPercentageOutstanding_27.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_27("STRING_350364761");
  msg.set(UnderlyingPriceUnitOfMeasure_27);
  UnderlyingInstrument_27.insert(UnderlyingPriceUnitOfMeasure_27.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_27;
  UnderlyingPriceUnitOfMeasureQty_27.setString("6329915");
  msg.set(UnderlyingPriceUnitOfMeasureQty_27);
  UnderlyingInstrument_27.insert(UnderlyingPriceUnitOfMeasureQty_27.getString());
  FIX::UnderlyingProduct UnderlyingProduct_27(1332134319);
  msg.set(UnderlyingProduct_27);
  UnderlyingInstrument_27.insert(UnderlyingProduct_27.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_27(988493053);
  msg.set(UnderlyingPutOrCall_27);
  UnderlyingInstrument_27.insert(UnderlyingPutOrCall_27.getString());
  FIX::UnderlyingPx UnderlyingPx_27;
  UnderlyingPx_27.setString("17378790");
  msg.set(UnderlyingPx_27);
  UnderlyingInstrument_27.insert(UnderlyingPx_27.getString());
  FIX::UnderlyingQty UnderlyingQty_27;
  UnderlyingQty_27.setString("1934753");
  msg.set(UnderlyingQty_27);
  UnderlyingInstrument_27.insert(UnderlyingQty_27.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_27("LOCALMKTDATE_1007076130");
  msg.set(UnderlyingRedemptionDate_27);
  UnderlyingInstrument_27.insert(UnderlyingRedemptionDate_27.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_27("STRING_437571179");
  msg.set(UnderlyingRepoCollateralSecurityType_27);
  UnderlyingInstrument_27.insert(UnderlyingRepoCollateralSecurityType_27.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_27;
  UnderlyingRepurchaseRate_27.setString("49.670000");
  msg.set(UnderlyingRepurchaseRate_27);
  UnderlyingInstrument_27.insert(UnderlyingRepurchaseRate_27.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_27(996379986);
  msg.set(UnderlyingRepurchaseTerm_27);
  UnderlyingInstrument_27.insert(UnderlyingRepurchaseTerm_27.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_27("STRING_1588094774");
  msg.set(UnderlyingRestructuringType_27);
  UnderlyingInstrument_27.insert(UnderlyingRestructuringType_27.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_27("STRING_1331511044");
  msg.set(UnderlyingSecurityDesc_27);
  UnderlyingInstrument_27.insert(UnderlyingSecurityDesc_27.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_27("EXCHANGE_431066318");
  msg.set(UnderlyingSecurityExchange_27);
  UnderlyingInstrument_27.insert(UnderlyingSecurityExchange_27.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_27("STRING_1645225354");
  msg.set(UnderlyingSecurityID_27);
  UnderlyingInstrument_27.insert(UnderlyingSecurityID_27.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_27("STRING_255602849");
  msg.set(UnderlyingSecurityIDSource_27);
  UnderlyingInstrument_27.insert(UnderlyingSecurityIDSource_27.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_27("STRING_1371524775");
  msg.set(UnderlyingSecuritySubType_27);
  UnderlyingInstrument_27.insert(UnderlyingSecuritySubType_27.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_27("STRING_2012621243");
  msg.set(UnderlyingSecurityType_27);
  UnderlyingInstrument_27.insert(UnderlyingSecurityType_27.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_27("STRING_855169870");
  msg.set(UnderlyingSeniority_27);
  UnderlyingInstrument_27.insert(UnderlyingSeniority_27.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_27("STRING_1356500806");
  msg.set(UnderlyingSettlMethod_27);
  UnderlyingInstrument_27.insert(UnderlyingSettlMethod_27.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_27(4);
  msg.set(UnderlyingSettlementType_27);
  UnderlyingInstrument_27.insert(UnderlyingSettlementType_27.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_27;
  UnderlyingStartValue_27.setString("19513501");
  msg.set(UnderlyingStartValue_27);
  UnderlyingInstrument_27.insert(UnderlyingStartValue_27.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_27("STRING_2129132611");
  msg.set(UnderlyingStateOrProvinceOfIssue_27);
  UnderlyingInstrument_27.insert(UnderlyingStateOrProvinceOfIssue_27.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_27("USD");
  msg.set(UnderlyingStrikeCurrency_27);
  UnderlyingInstrument_27.insert(UnderlyingStrikeCurrency_27.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_27;
  UnderlyingStrikePrice_27.setString("9323651");
  msg.set(UnderlyingStrikePrice_27);
  UnderlyingInstrument_27.insert(UnderlyingStrikePrice_27.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_27("STRING_72995289");
  msg.set(UnderlyingSymbol_27);
  UnderlyingInstrument_27.insert(UnderlyingSymbol_27.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_27("STRING_160493483");
  msg.set(UnderlyingSymbolSfx_27);
  UnderlyingInstrument_27.insert(UnderlyingSymbolSfx_27.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_27("STRING_253661683");
  msg.set(UnderlyingTimeUnit_27);
  UnderlyingInstrument_27.insert(UnderlyingTimeUnit_27.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_27("STRING_1267649320");
  msg.set(UnderlyingUnitOfMeasure_27);
  UnderlyingInstrument_27.insert(UnderlyingUnitOfMeasure_27.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_27;
  UnderlyingUnitOfMeasureQty_27.setString("19400282");
  msg.set(UnderlyingUnitOfMeasureQty_27);
  UnderlyingInstrument_27.insert(UnderlyingUnitOfMeasureQty_27.getString());
  all_values.push_back(UnderlyingInstrument_27);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_52;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_52("STRING_1618014081");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_52);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_52.insert(UnderlyingSecurityAltID_52.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_52("STRING_425536107");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_52);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_52.insert(UnderlyingSecurityAltIDSource_52.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_52);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_51;
    FIX::UnderlyingStipType UnderlyingStipType_51("STRING_459023486");
    noUnderlyingStips_0_0.set(UnderlyingStipType_51);
    UnderlyingStipulations_NoUnderlyingStips_51.insert(UnderlyingStipType_51.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_51("STRING_15931533");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_51);
    UnderlyingStipulations_NoUnderlyingStips_51.insert(UnderlyingStipValue_51.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_51);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_52;
    FIX::UnderlyingStipType UnderlyingStipType_52("STRING_1067655906");
    noUnderlyingStips_0_1.set(UnderlyingStipType_52);
    UnderlyingStipulations_NoUnderlyingStips_52.insert(UnderlyingStipType_52.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_52("STRING_1466099616");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_52);
    UnderlyingStipulations_NoUnderlyingStips_52.insert(UnderlyingStipValue_52.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_52);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_50;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_50("STRING_677517225");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_50);
    UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyID_50.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_50('3');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_50);
    UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyIDSource_50.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_50(2041597486);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_50);
    UndlyInstrumentParties_NoUndlyInstrumentParties_50.insert(UnderlyingInstrumentPartyRole_50.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_50);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_94("STRING_746062272");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_94);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94.insert(UnderlyingInstrumentPartySubID_94.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_94(1539339193);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_94);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94.insert(UnderlyingInstrumentPartySubIDType_94.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_95("STRING_117147471");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_95);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95.insert(UnderlyingInstrumentPartySubID_95.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_95(2117587047);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_95);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95.insert(UnderlyingInstrumentPartySubIDType_95.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_96("STRING_1404476788");
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubID_96);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96.insert(UnderlyingInstrumentPartySubID_96.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_96(972317341);
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubIDType_96);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96.insert(UnderlyingInstrumentPartySubIDType_96.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_51;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_51("STRING_1326604206");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_51);
    UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyID_51.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_51('1');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_51);
    UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyIDSource_51.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_51(776183862);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_51);
    UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyRole_51.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_51);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_97("STRING_768572029");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_97);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97.insert(UnderlyingInstrumentPartySubID_97.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_97(2130663859);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_97);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97.insert(UnderlyingInstrumentPartySubIDType_97.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_98("STRING_93134666");
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubID_98);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98.insert(UnderlyingInstrumentPartySubID_98.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_98(841567318);
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubIDType_98);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98.insert(UnderlyingInstrumentPartySubIDType_98.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_99("STRING_143673694");
      noUndlyInstrumentPartySubIDs_1_1_2.set(UnderlyingInstrumentPartySubID_99);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99.insert(UnderlyingInstrumentPartySubID_99.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_99(346796349);
      noUndlyInstrumentPartySubIDs_1_1_2.set(UnderlyingInstrumentPartySubIDType_99);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99.insert(UnderlyingInstrumentPartySubIDType_99.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_52;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_52("STRING_2109216638");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_52);
    UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyID_52.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_52('2');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_52);
    UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyIDSource_52.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_52(2036326266);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_52);
    UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyRole_52.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_52);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_100("STRING_361754387");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_100);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100.insert(UnderlyingInstrumentPartySubID_100.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_100(763023206);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_100);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100.insert(UnderlyingInstrumentPartySubIDType_100.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100);

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
