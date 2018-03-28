#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/DerivativeSecurityList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityList, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DerivativeSecurityList msg;

  list<multiset<string>> all_values;
  multiset<string> DerivativeSecurityList_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_13("LOCALMKTDATE_733244605");
  msg.set(ClearingBusinessDate_13);
  DerivativeSecurityList_0.insert(ClearingBusinessDate_13.getString());
  FIX::LastFragment LastFragment_3(true);
  msg.set(LastFragment_3);
  DerivativeSecurityList_0.insert(LastFragment_3.getString());
  FIX::SecurityReportID SecurityReportID_0(836262515);
  msg.set(SecurityReportID_0);
  DerivativeSecurityList_0.insert(SecurityReportID_0.getString());
  FIX::SecurityReqID SecurityReqID_0("STRING_680573001");
  msg.set(SecurityReqID_0);
  DerivativeSecurityList_0.insert(SecurityReqID_0.getString());
  FIX::SecurityRequestResult SecurityRequestResult_0(1);
  msg.set(SecurityRequestResult_0);
  DerivativeSecurityList_0.insert(SecurityRequestResult_0.getString());
  FIX::SecurityResponseID SecurityResponseID_0("STRING_1771417043");
  msg.set(SecurityResponseID_0);
  DerivativeSecurityList_0.insert(SecurityResponseID_0.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_1(989709728);
  msg.set(TotNoRelatedSym_1);
  DerivativeSecurityList_0.insert(TotNoRelatedSym_1.getString());
  FIX::TransactTime TransactTime_16(FIX::UTCTIMESTAMP(18, 15, 0, 6, 1, 2003));
  msg.set(TransactTime_16);
  DerivativeSecurityList_0.insert(TransactTime_16.getString());
  all_values.push_back(DerivativeSecurityList_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_2;
  FIX::ApplID ApplID_2("STRING_955196063");
  msg.set(ApplID_2);
  ApplicationSequenceControl_2.insert(ApplID_2.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_2(1666616781);
  msg.set(ApplLastSeqNum_2);
  ApplicationSequenceControl_2.insert(ApplLastSeqNum_2.getString());
  FIX::ApplResendFlag ApplResendFlag_2(false);
  msg.set(ApplResendFlag_2);
  ApplicationSequenceControl_2.insert(ApplResendFlag_2.getString());
  FIX::ApplSeqNum ApplSeqNum_2(673228997);
  msg.set(ApplSeqNum_2);
  ApplicationSequenceControl_2.insert(ApplSeqNum_2.getString());
  all_values.push_back(ApplicationSequenceControl_2);

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_0;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_0(false);
  msg.set(DerivFlexProductEligibilityIndicator_0);
  DerivativeInstrument_0.insert(DerivFlexProductEligibilityIndicator_0.getString());
  FIX::DerivativeCFICode DerivativeCFICode_0("STRING_1436223911");
  msg.set(DerivativeCFICode_0);
  DerivativeInstrument_0.insert(DerivativeCFICode_0.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_0;
  DerivativeCapPrice_0.setString("133605");
  msg.set(DerivativeCapPrice_0);
  DerivativeInstrument_0.insert(DerivativeCapPrice_0.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_0;
  DerivativeContractMultiplier_0.setString("18653700");
  msg.set(DerivativeContractMultiplier_0);
  DerivativeInstrument_0.insert(DerivativeContractMultiplier_0.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_0(1606100451);
  msg.set(DerivativeContractMultiplierUnit_0);
  DerivativeInstrument_0.insert(DerivativeContractMultiplierUnit_0.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_0("MONTHYEAR_1243346396");
  msg.set(DerivativeContractSettlMonth_0);
  DerivativeInstrument_0.insert(DerivativeContractSettlMonth_0.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_0("COUNTRY_411320524");
  msg.set(DerivativeCountryOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeCountryOfIssue_0.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_0("DATA_565627636");
  msg.set(DerivativeEncodedIssuer_0);
  DerivativeInstrument_0.insert(DerivativeEncodedIssuer_0.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_0(1290813876);
  msg.set(DerivativeEncodedIssuerLen_0);
  DerivativeInstrument_0.insert(DerivativeEncodedIssuerLen_0.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_0("DATA_660366786");
  msg.set(DerivativeEncodedSecurityDesc_0);
  DerivativeInstrument_0.insert(DerivativeEncodedSecurityDesc_0.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_0(468170404);
  msg.set(DerivativeEncodedSecurityDescLen_0);
  DerivativeInstrument_0.insert(DerivativeEncodedSecurityDescLen_0.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_0('5');
  msg.set(DerivativeExerciseStyle_0);
  DerivativeInstrument_0.insert(DerivativeExerciseStyle_0.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_0;
  DerivativeFloorPrice_0.setString("20988851");
  msg.set(DerivativeFloorPrice_0);
  DerivativeInstrument_0.insert(DerivativeFloorPrice_0.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_0(1201415009);
  msg.set(DerivativeFlowScheduleType_0);
  DerivativeInstrument_0.insert(DerivativeFlowScheduleType_0.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_0("STRING_242613973");
  msg.set(DerivativeInstrRegistry_0);
  DerivativeInstrument_0.insert(DerivativeInstrRegistry_0.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_0('7');
  msg.set(DerivativeInstrmtAssignmentMethod_0);
  DerivativeInstrument_0.insert(DerivativeInstrmtAssignmentMethod_0.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_0("LOCALMKTDATE_1881988010");
  msg.set(DerivativeIssueDate_0);
  DerivativeInstrument_0.insert(DerivativeIssueDate_0.getString());
  FIX::DerivativeIssuer DerivativeIssuer_0("STRING_1263235334");
  msg.set(DerivativeIssuer_0);
  DerivativeInstrument_0.insert(DerivativeIssuer_0.getString());
  FIX::DerivativeListMethod DerivativeListMethod_0(411597376);
  msg.set(DerivativeListMethod_0);
  DerivativeInstrument_0.insert(DerivativeListMethod_0.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_0("STRING_724214090");
  msg.set(DerivativeLocaleOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeLocaleOfIssue_0.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_0("LOCALMKTDATE_1244329500");
  msg.set(DerivativeMaturityDate_0);
  DerivativeInstrument_0.insert(DerivativeMaturityDate_0.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_0("MONTHYEAR_1093317706");
  msg.set(DerivativeMaturityMonthYear_0);
  DerivativeInstrument_0.insert(DerivativeMaturityMonthYear_0.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_0("TZTIMEONLY_1763266145");
  msg.set(DerivativeMaturityTime_0);
  DerivativeInstrument_0.insert(DerivativeMaturityTime_0.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_0;
  DerivativeMinPriceIncrement_0.setString("11510950");
  msg.set(DerivativeMinPriceIncrement_0);
  DerivativeInstrument_0.insert(DerivativeMinPriceIncrement_0.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_0;
  DerivativeMinPriceIncrementAmount_0.setString("497448");
  msg.set(DerivativeMinPriceIncrementAmount_0);
  DerivativeInstrument_0.insert(DerivativeMinPriceIncrementAmount_0.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_0(1874088413);
  msg.set(DerivativeNTPositionLimit_0);
  DerivativeInstrument_0.insert(DerivativeNTPositionLimit_0.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_0('1');
  msg.set(DerivativeOptAttribute_0);
  DerivativeInstrument_0.insert(DerivativeOptAttribute_0.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_0;
  DerivativeOptPayAmount_0.setString("10049409");
  msg.set(DerivativeOptPayAmount_0);
  DerivativeInstrument_0.insert(DerivativeOptPayAmount_0.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_0(1393221547);
  msg.set(DerivativePositionLimit_0);
  DerivativeInstrument_0.insert(DerivativePositionLimit_0.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_0("STRING_545692469");
  msg.set(DerivativePriceQuoteMethod_0);
  DerivativeInstrument_0.insert(DerivativePriceQuoteMethod_0.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_0("STRING_1678169905");
  msg.set(DerivativePriceUnitOfMeasure_0);
  DerivativeInstrument_0.insert(DerivativePriceUnitOfMeasure_0.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_0;
  DerivativePriceUnitOfMeasureQty_0.setString("442280");
  msg.set(DerivativePriceUnitOfMeasureQty_0);
  DerivativeInstrument_0.insert(DerivativePriceUnitOfMeasureQty_0.getString());
  FIX::DerivativeProduct DerivativeProduct_0(1981916380);
  msg.set(DerivativeProduct_0);
  DerivativeInstrument_0.insert(DerivativeProduct_0.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_0("STRING_1691530405");
  msg.set(DerivativeProductComplex_0);
  DerivativeInstrument_0.insert(DerivativeProductComplex_0.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_0(1909598137);
  msg.set(DerivativePutOrCall_0);
  DerivativeInstrument_0.insert(DerivativePutOrCall_0.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_0("STRING_1440533183");
  msg.set(DerivativeSecurityDesc_0);
  DerivativeInstrument_0.insert(DerivativeSecurityDesc_0.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_0("EXCHANGE_787393153");
  msg.set(DerivativeSecurityExchange_0);
  DerivativeInstrument_0.insert(DerivativeSecurityExchange_0.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_0("STRING_173435013");
  msg.set(DerivativeSecurityGroup_0);
  DerivativeInstrument_0.insert(DerivativeSecurityGroup_0.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_0("STRING_2006160820");
  msg.set(DerivativeSecurityID_0);
  DerivativeInstrument_0.insert(DerivativeSecurityID_0.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_0("STRING_2078207029");
  msg.set(DerivativeSecurityIDSource_0);
  DerivativeInstrument_0.insert(DerivativeSecurityIDSource_0.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_0("STRING_833801800");
  msg.set(DerivativeSecurityStatus_0);
  DerivativeInstrument_0.insert(DerivativeSecurityStatus_0.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_0("STRING_326847576");
  msg.set(DerivativeSecuritySubType_0);
  DerivativeInstrument_0.insert(DerivativeSecuritySubType_0.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_0("STRING_483530976");
  msg.set(DerivativeSecurityType_0);
  DerivativeInstrument_0.insert(DerivativeSecurityType_0.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_0('7');
  msg.set(DerivativeSettlMethod_0);
  DerivativeInstrument_0.insert(DerivativeSettlMethod_0.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_0("STRING_1528262585");
  msg.set(DerivativeSettleOnOpenFlag_0);
  DerivativeInstrument_0.insert(DerivativeSettleOnOpenFlag_0.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_0("STRING_726144949");
  msg.set(DerivativeStateOrProvinceOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeStateOrProvinceOfIssue_0.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_0("USD");
  msg.set(DerivativeStrikeCurrency_0);
  DerivativeInstrument_0.insert(DerivativeStrikeCurrency_0.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_0;
  DerivativeStrikeMultiplier_0.setString("19893802");
  msg.set(DerivativeStrikeMultiplier_0);
  DerivativeInstrument_0.insert(DerivativeStrikeMultiplier_0.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_0;
  DerivativeStrikePrice_0.setString("19844646");
  msg.set(DerivativeStrikePrice_0);
  DerivativeInstrument_0.insert(DerivativeStrikePrice_0.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_0;
  DerivativeStrikeValue_0.setString("19869810");
  msg.set(DerivativeStrikeValue_0);
  DerivativeInstrument_0.insert(DerivativeStrikeValue_0.getString());
  FIX::DerivativeSymbol DerivativeSymbol_0("STRING_1086226136");
  msg.set(DerivativeSymbol_0);
  DerivativeInstrument_0.insert(DerivativeSymbol_0.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_0("STRING_930298680");
  msg.set(DerivativeSymbolSfx_0);
  DerivativeInstrument_0.insert(DerivativeSymbolSfx_0.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_0("STRING_1602763536");
  msg.set(DerivativeTimeUnit_0);
  DerivativeInstrument_0.insert(DerivativeTimeUnit_0.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_0("STRING_89837561");
  msg.set(DerivativeUnitOfMeasure_0);
  DerivativeInstrument_0.insert(DerivativeUnitOfMeasure_0.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_0;
  DerivativeUnitOfMeasureQty_0.setString("9800435");
  msg.set(DerivativeUnitOfMeasureQty_0);
  DerivativeInstrument_0.insert(DerivativeUnitOfMeasureQty_0.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_0("STRING_1329368301");
  msg.set(DerivativeValuationMethod_0);
  DerivativeInstrument_0.insert(DerivativeValuationMethod_0.getString());
  all_values.push_back(DerivativeInstrument_0);

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_0;
    FIX::DerivativeEventDate DerivativeEventDate_0("LOCALMKTDATE_1984984433");
    noDerivativeEvents_0_0.set(DerivativeEventDate_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventDate_0.getString());
    FIX::DerivativeEventPx DerivativeEventPx_0;
    DerivativeEventPx_0.setString("5751062");
    noDerivativeEvents_0_0.set(DerivativeEventPx_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventPx_0.getString());
    FIX::DerivativeEventText DerivativeEventText_0("STRING_1677667702");
    noDerivativeEvents_0_0.set(DerivativeEventText_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventText_0.getString());
    FIX::DerivativeEventTime DerivativeEventTime_0(FIX::UTCTIMESTAMP(11, 54, 28, 0, 11, 2012));
    noDerivativeEvents_0_0.set(DerivativeEventTime_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventTime_0.getString());
    FIX::DerivativeEventType DerivativeEventType_0(554883746);
    noDerivativeEvents_0_0.set(DerivativeEventType_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventType_0.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_0);

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_1;
    FIX::DerivativeEventDate DerivativeEventDate_1("LOCALMKTDATE_663827142");
    noDerivativeEvents_0_1.set(DerivativeEventDate_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventDate_1.getString());
    FIX::DerivativeEventPx DerivativeEventPx_1;
    DerivativeEventPx_1.setString("17778339");
    noDerivativeEvents_0_1.set(DerivativeEventPx_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventPx_1.getString());
    FIX::DerivativeEventText DerivativeEventText_1("STRING_1388685546");
    noDerivativeEvents_0_1.set(DerivativeEventText_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventText_1.getString());
    FIX::DerivativeEventTime DerivativeEventTime_1(FIX::UTCTIMESTAMP(16, 3, 15, 25, 10, 2009));
    noDerivativeEvents_0_1.set(DerivativeEventTime_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventTime_1.getString());
    FIX::DerivativeEventType DerivativeEventType_1(681922897);
    noDerivativeEvents_0_1.set(DerivativeEventType_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventType_1.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_1);

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_2;
    FIX::DerivativeEventDate DerivativeEventDate_2("LOCALMKTDATE_1436253383");
    noDerivativeEvents_0_2.set(DerivativeEventDate_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventDate_2.getString());
    FIX::DerivativeEventPx DerivativeEventPx_2;
    DerivativeEventPx_2.setString("14737179");
    noDerivativeEvents_0_2.set(DerivativeEventPx_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventPx_2.getString());
    FIX::DerivativeEventText DerivativeEventText_2("STRING_1768149034");
    noDerivativeEvents_0_2.set(DerivativeEventText_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventText_2.getString());
    FIX::DerivativeEventTime DerivativeEventTime_2(FIX::UTCTIMESTAMP(2, 15, 1, 15, 1, 2017));
    noDerivativeEvents_0_2.set(DerivativeEventTime_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventTime_2.getString());
    FIX::DerivativeEventType DerivativeEventType_2(685988736);
    noDerivativeEvents_0_2.set(DerivativeEventType_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventType_2.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_2);

    msg.addGroup(noDerivativeEvents_0_2);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_0;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_0("STRING_404799770");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyID_0.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_0("STRING_1305322979");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyIDSource_0.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_0(1884762668);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyRole_0.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_0("STRING_1686771711");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_0);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0.insert(DerivativeInstrumentPartySubID_0.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_0(542428990);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_0);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0.insert(DerivativeInstrumentPartySubIDType_0.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_1;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_1("STRING_1164144172");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyID_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyID_1.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_1("STRING_94171809");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyIDSource_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyIDSource_1.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_1(1206256132);
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyRole_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyRole_1.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_1("STRING_1482857355");
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubID_1);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1.insert(DerivativeInstrumentPartySubID_1.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_1(49447202);
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubIDType_1);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1.insert(DerivativeInstrumentPartySubIDType_1.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_2("STRING_908375820");
      noDerivativeInstrumentPartySubIDs_1_1_1.set(DerivativeInstrumentPartySubID_2);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2.insert(DerivativeInstrumentPartySubID_2.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_2(1509262519);
      noDerivativeInstrumentPartySubIDs_1_1_1.set(DerivativeInstrumentPartySubIDType_2);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2.insert(DerivativeInstrumentPartySubIDType_2.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_2;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_3("STRING_420900858");
      noDerivativeInstrumentPartySubIDs_1_1_2.set(DerivativeInstrumentPartySubID_3);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3.insert(DerivativeInstrumentPartySubID_3.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_3(1748402081);
      noDerivativeInstrumentPartySubIDs_1_1_2.set(DerivativeInstrumentPartySubIDType_3);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3.insert(DerivativeInstrumentPartySubIDType_3.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_2;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_2;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_2("STRING_961051280");
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyID_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyID_2.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_2("STRING_2055121461");
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyIDSource_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyIDSource_2.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_2(282841331);
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyRole_2);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_2.insert(DerivativeInstrumentPartyRole_2.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_4("STRING_1381355807");
      noDerivativeInstrumentPartySubIDs_2_1_0.set(DerivativeInstrumentPartySubID_4);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4.insert(DerivativeInstrumentPartySubID_4.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_4(2050990365);
      noDerivativeInstrumentPartySubIDs_2_1_0.set(DerivativeInstrumentPartySubIDType_4);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4.insert(DerivativeInstrumentPartySubIDType_4.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4);

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_2);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_0("STRING_162870041");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_0);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0.insert(DerivativeSecurityAltID_0.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_0("STRING_1761493312");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_0);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0.insert(DerivativeSecurityAltIDSource_0.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_1("STRING_1668001373");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltID_1);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1.insert(DerivativeSecurityAltID_1.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_1("STRING_273752577");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltIDSource_1);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1.insert(DerivativeSecurityAltIDSource_1.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1);

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_0;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_1("DATA_456487844");
  msg.set(DerivativeSecurityXML_1);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_0(557130452);
  msg.set(DerivativeSecurityXMLLen_0);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_0("STRING_959741313");
  msg.set(DerivativeSecurityXMLSchema_0);
  DerivativeSecurityXML_0.insert(DerivativeSecurityXMLSchema_0.getString());
  all_values.push_back(DerivativeSecurityXML_0);

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_0(961930222);
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribType_0);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0.insert(DerivativeInstrAttribType_0.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_0("STRING_117580644");
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribValue_0);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0.insert(DerivativeInstrAttribValue_0.getString());
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_1;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_1(566429098);
    noDerivativeInstrAttrib_0_1.set(DerivativeInstrAttribType_1);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1.insert(DerivativeInstrAttribType_1.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_1("STRING_278963793");
    noDerivativeInstrAttrib_0_1.set(DerivativeInstrAttribValue_1);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1.insert(DerivativeInstrAttribValue_1.getString());
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1);

    msg.addGroup(noDerivativeInstrAttrib_0_1);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_0;
    FIX::MarketID MarketID_0("EXCHANGE_1108858089");
    noMarketSegments_0_0.set(MarketID_0);
    MarketSegmentGrp_NoMarketSegments_0.insert(MarketID_0.getString());
    FIX::MarketSegmentID MarketSegmentID_0("STRING_1443107965");
    noMarketSegments_0_0.set(MarketSegmentID_0);
    MarketSegmentGrp_NoMarketSegments_0.insert(MarketSegmentID_0.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_0);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_0;
    FIX::ExpirationCycle ExpirationCycle_0(1);
    noMarketSegments_0_0.set(ExpirationCycle_0);
    BaseTradingRules_0.insert(ExpirationCycle_0.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_0(1);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_0);
    BaseTradingRules_0.insert(ImpliedMarketIndicator_0.getString());
    FIX::MaxPriceVariation MaxPriceVariation_0;
    MaxPriceVariation_0.setString("901188");
    noMarketSegments_0_0.set(MaxPriceVariation_0);
    BaseTradingRules_0.insert(MaxPriceVariation_0.getString());
    FIX::MaxTradeVol MaxTradeVol_0;
    MaxTradeVol_0.setString("12338978");
    noMarketSegments_0_0.set(MaxTradeVol_0);
    BaseTradingRules_0.insert(MaxTradeVol_0.getString());
    FIX::MinTradeVol MinTradeVol_0;
    MinTradeVol_0.setString("2170777");
    noMarketSegments_0_0.set(MinTradeVol_0);
    BaseTradingRules_0.insert(MinTradeVol_0.getString());
    FIX::MultilegModel MultilegModel_0(1);
    noMarketSegments_0_0.set(MultilegModel_0);
    BaseTradingRules_0.insert(MultilegModel_0.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_0(1);
    noMarketSegments_0_0.set(MultilegPriceMethod_0);
    BaseTradingRules_0.insert(MultilegPriceMethod_0.getString());
    FIX::PriceType PriceType_11(9);
    noMarketSegments_0_0.set(PriceType_11);
    BaseTradingRules_0.insert(PriceType_11.getString());
    FIX::RoundLot RoundLot_0;
    RoundLot_0.setString("5994130");
    noMarketSegments_0_0.set(RoundLot_0);
    BaseTradingRules_0.insert(RoundLot_0.getString());
    FIX::TradingCurrency TradingCurrency_0("CHF");
    noMarketSegments_0_0.set(TradingCurrency_0);
    BaseTradingRules_0.insert(TradingCurrency_0.getString());
    all_values.push_back(BaseTradingRules_0);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_0;
      FIX::LotType LotType_0('1');
      noLotTypeRules_0_1_0.set(LotType_0);
      LotTypeRules_NoLotTypeRules_0.insert(LotType_0.getString());
      FIX::MinLotSize MinLotSize_0;
      MinLotSize_0.setString("19269722");
      noLotTypeRules_0_1_0.set(MinLotSize_0);
      LotTypeRules_NoLotTypeRules_0.insert(MinLotSize_0.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_0);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_1;
      FIX::LotType LotType_1('4');
      noLotTypeRules_0_1_1.set(LotType_1);
      LotTypeRules_NoLotTypeRules_1.insert(LotType_1.getString());
      FIX::MinLotSize MinLotSize_1;
      MinLotSize_1.setString("1279548");
      noLotTypeRules_0_1_1.set(MinLotSize_1);
      LotTypeRules_NoLotTypeRules_1.insert(MinLotSize_1.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_1);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_0;
    FIX::HighLimitPrice HighLimitPrice_0;
    HighLimitPrice_0.setString("20898422");
    noMarketSegments_0_0.set(HighLimitPrice_0);
    PriceLimits_0.insert(HighLimitPrice_0.getString());
    FIX::LowLimitPrice LowLimitPrice_0;
    LowLimitPrice_0.setString("3997707");
    noMarketSegments_0_0.set(LowLimitPrice_0);
    PriceLimits_0.insert(LowLimitPrice_0.getString());
    FIX::PriceLimitType PriceLimitType_0(2);
    noMarketSegments_0_0.set(PriceLimitType_0);
    PriceLimits_0.insert(PriceLimitType_0.getString());
    FIX::TradingReferencePrice TradingReferencePrice_0;
    TradingReferencePrice_0.setString("2161112");
    noMarketSegments_0_0.set(TradingReferencePrice_0);
    PriceLimits_0.insert(TradingReferencePrice_0.getString());
    all_values.push_back(PriceLimits_0);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_0;
      FIX::EndTickPriceRange EndTickPriceRange_0;
      EndTickPriceRange_0.setString("2056030");
      noTickRules_0_1_0.set(EndTickPriceRange_0);
      TickRules_NoTickRules_0.insert(EndTickPriceRange_0.getString());
      FIX::StartTickPriceRange StartTickPriceRange_0;
      StartTickPriceRange_0.setString("11758525");
      noTickRules_0_1_0.set(StartTickPriceRange_0);
      TickRules_NoTickRules_0.insert(StartTickPriceRange_0.getString());
      FIX::TickIncrement TickIncrement_0;
      TickIncrement_0.setString("16854087");
      noTickRules_0_1_0.set(TickIncrement_0);
      TickRules_NoTickRules_0.insert(TickIncrement_0.getString());
      FIX::TickRuleType TickRuleType_0(4);
      noTickRules_0_1_0.set(TickRuleType_0);
      TickRules_NoTickRules_0.insert(TickRuleType_0.getString());
      all_values.push_back(TickRules_NoTickRules_0);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_0;
      FIX::NestedInstrAttribType NestedInstrAttribType_0(104354163);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_0);
      NestedInstrumentAttribute_NoNestedInstrAttrib_0.insert(NestedInstrAttribType_0.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_0("STRING_1446497017");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_0);
      NestedInstrumentAttribute_NoNestedInstrAttrib_0.insert(NestedInstrAttribValue_0.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_0);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_0;
      FIX::TradingSessionID TradingSessionID_13("STRING_1");
      noTradingSessionRules_0_1_0.set(TradingSessionID_13);
      TradingSessionRulesGrp_NoTradingSessionRules_0.insert(TradingSessionID_13.getString());
      FIX::TradingSessionSubID TradingSessionSubID_13("STRING_5");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_13);
      TradingSessionRulesGrp_NoTradingSessionRules_0.insert(TradingSessionSubID_13.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_0);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_0;
        FIX::ExecInstValue ExecInstValue_0('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_0);
        ExecInstRules_NoExecInstRules_0.insert(ExecInstValue_0.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_0);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_1;
        FIX::ExecInstValue ExecInstValue_1('8');
        noExecInstRules_0_0_2_1.set(ExecInstValue_1);
        ExecInstRules_NoExecInstRules_1.insert(ExecInstValue_1.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_1);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_0;
        FIX::MDBookType MDBookType_0(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MDBookType_0.getString());
        FIX::MDFeedType MDFeedType_0("STRING_1830734806");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MDFeedType_0.getString());
        FIX::MarketDepth MarketDepth_0(383433375);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MarketDepth_0.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_0);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_0;
        FIX::MatchAlgorithm MatchAlgorithm_0("STRING_282664237");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_0);
        MatchRules_NoMatchRules_0.insert(MatchAlgorithm_0.getString());
        FIX::MatchType MatchType_3("STRING_8");
        noMatchRules_0_0_2_0.set(MatchType_3);
        MatchRules_NoMatchRules_0.insert(MatchType_3.getString());
        all_values.push_back(MatchRules_NoMatchRules_0);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_1;
        FIX::MatchAlgorithm MatchAlgorithm_1("STRING_634032035");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_1);
        MatchRules_NoMatchRules_1.insert(MatchAlgorithm_1.getString());
        FIX::MatchType MatchType_4("STRING_M4");
        noMatchRules_0_0_2_1.set(MatchType_4);
        MatchRules_NoMatchRules_1.insert(MatchType_4.getString());
        all_values.push_back(MatchRules_NoMatchRules_1);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_2;
        FIX::MatchAlgorithm MatchAlgorithm_2("STRING_1599226791");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_2);
        MatchRules_NoMatchRules_2.insert(MatchAlgorithm_2.getString());
        FIX::MatchType MatchType_5("STRING_3");
        noMatchRules_0_0_2_2.set(MatchType_5);
        MatchRules_NoMatchRules_2.insert(MatchType_5.getString());
        all_values.push_back(MatchRules_NoMatchRules_2);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_0;
        FIX::OrdType OrdType_1('G');
        noOrdTypeRules_0_0_2_0.set(OrdType_1);
        OrdTypeRules_NoOrdTypeRules_0.insert(OrdType_1.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_0);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_1;
        FIX::OrdType OrdType_2('K');
        noOrdTypeRules_0_0_2_1.set(OrdType_2);
        OrdTypeRules_NoOrdTypeRules_1.insert(OrdType_2.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_1);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_0;
        FIX::TimeInForce TimeInForce_1('4');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_1);
        TimeInForceRules_NoTimeInForceRules_0.insert(TimeInForce_1.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_0);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_1;
      FIX::TradingSessionID TradingSessionID_14("STRING_5");
      noTradingSessionRules_0_1_1.set(TradingSessionID_14);
      TradingSessionRulesGrp_NoTradingSessionRules_1.insert(TradingSessionID_14.getString());
      FIX::TradingSessionSubID TradingSessionSubID_14("STRING_1");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_14);
      TradingSessionRulesGrp_NoTradingSessionRules_1.insert(TradingSessionSubID_14.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_1);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_2;
        FIX::ExecInstValue ExecInstValue_2('1');
        noExecInstRules_0_1_2_0.set(ExecInstValue_2);
        ExecInstRules_NoExecInstRules_2.insert(ExecInstValue_2.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_2);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_1;
        FIX::MDBookType MDBookType_1(1);
        noMDFeedTypes_0_1_2_0.set(MDBookType_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MDBookType_1.getString());
        FIX::MDFeedType MDFeedType_1("STRING_893792589");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MDFeedType_1.getString());
        FIX::MarketDepth MarketDepth_1(701504780);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MarketDepth_1.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_1);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_2;
        FIX::MDBookType MDBookType_2(2);
        noMDFeedTypes_0_1_2_1.set(MDBookType_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MDBookType_2.getString());
        FIX::MDFeedType MDFeedType_2("STRING_1844094479");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MDFeedType_2.getString());
        FIX::MarketDepth MarketDepth_2(1914717033);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MarketDepth_2.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_2);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_3;
        FIX::MDBookType MDBookType_3(1);
        noMDFeedTypes_0_1_2_2.set(MDBookType_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MDBookType_3.getString());
        FIX::MDFeedType MDFeedType_3("STRING_397953238");
        noMDFeedTypes_0_1_2_2.set(MDFeedType_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MDFeedType_3.getString());
        FIX::MarketDepth MarketDepth_3(1148076211);
        noMDFeedTypes_0_1_2_2.set(MarketDepth_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MarketDepth_3.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_3);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_3;
        FIX::MatchAlgorithm MatchAlgorithm_3("STRING_185709870");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_3);
        MatchRules_NoMatchRules_3.insert(MatchAlgorithm_3.getString());
        FIX::MatchType MatchType_6("STRING_4");
        noMatchRules_0_1_2_0.set(MatchType_6);
        MatchRules_NoMatchRules_3.insert(MatchType_6.getString());
        all_values.push_back(MatchRules_NoMatchRules_3);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_2;
        FIX::OrdType OrdType_3('M');
        noOrdTypeRules_0_1_2_0.set(OrdType_3);
        OrdTypeRules_NoOrdTypeRules_2.insert(OrdType_3.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_2);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_3;
        FIX::OrdType OrdType_4('A');
        noOrdTypeRules_0_1_2_1.set(OrdType_4);
        OrdTypeRules_NoOrdTypeRules_3.insert(OrdType_4.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_3);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_4;
        FIX::OrdType OrdType_5('4');
        noOrdTypeRules_0_1_2_2.set(OrdType_5);
        OrdTypeRules_NoOrdTypeRules_4.insert(OrdType_5.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_4);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_1;
        FIX::TimeInForce TimeInForce_2('8');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_2);
        TimeInForceRules_NoTimeInForceRules_1.insert(TimeInForce_2.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_1);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_2;
        FIX::TimeInForce TimeInForce_3('2');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_3);
        TimeInForceRules_NoTimeInForceRules_2.insert(TimeInForce_3.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_2);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_3;
        FIX::TimeInForce TimeInForce_4('7');
        noTimeInForceRules_0_1_2_2.set(TimeInForce_4);
        TimeInForceRules_NoTimeInForceRules_3.insert(TimeInForce_4.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_3);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_2;
      FIX::TradingSessionID TradingSessionID_15("STRING_4");
      noTradingSessionRules_0_1_2.set(TradingSessionID_15);
      TradingSessionRulesGrp_NoTradingSessionRules_2.insert(TradingSessionID_15.getString());
      FIX::TradingSessionSubID TradingSessionSubID_15("STRING_1");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_15);
      TradingSessionRulesGrp_NoTradingSessionRules_2.insert(TradingSessionSubID_15.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_2);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_3;
        FIX::ExecInstValue ExecInstValue_3('2');
        noExecInstRules_0_2_2_0.set(ExecInstValue_3);
        ExecInstRules_NoExecInstRules_3.insert(ExecInstValue_3.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_3);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_4;
        FIX::MDBookType MDBookType_4(2);
        noMDFeedTypes_0_2_2_0.set(MDBookType_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MDBookType_4.getString());
        FIX::MDFeedType MDFeedType_4("STRING_514867590");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MDFeedType_4.getString());
        FIX::MarketDepth MarketDepth_4(1523420597);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MarketDepth_4.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_4);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_5;
        FIX::MDBookType MDBookType_5(1);
        noMDFeedTypes_0_2_2_1.set(MDBookType_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MDBookType_5.getString());
        FIX::MDFeedType MDFeedType_5("STRING_115226997");
        noMDFeedTypes_0_2_2_1.set(MDFeedType_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MDFeedType_5.getString());
        FIX::MarketDepth MarketDepth_5(2120571214);
        noMDFeedTypes_0_2_2_1.set(MarketDepth_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MarketDepth_5.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_5);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_6;
        FIX::MDBookType MDBookType_6(1);
        noMDFeedTypes_0_2_2_2.set(MDBookType_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MDBookType_6.getString());
        FIX::MDFeedType MDFeedType_6("STRING_1009019587");
        noMDFeedTypes_0_2_2_2.set(MDFeedType_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MDFeedType_6.getString());
        FIX::MarketDepth MarketDepth_6(674592346);
        noMDFeedTypes_0_2_2_2.set(MarketDepth_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MarketDepth_6.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_6);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_4;
        FIX::MatchAlgorithm MatchAlgorithm_4("STRING_705630418");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_4);
        MatchRules_NoMatchRules_4.insert(MatchAlgorithm_4.getString());
        FIX::MatchType MatchType_7("STRING_M4");
        noMatchRules_0_2_2_0.set(MatchType_7);
        MatchRules_NoMatchRules_4.insert(MatchType_7.getString());
        all_values.push_back(MatchRules_NoMatchRules_4);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_5;
        FIX::MatchAlgorithm MatchAlgorithm_5("STRING_1346758092");
        noMatchRules_0_2_2_1.set(MatchAlgorithm_5);
        MatchRules_NoMatchRules_5.insert(MatchAlgorithm_5.getString());
        FIX::MatchType MatchType_8("STRING_8");
        noMatchRules_0_2_2_1.set(MatchType_8);
        MatchRules_NoMatchRules_5.insert(MatchType_8.getString());
        all_values.push_back(MatchRules_NoMatchRules_5);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_6;
        FIX::MatchAlgorithm MatchAlgorithm_6("STRING_1589901942");
        noMatchRules_0_2_2_2.set(MatchAlgorithm_6);
        MatchRules_NoMatchRules_6.insert(MatchAlgorithm_6.getString());
        FIX::MatchType MatchType_9("STRING_A5");
        noMatchRules_0_2_2_2.set(MatchType_9);
        MatchRules_NoMatchRules_6.insert(MatchType_9.getString());
        all_values.push_back(MatchRules_NoMatchRules_6);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_5;
        FIX::OrdType OrdType_6('C');
        noOrdTypeRules_0_2_2_0.set(OrdType_6);
        OrdTypeRules_NoOrdTypeRules_5.insert(OrdType_6.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_5);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_4;
        FIX::TimeInForce TimeInForce_5('2');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_5);
        TimeInForceRules_NoTimeInForceRules_4.insert(TimeInForce_5.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_4);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_0;
      FIX::EndStrikePxRange EndStrikePxRange_0;
      EndStrikePxRange_0.setString("11250021");
      noStrikeRules_0_1_0.set(EndStrikePxRange_0);
      StrikeRules_NoStrikeRules_0.insert(EndStrikePxRange_0.getString());
      FIX::StartStrikePxRange StartStrikePxRange_0;
      StartStrikePxRange_0.setString("727741");
      noStrikeRules_0_1_0.set(StartStrikePxRange_0);
      StrikeRules_NoStrikeRules_0.insert(StartStrikePxRange_0.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_0(2048821001);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeExerciseStyle_0.getString());
      FIX::StrikeIncrement StrikeIncrement_0;
      StrikeIncrement_0.setString("15830341");
      noStrikeRules_0_1_0.set(StrikeIncrement_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeIncrement_0.getString());
      FIX::StrikeRuleID StrikeRuleID_0("STRING_2033821907");
      noStrikeRules_0_1_0.set(StrikeRuleID_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeRuleID_0.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_0);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_0;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_0("MONTHYEAR_1844262303");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_0);
        MaturityRules_NoMaturityRules_0.insert(EndMaturityMonthYear_0.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_0(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearFormat_0.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_0(1578695858);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearIncrement_0.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_0(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearIncrementUnits_0.getString());
        FIX::MaturityRuleID MaturityRuleID_0("STRING_48516635");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityRuleID_0.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_0("MONTHYEAR_2093563448");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_0);
        MaturityRules_NoMaturityRules_0.insert(StartMaturityMonthYear_0.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_0);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_1;
      FIX::EndStrikePxRange EndStrikePxRange_1;
      EndStrikePxRange_1.setString("16843942");
      noStrikeRules_0_1_1.set(EndStrikePxRange_1);
      StrikeRules_NoStrikeRules_1.insert(EndStrikePxRange_1.getString());
      FIX::StartStrikePxRange StartStrikePxRange_1;
      StartStrikePxRange_1.setString("2512064");
      noStrikeRules_0_1_1.set(StartStrikePxRange_1);
      StrikeRules_NoStrikeRules_1.insert(StartStrikePxRange_1.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_1(61306798);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeExerciseStyle_1.getString());
      FIX::StrikeIncrement StrikeIncrement_1;
      StrikeIncrement_1.setString("16574818");
      noStrikeRules_0_1_1.set(StrikeIncrement_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeIncrement_1.getString());
      FIX::StrikeRuleID StrikeRuleID_1("STRING_1055202956");
      noStrikeRules_0_1_1.set(StrikeRuleID_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeRuleID_1.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_1);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_1;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_1("MONTHYEAR_184590561");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_1);
        MaturityRules_NoMaturityRules_1.insert(EndMaturityMonthYear_1.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_1(2);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearFormat_1.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_1(1775956803);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearIncrement_1.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_1(1);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearIncrementUnits_1.getString());
        FIX::MaturityRuleID MaturityRuleID_1("STRING_958794045");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityRuleID_1.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_1("MONTHYEAR_732056812");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_1);
        MaturityRules_NoMaturityRules_1.insert(StartMaturityMonthYear_1.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_1);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_2;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_2("MONTHYEAR_68834587");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_2);
        MaturityRules_NoMaturityRules_2.insert(EndMaturityMonthYear_2.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_2(1);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearFormat_2.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_2(2021350339);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearIncrement_2.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_2(3);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearIncrementUnits_2.getString());
        FIX::MaturityRuleID MaturityRuleID_2("STRING_1317155267");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityRuleID_2.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_2("MONTHYEAR_1732303463");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_2);
        MaturityRules_NoMaturityRules_2.insert(StartMaturityMonthYear_2.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_2);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_3;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_3("MONTHYEAR_837626259");
        noMaturityRules_0_1_2_2.set(EndMaturityMonthYear_3);
        MaturityRules_NoMaturityRules_3.insert(EndMaturityMonthYear_3.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_3(1);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearFormat_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearFormat_3.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_3(1805077583);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrement_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearIncrement_3.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_3(0);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrementUnits_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearIncrementUnits_3.getString());
        FIX::MaturityRuleID MaturityRuleID_3("STRING_1877707967");
        noMaturityRules_0_1_2_2.set(MaturityRuleID_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityRuleID_3.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_3("MONTHYEAR_1691415842");
        noMaturityRules_0_1_2_2.set(StartMaturityMonthYear_3);
        MaturityRules_NoMaturityRules_3.insert(StartMaturityMonthYear_3.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_3);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_2;
      FIX::EndStrikePxRange EndStrikePxRange_2;
      EndStrikePxRange_2.setString("2272987");
      noStrikeRules_0_1_2.set(EndStrikePxRange_2);
      StrikeRules_NoStrikeRules_2.insert(EndStrikePxRange_2.getString());
      FIX::StartStrikePxRange StartStrikePxRange_2;
      StartStrikePxRange_2.setString("15744866");
      noStrikeRules_0_1_2.set(StartStrikePxRange_2);
      StrikeRules_NoStrikeRules_2.insert(StartStrikePxRange_2.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_2(971016207);
      noStrikeRules_0_1_2.set(StrikeExerciseStyle_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeExerciseStyle_2.getString());
      FIX::StrikeIncrement StrikeIncrement_2;
      StrikeIncrement_2.setString("18059946");
      noStrikeRules_0_1_2.set(StrikeIncrement_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeIncrement_2.getString());
      FIX::StrikeRuleID StrikeRuleID_2("STRING_1735460322");
      noStrikeRules_0_1_2.set(StrikeRuleID_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeRuleID_2.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_2);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_4;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_4("MONTHYEAR_1752074407");
        noMaturityRules_0_2_2_0.set(EndMaturityMonthYear_4);
        MaturityRules_NoMaturityRules_4.insert(EndMaturityMonthYear_4.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_4(0);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearFormat_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearFormat_4.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_4(1270739267);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrement_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearIncrement_4.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_4(1);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrementUnits_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearIncrementUnits_4.getString());
        FIX::MaturityRuleID MaturityRuleID_4("STRING_782369186");
        noMaturityRules_0_2_2_0.set(MaturityRuleID_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityRuleID_4.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_4("MONTHYEAR_178458576");
        noMaturityRules_0_2_2_0.set(StartMaturityMonthYear_4);
        MaturityRules_NoMaturityRules_4.insert(StartMaturityMonthYear_4.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_4);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_2);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  // RelSymDerivSecGrp
  // Group RelSymDerivSecGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_0;
    FIX::CorporateAction CorporateAction_0("MULTIPLECHARVALUE_D");
    noRelatedSym_0_0.set(CorporateAction_0);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(CorporateAction_0.getString());
    FIX::Currency Currency_14("CHF");
    noRelatedSym_0_0.set(Currency_14);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(Currency_14.getString());
    FIX::EncodedText EncodedText_26("DATA_1593376040");
    noRelatedSym_0_0.set(EncodedText_26);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(EncodedText_26.getString());
    FIX::EncodedTextLen EncodedTextLen_26(749288574);
    noRelatedSym_0_0.set(EncodedTextLen_26);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(EncodedTextLen_26.getString());
    FIX::RelSymTransactTime RelSymTransactTime_0(FIX::UTCTIMESTAMP(4, 23, 1, 7, 11, 2017));
    noRelatedSym_0_0.set(RelSymTransactTime_0);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(RelSymTransactTime_0.getString());
    FIX::Text Text_26("STRING_462119286");
    noRelatedSym_0_0.set(Text_26);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(Text_26.getString());
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_27;
      FIX::EncodedLegIssuer EncodedLegIssuer_27("DATA_213034352");
      noLegs_0_1_0.set(EncodedLegIssuer_27);
      InstrumentLeg_27.insert(EncodedLegIssuer_27.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_27(1201082899);
      noLegs_0_1_0.set(EncodedLegIssuerLen_27);
      InstrumentLeg_27.insert(EncodedLegIssuerLen_27.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_27("DATA_1576608401");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_27);
      InstrumentLeg_27.insert(EncodedLegSecurityDesc_27.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_27(1904450195);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_27);
      InstrumentLeg_27.insert(EncodedLegSecurityDescLen_27.getString());
      FIX::LegCFICode LegCFICode_27("STRING_1428381647");
      noLegs_0_1_0.set(LegCFICode_27);
      InstrumentLeg_27.insert(LegCFICode_27.getString());
      FIX::LegContractMultiplier LegContractMultiplier_27;
      LegContractMultiplier_27.setString("10036113");
      noLegs_0_1_0.set(LegContractMultiplier_27);
      InstrumentLeg_27.insert(LegContractMultiplier_27.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_27(727982754);
      noLegs_0_1_0.set(LegContractMultiplierUnit_27);
      InstrumentLeg_27.insert(LegContractMultiplierUnit_27.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_27("MONTHYEAR_1086892606");
      noLegs_0_1_0.set(LegContractSettlMonth_27);
      InstrumentLeg_27.insert(LegContractSettlMonth_27.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_27("COUNTRY_591588049");
      noLegs_0_1_0.set(LegCountryOfIssue_27);
      InstrumentLeg_27.insert(LegCountryOfIssue_27.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_27("LOCALMKTDATE_1747515597");
      noLegs_0_1_0.set(LegCouponPaymentDate_27);
      InstrumentLeg_27.insert(LegCouponPaymentDate_27.getString());
      FIX::LegCouponRate LegCouponRate_27;
      LegCouponRate_27.setString("33.650000");
      noLegs_0_1_0.set(LegCouponRate_27);
      InstrumentLeg_27.insert(LegCouponRate_27.getString());
      FIX::LegCreditRating LegCreditRating_27("STRING_1863959020");
      noLegs_0_1_0.set(LegCreditRating_27);
      InstrumentLeg_27.insert(LegCreditRating_27.getString());
      FIX::LegCurrency LegCurrency_27("USD");
      noLegs_0_1_0.set(LegCurrency_27);
      InstrumentLeg_27.insert(LegCurrency_27.getString());
      FIX::LegDatedDate LegDatedDate_27("LOCALMKTDATE_498844558");
      noLegs_0_1_0.set(LegDatedDate_27);
      InstrumentLeg_27.insert(LegDatedDate_27.getString());
      FIX::LegExerciseStyle LegExerciseStyle_27(1049229793);
      noLegs_0_1_0.set(LegExerciseStyle_27);
      InstrumentLeg_27.insert(LegExerciseStyle_27.getString());
      FIX::LegFactor LegFactor_27;
      LegFactor_27.setString("10936048");
      noLegs_0_1_0.set(LegFactor_27);
      InstrumentLeg_27.insert(LegFactor_27.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_27(1465804305);
      noLegs_0_1_0.set(LegFlowScheduleType_27);
      InstrumentLeg_27.insert(LegFlowScheduleType_27.getString());
      FIX::LegInstrRegistry LegInstrRegistry_27("STRING_839724322");
      noLegs_0_1_0.set(LegInstrRegistry_27);
      InstrumentLeg_27.insert(LegInstrRegistry_27.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_27("LOCALMKTDATE_1458301961");
      noLegs_0_1_0.set(LegInterestAccrualDate_27);
      InstrumentLeg_27.insert(LegInterestAccrualDate_27.getString());
      FIX::LegIssueDate LegIssueDate_27("LOCALMKTDATE_911696698");
      noLegs_0_1_0.set(LegIssueDate_27);
      InstrumentLeg_27.insert(LegIssueDate_27.getString());
      FIX::LegIssuer LegIssuer_27("STRING_1589012896");
      noLegs_0_1_0.set(LegIssuer_27);
      InstrumentLeg_27.insert(LegIssuer_27.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_27("STRING_407572223");
      noLegs_0_1_0.set(LegLocaleOfIssue_27);
      InstrumentLeg_27.insert(LegLocaleOfIssue_27.getString());
      FIX::LegMaturityDate LegMaturityDate_27("LOCALMKTDATE_426423678");
      noLegs_0_1_0.set(LegMaturityDate_27);
      InstrumentLeg_27.insert(LegMaturityDate_27.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_27("MONTHYEAR_1823567919");
      noLegs_0_1_0.set(LegMaturityMonthYear_27);
      InstrumentLeg_27.insert(LegMaturityMonthYear_27.getString());
      FIX::LegMaturityTime LegMaturityTime_27("TZTIMEONLY_1378192825");
      noLegs_0_1_0.set(LegMaturityTime_27);
      InstrumentLeg_27.insert(LegMaturityTime_27.getString());
      FIX::LegOptAttribute LegOptAttribute_27('5');
      noLegs_0_1_0.set(LegOptAttribute_27);
      InstrumentLeg_27.insert(LegOptAttribute_27.getString());
      FIX::LegOptionRatio LegOptionRatio_27;
      LegOptionRatio_27.setString("12277945");
      noLegs_0_1_0.set(LegOptionRatio_27);
      InstrumentLeg_27.insert(LegOptionRatio_27.getString());
      FIX::LegPool LegPool_27("STRING_1933633242");
      noLegs_0_1_0.set(LegPool_27);
      InstrumentLeg_27.insert(LegPool_27.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_27("STRING_513035991");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_27);
      InstrumentLeg_27.insert(LegPriceUnitOfMeasure_27.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_27;
      LegPriceUnitOfMeasureQty_27.setString("9266949");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_27);
      InstrumentLeg_27.insert(LegPriceUnitOfMeasureQty_27.getString());
      FIX::LegProduct LegProduct_27(2146667594);
      noLegs_0_1_0.set(LegProduct_27);
      InstrumentLeg_27.insert(LegProduct_27.getString());
      FIX::LegPutOrCall LegPutOrCall_27(1714118890);
      noLegs_0_1_0.set(LegPutOrCall_27);
      InstrumentLeg_27.insert(LegPutOrCall_27.getString());
      FIX::LegRatioQty LegRatioQty_27;
      LegRatioQty_27.setString("3558197");
      noLegs_0_1_0.set(LegRatioQty_27);
      InstrumentLeg_27.insert(LegRatioQty_27.getString());
      FIX::LegRedemptionDate LegRedemptionDate_27("LOCALMKTDATE_1903634141");
      noLegs_0_1_0.set(LegRedemptionDate_27);
      InstrumentLeg_27.insert(LegRedemptionDate_27.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_27("STRING_995016890");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_27);
      InstrumentLeg_27.insert(LegRepoCollateralSecurityType_27.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_27;
      LegRepurchaseRate_27.setString("11.230000");
      noLegs_0_1_0.set(LegRepurchaseRate_27);
      InstrumentLeg_27.insert(LegRepurchaseRate_27.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_27(484133248);
      noLegs_0_1_0.set(LegRepurchaseTerm_27);
      InstrumentLeg_27.insert(LegRepurchaseTerm_27.getString());
      FIX::LegSecurityDesc LegSecurityDesc_27("STRING_2081909496");
      noLegs_0_1_0.set(LegSecurityDesc_27);
      InstrumentLeg_27.insert(LegSecurityDesc_27.getString());
      FIX::LegSecurityExchange LegSecurityExchange_27("EXCHANGE_1951019172");
      noLegs_0_1_0.set(LegSecurityExchange_27);
      InstrumentLeg_27.insert(LegSecurityExchange_27.getString());
      FIX::LegSecurityID LegSecurityID_27("STRING_84165197");
      noLegs_0_1_0.set(LegSecurityID_27);
      InstrumentLeg_27.insert(LegSecurityID_27.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_27("STRING_625909213");
      noLegs_0_1_0.set(LegSecurityIDSource_27);
      InstrumentLeg_27.insert(LegSecurityIDSource_27.getString());
      FIX::LegSecuritySubType LegSecuritySubType_27("STRING_1667494544");
      noLegs_0_1_0.set(LegSecuritySubType_27);
      InstrumentLeg_27.insert(LegSecuritySubType_27.getString());
      FIX::LegSecurityType LegSecurityType_27("STRING_954936414");
      noLegs_0_1_0.set(LegSecurityType_27);
      InstrumentLeg_27.insert(LegSecurityType_27.getString());
      FIX::LegSide LegSide_27('9');
      noLegs_0_1_0.set(LegSide_27);
      InstrumentLeg_27.insert(LegSide_27.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_27("STRING_18855454");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_27);
      InstrumentLeg_27.insert(LegStateOrProvinceOfIssue_27.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_27("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_27);
      InstrumentLeg_27.insert(LegStrikeCurrency_27.getString());
      FIX::LegStrikePrice LegStrikePrice_27;
      LegStrikePrice_27.setString("14846597");
      noLegs_0_1_0.set(LegStrikePrice_27);
      InstrumentLeg_27.insert(LegStrikePrice_27.getString());
      FIX::LegSymbol LegSymbol_27("STRING_696406881");
      noLegs_0_1_0.set(LegSymbol_27);
      InstrumentLeg_27.insert(LegSymbol_27.getString());
      FIX::LegSymbolSfx LegSymbolSfx_27("STRING_1387713312");
      noLegs_0_1_0.set(LegSymbolSfx_27);
      InstrumentLeg_27.insert(LegSymbolSfx_27.getString());
      FIX::LegTimeUnit LegTimeUnit_27("STRING_248872809");
      noLegs_0_1_0.set(LegTimeUnit_27);
      InstrumentLeg_27.insert(LegTimeUnit_27.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_27("STRING_137936129");
      noLegs_0_1_0.set(LegUnitOfMeasure_27);
      InstrumentLeg_27.insert(LegUnitOfMeasure_27.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_27;
      LegUnitOfMeasureQty_27.setString("17952855");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_27);
      InstrumentLeg_27.insert(LegUnitOfMeasureQty_27.getString());
      all_values.push_back(InstrumentLeg_27);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_51;
        FIX::LegSecurityAltID LegSecurityAltID_51("STRING_1961504048");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_51);
        LegSecAltIDGrp_NoLegSecurityAltID_51.insert(LegSecurityAltID_51.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_51("STRING_1025994713");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_51);
        LegSecAltIDGrp_NoLegSecurityAltID_51.insert(LegSecurityAltIDSource_51.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_51);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_28;
      FIX::EncodedLegIssuer EncodedLegIssuer_28("DATA_726213192");
      noLegs_0_1_1.set(EncodedLegIssuer_28);
      InstrumentLeg_28.insert(EncodedLegIssuer_28.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_28(1041814961);
      noLegs_0_1_1.set(EncodedLegIssuerLen_28);
      InstrumentLeg_28.insert(EncodedLegIssuerLen_28.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_28("DATA_812144307");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_28);
      InstrumentLeg_28.insert(EncodedLegSecurityDesc_28.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_28(1239249184);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_28);
      InstrumentLeg_28.insert(EncodedLegSecurityDescLen_28.getString());
      FIX::LegCFICode LegCFICode_28("STRING_1968509956");
      noLegs_0_1_1.set(LegCFICode_28);
      InstrumentLeg_28.insert(LegCFICode_28.getString());
      FIX::LegContractMultiplier LegContractMultiplier_28;
      LegContractMultiplier_28.setString("8113282");
      noLegs_0_1_1.set(LegContractMultiplier_28);
      InstrumentLeg_28.insert(LegContractMultiplier_28.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_28(805884426);
      noLegs_0_1_1.set(LegContractMultiplierUnit_28);
      InstrumentLeg_28.insert(LegContractMultiplierUnit_28.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_28("MONTHYEAR_176846056");
      noLegs_0_1_1.set(LegContractSettlMonth_28);
      InstrumentLeg_28.insert(LegContractSettlMonth_28.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_28("COUNTRY_567478747");
      noLegs_0_1_1.set(LegCountryOfIssue_28);
      InstrumentLeg_28.insert(LegCountryOfIssue_28.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_28("LOCALMKTDATE_1800901316");
      noLegs_0_1_1.set(LegCouponPaymentDate_28);
      InstrumentLeg_28.insert(LegCouponPaymentDate_28.getString());
      FIX::LegCouponRate LegCouponRate_28;
      LegCouponRate_28.setString("71.790000");
      noLegs_0_1_1.set(LegCouponRate_28);
      InstrumentLeg_28.insert(LegCouponRate_28.getString());
      FIX::LegCreditRating LegCreditRating_28("STRING_1051611995");
      noLegs_0_1_1.set(LegCreditRating_28);
      InstrumentLeg_28.insert(LegCreditRating_28.getString());
      FIX::LegCurrency LegCurrency_28("EUR");
      noLegs_0_1_1.set(LegCurrency_28);
      InstrumentLeg_28.insert(LegCurrency_28.getString());
      FIX::LegDatedDate LegDatedDate_28("LOCALMKTDATE_1135777192");
      noLegs_0_1_1.set(LegDatedDate_28);
      InstrumentLeg_28.insert(LegDatedDate_28.getString());
      FIX::LegExerciseStyle LegExerciseStyle_28(213752729);
      noLegs_0_1_1.set(LegExerciseStyle_28);
      InstrumentLeg_28.insert(LegExerciseStyle_28.getString());
      FIX::LegFactor LegFactor_28;
      LegFactor_28.setString("8598235");
      noLegs_0_1_1.set(LegFactor_28);
      InstrumentLeg_28.insert(LegFactor_28.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_28(2090713607);
      noLegs_0_1_1.set(LegFlowScheduleType_28);
      InstrumentLeg_28.insert(LegFlowScheduleType_28.getString());
      FIX::LegInstrRegistry LegInstrRegistry_28("STRING_1197042864");
      noLegs_0_1_1.set(LegInstrRegistry_28);
      InstrumentLeg_28.insert(LegInstrRegistry_28.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_28("LOCALMKTDATE_878679053");
      noLegs_0_1_1.set(LegInterestAccrualDate_28);
      InstrumentLeg_28.insert(LegInterestAccrualDate_28.getString());
      FIX::LegIssueDate LegIssueDate_28("LOCALMKTDATE_1947396166");
      noLegs_0_1_1.set(LegIssueDate_28);
      InstrumentLeg_28.insert(LegIssueDate_28.getString());
      FIX::LegIssuer LegIssuer_28("STRING_1126454215");
      noLegs_0_1_1.set(LegIssuer_28);
      InstrumentLeg_28.insert(LegIssuer_28.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_28("STRING_215855165");
      noLegs_0_1_1.set(LegLocaleOfIssue_28);
      InstrumentLeg_28.insert(LegLocaleOfIssue_28.getString());
      FIX::LegMaturityDate LegMaturityDate_28("LOCALMKTDATE_496319400");
      noLegs_0_1_1.set(LegMaturityDate_28);
      InstrumentLeg_28.insert(LegMaturityDate_28.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_28("MONTHYEAR_366683880");
      noLegs_0_1_1.set(LegMaturityMonthYear_28);
      InstrumentLeg_28.insert(LegMaturityMonthYear_28.getString());
      FIX::LegMaturityTime LegMaturityTime_28("TZTIMEONLY_464727974");
      noLegs_0_1_1.set(LegMaturityTime_28);
      InstrumentLeg_28.insert(LegMaturityTime_28.getString());
      FIX::LegOptAttribute LegOptAttribute_28('6');
      noLegs_0_1_1.set(LegOptAttribute_28);
      InstrumentLeg_28.insert(LegOptAttribute_28.getString());
      FIX::LegOptionRatio LegOptionRatio_28;
      LegOptionRatio_28.setString("144857");
      noLegs_0_1_1.set(LegOptionRatio_28);
      InstrumentLeg_28.insert(LegOptionRatio_28.getString());
      FIX::LegPool LegPool_28("STRING_1140024462");
      noLegs_0_1_1.set(LegPool_28);
      InstrumentLeg_28.insert(LegPool_28.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_28("STRING_448275930");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_28);
      InstrumentLeg_28.insert(LegPriceUnitOfMeasure_28.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_28;
      LegPriceUnitOfMeasureQty_28.setString("10404804");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_28);
      InstrumentLeg_28.insert(LegPriceUnitOfMeasureQty_28.getString());
      FIX::LegProduct LegProduct_28(1866237654);
      noLegs_0_1_1.set(LegProduct_28);
      InstrumentLeg_28.insert(LegProduct_28.getString());
      FIX::LegPutOrCall LegPutOrCall_28(1490090891);
      noLegs_0_1_1.set(LegPutOrCall_28);
      InstrumentLeg_28.insert(LegPutOrCall_28.getString());
      FIX::LegRatioQty LegRatioQty_28;
      LegRatioQty_28.setString("18526247");
      noLegs_0_1_1.set(LegRatioQty_28);
      InstrumentLeg_28.insert(LegRatioQty_28.getString());
      FIX::LegRedemptionDate LegRedemptionDate_28("LOCALMKTDATE_958003190");
      noLegs_0_1_1.set(LegRedemptionDate_28);
      InstrumentLeg_28.insert(LegRedemptionDate_28.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_28("STRING_1311117200");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_28);
      InstrumentLeg_28.insert(LegRepoCollateralSecurityType_28.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_28;
      LegRepurchaseRate_28.setString("93.930000");
      noLegs_0_1_1.set(LegRepurchaseRate_28);
      InstrumentLeg_28.insert(LegRepurchaseRate_28.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_28(1763887617);
      noLegs_0_1_1.set(LegRepurchaseTerm_28);
      InstrumentLeg_28.insert(LegRepurchaseTerm_28.getString());
      FIX::LegSecurityDesc LegSecurityDesc_28("STRING_1487963256");
      noLegs_0_1_1.set(LegSecurityDesc_28);
      InstrumentLeg_28.insert(LegSecurityDesc_28.getString());
      FIX::LegSecurityExchange LegSecurityExchange_28("EXCHANGE_1083948140");
      noLegs_0_1_1.set(LegSecurityExchange_28);
      InstrumentLeg_28.insert(LegSecurityExchange_28.getString());
      FIX::LegSecurityID LegSecurityID_28("STRING_1417305285");
      noLegs_0_1_1.set(LegSecurityID_28);
      InstrumentLeg_28.insert(LegSecurityID_28.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_28("STRING_876756788");
      noLegs_0_1_1.set(LegSecurityIDSource_28);
      InstrumentLeg_28.insert(LegSecurityIDSource_28.getString());
      FIX::LegSecuritySubType LegSecuritySubType_28("STRING_2135560135");
      noLegs_0_1_1.set(LegSecuritySubType_28);
      InstrumentLeg_28.insert(LegSecuritySubType_28.getString());
      FIX::LegSecurityType LegSecurityType_28("STRING_1005148802");
      noLegs_0_1_1.set(LegSecurityType_28);
      InstrumentLeg_28.insert(LegSecurityType_28.getString());
      FIX::LegSide LegSide_28('6');
      noLegs_0_1_1.set(LegSide_28);
      InstrumentLeg_28.insert(LegSide_28.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_28("STRING_1123853680");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_28);
      InstrumentLeg_28.insert(LegStateOrProvinceOfIssue_28.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_28("CHF");
      noLegs_0_1_1.set(LegStrikeCurrency_28);
      InstrumentLeg_28.insert(LegStrikeCurrency_28.getString());
      FIX::LegStrikePrice LegStrikePrice_28;
      LegStrikePrice_28.setString("10670836");
      noLegs_0_1_1.set(LegStrikePrice_28);
      InstrumentLeg_28.insert(LegStrikePrice_28.getString());
      FIX::LegSymbol LegSymbol_28("STRING_268460748");
      noLegs_0_1_1.set(LegSymbol_28);
      InstrumentLeg_28.insert(LegSymbol_28.getString());
      FIX::LegSymbolSfx LegSymbolSfx_28("STRING_1807588496");
      noLegs_0_1_1.set(LegSymbolSfx_28);
      InstrumentLeg_28.insert(LegSymbolSfx_28.getString());
      FIX::LegTimeUnit LegTimeUnit_28("STRING_866996157");
      noLegs_0_1_1.set(LegTimeUnit_28);
      InstrumentLeg_28.insert(LegTimeUnit_28.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_28("STRING_1394914963");
      noLegs_0_1_1.set(LegUnitOfMeasure_28);
      InstrumentLeg_28.insert(LegUnitOfMeasure_28.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_28;
      LegUnitOfMeasureQty_28.setString("20234436");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_28);
      InstrumentLeg_28.insert(LegUnitOfMeasureQty_28.getString());
      all_values.push_back(InstrumentLeg_28);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_52;
        FIX::LegSecurityAltID LegSecurityAltID_52("STRING_1761598843");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_52);
        LegSecAltIDGrp_NoLegSecurityAltID_52.insert(LegSecurityAltID_52.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_52("STRING_340687988");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_52);
        LegSecAltIDGrp_NoLegSecurityAltID_52.insert(LegSecurityAltIDSource_52.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_52);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_29;
      FIX::EncodedLegIssuer EncodedLegIssuer_29("DATA_1997571087");
      noLegs_0_1_2.set(EncodedLegIssuer_29);
      InstrumentLeg_29.insert(EncodedLegIssuer_29.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_29(1776084611);
      noLegs_0_1_2.set(EncodedLegIssuerLen_29);
      InstrumentLeg_29.insert(EncodedLegIssuerLen_29.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_29("DATA_1480712450");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_29);
      InstrumentLeg_29.insert(EncodedLegSecurityDesc_29.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_29(298363369);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_29);
      InstrumentLeg_29.insert(EncodedLegSecurityDescLen_29.getString());
      FIX::LegCFICode LegCFICode_29("STRING_669081444");
      noLegs_0_1_2.set(LegCFICode_29);
      InstrumentLeg_29.insert(LegCFICode_29.getString());
      FIX::LegContractMultiplier LegContractMultiplier_29;
      LegContractMultiplier_29.setString("11994664");
      noLegs_0_1_2.set(LegContractMultiplier_29);
      InstrumentLeg_29.insert(LegContractMultiplier_29.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_29(1788454260);
      noLegs_0_1_2.set(LegContractMultiplierUnit_29);
      InstrumentLeg_29.insert(LegContractMultiplierUnit_29.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_29("MONTHYEAR_374222584");
      noLegs_0_1_2.set(LegContractSettlMonth_29);
      InstrumentLeg_29.insert(LegContractSettlMonth_29.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_29("COUNTRY_9985999");
      noLegs_0_1_2.set(LegCountryOfIssue_29);
      InstrumentLeg_29.insert(LegCountryOfIssue_29.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_29("LOCALMKTDATE_952087812");
      noLegs_0_1_2.set(LegCouponPaymentDate_29);
      InstrumentLeg_29.insert(LegCouponPaymentDate_29.getString());
      FIX::LegCouponRate LegCouponRate_29;
      LegCouponRate_29.setString("19.780000");
      noLegs_0_1_2.set(LegCouponRate_29);
      InstrumentLeg_29.insert(LegCouponRate_29.getString());
      FIX::LegCreditRating LegCreditRating_29("STRING_1773873616");
      noLegs_0_1_2.set(LegCreditRating_29);
      InstrumentLeg_29.insert(LegCreditRating_29.getString());
      FIX::LegCurrency LegCurrency_29("GBP");
      noLegs_0_1_2.set(LegCurrency_29);
      InstrumentLeg_29.insert(LegCurrency_29.getString());
      FIX::LegDatedDate LegDatedDate_29("LOCALMKTDATE_1043695253");
      noLegs_0_1_2.set(LegDatedDate_29);
      InstrumentLeg_29.insert(LegDatedDate_29.getString());
      FIX::LegExerciseStyle LegExerciseStyle_29(1169324209);
      noLegs_0_1_2.set(LegExerciseStyle_29);
      InstrumentLeg_29.insert(LegExerciseStyle_29.getString());
      FIX::LegFactor LegFactor_29;
      LegFactor_29.setString("19627166");
      noLegs_0_1_2.set(LegFactor_29);
      InstrumentLeg_29.insert(LegFactor_29.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_29(2048844055);
      noLegs_0_1_2.set(LegFlowScheduleType_29);
      InstrumentLeg_29.insert(LegFlowScheduleType_29.getString());
      FIX::LegInstrRegistry LegInstrRegistry_29("STRING_1238410052");
      noLegs_0_1_2.set(LegInstrRegistry_29);
      InstrumentLeg_29.insert(LegInstrRegistry_29.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_29("LOCALMKTDATE_939086638");
      noLegs_0_1_2.set(LegInterestAccrualDate_29);
      InstrumentLeg_29.insert(LegInterestAccrualDate_29.getString());
      FIX::LegIssueDate LegIssueDate_29("LOCALMKTDATE_1120261939");
      noLegs_0_1_2.set(LegIssueDate_29);
      InstrumentLeg_29.insert(LegIssueDate_29.getString());
      FIX::LegIssuer LegIssuer_29("STRING_19835847");
      noLegs_0_1_2.set(LegIssuer_29);
      InstrumentLeg_29.insert(LegIssuer_29.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_29("STRING_2006170277");
      noLegs_0_1_2.set(LegLocaleOfIssue_29);
      InstrumentLeg_29.insert(LegLocaleOfIssue_29.getString());
      FIX::LegMaturityDate LegMaturityDate_29("LOCALMKTDATE_1388722687");
      noLegs_0_1_2.set(LegMaturityDate_29);
      InstrumentLeg_29.insert(LegMaturityDate_29.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_29("MONTHYEAR_1827424344");
      noLegs_0_1_2.set(LegMaturityMonthYear_29);
      InstrumentLeg_29.insert(LegMaturityMonthYear_29.getString());
      FIX::LegMaturityTime LegMaturityTime_29("TZTIMEONLY_725682786");
      noLegs_0_1_2.set(LegMaturityTime_29);
      InstrumentLeg_29.insert(LegMaturityTime_29.getString());
      FIX::LegOptAttribute LegOptAttribute_29('6');
      noLegs_0_1_2.set(LegOptAttribute_29);
      InstrumentLeg_29.insert(LegOptAttribute_29.getString());
      FIX::LegOptionRatio LegOptionRatio_29;
      LegOptionRatio_29.setString("17033843");
      noLegs_0_1_2.set(LegOptionRatio_29);
      InstrumentLeg_29.insert(LegOptionRatio_29.getString());
      FIX::LegPool LegPool_29("STRING_2088998344");
      noLegs_0_1_2.set(LegPool_29);
      InstrumentLeg_29.insert(LegPool_29.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_29("STRING_250269198");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_29);
      InstrumentLeg_29.insert(LegPriceUnitOfMeasure_29.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_29;
      LegPriceUnitOfMeasureQty_29.setString("20440723");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_29);
      InstrumentLeg_29.insert(LegPriceUnitOfMeasureQty_29.getString());
      FIX::LegProduct LegProduct_29(1939085783);
      noLegs_0_1_2.set(LegProduct_29);
      InstrumentLeg_29.insert(LegProduct_29.getString());
      FIX::LegPutOrCall LegPutOrCall_29(2026353809);
      noLegs_0_1_2.set(LegPutOrCall_29);
      InstrumentLeg_29.insert(LegPutOrCall_29.getString());
      FIX::LegRatioQty LegRatioQty_29;
      LegRatioQty_29.setString("13773011");
      noLegs_0_1_2.set(LegRatioQty_29);
      InstrumentLeg_29.insert(LegRatioQty_29.getString());
      FIX::LegRedemptionDate LegRedemptionDate_29("LOCALMKTDATE_89965504");
      noLegs_0_1_2.set(LegRedemptionDate_29);
      InstrumentLeg_29.insert(LegRedemptionDate_29.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_29("STRING_547951606");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_29);
      InstrumentLeg_29.insert(LegRepoCollateralSecurityType_29.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_29;
      LegRepurchaseRate_29.setString("39.560000");
      noLegs_0_1_2.set(LegRepurchaseRate_29);
      InstrumentLeg_29.insert(LegRepurchaseRate_29.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_29(1878419764);
      noLegs_0_1_2.set(LegRepurchaseTerm_29);
      InstrumentLeg_29.insert(LegRepurchaseTerm_29.getString());
      FIX::LegSecurityDesc LegSecurityDesc_29("STRING_922174190");
      noLegs_0_1_2.set(LegSecurityDesc_29);
      InstrumentLeg_29.insert(LegSecurityDesc_29.getString());
      FIX::LegSecurityExchange LegSecurityExchange_29("EXCHANGE_439269955");
      noLegs_0_1_2.set(LegSecurityExchange_29);
      InstrumentLeg_29.insert(LegSecurityExchange_29.getString());
      FIX::LegSecurityID LegSecurityID_29("STRING_683023929");
      noLegs_0_1_2.set(LegSecurityID_29);
      InstrumentLeg_29.insert(LegSecurityID_29.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_29("STRING_1812866168");
      noLegs_0_1_2.set(LegSecurityIDSource_29);
      InstrumentLeg_29.insert(LegSecurityIDSource_29.getString());
      FIX::LegSecuritySubType LegSecuritySubType_29("STRING_65659923");
      noLegs_0_1_2.set(LegSecuritySubType_29);
      InstrumentLeg_29.insert(LegSecuritySubType_29.getString());
      FIX::LegSecurityType LegSecurityType_29("STRING_975591350");
      noLegs_0_1_2.set(LegSecurityType_29);
      InstrumentLeg_29.insert(LegSecurityType_29.getString());
      FIX::LegSide LegSide_29('1');
      noLegs_0_1_2.set(LegSide_29);
      InstrumentLeg_29.insert(LegSide_29.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_29("STRING_1109355176");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_29);
      InstrumentLeg_29.insert(LegStateOrProvinceOfIssue_29.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_29("CHF");
      noLegs_0_1_2.set(LegStrikeCurrency_29);
      InstrumentLeg_29.insert(LegStrikeCurrency_29.getString());
      FIX::LegStrikePrice LegStrikePrice_29;
      LegStrikePrice_29.setString("10107155");
      noLegs_0_1_2.set(LegStrikePrice_29);
      InstrumentLeg_29.insert(LegStrikePrice_29.getString());
      FIX::LegSymbol LegSymbol_29("STRING_1235841963");
      noLegs_0_1_2.set(LegSymbol_29);
      InstrumentLeg_29.insert(LegSymbol_29.getString());
      FIX::LegSymbolSfx LegSymbolSfx_29("STRING_246858587");
      noLegs_0_1_2.set(LegSymbolSfx_29);
      InstrumentLeg_29.insert(LegSymbolSfx_29.getString());
      FIX::LegTimeUnit LegTimeUnit_29("STRING_2130977523");
      noLegs_0_1_2.set(LegTimeUnit_29);
      InstrumentLeg_29.insert(LegTimeUnit_29.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_29("STRING_1255677811");
      noLegs_0_1_2.set(LegUnitOfMeasure_29);
      InstrumentLeg_29.insert(LegUnitOfMeasure_29.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_29;
      LegUnitOfMeasureQty_29.setString("1055452");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_29);
      InstrumentLeg_29.insert(LegUnitOfMeasureQty_29.getString());
      all_values.push_back(InstrumentLeg_29);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_53;
        FIX::LegSecurityAltID LegSecurityAltID_53("STRING_935618507");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_53);
        LegSecAltIDGrp_NoLegSecurityAltID_53.insert(LegSecurityAltID_53.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_53("STRING_831228002");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_53);
        LegSecAltIDGrp_NoLegSecurityAltID_53.insert(LegSecurityAltIDSource_53.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_53);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_54;
        FIX::LegSecurityAltID LegSecurityAltID_54("STRING_2008370564");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_54);
        LegSecAltIDGrp_NoLegSecurityAltID_54.insert(LegSecurityAltID_54.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_54("STRING_491519216");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_54);
        LegSecAltIDGrp_NoLegSecurityAltID_54.insert(LegSecurityAltIDSource_54.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_54);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_55;
        FIX::LegSecurityAltID LegSecurityAltID_55("STRING_772742698");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltID_55);
        LegSecAltIDGrp_NoLegSecurityAltID_55.insert(LegSecurityAltID_55.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_55("STRING_111156114");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltIDSource_55);
        LegSecAltIDGrp_NoLegSecurityAltID_55.insert(LegSecurityAltIDSource_55.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_55);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_18;
    FIX::AttachmentPoint AttachmentPoint_18;
    AttachmentPoint_18.setString("79.140000");
    noRelatedSym_0_0.set(AttachmentPoint_18);
    Instrument_18.insert(AttachmentPoint_18.getString());
    FIX::CFICode CFICode_18("STRING_564344833");
    noRelatedSym_0_0.set(CFICode_18);
    Instrument_18.insert(CFICode_18.getString());
    FIX::CPProgram CPProgram_18(1);
    noRelatedSym_0_0.set(CPProgram_18);
    Instrument_18.insert(CPProgram_18.getString());
    FIX::CPRegType CPRegType_18("STRING_1765409061");
    noRelatedSym_0_0.set(CPRegType_18);
    Instrument_18.insert(CPRegType_18.getString());
    FIX::CapPrice CapPrice_18;
    CapPrice_18.setString("6543103");
    noRelatedSym_0_0.set(CapPrice_18);
    Instrument_18.insert(CapPrice_18.getString());
    FIX::ContractMultiplier ContractMultiplier_18;
    ContractMultiplier_18.setString("5379778");
    noRelatedSym_0_0.set(ContractMultiplier_18);
    Instrument_18.insert(ContractMultiplier_18.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_18(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_18);
    Instrument_18.insert(ContractMultiplierUnit_18.getString());
    FIX::ContractSettlMonth ContractSettlMonth_18("MONTHYEAR_385246454");
    noRelatedSym_0_0.set(ContractSettlMonth_18);
    Instrument_18.insert(ContractSettlMonth_18.getString());
    FIX::CountryOfIssue CountryOfIssue_18("COUNTRY_1460152072");
    noRelatedSym_0_0.set(CountryOfIssue_18);
    Instrument_18.insert(CountryOfIssue_18.getString());
    FIX::CouponPaymentDate CouponPaymentDate_18("LOCALMKTDATE_486479324");
    noRelatedSym_0_0.set(CouponPaymentDate_18);
    Instrument_18.insert(CouponPaymentDate_18.getString());
    FIX::CouponRate CouponRate_18;
    CouponRate_18.setString("3.830000");
    noRelatedSym_0_0.set(CouponRate_18);
    Instrument_18.insert(CouponRate_18.getString());
    FIX::CreditRating CreditRating_18("STRING_1125534593");
    noRelatedSym_0_0.set(CreditRating_18);
    Instrument_18.insert(CreditRating_18.getString());
    FIX::DatedDate DatedDate_18("LOCALMKTDATE_552139247");
    noRelatedSym_0_0.set(DatedDate_18);
    Instrument_18.insert(DatedDate_18.getString());
    FIX::DetachmentPoint DetachmentPoint_18;
    DetachmentPoint_18.setString("17.330000");
    noRelatedSym_0_0.set(DetachmentPoint_18);
    Instrument_18.insert(DetachmentPoint_18.getString());
    FIX::EncodedIssuer EncodedIssuer_18("DATA_618073584");
    noRelatedSym_0_0.set(EncodedIssuer_18);
    Instrument_18.insert(EncodedIssuer_18.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_18(1661494424);
    noRelatedSym_0_0.set(EncodedIssuerLen_18);
    Instrument_18.insert(EncodedIssuerLen_18.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_18("DATA_2041293644");
    noRelatedSym_0_0.set(EncodedSecurityDesc_18);
    Instrument_18.insert(EncodedSecurityDesc_18.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_18(2073329181);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_18);
    Instrument_18.insert(EncodedSecurityDescLen_18.getString());
    FIX::ExerciseStyle ExerciseStyle_18(2);
    noRelatedSym_0_0.set(ExerciseStyle_18);
    Instrument_18.insert(ExerciseStyle_18.getString());
    FIX::Factor Factor_18;
    Factor_18.setString("11296519");
    noRelatedSym_0_0.set(Factor_18);
    Instrument_18.insert(Factor_18.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_18(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_18);
    Instrument_18.insert(FlexProductEligibilityIndicator_18.getString());
    FIX::FlexibleIndicator FlexibleIndicator_18(false);
    noRelatedSym_0_0.set(FlexibleIndicator_18);
    Instrument_18.insert(FlexibleIndicator_18.getString());
    FIX::FloorPrice FloorPrice_18;
    FloorPrice_18.setString("2378461");
    noRelatedSym_0_0.set(FloorPrice_18);
    Instrument_18.insert(FloorPrice_18.getString());
    FIX::FlowScheduleType FlowScheduleType_18(1);
    noRelatedSym_0_0.set(FlowScheduleType_18);
    Instrument_18.insert(FlowScheduleType_18.getString());
    FIX::InstrRegistry InstrRegistry_18("STRING_1880436797");
    noRelatedSym_0_0.set(InstrRegistry_18);
    Instrument_18.insert(InstrRegistry_18.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_18('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_18);
    Instrument_18.insert(InstrmtAssignmentMethod_18.getString());
    FIX::InterestAccrualDate InterestAccrualDate_18("LOCALMKTDATE_1109477338");
    noRelatedSym_0_0.set(InterestAccrualDate_18);
    Instrument_18.insert(InterestAccrualDate_18.getString());
    FIX::IssueDate IssueDate_18("LOCALMKTDATE_1741323713");
    noRelatedSym_0_0.set(IssueDate_18);
    Instrument_18.insert(IssueDate_18.getString());
    FIX::Issuer Issuer_18("STRING_1664983846");
    noRelatedSym_0_0.set(Issuer_18);
    Instrument_18.insert(Issuer_18.getString());
    FIX::ListMethod ListMethod_18(1);
    noRelatedSym_0_0.set(ListMethod_18);
    Instrument_18.insert(ListMethod_18.getString());
    FIX::LocaleOfIssue LocaleOfIssue_18("STRING_1852479828");
    noRelatedSym_0_0.set(LocaleOfIssue_18);
    Instrument_18.insert(LocaleOfIssue_18.getString());
    FIX::MaturityDate MaturityDate_18("LOCALMKTDATE_2053091760");
    noRelatedSym_0_0.set(MaturityDate_18);
    Instrument_18.insert(MaturityDate_18.getString());
    FIX::MaturityMonthYear MaturityMonthYear_18("MONTHYEAR_299081222");
    noRelatedSym_0_0.set(MaturityMonthYear_18);
    Instrument_18.insert(MaturityMonthYear_18.getString());
    FIX::MaturityTime MaturityTime_18("TZTIMEONLY_1842506104");
    noRelatedSym_0_0.set(MaturityTime_18);
    Instrument_18.insert(MaturityTime_18.getString());
    FIX::MinPriceIncrement MinPriceIncrement_18;
    MinPriceIncrement_18.setString("16710171");
    noRelatedSym_0_0.set(MinPriceIncrement_18);
    Instrument_18.insert(MinPriceIncrement_18.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_18;
    MinPriceIncrementAmount_18.setString("9533915");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_18);
    Instrument_18.insert(MinPriceIncrementAmount_18.getString());
    FIX::NTPositionLimit NTPositionLimit_18(233000338);
    noRelatedSym_0_0.set(NTPositionLimit_18);
    Instrument_18.insert(NTPositionLimit_18.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_18;
    NotionalPercentageOutstanding_18.setString("65.430000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_18);
    Instrument_18.insert(NotionalPercentageOutstanding_18.getString());
    FIX::OptAttribute OptAttribute_18('1');
    noRelatedSym_0_0.set(OptAttribute_18);
    Instrument_18.insert(OptAttribute_18.getString());
    FIX::OptPayoutAmount OptPayoutAmount_18;
    OptPayoutAmount_18.setString("16931524");
    noRelatedSym_0_0.set(OptPayoutAmount_18);
    Instrument_18.insert(OptPayoutAmount_18.getString());
    FIX::OptPayoutType OptPayoutType_18(1);
    noRelatedSym_0_0.set(OptPayoutType_18);
    Instrument_18.insert(OptPayoutType_18.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_18;
    OriginalNotionalPercentageOutstanding_18.setString("47.490000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_18);
    Instrument_18.insert(OriginalNotionalPercentageOutstanding_18.getString());
    FIX::Pool Pool_18("STRING_671203355");
    noRelatedSym_0_0.set(Pool_18);
    Instrument_18.insert(Pool_18.getString());
    FIX::PositionLimit PositionLimit_18(609361467);
    noRelatedSym_0_0.set(PositionLimit_18);
    Instrument_18.insert(PositionLimit_18.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_18("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_18);
    Instrument_18.insert(PriceQuoteMethod_18.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_18("STRING_1289276939");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_18);
    Instrument_18.insert(PriceUnitOfMeasure_18.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_18;
    PriceUnitOfMeasureQty_18.setString("1233722");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_18);
    Instrument_18.insert(PriceUnitOfMeasureQty_18.getString());
    FIX::Product Product_20(8);
    noRelatedSym_0_0.set(Product_20);
    Instrument_18.insert(Product_20.getString());
    FIX::ProductComplex ProductComplex_18("STRING_1215122472");
    noRelatedSym_0_0.set(ProductComplex_18);
    Instrument_18.insert(ProductComplex_18.getString());
    FIX::PutOrCall PutOrCall_18(1);
    noRelatedSym_0_0.set(PutOrCall_18);
    Instrument_18.insert(PutOrCall_18.getString());
    FIX::RedemptionDate RedemptionDate_18("LOCALMKTDATE_1179264789");
    noRelatedSym_0_0.set(RedemptionDate_18);
    Instrument_18.insert(RedemptionDate_18.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_18("STRING_1387826592");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_18);
    Instrument_18.insert(RepoCollateralSecurityType_18.getString());
    FIX::RepurchaseRate RepurchaseRate_18;
    RepurchaseRate_18.setString("88.380000");
    noRelatedSym_0_0.set(RepurchaseRate_18);
    Instrument_18.insert(RepurchaseRate_18.getString());
    FIX::RepurchaseTerm RepurchaseTerm_18(1417110912);
    noRelatedSym_0_0.set(RepurchaseTerm_18);
    Instrument_18.insert(RepurchaseTerm_18.getString());
    FIX::RestructuringType RestructuringType_18("STRING_FR");
    noRelatedSym_0_0.set(RestructuringType_18);
    Instrument_18.insert(RestructuringType_18.getString());
    FIX::SecurityDesc SecurityDesc_18("STRING_889271987");
    noRelatedSym_0_0.set(SecurityDesc_18);
    Instrument_18.insert(SecurityDesc_18.getString());
    FIX::SecurityExchange SecurityExchange_18("EXCHANGE_443091893");
    noRelatedSym_0_0.set(SecurityExchange_18);
    Instrument_18.insert(SecurityExchange_18.getString());
    FIX::SecurityGroup SecurityGroup_18("STRING_628069619");
    noRelatedSym_0_0.set(SecurityGroup_18);
    Instrument_18.insert(SecurityGroup_18.getString());
    FIX::SecurityID SecurityID_18("STRING_483112052");
    noRelatedSym_0_0.set(SecurityID_18);
    Instrument_18.insert(SecurityID_18.getString());
    FIX::SecurityIDSource SecurityIDSource_18("STRING_C");
    noRelatedSym_0_0.set(SecurityIDSource_18);
    Instrument_18.insert(SecurityIDSource_18.getString());
    FIX::SecurityStatus SecurityStatus_18("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_18);
    Instrument_18.insert(SecurityStatus_18.getString());
    FIX::SecuritySubType SecuritySubType_18("STRING_188108232");
    noRelatedSym_0_0.set(SecuritySubType_18);
    Instrument_18.insert(SecuritySubType_18.getString());
    FIX::SecurityType SecurityType_20("STRING_TERM");
    noRelatedSym_0_0.set(SecurityType_20);
    Instrument_18.insert(SecurityType_20.getString());
    FIX::Seniority Seniority_18("STRING_SB");
    noRelatedSym_0_0.set(Seniority_18);
    Instrument_18.insert(Seniority_18.getString());
    FIX::SettlMethod SettlMethod_18('C');
    noRelatedSym_0_0.set(SettlMethod_18);
    Instrument_18.insert(SettlMethod_18.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_18("STRING_1537217377");
    noRelatedSym_0_0.set(SettleOnOpenFlag_18);
    Instrument_18.insert(SettleOnOpenFlag_18.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_18("STRING_1615278790");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_18);
    Instrument_18.insert(StateOrProvinceOfIssue_18.getString());
    FIX::StrikeCurrency StrikeCurrency_18("GBP");
    noRelatedSym_0_0.set(StrikeCurrency_18);
    Instrument_18.insert(StrikeCurrency_18.getString());
    FIX::StrikeMultiplier StrikeMultiplier_18;
    StrikeMultiplier_18.setString("8064331");
    noRelatedSym_0_0.set(StrikeMultiplier_18);
    Instrument_18.insert(StrikeMultiplier_18.getString());
    FIX::StrikePrice StrikePrice_18;
    StrikePrice_18.setString("18092834");
    noRelatedSym_0_0.set(StrikePrice_18);
    Instrument_18.insert(StrikePrice_18.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_18(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_18);
    Instrument_18.insert(StrikePriceBoundaryMethod_18.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_18;
    StrikePriceBoundaryPrecision_18.setString("79.050000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_18);
    Instrument_18.insert(StrikePriceBoundaryPrecision_18.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_18(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_18);
    Instrument_18.insert(StrikePriceDeterminationMethod_18.getString());
    FIX::StrikeValue StrikeValue_18;
    StrikeValue_18.setString("17745439");
    noRelatedSym_0_0.set(StrikeValue_18);
    Instrument_18.insert(StrikeValue_18.getString());
    FIX::Symbol Symbol_18("STRING_1221660739");
    noRelatedSym_0_0.set(Symbol_18);
    Instrument_18.insert(Symbol_18.getString());
    FIX::SymbolSfx SymbolSfx_18("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_18);
    Instrument_18.insert(SymbolSfx_18.getString());
    FIX::TimeUnit TimeUnit_18("STRING_Yr");
    noRelatedSym_0_0.set(TimeUnit_18);
    Instrument_18.insert(TimeUnit_18.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_18(2);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_18);
    Instrument_18.insert(UnderlyingPriceDeterminationMethod_18.getString());
    FIX::UnitOfMeasure UnitOfMeasure_18("STRING_MWh");
    noRelatedSym_0_0.set(UnitOfMeasure_18);
    Instrument_18.insert(UnitOfMeasure_18.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_18;
    UnitOfMeasureQty_18.setString("3985311");
    noRelatedSym_0_0.set(UnitOfMeasureQty_18);
    Instrument_18.insert(UnitOfMeasureQty_18.getString());
    FIX::ValuationMethod ValuationMethod_18("STRING_FUT");
    noRelatedSym_0_0.set(ValuationMethod_18);
    Instrument_18.insert(ValuationMethod_18.getString());
    all_values.push_back(Instrument_18);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_31;
      FIX::ComplexEventCondition ComplexEventCondition_31(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_31);
      ComplexEvents_NoComplexEvents_31.insert(ComplexEventCondition_31.getString());
      FIX::ComplexEventPrice ComplexEventPrice_31;
      ComplexEventPrice_31.setString("17201656");
      noComplexEvents_0_1_0.set(ComplexEventPrice_31);
      ComplexEvents_NoComplexEvents_31.insert(ComplexEventPrice_31.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_31(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_31);
      ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceBoundaryMethod_31.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_31;
      ComplexEventPriceBoundaryPrecision_31.setString("83.330000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_31);
      ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceBoundaryPrecision_31.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_31(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_31);
      ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceTimeType_31.getString());
      FIX::ComplexEventType ComplexEventType_31(6);
      noComplexEvents_0_1_0.set(ComplexEventType_31);
      ComplexEvents_NoComplexEvents_31.insert(ComplexEventType_31.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_31;
      ComplexOptPayoutAmount_31.setString("7797503");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_31);
      ComplexEvents_NoComplexEvents_31.insert(ComplexOptPayoutAmount_31.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_31);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_61;
        FIX::ComplexEventEndDate ComplexEventEndDate_61(FIX::UTCTIMESTAMP(10, 51, 11, 7, 9, 2007));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_61);
        ComplexEventDates_NoComplexEventDates_61.insert(ComplexEventEndDate_61.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_61(FIX::UTCTIMESTAMP(20, 50, 2, 4, 8, 2009));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_61);
        ComplexEventDates_NoComplexEventDates_61.insert(ComplexEventStartDate_61.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_61);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_122;
          FIX::ComplexEventEndTime ComplexEventEndTime_122(FIX::UTCTIMEONLY(7, 0, 8));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_122);
          ComplexEventTimes_NoComplexEventTimes_122.insert(ComplexEventEndTime_122.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_122(FIX::UTCTIMEONLY(20, 59, 44));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_122);
          ComplexEventTimes_NoComplexEventTimes_122.insert(ComplexEventStartTime_122.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_122);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_123;
          FIX::ComplexEventEndTime ComplexEventEndTime_123(FIX::UTCTIMEONLY(6, 18, 36));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_123);
          ComplexEventTimes_NoComplexEventTimes_123.insert(ComplexEventEndTime_123.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_123(FIX::UTCTIMEONLY(14, 22, 3));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_123);
          ComplexEventTimes_NoComplexEventTimes_123.insert(ComplexEventStartTime_123.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_123);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_124;
          FIX::ComplexEventEndTime ComplexEventEndTime_124(FIX::UTCTIMEONLY(1, 46, 22));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_124);
          ComplexEventTimes_NoComplexEventTimes_124.insert(ComplexEventEndTime_124.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_124(FIX::UTCTIMEONLY(19, 27, 25));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_124);
          ComplexEventTimes_NoComplexEventTimes_124.insert(ComplexEventStartTime_124.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_124);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_62;
        FIX::ComplexEventEndDate ComplexEventEndDate_62(FIX::UTCTIMESTAMP(5, 28, 39, 17, 8, 2016));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_62);
        ComplexEventDates_NoComplexEventDates_62.insert(ComplexEventEndDate_62.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_62(FIX::UTCTIMESTAMP(6, 58, 44, 5, 11, 2008));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_62);
        ComplexEventDates_NoComplexEventDates_62.insert(ComplexEventStartDate_62.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_62);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_125;
          FIX::ComplexEventEndTime ComplexEventEndTime_125(FIX::UTCTIMEONLY(14, 36, 46));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_125);
          ComplexEventTimes_NoComplexEventTimes_125.insert(ComplexEventEndTime_125.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_125(FIX::UTCTIMEONLY(14, 0, 16));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_125);
          ComplexEventTimes_NoComplexEventTimes_125.insert(ComplexEventStartTime_125.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_125);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_32;
      FIX::ComplexEventCondition ComplexEventCondition_32(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_32);
      ComplexEvents_NoComplexEvents_32.insert(ComplexEventCondition_32.getString());
      FIX::ComplexEventPrice ComplexEventPrice_32;
      ComplexEventPrice_32.setString("1602090");
      noComplexEvents_0_1_1.set(ComplexEventPrice_32);
      ComplexEvents_NoComplexEvents_32.insert(ComplexEventPrice_32.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_32(4);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_32);
      ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceBoundaryMethod_32.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_32;
      ComplexEventPriceBoundaryPrecision_32.setString("64.430000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_32);
      ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceBoundaryPrecision_32.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_32(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_32);
      ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceTimeType_32.getString());
      FIX::ComplexEventType ComplexEventType_32(3);
      noComplexEvents_0_1_1.set(ComplexEventType_32);
      ComplexEvents_NoComplexEvents_32.insert(ComplexEventType_32.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_32;
      ComplexOptPayoutAmount_32.setString("6582100");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_32);
      ComplexEvents_NoComplexEvents_32.insert(ComplexOptPayoutAmount_32.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_32);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_63;
        FIX::ComplexEventEndDate ComplexEventEndDate_63(FIX::UTCTIMESTAMP(20, 11, 25, 9, 11, 2017));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_63);
        ComplexEventDates_NoComplexEventDates_63.insert(ComplexEventEndDate_63.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_63(FIX::UTCTIMESTAMP(4, 13, 58, 21, 12, 2000));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_63);
        ComplexEventDates_NoComplexEventDates_63.insert(ComplexEventStartDate_63.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_63);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_126;
          FIX::ComplexEventEndTime ComplexEventEndTime_126(FIX::UTCTIMEONLY(12, 55, 39));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_126);
          ComplexEventTimes_NoComplexEventTimes_126.insert(ComplexEventEndTime_126.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_126(FIX::UTCTIMEONLY(22, 31, 42));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_126);
          ComplexEventTimes_NoComplexEventTimes_126.insert(ComplexEventStartTime_126.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_126);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_33;
      FIX::ComplexEventCondition ComplexEventCondition_33(2);
      noComplexEvents_0_1_2.set(ComplexEventCondition_33);
      ComplexEvents_NoComplexEvents_33.insert(ComplexEventCondition_33.getString());
      FIX::ComplexEventPrice ComplexEventPrice_33;
      ComplexEventPrice_33.setString("3641649");
      noComplexEvents_0_1_2.set(ComplexEventPrice_33);
      ComplexEvents_NoComplexEvents_33.insert(ComplexEventPrice_33.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_33(1);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_33);
      ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceBoundaryMethod_33.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_33;
      ComplexEventPriceBoundaryPrecision_33.setString("3.350000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_33);
      ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceBoundaryPrecision_33.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_33(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_33);
      ComplexEvents_NoComplexEvents_33.insert(ComplexEventPriceTimeType_33.getString());
      FIX::ComplexEventType ComplexEventType_33(6);
      noComplexEvents_0_1_2.set(ComplexEventType_33);
      ComplexEvents_NoComplexEvents_33.insert(ComplexEventType_33.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_33;
      ComplexOptPayoutAmount_33.setString("4119767");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_33);
      ComplexEvents_NoComplexEvents_33.insert(ComplexOptPayoutAmount_33.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_33);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_64;
        FIX::ComplexEventEndDate ComplexEventEndDate_64(FIX::UTCTIMESTAMP(10, 48, 50, 8, 11, 2011));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_64);
        ComplexEventDates_NoComplexEventDates_64.insert(ComplexEventEndDate_64.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_64(FIX::UTCTIMESTAMP(2, 10, 47, 12, 2, 2009));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_64);
        ComplexEventDates_NoComplexEventDates_64.insert(ComplexEventStartDate_64.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_64);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_127;
          FIX::ComplexEventEndTime ComplexEventEndTime_127(FIX::UTCTIMEONLY(22, 31, 41));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_127);
          ComplexEventTimes_NoComplexEventTimes_127.insert(ComplexEventEndTime_127.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_127(FIX::UTCTIMEONLY(5, 13, 42));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_127);
          ComplexEventTimes_NoComplexEventTimes_127.insert(ComplexEventStartTime_127.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_127);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_128;
          FIX::ComplexEventEndTime ComplexEventEndTime_128(FIX::UTCTIMEONLY(18, 20, 3));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_128);
          ComplexEventTimes_NoComplexEventTimes_128.insert(ComplexEventEndTime_128.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_128(FIX::UTCTIMEONLY(23, 41, 22));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_128);
          ComplexEventTimes_NoComplexEventTimes_128.insert(ComplexEventStartTime_128.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_128);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_129;
          FIX::ComplexEventEndTime ComplexEventEndTime_129(FIX::UTCTIMEONLY(8, 10, 6));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_129);
          ComplexEventTimes_NoComplexEventTimes_129.insert(ComplexEventEndTime_129.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_129(FIX::UTCTIMEONLY(9, 3, 49));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_129);
          ComplexEventTimes_NoComplexEventTimes_129.insert(ComplexEventStartTime_129.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_129);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_32;
      FIX::EventDate EventDate_32("LOCALMKTDATE_899572153");
      noEvents_0_1_0.set(EventDate_32);
      EvntGrp_NoEvents_32.insert(EventDate_32.getString());
      FIX::EventPx EventPx_32;
      EventPx_32.setString("2652370");
      noEvents_0_1_0.set(EventPx_32);
      EvntGrp_NoEvents_32.insert(EventPx_32.getString());
      FIX::EventText EventText_32("STRING_1154815939");
      noEvents_0_1_0.set(EventText_32);
      EvntGrp_NoEvents_32.insert(EventText_32.getString());
      FIX::EventTime EventTime_32(FIX::UTCTIMESTAMP(2, 55, 9, 8, 3, 2003));
      noEvents_0_1_0.set(EventTime_32);
      EvntGrp_NoEvents_32.insert(EventTime_32.getString());
      FIX::EventType EventType_32(5);
      noEvents_0_1_0.set(EventType_32);
      EvntGrp_NoEvents_32.insert(EventType_32.getString());
      all_values.push_back(EvntGrp_NoEvents_32);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_37;
      FIX::InstrumentPartyID InstrumentPartyID_37("STRING_1665494276");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_37);
      InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyID_37.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_37('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_37);
      InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyIDSource_37.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_37(1316994039);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_37);
      InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyRole_37.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_37);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74;
        FIX::InstrumentPartySubID InstrumentPartySubID_74("STRING_521998151");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_74);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74.insert(InstrumentPartySubID_74.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_74(693457655);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_74);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74.insert(InstrumentPartySubIDType_74.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75;
        FIX::InstrumentPartySubID InstrumentPartySubID_75("STRING_1714290494");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_75);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75.insert(InstrumentPartySubID_75.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_75(1379797750);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_75);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75.insert(InstrumentPartySubIDType_75.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76;
        FIX::InstrumentPartySubID InstrumentPartySubID_76("STRING_481897988");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_76);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76.insert(InstrumentPartySubID_76.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_76(1164437248);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_76);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76.insert(InstrumentPartySubIDType_76.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_38;
      FIX::InstrumentPartyID InstrumentPartyID_38("STRING_123976287");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_38);
      InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyID_38.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_38('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_38);
      InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyIDSource_38.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_38(724271371);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_38);
      InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyRole_38.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_38);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77;
        FIX::InstrumentPartySubID InstrumentPartySubID_77("STRING_945860980");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_77);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77.insert(InstrumentPartySubID_77.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_77(684052220);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_77);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77.insert(InstrumentPartySubIDType_77.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_39;
      FIX::InstrumentPartyID InstrumentPartyID_39("STRING_669254677");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_39);
      InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyID_39.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_39('2');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_39);
      InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyIDSource_39.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_39(1470341303);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_39);
      InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyRole_39.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_39);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78;
        FIX::InstrumentPartySubID InstrumentPartySubID_78("STRING_178188531");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_78);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78.insert(InstrumentPartySubID_78.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_78(477673595);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_78);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78.insert(InstrumentPartySubIDType_78.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79;
        FIX::InstrumentPartySubID InstrumentPartySubID_79("STRING_716124717");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_79);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79.insert(InstrumentPartySubID_79.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_79(628008101);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_79);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79.insert(InstrumentPartySubIDType_79.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80;
        FIX::InstrumentPartySubID InstrumentPartySubID_80("STRING_1715392590");
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubID_80);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80.insert(InstrumentPartySubID_80.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_80(931101487);
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubIDType_80);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80.insert(InstrumentPartySubIDType_80.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_38;
      FIX::SecurityAltID SecurityAltID_38("STRING_1281019368");
      noSecurityAltID_0_1_0.set(SecurityAltID_38);
      SecAltIDGrp_NoSecurityAltID_38.insert(SecurityAltID_38.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_38("STRING_695617190");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_38);
      SecAltIDGrp_NoSecurityAltID_38.insert(SecurityAltIDSource_38.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_38);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_36;
    FIX::SecurityXML SecurityXML_37("XMLDATA_1537019362");
    noRelatedSym_0_0.set(SecurityXML_37);
    FIX::SecurityXMLLen SecurityXMLLen_18(827832831);
    noRelatedSym_0_0.set(SecurityXMLLen_18);
    FIX::SecurityXMLSchema SecurityXMLSchema_18("STRING_213627818");
    noRelatedSym_0_0.set(SecurityXMLSchema_18);
    SecurityXML_36.insert(SecurityXMLSchema_18.getString());
    all_values.push_back(SecurityXML_36);

    // InstrumentExtension
    multiset<string> InstrumentExtension_4;
    FIX::DeliveryForm DeliveryForm_4(2);
    noRelatedSym_0_0.set(DeliveryForm_4);
    InstrumentExtension_4.insert(DeliveryForm_4.getString());
    FIX::PctAtRisk PctAtRisk_4;
    PctAtRisk_4.setString("68.700000");
    noRelatedSym_0_0.set(PctAtRisk_4);
    InstrumentExtension_4.insert(PctAtRisk_4.getString());
    all_values.push_back(InstrumentExtension_4);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_10;
      FIX::InstrAttribType InstrAttribType_10(25);
      noInstrAttrib_0_1_0.set(InstrAttribType_10);
      AttrbGrp_NoInstrAttrib_10.insert(InstrAttribType_10.getString());
      FIX::InstrAttribValue InstrAttribValue_10("STRING_690800877");
      noInstrAttrib_0_1_0.set(InstrAttribValue_10);
      AttrbGrp_NoInstrAttrib_10.insert(InstrAttribValue_10.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_10);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_11;
      FIX::InstrAttribType InstrAttribType_11(23);
      noInstrAttrib_0_1_1.set(InstrAttribType_11);
      AttrbGrp_NoInstrAttrib_11.insert(InstrAttribType_11.getString());
      FIX::InstrAttribValue InstrAttribValue_11("STRING_708216867");
      noInstrAttrib_0_1_1.set(InstrAttribValue_11);
      AttrbGrp_NoInstrAttrib_11.insert(InstrAttribValue_11.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_11);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_0;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_0;
    SecondaryHighLimitPrice_0.setString("11726988");
    noRelatedSym_0_0.set(SecondaryHighLimitPrice_0);
    SecondaryPriceLimits_0.insert(SecondaryHighLimitPrice_0.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_0;
    SecondaryLowLimitPrice_0.setString("5805424");
    noRelatedSym_0_0.set(SecondaryLowLimitPrice_0);
    SecondaryPriceLimits_0.insert(SecondaryLowLimitPrice_0.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_0(832193154);
    noRelatedSym_0_0.set(SecondaryPriceLimitType_0);
    SecondaryPriceLimits_0.insert(SecondaryPriceLimitType_0.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_0;
    SecondaryTradingReferencePrice_0.setString("1400555");
    noRelatedSym_0_0.set(SecondaryTradingReferencePrice_0);
    SecondaryPriceLimits_0.insert(SecondaryTradingReferencePrice_0.getString());
    all_values.push_back(SecondaryPriceLimits_0);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_1;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_1;
    FIX::CorporateAction CorporateAction_1("MULTIPLECHARVALUE_G");
    noRelatedSym_0_1.set(CorporateAction_1);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(CorporateAction_1.getString());
    FIX::Currency Currency_15("EUR");
    noRelatedSym_0_1.set(Currency_15);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(Currency_15.getString());
    FIX::EncodedText EncodedText_27("DATA_1988866054");
    noRelatedSym_0_1.set(EncodedText_27);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(EncodedText_27.getString());
    FIX::EncodedTextLen EncodedTextLen_27(2112756724);
    noRelatedSym_0_1.set(EncodedTextLen_27);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(EncodedTextLen_27.getString());
    FIX::RelSymTransactTime RelSymTransactTime_1(FIX::UTCTIMESTAMP(13, 47, 32, 16, 1, 2007));
    noRelatedSym_0_1.set(RelSymTransactTime_1);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(RelSymTransactTime_1.getString());
    FIX::Text Text_27("STRING_1357306246");
    noRelatedSym_0_1.set(Text_27);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(Text_27.getString());
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_30;
      FIX::EncodedLegIssuer EncodedLegIssuer_30("DATA_1341160571");
      noLegs_1_1_0.set(EncodedLegIssuer_30);
      InstrumentLeg_30.insert(EncodedLegIssuer_30.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_30(490841966);
      noLegs_1_1_0.set(EncodedLegIssuerLen_30);
      InstrumentLeg_30.insert(EncodedLegIssuerLen_30.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_30("DATA_1729459653");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_30);
      InstrumentLeg_30.insert(EncodedLegSecurityDesc_30.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_30(730696286);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_30);
      InstrumentLeg_30.insert(EncodedLegSecurityDescLen_30.getString());
      FIX::LegCFICode LegCFICode_30("STRING_1318674797");
      noLegs_1_1_0.set(LegCFICode_30);
      InstrumentLeg_30.insert(LegCFICode_30.getString());
      FIX::LegContractMultiplier LegContractMultiplier_30;
      LegContractMultiplier_30.setString("19430874");
      noLegs_1_1_0.set(LegContractMultiplier_30);
      InstrumentLeg_30.insert(LegContractMultiplier_30.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_30(1684600899);
      noLegs_1_1_0.set(LegContractMultiplierUnit_30);
      InstrumentLeg_30.insert(LegContractMultiplierUnit_30.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_30("MONTHYEAR_1316018020");
      noLegs_1_1_0.set(LegContractSettlMonth_30);
      InstrumentLeg_30.insert(LegContractSettlMonth_30.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_30("COUNTRY_1792385839");
      noLegs_1_1_0.set(LegCountryOfIssue_30);
      InstrumentLeg_30.insert(LegCountryOfIssue_30.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_30("LOCALMKTDATE_1013020016");
      noLegs_1_1_0.set(LegCouponPaymentDate_30);
      InstrumentLeg_30.insert(LegCouponPaymentDate_30.getString());
      FIX::LegCouponRate LegCouponRate_30;
      LegCouponRate_30.setString("88.970000");
      noLegs_1_1_0.set(LegCouponRate_30);
      InstrumentLeg_30.insert(LegCouponRate_30.getString());
      FIX::LegCreditRating LegCreditRating_30("STRING_1208491054");
      noLegs_1_1_0.set(LegCreditRating_30);
      InstrumentLeg_30.insert(LegCreditRating_30.getString());
      FIX::LegCurrency LegCurrency_30("CAN");
      noLegs_1_1_0.set(LegCurrency_30);
      InstrumentLeg_30.insert(LegCurrency_30.getString());
      FIX::LegDatedDate LegDatedDate_30("LOCALMKTDATE_1789033517");
      noLegs_1_1_0.set(LegDatedDate_30);
      InstrumentLeg_30.insert(LegDatedDate_30.getString());
      FIX::LegExerciseStyle LegExerciseStyle_30(405946389);
      noLegs_1_1_0.set(LegExerciseStyle_30);
      InstrumentLeg_30.insert(LegExerciseStyle_30.getString());
      FIX::LegFactor LegFactor_30;
      LegFactor_30.setString("11720896");
      noLegs_1_1_0.set(LegFactor_30);
      InstrumentLeg_30.insert(LegFactor_30.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_30(946363703);
      noLegs_1_1_0.set(LegFlowScheduleType_30);
      InstrumentLeg_30.insert(LegFlowScheduleType_30.getString());
      FIX::LegInstrRegistry LegInstrRegistry_30("STRING_1849448436");
      noLegs_1_1_0.set(LegInstrRegistry_30);
      InstrumentLeg_30.insert(LegInstrRegistry_30.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_30("LOCALMKTDATE_110522485");
      noLegs_1_1_0.set(LegInterestAccrualDate_30);
      InstrumentLeg_30.insert(LegInterestAccrualDate_30.getString());
      FIX::LegIssueDate LegIssueDate_30("LOCALMKTDATE_787746109");
      noLegs_1_1_0.set(LegIssueDate_30);
      InstrumentLeg_30.insert(LegIssueDate_30.getString());
      FIX::LegIssuer LegIssuer_30("STRING_1814721513");
      noLegs_1_1_0.set(LegIssuer_30);
      InstrumentLeg_30.insert(LegIssuer_30.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_30("STRING_1109390466");
      noLegs_1_1_0.set(LegLocaleOfIssue_30);
      InstrumentLeg_30.insert(LegLocaleOfIssue_30.getString());
      FIX::LegMaturityDate LegMaturityDate_30("LOCALMKTDATE_2099469818");
      noLegs_1_1_0.set(LegMaturityDate_30);
      InstrumentLeg_30.insert(LegMaturityDate_30.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_30("MONTHYEAR_1201337772");
      noLegs_1_1_0.set(LegMaturityMonthYear_30);
      InstrumentLeg_30.insert(LegMaturityMonthYear_30.getString());
      FIX::LegMaturityTime LegMaturityTime_30("TZTIMEONLY_138963330");
      noLegs_1_1_0.set(LegMaturityTime_30);
      InstrumentLeg_30.insert(LegMaturityTime_30.getString());
      FIX::LegOptAttribute LegOptAttribute_30('1');
      noLegs_1_1_0.set(LegOptAttribute_30);
      InstrumentLeg_30.insert(LegOptAttribute_30.getString());
      FIX::LegOptionRatio LegOptionRatio_30;
      LegOptionRatio_30.setString("13040787");
      noLegs_1_1_0.set(LegOptionRatio_30);
      InstrumentLeg_30.insert(LegOptionRatio_30.getString());
      FIX::LegPool LegPool_30("STRING_1944027943");
      noLegs_1_1_0.set(LegPool_30);
      InstrumentLeg_30.insert(LegPool_30.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_30("STRING_951206073");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_30);
      InstrumentLeg_30.insert(LegPriceUnitOfMeasure_30.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_30;
      LegPriceUnitOfMeasureQty_30.setString("1904375");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_30);
      InstrumentLeg_30.insert(LegPriceUnitOfMeasureQty_30.getString());
      FIX::LegProduct LegProduct_30(1137704867);
      noLegs_1_1_0.set(LegProduct_30);
      InstrumentLeg_30.insert(LegProduct_30.getString());
      FIX::LegPutOrCall LegPutOrCall_30(1442048040);
      noLegs_1_1_0.set(LegPutOrCall_30);
      InstrumentLeg_30.insert(LegPutOrCall_30.getString());
      FIX::LegRatioQty LegRatioQty_30;
      LegRatioQty_30.setString("19198972");
      noLegs_1_1_0.set(LegRatioQty_30);
      InstrumentLeg_30.insert(LegRatioQty_30.getString());
      FIX::LegRedemptionDate LegRedemptionDate_30("LOCALMKTDATE_1868401153");
      noLegs_1_1_0.set(LegRedemptionDate_30);
      InstrumentLeg_30.insert(LegRedemptionDate_30.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_30("STRING_613239189");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_30);
      InstrumentLeg_30.insert(LegRepoCollateralSecurityType_30.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_30;
      LegRepurchaseRate_30.setString("10.410000");
      noLegs_1_1_0.set(LegRepurchaseRate_30);
      InstrumentLeg_30.insert(LegRepurchaseRate_30.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_30(1405518404);
      noLegs_1_1_0.set(LegRepurchaseTerm_30);
      InstrumentLeg_30.insert(LegRepurchaseTerm_30.getString());
      FIX::LegSecurityDesc LegSecurityDesc_30("STRING_1929257209");
      noLegs_1_1_0.set(LegSecurityDesc_30);
      InstrumentLeg_30.insert(LegSecurityDesc_30.getString());
      FIX::LegSecurityExchange LegSecurityExchange_30("EXCHANGE_1360403232");
      noLegs_1_1_0.set(LegSecurityExchange_30);
      InstrumentLeg_30.insert(LegSecurityExchange_30.getString());
      FIX::LegSecurityID LegSecurityID_30("STRING_271054772");
      noLegs_1_1_0.set(LegSecurityID_30);
      InstrumentLeg_30.insert(LegSecurityID_30.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_30("STRING_1788592459");
      noLegs_1_1_0.set(LegSecurityIDSource_30);
      InstrumentLeg_30.insert(LegSecurityIDSource_30.getString());
      FIX::LegSecuritySubType LegSecuritySubType_30("STRING_421410638");
      noLegs_1_1_0.set(LegSecuritySubType_30);
      InstrumentLeg_30.insert(LegSecuritySubType_30.getString());
      FIX::LegSecurityType LegSecurityType_30("STRING_1992291655");
      noLegs_1_1_0.set(LegSecurityType_30);
      InstrumentLeg_30.insert(LegSecurityType_30.getString());
      FIX::LegSide LegSide_30('6');
      noLegs_1_1_0.set(LegSide_30);
      InstrumentLeg_30.insert(LegSide_30.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_30("STRING_62960507");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_30);
      InstrumentLeg_30.insert(LegStateOrProvinceOfIssue_30.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_30("USD");
      noLegs_1_1_0.set(LegStrikeCurrency_30);
      InstrumentLeg_30.insert(LegStrikeCurrency_30.getString());
      FIX::LegStrikePrice LegStrikePrice_30;
      LegStrikePrice_30.setString("10093242");
      noLegs_1_1_0.set(LegStrikePrice_30);
      InstrumentLeg_30.insert(LegStrikePrice_30.getString());
      FIX::LegSymbol LegSymbol_30("STRING_2100202833");
      noLegs_1_1_0.set(LegSymbol_30);
      InstrumentLeg_30.insert(LegSymbol_30.getString());
      FIX::LegSymbolSfx LegSymbolSfx_30("STRING_1955755045");
      noLegs_1_1_0.set(LegSymbolSfx_30);
      InstrumentLeg_30.insert(LegSymbolSfx_30.getString());
      FIX::LegTimeUnit LegTimeUnit_30("STRING_1797070319");
      noLegs_1_1_0.set(LegTimeUnit_30);
      InstrumentLeg_30.insert(LegTimeUnit_30.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_30("STRING_1767440698");
      noLegs_1_1_0.set(LegUnitOfMeasure_30);
      InstrumentLeg_30.insert(LegUnitOfMeasure_30.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_30;
      LegUnitOfMeasureQty_30.setString("9176618");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_30);
      InstrumentLeg_30.insert(LegUnitOfMeasureQty_30.getString());
      all_values.push_back(InstrumentLeg_30);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_56;
        FIX::LegSecurityAltID LegSecurityAltID_56("STRING_821294822");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_56);
        LegSecAltIDGrp_NoLegSecurityAltID_56.insert(LegSecurityAltID_56.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_56("STRING_1056625193");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_56);
        LegSecAltIDGrp_NoLegSecurityAltID_56.insert(LegSecurityAltIDSource_56.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_56);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_31;
      FIX::EncodedLegIssuer EncodedLegIssuer_31("DATA_1342956317");
      noLegs_1_1_1.set(EncodedLegIssuer_31);
      InstrumentLeg_31.insert(EncodedLegIssuer_31.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_31(2125373570);
      noLegs_1_1_1.set(EncodedLegIssuerLen_31);
      InstrumentLeg_31.insert(EncodedLegIssuerLen_31.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_31("DATA_853169489");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_31);
      InstrumentLeg_31.insert(EncodedLegSecurityDesc_31.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_31(146678742);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_31);
      InstrumentLeg_31.insert(EncodedLegSecurityDescLen_31.getString());
      FIX::LegCFICode LegCFICode_31("STRING_168327486");
      noLegs_1_1_1.set(LegCFICode_31);
      InstrumentLeg_31.insert(LegCFICode_31.getString());
      FIX::LegContractMultiplier LegContractMultiplier_31;
      LegContractMultiplier_31.setString("19908743");
      noLegs_1_1_1.set(LegContractMultiplier_31);
      InstrumentLeg_31.insert(LegContractMultiplier_31.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_31(1588726782);
      noLegs_1_1_1.set(LegContractMultiplierUnit_31);
      InstrumentLeg_31.insert(LegContractMultiplierUnit_31.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_31("MONTHYEAR_2088224704");
      noLegs_1_1_1.set(LegContractSettlMonth_31);
      InstrumentLeg_31.insert(LegContractSettlMonth_31.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_31("COUNTRY_1711791861");
      noLegs_1_1_1.set(LegCountryOfIssue_31);
      InstrumentLeg_31.insert(LegCountryOfIssue_31.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_31("LOCALMKTDATE_54482324");
      noLegs_1_1_1.set(LegCouponPaymentDate_31);
      InstrumentLeg_31.insert(LegCouponPaymentDate_31.getString());
      FIX::LegCouponRate LegCouponRate_31;
      LegCouponRate_31.setString("20.970000");
      noLegs_1_1_1.set(LegCouponRate_31);
      InstrumentLeg_31.insert(LegCouponRate_31.getString());
      FIX::LegCreditRating LegCreditRating_31("STRING_969826617");
      noLegs_1_1_1.set(LegCreditRating_31);
      InstrumentLeg_31.insert(LegCreditRating_31.getString());
      FIX::LegCurrency LegCurrency_31("EUR");
      noLegs_1_1_1.set(LegCurrency_31);
      InstrumentLeg_31.insert(LegCurrency_31.getString());
      FIX::LegDatedDate LegDatedDate_31("LOCALMKTDATE_1240881390");
      noLegs_1_1_1.set(LegDatedDate_31);
      InstrumentLeg_31.insert(LegDatedDate_31.getString());
      FIX::LegExerciseStyle LegExerciseStyle_31(1624848344);
      noLegs_1_1_1.set(LegExerciseStyle_31);
      InstrumentLeg_31.insert(LegExerciseStyle_31.getString());
      FIX::LegFactor LegFactor_31;
      LegFactor_31.setString("12905723");
      noLegs_1_1_1.set(LegFactor_31);
      InstrumentLeg_31.insert(LegFactor_31.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_31(1085689397);
      noLegs_1_1_1.set(LegFlowScheduleType_31);
      InstrumentLeg_31.insert(LegFlowScheduleType_31.getString());
      FIX::LegInstrRegistry LegInstrRegistry_31("STRING_150507623");
      noLegs_1_1_1.set(LegInstrRegistry_31);
      InstrumentLeg_31.insert(LegInstrRegistry_31.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_31("LOCALMKTDATE_1353532827");
      noLegs_1_1_1.set(LegInterestAccrualDate_31);
      InstrumentLeg_31.insert(LegInterestAccrualDate_31.getString());
      FIX::LegIssueDate LegIssueDate_31("LOCALMKTDATE_1336443794");
      noLegs_1_1_1.set(LegIssueDate_31);
      InstrumentLeg_31.insert(LegIssueDate_31.getString());
      FIX::LegIssuer LegIssuer_31("STRING_1995740183");
      noLegs_1_1_1.set(LegIssuer_31);
      InstrumentLeg_31.insert(LegIssuer_31.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_31("STRING_215373390");
      noLegs_1_1_1.set(LegLocaleOfIssue_31);
      InstrumentLeg_31.insert(LegLocaleOfIssue_31.getString());
      FIX::LegMaturityDate LegMaturityDate_31("LOCALMKTDATE_1289162979");
      noLegs_1_1_1.set(LegMaturityDate_31);
      InstrumentLeg_31.insert(LegMaturityDate_31.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_31("MONTHYEAR_1804011581");
      noLegs_1_1_1.set(LegMaturityMonthYear_31);
      InstrumentLeg_31.insert(LegMaturityMonthYear_31.getString());
      FIX::LegMaturityTime LegMaturityTime_31("TZTIMEONLY_2012443709");
      noLegs_1_1_1.set(LegMaturityTime_31);
      InstrumentLeg_31.insert(LegMaturityTime_31.getString());
      FIX::LegOptAttribute LegOptAttribute_31('9');
      noLegs_1_1_1.set(LegOptAttribute_31);
      InstrumentLeg_31.insert(LegOptAttribute_31.getString());
      FIX::LegOptionRatio LegOptionRatio_31;
      LegOptionRatio_31.setString("5741897");
      noLegs_1_1_1.set(LegOptionRatio_31);
      InstrumentLeg_31.insert(LegOptionRatio_31.getString());
      FIX::LegPool LegPool_31("STRING_1614016551");
      noLegs_1_1_1.set(LegPool_31);
      InstrumentLeg_31.insert(LegPool_31.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_31("STRING_1730414851");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_31);
      InstrumentLeg_31.insert(LegPriceUnitOfMeasure_31.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_31;
      LegPriceUnitOfMeasureQty_31.setString("16308149");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_31);
      InstrumentLeg_31.insert(LegPriceUnitOfMeasureQty_31.getString());
      FIX::LegProduct LegProduct_31(809489220);
      noLegs_1_1_1.set(LegProduct_31);
      InstrumentLeg_31.insert(LegProduct_31.getString());
      FIX::LegPutOrCall LegPutOrCall_31(1708304773);
      noLegs_1_1_1.set(LegPutOrCall_31);
      InstrumentLeg_31.insert(LegPutOrCall_31.getString());
      FIX::LegRatioQty LegRatioQty_31;
      LegRatioQty_31.setString("3365008");
      noLegs_1_1_1.set(LegRatioQty_31);
      InstrumentLeg_31.insert(LegRatioQty_31.getString());
      FIX::LegRedemptionDate LegRedemptionDate_31("LOCALMKTDATE_956167963");
      noLegs_1_1_1.set(LegRedemptionDate_31);
      InstrumentLeg_31.insert(LegRedemptionDate_31.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_31("STRING_1876632260");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_31);
      InstrumentLeg_31.insert(LegRepoCollateralSecurityType_31.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_31;
      LegRepurchaseRate_31.setString("15.390000");
      noLegs_1_1_1.set(LegRepurchaseRate_31);
      InstrumentLeg_31.insert(LegRepurchaseRate_31.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_31(397411097);
      noLegs_1_1_1.set(LegRepurchaseTerm_31);
      InstrumentLeg_31.insert(LegRepurchaseTerm_31.getString());
      FIX::LegSecurityDesc LegSecurityDesc_31("STRING_1817373316");
      noLegs_1_1_1.set(LegSecurityDesc_31);
      InstrumentLeg_31.insert(LegSecurityDesc_31.getString());
      FIX::LegSecurityExchange LegSecurityExchange_31("EXCHANGE_1891683400");
      noLegs_1_1_1.set(LegSecurityExchange_31);
      InstrumentLeg_31.insert(LegSecurityExchange_31.getString());
      FIX::LegSecurityID LegSecurityID_31("STRING_451893421");
      noLegs_1_1_1.set(LegSecurityID_31);
      InstrumentLeg_31.insert(LegSecurityID_31.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_31("STRING_1326131765");
      noLegs_1_1_1.set(LegSecurityIDSource_31);
      InstrumentLeg_31.insert(LegSecurityIDSource_31.getString());
      FIX::LegSecuritySubType LegSecuritySubType_31("STRING_714026369");
      noLegs_1_1_1.set(LegSecuritySubType_31);
      InstrumentLeg_31.insert(LegSecuritySubType_31.getString());
      FIX::LegSecurityType LegSecurityType_31("STRING_288149307");
      noLegs_1_1_1.set(LegSecurityType_31);
      InstrumentLeg_31.insert(LegSecurityType_31.getString());
      FIX::LegSide LegSide_31('4');
      noLegs_1_1_1.set(LegSide_31);
      InstrumentLeg_31.insert(LegSide_31.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_31("STRING_1954907759");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_31);
      InstrumentLeg_31.insert(LegStateOrProvinceOfIssue_31.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_31("GBP");
      noLegs_1_1_1.set(LegStrikeCurrency_31);
      InstrumentLeg_31.insert(LegStrikeCurrency_31.getString());
      FIX::LegStrikePrice LegStrikePrice_31;
      LegStrikePrice_31.setString("8931135");
      noLegs_1_1_1.set(LegStrikePrice_31);
      InstrumentLeg_31.insert(LegStrikePrice_31.getString());
      FIX::LegSymbol LegSymbol_31("STRING_2063505274");
      noLegs_1_1_1.set(LegSymbol_31);
      InstrumentLeg_31.insert(LegSymbol_31.getString());
      FIX::LegSymbolSfx LegSymbolSfx_31("STRING_544431298");
      noLegs_1_1_1.set(LegSymbolSfx_31);
      InstrumentLeg_31.insert(LegSymbolSfx_31.getString());
      FIX::LegTimeUnit LegTimeUnit_31("STRING_82073655");
      noLegs_1_1_1.set(LegTimeUnit_31);
      InstrumentLeg_31.insert(LegTimeUnit_31.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_31("STRING_1911761810");
      noLegs_1_1_1.set(LegUnitOfMeasure_31);
      InstrumentLeg_31.insert(LegUnitOfMeasure_31.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_31;
      LegUnitOfMeasureQty_31.setString("7598046");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_31);
      InstrumentLeg_31.insert(LegUnitOfMeasureQty_31.getString());
      all_values.push_back(InstrumentLeg_31);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_57;
        FIX::LegSecurityAltID LegSecurityAltID_57("STRING_1568289743");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_57);
        LegSecAltIDGrp_NoLegSecurityAltID_57.insert(LegSecurityAltID_57.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_57("STRING_624764749");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_57);
        LegSecAltIDGrp_NoLegSecurityAltID_57.insert(LegSecurityAltIDSource_57.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_57);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_19;
    FIX::AttachmentPoint AttachmentPoint_19;
    AttachmentPoint_19.setString("30.150000");
    noRelatedSym_0_1.set(AttachmentPoint_19);
    Instrument_19.insert(AttachmentPoint_19.getString());
    FIX::CFICode CFICode_19("STRING_2142479539");
    noRelatedSym_0_1.set(CFICode_19);
    Instrument_19.insert(CFICode_19.getString());
    FIX::CPProgram CPProgram_19(1);
    noRelatedSym_0_1.set(CPProgram_19);
    Instrument_19.insert(CPProgram_19.getString());
    FIX::CPRegType CPRegType_19("STRING_1863287866");
    noRelatedSym_0_1.set(CPRegType_19);
    Instrument_19.insert(CPRegType_19.getString());
    FIX::CapPrice CapPrice_19;
    CapPrice_19.setString("16258108");
    noRelatedSym_0_1.set(CapPrice_19);
    Instrument_19.insert(CapPrice_19.getString());
    FIX::ContractMultiplier ContractMultiplier_19;
    ContractMultiplier_19.setString("9007868");
    noRelatedSym_0_1.set(ContractMultiplier_19);
    Instrument_19.insert(ContractMultiplier_19.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_19(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_19);
    Instrument_19.insert(ContractMultiplierUnit_19.getString());
    FIX::ContractSettlMonth ContractSettlMonth_19("MONTHYEAR_1962311712");
    noRelatedSym_0_1.set(ContractSettlMonth_19);
    Instrument_19.insert(ContractSettlMonth_19.getString());
    FIX::CountryOfIssue CountryOfIssue_19("COUNTRY_1856954836");
    noRelatedSym_0_1.set(CountryOfIssue_19);
    Instrument_19.insert(CountryOfIssue_19.getString());
    FIX::CouponPaymentDate CouponPaymentDate_19("LOCALMKTDATE_1153257603");
    noRelatedSym_0_1.set(CouponPaymentDate_19);
    Instrument_19.insert(CouponPaymentDate_19.getString());
    FIX::CouponRate CouponRate_19;
    CouponRate_19.setString("32.510000");
    noRelatedSym_0_1.set(CouponRate_19);
    Instrument_19.insert(CouponRate_19.getString());
    FIX::CreditRating CreditRating_19("STRING_106882286");
    noRelatedSym_0_1.set(CreditRating_19);
    Instrument_19.insert(CreditRating_19.getString());
    FIX::DatedDate DatedDate_19("LOCALMKTDATE_823147271");
    noRelatedSym_0_1.set(DatedDate_19);
    Instrument_19.insert(DatedDate_19.getString());
    FIX::DetachmentPoint DetachmentPoint_19;
    DetachmentPoint_19.setString("30.030000");
    noRelatedSym_0_1.set(DetachmentPoint_19);
    Instrument_19.insert(DetachmentPoint_19.getString());
    FIX::EncodedIssuer EncodedIssuer_19("DATA_558775707");
    noRelatedSym_0_1.set(EncodedIssuer_19);
    Instrument_19.insert(EncodedIssuer_19.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_19(1795388);
    noRelatedSym_0_1.set(EncodedIssuerLen_19);
    Instrument_19.insert(EncodedIssuerLen_19.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_19("DATA_452945725");
    noRelatedSym_0_1.set(EncodedSecurityDesc_19);
    Instrument_19.insert(EncodedSecurityDesc_19.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_19(846925014);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_19);
    Instrument_19.insert(EncodedSecurityDescLen_19.getString());
    FIX::ExerciseStyle ExerciseStyle_19(1);
    noRelatedSym_0_1.set(ExerciseStyle_19);
    Instrument_19.insert(ExerciseStyle_19.getString());
    FIX::Factor Factor_19;
    Factor_19.setString("2603698");
    noRelatedSym_0_1.set(Factor_19);
    Instrument_19.insert(Factor_19.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_19(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_19);
    Instrument_19.insert(FlexProductEligibilityIndicator_19.getString());
    FIX::FlexibleIndicator FlexibleIndicator_19(false);
    noRelatedSym_0_1.set(FlexibleIndicator_19);
    Instrument_19.insert(FlexibleIndicator_19.getString());
    FIX::FloorPrice FloorPrice_19;
    FloorPrice_19.setString("11534833");
    noRelatedSym_0_1.set(FloorPrice_19);
    Instrument_19.insert(FloorPrice_19.getString());
    FIX::FlowScheduleType FlowScheduleType_19(4);
    noRelatedSym_0_1.set(FlowScheduleType_19);
    Instrument_19.insert(FlowScheduleType_19.getString());
    FIX::InstrRegistry InstrRegistry_19("STRING_1932418603");
    noRelatedSym_0_1.set(InstrRegistry_19);
    Instrument_19.insert(InstrRegistry_19.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_19('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_19);
    Instrument_19.insert(InstrmtAssignmentMethod_19.getString());
    FIX::InterestAccrualDate InterestAccrualDate_19("LOCALMKTDATE_292738806");
    noRelatedSym_0_1.set(InterestAccrualDate_19);
    Instrument_19.insert(InterestAccrualDate_19.getString());
    FIX::IssueDate IssueDate_19("LOCALMKTDATE_544739643");
    noRelatedSym_0_1.set(IssueDate_19);
    Instrument_19.insert(IssueDate_19.getString());
    FIX::Issuer Issuer_19("STRING_459309986");
    noRelatedSym_0_1.set(Issuer_19);
    Instrument_19.insert(Issuer_19.getString());
    FIX::ListMethod ListMethod_19(1);
    noRelatedSym_0_1.set(ListMethod_19);
    Instrument_19.insert(ListMethod_19.getString());
    FIX::LocaleOfIssue LocaleOfIssue_19("STRING_1169504393");
    noRelatedSym_0_1.set(LocaleOfIssue_19);
    Instrument_19.insert(LocaleOfIssue_19.getString());
    FIX::MaturityDate MaturityDate_19("LOCALMKTDATE_592183001");
    noRelatedSym_0_1.set(MaturityDate_19);
    Instrument_19.insert(MaturityDate_19.getString());
    FIX::MaturityMonthYear MaturityMonthYear_19("MONTHYEAR_1856024441");
    noRelatedSym_0_1.set(MaturityMonthYear_19);
    Instrument_19.insert(MaturityMonthYear_19.getString());
    FIX::MaturityTime MaturityTime_19("TZTIMEONLY_1260802046");
    noRelatedSym_0_1.set(MaturityTime_19);
    Instrument_19.insert(MaturityTime_19.getString());
    FIX::MinPriceIncrement MinPriceIncrement_19;
    MinPriceIncrement_19.setString("3079872");
    noRelatedSym_0_1.set(MinPriceIncrement_19);
    Instrument_19.insert(MinPriceIncrement_19.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_19;
    MinPriceIncrementAmount_19.setString("13343516");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_19);
    Instrument_19.insert(MinPriceIncrementAmount_19.getString());
    FIX::NTPositionLimit NTPositionLimit_19(14105271);
    noRelatedSym_0_1.set(NTPositionLimit_19);
    Instrument_19.insert(NTPositionLimit_19.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_19;
    NotionalPercentageOutstanding_19.setString("62.110000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_19);
    Instrument_19.insert(NotionalPercentageOutstanding_19.getString());
    FIX::OptAttribute OptAttribute_19('1');
    noRelatedSym_0_1.set(OptAttribute_19);
    Instrument_19.insert(OptAttribute_19.getString());
    FIX::OptPayoutAmount OptPayoutAmount_19;
    OptPayoutAmount_19.setString("18710601");
    noRelatedSym_0_1.set(OptPayoutAmount_19);
    Instrument_19.insert(OptPayoutAmount_19.getString());
    FIX::OptPayoutType OptPayoutType_19(1);
    noRelatedSym_0_1.set(OptPayoutType_19);
    Instrument_19.insert(OptPayoutType_19.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_19;
    OriginalNotionalPercentageOutstanding_19.setString("93.420000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_19);
    Instrument_19.insert(OriginalNotionalPercentageOutstanding_19.getString());
    FIX::Pool Pool_19("STRING_1977942394");
    noRelatedSym_0_1.set(Pool_19);
    Instrument_19.insert(Pool_19.getString());
    FIX::PositionLimit PositionLimit_19(1561017438);
    noRelatedSym_0_1.set(PositionLimit_19);
    Instrument_19.insert(PositionLimit_19.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_19("STRING_INT");
    noRelatedSym_0_1.set(PriceQuoteMethod_19);
    Instrument_19.insert(PriceQuoteMethod_19.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_19("STRING_389234453");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_19);
    Instrument_19.insert(PriceUnitOfMeasure_19.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_19;
    PriceUnitOfMeasureQty_19.setString("15628128");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_19);
    Instrument_19.insert(PriceUnitOfMeasureQty_19.getString());
    FIX::Product Product_21(7);
    noRelatedSym_0_1.set(Product_21);
    Instrument_19.insert(Product_21.getString());
    FIX::ProductComplex ProductComplex_19("STRING_1236159468");
    noRelatedSym_0_1.set(ProductComplex_19);
    Instrument_19.insert(ProductComplex_19.getString());
    FIX::PutOrCall PutOrCall_19(1);
    noRelatedSym_0_1.set(PutOrCall_19);
    Instrument_19.insert(PutOrCall_19.getString());
    FIX::RedemptionDate RedemptionDate_19("LOCALMKTDATE_1596134259");
    noRelatedSym_0_1.set(RedemptionDate_19);
    Instrument_19.insert(RedemptionDate_19.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_19("STRING_1848598486");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_19);
    Instrument_19.insert(RepoCollateralSecurityType_19.getString());
    FIX::RepurchaseRate RepurchaseRate_19;
    RepurchaseRate_19.setString("16.710000");
    noRelatedSym_0_1.set(RepurchaseRate_19);
    Instrument_19.insert(RepurchaseRate_19.getString());
    FIX::RepurchaseTerm RepurchaseTerm_19(602133957);
    noRelatedSym_0_1.set(RepurchaseTerm_19);
    Instrument_19.insert(RepurchaseTerm_19.getString());
    FIX::RestructuringType RestructuringType_19("STRING_MM");
    noRelatedSym_0_1.set(RestructuringType_19);
    Instrument_19.insert(RestructuringType_19.getString());
    FIX::SecurityDesc SecurityDesc_19("STRING_637856626");
    noRelatedSym_0_1.set(SecurityDesc_19);
    Instrument_19.insert(SecurityDesc_19.getString());
    FIX::SecurityExchange SecurityExchange_19("EXCHANGE_1837690957");
    noRelatedSym_0_1.set(SecurityExchange_19);
    Instrument_19.insert(SecurityExchange_19.getString());
    FIX::SecurityGroup SecurityGroup_19("STRING_522314289");
    noRelatedSym_0_1.set(SecurityGroup_19);
    Instrument_19.insert(SecurityGroup_19.getString());
    FIX::SecurityID SecurityID_19("STRING_1182596270");
    noRelatedSym_0_1.set(SecurityID_19);
    Instrument_19.insert(SecurityID_19.getString());
    FIX::SecurityIDSource SecurityIDSource_19("STRING_H");
    noRelatedSym_0_1.set(SecurityIDSource_19);
    Instrument_19.insert(SecurityIDSource_19.getString());
    FIX::SecurityStatus SecurityStatus_19("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_19);
    Instrument_19.insert(SecurityStatus_19.getString());
    FIX::SecuritySubType SecuritySubType_19("STRING_204617015");
    noRelatedSym_0_1.set(SecuritySubType_19);
    Instrument_19.insert(SecuritySubType_19.getString());
    FIX::SecurityType SecurityType_21("STRING_MPO");
    noRelatedSym_0_1.set(SecurityType_21);
    Instrument_19.insert(SecurityType_21.getString());
    FIX::Seniority Seniority_19("STRING_SB");
    noRelatedSym_0_1.set(Seniority_19);
    Instrument_19.insert(Seniority_19.getString());
    FIX::SettlMethod SettlMethod_19('P');
    noRelatedSym_0_1.set(SettlMethod_19);
    Instrument_19.insert(SettlMethod_19.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_19("STRING_1049687517");
    noRelatedSym_0_1.set(SettleOnOpenFlag_19);
    Instrument_19.insert(SettleOnOpenFlag_19.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_19("STRING_1278751658");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_19);
    Instrument_19.insert(StateOrProvinceOfIssue_19.getString());
    FIX::StrikeCurrency StrikeCurrency_19("USD");
    noRelatedSym_0_1.set(StrikeCurrency_19);
    Instrument_19.insert(StrikeCurrency_19.getString());
    FIX::StrikeMultiplier StrikeMultiplier_19;
    StrikeMultiplier_19.setString("2804477");
    noRelatedSym_0_1.set(StrikeMultiplier_19);
    Instrument_19.insert(StrikeMultiplier_19.getString());
    FIX::StrikePrice StrikePrice_19;
    StrikePrice_19.setString("12031007");
    noRelatedSym_0_1.set(StrikePrice_19);
    Instrument_19.insert(StrikePrice_19.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_19(2);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_19);
    Instrument_19.insert(StrikePriceBoundaryMethod_19.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_19;
    StrikePriceBoundaryPrecision_19.setString("70.910000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_19);
    Instrument_19.insert(StrikePriceBoundaryPrecision_19.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_19(3);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_19);
    Instrument_19.insert(StrikePriceDeterminationMethod_19.getString());
    FIX::StrikeValue StrikeValue_19;
    StrikeValue_19.setString("7857040");
    noRelatedSym_0_1.set(StrikeValue_19);
    Instrument_19.insert(StrikeValue_19.getString());
    FIX::Symbol Symbol_19("STRING_159682141");
    noRelatedSym_0_1.set(Symbol_19);
    Instrument_19.insert(Symbol_19.getString());
    FIX::SymbolSfx SymbolSfx_19("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_19);
    Instrument_19.insert(SymbolSfx_19.getString());
    FIX::TimeUnit TimeUnit_19("STRING_Mo");
    noRelatedSym_0_1.set(TimeUnit_19);
    Instrument_19.insert(TimeUnit_19.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_19(1);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_19);
    Instrument_19.insert(UnderlyingPriceDeterminationMethod_19.getString());
    FIX::UnitOfMeasure UnitOfMeasure_19("STRING_t");
    noRelatedSym_0_1.set(UnitOfMeasure_19);
    Instrument_19.insert(UnitOfMeasure_19.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_19;
    UnitOfMeasureQty_19.setString("18134512");
    noRelatedSym_0_1.set(UnitOfMeasureQty_19);
    Instrument_19.insert(UnitOfMeasureQty_19.getString());
    FIX::ValuationMethod ValuationMethod_19("STRING_FUT");
    noRelatedSym_0_1.set(ValuationMethod_19);
    Instrument_19.insert(ValuationMethod_19.getString());
    all_values.push_back(Instrument_19);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_34;
      FIX::ComplexEventCondition ComplexEventCondition_34(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_34);
      ComplexEvents_NoComplexEvents_34.insert(ComplexEventCondition_34.getString());
      FIX::ComplexEventPrice ComplexEventPrice_34;
      ComplexEventPrice_34.setString("15462311");
      noComplexEvents_1_1_0.set(ComplexEventPrice_34);
      ComplexEvents_NoComplexEvents_34.insert(ComplexEventPrice_34.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_34(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_34);
      ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceBoundaryMethod_34.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_34;
      ComplexEventPriceBoundaryPrecision_34.setString("58.780000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_34);
      ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceBoundaryPrecision_34.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_34(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_34);
      ComplexEvents_NoComplexEvents_34.insert(ComplexEventPriceTimeType_34.getString());
      FIX::ComplexEventType ComplexEventType_34(6);
      noComplexEvents_1_1_0.set(ComplexEventType_34);
      ComplexEvents_NoComplexEvents_34.insert(ComplexEventType_34.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_34;
      ComplexOptPayoutAmount_34.setString("1918585");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_34);
      ComplexEvents_NoComplexEvents_34.insert(ComplexOptPayoutAmount_34.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_34);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_65;
        FIX::ComplexEventEndDate ComplexEventEndDate_65(FIX::UTCTIMESTAMP(3, 56, 15, 24, 10, 2009));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_65);
        ComplexEventDates_NoComplexEventDates_65.insert(ComplexEventEndDate_65.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_65(FIX::UTCTIMESTAMP(9, 54, 45, 23, 7, 2015));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_65);
        ComplexEventDates_NoComplexEventDates_65.insert(ComplexEventStartDate_65.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_65);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_130;
          FIX::ComplexEventEndTime ComplexEventEndTime_130(FIX::UTCTIMEONLY(7, 35, 24));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_130);
          ComplexEventTimes_NoComplexEventTimes_130.insert(ComplexEventEndTime_130.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_130(FIX::UTCTIMEONLY(23, 12, 29));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_130);
          ComplexEventTimes_NoComplexEventTimes_130.insert(ComplexEventStartTime_130.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_130);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_33;
      FIX::EventDate EventDate_33("LOCALMKTDATE_1831286165");
      noEvents_1_1_0.set(EventDate_33);
      EvntGrp_NoEvents_33.insert(EventDate_33.getString());
      FIX::EventPx EventPx_33;
      EventPx_33.setString("17246368");
      noEvents_1_1_0.set(EventPx_33);
      EvntGrp_NoEvents_33.insert(EventPx_33.getString());
      FIX::EventText EventText_33("STRING_1069702897");
      noEvents_1_1_0.set(EventText_33);
      EvntGrp_NoEvents_33.insert(EventText_33.getString());
      FIX::EventTime EventTime_33(FIX::UTCTIMESTAMP(23, 17, 30, 11, 9, 2012));
      noEvents_1_1_0.set(EventTime_33);
      EvntGrp_NoEvents_33.insert(EventTime_33.getString());
      FIX::EventType EventType_33(16);
      noEvents_1_1_0.set(EventType_33);
      EvntGrp_NoEvents_33.insert(EventType_33.getString());
      all_values.push_back(EvntGrp_NoEvents_33);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_34;
      FIX::EventDate EventDate_34("LOCALMKTDATE_1372447840");
      noEvents_1_1_1.set(EventDate_34);
      EvntGrp_NoEvents_34.insert(EventDate_34.getString());
      FIX::EventPx EventPx_34;
      EventPx_34.setString("11687453");
      noEvents_1_1_1.set(EventPx_34);
      EvntGrp_NoEvents_34.insert(EventPx_34.getString());
      FIX::EventText EventText_34("STRING_1015212820");
      noEvents_1_1_1.set(EventText_34);
      EvntGrp_NoEvents_34.insert(EventText_34.getString());
      FIX::EventTime EventTime_34(FIX::UTCTIMESTAMP(16, 35, 17, 15, 10, 2003));
      noEvents_1_1_1.set(EventTime_34);
      EvntGrp_NoEvents_34.insert(EventTime_34.getString());
      FIX::EventType EventType_34(16);
      noEvents_1_1_1.set(EventType_34);
      EvntGrp_NoEvents_34.insert(EventType_34.getString());
      all_values.push_back(EvntGrp_NoEvents_34);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_35;
      FIX::EventDate EventDate_35("LOCALMKTDATE_1397969912");
      noEvents_1_1_2.set(EventDate_35);
      EvntGrp_NoEvents_35.insert(EventDate_35.getString());
      FIX::EventPx EventPx_35;
      EventPx_35.setString("3625024");
      noEvents_1_1_2.set(EventPx_35);
      EvntGrp_NoEvents_35.insert(EventPx_35.getString());
      FIX::EventText EventText_35("STRING_829435422");
      noEvents_1_1_2.set(EventText_35);
      EvntGrp_NoEvents_35.insert(EventText_35.getString());
      FIX::EventTime EventTime_35(FIX::UTCTIMESTAMP(20, 10, 0, 9, 2, 2009));
      noEvents_1_1_2.set(EventTime_35);
      EvntGrp_NoEvents_35.insert(EventTime_35.getString());
      FIX::EventType EventType_35(16);
      noEvents_1_1_2.set(EventType_35);
      EvntGrp_NoEvents_35.insert(EventType_35.getString());
      all_values.push_back(EvntGrp_NoEvents_35);

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_40;
      FIX::InstrumentPartyID InstrumentPartyID_40("STRING_1628026277");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyID_40.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_40('6');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyIDSource_40.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_40(320240855);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyRole_40.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_40);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81;
        FIX::InstrumentPartySubID InstrumentPartySubID_81("STRING_280646150");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_81);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81.insert(InstrumentPartySubID_81.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_81(1978277767);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_81);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81.insert(InstrumentPartySubIDType_81.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82;
        FIX::InstrumentPartySubID InstrumentPartySubID_82("STRING_1925624765");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_82);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82.insert(InstrumentPartySubID_82.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_82(1019857365);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_82);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82.insert(InstrumentPartySubIDType_82.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83;
        FIX::InstrumentPartySubID InstrumentPartySubID_83("STRING_1203241959");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_83);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83.insert(InstrumentPartySubID_83.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_83(946886460);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_83);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83.insert(InstrumentPartySubIDType_83.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_41;
      FIX::InstrumentPartyID InstrumentPartyID_41("STRING_2035070186");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyID_41.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_41('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyIDSource_41.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_41(1632308140);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyRole_41.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_41);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84;
        FIX::InstrumentPartySubID InstrumentPartySubID_84("STRING_143109621");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_84);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84.insert(InstrumentPartySubID_84.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_84(1059092755);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_84);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84.insert(InstrumentPartySubIDType_84.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85;
        FIX::InstrumentPartySubID InstrumentPartySubID_85("STRING_716740038");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_85);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85.insert(InstrumentPartySubID_85.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_85(2094673422);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_85);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85.insert(InstrumentPartySubIDType_85.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86;
        FIX::InstrumentPartySubID InstrumentPartySubID_86("STRING_12944343");
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubID_86);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86.insert(InstrumentPartySubID_86.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_86(2114709950);
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubIDType_86);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86.insert(InstrumentPartySubIDType_86.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_42;
      FIX::InstrumentPartyID InstrumentPartyID_42("STRING_309692214");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_42);
      InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyID_42.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_42('8');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_42);
      InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyIDSource_42.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_42(706154071);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_42);
      InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyRole_42.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_42);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87;
        FIX::InstrumentPartySubID InstrumentPartySubID_87("STRING_1065882955");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_87);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87.insert(InstrumentPartySubID_87.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_87(1730136871);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_87);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87.insert(InstrumentPartySubIDType_87.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88;
        FIX::InstrumentPartySubID InstrumentPartySubID_88("STRING_161990748");
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubID_88);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88.insert(InstrumentPartySubID_88.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_88(1202343164);
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubIDType_88);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88.insert(InstrumentPartySubIDType_88.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89;
        FIX::InstrumentPartySubID InstrumentPartySubID_89("STRING_290438541");
        noInstrumentPartySubIDs_1_2_2_2.set(InstrumentPartySubID_89);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89.insert(InstrumentPartySubID_89.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_89(306531623);
        noInstrumentPartySubIDs_1_2_2_2.set(InstrumentPartySubIDType_89);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89.insert(InstrumentPartySubIDType_89.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_39;
      FIX::SecurityAltID SecurityAltID_39("STRING_1918464818");
      noSecurityAltID_1_1_0.set(SecurityAltID_39);
      SecAltIDGrp_NoSecurityAltID_39.insert(SecurityAltID_39.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_39("STRING_992700154");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_39);
      SecAltIDGrp_NoSecurityAltID_39.insert(SecurityAltIDSource_39.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_39);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_40;
      FIX::SecurityAltID SecurityAltID_40("STRING_581263477");
      noSecurityAltID_1_1_1.set(SecurityAltID_40);
      SecAltIDGrp_NoSecurityAltID_40.insert(SecurityAltID_40.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_40("STRING_1557720497");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_40);
      SecAltIDGrp_NoSecurityAltID_40.insert(SecurityAltIDSource_40.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_40);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_41;
      FIX::SecurityAltID SecurityAltID_41("STRING_1273346305");
      noSecurityAltID_1_1_2.set(SecurityAltID_41);
      SecAltIDGrp_NoSecurityAltID_41.insert(SecurityAltID_41.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_41("STRING_412057596");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_41);
      SecAltIDGrp_NoSecurityAltID_41.insert(SecurityAltIDSource_41.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_41);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_38;
    FIX::SecurityXML SecurityXML_39("XMLDATA_1335861614");
    noRelatedSym_0_1.set(SecurityXML_39);
    FIX::SecurityXMLLen SecurityXMLLen_19(145720022);
    noRelatedSym_0_1.set(SecurityXMLLen_19);
    FIX::SecurityXMLSchema SecurityXMLSchema_19("STRING_1615299555");
    noRelatedSym_0_1.set(SecurityXMLSchema_19);
    SecurityXML_38.insert(SecurityXMLSchema_19.getString());
    all_values.push_back(SecurityXML_38);

    // InstrumentExtension
    multiset<string> InstrumentExtension_5;
    FIX::DeliveryForm DeliveryForm_5(1);
    noRelatedSym_0_1.set(DeliveryForm_5);
    InstrumentExtension_5.insert(DeliveryForm_5.getString());
    FIX::PctAtRisk PctAtRisk_5;
    PctAtRisk_5.setString("65.600000");
    noRelatedSym_0_1.set(PctAtRisk_5);
    InstrumentExtension_5.insert(PctAtRisk_5.getString());
    all_values.push_back(InstrumentExtension_5);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_12;
      FIX::InstrAttribType InstrAttribType_12(17);
      noInstrAttrib_1_1_0.set(InstrAttribType_12);
      AttrbGrp_NoInstrAttrib_12.insert(InstrAttribType_12.getString());
      FIX::InstrAttribValue InstrAttribValue_12("STRING_1492555273");
      noInstrAttrib_1_1_0.set(InstrAttribValue_12);
      AttrbGrp_NoInstrAttrib_12.insert(InstrAttribValue_12.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_12);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_13;
      FIX::InstrAttribType InstrAttribType_13(11);
      noInstrAttrib_1_1_1.set(InstrAttribType_13);
      AttrbGrp_NoInstrAttrib_13.insert(InstrAttribType_13.getString());
      FIX::InstrAttribValue InstrAttribValue_13("STRING_679181673");
      noInstrAttrib_1_1_1.set(InstrAttribValue_13);
      AttrbGrp_NoInstrAttrib_13.insert(InstrAttribValue_13.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_13);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_1;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_1;
    SecondaryHighLimitPrice_1.setString("618116");
    noRelatedSym_0_1.set(SecondaryHighLimitPrice_1);
    SecondaryPriceLimits_1.insert(SecondaryHighLimitPrice_1.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_1;
    SecondaryLowLimitPrice_1.setString("11802567");
    noRelatedSym_0_1.set(SecondaryLowLimitPrice_1);
    SecondaryPriceLimits_1.insert(SecondaryLowLimitPrice_1.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_1(692126016);
    noRelatedSym_0_1.set(SecondaryPriceLimitType_1);
    SecondaryPriceLimits_1.insert(SecondaryPriceLimitType_1.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_1;
    SecondaryTradingReferencePrice_1.setString("290379");
    noRelatedSym_0_1.set(SecondaryTradingReferencePrice_1);
    SecondaryPriceLimits_1.insert(SecondaryTradingReferencePrice_1.getString());
    all_values.push_back(SecondaryPriceLimits_1);

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_2;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_2;
    FIX::CorporateAction CorporateAction_2("MULTIPLECHARVALUE_E");
    noRelatedSym_0_2.set(CorporateAction_2);
    RelSymDerivSecGrp_NoRelatedSym_2.insert(CorporateAction_2.getString());
    FIX::Currency Currency_16("EUR");
    noRelatedSym_0_2.set(Currency_16);
    RelSymDerivSecGrp_NoRelatedSym_2.insert(Currency_16.getString());
    FIX::EncodedText EncodedText_28("DATA_1084552035");
    noRelatedSym_0_2.set(EncodedText_28);
    RelSymDerivSecGrp_NoRelatedSym_2.insert(EncodedText_28.getString());
    FIX::EncodedTextLen EncodedTextLen_28(452905089);
    noRelatedSym_0_2.set(EncodedTextLen_28);
    RelSymDerivSecGrp_NoRelatedSym_2.insert(EncodedTextLen_28.getString());
    FIX::RelSymTransactTime RelSymTransactTime_2(FIX::UTCTIMESTAMP(15, 54, 21, 2, 9, 2003));
    noRelatedSym_0_2.set(RelSymTransactTime_2);
    RelSymDerivSecGrp_NoRelatedSym_2.insert(RelSymTransactTime_2.getString());
    FIX::Text Text_28("STRING_398290913");
    noRelatedSym_0_2.set(Text_28);
    RelSymDerivSecGrp_NoRelatedSym_2.insert(Text_28.getString());
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_2);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_2_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_32;
      FIX::EncodedLegIssuer EncodedLegIssuer_32("DATA_1936985468");
      noLegs_2_1_0.set(EncodedLegIssuer_32);
      InstrumentLeg_32.insert(EncodedLegIssuer_32.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_32(1671637218);
      noLegs_2_1_0.set(EncodedLegIssuerLen_32);
      InstrumentLeg_32.insert(EncodedLegIssuerLen_32.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_32("DATA_762108302");
      noLegs_2_1_0.set(EncodedLegSecurityDesc_32);
      InstrumentLeg_32.insert(EncodedLegSecurityDesc_32.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_32(1125363434);
      noLegs_2_1_0.set(EncodedLegSecurityDescLen_32);
      InstrumentLeg_32.insert(EncodedLegSecurityDescLen_32.getString());
      FIX::LegCFICode LegCFICode_32("STRING_1817357240");
      noLegs_2_1_0.set(LegCFICode_32);
      InstrumentLeg_32.insert(LegCFICode_32.getString());
      FIX::LegContractMultiplier LegContractMultiplier_32;
      LegContractMultiplier_32.setString("2299242");
      noLegs_2_1_0.set(LegContractMultiplier_32);
      InstrumentLeg_32.insert(LegContractMultiplier_32.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_32(1260627860);
      noLegs_2_1_0.set(LegContractMultiplierUnit_32);
      InstrumentLeg_32.insert(LegContractMultiplierUnit_32.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_32("MONTHYEAR_1850663801");
      noLegs_2_1_0.set(LegContractSettlMonth_32);
      InstrumentLeg_32.insert(LegContractSettlMonth_32.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_32("COUNTRY_1319881529");
      noLegs_2_1_0.set(LegCountryOfIssue_32);
      InstrumentLeg_32.insert(LegCountryOfIssue_32.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_32("LOCALMKTDATE_880716778");
      noLegs_2_1_0.set(LegCouponPaymentDate_32);
      InstrumentLeg_32.insert(LegCouponPaymentDate_32.getString());
      FIX::LegCouponRate LegCouponRate_32;
      LegCouponRate_32.setString("54.260000");
      noLegs_2_1_0.set(LegCouponRate_32);
      InstrumentLeg_32.insert(LegCouponRate_32.getString());
      FIX::LegCreditRating LegCreditRating_32("STRING_405464821");
      noLegs_2_1_0.set(LegCreditRating_32);
      InstrumentLeg_32.insert(LegCreditRating_32.getString());
      FIX::LegCurrency LegCurrency_32("JPY");
      noLegs_2_1_0.set(LegCurrency_32);
      InstrumentLeg_32.insert(LegCurrency_32.getString());
      FIX::LegDatedDate LegDatedDate_32("LOCALMKTDATE_1585721535");
      noLegs_2_1_0.set(LegDatedDate_32);
      InstrumentLeg_32.insert(LegDatedDate_32.getString());
      FIX::LegExerciseStyle LegExerciseStyle_32(104540820);
      noLegs_2_1_0.set(LegExerciseStyle_32);
      InstrumentLeg_32.insert(LegExerciseStyle_32.getString());
      FIX::LegFactor LegFactor_32;
      LegFactor_32.setString("12865850");
      noLegs_2_1_0.set(LegFactor_32);
      InstrumentLeg_32.insert(LegFactor_32.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_32(928186815);
      noLegs_2_1_0.set(LegFlowScheduleType_32);
      InstrumentLeg_32.insert(LegFlowScheduleType_32.getString());
      FIX::LegInstrRegistry LegInstrRegistry_32("STRING_1639046602");
      noLegs_2_1_0.set(LegInstrRegistry_32);
      InstrumentLeg_32.insert(LegInstrRegistry_32.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_32("LOCALMKTDATE_2021777093");
      noLegs_2_1_0.set(LegInterestAccrualDate_32);
      InstrumentLeg_32.insert(LegInterestAccrualDate_32.getString());
      FIX::LegIssueDate LegIssueDate_32("LOCALMKTDATE_2012738850");
      noLegs_2_1_0.set(LegIssueDate_32);
      InstrumentLeg_32.insert(LegIssueDate_32.getString());
      FIX::LegIssuer LegIssuer_32("STRING_2091951692");
      noLegs_2_1_0.set(LegIssuer_32);
      InstrumentLeg_32.insert(LegIssuer_32.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_32("STRING_192138705");
      noLegs_2_1_0.set(LegLocaleOfIssue_32);
      InstrumentLeg_32.insert(LegLocaleOfIssue_32.getString());
      FIX::LegMaturityDate LegMaturityDate_32("LOCALMKTDATE_1111797985");
      noLegs_2_1_0.set(LegMaturityDate_32);
      InstrumentLeg_32.insert(LegMaturityDate_32.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_32("MONTHYEAR_1599716298");
      noLegs_2_1_0.set(LegMaturityMonthYear_32);
      InstrumentLeg_32.insert(LegMaturityMonthYear_32.getString());
      FIX::LegMaturityTime LegMaturityTime_32("TZTIMEONLY_800422507");
      noLegs_2_1_0.set(LegMaturityTime_32);
      InstrumentLeg_32.insert(LegMaturityTime_32.getString());
      FIX::LegOptAttribute LegOptAttribute_32('5');
      noLegs_2_1_0.set(LegOptAttribute_32);
      InstrumentLeg_32.insert(LegOptAttribute_32.getString());
      FIX::LegOptionRatio LegOptionRatio_32;
      LegOptionRatio_32.setString("13685035");
      noLegs_2_1_0.set(LegOptionRatio_32);
      InstrumentLeg_32.insert(LegOptionRatio_32.getString());
      FIX::LegPool LegPool_32("STRING_1179687478");
      noLegs_2_1_0.set(LegPool_32);
      InstrumentLeg_32.insert(LegPool_32.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_32("STRING_915679657");
      noLegs_2_1_0.set(LegPriceUnitOfMeasure_32);
      InstrumentLeg_32.insert(LegPriceUnitOfMeasure_32.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_32;
      LegPriceUnitOfMeasureQty_32.setString("17185542");
      noLegs_2_1_0.set(LegPriceUnitOfMeasureQty_32);
      InstrumentLeg_32.insert(LegPriceUnitOfMeasureQty_32.getString());
      FIX::LegProduct LegProduct_32(969189299);
      noLegs_2_1_0.set(LegProduct_32);
      InstrumentLeg_32.insert(LegProduct_32.getString());
      FIX::LegPutOrCall LegPutOrCall_32(439833227);
      noLegs_2_1_0.set(LegPutOrCall_32);
      InstrumentLeg_32.insert(LegPutOrCall_32.getString());
      FIX::LegRatioQty LegRatioQty_32;
      LegRatioQty_32.setString("3331788");
      noLegs_2_1_0.set(LegRatioQty_32);
      InstrumentLeg_32.insert(LegRatioQty_32.getString());
      FIX::LegRedemptionDate LegRedemptionDate_32("LOCALMKTDATE_2094552733");
      noLegs_2_1_0.set(LegRedemptionDate_32);
      InstrumentLeg_32.insert(LegRedemptionDate_32.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_32("STRING_109706819");
      noLegs_2_1_0.set(LegRepoCollateralSecurityType_32);
      InstrumentLeg_32.insert(LegRepoCollateralSecurityType_32.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_32;
      LegRepurchaseRate_32.setString("30.970000");
      noLegs_2_1_0.set(LegRepurchaseRate_32);
      InstrumentLeg_32.insert(LegRepurchaseRate_32.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_32(1207696946);
      noLegs_2_1_0.set(LegRepurchaseTerm_32);
      InstrumentLeg_32.insert(LegRepurchaseTerm_32.getString());
      FIX::LegSecurityDesc LegSecurityDesc_32("STRING_1960370620");
      noLegs_2_1_0.set(LegSecurityDesc_32);
      InstrumentLeg_32.insert(LegSecurityDesc_32.getString());
      FIX::LegSecurityExchange LegSecurityExchange_32("EXCHANGE_1882984626");
      noLegs_2_1_0.set(LegSecurityExchange_32);
      InstrumentLeg_32.insert(LegSecurityExchange_32.getString());
      FIX::LegSecurityID LegSecurityID_32("STRING_2088413724");
      noLegs_2_1_0.set(LegSecurityID_32);
      InstrumentLeg_32.insert(LegSecurityID_32.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_32("STRING_1008622399");
      noLegs_2_1_0.set(LegSecurityIDSource_32);
      InstrumentLeg_32.insert(LegSecurityIDSource_32.getString());
      FIX::LegSecuritySubType LegSecuritySubType_32("STRING_140965799");
      noLegs_2_1_0.set(LegSecuritySubType_32);
      InstrumentLeg_32.insert(LegSecuritySubType_32.getString());
      FIX::LegSecurityType LegSecurityType_32("STRING_1500828528");
      noLegs_2_1_0.set(LegSecurityType_32);
      InstrumentLeg_32.insert(LegSecurityType_32.getString());
      FIX::LegSide LegSide_32('1');
      noLegs_2_1_0.set(LegSide_32);
      InstrumentLeg_32.insert(LegSide_32.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_32("STRING_1726687334");
      noLegs_2_1_0.set(LegStateOrProvinceOfIssue_32);
      InstrumentLeg_32.insert(LegStateOrProvinceOfIssue_32.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_32("EUR");
      noLegs_2_1_0.set(LegStrikeCurrency_32);
      InstrumentLeg_32.insert(LegStrikeCurrency_32.getString());
      FIX::LegStrikePrice LegStrikePrice_32;
      LegStrikePrice_32.setString("5073905");
      noLegs_2_1_0.set(LegStrikePrice_32);
      InstrumentLeg_32.insert(LegStrikePrice_32.getString());
      FIX::LegSymbol LegSymbol_32("STRING_1096932303");
      noLegs_2_1_0.set(LegSymbol_32);
      InstrumentLeg_32.insert(LegSymbol_32.getString());
      FIX::LegSymbolSfx LegSymbolSfx_32("STRING_1279564342");
      noLegs_2_1_0.set(LegSymbolSfx_32);
      InstrumentLeg_32.insert(LegSymbolSfx_32.getString());
      FIX::LegTimeUnit LegTimeUnit_32("STRING_372645704");
      noLegs_2_1_0.set(LegTimeUnit_32);
      InstrumentLeg_32.insert(LegTimeUnit_32.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_32("STRING_1041400347");
      noLegs_2_1_0.set(LegUnitOfMeasure_32);
      InstrumentLeg_32.insert(LegUnitOfMeasure_32.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_32;
      LegUnitOfMeasureQty_32.setString("14717030");
      noLegs_2_1_0.set(LegUnitOfMeasureQty_32);
      InstrumentLeg_32.insert(LegUnitOfMeasureQty_32.getString());
      all_values.push_back(InstrumentLeg_32);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_58;
        FIX::LegSecurityAltID LegSecurityAltID_58("STRING_493632997");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltID_58);
        LegSecAltIDGrp_NoLegSecurityAltID_58.insert(LegSecurityAltID_58.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_58("STRING_124641906");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltIDSource_58);
        LegSecAltIDGrp_NoLegSecurityAltID_58.insert(LegSecurityAltIDSource_58.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_58);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_2_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_33;
      FIX::EncodedLegIssuer EncodedLegIssuer_33("DATA_2001832433");
      noLegs_2_1_1.set(EncodedLegIssuer_33);
      InstrumentLeg_33.insert(EncodedLegIssuer_33.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_33(1862136524);
      noLegs_2_1_1.set(EncodedLegIssuerLen_33);
      InstrumentLeg_33.insert(EncodedLegIssuerLen_33.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_33("DATA_1304329385");
      noLegs_2_1_1.set(EncodedLegSecurityDesc_33);
      InstrumentLeg_33.insert(EncodedLegSecurityDesc_33.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_33(770028442);
      noLegs_2_1_1.set(EncodedLegSecurityDescLen_33);
      InstrumentLeg_33.insert(EncodedLegSecurityDescLen_33.getString());
      FIX::LegCFICode LegCFICode_33("STRING_1433207108");
      noLegs_2_1_1.set(LegCFICode_33);
      InstrumentLeg_33.insert(LegCFICode_33.getString());
      FIX::LegContractMultiplier LegContractMultiplier_33;
      LegContractMultiplier_33.setString("1260350");
      noLegs_2_1_1.set(LegContractMultiplier_33);
      InstrumentLeg_33.insert(LegContractMultiplier_33.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_33(1209861669);
      noLegs_2_1_1.set(LegContractMultiplierUnit_33);
      InstrumentLeg_33.insert(LegContractMultiplierUnit_33.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_33("MONTHYEAR_1766385995");
      noLegs_2_1_1.set(LegContractSettlMonth_33);
      InstrumentLeg_33.insert(LegContractSettlMonth_33.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_33("COUNTRY_73104121");
      noLegs_2_1_1.set(LegCountryOfIssue_33);
      InstrumentLeg_33.insert(LegCountryOfIssue_33.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_33("LOCALMKTDATE_1319568489");
      noLegs_2_1_1.set(LegCouponPaymentDate_33);
      InstrumentLeg_33.insert(LegCouponPaymentDate_33.getString());
      FIX::LegCouponRate LegCouponRate_33;
      LegCouponRate_33.setString("54.440000");
      noLegs_2_1_1.set(LegCouponRate_33);
      InstrumentLeg_33.insert(LegCouponRate_33.getString());
      FIX::LegCreditRating LegCreditRating_33("STRING_1280801067");
      noLegs_2_1_1.set(LegCreditRating_33);
      InstrumentLeg_33.insert(LegCreditRating_33.getString());
      FIX::LegCurrency LegCurrency_33("JPY");
      noLegs_2_1_1.set(LegCurrency_33);
      InstrumentLeg_33.insert(LegCurrency_33.getString());
      FIX::LegDatedDate LegDatedDate_33("LOCALMKTDATE_1221731144");
      noLegs_2_1_1.set(LegDatedDate_33);
      InstrumentLeg_33.insert(LegDatedDate_33.getString());
      FIX::LegExerciseStyle LegExerciseStyle_33(2141077860);
      noLegs_2_1_1.set(LegExerciseStyle_33);
      InstrumentLeg_33.insert(LegExerciseStyle_33.getString());
      FIX::LegFactor LegFactor_33;
      LegFactor_33.setString("584722");
      noLegs_2_1_1.set(LegFactor_33);
      InstrumentLeg_33.insert(LegFactor_33.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_33(575076024);
      noLegs_2_1_1.set(LegFlowScheduleType_33);
      InstrumentLeg_33.insert(LegFlowScheduleType_33.getString());
      FIX::LegInstrRegistry LegInstrRegistry_33("STRING_112280053");
      noLegs_2_1_1.set(LegInstrRegistry_33);
      InstrumentLeg_33.insert(LegInstrRegistry_33.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_33("LOCALMKTDATE_1785159555");
      noLegs_2_1_1.set(LegInterestAccrualDate_33);
      InstrumentLeg_33.insert(LegInterestAccrualDate_33.getString());
      FIX::LegIssueDate LegIssueDate_33("LOCALMKTDATE_32961725");
      noLegs_2_1_1.set(LegIssueDate_33);
      InstrumentLeg_33.insert(LegIssueDate_33.getString());
      FIX::LegIssuer LegIssuer_33("STRING_1517550950");
      noLegs_2_1_1.set(LegIssuer_33);
      InstrumentLeg_33.insert(LegIssuer_33.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_33("STRING_145066409");
      noLegs_2_1_1.set(LegLocaleOfIssue_33);
      InstrumentLeg_33.insert(LegLocaleOfIssue_33.getString());
      FIX::LegMaturityDate LegMaturityDate_33("LOCALMKTDATE_1129894029");
      noLegs_2_1_1.set(LegMaturityDate_33);
      InstrumentLeg_33.insert(LegMaturityDate_33.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_33("MONTHYEAR_649631644");
      noLegs_2_1_1.set(LegMaturityMonthYear_33);
      InstrumentLeg_33.insert(LegMaturityMonthYear_33.getString());
      FIX::LegMaturityTime LegMaturityTime_33("TZTIMEONLY_517712113");
      noLegs_2_1_1.set(LegMaturityTime_33);
      InstrumentLeg_33.insert(LegMaturityTime_33.getString());
      FIX::LegOptAttribute LegOptAttribute_33('2');
      noLegs_2_1_1.set(LegOptAttribute_33);
      InstrumentLeg_33.insert(LegOptAttribute_33.getString());
      FIX::LegOptionRatio LegOptionRatio_33;
      LegOptionRatio_33.setString("21213346");
      noLegs_2_1_1.set(LegOptionRatio_33);
      InstrumentLeg_33.insert(LegOptionRatio_33.getString());
      FIX::LegPool LegPool_33("STRING_2002155802");
      noLegs_2_1_1.set(LegPool_33);
      InstrumentLeg_33.insert(LegPool_33.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_33("STRING_517443726");
      noLegs_2_1_1.set(LegPriceUnitOfMeasure_33);
      InstrumentLeg_33.insert(LegPriceUnitOfMeasure_33.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_33;
      LegPriceUnitOfMeasureQty_33.setString("984929");
      noLegs_2_1_1.set(LegPriceUnitOfMeasureQty_33);
      InstrumentLeg_33.insert(LegPriceUnitOfMeasureQty_33.getString());
      FIX::LegProduct LegProduct_33(1856504588);
      noLegs_2_1_1.set(LegProduct_33);
      InstrumentLeg_33.insert(LegProduct_33.getString());
      FIX::LegPutOrCall LegPutOrCall_33(232096602);
      noLegs_2_1_1.set(LegPutOrCall_33);
      InstrumentLeg_33.insert(LegPutOrCall_33.getString());
      FIX::LegRatioQty LegRatioQty_33;
      LegRatioQty_33.setString("14028223");
      noLegs_2_1_1.set(LegRatioQty_33);
      InstrumentLeg_33.insert(LegRatioQty_33.getString());
      FIX::LegRedemptionDate LegRedemptionDate_33("LOCALMKTDATE_479049382");
      noLegs_2_1_1.set(LegRedemptionDate_33);
      InstrumentLeg_33.insert(LegRedemptionDate_33.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_33("STRING_1665303710");
      noLegs_2_1_1.set(LegRepoCollateralSecurityType_33);
      InstrumentLeg_33.insert(LegRepoCollateralSecurityType_33.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_33;
      LegRepurchaseRate_33.setString("73.710000");
      noLegs_2_1_1.set(LegRepurchaseRate_33);
      InstrumentLeg_33.insert(LegRepurchaseRate_33.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_33(1688911052);
      noLegs_2_1_1.set(LegRepurchaseTerm_33);
      InstrumentLeg_33.insert(LegRepurchaseTerm_33.getString());
      FIX::LegSecurityDesc LegSecurityDesc_33("STRING_1284206058");
      noLegs_2_1_1.set(LegSecurityDesc_33);
      InstrumentLeg_33.insert(LegSecurityDesc_33.getString());
      FIX::LegSecurityExchange LegSecurityExchange_33("EXCHANGE_1601961493");
      noLegs_2_1_1.set(LegSecurityExchange_33);
      InstrumentLeg_33.insert(LegSecurityExchange_33.getString());
      FIX::LegSecurityID LegSecurityID_33("STRING_860995893");
      noLegs_2_1_1.set(LegSecurityID_33);
      InstrumentLeg_33.insert(LegSecurityID_33.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_33("STRING_1466211502");
      noLegs_2_1_1.set(LegSecurityIDSource_33);
      InstrumentLeg_33.insert(LegSecurityIDSource_33.getString());
      FIX::LegSecuritySubType LegSecuritySubType_33("STRING_735278912");
      noLegs_2_1_1.set(LegSecuritySubType_33);
      InstrumentLeg_33.insert(LegSecuritySubType_33.getString());
      FIX::LegSecurityType LegSecurityType_33("STRING_1993451354");
      noLegs_2_1_1.set(LegSecurityType_33);
      InstrumentLeg_33.insert(LegSecurityType_33.getString());
      FIX::LegSide LegSide_33('1');
      noLegs_2_1_1.set(LegSide_33);
      InstrumentLeg_33.insert(LegSide_33.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_33("STRING_1957010056");
      noLegs_2_1_1.set(LegStateOrProvinceOfIssue_33);
      InstrumentLeg_33.insert(LegStateOrProvinceOfIssue_33.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_33("GBP");
      noLegs_2_1_1.set(LegStrikeCurrency_33);
      InstrumentLeg_33.insert(LegStrikeCurrency_33.getString());
      FIX::LegStrikePrice LegStrikePrice_33;
      LegStrikePrice_33.setString("3846024");
      noLegs_2_1_1.set(LegStrikePrice_33);
      InstrumentLeg_33.insert(LegStrikePrice_33.getString());
      FIX::LegSymbol LegSymbol_33("STRING_2099325620");
      noLegs_2_1_1.set(LegSymbol_33);
      InstrumentLeg_33.insert(LegSymbol_33.getString());
      FIX::LegSymbolSfx LegSymbolSfx_33("STRING_1079866054");
      noLegs_2_1_1.set(LegSymbolSfx_33);
      InstrumentLeg_33.insert(LegSymbolSfx_33.getString());
      FIX::LegTimeUnit LegTimeUnit_33("STRING_417564158");
      noLegs_2_1_1.set(LegTimeUnit_33);
      InstrumentLeg_33.insert(LegTimeUnit_33.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_33("STRING_1469392923");
      noLegs_2_1_1.set(LegUnitOfMeasure_33);
      InstrumentLeg_33.insert(LegUnitOfMeasure_33.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_33;
      LegUnitOfMeasureQty_33.setString("12249324");
      noLegs_2_1_1.set(LegUnitOfMeasureQty_33);
      InstrumentLeg_33.insert(LegUnitOfMeasureQty_33.getString());
      all_values.push_back(InstrumentLeg_33);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_59;
        FIX::LegSecurityAltID LegSecurityAltID_59("STRING_2119024567");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltID_59);
        LegSecAltIDGrp_NoLegSecurityAltID_59.insert(LegSecurityAltID_59.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_59("STRING_1742644576");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltIDSource_59);
        LegSecAltIDGrp_NoLegSecurityAltID_59.insert(LegSecurityAltIDSource_59.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_59);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_60;
        FIX::LegSecurityAltID LegSecurityAltID_60("STRING_1571268916");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltID_60);
        LegSecAltIDGrp_NoLegSecurityAltID_60.insert(LegSecurityAltID_60.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_60("STRING_2092875611");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltIDSource_60);
        LegSecAltIDGrp_NoLegSecurityAltID_60.insert(LegSecurityAltIDSource_60.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_60);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_61;
        FIX::LegSecurityAltID LegSecurityAltID_61("STRING_1597316730");
        noLegSecurityAltID_2_1_2_2.set(LegSecurityAltID_61);
        LegSecAltIDGrp_NoLegSecurityAltID_61.insert(LegSecurityAltID_61.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_61("STRING_2088712642");
        noLegSecurityAltID_2_1_2_2.set(LegSecurityAltIDSource_61);
        LegSecAltIDGrp_NoLegSecurityAltID_61.insert(LegSecurityAltIDSource_61.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_61);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_2_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_34;
      FIX::EncodedLegIssuer EncodedLegIssuer_34("DATA_43884914");
      noLegs_2_1_2.set(EncodedLegIssuer_34);
      InstrumentLeg_34.insert(EncodedLegIssuer_34.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_34(1306337670);
      noLegs_2_1_2.set(EncodedLegIssuerLen_34);
      InstrumentLeg_34.insert(EncodedLegIssuerLen_34.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_34("DATA_173325596");
      noLegs_2_1_2.set(EncodedLegSecurityDesc_34);
      InstrumentLeg_34.insert(EncodedLegSecurityDesc_34.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_34(1446707249);
      noLegs_2_1_2.set(EncodedLegSecurityDescLen_34);
      InstrumentLeg_34.insert(EncodedLegSecurityDescLen_34.getString());
      FIX::LegCFICode LegCFICode_34("STRING_1785387053");
      noLegs_2_1_2.set(LegCFICode_34);
      InstrumentLeg_34.insert(LegCFICode_34.getString());
      FIX::LegContractMultiplier LegContractMultiplier_34;
      LegContractMultiplier_34.setString("18386293");
      noLegs_2_1_2.set(LegContractMultiplier_34);
      InstrumentLeg_34.insert(LegContractMultiplier_34.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_34(828080973);
      noLegs_2_1_2.set(LegContractMultiplierUnit_34);
      InstrumentLeg_34.insert(LegContractMultiplierUnit_34.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_34("MONTHYEAR_1326814457");
      noLegs_2_1_2.set(LegContractSettlMonth_34);
      InstrumentLeg_34.insert(LegContractSettlMonth_34.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_34("COUNTRY_975351716");
      noLegs_2_1_2.set(LegCountryOfIssue_34);
      InstrumentLeg_34.insert(LegCountryOfIssue_34.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_34("LOCALMKTDATE_282558818");
      noLegs_2_1_2.set(LegCouponPaymentDate_34);
      InstrumentLeg_34.insert(LegCouponPaymentDate_34.getString());
      FIX::LegCouponRate LegCouponRate_34;
      LegCouponRate_34.setString("67.020000");
      noLegs_2_1_2.set(LegCouponRate_34);
      InstrumentLeg_34.insert(LegCouponRate_34.getString());
      FIX::LegCreditRating LegCreditRating_34("STRING_294079571");
      noLegs_2_1_2.set(LegCreditRating_34);
      InstrumentLeg_34.insert(LegCreditRating_34.getString());
      FIX::LegCurrency LegCurrency_34("GBP");
      noLegs_2_1_2.set(LegCurrency_34);
      InstrumentLeg_34.insert(LegCurrency_34.getString());
      FIX::LegDatedDate LegDatedDate_34("LOCALMKTDATE_1677797496");
      noLegs_2_1_2.set(LegDatedDate_34);
      InstrumentLeg_34.insert(LegDatedDate_34.getString());
      FIX::LegExerciseStyle LegExerciseStyle_34(827364139);
      noLegs_2_1_2.set(LegExerciseStyle_34);
      InstrumentLeg_34.insert(LegExerciseStyle_34.getString());
      FIX::LegFactor LegFactor_34;
      LegFactor_34.setString("18733399");
      noLegs_2_1_2.set(LegFactor_34);
      InstrumentLeg_34.insert(LegFactor_34.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_34(972503994);
      noLegs_2_1_2.set(LegFlowScheduleType_34);
      InstrumentLeg_34.insert(LegFlowScheduleType_34.getString());
      FIX::LegInstrRegistry LegInstrRegistry_34("STRING_1211966572");
      noLegs_2_1_2.set(LegInstrRegistry_34);
      InstrumentLeg_34.insert(LegInstrRegistry_34.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_34("LOCALMKTDATE_1825181948");
      noLegs_2_1_2.set(LegInterestAccrualDate_34);
      InstrumentLeg_34.insert(LegInterestAccrualDate_34.getString());
      FIX::LegIssueDate LegIssueDate_34("LOCALMKTDATE_2052370048");
      noLegs_2_1_2.set(LegIssueDate_34);
      InstrumentLeg_34.insert(LegIssueDate_34.getString());
      FIX::LegIssuer LegIssuer_34("STRING_1629530730");
      noLegs_2_1_2.set(LegIssuer_34);
      InstrumentLeg_34.insert(LegIssuer_34.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_34("STRING_1147091223");
      noLegs_2_1_2.set(LegLocaleOfIssue_34);
      InstrumentLeg_34.insert(LegLocaleOfIssue_34.getString());
      FIX::LegMaturityDate LegMaturityDate_34("LOCALMKTDATE_1129818863");
      noLegs_2_1_2.set(LegMaturityDate_34);
      InstrumentLeg_34.insert(LegMaturityDate_34.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_34("MONTHYEAR_1029505270");
      noLegs_2_1_2.set(LegMaturityMonthYear_34);
      InstrumentLeg_34.insert(LegMaturityMonthYear_34.getString());
      FIX::LegMaturityTime LegMaturityTime_34("TZTIMEONLY_1118632142");
      noLegs_2_1_2.set(LegMaturityTime_34);
      InstrumentLeg_34.insert(LegMaturityTime_34.getString());
      FIX::LegOptAttribute LegOptAttribute_34('7');
      noLegs_2_1_2.set(LegOptAttribute_34);
      InstrumentLeg_34.insert(LegOptAttribute_34.getString());
      FIX::LegOptionRatio LegOptionRatio_34;
      LegOptionRatio_34.setString("4532905");
      noLegs_2_1_2.set(LegOptionRatio_34);
      InstrumentLeg_34.insert(LegOptionRatio_34.getString());
      FIX::LegPool LegPool_34("STRING_1064024106");
      noLegs_2_1_2.set(LegPool_34);
      InstrumentLeg_34.insert(LegPool_34.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_34("STRING_174812874");
      noLegs_2_1_2.set(LegPriceUnitOfMeasure_34);
      InstrumentLeg_34.insert(LegPriceUnitOfMeasure_34.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_34;
      LegPriceUnitOfMeasureQty_34.setString("3945195");
      noLegs_2_1_2.set(LegPriceUnitOfMeasureQty_34);
      InstrumentLeg_34.insert(LegPriceUnitOfMeasureQty_34.getString());
      FIX::LegProduct LegProduct_34(1107909020);
      noLegs_2_1_2.set(LegProduct_34);
      InstrumentLeg_34.insert(LegProduct_34.getString());
      FIX::LegPutOrCall LegPutOrCall_34(1481150544);
      noLegs_2_1_2.set(LegPutOrCall_34);
      InstrumentLeg_34.insert(LegPutOrCall_34.getString());
      FIX::LegRatioQty LegRatioQty_34;
      LegRatioQty_34.setString("5678451");
      noLegs_2_1_2.set(LegRatioQty_34);
      InstrumentLeg_34.insert(LegRatioQty_34.getString());
      FIX::LegRedemptionDate LegRedemptionDate_34("LOCALMKTDATE_407132621");
      noLegs_2_1_2.set(LegRedemptionDate_34);
      InstrumentLeg_34.insert(LegRedemptionDate_34.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_34("STRING_1119053949");
      noLegs_2_1_2.set(LegRepoCollateralSecurityType_34);
      InstrumentLeg_34.insert(LegRepoCollateralSecurityType_34.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_34;
      LegRepurchaseRate_34.setString("7.860000");
      noLegs_2_1_2.set(LegRepurchaseRate_34);
      InstrumentLeg_34.insert(LegRepurchaseRate_34.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_34(1235213594);
      noLegs_2_1_2.set(LegRepurchaseTerm_34);
      InstrumentLeg_34.insert(LegRepurchaseTerm_34.getString());
      FIX::LegSecurityDesc LegSecurityDesc_34("STRING_298384758");
      noLegs_2_1_2.set(LegSecurityDesc_34);
      InstrumentLeg_34.insert(LegSecurityDesc_34.getString());
      FIX::LegSecurityExchange LegSecurityExchange_34("EXCHANGE_1234342503");
      noLegs_2_1_2.set(LegSecurityExchange_34);
      InstrumentLeg_34.insert(LegSecurityExchange_34.getString());
      FIX::LegSecurityID LegSecurityID_34("STRING_1517772412");
      noLegs_2_1_2.set(LegSecurityID_34);
      InstrumentLeg_34.insert(LegSecurityID_34.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_34("STRING_338711460");
      noLegs_2_1_2.set(LegSecurityIDSource_34);
      InstrumentLeg_34.insert(LegSecurityIDSource_34.getString());
      FIX::LegSecuritySubType LegSecuritySubType_34("STRING_1528422074");
      noLegs_2_1_2.set(LegSecuritySubType_34);
      InstrumentLeg_34.insert(LegSecuritySubType_34.getString());
      FIX::LegSecurityType LegSecurityType_34("STRING_388126495");
      noLegs_2_1_2.set(LegSecurityType_34);
      InstrumentLeg_34.insert(LegSecurityType_34.getString());
      FIX::LegSide LegSide_34('2');
      noLegs_2_1_2.set(LegSide_34);
      InstrumentLeg_34.insert(LegSide_34.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_34("STRING_1058735922");
      noLegs_2_1_2.set(LegStateOrProvinceOfIssue_34);
      InstrumentLeg_34.insert(LegStateOrProvinceOfIssue_34.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_34("GBP");
      noLegs_2_1_2.set(LegStrikeCurrency_34);
      InstrumentLeg_34.insert(LegStrikeCurrency_34.getString());
      FIX::LegStrikePrice LegStrikePrice_34;
      LegStrikePrice_34.setString("20312399");
      noLegs_2_1_2.set(LegStrikePrice_34);
      InstrumentLeg_34.insert(LegStrikePrice_34.getString());
      FIX::LegSymbol LegSymbol_34("STRING_279973558");
      noLegs_2_1_2.set(LegSymbol_34);
      InstrumentLeg_34.insert(LegSymbol_34.getString());
      FIX::LegSymbolSfx LegSymbolSfx_34("STRING_1776044144");
      noLegs_2_1_2.set(LegSymbolSfx_34);
      InstrumentLeg_34.insert(LegSymbolSfx_34.getString());
      FIX::LegTimeUnit LegTimeUnit_34("STRING_1936126317");
      noLegs_2_1_2.set(LegTimeUnit_34);
      InstrumentLeg_34.insert(LegTimeUnit_34.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_34("STRING_1909504288");
      noLegs_2_1_2.set(LegUnitOfMeasure_34);
      InstrumentLeg_34.insert(LegUnitOfMeasure_34.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_34;
      LegUnitOfMeasureQty_34.setString("7756517");
      noLegs_2_1_2.set(LegUnitOfMeasureQty_34);
      InstrumentLeg_34.insert(LegUnitOfMeasureQty_34.getString());
      all_values.push_back(InstrumentLeg_34);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_62;
        FIX::LegSecurityAltID LegSecurityAltID_62("STRING_791525910");
        noLegSecurityAltID_2_2_2_0.set(LegSecurityAltID_62);
        LegSecAltIDGrp_NoLegSecurityAltID_62.insert(LegSecurityAltID_62.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_62("STRING_1894283862");
        noLegSecurityAltID_2_2_2_0.set(LegSecurityAltIDSource_62);
        LegSecAltIDGrp_NoLegSecurityAltID_62.insert(LegSecurityAltIDSource_62.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_62);

        noLegs_2_1_2.addGroup(noLegSecurityAltID_2_2_2_0);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_2);
    }
    // Instrument
    multiset<string> Instrument_20;
    FIX::AttachmentPoint AttachmentPoint_20;
    AttachmentPoint_20.setString("13.240000");
    noRelatedSym_0_2.set(AttachmentPoint_20);
    Instrument_20.insert(AttachmentPoint_20.getString());
    FIX::CFICode CFICode_20("STRING_1244816448");
    noRelatedSym_0_2.set(CFICode_20);
    Instrument_20.insert(CFICode_20.getString());
    FIX::CPProgram CPProgram_20(2);
    noRelatedSym_0_2.set(CPProgram_20);
    Instrument_20.insert(CPProgram_20.getString());
    FIX::CPRegType CPRegType_20("STRING_1818254198");
    noRelatedSym_0_2.set(CPRegType_20);
    Instrument_20.insert(CPRegType_20.getString());
    FIX::CapPrice CapPrice_20;
    CapPrice_20.setString("16393359");
    noRelatedSym_0_2.set(CapPrice_20);
    Instrument_20.insert(CapPrice_20.getString());
    FIX::ContractMultiplier ContractMultiplier_20;
    ContractMultiplier_20.setString("19187333");
    noRelatedSym_0_2.set(ContractMultiplier_20);
    Instrument_20.insert(ContractMultiplier_20.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_20(0);
    noRelatedSym_0_2.set(ContractMultiplierUnit_20);
    Instrument_20.insert(ContractMultiplierUnit_20.getString());
    FIX::ContractSettlMonth ContractSettlMonth_20("MONTHYEAR_59697460");
    noRelatedSym_0_2.set(ContractSettlMonth_20);
    Instrument_20.insert(ContractSettlMonth_20.getString());
    FIX::CountryOfIssue CountryOfIssue_20("COUNTRY_178382313");
    noRelatedSym_0_2.set(CountryOfIssue_20);
    Instrument_20.insert(CountryOfIssue_20.getString());
    FIX::CouponPaymentDate CouponPaymentDate_20("LOCALMKTDATE_123491396");
    noRelatedSym_0_2.set(CouponPaymentDate_20);
    Instrument_20.insert(CouponPaymentDate_20.getString());
    FIX::CouponRate CouponRate_20;
    CouponRate_20.setString("82.470000");
    noRelatedSym_0_2.set(CouponRate_20);
    Instrument_20.insert(CouponRate_20.getString());
    FIX::CreditRating CreditRating_20("STRING_1413595908");
    noRelatedSym_0_2.set(CreditRating_20);
    Instrument_20.insert(CreditRating_20.getString());
    FIX::DatedDate DatedDate_20("LOCALMKTDATE_421876154");
    noRelatedSym_0_2.set(DatedDate_20);
    Instrument_20.insert(DatedDate_20.getString());
    FIX::DetachmentPoint DetachmentPoint_20;
    DetachmentPoint_20.setString("7.500000");
    noRelatedSym_0_2.set(DetachmentPoint_20);
    Instrument_20.insert(DetachmentPoint_20.getString());
    FIX::EncodedIssuer EncodedIssuer_20("DATA_783884672");
    noRelatedSym_0_2.set(EncodedIssuer_20);
    Instrument_20.insert(EncodedIssuer_20.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_20(760587615);
    noRelatedSym_0_2.set(EncodedIssuerLen_20);
    Instrument_20.insert(EncodedIssuerLen_20.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_20("DATA_933969176");
    noRelatedSym_0_2.set(EncodedSecurityDesc_20);
    Instrument_20.insert(EncodedSecurityDesc_20.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_20(1172011167);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_20);
    Instrument_20.insert(EncodedSecurityDescLen_20.getString());
    FIX::ExerciseStyle ExerciseStyle_20(1);
    noRelatedSym_0_2.set(ExerciseStyle_20);
    Instrument_20.insert(ExerciseStyle_20.getString());
    FIX::Factor Factor_20;
    Factor_20.setString("19927050");
    noRelatedSym_0_2.set(Factor_20);
    Instrument_20.insert(Factor_20.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_20(false);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_20);
    Instrument_20.insert(FlexProductEligibilityIndicator_20.getString());
    FIX::FlexibleIndicator FlexibleIndicator_20(true);
    noRelatedSym_0_2.set(FlexibleIndicator_20);
    Instrument_20.insert(FlexibleIndicator_20.getString());
    FIX::FloorPrice FloorPrice_20;
    FloorPrice_20.setString("18764613");
    noRelatedSym_0_2.set(FloorPrice_20);
    Instrument_20.insert(FloorPrice_20.getString());
    FIX::FlowScheduleType FlowScheduleType_20(1);
    noRelatedSym_0_2.set(FlowScheduleType_20);
    Instrument_20.insert(FlowScheduleType_20.getString());
    FIX::InstrRegistry InstrRegistry_20("STRING_565016177");
    noRelatedSym_0_2.set(InstrRegistry_20);
    Instrument_20.insert(InstrRegistry_20.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_20('1');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_20);
    Instrument_20.insert(InstrmtAssignmentMethod_20.getString());
    FIX::InterestAccrualDate InterestAccrualDate_20("LOCALMKTDATE_282012352");
    noRelatedSym_0_2.set(InterestAccrualDate_20);
    Instrument_20.insert(InterestAccrualDate_20.getString());
    FIX::IssueDate IssueDate_20("LOCALMKTDATE_1340667896");
    noRelatedSym_0_2.set(IssueDate_20);
    Instrument_20.insert(IssueDate_20.getString());
    FIX::Issuer Issuer_20("STRING_436081920");
    noRelatedSym_0_2.set(Issuer_20);
    Instrument_20.insert(Issuer_20.getString());
    FIX::ListMethod ListMethod_20(0);
    noRelatedSym_0_2.set(ListMethod_20);
    Instrument_20.insert(ListMethod_20.getString());
    FIX::LocaleOfIssue LocaleOfIssue_20("STRING_1087468110");
    noRelatedSym_0_2.set(LocaleOfIssue_20);
    Instrument_20.insert(LocaleOfIssue_20.getString());
    FIX::MaturityDate MaturityDate_20("LOCALMKTDATE_2079523244");
    noRelatedSym_0_2.set(MaturityDate_20);
    Instrument_20.insert(MaturityDate_20.getString());
    FIX::MaturityMonthYear MaturityMonthYear_20("MONTHYEAR_170871063");
    noRelatedSym_0_2.set(MaturityMonthYear_20);
    Instrument_20.insert(MaturityMonthYear_20.getString());
    FIX::MaturityTime MaturityTime_20("TZTIMEONLY_1898292430");
    noRelatedSym_0_2.set(MaturityTime_20);
    Instrument_20.insert(MaturityTime_20.getString());
    FIX::MinPriceIncrement MinPriceIncrement_20;
    MinPriceIncrement_20.setString("17502937");
    noRelatedSym_0_2.set(MinPriceIncrement_20);
    Instrument_20.insert(MinPriceIncrement_20.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_20;
    MinPriceIncrementAmount_20.setString("18102070");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_20);
    Instrument_20.insert(MinPriceIncrementAmount_20.getString());
    FIX::NTPositionLimit NTPositionLimit_20(1669542122);
    noRelatedSym_0_2.set(NTPositionLimit_20);
    Instrument_20.insert(NTPositionLimit_20.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_20;
    NotionalPercentageOutstanding_20.setString("12.400000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_20);
    Instrument_20.insert(NotionalPercentageOutstanding_20.getString());
    FIX::OptAttribute OptAttribute_20('1');
    noRelatedSym_0_2.set(OptAttribute_20);
    Instrument_20.insert(OptAttribute_20.getString());
    FIX::OptPayoutAmount OptPayoutAmount_20;
    OptPayoutAmount_20.setString("18479244");
    noRelatedSym_0_2.set(OptPayoutAmount_20);
    Instrument_20.insert(OptPayoutAmount_20.getString());
    FIX::OptPayoutType OptPayoutType_20(3);
    noRelatedSym_0_2.set(OptPayoutType_20);
    Instrument_20.insert(OptPayoutType_20.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_20;
    OriginalNotionalPercentageOutstanding_20.setString("91.030000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_20);
    Instrument_20.insert(OriginalNotionalPercentageOutstanding_20.getString());
    FIX::Pool Pool_20("STRING_1114036696");
    noRelatedSym_0_2.set(Pool_20);
    Instrument_20.insert(Pool_20.getString());
    FIX::PositionLimit PositionLimit_20(1300098791);
    noRelatedSym_0_2.set(PositionLimit_20);
    Instrument_20.insert(PositionLimit_20.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_20("STRING_INX");
    noRelatedSym_0_2.set(PriceQuoteMethod_20);
    Instrument_20.insert(PriceQuoteMethod_20.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_20("STRING_1897921368");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_20);
    Instrument_20.insert(PriceUnitOfMeasure_20.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_20;
    PriceUnitOfMeasureQty_20.setString("20606864");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_20);
    Instrument_20.insert(PriceUnitOfMeasureQty_20.getString());
    FIX::Product Product_22(7);
    noRelatedSym_0_2.set(Product_22);
    Instrument_20.insert(Product_22.getString());
    FIX::ProductComplex ProductComplex_20("STRING_922448888");
    noRelatedSym_0_2.set(ProductComplex_20);
    Instrument_20.insert(ProductComplex_20.getString());
    FIX::PutOrCall PutOrCall_20(0);
    noRelatedSym_0_2.set(PutOrCall_20);
    Instrument_20.insert(PutOrCall_20.getString());
    FIX::RedemptionDate RedemptionDate_20("LOCALMKTDATE_225846831");
    noRelatedSym_0_2.set(RedemptionDate_20);
    Instrument_20.insert(RedemptionDate_20.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_20("STRING_1162467041");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_20);
    Instrument_20.insert(RepoCollateralSecurityType_20.getString());
    FIX::RepurchaseRate RepurchaseRate_20;
    RepurchaseRate_20.setString("19.220000");
    noRelatedSym_0_2.set(RepurchaseRate_20);
    Instrument_20.insert(RepurchaseRate_20.getString());
    FIX::RepurchaseTerm RepurchaseTerm_20(2102308197);
    noRelatedSym_0_2.set(RepurchaseTerm_20);
    Instrument_20.insert(RepurchaseTerm_20.getString());
    FIX::RestructuringType RestructuringType_20("STRING_MR");
    noRelatedSym_0_2.set(RestructuringType_20);
    Instrument_20.insert(RestructuringType_20.getString());
    FIX::SecurityDesc SecurityDesc_20("STRING_252784451");
    noRelatedSym_0_2.set(SecurityDesc_20);
    Instrument_20.insert(SecurityDesc_20.getString());
    FIX::SecurityExchange SecurityExchange_20("EXCHANGE_1619928585");
    noRelatedSym_0_2.set(SecurityExchange_20);
    Instrument_20.insert(SecurityExchange_20.getString());
    FIX::SecurityGroup SecurityGroup_20("STRING_1964471105");
    noRelatedSym_0_2.set(SecurityGroup_20);
    Instrument_20.insert(SecurityGroup_20.getString());
    FIX::SecurityID SecurityID_20("STRING_1593452348");
    noRelatedSym_0_2.set(SecurityID_20);
    Instrument_20.insert(SecurityID_20.getString());
    FIX::SecurityIDSource SecurityIDSource_20("STRING_M");
    noRelatedSym_0_2.set(SecurityIDSource_20);
    Instrument_20.insert(SecurityIDSource_20.getString());
    FIX::SecurityStatus SecurityStatus_20("STRING_2");
    noRelatedSym_0_2.set(SecurityStatus_20);
    Instrument_20.insert(SecurityStatus_20.getString());
    FIX::SecuritySubType SecuritySubType_20("STRING_533436810");
    noRelatedSym_0_2.set(SecuritySubType_20);
    Instrument_20.insert(SecuritySubType_20.getString());
    FIX::SecurityType SecurityType_22("STRING_CS");
    noRelatedSym_0_2.set(SecurityType_22);
    Instrument_20.insert(SecurityType_22.getString());
    FIX::Seniority Seniority_20("STRING_SR");
    noRelatedSym_0_2.set(Seniority_20);
    Instrument_20.insert(Seniority_20.getString());
    FIX::SettlMethod SettlMethod_20('P');
    noRelatedSym_0_2.set(SettlMethod_20);
    Instrument_20.insert(SettlMethod_20.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_20("STRING_1590860247");
    noRelatedSym_0_2.set(SettleOnOpenFlag_20);
    Instrument_20.insert(SettleOnOpenFlag_20.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_20("STRING_724120178");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_20);
    Instrument_20.insert(StateOrProvinceOfIssue_20.getString());
    FIX::StrikeCurrency StrikeCurrency_20("EUR");
    noRelatedSym_0_2.set(StrikeCurrency_20);
    Instrument_20.insert(StrikeCurrency_20.getString());
    FIX::StrikeMultiplier StrikeMultiplier_20;
    StrikeMultiplier_20.setString("4465410");
    noRelatedSym_0_2.set(StrikeMultiplier_20);
    Instrument_20.insert(StrikeMultiplier_20.getString());
    FIX::StrikePrice StrikePrice_20;
    StrikePrice_20.setString("16542285");
    noRelatedSym_0_2.set(StrikePrice_20);
    Instrument_20.insert(StrikePrice_20.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_20(2);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_20);
    Instrument_20.insert(StrikePriceBoundaryMethod_20.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_20;
    StrikePriceBoundaryPrecision_20.setString("1.370000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_20);
    Instrument_20.insert(StrikePriceBoundaryPrecision_20.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_20(4);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_20);
    Instrument_20.insert(StrikePriceDeterminationMethod_20.getString());
    FIX::StrikeValue StrikeValue_20;
    StrikeValue_20.setString("2289456");
    noRelatedSym_0_2.set(StrikeValue_20);
    Instrument_20.insert(StrikeValue_20.getString());
    FIX::Symbol Symbol_20("STRING_2081789990");
    noRelatedSym_0_2.set(Symbol_20);
    Instrument_20.insert(Symbol_20.getString());
    FIX::SymbolSfx SymbolSfx_20("STRING_CD");
    noRelatedSym_0_2.set(SymbolSfx_20);
    Instrument_20.insert(SymbolSfx_20.getString());
    FIX::TimeUnit TimeUnit_20("STRING_H");
    noRelatedSym_0_2.set(TimeUnit_20);
    Instrument_20.insert(TimeUnit_20.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_20(4);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_20);
    Instrument_20.insert(UnderlyingPriceDeterminationMethod_20.getString());
    FIX::UnitOfMeasure UnitOfMeasure_20("STRING_Bu");
    noRelatedSym_0_2.set(UnitOfMeasure_20);
    Instrument_20.insert(UnitOfMeasure_20.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_20;
    UnitOfMeasureQty_20.setString("10409446");
    noRelatedSym_0_2.set(UnitOfMeasureQty_20);
    Instrument_20.insert(UnitOfMeasureQty_20.getString());
    FIX::ValuationMethod ValuationMethod_20("STRING_CDSD");
    noRelatedSym_0_2.set(ValuationMethod_20);
    Instrument_20.insert(ValuationMethod_20.getString());
    all_values.push_back(Instrument_20);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_35;
      FIX::ComplexEventCondition ComplexEventCondition_35(2);
      noComplexEvents_2_1_0.set(ComplexEventCondition_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventCondition_35.getString());
      FIX::ComplexEventPrice ComplexEventPrice_35;
      ComplexEventPrice_35.setString("4956031");
      noComplexEvents_2_1_0.set(ComplexEventPrice_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventPrice_35.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_35(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceBoundaryMethod_35.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_35;
      ComplexEventPriceBoundaryPrecision_35.setString("73.450000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceBoundaryPrecision_35.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_35(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceTimeType_35.getString());
      FIX::ComplexEventType ComplexEventType_35(5);
      noComplexEvents_2_1_0.set(ComplexEventType_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventType_35.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_35;
      ComplexOptPayoutAmount_35.setString("4274660");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexOptPayoutAmount_35.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_35);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_66;
        FIX::ComplexEventEndDate ComplexEventEndDate_66(FIX::UTCTIMESTAMP(23, 18, 17, 12, 2, 2005));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_66);
        ComplexEventDates_NoComplexEventDates_66.insert(ComplexEventEndDate_66.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_66(FIX::UTCTIMESTAMP(21, 21, 31, 9, 3, 2001));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_66);
        ComplexEventDates_NoComplexEventDates_66.insert(ComplexEventStartDate_66.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_66);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_131;
          FIX::ComplexEventEndTime ComplexEventEndTime_131(FIX::UTCTIMEONLY(11, 1, 23));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_131);
          ComplexEventTimes_NoComplexEventTimes_131.insert(ComplexEventEndTime_131.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_131(FIX::UTCTIMEONLY(0, 17, 0));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_131);
          ComplexEventTimes_NoComplexEventTimes_131.insert(ComplexEventStartTime_131.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_131);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_67;
        FIX::ComplexEventEndDate ComplexEventEndDate_67(FIX::UTCTIMESTAMP(17, 39, 50, 9, 3, 2001));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_67);
        ComplexEventDates_NoComplexEventDates_67.insert(ComplexEventEndDate_67.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_67(FIX::UTCTIMESTAMP(21, 23, 29, 15, 8, 2011));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_67);
        ComplexEventDates_NoComplexEventDates_67.insert(ComplexEventStartDate_67.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_67);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_132;
          FIX::ComplexEventEndTime ComplexEventEndTime_132(FIX::UTCTIMEONLY(12, 28, 31));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_132);
          ComplexEventTimes_NoComplexEventTimes_132.insert(ComplexEventEndTime_132.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_132(FIX::UTCTIMEONLY(22, 6, 17));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_132);
          ComplexEventTimes_NoComplexEventTimes_132.insert(ComplexEventStartTime_132.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_132);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_68;
        FIX::ComplexEventEndDate ComplexEventEndDate_68(FIX::UTCTIMESTAMP(17, 10, 34, 12, 11, 2002));
        noComplexEventDates_2_0_2_2.set(ComplexEventEndDate_68);
        ComplexEventDates_NoComplexEventDates_68.insert(ComplexEventEndDate_68.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_68(FIX::UTCTIMESTAMP(11, 37, 31, 10, 3, 2004));
        noComplexEventDates_2_0_2_2.set(ComplexEventStartDate_68);
        ComplexEventDates_NoComplexEventDates_68.insert(ComplexEventStartDate_68.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_68);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_133;
          FIX::ComplexEventEndTime ComplexEventEndTime_133(FIX::UTCTIMEONLY(7, 48, 23));
          noComplexEventTimes_2_0_2_3_0.set(ComplexEventEndTime_133);
          ComplexEventTimes_NoComplexEventTimes_133.insert(ComplexEventEndTime_133.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_133(FIX::UTCTIMEONLY(12, 22, 13));
          noComplexEventTimes_2_0_2_3_0.set(ComplexEventStartTime_133);
          ComplexEventTimes_NoComplexEventTimes_133.insert(ComplexEventStartTime_133.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_133);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_134;
          FIX::ComplexEventEndTime ComplexEventEndTime_134(FIX::UTCTIMEONLY(14, 33, 34));
          noComplexEventTimes_2_0_2_3_1.set(ComplexEventEndTime_134);
          ComplexEventTimes_NoComplexEventTimes_134.insert(ComplexEventEndTime_134.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_134(FIX::UTCTIMEONLY(7, 32, 4));
          noComplexEventTimes_2_0_2_3_1.set(ComplexEventStartTime_134);
          ComplexEventTimes_NoComplexEventTimes_134.insert(ComplexEventStartTime_134.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_134);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_36;
      FIX::EventDate EventDate_36("LOCALMKTDATE_2065065493");
      noEvents_2_1_0.set(EventDate_36);
      EvntGrp_NoEvents_36.insert(EventDate_36.getString());
      FIX::EventPx EventPx_36;
      EventPx_36.setString("8824657");
      noEvents_2_1_0.set(EventPx_36);
      EvntGrp_NoEvents_36.insert(EventPx_36.getString());
      FIX::EventText EventText_36("STRING_231595997");
      noEvents_2_1_0.set(EventText_36);
      EvntGrp_NoEvents_36.insert(EventText_36.getString());
      FIX::EventTime EventTime_36(FIX::UTCTIMESTAMP(16, 1, 6, 19, 3, 2013));
      noEvents_2_1_0.set(EventTime_36);
      EvntGrp_NoEvents_36.insert(EventTime_36.getString());
      FIX::EventType EventType_36(14);
      noEvents_2_1_0.set(EventType_36);
      EvntGrp_NoEvents_36.insert(EventType_36.getString());
      all_values.push_back(EvntGrp_NoEvents_36);

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_37;
      FIX::EventDate EventDate_37("LOCALMKTDATE_2108912788");
      noEvents_2_1_1.set(EventDate_37);
      EvntGrp_NoEvents_37.insert(EventDate_37.getString());
      FIX::EventPx EventPx_37;
      EventPx_37.setString("6508863");
      noEvents_2_1_1.set(EventPx_37);
      EvntGrp_NoEvents_37.insert(EventPx_37.getString());
      FIX::EventText EventText_37("STRING_168629931");
      noEvents_2_1_1.set(EventText_37);
      EvntGrp_NoEvents_37.insert(EventText_37.getString());
      FIX::EventTime EventTime_37(FIX::UTCTIMESTAMP(3, 31, 45, 25, 8, 2011));
      noEvents_2_1_1.set(EventTime_37);
      EvntGrp_NoEvents_37.insert(EventTime_37.getString());
      FIX::EventType EventType_37(3);
      noEvents_2_1_1.set(EventType_37);
      EvntGrp_NoEvents_37.insert(EventType_37.getString());
      all_values.push_back(EvntGrp_NoEvents_37);

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_2_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_38;
      FIX::EventDate EventDate_38("LOCALMKTDATE_397698819");
      noEvents_2_1_2.set(EventDate_38);
      EvntGrp_NoEvents_38.insert(EventDate_38.getString());
      FIX::EventPx EventPx_38;
      EventPx_38.setString("17770592");
      noEvents_2_1_2.set(EventPx_38);
      EvntGrp_NoEvents_38.insert(EventPx_38.getString());
      FIX::EventText EventText_38("STRING_1327170235");
      noEvents_2_1_2.set(EventText_38);
      EvntGrp_NoEvents_38.insert(EventText_38.getString());
      FIX::EventTime EventTime_38(FIX::UTCTIMESTAMP(12, 27, 38, 12, 10, 2001));
      noEvents_2_1_2.set(EventTime_38);
      EvntGrp_NoEvents_38.insert(EventTime_38.getString());
      FIX::EventType EventType_38(19);
      noEvents_2_1_2.set(EventType_38);
      EvntGrp_NoEvents_38.insert(EventType_38.getString());
      all_values.push_back(EvntGrp_NoEvents_38);

      noRelatedSym_0_2.addGroup(noEvents_2_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_43;
      FIX::InstrumentPartyID InstrumentPartyID_43("STRING_582860989");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_43);
      InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyID_43.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_43('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_43);
      InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyIDSource_43.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_43(26519779);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_43);
      InstrumentParties_NoInstrumentParties_43.insert(InstrumentPartyRole_43.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_43);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90;
        FIX::InstrumentPartySubID InstrumentPartySubID_90("STRING_79745349");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_90);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90.insert(InstrumentPartySubID_90.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_90(1269461217);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_90);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90.insert(InstrumentPartySubIDType_90.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91;
        FIX::InstrumentPartySubID InstrumentPartySubID_91("STRING_281907136");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_91);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91.insert(InstrumentPartySubID_91.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_91(921381403);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_91);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91.insert(InstrumentPartySubIDType_91.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92;
        FIX::InstrumentPartySubID InstrumentPartySubID_92("STRING_1230890358");
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubID_92);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92.insert(InstrumentPartySubID_92.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_92(932793452);
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubIDType_92);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92.insert(InstrumentPartySubIDType_92.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_44;
      FIX::InstrumentPartyID InstrumentPartyID_44("STRING_1090011334");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_44);
      InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyID_44.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_44('1');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_44);
      InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyIDSource_44.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_44(1200611495);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_44);
      InstrumentParties_NoInstrumentParties_44.insert(InstrumentPartyRole_44.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_44);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93;
        FIX::InstrumentPartySubID InstrumentPartySubID_93("STRING_1745813717");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_93);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93.insert(InstrumentPartySubID_93.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_93(1610829104);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_93);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93.insert(InstrumentPartySubIDType_93.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94;
        FIX::InstrumentPartySubID InstrumentPartySubID_94("STRING_1108344521");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_94);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94.insert(InstrumentPartySubID_94.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_94(1106355248);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_94);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94.insert(InstrumentPartySubIDType_94.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95;
        FIX::InstrumentPartySubID InstrumentPartySubID_95("STRING_730603619");
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubID_95);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95.insert(InstrumentPartySubID_95.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_95(1506043340);
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubIDType_95);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95.insert(InstrumentPartySubIDType_95.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_45;
      FIX::InstrumentPartyID InstrumentPartyID_45("STRING_735930841");
      noInstrumentParties_2_1_2.set(InstrumentPartyID_45);
      InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyID_45.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_45('2');
      noInstrumentParties_2_1_2.set(InstrumentPartyIDSource_45);
      InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyIDSource_45.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_45(1639776085);
      noInstrumentParties_2_1_2.set(InstrumentPartyRole_45);
      InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyRole_45.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_45);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96;
        FIX::InstrumentPartySubID InstrumentPartySubID_96("STRING_1623608353");
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubID_96);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96.insert(InstrumentPartySubID_96.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_96(1898959443);
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubIDType_96);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96.insert(InstrumentPartySubIDType_96.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97;
        FIX::InstrumentPartySubID InstrumentPartySubID_97("STRING_870512133");
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubID_97);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97.insert(InstrumentPartySubID_97.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_97(812013615);
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubIDType_97);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97.insert(InstrumentPartySubIDType_97.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_42;
      FIX::SecurityAltID SecurityAltID_42("STRING_1064101231");
      noSecurityAltID_2_1_0.set(SecurityAltID_42);
      SecAltIDGrp_NoSecurityAltID_42.insert(SecurityAltID_42.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_42("STRING_232014873");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_42);
      SecAltIDGrp_NoSecurityAltID_42.insert(SecurityAltIDSource_42.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_42);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_43;
      FIX::SecurityAltID SecurityAltID_43("STRING_511101988");
      noSecurityAltID_2_1_1.set(SecurityAltID_43);
      SecAltIDGrp_NoSecurityAltID_43.insert(SecurityAltID_43.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_43("STRING_2086984185");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_43);
      SecAltIDGrp_NoSecurityAltID_43.insert(SecurityAltIDSource_43.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_43);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_44;
      FIX::SecurityAltID SecurityAltID_44("STRING_258534653");
      noSecurityAltID_2_1_2.set(SecurityAltID_44);
      SecAltIDGrp_NoSecurityAltID_44.insert(SecurityAltID_44.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_44("STRING_846123315");
      noSecurityAltID_2_1_2.set(SecurityAltIDSource_44);
      SecAltIDGrp_NoSecurityAltID_44.insert(SecurityAltIDSource_44.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_44);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_40;
    FIX::SecurityXML SecurityXML_41("XMLDATA_19245886");
    noRelatedSym_0_2.set(SecurityXML_41);
    FIX::SecurityXMLLen SecurityXMLLen_20(1527995870);
    noRelatedSym_0_2.set(SecurityXMLLen_20);
    FIX::SecurityXMLSchema SecurityXMLSchema_20("STRING_1128030451");
    noRelatedSym_0_2.set(SecurityXMLSchema_20);
    SecurityXML_40.insert(SecurityXMLSchema_20.getString());
    all_values.push_back(SecurityXML_40);

    // InstrumentExtension
    multiset<string> InstrumentExtension_6;
    FIX::DeliveryForm DeliveryForm_6(2);
    noRelatedSym_0_2.set(DeliveryForm_6);
    InstrumentExtension_6.insert(DeliveryForm_6.getString());
    FIX::PctAtRisk PctAtRisk_6;
    PctAtRisk_6.setString("25.800000");
    noRelatedSym_0_2.set(PctAtRisk_6);
    InstrumentExtension_6.insert(PctAtRisk_6.getString());
    all_values.push_back(InstrumentExtension_6);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_14;
      FIX::InstrAttribType InstrAttribType_14(4);
      noInstrAttrib_2_1_0.set(InstrAttribType_14);
      AttrbGrp_NoInstrAttrib_14.insert(InstrAttribType_14.getString());
      FIX::InstrAttribValue InstrAttribValue_14("STRING_628333112");
      noInstrAttrib_2_1_0.set(InstrAttribValue_14);
      AttrbGrp_NoInstrAttrib_14.insert(InstrAttribValue_14.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_14);

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_0);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_2;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_2;
    SecondaryHighLimitPrice_2.setString("11139517");
    noRelatedSym_0_2.set(SecondaryHighLimitPrice_2);
    SecondaryPriceLimits_2.insert(SecondaryHighLimitPrice_2.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_2;
    SecondaryLowLimitPrice_2.setString("11193968");
    noRelatedSym_0_2.set(SecondaryLowLimitPrice_2);
    SecondaryPriceLimits_2.insert(SecondaryLowLimitPrice_2.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_2(226663181);
    noRelatedSym_0_2.set(SecondaryPriceLimitType_2);
    SecondaryPriceLimits_2.insert(SecondaryPriceLimitType_2.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_2;
    SecondaryTradingReferencePrice_2.setString("5772972");
    noRelatedSym_0_2.set(SecondaryTradingReferencePrice_2);
    SecondaryPriceLimits_2.insert(SecondaryTradingReferencePrice_2.getString());
    all_values.push_back(SecondaryPriceLimits_2);

    msg.addGroup(noRelatedSym_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_33;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_33("DATA_80257714");
  msg.set(EncodedUnderlyingIssuer_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingIssuer_33.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_33(1333018429);
  msg.set(EncodedUnderlyingIssuerLen_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingIssuerLen_33.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_33("DATA_1307900826");
  msg.set(EncodedUnderlyingSecurityDesc_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingSecurityDesc_33.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_33(1586301054);
  msg.set(EncodedUnderlyingSecurityDescLen_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingSecurityDescLen_33.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_33;
  UnderlyingAdjustedQuantity_33.setString("20689492");
  msg.set(UnderlyingAdjustedQuantity_33);
  UnderlyingInstrument_33.insert(UnderlyingAdjustedQuantity_33.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_33;
  UnderlyingAllocationPercent_33.setString("10.320000");
  msg.set(UnderlyingAllocationPercent_33);
  UnderlyingInstrument_33.insert(UnderlyingAllocationPercent_33.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_33;
  UnderlyingAttachmentPoint_33.setString("34.910000");
  msg.set(UnderlyingAttachmentPoint_33);
  UnderlyingInstrument_33.insert(UnderlyingAttachmentPoint_33.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_33("STRING_1480854451");
  msg.set(UnderlyingCFICode_33);
  UnderlyingInstrument_33.insert(UnderlyingCFICode_33.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_33("STRING_694315738");
  msg.set(UnderlyingCPProgram_33);
  UnderlyingInstrument_33.insert(UnderlyingCPProgram_33.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_33("STRING_830069287");
  msg.set(UnderlyingCPRegType_33);
  UnderlyingInstrument_33.insert(UnderlyingCPRegType_33.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_33;
  UnderlyingCapValue_33.setString("2038829");
  msg.set(UnderlyingCapValue_33);
  UnderlyingInstrument_33.insert(UnderlyingCapValue_33.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_33;
  UnderlyingCashAmount_33.setString("15063293");
  msg.set(UnderlyingCashAmount_33);
  UnderlyingInstrument_33.insert(UnderlyingCashAmount_33.getString());
  FIX::UnderlyingCashType UnderlyingCashType_33("STRING_FIXED");
  msg.set(UnderlyingCashType_33);
  UnderlyingInstrument_33.insert(UnderlyingCashType_33.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_33;
  UnderlyingContractMultiplier_33.setString("12679841");
  msg.set(UnderlyingContractMultiplier_33);
  UnderlyingInstrument_33.insert(UnderlyingContractMultiplier_33.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_33(1738344226);
  msg.set(UnderlyingContractMultiplierUnit_33);
  UnderlyingInstrument_33.insert(UnderlyingContractMultiplierUnit_33.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_33("COUNTRY_1269412274");
  msg.set(UnderlyingCountryOfIssue_33);
  UnderlyingInstrument_33.insert(UnderlyingCountryOfIssue_33.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_33("LOCALMKTDATE_1207484704");
  msg.set(UnderlyingCouponPaymentDate_33);
  UnderlyingInstrument_33.insert(UnderlyingCouponPaymentDate_33.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_33;
  UnderlyingCouponRate_33.setString("88.790000");
  msg.set(UnderlyingCouponRate_33);
  UnderlyingInstrument_33.insert(UnderlyingCouponRate_33.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_33("STRING_2115535589");
  msg.set(UnderlyingCreditRating_33);
  UnderlyingInstrument_33.insert(UnderlyingCreditRating_33.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_33("JPY");
  msg.set(UnderlyingCurrency_33);
  UnderlyingInstrument_33.insert(UnderlyingCurrency_33.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_33;
  UnderlyingCurrentValue_33.setString("10960823");
  msg.set(UnderlyingCurrentValue_33);
  UnderlyingInstrument_33.insert(UnderlyingCurrentValue_33.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_33;
  UnderlyingDetachmentPoint_33.setString("42.320000");
  msg.set(UnderlyingDetachmentPoint_33);
  UnderlyingInstrument_33.insert(UnderlyingDetachmentPoint_33.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_33;
  UnderlyingDirtyPrice_33.setString("19887936");
  msg.set(UnderlyingDirtyPrice_33);
  UnderlyingInstrument_33.insert(UnderlyingDirtyPrice_33.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_33;
  UnderlyingEndPrice_33.setString("10094226");
  msg.set(UnderlyingEndPrice_33);
  UnderlyingInstrument_33.insert(UnderlyingEndPrice_33.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_33;
  UnderlyingEndValue_33.setString("20505128");
  msg.set(UnderlyingEndValue_33);
  UnderlyingInstrument_33.insert(UnderlyingEndValue_33.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_33(469643147);
  msg.set(UnderlyingExerciseStyle_33);
  UnderlyingInstrument_33.insert(UnderlyingExerciseStyle_33.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_33;
  UnderlyingFXRate_33.setString("21233743");
  msg.set(UnderlyingFXRate_33);
  UnderlyingInstrument_33.insert(UnderlyingFXRate_33.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_33('M');
  msg.set(UnderlyingFXRateCalc_33);
  UnderlyingInstrument_33.insert(UnderlyingFXRateCalc_33.getString());
  FIX::UnderlyingFactor UnderlyingFactor_33;
  UnderlyingFactor_33.setString("6963063");
  msg.set(UnderlyingFactor_33);
  UnderlyingInstrument_33.insert(UnderlyingFactor_33.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_33(553187957);
  msg.set(UnderlyingFlowScheduleType_33);
  UnderlyingInstrument_33.insert(UnderlyingFlowScheduleType_33.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_33("STRING_1102683763");
  msg.set(UnderlyingInstrRegistry_33);
  UnderlyingInstrument_33.insert(UnderlyingInstrRegistry_33.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_33("LOCALMKTDATE_2029324758");
  msg.set(UnderlyingIssueDate_33);
  UnderlyingInstrument_33.insert(UnderlyingIssueDate_33.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_33("STRING_1861088783");
  msg.set(UnderlyingIssuer_33);
  UnderlyingInstrument_33.insert(UnderlyingIssuer_33.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_33("STRING_541501169");
  msg.set(UnderlyingLocaleOfIssue_33);
  UnderlyingInstrument_33.insert(UnderlyingLocaleOfIssue_33.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_33("LOCALMKTDATE_1950790380");
  msg.set(UnderlyingMaturityDate_33);
  UnderlyingInstrument_33.insert(UnderlyingMaturityDate_33.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_33("MONTHYEAR_931796168");
  msg.set(UnderlyingMaturityMonthYear_33);
  UnderlyingInstrument_33.insert(UnderlyingMaturityMonthYear_33.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_33("TZTIMEONLY_1620094660");
  msg.set(UnderlyingMaturityTime_33);
  UnderlyingInstrument_33.insert(UnderlyingMaturityTime_33.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_33;
  UnderlyingNotionalPercentageOutstanding_33.setString("11.840000");
  msg.set(UnderlyingNotionalPercentageOutstanding_33);
  UnderlyingInstrument_33.insert(UnderlyingNotionalPercentageOutstanding_33.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_33('1');
  msg.set(UnderlyingOptAttribute_33);
  UnderlyingInstrument_33.insert(UnderlyingOptAttribute_33.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_33;
  UnderlyingOriginalNotionalPercentageOutstanding_33.setString("2.990000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_33);
  UnderlyingInstrument_33.insert(UnderlyingOriginalNotionalPercentageOutstanding_33.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_33("STRING_1488044120");
  msg.set(UnderlyingPriceUnitOfMeasure_33);
  UnderlyingInstrument_33.insert(UnderlyingPriceUnitOfMeasure_33.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_33;
  UnderlyingPriceUnitOfMeasureQty_33.setString("9849576");
  msg.set(UnderlyingPriceUnitOfMeasureQty_33);
  UnderlyingInstrument_33.insert(UnderlyingPriceUnitOfMeasureQty_33.getString());
  FIX::UnderlyingProduct UnderlyingProduct_33(1060990585);
  msg.set(UnderlyingProduct_33);
  UnderlyingInstrument_33.insert(UnderlyingProduct_33.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_33(608544640);
  msg.set(UnderlyingPutOrCall_33);
  UnderlyingInstrument_33.insert(UnderlyingPutOrCall_33.getString());
  FIX::UnderlyingPx UnderlyingPx_33;
  UnderlyingPx_33.setString("5758181");
  msg.set(UnderlyingPx_33);
  UnderlyingInstrument_33.insert(UnderlyingPx_33.getString());
  FIX::UnderlyingQty UnderlyingQty_33;
  UnderlyingQty_33.setString("1829192");
  msg.set(UnderlyingQty_33);
  UnderlyingInstrument_33.insert(UnderlyingQty_33.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_33("LOCALMKTDATE_1816029344");
  msg.set(UnderlyingRedemptionDate_33);
  UnderlyingInstrument_33.insert(UnderlyingRedemptionDate_33.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_33("STRING_425213421");
  msg.set(UnderlyingRepoCollateralSecurityType_33);
  UnderlyingInstrument_33.insert(UnderlyingRepoCollateralSecurityType_33.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_33;
  UnderlyingRepurchaseRate_33.setString("11.520000");
  msg.set(UnderlyingRepurchaseRate_33);
  UnderlyingInstrument_33.insert(UnderlyingRepurchaseRate_33.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_33(895276287);
  msg.set(UnderlyingRepurchaseTerm_33);
  UnderlyingInstrument_33.insert(UnderlyingRepurchaseTerm_33.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_33("STRING_1802604523");
  msg.set(UnderlyingRestructuringType_33);
  UnderlyingInstrument_33.insert(UnderlyingRestructuringType_33.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_33("STRING_1247053545");
  msg.set(UnderlyingSecurityDesc_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityDesc_33.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_33("EXCHANGE_915150520");
  msg.set(UnderlyingSecurityExchange_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityExchange_33.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_33("STRING_1643914557");
  msg.set(UnderlyingSecurityID_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityID_33.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_33("STRING_108992545");
  msg.set(UnderlyingSecurityIDSource_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityIDSource_33.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_33("STRING_818179728");
  msg.set(UnderlyingSecuritySubType_33);
  UnderlyingInstrument_33.insert(UnderlyingSecuritySubType_33.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_33("STRING_2113557704");
  msg.set(UnderlyingSecurityType_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityType_33.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_33("STRING_84883295");
  msg.set(UnderlyingSeniority_33);
  UnderlyingInstrument_33.insert(UnderlyingSeniority_33.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_33("STRING_1840605777");
  msg.set(UnderlyingSettlMethod_33);
  UnderlyingInstrument_33.insert(UnderlyingSettlMethod_33.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_33(5);
  msg.set(UnderlyingSettlementType_33);
  UnderlyingInstrument_33.insert(UnderlyingSettlementType_33.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_33;
  UnderlyingStartValue_33.setString("6380712");
  msg.set(UnderlyingStartValue_33);
  UnderlyingInstrument_33.insert(UnderlyingStartValue_33.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_33("STRING_795805892");
  msg.set(UnderlyingStateOrProvinceOfIssue_33);
  UnderlyingInstrument_33.insert(UnderlyingStateOrProvinceOfIssue_33.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_33("GBP");
  msg.set(UnderlyingStrikeCurrency_33);
  UnderlyingInstrument_33.insert(UnderlyingStrikeCurrency_33.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_33;
  UnderlyingStrikePrice_33.setString("13373070");
  msg.set(UnderlyingStrikePrice_33);
  UnderlyingInstrument_33.insert(UnderlyingStrikePrice_33.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_33("STRING_347528227");
  msg.set(UnderlyingSymbol_33);
  UnderlyingInstrument_33.insert(UnderlyingSymbol_33.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_33("STRING_1283472556");
  msg.set(UnderlyingSymbolSfx_33);
  UnderlyingInstrument_33.insert(UnderlyingSymbolSfx_33.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_33("STRING_809918073");
  msg.set(UnderlyingTimeUnit_33);
  UnderlyingInstrument_33.insert(UnderlyingTimeUnit_33.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_33("STRING_1631689411");
  msg.set(UnderlyingUnitOfMeasure_33);
  UnderlyingInstrument_33.insert(UnderlyingUnitOfMeasure_33.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_33;
  UnderlyingUnitOfMeasureQty_33.setString("7621008");
  msg.set(UnderlyingUnitOfMeasureQty_33);
  UnderlyingInstrument_33.insert(UnderlyingUnitOfMeasureQty_33.getString());
  all_values.push_back(UnderlyingInstrument_33);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_68;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_68("STRING_972249884");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_68);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_68.insert(UnderlyingSecurityAltID_68.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_68("STRING_1747058425");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_68);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_68.insert(UnderlyingSecurityAltIDSource_68.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_68);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_69;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_69("STRING_26105310");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_69);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_69.insert(UnderlyingSecurityAltID_69.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_69("STRING_1580794524");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_69);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_69.insert(UnderlyingSecurityAltIDSource_69.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_69);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_59;
    FIX::UnderlyingStipType UnderlyingStipType_59("STRING_209024522");
    noUnderlyingStips_0_0.set(UnderlyingStipType_59);
    UnderlyingStipulations_NoUnderlyingStips_59.insert(UnderlyingStipType_59.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_59("STRING_1249340220");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_59);
    UnderlyingStipulations_NoUnderlyingStips_59.insert(UnderlyingStipValue_59.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_59);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_60;
    FIX::UnderlyingStipType UnderlyingStipType_60("STRING_600606388");
    noUnderlyingStips_0_1.set(UnderlyingStipType_60);
    UnderlyingStipulations_NoUnderlyingStips_60.insert(UnderlyingStipType_60.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_60("STRING_359995674");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_60);
    UnderlyingStipulations_NoUnderlyingStips_60.insert(UnderlyingStipValue_60.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_60);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_67;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_67("STRING_255727263");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_67);
    UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyID_67.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_67('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_67);
    UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyIDSource_67.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_67(912283380);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_67);
    UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyRole_67.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_67);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_136("STRING_1716041764");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_136);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136.insert(UnderlyingInstrumentPartySubID_136.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_136(1730463108);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_136);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136.insert(UnderlyingInstrumentPartySubIDType_136.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_68;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_68("STRING_1865715877");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_68);
    UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyID_68.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_68('1');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_68);
    UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyIDSource_68.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_68(1423585237);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_68);
    UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyRole_68.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_68);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_137("STRING_291512665");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_137);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137.insert(UnderlyingInstrumentPartySubID_137.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_137(71907481);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_137);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137.insert(UnderlyingInstrumentPartySubIDType_137.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_138("STRING_924834109");
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubID_138);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138.insert(UnderlyingInstrumentPartySubID_138.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_138(643189053);
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubIDType_138);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138.insert(UnderlyingInstrumentPartySubIDType_138.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
