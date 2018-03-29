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
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListRequest_0;
  FIX::Currency Currency_16("JPY");
  msg.set(Currency_16);
  DerivativeSecurityListRequest_0.insert(Currency_16.getString());
  FIX::EncodedText EncodedText_31("DATA_1089431793");
  msg.set(EncodedText_31);
  DerivativeSecurityListRequest_0.insert(EncodedText_31.getString());
  FIX::EncodedTextLen EncodedTextLen_31(1652218357);
  msg.set(EncodedTextLen_31);
  DerivativeSecurityListRequest_0.insert(EncodedTextLen_31.getString());
  FIX::MarketID MarketID_3("EXCHANGE_170585626");
  msg.set(MarketID_3);
  DerivativeSecurityListRequest_0.insert(MarketID_3.getString());
  FIX::MarketSegmentID MarketSegmentID_3("STRING_231692273");
  msg.set(MarketSegmentID_3);
  DerivativeSecurityListRequest_0.insert(MarketSegmentID_3.getString());
  FIX::SecurityListRequestType SecurityListRequestType_0(0);
  msg.set(SecurityListRequestType_0);
  DerivativeSecurityListRequest_0.insert(SecurityListRequestType_0.getString());
  FIX::SecurityReqID SecurityReqID_1("STRING_1740298016");
  msg.set(SecurityReqID_1);
  DerivativeSecurityListRequest_0.insert(SecurityReqID_1.getString());
  FIX::SecuritySubType SecuritySubType_18("STRING_155727132");
  msg.set(SecuritySubType_18);
  DerivativeSecurityListRequest_0.insert(SecuritySubType_18.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_1('2');
  msg.set(SubscriptionRequestType_1);
  DerivativeSecurityListRequest_0.insert(SubscriptionRequestType_1.getString());
  FIX::Text Text_31("STRING_1622863104");
  msg.set(Text_31);
  DerivativeSecurityListRequest_0.insert(Text_31.getString());
  FIX::TradingSessionID TradingSessionID_24("STRING_4");
  msg.set(TradingSessionID_24);
  DerivativeSecurityListRequest_0.insert(TradingSessionID_24.getString());
  FIX::TradingSessionSubID TradingSessionSubID_24("STRING_6");
  msg.set(TradingSessionSubID_24);
  DerivativeSecurityListRequest_0.insert(TradingSessionSubID_24.getString());
  all_values.push_back(DerivativeSecurityListRequest_0);

  all_compo_names.insert("DerivativeSecurityListRequest");

  // DerivativeInstrument
  multiset<string> DerivativeInstrument_1;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_1(false);
  msg.set(DerivFlexProductEligibilityIndicator_1);
  DerivativeInstrument_1.insert(DerivFlexProductEligibilityIndicator_1.getString());
  FIX::DerivativeCFICode DerivativeCFICode_1("STRING_223198310");
  msg.set(DerivativeCFICode_1);
  DerivativeInstrument_1.insert(DerivativeCFICode_1.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_1;
  DerivativeCapPrice_1.setString("6431470");
  msg.set(DerivativeCapPrice_1);
  DerivativeInstrument_1.insert(DerivativeCapPrice_1.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_1;
  DerivativeContractMultiplier_1.setString("16522261");
  msg.set(DerivativeContractMultiplier_1);
  DerivativeInstrument_1.insert(DerivativeContractMultiplier_1.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_1(992203499);
  msg.set(DerivativeContractMultiplierUnit_1);
  DerivativeInstrument_1.insert(DerivativeContractMultiplierUnit_1.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_1("MONTHYEAR_2048700464");
  msg.set(DerivativeContractSettlMonth_1);
  DerivativeInstrument_1.insert(DerivativeContractSettlMonth_1.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_1("COUNTRY_1960656732");
  msg.set(DerivativeCountryOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeCountryOfIssue_1.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_1("DATA_1374890730");
  msg.set(DerivativeEncodedIssuer_1);
  DerivativeInstrument_1.insert(DerivativeEncodedIssuer_1.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_1(1003974142);
  msg.set(DerivativeEncodedIssuerLen_1);
  DerivativeInstrument_1.insert(DerivativeEncodedIssuerLen_1.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_1("DATA_446208521");
  msg.set(DerivativeEncodedSecurityDesc_1);
  DerivativeInstrument_1.insert(DerivativeEncodedSecurityDesc_1.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_1(291796214);
  msg.set(DerivativeEncodedSecurityDescLen_1);
  DerivativeInstrument_1.insert(DerivativeEncodedSecurityDescLen_1.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_1('1');
  msg.set(DerivativeExerciseStyle_1);
  DerivativeInstrument_1.insert(DerivativeExerciseStyle_1.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_1;
  DerivativeFloorPrice_1.setString("19691598");
  msg.set(DerivativeFloorPrice_1);
  DerivativeInstrument_1.insert(DerivativeFloorPrice_1.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_1(1339550309);
  msg.set(DerivativeFlowScheduleType_1);
  DerivativeInstrument_1.insert(DerivativeFlowScheduleType_1.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_1("STRING_1454865430");
  msg.set(DerivativeInstrRegistry_1);
  DerivativeInstrument_1.insert(DerivativeInstrRegistry_1.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_1('1');
  msg.set(DerivativeInstrmtAssignmentMethod_1);
  DerivativeInstrument_1.insert(DerivativeInstrmtAssignmentMethod_1.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_1("LOCALMKTDATE_1740356997");
  msg.set(DerivativeIssueDate_1);
  DerivativeInstrument_1.insert(DerivativeIssueDate_1.getString());
  FIX::DerivativeIssuer DerivativeIssuer_1("STRING_972525468");
  msg.set(DerivativeIssuer_1);
  DerivativeInstrument_1.insert(DerivativeIssuer_1.getString());
  FIX::DerivativeListMethod DerivativeListMethod_1(1140865033);
  msg.set(DerivativeListMethod_1);
  DerivativeInstrument_1.insert(DerivativeListMethod_1.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_1("STRING_2059885292");
  msg.set(DerivativeLocaleOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeLocaleOfIssue_1.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_1("LOCALMKTDATE_2061957261");
  msg.set(DerivativeMaturityDate_1);
  DerivativeInstrument_1.insert(DerivativeMaturityDate_1.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_1("MONTHYEAR_645599743");
  msg.set(DerivativeMaturityMonthYear_1);
  DerivativeInstrument_1.insert(DerivativeMaturityMonthYear_1.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_1("TZTIMEONLY_82987270");
  msg.set(DerivativeMaturityTime_1);
  DerivativeInstrument_1.insert(DerivativeMaturityTime_1.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_1;
  DerivativeMinPriceIncrement_1.setString("1461658");
  msg.set(DerivativeMinPriceIncrement_1);
  DerivativeInstrument_1.insert(DerivativeMinPriceIncrement_1.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_1;
  DerivativeMinPriceIncrementAmount_1.setString("12800209");
  msg.set(DerivativeMinPriceIncrementAmount_1);
  DerivativeInstrument_1.insert(DerivativeMinPriceIncrementAmount_1.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_1(1823285286);
  msg.set(DerivativeNTPositionLimit_1);
  DerivativeInstrument_1.insert(DerivativeNTPositionLimit_1.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_1('3');
  msg.set(DerivativeOptAttribute_1);
  DerivativeInstrument_1.insert(DerivativeOptAttribute_1.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_1;
  DerivativeOptPayAmount_1.setString("11095171");
  msg.set(DerivativeOptPayAmount_1);
  DerivativeInstrument_1.insert(DerivativeOptPayAmount_1.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_1(1298664742);
  msg.set(DerivativePositionLimit_1);
  DerivativeInstrument_1.insert(DerivativePositionLimit_1.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_1("STRING_1848988978");
  msg.set(DerivativePriceQuoteMethod_1);
  DerivativeInstrument_1.insert(DerivativePriceQuoteMethod_1.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_1("STRING_693539583");
  msg.set(DerivativePriceUnitOfMeasure_1);
  DerivativeInstrument_1.insert(DerivativePriceUnitOfMeasure_1.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_1;
  DerivativePriceUnitOfMeasureQty_1.setString("13562417");
  msg.set(DerivativePriceUnitOfMeasureQty_1);
  DerivativeInstrument_1.insert(DerivativePriceUnitOfMeasureQty_1.getString());
  FIX::DerivativeProduct DerivativeProduct_1(2072187288);
  msg.set(DerivativeProduct_1);
  DerivativeInstrument_1.insert(DerivativeProduct_1.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_1("STRING_1336686643");
  msg.set(DerivativeProductComplex_1);
  DerivativeInstrument_1.insert(DerivativeProductComplex_1.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_1(860984302);
  msg.set(DerivativePutOrCall_1);
  DerivativeInstrument_1.insert(DerivativePutOrCall_1.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_1("STRING_916907139");
  msg.set(DerivativeSecurityDesc_1);
  DerivativeInstrument_1.insert(DerivativeSecurityDesc_1.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_1("EXCHANGE_1237903459");
  msg.set(DerivativeSecurityExchange_1);
  DerivativeInstrument_1.insert(DerivativeSecurityExchange_1.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_1("STRING_674157386");
  msg.set(DerivativeSecurityGroup_1);
  DerivativeInstrument_1.insert(DerivativeSecurityGroup_1.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_1("STRING_144314222");
  msg.set(DerivativeSecurityID_1);
  DerivativeInstrument_1.insert(DerivativeSecurityID_1.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_1("STRING_94393953");
  msg.set(DerivativeSecurityIDSource_1);
  DerivativeInstrument_1.insert(DerivativeSecurityIDSource_1.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_1("STRING_1120365907");
  msg.set(DerivativeSecurityStatus_1);
  DerivativeInstrument_1.insert(DerivativeSecurityStatus_1.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_1("STRING_436110436");
  msg.set(DerivativeSecuritySubType_1);
  DerivativeInstrument_1.insert(DerivativeSecuritySubType_1.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_1("STRING_1565272614");
  msg.set(DerivativeSecurityType_1);
  DerivativeInstrument_1.insert(DerivativeSecurityType_1.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_1('9');
  msg.set(DerivativeSettlMethod_1);
  DerivativeInstrument_1.insert(DerivativeSettlMethod_1.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_1("STRING_1775660746");
  msg.set(DerivativeSettleOnOpenFlag_1);
  DerivativeInstrument_1.insert(DerivativeSettleOnOpenFlag_1.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_1("STRING_872654396");
  msg.set(DerivativeStateOrProvinceOfIssue_1);
  DerivativeInstrument_1.insert(DerivativeStateOrProvinceOfIssue_1.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_1("CAN");
  msg.set(DerivativeStrikeCurrency_1);
  DerivativeInstrument_1.insert(DerivativeStrikeCurrency_1.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_1;
  DerivativeStrikeMultiplier_1.setString("18451798");
  msg.set(DerivativeStrikeMultiplier_1);
  DerivativeInstrument_1.insert(DerivativeStrikeMultiplier_1.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_1;
  DerivativeStrikePrice_1.setString("16774701");
  msg.set(DerivativeStrikePrice_1);
  DerivativeInstrument_1.insert(DerivativeStrikePrice_1.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_1;
  DerivativeStrikeValue_1.setString("12809357");
  msg.set(DerivativeStrikeValue_1);
  DerivativeInstrument_1.insert(DerivativeStrikeValue_1.getString());
  FIX::DerivativeSymbol DerivativeSymbol_1("STRING_1759653477");
  msg.set(DerivativeSymbol_1);
  DerivativeInstrument_1.insert(DerivativeSymbol_1.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_1("STRING_175586229");
  msg.set(DerivativeSymbolSfx_1);
  DerivativeInstrument_1.insert(DerivativeSymbolSfx_1.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_1("STRING_1363923009");
  msg.set(DerivativeTimeUnit_1);
  DerivativeInstrument_1.insert(DerivativeTimeUnit_1.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_1("STRING_1905819363");
  msg.set(DerivativeUnitOfMeasure_1);
  DerivativeInstrument_1.insert(DerivativeUnitOfMeasure_1.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_1;
  DerivativeUnitOfMeasureQty_1.setString("14556072");
  msg.set(DerivativeUnitOfMeasureQty_1);
  DerivativeInstrument_1.insert(DerivativeUnitOfMeasureQty_1.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_1("STRING_1039724647");
  msg.set(DerivativeValuationMethod_1);
  DerivativeInstrument_1.insert(DerivativeValuationMethod_1.getString());
  all_values.push_back(DerivativeInstrument_1);
  all_compo_names.insert("DerivativeInstrument");

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_3;
    FIX::DerivativeEventDate DerivativeEventDate_3("LOCALMKTDATE_417640752");
    noDerivativeEvents_0_0.set(DerivativeEventDate_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventDate_3.getString());
    FIX::DerivativeEventPx DerivativeEventPx_3;
    DerivativeEventPx_3.setString("1909057");
    noDerivativeEvents_0_0.set(DerivativeEventPx_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventPx_3.getString());
    FIX::DerivativeEventText DerivativeEventText_3("STRING_1909217711");
    noDerivativeEvents_0_0.set(DerivativeEventText_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventText_3.getString());
    FIX::DerivativeEventTime DerivativeEventTime_3(FIX::UTCTIMESTAMP(19, 52, 51, 6, 12, 2004));
    noDerivativeEvents_0_0.set(DerivativeEventTime_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventTime_3.getString());
    FIX::DerivativeEventType DerivativeEventType_3(934805556);
    noDerivativeEvents_0_0.set(DerivativeEventType_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventType_3.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_3);
    all_compo_names.insert("DerivativeEventsGrp.NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_4;
    FIX::DerivativeEventDate DerivativeEventDate_4("LOCALMKTDATE_747659065");
    noDerivativeEvents_0_1.set(DerivativeEventDate_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventDate_4.getString());
    FIX::DerivativeEventPx DerivativeEventPx_4;
    DerivativeEventPx_4.setString("16326807");
    noDerivativeEvents_0_1.set(DerivativeEventPx_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventPx_4.getString());
    FIX::DerivativeEventText DerivativeEventText_4("STRING_2055171464");
    noDerivativeEvents_0_1.set(DerivativeEventText_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventText_4.getString());
    FIX::DerivativeEventTime DerivativeEventTime_4(FIX::UTCTIMESTAMP(6, 57, 20, 22, 7, 2005));
    noDerivativeEvents_0_1.set(DerivativeEventTime_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventTime_4.getString());
    FIX::DerivativeEventType DerivativeEventType_4(1620820322);
    noDerivativeEvents_0_1.set(DerivativeEventType_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventType_4.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_4);
    all_compo_names.insert("DerivativeEventsGrp.NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_1);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_1;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_1("STRING_1313932787");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyID_1.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_1("STRING_1232990151");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyIDSource_1.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_1(1091907774);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyRole_1.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);
    all_compo_names.insert("DerivativeInstrumentParties.NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_3("STRING_991325866");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_3);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3.insert(DerivativeInstrumentPartySubID_3.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_3(400031342);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_3);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3.insert(DerivativeInstrumentPartySubIDType_3.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_2;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_2("STRING_1570096796");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyID_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyID_2.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_2("STRING_1051554599");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyIDSource_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyIDSource_2.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_2(817672095);
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyRole_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyRole_2.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);
    all_compo_names.insert("DerivativeInstrumentParties.NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_4("STRING_813288663");
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubID_4);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4.insert(DerivativeInstrumentPartySubID_4.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_4(1928852430);
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubIDType_4);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4.insert(DerivativeInstrumentPartySubIDType_4.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_2;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_3;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_3("STRING_1160666405");
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyID_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyID_3.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_3("STRING_499726367");
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyIDSource_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyIDSource_3.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_3(81752113);
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyRole_3);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_3.insert(DerivativeInstrumentPartyRole_3.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);
    all_compo_names.insert("DerivativeInstrumentParties.NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_5("STRING_1103071210");
      noDerivativeInstrumentPartySubIDs_2_1_0.set(DerivativeInstrumentPartySubID_5);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5.insert(DerivativeInstrumentPartySubID_5.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_5(1620038904);
      noDerivativeInstrumentPartySubIDs_2_1_0.set(DerivativeInstrumentPartySubIDType_5);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5.insert(DerivativeInstrumentPartySubIDType_5.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

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
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_3("STRING_1850730276");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_3);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3.insert(DerivativeSecurityAltID_3.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_3("STRING_1105236000");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_3);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3.insert(DerivativeSecurityAltIDSource_3.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3);
    all_compo_names.insert("DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_4("STRING_116324300");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltID_4);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4.insert(DerivativeSecurityAltID_4.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_4("STRING_887016130");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltIDSource_4);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4.insert(DerivativeSecurityAltIDSource_4.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4);
    all_compo_names.insert("DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_2;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_5("STRING_8222062");
    noDerivativeSecurityAltID_0_2.set(DerivativeSecurityAltID_5);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5.insert(DerivativeSecurityAltID_5.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_5("STRING_966054257");
    noDerivativeSecurityAltID_0_2.set(DerivativeSecurityAltIDSource_5);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5.insert(DerivativeSecurityAltIDSource_5.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5);
    all_compo_names.insert("DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_2);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_2;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_3("DATA_1698962730");
  msg.set(DerivativeSecurityXML_3);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_1(1931346168);
  msg.set(DerivativeSecurityXMLLen_1);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_1("STRING_204905667");
  msg.set(DerivativeSecurityXMLSchema_1);
  DerivativeSecurityXML_2.insert(DerivativeSecurityXMLSchema_1.getString());
  all_values.push_back(DerivativeSecurityXML_2);
  all_compo_names.insert("DerivativeSecurityXML");

  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_33;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_33("DATA_1731959777");
  msg.set(EncodedUnderlyingIssuer_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingIssuer_33.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_33(1404682842);
  msg.set(EncodedUnderlyingIssuerLen_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingIssuerLen_33.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_33("DATA_1121227211");
  msg.set(EncodedUnderlyingSecurityDesc_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingSecurityDesc_33.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_33(898408916);
  msg.set(EncodedUnderlyingSecurityDescLen_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingSecurityDescLen_33.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_33;
  UnderlyingAdjustedQuantity_33.setString("4901893");
  msg.set(UnderlyingAdjustedQuantity_33);
  UnderlyingInstrument_33.insert(UnderlyingAdjustedQuantity_33.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_33;
  UnderlyingAllocationPercent_33.setString("13.370000");
  msg.set(UnderlyingAllocationPercent_33);
  UnderlyingInstrument_33.insert(UnderlyingAllocationPercent_33.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_33;
  UnderlyingAttachmentPoint_33.setString("10.650000");
  msg.set(UnderlyingAttachmentPoint_33);
  UnderlyingInstrument_33.insert(UnderlyingAttachmentPoint_33.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_33("STRING_1481515211");
  msg.set(UnderlyingCFICode_33);
  UnderlyingInstrument_33.insert(UnderlyingCFICode_33.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_33("STRING_465682680");
  msg.set(UnderlyingCPProgram_33);
  UnderlyingInstrument_33.insert(UnderlyingCPProgram_33.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_33("STRING_851394213");
  msg.set(UnderlyingCPRegType_33);
  UnderlyingInstrument_33.insert(UnderlyingCPRegType_33.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_33;
  UnderlyingCapValue_33.setString("3855861");
  msg.set(UnderlyingCapValue_33);
  UnderlyingInstrument_33.insert(UnderlyingCapValue_33.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_33;
  UnderlyingCashAmount_33.setString("12833547");
  msg.set(UnderlyingCashAmount_33);
  UnderlyingInstrument_33.insert(UnderlyingCashAmount_33.getString());
  FIX::UnderlyingCashType UnderlyingCashType_33("STRING_DIFF");
  msg.set(UnderlyingCashType_33);
  UnderlyingInstrument_33.insert(UnderlyingCashType_33.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_33;
  UnderlyingContractMultiplier_33.setString("11988748");
  msg.set(UnderlyingContractMultiplier_33);
  UnderlyingInstrument_33.insert(UnderlyingContractMultiplier_33.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_33(1064723557);
  msg.set(UnderlyingContractMultiplierUnit_33);
  UnderlyingInstrument_33.insert(UnderlyingContractMultiplierUnit_33.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_33("COUNTRY_1625579508");
  msg.set(UnderlyingCountryOfIssue_33);
  UnderlyingInstrument_33.insert(UnderlyingCountryOfIssue_33.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_33("LOCALMKTDATE_1698601192");
  msg.set(UnderlyingCouponPaymentDate_33);
  UnderlyingInstrument_33.insert(UnderlyingCouponPaymentDate_33.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_33;
  UnderlyingCouponRate_33.setString("56.710000");
  msg.set(UnderlyingCouponRate_33);
  UnderlyingInstrument_33.insert(UnderlyingCouponRate_33.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_33("STRING_899410436");
  msg.set(UnderlyingCreditRating_33);
  UnderlyingInstrument_33.insert(UnderlyingCreditRating_33.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_33("EUR");
  msg.set(UnderlyingCurrency_33);
  UnderlyingInstrument_33.insert(UnderlyingCurrency_33.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_33;
  UnderlyingCurrentValue_33.setString("11080469");
  msg.set(UnderlyingCurrentValue_33);
  UnderlyingInstrument_33.insert(UnderlyingCurrentValue_33.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_33;
  UnderlyingDetachmentPoint_33.setString("53.830000");
  msg.set(UnderlyingDetachmentPoint_33);
  UnderlyingInstrument_33.insert(UnderlyingDetachmentPoint_33.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_33;
  UnderlyingDirtyPrice_33.setString("17242669");
  msg.set(UnderlyingDirtyPrice_33);
  UnderlyingInstrument_33.insert(UnderlyingDirtyPrice_33.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_33;
  UnderlyingEndPrice_33.setString("12243712");
  msg.set(UnderlyingEndPrice_33);
  UnderlyingInstrument_33.insert(UnderlyingEndPrice_33.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_33;
  UnderlyingEndValue_33.setString("12444515");
  msg.set(UnderlyingEndValue_33);
  UnderlyingInstrument_33.insert(UnderlyingEndValue_33.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_33(1732488989);
  msg.set(UnderlyingExerciseStyle_33);
  UnderlyingInstrument_33.insert(UnderlyingExerciseStyle_33.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_33;
  UnderlyingFXRate_33.setString("429418");
  msg.set(UnderlyingFXRate_33);
  UnderlyingInstrument_33.insert(UnderlyingFXRate_33.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_33('M');
  msg.set(UnderlyingFXRateCalc_33);
  UnderlyingInstrument_33.insert(UnderlyingFXRateCalc_33.getString());
  FIX::UnderlyingFactor UnderlyingFactor_33;
  UnderlyingFactor_33.setString("15163515");
  msg.set(UnderlyingFactor_33);
  UnderlyingInstrument_33.insert(UnderlyingFactor_33.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_33(247847496);
  msg.set(UnderlyingFlowScheduleType_33);
  UnderlyingInstrument_33.insert(UnderlyingFlowScheduleType_33.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_33("STRING_380406724");
  msg.set(UnderlyingInstrRegistry_33);
  UnderlyingInstrument_33.insert(UnderlyingInstrRegistry_33.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_33("LOCALMKTDATE_773550703");
  msg.set(UnderlyingIssueDate_33);
  UnderlyingInstrument_33.insert(UnderlyingIssueDate_33.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_33("STRING_1369074707");
  msg.set(UnderlyingIssuer_33);
  UnderlyingInstrument_33.insert(UnderlyingIssuer_33.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_33("STRING_1278815641");
  msg.set(UnderlyingLocaleOfIssue_33);
  UnderlyingInstrument_33.insert(UnderlyingLocaleOfIssue_33.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_33("LOCALMKTDATE_1263740048");
  msg.set(UnderlyingMaturityDate_33);
  UnderlyingInstrument_33.insert(UnderlyingMaturityDate_33.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_33("MONTHYEAR_1434726045");
  msg.set(UnderlyingMaturityMonthYear_33);
  UnderlyingInstrument_33.insert(UnderlyingMaturityMonthYear_33.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_33("TZTIMEONLY_560113058");
  msg.set(UnderlyingMaturityTime_33);
  UnderlyingInstrument_33.insert(UnderlyingMaturityTime_33.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_33;
  UnderlyingNotionalPercentageOutstanding_33.setString("16.110000");
  msg.set(UnderlyingNotionalPercentageOutstanding_33);
  UnderlyingInstrument_33.insert(UnderlyingNotionalPercentageOutstanding_33.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_33('1');
  msg.set(UnderlyingOptAttribute_33);
  UnderlyingInstrument_33.insert(UnderlyingOptAttribute_33.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_33;
  UnderlyingOriginalNotionalPercentageOutstanding_33.setString("72.710000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_33);
  UnderlyingInstrument_33.insert(UnderlyingOriginalNotionalPercentageOutstanding_33.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_33("STRING_983357773");
  msg.set(UnderlyingPriceUnitOfMeasure_33);
  UnderlyingInstrument_33.insert(UnderlyingPriceUnitOfMeasure_33.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_33;
  UnderlyingPriceUnitOfMeasureQty_33.setString("10362798");
  msg.set(UnderlyingPriceUnitOfMeasureQty_33);
  UnderlyingInstrument_33.insert(UnderlyingPriceUnitOfMeasureQty_33.getString());
  FIX::UnderlyingProduct UnderlyingProduct_33(1876420374);
  msg.set(UnderlyingProduct_33);
  UnderlyingInstrument_33.insert(UnderlyingProduct_33.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_33(34748951);
  msg.set(UnderlyingPutOrCall_33);
  UnderlyingInstrument_33.insert(UnderlyingPutOrCall_33.getString());
  FIX::UnderlyingPx UnderlyingPx_33;
  UnderlyingPx_33.setString("21010034");
  msg.set(UnderlyingPx_33);
  UnderlyingInstrument_33.insert(UnderlyingPx_33.getString());
  FIX::UnderlyingQty UnderlyingQty_33;
  UnderlyingQty_33.setString("13545162");
  msg.set(UnderlyingQty_33);
  UnderlyingInstrument_33.insert(UnderlyingQty_33.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_33("LOCALMKTDATE_1733350143");
  msg.set(UnderlyingRedemptionDate_33);
  UnderlyingInstrument_33.insert(UnderlyingRedemptionDate_33.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_33("STRING_1099995432");
  msg.set(UnderlyingRepoCollateralSecurityType_33);
  UnderlyingInstrument_33.insert(UnderlyingRepoCollateralSecurityType_33.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_33;
  UnderlyingRepurchaseRate_33.setString("30.220000");
  msg.set(UnderlyingRepurchaseRate_33);
  UnderlyingInstrument_33.insert(UnderlyingRepurchaseRate_33.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_33(240055250);
  msg.set(UnderlyingRepurchaseTerm_33);
  UnderlyingInstrument_33.insert(UnderlyingRepurchaseTerm_33.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_33("STRING_1719026359");
  msg.set(UnderlyingRestructuringType_33);
  UnderlyingInstrument_33.insert(UnderlyingRestructuringType_33.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_33("STRING_1214489942");
  msg.set(UnderlyingSecurityDesc_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityDesc_33.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_33("EXCHANGE_597490633");
  msg.set(UnderlyingSecurityExchange_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityExchange_33.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_33("STRING_1295809638");
  msg.set(UnderlyingSecurityID_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityID_33.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_33("STRING_291377514");
  msg.set(UnderlyingSecurityIDSource_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityIDSource_33.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_33("STRING_1841942146");
  msg.set(UnderlyingSecuritySubType_33);
  UnderlyingInstrument_33.insert(UnderlyingSecuritySubType_33.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_33("STRING_880814979");
  msg.set(UnderlyingSecurityType_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityType_33.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_33("STRING_334319343");
  msg.set(UnderlyingSeniority_33);
  UnderlyingInstrument_33.insert(UnderlyingSeniority_33.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_33("STRING_490389093");
  msg.set(UnderlyingSettlMethod_33);
  UnderlyingInstrument_33.insert(UnderlyingSettlMethod_33.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_33(4);
  msg.set(UnderlyingSettlementType_33);
  UnderlyingInstrument_33.insert(UnderlyingSettlementType_33.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_33;
  UnderlyingStartValue_33.setString("5821668");
  msg.set(UnderlyingStartValue_33);
  UnderlyingInstrument_33.insert(UnderlyingStartValue_33.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_33("STRING_870795818");
  msg.set(UnderlyingStateOrProvinceOfIssue_33);
  UnderlyingInstrument_33.insert(UnderlyingStateOrProvinceOfIssue_33.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_33("CHF");
  msg.set(UnderlyingStrikeCurrency_33);
  UnderlyingInstrument_33.insert(UnderlyingStrikeCurrency_33.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_33;
  UnderlyingStrikePrice_33.setString("21278");
  msg.set(UnderlyingStrikePrice_33);
  UnderlyingInstrument_33.insert(UnderlyingStrikePrice_33.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_33("STRING_139489943");
  msg.set(UnderlyingSymbol_33);
  UnderlyingInstrument_33.insert(UnderlyingSymbol_33.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_33("STRING_1238483944");
  msg.set(UnderlyingSymbolSfx_33);
  UnderlyingInstrument_33.insert(UnderlyingSymbolSfx_33.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_33("STRING_562240869");
  msg.set(UnderlyingTimeUnit_33);
  UnderlyingInstrument_33.insert(UnderlyingTimeUnit_33.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_33("STRING_737261554");
  msg.set(UnderlyingUnitOfMeasure_33);
  UnderlyingInstrument_33.insert(UnderlyingUnitOfMeasure_33.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_33;
  UnderlyingUnitOfMeasureQty_33.setString("9914090");
  msg.set(UnderlyingUnitOfMeasureQty_33);
  UnderlyingInstrument_33.insert(UnderlyingUnitOfMeasureQty_33.getString());
  all_values.push_back(UnderlyingInstrument_33);
  all_compo_names.insert("UnderlyingInstrument");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_71;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_71("STRING_1720619328");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_71);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_71.insert(UnderlyingSecurityAltID_71.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_71("STRING_2027688873");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_71);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_71.insert(UnderlyingSecurityAltIDSource_71.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_71);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_72;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_72("STRING_1702684866");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_72);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_72.insert(UnderlyingSecurityAltID_72.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_72("STRING_1755368279");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_72);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_72.insert(UnderlyingSecurityAltIDSource_72.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_72);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_73;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_73("STRING_1981208634");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_73);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_73.insert(UnderlyingSecurityAltID_73.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_73("STRING_909717452");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_73);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_73.insert(UnderlyingSecurityAltIDSource_73.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_73);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_67;
    FIX::UnderlyingStipType UnderlyingStipType_67("STRING_933720419");
    noUnderlyingStips_0_0.set(UnderlyingStipType_67);
    UnderlyingStipulations_NoUnderlyingStips_67.insert(UnderlyingStipType_67.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_67("STRING_1016160475");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_67);
    UnderlyingStipulations_NoUnderlyingStips_67.insert(UnderlyingStipValue_67.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_67);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_64;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_64("STRING_505263130");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_64);
    UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyID_64.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_64('8');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_64);
    UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyIDSource_64.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_64(31297010);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_64);
    UndlyInstrumentParties_NoUndlyInstrumentParties_64.insert(UnderlyingInstrumentPartyRole_64.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_64);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_127("STRING_374544284");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_127);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127.insert(UnderlyingInstrumentPartySubID_127.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_127(1873239157);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_127);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127.insert(UnderlyingInstrumentPartySubIDType_127.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_128("STRING_534404100");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_128);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128.insert(UnderlyingInstrumentPartySubID_128.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_128(708863627);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_128);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128.insert(UnderlyingInstrumentPartySubIDType_128.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_129("STRING_216144602");
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubID_129);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129.insert(UnderlyingInstrumentPartySubID_129.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_129(784086941);
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubIDType_129);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129.insert(UnderlyingInstrumentPartySubIDType_129.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
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
