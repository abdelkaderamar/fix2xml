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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DerivativeSecurityListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> DerivativeSecurityListUpdateReport_0;
  FIX::LastFragment LastFragment_4(false);
  msg.set(LastFragment_4);
  DerivativeSecurityListUpdateReport_0.insert(LastFragment_4.getString());
  FIX::SecurityReqID SecurityReqID_2("STRING_202092904");
  msg.set(SecurityReqID_2);
  DerivativeSecurityListUpdateReport_0.insert(SecurityReqID_2.getString());
  FIX::SecurityRequestResult SecurityRequestResult_1(3);
  msg.set(SecurityRequestResult_1);
  DerivativeSecurityListUpdateReport_0.insert(SecurityRequestResult_1.getString());
  FIX::SecurityResponseID SecurityResponseID_1("STRING_590877098");
  msg.set(SecurityResponseID_1);
  DerivativeSecurityListUpdateReport_0.insert(SecurityResponseID_1.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_0('A');
  msg.set(SecurityUpdateAction_0);
  DerivativeSecurityListUpdateReport_0.insert(SecurityUpdateAction_0.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_2(1372667747);
  msg.set(TotNoRelatedSym_2);
  DerivativeSecurityListUpdateReport_0.insert(TotNoRelatedSym_2.getString());
  FIX::TransactTime TransactTime_17(FIX::UTCTIMESTAMP(11, 38, 16, 11, 2, 2003));
  msg.set(TransactTime_17);
  DerivativeSecurityListUpdateReport_0.insert(TransactTime_17.getString());
  all_values.push_back(DerivativeSecurityListUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_3;
  FIX::ApplID ApplID_3("STRING_1199457614");
  msg.set(ApplID_3);
  ApplicationSequenceControl_3.insert(ApplID_3.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_3(838413984);
  msg.set(ApplLastSeqNum_3);
  ApplicationSequenceControl_3.insert(ApplLastSeqNum_3.getString());
  FIX::ApplResendFlag ApplResendFlag_3(false);
  msg.set(ApplResendFlag_3);
  ApplicationSequenceControl_3.insert(ApplResendFlag_3.getString());
  FIX::ApplSeqNum ApplSeqNum_3(1466899539);
  msg.set(ApplSeqNum_3);
  ApplicationSequenceControl_3.insert(ApplSeqNum_3.getString());
  all_values.push_back(ApplicationSequenceControl_3);

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_2;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_2(false);
  msg.set(DerivFlexProductEligibilityIndicator_2);
  DerivativeInstrument_2.insert(DerivFlexProductEligibilityIndicator_2.getString());
  FIX::DerivativeCFICode DerivativeCFICode_2("STRING_2008896277");
  msg.set(DerivativeCFICode_2);
  DerivativeInstrument_2.insert(DerivativeCFICode_2.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_2;
  DerivativeCapPrice_2.setString("11178035");
  msg.set(DerivativeCapPrice_2);
  DerivativeInstrument_2.insert(DerivativeCapPrice_2.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_2;
  DerivativeContractMultiplier_2.setString("12602263");
  msg.set(DerivativeContractMultiplier_2);
  DerivativeInstrument_2.insert(DerivativeContractMultiplier_2.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_2(1517495876);
  msg.set(DerivativeContractMultiplierUnit_2);
  DerivativeInstrument_2.insert(DerivativeContractMultiplierUnit_2.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_2("MONTHYEAR_1514237197");
  msg.set(DerivativeContractSettlMonth_2);
  DerivativeInstrument_2.insert(DerivativeContractSettlMonth_2.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_2("COUNTRY_1801353366");
  msg.set(DerivativeCountryOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeCountryOfIssue_2.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_2("DATA_1671244654");
  msg.set(DerivativeEncodedIssuer_2);
  DerivativeInstrument_2.insert(DerivativeEncodedIssuer_2.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_2(567820729);
  msg.set(DerivativeEncodedIssuerLen_2);
  DerivativeInstrument_2.insert(DerivativeEncodedIssuerLen_2.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_2("DATA_13370418");
  msg.set(DerivativeEncodedSecurityDesc_2);
  DerivativeInstrument_2.insert(DerivativeEncodedSecurityDesc_2.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_2(1225495208);
  msg.set(DerivativeEncodedSecurityDescLen_2);
  DerivativeInstrument_2.insert(DerivativeEncodedSecurityDescLen_2.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_2('1');
  msg.set(DerivativeExerciseStyle_2);
  DerivativeInstrument_2.insert(DerivativeExerciseStyle_2.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_2;
  DerivativeFloorPrice_2.setString("16165799");
  msg.set(DerivativeFloorPrice_2);
  DerivativeInstrument_2.insert(DerivativeFloorPrice_2.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_2(1624336851);
  msg.set(DerivativeFlowScheduleType_2);
  DerivativeInstrument_2.insert(DerivativeFlowScheduleType_2.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_2("STRING_959441349");
  msg.set(DerivativeInstrRegistry_2);
  DerivativeInstrument_2.insert(DerivativeInstrRegistry_2.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_2('1');
  msg.set(DerivativeInstrmtAssignmentMethod_2);
  DerivativeInstrument_2.insert(DerivativeInstrmtAssignmentMethod_2.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_2("LOCALMKTDATE_1807042879");
  msg.set(DerivativeIssueDate_2);
  DerivativeInstrument_2.insert(DerivativeIssueDate_2.getString());
  FIX::DerivativeIssuer DerivativeIssuer_2("STRING_1550318448");
  msg.set(DerivativeIssuer_2);
  DerivativeInstrument_2.insert(DerivativeIssuer_2.getString());
  FIX::DerivativeListMethod DerivativeListMethod_2(437528385);
  msg.set(DerivativeListMethod_2);
  DerivativeInstrument_2.insert(DerivativeListMethod_2.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_2("STRING_1032226978");
  msg.set(DerivativeLocaleOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeLocaleOfIssue_2.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_2("LOCALMKTDATE_1462408348");
  msg.set(DerivativeMaturityDate_2);
  DerivativeInstrument_2.insert(DerivativeMaturityDate_2.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_2("MONTHYEAR_1191613172");
  msg.set(DerivativeMaturityMonthYear_2);
  DerivativeInstrument_2.insert(DerivativeMaturityMonthYear_2.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_2("TZTIMEONLY_2072339916");
  msg.set(DerivativeMaturityTime_2);
  DerivativeInstrument_2.insert(DerivativeMaturityTime_2.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_2;
  DerivativeMinPriceIncrement_2.setString("17625612");
  msg.set(DerivativeMinPriceIncrement_2);
  DerivativeInstrument_2.insert(DerivativeMinPriceIncrement_2.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_2;
  DerivativeMinPriceIncrementAmount_2.setString("4038939");
  msg.set(DerivativeMinPriceIncrementAmount_2);
  DerivativeInstrument_2.insert(DerivativeMinPriceIncrementAmount_2.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_2(1861266893);
  msg.set(DerivativeNTPositionLimit_2);
  DerivativeInstrument_2.insert(DerivativeNTPositionLimit_2.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_2('8');
  msg.set(DerivativeOptAttribute_2);
  DerivativeInstrument_2.insert(DerivativeOptAttribute_2.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_2;
  DerivativeOptPayAmount_2.setString("16033515");
  msg.set(DerivativeOptPayAmount_2);
  DerivativeInstrument_2.insert(DerivativeOptPayAmount_2.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_2(552197230);
  msg.set(DerivativePositionLimit_2);
  DerivativeInstrument_2.insert(DerivativePositionLimit_2.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_2("STRING_1775679690");
  msg.set(DerivativePriceQuoteMethod_2);
  DerivativeInstrument_2.insert(DerivativePriceQuoteMethod_2.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_2("STRING_922767488");
  msg.set(DerivativePriceUnitOfMeasure_2);
  DerivativeInstrument_2.insert(DerivativePriceUnitOfMeasure_2.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_2;
  DerivativePriceUnitOfMeasureQty_2.setString("4563665");
  msg.set(DerivativePriceUnitOfMeasureQty_2);
  DerivativeInstrument_2.insert(DerivativePriceUnitOfMeasureQty_2.getString());
  FIX::DerivativeProduct DerivativeProduct_2(1637092320);
  msg.set(DerivativeProduct_2);
  DerivativeInstrument_2.insert(DerivativeProduct_2.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_2("STRING_2040571041");
  msg.set(DerivativeProductComplex_2);
  DerivativeInstrument_2.insert(DerivativeProductComplex_2.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_2(1716592848);
  msg.set(DerivativePutOrCall_2);
  DerivativeInstrument_2.insert(DerivativePutOrCall_2.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_2("STRING_1007104548");
  msg.set(DerivativeSecurityDesc_2);
  DerivativeInstrument_2.insert(DerivativeSecurityDesc_2.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_2("EXCHANGE_1407324590");
  msg.set(DerivativeSecurityExchange_2);
  DerivativeInstrument_2.insert(DerivativeSecurityExchange_2.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_2("STRING_1370462566");
  msg.set(DerivativeSecurityGroup_2);
  DerivativeInstrument_2.insert(DerivativeSecurityGroup_2.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_2("STRING_530865554");
  msg.set(DerivativeSecurityID_2);
  DerivativeInstrument_2.insert(DerivativeSecurityID_2.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_2("STRING_1975145320");
  msg.set(DerivativeSecurityIDSource_2);
  DerivativeInstrument_2.insert(DerivativeSecurityIDSource_2.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_2("STRING_1383832984");
  msg.set(DerivativeSecurityStatus_2);
  DerivativeInstrument_2.insert(DerivativeSecurityStatus_2.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_2("STRING_1756360763");
  msg.set(DerivativeSecuritySubType_2);
  DerivativeInstrument_2.insert(DerivativeSecuritySubType_2.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_2("STRING_1416983422");
  msg.set(DerivativeSecurityType_2);
  DerivativeInstrument_2.insert(DerivativeSecurityType_2.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_2('8');
  msg.set(DerivativeSettlMethod_2);
  DerivativeInstrument_2.insert(DerivativeSettlMethod_2.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_2("STRING_1233213966");
  msg.set(DerivativeSettleOnOpenFlag_2);
  DerivativeInstrument_2.insert(DerivativeSettleOnOpenFlag_2.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_2("STRING_228941123");
  msg.set(DerivativeStateOrProvinceOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeStateOrProvinceOfIssue_2.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_2("CAN");
  msg.set(DerivativeStrikeCurrency_2);
  DerivativeInstrument_2.insert(DerivativeStrikeCurrency_2.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_2;
  DerivativeStrikeMultiplier_2.setString("17792595");
  msg.set(DerivativeStrikeMultiplier_2);
  DerivativeInstrument_2.insert(DerivativeStrikeMultiplier_2.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_2;
  DerivativeStrikePrice_2.setString("9616468");
  msg.set(DerivativeStrikePrice_2);
  DerivativeInstrument_2.insert(DerivativeStrikePrice_2.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_2;
  DerivativeStrikeValue_2.setString("19250001");
  msg.set(DerivativeStrikeValue_2);
  DerivativeInstrument_2.insert(DerivativeStrikeValue_2.getString());
  FIX::DerivativeSymbol DerivativeSymbol_2("STRING_1094184271");
  msg.set(DerivativeSymbol_2);
  DerivativeInstrument_2.insert(DerivativeSymbol_2.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_2("STRING_5776405");
  msg.set(DerivativeSymbolSfx_2);
  DerivativeInstrument_2.insert(DerivativeSymbolSfx_2.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_2("STRING_1849856444");
  msg.set(DerivativeTimeUnit_2);
  DerivativeInstrument_2.insert(DerivativeTimeUnit_2.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_2("STRING_709261867");
  msg.set(DerivativeUnitOfMeasure_2);
  DerivativeInstrument_2.insert(DerivativeUnitOfMeasure_2.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_2;
  DerivativeUnitOfMeasureQty_2.setString("4096703");
  msg.set(DerivativeUnitOfMeasureQty_2);
  DerivativeInstrument_2.insert(DerivativeUnitOfMeasureQty_2.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_2("STRING_1563639689");
  msg.set(DerivativeValuationMethod_2);
  DerivativeInstrument_2.insert(DerivativeValuationMethod_2.getString());
  all_values.push_back(DerivativeInstrument_2);

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_6;
    FIX::DerivativeEventDate DerivativeEventDate_6("LOCALMKTDATE_2013021985");
    noDerivativeEvents_0_0.set(DerivativeEventDate_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventDate_6.getString());
    FIX::DerivativeEventPx DerivativeEventPx_6;
    DerivativeEventPx_6.setString("21158369");
    noDerivativeEvents_0_0.set(DerivativeEventPx_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventPx_6.getString());
    FIX::DerivativeEventText DerivativeEventText_6("STRING_1176111429");
    noDerivativeEvents_0_0.set(DerivativeEventText_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventText_6.getString());
    FIX::DerivativeEventTime DerivativeEventTime_6(FIX::UTCTIMESTAMP(15, 1, 39, 3, 2, 2006));
    noDerivativeEvents_0_0.set(DerivativeEventTime_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventTime_6.getString());
    FIX::DerivativeEventType DerivativeEventType_6(1364291549);
    noDerivativeEvents_0_0.set(DerivativeEventType_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventType_6.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_6);

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_7;
    FIX::DerivativeEventDate DerivativeEventDate_7("LOCALMKTDATE_56206556");
    noDerivativeEvents_0_1.set(DerivativeEventDate_7);
    DerivativeEventsGrp_NoDerivativeEvents_7.insert(DerivativeEventDate_7.getString());
    FIX::DerivativeEventPx DerivativeEventPx_7;
    DerivativeEventPx_7.setString("19163794");
    noDerivativeEvents_0_1.set(DerivativeEventPx_7);
    DerivativeEventsGrp_NoDerivativeEvents_7.insert(DerivativeEventPx_7.getString());
    FIX::DerivativeEventText DerivativeEventText_7("STRING_600640885");
    noDerivativeEvents_0_1.set(DerivativeEventText_7);
    DerivativeEventsGrp_NoDerivativeEvents_7.insert(DerivativeEventText_7.getString());
    FIX::DerivativeEventTime DerivativeEventTime_7(FIX::UTCTIMESTAMP(16, 33, 17, 7, 2, 2005));
    noDerivativeEvents_0_1.set(DerivativeEventTime_7);
    DerivativeEventsGrp_NoDerivativeEvents_7.insert(DerivativeEventTime_7.getString());
    FIX::DerivativeEventType DerivativeEventType_7(1046596303);
    noDerivativeEvents_0_1.set(DerivativeEventType_7);
    DerivativeEventsGrp_NoDerivativeEvents_7.insert(DerivativeEventType_7.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_7);

    msg.addGroup(noDerivativeEvents_0_1);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_4;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_4("STRING_1568587362");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyID_4.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_4("STRING_2140780574");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyIDSource_4.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_4(797628308);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyRole_4.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_6("STRING_702558794");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_6);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6.insert(DerivativeInstrumentPartySubID_6.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_6(1207298697);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_6);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6.insert(DerivativeInstrumentPartySubIDType_6.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_5;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_5("STRING_687116200");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyID_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyID_5.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_5("STRING_102990532");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyIDSource_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyIDSource_5.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_5(1072837034);
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyRole_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyRole_5.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_7("STRING_1279101961");
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubID_7);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7.insert(DerivativeInstrumentPartySubID_7.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_7(1861142860);
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubIDType_7);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7.insert(DerivativeInstrumentPartySubIDType_7.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_8("STRING_1080189254");
      noDerivativeInstrumentPartySubIDs_1_1_1.set(DerivativeInstrumentPartySubID_8);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8.insert(DerivativeInstrumentPartySubID_8.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_8(1944822062);
      noDerivativeInstrumentPartySubIDs_1_1_1.set(DerivativeInstrumentPartySubIDType_8);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8.insert(DerivativeInstrumentPartySubIDType_8.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_2;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_9("STRING_395052432");
      noDerivativeInstrumentPartySubIDs_1_1_2.set(DerivativeInstrumentPartySubID_9);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9.insert(DerivativeInstrumentPartySubID_9.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_9(1074018237);
      noDerivativeInstrumentPartySubIDs_1_1_2.set(DerivativeInstrumentPartySubIDType_9);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9.insert(DerivativeInstrumentPartySubIDType_9.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_3("STRING_336286594");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_3);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3.insert(DerivativeSecurityAltID_3.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_3("STRING_290826138");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_3);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3.insert(DerivativeSecurityAltIDSource_3.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3);

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_4("STRING_1526369620");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltID_4);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4.insert(DerivativeSecurityAltID_4.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_4("STRING_105182428");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltIDSource_4);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4.insert(DerivativeSecurityAltIDSource_4.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4);

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_2;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_5("STRING_891467023");
    noDerivativeSecurityAltID_0_2.set(DerivativeSecurityAltID_5);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5.insert(DerivativeSecurityAltID_5.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_5("STRING_1191453291");
    noDerivativeSecurityAltID_0_2.set(DerivativeSecurityAltIDSource_5);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5.insert(DerivativeSecurityAltIDSource_5.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5);

    msg.addGroup(noDerivativeSecurityAltID_0_2);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_4;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_5("DATA_1291061684");
  msg.set(DerivativeSecurityXML_5);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_2(197553548);
  msg.set(DerivativeSecurityXMLLen_2);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_2("STRING_2089750928");
  msg.set(DerivativeSecurityXMLSchema_2);
  DerivativeSecurityXML_4.insert(DerivativeSecurityXMLSchema_2.getString());
  all_values.push_back(DerivativeSecurityXML_4);

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_2(27758570);
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribType_2);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2.insert(DerivativeInstrAttribType_2.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_2("STRING_1733338115");
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribValue_2);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2.insert(DerivativeInstrAttribValue_2.getString());
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2);

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_1;
    FIX::MarketID MarketID_2("EXCHANGE_819610473");
    noMarketSegments_0_0.set(MarketID_2);
    MarketSegmentGrp_NoMarketSegments_1.insert(MarketID_2.getString());
    FIX::MarketSegmentID MarketSegmentID_2("STRING_1154441830");
    noMarketSegments_0_0.set(MarketSegmentID_2);
    MarketSegmentGrp_NoMarketSegments_1.insert(MarketSegmentID_2.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_1);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_1;
    FIX::ExpirationCycle ExpirationCycle_1(2);
    noMarketSegments_0_0.set(ExpirationCycle_1);
    BaseTradingRules_1.insert(ExpirationCycle_1.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_1(1);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_1);
    BaseTradingRules_1.insert(ImpliedMarketIndicator_1.getString());
    FIX::MaxPriceVariation MaxPriceVariation_1;
    MaxPriceVariation_1.setString("2779183");
    noMarketSegments_0_0.set(MaxPriceVariation_1);
    BaseTradingRules_1.insert(MaxPriceVariation_1.getString());
    FIX::MaxTradeVol MaxTradeVol_1;
    MaxTradeVol_1.setString("1533667");
    noMarketSegments_0_0.set(MaxTradeVol_1);
    BaseTradingRules_1.insert(MaxTradeVol_1.getString());
    FIX::MinTradeVol MinTradeVol_1;
    MinTradeVol_1.setString("6770538");
    noMarketSegments_0_0.set(MinTradeVol_1);
    BaseTradingRules_1.insert(MinTradeVol_1.getString());
    FIX::MultilegModel MultilegModel_1(0);
    noMarketSegments_0_0.set(MultilegModel_1);
    BaseTradingRules_1.insert(MultilegModel_1.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_1(3);
    noMarketSegments_0_0.set(MultilegPriceMethod_1);
    BaseTradingRules_1.insert(MultilegPriceMethod_1.getString());
    FIX::PriceType PriceType_12(4);
    noMarketSegments_0_0.set(PriceType_12);
    BaseTradingRules_1.insert(PriceType_12.getString());
    FIX::RoundLot RoundLot_1;
    RoundLot_1.setString("16205040");
    noMarketSegments_0_0.set(RoundLot_1);
    BaseTradingRules_1.insert(RoundLot_1.getString());
    FIX::TradingCurrency TradingCurrency_1("CAN");
    noMarketSegments_0_0.set(TradingCurrency_1);
    BaseTradingRules_1.insert(TradingCurrency_1.getString());
    all_values.push_back(BaseTradingRules_1);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_2;
      FIX::LotType LotType_2('4');
      noLotTypeRules_0_1_0.set(LotType_2);
      LotTypeRules_NoLotTypeRules_2.insert(LotType_2.getString());
      FIX::MinLotSize MinLotSize_2;
      MinLotSize_2.setString("18586025");
      noLotTypeRules_0_1_0.set(MinLotSize_2);
      LotTypeRules_NoLotTypeRules_2.insert(MinLotSize_2.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_2);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_1;
    FIX::HighLimitPrice HighLimitPrice_1;
    HighLimitPrice_1.setString("16272278");
    noMarketSegments_0_0.set(HighLimitPrice_1);
    PriceLimits_1.insert(HighLimitPrice_1.getString());
    FIX::LowLimitPrice LowLimitPrice_1;
    LowLimitPrice_1.setString("6554771");
    noMarketSegments_0_0.set(LowLimitPrice_1);
    PriceLimits_1.insert(LowLimitPrice_1.getString());
    FIX::PriceLimitType PriceLimitType_1(1);
    noMarketSegments_0_0.set(PriceLimitType_1);
    PriceLimits_1.insert(PriceLimitType_1.getString());
    FIX::TradingReferencePrice TradingReferencePrice_1;
    TradingReferencePrice_1.setString("19180539");
    noMarketSegments_0_0.set(TradingReferencePrice_1);
    PriceLimits_1.insert(TradingReferencePrice_1.getString());
    all_values.push_back(PriceLimits_1);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_1;
      FIX::EndTickPriceRange EndTickPriceRange_1;
      EndTickPriceRange_1.setString("1525878");
      noTickRules_0_1_0.set(EndTickPriceRange_1);
      TickRules_NoTickRules_1.insert(EndTickPriceRange_1.getString());
      FIX::StartTickPriceRange StartTickPriceRange_1;
      StartTickPriceRange_1.setString("6620373");
      noTickRules_0_1_0.set(StartTickPriceRange_1);
      TickRules_NoTickRules_1.insert(StartTickPriceRange_1.getString());
      FIX::TickIncrement TickIncrement_1;
      TickIncrement_1.setString("12258163");
      noTickRules_0_1_0.set(TickIncrement_1);
      TickRules_NoTickRules_1.insert(TickIncrement_1.getString());
      FIX::TickRuleType TickRuleType_1(2);
      noTickRules_0_1_0.set(TickRuleType_1);
      TickRules_NoTickRules_1.insert(TickRuleType_1.getString());
      all_values.push_back(TickRules_NoTickRules_1);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_2;
      FIX::EndTickPriceRange EndTickPriceRange_2;
      EndTickPriceRange_2.setString("8595909");
      noTickRules_0_1_1.set(EndTickPriceRange_2);
      TickRules_NoTickRules_2.insert(EndTickPriceRange_2.getString());
      FIX::StartTickPriceRange StartTickPriceRange_2;
      StartTickPriceRange_2.setString("11680836");
      noTickRules_0_1_1.set(StartTickPriceRange_2);
      TickRules_NoTickRules_2.insert(StartTickPriceRange_2.getString());
      FIX::TickIncrement TickIncrement_2;
      TickIncrement_2.setString("20020479");
      noTickRules_0_1_1.set(TickIncrement_2);
      TickRules_NoTickRules_2.insert(TickIncrement_2.getString());
      FIX::TickRuleType TickRuleType_2(3);
      noTickRules_0_1_1.set(TickRuleType_2);
      TickRules_NoTickRules_2.insert(TickRuleType_2.getString());
      all_values.push_back(TickRules_NoTickRules_2);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_1;
      FIX::NestedInstrAttribType NestedInstrAttribType_1(1459559053);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_1);
      NestedInstrumentAttribute_NoNestedInstrAttrib_1.insert(NestedInstrAttribType_1.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_1("STRING_1706959961");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_1);
      NestedInstrumentAttribute_NoNestedInstrAttrib_1.insert(NestedInstrAttribValue_1.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_1);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_2;
      FIX::NestedInstrAttribType NestedInstrAttribType_2(1908379956);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_2);
      NestedInstrumentAttribute_NoNestedInstrAttrib_2.insert(NestedInstrAttribType_2.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_2("STRING_910367050");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_2);
      NestedInstrumentAttribute_NoNestedInstrAttrib_2.insert(NestedInstrAttribValue_2.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_2);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_3;
      FIX::NestedInstrAttribType NestedInstrAttribType_3(1176715095);
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribType_3);
      NestedInstrumentAttribute_NoNestedInstrAttrib_3.insert(NestedInstrAttribType_3.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_3("STRING_38814649");
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribValue_3);
      NestedInstrumentAttribute_NoNestedInstrAttrib_3.insert(NestedInstrAttribValue_3.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_3);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_3;
      FIX::TradingSessionID TradingSessionID_17("STRING_4");
      noTradingSessionRules_0_1_0.set(TradingSessionID_17);
      TradingSessionRulesGrp_NoTradingSessionRules_3.insert(TradingSessionID_17.getString());
      FIX::TradingSessionSubID TradingSessionSubID_17("STRING_1");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_17);
      TradingSessionRulesGrp_NoTradingSessionRules_3.insert(TradingSessionSubID_17.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_3);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_4;
        FIX::ExecInstValue ExecInstValue_4('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_4);
        ExecInstRules_NoExecInstRules_4.insert(ExecInstValue_4.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_4);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_5;
        FIX::ExecInstValue ExecInstValue_5('4');
        noExecInstRules_0_0_2_1.set(ExecInstValue_5);
        ExecInstRules_NoExecInstRules_5.insert(ExecInstValue_5.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_5);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_7;
        FIX::MDBookType MDBookType_7(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MDBookType_7.getString());
        FIX::MDFeedType MDFeedType_7("STRING_1030079172");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MDFeedType_7.getString());
        FIX::MarketDepth MarketDepth_7(2040864501);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MarketDepth_7.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_7);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_8;
        FIX::MDBookType MDBookType_8(3);
        noMDFeedTypes_0_0_2_1.set(MDBookType_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MDBookType_8.getString());
        FIX::MDFeedType MDFeedType_8("STRING_509823380");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MDFeedType_8.getString());
        FIX::MarketDepth MarketDepth_8(548857969);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MarketDepth_8.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_8);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_7;
        FIX::MatchAlgorithm MatchAlgorithm_7("STRING_280393726");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_7);
        MatchRules_NoMatchRules_7.insert(MatchAlgorithm_7.getString());
        FIX::MatchType MatchType_10("STRING_3");
        noMatchRules_0_0_2_0.set(MatchType_10);
        MatchRules_NoMatchRules_7.insert(MatchType_10.getString());
        all_values.push_back(MatchRules_NoMatchRules_7);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_8;
        FIX::MatchAlgorithm MatchAlgorithm_8("STRING_683354772");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_8);
        MatchRules_NoMatchRules_8.insert(MatchAlgorithm_8.getString());
        FIX::MatchType MatchType_11("STRING_S5");
        noMatchRules_0_0_2_1.set(MatchType_11);
        MatchRules_NoMatchRules_8.insert(MatchType_11.getString());
        all_values.push_back(MatchRules_NoMatchRules_8);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_6;
        FIX::OrdType OrdType_7('L');
        noOrdTypeRules_0_0_2_0.set(OrdType_7);
        OrdTypeRules_NoOrdTypeRules_6.insert(OrdType_7.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_6);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_7;
        FIX::OrdType OrdType_8('G');
        noOrdTypeRules_0_0_2_1.set(OrdType_8);
        OrdTypeRules_NoOrdTypeRules_7.insert(OrdType_8.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_7);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_5;
        FIX::TimeInForce TimeInForce_6('5');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_6);
        TimeInForceRules_NoTimeInForceRules_5.insert(TimeInForce_6.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_5);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_6;
        FIX::TimeInForce TimeInForce_7('5');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_7);
        TimeInForceRules_NoTimeInForceRules_6.insert(TimeInForce_7.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_6);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_3;
      FIX::EndStrikePxRange EndStrikePxRange_3;
      EndStrikePxRange_3.setString("12936440");
      noStrikeRules_0_1_0.set(EndStrikePxRange_3);
      StrikeRules_NoStrikeRules_3.insert(EndStrikePxRange_3.getString());
      FIX::StartStrikePxRange StartStrikePxRange_3;
      StartStrikePxRange_3.setString("1013641");
      noStrikeRules_0_1_0.set(StartStrikePxRange_3);
      StrikeRules_NoStrikeRules_3.insert(StartStrikePxRange_3.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_3(1344471881);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeExerciseStyle_3.getString());
      FIX::StrikeIncrement StrikeIncrement_3;
      StrikeIncrement_3.setString("565274");
      noStrikeRules_0_1_0.set(StrikeIncrement_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeIncrement_3.getString());
      FIX::StrikeRuleID StrikeRuleID_3("STRING_1278079264");
      noStrikeRules_0_1_0.set(StrikeRuleID_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeRuleID_3.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_3);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_5;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_5("MONTHYEAR_1120261324");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_5);
        MaturityRules_NoMaturityRules_5.insert(EndMaturityMonthYear_5.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_5(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearFormat_5.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_5(239652071);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearIncrement_5.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_5(1);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearIncrementUnits_5.getString());
        FIX::MaturityRuleID MaturityRuleID_5("STRING_293057036");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityRuleID_5.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_5("MONTHYEAR_716521625");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_5);
        MaturityRules_NoMaturityRules_5.insert(StartMaturityMonthYear_5.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_5);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_2;
    FIX::MarketID MarketID_3("EXCHANGE_1000935643");
    noMarketSegments_0_1.set(MarketID_3);
    MarketSegmentGrp_NoMarketSegments_2.insert(MarketID_3.getString());
    FIX::MarketSegmentID MarketSegmentID_3("STRING_1065299608");
    noMarketSegments_0_1.set(MarketSegmentID_3);
    MarketSegmentGrp_NoMarketSegments_2.insert(MarketSegmentID_3.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_2);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_2;
    FIX::ExpirationCycle ExpirationCycle_2(2);
    noMarketSegments_0_1.set(ExpirationCycle_2);
    BaseTradingRules_2.insert(ExpirationCycle_2.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_2(1);
    noMarketSegments_0_1.set(ImpliedMarketIndicator_2);
    BaseTradingRules_2.insert(ImpliedMarketIndicator_2.getString());
    FIX::MaxPriceVariation MaxPriceVariation_2;
    MaxPriceVariation_2.setString("15486610");
    noMarketSegments_0_1.set(MaxPriceVariation_2);
    BaseTradingRules_2.insert(MaxPriceVariation_2.getString());
    FIX::MaxTradeVol MaxTradeVol_2;
    MaxTradeVol_2.setString("1089405");
    noMarketSegments_0_1.set(MaxTradeVol_2);
    BaseTradingRules_2.insert(MaxTradeVol_2.getString());
    FIX::MinTradeVol MinTradeVol_2;
    MinTradeVol_2.setString("14431744");
    noMarketSegments_0_1.set(MinTradeVol_2);
    BaseTradingRules_2.insert(MinTradeVol_2.getString());
    FIX::MultilegModel MultilegModel_2(1);
    noMarketSegments_0_1.set(MultilegModel_2);
    BaseTradingRules_2.insert(MultilegModel_2.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_2(3);
    noMarketSegments_0_1.set(MultilegPriceMethod_2);
    BaseTradingRules_2.insert(MultilegPriceMethod_2.getString());
    FIX::PriceType PriceType_13(1);
    noMarketSegments_0_1.set(PriceType_13);
    BaseTradingRules_2.insert(PriceType_13.getString());
    FIX::RoundLot RoundLot_2;
    RoundLot_2.setString("6152990");
    noMarketSegments_0_1.set(RoundLot_2);
    BaseTradingRules_2.insert(RoundLot_2.getString());
    FIX::TradingCurrency TradingCurrency_2("CAN");
    noMarketSegments_0_1.set(TradingCurrency_2);
    BaseTradingRules_2.insert(TradingCurrency_2.getString());
    all_values.push_back(BaseTradingRules_2);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_3;
      FIX::LotType LotType_3('4');
      noLotTypeRules_1_1_0.set(LotType_3);
      LotTypeRules_NoLotTypeRules_3.insert(LotType_3.getString());
      FIX::MinLotSize MinLotSize_3;
      MinLotSize_3.setString("3701031");
      noLotTypeRules_1_1_0.set(MinLotSize_3);
      LotTypeRules_NoLotTypeRules_3.insert(MinLotSize_3.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_3);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_2;
    FIX::HighLimitPrice HighLimitPrice_2;
    HighLimitPrice_2.setString("4289047");
    noMarketSegments_0_1.set(HighLimitPrice_2);
    PriceLimits_2.insert(HighLimitPrice_2.getString());
    FIX::LowLimitPrice LowLimitPrice_2;
    LowLimitPrice_2.setString("15281915");
    noMarketSegments_0_1.set(LowLimitPrice_2);
    PriceLimits_2.insert(LowLimitPrice_2.getString());
    FIX::PriceLimitType PriceLimitType_2(2);
    noMarketSegments_0_1.set(PriceLimitType_2);
    PriceLimits_2.insert(PriceLimitType_2.getString());
    FIX::TradingReferencePrice TradingReferencePrice_2;
    TradingReferencePrice_2.setString("17225488");
    noMarketSegments_0_1.set(TradingReferencePrice_2);
    PriceLimits_2.insert(TradingReferencePrice_2.getString());
    all_values.push_back(PriceLimits_2);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_3;
      FIX::EndTickPriceRange EndTickPriceRange_3;
      EndTickPriceRange_3.setString("11506669");
      noTickRules_1_1_0.set(EndTickPriceRange_3);
      TickRules_NoTickRules_3.insert(EndTickPriceRange_3.getString());
      FIX::StartTickPriceRange StartTickPriceRange_3;
      StartTickPriceRange_3.setString("17790763");
      noTickRules_1_1_0.set(StartTickPriceRange_3);
      TickRules_NoTickRules_3.insert(StartTickPriceRange_3.getString());
      FIX::TickIncrement TickIncrement_3;
      TickIncrement_3.setString("7601513");
      noTickRules_1_1_0.set(TickIncrement_3);
      TickRules_NoTickRules_3.insert(TickIncrement_3.getString());
      FIX::TickRuleType TickRuleType_3(0);
      noTickRules_1_1_0.set(TickRuleType_3);
      TickRules_NoTickRules_3.insert(TickRuleType_3.getString());
      all_values.push_back(TickRules_NoTickRules_3);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_4;
      FIX::EndTickPriceRange EndTickPriceRange_4;
      EndTickPriceRange_4.setString("7518540");
      noTickRules_1_1_1.set(EndTickPriceRange_4);
      TickRules_NoTickRules_4.insert(EndTickPriceRange_4.getString());
      FIX::StartTickPriceRange StartTickPriceRange_4;
      StartTickPriceRange_4.setString("17445159");
      noTickRules_1_1_1.set(StartTickPriceRange_4);
      TickRules_NoTickRules_4.insert(StartTickPriceRange_4.getString());
      FIX::TickIncrement TickIncrement_4;
      TickIncrement_4.setString("6261218");
      noTickRules_1_1_1.set(TickIncrement_4);
      TickRules_NoTickRules_4.insert(TickIncrement_4.getString());
      FIX::TickRuleType TickRuleType_4(0);
      noTickRules_1_1_1.set(TickRuleType_4);
      TickRules_NoTickRules_4.insert(TickRuleType_4.getString());
      all_values.push_back(TickRules_NoTickRules_4);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_5;
      FIX::EndTickPriceRange EndTickPriceRange_5;
      EndTickPriceRange_5.setString("20375729");
      noTickRules_1_1_2.set(EndTickPriceRange_5);
      TickRules_NoTickRules_5.insert(EndTickPriceRange_5.getString());
      FIX::StartTickPriceRange StartTickPriceRange_5;
      StartTickPriceRange_5.setString("13426434");
      noTickRules_1_1_2.set(StartTickPriceRange_5);
      TickRules_NoTickRules_5.insert(StartTickPriceRange_5.getString());
      FIX::TickIncrement TickIncrement_5;
      TickIncrement_5.setString("20456584");
      noTickRules_1_1_2.set(TickIncrement_5);
      TickRules_NoTickRules_5.insert(TickIncrement_5.getString());
      FIX::TickRuleType TickRuleType_5(2);
      noTickRules_1_1_2.set(TickRuleType_5);
      TickRules_NoTickRules_5.insert(TickRuleType_5.getString());
      all_values.push_back(TickRules_NoTickRules_5);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_4;
      FIX::NestedInstrAttribType NestedInstrAttribType_4(792491348);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_4);
      NestedInstrumentAttribute_NoNestedInstrAttrib_4.insert(NestedInstrAttribType_4.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_4("STRING_356566290");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_4);
      NestedInstrumentAttribute_NoNestedInstrAttrib_4.insert(NestedInstrAttribValue_4.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_4);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_5;
      FIX::NestedInstrAttribType NestedInstrAttribType_5(1050701169);
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribType_5);
      NestedInstrumentAttribute_NoNestedInstrAttrib_5.insert(NestedInstrAttribType_5.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_5("STRING_88182166");
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribValue_5);
      NestedInstrumentAttribute_NoNestedInstrAttrib_5.insert(NestedInstrAttribValue_5.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_5);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_4;
      FIX::TradingSessionID TradingSessionID_18("STRING_2");
      noTradingSessionRules_1_1_0.set(TradingSessionID_18);
      TradingSessionRulesGrp_NoTradingSessionRules_4.insert(TradingSessionID_18.getString());
      FIX::TradingSessionSubID TradingSessionSubID_18("STRING_7");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_18);
      TradingSessionRulesGrp_NoTradingSessionRules_4.insert(TradingSessionSubID_18.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_4);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_6;
        FIX::ExecInstValue ExecInstValue_6('6');
        noExecInstRules_1_0_2_0.set(ExecInstValue_6);
        ExecInstRules_NoExecInstRules_6.insert(ExecInstValue_6.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_6);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_9;
        FIX::MDBookType MDBookType_9(1);
        noMDFeedTypes_1_0_2_0.set(MDBookType_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MDBookType_9.getString());
        FIX::MDFeedType MDFeedType_9("STRING_1610620848");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MDFeedType_9.getString());
        FIX::MarketDepth MarketDepth_9(2025146457);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MarketDepth_9.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_9);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_10;
        FIX::MDBookType MDBookType_10(1);
        noMDFeedTypes_1_0_2_1.set(MDBookType_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MDBookType_10.getString());
        FIX::MDFeedType MDFeedType_10("STRING_991328774");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MDFeedType_10.getString());
        FIX::MarketDepth MarketDepth_10(1831341489);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MarketDepth_10.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_10);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_11;
        FIX::MDBookType MDBookType_11(3);
        noMDFeedTypes_1_0_2_2.set(MDBookType_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MDBookType_11.getString());
        FIX::MDFeedType MDFeedType_11("STRING_473400870");
        noMDFeedTypes_1_0_2_2.set(MDFeedType_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MDFeedType_11.getString());
        FIX::MarketDepth MarketDepth_11(834524754);
        noMDFeedTypes_1_0_2_2.set(MarketDepth_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MarketDepth_11.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_11);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_9;
        FIX::MatchAlgorithm MatchAlgorithm_9("STRING_1233552229");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_9);
        MatchRules_NoMatchRules_9.insert(MatchAlgorithm_9.getString());
        FIX::MatchType MatchType_12("STRING_S4");
        noMatchRules_1_0_2_0.set(MatchType_12);
        MatchRules_NoMatchRules_9.insert(MatchType_12.getString());
        all_values.push_back(MatchRules_NoMatchRules_9);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_8;
        FIX::OrdType OrdType_9('J');
        noOrdTypeRules_1_0_2_0.set(OrdType_9);
        OrdTypeRules_NoOrdTypeRules_8.insert(OrdType_9.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_8);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_9;
        FIX::OrdType OrdType_10('1');
        noOrdTypeRules_1_0_2_1.set(OrdType_10);
        OrdTypeRules_NoOrdTypeRules_9.insert(OrdType_10.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_9);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_10;
        FIX::OrdType OrdType_11('3');
        noOrdTypeRules_1_0_2_2.set(OrdType_11);
        OrdTypeRules_NoOrdTypeRules_10.insert(OrdType_11.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_10);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_7;
        FIX::TimeInForce TimeInForce_8('9');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_8);
        TimeInForceRules_NoTimeInForceRules_7.insert(TimeInForce_8.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_7);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_8;
        FIX::TimeInForce TimeInForce_9('7');
        noTimeInForceRules_1_0_2_1.set(TimeInForce_9);
        TimeInForceRules_NoTimeInForceRules_8.insert(TimeInForce_9.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_8);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_4;
      FIX::EndStrikePxRange EndStrikePxRange_4;
      EndStrikePxRange_4.setString("19840369");
      noStrikeRules_1_1_0.set(EndStrikePxRange_4);
      StrikeRules_NoStrikeRules_4.insert(EndStrikePxRange_4.getString());
      FIX::StartStrikePxRange StartStrikePxRange_4;
      StartStrikePxRange_4.setString("14739514");
      noStrikeRules_1_1_0.set(StartStrikePxRange_4);
      StrikeRules_NoStrikeRules_4.insert(StartStrikePxRange_4.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_4(2032628959);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeExerciseStyle_4.getString());
      FIX::StrikeIncrement StrikeIncrement_4;
      StrikeIncrement_4.setString("8872544");
      noStrikeRules_1_1_0.set(StrikeIncrement_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeIncrement_4.getString());
      FIX::StrikeRuleID StrikeRuleID_4("STRING_1562133631");
      noStrikeRules_1_1_0.set(StrikeRuleID_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeRuleID_4.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_4);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_6;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_6("MONTHYEAR_179806198");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_6);
        MaturityRules_NoMaturityRules_6.insert(EndMaturityMonthYear_6.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_6(1);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearFormat_6.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_6(1077465512);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearIncrement_6.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_6(3);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearIncrementUnits_6.getString());
        FIX::MaturityRuleID MaturityRuleID_6("STRING_1036787374");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityRuleID_6.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_6("MONTHYEAR_428611239");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_6);
        MaturityRules_NoMaturityRules_6.insert(StartMaturityMonthYear_6.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_6);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_7;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_7("MONTHYEAR_267260527");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_7);
        MaturityRules_NoMaturityRules_7.insert(EndMaturityMonthYear_7.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_7(2);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearFormat_7.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_7(208661740);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearIncrement_7.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_7(2);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearIncrementUnits_7.getString());
        FIX::MaturityRuleID MaturityRuleID_7("STRING_598308025");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityRuleID_7.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_7("MONTHYEAR_1711261095");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_7);
        MaturityRules_NoMaturityRules_7.insert(StartMaturityMonthYear_7.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_7);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_8;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_8("MONTHYEAR_1731990172");
        noMaturityRules_1_0_2_2.set(EndMaturityMonthYear_8);
        MaturityRules_NoMaturityRules_8.insert(EndMaturityMonthYear_8.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_8(1);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearFormat_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearFormat_8.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_8(697969492);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrement_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearIncrement_8.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_8(1);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrementUnits_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearIncrementUnits_8.getString());
        FIX::MaturityRuleID MaturityRuleID_8("STRING_506343681");
        noMaturityRules_1_0_2_2.set(MaturityRuleID_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityRuleID_8.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_8("MONTHYEAR_436531903");
        noMaturityRules_1_0_2_2.set(StartMaturityMonthYear_8);
        MaturityRules_NoMaturityRules_8.insert(StartMaturityMonthYear_8.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_8);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_2);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  // RelSymDerivSecUpdGrp
  // Group RelSymDerivSecUpdGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_0;
    FIX::CorporateAction CorporateAction_3("MULTIPLECHARVALUE_S");
    noRelatedSym_0_0.set(CorporateAction_3);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(CorporateAction_3.getString());
    FIX::Currency Currency_18("CHF");
    noRelatedSym_0_0.set(Currency_18);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(Currency_18.getString());
    FIX::EncodedText EncodedText_30("DATA_1248252708");
    noRelatedSym_0_0.set(EncodedText_30);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(EncodedText_30.getString());
    FIX::EncodedTextLen EncodedTextLen_30(1901277287);
    noRelatedSym_0_0.set(EncodedTextLen_30);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(EncodedTextLen_30.getString());
    FIX::ListUpdateAction ListUpdateAction_0('1');
    noRelatedSym_0_0.set(ListUpdateAction_0);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(ListUpdateAction_0.getString());
    FIX::RelSymTransactTime RelSymTransactTime_3(FIX::UTCTIMESTAMP(1, 39, 2, 20, 12, 2004));
    noRelatedSym_0_0.set(RelSymTransactTime_3);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(RelSymTransactTime_3.getString());
    FIX::Text Text_30("STRING_24139112");
    noRelatedSym_0_0.set(Text_30);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(Text_30.getString());
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_35;
      FIX::EncodedLegIssuer EncodedLegIssuer_35("DATA_808506260");
      noLegs_0_1_0.set(EncodedLegIssuer_35);
      InstrumentLeg_35.insert(EncodedLegIssuer_35.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_35(1060926486);
      noLegs_0_1_0.set(EncodedLegIssuerLen_35);
      InstrumentLeg_35.insert(EncodedLegIssuerLen_35.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_35("DATA_1315290326");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_35);
      InstrumentLeg_35.insert(EncodedLegSecurityDesc_35.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_35(1075766787);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_35);
      InstrumentLeg_35.insert(EncodedLegSecurityDescLen_35.getString());
      FIX::LegCFICode LegCFICode_35("STRING_1975376670");
      noLegs_0_1_0.set(LegCFICode_35);
      InstrumentLeg_35.insert(LegCFICode_35.getString());
      FIX::LegContractMultiplier LegContractMultiplier_35;
      LegContractMultiplier_35.setString("15239520");
      noLegs_0_1_0.set(LegContractMultiplier_35);
      InstrumentLeg_35.insert(LegContractMultiplier_35.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_35(186872441);
      noLegs_0_1_0.set(LegContractMultiplierUnit_35);
      InstrumentLeg_35.insert(LegContractMultiplierUnit_35.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_35("MONTHYEAR_426201047");
      noLegs_0_1_0.set(LegContractSettlMonth_35);
      InstrumentLeg_35.insert(LegContractSettlMonth_35.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_35("COUNTRY_1087729513");
      noLegs_0_1_0.set(LegCountryOfIssue_35);
      InstrumentLeg_35.insert(LegCountryOfIssue_35.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_35("LOCALMKTDATE_1918862613");
      noLegs_0_1_0.set(LegCouponPaymentDate_35);
      InstrumentLeg_35.insert(LegCouponPaymentDate_35.getString());
      FIX::LegCouponRate LegCouponRate_35;
      LegCouponRate_35.setString("38.260000");
      noLegs_0_1_0.set(LegCouponRate_35);
      InstrumentLeg_35.insert(LegCouponRate_35.getString());
      FIX::LegCreditRating LegCreditRating_35("STRING_1785699006");
      noLegs_0_1_0.set(LegCreditRating_35);
      InstrumentLeg_35.insert(LegCreditRating_35.getString());
      FIX::LegCurrency LegCurrency_35("EUR");
      noLegs_0_1_0.set(LegCurrency_35);
      InstrumentLeg_35.insert(LegCurrency_35.getString());
      FIX::LegDatedDate LegDatedDate_35("LOCALMKTDATE_74747261");
      noLegs_0_1_0.set(LegDatedDate_35);
      InstrumentLeg_35.insert(LegDatedDate_35.getString());
      FIX::LegExerciseStyle LegExerciseStyle_35(90597307);
      noLegs_0_1_0.set(LegExerciseStyle_35);
      InstrumentLeg_35.insert(LegExerciseStyle_35.getString());
      FIX::LegFactor LegFactor_35;
      LegFactor_35.setString("4238703");
      noLegs_0_1_0.set(LegFactor_35);
      InstrumentLeg_35.insert(LegFactor_35.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_35(1294564431);
      noLegs_0_1_0.set(LegFlowScheduleType_35);
      InstrumentLeg_35.insert(LegFlowScheduleType_35.getString());
      FIX::LegInstrRegistry LegInstrRegistry_35("STRING_312430666");
      noLegs_0_1_0.set(LegInstrRegistry_35);
      InstrumentLeg_35.insert(LegInstrRegistry_35.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_35("LOCALMKTDATE_1672123017");
      noLegs_0_1_0.set(LegInterestAccrualDate_35);
      InstrumentLeg_35.insert(LegInterestAccrualDate_35.getString());
      FIX::LegIssueDate LegIssueDate_35("LOCALMKTDATE_1048358071");
      noLegs_0_1_0.set(LegIssueDate_35);
      InstrumentLeg_35.insert(LegIssueDate_35.getString());
      FIX::LegIssuer LegIssuer_35("STRING_62843046");
      noLegs_0_1_0.set(LegIssuer_35);
      InstrumentLeg_35.insert(LegIssuer_35.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_35("STRING_609445329");
      noLegs_0_1_0.set(LegLocaleOfIssue_35);
      InstrumentLeg_35.insert(LegLocaleOfIssue_35.getString());
      FIX::LegMaturityDate LegMaturityDate_35("LOCALMKTDATE_128619528");
      noLegs_0_1_0.set(LegMaturityDate_35);
      InstrumentLeg_35.insert(LegMaturityDate_35.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_35("MONTHYEAR_1845884385");
      noLegs_0_1_0.set(LegMaturityMonthYear_35);
      InstrumentLeg_35.insert(LegMaturityMonthYear_35.getString());
      FIX::LegMaturityTime LegMaturityTime_35("TZTIMEONLY_434022063");
      noLegs_0_1_0.set(LegMaturityTime_35);
      InstrumentLeg_35.insert(LegMaturityTime_35.getString());
      FIX::LegOptAttribute LegOptAttribute_35('7');
      noLegs_0_1_0.set(LegOptAttribute_35);
      InstrumentLeg_35.insert(LegOptAttribute_35.getString());
      FIX::LegOptionRatio LegOptionRatio_35;
      LegOptionRatio_35.setString("16550979");
      noLegs_0_1_0.set(LegOptionRatio_35);
      InstrumentLeg_35.insert(LegOptionRatio_35.getString());
      FIX::LegPool LegPool_35("STRING_438404996");
      noLegs_0_1_0.set(LegPool_35);
      InstrumentLeg_35.insert(LegPool_35.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_35("STRING_795153729");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_35);
      InstrumentLeg_35.insert(LegPriceUnitOfMeasure_35.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_35;
      LegPriceUnitOfMeasureQty_35.setString("3942933");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_35);
      InstrumentLeg_35.insert(LegPriceUnitOfMeasureQty_35.getString());
      FIX::LegProduct LegProduct_35(1246911256);
      noLegs_0_1_0.set(LegProduct_35);
      InstrumentLeg_35.insert(LegProduct_35.getString());
      FIX::LegPutOrCall LegPutOrCall_35(1856080215);
      noLegs_0_1_0.set(LegPutOrCall_35);
      InstrumentLeg_35.insert(LegPutOrCall_35.getString());
      FIX::LegRatioQty LegRatioQty_35;
      LegRatioQty_35.setString("17095837");
      noLegs_0_1_0.set(LegRatioQty_35);
      InstrumentLeg_35.insert(LegRatioQty_35.getString());
      FIX::LegRedemptionDate LegRedemptionDate_35("LOCALMKTDATE_175194395");
      noLegs_0_1_0.set(LegRedemptionDate_35);
      InstrumentLeg_35.insert(LegRedemptionDate_35.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_35("STRING_1683973237");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_35);
      InstrumentLeg_35.insert(LegRepoCollateralSecurityType_35.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_35;
      LegRepurchaseRate_35.setString("21.430000");
      noLegs_0_1_0.set(LegRepurchaseRate_35);
      InstrumentLeg_35.insert(LegRepurchaseRate_35.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_35(362066837);
      noLegs_0_1_0.set(LegRepurchaseTerm_35);
      InstrumentLeg_35.insert(LegRepurchaseTerm_35.getString());
      FIX::LegSecurityDesc LegSecurityDesc_35("STRING_2110174284");
      noLegs_0_1_0.set(LegSecurityDesc_35);
      InstrumentLeg_35.insert(LegSecurityDesc_35.getString());
      FIX::LegSecurityExchange LegSecurityExchange_35("EXCHANGE_26298009");
      noLegs_0_1_0.set(LegSecurityExchange_35);
      InstrumentLeg_35.insert(LegSecurityExchange_35.getString());
      FIX::LegSecurityID LegSecurityID_35("STRING_133445802");
      noLegs_0_1_0.set(LegSecurityID_35);
      InstrumentLeg_35.insert(LegSecurityID_35.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_35("STRING_1821724463");
      noLegs_0_1_0.set(LegSecurityIDSource_35);
      InstrumentLeg_35.insert(LegSecurityIDSource_35.getString());
      FIX::LegSecuritySubType LegSecuritySubType_35("STRING_1811997015");
      noLegs_0_1_0.set(LegSecuritySubType_35);
      InstrumentLeg_35.insert(LegSecuritySubType_35.getString());
      FIX::LegSecurityType LegSecurityType_35("STRING_722883521");
      noLegs_0_1_0.set(LegSecurityType_35);
      InstrumentLeg_35.insert(LegSecurityType_35.getString());
      FIX::LegSide LegSide_35('2');
      noLegs_0_1_0.set(LegSide_35);
      InstrumentLeg_35.insert(LegSide_35.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_35("STRING_1886744276");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_35);
      InstrumentLeg_35.insert(LegStateOrProvinceOfIssue_35.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_35("EUR");
      noLegs_0_1_0.set(LegStrikeCurrency_35);
      InstrumentLeg_35.insert(LegStrikeCurrency_35.getString());
      FIX::LegStrikePrice LegStrikePrice_35;
      LegStrikePrice_35.setString("10338250");
      noLegs_0_1_0.set(LegStrikePrice_35);
      InstrumentLeg_35.insert(LegStrikePrice_35.getString());
      FIX::LegSymbol LegSymbol_35("STRING_1125911495");
      noLegs_0_1_0.set(LegSymbol_35);
      InstrumentLeg_35.insert(LegSymbol_35.getString());
      FIX::LegSymbolSfx LegSymbolSfx_35("STRING_1988128000");
      noLegs_0_1_0.set(LegSymbolSfx_35);
      InstrumentLeg_35.insert(LegSymbolSfx_35.getString());
      FIX::LegTimeUnit LegTimeUnit_35("STRING_2082183131");
      noLegs_0_1_0.set(LegTimeUnit_35);
      InstrumentLeg_35.insert(LegTimeUnit_35.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_35("STRING_1188754541");
      noLegs_0_1_0.set(LegUnitOfMeasure_35);
      InstrumentLeg_35.insert(LegUnitOfMeasure_35.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_35;
      LegUnitOfMeasureQty_35.setString("4500896");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_35);
      InstrumentLeg_35.insert(LegUnitOfMeasureQty_35.getString());
      all_values.push_back(InstrumentLeg_35);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_63;
        FIX::LegSecurityAltID LegSecurityAltID_63("STRING_887155279");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_63);
        LegSecAltIDGrp_NoLegSecurityAltID_63.insert(LegSecurityAltID_63.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_63("STRING_884111745");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_63);
        LegSecAltIDGrp_NoLegSecurityAltID_63.insert(LegSecurityAltIDSource_63.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_63);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_36;
      FIX::EncodedLegIssuer EncodedLegIssuer_36("DATA_834333627");
      noLegs_0_1_1.set(EncodedLegIssuer_36);
      InstrumentLeg_36.insert(EncodedLegIssuer_36.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_36(394769591);
      noLegs_0_1_1.set(EncodedLegIssuerLen_36);
      InstrumentLeg_36.insert(EncodedLegIssuerLen_36.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_36("DATA_1322516741");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_36);
      InstrumentLeg_36.insert(EncodedLegSecurityDesc_36.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_36(1629487356);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_36);
      InstrumentLeg_36.insert(EncodedLegSecurityDescLen_36.getString());
      FIX::LegCFICode LegCFICode_36("STRING_789062991");
      noLegs_0_1_1.set(LegCFICode_36);
      InstrumentLeg_36.insert(LegCFICode_36.getString());
      FIX::LegContractMultiplier LegContractMultiplier_36;
      LegContractMultiplier_36.setString("4219443");
      noLegs_0_1_1.set(LegContractMultiplier_36);
      InstrumentLeg_36.insert(LegContractMultiplier_36.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_36(1338083924);
      noLegs_0_1_1.set(LegContractMultiplierUnit_36);
      InstrumentLeg_36.insert(LegContractMultiplierUnit_36.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_36("MONTHYEAR_351163068");
      noLegs_0_1_1.set(LegContractSettlMonth_36);
      InstrumentLeg_36.insert(LegContractSettlMonth_36.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_36("COUNTRY_597138744");
      noLegs_0_1_1.set(LegCountryOfIssue_36);
      InstrumentLeg_36.insert(LegCountryOfIssue_36.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_36("LOCALMKTDATE_874573513");
      noLegs_0_1_1.set(LegCouponPaymentDate_36);
      InstrumentLeg_36.insert(LegCouponPaymentDate_36.getString());
      FIX::LegCouponRate LegCouponRate_36;
      LegCouponRate_36.setString("52.120000");
      noLegs_0_1_1.set(LegCouponRate_36);
      InstrumentLeg_36.insert(LegCouponRate_36.getString());
      FIX::LegCreditRating LegCreditRating_36("STRING_959205581");
      noLegs_0_1_1.set(LegCreditRating_36);
      InstrumentLeg_36.insert(LegCreditRating_36.getString());
      FIX::LegCurrency LegCurrency_36("EUR");
      noLegs_0_1_1.set(LegCurrency_36);
      InstrumentLeg_36.insert(LegCurrency_36.getString());
      FIX::LegDatedDate LegDatedDate_36("LOCALMKTDATE_1092651384");
      noLegs_0_1_1.set(LegDatedDate_36);
      InstrumentLeg_36.insert(LegDatedDate_36.getString());
      FIX::LegExerciseStyle LegExerciseStyle_36(511504965);
      noLegs_0_1_1.set(LegExerciseStyle_36);
      InstrumentLeg_36.insert(LegExerciseStyle_36.getString());
      FIX::LegFactor LegFactor_36;
      LegFactor_36.setString("11280265");
      noLegs_0_1_1.set(LegFactor_36);
      InstrumentLeg_36.insert(LegFactor_36.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_36(1815534905);
      noLegs_0_1_1.set(LegFlowScheduleType_36);
      InstrumentLeg_36.insert(LegFlowScheduleType_36.getString());
      FIX::LegInstrRegistry LegInstrRegistry_36("STRING_403639639");
      noLegs_0_1_1.set(LegInstrRegistry_36);
      InstrumentLeg_36.insert(LegInstrRegistry_36.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_36("LOCALMKTDATE_867287216");
      noLegs_0_1_1.set(LegInterestAccrualDate_36);
      InstrumentLeg_36.insert(LegInterestAccrualDate_36.getString());
      FIX::LegIssueDate LegIssueDate_36("LOCALMKTDATE_481532086");
      noLegs_0_1_1.set(LegIssueDate_36);
      InstrumentLeg_36.insert(LegIssueDate_36.getString());
      FIX::LegIssuer LegIssuer_36("STRING_719644622");
      noLegs_0_1_1.set(LegIssuer_36);
      InstrumentLeg_36.insert(LegIssuer_36.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_36("STRING_1901112276");
      noLegs_0_1_1.set(LegLocaleOfIssue_36);
      InstrumentLeg_36.insert(LegLocaleOfIssue_36.getString());
      FIX::LegMaturityDate LegMaturityDate_36("LOCALMKTDATE_1607443581");
      noLegs_0_1_1.set(LegMaturityDate_36);
      InstrumentLeg_36.insert(LegMaturityDate_36.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_36("MONTHYEAR_560288974");
      noLegs_0_1_1.set(LegMaturityMonthYear_36);
      InstrumentLeg_36.insert(LegMaturityMonthYear_36.getString());
      FIX::LegMaturityTime LegMaturityTime_36("TZTIMEONLY_1835811759");
      noLegs_0_1_1.set(LegMaturityTime_36);
      InstrumentLeg_36.insert(LegMaturityTime_36.getString());
      FIX::LegOptAttribute LegOptAttribute_36('6');
      noLegs_0_1_1.set(LegOptAttribute_36);
      InstrumentLeg_36.insert(LegOptAttribute_36.getString());
      FIX::LegOptionRatio LegOptionRatio_36;
      LegOptionRatio_36.setString("10103786");
      noLegs_0_1_1.set(LegOptionRatio_36);
      InstrumentLeg_36.insert(LegOptionRatio_36.getString());
      FIX::LegPool LegPool_36("STRING_1899130770");
      noLegs_0_1_1.set(LegPool_36);
      InstrumentLeg_36.insert(LegPool_36.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_36("STRING_1535869753");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_36);
      InstrumentLeg_36.insert(LegPriceUnitOfMeasure_36.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_36;
      LegPriceUnitOfMeasureQty_36.setString("18944904");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_36);
      InstrumentLeg_36.insert(LegPriceUnitOfMeasureQty_36.getString());
      FIX::LegProduct LegProduct_36(585980750);
      noLegs_0_1_1.set(LegProduct_36);
      InstrumentLeg_36.insert(LegProduct_36.getString());
      FIX::LegPutOrCall LegPutOrCall_36(1930639345);
      noLegs_0_1_1.set(LegPutOrCall_36);
      InstrumentLeg_36.insert(LegPutOrCall_36.getString());
      FIX::LegRatioQty LegRatioQty_36;
      LegRatioQty_36.setString("10695234");
      noLegs_0_1_1.set(LegRatioQty_36);
      InstrumentLeg_36.insert(LegRatioQty_36.getString());
      FIX::LegRedemptionDate LegRedemptionDate_36("LOCALMKTDATE_67984458");
      noLegs_0_1_1.set(LegRedemptionDate_36);
      InstrumentLeg_36.insert(LegRedemptionDate_36.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_36("STRING_572218688");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_36);
      InstrumentLeg_36.insert(LegRepoCollateralSecurityType_36.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_36;
      LegRepurchaseRate_36.setString("78.430000");
      noLegs_0_1_1.set(LegRepurchaseRate_36);
      InstrumentLeg_36.insert(LegRepurchaseRate_36.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_36(1406068382);
      noLegs_0_1_1.set(LegRepurchaseTerm_36);
      InstrumentLeg_36.insert(LegRepurchaseTerm_36.getString());
      FIX::LegSecurityDesc LegSecurityDesc_36("STRING_923381756");
      noLegs_0_1_1.set(LegSecurityDesc_36);
      InstrumentLeg_36.insert(LegSecurityDesc_36.getString());
      FIX::LegSecurityExchange LegSecurityExchange_36("EXCHANGE_2088606587");
      noLegs_0_1_1.set(LegSecurityExchange_36);
      InstrumentLeg_36.insert(LegSecurityExchange_36.getString());
      FIX::LegSecurityID LegSecurityID_36("STRING_133158248");
      noLegs_0_1_1.set(LegSecurityID_36);
      InstrumentLeg_36.insert(LegSecurityID_36.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_36("STRING_213113320");
      noLegs_0_1_1.set(LegSecurityIDSource_36);
      InstrumentLeg_36.insert(LegSecurityIDSource_36.getString());
      FIX::LegSecuritySubType LegSecuritySubType_36("STRING_900328521");
      noLegs_0_1_1.set(LegSecuritySubType_36);
      InstrumentLeg_36.insert(LegSecuritySubType_36.getString());
      FIX::LegSecurityType LegSecurityType_36("STRING_970422398");
      noLegs_0_1_1.set(LegSecurityType_36);
      InstrumentLeg_36.insert(LegSecurityType_36.getString());
      FIX::LegSide LegSide_36('1');
      noLegs_0_1_1.set(LegSide_36);
      InstrumentLeg_36.insert(LegSide_36.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_36("STRING_1992979905");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_36);
      InstrumentLeg_36.insert(LegStateOrProvinceOfIssue_36.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_36("CAN");
      noLegs_0_1_1.set(LegStrikeCurrency_36);
      InstrumentLeg_36.insert(LegStrikeCurrency_36.getString());
      FIX::LegStrikePrice LegStrikePrice_36;
      LegStrikePrice_36.setString("16610311");
      noLegs_0_1_1.set(LegStrikePrice_36);
      InstrumentLeg_36.insert(LegStrikePrice_36.getString());
      FIX::LegSymbol LegSymbol_36("STRING_1885567002");
      noLegs_0_1_1.set(LegSymbol_36);
      InstrumentLeg_36.insert(LegSymbol_36.getString());
      FIX::LegSymbolSfx LegSymbolSfx_36("STRING_1524456698");
      noLegs_0_1_1.set(LegSymbolSfx_36);
      InstrumentLeg_36.insert(LegSymbolSfx_36.getString());
      FIX::LegTimeUnit LegTimeUnit_36("STRING_2142563248");
      noLegs_0_1_1.set(LegTimeUnit_36);
      InstrumentLeg_36.insert(LegTimeUnit_36.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_36("STRING_457727977");
      noLegs_0_1_1.set(LegUnitOfMeasure_36);
      InstrumentLeg_36.insert(LegUnitOfMeasure_36.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_36;
      LegUnitOfMeasureQty_36.setString("12780853");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_36);
      InstrumentLeg_36.insert(LegUnitOfMeasureQty_36.getString());
      all_values.push_back(InstrumentLeg_36);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_64;
        FIX::LegSecurityAltID LegSecurityAltID_64("STRING_1018016951");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_64);
        LegSecAltIDGrp_NoLegSecurityAltID_64.insert(LegSecurityAltID_64.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_64("STRING_966413438");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_64);
        LegSecAltIDGrp_NoLegSecurityAltID_64.insert(LegSecurityAltIDSource_64.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_64);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_65;
        FIX::LegSecurityAltID LegSecurityAltID_65("STRING_103754008");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_65);
        LegSecAltIDGrp_NoLegSecurityAltID_65.insert(LegSecurityAltID_65.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_65("STRING_2028395607");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_65);
        LegSecAltIDGrp_NoLegSecurityAltID_65.insert(LegSecurityAltIDSource_65.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_65);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_66;
        FIX::LegSecurityAltID LegSecurityAltID_66("STRING_718060560");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_66);
        LegSecAltIDGrp_NoLegSecurityAltID_66.insert(LegSecurityAltID_66.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_66("STRING_1639623761");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_66);
        LegSecAltIDGrp_NoLegSecurityAltID_66.insert(LegSecurityAltIDSource_66.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_66);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_37;
      FIX::EncodedLegIssuer EncodedLegIssuer_37("DATA_1775402360");
      noLegs_0_1_2.set(EncodedLegIssuer_37);
      InstrumentLeg_37.insert(EncodedLegIssuer_37.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_37(1304041310);
      noLegs_0_1_2.set(EncodedLegIssuerLen_37);
      InstrumentLeg_37.insert(EncodedLegIssuerLen_37.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_37("DATA_1422779458");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_37);
      InstrumentLeg_37.insert(EncodedLegSecurityDesc_37.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_37(697442206);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_37);
      InstrumentLeg_37.insert(EncodedLegSecurityDescLen_37.getString());
      FIX::LegCFICode LegCFICode_37("STRING_1372025769");
      noLegs_0_1_2.set(LegCFICode_37);
      InstrumentLeg_37.insert(LegCFICode_37.getString());
      FIX::LegContractMultiplier LegContractMultiplier_37;
      LegContractMultiplier_37.setString("19949981");
      noLegs_0_1_2.set(LegContractMultiplier_37);
      InstrumentLeg_37.insert(LegContractMultiplier_37.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_37(41426401);
      noLegs_0_1_2.set(LegContractMultiplierUnit_37);
      InstrumentLeg_37.insert(LegContractMultiplierUnit_37.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_37("MONTHYEAR_630610503");
      noLegs_0_1_2.set(LegContractSettlMonth_37);
      InstrumentLeg_37.insert(LegContractSettlMonth_37.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_37("COUNTRY_770896255");
      noLegs_0_1_2.set(LegCountryOfIssue_37);
      InstrumentLeg_37.insert(LegCountryOfIssue_37.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_37("LOCALMKTDATE_2130032989");
      noLegs_0_1_2.set(LegCouponPaymentDate_37);
      InstrumentLeg_37.insert(LegCouponPaymentDate_37.getString());
      FIX::LegCouponRate LegCouponRate_37;
      LegCouponRate_37.setString("87.510000");
      noLegs_0_1_2.set(LegCouponRate_37);
      InstrumentLeg_37.insert(LegCouponRate_37.getString());
      FIX::LegCreditRating LegCreditRating_37("STRING_984009575");
      noLegs_0_1_2.set(LegCreditRating_37);
      InstrumentLeg_37.insert(LegCreditRating_37.getString());
      FIX::LegCurrency LegCurrency_37("EUR");
      noLegs_0_1_2.set(LegCurrency_37);
      InstrumentLeg_37.insert(LegCurrency_37.getString());
      FIX::LegDatedDate LegDatedDate_37("LOCALMKTDATE_513152469");
      noLegs_0_1_2.set(LegDatedDate_37);
      InstrumentLeg_37.insert(LegDatedDate_37.getString());
      FIX::LegExerciseStyle LegExerciseStyle_37(728374119);
      noLegs_0_1_2.set(LegExerciseStyle_37);
      InstrumentLeg_37.insert(LegExerciseStyle_37.getString());
      FIX::LegFactor LegFactor_37;
      LegFactor_37.setString("10686348");
      noLegs_0_1_2.set(LegFactor_37);
      InstrumentLeg_37.insert(LegFactor_37.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_37(1170321950);
      noLegs_0_1_2.set(LegFlowScheduleType_37);
      InstrumentLeg_37.insert(LegFlowScheduleType_37.getString());
      FIX::LegInstrRegistry LegInstrRegistry_37("STRING_241921633");
      noLegs_0_1_2.set(LegInstrRegistry_37);
      InstrumentLeg_37.insert(LegInstrRegistry_37.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_37("LOCALMKTDATE_806718219");
      noLegs_0_1_2.set(LegInterestAccrualDate_37);
      InstrumentLeg_37.insert(LegInterestAccrualDate_37.getString());
      FIX::LegIssueDate LegIssueDate_37("LOCALMKTDATE_547295000");
      noLegs_0_1_2.set(LegIssueDate_37);
      InstrumentLeg_37.insert(LegIssueDate_37.getString());
      FIX::LegIssuer LegIssuer_37("STRING_237001234");
      noLegs_0_1_2.set(LegIssuer_37);
      InstrumentLeg_37.insert(LegIssuer_37.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_37("STRING_1264446196");
      noLegs_0_1_2.set(LegLocaleOfIssue_37);
      InstrumentLeg_37.insert(LegLocaleOfIssue_37.getString());
      FIX::LegMaturityDate LegMaturityDate_37("LOCALMKTDATE_1825380327");
      noLegs_0_1_2.set(LegMaturityDate_37);
      InstrumentLeg_37.insert(LegMaturityDate_37.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_37("MONTHYEAR_1839524415");
      noLegs_0_1_2.set(LegMaturityMonthYear_37);
      InstrumentLeg_37.insert(LegMaturityMonthYear_37.getString());
      FIX::LegMaturityTime LegMaturityTime_37("TZTIMEONLY_134979499");
      noLegs_0_1_2.set(LegMaturityTime_37);
      InstrumentLeg_37.insert(LegMaturityTime_37.getString());
      FIX::LegOptAttribute LegOptAttribute_37('6');
      noLegs_0_1_2.set(LegOptAttribute_37);
      InstrumentLeg_37.insert(LegOptAttribute_37.getString());
      FIX::LegOptionRatio LegOptionRatio_37;
      LegOptionRatio_37.setString("19432784");
      noLegs_0_1_2.set(LegOptionRatio_37);
      InstrumentLeg_37.insert(LegOptionRatio_37.getString());
      FIX::LegPool LegPool_37("STRING_15891459");
      noLegs_0_1_2.set(LegPool_37);
      InstrumentLeg_37.insert(LegPool_37.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_37("STRING_1362370677");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_37);
      InstrumentLeg_37.insert(LegPriceUnitOfMeasure_37.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_37;
      LegPriceUnitOfMeasureQty_37.setString("14354185");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_37);
      InstrumentLeg_37.insert(LegPriceUnitOfMeasureQty_37.getString());
      FIX::LegProduct LegProduct_37(1791293819);
      noLegs_0_1_2.set(LegProduct_37);
      InstrumentLeg_37.insert(LegProduct_37.getString());
      FIX::LegPutOrCall LegPutOrCall_37(518928340);
      noLegs_0_1_2.set(LegPutOrCall_37);
      InstrumentLeg_37.insert(LegPutOrCall_37.getString());
      FIX::LegRatioQty LegRatioQty_37;
      LegRatioQty_37.setString("7107143");
      noLegs_0_1_2.set(LegRatioQty_37);
      InstrumentLeg_37.insert(LegRatioQty_37.getString());
      FIX::LegRedemptionDate LegRedemptionDate_37("LOCALMKTDATE_341252378");
      noLegs_0_1_2.set(LegRedemptionDate_37);
      InstrumentLeg_37.insert(LegRedemptionDate_37.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_37("STRING_1890954109");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_37);
      InstrumentLeg_37.insert(LegRepoCollateralSecurityType_37.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_37;
      LegRepurchaseRate_37.setString("88.460000");
      noLegs_0_1_2.set(LegRepurchaseRate_37);
      InstrumentLeg_37.insert(LegRepurchaseRate_37.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_37(382678779);
      noLegs_0_1_2.set(LegRepurchaseTerm_37);
      InstrumentLeg_37.insert(LegRepurchaseTerm_37.getString());
      FIX::LegSecurityDesc LegSecurityDesc_37("STRING_374080964");
      noLegs_0_1_2.set(LegSecurityDesc_37);
      InstrumentLeg_37.insert(LegSecurityDesc_37.getString());
      FIX::LegSecurityExchange LegSecurityExchange_37("EXCHANGE_1329125101");
      noLegs_0_1_2.set(LegSecurityExchange_37);
      InstrumentLeg_37.insert(LegSecurityExchange_37.getString());
      FIX::LegSecurityID LegSecurityID_37("STRING_365228120");
      noLegs_0_1_2.set(LegSecurityID_37);
      InstrumentLeg_37.insert(LegSecurityID_37.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_37("STRING_1137849716");
      noLegs_0_1_2.set(LegSecurityIDSource_37);
      InstrumentLeg_37.insert(LegSecurityIDSource_37.getString());
      FIX::LegSecuritySubType LegSecuritySubType_37("STRING_165651028");
      noLegs_0_1_2.set(LegSecuritySubType_37);
      InstrumentLeg_37.insert(LegSecuritySubType_37.getString());
      FIX::LegSecurityType LegSecurityType_37("STRING_1248105982");
      noLegs_0_1_2.set(LegSecurityType_37);
      InstrumentLeg_37.insert(LegSecurityType_37.getString());
      FIX::LegSide LegSide_37('7');
      noLegs_0_1_2.set(LegSide_37);
      InstrumentLeg_37.insert(LegSide_37.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_37("STRING_678803497");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_37);
      InstrumentLeg_37.insert(LegStateOrProvinceOfIssue_37.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_37("USD");
      noLegs_0_1_2.set(LegStrikeCurrency_37);
      InstrumentLeg_37.insert(LegStrikeCurrency_37.getString());
      FIX::LegStrikePrice LegStrikePrice_37;
      LegStrikePrice_37.setString("18491254");
      noLegs_0_1_2.set(LegStrikePrice_37);
      InstrumentLeg_37.insert(LegStrikePrice_37.getString());
      FIX::LegSymbol LegSymbol_37("STRING_70918087");
      noLegs_0_1_2.set(LegSymbol_37);
      InstrumentLeg_37.insert(LegSymbol_37.getString());
      FIX::LegSymbolSfx LegSymbolSfx_37("STRING_452426653");
      noLegs_0_1_2.set(LegSymbolSfx_37);
      InstrumentLeg_37.insert(LegSymbolSfx_37.getString());
      FIX::LegTimeUnit LegTimeUnit_37("STRING_248936800");
      noLegs_0_1_2.set(LegTimeUnit_37);
      InstrumentLeg_37.insert(LegTimeUnit_37.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_37("STRING_307919321");
      noLegs_0_1_2.set(LegUnitOfMeasure_37);
      InstrumentLeg_37.insert(LegUnitOfMeasure_37.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_37;
      LegUnitOfMeasureQty_37.setString("17168728");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_37);
      InstrumentLeg_37.insert(LegUnitOfMeasureQty_37.getString());
      all_values.push_back(InstrumentLeg_37);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_67;
        FIX::LegSecurityAltID LegSecurityAltID_67("STRING_2147443736");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_67);
        LegSecAltIDGrp_NoLegSecurityAltID_67.insert(LegSecurityAltID_67.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_67("STRING_1851852348");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_67);
        LegSecAltIDGrp_NoLegSecurityAltID_67.insert(LegSecurityAltIDSource_67.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_67);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_68;
        FIX::LegSecurityAltID LegSecurityAltID_68("STRING_571143596");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_68);
        LegSecAltIDGrp_NoLegSecurityAltID_68.insert(LegSecurityAltID_68.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_68("STRING_1943238512");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_68);
        LegSecAltIDGrp_NoLegSecurityAltID_68.insert(LegSecurityAltIDSource_68.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_68);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_21;
    FIX::AttachmentPoint AttachmentPoint_21;
    AttachmentPoint_21.setString("38.070000");
    noRelatedSym_0_0.set(AttachmentPoint_21);
    Instrument_21.insert(AttachmentPoint_21.getString());
    FIX::CFICode CFICode_21("STRING_1933514274");
    noRelatedSym_0_0.set(CFICode_21);
    Instrument_21.insert(CFICode_21.getString());
    FIX::CPProgram CPProgram_21(99);
    noRelatedSym_0_0.set(CPProgram_21);
    Instrument_21.insert(CPProgram_21.getString());
    FIX::CPRegType CPRegType_21("STRING_1511553979");
    noRelatedSym_0_0.set(CPRegType_21);
    Instrument_21.insert(CPRegType_21.getString());
    FIX::CapPrice CapPrice_21;
    CapPrice_21.setString("3049589");
    noRelatedSym_0_0.set(CapPrice_21);
    Instrument_21.insert(CapPrice_21.getString());
    FIX::ContractMultiplier ContractMultiplier_21;
    ContractMultiplier_21.setString("19418877");
    noRelatedSym_0_0.set(ContractMultiplier_21);
    Instrument_21.insert(ContractMultiplier_21.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_21(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_21);
    Instrument_21.insert(ContractMultiplierUnit_21.getString());
    FIX::ContractSettlMonth ContractSettlMonth_21("MONTHYEAR_48429427");
    noRelatedSym_0_0.set(ContractSettlMonth_21);
    Instrument_21.insert(ContractSettlMonth_21.getString());
    FIX::CountryOfIssue CountryOfIssue_21("COUNTRY_352632946");
    noRelatedSym_0_0.set(CountryOfIssue_21);
    Instrument_21.insert(CountryOfIssue_21.getString());
    FIX::CouponPaymentDate CouponPaymentDate_21("LOCALMKTDATE_88001488");
    noRelatedSym_0_0.set(CouponPaymentDate_21);
    Instrument_21.insert(CouponPaymentDate_21.getString());
    FIX::CouponRate CouponRate_21;
    CouponRate_21.setString("3.910000");
    noRelatedSym_0_0.set(CouponRate_21);
    Instrument_21.insert(CouponRate_21.getString());
    FIX::CreditRating CreditRating_21("STRING_1681758047");
    noRelatedSym_0_0.set(CreditRating_21);
    Instrument_21.insert(CreditRating_21.getString());
    FIX::DatedDate DatedDate_21("LOCALMKTDATE_453229609");
    noRelatedSym_0_0.set(DatedDate_21);
    Instrument_21.insert(DatedDate_21.getString());
    FIX::DetachmentPoint DetachmentPoint_21;
    DetachmentPoint_21.setString("1.070000");
    noRelatedSym_0_0.set(DetachmentPoint_21);
    Instrument_21.insert(DetachmentPoint_21.getString());
    FIX::EncodedIssuer EncodedIssuer_21("DATA_1847409076");
    noRelatedSym_0_0.set(EncodedIssuer_21);
    Instrument_21.insert(EncodedIssuer_21.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_21(1701335591);
    noRelatedSym_0_0.set(EncodedIssuerLen_21);
    Instrument_21.insert(EncodedIssuerLen_21.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_21("DATA_137433677");
    noRelatedSym_0_0.set(EncodedSecurityDesc_21);
    Instrument_21.insert(EncodedSecurityDesc_21.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_21(378728925);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_21);
    Instrument_21.insert(EncodedSecurityDescLen_21.getString());
    FIX::ExerciseStyle ExerciseStyle_21(2);
    noRelatedSym_0_0.set(ExerciseStyle_21);
    Instrument_21.insert(ExerciseStyle_21.getString());
    FIX::Factor Factor_21;
    Factor_21.setString("19306257");
    noRelatedSym_0_0.set(Factor_21);
    Instrument_21.insert(Factor_21.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_21(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_21);
    Instrument_21.insert(FlexProductEligibilityIndicator_21.getString());
    FIX::FlexibleIndicator FlexibleIndicator_21(true);
    noRelatedSym_0_0.set(FlexibleIndicator_21);
    Instrument_21.insert(FlexibleIndicator_21.getString());
    FIX::FloorPrice FloorPrice_21;
    FloorPrice_21.setString("2355687");
    noRelatedSym_0_0.set(FloorPrice_21);
    Instrument_21.insert(FloorPrice_21.getString());
    FIX::FlowScheduleType FlowScheduleType_21(1);
    noRelatedSym_0_0.set(FlowScheduleType_21);
    Instrument_21.insert(FlowScheduleType_21.getString());
    FIX::InstrRegistry InstrRegistry_21("STRING_1909169453");
    noRelatedSym_0_0.set(InstrRegistry_21);
    Instrument_21.insert(InstrRegistry_21.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_21('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_21);
    Instrument_21.insert(InstrmtAssignmentMethod_21.getString());
    FIX::InterestAccrualDate InterestAccrualDate_21("LOCALMKTDATE_256141005");
    noRelatedSym_0_0.set(InterestAccrualDate_21);
    Instrument_21.insert(InterestAccrualDate_21.getString());
    FIX::IssueDate IssueDate_21("LOCALMKTDATE_1909129541");
    noRelatedSym_0_0.set(IssueDate_21);
    Instrument_21.insert(IssueDate_21.getString());
    FIX::Issuer Issuer_21("STRING_1656810313");
    noRelatedSym_0_0.set(Issuer_21);
    Instrument_21.insert(Issuer_21.getString());
    FIX::ListMethod ListMethod_21(0);
    noRelatedSym_0_0.set(ListMethod_21);
    Instrument_21.insert(ListMethod_21.getString());
    FIX::LocaleOfIssue LocaleOfIssue_21("STRING_1704884405");
    noRelatedSym_0_0.set(LocaleOfIssue_21);
    Instrument_21.insert(LocaleOfIssue_21.getString());
    FIX::MaturityDate MaturityDate_21("LOCALMKTDATE_1377070473");
    noRelatedSym_0_0.set(MaturityDate_21);
    Instrument_21.insert(MaturityDate_21.getString());
    FIX::MaturityMonthYear MaturityMonthYear_21("MONTHYEAR_613315228");
    noRelatedSym_0_0.set(MaturityMonthYear_21);
    Instrument_21.insert(MaturityMonthYear_21.getString());
    FIX::MaturityTime MaturityTime_21("TZTIMEONLY_788574158");
    noRelatedSym_0_0.set(MaturityTime_21);
    Instrument_21.insert(MaturityTime_21.getString());
    FIX::MinPriceIncrement MinPriceIncrement_21;
    MinPriceIncrement_21.setString("7411408");
    noRelatedSym_0_0.set(MinPriceIncrement_21);
    Instrument_21.insert(MinPriceIncrement_21.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_21;
    MinPriceIncrementAmount_21.setString("9182741");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_21);
    Instrument_21.insert(MinPriceIncrementAmount_21.getString());
    FIX::NTPositionLimit NTPositionLimit_21(582978259);
    noRelatedSym_0_0.set(NTPositionLimit_21);
    Instrument_21.insert(NTPositionLimit_21.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_21;
    NotionalPercentageOutstanding_21.setString("35.130000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_21);
    Instrument_21.insert(NotionalPercentageOutstanding_21.getString());
    FIX::OptAttribute OptAttribute_21('9');
    noRelatedSym_0_0.set(OptAttribute_21);
    Instrument_21.insert(OptAttribute_21.getString());
    FIX::OptPayoutAmount OptPayoutAmount_21;
    OptPayoutAmount_21.setString("9356112");
    noRelatedSym_0_0.set(OptPayoutAmount_21);
    Instrument_21.insert(OptPayoutAmount_21.getString());
    FIX::OptPayoutType OptPayoutType_21(2);
    noRelatedSym_0_0.set(OptPayoutType_21);
    Instrument_21.insert(OptPayoutType_21.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_21;
    OriginalNotionalPercentageOutstanding_21.setString("40.120000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_21);
    Instrument_21.insert(OriginalNotionalPercentageOutstanding_21.getString());
    FIX::Pool Pool_21("STRING_469885605");
    noRelatedSym_0_0.set(Pool_21);
    Instrument_21.insert(Pool_21.getString());
    FIX::PositionLimit PositionLimit_21(987694610);
    noRelatedSym_0_0.set(PositionLimit_21);
    Instrument_21.insert(PositionLimit_21.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_21("STRING_STD");
    noRelatedSym_0_0.set(PriceQuoteMethod_21);
    Instrument_21.insert(PriceQuoteMethod_21.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_21("STRING_169811033");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_21);
    Instrument_21.insert(PriceUnitOfMeasure_21.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_21;
    PriceUnitOfMeasureQty_21.setString("5415465");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_21);
    Instrument_21.insert(PriceUnitOfMeasureQty_21.getString());
    FIX::Product Product_23(6);
    noRelatedSym_0_0.set(Product_23);
    Instrument_21.insert(Product_23.getString());
    FIX::ProductComplex ProductComplex_21("STRING_548539958");
    noRelatedSym_0_0.set(ProductComplex_21);
    Instrument_21.insert(ProductComplex_21.getString());
    FIX::PutOrCall PutOrCall_21(1);
    noRelatedSym_0_0.set(PutOrCall_21);
    Instrument_21.insert(PutOrCall_21.getString());
    FIX::RedemptionDate RedemptionDate_21("LOCALMKTDATE_722666260");
    noRelatedSym_0_0.set(RedemptionDate_21);
    Instrument_21.insert(RedemptionDate_21.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_21("STRING_628910684");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_21);
    Instrument_21.insert(RepoCollateralSecurityType_21.getString());
    FIX::RepurchaseRate RepurchaseRate_21;
    RepurchaseRate_21.setString("50.830000");
    noRelatedSym_0_0.set(RepurchaseRate_21);
    Instrument_21.insert(RepurchaseRate_21.getString());
    FIX::RepurchaseTerm RepurchaseTerm_21(958235024);
    noRelatedSym_0_0.set(RepurchaseTerm_21);
    Instrument_21.insert(RepurchaseTerm_21.getString());
    FIX::RestructuringType RestructuringType_21("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_21);
    Instrument_21.insert(RestructuringType_21.getString());
    FIX::SecurityDesc SecurityDesc_21("STRING_1287330888");
    noRelatedSym_0_0.set(SecurityDesc_21);
    Instrument_21.insert(SecurityDesc_21.getString());
    FIX::SecurityExchange SecurityExchange_21("EXCHANGE_763192989");
    noRelatedSym_0_0.set(SecurityExchange_21);
    Instrument_21.insert(SecurityExchange_21.getString());
    FIX::SecurityGroup SecurityGroup_21("STRING_1214359215");
    noRelatedSym_0_0.set(SecurityGroup_21);
    Instrument_21.insert(SecurityGroup_21.getString());
    FIX::SecurityID SecurityID_21("STRING_1048976781");
    noRelatedSym_0_0.set(SecurityID_21);
    Instrument_21.insert(SecurityID_21.getString());
    FIX::SecurityIDSource SecurityIDSource_21("STRING_1");
    noRelatedSym_0_0.set(SecurityIDSource_21);
    Instrument_21.insert(SecurityIDSource_21.getString());
    FIX::SecurityStatus SecurityStatus_21("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_21);
    Instrument_21.insert(SecurityStatus_21.getString());
    FIX::SecuritySubType SecuritySubType_22("STRING_606377539");
    noRelatedSym_0_0.set(SecuritySubType_22);
    Instrument_21.insert(SecuritySubType_22.getString());
    FIX::SecurityType SecurityType_23("STRING_TIPS");
    noRelatedSym_0_0.set(SecurityType_23);
    Instrument_21.insert(SecurityType_23.getString());
    FIX::Seniority Seniority_21("STRING_SB");
    noRelatedSym_0_0.set(Seniority_21);
    Instrument_21.insert(Seniority_21.getString());
    FIX::SettlMethod SettlMethod_21('P');
    noRelatedSym_0_0.set(SettlMethod_21);
    Instrument_21.insert(SettlMethod_21.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_21("STRING_243247283");
    noRelatedSym_0_0.set(SettleOnOpenFlag_21);
    Instrument_21.insert(SettleOnOpenFlag_21.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_21("STRING_1425749591");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_21);
    Instrument_21.insert(StateOrProvinceOfIssue_21.getString());
    FIX::StrikeCurrency StrikeCurrency_21("GBP");
    noRelatedSym_0_0.set(StrikeCurrency_21);
    Instrument_21.insert(StrikeCurrency_21.getString());
    FIX::StrikeMultiplier StrikeMultiplier_21;
    StrikeMultiplier_21.setString("2449695");
    noRelatedSym_0_0.set(StrikeMultiplier_21);
    Instrument_21.insert(StrikeMultiplier_21.getString());
    FIX::StrikePrice StrikePrice_21;
    StrikePrice_21.setString("7660575");
    noRelatedSym_0_0.set(StrikePrice_21);
    Instrument_21.insert(StrikePrice_21.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_21(4);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_21);
    Instrument_21.insert(StrikePriceBoundaryMethod_21.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_21;
    StrikePriceBoundaryPrecision_21.setString("35.770000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_21);
    Instrument_21.insert(StrikePriceBoundaryPrecision_21.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_21(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_21);
    Instrument_21.insert(StrikePriceDeterminationMethod_21.getString());
    FIX::StrikeValue StrikeValue_21;
    StrikeValue_21.setString("643867");
    noRelatedSym_0_0.set(StrikeValue_21);
    Instrument_21.insert(StrikeValue_21.getString());
    FIX::Symbol Symbol_21("STRING_288790401");
    noRelatedSym_0_0.set(Symbol_21);
    Instrument_21.insert(Symbol_21.getString());
    FIX::SymbolSfx SymbolSfx_21("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_21);
    Instrument_21.insert(SymbolSfx_21.getString());
    FIX::TimeUnit TimeUnit_21("STRING_H");
    noRelatedSym_0_0.set(TimeUnit_21);
    Instrument_21.insert(TimeUnit_21.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_21(3);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_21);
    Instrument_21.insert(UnderlyingPriceDeterminationMethod_21.getString());
    FIX::UnitOfMeasure UnitOfMeasure_21("STRING_MMBtu");
    noRelatedSym_0_0.set(UnitOfMeasure_21);
    Instrument_21.insert(UnitOfMeasure_21.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_21;
    UnitOfMeasureQty_21.setString("5303282");
    noRelatedSym_0_0.set(UnitOfMeasureQty_21);
    Instrument_21.insert(UnitOfMeasureQty_21.getString());
    FIX::ValuationMethod ValuationMethod_21("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_21);
    Instrument_21.insert(ValuationMethod_21.getString());
    all_values.push_back(Instrument_21);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_36;
      FIX::ComplexEventCondition ComplexEventCondition_36(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventCondition_36.getString());
      FIX::ComplexEventPrice ComplexEventPrice_36;
      ComplexEventPrice_36.setString("7617321");
      noComplexEvents_0_1_0.set(ComplexEventPrice_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventPrice_36.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_36(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceBoundaryMethod_36.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_36;
      ComplexEventPriceBoundaryPrecision_36.setString("5.880000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceBoundaryPrecision_36.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_36(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceTimeType_36.getString());
      FIX::ComplexEventType ComplexEventType_36(3);
      noComplexEvents_0_1_0.set(ComplexEventType_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventType_36.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_36;
      ComplexOptPayoutAmount_36.setString("973137");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexOptPayoutAmount_36.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_36);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_69;
        FIX::ComplexEventEndDate ComplexEventEndDate_69(FIX::UTCTIMESTAMP(5, 29, 51, 6, 5, 2012));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_69);
        ComplexEventDates_NoComplexEventDates_69.insert(ComplexEventEndDate_69.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_69(FIX::UTCTIMESTAMP(5, 59, 53, 23, 9, 2004));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_69);
        ComplexEventDates_NoComplexEventDates_69.insert(ComplexEventStartDate_69.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_69);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_135;
          FIX::ComplexEventEndTime ComplexEventEndTime_135(FIX::UTCTIMEONLY(12, 54, 19));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_135);
          ComplexEventTimes_NoComplexEventTimes_135.insert(ComplexEventEndTime_135.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_135(FIX::UTCTIMEONLY(23, 1, 5));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_135);
          ComplexEventTimes_NoComplexEventTimes_135.insert(ComplexEventStartTime_135.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_135);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_136;
          FIX::ComplexEventEndTime ComplexEventEndTime_136(FIX::UTCTIMEONLY(3, 33, 40));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_136);
          ComplexEventTimes_NoComplexEventTimes_136.insert(ComplexEventEndTime_136.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_136(FIX::UTCTIMEONLY(5, 2, 35));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_136);
          ComplexEventTimes_NoComplexEventTimes_136.insert(ComplexEventStartTime_136.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_136);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_70;
        FIX::ComplexEventEndDate ComplexEventEndDate_70(FIX::UTCTIMESTAMP(23, 56, 34, 6, 2, 2016));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_70);
        ComplexEventDates_NoComplexEventDates_70.insert(ComplexEventEndDate_70.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_70(FIX::UTCTIMESTAMP(18, 27, 38, 25, 4, 2010));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_70);
        ComplexEventDates_NoComplexEventDates_70.insert(ComplexEventStartDate_70.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_70);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_137;
          FIX::ComplexEventEndTime ComplexEventEndTime_137(FIX::UTCTIMEONLY(22, 6, 43));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_137);
          ComplexEventTimes_NoComplexEventTimes_137.insert(ComplexEventEndTime_137.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_137(FIX::UTCTIMEONLY(22, 36, 53));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_137);
          ComplexEventTimes_NoComplexEventTimes_137.insert(ComplexEventStartTime_137.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_137);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_39;
      FIX::EventDate EventDate_39("LOCALMKTDATE_863817475");
      noEvents_0_1_0.set(EventDate_39);
      EvntGrp_NoEvents_39.insert(EventDate_39.getString());
      FIX::EventPx EventPx_39;
      EventPx_39.setString("15951012");
      noEvents_0_1_0.set(EventPx_39);
      EvntGrp_NoEvents_39.insert(EventPx_39.getString());
      FIX::EventText EventText_39("STRING_2081774122");
      noEvents_0_1_0.set(EventText_39);
      EvntGrp_NoEvents_39.insert(EventText_39.getString());
      FIX::EventTime EventTime_39(FIX::UTCTIMESTAMP(12, 17, 17, 15, 5, 2007));
      noEvents_0_1_0.set(EventTime_39);
      EvntGrp_NoEvents_39.insert(EventTime_39.getString());
      FIX::EventType EventType_39(2);
      noEvents_0_1_0.set(EventType_39);
      EvntGrp_NoEvents_39.insert(EventType_39.getString());
      all_values.push_back(EvntGrp_NoEvents_39);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_46;
      FIX::InstrumentPartyID InstrumentPartyID_46("STRING_694314654");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_46);
      InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyID_46.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_46('2');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_46);
      InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyIDSource_46.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_46(1542798523);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_46);
      InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyRole_46.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_46);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98;
        FIX::InstrumentPartySubID InstrumentPartySubID_98("STRING_490448749");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_98);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98.insert(InstrumentPartySubID_98.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_98(1943424441);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_98);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98.insert(InstrumentPartySubIDType_98.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99;
        FIX::InstrumentPartySubID InstrumentPartySubID_99("STRING_1232578757");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_99);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99.insert(InstrumentPartySubID_99.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_99(950858045);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_99);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99.insert(InstrumentPartySubIDType_99.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_47;
      FIX::InstrumentPartyID InstrumentPartyID_47("STRING_1980172963");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_47);
      InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyID_47.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_47('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_47);
      InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyIDSource_47.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_47(1572443669);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_47);
      InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyRole_47.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_47);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100;
        FIX::InstrumentPartySubID InstrumentPartySubID_100("STRING_1364291668");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_100);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100.insert(InstrumentPartySubID_100.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_100(1436036525);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_100);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100.insert(InstrumentPartySubIDType_100.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_45;
      FIX::SecurityAltID SecurityAltID_45("STRING_1708533338");
      noSecurityAltID_0_1_0.set(SecurityAltID_45);
      SecAltIDGrp_NoSecurityAltID_45.insert(SecurityAltID_45.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_45("STRING_345133773");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_45);
      SecAltIDGrp_NoSecurityAltID_45.insert(SecurityAltIDSource_45.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_45);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_46;
      FIX::SecurityAltID SecurityAltID_46("STRING_1755380655");
      noSecurityAltID_0_1_1.set(SecurityAltID_46);
      SecAltIDGrp_NoSecurityAltID_46.insert(SecurityAltID_46.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_46("STRING_176147292");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_46);
      SecAltIDGrp_NoSecurityAltID_46.insert(SecurityAltIDSource_46.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_46);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_42;
    FIX::SecurityXML SecurityXML_43("XMLDATA_1208951249");
    noRelatedSym_0_0.set(SecurityXML_43);
    FIX::SecurityXMLLen SecurityXMLLen_21(1202998294);
    noRelatedSym_0_0.set(SecurityXMLLen_21);
    FIX::SecurityXMLSchema SecurityXMLSchema_21("STRING_110437767");
    noRelatedSym_0_0.set(SecurityXMLSchema_21);
    SecurityXML_42.insert(SecurityXMLSchema_21.getString());
    all_values.push_back(SecurityXML_42);

    // InstrumentExtension
    multiset<string> InstrumentExtension_7;
    FIX::DeliveryForm DeliveryForm_7(1);
    noRelatedSym_0_0.set(DeliveryForm_7);
    InstrumentExtension_7.insert(DeliveryForm_7.getString());
    FIX::PctAtRisk PctAtRisk_7;
    PctAtRisk_7.setString("49.310000");
    noRelatedSym_0_0.set(PctAtRisk_7);
    InstrumentExtension_7.insert(PctAtRisk_7.getString());
    all_values.push_back(InstrumentExtension_7);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_15;
      FIX::InstrAttribType InstrAttribType_15(20);
      noInstrAttrib_0_1_0.set(InstrAttribType_15);
      AttrbGrp_NoInstrAttrib_15.insert(InstrAttribType_15.getString());
      FIX::InstrAttribValue InstrAttribValue_15("STRING_1280762010");
      noInstrAttrib_0_1_0.set(InstrAttribValue_15);
      AttrbGrp_NoInstrAttrib_15.insert(InstrAttribValue_15.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_15);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_16;
      FIX::InstrAttribType InstrAttribType_16(29);
      noInstrAttrib_0_1_1.set(InstrAttribType_16);
      AttrbGrp_NoInstrAttrib_16.insert(InstrAttribType_16.getString());
      FIX::InstrAttribValue InstrAttribValue_16("STRING_1305390813");
      noInstrAttrib_0_1_1.set(InstrAttribValue_16);
      AttrbGrp_NoInstrAttrib_16.insert(InstrAttribValue_16.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_16);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_17;
      FIX::InstrAttribType InstrAttribType_17(25);
      noInstrAttrib_0_1_2.set(InstrAttribType_17);
      AttrbGrp_NoInstrAttrib_17.insert(InstrAttribType_17.getString());
      FIX::InstrAttribValue InstrAttribValue_17("STRING_622065499");
      noInstrAttrib_0_1_2.set(InstrAttribValue_17);
      AttrbGrp_NoInstrAttrib_17.insert(InstrAttribValue_17.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_17);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_3;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_3;
    SecondaryHighLimitPrice_3.setString("19997054");
    noRelatedSym_0_0.set(SecondaryHighLimitPrice_3);
    SecondaryPriceLimits_3.insert(SecondaryHighLimitPrice_3.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_3;
    SecondaryLowLimitPrice_3.setString("8832754");
    noRelatedSym_0_0.set(SecondaryLowLimitPrice_3);
    SecondaryPriceLimits_3.insert(SecondaryLowLimitPrice_3.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_3(17380374);
    noRelatedSym_0_0.set(SecondaryPriceLimitType_3);
    SecondaryPriceLimits_3.insert(SecondaryPriceLimitType_3.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_3;
    SecondaryTradingReferencePrice_3.setString("1610677");
    noRelatedSym_0_0.set(SecondaryTradingReferencePrice_3);
    SecondaryPriceLimits_3.insert(SecondaryTradingReferencePrice_3.getString());
    all_values.push_back(SecondaryPriceLimits_3);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_1;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_1;
    FIX::CorporateAction CorporateAction_4("MULTIPLECHARVALUE_E");
    noRelatedSym_0_1.set(CorporateAction_4);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(CorporateAction_4.getString());
    FIX::Currency Currency_19("CAN");
    noRelatedSym_0_1.set(Currency_19);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(Currency_19.getString());
    FIX::EncodedText EncodedText_31("DATA_177098552");
    noRelatedSym_0_1.set(EncodedText_31);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(EncodedText_31.getString());
    FIX::EncodedTextLen EncodedTextLen_31(1793494131);
    noRelatedSym_0_1.set(EncodedTextLen_31);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(EncodedTextLen_31.getString());
    FIX::ListUpdateAction ListUpdateAction_1('6');
    noRelatedSym_0_1.set(ListUpdateAction_1);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(ListUpdateAction_1.getString());
    FIX::RelSymTransactTime RelSymTransactTime_4(FIX::UTCTIMESTAMP(5, 44, 59, 11, 3, 2008));
    noRelatedSym_0_1.set(RelSymTransactTime_4);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(RelSymTransactTime_4.getString());
    FIX::Text Text_31("STRING_856365526");
    noRelatedSym_0_1.set(Text_31);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(Text_31.getString());
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_38;
      FIX::EncodedLegIssuer EncodedLegIssuer_38("DATA_444696473");
      noLegs_1_1_0.set(EncodedLegIssuer_38);
      InstrumentLeg_38.insert(EncodedLegIssuer_38.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_38(2059363821);
      noLegs_1_1_0.set(EncodedLegIssuerLen_38);
      InstrumentLeg_38.insert(EncodedLegIssuerLen_38.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_38("DATA_1840505514");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_38);
      InstrumentLeg_38.insert(EncodedLegSecurityDesc_38.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_38(1702143304);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_38);
      InstrumentLeg_38.insert(EncodedLegSecurityDescLen_38.getString());
      FIX::LegCFICode LegCFICode_38("STRING_1554175104");
      noLegs_1_1_0.set(LegCFICode_38);
      InstrumentLeg_38.insert(LegCFICode_38.getString());
      FIX::LegContractMultiplier LegContractMultiplier_38;
      LegContractMultiplier_38.setString("13017403");
      noLegs_1_1_0.set(LegContractMultiplier_38);
      InstrumentLeg_38.insert(LegContractMultiplier_38.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_38(1842725003);
      noLegs_1_1_0.set(LegContractMultiplierUnit_38);
      InstrumentLeg_38.insert(LegContractMultiplierUnit_38.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_38("MONTHYEAR_687453466");
      noLegs_1_1_0.set(LegContractSettlMonth_38);
      InstrumentLeg_38.insert(LegContractSettlMonth_38.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_38("COUNTRY_233970110");
      noLegs_1_1_0.set(LegCountryOfIssue_38);
      InstrumentLeg_38.insert(LegCountryOfIssue_38.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_38("LOCALMKTDATE_1000632168");
      noLegs_1_1_0.set(LegCouponPaymentDate_38);
      InstrumentLeg_38.insert(LegCouponPaymentDate_38.getString());
      FIX::LegCouponRate LegCouponRate_38;
      LegCouponRate_38.setString("34.900000");
      noLegs_1_1_0.set(LegCouponRate_38);
      InstrumentLeg_38.insert(LegCouponRate_38.getString());
      FIX::LegCreditRating LegCreditRating_38("STRING_856035609");
      noLegs_1_1_0.set(LegCreditRating_38);
      InstrumentLeg_38.insert(LegCreditRating_38.getString());
      FIX::LegCurrency LegCurrency_38("USD");
      noLegs_1_1_0.set(LegCurrency_38);
      InstrumentLeg_38.insert(LegCurrency_38.getString());
      FIX::LegDatedDate LegDatedDate_38("LOCALMKTDATE_873415984");
      noLegs_1_1_0.set(LegDatedDate_38);
      InstrumentLeg_38.insert(LegDatedDate_38.getString());
      FIX::LegExerciseStyle LegExerciseStyle_38(1013921744);
      noLegs_1_1_0.set(LegExerciseStyle_38);
      InstrumentLeg_38.insert(LegExerciseStyle_38.getString());
      FIX::LegFactor LegFactor_38;
      LegFactor_38.setString("17778194");
      noLegs_1_1_0.set(LegFactor_38);
      InstrumentLeg_38.insert(LegFactor_38.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_38(686737152);
      noLegs_1_1_0.set(LegFlowScheduleType_38);
      InstrumentLeg_38.insert(LegFlowScheduleType_38.getString());
      FIX::LegInstrRegistry LegInstrRegistry_38("STRING_260084609");
      noLegs_1_1_0.set(LegInstrRegistry_38);
      InstrumentLeg_38.insert(LegInstrRegistry_38.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_38("LOCALMKTDATE_1954917956");
      noLegs_1_1_0.set(LegInterestAccrualDate_38);
      InstrumentLeg_38.insert(LegInterestAccrualDate_38.getString());
      FIX::LegIssueDate LegIssueDate_38("LOCALMKTDATE_332747635");
      noLegs_1_1_0.set(LegIssueDate_38);
      InstrumentLeg_38.insert(LegIssueDate_38.getString());
      FIX::LegIssuer LegIssuer_38("STRING_888663705");
      noLegs_1_1_0.set(LegIssuer_38);
      InstrumentLeg_38.insert(LegIssuer_38.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_38("STRING_1556976530");
      noLegs_1_1_0.set(LegLocaleOfIssue_38);
      InstrumentLeg_38.insert(LegLocaleOfIssue_38.getString());
      FIX::LegMaturityDate LegMaturityDate_38("LOCALMKTDATE_890072712");
      noLegs_1_1_0.set(LegMaturityDate_38);
      InstrumentLeg_38.insert(LegMaturityDate_38.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_38("MONTHYEAR_734050821");
      noLegs_1_1_0.set(LegMaturityMonthYear_38);
      InstrumentLeg_38.insert(LegMaturityMonthYear_38.getString());
      FIX::LegMaturityTime LegMaturityTime_38("TZTIMEONLY_447587981");
      noLegs_1_1_0.set(LegMaturityTime_38);
      InstrumentLeg_38.insert(LegMaturityTime_38.getString());
      FIX::LegOptAttribute LegOptAttribute_38('2');
      noLegs_1_1_0.set(LegOptAttribute_38);
      InstrumentLeg_38.insert(LegOptAttribute_38.getString());
      FIX::LegOptionRatio LegOptionRatio_38;
      LegOptionRatio_38.setString("1404876");
      noLegs_1_1_0.set(LegOptionRatio_38);
      InstrumentLeg_38.insert(LegOptionRatio_38.getString());
      FIX::LegPool LegPool_38("STRING_1830816854");
      noLegs_1_1_0.set(LegPool_38);
      InstrumentLeg_38.insert(LegPool_38.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_38("STRING_847423110");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_38);
      InstrumentLeg_38.insert(LegPriceUnitOfMeasure_38.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_38;
      LegPriceUnitOfMeasureQty_38.setString("18705553");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_38);
      InstrumentLeg_38.insert(LegPriceUnitOfMeasureQty_38.getString());
      FIX::LegProduct LegProduct_38(128029679);
      noLegs_1_1_0.set(LegProduct_38);
      InstrumentLeg_38.insert(LegProduct_38.getString());
      FIX::LegPutOrCall LegPutOrCall_38(759303283);
      noLegs_1_1_0.set(LegPutOrCall_38);
      InstrumentLeg_38.insert(LegPutOrCall_38.getString());
      FIX::LegRatioQty LegRatioQty_38;
      LegRatioQty_38.setString("15635772");
      noLegs_1_1_0.set(LegRatioQty_38);
      InstrumentLeg_38.insert(LegRatioQty_38.getString());
      FIX::LegRedemptionDate LegRedemptionDate_38("LOCALMKTDATE_1830172983");
      noLegs_1_1_0.set(LegRedemptionDate_38);
      InstrumentLeg_38.insert(LegRedemptionDate_38.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_38("STRING_165994739");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_38);
      InstrumentLeg_38.insert(LegRepoCollateralSecurityType_38.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_38;
      LegRepurchaseRate_38.setString("39.420000");
      noLegs_1_1_0.set(LegRepurchaseRate_38);
      InstrumentLeg_38.insert(LegRepurchaseRate_38.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_38(1525414339);
      noLegs_1_1_0.set(LegRepurchaseTerm_38);
      InstrumentLeg_38.insert(LegRepurchaseTerm_38.getString());
      FIX::LegSecurityDesc LegSecurityDesc_38("STRING_853448205");
      noLegs_1_1_0.set(LegSecurityDesc_38);
      InstrumentLeg_38.insert(LegSecurityDesc_38.getString());
      FIX::LegSecurityExchange LegSecurityExchange_38("EXCHANGE_951804053");
      noLegs_1_1_0.set(LegSecurityExchange_38);
      InstrumentLeg_38.insert(LegSecurityExchange_38.getString());
      FIX::LegSecurityID LegSecurityID_38("STRING_378562859");
      noLegs_1_1_0.set(LegSecurityID_38);
      InstrumentLeg_38.insert(LegSecurityID_38.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_38("STRING_374268048");
      noLegs_1_1_0.set(LegSecurityIDSource_38);
      InstrumentLeg_38.insert(LegSecurityIDSource_38.getString());
      FIX::LegSecuritySubType LegSecuritySubType_38("STRING_1807839662");
      noLegs_1_1_0.set(LegSecuritySubType_38);
      InstrumentLeg_38.insert(LegSecuritySubType_38.getString());
      FIX::LegSecurityType LegSecurityType_38("STRING_1231416847");
      noLegs_1_1_0.set(LegSecurityType_38);
      InstrumentLeg_38.insert(LegSecurityType_38.getString());
      FIX::LegSide LegSide_38('7');
      noLegs_1_1_0.set(LegSide_38);
      InstrumentLeg_38.insert(LegSide_38.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_38("STRING_533771998");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_38);
      InstrumentLeg_38.insert(LegStateOrProvinceOfIssue_38.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_38("JPY");
      noLegs_1_1_0.set(LegStrikeCurrency_38);
      InstrumentLeg_38.insert(LegStrikeCurrency_38.getString());
      FIX::LegStrikePrice LegStrikePrice_38;
      LegStrikePrice_38.setString("12205091");
      noLegs_1_1_0.set(LegStrikePrice_38);
      InstrumentLeg_38.insert(LegStrikePrice_38.getString());
      FIX::LegSymbol LegSymbol_38("STRING_357939553");
      noLegs_1_1_0.set(LegSymbol_38);
      InstrumentLeg_38.insert(LegSymbol_38.getString());
      FIX::LegSymbolSfx LegSymbolSfx_38("STRING_216133361");
      noLegs_1_1_0.set(LegSymbolSfx_38);
      InstrumentLeg_38.insert(LegSymbolSfx_38.getString());
      FIX::LegTimeUnit LegTimeUnit_38("STRING_1553256786");
      noLegs_1_1_0.set(LegTimeUnit_38);
      InstrumentLeg_38.insert(LegTimeUnit_38.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_38("STRING_1246603258");
      noLegs_1_1_0.set(LegUnitOfMeasure_38);
      InstrumentLeg_38.insert(LegUnitOfMeasure_38.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_38;
      LegUnitOfMeasureQty_38.setString("17731098");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_38);
      InstrumentLeg_38.insert(LegUnitOfMeasureQty_38.getString());
      all_values.push_back(InstrumentLeg_38);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_69;
        FIX::LegSecurityAltID LegSecurityAltID_69("STRING_1980654079");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_69);
        LegSecAltIDGrp_NoLegSecurityAltID_69.insert(LegSecurityAltID_69.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_69("STRING_73214225");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_69);
        LegSecAltIDGrp_NoLegSecurityAltID_69.insert(LegSecurityAltIDSource_69.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_69);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_70;
        FIX::LegSecurityAltID LegSecurityAltID_70("STRING_286903434");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_70);
        LegSecAltIDGrp_NoLegSecurityAltID_70.insert(LegSecurityAltID_70.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_70("STRING_2121141706");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_70);
        LegSecAltIDGrp_NoLegSecurityAltID_70.insert(LegSecurityAltIDSource_70.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_70);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_22;
    FIX::AttachmentPoint AttachmentPoint_22;
    AttachmentPoint_22.setString("10.790000");
    noRelatedSym_0_1.set(AttachmentPoint_22);
    Instrument_22.insert(AttachmentPoint_22.getString());
    FIX::CFICode CFICode_22("STRING_1134326544");
    noRelatedSym_0_1.set(CFICode_22);
    Instrument_22.insert(CFICode_22.getString());
    FIX::CPProgram CPProgram_22(1);
    noRelatedSym_0_1.set(CPProgram_22);
    Instrument_22.insert(CPProgram_22.getString());
    FIX::CPRegType CPRegType_22("STRING_2032060758");
    noRelatedSym_0_1.set(CPRegType_22);
    Instrument_22.insert(CPRegType_22.getString());
    FIX::CapPrice CapPrice_22;
    CapPrice_22.setString("18936298");
    noRelatedSym_0_1.set(CapPrice_22);
    Instrument_22.insert(CapPrice_22.getString());
    FIX::ContractMultiplier ContractMultiplier_22;
    ContractMultiplier_22.setString("12603070");
    noRelatedSym_0_1.set(ContractMultiplier_22);
    Instrument_22.insert(ContractMultiplier_22.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_22(2);
    noRelatedSym_0_1.set(ContractMultiplierUnit_22);
    Instrument_22.insert(ContractMultiplierUnit_22.getString());
    FIX::ContractSettlMonth ContractSettlMonth_22("MONTHYEAR_2059624566");
    noRelatedSym_0_1.set(ContractSettlMonth_22);
    Instrument_22.insert(ContractSettlMonth_22.getString());
    FIX::CountryOfIssue CountryOfIssue_22("COUNTRY_1978140968");
    noRelatedSym_0_1.set(CountryOfIssue_22);
    Instrument_22.insert(CountryOfIssue_22.getString());
    FIX::CouponPaymentDate CouponPaymentDate_22("LOCALMKTDATE_1092680785");
    noRelatedSym_0_1.set(CouponPaymentDate_22);
    Instrument_22.insert(CouponPaymentDate_22.getString());
    FIX::CouponRate CouponRate_22;
    CouponRate_22.setString("91.230000");
    noRelatedSym_0_1.set(CouponRate_22);
    Instrument_22.insert(CouponRate_22.getString());
    FIX::CreditRating CreditRating_22("STRING_782461373");
    noRelatedSym_0_1.set(CreditRating_22);
    Instrument_22.insert(CreditRating_22.getString());
    FIX::DatedDate DatedDate_22("LOCALMKTDATE_1471243644");
    noRelatedSym_0_1.set(DatedDate_22);
    Instrument_22.insert(DatedDate_22.getString());
    FIX::DetachmentPoint DetachmentPoint_22;
    DetachmentPoint_22.setString("71.710000");
    noRelatedSym_0_1.set(DetachmentPoint_22);
    Instrument_22.insert(DetachmentPoint_22.getString());
    FIX::EncodedIssuer EncodedIssuer_22("DATA_442817387");
    noRelatedSym_0_1.set(EncodedIssuer_22);
    Instrument_22.insert(EncodedIssuer_22.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_22(555176844);
    noRelatedSym_0_1.set(EncodedIssuerLen_22);
    Instrument_22.insert(EncodedIssuerLen_22.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_22("DATA_1918220468");
    noRelatedSym_0_1.set(EncodedSecurityDesc_22);
    Instrument_22.insert(EncodedSecurityDesc_22.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_22(976589386);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_22);
    Instrument_22.insert(EncodedSecurityDescLen_22.getString());
    FIX::ExerciseStyle ExerciseStyle_22(1);
    noRelatedSym_0_1.set(ExerciseStyle_22);
    Instrument_22.insert(ExerciseStyle_22.getString());
    FIX::Factor Factor_22;
    Factor_22.setString("1794358");
    noRelatedSym_0_1.set(Factor_22);
    Instrument_22.insert(Factor_22.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_22(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_22);
    Instrument_22.insert(FlexProductEligibilityIndicator_22.getString());
    FIX::FlexibleIndicator FlexibleIndicator_22(true);
    noRelatedSym_0_1.set(FlexibleIndicator_22);
    Instrument_22.insert(FlexibleIndicator_22.getString());
    FIX::FloorPrice FloorPrice_22;
    FloorPrice_22.setString("3955692");
    noRelatedSym_0_1.set(FloorPrice_22);
    Instrument_22.insert(FloorPrice_22.getString());
    FIX::FlowScheduleType FlowScheduleType_22(4);
    noRelatedSym_0_1.set(FlowScheduleType_22);
    Instrument_22.insert(FlowScheduleType_22.getString());
    FIX::InstrRegistry InstrRegistry_22("STRING_110090950");
    noRelatedSym_0_1.set(InstrRegistry_22);
    Instrument_22.insert(InstrRegistry_22.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_22('2');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_22);
    Instrument_22.insert(InstrmtAssignmentMethod_22.getString());
    FIX::InterestAccrualDate InterestAccrualDate_22("LOCALMKTDATE_1898717525");
    noRelatedSym_0_1.set(InterestAccrualDate_22);
    Instrument_22.insert(InterestAccrualDate_22.getString());
    FIX::IssueDate IssueDate_22("LOCALMKTDATE_2090745029");
    noRelatedSym_0_1.set(IssueDate_22);
    Instrument_22.insert(IssueDate_22.getString());
    FIX::Issuer Issuer_22("STRING_94409702");
    noRelatedSym_0_1.set(Issuer_22);
    Instrument_22.insert(Issuer_22.getString());
    FIX::ListMethod ListMethod_22(1);
    noRelatedSym_0_1.set(ListMethod_22);
    Instrument_22.insert(ListMethod_22.getString());
    FIX::LocaleOfIssue LocaleOfIssue_22("STRING_2064403088");
    noRelatedSym_0_1.set(LocaleOfIssue_22);
    Instrument_22.insert(LocaleOfIssue_22.getString());
    FIX::MaturityDate MaturityDate_22("LOCALMKTDATE_1998440781");
    noRelatedSym_0_1.set(MaturityDate_22);
    Instrument_22.insert(MaturityDate_22.getString());
    FIX::MaturityMonthYear MaturityMonthYear_22("MONTHYEAR_1172463855");
    noRelatedSym_0_1.set(MaturityMonthYear_22);
    Instrument_22.insert(MaturityMonthYear_22.getString());
    FIX::MaturityTime MaturityTime_22("TZTIMEONLY_1761132873");
    noRelatedSym_0_1.set(MaturityTime_22);
    Instrument_22.insert(MaturityTime_22.getString());
    FIX::MinPriceIncrement MinPriceIncrement_22;
    MinPriceIncrement_22.setString("18830178");
    noRelatedSym_0_1.set(MinPriceIncrement_22);
    Instrument_22.insert(MinPriceIncrement_22.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_22;
    MinPriceIncrementAmount_22.setString("9186100");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_22);
    Instrument_22.insert(MinPriceIncrementAmount_22.getString());
    FIX::NTPositionLimit NTPositionLimit_22(873956250);
    noRelatedSym_0_1.set(NTPositionLimit_22);
    Instrument_22.insert(NTPositionLimit_22.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_22;
    NotionalPercentageOutstanding_22.setString("43.370000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_22);
    Instrument_22.insert(NotionalPercentageOutstanding_22.getString());
    FIX::OptAttribute OptAttribute_22('8');
    noRelatedSym_0_1.set(OptAttribute_22);
    Instrument_22.insert(OptAttribute_22.getString());
    FIX::OptPayoutAmount OptPayoutAmount_22;
    OptPayoutAmount_22.setString("7046135");
    noRelatedSym_0_1.set(OptPayoutAmount_22);
    Instrument_22.insert(OptPayoutAmount_22.getString());
    FIX::OptPayoutType OptPayoutType_22(1);
    noRelatedSym_0_1.set(OptPayoutType_22);
    Instrument_22.insert(OptPayoutType_22.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_22;
    OriginalNotionalPercentageOutstanding_22.setString("0.750000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_22);
    Instrument_22.insert(OriginalNotionalPercentageOutstanding_22.getString());
    FIX::Pool Pool_22("STRING_1487074943");
    noRelatedSym_0_1.set(Pool_22);
    Instrument_22.insert(Pool_22.getString());
    FIX::PositionLimit PositionLimit_22(1866725119);
    noRelatedSym_0_1.set(PositionLimit_22);
    Instrument_22.insert(PositionLimit_22.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_22("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_22);
    Instrument_22.insert(PriceQuoteMethod_22.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_22("STRING_1929892331");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_22);
    Instrument_22.insert(PriceUnitOfMeasure_22.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_22;
    PriceUnitOfMeasureQty_22.setString("2744183");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_22);
    Instrument_22.insert(PriceUnitOfMeasureQty_22.getString());
    FIX::Product Product_24(4);
    noRelatedSym_0_1.set(Product_24);
    Instrument_22.insert(Product_24.getString());
    FIX::ProductComplex ProductComplex_22("STRING_758998069");
    noRelatedSym_0_1.set(ProductComplex_22);
    Instrument_22.insert(ProductComplex_22.getString());
    FIX::PutOrCall PutOrCall_22(0);
    noRelatedSym_0_1.set(PutOrCall_22);
    Instrument_22.insert(PutOrCall_22.getString());
    FIX::RedemptionDate RedemptionDate_22("LOCALMKTDATE_538886291");
    noRelatedSym_0_1.set(RedemptionDate_22);
    Instrument_22.insert(RedemptionDate_22.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_22("STRING_808612957");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_22);
    Instrument_22.insert(RepoCollateralSecurityType_22.getString());
    FIX::RepurchaseRate RepurchaseRate_22;
    RepurchaseRate_22.setString("14.430000");
    noRelatedSym_0_1.set(RepurchaseRate_22);
    Instrument_22.insert(RepurchaseRate_22.getString());
    FIX::RepurchaseTerm RepurchaseTerm_22(934455525);
    noRelatedSym_0_1.set(RepurchaseTerm_22);
    Instrument_22.insert(RepurchaseTerm_22.getString());
    FIX::RestructuringType RestructuringType_22("STRING_FR");
    noRelatedSym_0_1.set(RestructuringType_22);
    Instrument_22.insert(RestructuringType_22.getString());
    FIX::SecurityDesc SecurityDesc_22("STRING_2048512393");
    noRelatedSym_0_1.set(SecurityDesc_22);
    Instrument_22.insert(SecurityDesc_22.getString());
    FIX::SecurityExchange SecurityExchange_22("EXCHANGE_955651002");
    noRelatedSym_0_1.set(SecurityExchange_22);
    Instrument_22.insert(SecurityExchange_22.getString());
    FIX::SecurityGroup SecurityGroup_22("STRING_15234861");
    noRelatedSym_0_1.set(SecurityGroup_22);
    Instrument_22.insert(SecurityGroup_22.getString());
    FIX::SecurityID SecurityID_22("STRING_1991773775");
    noRelatedSym_0_1.set(SecurityID_22);
    Instrument_22.insert(SecurityID_22.getString());
    FIX::SecurityIDSource SecurityIDSource_22("STRING_1");
    noRelatedSym_0_1.set(SecurityIDSource_22);
    Instrument_22.insert(SecurityIDSource_22.getString());
    FIX::SecurityStatus SecurityStatus_22("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_22);
    Instrument_22.insert(SecurityStatus_22.getString());
    FIX::SecuritySubType SecuritySubType_23("STRING_1908693215");
    noRelatedSym_0_1.set(SecuritySubType_23);
    Instrument_22.insert(SecuritySubType_23.getString());
    FIX::SecurityType SecurityType_24("STRING_TERM");
    noRelatedSym_0_1.set(SecurityType_24);
    Instrument_22.insert(SecurityType_24.getString());
    FIX::Seniority Seniority_22("STRING_SD");
    noRelatedSym_0_1.set(Seniority_22);
    Instrument_22.insert(Seniority_22.getString());
    FIX::SettlMethod SettlMethod_22('C');
    noRelatedSym_0_1.set(SettlMethod_22);
    Instrument_22.insert(SettlMethod_22.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_22("STRING_636552080");
    noRelatedSym_0_1.set(SettleOnOpenFlag_22);
    Instrument_22.insert(SettleOnOpenFlag_22.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_22("STRING_2144446061");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_22);
    Instrument_22.insert(StateOrProvinceOfIssue_22.getString());
    FIX::StrikeCurrency StrikeCurrency_22("JPY");
    noRelatedSym_0_1.set(StrikeCurrency_22);
    Instrument_22.insert(StrikeCurrency_22.getString());
    FIX::StrikeMultiplier StrikeMultiplier_22;
    StrikeMultiplier_22.setString("8277133");
    noRelatedSym_0_1.set(StrikeMultiplier_22);
    Instrument_22.insert(StrikeMultiplier_22.getString());
    FIX::StrikePrice StrikePrice_22;
    StrikePrice_22.setString("9534286");
    noRelatedSym_0_1.set(StrikePrice_22);
    Instrument_22.insert(StrikePrice_22.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_22(5);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_22);
    Instrument_22.insert(StrikePriceBoundaryMethod_22.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_22;
    StrikePriceBoundaryPrecision_22.setString("97.920000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_22);
    Instrument_22.insert(StrikePriceBoundaryPrecision_22.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_22(1);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_22);
    Instrument_22.insert(StrikePriceDeterminationMethod_22.getString());
    FIX::StrikeValue StrikeValue_22;
    StrikeValue_22.setString("540757");
    noRelatedSym_0_1.set(StrikeValue_22);
    Instrument_22.insert(StrikeValue_22.getString());
    FIX::Symbol Symbol_22("STRING_865283391");
    noRelatedSym_0_1.set(Symbol_22);
    Instrument_22.insert(Symbol_22.getString());
    FIX::SymbolSfx SymbolSfx_22("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_22);
    Instrument_22.insert(SymbolSfx_22.getString());
    FIX::TimeUnit TimeUnit_22("STRING_Wk");
    noRelatedSym_0_1.set(TimeUnit_22);
    Instrument_22.insert(TimeUnit_22.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_22(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_22);
    Instrument_22.insert(UnderlyingPriceDeterminationMethod_22.getString());
    FIX::UnitOfMeasure UnitOfMeasure_22("STRING_MMBtu");
    noRelatedSym_0_1.set(UnitOfMeasure_22);
    Instrument_22.insert(UnitOfMeasure_22.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_22;
    UnitOfMeasureQty_22.setString("12559441");
    noRelatedSym_0_1.set(UnitOfMeasureQty_22);
    Instrument_22.insert(UnitOfMeasureQty_22.getString());
    FIX::ValuationMethod ValuationMethod_22("STRING_FUTDA");
    noRelatedSym_0_1.set(ValuationMethod_22);
    Instrument_22.insert(ValuationMethod_22.getString());
    all_values.push_back(Instrument_22);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_37;
      FIX::ComplexEventCondition ComplexEventCondition_37(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventCondition_37.getString());
      FIX::ComplexEventPrice ComplexEventPrice_37;
      ComplexEventPrice_37.setString("5505919");
      noComplexEvents_1_1_0.set(ComplexEventPrice_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventPrice_37.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_37(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceBoundaryMethod_37.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_37;
      ComplexEventPriceBoundaryPrecision_37.setString("6.730000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceBoundaryPrecision_37.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_37(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceTimeType_37.getString());
      FIX::ComplexEventType ComplexEventType_37(6);
      noComplexEvents_1_1_0.set(ComplexEventType_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventType_37.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_37;
      ComplexOptPayoutAmount_37.setString("7922008");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexOptPayoutAmount_37.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_37);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_71;
        FIX::ComplexEventEndDate ComplexEventEndDate_71(FIX::UTCTIMESTAMP(7, 14, 54, 23, 11, 2009));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_71);
        ComplexEventDates_NoComplexEventDates_71.insert(ComplexEventEndDate_71.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_71(FIX::UTCTIMESTAMP(12, 12, 15, 21, 1, 2005));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_71);
        ComplexEventDates_NoComplexEventDates_71.insert(ComplexEventStartDate_71.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_71);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_138;
          FIX::ComplexEventEndTime ComplexEventEndTime_138(FIX::UTCTIMEONLY(11, 27, 38));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_138);
          ComplexEventTimes_NoComplexEventTimes_138.insert(ComplexEventEndTime_138.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_138(FIX::UTCTIMEONLY(16, 52, 5));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_138);
          ComplexEventTimes_NoComplexEventTimes_138.insert(ComplexEventStartTime_138.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_138);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_139;
          FIX::ComplexEventEndTime ComplexEventEndTime_139(FIX::UTCTIMEONLY(19, 59, 53));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_139);
          ComplexEventTimes_NoComplexEventTimes_139.insert(ComplexEventEndTime_139.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_139(FIX::UTCTIMEONLY(2, 26, 41));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_139);
          ComplexEventTimes_NoComplexEventTimes_139.insert(ComplexEventStartTime_139.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_139);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_140;
          FIX::ComplexEventEndTime ComplexEventEndTime_140(FIX::UTCTIMEONLY(9, 47, 27));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_140);
          ComplexEventTimes_NoComplexEventTimes_140.insert(ComplexEventEndTime_140.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_140(FIX::UTCTIMEONLY(2, 54, 55));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_140);
          ComplexEventTimes_NoComplexEventTimes_140.insert(ComplexEventStartTime_140.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_140);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_72;
        FIX::ComplexEventEndDate ComplexEventEndDate_72(FIX::UTCTIMESTAMP(22, 10, 31, 27, 2, 2016));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_72);
        ComplexEventDates_NoComplexEventDates_72.insert(ComplexEventEndDate_72.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_72(FIX::UTCTIMESTAMP(16, 55, 33, 0, 4, 2000));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_72);
        ComplexEventDates_NoComplexEventDates_72.insert(ComplexEventStartDate_72.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_72);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_141;
          FIX::ComplexEventEndTime ComplexEventEndTime_141(FIX::UTCTIMEONLY(13, 17, 52));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_141);
          ComplexEventTimes_NoComplexEventTimes_141.insert(ComplexEventEndTime_141.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_141(FIX::UTCTIMEONLY(23, 18, 51));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_141);
          ComplexEventTimes_NoComplexEventTimes_141.insert(ComplexEventStartTime_141.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_141);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_142;
          FIX::ComplexEventEndTime ComplexEventEndTime_142(FIX::UTCTIMEONLY(4, 39, 24));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_142);
          ComplexEventTimes_NoComplexEventTimes_142.insert(ComplexEventEndTime_142.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_142(FIX::UTCTIMEONLY(21, 19, 12));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_142);
          ComplexEventTimes_NoComplexEventTimes_142.insert(ComplexEventStartTime_142.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_142);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_143;
          FIX::ComplexEventEndTime ComplexEventEndTime_143(FIX::UTCTIMEONLY(21, 14, 39));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_143);
          ComplexEventTimes_NoComplexEventTimes_143.insert(ComplexEventEndTime_143.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_143(FIX::UTCTIMEONLY(7, 7, 39));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_143);
          ComplexEventTimes_NoComplexEventTimes_143.insert(ComplexEventStartTime_143.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_143);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_73;
        FIX::ComplexEventEndDate ComplexEventEndDate_73(FIX::UTCTIMESTAMP(6, 5, 44, 21, 12, 2011));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_73);
        ComplexEventDates_NoComplexEventDates_73.insert(ComplexEventEndDate_73.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_73(FIX::UTCTIMESTAMP(4, 10, 12, 18, 3, 2011));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_73);
        ComplexEventDates_NoComplexEventDates_73.insert(ComplexEventStartDate_73.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_73);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_144;
          FIX::ComplexEventEndTime ComplexEventEndTime_144(FIX::UTCTIMEONLY(19, 49, 47));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_144);
          ComplexEventTimes_NoComplexEventTimes_144.insert(ComplexEventEndTime_144.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_144(FIX::UTCTIMEONLY(22, 58, 28));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_144);
          ComplexEventTimes_NoComplexEventTimes_144.insert(ComplexEventStartTime_144.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_144);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_38;
      FIX::ComplexEventCondition ComplexEventCondition_38(2);
      noComplexEvents_1_1_1.set(ComplexEventCondition_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventCondition_38.getString());
      FIX::ComplexEventPrice ComplexEventPrice_38;
      ComplexEventPrice_38.setString("18112104");
      noComplexEvents_1_1_1.set(ComplexEventPrice_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPrice_38.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_38(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceBoundaryMethod_38.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_38;
      ComplexEventPriceBoundaryPrecision_38.setString("74.200000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceBoundaryPrecision_38.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_38(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceTimeType_38.getString());
      FIX::ComplexEventType ComplexEventType_38(2);
      noComplexEvents_1_1_1.set(ComplexEventType_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventType_38.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_38;
      ComplexOptPayoutAmount_38.setString("16608269");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexOptPayoutAmount_38.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_38);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_74;
        FIX::ComplexEventEndDate ComplexEventEndDate_74(FIX::UTCTIMESTAMP(9, 29, 5, 6, 9, 2017));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_74);
        ComplexEventDates_NoComplexEventDates_74.insert(ComplexEventEndDate_74.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_74(FIX::UTCTIMESTAMP(16, 1, 59, 11, 4, 2002));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_74);
        ComplexEventDates_NoComplexEventDates_74.insert(ComplexEventStartDate_74.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_74);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_145;
          FIX::ComplexEventEndTime ComplexEventEndTime_145(FIX::UTCTIMEONLY(9, 26, 22));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_145);
          ComplexEventTimes_NoComplexEventTimes_145.insert(ComplexEventEndTime_145.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_145(FIX::UTCTIMEONLY(0, 12, 13));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_145);
          ComplexEventTimes_NoComplexEventTimes_145.insert(ComplexEventStartTime_145.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_145);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_146;
          FIX::ComplexEventEndTime ComplexEventEndTime_146(FIX::UTCTIMEONLY(8, 47, 54));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_146);
          ComplexEventTimes_NoComplexEventTimes_146.insert(ComplexEventEndTime_146.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_146(FIX::UTCTIMEONLY(4, 21, 13));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_146);
          ComplexEventTimes_NoComplexEventTimes_146.insert(ComplexEventStartTime_146.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_146);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_39;
      FIX::ComplexEventCondition ComplexEventCondition_39(1);
      noComplexEvents_1_1_2.set(ComplexEventCondition_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventCondition_39.getString());
      FIX::ComplexEventPrice ComplexEventPrice_39;
      ComplexEventPrice_39.setString("18010400");
      noComplexEvents_1_1_2.set(ComplexEventPrice_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPrice_39.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_39(5);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceBoundaryMethod_39.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_39;
      ComplexEventPriceBoundaryPrecision_39.setString("56.470000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceBoundaryPrecision_39.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_39(2);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceTimeType_39.getString());
      FIX::ComplexEventType ComplexEventType_39(1);
      noComplexEvents_1_1_2.set(ComplexEventType_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventType_39.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_39;
      ComplexOptPayoutAmount_39.setString("9500901");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexOptPayoutAmount_39.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_39);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_75;
        FIX::ComplexEventEndDate ComplexEventEndDate_75(FIX::UTCTIMESTAMP(4, 47, 29, 23, 2, 2010));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_75);
        ComplexEventDates_NoComplexEventDates_75.insert(ComplexEventEndDate_75.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_75(FIX::UTCTIMESTAMP(2, 24, 52, 7, 5, 2016));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_75);
        ComplexEventDates_NoComplexEventDates_75.insert(ComplexEventStartDate_75.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_75);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_147;
          FIX::ComplexEventEndTime ComplexEventEndTime_147(FIX::UTCTIMEONLY(5, 43, 44));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_147);
          ComplexEventTimes_NoComplexEventTimes_147.insert(ComplexEventEndTime_147.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_147(FIX::UTCTIMEONLY(11, 5, 19));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_147);
          ComplexEventTimes_NoComplexEventTimes_147.insert(ComplexEventStartTime_147.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_147);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_148;
          FIX::ComplexEventEndTime ComplexEventEndTime_148(FIX::UTCTIMEONLY(8, 53, 17));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventEndTime_148);
          ComplexEventTimes_NoComplexEventTimes_148.insert(ComplexEventEndTime_148.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_148(FIX::UTCTIMEONLY(15, 43, 14));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventStartTime_148);
          ComplexEventTimes_NoComplexEventTimes_148.insert(ComplexEventStartTime_148.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_148);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_40;
      FIX::EventDate EventDate_40("LOCALMKTDATE_146597463");
      noEvents_1_1_0.set(EventDate_40);
      EvntGrp_NoEvents_40.insert(EventDate_40.getString());
      FIX::EventPx EventPx_40;
      EventPx_40.setString("7969755");
      noEvents_1_1_0.set(EventPx_40);
      EvntGrp_NoEvents_40.insert(EventPx_40.getString());
      FIX::EventText EventText_40("STRING_1852034015");
      noEvents_1_1_0.set(EventText_40);
      EvntGrp_NoEvents_40.insert(EventText_40.getString());
      FIX::EventTime EventTime_40(FIX::UTCTIMESTAMP(10, 33, 21, 24, 3, 2005));
      noEvents_1_1_0.set(EventTime_40);
      EvntGrp_NoEvents_40.insert(EventTime_40.getString());
      FIX::EventType EventType_40(12);
      noEvents_1_1_0.set(EventType_40);
      EvntGrp_NoEvents_40.insert(EventType_40.getString());
      all_values.push_back(EvntGrp_NoEvents_40);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_41;
      FIX::EventDate EventDate_41("LOCALMKTDATE_629427906");
      noEvents_1_1_1.set(EventDate_41);
      EvntGrp_NoEvents_41.insert(EventDate_41.getString());
      FIX::EventPx EventPx_41;
      EventPx_41.setString("10362470");
      noEvents_1_1_1.set(EventPx_41);
      EvntGrp_NoEvents_41.insert(EventPx_41.getString());
      FIX::EventText EventText_41("STRING_416690147");
      noEvents_1_1_1.set(EventText_41);
      EvntGrp_NoEvents_41.insert(EventText_41.getString());
      FIX::EventTime EventTime_41(FIX::UTCTIMESTAMP(22, 30, 40, 12, 6, 2014));
      noEvents_1_1_1.set(EventTime_41);
      EvntGrp_NoEvents_41.insert(EventTime_41.getString());
      FIX::EventType EventType_41(16);
      noEvents_1_1_1.set(EventType_41);
      EvntGrp_NoEvents_41.insert(EventType_41.getString());
      all_values.push_back(EvntGrp_NoEvents_41);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_48;
      FIX::InstrumentPartyID InstrumentPartyID_48("STRING_1965051730");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_48);
      InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyID_48.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_48('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_48);
      InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyIDSource_48.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_48(1230574392);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_48);
      InstrumentParties_NoInstrumentParties_48.insert(InstrumentPartyRole_48.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_48);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101;
        FIX::InstrumentPartySubID InstrumentPartySubID_101("STRING_1815144631");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_101);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101.insert(InstrumentPartySubID_101.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_101(347225387);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_101);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101.insert(InstrumentPartySubIDType_101.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102;
        FIX::InstrumentPartySubID InstrumentPartySubID_102("STRING_1056518202");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_102);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102.insert(InstrumentPartySubID_102.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_102(1700645677);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_102);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102.insert(InstrumentPartySubIDType_102.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_49;
      FIX::InstrumentPartyID InstrumentPartyID_49("STRING_493822851");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_49);
      InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyID_49.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_49('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_49);
      InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyIDSource_49.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_49(1405196044);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_49);
      InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyRole_49.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_49);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103;
        FIX::InstrumentPartySubID InstrumentPartySubID_103("STRING_418289413");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_103);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103.insert(InstrumentPartySubID_103.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_103(1274982749);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_103);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103.insert(InstrumentPartySubIDType_103.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_47;
      FIX::SecurityAltID SecurityAltID_47("STRING_1589996113");
      noSecurityAltID_1_1_0.set(SecurityAltID_47);
      SecAltIDGrp_NoSecurityAltID_47.insert(SecurityAltID_47.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_47("STRING_1841871139");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_47);
      SecAltIDGrp_NoSecurityAltID_47.insert(SecurityAltIDSource_47.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_47);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_48;
      FIX::SecurityAltID SecurityAltID_48("STRING_1457891820");
      noSecurityAltID_1_1_1.set(SecurityAltID_48);
      SecAltIDGrp_NoSecurityAltID_48.insert(SecurityAltID_48.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_48("STRING_457460456");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_48);
      SecAltIDGrp_NoSecurityAltID_48.insert(SecurityAltIDSource_48.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_48);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_44;
    FIX::SecurityXML SecurityXML_45("XMLDATA_323815398");
    noRelatedSym_0_1.set(SecurityXML_45);
    FIX::SecurityXMLLen SecurityXMLLen_22(346655213);
    noRelatedSym_0_1.set(SecurityXMLLen_22);
    FIX::SecurityXMLSchema SecurityXMLSchema_22("STRING_874150603");
    noRelatedSym_0_1.set(SecurityXMLSchema_22);
    SecurityXML_44.insert(SecurityXMLSchema_22.getString());
    all_values.push_back(SecurityXML_44);

    // InstrumentExtension
    multiset<string> InstrumentExtension_8;
    FIX::DeliveryForm DeliveryForm_8(1);
    noRelatedSym_0_1.set(DeliveryForm_8);
    InstrumentExtension_8.insert(DeliveryForm_8.getString());
    FIX::PctAtRisk PctAtRisk_8;
    PctAtRisk_8.setString("6.840000");
    noRelatedSym_0_1.set(PctAtRisk_8);
    InstrumentExtension_8.insert(PctAtRisk_8.getString());
    all_values.push_back(InstrumentExtension_8);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_18;
      FIX::InstrAttribType InstrAttribType_18(26);
      noInstrAttrib_1_1_0.set(InstrAttribType_18);
      AttrbGrp_NoInstrAttrib_18.insert(InstrAttribType_18.getString());
      FIX::InstrAttribValue InstrAttribValue_18("STRING_1845957980");
      noInstrAttrib_1_1_0.set(InstrAttribValue_18);
      AttrbGrp_NoInstrAttrib_18.insert(InstrAttribValue_18.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_18);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_19;
      FIX::InstrAttribType InstrAttribType_19(12);
      noInstrAttrib_1_1_1.set(InstrAttribType_19);
      AttrbGrp_NoInstrAttrib_19.insert(InstrAttribType_19.getString());
      FIX::InstrAttribValue InstrAttribValue_19("STRING_1539655893");
      noInstrAttrib_1_1_1.set(InstrAttribValue_19);
      AttrbGrp_NoInstrAttrib_19.insert(InstrAttribValue_19.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_19);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_4;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_4;
    SecondaryHighLimitPrice_4.setString("9781839");
    noRelatedSym_0_1.set(SecondaryHighLimitPrice_4);
    SecondaryPriceLimits_4.insert(SecondaryHighLimitPrice_4.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_4;
    SecondaryLowLimitPrice_4.setString("18457710");
    noRelatedSym_0_1.set(SecondaryLowLimitPrice_4);
    SecondaryPriceLimits_4.insert(SecondaryLowLimitPrice_4.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_4(1357223975);
    noRelatedSym_0_1.set(SecondaryPriceLimitType_4);
    SecondaryPriceLimits_4.insert(SecondaryPriceLimitType_4.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_4;
    SecondaryTradingReferencePrice_4.setString("6168541");
    noRelatedSym_0_1.set(SecondaryTradingReferencePrice_4);
    SecondaryPriceLimits_4.insert(SecondaryTradingReferencePrice_4.getString());
    all_values.push_back(SecondaryPriceLimits_4);

    msg.addGroup(noRelatedSym_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_35;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_35("DATA_928861810");
  msg.set(EncodedUnderlyingIssuer_35);
  UnderlyingInstrument_35.insert(EncodedUnderlyingIssuer_35.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_35(1502520964);
  msg.set(EncodedUnderlyingIssuerLen_35);
  UnderlyingInstrument_35.insert(EncodedUnderlyingIssuerLen_35.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_35("DATA_284515172");
  msg.set(EncodedUnderlyingSecurityDesc_35);
  UnderlyingInstrument_35.insert(EncodedUnderlyingSecurityDesc_35.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_35(1276087197);
  msg.set(EncodedUnderlyingSecurityDescLen_35);
  UnderlyingInstrument_35.insert(EncodedUnderlyingSecurityDescLen_35.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_35;
  UnderlyingAdjustedQuantity_35.setString("4115555");
  msg.set(UnderlyingAdjustedQuantity_35);
  UnderlyingInstrument_35.insert(UnderlyingAdjustedQuantity_35.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_35;
  UnderlyingAllocationPercent_35.setString("8.490000");
  msg.set(UnderlyingAllocationPercent_35);
  UnderlyingInstrument_35.insert(UnderlyingAllocationPercent_35.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_35;
  UnderlyingAttachmentPoint_35.setString("0.480000");
  msg.set(UnderlyingAttachmentPoint_35);
  UnderlyingInstrument_35.insert(UnderlyingAttachmentPoint_35.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_35("STRING_117565626");
  msg.set(UnderlyingCFICode_35);
  UnderlyingInstrument_35.insert(UnderlyingCFICode_35.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_35("STRING_1242873245");
  msg.set(UnderlyingCPProgram_35);
  UnderlyingInstrument_35.insert(UnderlyingCPProgram_35.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_35("STRING_515088742");
  msg.set(UnderlyingCPRegType_35);
  UnderlyingInstrument_35.insert(UnderlyingCPRegType_35.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_35;
  UnderlyingCapValue_35.setString("5358550");
  msg.set(UnderlyingCapValue_35);
  UnderlyingInstrument_35.insert(UnderlyingCapValue_35.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_35;
  UnderlyingCashAmount_35.setString("3703723");
  msg.set(UnderlyingCashAmount_35);
  UnderlyingInstrument_35.insert(UnderlyingCashAmount_35.getString());
  FIX::UnderlyingCashType UnderlyingCashType_35("STRING_DIFF");
  msg.set(UnderlyingCashType_35);
  UnderlyingInstrument_35.insert(UnderlyingCashType_35.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_35;
  UnderlyingContractMultiplier_35.setString("21258511");
  msg.set(UnderlyingContractMultiplier_35);
  UnderlyingInstrument_35.insert(UnderlyingContractMultiplier_35.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_35(64759838);
  msg.set(UnderlyingContractMultiplierUnit_35);
  UnderlyingInstrument_35.insert(UnderlyingContractMultiplierUnit_35.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_35("COUNTRY_70059849");
  msg.set(UnderlyingCountryOfIssue_35);
  UnderlyingInstrument_35.insert(UnderlyingCountryOfIssue_35.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_35("LOCALMKTDATE_435827961");
  msg.set(UnderlyingCouponPaymentDate_35);
  UnderlyingInstrument_35.insert(UnderlyingCouponPaymentDate_35.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_35;
  UnderlyingCouponRate_35.setString("52.360000");
  msg.set(UnderlyingCouponRate_35);
  UnderlyingInstrument_35.insert(UnderlyingCouponRate_35.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_35("STRING_416715063");
  msg.set(UnderlyingCreditRating_35);
  UnderlyingInstrument_35.insert(UnderlyingCreditRating_35.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_35("JPY");
  msg.set(UnderlyingCurrency_35);
  UnderlyingInstrument_35.insert(UnderlyingCurrency_35.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_35;
  UnderlyingCurrentValue_35.setString("13952357");
  msg.set(UnderlyingCurrentValue_35);
  UnderlyingInstrument_35.insert(UnderlyingCurrentValue_35.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_35;
  UnderlyingDetachmentPoint_35.setString("85.700000");
  msg.set(UnderlyingDetachmentPoint_35);
  UnderlyingInstrument_35.insert(UnderlyingDetachmentPoint_35.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_35;
  UnderlyingDirtyPrice_35.setString("2018949");
  msg.set(UnderlyingDirtyPrice_35);
  UnderlyingInstrument_35.insert(UnderlyingDirtyPrice_35.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_35;
  UnderlyingEndPrice_35.setString("10937100");
  msg.set(UnderlyingEndPrice_35);
  UnderlyingInstrument_35.insert(UnderlyingEndPrice_35.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_35;
  UnderlyingEndValue_35.setString("16979297");
  msg.set(UnderlyingEndValue_35);
  UnderlyingInstrument_35.insert(UnderlyingEndValue_35.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_35(1741550850);
  msg.set(UnderlyingExerciseStyle_35);
  UnderlyingInstrument_35.insert(UnderlyingExerciseStyle_35.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_35;
  UnderlyingFXRate_35.setString("20718940");
  msg.set(UnderlyingFXRate_35);
  UnderlyingInstrument_35.insert(UnderlyingFXRate_35.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_35('M');
  msg.set(UnderlyingFXRateCalc_35);
  UnderlyingInstrument_35.insert(UnderlyingFXRateCalc_35.getString());
  FIX::UnderlyingFactor UnderlyingFactor_35;
  UnderlyingFactor_35.setString("9512911");
  msg.set(UnderlyingFactor_35);
  UnderlyingInstrument_35.insert(UnderlyingFactor_35.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_35(541264568);
  msg.set(UnderlyingFlowScheduleType_35);
  UnderlyingInstrument_35.insert(UnderlyingFlowScheduleType_35.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_35("STRING_177595281");
  msg.set(UnderlyingInstrRegistry_35);
  UnderlyingInstrument_35.insert(UnderlyingInstrRegistry_35.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_35("LOCALMKTDATE_306328494");
  msg.set(UnderlyingIssueDate_35);
  UnderlyingInstrument_35.insert(UnderlyingIssueDate_35.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_35("STRING_825779740");
  msg.set(UnderlyingIssuer_35);
  UnderlyingInstrument_35.insert(UnderlyingIssuer_35.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_35("STRING_1453682479");
  msg.set(UnderlyingLocaleOfIssue_35);
  UnderlyingInstrument_35.insert(UnderlyingLocaleOfIssue_35.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_35("LOCALMKTDATE_717884012");
  msg.set(UnderlyingMaturityDate_35);
  UnderlyingInstrument_35.insert(UnderlyingMaturityDate_35.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_35("MONTHYEAR_663456941");
  msg.set(UnderlyingMaturityMonthYear_35);
  UnderlyingInstrument_35.insert(UnderlyingMaturityMonthYear_35.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_35("TZTIMEONLY_1076108879");
  msg.set(UnderlyingMaturityTime_35);
  UnderlyingInstrument_35.insert(UnderlyingMaturityTime_35.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_35;
  UnderlyingNotionalPercentageOutstanding_35.setString("96.380000");
  msg.set(UnderlyingNotionalPercentageOutstanding_35);
  UnderlyingInstrument_35.insert(UnderlyingNotionalPercentageOutstanding_35.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_35('1');
  msg.set(UnderlyingOptAttribute_35);
  UnderlyingInstrument_35.insert(UnderlyingOptAttribute_35.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_35;
  UnderlyingOriginalNotionalPercentageOutstanding_35.setString("76.220000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_35);
  UnderlyingInstrument_35.insert(UnderlyingOriginalNotionalPercentageOutstanding_35.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_35("STRING_1371304678");
  msg.set(UnderlyingPriceUnitOfMeasure_35);
  UnderlyingInstrument_35.insert(UnderlyingPriceUnitOfMeasure_35.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_35;
  UnderlyingPriceUnitOfMeasureQty_35.setString("1292188");
  msg.set(UnderlyingPriceUnitOfMeasureQty_35);
  UnderlyingInstrument_35.insert(UnderlyingPriceUnitOfMeasureQty_35.getString());
  FIX::UnderlyingProduct UnderlyingProduct_35(203365651);
  msg.set(UnderlyingProduct_35);
  UnderlyingInstrument_35.insert(UnderlyingProduct_35.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_35(1349672183);
  msg.set(UnderlyingPutOrCall_35);
  UnderlyingInstrument_35.insert(UnderlyingPutOrCall_35.getString());
  FIX::UnderlyingPx UnderlyingPx_35;
  UnderlyingPx_35.setString("1939787");
  msg.set(UnderlyingPx_35);
  UnderlyingInstrument_35.insert(UnderlyingPx_35.getString());
  FIX::UnderlyingQty UnderlyingQty_35;
  UnderlyingQty_35.setString("2734255");
  msg.set(UnderlyingQty_35);
  UnderlyingInstrument_35.insert(UnderlyingQty_35.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_35("LOCALMKTDATE_1785500144");
  msg.set(UnderlyingRedemptionDate_35);
  UnderlyingInstrument_35.insert(UnderlyingRedemptionDate_35.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_35("STRING_582553958");
  msg.set(UnderlyingRepoCollateralSecurityType_35);
  UnderlyingInstrument_35.insert(UnderlyingRepoCollateralSecurityType_35.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_35;
  UnderlyingRepurchaseRate_35.setString("5.640000");
  msg.set(UnderlyingRepurchaseRate_35);
  UnderlyingInstrument_35.insert(UnderlyingRepurchaseRate_35.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_35(947995061);
  msg.set(UnderlyingRepurchaseTerm_35);
  UnderlyingInstrument_35.insert(UnderlyingRepurchaseTerm_35.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_35("STRING_1712906689");
  msg.set(UnderlyingRestructuringType_35);
  UnderlyingInstrument_35.insert(UnderlyingRestructuringType_35.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_35("STRING_2085376311");
  msg.set(UnderlyingSecurityDesc_35);
  UnderlyingInstrument_35.insert(UnderlyingSecurityDesc_35.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_35("EXCHANGE_1716683632");
  msg.set(UnderlyingSecurityExchange_35);
  UnderlyingInstrument_35.insert(UnderlyingSecurityExchange_35.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_35("STRING_1914801646");
  msg.set(UnderlyingSecurityID_35);
  UnderlyingInstrument_35.insert(UnderlyingSecurityID_35.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_35("STRING_1031602742");
  msg.set(UnderlyingSecurityIDSource_35);
  UnderlyingInstrument_35.insert(UnderlyingSecurityIDSource_35.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_35("STRING_1267129685");
  msg.set(UnderlyingSecuritySubType_35);
  UnderlyingInstrument_35.insert(UnderlyingSecuritySubType_35.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_35("STRING_1508868849");
  msg.set(UnderlyingSecurityType_35);
  UnderlyingInstrument_35.insert(UnderlyingSecurityType_35.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_35("STRING_956013122");
  msg.set(UnderlyingSeniority_35);
  UnderlyingInstrument_35.insert(UnderlyingSeniority_35.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_35("STRING_515863157");
  msg.set(UnderlyingSettlMethod_35);
  UnderlyingInstrument_35.insert(UnderlyingSettlMethod_35.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_35(5);
  msg.set(UnderlyingSettlementType_35);
  UnderlyingInstrument_35.insert(UnderlyingSettlementType_35.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_35;
  UnderlyingStartValue_35.setString("14972776");
  msg.set(UnderlyingStartValue_35);
  UnderlyingInstrument_35.insert(UnderlyingStartValue_35.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_35("STRING_693458438");
  msg.set(UnderlyingStateOrProvinceOfIssue_35);
  UnderlyingInstrument_35.insert(UnderlyingStateOrProvinceOfIssue_35.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_35("USD");
  msg.set(UnderlyingStrikeCurrency_35);
  UnderlyingInstrument_35.insert(UnderlyingStrikeCurrency_35.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_35;
  UnderlyingStrikePrice_35.setString("21471409");
  msg.set(UnderlyingStrikePrice_35);
  UnderlyingInstrument_35.insert(UnderlyingStrikePrice_35.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_35("STRING_1336888885");
  msg.set(UnderlyingSymbol_35);
  UnderlyingInstrument_35.insert(UnderlyingSymbol_35.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_35("STRING_839030723");
  msg.set(UnderlyingSymbolSfx_35);
  UnderlyingInstrument_35.insert(UnderlyingSymbolSfx_35.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_35("STRING_1075766149");
  msg.set(UnderlyingTimeUnit_35);
  UnderlyingInstrument_35.insert(UnderlyingTimeUnit_35.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_35("STRING_24854876");
  msg.set(UnderlyingUnitOfMeasure_35);
  UnderlyingInstrument_35.insert(UnderlyingUnitOfMeasure_35.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_35;
  UnderlyingUnitOfMeasureQty_35.setString("5978772");
  msg.set(UnderlyingUnitOfMeasureQty_35);
  UnderlyingInstrument_35.insert(UnderlyingUnitOfMeasureQty_35.getString());
  all_values.push_back(UnderlyingInstrument_35);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_73;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_73("STRING_1396159554");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_73);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_73.insert(UnderlyingSecurityAltID_73.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_73("STRING_727096145");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_73);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_73.insert(UnderlyingSecurityAltIDSource_73.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_73);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_63;
    FIX::UnderlyingStipType UnderlyingStipType_63("STRING_598348089");
    noUnderlyingStips_0_0.set(UnderlyingStipType_63);
    UnderlyingStipulations_NoUnderlyingStips_63.insert(UnderlyingStipType_63.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_63("STRING_921074868");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_63);
    UnderlyingStipulations_NoUnderlyingStips_63.insert(UnderlyingStipValue_63.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_63);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_64;
    FIX::UnderlyingStipType UnderlyingStipType_64("STRING_996271275");
    noUnderlyingStips_0_1.set(UnderlyingStipType_64);
    UnderlyingStipulations_NoUnderlyingStips_64.insert(UnderlyingStipType_64.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_64("STRING_236364585");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_64);
    UnderlyingStipulations_NoUnderlyingStips_64.insert(UnderlyingStipValue_64.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_64);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_72;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_72("STRING_1686411839");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_72);
    UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyID_72.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_72('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_72);
    UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyIDSource_72.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_72(1069051867);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_72);
    UndlyInstrumentParties_NoUndlyInstrumentParties_72.insert(UnderlyingInstrumentPartyRole_72.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_72);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_144("STRING_753559631");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_144);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144.insert(UnderlyingInstrumentPartySubID_144.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_144(836369866);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_144);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144.insert(UnderlyingInstrumentPartySubIDType_144.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_73;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_73("STRING_508423597");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_73);
    UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyID_73.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_73('2');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_73);
    UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyIDSource_73.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_73(197755067);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_73);
    UndlyInstrumentParties_NoUndlyInstrumentParties_73.insert(UnderlyingInstrumentPartyRole_73.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_73);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_145("STRING_389068825");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_145);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145.insert(UnderlyingInstrumentPartySubID_145.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_145(510431446);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_145);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145.insert(UnderlyingInstrumentPartySubIDType_145.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_74;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_74("STRING_814230761");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_74);
    UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyID_74.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_74('1');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_74);
    UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyIDSource_74.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_74(1129436319);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_74);
    UndlyInstrumentParties_NoUndlyInstrumentParties_74.insert(UnderlyingInstrumentPartyRole_74.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_74);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_146("STRING_1082184533");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_146);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146.insert(UnderlyingInstrumentPartySubID_146.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_146(318841556);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_146);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146.insert(UnderlyingInstrumentPartySubIDType_146.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_147("STRING_1828835266");
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubID_147);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147.insert(UnderlyingInstrumentPartySubID_147.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_147(10467034);
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubIDType_147);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147.insert(UnderlyingInstrumentPartySubIDType_147.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_148("STRING_343696432");
      noUndlyInstrumentPartySubIDs_2_1_2.set(UnderlyingInstrumentPartySubID_148);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148.insert(UnderlyingInstrumentPartySubID_148.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_148(279228879);
      noUndlyInstrumentPartySubIDs_2_1_2.set(UnderlyingInstrumentPartySubIDType_148);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148.insert(UnderlyingInstrumentPartySubIDType_148.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_2);
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
