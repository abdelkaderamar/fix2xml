#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/DerivativeSecurityListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityListUpdateReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DerivativeSecurityListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> DerivativeSecurityListUpdateReport_0;
  FIX::LastFragment LastFragment_4(false);
  msg.set(LastFragment_4);
  DerivativeSecurityListUpdateReport_0.insert(LastFragment_4.getString());
  FIX::SecurityReqID SecurityReqID_2("STRING_1312162283");
  msg.set(SecurityReqID_2);
  DerivativeSecurityListUpdateReport_0.insert(SecurityReqID_2.getString());
  FIX::SecurityRequestResult SecurityRequestResult_1(5);
  msg.set(SecurityRequestResult_1);
  DerivativeSecurityListUpdateReport_0.insert(SecurityRequestResult_1.getString());
  FIX::SecurityResponseID SecurityResponseID_1("STRING_1260447946");
  msg.set(SecurityResponseID_1);
  DerivativeSecurityListUpdateReport_0.insert(SecurityResponseID_1.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_0('A');
  msg.set(SecurityUpdateAction_0);
  DerivativeSecurityListUpdateReport_0.insert(SecurityUpdateAction_0.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_2(1369567465);
  msg.set(TotNoRelatedSym_2);
  DerivativeSecurityListUpdateReport_0.insert(TotNoRelatedSym_2.getString());
  FIX::TransactTime TransactTime_17(FIX::UTCTIMESTAMP(23, 55, 21, 14, 9, 2013));
  msg.set(TransactTime_17);
  DerivativeSecurityListUpdateReport_0.insert(TransactTime_17.getString());
  all_values.push_back(DerivativeSecurityListUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_3;
  FIX::ApplID ApplID_3("STRING_567043638");
  msg.set(ApplID_3);
  ApplicationSequenceControl_3.insert(ApplID_3.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_3(753294119);
  msg.set(ApplLastSeqNum_3);
  ApplicationSequenceControl_3.insert(ApplLastSeqNum_3.getString());
  FIX::ApplResendFlag ApplResendFlag_3(true);
  msg.set(ApplResendFlag_3);
  ApplicationSequenceControl_3.insert(ApplResendFlag_3.getString());
  FIX::ApplSeqNum ApplSeqNum_3(1279719484);
  msg.set(ApplSeqNum_3);
  ApplicationSequenceControl_3.insert(ApplSeqNum_3.getString());
  all_values.push_back(ApplicationSequenceControl_3);

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_2;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_2(false);
  msg.set(DerivFlexProductEligibilityIndicator_2);
  DerivativeInstrument_2.insert(DerivFlexProductEligibilityIndicator_2.getString());
  FIX::DerivativeCFICode DerivativeCFICode_2("STRING_1373662591");
  msg.set(DerivativeCFICode_2);
  DerivativeInstrument_2.insert(DerivativeCFICode_2.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_2;
  DerivativeCapPrice_2.setString("3302399");
  msg.set(DerivativeCapPrice_2);
  DerivativeInstrument_2.insert(DerivativeCapPrice_2.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_2;
  DerivativeContractMultiplier_2.setString("1477690");
  msg.set(DerivativeContractMultiplier_2);
  DerivativeInstrument_2.insert(DerivativeContractMultiplier_2.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_2(2012932626);
  msg.set(DerivativeContractMultiplierUnit_2);
  DerivativeInstrument_2.insert(DerivativeContractMultiplierUnit_2.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_2("MONTHYEAR_416160815");
  msg.set(DerivativeContractSettlMonth_2);
  DerivativeInstrument_2.insert(DerivativeContractSettlMonth_2.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_2("COUNTRY_421022452");
  msg.set(DerivativeCountryOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeCountryOfIssue_2.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_2("DATA_1350978936");
  msg.set(DerivativeEncodedIssuer_2);
  DerivativeInstrument_2.insert(DerivativeEncodedIssuer_2.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_2(397657298);
  msg.set(DerivativeEncodedIssuerLen_2);
  DerivativeInstrument_2.insert(DerivativeEncodedIssuerLen_2.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_2("DATA_719290203");
  msg.set(DerivativeEncodedSecurityDesc_2);
  DerivativeInstrument_2.insert(DerivativeEncodedSecurityDesc_2.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_2(450488067);
  msg.set(DerivativeEncodedSecurityDescLen_2);
  DerivativeInstrument_2.insert(DerivativeEncodedSecurityDescLen_2.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_2('7');
  msg.set(DerivativeExerciseStyle_2);
  DerivativeInstrument_2.insert(DerivativeExerciseStyle_2.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_2;
  DerivativeFloorPrice_2.setString("9728617");
  msg.set(DerivativeFloorPrice_2);
  DerivativeInstrument_2.insert(DerivativeFloorPrice_2.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_2(1235802356);
  msg.set(DerivativeFlowScheduleType_2);
  DerivativeInstrument_2.insert(DerivativeFlowScheduleType_2.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_2("STRING_58888439");
  msg.set(DerivativeInstrRegistry_2);
  DerivativeInstrument_2.insert(DerivativeInstrRegistry_2.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_2('1');
  msg.set(DerivativeInstrmtAssignmentMethod_2);
  DerivativeInstrument_2.insert(DerivativeInstrmtAssignmentMethod_2.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_2("LOCALMKTDATE_505107155");
  msg.set(DerivativeIssueDate_2);
  DerivativeInstrument_2.insert(DerivativeIssueDate_2.getString());
  FIX::DerivativeIssuer DerivativeIssuer_2("STRING_1319336386");
  msg.set(DerivativeIssuer_2);
  DerivativeInstrument_2.insert(DerivativeIssuer_2.getString());
  FIX::DerivativeListMethod DerivativeListMethod_2(194782185);
  msg.set(DerivativeListMethod_2);
  DerivativeInstrument_2.insert(DerivativeListMethod_2.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_2("STRING_1874674620");
  msg.set(DerivativeLocaleOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeLocaleOfIssue_2.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_2("LOCALMKTDATE_1999984371");
  msg.set(DerivativeMaturityDate_2);
  DerivativeInstrument_2.insert(DerivativeMaturityDate_2.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_2("MONTHYEAR_1546116320");
  msg.set(DerivativeMaturityMonthYear_2);
  DerivativeInstrument_2.insert(DerivativeMaturityMonthYear_2.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_2("TZTIMEONLY_1048917827");
  msg.set(DerivativeMaturityTime_2);
  DerivativeInstrument_2.insert(DerivativeMaturityTime_2.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_2;
  DerivativeMinPriceIncrement_2.setString("1827240");
  msg.set(DerivativeMinPriceIncrement_2);
  DerivativeInstrument_2.insert(DerivativeMinPriceIncrement_2.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_2;
  DerivativeMinPriceIncrementAmount_2.setString("10226145");
  msg.set(DerivativeMinPriceIncrementAmount_2);
  DerivativeInstrument_2.insert(DerivativeMinPriceIncrementAmount_2.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_2(1147317391);
  msg.set(DerivativeNTPositionLimit_2);
  DerivativeInstrument_2.insert(DerivativeNTPositionLimit_2.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_2('1');
  msg.set(DerivativeOptAttribute_2);
  DerivativeInstrument_2.insert(DerivativeOptAttribute_2.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_2;
  DerivativeOptPayAmount_2.setString("15896582");
  msg.set(DerivativeOptPayAmount_2);
  DerivativeInstrument_2.insert(DerivativeOptPayAmount_2.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_2(1900611511);
  msg.set(DerivativePositionLimit_2);
  DerivativeInstrument_2.insert(DerivativePositionLimit_2.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_2("STRING_499754776");
  msg.set(DerivativePriceQuoteMethod_2);
  DerivativeInstrument_2.insert(DerivativePriceQuoteMethod_2.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_2("STRING_721894045");
  msg.set(DerivativePriceUnitOfMeasure_2);
  DerivativeInstrument_2.insert(DerivativePriceUnitOfMeasure_2.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_2;
  DerivativePriceUnitOfMeasureQty_2.setString("35228");
  msg.set(DerivativePriceUnitOfMeasureQty_2);
  DerivativeInstrument_2.insert(DerivativePriceUnitOfMeasureQty_2.getString());
  FIX::DerivativeProduct DerivativeProduct_2(1873417367);
  msg.set(DerivativeProduct_2);
  DerivativeInstrument_2.insert(DerivativeProduct_2.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_2("STRING_1052134007");
  msg.set(DerivativeProductComplex_2);
  DerivativeInstrument_2.insert(DerivativeProductComplex_2.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_2(151291866);
  msg.set(DerivativePutOrCall_2);
  DerivativeInstrument_2.insert(DerivativePutOrCall_2.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_2("STRING_1738866345");
  msg.set(DerivativeSecurityDesc_2);
  DerivativeInstrument_2.insert(DerivativeSecurityDesc_2.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_2("EXCHANGE_1468294822");
  msg.set(DerivativeSecurityExchange_2);
  DerivativeInstrument_2.insert(DerivativeSecurityExchange_2.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_2("STRING_572314318");
  msg.set(DerivativeSecurityGroup_2);
  DerivativeInstrument_2.insert(DerivativeSecurityGroup_2.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_2("STRING_942361633");
  msg.set(DerivativeSecurityID_2);
  DerivativeInstrument_2.insert(DerivativeSecurityID_2.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_2("STRING_1865952120");
  msg.set(DerivativeSecurityIDSource_2);
  DerivativeInstrument_2.insert(DerivativeSecurityIDSource_2.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_2("STRING_1291604521");
  msg.set(DerivativeSecurityStatus_2);
  DerivativeInstrument_2.insert(DerivativeSecurityStatus_2.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_2("STRING_1392849701");
  msg.set(DerivativeSecuritySubType_2);
  DerivativeInstrument_2.insert(DerivativeSecuritySubType_2.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_2("STRING_433591549");
  msg.set(DerivativeSecurityType_2);
  DerivativeInstrument_2.insert(DerivativeSecurityType_2.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_2('1');
  msg.set(DerivativeSettlMethod_2);
  DerivativeInstrument_2.insert(DerivativeSettlMethod_2.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_2("STRING_481168409");
  msg.set(DerivativeSettleOnOpenFlag_2);
  DerivativeInstrument_2.insert(DerivativeSettleOnOpenFlag_2.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_2("STRING_492479988");
  msg.set(DerivativeStateOrProvinceOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeStateOrProvinceOfIssue_2.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_2("JPY");
  msg.set(DerivativeStrikeCurrency_2);
  DerivativeInstrument_2.insert(DerivativeStrikeCurrency_2.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_2;
  DerivativeStrikeMultiplier_2.setString("18118163");
  msg.set(DerivativeStrikeMultiplier_2);
  DerivativeInstrument_2.insert(DerivativeStrikeMultiplier_2.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_2;
  DerivativeStrikePrice_2.setString("4493051");
  msg.set(DerivativeStrikePrice_2);
  DerivativeInstrument_2.insert(DerivativeStrikePrice_2.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_2;
  DerivativeStrikeValue_2.setString("7134665");
  msg.set(DerivativeStrikeValue_2);
  DerivativeInstrument_2.insert(DerivativeStrikeValue_2.getString());
  FIX::DerivativeSymbol DerivativeSymbol_2("STRING_1664317098");
  msg.set(DerivativeSymbol_2);
  DerivativeInstrument_2.insert(DerivativeSymbol_2.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_2("STRING_1995421515");
  msg.set(DerivativeSymbolSfx_2);
  DerivativeInstrument_2.insert(DerivativeSymbolSfx_2.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_2("STRING_1762384363");
  msg.set(DerivativeTimeUnit_2);
  DerivativeInstrument_2.insert(DerivativeTimeUnit_2.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_2("STRING_1847041102");
  msg.set(DerivativeUnitOfMeasure_2);
  DerivativeInstrument_2.insert(DerivativeUnitOfMeasure_2.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_2;
  DerivativeUnitOfMeasureQty_2.setString("8705524");
  msg.set(DerivativeUnitOfMeasureQty_2);
  DerivativeInstrument_2.insert(DerivativeUnitOfMeasureQty_2.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_2("STRING_762218106");
  msg.set(DerivativeValuationMethod_2);
  DerivativeInstrument_2.insert(DerivativeValuationMethod_2.getString());
  all_values.push_back(DerivativeInstrument_2);

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_6;
    FIX::DerivativeEventDate DerivativeEventDate_6("LOCALMKTDATE_312726998");
    noDerivativeEvents_0_0.set(DerivativeEventDate_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventDate_6.getString());
    FIX::DerivativeEventPx DerivativeEventPx_6;
    DerivativeEventPx_6.setString("5153459");
    noDerivativeEvents_0_0.set(DerivativeEventPx_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventPx_6.getString());
    FIX::DerivativeEventText DerivativeEventText_6("STRING_1988466444");
    noDerivativeEvents_0_0.set(DerivativeEventText_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventText_6.getString());
    FIX::DerivativeEventTime DerivativeEventTime_6(FIX::UTCTIMESTAMP(17, 3, 51, 27, 5, 2011));
    noDerivativeEvents_0_0.set(DerivativeEventTime_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventTime_6.getString());
    FIX::DerivativeEventType DerivativeEventType_6(1242474970);
    noDerivativeEvents_0_0.set(DerivativeEventType_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventType_6.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_6);

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_7;
    FIX::DerivativeEventDate DerivativeEventDate_7("LOCALMKTDATE_100660845");
    noDerivativeEvents_0_1.set(DerivativeEventDate_7);
    DerivativeEventsGrp_NoDerivativeEvents_7.insert(DerivativeEventDate_7.getString());
    FIX::DerivativeEventPx DerivativeEventPx_7;
    DerivativeEventPx_7.setString("11260346");
    noDerivativeEvents_0_1.set(DerivativeEventPx_7);
    DerivativeEventsGrp_NoDerivativeEvents_7.insert(DerivativeEventPx_7.getString());
    FIX::DerivativeEventText DerivativeEventText_7("STRING_386595843");
    noDerivativeEvents_0_1.set(DerivativeEventText_7);
    DerivativeEventsGrp_NoDerivativeEvents_7.insert(DerivativeEventText_7.getString());
    FIX::DerivativeEventTime DerivativeEventTime_7(FIX::UTCTIMESTAMP(23, 27, 55, 11, 2, 2003));
    noDerivativeEvents_0_1.set(DerivativeEventTime_7);
    DerivativeEventsGrp_NoDerivativeEvents_7.insert(DerivativeEventTime_7.getString());
    FIX::DerivativeEventType DerivativeEventType_7(1716438962);
    noDerivativeEvents_0_1.set(DerivativeEventType_7);
    DerivativeEventsGrp_NoDerivativeEvents_7.insert(DerivativeEventType_7.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_7);

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_8;
    FIX::DerivativeEventDate DerivativeEventDate_8("LOCALMKTDATE_1207406672");
    noDerivativeEvents_0_2.set(DerivativeEventDate_8);
    DerivativeEventsGrp_NoDerivativeEvents_8.insert(DerivativeEventDate_8.getString());
    FIX::DerivativeEventPx DerivativeEventPx_8;
    DerivativeEventPx_8.setString("15269374");
    noDerivativeEvents_0_2.set(DerivativeEventPx_8);
    DerivativeEventsGrp_NoDerivativeEvents_8.insert(DerivativeEventPx_8.getString());
    FIX::DerivativeEventText DerivativeEventText_8("STRING_1233272412");
    noDerivativeEvents_0_2.set(DerivativeEventText_8);
    DerivativeEventsGrp_NoDerivativeEvents_8.insert(DerivativeEventText_8.getString());
    FIX::DerivativeEventTime DerivativeEventTime_8(FIX::UTCTIMESTAMP(10, 26, 57, 5, 3, 2010));
    noDerivativeEvents_0_2.set(DerivativeEventTime_8);
    DerivativeEventsGrp_NoDerivativeEvents_8.insert(DerivativeEventTime_8.getString());
    FIX::DerivativeEventType DerivativeEventType_8(271918550);
    noDerivativeEvents_0_2.set(DerivativeEventType_8);
    DerivativeEventsGrp_NoDerivativeEvents_8.insert(DerivativeEventType_8.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_8);

    msg.addGroup(noDerivativeEvents_0_2);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_5;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_5("STRING_1125761371");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyID_5.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_5("STRING_790787336");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyIDSource_5.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_5(1829440845);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyRole_5.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_7("STRING_1460947987");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_7);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7.insert(DerivativeInstrumentPartySubID_7.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_7(987740057);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_7);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7.insert(DerivativeInstrumentPartySubIDType_7.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_8("STRING_325115352");
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubID_8);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8.insert(DerivativeInstrumentPartySubID_8.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_8(555939309);
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubIDType_8);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8.insert(DerivativeInstrumentPartySubIDType_8.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_2;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_9("STRING_1088400903");
      noDerivativeInstrumentPartySubIDs_0_1_2.set(DerivativeInstrumentPartySubID_9);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9.insert(DerivativeInstrumentPartySubID_9.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_9(1451150050);
      noDerivativeInstrumentPartySubIDs_0_1_2.set(DerivativeInstrumentPartySubIDType_9);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9.insert(DerivativeInstrumentPartySubIDType_9.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_5("STRING_434427801");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_5);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5.insert(DerivativeSecurityAltID_5.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_5("STRING_863292649");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_5);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5.insert(DerivativeSecurityAltIDSource_5.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5);

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_6("STRING_1446113620");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltID_6);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6.insert(DerivativeSecurityAltID_6.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_6("STRING_261623109");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltIDSource_6);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6.insert(DerivativeSecurityAltIDSource_6.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6);

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_4;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_5("DATA_767915236");
  msg.set(DerivativeSecurityXML_5);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_2(56731449);
  msg.set(DerivativeSecurityXMLLen_2);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_2("STRING_1075093980");
  msg.set(DerivativeSecurityXMLSchema_2);
  DerivativeSecurityXML_4.insert(DerivativeSecurityXMLSchema_2.getString());
  all_values.push_back(DerivativeSecurityXML_4);

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_1(1264138121);
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribType_1);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1.insert(DerivativeInstrAttribType_1.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_1("STRING_454547740");
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribValue_1);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1.insert(DerivativeInstrAttribValue_1.getString());
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1);

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_1;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_2(1570142962);
    noDerivativeInstrAttrib_0_1.set(DerivativeInstrAttribType_2);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2.insert(DerivativeInstrAttribType_2.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_2("STRING_171999013");
    noDerivativeInstrAttrib_0_1.set(DerivativeInstrAttribValue_2);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2.insert(DerivativeInstrAttribValue_2.getString());
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2);

    msg.addGroup(noDerivativeInstrAttrib_0_1);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_2;
    FIX::MarketID MarketID_3("EXCHANGE_355489181");
    noMarketSegments_0_0.set(MarketID_3);
    MarketSegmentGrp_NoMarketSegments_2.insert(MarketID_3.getString());
    FIX::MarketSegmentID MarketSegmentID_3("STRING_2097895990");
    noMarketSegments_0_0.set(MarketSegmentID_3);
    MarketSegmentGrp_NoMarketSegments_2.insert(MarketSegmentID_3.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_2);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_2;
    FIX::ExpirationCycle ExpirationCycle_2(2);
    noMarketSegments_0_0.set(ExpirationCycle_2);
    BaseTradingRules_2.insert(ExpirationCycle_2.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_2(3);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_2);
    BaseTradingRules_2.insert(ImpliedMarketIndicator_2.getString());
    FIX::MaxPriceVariation MaxPriceVariation_2;
    MaxPriceVariation_2.setString("415526");
    noMarketSegments_0_0.set(MaxPriceVariation_2);
    BaseTradingRules_2.insert(MaxPriceVariation_2.getString());
    FIX::MaxTradeVol MaxTradeVol_2;
    MaxTradeVol_2.setString("16248769");
    noMarketSegments_0_0.set(MaxTradeVol_2);
    BaseTradingRules_2.insert(MaxTradeVol_2.getString());
    FIX::MinTradeVol MinTradeVol_2;
    MinTradeVol_2.setString("7445877");
    noMarketSegments_0_0.set(MinTradeVol_2);
    BaseTradingRules_2.insert(MinTradeVol_2.getString());
    FIX::MultilegModel MultilegModel_2(2);
    noMarketSegments_0_0.set(MultilegModel_2);
    BaseTradingRules_2.insert(MultilegModel_2.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_2(2);
    noMarketSegments_0_0.set(MultilegPriceMethod_2);
    BaseTradingRules_2.insert(MultilegPriceMethod_2.getString());
    FIX::PriceType PriceType_15(10);
    noMarketSegments_0_0.set(PriceType_15);
    BaseTradingRules_2.insert(PriceType_15.getString());
    FIX::RoundLot RoundLot_2;
    RoundLot_2.setString("848631");
    noMarketSegments_0_0.set(RoundLot_2);
    BaseTradingRules_2.insert(RoundLot_2.getString());
    FIX::TradingCurrency TradingCurrency_2("CHF");
    noMarketSegments_0_0.set(TradingCurrency_2);
    BaseTradingRules_2.insert(TradingCurrency_2.getString());
    all_values.push_back(BaseTradingRules_2);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_4;
      FIX::LotType LotType_4('4');
      noLotTypeRules_0_1_0.set(LotType_4);
      LotTypeRules_NoLotTypeRules_4.insert(LotType_4.getString());
      FIX::MinLotSize MinLotSize_4;
      MinLotSize_4.setString("3552022");
      noLotTypeRules_0_1_0.set(MinLotSize_4);
      LotTypeRules_NoLotTypeRules_4.insert(MinLotSize_4.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_4);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_5;
      FIX::LotType LotType_5('3');
      noLotTypeRules_0_1_1.set(LotType_5);
      LotTypeRules_NoLotTypeRules_5.insert(LotType_5.getString());
      FIX::MinLotSize MinLotSize_5;
      MinLotSize_5.setString("10801194");
      noLotTypeRules_0_1_1.set(MinLotSize_5);
      LotTypeRules_NoLotTypeRules_5.insert(MinLotSize_5.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_5);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_6;
      FIX::LotType LotType_6('2');
      noLotTypeRules_0_1_2.set(LotType_6);
      LotTypeRules_NoLotTypeRules_6.insert(LotType_6.getString());
      FIX::MinLotSize MinLotSize_6;
      MinLotSize_6.setString("5769375");
      noLotTypeRules_0_1_2.set(MinLotSize_6);
      LotTypeRules_NoLotTypeRules_6.insert(MinLotSize_6.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_6);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_2;
    FIX::HighLimitPrice HighLimitPrice_2;
    HighLimitPrice_2.setString("3787494");
    noMarketSegments_0_0.set(HighLimitPrice_2);
    PriceLimits_2.insert(HighLimitPrice_2.getString());
    FIX::LowLimitPrice LowLimitPrice_2;
    LowLimitPrice_2.setString("10512531");
    noMarketSegments_0_0.set(LowLimitPrice_2);
    PriceLimits_2.insert(LowLimitPrice_2.getString());
    FIX::PriceLimitType PriceLimitType_2(1);
    noMarketSegments_0_0.set(PriceLimitType_2);
    PriceLimits_2.insert(PriceLimitType_2.getString());
    FIX::TradingReferencePrice TradingReferencePrice_2;
    TradingReferencePrice_2.setString("4354809");
    noMarketSegments_0_0.set(TradingReferencePrice_2);
    PriceLimits_2.insert(TradingReferencePrice_2.getString());
    all_values.push_back(PriceLimits_2);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_3;
      FIX::EndTickPriceRange EndTickPriceRange_3;
      EndTickPriceRange_3.setString("16817233");
      noTickRules_0_1_0.set(EndTickPriceRange_3);
      TickRules_NoTickRules_3.insert(EndTickPriceRange_3.getString());
      FIX::StartTickPriceRange StartTickPriceRange_3;
      StartTickPriceRange_3.setString("16996190");
      noTickRules_0_1_0.set(StartTickPriceRange_3);
      TickRules_NoTickRules_3.insert(StartTickPriceRange_3.getString());
      FIX::TickIncrement TickIncrement_3;
      TickIncrement_3.setString("4334112");
      noTickRules_0_1_0.set(TickIncrement_3);
      TickRules_NoTickRules_3.insert(TickIncrement_3.getString());
      FIX::TickRuleType TickRuleType_3(3);
      noTickRules_0_1_0.set(TickRuleType_3);
      TickRules_NoTickRules_3.insert(TickRuleType_3.getString());
      all_values.push_back(TickRules_NoTickRules_3);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_4;
      FIX::EndTickPriceRange EndTickPriceRange_4;
      EndTickPriceRange_4.setString("18716180");
      noTickRules_0_1_1.set(EndTickPriceRange_4);
      TickRules_NoTickRules_4.insert(EndTickPriceRange_4.getString());
      FIX::StartTickPriceRange StartTickPriceRange_4;
      StartTickPriceRange_4.setString("20297971");
      noTickRules_0_1_1.set(StartTickPriceRange_4);
      TickRules_NoTickRules_4.insert(StartTickPriceRange_4.getString());
      FIX::TickIncrement TickIncrement_4;
      TickIncrement_4.setString("14598718");
      noTickRules_0_1_1.set(TickIncrement_4);
      TickRules_NoTickRules_4.insert(TickIncrement_4.getString());
      FIX::TickRuleType TickRuleType_4(3);
      noTickRules_0_1_1.set(TickRuleType_4);
      TickRules_NoTickRules_4.insert(TickRuleType_4.getString());
      all_values.push_back(TickRules_NoTickRules_4);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_5;
      FIX::EndTickPriceRange EndTickPriceRange_5;
      EndTickPriceRange_5.setString("12352719");
      noTickRules_0_1_2.set(EndTickPriceRange_5);
      TickRules_NoTickRules_5.insert(EndTickPriceRange_5.getString());
      FIX::StartTickPriceRange StartTickPriceRange_5;
      StartTickPriceRange_5.setString("20894189");
      noTickRules_0_1_2.set(StartTickPriceRange_5);
      TickRules_NoTickRules_5.insert(StartTickPriceRange_5.getString());
      FIX::TickIncrement TickIncrement_5;
      TickIncrement_5.setString("18635830");
      noTickRules_0_1_2.set(TickIncrement_5);
      TickRules_NoTickRules_5.insert(TickIncrement_5.getString());
      FIX::TickRuleType TickRuleType_5(2);
      noTickRules_0_1_2.set(TickRuleType_5);
      TickRules_NoTickRules_5.insert(TickRuleType_5.getString());
      all_values.push_back(TickRules_NoTickRules_5);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_5;
      FIX::NestedInstrAttribType NestedInstrAttribType_5(883413447);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_5);
      NestedInstrumentAttribute_NoNestedInstrAttrib_5.insert(NestedInstrAttribType_5.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_5("STRING_980845929");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_5);
      NestedInstrumentAttribute_NoNestedInstrAttrib_5.insert(NestedInstrAttribValue_5.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_5);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_6;
      FIX::NestedInstrAttribType NestedInstrAttribType_6(1113067971);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_6);
      NestedInstrumentAttribute_NoNestedInstrAttrib_6.insert(NestedInstrAttribType_6.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_6("STRING_968276616");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_6);
      NestedInstrumentAttribute_NoNestedInstrAttrib_6.insert(NestedInstrAttribValue_6.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_6);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_7;
      FIX::NestedInstrAttribType NestedInstrAttribType_7(562490950);
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribType_7);
      NestedInstrumentAttribute_NoNestedInstrAttrib_7.insert(NestedInstrAttribType_7.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_7("STRING_379869328");
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribValue_7);
      NestedInstrumentAttribute_NoNestedInstrAttrib_7.insert(NestedInstrAttribValue_7.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_7);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_4;
      FIX::TradingSessionID TradingSessionID_23("STRING_4");
      noTradingSessionRules_0_1_0.set(TradingSessionID_23);
      TradingSessionRulesGrp_NoTradingSessionRules_4.insert(TradingSessionID_23.getString());
      FIX::TradingSessionSubID TradingSessionSubID_23("STRING_7");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_23);
      TradingSessionRulesGrp_NoTradingSessionRules_4.insert(TradingSessionSubID_23.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_4);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_6;
        FIX::ExecInstValue ExecInstValue_6('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_6);
        ExecInstRules_NoExecInstRules_6.insert(ExecInstValue_6.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_6);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_7;
        FIX::ExecInstValue ExecInstValue_7('1');
        noExecInstRules_0_0_2_1.set(ExecInstValue_7);
        ExecInstRules_NoExecInstRules_7.insert(ExecInstValue_7.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_7);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_12;
        FIX::MDBookType MDBookType_12(2);
        noMDFeedTypes_0_0_2_0.set(MDBookType_12);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MDBookType_12.getString());
        FIX::MDFeedType MDFeedType_12("STRING_428471172");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_12);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MDFeedType_12.getString());
        FIX::MarketDepth MarketDepth_12(866206790);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_12);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MarketDepth_12.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_12);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_8;
        FIX::MatchAlgorithm MatchAlgorithm_8("STRING_407334675");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_8);
        MatchRules_NoMatchRules_8.insert(MatchAlgorithm_8.getString());
        FIX::MatchType MatchType_11("STRING_A2");
        noMatchRules_0_0_2_0.set(MatchType_11);
        MatchRules_NoMatchRules_8.insert(MatchType_11.getString());
        all_values.push_back(MatchRules_NoMatchRules_8);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_9;
        FIX::MatchAlgorithm MatchAlgorithm_9("STRING_2146560507");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_9);
        MatchRules_NoMatchRules_9.insert(MatchAlgorithm_9.getString());
        FIX::MatchType MatchType_12("STRING_A1");
        noMatchRules_0_0_2_1.set(MatchType_12);
        MatchRules_NoMatchRules_9.insert(MatchType_12.getString());
        all_values.push_back(MatchRules_NoMatchRules_9);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_8;
        FIX::OrdType OrdType_9('L');
        noOrdTypeRules_0_0_2_0.set(OrdType_9);
        OrdTypeRules_NoOrdTypeRules_8.insert(OrdType_9.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_8);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_9;
        FIX::OrdType OrdType_10('Q');
        noOrdTypeRules_0_0_2_1.set(OrdType_10);
        OrdTypeRules_NoOrdTypeRules_9.insert(OrdType_10.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_9);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_10;
        FIX::OrdType OrdType_11('5');
        noOrdTypeRules_0_0_2_2.set(OrdType_11);
        OrdTypeRules_NoOrdTypeRules_10.insert(OrdType_11.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_10);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_8;
        FIX::TimeInForce TimeInForce_9('6');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_9);
        TimeInForceRules_NoTimeInForceRules_8.insert(TimeInForce_9.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_8);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_5;
      FIX::TradingSessionID TradingSessionID_24("STRING_2");
      noTradingSessionRules_0_1_1.set(TradingSessionID_24);
      TradingSessionRulesGrp_NoTradingSessionRules_5.insert(TradingSessionID_24.getString());
      FIX::TradingSessionSubID TradingSessionSubID_24("STRING_2");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_24);
      TradingSessionRulesGrp_NoTradingSessionRules_5.insert(TradingSessionSubID_24.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_5);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_8;
        FIX::ExecInstValue ExecInstValue_8('1');
        noExecInstRules_0_1_2_0.set(ExecInstValue_8);
        ExecInstRules_NoExecInstRules_8.insert(ExecInstValue_8.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_8);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_9;
        FIX::ExecInstValue ExecInstValue_9('2');
        noExecInstRules_0_1_2_1.set(ExecInstValue_9);
        ExecInstRules_NoExecInstRules_9.insert(ExecInstValue_9.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_9);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_10;
        FIX::ExecInstValue ExecInstValue_10('1');
        noExecInstRules_0_1_2_2.set(ExecInstValue_10);
        ExecInstRules_NoExecInstRules_10.insert(ExecInstValue_10.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_10);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_13;
        FIX::MDBookType MDBookType_13(1);
        noMDFeedTypes_0_1_2_0.set(MDBookType_13);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MDBookType_13.getString());
        FIX::MDFeedType MDFeedType_13("STRING_2066849755");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_13);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MDFeedType_13.getString());
        FIX::MarketDepth MarketDepth_13(791129328);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_13);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MarketDepth_13.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_13);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_14;
        FIX::MDBookType MDBookType_14(1);
        noMDFeedTypes_0_1_2_1.set(MDBookType_14);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MDBookType_14.getString());
        FIX::MDFeedType MDFeedType_14("STRING_619441388");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_14);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MDFeedType_14.getString());
        FIX::MarketDepth MarketDepth_14(1526200916);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_14);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MarketDepth_14.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_14);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_15;
        FIX::MDBookType MDBookType_15(2);
        noMDFeedTypes_0_1_2_2.set(MDBookType_15);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MDBookType_15.getString());
        FIX::MDFeedType MDFeedType_15("STRING_252152506");
        noMDFeedTypes_0_1_2_2.set(MDFeedType_15);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MDFeedType_15.getString());
        FIX::MarketDepth MarketDepth_15(903418917);
        noMDFeedTypes_0_1_2_2.set(MarketDepth_15);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MarketDepth_15.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_15);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_10;
        FIX::MatchAlgorithm MatchAlgorithm_10("STRING_263613080");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_10);
        MatchRules_NoMatchRules_10.insert(MatchAlgorithm_10.getString());
        FIX::MatchType MatchType_13("STRING_M1");
        noMatchRules_0_1_2_0.set(MatchType_13);
        MatchRules_NoMatchRules_10.insert(MatchType_13.getString());
        all_values.push_back(MatchRules_NoMatchRules_10);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_11;
        FIX::OrdType OrdType_12('1');
        noOrdTypeRules_0_1_2_0.set(OrdType_12);
        OrdTypeRules_NoOrdTypeRules_11.insert(OrdType_12.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_11);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_12;
        FIX::OrdType OrdType_13('D');
        noOrdTypeRules_0_1_2_1.set(OrdType_13);
        OrdTypeRules_NoOrdTypeRules_12.insert(OrdType_13.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_12);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_13;
        FIX::OrdType OrdType_14('6');
        noOrdTypeRules_0_1_2_2.set(OrdType_14);
        OrdTypeRules_NoOrdTypeRules_13.insert(OrdType_14.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_13);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_9;
        FIX::TimeInForce TimeInForce_10('4');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_10);
        TimeInForceRules_NoTimeInForceRules_9.insert(TimeInForce_10.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_9);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_10;
        FIX::TimeInForce TimeInForce_11('3');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_11);
        TimeInForceRules_NoTimeInForceRules_10.insert(TimeInForce_11.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_10);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_6;
      FIX::TradingSessionID TradingSessionID_25("STRING_2");
      noTradingSessionRules_0_1_2.set(TradingSessionID_25);
      TradingSessionRulesGrp_NoTradingSessionRules_6.insert(TradingSessionID_25.getString());
      FIX::TradingSessionSubID TradingSessionSubID_25("STRING_5");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_25);
      TradingSessionRulesGrp_NoTradingSessionRules_6.insert(TradingSessionSubID_25.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_6);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_11;
        FIX::ExecInstValue ExecInstValue_11('1');
        noExecInstRules_0_2_2_0.set(ExecInstValue_11);
        ExecInstRules_NoExecInstRules_11.insert(ExecInstValue_11.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_11);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_12;
        FIX::ExecInstValue ExecInstValue_12('9');
        noExecInstRules_0_2_2_1.set(ExecInstValue_12);
        ExecInstRules_NoExecInstRules_12.insert(ExecInstValue_12.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_12);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_16;
        FIX::MDBookType MDBookType_16(2);
        noMDFeedTypes_0_2_2_0.set(MDBookType_16);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MDBookType_16.getString());
        FIX::MDFeedType MDFeedType_16("STRING_1489906914");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_16);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MDFeedType_16.getString());
        FIX::MarketDepth MarketDepth_16(160650218);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_16);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MarketDepth_16.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_16);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_11;
        FIX::MatchAlgorithm MatchAlgorithm_11("STRING_846782070");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_11);
        MatchRules_NoMatchRules_11.insert(MatchAlgorithm_11.getString());
        FIX::MatchType MatchType_14("STRING_S5");
        noMatchRules_0_2_2_0.set(MatchType_14);
        MatchRules_NoMatchRules_11.insert(MatchType_14.getString());
        all_values.push_back(MatchRules_NoMatchRules_11);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_12;
        FIX::MatchAlgorithm MatchAlgorithm_12("STRING_2054759995");
        noMatchRules_0_2_2_1.set(MatchAlgorithm_12);
        MatchRules_NoMatchRules_12.insert(MatchAlgorithm_12.getString());
        FIX::MatchType MatchType_15("STRING_A4");
        noMatchRules_0_2_2_1.set(MatchType_15);
        MatchRules_NoMatchRules_12.insert(MatchType_15.getString());
        all_values.push_back(MatchRules_NoMatchRules_12);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_14;
        FIX::OrdType OrdType_15('C');
        noOrdTypeRules_0_2_2_0.set(OrdType_15);
        OrdTypeRules_NoOrdTypeRules_14.insert(OrdType_15.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_14);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_15;
        FIX::OrdType OrdType_16('F');
        noOrdTypeRules_0_2_2_1.set(OrdType_16);
        OrdTypeRules_NoOrdTypeRules_15.insert(OrdType_16.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_15);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_11;
        FIX::TimeInForce TimeInForce_12('5');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_12);
        TimeInForceRules_NoTimeInForceRules_11.insert(TimeInForce_12.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_11);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_12;
        FIX::TimeInForce TimeInForce_13('2');
        noTimeInForceRules_0_2_2_1.set(TimeInForce_13);
        TimeInForceRules_NoTimeInForceRules_12.insert(TimeInForce_13.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_12);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_3;
      FIX::EndStrikePxRange EndStrikePxRange_3;
      EndStrikePxRange_3.setString("539036");
      noStrikeRules_0_1_0.set(EndStrikePxRange_3);
      StrikeRules_NoStrikeRules_3.insert(EndStrikePxRange_3.getString());
      FIX::StartStrikePxRange StartStrikePxRange_3;
      StartStrikePxRange_3.setString("19013551");
      noStrikeRules_0_1_0.set(StartStrikePxRange_3);
      StrikeRules_NoStrikeRules_3.insert(StartStrikePxRange_3.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_3(829582173);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeExerciseStyle_3.getString());
      FIX::StrikeIncrement StrikeIncrement_3;
      StrikeIncrement_3.setString("17296834");
      noStrikeRules_0_1_0.set(StrikeIncrement_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeIncrement_3.getString());
      FIX::StrikeRuleID StrikeRuleID_3("STRING_464426064");
      noStrikeRules_0_1_0.set(StrikeRuleID_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeRuleID_3.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_3);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_5;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_5("MONTHYEAR_1658426039");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_5);
        MaturityRules_NoMaturityRules_5.insert(EndMaturityMonthYear_5.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_5(1);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearFormat_5.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_5(853810324);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearIncrement_5.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_5(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearIncrementUnits_5.getString());
        FIX::MaturityRuleID MaturityRuleID_5("STRING_1606900155");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityRuleID_5.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_5("MONTHYEAR_2009356734");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_5);
        MaturityRules_NoMaturityRules_5.insert(StartMaturityMonthYear_5.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_5);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_6;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_6("MONTHYEAR_1047819730");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_6);
        MaturityRules_NoMaturityRules_6.insert(EndMaturityMonthYear_6.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_6(2);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearFormat_6.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_6(828267124);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearIncrement_6.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_6(3);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearIncrementUnits_6.getString());
        FIX::MaturityRuleID MaturityRuleID_6("STRING_381958864");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityRuleID_6.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_6("MONTHYEAR_170690390");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_6);
        MaturityRules_NoMaturityRules_6.insert(StartMaturityMonthYear_6.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_6);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_4;
      FIX::EndStrikePxRange EndStrikePxRange_4;
      EndStrikePxRange_4.setString("20709281");
      noStrikeRules_0_1_1.set(EndStrikePxRange_4);
      StrikeRules_NoStrikeRules_4.insert(EndStrikePxRange_4.getString());
      FIX::StartStrikePxRange StartStrikePxRange_4;
      StartStrikePxRange_4.setString("14711714");
      noStrikeRules_0_1_1.set(StartStrikePxRange_4);
      StrikeRules_NoStrikeRules_4.insert(StartStrikePxRange_4.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_4(1017472461);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeExerciseStyle_4.getString());
      FIX::StrikeIncrement StrikeIncrement_4;
      StrikeIncrement_4.setString("4953547");
      noStrikeRules_0_1_1.set(StrikeIncrement_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeIncrement_4.getString());
      FIX::StrikeRuleID StrikeRuleID_4("STRING_1378447750");
      noStrikeRules_0_1_1.set(StrikeRuleID_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeRuleID_4.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_4);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_7;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_7("MONTHYEAR_1858394253");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_7);
        MaturityRules_NoMaturityRules_7.insert(EndMaturityMonthYear_7.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_7(1);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearFormat_7.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_7(1021726556);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearIncrement_7.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_7(3);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearIncrementUnits_7.getString());
        FIX::MaturityRuleID MaturityRuleID_7("STRING_726373689");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityRuleID_7.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_7("MONTHYEAR_511984980");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_7);
        MaturityRules_NoMaturityRules_7.insert(StartMaturityMonthYear_7.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_7);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_8;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_8("MONTHYEAR_2097843150");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_8);
        MaturityRules_NoMaturityRules_8.insert(EndMaturityMonthYear_8.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_8(2);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearFormat_8.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_8(265856484);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearIncrement_8.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_8(3);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearIncrementUnits_8.getString());
        FIX::MaturityRuleID MaturityRuleID_8("STRING_362477083");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityRuleID_8.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_8("MONTHYEAR_730282548");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_8);
        MaturityRules_NoMaturityRules_8.insert(StartMaturityMonthYear_8.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_8);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_9;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_9("MONTHYEAR_1201264965");
        noMaturityRules_0_1_2_2.set(EndMaturityMonthYear_9);
        MaturityRules_NoMaturityRules_9.insert(EndMaturityMonthYear_9.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_9(0);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearFormat_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearFormat_9.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_9(1904340032);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrement_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearIncrement_9.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_9(1);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrementUnits_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearIncrementUnits_9.getString());
        FIX::MaturityRuleID MaturityRuleID_9("STRING_817933669");
        noMaturityRules_0_1_2_2.set(MaturityRuleID_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityRuleID_9.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_9("MONTHYEAR_1363756539");
        noMaturityRules_0_1_2_2.set(StartMaturityMonthYear_9);
        MaturityRules_NoMaturityRules_9.insert(StartMaturityMonthYear_9.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_9);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_3;
    FIX::MarketID MarketID_4("EXCHANGE_1916948375");
    noMarketSegments_0_1.set(MarketID_4);
    MarketSegmentGrp_NoMarketSegments_3.insert(MarketID_4.getString());
    FIX::MarketSegmentID MarketSegmentID_4("STRING_1865753399");
    noMarketSegments_0_1.set(MarketSegmentID_4);
    MarketSegmentGrp_NoMarketSegments_3.insert(MarketSegmentID_4.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_3);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_3;
    FIX::ExpirationCycle ExpirationCycle_3(0);
    noMarketSegments_0_1.set(ExpirationCycle_3);
    BaseTradingRules_3.insert(ExpirationCycle_3.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_3(3);
    noMarketSegments_0_1.set(ImpliedMarketIndicator_3);
    BaseTradingRules_3.insert(ImpliedMarketIndicator_3.getString());
    FIX::MaxPriceVariation MaxPriceVariation_3;
    MaxPriceVariation_3.setString("16285476");
    noMarketSegments_0_1.set(MaxPriceVariation_3);
    BaseTradingRules_3.insert(MaxPriceVariation_3.getString());
    FIX::MaxTradeVol MaxTradeVol_3;
    MaxTradeVol_3.setString("10357325");
    noMarketSegments_0_1.set(MaxTradeVol_3);
    BaseTradingRules_3.insert(MaxTradeVol_3.getString());
    FIX::MinTradeVol MinTradeVol_3;
    MinTradeVol_3.setString("7684222");
    noMarketSegments_0_1.set(MinTradeVol_3);
    BaseTradingRules_3.insert(MinTradeVol_3.getString());
    FIX::MultilegModel MultilegModel_3(2);
    noMarketSegments_0_1.set(MultilegModel_3);
    BaseTradingRules_3.insert(MultilegModel_3.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_3(2);
    noMarketSegments_0_1.set(MultilegPriceMethod_3);
    BaseTradingRules_3.insert(MultilegPriceMethod_3.getString());
    FIX::PriceType PriceType_16(8);
    noMarketSegments_0_1.set(PriceType_16);
    BaseTradingRules_3.insert(PriceType_16.getString());
    FIX::RoundLot RoundLot_3;
    RoundLot_3.setString("20473468");
    noMarketSegments_0_1.set(RoundLot_3);
    BaseTradingRules_3.insert(RoundLot_3.getString());
    FIX::TradingCurrency TradingCurrency_3("EUR");
    noMarketSegments_0_1.set(TradingCurrency_3);
    BaseTradingRules_3.insert(TradingCurrency_3.getString());
    all_values.push_back(BaseTradingRules_3);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_7;
      FIX::LotType LotType_7('2');
      noLotTypeRules_1_1_0.set(LotType_7);
      LotTypeRules_NoLotTypeRules_7.insert(LotType_7.getString());
      FIX::MinLotSize MinLotSize_7;
      MinLotSize_7.setString("2962746");
      noLotTypeRules_1_1_0.set(MinLotSize_7);
      LotTypeRules_NoLotTypeRules_7.insert(MinLotSize_7.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_7);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_8;
      FIX::LotType LotType_8('3');
      noLotTypeRules_1_1_1.set(LotType_8);
      LotTypeRules_NoLotTypeRules_8.insert(LotType_8.getString());
      FIX::MinLotSize MinLotSize_8;
      MinLotSize_8.setString("17988011");
      noLotTypeRules_1_1_1.set(MinLotSize_8);
      LotTypeRules_NoLotTypeRules_8.insert(MinLotSize_8.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_8);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_9;
      FIX::LotType LotType_9('3');
      noLotTypeRules_1_1_2.set(LotType_9);
      LotTypeRules_NoLotTypeRules_9.insert(LotType_9.getString());
      FIX::MinLotSize MinLotSize_9;
      MinLotSize_9.setString("138007");
      noLotTypeRules_1_1_2.set(MinLotSize_9);
      LotTypeRules_NoLotTypeRules_9.insert(MinLotSize_9.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_9);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_3;
    FIX::HighLimitPrice HighLimitPrice_3;
    HighLimitPrice_3.setString("4315948");
    noMarketSegments_0_1.set(HighLimitPrice_3);
    PriceLimits_3.insert(HighLimitPrice_3.getString());
    FIX::LowLimitPrice LowLimitPrice_3;
    LowLimitPrice_3.setString("10741160");
    noMarketSegments_0_1.set(LowLimitPrice_3);
    PriceLimits_3.insert(LowLimitPrice_3.getString());
    FIX::PriceLimitType PriceLimitType_3(2);
    noMarketSegments_0_1.set(PriceLimitType_3);
    PriceLimits_3.insert(PriceLimitType_3.getString());
    FIX::TradingReferencePrice TradingReferencePrice_3;
    TradingReferencePrice_3.setString("7940719");
    noMarketSegments_0_1.set(TradingReferencePrice_3);
    PriceLimits_3.insert(TradingReferencePrice_3.getString());
    all_values.push_back(PriceLimits_3);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_6;
      FIX::EndTickPriceRange EndTickPriceRange_6;
      EndTickPriceRange_6.setString("19950073");
      noTickRules_1_1_0.set(EndTickPriceRange_6);
      TickRules_NoTickRules_6.insert(EndTickPriceRange_6.getString());
      FIX::StartTickPriceRange StartTickPriceRange_6;
      StartTickPriceRange_6.setString("6674913");
      noTickRules_1_1_0.set(StartTickPriceRange_6);
      TickRules_NoTickRules_6.insert(StartTickPriceRange_6.getString());
      FIX::TickIncrement TickIncrement_6;
      TickIncrement_6.setString("15612549");
      noTickRules_1_1_0.set(TickIncrement_6);
      TickRules_NoTickRules_6.insert(TickIncrement_6.getString());
      FIX::TickRuleType TickRuleType_6(1);
      noTickRules_1_1_0.set(TickRuleType_6);
      TickRules_NoTickRules_6.insert(TickRuleType_6.getString());
      all_values.push_back(TickRules_NoTickRules_6);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_8;
      FIX::NestedInstrAttribType NestedInstrAttribType_8(777527890);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_8);
      NestedInstrumentAttribute_NoNestedInstrAttrib_8.insert(NestedInstrAttribType_8.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_8("STRING_1672063753");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_8);
      NestedInstrumentAttribute_NoNestedInstrAttrib_8.insert(NestedInstrAttribValue_8.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_8);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_9;
      FIX::NestedInstrAttribType NestedInstrAttribType_9(1203694810);
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribType_9);
      NestedInstrumentAttribute_NoNestedInstrAttrib_9.insert(NestedInstrAttribType_9.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_9("STRING_1431301595");
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribValue_9);
      NestedInstrumentAttribute_NoNestedInstrAttrib_9.insert(NestedInstrAttribValue_9.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_9);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_7;
      FIX::TradingSessionID TradingSessionID_26("STRING_1");
      noTradingSessionRules_1_1_0.set(TradingSessionID_26);
      TradingSessionRulesGrp_NoTradingSessionRules_7.insert(TradingSessionID_26.getString());
      FIX::TradingSessionSubID TradingSessionSubID_26("STRING_6");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_26);
      TradingSessionRulesGrp_NoTradingSessionRules_7.insert(TradingSessionSubID_26.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_7);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_13;
        FIX::ExecInstValue ExecInstValue_13('8');
        noExecInstRules_1_0_2_0.set(ExecInstValue_13);
        ExecInstRules_NoExecInstRules_13.insert(ExecInstValue_13.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_13);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_14;
        FIX::ExecInstValue ExecInstValue_14('6');
        noExecInstRules_1_0_2_1.set(ExecInstValue_14);
        ExecInstRules_NoExecInstRules_14.insert(ExecInstValue_14.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_14);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_17;
        FIX::MDBookType MDBookType_17(2);
        noMDFeedTypes_1_0_2_0.set(MDBookType_17);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MDBookType_17.getString());
        FIX::MDFeedType MDFeedType_17("STRING_269355267");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_17);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MDFeedType_17.getString());
        FIX::MarketDepth MarketDepth_17(1951176947);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_17);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MarketDepth_17.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_17);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_13;
        FIX::MatchAlgorithm MatchAlgorithm_13("STRING_1341782736");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_13);
        MatchRules_NoMatchRules_13.insert(MatchAlgorithm_13.getString());
        FIX::MatchType MatchType_16("STRING_8");
        noMatchRules_1_0_2_0.set(MatchType_16);
        MatchRules_NoMatchRules_13.insert(MatchType_16.getString());
        all_values.push_back(MatchRules_NoMatchRules_13);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_14;
        FIX::MatchAlgorithm MatchAlgorithm_14("STRING_1810829274");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_14);
        MatchRules_NoMatchRules_14.insert(MatchAlgorithm_14.getString());
        FIX::MatchType MatchType_17("STRING_M3");
        noMatchRules_1_0_2_1.set(MatchType_17);
        MatchRules_NoMatchRules_14.insert(MatchType_17.getString());
        all_values.push_back(MatchRules_NoMatchRules_14);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_16;
        FIX::OrdType OrdType_17('J');
        noOrdTypeRules_1_0_2_0.set(OrdType_17);
        OrdTypeRules_NoOrdTypeRules_16.insert(OrdType_17.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_16);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_17;
        FIX::OrdType OrdType_18('P');
        noOrdTypeRules_1_0_2_1.set(OrdType_18);
        OrdTypeRules_NoOrdTypeRules_17.insert(OrdType_18.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_17);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_13;
        FIX::TimeInForce TimeInForce_14('0');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_14);
        TimeInForceRules_NoTimeInForceRules_13.insert(TimeInForce_14.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_13);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_14;
        FIX::TimeInForce TimeInForce_15('6');
        noTimeInForceRules_1_0_2_1.set(TimeInForce_15);
        TimeInForceRules_NoTimeInForceRules_14.insert(TimeInForce_15.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_14);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_5;
      FIX::EndStrikePxRange EndStrikePxRange_5;
      EndStrikePxRange_5.setString("3184125");
      noStrikeRules_1_1_0.set(EndStrikePxRange_5);
      StrikeRules_NoStrikeRules_5.insert(EndStrikePxRange_5.getString());
      FIX::StartStrikePxRange StartStrikePxRange_5;
      StartStrikePxRange_5.setString("7387747");
      noStrikeRules_1_1_0.set(StartStrikePxRange_5);
      StrikeRules_NoStrikeRules_5.insert(StartStrikePxRange_5.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_5(1053029869);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeExerciseStyle_5.getString());
      FIX::StrikeIncrement StrikeIncrement_5;
      StrikeIncrement_5.setString("735279");
      noStrikeRules_1_1_0.set(StrikeIncrement_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeIncrement_5.getString());
      FIX::StrikeRuleID StrikeRuleID_5("STRING_76716147");
      noStrikeRules_1_1_0.set(StrikeRuleID_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeRuleID_5.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_5);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_10;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_10("MONTHYEAR_1745591658");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_10);
        MaturityRules_NoMaturityRules_10.insert(EndMaturityMonthYear_10.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_10(1);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearFormat_10.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_10(1114375707);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearIncrement_10.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_10(3);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearIncrementUnits_10.getString());
        FIX::MaturityRuleID MaturityRuleID_10("STRING_1965169789");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityRuleID_10.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_10("MONTHYEAR_1433926223");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_10);
        MaturityRules_NoMaturityRules_10.insert(StartMaturityMonthYear_10.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_10);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_2;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_4;
    FIX::MarketID MarketID_5("EXCHANGE_611154165");
    noMarketSegments_0_2.set(MarketID_5);
    MarketSegmentGrp_NoMarketSegments_4.insert(MarketID_5.getString());
    FIX::MarketSegmentID MarketSegmentID_5("STRING_2054437132");
    noMarketSegments_0_2.set(MarketSegmentID_5);
    MarketSegmentGrp_NoMarketSegments_4.insert(MarketSegmentID_5.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_4);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_4;
    FIX::ExpirationCycle ExpirationCycle_4(0);
    noMarketSegments_0_2.set(ExpirationCycle_4);
    BaseTradingRules_4.insert(ExpirationCycle_4.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_4(3);
    noMarketSegments_0_2.set(ImpliedMarketIndicator_4);
    BaseTradingRules_4.insert(ImpliedMarketIndicator_4.getString());
    FIX::MaxPriceVariation MaxPriceVariation_4;
    MaxPriceVariation_4.setString("20435676");
    noMarketSegments_0_2.set(MaxPriceVariation_4);
    BaseTradingRules_4.insert(MaxPriceVariation_4.getString());
    FIX::MaxTradeVol MaxTradeVol_4;
    MaxTradeVol_4.setString("2347686");
    noMarketSegments_0_2.set(MaxTradeVol_4);
    BaseTradingRules_4.insert(MaxTradeVol_4.getString());
    FIX::MinTradeVol MinTradeVol_4;
    MinTradeVol_4.setString("9439927");
    noMarketSegments_0_2.set(MinTradeVol_4);
    BaseTradingRules_4.insert(MinTradeVol_4.getString());
    FIX::MultilegModel MultilegModel_4(2);
    noMarketSegments_0_2.set(MultilegModel_4);
    BaseTradingRules_4.insert(MultilegModel_4.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_4(5);
    noMarketSegments_0_2.set(MultilegPriceMethod_4);
    BaseTradingRules_4.insert(MultilegPriceMethod_4.getString());
    FIX::PriceType PriceType_17(4);
    noMarketSegments_0_2.set(PriceType_17);
    BaseTradingRules_4.insert(PriceType_17.getString());
    FIX::RoundLot RoundLot_4;
    RoundLot_4.setString("13068177");
    noMarketSegments_0_2.set(RoundLot_4);
    BaseTradingRules_4.insert(RoundLot_4.getString());
    FIX::TradingCurrency TradingCurrency_4("JPY");
    noMarketSegments_0_2.set(TradingCurrency_4);
    BaseTradingRules_4.insert(TradingCurrency_4.getString());
    all_values.push_back(BaseTradingRules_4);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_10;
      FIX::LotType LotType_10('1');
      noLotTypeRules_2_1_0.set(LotType_10);
      LotTypeRules_NoLotTypeRules_10.insert(LotType_10.getString());
      FIX::MinLotSize MinLotSize_10;
      MinLotSize_10.setString("17870480");
      noLotTypeRules_2_1_0.set(MinLotSize_10);
      LotTypeRules_NoLotTypeRules_10.insert(MinLotSize_10.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_10);

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_11;
      FIX::LotType LotType_11('1');
      noLotTypeRules_2_1_1.set(LotType_11);
      LotTypeRules_NoLotTypeRules_11.insert(LotType_11.getString());
      FIX::MinLotSize MinLotSize_11;
      MinLotSize_11.setString("19181464");
      noLotTypeRules_2_1_1.set(MinLotSize_11);
      LotTypeRules_NoLotTypeRules_11.insert(MinLotSize_11.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_11);

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_4;
    FIX::HighLimitPrice HighLimitPrice_4;
    HighLimitPrice_4.setString("12788228");
    noMarketSegments_0_2.set(HighLimitPrice_4);
    PriceLimits_4.insert(HighLimitPrice_4.getString());
    FIX::LowLimitPrice LowLimitPrice_4;
    LowLimitPrice_4.setString("17732653");
    noMarketSegments_0_2.set(LowLimitPrice_4);
    PriceLimits_4.insert(LowLimitPrice_4.getString());
    FIX::PriceLimitType PriceLimitType_4(0);
    noMarketSegments_0_2.set(PriceLimitType_4);
    PriceLimits_4.insert(PriceLimitType_4.getString());
    FIX::TradingReferencePrice TradingReferencePrice_4;
    TradingReferencePrice_4.setString("1843690");
    noMarketSegments_0_2.set(TradingReferencePrice_4);
    PriceLimits_4.insert(TradingReferencePrice_4.getString());
    all_values.push_back(PriceLimits_4);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_7;
      FIX::EndTickPriceRange EndTickPriceRange_7;
      EndTickPriceRange_7.setString("5861536");
      noTickRules_2_1_0.set(EndTickPriceRange_7);
      TickRules_NoTickRules_7.insert(EndTickPriceRange_7.getString());
      FIX::StartTickPriceRange StartTickPriceRange_7;
      StartTickPriceRange_7.setString("20149268");
      noTickRules_2_1_0.set(StartTickPriceRange_7);
      TickRules_NoTickRules_7.insert(StartTickPriceRange_7.getString());
      FIX::TickIncrement TickIncrement_7;
      TickIncrement_7.setString("14449013");
      noTickRules_2_1_0.set(TickIncrement_7);
      TickRules_NoTickRules_7.insert(TickIncrement_7.getString());
      FIX::TickRuleType TickRuleType_7(4);
      noTickRules_2_1_0.set(TickRuleType_7);
      TickRules_NoTickRules_7.insert(TickRuleType_7.getString());
      all_values.push_back(TickRules_NoTickRules_7);

      noMarketSegments_0_2.addGroup(noTickRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_8;
      FIX::EndTickPriceRange EndTickPriceRange_8;
      EndTickPriceRange_8.setString("9818189");
      noTickRules_2_1_1.set(EndTickPriceRange_8);
      TickRules_NoTickRules_8.insert(EndTickPriceRange_8.getString());
      FIX::StartTickPriceRange StartTickPriceRange_8;
      StartTickPriceRange_8.setString("11653212");
      noTickRules_2_1_1.set(StartTickPriceRange_8);
      TickRules_NoTickRules_8.insert(StartTickPriceRange_8.getString());
      FIX::TickIncrement TickIncrement_8;
      TickIncrement_8.setString("16842507");
      noTickRules_2_1_1.set(TickIncrement_8);
      TickRules_NoTickRules_8.insert(TickIncrement_8.getString());
      FIX::TickRuleType TickRuleType_8(0);
      noTickRules_2_1_1.set(TickRuleType_8);
      TickRules_NoTickRules_8.insert(TickRuleType_8.getString());
      all_values.push_back(TickRules_NoTickRules_8);

      noMarketSegments_0_2.addGroup(noTickRules_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_9;
      FIX::EndTickPriceRange EndTickPriceRange_9;
      EndTickPriceRange_9.setString("17764754");
      noTickRules_2_1_2.set(EndTickPriceRange_9);
      TickRules_NoTickRules_9.insert(EndTickPriceRange_9.getString());
      FIX::StartTickPriceRange StartTickPriceRange_9;
      StartTickPriceRange_9.setString("15912042");
      noTickRules_2_1_2.set(StartTickPriceRange_9);
      TickRules_NoTickRules_9.insert(StartTickPriceRange_9.getString());
      FIX::TickIncrement TickIncrement_9;
      TickIncrement_9.setString("2336749");
      noTickRules_2_1_2.set(TickIncrement_9);
      TickRules_NoTickRules_9.insert(TickIncrement_9.getString());
      FIX::TickRuleType TickRuleType_9(1);
      noTickRules_2_1_2.set(TickRuleType_9);
      TickRules_NoTickRules_9.insert(TickRuleType_9.getString());
      all_values.push_back(TickRules_NoTickRules_9);

      noMarketSegments_0_2.addGroup(noTickRules_2_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_10;
      FIX::NestedInstrAttribType NestedInstrAttribType_10(468443589);
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribType_10);
      NestedInstrumentAttribute_NoNestedInstrAttrib_10.insert(NestedInstrAttribType_10.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_10("STRING_1713283929");
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribValue_10);
      NestedInstrumentAttribute_NoNestedInstrAttrib_10.insert(NestedInstrAttribValue_10.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_10);

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_8;
      FIX::TradingSessionID TradingSessionID_27("STRING_3");
      noTradingSessionRules_2_1_0.set(TradingSessionID_27);
      TradingSessionRulesGrp_NoTradingSessionRules_8.insert(TradingSessionID_27.getString());
      FIX::TradingSessionSubID TradingSessionSubID_27("STRING_1");
      noTradingSessionRules_2_1_0.set(TradingSessionSubID_27);
      TradingSessionRulesGrp_NoTradingSessionRules_8.insert(TradingSessionSubID_27.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_8);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_15;
        FIX::ExecInstValue ExecInstValue_15('3');
        noExecInstRules_2_0_2_0.set(ExecInstValue_15);
        ExecInstRules_NoExecInstRules_15.insert(ExecInstValue_15.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_15);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_16;
        FIX::ExecInstValue ExecInstValue_16('4');
        noExecInstRules_2_0_2_1.set(ExecInstValue_16);
        ExecInstRules_NoExecInstRules_16.insert(ExecInstValue_16.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_16);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_18;
        FIX::MDBookType MDBookType_18(2);
        noMDFeedTypes_2_0_2_0.set(MDBookType_18);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MDBookType_18.getString());
        FIX::MDFeedType MDFeedType_18("STRING_54029711");
        noMDFeedTypes_2_0_2_0.set(MDFeedType_18);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MDFeedType_18.getString());
        FIX::MarketDepth MarketDepth_18(433944078);
        noMDFeedTypes_2_0_2_0.set(MarketDepth_18);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MarketDepth_18.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_18);

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_15;
        FIX::MatchAlgorithm MatchAlgorithm_15("STRING_1332852586");
        noMatchRules_2_0_2_0.set(MatchAlgorithm_15);
        MatchRules_NoMatchRules_15.insert(MatchAlgorithm_15.getString());
        FIX::MatchType MatchType_18("STRING_MT");
        noMatchRules_2_0_2_0.set(MatchType_18);
        MatchRules_NoMatchRules_15.insert(MatchType_18.getString());
        all_values.push_back(MatchRules_NoMatchRules_15);

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_16;
        FIX::MatchAlgorithm MatchAlgorithm_16("STRING_299159152");
        noMatchRules_2_0_2_1.set(MatchAlgorithm_16);
        MatchRules_NoMatchRules_16.insert(MatchAlgorithm_16.getString());
        FIX::MatchType MatchType_19("STRING_4");
        noMatchRules_2_0_2_1.set(MatchType_19);
        MatchRules_NoMatchRules_16.insert(MatchType_19.getString());
        all_values.push_back(MatchRules_NoMatchRules_16);

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_17;
        FIX::MatchAlgorithm MatchAlgorithm_17("STRING_1906519118");
        noMatchRules_2_0_2_2.set(MatchAlgorithm_17);
        MatchRules_NoMatchRules_17.insert(MatchAlgorithm_17.getString());
        FIX::MatchType MatchType_20("STRING_M6");
        noMatchRules_2_0_2_2.set(MatchType_20);
        MatchRules_NoMatchRules_17.insert(MatchType_20.getString());
        all_values.push_back(MatchRules_NoMatchRules_17);

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_18;
        FIX::OrdType OrdType_19('B');
        noOrdTypeRules_2_0_2_0.set(OrdType_19);
        OrdTypeRules_NoOrdTypeRules_18.insert(OrdType_19.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_18);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_19;
        FIX::OrdType OrdType_20('H');
        noOrdTypeRules_2_0_2_1.set(OrdType_20);
        OrdTypeRules_NoOrdTypeRules_19.insert(OrdType_20.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_19);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_20;
        FIX::OrdType OrdType_21('G');
        noOrdTypeRules_2_0_2_2.set(OrdType_21);
        OrdTypeRules_NoOrdTypeRules_20.insert(OrdType_21.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_20);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_15;
        FIX::TimeInForce TimeInForce_16('3');
        noTimeInForceRules_2_0_2_0.set(TimeInForce_16);
        TimeInForceRules_NoTimeInForceRules_15.insert(TimeInForce_16.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_15);

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_16;
        FIX::TimeInForce TimeInForce_17('9');
        noTimeInForceRules_2_0_2_1.set(TimeInForce_17);
        TimeInForceRules_NoTimeInForceRules_16.insert(TimeInForce_17.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_16);

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_1);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_6;
      FIX::EndStrikePxRange EndStrikePxRange_6;
      EndStrikePxRange_6.setString("17323652");
      noStrikeRules_2_1_0.set(EndStrikePxRange_6);
      StrikeRules_NoStrikeRules_6.insert(EndStrikePxRange_6.getString());
      FIX::StartStrikePxRange StartStrikePxRange_6;
      StartStrikePxRange_6.setString("7209365");
      noStrikeRules_2_1_0.set(StartStrikePxRange_6);
      StrikeRules_NoStrikeRules_6.insert(StartStrikePxRange_6.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_6(620057407);
      noStrikeRules_2_1_0.set(StrikeExerciseStyle_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeExerciseStyle_6.getString());
      FIX::StrikeIncrement StrikeIncrement_6;
      StrikeIncrement_6.setString("10721698");
      noStrikeRules_2_1_0.set(StrikeIncrement_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeIncrement_6.getString());
      FIX::StrikeRuleID StrikeRuleID_6("STRING_1189380144");
      noStrikeRules_2_1_0.set(StrikeRuleID_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeRuleID_6.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_6);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_11;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_11("MONTHYEAR_2055446593");
        noMaturityRules_2_0_2_0.set(EndMaturityMonthYear_11);
        MaturityRules_NoMaturityRules_11.insert(EndMaturityMonthYear_11.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_11(1);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearFormat_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearFormat_11.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_11(795618588);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrement_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearIncrement_11.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_11(1);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrementUnits_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearIncrementUnits_11.getString());
        FIX::MaturityRuleID MaturityRuleID_11("STRING_1406570883");
        noMaturityRules_2_0_2_0.set(MaturityRuleID_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityRuleID_11.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_11("MONTHYEAR_1210083943");
        noMaturityRules_2_0_2_0.set(StartMaturityMonthYear_11);
        MaturityRules_NoMaturityRules_11.insert(StartMaturityMonthYear_11.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_11);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_12;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_12("MONTHYEAR_1177148595");
        noMaturityRules_2_0_2_1.set(EndMaturityMonthYear_12);
        MaturityRules_NoMaturityRules_12.insert(EndMaturityMonthYear_12.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_12(1);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearFormat_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearFormat_12.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_12(1264113654);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrement_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearIncrement_12.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_12(1);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrementUnits_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearIncrementUnits_12.getString());
        FIX::MaturityRuleID MaturityRuleID_12("STRING_1215351332");
        noMaturityRules_2_0_2_1.set(MaturityRuleID_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityRuleID_12.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_12("MONTHYEAR_449482593");
        noMaturityRules_2_0_2_1.set(StartMaturityMonthYear_12);
        MaturityRules_NoMaturityRules_12.insert(StartMaturityMonthYear_12.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_12);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_13;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_13("MONTHYEAR_1670818495");
        noMaturityRules_2_0_2_2.set(EndMaturityMonthYear_13);
        MaturityRules_NoMaturityRules_13.insert(EndMaturityMonthYear_13.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_13(0);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearFormat_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearFormat_13.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_13(1966704276);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearIncrement_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearIncrement_13.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_13(1);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearIncrementUnits_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearIncrementUnits_13.getString());
        FIX::MaturityRuleID MaturityRuleID_13("STRING_252339665");
        noMaturityRules_2_0_2_2.set(MaturityRuleID_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityRuleID_13.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_13("MONTHYEAR_1203885519");
        noMaturityRules_2_0_2_2.set(StartMaturityMonthYear_13);
        MaturityRules_NoMaturityRules_13.insert(StartMaturityMonthYear_13.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_13);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_2);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_7;
      FIX::EndStrikePxRange EndStrikePxRange_7;
      EndStrikePxRange_7.setString("4863070");
      noStrikeRules_2_1_1.set(EndStrikePxRange_7);
      StrikeRules_NoStrikeRules_7.insert(EndStrikePxRange_7.getString());
      FIX::StartStrikePxRange StartStrikePxRange_7;
      StartStrikePxRange_7.setString("8567334");
      noStrikeRules_2_1_1.set(StartStrikePxRange_7);
      StrikeRules_NoStrikeRules_7.insert(StartStrikePxRange_7.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_7(1422885678);
      noStrikeRules_2_1_1.set(StrikeExerciseStyle_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeExerciseStyle_7.getString());
      FIX::StrikeIncrement StrikeIncrement_7;
      StrikeIncrement_7.setString("7080815");
      noStrikeRules_2_1_1.set(StrikeIncrement_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeIncrement_7.getString());
      FIX::StrikeRuleID StrikeRuleID_7("STRING_997894425");
      noStrikeRules_2_1_1.set(StrikeRuleID_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeRuleID_7.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_7);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_14;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_14("MONTHYEAR_558847696");
        noMaturityRules_2_1_2_0.set(EndMaturityMonthYear_14);
        MaturityRules_NoMaturityRules_14.insert(EndMaturityMonthYear_14.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_14(0);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearFormat_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearFormat_14.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_14(483600235);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrement_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearIncrement_14.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_14(0);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrementUnits_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearIncrementUnits_14.getString());
        FIX::MaturityRuleID MaturityRuleID_14("STRING_1654945839");
        noMaturityRules_2_1_2_0.set(MaturityRuleID_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityRuleID_14.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_14("MONTHYEAR_1672980380");
        noMaturityRules_2_1_2_0.set(StartMaturityMonthYear_14);
        MaturityRules_NoMaturityRules_14.insert(StartMaturityMonthYear_14.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_14);

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_0);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_1);
    }
    msg.addGroup(noMarketSegments_0_2);
  }
  // RelSymDerivSecUpdGrp
  // Group RelSymDerivSecUpdGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_0;
    FIX::CorporateAction CorporateAction_2("MULTIPLECHARVALUE_T");
    noRelatedSym_0_0.set(CorporateAction_2);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(CorporateAction_2.getString());
    FIX::Currency Currency_17("EUR");
    noRelatedSym_0_0.set(Currency_17);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(Currency_17.getString());
    FIX::EncodedText EncodedText_33("DATA_1613482518");
    noRelatedSym_0_0.set(EncodedText_33);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(EncodedText_33.getString());
    FIX::EncodedTextLen EncodedTextLen_33(2018959120);
    noRelatedSym_0_0.set(EncodedTextLen_33);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(EncodedTextLen_33.getString());
    FIX::ListUpdateAction ListUpdateAction_0('1');
    noRelatedSym_0_0.set(ListUpdateAction_0);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(ListUpdateAction_0.getString());
    FIX::RelSymTransactTime RelSymTransactTime_2(FIX::UTCTIMESTAMP(7, 42, 51, 7, 4, 2016));
    noRelatedSym_0_0.set(RelSymTransactTime_2);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(RelSymTransactTime_2.getString());
    FIX::Text Text_33("STRING_1879483351");
    noRelatedSym_0_0.set(Text_33);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(Text_33.getString());
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_32;
      FIX::EncodedLegIssuer EncodedLegIssuer_32("DATA_1059945303");
      noLegs_0_1_0.set(EncodedLegIssuer_32);
      InstrumentLeg_32.insert(EncodedLegIssuer_32.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_32(2131823016);
      noLegs_0_1_0.set(EncodedLegIssuerLen_32);
      InstrumentLeg_32.insert(EncodedLegIssuerLen_32.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_32("DATA_1812200423");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_32);
      InstrumentLeg_32.insert(EncodedLegSecurityDesc_32.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_32(1546252399);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_32);
      InstrumentLeg_32.insert(EncodedLegSecurityDescLen_32.getString());
      FIX::LegCFICode LegCFICode_32("STRING_841072850");
      noLegs_0_1_0.set(LegCFICode_32);
      InstrumentLeg_32.insert(LegCFICode_32.getString());
      FIX::LegContractMultiplier LegContractMultiplier_32;
      LegContractMultiplier_32.setString("10876024");
      noLegs_0_1_0.set(LegContractMultiplier_32);
      InstrumentLeg_32.insert(LegContractMultiplier_32.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_32(106850251);
      noLegs_0_1_0.set(LegContractMultiplierUnit_32);
      InstrumentLeg_32.insert(LegContractMultiplierUnit_32.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_32("MONTHYEAR_1838967275");
      noLegs_0_1_0.set(LegContractSettlMonth_32);
      InstrumentLeg_32.insert(LegContractSettlMonth_32.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_32("COUNTRY_850266133");
      noLegs_0_1_0.set(LegCountryOfIssue_32);
      InstrumentLeg_32.insert(LegCountryOfIssue_32.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_32("LOCALMKTDATE_665697947");
      noLegs_0_1_0.set(LegCouponPaymentDate_32);
      InstrumentLeg_32.insert(LegCouponPaymentDate_32.getString());
      FIX::LegCouponRate LegCouponRate_32;
      LegCouponRate_32.setString("96.070000");
      noLegs_0_1_0.set(LegCouponRate_32);
      InstrumentLeg_32.insert(LegCouponRate_32.getString());
      FIX::LegCreditRating LegCreditRating_32("STRING_1333866369");
      noLegs_0_1_0.set(LegCreditRating_32);
      InstrumentLeg_32.insert(LegCreditRating_32.getString());
      FIX::LegCurrency LegCurrency_32("USD");
      noLegs_0_1_0.set(LegCurrency_32);
      InstrumentLeg_32.insert(LegCurrency_32.getString());
      FIX::LegDatedDate LegDatedDate_32("LOCALMKTDATE_859363101");
      noLegs_0_1_0.set(LegDatedDate_32);
      InstrumentLeg_32.insert(LegDatedDate_32.getString());
      FIX::LegExerciseStyle LegExerciseStyle_32(1061882196);
      noLegs_0_1_0.set(LegExerciseStyle_32);
      InstrumentLeg_32.insert(LegExerciseStyle_32.getString());
      FIX::LegFactor LegFactor_32;
      LegFactor_32.setString("13446305");
      noLegs_0_1_0.set(LegFactor_32);
      InstrumentLeg_32.insert(LegFactor_32.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_32(1471751338);
      noLegs_0_1_0.set(LegFlowScheduleType_32);
      InstrumentLeg_32.insert(LegFlowScheduleType_32.getString());
      FIX::LegInstrRegistry LegInstrRegistry_32("STRING_1074779929");
      noLegs_0_1_0.set(LegInstrRegistry_32);
      InstrumentLeg_32.insert(LegInstrRegistry_32.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_32("LOCALMKTDATE_810629453");
      noLegs_0_1_0.set(LegInterestAccrualDate_32);
      InstrumentLeg_32.insert(LegInterestAccrualDate_32.getString());
      FIX::LegIssueDate LegIssueDate_32("LOCALMKTDATE_1343226810");
      noLegs_0_1_0.set(LegIssueDate_32);
      InstrumentLeg_32.insert(LegIssueDate_32.getString());
      FIX::LegIssuer LegIssuer_32("STRING_150277957");
      noLegs_0_1_0.set(LegIssuer_32);
      InstrumentLeg_32.insert(LegIssuer_32.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_32("STRING_1453776918");
      noLegs_0_1_0.set(LegLocaleOfIssue_32);
      InstrumentLeg_32.insert(LegLocaleOfIssue_32.getString());
      FIX::LegMaturityDate LegMaturityDate_32("LOCALMKTDATE_492848345");
      noLegs_0_1_0.set(LegMaturityDate_32);
      InstrumentLeg_32.insert(LegMaturityDate_32.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_32("MONTHYEAR_489889639");
      noLegs_0_1_0.set(LegMaturityMonthYear_32);
      InstrumentLeg_32.insert(LegMaturityMonthYear_32.getString());
      FIX::LegMaturityTime LegMaturityTime_32("TZTIMEONLY_1560533409");
      noLegs_0_1_0.set(LegMaturityTime_32);
      InstrumentLeg_32.insert(LegMaturityTime_32.getString());
      FIX::LegOptAttribute LegOptAttribute_32('8');
      noLegs_0_1_0.set(LegOptAttribute_32);
      InstrumentLeg_32.insert(LegOptAttribute_32.getString());
      FIX::LegOptionRatio LegOptionRatio_32;
      LegOptionRatio_32.setString("12789839");
      noLegs_0_1_0.set(LegOptionRatio_32);
      InstrumentLeg_32.insert(LegOptionRatio_32.getString());
      FIX::LegPool LegPool_32("STRING_1190624747");
      noLegs_0_1_0.set(LegPool_32);
      InstrumentLeg_32.insert(LegPool_32.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_32("STRING_589820915");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_32);
      InstrumentLeg_32.insert(LegPriceUnitOfMeasure_32.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_32;
      LegPriceUnitOfMeasureQty_32.setString("18872988");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_32);
      InstrumentLeg_32.insert(LegPriceUnitOfMeasureQty_32.getString());
      FIX::LegProduct LegProduct_32(103086403);
      noLegs_0_1_0.set(LegProduct_32);
      InstrumentLeg_32.insert(LegProduct_32.getString());
      FIX::LegPutOrCall LegPutOrCall_32(574160284);
      noLegs_0_1_0.set(LegPutOrCall_32);
      InstrumentLeg_32.insert(LegPutOrCall_32.getString());
      FIX::LegRatioQty LegRatioQty_32;
      LegRatioQty_32.setString("15520155");
      noLegs_0_1_0.set(LegRatioQty_32);
      InstrumentLeg_32.insert(LegRatioQty_32.getString());
      FIX::LegRedemptionDate LegRedemptionDate_32("LOCALMKTDATE_1649338802");
      noLegs_0_1_0.set(LegRedemptionDate_32);
      InstrumentLeg_32.insert(LegRedemptionDate_32.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_32("STRING_1415233134");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_32);
      InstrumentLeg_32.insert(LegRepoCollateralSecurityType_32.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_32;
      LegRepurchaseRate_32.setString("43.990000");
      noLegs_0_1_0.set(LegRepurchaseRate_32);
      InstrumentLeg_32.insert(LegRepurchaseRate_32.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_32(1756189053);
      noLegs_0_1_0.set(LegRepurchaseTerm_32);
      InstrumentLeg_32.insert(LegRepurchaseTerm_32.getString());
      FIX::LegSecurityDesc LegSecurityDesc_32("STRING_1106716761");
      noLegs_0_1_0.set(LegSecurityDesc_32);
      InstrumentLeg_32.insert(LegSecurityDesc_32.getString());
      FIX::LegSecurityExchange LegSecurityExchange_32("EXCHANGE_1342400532");
      noLegs_0_1_0.set(LegSecurityExchange_32);
      InstrumentLeg_32.insert(LegSecurityExchange_32.getString());
      FIX::LegSecurityID LegSecurityID_32("STRING_274403352");
      noLegs_0_1_0.set(LegSecurityID_32);
      InstrumentLeg_32.insert(LegSecurityID_32.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_32("STRING_1380976368");
      noLegs_0_1_0.set(LegSecurityIDSource_32);
      InstrumentLeg_32.insert(LegSecurityIDSource_32.getString());
      FIX::LegSecuritySubType LegSecuritySubType_32("STRING_528783253");
      noLegs_0_1_0.set(LegSecuritySubType_32);
      InstrumentLeg_32.insert(LegSecuritySubType_32.getString());
      FIX::LegSecurityType LegSecurityType_32("STRING_2119006404");
      noLegs_0_1_0.set(LegSecurityType_32);
      InstrumentLeg_32.insert(LegSecurityType_32.getString());
      FIX::LegSide LegSide_32('1');
      noLegs_0_1_0.set(LegSide_32);
      InstrumentLeg_32.insert(LegSide_32.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_32("STRING_1388146354");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_32);
      InstrumentLeg_32.insert(LegStateOrProvinceOfIssue_32.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_32("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_32);
      InstrumentLeg_32.insert(LegStrikeCurrency_32.getString());
      FIX::LegStrikePrice LegStrikePrice_32;
      LegStrikePrice_32.setString("7124140");
      noLegs_0_1_0.set(LegStrikePrice_32);
      InstrumentLeg_32.insert(LegStrikePrice_32.getString());
      FIX::LegSymbol LegSymbol_32("STRING_2108184881");
      noLegs_0_1_0.set(LegSymbol_32);
      InstrumentLeg_32.insert(LegSymbol_32.getString());
      FIX::LegSymbolSfx LegSymbolSfx_32("STRING_1170474554");
      noLegs_0_1_0.set(LegSymbolSfx_32);
      InstrumentLeg_32.insert(LegSymbolSfx_32.getString());
      FIX::LegTimeUnit LegTimeUnit_32("STRING_2055640855");
      noLegs_0_1_0.set(LegTimeUnit_32);
      InstrumentLeg_32.insert(LegTimeUnit_32.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_32("STRING_110979190");
      noLegs_0_1_0.set(LegUnitOfMeasure_32);
      InstrumentLeg_32.insert(LegUnitOfMeasure_32.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_32;
      LegUnitOfMeasureQty_32.setString("4767678");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_32);
      InstrumentLeg_32.insert(LegUnitOfMeasureQty_32.getString());
      all_values.push_back(InstrumentLeg_32);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_71;
        FIX::LegSecurityAltID LegSecurityAltID_71("STRING_600868829");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_71);
        LegSecAltIDGrp_NoLegSecurityAltID_71.insert(LegSecurityAltID_71.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_71("STRING_2037301234");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_71);
        LegSecAltIDGrp_NoLegSecurityAltID_71.insert(LegSecurityAltIDSource_71.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_71);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_72;
        FIX::LegSecurityAltID LegSecurityAltID_72("STRING_1258826765");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_72);
        LegSecAltIDGrp_NoLegSecurityAltID_72.insert(LegSecurityAltID_72.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_72("STRING_1879852744");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_72);
        LegSecAltIDGrp_NoLegSecurityAltID_72.insert(LegSecurityAltIDSource_72.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_72);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_33;
      FIX::EncodedLegIssuer EncodedLegIssuer_33("DATA_1080442334");
      noLegs_0_1_1.set(EncodedLegIssuer_33);
      InstrumentLeg_33.insert(EncodedLegIssuer_33.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_33(1848647680);
      noLegs_0_1_1.set(EncodedLegIssuerLen_33);
      InstrumentLeg_33.insert(EncodedLegIssuerLen_33.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_33("DATA_1619667915");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_33);
      InstrumentLeg_33.insert(EncodedLegSecurityDesc_33.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_33(1183528737);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_33);
      InstrumentLeg_33.insert(EncodedLegSecurityDescLen_33.getString());
      FIX::LegCFICode LegCFICode_33("STRING_275324316");
      noLegs_0_1_1.set(LegCFICode_33);
      InstrumentLeg_33.insert(LegCFICode_33.getString());
      FIX::LegContractMultiplier LegContractMultiplier_33;
      LegContractMultiplier_33.setString("10241998");
      noLegs_0_1_1.set(LegContractMultiplier_33);
      InstrumentLeg_33.insert(LegContractMultiplier_33.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_33(685383891);
      noLegs_0_1_1.set(LegContractMultiplierUnit_33);
      InstrumentLeg_33.insert(LegContractMultiplierUnit_33.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_33("MONTHYEAR_1690557450");
      noLegs_0_1_1.set(LegContractSettlMonth_33);
      InstrumentLeg_33.insert(LegContractSettlMonth_33.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_33("COUNTRY_1516334259");
      noLegs_0_1_1.set(LegCountryOfIssue_33);
      InstrumentLeg_33.insert(LegCountryOfIssue_33.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_33("LOCALMKTDATE_294089296");
      noLegs_0_1_1.set(LegCouponPaymentDate_33);
      InstrumentLeg_33.insert(LegCouponPaymentDate_33.getString());
      FIX::LegCouponRate LegCouponRate_33;
      LegCouponRate_33.setString("5.630000");
      noLegs_0_1_1.set(LegCouponRate_33);
      InstrumentLeg_33.insert(LegCouponRate_33.getString());
      FIX::LegCreditRating LegCreditRating_33("STRING_711251144");
      noLegs_0_1_1.set(LegCreditRating_33);
      InstrumentLeg_33.insert(LegCreditRating_33.getString());
      FIX::LegCurrency LegCurrency_33("EUR");
      noLegs_0_1_1.set(LegCurrency_33);
      InstrumentLeg_33.insert(LegCurrency_33.getString());
      FIX::LegDatedDate LegDatedDate_33("LOCALMKTDATE_1240034397");
      noLegs_0_1_1.set(LegDatedDate_33);
      InstrumentLeg_33.insert(LegDatedDate_33.getString());
      FIX::LegExerciseStyle LegExerciseStyle_33(540015404);
      noLegs_0_1_1.set(LegExerciseStyle_33);
      InstrumentLeg_33.insert(LegExerciseStyle_33.getString());
      FIX::LegFactor LegFactor_33;
      LegFactor_33.setString("10459814");
      noLegs_0_1_1.set(LegFactor_33);
      InstrumentLeg_33.insert(LegFactor_33.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_33(480697104);
      noLegs_0_1_1.set(LegFlowScheduleType_33);
      InstrumentLeg_33.insert(LegFlowScheduleType_33.getString());
      FIX::LegInstrRegistry LegInstrRegistry_33("STRING_1573420356");
      noLegs_0_1_1.set(LegInstrRegistry_33);
      InstrumentLeg_33.insert(LegInstrRegistry_33.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_33("LOCALMKTDATE_1405826551");
      noLegs_0_1_1.set(LegInterestAccrualDate_33);
      InstrumentLeg_33.insert(LegInterestAccrualDate_33.getString());
      FIX::LegIssueDate LegIssueDate_33("LOCALMKTDATE_1193111148");
      noLegs_0_1_1.set(LegIssueDate_33);
      InstrumentLeg_33.insert(LegIssueDate_33.getString());
      FIX::LegIssuer LegIssuer_33("STRING_1534121589");
      noLegs_0_1_1.set(LegIssuer_33);
      InstrumentLeg_33.insert(LegIssuer_33.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_33("STRING_428817458");
      noLegs_0_1_1.set(LegLocaleOfIssue_33);
      InstrumentLeg_33.insert(LegLocaleOfIssue_33.getString());
      FIX::LegMaturityDate LegMaturityDate_33("LOCALMKTDATE_1101268355");
      noLegs_0_1_1.set(LegMaturityDate_33);
      InstrumentLeg_33.insert(LegMaturityDate_33.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_33("MONTHYEAR_1645100779");
      noLegs_0_1_1.set(LegMaturityMonthYear_33);
      InstrumentLeg_33.insert(LegMaturityMonthYear_33.getString());
      FIX::LegMaturityTime LegMaturityTime_33("TZTIMEONLY_905585283");
      noLegs_0_1_1.set(LegMaturityTime_33);
      InstrumentLeg_33.insert(LegMaturityTime_33.getString());
      FIX::LegOptAttribute LegOptAttribute_33('1');
      noLegs_0_1_1.set(LegOptAttribute_33);
      InstrumentLeg_33.insert(LegOptAttribute_33.getString());
      FIX::LegOptionRatio LegOptionRatio_33;
      LegOptionRatio_33.setString("984859");
      noLegs_0_1_1.set(LegOptionRatio_33);
      InstrumentLeg_33.insert(LegOptionRatio_33.getString());
      FIX::LegPool LegPool_33("STRING_795402869");
      noLegs_0_1_1.set(LegPool_33);
      InstrumentLeg_33.insert(LegPool_33.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_33("STRING_613617025");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_33);
      InstrumentLeg_33.insert(LegPriceUnitOfMeasure_33.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_33;
      LegPriceUnitOfMeasureQty_33.setString("19783387");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_33);
      InstrumentLeg_33.insert(LegPriceUnitOfMeasureQty_33.getString());
      FIX::LegProduct LegProduct_33(1875845203);
      noLegs_0_1_1.set(LegProduct_33);
      InstrumentLeg_33.insert(LegProduct_33.getString());
      FIX::LegPutOrCall LegPutOrCall_33(314781057);
      noLegs_0_1_1.set(LegPutOrCall_33);
      InstrumentLeg_33.insert(LegPutOrCall_33.getString());
      FIX::LegRatioQty LegRatioQty_33;
      LegRatioQty_33.setString("14505229");
      noLegs_0_1_1.set(LegRatioQty_33);
      InstrumentLeg_33.insert(LegRatioQty_33.getString());
      FIX::LegRedemptionDate LegRedemptionDate_33("LOCALMKTDATE_911890292");
      noLegs_0_1_1.set(LegRedemptionDate_33);
      InstrumentLeg_33.insert(LegRedemptionDate_33.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_33("STRING_590105374");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_33);
      InstrumentLeg_33.insert(LegRepoCollateralSecurityType_33.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_33;
      LegRepurchaseRate_33.setString("91.850000");
      noLegs_0_1_1.set(LegRepurchaseRate_33);
      InstrumentLeg_33.insert(LegRepurchaseRate_33.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_33(1597274183);
      noLegs_0_1_1.set(LegRepurchaseTerm_33);
      InstrumentLeg_33.insert(LegRepurchaseTerm_33.getString());
      FIX::LegSecurityDesc LegSecurityDesc_33("STRING_133179176");
      noLegs_0_1_1.set(LegSecurityDesc_33);
      InstrumentLeg_33.insert(LegSecurityDesc_33.getString());
      FIX::LegSecurityExchange LegSecurityExchange_33("EXCHANGE_1843573444");
      noLegs_0_1_1.set(LegSecurityExchange_33);
      InstrumentLeg_33.insert(LegSecurityExchange_33.getString());
      FIX::LegSecurityID LegSecurityID_33("STRING_1891363479");
      noLegs_0_1_1.set(LegSecurityID_33);
      InstrumentLeg_33.insert(LegSecurityID_33.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_33("STRING_782969740");
      noLegs_0_1_1.set(LegSecurityIDSource_33);
      InstrumentLeg_33.insert(LegSecurityIDSource_33.getString());
      FIX::LegSecuritySubType LegSecuritySubType_33("STRING_407340940");
      noLegs_0_1_1.set(LegSecuritySubType_33);
      InstrumentLeg_33.insert(LegSecuritySubType_33.getString());
      FIX::LegSecurityType LegSecurityType_33("STRING_312372480");
      noLegs_0_1_1.set(LegSecurityType_33);
      InstrumentLeg_33.insert(LegSecurityType_33.getString());
      FIX::LegSide LegSide_33('6');
      noLegs_0_1_1.set(LegSide_33);
      InstrumentLeg_33.insert(LegSide_33.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_33("STRING_1647375338");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_33);
      InstrumentLeg_33.insert(LegStateOrProvinceOfIssue_33.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_33("EUR");
      noLegs_0_1_1.set(LegStrikeCurrency_33);
      InstrumentLeg_33.insert(LegStrikeCurrency_33.getString());
      FIX::LegStrikePrice LegStrikePrice_33;
      LegStrikePrice_33.setString("21280724");
      noLegs_0_1_1.set(LegStrikePrice_33);
      InstrumentLeg_33.insert(LegStrikePrice_33.getString());
      FIX::LegSymbol LegSymbol_33("STRING_278324593");
      noLegs_0_1_1.set(LegSymbol_33);
      InstrumentLeg_33.insert(LegSymbol_33.getString());
      FIX::LegSymbolSfx LegSymbolSfx_33("STRING_970577377");
      noLegs_0_1_1.set(LegSymbolSfx_33);
      InstrumentLeg_33.insert(LegSymbolSfx_33.getString());
      FIX::LegTimeUnit LegTimeUnit_33("STRING_1173699942");
      noLegs_0_1_1.set(LegTimeUnit_33);
      InstrumentLeg_33.insert(LegTimeUnit_33.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_33("STRING_1812446182");
      noLegs_0_1_1.set(LegUnitOfMeasure_33);
      InstrumentLeg_33.insert(LegUnitOfMeasure_33.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_33;
      LegUnitOfMeasureQty_33.setString("13993948");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_33);
      InstrumentLeg_33.insert(LegUnitOfMeasureQty_33.getString());
      all_values.push_back(InstrumentLeg_33);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_73;
        FIX::LegSecurityAltID LegSecurityAltID_73("STRING_1310063314");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_73);
        LegSecAltIDGrp_NoLegSecurityAltID_73.insert(LegSecurityAltID_73.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_73("STRING_157496470");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_73);
        LegSecAltIDGrp_NoLegSecurityAltID_73.insert(LegSecurityAltIDSource_73.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_73);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_74;
        FIX::LegSecurityAltID LegSecurityAltID_74("STRING_1629758558");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_74);
        LegSecAltIDGrp_NoLegSecurityAltID_74.insert(LegSecurityAltID_74.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_74("STRING_1408549275");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_74);
        LegSecAltIDGrp_NoLegSecurityAltID_74.insert(LegSecurityAltIDSource_74.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_74);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_19;
    FIX::AttachmentPoint AttachmentPoint_19;
    AttachmentPoint_19.setString("93.390000");
    noRelatedSym_0_0.set(AttachmentPoint_19);
    Instrument_19.insert(AttachmentPoint_19.getString());
    FIX::CFICode CFICode_19("STRING_95891935");
    noRelatedSym_0_0.set(CFICode_19);
    Instrument_19.insert(CFICode_19.getString());
    FIX::CPProgram CPProgram_19(2);
    noRelatedSym_0_0.set(CPProgram_19);
    Instrument_19.insert(CPProgram_19.getString());
    FIX::CPRegType CPRegType_19("STRING_681260895");
    noRelatedSym_0_0.set(CPRegType_19);
    Instrument_19.insert(CPRegType_19.getString());
    FIX::CapPrice CapPrice_19;
    CapPrice_19.setString("4106729");
    noRelatedSym_0_0.set(CapPrice_19);
    Instrument_19.insert(CapPrice_19.getString());
    FIX::ContractMultiplier ContractMultiplier_19;
    ContractMultiplier_19.setString("5424436");
    noRelatedSym_0_0.set(ContractMultiplier_19);
    Instrument_19.insert(ContractMultiplier_19.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_19(2);
    noRelatedSym_0_0.set(ContractMultiplierUnit_19);
    Instrument_19.insert(ContractMultiplierUnit_19.getString());
    FIX::ContractSettlMonth ContractSettlMonth_19("MONTHYEAR_1000778366");
    noRelatedSym_0_0.set(ContractSettlMonth_19);
    Instrument_19.insert(ContractSettlMonth_19.getString());
    FIX::CountryOfIssue CountryOfIssue_19("COUNTRY_869682842");
    noRelatedSym_0_0.set(CountryOfIssue_19);
    Instrument_19.insert(CountryOfIssue_19.getString());
    FIX::CouponPaymentDate CouponPaymentDate_19("LOCALMKTDATE_1042941723");
    noRelatedSym_0_0.set(CouponPaymentDate_19);
    Instrument_19.insert(CouponPaymentDate_19.getString());
    FIX::CouponRate CouponRate_19;
    CouponRate_19.setString("75.430000");
    noRelatedSym_0_0.set(CouponRate_19);
    Instrument_19.insert(CouponRate_19.getString());
    FIX::CreditRating CreditRating_19("STRING_565772638");
    noRelatedSym_0_0.set(CreditRating_19);
    Instrument_19.insert(CreditRating_19.getString());
    FIX::DatedDate DatedDate_19("LOCALMKTDATE_786821554");
    noRelatedSym_0_0.set(DatedDate_19);
    Instrument_19.insert(DatedDate_19.getString());
    FIX::DetachmentPoint DetachmentPoint_19;
    DetachmentPoint_19.setString("72.830000");
    noRelatedSym_0_0.set(DetachmentPoint_19);
    Instrument_19.insert(DetachmentPoint_19.getString());
    FIX::EncodedIssuer EncodedIssuer_19("DATA_973113579");
    noRelatedSym_0_0.set(EncodedIssuer_19);
    Instrument_19.insert(EncodedIssuer_19.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_19(1099194034);
    noRelatedSym_0_0.set(EncodedIssuerLen_19);
    Instrument_19.insert(EncodedIssuerLen_19.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_19("DATA_435696658");
    noRelatedSym_0_0.set(EncodedSecurityDesc_19);
    Instrument_19.insert(EncodedSecurityDesc_19.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_19(473005269);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_19);
    Instrument_19.insert(EncodedSecurityDescLen_19.getString());
    FIX::ExerciseStyle ExerciseStyle_19(1);
    noRelatedSym_0_0.set(ExerciseStyle_19);
    Instrument_19.insert(ExerciseStyle_19.getString());
    FIX::Factor Factor_19;
    Factor_19.setString("4474");
    noRelatedSym_0_0.set(Factor_19);
    Instrument_19.insert(Factor_19.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_19(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_19);
    Instrument_19.insert(FlexProductEligibilityIndicator_19.getString());
    FIX::FlexibleIndicator FlexibleIndicator_19(true);
    noRelatedSym_0_0.set(FlexibleIndicator_19);
    Instrument_19.insert(FlexibleIndicator_19.getString());
    FIX::FloorPrice FloorPrice_19;
    FloorPrice_19.setString("9710248");
    noRelatedSym_0_0.set(FloorPrice_19);
    Instrument_19.insert(FloorPrice_19.getString());
    FIX::FlowScheduleType FlowScheduleType_19(0);
    noRelatedSym_0_0.set(FlowScheduleType_19);
    Instrument_19.insert(FlowScheduleType_19.getString());
    FIX::InstrRegistry InstrRegistry_19("STRING_1894869046");
    noRelatedSym_0_0.set(InstrRegistry_19);
    Instrument_19.insert(InstrRegistry_19.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_19('2');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_19);
    Instrument_19.insert(InstrmtAssignmentMethod_19.getString());
    FIX::InterestAccrualDate InterestAccrualDate_19("LOCALMKTDATE_1754778655");
    noRelatedSym_0_0.set(InterestAccrualDate_19);
    Instrument_19.insert(InterestAccrualDate_19.getString());
    FIX::IssueDate IssueDate_19("LOCALMKTDATE_1057448712");
    noRelatedSym_0_0.set(IssueDate_19);
    Instrument_19.insert(IssueDate_19.getString());
    FIX::Issuer Issuer_19("STRING_380432518");
    noRelatedSym_0_0.set(Issuer_19);
    Instrument_19.insert(Issuer_19.getString());
    FIX::ListMethod ListMethod_19(1);
    noRelatedSym_0_0.set(ListMethod_19);
    Instrument_19.insert(ListMethod_19.getString());
    FIX::LocaleOfIssue LocaleOfIssue_19("STRING_318514339");
    noRelatedSym_0_0.set(LocaleOfIssue_19);
    Instrument_19.insert(LocaleOfIssue_19.getString());
    FIX::MaturityDate MaturityDate_19("LOCALMKTDATE_1333331857");
    noRelatedSym_0_0.set(MaturityDate_19);
    Instrument_19.insert(MaturityDate_19.getString());
    FIX::MaturityMonthYear MaturityMonthYear_19("MONTHYEAR_1332945500");
    noRelatedSym_0_0.set(MaturityMonthYear_19);
    Instrument_19.insert(MaturityMonthYear_19.getString());
    FIX::MaturityTime MaturityTime_19("TZTIMEONLY_1557918672");
    noRelatedSym_0_0.set(MaturityTime_19);
    Instrument_19.insert(MaturityTime_19.getString());
    FIX::MinPriceIncrement MinPriceIncrement_19;
    MinPriceIncrement_19.setString("20145927");
    noRelatedSym_0_0.set(MinPriceIncrement_19);
    Instrument_19.insert(MinPriceIncrement_19.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_19;
    MinPriceIncrementAmount_19.setString("17436184");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_19);
    Instrument_19.insert(MinPriceIncrementAmount_19.getString());
    FIX::NTPositionLimit NTPositionLimit_19(2100362329);
    noRelatedSym_0_0.set(NTPositionLimit_19);
    Instrument_19.insert(NTPositionLimit_19.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_19;
    NotionalPercentageOutstanding_19.setString("2.920000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_19);
    Instrument_19.insert(NotionalPercentageOutstanding_19.getString());
    FIX::OptAttribute OptAttribute_19('5');
    noRelatedSym_0_0.set(OptAttribute_19);
    Instrument_19.insert(OptAttribute_19.getString());
    FIX::OptPayoutAmount OptPayoutAmount_19;
    OptPayoutAmount_19.setString("8225615");
    noRelatedSym_0_0.set(OptPayoutAmount_19);
    Instrument_19.insert(OptPayoutAmount_19.getString());
    FIX::OptPayoutType OptPayoutType_19(1);
    noRelatedSym_0_0.set(OptPayoutType_19);
    Instrument_19.insert(OptPayoutType_19.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_19;
    OriginalNotionalPercentageOutstanding_19.setString("7.540000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_19);
    Instrument_19.insert(OriginalNotionalPercentageOutstanding_19.getString());
    FIX::Pool Pool_19("STRING_1388334161");
    noRelatedSym_0_0.set(Pool_19);
    Instrument_19.insert(Pool_19.getString());
    FIX::PositionLimit PositionLimit_19(1142539921);
    noRelatedSym_0_0.set(PositionLimit_19);
    Instrument_19.insert(PositionLimit_19.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_19("STRING_INX");
    noRelatedSym_0_0.set(PriceQuoteMethod_19);
    Instrument_19.insert(PriceQuoteMethod_19.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_19("STRING_213964092");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_19);
    Instrument_19.insert(PriceUnitOfMeasure_19.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_19;
    PriceUnitOfMeasureQty_19.setString("942503");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_19);
    Instrument_19.insert(PriceUnitOfMeasureQty_19.getString());
    FIX::Product Product_21(11);
    noRelatedSym_0_0.set(Product_21);
    Instrument_19.insert(Product_21.getString());
    FIX::ProductComplex ProductComplex_19("STRING_686969361");
    noRelatedSym_0_0.set(ProductComplex_19);
    Instrument_19.insert(ProductComplex_19.getString());
    FIX::PutOrCall PutOrCall_19(1);
    noRelatedSym_0_0.set(PutOrCall_19);
    Instrument_19.insert(PutOrCall_19.getString());
    FIX::RedemptionDate RedemptionDate_19("LOCALMKTDATE_1936458532");
    noRelatedSym_0_0.set(RedemptionDate_19);
    Instrument_19.insert(RedemptionDate_19.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_19("STRING_1140563424");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_19);
    Instrument_19.insert(RepoCollateralSecurityType_19.getString());
    FIX::RepurchaseRate RepurchaseRate_19;
    RepurchaseRate_19.setString("50.910000");
    noRelatedSym_0_0.set(RepurchaseRate_19);
    Instrument_19.insert(RepurchaseRate_19.getString());
    FIX::RepurchaseTerm RepurchaseTerm_19(759999745);
    noRelatedSym_0_0.set(RepurchaseTerm_19);
    Instrument_19.insert(RepurchaseTerm_19.getString());
    FIX::RestructuringType RestructuringType_19("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_19);
    Instrument_19.insert(RestructuringType_19.getString());
    FIX::SecurityDesc SecurityDesc_19("STRING_1875640489");
    noRelatedSym_0_0.set(SecurityDesc_19);
    Instrument_19.insert(SecurityDesc_19.getString());
    FIX::SecurityExchange SecurityExchange_19("EXCHANGE_982935793");
    noRelatedSym_0_0.set(SecurityExchange_19);
    Instrument_19.insert(SecurityExchange_19.getString());
    FIX::SecurityGroup SecurityGroup_19("STRING_227668789");
    noRelatedSym_0_0.set(SecurityGroup_19);
    Instrument_19.insert(SecurityGroup_19.getString());
    FIX::SecurityID SecurityID_19("STRING_785605554");
    noRelatedSym_0_0.set(SecurityID_19);
    Instrument_19.insert(SecurityID_19.getString());
    FIX::SecurityIDSource SecurityIDSource_19("STRING_K");
    noRelatedSym_0_0.set(SecurityIDSource_19);
    Instrument_19.insert(SecurityIDSource_19.getString());
    FIX::SecurityStatus SecurityStatus_19("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_19);
    Instrument_19.insert(SecurityStatus_19.getString());
    FIX::SecuritySubType SecuritySubType_20("STRING_1104119893");
    noRelatedSym_0_0.set(SecuritySubType_20);
    Instrument_19.insert(SecuritySubType_20.getString());
    FIX::SecurityType SecurityType_21("STRING_CTB");
    noRelatedSym_0_0.set(SecurityType_21);
    Instrument_19.insert(SecurityType_21.getString());
    FIX::Seniority Seniority_19("STRING_SD");
    noRelatedSym_0_0.set(Seniority_19);
    Instrument_19.insert(Seniority_19.getString());
    FIX::SettlMethod SettlMethod_19('P');
    noRelatedSym_0_0.set(SettlMethod_19);
    Instrument_19.insert(SettlMethod_19.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_19("STRING_416325625");
    noRelatedSym_0_0.set(SettleOnOpenFlag_19);
    Instrument_19.insert(SettleOnOpenFlag_19.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_19("STRING_246319052");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_19);
    Instrument_19.insert(StateOrProvinceOfIssue_19.getString());
    FIX::StrikeCurrency StrikeCurrency_19("CHF");
    noRelatedSym_0_0.set(StrikeCurrency_19);
    Instrument_19.insert(StrikeCurrency_19.getString());
    FIX::StrikeMultiplier StrikeMultiplier_19;
    StrikeMultiplier_19.setString("8432322");
    noRelatedSym_0_0.set(StrikeMultiplier_19);
    Instrument_19.insert(StrikeMultiplier_19.getString());
    FIX::StrikePrice StrikePrice_19;
    StrikePrice_19.setString("12899951");
    noRelatedSym_0_0.set(StrikePrice_19);
    Instrument_19.insert(StrikePrice_19.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_19(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_19);
    Instrument_19.insert(StrikePriceBoundaryMethod_19.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_19;
    StrikePriceBoundaryPrecision_19.setString("93.700000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_19);
    Instrument_19.insert(StrikePriceBoundaryPrecision_19.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_19(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_19);
    Instrument_19.insert(StrikePriceDeterminationMethod_19.getString());
    FIX::StrikeValue StrikeValue_19;
    StrikeValue_19.setString("12273605");
    noRelatedSym_0_0.set(StrikeValue_19);
    Instrument_19.insert(StrikeValue_19.getString());
    FIX::Symbol Symbol_19("STRING_1926933760");
    noRelatedSym_0_0.set(Symbol_19);
    Instrument_19.insert(Symbol_19.getString());
    FIX::SymbolSfx SymbolSfx_19("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_19);
    Instrument_19.insert(SymbolSfx_19.getString());
    FIX::TimeUnit TimeUnit_19("STRING_Min");
    noRelatedSym_0_0.set(TimeUnit_19);
    Instrument_19.insert(TimeUnit_19.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_19(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_19);
    Instrument_19.insert(UnderlyingPriceDeterminationMethod_19.getString());
    FIX::UnitOfMeasure UnitOfMeasure_19("STRING_Bcf");
    noRelatedSym_0_0.set(UnitOfMeasure_19);
    Instrument_19.insert(UnitOfMeasure_19.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_19;
    UnitOfMeasureQty_19.setString("12199594");
    noRelatedSym_0_0.set(UnitOfMeasureQty_19);
    Instrument_19.insert(UnitOfMeasureQty_19.getString());
    FIX::ValuationMethod ValuationMethod_19("STRING_CDSD");
    noRelatedSym_0_0.set(ValuationMethod_19);
    Instrument_19.insert(ValuationMethod_19.getString());
    all_values.push_back(Instrument_19);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_40;
      FIX::ComplexEventCondition ComplexEventCondition_40(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventCondition_40.getString());
      FIX::ComplexEventPrice ComplexEventPrice_40;
      ComplexEventPrice_40.setString("1169521");
      noComplexEvents_0_1_0.set(ComplexEventPrice_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPrice_40.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_40(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceBoundaryMethod_40.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_40;
      ComplexEventPriceBoundaryPrecision_40.setString("77.290000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceBoundaryPrecision_40.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_40(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceTimeType_40.getString());
      FIX::ComplexEventType ComplexEventType_40(1);
      noComplexEvents_0_1_0.set(ComplexEventType_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventType_40.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_40;
      ComplexOptPayoutAmount_40.setString("17144932");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexOptPayoutAmount_40.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_40);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_82;
        FIX::ComplexEventEndDate ComplexEventEndDate_82(FIX::UTCTIMESTAMP(8, 17, 31, 2, 7, 2004));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_82);
        ComplexEventDates_NoComplexEventDates_82.insert(ComplexEventEndDate_82.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_82(FIX::UTCTIMESTAMP(19, 0, 58, 7, 3, 2001));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_82);
        ComplexEventDates_NoComplexEventDates_82.insert(ComplexEventStartDate_82.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_82);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_177;
          FIX::ComplexEventEndTime ComplexEventEndTime_177(FIX::UTCTIMEONLY(16, 42, 42));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_177);
          ComplexEventTimes_NoComplexEventTimes_177.insert(ComplexEventEndTime_177.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_177(FIX::UTCTIMEONLY(11, 38, 27));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_177);
          ComplexEventTimes_NoComplexEventTimes_177.insert(ComplexEventStartTime_177.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_177);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_83;
        FIX::ComplexEventEndDate ComplexEventEndDate_83(FIX::UTCTIMESTAMP(23, 26, 27, 21, 12, 2016));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_83);
        ComplexEventDates_NoComplexEventDates_83.insert(ComplexEventEndDate_83.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_83(FIX::UTCTIMESTAMP(7, 31, 20, 19, 10, 2000));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_83);
        ComplexEventDates_NoComplexEventDates_83.insert(ComplexEventStartDate_83.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_83);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_178;
          FIX::ComplexEventEndTime ComplexEventEndTime_178(FIX::UTCTIMEONLY(2, 47, 3));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_178);
          ComplexEventTimes_NoComplexEventTimes_178.insert(ComplexEventEndTime_178.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_178(FIX::UTCTIMEONLY(13, 16, 2));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_178);
          ComplexEventTimes_NoComplexEventTimes_178.insert(ComplexEventStartTime_178.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_178);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_179;
          FIX::ComplexEventEndTime ComplexEventEndTime_179(FIX::UTCTIMEONLY(1, 37, 34));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_179);
          ComplexEventTimes_NoComplexEventTimes_179.insert(ComplexEventEndTime_179.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_179(FIX::UTCTIMEONLY(0, 5, 21));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_179);
          ComplexEventTimes_NoComplexEventTimes_179.insert(ComplexEventStartTime_179.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_179);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_180;
          FIX::ComplexEventEndTime ComplexEventEndTime_180(FIX::UTCTIMEONLY(20, 48, 22));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_180);
          ComplexEventTimes_NoComplexEventTimes_180.insert(ComplexEventEndTime_180.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_180(FIX::UTCTIMEONLY(15, 44, 16));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_180);
          ComplexEventTimes_NoComplexEventTimes_180.insert(ComplexEventStartTime_180.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_180);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_41;
      FIX::ComplexEventCondition ComplexEventCondition_41(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventCondition_41.getString());
      FIX::ComplexEventPrice ComplexEventPrice_41;
      ComplexEventPrice_41.setString("19781586");
      noComplexEvents_0_1_1.set(ComplexEventPrice_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPrice_41.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_41(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceBoundaryMethod_41.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_41;
      ComplexEventPriceBoundaryPrecision_41.setString("57.660000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceBoundaryPrecision_41.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_41(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceTimeType_41.getString());
      FIX::ComplexEventType ComplexEventType_41(9);
      noComplexEvents_0_1_1.set(ComplexEventType_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventType_41.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_41;
      ComplexOptPayoutAmount_41.setString("15556259");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexOptPayoutAmount_41.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_41);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_84;
        FIX::ComplexEventEndDate ComplexEventEndDate_84(FIX::UTCTIMESTAMP(8, 13, 46, 1, 11, 2007));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_84);
        ComplexEventDates_NoComplexEventDates_84.insert(ComplexEventEndDate_84.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_84(FIX::UTCTIMESTAMP(11, 18, 20, 5, 7, 2013));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_84);
        ComplexEventDates_NoComplexEventDates_84.insert(ComplexEventStartDate_84.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_84);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_181;
          FIX::ComplexEventEndTime ComplexEventEndTime_181(FIX::UTCTIMEONLY(13, 15, 2));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_181);
          ComplexEventTimes_NoComplexEventTimes_181.insert(ComplexEventEndTime_181.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_181(FIX::UTCTIMEONLY(10, 47, 52));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_181);
          ComplexEventTimes_NoComplexEventTimes_181.insert(ComplexEventStartTime_181.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_181);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_85;
        FIX::ComplexEventEndDate ComplexEventEndDate_85(FIX::UTCTIMESTAMP(18, 20, 39, 19, 8, 2012));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_85);
        ComplexEventDates_NoComplexEventDates_85.insert(ComplexEventEndDate_85.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_85(FIX::UTCTIMESTAMP(0, 56, 6, 3, 11, 2010));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_85);
        ComplexEventDates_NoComplexEventDates_85.insert(ComplexEventStartDate_85.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_85);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_182;
          FIX::ComplexEventEndTime ComplexEventEndTime_182(FIX::UTCTIMEONLY(19, 2, 3));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_182);
          ComplexEventTimes_NoComplexEventTimes_182.insert(ComplexEventEndTime_182.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_182(FIX::UTCTIMEONLY(8, 28, 56));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_182);
          ComplexEventTimes_NoComplexEventTimes_182.insert(ComplexEventStartTime_182.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_182);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_183;
          FIX::ComplexEventEndTime ComplexEventEndTime_183(FIX::UTCTIMEONLY(18, 3, 39));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_183);
          ComplexEventTimes_NoComplexEventTimes_183.insert(ComplexEventEndTime_183.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_183(FIX::UTCTIMEONLY(1, 18, 53));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_183);
          ComplexEventTimes_NoComplexEventTimes_183.insert(ComplexEventStartTime_183.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_183);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_184;
          FIX::ComplexEventEndTime ComplexEventEndTime_184(FIX::UTCTIMEONLY(16, 6, 18));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventEndTime_184);
          ComplexEventTimes_NoComplexEventTimes_184.insert(ComplexEventEndTime_184.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_184(FIX::UTCTIMEONLY(17, 43, 40));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventStartTime_184);
          ComplexEventTimes_NoComplexEventTimes_184.insert(ComplexEventStartTime_184.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_184);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_42;
      FIX::ComplexEventCondition ComplexEventCondition_42(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventCondition_42.getString());
      FIX::ComplexEventPrice ComplexEventPrice_42;
      ComplexEventPrice_42.setString("16052759");
      noComplexEvents_0_1_2.set(ComplexEventPrice_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPrice_42.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_42(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceBoundaryMethod_42.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_42;
      ComplexEventPriceBoundaryPrecision_42.setString("51.210000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceBoundaryPrecision_42.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_42(1);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceTimeType_42.getString());
      FIX::ComplexEventType ComplexEventType_42(5);
      noComplexEvents_0_1_2.set(ComplexEventType_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventType_42.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_42;
      ComplexOptPayoutAmount_42.setString("16384206");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexOptPayoutAmount_42.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_42);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_86;
        FIX::ComplexEventEndDate ComplexEventEndDate_86(FIX::UTCTIMESTAMP(3, 8, 0, 15, 6, 2008));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_86);
        ComplexEventDates_NoComplexEventDates_86.insert(ComplexEventEndDate_86.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_86(FIX::UTCTIMESTAMP(3, 59, 34, 20, 1, 2014));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_86);
        ComplexEventDates_NoComplexEventDates_86.insert(ComplexEventStartDate_86.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_86);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_185;
          FIX::ComplexEventEndTime ComplexEventEndTime_185(FIX::UTCTIMEONLY(13, 4, 10));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_185);
          ComplexEventTimes_NoComplexEventTimes_185.insert(ComplexEventEndTime_185.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_185(FIX::UTCTIMEONLY(9, 45, 17));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_185);
          ComplexEventTimes_NoComplexEventTimes_185.insert(ComplexEventStartTime_185.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_185);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_186;
          FIX::ComplexEventEndTime ComplexEventEndTime_186(FIX::UTCTIMEONLY(20, 56, 36));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_186);
          ComplexEventTimes_NoComplexEventTimes_186.insert(ComplexEventEndTime_186.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_186(FIX::UTCTIMEONLY(15, 21, 27));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_186);
          ComplexEventTimes_NoComplexEventTimes_186.insert(ComplexEventStartTime_186.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_186);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_87;
        FIX::ComplexEventEndDate ComplexEventEndDate_87(FIX::UTCTIMESTAMP(12, 27, 26, 3, 9, 2008));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_87);
        ComplexEventDates_NoComplexEventDates_87.insert(ComplexEventEndDate_87.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_87(FIX::UTCTIMESTAMP(15, 5, 49, 24, 11, 2010));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_87);
        ComplexEventDates_NoComplexEventDates_87.insert(ComplexEventStartDate_87.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_87);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_187;
          FIX::ComplexEventEndTime ComplexEventEndTime_187(FIX::UTCTIMEONLY(15, 50, 3));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_187);
          ComplexEventTimes_NoComplexEventTimes_187.insert(ComplexEventEndTime_187.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_187(FIX::UTCTIMEONLY(23, 40, 0));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_187);
          ComplexEventTimes_NoComplexEventTimes_187.insert(ComplexEventStartTime_187.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_187);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_88;
        FIX::ComplexEventEndDate ComplexEventEndDate_88(FIX::UTCTIMESTAMP(5, 48, 47, 15, 5, 2001));
        noComplexEventDates_0_2_2_2.set(ComplexEventEndDate_88);
        ComplexEventDates_NoComplexEventDates_88.insert(ComplexEventEndDate_88.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_88(FIX::UTCTIMESTAMP(10, 53, 49, 21, 2, 2008));
        noComplexEventDates_0_2_2_2.set(ComplexEventStartDate_88);
        ComplexEventDates_NoComplexEventDates_88.insert(ComplexEventStartDate_88.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_88);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_188;
          FIX::ComplexEventEndTime ComplexEventEndTime_188(FIX::UTCTIMEONLY(17, 41, 17));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventEndTime_188);
          ComplexEventTimes_NoComplexEventTimes_188.insert(ComplexEventEndTime_188.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_188(FIX::UTCTIMEONLY(3, 43, 11));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventStartTime_188);
          ComplexEventTimes_NoComplexEventTimes_188.insert(ComplexEventStartTime_188.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_188);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_189;
          FIX::ComplexEventEndTime ComplexEventEndTime_189(FIX::UTCTIMEONLY(10, 1, 40));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventEndTime_189);
          ComplexEventTimes_NoComplexEventTimes_189.insert(ComplexEventEndTime_189.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_189(FIX::UTCTIMEONLY(17, 20, 34));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventStartTime_189);
          ComplexEventTimes_NoComplexEventTimes_189.insert(ComplexEventStartTime_189.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_189);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_33;
      FIX::EventDate EventDate_33("LOCALMKTDATE_1663362601");
      noEvents_0_1_0.set(EventDate_33);
      EvntGrp_NoEvents_33.insert(EventDate_33.getString());
      FIX::EventPx EventPx_33;
      EventPx_33.setString("18690902");
      noEvents_0_1_0.set(EventPx_33);
      EvntGrp_NoEvents_33.insert(EventPx_33.getString());
      FIX::EventText EventText_33("STRING_1406067259");
      noEvents_0_1_0.set(EventText_33);
      EvntGrp_NoEvents_33.insert(EventText_33.getString());
      FIX::EventTime EventTime_33(FIX::UTCTIMESTAMP(19, 20, 18, 13, 7, 2008));
      noEvents_0_1_0.set(EventTime_33);
      EvntGrp_NoEvents_33.insert(EventTime_33.getString());
      FIX::EventType EventType_33(19);
      noEvents_0_1_0.set(EventType_33);
      EvntGrp_NoEvents_33.insert(EventType_33.getString());
      all_values.push_back(EvntGrp_NoEvents_33);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_34;
      FIX::EventDate EventDate_34("LOCALMKTDATE_864112999");
      noEvents_0_1_1.set(EventDate_34);
      EvntGrp_NoEvents_34.insert(EventDate_34.getString());
      FIX::EventPx EventPx_34;
      EventPx_34.setString("6521459");
      noEvents_0_1_1.set(EventPx_34);
      EvntGrp_NoEvents_34.insert(EventPx_34.getString());
      FIX::EventText EventText_34("STRING_189154214");
      noEvents_0_1_1.set(EventText_34);
      EvntGrp_NoEvents_34.insert(EventText_34.getString());
      FIX::EventTime EventTime_34(FIX::UTCTIMESTAMP(7, 55, 56, 25, 11, 2004));
      noEvents_0_1_1.set(EventTime_34);
      EvntGrp_NoEvents_34.insert(EventTime_34.getString());
      FIX::EventType EventType_34(9);
      noEvents_0_1_1.set(EventType_34);
      EvntGrp_NoEvents_34.insert(EventType_34.getString());
      all_values.push_back(EvntGrp_NoEvents_34);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_35;
      FIX::EventDate EventDate_35("LOCALMKTDATE_813216562");
      noEvents_0_1_2.set(EventDate_35);
      EvntGrp_NoEvents_35.insert(EventDate_35.getString());
      FIX::EventPx EventPx_35;
      EventPx_35.setString("9924431");
      noEvents_0_1_2.set(EventPx_35);
      EvntGrp_NoEvents_35.insert(EventPx_35.getString());
      FIX::EventText EventText_35("STRING_225887242");
      noEvents_0_1_2.set(EventText_35);
      EvntGrp_NoEvents_35.insert(EventText_35.getString());
      FIX::EventTime EventTime_35(FIX::UTCTIMESTAMP(4, 51, 15, 23, 12, 2004));
      noEvents_0_1_2.set(EventTime_35);
      EvntGrp_NoEvents_35.insert(EventTime_35.getString());
      FIX::EventType EventType_35(7);
      noEvents_0_1_2.set(EventType_35);
      EvntGrp_NoEvents_35.insert(EventType_35.getString());
      all_values.push_back(EvntGrp_NoEvents_35);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_35;
      FIX::InstrumentPartyID InstrumentPartyID_35("STRING_86651945");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_35);
      InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyID_35.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_35('7');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_35);
      InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyIDSource_35.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_35(1099000007);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_35);
      InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyRole_35.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_35);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81;
        FIX::InstrumentPartySubID InstrumentPartySubID_81("STRING_370914234");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_81);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81.insert(InstrumentPartySubID_81.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_81(1359322433);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_81);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81.insert(InstrumentPartySubIDType_81.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82;
        FIX::InstrumentPartySubID InstrumentPartySubID_82("STRING_237134723");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_82);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82.insert(InstrumentPartySubID_82.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_82(1000329993);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_82);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82.insert(InstrumentPartySubIDType_82.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83;
        FIX::InstrumentPartySubID InstrumentPartySubID_83("STRING_75951784");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_83);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83.insert(InstrumentPartySubID_83.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_83(889280641);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_83);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83.insert(InstrumentPartySubIDType_83.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_36;
      FIX::InstrumentPartyID InstrumentPartyID_36("STRING_1189484207");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_36);
      InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyID_36.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_36('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_36);
      InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyIDSource_36.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_36(816118561);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_36);
      InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyRole_36.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_36);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84;
        FIX::InstrumentPartySubID InstrumentPartySubID_84("STRING_1456971287");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_84);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84.insert(InstrumentPartySubID_84.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_84(413062518);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_84);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84.insert(InstrumentPartySubIDType_84.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_40;
      FIX::SecurityAltID SecurityAltID_40("STRING_465353719");
      noSecurityAltID_0_1_0.set(SecurityAltID_40);
      SecAltIDGrp_NoSecurityAltID_40.insert(SecurityAltID_40.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_40("STRING_1103568406");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_40);
      SecAltIDGrp_NoSecurityAltID_40.insert(SecurityAltIDSource_40.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_40);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_41;
      FIX::SecurityAltID SecurityAltID_41("STRING_507268594");
      noSecurityAltID_0_1_1.set(SecurityAltID_41);
      SecAltIDGrp_NoSecurityAltID_41.insert(SecurityAltID_41.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_41("STRING_1457796890");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_41);
      SecAltIDGrp_NoSecurityAltID_41.insert(SecurityAltIDSource_41.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_41);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_42;
      FIX::SecurityAltID SecurityAltID_42("STRING_1329455648");
      noSecurityAltID_0_1_2.set(SecurityAltID_42);
      SecAltIDGrp_NoSecurityAltID_42.insert(SecurityAltID_42.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_42("STRING_1593421297");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_42);
      SecAltIDGrp_NoSecurityAltID_42.insert(SecurityAltIDSource_42.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_42);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_38;
    FIX::SecurityXML SecurityXML_39("XMLDATA_425226766");
    noRelatedSym_0_0.set(SecurityXML_39);
    FIX::SecurityXMLLen SecurityXMLLen_19(862374531);
    noRelatedSym_0_0.set(SecurityXMLLen_19);
    FIX::SecurityXMLSchema SecurityXMLSchema_19("STRING_1952401612");
    noRelatedSym_0_0.set(SecurityXMLSchema_19);
    SecurityXML_38.insert(SecurityXMLSchema_19.getString());
    all_values.push_back(SecurityXML_38);

    // InstrumentExtension
    multiset<string> InstrumentExtension_6;
    FIX::DeliveryForm DeliveryForm_6(2);
    noRelatedSym_0_0.set(DeliveryForm_6);
    InstrumentExtension_6.insert(DeliveryForm_6.getString());
    FIX::PctAtRisk PctAtRisk_6;
    PctAtRisk_6.setString("98.660000");
    noRelatedSym_0_0.set(PctAtRisk_6);
    InstrumentExtension_6.insert(PctAtRisk_6.getString());
    all_values.push_back(InstrumentExtension_6);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_12;
      FIX::InstrAttribType InstrAttribType_12(4);
      noInstrAttrib_0_1_0.set(InstrAttribType_12);
      AttrbGrp_NoInstrAttrib_12.insert(InstrAttribType_12.getString());
      FIX::InstrAttribValue InstrAttribValue_12("STRING_2042952461");
      noInstrAttrib_0_1_0.set(InstrAttribValue_12);
      AttrbGrp_NoInstrAttrib_12.insert(InstrAttribValue_12.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_12);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_2;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_2;
    SecondaryHighLimitPrice_2.setString("19139128");
    noRelatedSym_0_0.set(SecondaryHighLimitPrice_2);
    SecondaryPriceLimits_2.insert(SecondaryHighLimitPrice_2.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_2;
    SecondaryLowLimitPrice_2.setString("16556071");
    noRelatedSym_0_0.set(SecondaryLowLimitPrice_2);
    SecondaryPriceLimits_2.insert(SecondaryLowLimitPrice_2.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_2(994468820);
    noRelatedSym_0_0.set(SecondaryPriceLimitType_2);
    SecondaryPriceLimits_2.insert(SecondaryPriceLimitType_2.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_2;
    SecondaryTradingReferencePrice_2.setString("3617886");
    noRelatedSym_0_0.set(SecondaryTradingReferencePrice_2);
    SecondaryPriceLimits_2.insert(SecondaryTradingReferencePrice_2.getString());
    all_values.push_back(SecondaryPriceLimits_2);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_1;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_1;
    FIX::CorporateAction CorporateAction_3("MULTIPLECHARVALUE_O");
    noRelatedSym_0_1.set(CorporateAction_3);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(CorporateAction_3.getString());
    FIX::Currency Currency_18("GBP");
    noRelatedSym_0_1.set(Currency_18);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(Currency_18.getString());
    FIX::EncodedText EncodedText_34("DATA_879367688");
    noRelatedSym_0_1.set(EncodedText_34);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(EncodedText_34.getString());
    FIX::EncodedTextLen EncodedTextLen_34(282259389);
    noRelatedSym_0_1.set(EncodedTextLen_34);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(EncodedTextLen_34.getString());
    FIX::ListUpdateAction ListUpdateAction_1('1');
    noRelatedSym_0_1.set(ListUpdateAction_1);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(ListUpdateAction_1.getString());
    FIX::RelSymTransactTime RelSymTransactTime_3(FIX::UTCTIMESTAMP(0, 39, 29, 27, 10, 2005));
    noRelatedSym_0_1.set(RelSymTransactTime_3);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(RelSymTransactTime_3.getString());
    FIX::Text Text_34("STRING_1248258359");
    noRelatedSym_0_1.set(Text_34);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(Text_34.getString());
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_34;
      FIX::EncodedLegIssuer EncodedLegIssuer_34("DATA_2061936555");
      noLegs_1_1_0.set(EncodedLegIssuer_34);
      InstrumentLeg_34.insert(EncodedLegIssuer_34.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_34(558571601);
      noLegs_1_1_0.set(EncodedLegIssuerLen_34);
      InstrumentLeg_34.insert(EncodedLegIssuerLen_34.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_34("DATA_855441884");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_34);
      InstrumentLeg_34.insert(EncodedLegSecurityDesc_34.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_34(1507874204);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_34);
      InstrumentLeg_34.insert(EncodedLegSecurityDescLen_34.getString());
      FIX::LegCFICode LegCFICode_34("STRING_983798367");
      noLegs_1_1_0.set(LegCFICode_34);
      InstrumentLeg_34.insert(LegCFICode_34.getString());
      FIX::LegContractMultiplier LegContractMultiplier_34;
      LegContractMultiplier_34.setString("17178164");
      noLegs_1_1_0.set(LegContractMultiplier_34);
      InstrumentLeg_34.insert(LegContractMultiplier_34.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_34(1312792168);
      noLegs_1_1_0.set(LegContractMultiplierUnit_34);
      InstrumentLeg_34.insert(LegContractMultiplierUnit_34.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_34("MONTHYEAR_2128373325");
      noLegs_1_1_0.set(LegContractSettlMonth_34);
      InstrumentLeg_34.insert(LegContractSettlMonth_34.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_34("COUNTRY_319962634");
      noLegs_1_1_0.set(LegCountryOfIssue_34);
      InstrumentLeg_34.insert(LegCountryOfIssue_34.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_34("LOCALMKTDATE_992569401");
      noLegs_1_1_0.set(LegCouponPaymentDate_34);
      InstrumentLeg_34.insert(LegCouponPaymentDate_34.getString());
      FIX::LegCouponRate LegCouponRate_34;
      LegCouponRate_34.setString("93.800000");
      noLegs_1_1_0.set(LegCouponRate_34);
      InstrumentLeg_34.insert(LegCouponRate_34.getString());
      FIX::LegCreditRating LegCreditRating_34("STRING_215431447");
      noLegs_1_1_0.set(LegCreditRating_34);
      InstrumentLeg_34.insert(LegCreditRating_34.getString());
      FIX::LegCurrency LegCurrency_34("CHF");
      noLegs_1_1_0.set(LegCurrency_34);
      InstrumentLeg_34.insert(LegCurrency_34.getString());
      FIX::LegDatedDate LegDatedDate_34("LOCALMKTDATE_1209900267");
      noLegs_1_1_0.set(LegDatedDate_34);
      InstrumentLeg_34.insert(LegDatedDate_34.getString());
      FIX::LegExerciseStyle LegExerciseStyle_34(1120787259);
      noLegs_1_1_0.set(LegExerciseStyle_34);
      InstrumentLeg_34.insert(LegExerciseStyle_34.getString());
      FIX::LegFactor LegFactor_34;
      LegFactor_34.setString("9535805");
      noLegs_1_1_0.set(LegFactor_34);
      InstrumentLeg_34.insert(LegFactor_34.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_34(1416207872);
      noLegs_1_1_0.set(LegFlowScheduleType_34);
      InstrumentLeg_34.insert(LegFlowScheduleType_34.getString());
      FIX::LegInstrRegistry LegInstrRegistry_34("STRING_1719710664");
      noLegs_1_1_0.set(LegInstrRegistry_34);
      InstrumentLeg_34.insert(LegInstrRegistry_34.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_34("LOCALMKTDATE_1832948224");
      noLegs_1_1_0.set(LegInterestAccrualDate_34);
      InstrumentLeg_34.insert(LegInterestAccrualDate_34.getString());
      FIX::LegIssueDate LegIssueDate_34("LOCALMKTDATE_1698467261");
      noLegs_1_1_0.set(LegIssueDate_34);
      InstrumentLeg_34.insert(LegIssueDate_34.getString());
      FIX::LegIssuer LegIssuer_34("STRING_1060431062");
      noLegs_1_1_0.set(LegIssuer_34);
      InstrumentLeg_34.insert(LegIssuer_34.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_34("STRING_1754316471");
      noLegs_1_1_0.set(LegLocaleOfIssue_34);
      InstrumentLeg_34.insert(LegLocaleOfIssue_34.getString());
      FIX::LegMaturityDate LegMaturityDate_34("LOCALMKTDATE_1024400613");
      noLegs_1_1_0.set(LegMaturityDate_34);
      InstrumentLeg_34.insert(LegMaturityDate_34.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_34("MONTHYEAR_1217270021");
      noLegs_1_1_0.set(LegMaturityMonthYear_34);
      InstrumentLeg_34.insert(LegMaturityMonthYear_34.getString());
      FIX::LegMaturityTime LegMaturityTime_34("TZTIMEONLY_1467448752");
      noLegs_1_1_0.set(LegMaturityTime_34);
      InstrumentLeg_34.insert(LegMaturityTime_34.getString());
      FIX::LegOptAttribute LegOptAttribute_34('1');
      noLegs_1_1_0.set(LegOptAttribute_34);
      InstrumentLeg_34.insert(LegOptAttribute_34.getString());
      FIX::LegOptionRatio LegOptionRatio_34;
      LegOptionRatio_34.setString("17871714");
      noLegs_1_1_0.set(LegOptionRatio_34);
      InstrumentLeg_34.insert(LegOptionRatio_34.getString());
      FIX::LegPool LegPool_34("STRING_874633065");
      noLegs_1_1_0.set(LegPool_34);
      InstrumentLeg_34.insert(LegPool_34.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_34("STRING_908079963");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_34);
      InstrumentLeg_34.insert(LegPriceUnitOfMeasure_34.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_34;
      LegPriceUnitOfMeasureQty_34.setString("13131577");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_34);
      InstrumentLeg_34.insert(LegPriceUnitOfMeasureQty_34.getString());
      FIX::LegProduct LegProduct_34(789085972);
      noLegs_1_1_0.set(LegProduct_34);
      InstrumentLeg_34.insert(LegProduct_34.getString());
      FIX::LegPutOrCall LegPutOrCall_34(1466651564);
      noLegs_1_1_0.set(LegPutOrCall_34);
      InstrumentLeg_34.insert(LegPutOrCall_34.getString());
      FIX::LegRatioQty LegRatioQty_34;
      LegRatioQty_34.setString("211159");
      noLegs_1_1_0.set(LegRatioQty_34);
      InstrumentLeg_34.insert(LegRatioQty_34.getString());
      FIX::LegRedemptionDate LegRedemptionDate_34("LOCALMKTDATE_149476529");
      noLegs_1_1_0.set(LegRedemptionDate_34);
      InstrumentLeg_34.insert(LegRedemptionDate_34.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_34("STRING_302966284");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_34);
      InstrumentLeg_34.insert(LegRepoCollateralSecurityType_34.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_34;
      LegRepurchaseRate_34.setString("23.850000");
      noLegs_1_1_0.set(LegRepurchaseRate_34);
      InstrumentLeg_34.insert(LegRepurchaseRate_34.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_34(1462268697);
      noLegs_1_1_0.set(LegRepurchaseTerm_34);
      InstrumentLeg_34.insert(LegRepurchaseTerm_34.getString());
      FIX::LegSecurityDesc LegSecurityDesc_34("STRING_283855961");
      noLegs_1_1_0.set(LegSecurityDesc_34);
      InstrumentLeg_34.insert(LegSecurityDesc_34.getString());
      FIX::LegSecurityExchange LegSecurityExchange_34("EXCHANGE_2058895019");
      noLegs_1_1_0.set(LegSecurityExchange_34);
      InstrumentLeg_34.insert(LegSecurityExchange_34.getString());
      FIX::LegSecurityID LegSecurityID_34("STRING_307354450");
      noLegs_1_1_0.set(LegSecurityID_34);
      InstrumentLeg_34.insert(LegSecurityID_34.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_34("STRING_1850275341");
      noLegs_1_1_0.set(LegSecurityIDSource_34);
      InstrumentLeg_34.insert(LegSecurityIDSource_34.getString());
      FIX::LegSecuritySubType LegSecuritySubType_34("STRING_126842818");
      noLegs_1_1_0.set(LegSecuritySubType_34);
      InstrumentLeg_34.insert(LegSecuritySubType_34.getString());
      FIX::LegSecurityType LegSecurityType_34("STRING_1066353029");
      noLegs_1_1_0.set(LegSecurityType_34);
      InstrumentLeg_34.insert(LegSecurityType_34.getString());
      FIX::LegSide LegSide_34('7');
      noLegs_1_1_0.set(LegSide_34);
      InstrumentLeg_34.insert(LegSide_34.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_34("STRING_1336743085");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_34);
      InstrumentLeg_34.insert(LegStateOrProvinceOfIssue_34.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_34("USD");
      noLegs_1_1_0.set(LegStrikeCurrency_34);
      InstrumentLeg_34.insert(LegStrikeCurrency_34.getString());
      FIX::LegStrikePrice LegStrikePrice_34;
      LegStrikePrice_34.setString("6054673");
      noLegs_1_1_0.set(LegStrikePrice_34);
      InstrumentLeg_34.insert(LegStrikePrice_34.getString());
      FIX::LegSymbol LegSymbol_34("STRING_1759367304");
      noLegs_1_1_0.set(LegSymbol_34);
      InstrumentLeg_34.insert(LegSymbol_34.getString());
      FIX::LegSymbolSfx LegSymbolSfx_34("STRING_1416379646");
      noLegs_1_1_0.set(LegSymbolSfx_34);
      InstrumentLeg_34.insert(LegSymbolSfx_34.getString());
      FIX::LegTimeUnit LegTimeUnit_34("STRING_156450922");
      noLegs_1_1_0.set(LegTimeUnit_34);
      InstrumentLeg_34.insert(LegTimeUnit_34.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_34("STRING_672314718");
      noLegs_1_1_0.set(LegUnitOfMeasure_34);
      InstrumentLeg_34.insert(LegUnitOfMeasure_34.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_34;
      LegUnitOfMeasureQty_34.setString("10232124");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_34);
      InstrumentLeg_34.insert(LegUnitOfMeasureQty_34.getString());
      all_values.push_back(InstrumentLeg_34);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_75;
        FIX::LegSecurityAltID LegSecurityAltID_75("STRING_1889584739");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_75);
        LegSecAltIDGrp_NoLegSecurityAltID_75.insert(LegSecurityAltID_75.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_75("STRING_343177573");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_75);
        LegSecAltIDGrp_NoLegSecurityAltID_75.insert(LegSecurityAltIDSource_75.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_75);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_76;
        FIX::LegSecurityAltID LegSecurityAltID_76("STRING_840673139");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_76);
        LegSecAltIDGrp_NoLegSecurityAltID_76.insert(LegSecurityAltID_76.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_76("STRING_1529272589");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_76);
        LegSecAltIDGrp_NoLegSecurityAltID_76.insert(LegSecurityAltIDSource_76.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_76);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_35;
      FIX::EncodedLegIssuer EncodedLegIssuer_35("DATA_1217810638");
      noLegs_1_1_1.set(EncodedLegIssuer_35);
      InstrumentLeg_35.insert(EncodedLegIssuer_35.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_35(1748753103);
      noLegs_1_1_1.set(EncodedLegIssuerLen_35);
      InstrumentLeg_35.insert(EncodedLegIssuerLen_35.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_35("DATA_694946675");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_35);
      InstrumentLeg_35.insert(EncodedLegSecurityDesc_35.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_35(2006896611);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_35);
      InstrumentLeg_35.insert(EncodedLegSecurityDescLen_35.getString());
      FIX::LegCFICode LegCFICode_35("STRING_1067921019");
      noLegs_1_1_1.set(LegCFICode_35);
      InstrumentLeg_35.insert(LegCFICode_35.getString());
      FIX::LegContractMultiplier LegContractMultiplier_35;
      LegContractMultiplier_35.setString("7160626");
      noLegs_1_1_1.set(LegContractMultiplier_35);
      InstrumentLeg_35.insert(LegContractMultiplier_35.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_35(8889492);
      noLegs_1_1_1.set(LegContractMultiplierUnit_35);
      InstrumentLeg_35.insert(LegContractMultiplierUnit_35.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_35("MONTHYEAR_1370887303");
      noLegs_1_1_1.set(LegContractSettlMonth_35);
      InstrumentLeg_35.insert(LegContractSettlMonth_35.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_35("COUNTRY_307511381");
      noLegs_1_1_1.set(LegCountryOfIssue_35);
      InstrumentLeg_35.insert(LegCountryOfIssue_35.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_35("LOCALMKTDATE_1471158189");
      noLegs_1_1_1.set(LegCouponPaymentDate_35);
      InstrumentLeg_35.insert(LegCouponPaymentDate_35.getString());
      FIX::LegCouponRate LegCouponRate_35;
      LegCouponRate_35.setString("32.640000");
      noLegs_1_1_1.set(LegCouponRate_35);
      InstrumentLeg_35.insert(LegCouponRate_35.getString());
      FIX::LegCreditRating LegCreditRating_35("STRING_218922752");
      noLegs_1_1_1.set(LegCreditRating_35);
      InstrumentLeg_35.insert(LegCreditRating_35.getString());
      FIX::LegCurrency LegCurrency_35("GBP");
      noLegs_1_1_1.set(LegCurrency_35);
      InstrumentLeg_35.insert(LegCurrency_35.getString());
      FIX::LegDatedDate LegDatedDate_35("LOCALMKTDATE_345765570");
      noLegs_1_1_1.set(LegDatedDate_35);
      InstrumentLeg_35.insert(LegDatedDate_35.getString());
      FIX::LegExerciseStyle LegExerciseStyle_35(697382021);
      noLegs_1_1_1.set(LegExerciseStyle_35);
      InstrumentLeg_35.insert(LegExerciseStyle_35.getString());
      FIX::LegFactor LegFactor_35;
      LegFactor_35.setString("21348694");
      noLegs_1_1_1.set(LegFactor_35);
      InstrumentLeg_35.insert(LegFactor_35.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_35(1682508655);
      noLegs_1_1_1.set(LegFlowScheduleType_35);
      InstrumentLeg_35.insert(LegFlowScheduleType_35.getString());
      FIX::LegInstrRegistry LegInstrRegistry_35("STRING_737038661");
      noLegs_1_1_1.set(LegInstrRegistry_35);
      InstrumentLeg_35.insert(LegInstrRegistry_35.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_35("LOCALMKTDATE_1718300915");
      noLegs_1_1_1.set(LegInterestAccrualDate_35);
      InstrumentLeg_35.insert(LegInterestAccrualDate_35.getString());
      FIX::LegIssueDate LegIssueDate_35("LOCALMKTDATE_140492316");
      noLegs_1_1_1.set(LegIssueDate_35);
      InstrumentLeg_35.insert(LegIssueDate_35.getString());
      FIX::LegIssuer LegIssuer_35("STRING_348922318");
      noLegs_1_1_1.set(LegIssuer_35);
      InstrumentLeg_35.insert(LegIssuer_35.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_35("STRING_987196913");
      noLegs_1_1_1.set(LegLocaleOfIssue_35);
      InstrumentLeg_35.insert(LegLocaleOfIssue_35.getString());
      FIX::LegMaturityDate LegMaturityDate_35("LOCALMKTDATE_296943238");
      noLegs_1_1_1.set(LegMaturityDate_35);
      InstrumentLeg_35.insert(LegMaturityDate_35.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_35("MONTHYEAR_1021237036");
      noLegs_1_1_1.set(LegMaturityMonthYear_35);
      InstrumentLeg_35.insert(LegMaturityMonthYear_35.getString());
      FIX::LegMaturityTime LegMaturityTime_35("TZTIMEONLY_2010409383");
      noLegs_1_1_1.set(LegMaturityTime_35);
      InstrumentLeg_35.insert(LegMaturityTime_35.getString());
      FIX::LegOptAttribute LegOptAttribute_35('1');
      noLegs_1_1_1.set(LegOptAttribute_35);
      InstrumentLeg_35.insert(LegOptAttribute_35.getString());
      FIX::LegOptionRatio LegOptionRatio_35;
      LegOptionRatio_35.setString("7633381");
      noLegs_1_1_1.set(LegOptionRatio_35);
      InstrumentLeg_35.insert(LegOptionRatio_35.getString());
      FIX::LegPool LegPool_35("STRING_206103308");
      noLegs_1_1_1.set(LegPool_35);
      InstrumentLeg_35.insert(LegPool_35.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_35("STRING_170984265");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_35);
      InstrumentLeg_35.insert(LegPriceUnitOfMeasure_35.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_35;
      LegPriceUnitOfMeasureQty_35.setString("1451270");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_35);
      InstrumentLeg_35.insert(LegPriceUnitOfMeasureQty_35.getString());
      FIX::LegProduct LegProduct_35(1423913947);
      noLegs_1_1_1.set(LegProduct_35);
      InstrumentLeg_35.insert(LegProduct_35.getString());
      FIX::LegPutOrCall LegPutOrCall_35(1919737368);
      noLegs_1_1_1.set(LegPutOrCall_35);
      InstrumentLeg_35.insert(LegPutOrCall_35.getString());
      FIX::LegRatioQty LegRatioQty_35;
      LegRatioQty_35.setString("8400737");
      noLegs_1_1_1.set(LegRatioQty_35);
      InstrumentLeg_35.insert(LegRatioQty_35.getString());
      FIX::LegRedemptionDate LegRedemptionDate_35("LOCALMKTDATE_1283326910");
      noLegs_1_1_1.set(LegRedemptionDate_35);
      InstrumentLeg_35.insert(LegRedemptionDate_35.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_35("STRING_840174739");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_35);
      InstrumentLeg_35.insert(LegRepoCollateralSecurityType_35.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_35;
      LegRepurchaseRate_35.setString("63.890000");
      noLegs_1_1_1.set(LegRepurchaseRate_35);
      InstrumentLeg_35.insert(LegRepurchaseRate_35.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_35(1292216402);
      noLegs_1_1_1.set(LegRepurchaseTerm_35);
      InstrumentLeg_35.insert(LegRepurchaseTerm_35.getString());
      FIX::LegSecurityDesc LegSecurityDesc_35("STRING_63578395");
      noLegs_1_1_1.set(LegSecurityDesc_35);
      InstrumentLeg_35.insert(LegSecurityDesc_35.getString());
      FIX::LegSecurityExchange LegSecurityExchange_35("EXCHANGE_1863647770");
      noLegs_1_1_1.set(LegSecurityExchange_35);
      InstrumentLeg_35.insert(LegSecurityExchange_35.getString());
      FIX::LegSecurityID LegSecurityID_35("STRING_615890943");
      noLegs_1_1_1.set(LegSecurityID_35);
      InstrumentLeg_35.insert(LegSecurityID_35.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_35("STRING_1718321659");
      noLegs_1_1_1.set(LegSecurityIDSource_35);
      InstrumentLeg_35.insert(LegSecurityIDSource_35.getString());
      FIX::LegSecuritySubType LegSecuritySubType_35("STRING_2082570523");
      noLegs_1_1_1.set(LegSecuritySubType_35);
      InstrumentLeg_35.insert(LegSecuritySubType_35.getString());
      FIX::LegSecurityType LegSecurityType_35("STRING_246919935");
      noLegs_1_1_1.set(LegSecurityType_35);
      InstrumentLeg_35.insert(LegSecurityType_35.getString());
      FIX::LegSide LegSide_35('9');
      noLegs_1_1_1.set(LegSide_35);
      InstrumentLeg_35.insert(LegSide_35.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_35("STRING_280852445");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_35);
      InstrumentLeg_35.insert(LegStateOrProvinceOfIssue_35.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_35("USD");
      noLegs_1_1_1.set(LegStrikeCurrency_35);
      InstrumentLeg_35.insert(LegStrikeCurrency_35.getString());
      FIX::LegStrikePrice LegStrikePrice_35;
      LegStrikePrice_35.setString("19633611");
      noLegs_1_1_1.set(LegStrikePrice_35);
      InstrumentLeg_35.insert(LegStrikePrice_35.getString());
      FIX::LegSymbol LegSymbol_35("STRING_1681340618");
      noLegs_1_1_1.set(LegSymbol_35);
      InstrumentLeg_35.insert(LegSymbol_35.getString());
      FIX::LegSymbolSfx LegSymbolSfx_35("STRING_486576081");
      noLegs_1_1_1.set(LegSymbolSfx_35);
      InstrumentLeg_35.insert(LegSymbolSfx_35.getString());
      FIX::LegTimeUnit LegTimeUnit_35("STRING_2103853417");
      noLegs_1_1_1.set(LegTimeUnit_35);
      InstrumentLeg_35.insert(LegTimeUnit_35.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_35("STRING_2030262936");
      noLegs_1_1_1.set(LegUnitOfMeasure_35);
      InstrumentLeg_35.insert(LegUnitOfMeasure_35.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_35;
      LegUnitOfMeasureQty_35.setString("14737729");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_35);
      InstrumentLeg_35.insert(LegUnitOfMeasureQty_35.getString());
      all_values.push_back(InstrumentLeg_35);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_77;
        FIX::LegSecurityAltID LegSecurityAltID_77("STRING_904016324");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_77);
        LegSecAltIDGrp_NoLegSecurityAltID_77.insert(LegSecurityAltID_77.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_77("STRING_1336698729");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_77);
        LegSecAltIDGrp_NoLegSecurityAltID_77.insert(LegSecurityAltIDSource_77.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_77);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_78;
        FIX::LegSecurityAltID LegSecurityAltID_78("STRING_1731107781");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltID_78);
        LegSecAltIDGrp_NoLegSecurityAltID_78.insert(LegSecurityAltID_78.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_78("STRING_1667354452");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltIDSource_78);
        LegSecAltIDGrp_NoLegSecurityAltID_78.insert(LegSecurityAltIDSource_78.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_78);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_20;
    FIX::AttachmentPoint AttachmentPoint_20;
    AttachmentPoint_20.setString("20.380000");
    noRelatedSym_0_1.set(AttachmentPoint_20);
    Instrument_20.insert(AttachmentPoint_20.getString());
    FIX::CFICode CFICode_20("STRING_1902092046");
    noRelatedSym_0_1.set(CFICode_20);
    Instrument_20.insert(CFICode_20.getString());
    FIX::CPProgram CPProgram_20(2);
    noRelatedSym_0_1.set(CPProgram_20);
    Instrument_20.insert(CPProgram_20.getString());
    FIX::CPRegType CPRegType_20("STRING_819232337");
    noRelatedSym_0_1.set(CPRegType_20);
    Instrument_20.insert(CPRegType_20.getString());
    FIX::CapPrice CapPrice_20;
    CapPrice_20.setString("16743457");
    noRelatedSym_0_1.set(CapPrice_20);
    Instrument_20.insert(CapPrice_20.getString());
    FIX::ContractMultiplier ContractMultiplier_20;
    ContractMultiplier_20.setString("5050716");
    noRelatedSym_0_1.set(ContractMultiplier_20);
    Instrument_20.insert(ContractMultiplier_20.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_20(1);
    noRelatedSym_0_1.set(ContractMultiplierUnit_20);
    Instrument_20.insert(ContractMultiplierUnit_20.getString());
    FIX::ContractSettlMonth ContractSettlMonth_20("MONTHYEAR_367036858");
    noRelatedSym_0_1.set(ContractSettlMonth_20);
    Instrument_20.insert(ContractSettlMonth_20.getString());
    FIX::CountryOfIssue CountryOfIssue_20("COUNTRY_2061208007");
    noRelatedSym_0_1.set(CountryOfIssue_20);
    Instrument_20.insert(CountryOfIssue_20.getString());
    FIX::CouponPaymentDate CouponPaymentDate_20("LOCALMKTDATE_1247292001");
    noRelatedSym_0_1.set(CouponPaymentDate_20);
    Instrument_20.insert(CouponPaymentDate_20.getString());
    FIX::CouponRate CouponRate_20;
    CouponRate_20.setString("52.530000");
    noRelatedSym_0_1.set(CouponRate_20);
    Instrument_20.insert(CouponRate_20.getString());
    FIX::CreditRating CreditRating_20("STRING_1777372130");
    noRelatedSym_0_1.set(CreditRating_20);
    Instrument_20.insert(CreditRating_20.getString());
    FIX::DatedDate DatedDate_20("LOCALMKTDATE_1863182944");
    noRelatedSym_0_1.set(DatedDate_20);
    Instrument_20.insert(DatedDate_20.getString());
    FIX::DetachmentPoint DetachmentPoint_20;
    DetachmentPoint_20.setString("32.640000");
    noRelatedSym_0_1.set(DetachmentPoint_20);
    Instrument_20.insert(DetachmentPoint_20.getString());
    FIX::EncodedIssuer EncodedIssuer_20("DATA_1712459005");
    noRelatedSym_0_1.set(EncodedIssuer_20);
    Instrument_20.insert(EncodedIssuer_20.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_20(2110102880);
    noRelatedSym_0_1.set(EncodedIssuerLen_20);
    Instrument_20.insert(EncodedIssuerLen_20.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_20("DATA_929826234");
    noRelatedSym_0_1.set(EncodedSecurityDesc_20);
    Instrument_20.insert(EncodedSecurityDesc_20.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_20(1993311450);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_20);
    Instrument_20.insert(EncodedSecurityDescLen_20.getString());
    FIX::ExerciseStyle ExerciseStyle_20(2);
    noRelatedSym_0_1.set(ExerciseStyle_20);
    Instrument_20.insert(ExerciseStyle_20.getString());
    FIX::Factor Factor_20;
    Factor_20.setString("18455850");
    noRelatedSym_0_1.set(Factor_20);
    Instrument_20.insert(Factor_20.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_20(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_20);
    Instrument_20.insert(FlexProductEligibilityIndicator_20.getString());
    FIX::FlexibleIndicator FlexibleIndicator_20(true);
    noRelatedSym_0_1.set(FlexibleIndicator_20);
    Instrument_20.insert(FlexibleIndicator_20.getString());
    FIX::FloorPrice FloorPrice_20;
    FloorPrice_20.setString("1846774");
    noRelatedSym_0_1.set(FloorPrice_20);
    Instrument_20.insert(FloorPrice_20.getString());
    FIX::FlowScheduleType FlowScheduleType_20(3);
    noRelatedSym_0_1.set(FlowScheduleType_20);
    Instrument_20.insert(FlowScheduleType_20.getString());
    FIX::InstrRegistry InstrRegistry_20("STRING_323557446");
    noRelatedSym_0_1.set(InstrRegistry_20);
    Instrument_20.insert(InstrRegistry_20.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_20('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_20);
    Instrument_20.insert(InstrmtAssignmentMethod_20.getString());
    FIX::InterestAccrualDate InterestAccrualDate_20("LOCALMKTDATE_2018871681");
    noRelatedSym_0_1.set(InterestAccrualDate_20);
    Instrument_20.insert(InterestAccrualDate_20.getString());
    FIX::IssueDate IssueDate_20("LOCALMKTDATE_1227573771");
    noRelatedSym_0_1.set(IssueDate_20);
    Instrument_20.insert(IssueDate_20.getString());
    FIX::Issuer Issuer_20("STRING_847665557");
    noRelatedSym_0_1.set(Issuer_20);
    Instrument_20.insert(Issuer_20.getString());
    FIX::ListMethod ListMethod_20(0);
    noRelatedSym_0_1.set(ListMethod_20);
    Instrument_20.insert(ListMethod_20.getString());
    FIX::LocaleOfIssue LocaleOfIssue_20("STRING_747444575");
    noRelatedSym_0_1.set(LocaleOfIssue_20);
    Instrument_20.insert(LocaleOfIssue_20.getString());
    FIX::MaturityDate MaturityDate_20("LOCALMKTDATE_242983947");
    noRelatedSym_0_1.set(MaturityDate_20);
    Instrument_20.insert(MaturityDate_20.getString());
    FIX::MaturityMonthYear MaturityMonthYear_20("MONTHYEAR_1357104213");
    noRelatedSym_0_1.set(MaturityMonthYear_20);
    Instrument_20.insert(MaturityMonthYear_20.getString());
    FIX::MaturityTime MaturityTime_20("TZTIMEONLY_412442449");
    noRelatedSym_0_1.set(MaturityTime_20);
    Instrument_20.insert(MaturityTime_20.getString());
    FIX::MinPriceIncrement MinPriceIncrement_20;
    MinPriceIncrement_20.setString("10622162");
    noRelatedSym_0_1.set(MinPriceIncrement_20);
    Instrument_20.insert(MinPriceIncrement_20.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_20;
    MinPriceIncrementAmount_20.setString("8839663");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_20);
    Instrument_20.insert(MinPriceIncrementAmount_20.getString());
    FIX::NTPositionLimit NTPositionLimit_20(917514068);
    noRelatedSym_0_1.set(NTPositionLimit_20);
    Instrument_20.insert(NTPositionLimit_20.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_20;
    NotionalPercentageOutstanding_20.setString("18.830000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_20);
    Instrument_20.insert(NotionalPercentageOutstanding_20.getString());
    FIX::OptAttribute OptAttribute_20('1');
    noRelatedSym_0_1.set(OptAttribute_20);
    Instrument_20.insert(OptAttribute_20.getString());
    FIX::OptPayoutAmount OptPayoutAmount_20;
    OptPayoutAmount_20.setString("8312384");
    noRelatedSym_0_1.set(OptPayoutAmount_20);
    Instrument_20.insert(OptPayoutAmount_20.getString());
    FIX::OptPayoutType OptPayoutType_20(1);
    noRelatedSym_0_1.set(OptPayoutType_20);
    Instrument_20.insert(OptPayoutType_20.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_20;
    OriginalNotionalPercentageOutstanding_20.setString("84.420000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_20);
    Instrument_20.insert(OriginalNotionalPercentageOutstanding_20.getString());
    FIX::Pool Pool_20("STRING_461126909");
    noRelatedSym_0_1.set(Pool_20);
    Instrument_20.insert(Pool_20.getString());
    FIX::PositionLimit PositionLimit_20(1980283180);
    noRelatedSym_0_1.set(PositionLimit_20);
    Instrument_20.insert(PositionLimit_20.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_20("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_20);
    Instrument_20.insert(PriceQuoteMethod_20.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_20("STRING_26102266");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_20);
    Instrument_20.insert(PriceUnitOfMeasure_20.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_20;
    PriceUnitOfMeasureQty_20.setString("19429024");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_20);
    Instrument_20.insert(PriceUnitOfMeasureQty_20.getString());
    FIX::Product Product_22(7);
    noRelatedSym_0_1.set(Product_22);
    Instrument_20.insert(Product_22.getString());
    FIX::ProductComplex ProductComplex_20("STRING_2019413717");
    noRelatedSym_0_1.set(ProductComplex_20);
    Instrument_20.insert(ProductComplex_20.getString());
    FIX::PutOrCall PutOrCall_20(1);
    noRelatedSym_0_1.set(PutOrCall_20);
    Instrument_20.insert(PutOrCall_20.getString());
    FIX::RedemptionDate RedemptionDate_20("LOCALMKTDATE_163515693");
    noRelatedSym_0_1.set(RedemptionDate_20);
    Instrument_20.insert(RedemptionDate_20.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_20("STRING_1681118972");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_20);
    Instrument_20.insert(RepoCollateralSecurityType_20.getString());
    FIX::RepurchaseRate RepurchaseRate_20;
    RepurchaseRate_20.setString("81.110000");
    noRelatedSym_0_1.set(RepurchaseRate_20);
    Instrument_20.insert(RepurchaseRate_20.getString());
    FIX::RepurchaseTerm RepurchaseTerm_20(348193174);
    noRelatedSym_0_1.set(RepurchaseTerm_20);
    Instrument_20.insert(RepurchaseTerm_20.getString());
    FIX::RestructuringType RestructuringType_20("STRING_MR");
    noRelatedSym_0_1.set(RestructuringType_20);
    Instrument_20.insert(RestructuringType_20.getString());
    FIX::SecurityDesc SecurityDesc_20("STRING_1466675558");
    noRelatedSym_0_1.set(SecurityDesc_20);
    Instrument_20.insert(SecurityDesc_20.getString());
    FIX::SecurityExchange SecurityExchange_20("EXCHANGE_2006643649");
    noRelatedSym_0_1.set(SecurityExchange_20);
    Instrument_20.insert(SecurityExchange_20.getString());
    FIX::SecurityGroup SecurityGroup_20("STRING_1170582030");
    noRelatedSym_0_1.set(SecurityGroup_20);
    Instrument_20.insert(SecurityGroup_20.getString());
    FIX::SecurityID SecurityID_20("STRING_546765681");
    noRelatedSym_0_1.set(SecurityID_20);
    Instrument_20.insert(SecurityID_20.getString());
    FIX::SecurityIDSource SecurityIDSource_20("STRING_B");
    noRelatedSym_0_1.set(SecurityIDSource_20);
    Instrument_20.insert(SecurityIDSource_20.getString());
    FIX::SecurityStatus SecurityStatus_20("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_20);
    Instrument_20.insert(SecurityStatus_20.getString());
    FIX::SecuritySubType SecuritySubType_21("STRING_1294210256");
    noRelatedSym_0_1.set(SecuritySubType_21);
    Instrument_20.insert(SecuritySubType_21.getString());
    FIX::SecurityType SecurityType_22("STRING_EUCORP");
    noRelatedSym_0_1.set(SecurityType_22);
    Instrument_20.insert(SecurityType_22.getString());
    FIX::Seniority Seniority_20("STRING_SD");
    noRelatedSym_0_1.set(Seniority_20);
    Instrument_20.insert(Seniority_20.getString());
    FIX::SettlMethod SettlMethod_20('C');
    noRelatedSym_0_1.set(SettlMethod_20);
    Instrument_20.insert(SettlMethod_20.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_20("STRING_2012025789");
    noRelatedSym_0_1.set(SettleOnOpenFlag_20);
    Instrument_20.insert(SettleOnOpenFlag_20.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_20("STRING_719181093");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_20);
    Instrument_20.insert(StateOrProvinceOfIssue_20.getString());
    FIX::StrikeCurrency StrikeCurrency_20("GBP");
    noRelatedSym_0_1.set(StrikeCurrency_20);
    Instrument_20.insert(StrikeCurrency_20.getString());
    FIX::StrikeMultiplier StrikeMultiplier_20;
    StrikeMultiplier_20.setString("19701842");
    noRelatedSym_0_1.set(StrikeMultiplier_20);
    Instrument_20.insert(StrikeMultiplier_20.getString());
    FIX::StrikePrice StrikePrice_20;
    StrikePrice_20.setString("13079215");
    noRelatedSym_0_1.set(StrikePrice_20);
    Instrument_20.insert(StrikePrice_20.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_20(1);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_20);
    Instrument_20.insert(StrikePriceBoundaryMethod_20.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_20;
    StrikePriceBoundaryPrecision_20.setString("90.770000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_20);
    Instrument_20.insert(StrikePriceBoundaryPrecision_20.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_20(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_20);
    Instrument_20.insert(StrikePriceDeterminationMethod_20.getString());
    FIX::StrikeValue StrikeValue_20;
    StrikeValue_20.setString("8317337");
    noRelatedSym_0_1.set(StrikeValue_20);
    Instrument_20.insert(StrikeValue_20.getString());
    FIX::Symbol Symbol_20("STRING_1039907136");
    noRelatedSym_0_1.set(Symbol_20);
    Instrument_20.insert(Symbol_20.getString());
    FIX::SymbolSfx SymbolSfx_20("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_20);
    Instrument_20.insert(SymbolSfx_20.getString());
    FIX::TimeUnit TimeUnit_20("STRING_D");
    noRelatedSym_0_1.set(TimeUnit_20);
    Instrument_20.insert(TimeUnit_20.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_20(2);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_20);
    Instrument_20.insert(UnderlyingPriceDeterminationMethod_20.getString());
    FIX::UnitOfMeasure UnitOfMeasure_20("STRING_lbs");
    noRelatedSym_0_1.set(UnitOfMeasure_20);
    Instrument_20.insert(UnitOfMeasure_20.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_20;
    UnitOfMeasureQty_20.setString("13294925");
    noRelatedSym_0_1.set(UnitOfMeasureQty_20);
    Instrument_20.insert(UnitOfMeasureQty_20.getString());
    FIX::ValuationMethod ValuationMethod_20("STRING_FUTDA");
    noRelatedSym_0_1.set(ValuationMethod_20);
    Instrument_20.insert(ValuationMethod_20.getString());
    all_values.push_back(Instrument_20);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_43;
      FIX::ComplexEventCondition ComplexEventCondition_43(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventCondition_43.getString());
      FIX::ComplexEventPrice ComplexEventPrice_43;
      ComplexEventPrice_43.setString("20170302");
      noComplexEvents_1_1_0.set(ComplexEventPrice_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPrice_43.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_43(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceBoundaryMethod_43.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_43;
      ComplexEventPriceBoundaryPrecision_43.setString("25.320000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceBoundaryPrecision_43.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_43(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceTimeType_43.getString());
      FIX::ComplexEventType ComplexEventType_43(1);
      noComplexEvents_1_1_0.set(ComplexEventType_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventType_43.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_43;
      ComplexOptPayoutAmount_43.setString("1910845");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexOptPayoutAmount_43.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_43);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_89;
        FIX::ComplexEventEndDate ComplexEventEndDate_89(FIX::UTCTIMESTAMP(5, 34, 22, 11, 12, 2005));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_89);
        ComplexEventDates_NoComplexEventDates_89.insert(ComplexEventEndDate_89.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_89(FIX::UTCTIMESTAMP(8, 22, 31, 12, 1, 2008));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_89);
        ComplexEventDates_NoComplexEventDates_89.insert(ComplexEventStartDate_89.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_89);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_190;
          FIX::ComplexEventEndTime ComplexEventEndTime_190(FIX::UTCTIMEONLY(15, 55, 50));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_190);
          ComplexEventTimes_NoComplexEventTimes_190.insert(ComplexEventEndTime_190.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_190(FIX::UTCTIMEONLY(1, 52, 21));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_190);
          ComplexEventTimes_NoComplexEventTimes_190.insert(ComplexEventStartTime_190.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_190);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_191;
          FIX::ComplexEventEndTime ComplexEventEndTime_191(FIX::UTCTIMEONLY(21, 53, 43));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_191);
          ComplexEventTimes_NoComplexEventTimes_191.insert(ComplexEventEndTime_191.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_191(FIX::UTCTIMEONLY(0, 28, 39));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_191);
          ComplexEventTimes_NoComplexEventTimes_191.insert(ComplexEventStartTime_191.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_191);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_90;
        FIX::ComplexEventEndDate ComplexEventEndDate_90(FIX::UTCTIMESTAMP(14, 5, 54, 13, 10, 2006));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_90);
        ComplexEventDates_NoComplexEventDates_90.insert(ComplexEventEndDate_90.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_90(FIX::UTCTIMESTAMP(9, 4, 42, 13, 9, 2014));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_90);
        ComplexEventDates_NoComplexEventDates_90.insert(ComplexEventStartDate_90.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_90);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_192;
          FIX::ComplexEventEndTime ComplexEventEndTime_192(FIX::UTCTIMEONLY(15, 30, 15));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_192);
          ComplexEventTimes_NoComplexEventTimes_192.insert(ComplexEventEndTime_192.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_192(FIX::UTCTIMEONLY(23, 59, 34));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_192);
          ComplexEventTimes_NoComplexEventTimes_192.insert(ComplexEventStartTime_192.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_192);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_193;
          FIX::ComplexEventEndTime ComplexEventEndTime_193(FIX::UTCTIMEONLY(0, 28, 42));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_193);
          ComplexEventTimes_NoComplexEventTimes_193.insert(ComplexEventEndTime_193.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_193(FIX::UTCTIMEONLY(16, 3, 15));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_193);
          ComplexEventTimes_NoComplexEventTimes_193.insert(ComplexEventStartTime_193.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_193);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_194;
          FIX::ComplexEventEndTime ComplexEventEndTime_194(FIX::UTCTIMEONLY(9, 12, 43));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_194);
          ComplexEventTimes_NoComplexEventTimes_194.insert(ComplexEventEndTime_194.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_194(FIX::UTCTIMEONLY(9, 25, 21));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_194);
          ComplexEventTimes_NoComplexEventTimes_194.insert(ComplexEventStartTime_194.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_194);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_91;
        FIX::ComplexEventEndDate ComplexEventEndDate_91(FIX::UTCTIMESTAMP(10, 3, 40, 6, 12, 2015));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_91);
        ComplexEventDates_NoComplexEventDates_91.insert(ComplexEventEndDate_91.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_91(FIX::UTCTIMESTAMP(3, 37, 42, 16, 1, 2006));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_91);
        ComplexEventDates_NoComplexEventDates_91.insert(ComplexEventStartDate_91.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_91);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_195;
          FIX::ComplexEventEndTime ComplexEventEndTime_195(FIX::UTCTIMEONLY(10, 35, 58));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_195);
          ComplexEventTimes_NoComplexEventTimes_195.insert(ComplexEventEndTime_195.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_195(FIX::UTCTIMEONLY(7, 53, 29));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_195);
          ComplexEventTimes_NoComplexEventTimes_195.insert(ComplexEventStartTime_195.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_195);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_44;
      FIX::ComplexEventCondition ComplexEventCondition_44(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventCondition_44.getString());
      FIX::ComplexEventPrice ComplexEventPrice_44;
      ComplexEventPrice_44.setString("9535759");
      noComplexEvents_1_1_1.set(ComplexEventPrice_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPrice_44.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_44(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceBoundaryMethod_44.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_44;
      ComplexEventPriceBoundaryPrecision_44.setString("74.360000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceBoundaryPrecision_44.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_44(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceTimeType_44.getString());
      FIX::ComplexEventType ComplexEventType_44(8);
      noComplexEvents_1_1_1.set(ComplexEventType_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventType_44.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_44;
      ComplexOptPayoutAmount_44.setString("18446400");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexOptPayoutAmount_44.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_44);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_92;
        FIX::ComplexEventEndDate ComplexEventEndDate_92(FIX::UTCTIMESTAMP(3, 25, 21, 26, 2, 2012));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_92);
        ComplexEventDates_NoComplexEventDates_92.insert(ComplexEventEndDate_92.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_92(FIX::UTCTIMESTAMP(8, 13, 32, 0, 7, 2000));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_92);
        ComplexEventDates_NoComplexEventDates_92.insert(ComplexEventStartDate_92.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_92);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_196;
          FIX::ComplexEventEndTime ComplexEventEndTime_196(FIX::UTCTIMEONLY(8, 18, 51));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_196);
          ComplexEventTimes_NoComplexEventTimes_196.insert(ComplexEventEndTime_196.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_196(FIX::UTCTIMEONLY(14, 36, 35));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_196);
          ComplexEventTimes_NoComplexEventTimes_196.insert(ComplexEventStartTime_196.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_196);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_197;
          FIX::ComplexEventEndTime ComplexEventEndTime_197(FIX::UTCTIMEONLY(14, 9, 50));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_197);
          ComplexEventTimes_NoComplexEventTimes_197.insert(ComplexEventEndTime_197.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_197(FIX::UTCTIMEONLY(16, 24, 33));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_197);
          ComplexEventTimes_NoComplexEventTimes_197.insert(ComplexEventStartTime_197.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_197);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_93;
        FIX::ComplexEventEndDate ComplexEventEndDate_93(FIX::UTCTIMESTAMP(19, 58, 23, 13, 4, 2005));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_93);
        ComplexEventDates_NoComplexEventDates_93.insert(ComplexEventEndDate_93.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_93(FIX::UTCTIMESTAMP(15, 5, 39, 24, 12, 2007));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_93);
        ComplexEventDates_NoComplexEventDates_93.insert(ComplexEventStartDate_93.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_93);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_198;
          FIX::ComplexEventEndTime ComplexEventEndTime_198(FIX::UTCTIMEONLY(9, 46, 4));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_198);
          ComplexEventTimes_NoComplexEventTimes_198.insert(ComplexEventEndTime_198.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_198(FIX::UTCTIMEONLY(12, 40, 55));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_198);
          ComplexEventTimes_NoComplexEventTimes_198.insert(ComplexEventStartTime_198.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_198);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_199;
          FIX::ComplexEventEndTime ComplexEventEndTime_199(FIX::UTCTIMEONLY(19, 56, 5));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_199);
          ComplexEventTimes_NoComplexEventTimes_199.insert(ComplexEventEndTime_199.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_199(FIX::UTCTIMEONLY(4, 21, 51));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_199);
          ComplexEventTimes_NoComplexEventTimes_199.insert(ComplexEventStartTime_199.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_199);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_200;
          FIX::ComplexEventEndTime ComplexEventEndTime_200(FIX::UTCTIMEONLY(8, 41, 41));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventEndTime_200);
          ComplexEventTimes_NoComplexEventTimes_200.insert(ComplexEventEndTime_200.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_200(FIX::UTCTIMEONLY(9, 32, 13));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventStartTime_200);
          ComplexEventTimes_NoComplexEventTimes_200.insert(ComplexEventStartTime_200.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_200);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_45;
      FIX::ComplexEventCondition ComplexEventCondition_45(1);
      noComplexEvents_1_1_2.set(ComplexEventCondition_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventCondition_45.getString());
      FIX::ComplexEventPrice ComplexEventPrice_45;
      ComplexEventPrice_45.setString("18091371");
      noComplexEvents_1_1_2.set(ComplexEventPrice_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPrice_45.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_45(5);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceBoundaryMethod_45.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_45;
      ComplexEventPriceBoundaryPrecision_45.setString("72.880000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceBoundaryPrecision_45.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_45(2);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventPriceTimeType_45.getString());
      FIX::ComplexEventType ComplexEventType_45(5);
      noComplexEvents_1_1_2.set(ComplexEventType_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexEventType_45.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_45;
      ComplexOptPayoutAmount_45.setString("13468788");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_45);
      ComplexEvents_NoComplexEvents_45.insert(ComplexOptPayoutAmount_45.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_45);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_94;
        FIX::ComplexEventEndDate ComplexEventEndDate_94(FIX::UTCTIMESTAMP(22, 29, 54, 2, 2, 2000));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_94);
        ComplexEventDates_NoComplexEventDates_94.insert(ComplexEventEndDate_94.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_94(FIX::UTCTIMESTAMP(0, 38, 21, 6, 8, 2016));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_94);
        ComplexEventDates_NoComplexEventDates_94.insert(ComplexEventStartDate_94.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_94);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_201;
          FIX::ComplexEventEndTime ComplexEventEndTime_201(FIX::UTCTIMEONLY(19, 43, 46));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_201);
          ComplexEventTimes_NoComplexEventTimes_201.insert(ComplexEventEndTime_201.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_201(FIX::UTCTIMEONLY(16, 18, 10));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_201);
          ComplexEventTimes_NoComplexEventTimes_201.insert(ComplexEventStartTime_201.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_201);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_95;
        FIX::ComplexEventEndDate ComplexEventEndDate_95(FIX::UTCTIMESTAMP(0, 46, 9, 24, 12, 2007));
        noComplexEventDates_1_2_2_1.set(ComplexEventEndDate_95);
        ComplexEventDates_NoComplexEventDates_95.insert(ComplexEventEndDate_95.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_95(FIX::UTCTIMESTAMP(21, 51, 30, 4, 6, 2008));
        noComplexEventDates_1_2_2_1.set(ComplexEventStartDate_95);
        ComplexEventDates_NoComplexEventDates_95.insert(ComplexEventStartDate_95.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_95);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_202;
          FIX::ComplexEventEndTime ComplexEventEndTime_202(FIX::UTCTIMEONLY(0, 40, 23));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventEndTime_202);
          ComplexEventTimes_NoComplexEventTimes_202.insert(ComplexEventEndTime_202.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_202(FIX::UTCTIMEONLY(3, 57, 44));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventStartTime_202);
          ComplexEventTimes_NoComplexEventTimes_202.insert(ComplexEventStartTime_202.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_202);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_203;
          FIX::ComplexEventEndTime ComplexEventEndTime_203(FIX::UTCTIMEONLY(20, 27, 26));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventEndTime_203);
          ComplexEventTimes_NoComplexEventTimes_203.insert(ComplexEventEndTime_203.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_203(FIX::UTCTIMEONLY(11, 37, 11));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventStartTime_203);
          ComplexEventTimes_NoComplexEventTimes_203.insert(ComplexEventStartTime_203.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_203);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_204;
          FIX::ComplexEventEndTime ComplexEventEndTime_204(FIX::UTCTIMEONLY(13, 49, 13));
          noComplexEventTimes_1_2_1_3_2.set(ComplexEventEndTime_204);
          ComplexEventTimes_NoComplexEventTimes_204.insert(ComplexEventEndTime_204.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_204(FIX::UTCTIMEONLY(0, 50, 19));
          noComplexEventTimes_1_2_1_3_2.set(ComplexEventStartTime_204);
          ComplexEventTimes_NoComplexEventTimes_204.insert(ComplexEventStartTime_204.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_204);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_36;
      FIX::EventDate EventDate_36("LOCALMKTDATE_1573945061");
      noEvents_1_1_0.set(EventDate_36);
      EvntGrp_NoEvents_36.insert(EventDate_36.getString());
      FIX::EventPx EventPx_36;
      EventPx_36.setString("4146224");
      noEvents_1_1_0.set(EventPx_36);
      EvntGrp_NoEvents_36.insert(EventPx_36.getString());
      FIX::EventText EventText_36("STRING_2011305342");
      noEvents_1_1_0.set(EventText_36);
      EvntGrp_NoEvents_36.insert(EventText_36.getString());
      FIX::EventTime EventTime_36(FIX::UTCTIMESTAMP(13, 36, 35, 26, 5, 2002));
      noEvents_1_1_0.set(EventTime_36);
      EvntGrp_NoEvents_36.insert(EventTime_36.getString());
      FIX::EventType EventType_36(14);
      noEvents_1_1_0.set(EventType_36);
      EvntGrp_NoEvents_36.insert(EventType_36.getString());
      all_values.push_back(EvntGrp_NoEvents_36);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_37;
      FIX::EventDate EventDate_37("LOCALMKTDATE_1355242004");
      noEvents_1_1_1.set(EventDate_37);
      EvntGrp_NoEvents_37.insert(EventDate_37.getString());
      FIX::EventPx EventPx_37;
      EventPx_37.setString("20999022");
      noEvents_1_1_1.set(EventPx_37);
      EvntGrp_NoEvents_37.insert(EventPx_37.getString());
      FIX::EventText EventText_37("STRING_1930439457");
      noEvents_1_1_1.set(EventText_37);
      EvntGrp_NoEvents_37.insert(EventText_37.getString());
      FIX::EventTime EventTime_37(FIX::UTCTIMESTAMP(12, 17, 35, 10, 5, 2006));
      noEvents_1_1_1.set(EventTime_37);
      EvntGrp_NoEvents_37.insert(EventTime_37.getString());
      FIX::EventType EventType_37(2);
      noEvents_1_1_1.set(EventType_37);
      EvntGrp_NoEvents_37.insert(EventType_37.getString());
      all_values.push_back(EvntGrp_NoEvents_37);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_37;
      FIX::InstrumentPartyID InstrumentPartyID_37("STRING_482005529");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_37);
      InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyID_37.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_37('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_37);
      InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyIDSource_37.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_37(482552145);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_37);
      InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyRole_37.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_37);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85;
        FIX::InstrumentPartySubID InstrumentPartySubID_85("STRING_2018861959");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_85);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85.insert(InstrumentPartySubID_85.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_85(1708069415);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_85);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85.insert(InstrumentPartySubIDType_85.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86;
        FIX::InstrumentPartySubID InstrumentPartySubID_86("STRING_600118189");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_86);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86.insert(InstrumentPartySubID_86.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_86(1636730613);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_86);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86.insert(InstrumentPartySubIDType_86.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87;
        FIX::InstrumentPartySubID InstrumentPartySubID_87("STRING_1134530828");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_87);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87.insert(InstrumentPartySubID_87.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_87(1014740611);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_87);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87.insert(InstrumentPartySubIDType_87.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_38;
      FIX::InstrumentPartyID InstrumentPartyID_38("STRING_1500552307");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_38);
      InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyID_38.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_38('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_38);
      InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyIDSource_38.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_38(864921936);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_38);
      InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyRole_38.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_38);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88;
        FIX::InstrumentPartySubID InstrumentPartySubID_88("STRING_667322162");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_88);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88.insert(InstrumentPartySubID_88.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_88(722040606);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_88);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88.insert(InstrumentPartySubIDType_88.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89;
        FIX::InstrumentPartySubID InstrumentPartySubID_89("STRING_905061172");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_89);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89.insert(InstrumentPartySubID_89.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_89(996811192);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_89);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89.insert(InstrumentPartySubIDType_89.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_39;
      FIX::InstrumentPartyID InstrumentPartyID_39("STRING_1753877059");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_39);
      InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyID_39.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_39('1');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_39);
      InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyIDSource_39.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_39(949229792);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_39);
      InstrumentParties_NoInstrumentParties_39.insert(InstrumentPartyRole_39.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_39);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90;
        FIX::InstrumentPartySubID InstrumentPartySubID_90("STRING_1012627124");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_90);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90.insert(InstrumentPartySubID_90.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_90(1293549909);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_90);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90.insert(InstrumentPartySubIDType_90.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_43;
      FIX::SecurityAltID SecurityAltID_43("STRING_1771281979");
      noSecurityAltID_1_1_0.set(SecurityAltID_43);
      SecAltIDGrp_NoSecurityAltID_43.insert(SecurityAltID_43.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_43("STRING_843151059");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_43);
      SecAltIDGrp_NoSecurityAltID_43.insert(SecurityAltIDSource_43.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_43);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_40;
    FIX::SecurityXML SecurityXML_41("XMLDATA_1603145386");
    noRelatedSym_0_1.set(SecurityXML_41);
    FIX::SecurityXMLLen SecurityXMLLen_20(1071795863);
    noRelatedSym_0_1.set(SecurityXMLLen_20);
    FIX::SecurityXMLSchema SecurityXMLSchema_20("STRING_387362472");
    noRelatedSym_0_1.set(SecurityXMLSchema_20);
    SecurityXML_40.insert(SecurityXMLSchema_20.getString());
    all_values.push_back(SecurityXML_40);

    // InstrumentExtension
    multiset<string> InstrumentExtension_7;
    FIX::DeliveryForm DeliveryForm_7(2);
    noRelatedSym_0_1.set(DeliveryForm_7);
    InstrumentExtension_7.insert(DeliveryForm_7.getString());
    FIX::PctAtRisk PctAtRisk_7;
    PctAtRisk_7.setString("13.920000");
    noRelatedSym_0_1.set(PctAtRisk_7);
    InstrumentExtension_7.insert(PctAtRisk_7.getString());
    all_values.push_back(InstrumentExtension_7);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_13;
      FIX::InstrAttribType InstrAttribType_13(27);
      noInstrAttrib_1_1_0.set(InstrAttribType_13);
      AttrbGrp_NoInstrAttrib_13.insert(InstrAttribType_13.getString());
      FIX::InstrAttribValue InstrAttribValue_13("STRING_508401683");
      noInstrAttrib_1_1_0.set(InstrAttribValue_13);
      AttrbGrp_NoInstrAttrib_13.insert(InstrAttribValue_13.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_13);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_14;
      FIX::InstrAttribType InstrAttribType_14(26);
      noInstrAttrib_1_1_1.set(InstrAttribType_14);
      AttrbGrp_NoInstrAttrib_14.insert(InstrAttribType_14.getString());
      FIX::InstrAttribValue InstrAttribValue_14("STRING_1794578192");
      noInstrAttrib_1_1_1.set(InstrAttribValue_14);
      AttrbGrp_NoInstrAttrib_14.insert(InstrAttribValue_14.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_14);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_3;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_3;
    SecondaryHighLimitPrice_3.setString("11085198");
    noRelatedSym_0_1.set(SecondaryHighLimitPrice_3);
    SecondaryPriceLimits_3.insert(SecondaryHighLimitPrice_3.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_3;
    SecondaryLowLimitPrice_3.setString("14729041");
    noRelatedSym_0_1.set(SecondaryLowLimitPrice_3);
    SecondaryPriceLimits_3.insert(SecondaryLowLimitPrice_3.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_3(781625372);
    noRelatedSym_0_1.set(SecondaryPriceLimitType_3);
    SecondaryPriceLimits_3.insert(SecondaryPriceLimitType_3.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_3;
    SecondaryTradingReferencePrice_3.setString("21232604");
    noRelatedSym_0_1.set(SecondaryTradingReferencePrice_3);
    SecondaryPriceLimits_3.insert(SecondaryTradingReferencePrice_3.getString());
    all_values.push_back(SecondaryPriceLimits_3);

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_2;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_2;
    FIX::CorporateAction CorporateAction_4("MULTIPLECHARVALUE_U");
    noRelatedSym_0_2.set(CorporateAction_4);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(CorporateAction_4.getString());
    FIX::Currency Currency_19("USD");
    noRelatedSym_0_2.set(Currency_19);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(Currency_19.getString());
    FIX::EncodedText EncodedText_35("DATA_430748155");
    noRelatedSym_0_2.set(EncodedText_35);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(EncodedText_35.getString());
    FIX::EncodedTextLen EncodedTextLen_35(679740001);
    noRelatedSym_0_2.set(EncodedTextLen_35);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(EncodedTextLen_35.getString());
    FIX::ListUpdateAction ListUpdateAction_2('1');
    noRelatedSym_0_2.set(ListUpdateAction_2);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(ListUpdateAction_2.getString());
    FIX::RelSymTransactTime RelSymTransactTime_4(FIX::UTCTIMESTAMP(17, 30, 15, 22, 8, 2004));
    noRelatedSym_0_2.set(RelSymTransactTime_4);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(RelSymTransactTime_4.getString());
    FIX::Text Text_35("STRING_1771847247");
    noRelatedSym_0_2.set(Text_35);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(Text_35.getString());
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_2);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_2_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_36;
      FIX::EncodedLegIssuer EncodedLegIssuer_36("DATA_2085054311");
      noLegs_2_1_0.set(EncodedLegIssuer_36);
      InstrumentLeg_36.insert(EncodedLegIssuer_36.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_36(467514658);
      noLegs_2_1_0.set(EncodedLegIssuerLen_36);
      InstrumentLeg_36.insert(EncodedLegIssuerLen_36.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_36("DATA_111386727");
      noLegs_2_1_0.set(EncodedLegSecurityDesc_36);
      InstrumentLeg_36.insert(EncodedLegSecurityDesc_36.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_36(1009366527);
      noLegs_2_1_0.set(EncodedLegSecurityDescLen_36);
      InstrumentLeg_36.insert(EncodedLegSecurityDescLen_36.getString());
      FIX::LegCFICode LegCFICode_36("STRING_854877130");
      noLegs_2_1_0.set(LegCFICode_36);
      InstrumentLeg_36.insert(LegCFICode_36.getString());
      FIX::LegContractMultiplier LegContractMultiplier_36;
      LegContractMultiplier_36.setString("18628270");
      noLegs_2_1_0.set(LegContractMultiplier_36);
      InstrumentLeg_36.insert(LegContractMultiplier_36.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_36(415684271);
      noLegs_2_1_0.set(LegContractMultiplierUnit_36);
      InstrumentLeg_36.insert(LegContractMultiplierUnit_36.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_36("MONTHYEAR_819672346");
      noLegs_2_1_0.set(LegContractSettlMonth_36);
      InstrumentLeg_36.insert(LegContractSettlMonth_36.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_36("COUNTRY_1949335783");
      noLegs_2_1_0.set(LegCountryOfIssue_36);
      InstrumentLeg_36.insert(LegCountryOfIssue_36.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_36("LOCALMKTDATE_924085954");
      noLegs_2_1_0.set(LegCouponPaymentDate_36);
      InstrumentLeg_36.insert(LegCouponPaymentDate_36.getString());
      FIX::LegCouponRate LegCouponRate_36;
      LegCouponRate_36.setString("58.730000");
      noLegs_2_1_0.set(LegCouponRate_36);
      InstrumentLeg_36.insert(LegCouponRate_36.getString());
      FIX::LegCreditRating LegCreditRating_36("STRING_1596430327");
      noLegs_2_1_0.set(LegCreditRating_36);
      InstrumentLeg_36.insert(LegCreditRating_36.getString());
      FIX::LegCurrency LegCurrency_36("CAN");
      noLegs_2_1_0.set(LegCurrency_36);
      InstrumentLeg_36.insert(LegCurrency_36.getString());
      FIX::LegDatedDate LegDatedDate_36("LOCALMKTDATE_230572051");
      noLegs_2_1_0.set(LegDatedDate_36);
      InstrumentLeg_36.insert(LegDatedDate_36.getString());
      FIX::LegExerciseStyle LegExerciseStyle_36(2008382662);
      noLegs_2_1_0.set(LegExerciseStyle_36);
      InstrumentLeg_36.insert(LegExerciseStyle_36.getString());
      FIX::LegFactor LegFactor_36;
      LegFactor_36.setString("8072391");
      noLegs_2_1_0.set(LegFactor_36);
      InstrumentLeg_36.insert(LegFactor_36.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_36(242989890);
      noLegs_2_1_0.set(LegFlowScheduleType_36);
      InstrumentLeg_36.insert(LegFlowScheduleType_36.getString());
      FIX::LegInstrRegistry LegInstrRegistry_36("STRING_701597786");
      noLegs_2_1_0.set(LegInstrRegistry_36);
      InstrumentLeg_36.insert(LegInstrRegistry_36.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_36("LOCALMKTDATE_1237987321");
      noLegs_2_1_0.set(LegInterestAccrualDate_36);
      InstrumentLeg_36.insert(LegInterestAccrualDate_36.getString());
      FIX::LegIssueDate LegIssueDate_36("LOCALMKTDATE_922729891");
      noLegs_2_1_0.set(LegIssueDate_36);
      InstrumentLeg_36.insert(LegIssueDate_36.getString());
      FIX::LegIssuer LegIssuer_36("STRING_116853517");
      noLegs_2_1_0.set(LegIssuer_36);
      InstrumentLeg_36.insert(LegIssuer_36.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_36("STRING_426313000");
      noLegs_2_1_0.set(LegLocaleOfIssue_36);
      InstrumentLeg_36.insert(LegLocaleOfIssue_36.getString());
      FIX::LegMaturityDate LegMaturityDate_36("LOCALMKTDATE_451797437");
      noLegs_2_1_0.set(LegMaturityDate_36);
      InstrumentLeg_36.insert(LegMaturityDate_36.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_36("MONTHYEAR_1285986307");
      noLegs_2_1_0.set(LegMaturityMonthYear_36);
      InstrumentLeg_36.insert(LegMaturityMonthYear_36.getString());
      FIX::LegMaturityTime LegMaturityTime_36("TZTIMEONLY_1874941856");
      noLegs_2_1_0.set(LegMaturityTime_36);
      InstrumentLeg_36.insert(LegMaturityTime_36.getString());
      FIX::LegOptAttribute LegOptAttribute_36('9');
      noLegs_2_1_0.set(LegOptAttribute_36);
      InstrumentLeg_36.insert(LegOptAttribute_36.getString());
      FIX::LegOptionRatio LegOptionRatio_36;
      LegOptionRatio_36.setString("18444683");
      noLegs_2_1_0.set(LegOptionRatio_36);
      InstrumentLeg_36.insert(LegOptionRatio_36.getString());
      FIX::LegPool LegPool_36("STRING_41230540");
      noLegs_2_1_0.set(LegPool_36);
      InstrumentLeg_36.insert(LegPool_36.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_36("STRING_554458374");
      noLegs_2_1_0.set(LegPriceUnitOfMeasure_36);
      InstrumentLeg_36.insert(LegPriceUnitOfMeasure_36.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_36;
      LegPriceUnitOfMeasureQty_36.setString("3527096");
      noLegs_2_1_0.set(LegPriceUnitOfMeasureQty_36);
      InstrumentLeg_36.insert(LegPriceUnitOfMeasureQty_36.getString());
      FIX::LegProduct LegProduct_36(2126284851);
      noLegs_2_1_0.set(LegProduct_36);
      InstrumentLeg_36.insert(LegProduct_36.getString());
      FIX::LegPutOrCall LegPutOrCall_36(1021973032);
      noLegs_2_1_0.set(LegPutOrCall_36);
      InstrumentLeg_36.insert(LegPutOrCall_36.getString());
      FIX::LegRatioQty LegRatioQty_36;
      LegRatioQty_36.setString("4640963");
      noLegs_2_1_0.set(LegRatioQty_36);
      InstrumentLeg_36.insert(LegRatioQty_36.getString());
      FIX::LegRedemptionDate LegRedemptionDate_36("LOCALMKTDATE_988167730");
      noLegs_2_1_0.set(LegRedemptionDate_36);
      InstrumentLeg_36.insert(LegRedemptionDate_36.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_36("STRING_1876850162");
      noLegs_2_1_0.set(LegRepoCollateralSecurityType_36);
      InstrumentLeg_36.insert(LegRepoCollateralSecurityType_36.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_36;
      LegRepurchaseRate_36.setString("97.450000");
      noLegs_2_1_0.set(LegRepurchaseRate_36);
      InstrumentLeg_36.insert(LegRepurchaseRate_36.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_36(1403852002);
      noLegs_2_1_0.set(LegRepurchaseTerm_36);
      InstrumentLeg_36.insert(LegRepurchaseTerm_36.getString());
      FIX::LegSecurityDesc LegSecurityDesc_36("STRING_549038860");
      noLegs_2_1_0.set(LegSecurityDesc_36);
      InstrumentLeg_36.insert(LegSecurityDesc_36.getString());
      FIX::LegSecurityExchange LegSecurityExchange_36("EXCHANGE_2128775528");
      noLegs_2_1_0.set(LegSecurityExchange_36);
      InstrumentLeg_36.insert(LegSecurityExchange_36.getString());
      FIX::LegSecurityID LegSecurityID_36("STRING_180454308");
      noLegs_2_1_0.set(LegSecurityID_36);
      InstrumentLeg_36.insert(LegSecurityID_36.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_36("STRING_1204884733");
      noLegs_2_1_0.set(LegSecurityIDSource_36);
      InstrumentLeg_36.insert(LegSecurityIDSource_36.getString());
      FIX::LegSecuritySubType LegSecuritySubType_36("STRING_1577722207");
      noLegs_2_1_0.set(LegSecuritySubType_36);
      InstrumentLeg_36.insert(LegSecuritySubType_36.getString());
      FIX::LegSecurityType LegSecurityType_36("STRING_65576487");
      noLegs_2_1_0.set(LegSecurityType_36);
      InstrumentLeg_36.insert(LegSecurityType_36.getString());
      FIX::LegSide LegSide_36('1');
      noLegs_2_1_0.set(LegSide_36);
      InstrumentLeg_36.insert(LegSide_36.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_36("STRING_1808294258");
      noLegs_2_1_0.set(LegStateOrProvinceOfIssue_36);
      InstrumentLeg_36.insert(LegStateOrProvinceOfIssue_36.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_36("JPY");
      noLegs_2_1_0.set(LegStrikeCurrency_36);
      InstrumentLeg_36.insert(LegStrikeCurrency_36.getString());
      FIX::LegStrikePrice LegStrikePrice_36;
      LegStrikePrice_36.setString("20512841");
      noLegs_2_1_0.set(LegStrikePrice_36);
      InstrumentLeg_36.insert(LegStrikePrice_36.getString());
      FIX::LegSymbol LegSymbol_36("STRING_628073288");
      noLegs_2_1_0.set(LegSymbol_36);
      InstrumentLeg_36.insert(LegSymbol_36.getString());
      FIX::LegSymbolSfx LegSymbolSfx_36("STRING_1083893937");
      noLegs_2_1_0.set(LegSymbolSfx_36);
      InstrumentLeg_36.insert(LegSymbolSfx_36.getString());
      FIX::LegTimeUnit LegTimeUnit_36("STRING_826530392");
      noLegs_2_1_0.set(LegTimeUnit_36);
      InstrumentLeg_36.insert(LegTimeUnit_36.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_36("STRING_744926805");
      noLegs_2_1_0.set(LegUnitOfMeasure_36);
      InstrumentLeg_36.insert(LegUnitOfMeasure_36.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_36;
      LegUnitOfMeasureQty_36.setString("15102069");
      noLegs_2_1_0.set(LegUnitOfMeasureQty_36);
      InstrumentLeg_36.insert(LegUnitOfMeasureQty_36.getString());
      all_values.push_back(InstrumentLeg_36);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_79;
        FIX::LegSecurityAltID LegSecurityAltID_79("STRING_2030913112");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltID_79);
        LegSecAltIDGrp_NoLegSecurityAltID_79.insert(LegSecurityAltID_79.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_79("STRING_1237665146");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltIDSource_79);
        LegSecAltIDGrp_NoLegSecurityAltID_79.insert(LegSecurityAltIDSource_79.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_79);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_80;
        FIX::LegSecurityAltID LegSecurityAltID_80("STRING_60938956");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltID_80);
        LegSecAltIDGrp_NoLegSecurityAltID_80.insert(LegSecurityAltID_80.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_80("STRING_1727897782");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltIDSource_80);
        LegSecAltIDGrp_NoLegSecurityAltID_80.insert(LegSecurityAltIDSource_80.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_80);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_2_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_37;
      FIX::EncodedLegIssuer EncodedLegIssuer_37("DATA_1278895686");
      noLegs_2_1_1.set(EncodedLegIssuer_37);
      InstrumentLeg_37.insert(EncodedLegIssuer_37.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_37(615397330);
      noLegs_2_1_1.set(EncodedLegIssuerLen_37);
      InstrumentLeg_37.insert(EncodedLegIssuerLen_37.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_37("DATA_2080607441");
      noLegs_2_1_1.set(EncodedLegSecurityDesc_37);
      InstrumentLeg_37.insert(EncodedLegSecurityDesc_37.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_37(1257696889);
      noLegs_2_1_1.set(EncodedLegSecurityDescLen_37);
      InstrumentLeg_37.insert(EncodedLegSecurityDescLen_37.getString());
      FIX::LegCFICode LegCFICode_37("STRING_1637370362");
      noLegs_2_1_1.set(LegCFICode_37);
      InstrumentLeg_37.insert(LegCFICode_37.getString());
      FIX::LegContractMultiplier LegContractMultiplier_37;
      LegContractMultiplier_37.setString("3972201");
      noLegs_2_1_1.set(LegContractMultiplier_37);
      InstrumentLeg_37.insert(LegContractMultiplier_37.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_37(98380972);
      noLegs_2_1_1.set(LegContractMultiplierUnit_37);
      InstrumentLeg_37.insert(LegContractMultiplierUnit_37.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_37("MONTHYEAR_1366736877");
      noLegs_2_1_1.set(LegContractSettlMonth_37);
      InstrumentLeg_37.insert(LegContractSettlMonth_37.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_37("COUNTRY_576659925");
      noLegs_2_1_1.set(LegCountryOfIssue_37);
      InstrumentLeg_37.insert(LegCountryOfIssue_37.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_37("LOCALMKTDATE_1502232974");
      noLegs_2_1_1.set(LegCouponPaymentDate_37);
      InstrumentLeg_37.insert(LegCouponPaymentDate_37.getString());
      FIX::LegCouponRate LegCouponRate_37;
      LegCouponRate_37.setString("57.370000");
      noLegs_2_1_1.set(LegCouponRate_37);
      InstrumentLeg_37.insert(LegCouponRate_37.getString());
      FIX::LegCreditRating LegCreditRating_37("STRING_557951805");
      noLegs_2_1_1.set(LegCreditRating_37);
      InstrumentLeg_37.insert(LegCreditRating_37.getString());
      FIX::LegCurrency LegCurrency_37("EUR");
      noLegs_2_1_1.set(LegCurrency_37);
      InstrumentLeg_37.insert(LegCurrency_37.getString());
      FIX::LegDatedDate LegDatedDate_37("LOCALMKTDATE_2135674012");
      noLegs_2_1_1.set(LegDatedDate_37);
      InstrumentLeg_37.insert(LegDatedDate_37.getString());
      FIX::LegExerciseStyle LegExerciseStyle_37(1748263770);
      noLegs_2_1_1.set(LegExerciseStyle_37);
      InstrumentLeg_37.insert(LegExerciseStyle_37.getString());
      FIX::LegFactor LegFactor_37;
      LegFactor_37.setString("118442");
      noLegs_2_1_1.set(LegFactor_37);
      InstrumentLeg_37.insert(LegFactor_37.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_37(1796484622);
      noLegs_2_1_1.set(LegFlowScheduleType_37);
      InstrumentLeg_37.insert(LegFlowScheduleType_37.getString());
      FIX::LegInstrRegistry LegInstrRegistry_37("STRING_1674739272");
      noLegs_2_1_1.set(LegInstrRegistry_37);
      InstrumentLeg_37.insert(LegInstrRegistry_37.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_37("LOCALMKTDATE_2005234538");
      noLegs_2_1_1.set(LegInterestAccrualDate_37);
      InstrumentLeg_37.insert(LegInterestAccrualDate_37.getString());
      FIX::LegIssueDate LegIssueDate_37("LOCALMKTDATE_1700285123");
      noLegs_2_1_1.set(LegIssueDate_37);
      InstrumentLeg_37.insert(LegIssueDate_37.getString());
      FIX::LegIssuer LegIssuer_37("STRING_155328912");
      noLegs_2_1_1.set(LegIssuer_37);
      InstrumentLeg_37.insert(LegIssuer_37.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_37("STRING_941644828");
      noLegs_2_1_1.set(LegLocaleOfIssue_37);
      InstrumentLeg_37.insert(LegLocaleOfIssue_37.getString());
      FIX::LegMaturityDate LegMaturityDate_37("LOCALMKTDATE_379331868");
      noLegs_2_1_1.set(LegMaturityDate_37);
      InstrumentLeg_37.insert(LegMaturityDate_37.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_37("MONTHYEAR_900255718");
      noLegs_2_1_1.set(LegMaturityMonthYear_37);
      InstrumentLeg_37.insert(LegMaturityMonthYear_37.getString());
      FIX::LegMaturityTime LegMaturityTime_37("TZTIMEONLY_304368118");
      noLegs_2_1_1.set(LegMaturityTime_37);
      InstrumentLeg_37.insert(LegMaturityTime_37.getString());
      FIX::LegOptAttribute LegOptAttribute_37('1');
      noLegs_2_1_1.set(LegOptAttribute_37);
      InstrumentLeg_37.insert(LegOptAttribute_37.getString());
      FIX::LegOptionRatio LegOptionRatio_37;
      LegOptionRatio_37.setString("7836851");
      noLegs_2_1_1.set(LegOptionRatio_37);
      InstrumentLeg_37.insert(LegOptionRatio_37.getString());
      FIX::LegPool LegPool_37("STRING_1542033264");
      noLegs_2_1_1.set(LegPool_37);
      InstrumentLeg_37.insert(LegPool_37.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_37("STRING_1718598654");
      noLegs_2_1_1.set(LegPriceUnitOfMeasure_37);
      InstrumentLeg_37.insert(LegPriceUnitOfMeasure_37.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_37;
      LegPriceUnitOfMeasureQty_37.setString("3640993");
      noLegs_2_1_1.set(LegPriceUnitOfMeasureQty_37);
      InstrumentLeg_37.insert(LegPriceUnitOfMeasureQty_37.getString());
      FIX::LegProduct LegProduct_37(673445302);
      noLegs_2_1_1.set(LegProduct_37);
      InstrumentLeg_37.insert(LegProduct_37.getString());
      FIX::LegPutOrCall LegPutOrCall_37(186512336);
      noLegs_2_1_1.set(LegPutOrCall_37);
      InstrumentLeg_37.insert(LegPutOrCall_37.getString());
      FIX::LegRatioQty LegRatioQty_37;
      LegRatioQty_37.setString("2972231");
      noLegs_2_1_1.set(LegRatioQty_37);
      InstrumentLeg_37.insert(LegRatioQty_37.getString());
      FIX::LegRedemptionDate LegRedemptionDate_37("LOCALMKTDATE_1931142191");
      noLegs_2_1_1.set(LegRedemptionDate_37);
      InstrumentLeg_37.insert(LegRedemptionDate_37.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_37("STRING_1823882699");
      noLegs_2_1_1.set(LegRepoCollateralSecurityType_37);
      InstrumentLeg_37.insert(LegRepoCollateralSecurityType_37.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_37;
      LegRepurchaseRate_37.setString("32.900000");
      noLegs_2_1_1.set(LegRepurchaseRate_37);
      InstrumentLeg_37.insert(LegRepurchaseRate_37.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_37(2029523163);
      noLegs_2_1_1.set(LegRepurchaseTerm_37);
      InstrumentLeg_37.insert(LegRepurchaseTerm_37.getString());
      FIX::LegSecurityDesc LegSecurityDesc_37("STRING_1043135928");
      noLegs_2_1_1.set(LegSecurityDesc_37);
      InstrumentLeg_37.insert(LegSecurityDesc_37.getString());
      FIX::LegSecurityExchange LegSecurityExchange_37("EXCHANGE_1271103215");
      noLegs_2_1_1.set(LegSecurityExchange_37);
      InstrumentLeg_37.insert(LegSecurityExchange_37.getString());
      FIX::LegSecurityID LegSecurityID_37("STRING_1384272489");
      noLegs_2_1_1.set(LegSecurityID_37);
      InstrumentLeg_37.insert(LegSecurityID_37.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_37("STRING_811428017");
      noLegs_2_1_1.set(LegSecurityIDSource_37);
      InstrumentLeg_37.insert(LegSecurityIDSource_37.getString());
      FIX::LegSecuritySubType LegSecuritySubType_37("STRING_1829055020");
      noLegs_2_1_1.set(LegSecuritySubType_37);
      InstrumentLeg_37.insert(LegSecuritySubType_37.getString());
      FIX::LegSecurityType LegSecurityType_37("STRING_919476124");
      noLegs_2_1_1.set(LegSecurityType_37);
      InstrumentLeg_37.insert(LegSecurityType_37.getString());
      FIX::LegSide LegSide_37('1');
      noLegs_2_1_1.set(LegSide_37);
      InstrumentLeg_37.insert(LegSide_37.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_37("STRING_1817245384");
      noLegs_2_1_1.set(LegStateOrProvinceOfIssue_37);
      InstrumentLeg_37.insert(LegStateOrProvinceOfIssue_37.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_37("JPY");
      noLegs_2_1_1.set(LegStrikeCurrency_37);
      InstrumentLeg_37.insert(LegStrikeCurrency_37.getString());
      FIX::LegStrikePrice LegStrikePrice_37;
      LegStrikePrice_37.setString("14662463");
      noLegs_2_1_1.set(LegStrikePrice_37);
      InstrumentLeg_37.insert(LegStrikePrice_37.getString());
      FIX::LegSymbol LegSymbol_37("STRING_47511870");
      noLegs_2_1_1.set(LegSymbol_37);
      InstrumentLeg_37.insert(LegSymbol_37.getString());
      FIX::LegSymbolSfx LegSymbolSfx_37("STRING_1654200005");
      noLegs_2_1_1.set(LegSymbolSfx_37);
      InstrumentLeg_37.insert(LegSymbolSfx_37.getString());
      FIX::LegTimeUnit LegTimeUnit_37("STRING_1019047834");
      noLegs_2_1_1.set(LegTimeUnit_37);
      InstrumentLeg_37.insert(LegTimeUnit_37.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_37("STRING_202840782");
      noLegs_2_1_1.set(LegUnitOfMeasure_37);
      InstrumentLeg_37.insert(LegUnitOfMeasure_37.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_37;
      LegUnitOfMeasureQty_37.setString("4483611");
      noLegs_2_1_1.set(LegUnitOfMeasureQty_37);
      InstrumentLeg_37.insert(LegUnitOfMeasureQty_37.getString());
      all_values.push_back(InstrumentLeg_37);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_81;
        FIX::LegSecurityAltID LegSecurityAltID_81("STRING_1103096500");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltID_81);
        LegSecAltIDGrp_NoLegSecurityAltID_81.insert(LegSecurityAltID_81.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_81("STRING_752729303");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltIDSource_81);
        LegSecAltIDGrp_NoLegSecurityAltID_81.insert(LegSecurityAltIDSource_81.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_81);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_82;
        FIX::LegSecurityAltID LegSecurityAltID_82("STRING_908555752");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltID_82);
        LegSecAltIDGrp_NoLegSecurityAltID_82.insert(LegSecurityAltID_82.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_82("STRING_1886781683");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltIDSource_82);
        LegSecAltIDGrp_NoLegSecurityAltID_82.insert(LegSecurityAltIDSource_82.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_82);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_1);
    }
    // Instrument
    multiset<string> Instrument_21;
    FIX::AttachmentPoint AttachmentPoint_21;
    AttachmentPoint_21.setString("89.190000");
    noRelatedSym_0_2.set(AttachmentPoint_21);
    Instrument_21.insert(AttachmentPoint_21.getString());
    FIX::CFICode CFICode_21("STRING_479670758");
    noRelatedSym_0_2.set(CFICode_21);
    Instrument_21.insert(CFICode_21.getString());
    FIX::CPProgram CPProgram_21(1);
    noRelatedSym_0_2.set(CPProgram_21);
    Instrument_21.insert(CPProgram_21.getString());
    FIX::CPRegType CPRegType_21("STRING_820724221");
    noRelatedSym_0_2.set(CPRegType_21);
    Instrument_21.insert(CPRegType_21.getString());
    FIX::CapPrice CapPrice_21;
    CapPrice_21.setString("6661830");
    noRelatedSym_0_2.set(CapPrice_21);
    Instrument_21.insert(CapPrice_21.getString());
    FIX::ContractMultiplier ContractMultiplier_21;
    ContractMultiplier_21.setString("4006204");
    noRelatedSym_0_2.set(ContractMultiplier_21);
    Instrument_21.insert(ContractMultiplier_21.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_21(1);
    noRelatedSym_0_2.set(ContractMultiplierUnit_21);
    Instrument_21.insert(ContractMultiplierUnit_21.getString());
    FIX::ContractSettlMonth ContractSettlMonth_21("MONTHYEAR_342582145");
    noRelatedSym_0_2.set(ContractSettlMonth_21);
    Instrument_21.insert(ContractSettlMonth_21.getString());
    FIX::CountryOfIssue CountryOfIssue_21("COUNTRY_1095063753");
    noRelatedSym_0_2.set(CountryOfIssue_21);
    Instrument_21.insert(CountryOfIssue_21.getString());
    FIX::CouponPaymentDate CouponPaymentDate_21("LOCALMKTDATE_486422280");
    noRelatedSym_0_2.set(CouponPaymentDate_21);
    Instrument_21.insert(CouponPaymentDate_21.getString());
    FIX::CouponRate CouponRate_21;
    CouponRate_21.setString("80.730000");
    noRelatedSym_0_2.set(CouponRate_21);
    Instrument_21.insert(CouponRate_21.getString());
    FIX::CreditRating CreditRating_21("STRING_218683320");
    noRelatedSym_0_2.set(CreditRating_21);
    Instrument_21.insert(CreditRating_21.getString());
    FIX::DatedDate DatedDate_21("LOCALMKTDATE_1870694769");
    noRelatedSym_0_2.set(DatedDate_21);
    Instrument_21.insert(DatedDate_21.getString());
    FIX::DetachmentPoint DetachmentPoint_21;
    DetachmentPoint_21.setString("24.430000");
    noRelatedSym_0_2.set(DetachmentPoint_21);
    Instrument_21.insert(DetachmentPoint_21.getString());
    FIX::EncodedIssuer EncodedIssuer_21("DATA_2047738341");
    noRelatedSym_0_2.set(EncodedIssuer_21);
    Instrument_21.insert(EncodedIssuer_21.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_21(642687245);
    noRelatedSym_0_2.set(EncodedIssuerLen_21);
    Instrument_21.insert(EncodedIssuerLen_21.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_21("DATA_1834267283");
    noRelatedSym_0_2.set(EncodedSecurityDesc_21);
    Instrument_21.insert(EncodedSecurityDesc_21.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_21(1717500077);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_21);
    Instrument_21.insert(EncodedSecurityDescLen_21.getString());
    FIX::ExerciseStyle ExerciseStyle_21(1);
    noRelatedSym_0_2.set(ExerciseStyle_21);
    Instrument_21.insert(ExerciseStyle_21.getString());
    FIX::Factor Factor_21;
    Factor_21.setString("14832327");
    noRelatedSym_0_2.set(Factor_21);
    Instrument_21.insert(Factor_21.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_21(true);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_21);
    Instrument_21.insert(FlexProductEligibilityIndicator_21.getString());
    FIX::FlexibleIndicator FlexibleIndicator_21(false);
    noRelatedSym_0_2.set(FlexibleIndicator_21);
    Instrument_21.insert(FlexibleIndicator_21.getString());
    FIX::FloorPrice FloorPrice_21;
    FloorPrice_21.setString("9899491");
    noRelatedSym_0_2.set(FloorPrice_21);
    Instrument_21.insert(FloorPrice_21.getString());
    FIX::FlowScheduleType FlowScheduleType_21(3);
    noRelatedSym_0_2.set(FlowScheduleType_21);
    Instrument_21.insert(FlowScheduleType_21.getString());
    FIX::InstrRegistry InstrRegistry_21("STRING_1413296144");
    noRelatedSym_0_2.set(InstrRegistry_21);
    Instrument_21.insert(InstrRegistry_21.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_21('1');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_21);
    Instrument_21.insert(InstrmtAssignmentMethod_21.getString());
    FIX::InterestAccrualDate InterestAccrualDate_21("LOCALMKTDATE_1306206677");
    noRelatedSym_0_2.set(InterestAccrualDate_21);
    Instrument_21.insert(InterestAccrualDate_21.getString());
    FIX::IssueDate IssueDate_21("LOCALMKTDATE_368908996");
    noRelatedSym_0_2.set(IssueDate_21);
    Instrument_21.insert(IssueDate_21.getString());
    FIX::Issuer Issuer_21("STRING_43555947");
    noRelatedSym_0_2.set(Issuer_21);
    Instrument_21.insert(Issuer_21.getString());
    FIX::ListMethod ListMethod_21(1);
    noRelatedSym_0_2.set(ListMethod_21);
    Instrument_21.insert(ListMethod_21.getString());
    FIX::LocaleOfIssue LocaleOfIssue_21("STRING_108207031");
    noRelatedSym_0_2.set(LocaleOfIssue_21);
    Instrument_21.insert(LocaleOfIssue_21.getString());
    FIX::MaturityDate MaturityDate_21("LOCALMKTDATE_190834866");
    noRelatedSym_0_2.set(MaturityDate_21);
    Instrument_21.insert(MaturityDate_21.getString());
    FIX::MaturityMonthYear MaturityMonthYear_21("MONTHYEAR_546949539");
    noRelatedSym_0_2.set(MaturityMonthYear_21);
    Instrument_21.insert(MaturityMonthYear_21.getString());
    FIX::MaturityTime MaturityTime_21("TZTIMEONLY_211604383");
    noRelatedSym_0_2.set(MaturityTime_21);
    Instrument_21.insert(MaturityTime_21.getString());
    FIX::MinPriceIncrement MinPriceIncrement_21;
    MinPriceIncrement_21.setString("10115590");
    noRelatedSym_0_2.set(MinPriceIncrement_21);
    Instrument_21.insert(MinPriceIncrement_21.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_21;
    MinPriceIncrementAmount_21.setString("12131326");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_21);
    Instrument_21.insert(MinPriceIncrementAmount_21.getString());
    FIX::NTPositionLimit NTPositionLimit_21(612224846);
    noRelatedSym_0_2.set(NTPositionLimit_21);
    Instrument_21.insert(NTPositionLimit_21.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_21;
    NotionalPercentageOutstanding_21.setString("18.510000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_21);
    Instrument_21.insert(NotionalPercentageOutstanding_21.getString());
    FIX::OptAttribute OptAttribute_21('1');
    noRelatedSym_0_2.set(OptAttribute_21);
    Instrument_21.insert(OptAttribute_21.getString());
    FIX::OptPayoutAmount OptPayoutAmount_21;
    OptPayoutAmount_21.setString("17072885");
    noRelatedSym_0_2.set(OptPayoutAmount_21);
    Instrument_21.insert(OptPayoutAmount_21.getString());
    FIX::OptPayoutType OptPayoutType_21(3);
    noRelatedSym_0_2.set(OptPayoutType_21);
    Instrument_21.insert(OptPayoutType_21.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_21;
    OriginalNotionalPercentageOutstanding_21.setString("92.050000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_21);
    Instrument_21.insert(OriginalNotionalPercentageOutstanding_21.getString());
    FIX::Pool Pool_21("STRING_1925971919");
    noRelatedSym_0_2.set(Pool_21);
    Instrument_21.insert(Pool_21.getString());
    FIX::PositionLimit PositionLimit_21(1825575253);
    noRelatedSym_0_2.set(PositionLimit_21);
    Instrument_21.insert(PositionLimit_21.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_21("STRING_STD");
    noRelatedSym_0_2.set(PriceQuoteMethod_21);
    Instrument_21.insert(PriceQuoteMethod_21.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_21("STRING_1826226612");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_21);
    Instrument_21.insert(PriceUnitOfMeasure_21.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_21;
    PriceUnitOfMeasureQty_21.setString("3207788");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_21);
    Instrument_21.insert(PriceUnitOfMeasureQty_21.getString());
    FIX::Product Product_23(3);
    noRelatedSym_0_2.set(Product_23);
    Instrument_21.insert(Product_23.getString());
    FIX::ProductComplex ProductComplex_21("STRING_1396243042");
    noRelatedSym_0_2.set(ProductComplex_21);
    Instrument_21.insert(ProductComplex_21.getString());
    FIX::PutOrCall PutOrCall_21(0);
    noRelatedSym_0_2.set(PutOrCall_21);
    Instrument_21.insert(PutOrCall_21.getString());
    FIX::RedemptionDate RedemptionDate_21("LOCALMKTDATE_2013628033");
    noRelatedSym_0_2.set(RedemptionDate_21);
    Instrument_21.insert(RedemptionDate_21.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_21("STRING_285022182");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_21);
    Instrument_21.insert(RepoCollateralSecurityType_21.getString());
    FIX::RepurchaseRate RepurchaseRate_21;
    RepurchaseRate_21.setString("40.550000");
    noRelatedSym_0_2.set(RepurchaseRate_21);
    Instrument_21.insert(RepurchaseRate_21.getString());
    FIX::RepurchaseTerm RepurchaseTerm_21(856093492);
    noRelatedSym_0_2.set(RepurchaseTerm_21);
    Instrument_21.insert(RepurchaseTerm_21.getString());
    FIX::RestructuringType RestructuringType_21("STRING_MR");
    noRelatedSym_0_2.set(RestructuringType_21);
    Instrument_21.insert(RestructuringType_21.getString());
    FIX::SecurityDesc SecurityDesc_21("STRING_1959990199");
    noRelatedSym_0_2.set(SecurityDesc_21);
    Instrument_21.insert(SecurityDesc_21.getString());
    FIX::SecurityExchange SecurityExchange_21("EXCHANGE_146920136");
    noRelatedSym_0_2.set(SecurityExchange_21);
    Instrument_21.insert(SecurityExchange_21.getString());
    FIX::SecurityGroup SecurityGroup_21("STRING_1499055835");
    noRelatedSym_0_2.set(SecurityGroup_21);
    Instrument_21.insert(SecurityGroup_21.getString());
    FIX::SecurityID SecurityID_21("STRING_181415548");
    noRelatedSym_0_2.set(SecurityID_21);
    Instrument_21.insert(SecurityID_21.getString());
    FIX::SecurityIDSource SecurityIDSource_21("STRING_I");
    noRelatedSym_0_2.set(SecurityIDSource_21);
    Instrument_21.insert(SecurityIDSource_21.getString());
    FIX::SecurityStatus SecurityStatus_21("STRING_1");
    noRelatedSym_0_2.set(SecurityStatus_21);
    Instrument_21.insert(SecurityStatus_21.getString());
    FIX::SecuritySubType SecuritySubType_22("STRING_289622579");
    noRelatedSym_0_2.set(SecuritySubType_22);
    Instrument_21.insert(SecuritySubType_22.getString());
    FIX::SecurityType SecurityType_23("STRING_MBS");
    noRelatedSym_0_2.set(SecurityType_23);
    Instrument_21.insert(SecurityType_23.getString());
    FIX::Seniority Seniority_21("STRING_SD");
    noRelatedSym_0_2.set(Seniority_21);
    Instrument_21.insert(Seniority_21.getString());
    FIX::SettlMethod SettlMethod_21('P');
    noRelatedSym_0_2.set(SettlMethod_21);
    Instrument_21.insert(SettlMethod_21.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_21("STRING_1392870036");
    noRelatedSym_0_2.set(SettleOnOpenFlag_21);
    Instrument_21.insert(SettleOnOpenFlag_21.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_21("STRING_1178933142");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_21);
    Instrument_21.insert(StateOrProvinceOfIssue_21.getString());
    FIX::StrikeCurrency StrikeCurrency_21("JPY");
    noRelatedSym_0_2.set(StrikeCurrency_21);
    Instrument_21.insert(StrikeCurrency_21.getString());
    FIX::StrikeMultiplier StrikeMultiplier_21;
    StrikeMultiplier_21.setString("5871642");
    noRelatedSym_0_2.set(StrikeMultiplier_21);
    Instrument_21.insert(StrikeMultiplier_21.getString());
    FIX::StrikePrice StrikePrice_21;
    StrikePrice_21.setString("6732567");
    noRelatedSym_0_2.set(StrikePrice_21);
    Instrument_21.insert(StrikePrice_21.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_21(4);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_21);
    Instrument_21.insert(StrikePriceBoundaryMethod_21.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_21;
    StrikePriceBoundaryPrecision_21.setString("34.780000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_21);
    Instrument_21.insert(StrikePriceBoundaryPrecision_21.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_21(4);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_21);
    Instrument_21.insert(StrikePriceDeterminationMethod_21.getString());
    FIX::StrikeValue StrikeValue_21;
    StrikeValue_21.setString("4943003");
    noRelatedSym_0_2.set(StrikeValue_21);
    Instrument_21.insert(StrikeValue_21.getString());
    FIX::Symbol Symbol_21("STRING_77241478");
    noRelatedSym_0_2.set(Symbol_21);
    Instrument_21.insert(Symbol_21.getString());
    FIX::SymbolSfx SymbolSfx_21("STRING_CD");
    noRelatedSym_0_2.set(SymbolSfx_21);
    Instrument_21.insert(SymbolSfx_21.getString());
    FIX::TimeUnit TimeUnit_21("STRING_Mo");
    noRelatedSym_0_2.set(TimeUnit_21);
    Instrument_21.insert(TimeUnit_21.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_21(3);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_21);
    Instrument_21.insert(UnderlyingPriceDeterminationMethod_21.getString());
    FIX::UnitOfMeasure UnitOfMeasure_21("STRING_MMbbl");
    noRelatedSym_0_2.set(UnitOfMeasure_21);
    Instrument_21.insert(UnitOfMeasure_21.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_21;
    UnitOfMeasureQty_21.setString("1513178");
    noRelatedSym_0_2.set(UnitOfMeasureQty_21);
    Instrument_21.insert(UnitOfMeasureQty_21.getString());
    FIX::ValuationMethod ValuationMethod_21("STRING_FUTDA");
    noRelatedSym_0_2.set(ValuationMethod_21);
    Instrument_21.insert(ValuationMethod_21.getString());
    all_values.push_back(Instrument_21);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_46;
      FIX::ComplexEventCondition ComplexEventCondition_46(1);
      noComplexEvents_2_1_0.set(ComplexEventCondition_46);
      ComplexEvents_NoComplexEvents_46.insert(ComplexEventCondition_46.getString());
      FIX::ComplexEventPrice ComplexEventPrice_46;
      ComplexEventPrice_46.setString("13298746");
      noComplexEvents_2_1_0.set(ComplexEventPrice_46);
      ComplexEvents_NoComplexEvents_46.insert(ComplexEventPrice_46.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_46(4);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_46);
      ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceBoundaryMethod_46.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_46;
      ComplexEventPriceBoundaryPrecision_46.setString("84.800000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_46);
      ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceBoundaryPrecision_46.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_46(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_46);
      ComplexEvents_NoComplexEvents_46.insert(ComplexEventPriceTimeType_46.getString());
      FIX::ComplexEventType ComplexEventType_46(8);
      noComplexEvents_2_1_0.set(ComplexEventType_46);
      ComplexEvents_NoComplexEvents_46.insert(ComplexEventType_46.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_46;
      ComplexOptPayoutAmount_46.setString("6919340");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_46);
      ComplexEvents_NoComplexEvents_46.insert(ComplexOptPayoutAmount_46.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_46);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_96;
        FIX::ComplexEventEndDate ComplexEventEndDate_96(FIX::UTCTIMESTAMP(23, 9, 41, 2, 3, 2017));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_96);
        ComplexEventDates_NoComplexEventDates_96.insert(ComplexEventEndDate_96.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_96(FIX::UTCTIMESTAMP(22, 29, 31, 21, 4, 2005));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_96);
        ComplexEventDates_NoComplexEventDates_96.insert(ComplexEventStartDate_96.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_96);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_205;
          FIX::ComplexEventEndTime ComplexEventEndTime_205(FIX::UTCTIMEONLY(7, 41, 40));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_205);
          ComplexEventTimes_NoComplexEventTimes_205.insert(ComplexEventEndTime_205.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_205(FIX::UTCTIMEONLY(6, 7, 21));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_205);
          ComplexEventTimes_NoComplexEventTimes_205.insert(ComplexEventStartTime_205.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_205);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_97;
        FIX::ComplexEventEndDate ComplexEventEndDate_97(FIX::UTCTIMESTAMP(3, 51, 34, 4, 5, 2016));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_97);
        ComplexEventDates_NoComplexEventDates_97.insert(ComplexEventEndDate_97.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_97(FIX::UTCTIMESTAMP(22, 2, 9, 3, 1, 2011));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_97);
        ComplexEventDates_NoComplexEventDates_97.insert(ComplexEventStartDate_97.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_97);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_206;
          FIX::ComplexEventEndTime ComplexEventEndTime_206(FIX::UTCTIMEONLY(21, 48, 27));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_206);
          ComplexEventTimes_NoComplexEventTimes_206.insert(ComplexEventEndTime_206.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_206(FIX::UTCTIMEONLY(7, 42, 25));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_206);
          ComplexEventTimes_NoComplexEventTimes_206.insert(ComplexEventStartTime_206.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_206);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_207;
          FIX::ComplexEventEndTime ComplexEventEndTime_207(FIX::UTCTIMEONLY(5, 58, 5));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_207);
          ComplexEventTimes_NoComplexEventTimes_207.insert(ComplexEventEndTime_207.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_207(FIX::UTCTIMEONLY(20, 13, 36));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_207);
          ComplexEventTimes_NoComplexEventTimes_207.insert(ComplexEventStartTime_207.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_207);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_38;
      FIX::EventDate EventDate_38("LOCALMKTDATE_1688312732");
      noEvents_2_1_0.set(EventDate_38);
      EvntGrp_NoEvents_38.insert(EventDate_38.getString());
      FIX::EventPx EventPx_38;
      EventPx_38.setString("10495014");
      noEvents_2_1_0.set(EventPx_38);
      EvntGrp_NoEvents_38.insert(EventPx_38.getString());
      FIX::EventText EventText_38("STRING_137639017");
      noEvents_2_1_0.set(EventText_38);
      EvntGrp_NoEvents_38.insert(EventText_38.getString());
      FIX::EventTime EventTime_38(FIX::UTCTIMESTAMP(0, 51, 8, 2, 6, 2010));
      noEvents_2_1_0.set(EventTime_38);
      EvntGrp_NoEvents_38.insert(EventTime_38.getString());
      FIX::EventType EventType_38(14);
      noEvents_2_1_0.set(EventType_38);
      EvntGrp_NoEvents_38.insert(EventType_38.getString());
      all_values.push_back(EvntGrp_NoEvents_38);

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_39;
      FIX::EventDate EventDate_39("LOCALMKTDATE_1106700258");
      noEvents_2_1_1.set(EventDate_39);
      EvntGrp_NoEvents_39.insert(EventDate_39.getString());
      FIX::EventPx EventPx_39;
      EventPx_39.setString("5450471");
      noEvents_2_1_1.set(EventPx_39);
      EvntGrp_NoEvents_39.insert(EventPx_39.getString());
      FIX::EventText EventText_39("STRING_1735294572");
      noEvents_2_1_1.set(EventText_39);
      EvntGrp_NoEvents_39.insert(EventText_39.getString());
      FIX::EventTime EventTime_39(FIX::UTCTIMESTAMP(15, 52, 33, 18, 1, 2002));
      noEvents_2_1_1.set(EventTime_39);
      EvntGrp_NoEvents_39.insert(EventTime_39.getString());
      FIX::EventType EventType_39(99);
      noEvents_2_1_1.set(EventType_39);
      EvntGrp_NoEvents_39.insert(EventType_39.getString());
      all_values.push_back(EvntGrp_NoEvents_39);

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_40;
      FIX::InstrumentPartyID InstrumentPartyID_40("STRING_1210353241");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyID_40.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_40('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyIDSource_40.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_40(1682646503);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_40);
      InstrumentParties_NoInstrumentParties_40.insert(InstrumentPartyRole_40.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_40);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91;
        FIX::InstrumentPartySubID InstrumentPartySubID_91("STRING_1393205305");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_91);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91.insert(InstrumentPartySubID_91.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_91(1289355568);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_91);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91.insert(InstrumentPartySubIDType_91.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92;
        FIX::InstrumentPartySubID InstrumentPartySubID_92("STRING_1351843312");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_92);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92.insert(InstrumentPartySubID_92.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_92(185078667);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_92);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92.insert(InstrumentPartySubIDType_92.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_41;
      FIX::InstrumentPartyID InstrumentPartyID_41("STRING_830184652");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyID_41.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_41('2');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyIDSource_41.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_41(322717684);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_41);
      InstrumentParties_NoInstrumentParties_41.insert(InstrumentPartyRole_41.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_41);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93;
        FIX::InstrumentPartySubID InstrumentPartySubID_93("STRING_1116930767");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_93);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93.insert(InstrumentPartySubID_93.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_93(350572736);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_93);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93.insert(InstrumentPartySubIDType_93.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94;
        FIX::InstrumentPartySubID InstrumentPartySubID_94("STRING_1516890773");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_94);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94.insert(InstrumentPartySubID_94.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_94(421110397);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_94);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94.insert(InstrumentPartySubIDType_94.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95;
        FIX::InstrumentPartySubID InstrumentPartySubID_95("STRING_1250200429");
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubID_95);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95.insert(InstrumentPartySubID_95.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_95(2083653183);
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubIDType_95);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95.insert(InstrumentPartySubIDType_95.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_42;
      FIX::InstrumentPartyID InstrumentPartyID_42("STRING_1054709731");
      noInstrumentParties_2_1_2.set(InstrumentPartyID_42);
      InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyID_42.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_42('2');
      noInstrumentParties_2_1_2.set(InstrumentPartyIDSource_42);
      InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyIDSource_42.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_42(481216665);
      noInstrumentParties_2_1_2.set(InstrumentPartyRole_42);
      InstrumentParties_NoInstrumentParties_42.insert(InstrumentPartyRole_42.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_42);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96;
        FIX::InstrumentPartySubID InstrumentPartySubID_96("STRING_1971941593");
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubID_96);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96.insert(InstrumentPartySubID_96.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_96(1012361304);
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubIDType_96);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96.insert(InstrumentPartySubIDType_96.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97;
        FIX::InstrumentPartySubID InstrumentPartySubID_97("STRING_1691466628");
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubID_97);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97.insert(InstrumentPartySubID_97.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_97(1217331639);
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubIDType_97);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97.insert(InstrumentPartySubIDType_97.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98;
        FIX::InstrumentPartySubID InstrumentPartySubID_98("STRING_206141318");
        noInstrumentPartySubIDs_2_2_2_2.set(InstrumentPartySubID_98);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98.insert(InstrumentPartySubID_98.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_98(1647133640);
        noInstrumentPartySubIDs_2_2_2_2.set(InstrumentPartySubIDType_98);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98.insert(InstrumentPartySubIDType_98.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_44;
      FIX::SecurityAltID SecurityAltID_44("STRING_1528362197");
      noSecurityAltID_2_1_0.set(SecurityAltID_44);
      SecAltIDGrp_NoSecurityAltID_44.insert(SecurityAltID_44.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_44("STRING_179832809");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_44);
      SecAltIDGrp_NoSecurityAltID_44.insert(SecurityAltIDSource_44.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_44);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_45;
      FIX::SecurityAltID SecurityAltID_45("STRING_729693940");
      noSecurityAltID_2_1_1.set(SecurityAltID_45);
      SecAltIDGrp_NoSecurityAltID_45.insert(SecurityAltID_45.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_45("STRING_669974018");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_45);
      SecAltIDGrp_NoSecurityAltID_45.insert(SecurityAltIDSource_45.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_45);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_46;
      FIX::SecurityAltID SecurityAltID_46("STRING_1862479312");
      noSecurityAltID_2_1_2.set(SecurityAltID_46);
      SecAltIDGrp_NoSecurityAltID_46.insert(SecurityAltID_46.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_46("STRING_1636912976");
      noSecurityAltID_2_1_2.set(SecurityAltIDSource_46);
      SecAltIDGrp_NoSecurityAltID_46.insert(SecurityAltIDSource_46.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_46);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_42;
    FIX::SecurityXML SecurityXML_43("XMLDATA_2063179323");
    noRelatedSym_0_2.set(SecurityXML_43);
    FIX::SecurityXMLLen SecurityXMLLen_21(1004351232);
    noRelatedSym_0_2.set(SecurityXMLLen_21);
    FIX::SecurityXMLSchema SecurityXMLSchema_21("STRING_841272640");
    noRelatedSym_0_2.set(SecurityXMLSchema_21);
    SecurityXML_42.insert(SecurityXMLSchema_21.getString());
    all_values.push_back(SecurityXML_42);

    // InstrumentExtension
    multiset<string> InstrumentExtension_8;
    FIX::DeliveryForm DeliveryForm_8(1);
    noRelatedSym_0_2.set(DeliveryForm_8);
    InstrumentExtension_8.insert(DeliveryForm_8.getString());
    FIX::PctAtRisk PctAtRisk_8;
    PctAtRisk_8.setString("58.850000");
    noRelatedSym_0_2.set(PctAtRisk_8);
    InstrumentExtension_8.insert(PctAtRisk_8.getString());
    all_values.push_back(InstrumentExtension_8);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_15;
      FIX::InstrAttribType InstrAttribType_15(28);
      noInstrAttrib_2_1_0.set(InstrAttribType_15);
      AttrbGrp_NoInstrAttrib_15.insert(InstrAttribType_15.getString());
      FIX::InstrAttribValue InstrAttribValue_15("STRING_1468980770");
      noInstrAttrib_2_1_0.set(InstrAttribValue_15);
      AttrbGrp_NoInstrAttrib_15.insert(InstrAttribValue_15.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_15);

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_16;
      FIX::InstrAttribType InstrAttribType_16(2);
      noInstrAttrib_2_1_1.set(InstrAttribType_16);
      AttrbGrp_NoInstrAttrib_16.insert(InstrAttribType_16.getString());
      FIX::InstrAttribValue InstrAttribValue_16("STRING_774064763");
      noInstrAttrib_2_1_1.set(InstrAttribValue_16);
      AttrbGrp_NoInstrAttrib_16.insert(InstrAttribValue_16.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_16);

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_4;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_4;
    SecondaryHighLimitPrice_4.setString("8383878");
    noRelatedSym_0_2.set(SecondaryHighLimitPrice_4);
    SecondaryPriceLimits_4.insert(SecondaryHighLimitPrice_4.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_4;
    SecondaryLowLimitPrice_4.setString("4856913");
    noRelatedSym_0_2.set(SecondaryLowLimitPrice_4);
    SecondaryPriceLimits_4.insert(SecondaryLowLimitPrice_4.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_4(2024265192);
    noRelatedSym_0_2.set(SecondaryPriceLimitType_4);
    SecondaryPriceLimits_4.insert(SecondaryPriceLimitType_4.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_4;
    SecondaryTradingReferencePrice_4.setString("7745574");
    noRelatedSym_0_2.set(SecondaryTradingReferencePrice_4);
    SecondaryPriceLimits_4.insert(SecondaryTradingReferencePrice_4.getString());
    all_values.push_back(SecondaryPriceLimits_4);

    msg.addGroup(noRelatedSym_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_35;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_35("DATA_1540401040");
  msg.set(EncodedUnderlyingIssuer_35);
  UnderlyingInstrument_35.insert(EncodedUnderlyingIssuer_35.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_35(86198584);
  msg.set(EncodedUnderlyingIssuerLen_35);
  UnderlyingInstrument_35.insert(EncodedUnderlyingIssuerLen_35.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_35("DATA_1255774096");
  msg.set(EncodedUnderlyingSecurityDesc_35);
  UnderlyingInstrument_35.insert(EncodedUnderlyingSecurityDesc_35.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_35(35438047);
  msg.set(EncodedUnderlyingSecurityDescLen_35);
  UnderlyingInstrument_35.insert(EncodedUnderlyingSecurityDescLen_35.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_35;
  UnderlyingAdjustedQuantity_35.setString("20581401");
  msg.set(UnderlyingAdjustedQuantity_35);
  UnderlyingInstrument_35.insert(UnderlyingAdjustedQuantity_35.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_35;
  UnderlyingAllocationPercent_35.setString("17.520000");
  msg.set(UnderlyingAllocationPercent_35);
  UnderlyingInstrument_35.insert(UnderlyingAllocationPercent_35.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_35;
  UnderlyingAttachmentPoint_35.setString("46.750000");
  msg.set(UnderlyingAttachmentPoint_35);
  UnderlyingInstrument_35.insert(UnderlyingAttachmentPoint_35.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_35("STRING_1127988168");
  msg.set(UnderlyingCFICode_35);
  UnderlyingInstrument_35.insert(UnderlyingCFICode_35.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_35("STRING_326793070");
  msg.set(UnderlyingCPProgram_35);
  UnderlyingInstrument_35.insert(UnderlyingCPProgram_35.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_35("STRING_1226554667");
  msg.set(UnderlyingCPRegType_35);
  UnderlyingInstrument_35.insert(UnderlyingCPRegType_35.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_35;
  UnderlyingCapValue_35.setString("6473288");
  msg.set(UnderlyingCapValue_35);
  UnderlyingInstrument_35.insert(UnderlyingCapValue_35.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_35;
  UnderlyingCashAmount_35.setString("18551552");
  msg.set(UnderlyingCashAmount_35);
  UnderlyingInstrument_35.insert(UnderlyingCashAmount_35.getString());
  FIX::UnderlyingCashType UnderlyingCashType_35("STRING_DIFF");
  msg.set(UnderlyingCashType_35);
  UnderlyingInstrument_35.insert(UnderlyingCashType_35.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_35;
  UnderlyingContractMultiplier_35.setString("13770228");
  msg.set(UnderlyingContractMultiplier_35);
  UnderlyingInstrument_35.insert(UnderlyingContractMultiplier_35.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_35(377645637);
  msg.set(UnderlyingContractMultiplierUnit_35);
  UnderlyingInstrument_35.insert(UnderlyingContractMultiplierUnit_35.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_35("COUNTRY_1121383141");
  msg.set(UnderlyingCountryOfIssue_35);
  UnderlyingInstrument_35.insert(UnderlyingCountryOfIssue_35.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_35("LOCALMKTDATE_866452136");
  msg.set(UnderlyingCouponPaymentDate_35);
  UnderlyingInstrument_35.insert(UnderlyingCouponPaymentDate_35.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_35;
  UnderlyingCouponRate_35.setString("13.120000");
  msg.set(UnderlyingCouponRate_35);
  UnderlyingInstrument_35.insert(UnderlyingCouponRate_35.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_35("STRING_2125734374");
  msg.set(UnderlyingCreditRating_35);
  UnderlyingInstrument_35.insert(UnderlyingCreditRating_35.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_35("GBP");
  msg.set(UnderlyingCurrency_35);
  UnderlyingInstrument_35.insert(UnderlyingCurrency_35.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_35;
  UnderlyingCurrentValue_35.setString("18127866");
  msg.set(UnderlyingCurrentValue_35);
  UnderlyingInstrument_35.insert(UnderlyingCurrentValue_35.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_35;
  UnderlyingDetachmentPoint_35.setString("49.210000");
  msg.set(UnderlyingDetachmentPoint_35);
  UnderlyingInstrument_35.insert(UnderlyingDetachmentPoint_35.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_35;
  UnderlyingDirtyPrice_35.setString("8176076");
  msg.set(UnderlyingDirtyPrice_35);
  UnderlyingInstrument_35.insert(UnderlyingDirtyPrice_35.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_35;
  UnderlyingEndPrice_35.setString("11342837");
  msg.set(UnderlyingEndPrice_35);
  UnderlyingInstrument_35.insert(UnderlyingEndPrice_35.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_35;
  UnderlyingEndValue_35.setString("7199558");
  msg.set(UnderlyingEndValue_35);
  UnderlyingInstrument_35.insert(UnderlyingEndValue_35.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_35(1591672444);
  msg.set(UnderlyingExerciseStyle_35);
  UnderlyingInstrument_35.insert(UnderlyingExerciseStyle_35.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_35;
  UnderlyingFXRate_35.setString("19726716");
  msg.set(UnderlyingFXRate_35);
  UnderlyingInstrument_35.insert(UnderlyingFXRate_35.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_35('M');
  msg.set(UnderlyingFXRateCalc_35);
  UnderlyingInstrument_35.insert(UnderlyingFXRateCalc_35.getString());
  FIX::UnderlyingFactor UnderlyingFactor_35;
  UnderlyingFactor_35.setString("14684539");
  msg.set(UnderlyingFactor_35);
  UnderlyingInstrument_35.insert(UnderlyingFactor_35.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_35(599745411);
  msg.set(UnderlyingFlowScheduleType_35);
  UnderlyingInstrument_35.insert(UnderlyingFlowScheduleType_35.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_35("STRING_598564533");
  msg.set(UnderlyingInstrRegistry_35);
  UnderlyingInstrument_35.insert(UnderlyingInstrRegistry_35.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_35("LOCALMKTDATE_1554652573");
  msg.set(UnderlyingIssueDate_35);
  UnderlyingInstrument_35.insert(UnderlyingIssueDate_35.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_35("STRING_1855519507");
  msg.set(UnderlyingIssuer_35);
  UnderlyingInstrument_35.insert(UnderlyingIssuer_35.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_35("STRING_634002581");
  msg.set(UnderlyingLocaleOfIssue_35);
  UnderlyingInstrument_35.insert(UnderlyingLocaleOfIssue_35.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_35("LOCALMKTDATE_1465309102");
  msg.set(UnderlyingMaturityDate_35);
  UnderlyingInstrument_35.insert(UnderlyingMaturityDate_35.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_35("MONTHYEAR_1976171259");
  msg.set(UnderlyingMaturityMonthYear_35);
  UnderlyingInstrument_35.insert(UnderlyingMaturityMonthYear_35.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_35("TZTIMEONLY_213423608");
  msg.set(UnderlyingMaturityTime_35);
  UnderlyingInstrument_35.insert(UnderlyingMaturityTime_35.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_35;
  UnderlyingNotionalPercentageOutstanding_35.setString("36.230000");
  msg.set(UnderlyingNotionalPercentageOutstanding_35);
  UnderlyingInstrument_35.insert(UnderlyingNotionalPercentageOutstanding_35.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_35('1');
  msg.set(UnderlyingOptAttribute_35);
  UnderlyingInstrument_35.insert(UnderlyingOptAttribute_35.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_35;
  UnderlyingOriginalNotionalPercentageOutstanding_35.setString("82.760000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_35);
  UnderlyingInstrument_35.insert(UnderlyingOriginalNotionalPercentageOutstanding_35.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_35("STRING_1093142490");
  msg.set(UnderlyingPriceUnitOfMeasure_35);
  UnderlyingInstrument_35.insert(UnderlyingPriceUnitOfMeasure_35.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_35;
  UnderlyingPriceUnitOfMeasureQty_35.setString("20106359");
  msg.set(UnderlyingPriceUnitOfMeasureQty_35);
  UnderlyingInstrument_35.insert(UnderlyingPriceUnitOfMeasureQty_35.getString());
  FIX::UnderlyingProduct UnderlyingProduct_35(698882105);
  msg.set(UnderlyingProduct_35);
  UnderlyingInstrument_35.insert(UnderlyingProduct_35.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_35(322681650);
  msg.set(UnderlyingPutOrCall_35);
  UnderlyingInstrument_35.insert(UnderlyingPutOrCall_35.getString());
  FIX::UnderlyingPx UnderlyingPx_35;
  UnderlyingPx_35.setString("2407979");
  msg.set(UnderlyingPx_35);
  UnderlyingInstrument_35.insert(UnderlyingPx_35.getString());
  FIX::UnderlyingQty UnderlyingQty_35;
  UnderlyingQty_35.setString("18202652");
  msg.set(UnderlyingQty_35);
  UnderlyingInstrument_35.insert(UnderlyingQty_35.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_35("LOCALMKTDATE_1189133787");
  msg.set(UnderlyingRedemptionDate_35);
  UnderlyingInstrument_35.insert(UnderlyingRedemptionDate_35.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_35("STRING_534139249");
  msg.set(UnderlyingRepoCollateralSecurityType_35);
  UnderlyingInstrument_35.insert(UnderlyingRepoCollateralSecurityType_35.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_35;
  UnderlyingRepurchaseRate_35.setString("59.720000");
  msg.set(UnderlyingRepurchaseRate_35);
  UnderlyingInstrument_35.insert(UnderlyingRepurchaseRate_35.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_35(749374916);
  msg.set(UnderlyingRepurchaseTerm_35);
  UnderlyingInstrument_35.insert(UnderlyingRepurchaseTerm_35.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_35("STRING_928254904");
  msg.set(UnderlyingRestructuringType_35);
  UnderlyingInstrument_35.insert(UnderlyingRestructuringType_35.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_35("STRING_1463818935");
  msg.set(UnderlyingSecurityDesc_35);
  UnderlyingInstrument_35.insert(UnderlyingSecurityDesc_35.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_35("EXCHANGE_1404749837");
  msg.set(UnderlyingSecurityExchange_35);
  UnderlyingInstrument_35.insert(UnderlyingSecurityExchange_35.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_35("STRING_1745862585");
  msg.set(UnderlyingSecurityID_35);
  UnderlyingInstrument_35.insert(UnderlyingSecurityID_35.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_35("STRING_450619020");
  msg.set(UnderlyingSecurityIDSource_35);
  UnderlyingInstrument_35.insert(UnderlyingSecurityIDSource_35.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_35("STRING_2124705669");
  msg.set(UnderlyingSecuritySubType_35);
  UnderlyingInstrument_35.insert(UnderlyingSecuritySubType_35.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_35("STRING_1190051382");
  msg.set(UnderlyingSecurityType_35);
  UnderlyingInstrument_35.insert(UnderlyingSecurityType_35.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_35("STRING_275807001");
  msg.set(UnderlyingSeniority_35);
  UnderlyingInstrument_35.insert(UnderlyingSeniority_35.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_35("STRING_1182869163");
  msg.set(UnderlyingSettlMethod_35);
  UnderlyingInstrument_35.insert(UnderlyingSettlMethod_35.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_35(4);
  msg.set(UnderlyingSettlementType_35);
  UnderlyingInstrument_35.insert(UnderlyingSettlementType_35.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_35;
  UnderlyingStartValue_35.setString("8755524");
  msg.set(UnderlyingStartValue_35);
  UnderlyingInstrument_35.insert(UnderlyingStartValue_35.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_35("STRING_1781433696");
  msg.set(UnderlyingStateOrProvinceOfIssue_35);
  UnderlyingInstrument_35.insert(UnderlyingStateOrProvinceOfIssue_35.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_35("USD");
  msg.set(UnderlyingStrikeCurrency_35);
  UnderlyingInstrument_35.insert(UnderlyingStrikeCurrency_35.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_35;
  UnderlyingStrikePrice_35.setString("2679526");
  msg.set(UnderlyingStrikePrice_35);
  UnderlyingInstrument_35.insert(UnderlyingStrikePrice_35.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_35("STRING_1383499750");
  msg.set(UnderlyingSymbol_35);
  UnderlyingInstrument_35.insert(UnderlyingSymbol_35.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_35("STRING_412275883");
  msg.set(UnderlyingSymbolSfx_35);
  UnderlyingInstrument_35.insert(UnderlyingSymbolSfx_35.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_35("STRING_481376238");
  msg.set(UnderlyingTimeUnit_35);
  UnderlyingInstrument_35.insert(UnderlyingTimeUnit_35.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_35("STRING_1829313373");
  msg.set(UnderlyingUnitOfMeasure_35);
  UnderlyingInstrument_35.insert(UnderlyingUnitOfMeasure_35.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_35;
  UnderlyingUnitOfMeasureQty_35.setString("5677565");
  msg.set(UnderlyingUnitOfMeasureQty_35);
  UnderlyingInstrument_35.insert(UnderlyingUnitOfMeasureQty_35.getString());
  all_values.push_back(UnderlyingInstrument_35);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_75;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_75("STRING_774972216");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_75);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_75.insert(UnderlyingSecurityAltID_75.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_75("STRING_430908865");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_75);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_75.insert(UnderlyingSecurityAltIDSource_75.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_75);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_76;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_76("STRING_472752971");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_76);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_76.insert(UnderlyingSecurityAltID_76.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_76("STRING_1097653866");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_76);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_76.insert(UnderlyingSecurityAltIDSource_76.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_76);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_77;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_77("STRING_671706803");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_77);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_77.insert(UnderlyingSecurityAltID_77.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_77("STRING_145534569");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_77);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_77.insert(UnderlyingSecurityAltIDSource_77.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_77);

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_67;
    FIX::UnderlyingStipType UnderlyingStipType_67("STRING_1205846052");
    noUnderlyingStips_0_0.set(UnderlyingStipType_67);
    UnderlyingStipulations_NoUnderlyingStips_67.insert(UnderlyingStipType_67.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_67("STRING_1944050542");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_67);
    UnderlyingStipulations_NoUnderlyingStips_67.insert(UnderlyingStipValue_67.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_67);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_68;
    FIX::UnderlyingStipType UnderlyingStipType_68("STRING_888678921");
    noUnderlyingStips_0_1.set(UnderlyingStipType_68);
    UnderlyingStipulations_NoUnderlyingStips_68.insert(UnderlyingStipType_68.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_68("STRING_2134100956");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_68);
    UnderlyingStipulations_NoUnderlyingStips_68.insert(UnderlyingStipValue_68.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_68);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_69;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_69("STRING_145945110");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_69);
    UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyID_69.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_69('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_69);
    UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyIDSource_69.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_69(1711004850);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_69);
    UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyRole_69.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_69);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_147("STRING_775047628");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_147);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147.insert(UnderlyingInstrumentPartySubID_147.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_147(1986811851);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_147);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147.insert(UnderlyingInstrumentPartySubIDType_147.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_148("STRING_1306036295");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_148);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148.insert(UnderlyingInstrumentPartySubID_148.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_148(1286069351);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_148);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148.insert(UnderlyingInstrumentPartySubIDType_148.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_149("STRING_714880615");
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubID_149);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149.insert(UnderlyingInstrumentPartySubID_149.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_149(939986343);
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubIDType_149);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149.insert(UnderlyingInstrumentPartySubIDType_149.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_70;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_70("STRING_1204259999");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_70);
    UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyID_70.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_70('1');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_70);
    UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyIDSource_70.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_70(1207938973);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_70);
    UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyRole_70.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_70);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_150("STRING_1710744771");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_150);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150.insert(UnderlyingInstrumentPartySubID_150.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_150(1689315211);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_150);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150.insert(UnderlyingInstrumentPartySubIDType_150.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_151("STRING_122105827");
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubID_151);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151.insert(UnderlyingInstrumentPartySubID_151.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_151(131017688);
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubIDType_151);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151.insert(UnderlyingInstrumentPartySubIDType_151.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_71;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_71("STRING_1463186077");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_71);
    UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyID_71.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_71('8');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_71);
    UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyIDSource_71.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_71(561926553);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_71);
    UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyRole_71.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_71);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_152("STRING_1994731909");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_152);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152.insert(UnderlyingInstrumentPartySubID_152.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_152(1233633356);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_152);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152.insert(UnderlyingInstrumentPartySubIDType_152.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152);

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
