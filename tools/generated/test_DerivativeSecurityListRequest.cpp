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
  FIX::Currency Currency_16("CAN");
  msg.set(Currency_16);
  DerivativeSecurityListRequest_0.insert(Currency_16.getString());
  FIX::EncodedText EncodedText_32("DATA_341249850");
  msg.set(EncodedText_32);
  DerivativeSecurityListRequest_0.insert(EncodedText_32.getString());
  FIX::EncodedTextLen EncodedTextLen_32(1150236864);
  msg.set(EncodedTextLen_32);
  DerivativeSecurityListRequest_0.insert(EncodedTextLen_32.getString());
  FIX::MarketID MarketID_2("EXCHANGE_2045030740");
  msg.set(MarketID_2);
  DerivativeSecurityListRequest_0.insert(MarketID_2.getString());
  FIX::MarketSegmentID MarketSegmentID_2("STRING_623879639");
  msg.set(MarketSegmentID_2);
  DerivativeSecurityListRequest_0.insert(MarketSegmentID_2.getString());
  FIX::SecurityListRequestType SecurityListRequestType_0(5);
  msg.set(SecurityListRequestType_0);
  DerivativeSecurityListRequest_0.insert(SecurityListRequestType_0.getString());
  FIX::SecurityReqID SecurityReqID_1("STRING_2025797891");
  msg.set(SecurityReqID_1);
  DerivativeSecurityListRequest_0.insert(SecurityReqID_1.getString());
  FIX::SecuritySubType SecuritySubType_19("STRING_81558817");
  msg.set(SecuritySubType_19);
  DerivativeSecurityListRequest_0.insert(SecuritySubType_19.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_1('2');
  msg.set(SubscriptionRequestType_1);
  DerivativeSecurityListRequest_0.insert(SubscriptionRequestType_1.getString());
  FIX::Text Text_32("STRING_1985956813");
  msg.set(Text_32);
  DerivativeSecurityListRequest_0.insert(Text_32.getString());
  FIX::TradingSessionID TradingSessionID_22("STRING_4");
  msg.set(TradingSessionID_22);
  DerivativeSecurityListRequest_0.insert(TradingSessionID_22.getString());
  FIX::TradingSessionSubID TradingSessionSubID_22("STRING_1");
  msg.set(TradingSessionSubID_22);
  DerivativeSecurityListRequest_0.insert(TradingSessionSubID_22.getString());
  all_values.push_back(DerivativeSecurityListRequest_0);

  // DerivativeInstrument
  multiset<string> DerivativeInstrument_1;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_1(true);
  msg.set(DerivFlexProductEligibilityIndicator_1);
  DerivativeInstrument_1.insert(DerivFlexProductEligibilityIndicator_1.getString());
  FIX::DerivativeCFICode DerivativeCFICode_1("STRING_915368332");
  msg.set(DerivativeCFICode_1);
  DerivativeInstrument_1.insert(DerivativeCFICode_1.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_1;
  DerivativeCapPrice_1.setString("13582745");
  msg.set(DerivativeCapPrice_1);
  DerivativeInstrument_1.insert(DerivativeCapPrice_1.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_1;
  DerivativeContractMultiplier_1.setString("18914959");
  msg.set(DerivativeContractMultiplier_1);
  DerivativeInstrument_1.insert(DerivativeContractMultiplier_1.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_1(782722660);
  msg.set(DerivativeContractMultiplierUnit_1);
  DerivativeInstrument_1.insert(DerivativeContractMultiplierUnit_1.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_1("MONTHYEAR_103962197");
  msg.set(DerivativeContractSettlMonth_1);
  DerivativeInstrument_1.insert(DerivativeContractSettlMonth_1.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_1("COUNTRY_494292848");
  msg.set(DerivativeCountryOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeCountryOfIssue_1.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_1("DATA_1819307298");
  msg.set(DerivativeEncodedIssuer_1);
  DerivativeInstrument_1.insert(DerivativeEncodedIssuer_1.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_1(72049652);
  msg.set(DerivativeEncodedIssuerLen_1);
  DerivativeInstrument_1.insert(DerivativeEncodedIssuerLen_1.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_1("DATA_1459945874");
  msg.set(DerivativeEncodedSecurityDesc_1);
  DerivativeInstrument_1.insert(DerivativeEncodedSecurityDesc_1.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_1(405576944);
  msg.set(DerivativeEncodedSecurityDescLen_1);
  DerivativeInstrument_1.insert(DerivativeEncodedSecurityDescLen_1.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_1('1');
  msg.set(DerivativeExerciseStyle_1);
  DerivativeInstrument_1.insert(DerivativeExerciseStyle_1.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_1;
  DerivativeFloorPrice_1.setString("69639");
  msg.set(DerivativeFloorPrice_1);
  DerivativeInstrument_1.insert(DerivativeFloorPrice_1.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_1(897962097);
  msg.set(DerivativeFlowScheduleType_1);
  DerivativeInstrument_1.insert(DerivativeFlowScheduleType_1.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_1("STRING_650196907");
  msg.set(DerivativeInstrRegistry_1);
  DerivativeInstrument_1.insert(DerivativeInstrRegistry_1.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_1('8');
  msg.set(DerivativeInstrmtAssignmentMethod_1);
  DerivativeInstrument_1.insert(DerivativeInstrmtAssignmentMethod_1.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_1("LOCALMKTDATE_1133085598");
  msg.set(DerivativeIssueDate_1);
  DerivativeInstrument_1.insert(DerivativeIssueDate_1.getString());
  FIX::DerivativeIssuer DerivativeIssuer_1("STRING_1396522458");
  msg.set(DerivativeIssuer_1);
  DerivativeInstrument_1.insert(DerivativeIssuer_1.getString());
  FIX::DerivativeListMethod DerivativeListMethod_1(1466934897);
  msg.set(DerivativeListMethod_1);
  DerivativeInstrument_1.insert(DerivativeListMethod_1.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_1("STRING_894702115");
  msg.set(DerivativeLocaleOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeLocaleOfIssue_1.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_1("LOCALMKTDATE_1737772308");
  msg.set(DerivativeMaturityDate_1);
  DerivativeInstrument_1.insert(DerivativeMaturityDate_1.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_1("MONTHYEAR_469688114");
  msg.set(DerivativeMaturityMonthYear_1);
  DerivativeInstrument_1.insert(DerivativeMaturityMonthYear_1.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_1("TZTIMEONLY_792249207");
  msg.set(DerivativeMaturityTime_1);
  DerivativeInstrument_1.insert(DerivativeMaturityTime_1.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_1;
  DerivativeMinPriceIncrement_1.setString("2141683");
  msg.set(DerivativeMinPriceIncrement_1);
  DerivativeInstrument_1.insert(DerivativeMinPriceIncrement_1.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_1;
  DerivativeMinPriceIncrementAmount_1.setString("20190337");
  msg.set(DerivativeMinPriceIncrementAmount_1);
  DerivativeInstrument_1.insert(DerivativeMinPriceIncrementAmount_1.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_1(670563450);
  msg.set(DerivativeNTPositionLimit_1);
  DerivativeInstrument_1.insert(DerivativeNTPositionLimit_1.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_1('2');
  msg.set(DerivativeOptAttribute_1);
  DerivativeInstrument_1.insert(DerivativeOptAttribute_1.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_1;
  DerivativeOptPayAmount_1.setString("15040831");
  msg.set(DerivativeOptPayAmount_1);
  DerivativeInstrument_1.insert(DerivativeOptPayAmount_1.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_1(509036616);
  msg.set(DerivativePositionLimit_1);
  DerivativeInstrument_1.insert(DerivativePositionLimit_1.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_1("STRING_1268479382");
  msg.set(DerivativePriceQuoteMethod_1);
  DerivativeInstrument_1.insert(DerivativePriceQuoteMethod_1.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_1("STRING_1637618494");
  msg.set(DerivativePriceUnitOfMeasure_1);
  DerivativeInstrument_1.insert(DerivativePriceUnitOfMeasure_1.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_1;
  DerivativePriceUnitOfMeasureQty_1.setString("9325822");
  msg.set(DerivativePriceUnitOfMeasureQty_1);
  DerivativeInstrument_1.insert(DerivativePriceUnitOfMeasureQty_1.getString());
  FIX::DerivativeProduct DerivativeProduct_1(36364066);
  msg.set(DerivativeProduct_1);
  DerivativeInstrument_1.insert(DerivativeProduct_1.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_1("STRING_848409368");
  msg.set(DerivativeProductComplex_1);
  DerivativeInstrument_1.insert(DerivativeProductComplex_1.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_1(676594537);
  msg.set(DerivativePutOrCall_1);
  DerivativeInstrument_1.insert(DerivativePutOrCall_1.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_1("STRING_819086726");
  msg.set(DerivativeSecurityDesc_1);
  DerivativeInstrument_1.insert(DerivativeSecurityDesc_1.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_1("EXCHANGE_952371565");
  msg.set(DerivativeSecurityExchange_1);
  DerivativeInstrument_1.insert(DerivativeSecurityExchange_1.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_1("STRING_1170887385");
  msg.set(DerivativeSecurityGroup_1);
  DerivativeInstrument_1.insert(DerivativeSecurityGroup_1.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_1("STRING_490910377");
  msg.set(DerivativeSecurityID_1);
  DerivativeInstrument_1.insert(DerivativeSecurityID_1.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_1("STRING_1024421217");
  msg.set(DerivativeSecurityIDSource_1);
  DerivativeInstrument_1.insert(DerivativeSecurityIDSource_1.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_1("STRING_483349612");
  msg.set(DerivativeSecurityStatus_1);
  DerivativeInstrument_1.insert(DerivativeSecurityStatus_1.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_1("STRING_896487321");
  msg.set(DerivativeSecuritySubType_1);
  DerivativeInstrument_1.insert(DerivativeSecuritySubType_1.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_1("STRING_776321056");
  msg.set(DerivativeSecurityType_1);
  DerivativeInstrument_1.insert(DerivativeSecurityType_1.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_1('4');
  msg.set(DerivativeSettlMethod_1);
  DerivativeInstrument_1.insert(DerivativeSettlMethod_1.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_1("STRING_1794449418");
  msg.set(DerivativeSettleOnOpenFlag_1);
  DerivativeInstrument_1.insert(DerivativeSettleOnOpenFlag_1.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_1("STRING_1426517963");
  msg.set(DerivativeStateOrProvinceOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeStateOrProvinceOfIssue_1.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_1("CHF");
  msg.set(DerivativeStrikeCurrency_1);
  DerivativeInstrument_1.insert(DerivativeStrikeCurrency_1.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_1;
  DerivativeStrikeMultiplier_1.setString("6755567");
  msg.set(DerivativeStrikeMultiplier_1);
  DerivativeInstrument_1.insert(DerivativeStrikeMultiplier_1.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_1;
  DerivativeStrikePrice_1.setString("6540814");
  msg.set(DerivativeStrikePrice_1);
  DerivativeInstrument_1.insert(DerivativeStrikePrice_1.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_1;
  DerivativeStrikeValue_1.setString("16747534");
  msg.set(DerivativeStrikeValue_1);
  DerivativeInstrument_1.insert(DerivativeStrikeValue_1.getString());
  FIX::DerivativeSymbol DerivativeSymbol_1("STRING_265845434");
  msg.set(DerivativeSymbol_1);
  DerivativeInstrument_1.insert(DerivativeSymbol_1.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_1("STRING_1123769527");
  msg.set(DerivativeSymbolSfx_1);
  DerivativeInstrument_1.insert(DerivativeSymbolSfx_1.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_1("STRING_319519044");
  msg.set(DerivativeTimeUnit_1);
  DerivativeInstrument_1.insert(DerivativeTimeUnit_1.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_1("STRING_480013734");
  msg.set(DerivativeUnitOfMeasure_1);
  DerivativeInstrument_1.insert(DerivativeUnitOfMeasure_1.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_1;
  DerivativeUnitOfMeasureQty_1.setString("9953196");
  msg.set(DerivativeUnitOfMeasureQty_1);
  DerivativeInstrument_1.insert(DerivativeUnitOfMeasureQty_1.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_1("STRING_990082494");
  msg.set(DerivativeValuationMethod_1);
  DerivativeInstrument_1.insert(DerivativeValuationMethod_1.getString());
  all_values.push_back(DerivativeInstrument_1);

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_3;
    FIX::DerivativeEventDate DerivativeEventDate_3("LOCALMKTDATE_351919065");
    noDerivativeEvents_0_0.set(DerivativeEventDate_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventDate_3.getString());
    FIX::DerivativeEventPx DerivativeEventPx_3;
    DerivativeEventPx_3.setString("14991191");
    noDerivativeEvents_0_0.set(DerivativeEventPx_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventPx_3.getString());
    FIX::DerivativeEventText DerivativeEventText_3("STRING_2044220233");
    noDerivativeEvents_0_0.set(DerivativeEventText_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventText_3.getString());
    FIX::DerivativeEventTime DerivativeEventTime_3(FIX::UTCTIMESTAMP(5, 0, 19, 26, 7, 2008));
    noDerivativeEvents_0_0.set(DerivativeEventTime_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventTime_3.getString());
    FIX::DerivativeEventType DerivativeEventType_3(2131699600);
    noDerivativeEvents_0_0.set(DerivativeEventType_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventType_3.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_3);

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_4;
    FIX::DerivativeEventDate DerivativeEventDate_4("LOCALMKTDATE_1243097755");
    noDerivativeEvents_0_1.set(DerivativeEventDate_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventDate_4.getString());
    FIX::DerivativeEventPx DerivativeEventPx_4;
    DerivativeEventPx_4.setString("5197724");
    noDerivativeEvents_0_1.set(DerivativeEventPx_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventPx_4.getString());
    FIX::DerivativeEventText DerivativeEventText_4("STRING_467565564");
    noDerivativeEvents_0_1.set(DerivativeEventText_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventText_4.getString());
    FIX::DerivativeEventTime DerivativeEventTime_4(FIX::UTCTIMESTAMP(14, 5, 27, 2, 2, 2016));
    noDerivativeEvents_0_1.set(DerivativeEventTime_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventTime_4.getString());
    FIX::DerivativeEventType DerivativeEventType_4(1250684559);
    noDerivativeEvents_0_1.set(DerivativeEventType_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventType_4.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_4);

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_5;
    FIX::DerivativeEventDate DerivativeEventDate_5("LOCALMKTDATE_799107055");
    noDerivativeEvents_0_2.set(DerivativeEventDate_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventDate_5.getString());
    FIX::DerivativeEventPx DerivativeEventPx_5;
    DerivativeEventPx_5.setString("20938720");
    noDerivativeEvents_0_2.set(DerivativeEventPx_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventPx_5.getString());
    FIX::DerivativeEventText DerivativeEventText_5("STRING_1516529993");
    noDerivativeEvents_0_2.set(DerivativeEventText_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventText_5.getString());
    FIX::DerivativeEventTime DerivativeEventTime_5(FIX::UTCTIMESTAMP(1, 47, 55, 19, 3, 2004));
    noDerivativeEvents_0_2.set(DerivativeEventTime_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventTime_5.getString());
    FIX::DerivativeEventType DerivativeEventType_5(607625406);
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
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_2;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_2("STRING_964685511");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyID_2.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_2("STRING_891843083");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyIDSource_2.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_2(454638168);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyRole_2.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_3("STRING_1852655297");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_3);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3.insert(DerivativeInstrumentPartySubID_3.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_3(1206825546);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_3);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3.insert(DerivativeInstrumentPartySubIDType_3.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_4("STRING_1150499986");
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubID_4);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4.insert(DerivativeInstrumentPartySubID_4.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_4(1836871249);
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubIDType_4);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4.insert(DerivativeInstrumentPartySubIDType_4.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_3;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_3("STRING_302439654");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyID_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyID_3.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_3("STRING_1670272400");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyIDSource_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyIDSource_3.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_3(156953165);
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyRole_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyRole_3.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_5("STRING_818882223");
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubID_5);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5.insert(DerivativeInstrumentPartySubID_5.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_5(1114832291);
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubIDType_5);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5.insert(DerivativeInstrumentPartySubIDType_5.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_2;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_4;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_4("STRING_2081091930");
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyID_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyID_4.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_4("STRING_1394010009");
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyIDSource_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyIDSource_4.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_4(1259857932);
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyRole_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyRole_4.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_6("STRING_497210920");
      noDerivativeInstrumentPartySubIDs_2_1_0.set(DerivativeInstrumentPartySubID_6);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6.insert(DerivativeInstrumentPartySubID_6.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_6(2058964987);
      noDerivativeInstrumentPartySubIDs_2_1_0.set(DerivativeInstrumentPartySubIDType_6);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6.insert(DerivativeInstrumentPartySubIDType_6.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6);

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_2);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_3("STRING_2013740914");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_3);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3.insert(DerivativeSecurityAltID_3.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_3("STRING_1834357922");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_3);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3.insert(DerivativeSecurityAltIDSource_3.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3);

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_4("STRING_565022705");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltID_4);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4.insert(DerivativeSecurityAltID_4.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_4("STRING_1862800993");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltIDSource_4);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4.insert(DerivativeSecurityAltIDSource_4.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4);

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_2;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_3("DATA_457586809");
  msg.set(DerivativeSecurityXML_3);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_1(1821012648);
  msg.set(DerivativeSecurityXMLLen_1);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_1("STRING_340118276");
  msg.set(DerivativeSecurityXMLSchema_1);
  DerivativeSecurityXML_2.insert(DerivativeSecurityXMLSchema_1.getString());
  all_values.push_back(DerivativeSecurityXML_2);

  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_34;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_34("DATA_1580218409");
  msg.set(EncodedUnderlyingIssuer_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingIssuer_34.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_34(281154406);
  msg.set(EncodedUnderlyingIssuerLen_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingIssuerLen_34.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_34("DATA_861655792");
  msg.set(EncodedUnderlyingSecurityDesc_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingSecurityDesc_34.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_34(397420272);
  msg.set(EncodedUnderlyingSecurityDescLen_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingSecurityDescLen_34.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_34;
  UnderlyingAdjustedQuantity_34.setString("11729974");
  msg.set(UnderlyingAdjustedQuantity_34);
  UnderlyingInstrument_34.insert(UnderlyingAdjustedQuantity_34.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_34;
  UnderlyingAllocationPercent_34.setString("39.600000");
  msg.set(UnderlyingAllocationPercent_34);
  UnderlyingInstrument_34.insert(UnderlyingAllocationPercent_34.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_34;
  UnderlyingAttachmentPoint_34.setString("90.620000");
  msg.set(UnderlyingAttachmentPoint_34);
  UnderlyingInstrument_34.insert(UnderlyingAttachmentPoint_34.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_34("STRING_878169139");
  msg.set(UnderlyingCFICode_34);
  UnderlyingInstrument_34.insert(UnderlyingCFICode_34.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_34("STRING_375635858");
  msg.set(UnderlyingCPProgram_34);
  UnderlyingInstrument_34.insert(UnderlyingCPProgram_34.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_34("STRING_1055585400");
  msg.set(UnderlyingCPRegType_34);
  UnderlyingInstrument_34.insert(UnderlyingCPRegType_34.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_34;
  UnderlyingCapValue_34.setString("5675567");
  msg.set(UnderlyingCapValue_34);
  UnderlyingInstrument_34.insert(UnderlyingCapValue_34.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_34;
  UnderlyingCashAmount_34.setString("6780755");
  msg.set(UnderlyingCashAmount_34);
  UnderlyingInstrument_34.insert(UnderlyingCashAmount_34.getString());
  FIX::UnderlyingCashType UnderlyingCashType_34("STRING_DIFF");
  msg.set(UnderlyingCashType_34);
  UnderlyingInstrument_34.insert(UnderlyingCashType_34.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_34;
  UnderlyingContractMultiplier_34.setString("7245099");
  msg.set(UnderlyingContractMultiplier_34);
  UnderlyingInstrument_34.insert(UnderlyingContractMultiplier_34.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_34(972616595);
  msg.set(UnderlyingContractMultiplierUnit_34);
  UnderlyingInstrument_34.insert(UnderlyingContractMultiplierUnit_34.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_34("COUNTRY_1397256376");
  msg.set(UnderlyingCountryOfIssue_34);
  UnderlyingInstrument_34.insert(UnderlyingCountryOfIssue_34.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_34("LOCALMKTDATE_1839342197");
  msg.set(UnderlyingCouponPaymentDate_34);
  UnderlyingInstrument_34.insert(UnderlyingCouponPaymentDate_34.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_34;
  UnderlyingCouponRate_34.setString("48.780000");
  msg.set(UnderlyingCouponRate_34);
  UnderlyingInstrument_34.insert(UnderlyingCouponRate_34.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_34("STRING_643782737");
  msg.set(UnderlyingCreditRating_34);
  UnderlyingInstrument_34.insert(UnderlyingCreditRating_34.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_34("EUR");
  msg.set(UnderlyingCurrency_34);
  UnderlyingInstrument_34.insert(UnderlyingCurrency_34.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_34;
  UnderlyingCurrentValue_34.setString("11409936");
  msg.set(UnderlyingCurrentValue_34);
  UnderlyingInstrument_34.insert(UnderlyingCurrentValue_34.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_34;
  UnderlyingDetachmentPoint_34.setString("78.210000");
  msg.set(UnderlyingDetachmentPoint_34);
  UnderlyingInstrument_34.insert(UnderlyingDetachmentPoint_34.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_34;
  UnderlyingDirtyPrice_34.setString("15580669");
  msg.set(UnderlyingDirtyPrice_34);
  UnderlyingInstrument_34.insert(UnderlyingDirtyPrice_34.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_34;
  UnderlyingEndPrice_34.setString("10072509");
  msg.set(UnderlyingEndPrice_34);
  UnderlyingInstrument_34.insert(UnderlyingEndPrice_34.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_34;
  UnderlyingEndValue_34.setString("5500720");
  msg.set(UnderlyingEndValue_34);
  UnderlyingInstrument_34.insert(UnderlyingEndValue_34.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_34(2123089690);
  msg.set(UnderlyingExerciseStyle_34);
  UnderlyingInstrument_34.insert(UnderlyingExerciseStyle_34.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_34;
  UnderlyingFXRate_34.setString("7225682");
  msg.set(UnderlyingFXRate_34);
  UnderlyingInstrument_34.insert(UnderlyingFXRate_34.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_34('D');
  msg.set(UnderlyingFXRateCalc_34);
  UnderlyingInstrument_34.insert(UnderlyingFXRateCalc_34.getString());
  FIX::UnderlyingFactor UnderlyingFactor_34;
  UnderlyingFactor_34.setString("17966186");
  msg.set(UnderlyingFactor_34);
  UnderlyingInstrument_34.insert(UnderlyingFactor_34.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_34(1062686545);
  msg.set(UnderlyingFlowScheduleType_34);
  UnderlyingInstrument_34.insert(UnderlyingFlowScheduleType_34.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_34("STRING_440393665");
  msg.set(UnderlyingInstrRegistry_34);
  UnderlyingInstrument_34.insert(UnderlyingInstrRegistry_34.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_34("LOCALMKTDATE_2077773097");
  msg.set(UnderlyingIssueDate_34);
  UnderlyingInstrument_34.insert(UnderlyingIssueDate_34.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_34("STRING_1924342337");
  msg.set(UnderlyingIssuer_34);
  UnderlyingInstrument_34.insert(UnderlyingIssuer_34.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_34("STRING_837813937");
  msg.set(UnderlyingLocaleOfIssue_34);
  UnderlyingInstrument_34.insert(UnderlyingLocaleOfIssue_34.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_34("LOCALMKTDATE_1103286938");
  msg.set(UnderlyingMaturityDate_34);
  UnderlyingInstrument_34.insert(UnderlyingMaturityDate_34.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_34("MONTHYEAR_1093152649");
  msg.set(UnderlyingMaturityMonthYear_34);
  UnderlyingInstrument_34.insert(UnderlyingMaturityMonthYear_34.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_34("TZTIMEONLY_742899351");
  msg.set(UnderlyingMaturityTime_34);
  UnderlyingInstrument_34.insert(UnderlyingMaturityTime_34.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_34;
  UnderlyingNotionalPercentageOutstanding_34.setString("60.770000");
  msg.set(UnderlyingNotionalPercentageOutstanding_34);
  UnderlyingInstrument_34.insert(UnderlyingNotionalPercentageOutstanding_34.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_34('1');
  msg.set(UnderlyingOptAttribute_34);
  UnderlyingInstrument_34.insert(UnderlyingOptAttribute_34.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_34;
  UnderlyingOriginalNotionalPercentageOutstanding_34.setString("47.510000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_34);
  UnderlyingInstrument_34.insert(UnderlyingOriginalNotionalPercentageOutstanding_34.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_34("STRING_401529170");
  msg.set(UnderlyingPriceUnitOfMeasure_34);
  UnderlyingInstrument_34.insert(UnderlyingPriceUnitOfMeasure_34.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_34;
  UnderlyingPriceUnitOfMeasureQty_34.setString("21468640");
  msg.set(UnderlyingPriceUnitOfMeasureQty_34);
  UnderlyingInstrument_34.insert(UnderlyingPriceUnitOfMeasureQty_34.getString());
  FIX::UnderlyingProduct UnderlyingProduct_34(229375256);
  msg.set(UnderlyingProduct_34);
  UnderlyingInstrument_34.insert(UnderlyingProduct_34.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_34(1126039076);
  msg.set(UnderlyingPutOrCall_34);
  UnderlyingInstrument_34.insert(UnderlyingPutOrCall_34.getString());
  FIX::UnderlyingPx UnderlyingPx_34;
  UnderlyingPx_34.setString("9719969");
  msg.set(UnderlyingPx_34);
  UnderlyingInstrument_34.insert(UnderlyingPx_34.getString());
  FIX::UnderlyingQty UnderlyingQty_34;
  UnderlyingQty_34.setString("16266316");
  msg.set(UnderlyingQty_34);
  UnderlyingInstrument_34.insert(UnderlyingQty_34.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_34("LOCALMKTDATE_817897625");
  msg.set(UnderlyingRedemptionDate_34);
  UnderlyingInstrument_34.insert(UnderlyingRedemptionDate_34.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_34("STRING_1878221845");
  msg.set(UnderlyingRepoCollateralSecurityType_34);
  UnderlyingInstrument_34.insert(UnderlyingRepoCollateralSecurityType_34.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_34;
  UnderlyingRepurchaseRate_34.setString("7.210000");
  msg.set(UnderlyingRepurchaseRate_34);
  UnderlyingInstrument_34.insert(UnderlyingRepurchaseRate_34.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_34(1769614106);
  msg.set(UnderlyingRepurchaseTerm_34);
  UnderlyingInstrument_34.insert(UnderlyingRepurchaseTerm_34.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_34("STRING_989689926");
  msg.set(UnderlyingRestructuringType_34);
  UnderlyingInstrument_34.insert(UnderlyingRestructuringType_34.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_34("STRING_1263924379");
  msg.set(UnderlyingSecurityDesc_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityDesc_34.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_34("EXCHANGE_485328279");
  msg.set(UnderlyingSecurityExchange_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityExchange_34.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_34("STRING_400273263");
  msg.set(UnderlyingSecurityID_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityID_34.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_34("STRING_123691654");
  msg.set(UnderlyingSecurityIDSource_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityIDSource_34.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_34("STRING_1035400374");
  msg.set(UnderlyingSecuritySubType_34);
  UnderlyingInstrument_34.insert(UnderlyingSecuritySubType_34.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_34("STRING_375879305");
  msg.set(UnderlyingSecurityType_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityType_34.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_34("STRING_846259923");
  msg.set(UnderlyingSeniority_34);
  UnderlyingInstrument_34.insert(UnderlyingSeniority_34.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_34("STRING_2043059278");
  msg.set(UnderlyingSettlMethod_34);
  UnderlyingInstrument_34.insert(UnderlyingSettlMethod_34.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_34(2);
  msg.set(UnderlyingSettlementType_34);
  UnderlyingInstrument_34.insert(UnderlyingSettlementType_34.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_34;
  UnderlyingStartValue_34.setString("19089464");
  msg.set(UnderlyingStartValue_34);
  UnderlyingInstrument_34.insert(UnderlyingStartValue_34.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_34("STRING_335969295");
  msg.set(UnderlyingStateOrProvinceOfIssue_34);
  UnderlyingInstrument_34.insert(UnderlyingStateOrProvinceOfIssue_34.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_34("EUR");
  msg.set(UnderlyingStrikeCurrency_34);
  UnderlyingInstrument_34.insert(UnderlyingStrikeCurrency_34.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_34;
  UnderlyingStrikePrice_34.setString("11737832");
  msg.set(UnderlyingStrikePrice_34);
  UnderlyingInstrument_34.insert(UnderlyingStrikePrice_34.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_34("STRING_1058590735");
  msg.set(UnderlyingSymbol_34);
  UnderlyingInstrument_34.insert(UnderlyingSymbol_34.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_34("STRING_631474158");
  msg.set(UnderlyingSymbolSfx_34);
  UnderlyingInstrument_34.insert(UnderlyingSymbolSfx_34.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_34("STRING_1916682583");
  msg.set(UnderlyingTimeUnit_34);
  UnderlyingInstrument_34.insert(UnderlyingTimeUnit_34.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_34("STRING_892563165");
  msg.set(UnderlyingUnitOfMeasure_34);
  UnderlyingInstrument_34.insert(UnderlyingUnitOfMeasure_34.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_34;
  UnderlyingUnitOfMeasureQty_34.setString("21002626");
  msg.set(UnderlyingUnitOfMeasureQty_34);
  UnderlyingInstrument_34.insert(UnderlyingUnitOfMeasureQty_34.getString());
  all_values.push_back(UnderlyingInstrument_34);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_74;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_74("STRING_1294092335");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_74);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_74.insert(UnderlyingSecurityAltID_74.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_74("STRING_2099643038");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_74);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_74.insert(UnderlyingSecurityAltIDSource_74.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_74);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_64;
    FIX::UnderlyingStipType UnderlyingStipType_64("STRING_272647763");
    noUnderlyingStips_0_0.set(UnderlyingStipType_64);
    UnderlyingStipulations_NoUnderlyingStips_64.insert(UnderlyingStipType_64.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_64("STRING_924156357");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_64);
    UnderlyingStipulations_NoUnderlyingStips_64.insert(UnderlyingStipValue_64.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_64);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_65;
    FIX::UnderlyingStipType UnderlyingStipType_65("STRING_1276206928");
    noUnderlyingStips_0_1.set(UnderlyingStipType_65);
    UnderlyingStipulations_NoUnderlyingStips_65.insert(UnderlyingStipType_65.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_65("STRING_1090545388");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_65);
    UnderlyingStipulations_NoUnderlyingStips_65.insert(UnderlyingStipValue_65.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_65);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_66;
    FIX::UnderlyingStipType UnderlyingStipType_66("STRING_654894555");
    noUnderlyingStips_0_2.set(UnderlyingStipType_66);
    UnderlyingStipulations_NoUnderlyingStips_66.insert(UnderlyingStipType_66.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_66("STRING_1399137649");
    noUnderlyingStips_0_2.set(UnderlyingStipValue_66);
    UnderlyingStipulations_NoUnderlyingStips_66.insert(UnderlyingStipValue_66.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_66);

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_67;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_67("STRING_1644584481");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_67);
    UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyID_67.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_67('5');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_67);
    UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyIDSource_67.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_67(1198004126);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_67);
    UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyRole_67.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_67);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_144("STRING_639270035");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_144);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144.insert(UnderlyingInstrumentPartySubID_144.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_144(85920852);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_144);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144.insert(UnderlyingInstrumentPartySubIDType_144.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_145("STRING_273253402");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_145);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145.insert(UnderlyingInstrumentPartySubID_145.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_145(1485529958);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_145);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145.insert(UnderlyingInstrumentPartySubIDType_145.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_68;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_68("STRING_2128980131");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_68);
    UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyID_68.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_68('2');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_68);
    UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyIDSource_68.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_68(1246992779);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_68);
    UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyRole_68.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_68);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_146("STRING_253571547");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_146);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146.insert(UnderlyingInstrumentPartySubID_146.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_146(785314288);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_146);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146.insert(UnderlyingInstrumentPartySubIDType_146.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
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
