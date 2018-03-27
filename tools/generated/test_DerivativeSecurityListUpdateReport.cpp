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
  FIX::SecurityReqID SecurityReqID_2("STRING_377685920");
  msg.set(SecurityReqID_2);
  DerivativeSecurityListUpdateReport_0.insert(SecurityReqID_2.getString());
  FIX::SecurityRequestResult SecurityRequestResult_1(3);
  msg.set(SecurityRequestResult_1);
  DerivativeSecurityListUpdateReport_0.insert(SecurityRequestResult_1.getString());
  FIX::SecurityResponseID SecurityResponseID_1("STRING_1357386525");
  msg.set(SecurityResponseID_1);
  DerivativeSecurityListUpdateReport_0.insert(SecurityResponseID_1.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_0('M');
  msg.set(SecurityUpdateAction_0);
  DerivativeSecurityListUpdateReport_0.insert(SecurityUpdateAction_0.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_2(360712690);
  msg.set(TotNoRelatedSym_2);
  DerivativeSecurityListUpdateReport_0.insert(TotNoRelatedSym_2.getString());
  FIX::TransactTime TransactTime_17(FIX::UTCTIMESTAMP(7, 32, 24, 24, 122008));
  msg.set(TransactTime_17);
  DerivativeSecurityListUpdateReport_0.insert(TransactTime_17.getString());
  all_values.push_back(DerivativeSecurityListUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_3;
  FIX::ApplID ApplID_3("STRING_1521634805");
  msg.set(ApplID_3);
  ApplicationSequenceControl_3.insert(ApplID_3.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_3(1311722124);
  msg.set(ApplLastSeqNum_3);
  ApplicationSequenceControl_3.insert(ApplLastSeqNum_3.getString());
  FIX::ApplResendFlag ApplResendFlag_3(true);
  msg.set(ApplResendFlag_3);
  ApplicationSequenceControl_3.insert(ApplResendFlag_3.getString());
  FIX::ApplSeqNum ApplSeqNum_3(1235058252);
  msg.set(ApplSeqNum_3);
  ApplicationSequenceControl_3.insert(ApplSeqNum_3.getString());
  all_values.push_back(ApplicationSequenceControl_3);

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_2;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_2(false);
  msg.set(DerivFlexProductEligibilityIndicator_2);
  DerivativeInstrument_2.insert(DerivFlexProductEligibilityIndicator_2.getString());
  FIX::DerivativeCFICode DerivativeCFICode_2("STRING_728438231");
  msg.set(DerivativeCFICode_2);
  DerivativeInstrument_2.insert(DerivativeCFICode_2.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_2;
  DerivativeCapPrice_2.setString("20036302");
  msg.set(DerivativeCapPrice_2);
  DerivativeInstrument_2.insert(DerivativeCapPrice_2.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_2;
  DerivativeContractMultiplier_2.setString("20710861");
  msg.set(DerivativeContractMultiplier_2);
  DerivativeInstrument_2.insert(DerivativeContractMultiplier_2.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_2(821572897);
  msg.set(DerivativeContractMultiplierUnit_2);
  DerivativeInstrument_2.insert(DerivativeContractMultiplierUnit_2.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_2("MONTHYEAR_697713952");
  msg.set(DerivativeContractSettlMonth_2);
  DerivativeInstrument_2.insert(DerivativeContractSettlMonth_2.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_2("COUNTRY_67276244");
  msg.set(DerivativeCountryOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeCountryOfIssue_2.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_2("DATA_1168369247");
  msg.set(DerivativeEncodedIssuer_2);
  DerivativeInstrument_2.insert(DerivativeEncodedIssuer_2.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_2(659446942);
  msg.set(DerivativeEncodedIssuerLen_2);
  DerivativeInstrument_2.insert(DerivativeEncodedIssuerLen_2.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_2("DATA_3494524");
  msg.set(DerivativeEncodedSecurityDesc_2);
  DerivativeInstrument_2.insert(DerivativeEncodedSecurityDesc_2.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_2(1057211865);
  msg.set(DerivativeEncodedSecurityDescLen_2);
  DerivativeInstrument_2.insert(DerivativeEncodedSecurityDescLen_2.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_2('9');
  msg.set(DerivativeExerciseStyle_2);
  DerivativeInstrument_2.insert(DerivativeExerciseStyle_2.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_2;
  DerivativeFloorPrice_2.setString("3652489");
  msg.set(DerivativeFloorPrice_2);
  DerivativeInstrument_2.insert(DerivativeFloorPrice_2.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_2(1820235072);
  msg.set(DerivativeFlowScheduleType_2);
  DerivativeInstrument_2.insert(DerivativeFlowScheduleType_2.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_2("STRING_2130480923");
  msg.set(DerivativeInstrRegistry_2);
  DerivativeInstrument_2.insert(DerivativeInstrRegistry_2.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_2('7');
  msg.set(DerivativeInstrmtAssignmentMethod_2);
  DerivativeInstrument_2.insert(DerivativeInstrmtAssignmentMethod_2.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_2("LOCALMKTDATE_1503430537");
  msg.set(DerivativeIssueDate_2);
  DerivativeInstrument_2.insert(DerivativeIssueDate_2.getString());
  FIX::DerivativeIssuer DerivativeIssuer_2("STRING_1340383801");
  msg.set(DerivativeIssuer_2);
  DerivativeInstrument_2.insert(DerivativeIssuer_2.getString());
  FIX::DerivativeListMethod DerivativeListMethod_2(1574123465);
  msg.set(DerivativeListMethod_2);
  DerivativeInstrument_2.insert(DerivativeListMethod_2.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_2("STRING_1864143227");
  msg.set(DerivativeLocaleOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeLocaleOfIssue_2.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_2("LOCALMKTDATE_865282633");
  msg.set(DerivativeMaturityDate_2);
  DerivativeInstrument_2.insert(DerivativeMaturityDate_2.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_2("MONTHYEAR_151942288");
  msg.set(DerivativeMaturityMonthYear_2);
  DerivativeInstrument_2.insert(DerivativeMaturityMonthYear_2.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_2("TZTIMEONLY_2086400539");
  msg.set(DerivativeMaturityTime_2);
  DerivativeInstrument_2.insert(DerivativeMaturityTime_2.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_2;
  DerivativeMinPriceIncrement_2.setString("11362437");
  msg.set(DerivativeMinPriceIncrement_2);
  DerivativeInstrument_2.insert(DerivativeMinPriceIncrement_2.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_2;
  DerivativeMinPriceIncrementAmount_2.setString("2691003");
  msg.set(DerivativeMinPriceIncrementAmount_2);
  DerivativeInstrument_2.insert(DerivativeMinPriceIncrementAmount_2.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_2(278321674);
  msg.set(DerivativeNTPositionLimit_2);
  DerivativeInstrument_2.insert(DerivativeNTPositionLimit_2.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_2('1');
  msg.set(DerivativeOptAttribute_2);
  DerivativeInstrument_2.insert(DerivativeOptAttribute_2.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_2;
  DerivativeOptPayAmount_2.setString("17907351");
  msg.set(DerivativeOptPayAmount_2);
  DerivativeInstrument_2.insert(DerivativeOptPayAmount_2.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_2(1590043799);
  msg.set(DerivativePositionLimit_2);
  DerivativeInstrument_2.insert(DerivativePositionLimit_2.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_2("STRING_797493303");
  msg.set(DerivativePriceQuoteMethod_2);
  DerivativeInstrument_2.insert(DerivativePriceQuoteMethod_2.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_2("STRING_878309714");
  msg.set(DerivativePriceUnitOfMeasure_2);
  DerivativeInstrument_2.insert(DerivativePriceUnitOfMeasure_2.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_2;
  DerivativePriceUnitOfMeasureQty_2.setString("15304661");
  msg.set(DerivativePriceUnitOfMeasureQty_2);
  DerivativeInstrument_2.insert(DerivativePriceUnitOfMeasureQty_2.getString());
  FIX::DerivativeProduct DerivativeProduct_2(1525931534);
  msg.set(DerivativeProduct_2);
  DerivativeInstrument_2.insert(DerivativeProduct_2.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_2("STRING_734456347");
  msg.set(DerivativeProductComplex_2);
  DerivativeInstrument_2.insert(DerivativeProductComplex_2.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_2(1454068688);
  msg.set(DerivativePutOrCall_2);
  DerivativeInstrument_2.insert(DerivativePutOrCall_2.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_2("STRING_200020784");
  msg.set(DerivativeSecurityDesc_2);
  DerivativeInstrument_2.insert(DerivativeSecurityDesc_2.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_2("EXCHANGE_1432170299");
  msg.set(DerivativeSecurityExchange_2);
  DerivativeInstrument_2.insert(DerivativeSecurityExchange_2.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_2("STRING_1521344932");
  msg.set(DerivativeSecurityGroup_2);
  DerivativeInstrument_2.insert(DerivativeSecurityGroup_2.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_2("STRING_1368390031");
  msg.set(DerivativeSecurityID_2);
  DerivativeInstrument_2.insert(DerivativeSecurityID_2.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_2("STRING_2091617242");
  msg.set(DerivativeSecurityIDSource_2);
  DerivativeInstrument_2.insert(DerivativeSecurityIDSource_2.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_2("STRING_1524839457");
  msg.set(DerivativeSecurityStatus_2);
  DerivativeInstrument_2.insert(DerivativeSecurityStatus_2.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_2("STRING_278118248");
  msg.set(DerivativeSecuritySubType_2);
  DerivativeInstrument_2.insert(DerivativeSecuritySubType_2.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_2("STRING_35843960");
  msg.set(DerivativeSecurityType_2);
  DerivativeInstrument_2.insert(DerivativeSecurityType_2.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_2('1');
  msg.set(DerivativeSettlMethod_2);
  DerivativeInstrument_2.insert(DerivativeSettlMethod_2.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_2("STRING_2098353320");
  msg.set(DerivativeSettleOnOpenFlag_2);
  DerivativeInstrument_2.insert(DerivativeSettleOnOpenFlag_2.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_2("STRING_18841235");
  msg.set(DerivativeStateOrProvinceOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeStateOrProvinceOfIssue_2.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_2("EUR");
  msg.set(DerivativeStrikeCurrency_2);
  DerivativeInstrument_2.insert(DerivativeStrikeCurrency_2.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_2;
  DerivativeStrikeMultiplier_2.setString("13592250");
  msg.set(DerivativeStrikeMultiplier_2);
  DerivativeInstrument_2.insert(DerivativeStrikeMultiplier_2.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_2;
  DerivativeStrikePrice_2.setString("20596630");
  msg.set(DerivativeStrikePrice_2);
  DerivativeInstrument_2.insert(DerivativeStrikePrice_2.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_2;
  DerivativeStrikeValue_2.setString("11709597");
  msg.set(DerivativeStrikeValue_2);
  DerivativeInstrument_2.insert(DerivativeStrikeValue_2.getString());
  FIX::DerivativeSymbol DerivativeSymbol_2("STRING_77024021");
  msg.set(DerivativeSymbol_2);
  DerivativeInstrument_2.insert(DerivativeSymbol_2.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_2("STRING_64121658");
  msg.set(DerivativeSymbolSfx_2);
  DerivativeInstrument_2.insert(DerivativeSymbolSfx_2.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_2("STRING_1109876680");
  msg.set(DerivativeTimeUnit_2);
  DerivativeInstrument_2.insert(DerivativeTimeUnit_2.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_2("STRING_1213267759");
  msg.set(DerivativeUnitOfMeasure_2);
  DerivativeInstrument_2.insert(DerivativeUnitOfMeasure_2.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_2;
  DerivativeUnitOfMeasureQty_2.setString("3332219");
  msg.set(DerivativeUnitOfMeasureQty_2);
  DerivativeInstrument_2.insert(DerivativeUnitOfMeasureQty_2.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_2("STRING_1388198355");
  msg.set(DerivativeValuationMethod_2);
  DerivativeInstrument_2.insert(DerivativeValuationMethod_2.getString());
  all_values.push_back(DerivativeInstrument_2);

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_3;
    FIX::DerivativeEventDate DerivativeEventDate_3("LOCALMKTDATE_2123957073");
    noDerivativeEvents_0_0.set(DerivativeEventDate_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventDate_3.getString());
    FIX::DerivativeEventPx DerivativeEventPx_3;
    DerivativeEventPx_3.setString("8307585");
    noDerivativeEvents_0_0.set(DerivativeEventPx_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventPx_3.getString());
    FIX::DerivativeEventText DerivativeEventText_3("STRING_1240585656");
    noDerivativeEvents_0_0.set(DerivativeEventText_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventText_3.getString());
    FIX::DerivativeEventTime DerivativeEventTime_3(FIX::UTCTIMESTAMP(20, 42, 46, 16, 32002));
    noDerivativeEvents_0_0.set(DerivativeEventTime_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventTime_3.getString());
    FIX::DerivativeEventType DerivativeEventType_3(1041670968);
    noDerivativeEvents_0_0.set(DerivativeEventType_3);
    DerivativeEventsGrp_NoDerivativeEvents_3.insert(DerivativeEventType_3.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_3);

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_4;
    FIX::DerivativeEventDate DerivativeEventDate_4("LOCALMKTDATE_39960709");
    noDerivativeEvents_0_1.set(DerivativeEventDate_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventDate_4.getString());
    FIX::DerivativeEventPx DerivativeEventPx_4;
    DerivativeEventPx_4.setString("8180597");
    noDerivativeEvents_0_1.set(DerivativeEventPx_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventPx_4.getString());
    FIX::DerivativeEventText DerivativeEventText_4("STRING_419026777");
    noDerivativeEvents_0_1.set(DerivativeEventText_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventText_4.getString());
    FIX::DerivativeEventTime DerivativeEventTime_4(FIX::UTCTIMESTAMP(12, 18, 10, 19, 112012));
    noDerivativeEvents_0_1.set(DerivativeEventTime_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventTime_4.getString());
    FIX::DerivativeEventType DerivativeEventType_4(84486316);
    noDerivativeEvents_0_1.set(DerivativeEventType_4);
    DerivativeEventsGrp_NoDerivativeEvents_4.insert(DerivativeEventType_4.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_4);

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_5;
    FIX::DerivativeEventDate DerivativeEventDate_5("LOCALMKTDATE_559350420");
    noDerivativeEvents_0_2.set(DerivativeEventDate_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventDate_5.getString());
    FIX::DerivativeEventPx DerivativeEventPx_5;
    DerivativeEventPx_5.setString("7467249");
    noDerivativeEvents_0_2.set(DerivativeEventPx_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventPx_5.getString());
    FIX::DerivativeEventText DerivativeEventText_5("STRING_161510337");
    noDerivativeEvents_0_2.set(DerivativeEventText_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventText_5.getString());
    FIX::DerivativeEventTime DerivativeEventTime_5(FIX::UTCTIMESTAMP(13, 16, 41, 8, 22000));
    noDerivativeEvents_0_2.set(DerivativeEventTime_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventTime_5.getString());
    FIX::DerivativeEventType DerivativeEventType_5(1928074874);
    noDerivativeEvents_0_2.set(DerivativeEventType_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventType_5.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_5);

    msg.addGroup(noDerivativeEvents_0_2);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_4;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_4("STRING_1787950605");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyID_4.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_4("STRING_2141815870");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyIDSource_4.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_4(1530005999);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyRole_4.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_10("STRING_1662141906");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_10);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10.insert(DerivativeInstrumentPartySubID_10.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_10(201576678);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_10);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10.insert(DerivativeInstrumentPartySubIDType_10.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_11("STRING_2103632581");
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubID_11);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11.insert(DerivativeInstrumentPartySubID_11.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_11(556329227);
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubIDType_11);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11.insert(DerivativeInstrumentPartySubIDType_11.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_2;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_12;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_12("STRING_241537387");
      noDerivativeInstrumentPartySubIDs_0_1_2.set(DerivativeInstrumentPartySubID_12);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_12.insert(DerivativeInstrumentPartySubID_12.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_12(774208665);
      noDerivativeInstrumentPartySubIDs_0_1_2.set(DerivativeInstrumentPartySubIDType_12);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_12.insert(DerivativeInstrumentPartySubIDType_12.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_12);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_5;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_5("STRING_975356004");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyID_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyID_5.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_5("STRING_559616345");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyIDSource_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyIDSource_5.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_5(1628112357);
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyRole_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyRole_5.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_13;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_13("STRING_828564976");
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubID_13);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_13.insert(DerivativeInstrumentPartySubID_13.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_13(353373637);
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubIDType_13);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_13.insert(DerivativeInstrumentPartySubIDType_13.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_13);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_2;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_6;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_6("STRING_1784158553");
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyID_6);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_6.insert(DerivativeInstrumentPartyID_6.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_6("STRING_404330168");
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyIDSource_6);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_6.insert(DerivativeInstrumentPartyIDSource_6.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_6(437859953);
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyRole_6);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_6.insert(DerivativeInstrumentPartyRole_6.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_6);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_14;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_14("STRING_1151055149");
      noDerivativeInstrumentPartySubIDs_2_1_0.set(DerivativeInstrumentPartySubID_14);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_14.insert(DerivativeInstrumentPartySubID_14.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_14(599370290);
      noDerivativeInstrumentPartySubIDs_2_1_0.set(DerivativeInstrumentPartySubIDType_14);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_14.insert(DerivativeInstrumentPartySubIDType_14.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_14);

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_2);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_3("STRING_860173162");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_3);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3.insert(DerivativeSecurityAltID_3.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_3("STRING_1974148387");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_3);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3.insert(DerivativeSecurityAltIDSource_3.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3);

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_4;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_5("DATA_1776191444");
  msg.set(DerivativeSecurityXML_5);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_2(1957489531);
  msg.set(DerivativeSecurityXMLLen_2);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_2("STRING_1644535188");
  msg.set(DerivativeSecurityXMLSchema_2);
  DerivativeSecurityXML_4.insert(DerivativeSecurityXMLSchema_2.getString());
  all_values.push_back(DerivativeSecurityXML_4);

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_2(1738080757);
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribType_2);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2.insert(DerivativeInstrAttribType_2.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_2("STRING_408023997");
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
    multiset<string> MarketSegmentGrp_NoMarketSegments_3;
    FIX::MarketID MarketID_4("EXCHANGE_1732412980");
    noMarketSegments_0_0.set(MarketID_4);
    MarketSegmentGrp_NoMarketSegments_3.insert(MarketID_4.getString());
    FIX::MarketSegmentID MarketSegmentID_4("STRING_1938029996");
    noMarketSegments_0_0.set(MarketSegmentID_4);
    MarketSegmentGrp_NoMarketSegments_3.insert(MarketSegmentID_4.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_3);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_3;
    FIX::ExpirationCycle ExpirationCycle_3(0);
    noMarketSegments_0_0.set(ExpirationCycle_3);
    BaseTradingRules_3.insert(ExpirationCycle_3.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_3(2);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_3);
    BaseTradingRules_3.insert(ImpliedMarketIndicator_3.getString());
    FIX::MaxPriceVariation MaxPriceVariation_3;
    MaxPriceVariation_3.setString("21396066");
    noMarketSegments_0_0.set(MaxPriceVariation_3);
    BaseTradingRules_3.insert(MaxPriceVariation_3.getString());
    FIX::MaxTradeVol MaxTradeVol_3;
    MaxTradeVol_3.setString("13881975");
    noMarketSegments_0_0.set(MaxTradeVol_3);
    BaseTradingRules_3.insert(MaxTradeVol_3.getString());
    FIX::MinTradeVol MinTradeVol_3;
    MinTradeVol_3.setString("18034004");
    noMarketSegments_0_0.set(MinTradeVol_3);
    BaseTradingRules_3.insert(MinTradeVol_3.getString());
    FIX::MultilegModel MultilegModel_3(2);
    noMarketSegments_0_0.set(MultilegModel_3);
    BaseTradingRules_3.insert(MultilegModel_3.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_3(1);
    noMarketSegments_0_0.set(MultilegPriceMethod_3);
    BaseTradingRules_3.insert(MultilegPriceMethod_3.getString());
    FIX::PriceType PriceType_14(7);
    noMarketSegments_0_0.set(PriceType_14);
    BaseTradingRules_3.insert(PriceType_14.getString());
    FIX::RoundLot RoundLot_3;
    RoundLot_3.setString("7932767");
    noMarketSegments_0_0.set(RoundLot_3);
    BaseTradingRules_3.insert(RoundLot_3.getString());
    FIX::TradingCurrency TradingCurrency_3("USD");
    noMarketSegments_0_0.set(TradingCurrency_3);
    BaseTradingRules_3.insert(TradingCurrency_3.getString());
    all_values.push_back(BaseTradingRules_3);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_4;
      FIX::LotType LotType_4('1');
      noLotTypeRules_0_1_0.set(LotType_4);
      LotTypeRules_NoLotTypeRules_4.insert(LotType_4.getString());
      FIX::MinLotSize MinLotSize_4;
      MinLotSize_4.setString("14049352");
      noLotTypeRules_0_1_0.set(MinLotSize_4);
      LotTypeRules_NoLotTypeRules_4.insert(MinLotSize_4.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_4);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_5;
      FIX::LotType LotType_5('4');
      noLotTypeRules_0_1_1.set(LotType_5);
      LotTypeRules_NoLotTypeRules_5.insert(LotType_5.getString());
      FIX::MinLotSize MinLotSize_5;
      MinLotSize_5.setString("2867849");
      noLotTypeRules_0_1_1.set(MinLotSize_5);
      LotTypeRules_NoLotTypeRules_5.insert(MinLotSize_5.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_5);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_6;
      FIX::LotType LotType_6('3');
      noLotTypeRules_0_1_2.set(LotType_6);
      LotTypeRules_NoLotTypeRules_6.insert(LotType_6.getString());
      FIX::MinLotSize MinLotSize_6;
      MinLotSize_6.setString("10297434");
      noLotTypeRules_0_1_2.set(MinLotSize_6);
      LotTypeRules_NoLotTypeRules_6.insert(MinLotSize_6.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_6);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_3;
    FIX::HighLimitPrice HighLimitPrice_3;
    HighLimitPrice_3.setString("8861552");
    noMarketSegments_0_0.set(HighLimitPrice_3);
    PriceLimits_3.insert(HighLimitPrice_3.getString());
    FIX::LowLimitPrice LowLimitPrice_3;
    LowLimitPrice_3.setString("2729743");
    noMarketSegments_0_0.set(LowLimitPrice_3);
    PriceLimits_3.insert(LowLimitPrice_3.getString());
    FIX::PriceLimitType PriceLimitType_3(0);
    noMarketSegments_0_0.set(PriceLimitType_3);
    PriceLimits_3.insert(PriceLimitType_3.getString());
    FIX::TradingReferencePrice TradingReferencePrice_3;
    TradingReferencePrice_3.setString("7128199");
    noMarketSegments_0_0.set(TradingReferencePrice_3);
    PriceLimits_3.insert(TradingReferencePrice_3.getString());
    all_values.push_back(PriceLimits_3);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_6;
      FIX::EndTickPriceRange EndTickPriceRange_6;
      EndTickPriceRange_6.setString("16999224");
      noTickRules_0_1_0.set(EndTickPriceRange_6);
      TickRules_NoTickRules_6.insert(EndTickPriceRange_6.getString());
      FIX::StartTickPriceRange StartTickPriceRange_6;
      StartTickPriceRange_6.setString("2098714");
      noTickRules_0_1_0.set(StartTickPriceRange_6);
      TickRules_NoTickRules_6.insert(StartTickPriceRange_6.getString());
      FIX::TickIncrement TickIncrement_6;
      TickIncrement_6.setString("4635573");
      noTickRules_0_1_0.set(TickIncrement_6);
      TickRules_NoTickRules_6.insert(TickIncrement_6.getString());
      FIX::TickRuleType TickRuleType_6(4);
      noTickRules_0_1_0.set(TickRuleType_6);
      TickRules_NoTickRules_6.insert(TickRuleType_6.getString());
      all_values.push_back(TickRules_NoTickRules_6);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_9;
      FIX::NestedInstrAttribType NestedInstrAttribType_9(665899586);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_9);
      NestedInstrumentAttribute_NoNestedInstrAttrib_9.insert(NestedInstrAttribType_9.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_9("STRING_875448891");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_9);
      NestedInstrumentAttribute_NoNestedInstrAttrib_9.insert(NestedInstrAttribValue_9.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_9);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_10;
      FIX::NestedInstrAttribType NestedInstrAttribType_10(408441828);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_10);
      NestedInstrumentAttribute_NoNestedInstrAttrib_10.insert(NestedInstrAttribType_10.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_10("STRING_2097948249");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_10);
      NestedInstrumentAttribute_NoNestedInstrAttrib_10.insert(NestedInstrAttribValue_10.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_10);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_11;
      FIX::NestedInstrAttribType NestedInstrAttribType_11(2122520130);
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribType_11);
      NestedInstrumentAttribute_NoNestedInstrAttrib_11.insert(NestedInstrAttribType_11.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_11("STRING_400564854");
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribValue_11);
      NestedInstrumentAttribute_NoNestedInstrAttrib_11.insert(NestedInstrAttribValue_11.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_11);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_8;
      FIX::TradingSessionID TradingSessionID_22("STRING_6");
      noTradingSessionRules_0_1_0.set(TradingSessionID_22);
      TradingSessionRulesGrp_NoTradingSessionRules_8.insert(TradingSessionID_22.getString());
      FIX::TradingSessionSubID TradingSessionSubID_22("STRING_6");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_22);
      TradingSessionRulesGrp_NoTradingSessionRules_8.insert(TradingSessionSubID_22.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_8);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_16;
        FIX::ExecInstValue ExecInstValue_16('2');
        noExecInstRules_0_0_2_0.set(ExecInstValue_16);
        ExecInstRules_NoExecInstRules_16.insert(ExecInstValue_16.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_16);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_17;
        FIX::ExecInstValue ExecInstValue_17('1');
        noExecInstRules_0_0_2_1.set(ExecInstValue_17);
        ExecInstRules_NoExecInstRules_17.insert(ExecInstValue_17.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_17);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_18;
        FIX::ExecInstValue ExecInstValue_18('8');
        noExecInstRules_0_0_2_2.set(ExecInstValue_18);
        ExecInstRules_NoExecInstRules_18.insert(ExecInstValue_18.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_18);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
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
        FIX::MDFeedType MDFeedType_12("STRING_698061093");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_12);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MDFeedType_12.getString());
        FIX::MarketDepth MarketDepth_12(1287938027);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_12);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MarketDepth_12.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_12);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_13;
        FIX::MDBookType MDBookType_13(2);
        noMDFeedTypes_0_0_2_1.set(MDBookType_13);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MDBookType_13.getString());
        FIX::MDFeedType MDFeedType_13("STRING_984846006");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_13);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MDFeedType_13.getString());
        FIX::MarketDepth MarketDepth_13(741414934);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_13);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MarketDepth_13.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_13);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_18;
        FIX::MatchAlgorithm MatchAlgorithm_18("STRING_1871001210");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_18);
        MatchRules_NoMatchRules_18.insert(MatchAlgorithm_18.getString());
        FIX::MatchType MatchType_21("STRING_M1");
        noMatchRules_0_0_2_0.set(MatchType_21);
        MatchRules_NoMatchRules_18.insert(MatchType_21.getString());
        all_values.push_back(MatchRules_NoMatchRules_18);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_19;
        FIX::MatchAlgorithm MatchAlgorithm_19("STRING_1552724694");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_19);
        MatchRules_NoMatchRules_19.insert(MatchAlgorithm_19.getString());
        FIX::MatchType MatchType_22("STRING_S1");
        noMatchRules_0_0_2_1.set(MatchType_22);
        MatchRules_NoMatchRules_19.insert(MatchType_22.getString());
        all_values.push_back(MatchRules_NoMatchRules_19);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_20;
        FIX::MatchAlgorithm MatchAlgorithm_20("STRING_916071349");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_20);
        MatchRules_NoMatchRules_20.insert(MatchAlgorithm_20.getString());
        FIX::MatchType MatchType_23("STRING_M3");
        noMatchRules_0_0_2_2.set(MatchType_23);
        MatchRules_NoMatchRules_20.insert(MatchType_23.getString());
        all_values.push_back(MatchRules_NoMatchRules_20);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_18;
        FIX::OrdType OrdType_19('L');
        noOrdTypeRules_0_0_2_0.set(OrdType_19);
        OrdTypeRules_NoOrdTypeRules_18.insert(OrdType_19.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_18);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_19;
        FIX::OrdType OrdType_20('1');
        noOrdTypeRules_0_0_2_1.set(OrdType_20);
        OrdTypeRules_NoOrdTypeRules_19.insert(OrdType_20.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_19);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_20;
        FIX::OrdType OrdType_21('B');
        noOrdTypeRules_0_0_2_2.set(OrdType_21);
        OrdTypeRules_NoOrdTypeRules_20.insert(OrdType_21.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_20);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_20;
        FIX::TimeInForce TimeInForce_21('9');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_21);
        TimeInForceRules_NoTimeInForceRules_20.insert(TimeInForce_21.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_20);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_21;
        FIX::TimeInForce TimeInForce_22('4');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_22);
        TimeInForceRules_NoTimeInForceRules_21.insert(TimeInForce_22.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_21);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_22;
        FIX::TimeInForce TimeInForce_23('4');
        noTimeInForceRules_0_0_2_2.set(TimeInForce_23);
        TimeInForceRules_NoTimeInForceRules_22.insert(TimeInForce_23.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_22);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_9;
      FIX::TradingSessionID TradingSessionID_23("STRING_2");
      noTradingSessionRules_0_1_1.set(TradingSessionID_23);
      TradingSessionRulesGrp_NoTradingSessionRules_9.insert(TradingSessionID_23.getString());
      FIX::TradingSessionSubID TradingSessionSubID_23("STRING_5");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_23);
      TradingSessionRulesGrp_NoTradingSessionRules_9.insert(TradingSessionSubID_23.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_9);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_19;
        FIX::ExecInstValue ExecInstValue_19('7');
        noExecInstRules_0_1_2_0.set(ExecInstValue_19);
        ExecInstRules_NoExecInstRules_19.insert(ExecInstValue_19.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_19);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_20;
        FIX::ExecInstValue ExecInstValue_20('5');
        noExecInstRules_0_1_2_1.set(ExecInstValue_20);
        ExecInstRules_NoExecInstRules_20.insert(ExecInstValue_20.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_20);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_21;
        FIX::ExecInstValue ExecInstValue_21('3');
        noExecInstRules_0_1_2_2.set(ExecInstValue_21);
        ExecInstRules_NoExecInstRules_21.insert(ExecInstValue_21.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_21);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_14;
        FIX::MDBookType MDBookType_14(1);
        noMDFeedTypes_0_1_2_0.set(MDBookType_14);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MDBookType_14.getString());
        FIX::MDFeedType MDFeedType_14("STRING_1242408749");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_14);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MDFeedType_14.getString());
        FIX::MarketDepth MarketDepth_14(874867000);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_14);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MarketDepth_14.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_14);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_15;
        FIX::MDBookType MDBookType_15(1);
        noMDFeedTypes_0_1_2_1.set(MDBookType_15);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MDBookType_15.getString());
        FIX::MDFeedType MDFeedType_15("STRING_1940469842");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_15);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MDFeedType_15.getString());
        FIX::MarketDepth MarketDepth_15(15321380);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_15);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MarketDepth_15.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_15);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_16;
        FIX::MDBookType MDBookType_16(2);
        noMDFeedTypes_0_1_2_2.set(MDBookType_16);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MDBookType_16.getString());
        FIX::MDFeedType MDFeedType_16("STRING_777832201");
        noMDFeedTypes_0_1_2_2.set(MDFeedType_16);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MDFeedType_16.getString());
        FIX::MarketDepth MarketDepth_16(756736314);
        noMDFeedTypes_0_1_2_2.set(MarketDepth_16);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MarketDepth_16.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_16);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_21;
        FIX::MatchAlgorithm MatchAlgorithm_21("STRING_501349763");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_21);
        MatchRules_NoMatchRules_21.insert(MatchAlgorithm_21.getString());
        FIX::MatchType MatchType_24("STRING_S2");
        noMatchRules_0_1_2_0.set(MatchType_24);
        MatchRules_NoMatchRules_21.insert(MatchType_24.getString());
        all_values.push_back(MatchRules_NoMatchRules_21);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_22;
        FIX::MatchAlgorithm MatchAlgorithm_22("STRING_590328810");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_22);
        MatchRules_NoMatchRules_22.insert(MatchAlgorithm_22.getString());
        FIX::MatchType MatchType_25("STRING_M1");
        noMatchRules_0_1_2_1.set(MatchType_25);
        MatchRules_NoMatchRules_22.insert(MatchType_25.getString());
        all_values.push_back(MatchRules_NoMatchRules_22);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_21;
        FIX::OrdType OrdType_22('J');
        noOrdTypeRules_0_1_2_0.set(OrdType_22);
        OrdTypeRules_NoOrdTypeRules_21.insert(OrdType_22.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_21);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_22;
        FIX::OrdType OrdType_23('7');
        noOrdTypeRules_0_1_2_1.set(OrdType_23);
        OrdTypeRules_NoOrdTypeRules_22.insert(OrdType_23.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_22);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_23;
        FIX::TimeInForce TimeInForce_24('4');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_24);
        TimeInForceRules_NoTimeInForceRules_23.insert(TimeInForce_24.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_23);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_24;
        FIX::TimeInForce TimeInForce_25('3');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_25);
        TimeInForceRules_NoTimeInForceRules_24.insert(TimeInForce_25.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_24);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_7;
      FIX::EndStrikePxRange EndStrikePxRange_7;
      EndStrikePxRange_7.setString("9198563");
      noStrikeRules_0_1_0.set(EndStrikePxRange_7);
      StrikeRules_NoStrikeRules_7.insert(EndStrikePxRange_7.getString());
      FIX::StartStrikePxRange StartStrikePxRange_7;
      StartStrikePxRange_7.setString("2255797");
      noStrikeRules_0_1_0.set(StartStrikePxRange_7);
      StrikeRules_NoStrikeRules_7.insert(StartStrikePxRange_7.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_7(1665895886);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeExerciseStyle_7.getString());
      FIX::StrikeIncrement StrikeIncrement_7;
      StrikeIncrement_7.setString("20185411");
      noStrikeRules_0_1_0.set(StrikeIncrement_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeIncrement_7.getString());
      FIX::StrikeRuleID StrikeRuleID_7("STRING_151207220");
      noStrikeRules_0_1_0.set(StrikeRuleID_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeRuleID_7.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_7);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_16;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_16("MONTHYEAR_600695580");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_16);
        MaturityRules_NoMaturityRules_16.insert(EndMaturityMonthYear_16.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_16(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearFormat_16.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_16(1098856306);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearIncrement_16.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_16(3);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearIncrementUnits_16.getString());
        FIX::MaturityRuleID MaturityRuleID_16("STRING_550931139");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityRuleID_16.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_16("MONTHYEAR_193781407");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_16);
        MaturityRules_NoMaturityRules_16.insert(StartMaturityMonthYear_16.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_16);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_17;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_17("MONTHYEAR_319943135");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_17);
        MaturityRules_NoMaturityRules_17.insert(EndMaturityMonthYear_17.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_17(0);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearFormat_17.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_17(2134251250);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearIncrement_17.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_17(3);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearIncrementUnits_17.getString());
        FIX::MaturityRuleID MaturityRuleID_17("STRING_667458392");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityRuleID_17.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_17("MONTHYEAR_764599803");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_17);
        MaturityRules_NoMaturityRules_17.insert(StartMaturityMonthYear_17.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_17);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_18;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_18("MONTHYEAR_1092000829");
        noMaturityRules_0_0_2_2.set(EndMaturityMonthYear_18);
        MaturityRules_NoMaturityRules_18.insert(EndMaturityMonthYear_18.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_18(1);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearFormat_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearFormat_18.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_18(1265949566);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrement_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearIncrement_18.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_18(3);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrementUnits_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearIncrementUnits_18.getString());
        FIX::MaturityRuleID MaturityRuleID_18("STRING_295391318");
        noMaturityRules_0_0_2_2.set(MaturityRuleID_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityRuleID_18.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_18("MONTHYEAR_56153185");
        noMaturityRules_0_0_2_2.set(StartMaturityMonthYear_18);
        MaturityRules_NoMaturityRules_18.insert(StartMaturityMonthYear_18.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_18);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_8;
      FIX::EndStrikePxRange EndStrikePxRange_8;
      EndStrikePxRange_8.setString("12553559");
      noStrikeRules_0_1_1.set(EndStrikePxRange_8);
      StrikeRules_NoStrikeRules_8.insert(EndStrikePxRange_8.getString());
      FIX::StartStrikePxRange StartStrikePxRange_8;
      StartStrikePxRange_8.setString("19908836");
      noStrikeRules_0_1_1.set(StartStrikePxRange_8);
      StrikeRules_NoStrikeRules_8.insert(StartStrikePxRange_8.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_8(1640049440);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeExerciseStyle_8.getString());
      FIX::StrikeIncrement StrikeIncrement_8;
      StrikeIncrement_8.setString("10272143");
      noStrikeRules_0_1_1.set(StrikeIncrement_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeIncrement_8.getString());
      FIX::StrikeRuleID StrikeRuleID_8("STRING_1787091691");
      noStrikeRules_0_1_1.set(StrikeRuleID_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeRuleID_8.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_8);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_19;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_19("MONTHYEAR_697117306");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_19);
        MaturityRules_NoMaturityRules_19.insert(EndMaturityMonthYear_19.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_19(1);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearFormat_19.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_19(418662584);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearIncrement_19.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_19(0);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearIncrementUnits_19.getString());
        FIX::MaturityRuleID MaturityRuleID_19("STRING_430521908");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityRuleID_19.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_19("MONTHYEAR_569869805");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_19);
        MaturityRules_NoMaturityRules_19.insert(StartMaturityMonthYear_19.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_19);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_4;
    FIX::MarketID MarketID_5("EXCHANGE_921113235");
    noMarketSegments_0_1.set(MarketID_5);
    MarketSegmentGrp_NoMarketSegments_4.insert(MarketID_5.getString());
    FIX::MarketSegmentID MarketSegmentID_5("STRING_1031217489");
    noMarketSegments_0_1.set(MarketSegmentID_5);
    MarketSegmentGrp_NoMarketSegments_4.insert(MarketSegmentID_5.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_4);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_4;
    FIX::ExpirationCycle ExpirationCycle_4(1);
    noMarketSegments_0_1.set(ExpirationCycle_4);
    BaseTradingRules_4.insert(ExpirationCycle_4.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_4(2);
    noMarketSegments_0_1.set(ImpliedMarketIndicator_4);
    BaseTradingRules_4.insert(ImpliedMarketIndicator_4.getString());
    FIX::MaxPriceVariation MaxPriceVariation_4;
    MaxPriceVariation_4.setString("4762936");
    noMarketSegments_0_1.set(MaxPriceVariation_4);
    BaseTradingRules_4.insert(MaxPriceVariation_4.getString());
    FIX::MaxTradeVol MaxTradeVol_4;
    MaxTradeVol_4.setString("18318609");
    noMarketSegments_0_1.set(MaxTradeVol_4);
    BaseTradingRules_4.insert(MaxTradeVol_4.getString());
    FIX::MinTradeVol MinTradeVol_4;
    MinTradeVol_4.setString("662673");
    noMarketSegments_0_1.set(MinTradeVol_4);
    BaseTradingRules_4.insert(MinTradeVol_4.getString());
    FIX::MultilegModel MultilegModel_4(0);
    noMarketSegments_0_1.set(MultilegModel_4);
    BaseTradingRules_4.insert(MultilegModel_4.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_4(3);
    noMarketSegments_0_1.set(MultilegPriceMethod_4);
    BaseTradingRules_4.insert(MultilegPriceMethod_4.getString());
    FIX::PriceType PriceType_15(10);
    noMarketSegments_0_1.set(PriceType_15);
    BaseTradingRules_4.insert(PriceType_15.getString());
    FIX::RoundLot RoundLot_4;
    RoundLot_4.setString("11315012");
    noMarketSegments_0_1.set(RoundLot_4);
    BaseTradingRules_4.insert(RoundLot_4.getString());
    FIX::TradingCurrency TradingCurrency_4("USD");
    noMarketSegments_0_1.set(TradingCurrency_4);
    BaseTradingRules_4.insert(TradingCurrency_4.getString());
    all_values.push_back(BaseTradingRules_4);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_7;
      FIX::LotType LotType_7('4');
      noLotTypeRules_1_1_0.set(LotType_7);
      LotTypeRules_NoLotTypeRules_7.insert(LotType_7.getString());
      FIX::MinLotSize MinLotSize_7;
      MinLotSize_7.setString("20835842");
      noLotTypeRules_1_1_0.set(MinLotSize_7);
      LotTypeRules_NoLotTypeRules_7.insert(MinLotSize_7.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_7);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_8;
      FIX::LotType LotType_8('4');
      noLotTypeRules_1_1_1.set(LotType_8);
      LotTypeRules_NoLotTypeRules_8.insert(LotType_8.getString());
      FIX::MinLotSize MinLotSize_8;
      MinLotSize_8.setString("16449519");
      noLotTypeRules_1_1_1.set(MinLotSize_8);
      LotTypeRules_NoLotTypeRules_8.insert(MinLotSize_8.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_8);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_4;
    FIX::HighLimitPrice HighLimitPrice_4;
    HighLimitPrice_4.setString("21397374");
    noMarketSegments_0_1.set(HighLimitPrice_4);
    PriceLimits_4.insert(HighLimitPrice_4.getString());
    FIX::LowLimitPrice LowLimitPrice_4;
    LowLimitPrice_4.setString("20470171");
    noMarketSegments_0_1.set(LowLimitPrice_4);
    PriceLimits_4.insert(LowLimitPrice_4.getString());
    FIX::PriceLimitType PriceLimitType_4(1);
    noMarketSegments_0_1.set(PriceLimitType_4);
    PriceLimits_4.insert(PriceLimitType_4.getString());
    FIX::TradingReferencePrice TradingReferencePrice_4;
    TradingReferencePrice_4.setString("16323032");
    noMarketSegments_0_1.set(TradingReferencePrice_4);
    PriceLimits_4.insert(TradingReferencePrice_4.getString());
    all_values.push_back(PriceLimits_4);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_7;
      FIX::EndTickPriceRange EndTickPriceRange_7;
      EndTickPriceRange_7.setString("11279599");
      noTickRules_1_1_0.set(EndTickPriceRange_7);
      TickRules_NoTickRules_7.insert(EndTickPriceRange_7.getString());
      FIX::StartTickPriceRange StartTickPriceRange_7;
      StartTickPriceRange_7.setString("18253861");
      noTickRules_1_1_0.set(StartTickPriceRange_7);
      TickRules_NoTickRules_7.insert(StartTickPriceRange_7.getString());
      FIX::TickIncrement TickIncrement_7;
      TickIncrement_7.setString("16238651");
      noTickRules_1_1_0.set(TickIncrement_7);
      TickRules_NoTickRules_7.insert(TickIncrement_7.getString());
      FIX::TickRuleType TickRuleType_7(3);
      noTickRules_1_1_0.set(TickRuleType_7);
      TickRules_NoTickRules_7.insert(TickRuleType_7.getString());
      all_values.push_back(TickRules_NoTickRules_7);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_8;
      FIX::EndTickPriceRange EndTickPriceRange_8;
      EndTickPriceRange_8.setString("965650");
      noTickRules_1_1_1.set(EndTickPriceRange_8);
      TickRules_NoTickRules_8.insert(EndTickPriceRange_8.getString());
      FIX::StartTickPriceRange StartTickPriceRange_8;
      StartTickPriceRange_8.setString("18393947");
      noTickRules_1_1_1.set(StartTickPriceRange_8);
      TickRules_NoTickRules_8.insert(StartTickPriceRange_8.getString());
      FIX::TickIncrement TickIncrement_8;
      TickIncrement_8.setString("21179462");
      noTickRules_1_1_1.set(TickIncrement_8);
      TickRules_NoTickRules_8.insert(TickIncrement_8.getString());
      FIX::TickRuleType TickRuleType_8(1);
      noTickRules_1_1_1.set(TickRuleType_8);
      TickRules_NoTickRules_8.insert(TickRuleType_8.getString());
      all_values.push_back(TickRules_NoTickRules_8);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_12;
      FIX::NestedInstrAttribType NestedInstrAttribType_12(1001680087);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_12);
      NestedInstrumentAttribute_NoNestedInstrAttrib_12.insert(NestedInstrAttribType_12.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_12("STRING_1947364651");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_12);
      NestedInstrumentAttribute_NoNestedInstrAttrib_12.insert(NestedInstrAttribValue_12.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_12);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_10;
      FIX::TradingSessionID TradingSessionID_24("STRING_6");
      noTradingSessionRules_1_1_0.set(TradingSessionID_24);
      TradingSessionRulesGrp_NoTradingSessionRules_10.insert(TradingSessionID_24.getString());
      FIX::TradingSessionSubID TradingSessionSubID_24("STRING_2");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_24);
      TradingSessionRulesGrp_NoTradingSessionRules_10.insert(TradingSessionSubID_24.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_10);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_22;
        FIX::ExecInstValue ExecInstValue_22('1');
        noExecInstRules_1_0_2_0.set(ExecInstValue_22);
        ExecInstRules_NoExecInstRules_22.insert(ExecInstValue_22.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_22);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_23;
        FIX::ExecInstValue ExecInstValue_23('4');
        noExecInstRules_1_0_2_1.set(ExecInstValue_23);
        ExecInstRules_NoExecInstRules_23.insert(ExecInstValue_23.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_23);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_17;
        FIX::MDBookType MDBookType_17(1);
        noMDFeedTypes_1_0_2_0.set(MDBookType_17);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MDBookType_17.getString());
        FIX::MDFeedType MDFeedType_17("STRING_2105796064");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_17);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MDFeedType_17.getString());
        FIX::MarketDepth MarketDepth_17(1422447113);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_17);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MarketDepth_17.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_17);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_18;
        FIX::MDBookType MDBookType_18(2);
        noMDFeedTypes_1_0_2_1.set(MDBookType_18);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MDBookType_18.getString());
        FIX::MDFeedType MDFeedType_18("STRING_1307873008");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_18);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MDFeedType_18.getString());
        FIX::MarketDepth MarketDepth_18(1358547738);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_18);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MarketDepth_18.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_18);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_19;
        FIX::MDBookType MDBookType_19(3);
        noMDFeedTypes_1_0_2_2.set(MDBookType_19);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MDBookType_19.getString());
        FIX::MDFeedType MDFeedType_19("STRING_805341269");
        noMDFeedTypes_1_0_2_2.set(MDFeedType_19);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MDFeedType_19.getString());
        FIX::MarketDepth MarketDepth_19(1350801548);
        noMDFeedTypes_1_0_2_2.set(MarketDepth_19);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MarketDepth_19.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_19);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_23;
        FIX::MatchAlgorithm MatchAlgorithm_23("STRING_146209507");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_23);
        MatchRules_NoMatchRules_23.insert(MatchAlgorithm_23.getString());
        FIX::MatchType MatchType_26("STRING_1");
        noMatchRules_1_0_2_0.set(MatchType_26);
        MatchRules_NoMatchRules_23.insert(MatchType_26.getString());
        all_values.push_back(MatchRules_NoMatchRules_23);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_24;
        FIX::MatchAlgorithm MatchAlgorithm_24("STRING_804705516");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_24);
        MatchRules_NoMatchRules_24.insert(MatchAlgorithm_24.getString());
        FIX::MatchType MatchType_27("STRING_S3");
        noMatchRules_1_0_2_1.set(MatchType_27);
        MatchRules_NoMatchRules_24.insert(MatchType_27.getString());
        all_values.push_back(MatchRules_NoMatchRules_24);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_23;
        FIX::OrdType OrdType_24('5');
        noOrdTypeRules_1_0_2_0.set(OrdType_24);
        OrdTypeRules_NoOrdTypeRules_23.insert(OrdType_24.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_23);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_25;
        FIX::TimeInForce TimeInForce_26('8');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_26);
        TimeInForceRules_NoTimeInForceRules_25.insert(TimeInForce_26.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_25);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_9;
      FIX::EndStrikePxRange EndStrikePxRange_9;
      EndStrikePxRange_9.setString("7845727");
      noStrikeRules_1_1_0.set(EndStrikePxRange_9);
      StrikeRules_NoStrikeRules_9.insert(EndStrikePxRange_9.getString());
      FIX::StartStrikePxRange StartStrikePxRange_9;
      StartStrikePxRange_9.setString("12765235");
      noStrikeRules_1_1_0.set(StartStrikePxRange_9);
      StrikeRules_NoStrikeRules_9.insert(StartStrikePxRange_9.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_9(586022425);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeExerciseStyle_9.getString());
      FIX::StrikeIncrement StrikeIncrement_9;
      StrikeIncrement_9.setString("17862528");
      noStrikeRules_1_1_0.set(StrikeIncrement_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeIncrement_9.getString());
      FIX::StrikeRuleID StrikeRuleID_9("STRING_1076404528");
      noStrikeRules_1_1_0.set(StrikeRuleID_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeRuleID_9.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_9);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_20;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_20("MONTHYEAR_1116742876");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_20);
        MaturityRules_NoMaturityRules_20.insert(EndMaturityMonthYear_20.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_20(0);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearFormat_20.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_20(1623310130);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearIncrement_20.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_20(3);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearIncrementUnits_20.getString());
        FIX::MaturityRuleID MaturityRuleID_20("STRING_1021960799");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityRuleID_20.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_20("MONTHYEAR_80638889");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_20);
        MaturityRules_NoMaturityRules_20.insert(StartMaturityMonthYear_20.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_20);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_21;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_21("MONTHYEAR_354214149");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_21);
        MaturityRules_NoMaturityRules_21.insert(EndMaturityMonthYear_21.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_21(2);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearFormat_21.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_21(1503086003);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearIncrement_21.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_21(3);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearIncrementUnits_21.getString());
        FIX::MaturityRuleID MaturityRuleID_21("STRING_140662576");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityRuleID_21.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_21("MONTHYEAR_714150093");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_21);
        MaturityRules_NoMaturityRules_21.insert(StartMaturityMonthYear_21.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_21);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
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
    FIX::CorporateAction CorporateAction_2("MULTIPLECHARVALUE_W");
    noRelatedSym_0_0.set(CorporateAction_2);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(CorporateAction_2.getString());
    FIX::Currency Currency_17("USD");
    noRelatedSym_0_0.set(Currency_17);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(Currency_17.getString());
    FIX::EncodedText EncodedText_31("DATA_1092213353");
    noRelatedSym_0_0.set(EncodedText_31);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(EncodedText_31.getString());
    FIX::EncodedTextLen EncodedTextLen_31(753089143);
    noRelatedSym_0_0.set(EncodedTextLen_31);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(EncodedTextLen_31.getString());
    FIX::ListUpdateAction ListUpdateAction_0('2');
    noRelatedSym_0_0.set(ListUpdateAction_0);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(ListUpdateAction_0.getString());
    FIX::RelSymTransactTime RelSymTransactTime_2(FIX::UTCTIMESTAMP(16, 45, 8, 0, 112007));
    noRelatedSym_0_0.set(RelSymTransactTime_2);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(RelSymTransactTime_2.getString());
    FIX::Text Text_31("STRING_1005741305");
    noRelatedSym_0_0.set(Text_31);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(Text_31.getString());
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_29;
      FIX::EncodedLegIssuer EncodedLegIssuer_29("DATA_1456351157");
      noLegs_0_1_0.set(EncodedLegIssuer_29);
      InstrumentLeg_29.insert(EncodedLegIssuer_29.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_29(2082145834);
      noLegs_0_1_0.set(EncodedLegIssuerLen_29);
      InstrumentLeg_29.insert(EncodedLegIssuerLen_29.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_29("DATA_2113704534");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_29);
      InstrumentLeg_29.insert(EncodedLegSecurityDesc_29.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_29(425610385);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_29);
      InstrumentLeg_29.insert(EncodedLegSecurityDescLen_29.getString());
      FIX::LegCFICode LegCFICode_29("STRING_495325004");
      noLegs_0_1_0.set(LegCFICode_29);
      InstrumentLeg_29.insert(LegCFICode_29.getString());
      FIX::LegContractMultiplier LegContractMultiplier_29;
      LegContractMultiplier_29.setString("15895310");
      noLegs_0_1_0.set(LegContractMultiplier_29);
      InstrumentLeg_29.insert(LegContractMultiplier_29.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_29(1669080084);
      noLegs_0_1_0.set(LegContractMultiplierUnit_29);
      InstrumentLeg_29.insert(LegContractMultiplierUnit_29.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_29("MONTHYEAR_1517285804");
      noLegs_0_1_0.set(LegContractSettlMonth_29);
      InstrumentLeg_29.insert(LegContractSettlMonth_29.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_29("COUNTRY_1670169906");
      noLegs_0_1_0.set(LegCountryOfIssue_29);
      InstrumentLeg_29.insert(LegCountryOfIssue_29.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_29("LOCALMKTDATE_2023294233");
      noLegs_0_1_0.set(LegCouponPaymentDate_29);
      InstrumentLeg_29.insert(LegCouponPaymentDate_29.getString());
      FIX::LegCouponRate LegCouponRate_29;
      LegCouponRate_29.setString("53.720000");
      noLegs_0_1_0.set(LegCouponRate_29);
      InstrumentLeg_29.insert(LegCouponRate_29.getString());
      FIX::LegCreditRating LegCreditRating_29("STRING_1025772261");
      noLegs_0_1_0.set(LegCreditRating_29);
      InstrumentLeg_29.insert(LegCreditRating_29.getString());
      FIX::LegCurrency LegCurrency_29("USD");
      noLegs_0_1_0.set(LegCurrency_29);
      InstrumentLeg_29.insert(LegCurrency_29.getString());
      FIX::LegDatedDate LegDatedDate_29("LOCALMKTDATE_1739922354");
      noLegs_0_1_0.set(LegDatedDate_29);
      InstrumentLeg_29.insert(LegDatedDate_29.getString());
      FIX::LegExerciseStyle LegExerciseStyle_29(1083672446);
      noLegs_0_1_0.set(LegExerciseStyle_29);
      InstrumentLeg_29.insert(LegExerciseStyle_29.getString());
      FIX::LegFactor LegFactor_29;
      LegFactor_29.setString("14367417");
      noLegs_0_1_0.set(LegFactor_29);
      InstrumentLeg_29.insert(LegFactor_29.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_29(1657390347);
      noLegs_0_1_0.set(LegFlowScheduleType_29);
      InstrumentLeg_29.insert(LegFlowScheduleType_29.getString());
      FIX::LegInstrRegistry LegInstrRegistry_29("STRING_481031251");
      noLegs_0_1_0.set(LegInstrRegistry_29);
      InstrumentLeg_29.insert(LegInstrRegistry_29.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_29("LOCALMKTDATE_381471498");
      noLegs_0_1_0.set(LegInterestAccrualDate_29);
      InstrumentLeg_29.insert(LegInterestAccrualDate_29.getString());
      FIX::LegIssueDate LegIssueDate_29("LOCALMKTDATE_262995842");
      noLegs_0_1_0.set(LegIssueDate_29);
      InstrumentLeg_29.insert(LegIssueDate_29.getString());
      FIX::LegIssuer LegIssuer_29("STRING_683095572");
      noLegs_0_1_0.set(LegIssuer_29);
      InstrumentLeg_29.insert(LegIssuer_29.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_29("STRING_600370640");
      noLegs_0_1_0.set(LegLocaleOfIssue_29);
      InstrumentLeg_29.insert(LegLocaleOfIssue_29.getString());
      FIX::LegMaturityDate LegMaturityDate_29("LOCALMKTDATE_1529608602");
      noLegs_0_1_0.set(LegMaturityDate_29);
      InstrumentLeg_29.insert(LegMaturityDate_29.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_29("MONTHYEAR_1166246937");
      noLegs_0_1_0.set(LegMaturityMonthYear_29);
      InstrumentLeg_29.insert(LegMaturityMonthYear_29.getString());
      FIX::LegMaturityTime LegMaturityTime_29("TZTIMEONLY_1633379908");
      noLegs_0_1_0.set(LegMaturityTime_29);
      InstrumentLeg_29.insert(LegMaturityTime_29.getString());
      FIX::LegOptAttribute LegOptAttribute_29('1');
      noLegs_0_1_0.set(LegOptAttribute_29);
      InstrumentLeg_29.insert(LegOptAttribute_29.getString());
      FIX::LegOptionRatio LegOptionRatio_29;
      LegOptionRatio_29.setString("16223964");
      noLegs_0_1_0.set(LegOptionRatio_29);
      InstrumentLeg_29.insert(LegOptionRatio_29.getString());
      FIX::LegPool LegPool_29("STRING_1303478253");
      noLegs_0_1_0.set(LegPool_29);
      InstrumentLeg_29.insert(LegPool_29.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_29("STRING_117084040");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_29);
      InstrumentLeg_29.insert(LegPriceUnitOfMeasure_29.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_29;
      LegPriceUnitOfMeasureQty_29.setString("5170846");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_29);
      InstrumentLeg_29.insert(LegPriceUnitOfMeasureQty_29.getString());
      FIX::LegProduct LegProduct_29(612345762);
      noLegs_0_1_0.set(LegProduct_29);
      InstrumentLeg_29.insert(LegProduct_29.getString());
      FIX::LegPutOrCall LegPutOrCall_29(51746226);
      noLegs_0_1_0.set(LegPutOrCall_29);
      InstrumentLeg_29.insert(LegPutOrCall_29.getString());
      FIX::LegRatioQty LegRatioQty_29;
      LegRatioQty_29.setString("4833055");
      noLegs_0_1_0.set(LegRatioQty_29);
      InstrumentLeg_29.insert(LegRatioQty_29.getString());
      FIX::LegRedemptionDate LegRedemptionDate_29("LOCALMKTDATE_1037956148");
      noLegs_0_1_0.set(LegRedemptionDate_29);
      InstrumentLeg_29.insert(LegRedemptionDate_29.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_29("STRING_547071231");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_29);
      InstrumentLeg_29.insert(LegRepoCollateralSecurityType_29.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_29;
      LegRepurchaseRate_29.setString("65.830000");
      noLegs_0_1_0.set(LegRepurchaseRate_29);
      InstrumentLeg_29.insert(LegRepurchaseRate_29.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_29(559552584);
      noLegs_0_1_0.set(LegRepurchaseTerm_29);
      InstrumentLeg_29.insert(LegRepurchaseTerm_29.getString());
      FIX::LegSecurityDesc LegSecurityDesc_29("STRING_2064357035");
      noLegs_0_1_0.set(LegSecurityDesc_29);
      InstrumentLeg_29.insert(LegSecurityDesc_29.getString());
      FIX::LegSecurityExchange LegSecurityExchange_29("EXCHANGE_1595522841");
      noLegs_0_1_0.set(LegSecurityExchange_29);
      InstrumentLeg_29.insert(LegSecurityExchange_29.getString());
      FIX::LegSecurityID LegSecurityID_29("STRING_435363170");
      noLegs_0_1_0.set(LegSecurityID_29);
      InstrumentLeg_29.insert(LegSecurityID_29.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_29("STRING_266948759");
      noLegs_0_1_0.set(LegSecurityIDSource_29);
      InstrumentLeg_29.insert(LegSecurityIDSource_29.getString());
      FIX::LegSecuritySubType LegSecuritySubType_29("STRING_473811455");
      noLegs_0_1_0.set(LegSecuritySubType_29);
      InstrumentLeg_29.insert(LegSecuritySubType_29.getString());
      FIX::LegSecurityType LegSecurityType_29("STRING_1999634459");
      noLegs_0_1_0.set(LegSecurityType_29);
      InstrumentLeg_29.insert(LegSecurityType_29.getString());
      FIX::LegSide LegSide_29('7');
      noLegs_0_1_0.set(LegSide_29);
      InstrumentLeg_29.insert(LegSide_29.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_29("STRING_66250161");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_29);
      InstrumentLeg_29.insert(LegStateOrProvinceOfIssue_29.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_29("USD");
      noLegs_0_1_0.set(LegStrikeCurrency_29);
      InstrumentLeg_29.insert(LegStrikeCurrency_29.getString());
      FIX::LegStrikePrice LegStrikePrice_29;
      LegStrikePrice_29.setString("17236405");
      noLegs_0_1_0.set(LegStrikePrice_29);
      InstrumentLeg_29.insert(LegStrikePrice_29.getString());
      FIX::LegSymbol LegSymbol_29("STRING_1416854508");
      noLegs_0_1_0.set(LegSymbol_29);
      InstrumentLeg_29.insert(LegSymbol_29.getString());
      FIX::LegSymbolSfx LegSymbolSfx_29("STRING_428416351");
      noLegs_0_1_0.set(LegSymbolSfx_29);
      InstrumentLeg_29.insert(LegSymbolSfx_29.getString());
      FIX::LegTimeUnit LegTimeUnit_29("STRING_1986636351");
      noLegs_0_1_0.set(LegTimeUnit_29);
      InstrumentLeg_29.insert(LegTimeUnit_29.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_29("STRING_2099950080");
      noLegs_0_1_0.set(LegUnitOfMeasure_29);
      InstrumentLeg_29.insert(LegUnitOfMeasure_29.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_29;
      LegUnitOfMeasureQty_29.setString("10287869");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_29);
      InstrumentLeg_29.insert(LegUnitOfMeasureQty_29.getString());
      all_values.push_back(InstrumentLeg_29);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_51;
        FIX::LegSecurityAltID LegSecurityAltID_51("STRING_1118713370");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_51);
        LegSecAltIDGrp_NoLegSecurityAltID_51.insert(LegSecurityAltID_51.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_51("STRING_514683251");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_51);
        LegSecAltIDGrp_NoLegSecurityAltID_51.insert(LegSecurityAltIDSource_51.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_51);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_52;
        FIX::LegSecurityAltID LegSecurityAltID_52("STRING_480104041");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_52);
        LegSecAltIDGrp_NoLegSecurityAltID_52.insert(LegSecurityAltID_52.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_52("STRING_593626142");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_52);
        LegSecAltIDGrp_NoLegSecurityAltID_52.insert(LegSecurityAltIDSource_52.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_52);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_53;
        FIX::LegSecurityAltID LegSecurityAltID_53("STRING_1818161504");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltID_53);
        LegSecAltIDGrp_NoLegSecurityAltID_53.insert(LegSecurityAltID_53.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_53("STRING_597188081");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltIDSource_53);
        LegSecAltIDGrp_NoLegSecurityAltID_53.insert(LegSecurityAltIDSource_53.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_53);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_30;
      FIX::EncodedLegIssuer EncodedLegIssuer_30("DATA_1110710821");
      noLegs_0_1_1.set(EncodedLegIssuer_30);
      InstrumentLeg_30.insert(EncodedLegIssuer_30.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_30(283023618);
      noLegs_0_1_1.set(EncodedLegIssuerLen_30);
      InstrumentLeg_30.insert(EncodedLegIssuerLen_30.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_30("DATA_648934308");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_30);
      InstrumentLeg_30.insert(EncodedLegSecurityDesc_30.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_30(1594016387);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_30);
      InstrumentLeg_30.insert(EncodedLegSecurityDescLen_30.getString());
      FIX::LegCFICode LegCFICode_30("STRING_1320979766");
      noLegs_0_1_1.set(LegCFICode_30);
      InstrumentLeg_30.insert(LegCFICode_30.getString());
      FIX::LegContractMultiplier LegContractMultiplier_30;
      LegContractMultiplier_30.setString("11960055");
      noLegs_0_1_1.set(LegContractMultiplier_30);
      InstrumentLeg_30.insert(LegContractMultiplier_30.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_30(1519369322);
      noLegs_0_1_1.set(LegContractMultiplierUnit_30);
      InstrumentLeg_30.insert(LegContractMultiplierUnit_30.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_30("MONTHYEAR_1880532351");
      noLegs_0_1_1.set(LegContractSettlMonth_30);
      InstrumentLeg_30.insert(LegContractSettlMonth_30.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_30("COUNTRY_1112878926");
      noLegs_0_1_1.set(LegCountryOfIssue_30);
      InstrumentLeg_30.insert(LegCountryOfIssue_30.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_30("LOCALMKTDATE_967408516");
      noLegs_0_1_1.set(LegCouponPaymentDate_30);
      InstrumentLeg_30.insert(LegCouponPaymentDate_30.getString());
      FIX::LegCouponRate LegCouponRate_30;
      LegCouponRate_30.setString("18.730000");
      noLegs_0_1_1.set(LegCouponRate_30);
      InstrumentLeg_30.insert(LegCouponRate_30.getString());
      FIX::LegCreditRating LegCreditRating_30("STRING_1379827685");
      noLegs_0_1_1.set(LegCreditRating_30);
      InstrumentLeg_30.insert(LegCreditRating_30.getString());
      FIX::LegCurrency LegCurrency_30("USD");
      noLegs_0_1_1.set(LegCurrency_30);
      InstrumentLeg_30.insert(LegCurrency_30.getString());
      FIX::LegDatedDate LegDatedDate_30("LOCALMKTDATE_2137514392");
      noLegs_0_1_1.set(LegDatedDate_30);
      InstrumentLeg_30.insert(LegDatedDate_30.getString());
      FIX::LegExerciseStyle LegExerciseStyle_30(1507470132);
      noLegs_0_1_1.set(LegExerciseStyle_30);
      InstrumentLeg_30.insert(LegExerciseStyle_30.getString());
      FIX::LegFactor LegFactor_30;
      LegFactor_30.setString("9563859");
      noLegs_0_1_1.set(LegFactor_30);
      InstrumentLeg_30.insert(LegFactor_30.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_30(36975596);
      noLegs_0_1_1.set(LegFlowScheduleType_30);
      InstrumentLeg_30.insert(LegFlowScheduleType_30.getString());
      FIX::LegInstrRegistry LegInstrRegistry_30("STRING_1083626993");
      noLegs_0_1_1.set(LegInstrRegistry_30);
      InstrumentLeg_30.insert(LegInstrRegistry_30.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_30("LOCALMKTDATE_225756802");
      noLegs_0_1_1.set(LegInterestAccrualDate_30);
      InstrumentLeg_30.insert(LegInterestAccrualDate_30.getString());
      FIX::LegIssueDate LegIssueDate_30("LOCALMKTDATE_465391947");
      noLegs_0_1_1.set(LegIssueDate_30);
      InstrumentLeg_30.insert(LegIssueDate_30.getString());
      FIX::LegIssuer LegIssuer_30("STRING_922779697");
      noLegs_0_1_1.set(LegIssuer_30);
      InstrumentLeg_30.insert(LegIssuer_30.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_30("STRING_178223234");
      noLegs_0_1_1.set(LegLocaleOfIssue_30);
      InstrumentLeg_30.insert(LegLocaleOfIssue_30.getString());
      FIX::LegMaturityDate LegMaturityDate_30("LOCALMKTDATE_1494178938");
      noLegs_0_1_1.set(LegMaturityDate_30);
      InstrumentLeg_30.insert(LegMaturityDate_30.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_30("MONTHYEAR_144057355");
      noLegs_0_1_1.set(LegMaturityMonthYear_30);
      InstrumentLeg_30.insert(LegMaturityMonthYear_30.getString());
      FIX::LegMaturityTime LegMaturityTime_30("TZTIMEONLY_1296936604");
      noLegs_0_1_1.set(LegMaturityTime_30);
      InstrumentLeg_30.insert(LegMaturityTime_30.getString());
      FIX::LegOptAttribute LegOptAttribute_30('2');
      noLegs_0_1_1.set(LegOptAttribute_30);
      InstrumentLeg_30.insert(LegOptAttribute_30.getString());
      FIX::LegOptionRatio LegOptionRatio_30;
      LegOptionRatio_30.setString("6241613");
      noLegs_0_1_1.set(LegOptionRatio_30);
      InstrumentLeg_30.insert(LegOptionRatio_30.getString());
      FIX::LegPool LegPool_30("STRING_1890562746");
      noLegs_0_1_1.set(LegPool_30);
      InstrumentLeg_30.insert(LegPool_30.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_30("STRING_1679540045");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_30);
      InstrumentLeg_30.insert(LegPriceUnitOfMeasure_30.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_30;
      LegPriceUnitOfMeasureQty_30.setString("12213494");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_30);
      InstrumentLeg_30.insert(LegPriceUnitOfMeasureQty_30.getString());
      FIX::LegProduct LegProduct_30(853789920);
      noLegs_0_1_1.set(LegProduct_30);
      InstrumentLeg_30.insert(LegProduct_30.getString());
      FIX::LegPutOrCall LegPutOrCall_30(1962563664);
      noLegs_0_1_1.set(LegPutOrCall_30);
      InstrumentLeg_30.insert(LegPutOrCall_30.getString());
      FIX::LegRatioQty LegRatioQty_30;
      LegRatioQty_30.setString("18702837");
      noLegs_0_1_1.set(LegRatioQty_30);
      InstrumentLeg_30.insert(LegRatioQty_30.getString());
      FIX::LegRedemptionDate LegRedemptionDate_30("LOCALMKTDATE_300322659");
      noLegs_0_1_1.set(LegRedemptionDate_30);
      InstrumentLeg_30.insert(LegRedemptionDate_30.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_30("STRING_1136059782");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_30);
      InstrumentLeg_30.insert(LegRepoCollateralSecurityType_30.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_30;
      LegRepurchaseRate_30.setString("56.760000");
      noLegs_0_1_1.set(LegRepurchaseRate_30);
      InstrumentLeg_30.insert(LegRepurchaseRate_30.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_30(1819691982);
      noLegs_0_1_1.set(LegRepurchaseTerm_30);
      InstrumentLeg_30.insert(LegRepurchaseTerm_30.getString());
      FIX::LegSecurityDesc LegSecurityDesc_30("STRING_869108485");
      noLegs_0_1_1.set(LegSecurityDesc_30);
      InstrumentLeg_30.insert(LegSecurityDesc_30.getString());
      FIX::LegSecurityExchange LegSecurityExchange_30("EXCHANGE_2031684602");
      noLegs_0_1_1.set(LegSecurityExchange_30);
      InstrumentLeg_30.insert(LegSecurityExchange_30.getString());
      FIX::LegSecurityID LegSecurityID_30("STRING_639616850");
      noLegs_0_1_1.set(LegSecurityID_30);
      InstrumentLeg_30.insert(LegSecurityID_30.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_30("STRING_1037520358");
      noLegs_0_1_1.set(LegSecurityIDSource_30);
      InstrumentLeg_30.insert(LegSecurityIDSource_30.getString());
      FIX::LegSecuritySubType LegSecuritySubType_30("STRING_1264028639");
      noLegs_0_1_1.set(LegSecuritySubType_30);
      InstrumentLeg_30.insert(LegSecuritySubType_30.getString());
      FIX::LegSecurityType LegSecurityType_30("STRING_2080836821");
      noLegs_0_1_1.set(LegSecurityType_30);
      InstrumentLeg_30.insert(LegSecurityType_30.getString());
      FIX::LegSide LegSide_30('1');
      noLegs_0_1_1.set(LegSide_30);
      InstrumentLeg_30.insert(LegSide_30.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_30("STRING_1254059383");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_30);
      InstrumentLeg_30.insert(LegStateOrProvinceOfIssue_30.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_30("JPY");
      noLegs_0_1_1.set(LegStrikeCurrency_30);
      InstrumentLeg_30.insert(LegStrikeCurrency_30.getString());
      FIX::LegStrikePrice LegStrikePrice_30;
      LegStrikePrice_30.setString("12910349");
      noLegs_0_1_1.set(LegStrikePrice_30);
      InstrumentLeg_30.insert(LegStrikePrice_30.getString());
      FIX::LegSymbol LegSymbol_30("STRING_376966651");
      noLegs_0_1_1.set(LegSymbol_30);
      InstrumentLeg_30.insert(LegSymbol_30.getString());
      FIX::LegSymbolSfx LegSymbolSfx_30("STRING_92742138");
      noLegs_0_1_1.set(LegSymbolSfx_30);
      InstrumentLeg_30.insert(LegSymbolSfx_30.getString());
      FIX::LegTimeUnit LegTimeUnit_30("STRING_1756426927");
      noLegs_0_1_1.set(LegTimeUnit_30);
      InstrumentLeg_30.insert(LegTimeUnit_30.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_30("STRING_1299746348");
      noLegs_0_1_1.set(LegUnitOfMeasure_30);
      InstrumentLeg_30.insert(LegUnitOfMeasure_30.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_30;
      LegUnitOfMeasureQty_30.setString("2709653");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_30);
      InstrumentLeg_30.insert(LegUnitOfMeasureQty_30.getString());
      all_values.push_back(InstrumentLeg_30);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_54;
        FIX::LegSecurityAltID LegSecurityAltID_54("STRING_1443803703");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_54);
        LegSecAltIDGrp_NoLegSecurityAltID_54.insert(LegSecurityAltID_54.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_54("STRING_1567901977");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_54);
        LegSecAltIDGrp_NoLegSecurityAltID_54.insert(LegSecurityAltIDSource_54.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_54);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_31;
      FIX::EncodedLegIssuer EncodedLegIssuer_31("DATA_964500759");
      noLegs_0_1_2.set(EncodedLegIssuer_31);
      InstrumentLeg_31.insert(EncodedLegIssuer_31.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_31(2067965099);
      noLegs_0_1_2.set(EncodedLegIssuerLen_31);
      InstrumentLeg_31.insert(EncodedLegIssuerLen_31.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_31("DATA_1310981075");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_31);
      InstrumentLeg_31.insert(EncodedLegSecurityDesc_31.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_31(496557157);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_31);
      InstrumentLeg_31.insert(EncodedLegSecurityDescLen_31.getString());
      FIX::LegCFICode LegCFICode_31("STRING_1141830928");
      noLegs_0_1_2.set(LegCFICode_31);
      InstrumentLeg_31.insert(LegCFICode_31.getString());
      FIX::LegContractMultiplier LegContractMultiplier_31;
      LegContractMultiplier_31.setString("172873");
      noLegs_0_1_2.set(LegContractMultiplier_31);
      InstrumentLeg_31.insert(LegContractMultiplier_31.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_31(311637173);
      noLegs_0_1_2.set(LegContractMultiplierUnit_31);
      InstrumentLeg_31.insert(LegContractMultiplierUnit_31.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_31("MONTHYEAR_864631066");
      noLegs_0_1_2.set(LegContractSettlMonth_31);
      InstrumentLeg_31.insert(LegContractSettlMonth_31.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_31("COUNTRY_317610007");
      noLegs_0_1_2.set(LegCountryOfIssue_31);
      InstrumentLeg_31.insert(LegCountryOfIssue_31.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_31("LOCALMKTDATE_1447696955");
      noLegs_0_1_2.set(LegCouponPaymentDate_31);
      InstrumentLeg_31.insert(LegCouponPaymentDate_31.getString());
      FIX::LegCouponRate LegCouponRate_31;
      LegCouponRate_31.setString("67.420000");
      noLegs_0_1_2.set(LegCouponRate_31);
      InstrumentLeg_31.insert(LegCouponRate_31.getString());
      FIX::LegCreditRating LegCreditRating_31("STRING_2137301989");
      noLegs_0_1_2.set(LegCreditRating_31);
      InstrumentLeg_31.insert(LegCreditRating_31.getString());
      FIX::LegCurrency LegCurrency_31("EUR");
      noLegs_0_1_2.set(LegCurrency_31);
      InstrumentLeg_31.insert(LegCurrency_31.getString());
      FIX::LegDatedDate LegDatedDate_31("LOCALMKTDATE_629435191");
      noLegs_0_1_2.set(LegDatedDate_31);
      InstrumentLeg_31.insert(LegDatedDate_31.getString());
      FIX::LegExerciseStyle LegExerciseStyle_31(1206842151);
      noLegs_0_1_2.set(LegExerciseStyle_31);
      InstrumentLeg_31.insert(LegExerciseStyle_31.getString());
      FIX::LegFactor LegFactor_31;
      LegFactor_31.setString("7841826");
      noLegs_0_1_2.set(LegFactor_31);
      InstrumentLeg_31.insert(LegFactor_31.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_31(562788364);
      noLegs_0_1_2.set(LegFlowScheduleType_31);
      InstrumentLeg_31.insert(LegFlowScheduleType_31.getString());
      FIX::LegInstrRegistry LegInstrRegistry_31("STRING_117441546");
      noLegs_0_1_2.set(LegInstrRegistry_31);
      InstrumentLeg_31.insert(LegInstrRegistry_31.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_31("LOCALMKTDATE_2038242072");
      noLegs_0_1_2.set(LegInterestAccrualDate_31);
      InstrumentLeg_31.insert(LegInterestAccrualDate_31.getString());
      FIX::LegIssueDate LegIssueDate_31("LOCALMKTDATE_2003611669");
      noLegs_0_1_2.set(LegIssueDate_31);
      InstrumentLeg_31.insert(LegIssueDate_31.getString());
      FIX::LegIssuer LegIssuer_31("STRING_2131910530");
      noLegs_0_1_2.set(LegIssuer_31);
      InstrumentLeg_31.insert(LegIssuer_31.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_31("STRING_1181793404");
      noLegs_0_1_2.set(LegLocaleOfIssue_31);
      InstrumentLeg_31.insert(LegLocaleOfIssue_31.getString());
      FIX::LegMaturityDate LegMaturityDate_31("LOCALMKTDATE_233094672");
      noLegs_0_1_2.set(LegMaturityDate_31);
      InstrumentLeg_31.insert(LegMaturityDate_31.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_31("MONTHYEAR_77169020");
      noLegs_0_1_2.set(LegMaturityMonthYear_31);
      InstrumentLeg_31.insert(LegMaturityMonthYear_31.getString());
      FIX::LegMaturityTime LegMaturityTime_31("TZTIMEONLY_790736683");
      noLegs_0_1_2.set(LegMaturityTime_31);
      InstrumentLeg_31.insert(LegMaturityTime_31.getString());
      FIX::LegOptAttribute LegOptAttribute_31('1');
      noLegs_0_1_2.set(LegOptAttribute_31);
      InstrumentLeg_31.insert(LegOptAttribute_31.getString());
      FIX::LegOptionRatio LegOptionRatio_31;
      LegOptionRatio_31.setString("3481343");
      noLegs_0_1_2.set(LegOptionRatio_31);
      InstrumentLeg_31.insert(LegOptionRatio_31.getString());
      FIX::LegPool LegPool_31("STRING_1893858901");
      noLegs_0_1_2.set(LegPool_31);
      InstrumentLeg_31.insert(LegPool_31.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_31("STRING_829161075");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_31);
      InstrumentLeg_31.insert(LegPriceUnitOfMeasure_31.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_31;
      LegPriceUnitOfMeasureQty_31.setString("19160363");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_31);
      InstrumentLeg_31.insert(LegPriceUnitOfMeasureQty_31.getString());
      FIX::LegProduct LegProduct_31(710876013);
      noLegs_0_1_2.set(LegProduct_31);
      InstrumentLeg_31.insert(LegProduct_31.getString());
      FIX::LegPutOrCall LegPutOrCall_31(749642526);
      noLegs_0_1_2.set(LegPutOrCall_31);
      InstrumentLeg_31.insert(LegPutOrCall_31.getString());
      FIX::LegRatioQty LegRatioQty_31;
      LegRatioQty_31.setString("10795337");
      noLegs_0_1_2.set(LegRatioQty_31);
      InstrumentLeg_31.insert(LegRatioQty_31.getString());
      FIX::LegRedemptionDate LegRedemptionDate_31("LOCALMKTDATE_1207433170");
      noLegs_0_1_2.set(LegRedemptionDate_31);
      InstrumentLeg_31.insert(LegRedemptionDate_31.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_31("STRING_1891473455");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_31);
      InstrumentLeg_31.insert(LegRepoCollateralSecurityType_31.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_31;
      LegRepurchaseRate_31.setString("11.440000");
      noLegs_0_1_2.set(LegRepurchaseRate_31);
      InstrumentLeg_31.insert(LegRepurchaseRate_31.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_31(1519070343);
      noLegs_0_1_2.set(LegRepurchaseTerm_31);
      InstrumentLeg_31.insert(LegRepurchaseTerm_31.getString());
      FIX::LegSecurityDesc LegSecurityDesc_31("STRING_608620873");
      noLegs_0_1_2.set(LegSecurityDesc_31);
      InstrumentLeg_31.insert(LegSecurityDesc_31.getString());
      FIX::LegSecurityExchange LegSecurityExchange_31("EXCHANGE_1414431151");
      noLegs_0_1_2.set(LegSecurityExchange_31);
      InstrumentLeg_31.insert(LegSecurityExchange_31.getString());
      FIX::LegSecurityID LegSecurityID_31("STRING_819283650");
      noLegs_0_1_2.set(LegSecurityID_31);
      InstrumentLeg_31.insert(LegSecurityID_31.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_31("STRING_244573967");
      noLegs_0_1_2.set(LegSecurityIDSource_31);
      InstrumentLeg_31.insert(LegSecurityIDSource_31.getString());
      FIX::LegSecuritySubType LegSecuritySubType_31("STRING_1404249492");
      noLegs_0_1_2.set(LegSecuritySubType_31);
      InstrumentLeg_31.insert(LegSecuritySubType_31.getString());
      FIX::LegSecurityType LegSecurityType_31("STRING_988605443");
      noLegs_0_1_2.set(LegSecurityType_31);
      InstrumentLeg_31.insert(LegSecurityType_31.getString());
      FIX::LegSide LegSide_31('1');
      noLegs_0_1_2.set(LegSide_31);
      InstrumentLeg_31.insert(LegSide_31.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_31("STRING_2033684683");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_31);
      InstrumentLeg_31.insert(LegStateOrProvinceOfIssue_31.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_31("CHF");
      noLegs_0_1_2.set(LegStrikeCurrency_31);
      InstrumentLeg_31.insert(LegStrikeCurrency_31.getString());
      FIX::LegStrikePrice LegStrikePrice_31;
      LegStrikePrice_31.setString("4489893");
      noLegs_0_1_2.set(LegStrikePrice_31);
      InstrumentLeg_31.insert(LegStrikePrice_31.getString());
      FIX::LegSymbol LegSymbol_31("STRING_165405493");
      noLegs_0_1_2.set(LegSymbol_31);
      InstrumentLeg_31.insert(LegSymbol_31.getString());
      FIX::LegSymbolSfx LegSymbolSfx_31("STRING_439669129");
      noLegs_0_1_2.set(LegSymbolSfx_31);
      InstrumentLeg_31.insert(LegSymbolSfx_31.getString());
      FIX::LegTimeUnit LegTimeUnit_31("STRING_305117421");
      noLegs_0_1_2.set(LegTimeUnit_31);
      InstrumentLeg_31.insert(LegTimeUnit_31.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_31("STRING_149832375");
      noLegs_0_1_2.set(LegUnitOfMeasure_31);
      InstrumentLeg_31.insert(LegUnitOfMeasure_31.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_31;
      LegUnitOfMeasureQty_31.setString("16214625");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_31);
      InstrumentLeg_31.insert(LegUnitOfMeasureQty_31.getString());
      all_values.push_back(InstrumentLeg_31);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_55;
        FIX::LegSecurityAltID LegSecurityAltID_55("STRING_227001395");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_55);
        LegSecAltIDGrp_NoLegSecurityAltID_55.insert(LegSecurityAltID_55.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_55("STRING_264715568");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_55);
        LegSecAltIDGrp_NoLegSecurityAltID_55.insert(LegSecurityAltIDSource_55.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_55);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_19;
    FIX::AttachmentPoint AttachmentPoint_19;
    AttachmentPoint_19.setString("31.140000");
    noRelatedSym_0_0.set(AttachmentPoint_19);
    Instrument_19.insert(AttachmentPoint_19.getString());
    FIX::CFICode CFICode_19("STRING_575135787");
    noRelatedSym_0_0.set(CFICode_19);
    Instrument_19.insert(CFICode_19.getString());
    FIX::CPProgram CPProgram_19(99);
    noRelatedSym_0_0.set(CPProgram_19);
    Instrument_19.insert(CPProgram_19.getString());
    FIX::CPRegType CPRegType_19("STRING_752730541");
    noRelatedSym_0_0.set(CPRegType_19);
    Instrument_19.insert(CPRegType_19.getString());
    FIX::CapPrice CapPrice_19;
    CapPrice_19.setString("3436885");
    noRelatedSym_0_0.set(CapPrice_19);
    Instrument_19.insert(CapPrice_19.getString());
    FIX::ContractMultiplier ContractMultiplier_19;
    ContractMultiplier_19.setString("7219668");
    noRelatedSym_0_0.set(ContractMultiplier_19);
    Instrument_19.insert(ContractMultiplier_19.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_19(2);
    noRelatedSym_0_0.set(ContractMultiplierUnit_19);
    Instrument_19.insert(ContractMultiplierUnit_19.getString());
    FIX::ContractSettlMonth ContractSettlMonth_19("MONTHYEAR_1423222306");
    noRelatedSym_0_0.set(ContractSettlMonth_19);
    Instrument_19.insert(ContractSettlMonth_19.getString());
    FIX::CountryOfIssue CountryOfIssue_19("COUNTRY_1929400005");
    noRelatedSym_0_0.set(CountryOfIssue_19);
    Instrument_19.insert(CountryOfIssue_19.getString());
    FIX::CouponPaymentDate CouponPaymentDate_19("LOCALMKTDATE_1246362875");
    noRelatedSym_0_0.set(CouponPaymentDate_19);
    Instrument_19.insert(CouponPaymentDate_19.getString());
    FIX::CouponRate CouponRate_19;
    CouponRate_19.setString("98.020000");
    noRelatedSym_0_0.set(CouponRate_19);
    Instrument_19.insert(CouponRate_19.getString());
    FIX::CreditRating CreditRating_19("STRING_1300986700");
    noRelatedSym_0_0.set(CreditRating_19);
    Instrument_19.insert(CreditRating_19.getString());
    FIX::DatedDate DatedDate_19("LOCALMKTDATE_1854983748");
    noRelatedSym_0_0.set(DatedDate_19);
    Instrument_19.insert(DatedDate_19.getString());
    FIX::DetachmentPoint DetachmentPoint_19;
    DetachmentPoint_19.setString("9.540000");
    noRelatedSym_0_0.set(DetachmentPoint_19);
    Instrument_19.insert(DetachmentPoint_19.getString());
    FIX::EncodedIssuer EncodedIssuer_19("DATA_2120270350");
    noRelatedSym_0_0.set(EncodedIssuer_19);
    Instrument_19.insert(EncodedIssuer_19.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_19(2099557715);
    noRelatedSym_0_0.set(EncodedIssuerLen_19);
    Instrument_19.insert(EncodedIssuerLen_19.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_19("DATA_1043756798");
    noRelatedSym_0_0.set(EncodedSecurityDesc_19);
    Instrument_19.insert(EncodedSecurityDesc_19.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_19(961392146);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_19);
    Instrument_19.insert(EncodedSecurityDescLen_19.getString());
    FIX::ExerciseStyle ExerciseStyle_19(1);
    noRelatedSym_0_0.set(ExerciseStyle_19);
    Instrument_19.insert(ExerciseStyle_19.getString());
    FIX::Factor Factor_19;
    Factor_19.setString("9299578");
    noRelatedSym_0_0.set(Factor_19);
    Instrument_19.insert(Factor_19.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_19(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_19);
    Instrument_19.insert(FlexProductEligibilityIndicator_19.getString());
    FIX::FlexibleIndicator FlexibleIndicator_19(false);
    noRelatedSym_0_0.set(FlexibleIndicator_19);
    Instrument_19.insert(FlexibleIndicator_19.getString());
    FIX::FloorPrice FloorPrice_19;
    FloorPrice_19.setString("13789472");
    noRelatedSym_0_0.set(FloorPrice_19);
    Instrument_19.insert(FloorPrice_19.getString());
    FIX::FlowScheduleType FlowScheduleType_19(1);
    noRelatedSym_0_0.set(FlowScheduleType_19);
    Instrument_19.insert(FlowScheduleType_19.getString());
    FIX::InstrRegistry InstrRegistry_19("STRING_705381918");
    noRelatedSym_0_0.set(InstrRegistry_19);
    Instrument_19.insert(InstrRegistry_19.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_19('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_19);
    Instrument_19.insert(InstrmtAssignmentMethod_19.getString());
    FIX::InterestAccrualDate InterestAccrualDate_19("LOCALMKTDATE_1324593961");
    noRelatedSym_0_0.set(InterestAccrualDate_19);
    Instrument_19.insert(InterestAccrualDate_19.getString());
    FIX::IssueDate IssueDate_19("LOCALMKTDATE_179360803");
    noRelatedSym_0_0.set(IssueDate_19);
    Instrument_19.insert(IssueDate_19.getString());
    FIX::Issuer Issuer_19("STRING_74793100");
    noRelatedSym_0_0.set(Issuer_19);
    Instrument_19.insert(Issuer_19.getString());
    FIX::ListMethod ListMethod_19(0);
    noRelatedSym_0_0.set(ListMethod_19);
    Instrument_19.insert(ListMethod_19.getString());
    FIX::LocaleOfIssue LocaleOfIssue_19("STRING_444076371");
    noRelatedSym_0_0.set(LocaleOfIssue_19);
    Instrument_19.insert(LocaleOfIssue_19.getString());
    FIX::MaturityDate MaturityDate_19("LOCALMKTDATE_2145846214");
    noRelatedSym_0_0.set(MaturityDate_19);
    Instrument_19.insert(MaturityDate_19.getString());
    FIX::MaturityMonthYear MaturityMonthYear_19("MONTHYEAR_2126731143");
    noRelatedSym_0_0.set(MaturityMonthYear_19);
    Instrument_19.insert(MaturityMonthYear_19.getString());
    FIX::MaturityTime MaturityTime_19("TZTIMEONLY_455167193");
    noRelatedSym_0_0.set(MaturityTime_19);
    Instrument_19.insert(MaturityTime_19.getString());
    FIX::MinPriceIncrement MinPriceIncrement_19;
    MinPriceIncrement_19.setString("7510931");
    noRelatedSym_0_0.set(MinPriceIncrement_19);
    Instrument_19.insert(MinPriceIncrement_19.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_19;
    MinPriceIncrementAmount_19.setString("3229360");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_19);
    Instrument_19.insert(MinPriceIncrementAmount_19.getString());
    FIX::NTPositionLimit NTPositionLimit_19(1177134028);
    noRelatedSym_0_0.set(NTPositionLimit_19);
    Instrument_19.insert(NTPositionLimit_19.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_19;
    NotionalPercentageOutstanding_19.setString("25.270000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_19);
    Instrument_19.insert(NotionalPercentageOutstanding_19.getString());
    FIX::OptAttribute OptAttribute_19('1');
    noRelatedSym_0_0.set(OptAttribute_19);
    Instrument_19.insert(OptAttribute_19.getString());
    FIX::OptPayoutAmount OptPayoutAmount_19;
    OptPayoutAmount_19.setString("9590503");
    noRelatedSym_0_0.set(OptPayoutAmount_19);
    Instrument_19.insert(OptPayoutAmount_19.getString());
    FIX::OptPayoutType OptPayoutType_19(3);
    noRelatedSym_0_0.set(OptPayoutType_19);
    Instrument_19.insert(OptPayoutType_19.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_19;
    OriginalNotionalPercentageOutstanding_19.setString("81.130000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_19);
    Instrument_19.insert(OriginalNotionalPercentageOutstanding_19.getString());
    FIX::Pool Pool_19("STRING_112553437");
    noRelatedSym_0_0.set(Pool_19);
    Instrument_19.insert(Pool_19.getString());
    FIX::PositionLimit PositionLimit_19(1059845502);
    noRelatedSym_0_0.set(PositionLimit_19);
    Instrument_19.insert(PositionLimit_19.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_19("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_19);
    Instrument_19.insert(PriceQuoteMethod_19.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_19("STRING_85340140");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_19);
    Instrument_19.insert(PriceUnitOfMeasure_19.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_19;
    PriceUnitOfMeasureQty_19.setString("10119195");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_19);
    Instrument_19.insert(PriceUnitOfMeasureQty_19.getString());
    FIX::Product Product_21(11);
    noRelatedSym_0_0.set(Product_21);
    Instrument_19.insert(Product_21.getString());
    FIX::ProductComplex ProductComplex_19("STRING_1046732286");
    noRelatedSym_0_0.set(ProductComplex_19);
    Instrument_19.insert(ProductComplex_19.getString());
    FIX::PutOrCall PutOrCall_19(0);
    noRelatedSym_0_0.set(PutOrCall_19);
    Instrument_19.insert(PutOrCall_19.getString());
    FIX::RedemptionDate RedemptionDate_19("LOCALMKTDATE_1584456403");
    noRelatedSym_0_0.set(RedemptionDate_19);
    Instrument_19.insert(RedemptionDate_19.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_19("STRING_2056088379");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_19);
    Instrument_19.insert(RepoCollateralSecurityType_19.getString());
    FIX::RepurchaseRate RepurchaseRate_19;
    RepurchaseRate_19.setString("44.430000");
    noRelatedSym_0_0.set(RepurchaseRate_19);
    Instrument_19.insert(RepurchaseRate_19.getString());
    FIX::RepurchaseTerm RepurchaseTerm_19(815919989);
    noRelatedSym_0_0.set(RepurchaseTerm_19);
    Instrument_19.insert(RepurchaseTerm_19.getString());
    FIX::RestructuringType RestructuringType_19("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_19);
    Instrument_19.insert(RestructuringType_19.getString());
    FIX::SecurityDesc SecurityDesc_19("STRING_1699816361");
    noRelatedSym_0_0.set(SecurityDesc_19);
    Instrument_19.insert(SecurityDesc_19.getString());
    FIX::SecurityExchange SecurityExchange_19("EXCHANGE_352500995");
    noRelatedSym_0_0.set(SecurityExchange_19);
    Instrument_19.insert(SecurityExchange_19.getString());
    FIX::SecurityGroup SecurityGroup_19("STRING_260476630");
    noRelatedSym_0_0.set(SecurityGroup_19);
    Instrument_19.insert(SecurityGroup_19.getString());
    FIX::SecurityID SecurityID_19("STRING_1879177164");
    noRelatedSym_0_0.set(SecurityID_19);
    Instrument_19.insert(SecurityID_19.getString());
    FIX::SecurityIDSource SecurityIDSource_19("STRING_K");
    noRelatedSym_0_0.set(SecurityIDSource_19);
    Instrument_19.insert(SecurityIDSource_19.getString());
    FIX::SecurityStatus SecurityStatus_19("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_19);
    Instrument_19.insert(SecurityStatus_19.getString());
    FIX::SecuritySubType SecuritySubType_20("STRING_175769887");
    noRelatedSym_0_0.set(SecuritySubType_20);
    Instrument_19.insert(SecuritySubType_20.getString());
    FIX::SecurityType SecurityType_21("STRING_SPCLA");
    noRelatedSym_0_0.set(SecurityType_21);
    Instrument_19.insert(SecurityType_21.getString());
    FIX::Seniority Seniority_19("STRING_SB");
    noRelatedSym_0_0.set(Seniority_19);
    Instrument_19.insert(Seniority_19.getString());
    FIX::SettlMethod SettlMethod_19('P');
    noRelatedSym_0_0.set(SettlMethod_19);
    Instrument_19.insert(SettlMethod_19.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_19("STRING_1176749769");
    noRelatedSym_0_0.set(SettleOnOpenFlag_19);
    Instrument_19.insert(SettleOnOpenFlag_19.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_19("STRING_2114255486");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_19);
    Instrument_19.insert(StateOrProvinceOfIssue_19.getString());
    FIX::StrikeCurrency StrikeCurrency_19("USD");
    noRelatedSym_0_0.set(StrikeCurrency_19);
    Instrument_19.insert(StrikeCurrency_19.getString());
    FIX::StrikeMultiplier StrikeMultiplier_19;
    StrikeMultiplier_19.setString("17129301");
    noRelatedSym_0_0.set(StrikeMultiplier_19);
    Instrument_19.insert(StrikeMultiplier_19.getString());
    FIX::StrikePrice StrikePrice_19;
    StrikePrice_19.setString("6196378");
    noRelatedSym_0_0.set(StrikePrice_19);
    Instrument_19.insert(StrikePrice_19.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_19(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_19);
    Instrument_19.insert(StrikePriceBoundaryMethod_19.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_19;
    StrikePriceBoundaryPrecision_19.setString("46.130000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_19);
    Instrument_19.insert(StrikePriceBoundaryPrecision_19.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_19(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_19);
    Instrument_19.insert(StrikePriceDeterminationMethod_19.getString());
    FIX::StrikeValue StrikeValue_19;
    StrikeValue_19.setString("15474395");
    noRelatedSym_0_0.set(StrikeValue_19);
    Instrument_19.insert(StrikeValue_19.getString());
    FIX::Symbol Symbol_19("STRING_1294906384");
    noRelatedSym_0_0.set(Symbol_19);
    Instrument_19.insert(Symbol_19.getString());
    FIX::SymbolSfx SymbolSfx_19("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_19);
    Instrument_19.insert(SymbolSfx_19.getString());
    FIX::TimeUnit TimeUnit_19("STRING_Wk");
    noRelatedSym_0_0.set(TimeUnit_19);
    Instrument_19.insert(TimeUnit_19.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_19(3);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_19);
    Instrument_19.insert(UnderlyingPriceDeterminationMethod_19.getString());
    FIX::UnitOfMeasure UnitOfMeasure_19("STRING_tn");
    noRelatedSym_0_0.set(UnitOfMeasure_19);
    Instrument_19.insert(UnitOfMeasure_19.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_19;
    UnitOfMeasureQty_19.setString("11405971");
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
      FIX::ComplexEventCondition ComplexEventCondition_40(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventCondition_40.getString());
      FIX::ComplexEventPrice ComplexEventPrice_40;
      ComplexEventPrice_40.setString("548140");
      noComplexEvents_0_1_0.set(ComplexEventPrice_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPrice_40.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_40(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceBoundaryMethod_40.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_40;
      ComplexEventPriceBoundaryPrecision_40.setString("42.850000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceBoundaryPrecision_40.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_40(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceTimeType_40.getString());
      FIX::ComplexEventType ComplexEventType_40(2);
      noComplexEvents_0_1_0.set(ComplexEventType_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventType_40.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_40;
      ComplexOptPayoutAmount_40.setString("14190578");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexOptPayoutAmount_40.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_40);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_86;
        FIX::ComplexEventEndDate ComplexEventEndDate_86(FIX::UTCTIMESTAMP(17, 3, 52, 10, 52004));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_86);
        ComplexEventDates_NoComplexEventDates_86.insert(ComplexEventEndDate_86.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_86(FIX::UTCTIMESTAMP(4, 58, 10, 23, 52009));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_86);
        ComplexEventDates_NoComplexEventDates_86.insert(ComplexEventStartDate_86.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_86);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_176;
          FIX::ComplexEventEndTime ComplexEventEndTime_176(FIX::UTCTIMEONLY(11, 32, 26));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_176);
          ComplexEventTimes_NoComplexEventTimes_176.insert(ComplexEventEndTime_176.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_176(FIX::UTCTIMEONLY(22, 36, 55));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_176);
          ComplexEventTimes_NoComplexEventTimes_176.insert(ComplexEventStartTime_176.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_176);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_177;
          FIX::ComplexEventEndTime ComplexEventEndTime_177(FIX::UTCTIMEONLY(18, 26, 56));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_177);
          ComplexEventTimes_NoComplexEventTimes_177.insert(ComplexEventEndTime_177.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_177(FIX::UTCTIMEONLY(22, 17, 26));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_177);
          ComplexEventTimes_NoComplexEventTimes_177.insert(ComplexEventStartTime_177.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_177);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_178;
          FIX::ComplexEventEndTime ComplexEventEndTime_178(FIX::UTCTIMEONLY(2, 21, 9));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_178);
          ComplexEventTimes_NoComplexEventTimes_178.insert(ComplexEventEndTime_178.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_178(FIX::UTCTIMEONLY(13, 19, 44));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_178);
          ComplexEventTimes_NoComplexEventTimes_178.insert(ComplexEventStartTime_178.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_178);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_42;
      FIX::EventDate EventDate_42("LOCALMKTDATE_1746651189");
      noEvents_0_1_0.set(EventDate_42);
      EvntGrp_NoEvents_42.insert(EventDate_42.getString());
      FIX::EventPx EventPx_42;
      EventPx_42.setString("14342896");
      noEvents_0_1_0.set(EventPx_42);
      EvntGrp_NoEvents_42.insert(EventPx_42.getString());
      FIX::EventText EventText_42("STRING_1865964129");
      noEvents_0_1_0.set(EventText_42);
      EvntGrp_NoEvents_42.insert(EventText_42.getString());
      FIX::EventTime EventTime_42(FIX::UTCTIMESTAMP(13, 18, 6, 17, 72012));
      noEvents_0_1_0.set(EventTime_42);
      EvntGrp_NoEvents_42.insert(EventTime_42.getString());
      FIX::EventType EventType_42(16);
      noEvents_0_1_0.set(EventType_42);
      EvntGrp_NoEvents_42.insert(EventType_42.getString());
      all_values.push_back(EvntGrp_NoEvents_42);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_43;
      FIX::EventDate EventDate_43("LOCALMKTDATE_1767303796");
      noEvents_0_1_1.set(EventDate_43);
      EvntGrp_NoEvents_43.insert(EventDate_43.getString());
      FIX::EventPx EventPx_43;
      EventPx_43.setString("18603118");
      noEvents_0_1_1.set(EventPx_43);
      EvntGrp_NoEvents_43.insert(EventPx_43.getString());
      FIX::EventText EventText_43("STRING_866168782");
      noEvents_0_1_1.set(EventText_43);
      EvntGrp_NoEvents_43.insert(EventText_43.getString());
      FIX::EventTime EventTime_43(FIX::UTCTIMESTAMP(11, 40, 3, 7, 42012));
      noEvents_0_1_1.set(EventTime_43);
      EvntGrp_NoEvents_43.insert(EventTime_43.getString());
      FIX::EventType EventType_43(2);
      noEvents_0_1_1.set(EventType_43);
      EvntGrp_NoEvents_43.insert(EventType_43.getString());
      all_values.push_back(EvntGrp_NoEvents_43);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_44;
      FIX::EventDate EventDate_44("LOCALMKTDATE_725941068");
      noEvents_0_1_2.set(EventDate_44);
      EvntGrp_NoEvents_44.insert(EventDate_44.getString());
      FIX::EventPx EventPx_44;
      EventPx_44.setString("17868422");
      noEvents_0_1_2.set(EventPx_44);
      EvntGrp_NoEvents_44.insert(EventPx_44.getString());
      FIX::EventText EventText_44("STRING_665121882");
      noEvents_0_1_2.set(EventText_44);
      EvntGrp_NoEvents_44.insert(EventText_44.getString());
      FIX::EventTime EventTime_44(FIX::UTCTIMESTAMP(7, 7, 0, 23, 62003));
      noEvents_0_1_2.set(EventTime_44);
      EvntGrp_NoEvents_44.insert(EventTime_44.getString());
      FIX::EventType EventType_44(15);
      noEvents_0_1_2.set(EventType_44);
      EvntGrp_NoEvents_44.insert(EventType_44.getString());
      all_values.push_back(EvntGrp_NoEvents_44);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_35;
      FIX::InstrumentPartyID InstrumentPartyID_35("STRING_752481847");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_35);
      InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyID_35.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_35('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_35);
      InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyIDSource_35.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_35(1749328164);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_35);
      InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyRole_35.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_35);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67;
        FIX::InstrumentPartySubID InstrumentPartySubID_67("STRING_1854615548");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_67);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67.insert(InstrumentPartySubID_67.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_67(504345178);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_67);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67.insert(InstrumentPartySubIDType_67.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68;
        FIX::InstrumentPartySubID InstrumentPartySubID_68("STRING_370213469");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_68);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68.insert(InstrumentPartySubID_68.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_68(1470390335);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_68);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68.insert(InstrumentPartySubIDType_68.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69;
        FIX::InstrumentPartySubID InstrumentPartySubID_69("STRING_124165327");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_69);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69.insert(InstrumentPartySubID_69.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_69(83041702);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_69);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69.insert(InstrumentPartySubIDType_69.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_41;
      FIX::SecurityAltID SecurityAltID_41("STRING_596336534");
      noSecurityAltID_0_1_0.set(SecurityAltID_41);
      SecAltIDGrp_NoSecurityAltID_41.insert(SecurityAltID_41.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_41("STRING_1680440601");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_41);
      SecAltIDGrp_NoSecurityAltID_41.insert(SecurityAltIDSource_41.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_41);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_42;
      FIX::SecurityAltID SecurityAltID_42("STRING_866905710");
      noSecurityAltID_0_1_1.set(SecurityAltID_42);
      SecAltIDGrp_NoSecurityAltID_42.insert(SecurityAltID_42.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_42("STRING_1460739437");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_42);
      SecAltIDGrp_NoSecurityAltID_42.insert(SecurityAltIDSource_42.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_42);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_43;
      FIX::SecurityAltID SecurityAltID_43("STRING_1274757916");
      noSecurityAltID_0_1_2.set(SecurityAltID_43);
      SecAltIDGrp_NoSecurityAltID_43.insert(SecurityAltID_43.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_43("STRING_178141501");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_43);
      SecAltIDGrp_NoSecurityAltID_43.insert(SecurityAltIDSource_43.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_43);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_38;
    FIX::SecurityXML SecurityXML_39("XMLDATA_1988948189");
    noRelatedSym_0_0.set(SecurityXML_39);
    FIX::SecurityXMLLen SecurityXMLLen_19(1848086438);
    noRelatedSym_0_0.set(SecurityXMLLen_19);
    FIX::SecurityXMLSchema SecurityXMLSchema_19("STRING_904082569");
    noRelatedSym_0_0.set(SecurityXMLSchema_19);
    SecurityXML_38.insert(SecurityXMLSchema_19.getString());
    all_values.push_back(SecurityXML_38);

    // InstrumentExtension
    multiset<string> InstrumentExtension_6;
    FIX::DeliveryForm DeliveryForm_6(1);
    noRelatedSym_0_0.set(DeliveryForm_6);
    InstrumentExtension_6.insert(DeliveryForm_6.getString());
    FIX::PctAtRisk PctAtRisk_6;
    PctAtRisk_6.setString("46.720000");
    noRelatedSym_0_0.set(PctAtRisk_6);
    InstrumentExtension_6.insert(PctAtRisk_6.getString());
    all_values.push_back(InstrumentExtension_6);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_12;
      FIX::InstrAttribType InstrAttribType_12(19);
      noInstrAttrib_0_1_0.set(InstrAttribType_12);
      AttrbGrp_NoInstrAttrib_12.insert(InstrAttribType_12.getString());
      FIX::InstrAttribValue InstrAttribValue_12("STRING_1412171840");
      noInstrAttrib_0_1_0.set(InstrAttribValue_12);
      AttrbGrp_NoInstrAttrib_12.insert(InstrAttribValue_12.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_12);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_13;
      FIX::InstrAttribType InstrAttribType_13(9);
      noInstrAttrib_0_1_1.set(InstrAttribType_13);
      AttrbGrp_NoInstrAttrib_13.insert(InstrAttribType_13.getString());
      FIX::InstrAttribValue InstrAttribValue_13("STRING_361669387");
      noInstrAttrib_0_1_1.set(InstrAttribValue_13);
      AttrbGrp_NoInstrAttrib_13.insert(InstrAttribValue_13.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_13);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_14;
      FIX::InstrAttribType InstrAttribType_14(18);
      noInstrAttrib_0_1_2.set(InstrAttribType_14);
      AttrbGrp_NoInstrAttrib_14.insert(InstrAttribType_14.getString());
      FIX::InstrAttribValue InstrAttribValue_14("STRING_894288520");
      noInstrAttrib_0_1_2.set(InstrAttribValue_14);
      AttrbGrp_NoInstrAttrib_14.insert(InstrAttribValue_14.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_14);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_2;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_2;
    SecondaryHighLimitPrice_2.setString("17005319");
    noRelatedSym_0_0.set(SecondaryHighLimitPrice_2);
    SecondaryPriceLimits_2.insert(SecondaryHighLimitPrice_2.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_2;
    SecondaryLowLimitPrice_2.setString("6882747");
    noRelatedSym_0_0.set(SecondaryLowLimitPrice_2);
    SecondaryPriceLimits_2.insert(SecondaryLowLimitPrice_2.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_2(1646770367);
    noRelatedSym_0_0.set(SecondaryPriceLimitType_2);
    SecondaryPriceLimits_2.insert(SecondaryPriceLimitType_2.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_2;
    SecondaryTradingReferencePrice_2.setString("12694146");
    noRelatedSym_0_0.set(SecondaryTradingReferencePrice_2);
    SecondaryPriceLimits_2.insert(SecondaryTradingReferencePrice_2.getString());
    all_values.push_back(SecondaryPriceLimits_2);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_1;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_1;
    FIX::CorporateAction CorporateAction_3("MULTIPLECHARVALUE_W");
    noRelatedSym_0_1.set(CorporateAction_3);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(CorporateAction_3.getString());
    FIX::Currency Currency_18("CAN");
    noRelatedSym_0_1.set(Currency_18);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(Currency_18.getString());
    FIX::EncodedText EncodedText_32("DATA_794464417");
    noRelatedSym_0_1.set(EncodedText_32);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(EncodedText_32.getString());
    FIX::EncodedTextLen EncodedTextLen_32(209158393);
    noRelatedSym_0_1.set(EncodedTextLen_32);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(EncodedTextLen_32.getString());
    FIX::ListUpdateAction ListUpdateAction_1('2');
    noRelatedSym_0_1.set(ListUpdateAction_1);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(ListUpdateAction_1.getString());
    FIX::RelSymTransactTime RelSymTransactTime_3(FIX::UTCTIMESTAMP(23, 47, 58, 12, 62001));
    noRelatedSym_0_1.set(RelSymTransactTime_3);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(RelSymTransactTime_3.getString());
    FIX::Text Text_32("STRING_1099914965");
    noRelatedSym_0_1.set(Text_32);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(Text_32.getString());
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_32;
      FIX::EncodedLegIssuer EncodedLegIssuer_32("DATA_669686609");
      noLegs_1_1_0.set(EncodedLegIssuer_32);
      InstrumentLeg_32.insert(EncodedLegIssuer_32.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_32(800517755);
      noLegs_1_1_0.set(EncodedLegIssuerLen_32);
      InstrumentLeg_32.insert(EncodedLegIssuerLen_32.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_32("DATA_290174820");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_32);
      InstrumentLeg_32.insert(EncodedLegSecurityDesc_32.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_32(150509793);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_32);
      InstrumentLeg_32.insert(EncodedLegSecurityDescLen_32.getString());
      FIX::LegCFICode LegCFICode_32("STRING_1166242427");
      noLegs_1_1_0.set(LegCFICode_32);
      InstrumentLeg_32.insert(LegCFICode_32.getString());
      FIX::LegContractMultiplier LegContractMultiplier_32;
      LegContractMultiplier_32.setString("14650719");
      noLegs_1_1_0.set(LegContractMultiplier_32);
      InstrumentLeg_32.insert(LegContractMultiplier_32.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_32(607606281);
      noLegs_1_1_0.set(LegContractMultiplierUnit_32);
      InstrumentLeg_32.insert(LegContractMultiplierUnit_32.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_32("MONTHYEAR_430930619");
      noLegs_1_1_0.set(LegContractSettlMonth_32);
      InstrumentLeg_32.insert(LegContractSettlMonth_32.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_32("COUNTRY_552597429");
      noLegs_1_1_0.set(LegCountryOfIssue_32);
      InstrumentLeg_32.insert(LegCountryOfIssue_32.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_32("LOCALMKTDATE_969275669");
      noLegs_1_1_0.set(LegCouponPaymentDate_32);
      InstrumentLeg_32.insert(LegCouponPaymentDate_32.getString());
      FIX::LegCouponRate LegCouponRate_32;
      LegCouponRate_32.setString("18.360000");
      noLegs_1_1_0.set(LegCouponRate_32);
      InstrumentLeg_32.insert(LegCouponRate_32.getString());
      FIX::LegCreditRating LegCreditRating_32("STRING_1446885949");
      noLegs_1_1_0.set(LegCreditRating_32);
      InstrumentLeg_32.insert(LegCreditRating_32.getString());
      FIX::LegCurrency LegCurrency_32("CHF");
      noLegs_1_1_0.set(LegCurrency_32);
      InstrumentLeg_32.insert(LegCurrency_32.getString());
      FIX::LegDatedDate LegDatedDate_32("LOCALMKTDATE_946172668");
      noLegs_1_1_0.set(LegDatedDate_32);
      InstrumentLeg_32.insert(LegDatedDate_32.getString());
      FIX::LegExerciseStyle LegExerciseStyle_32(1791738611);
      noLegs_1_1_0.set(LegExerciseStyle_32);
      InstrumentLeg_32.insert(LegExerciseStyle_32.getString());
      FIX::LegFactor LegFactor_32;
      LegFactor_32.setString("15265657");
      noLegs_1_1_0.set(LegFactor_32);
      InstrumentLeg_32.insert(LegFactor_32.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_32(785117592);
      noLegs_1_1_0.set(LegFlowScheduleType_32);
      InstrumentLeg_32.insert(LegFlowScheduleType_32.getString());
      FIX::LegInstrRegistry LegInstrRegistry_32("STRING_620801493");
      noLegs_1_1_0.set(LegInstrRegistry_32);
      InstrumentLeg_32.insert(LegInstrRegistry_32.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_32("LOCALMKTDATE_173546568");
      noLegs_1_1_0.set(LegInterestAccrualDate_32);
      InstrumentLeg_32.insert(LegInterestAccrualDate_32.getString());
      FIX::LegIssueDate LegIssueDate_32("LOCALMKTDATE_994275986");
      noLegs_1_1_0.set(LegIssueDate_32);
      InstrumentLeg_32.insert(LegIssueDate_32.getString());
      FIX::LegIssuer LegIssuer_32("STRING_920254710");
      noLegs_1_1_0.set(LegIssuer_32);
      InstrumentLeg_32.insert(LegIssuer_32.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_32("STRING_1092176312");
      noLegs_1_1_0.set(LegLocaleOfIssue_32);
      InstrumentLeg_32.insert(LegLocaleOfIssue_32.getString());
      FIX::LegMaturityDate LegMaturityDate_32("LOCALMKTDATE_1286476081");
      noLegs_1_1_0.set(LegMaturityDate_32);
      InstrumentLeg_32.insert(LegMaturityDate_32.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_32("MONTHYEAR_1408783397");
      noLegs_1_1_0.set(LegMaturityMonthYear_32);
      InstrumentLeg_32.insert(LegMaturityMonthYear_32.getString());
      FIX::LegMaturityTime LegMaturityTime_32("TZTIMEONLY_459658943");
      noLegs_1_1_0.set(LegMaturityTime_32);
      InstrumentLeg_32.insert(LegMaturityTime_32.getString());
      FIX::LegOptAttribute LegOptAttribute_32('1');
      noLegs_1_1_0.set(LegOptAttribute_32);
      InstrumentLeg_32.insert(LegOptAttribute_32.getString());
      FIX::LegOptionRatio LegOptionRatio_32;
      LegOptionRatio_32.setString("6167341");
      noLegs_1_1_0.set(LegOptionRatio_32);
      InstrumentLeg_32.insert(LegOptionRatio_32.getString());
      FIX::LegPool LegPool_32("STRING_1287881010");
      noLegs_1_1_0.set(LegPool_32);
      InstrumentLeg_32.insert(LegPool_32.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_32("STRING_64064447");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_32);
      InstrumentLeg_32.insert(LegPriceUnitOfMeasure_32.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_32;
      LegPriceUnitOfMeasureQty_32.setString("28263");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_32);
      InstrumentLeg_32.insert(LegPriceUnitOfMeasureQty_32.getString());
      FIX::LegProduct LegProduct_32(1957567619);
      noLegs_1_1_0.set(LegProduct_32);
      InstrumentLeg_32.insert(LegProduct_32.getString());
      FIX::LegPutOrCall LegPutOrCall_32(864582202);
      noLegs_1_1_0.set(LegPutOrCall_32);
      InstrumentLeg_32.insert(LegPutOrCall_32.getString());
      FIX::LegRatioQty LegRatioQty_32;
      LegRatioQty_32.setString("2930012");
      noLegs_1_1_0.set(LegRatioQty_32);
      InstrumentLeg_32.insert(LegRatioQty_32.getString());
      FIX::LegRedemptionDate LegRedemptionDate_32("LOCALMKTDATE_2108077413");
      noLegs_1_1_0.set(LegRedemptionDate_32);
      InstrumentLeg_32.insert(LegRedemptionDate_32.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_32("STRING_2030824629");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_32);
      InstrumentLeg_32.insert(LegRepoCollateralSecurityType_32.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_32;
      LegRepurchaseRate_32.setString("32.170000");
      noLegs_1_1_0.set(LegRepurchaseRate_32);
      InstrumentLeg_32.insert(LegRepurchaseRate_32.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_32(568200046);
      noLegs_1_1_0.set(LegRepurchaseTerm_32);
      InstrumentLeg_32.insert(LegRepurchaseTerm_32.getString());
      FIX::LegSecurityDesc LegSecurityDesc_32("STRING_314271601");
      noLegs_1_1_0.set(LegSecurityDesc_32);
      InstrumentLeg_32.insert(LegSecurityDesc_32.getString());
      FIX::LegSecurityExchange LegSecurityExchange_32("EXCHANGE_163186998");
      noLegs_1_1_0.set(LegSecurityExchange_32);
      InstrumentLeg_32.insert(LegSecurityExchange_32.getString());
      FIX::LegSecurityID LegSecurityID_32("STRING_1537475715");
      noLegs_1_1_0.set(LegSecurityID_32);
      InstrumentLeg_32.insert(LegSecurityID_32.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_32("STRING_862443437");
      noLegs_1_1_0.set(LegSecurityIDSource_32);
      InstrumentLeg_32.insert(LegSecurityIDSource_32.getString());
      FIX::LegSecuritySubType LegSecuritySubType_32("STRING_1610072948");
      noLegs_1_1_0.set(LegSecuritySubType_32);
      InstrumentLeg_32.insert(LegSecuritySubType_32.getString());
      FIX::LegSecurityType LegSecurityType_32("STRING_2059799698");
      noLegs_1_1_0.set(LegSecurityType_32);
      InstrumentLeg_32.insert(LegSecurityType_32.getString());
      FIX::LegSide LegSide_32('2');
      noLegs_1_1_0.set(LegSide_32);
      InstrumentLeg_32.insert(LegSide_32.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_32("STRING_408761968");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_32);
      InstrumentLeg_32.insert(LegStateOrProvinceOfIssue_32.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_32("EUR");
      noLegs_1_1_0.set(LegStrikeCurrency_32);
      InstrumentLeg_32.insert(LegStrikeCurrency_32.getString());
      FIX::LegStrikePrice LegStrikePrice_32;
      LegStrikePrice_32.setString("11938795");
      noLegs_1_1_0.set(LegStrikePrice_32);
      InstrumentLeg_32.insert(LegStrikePrice_32.getString());
      FIX::LegSymbol LegSymbol_32("STRING_177372506");
      noLegs_1_1_0.set(LegSymbol_32);
      InstrumentLeg_32.insert(LegSymbol_32.getString());
      FIX::LegSymbolSfx LegSymbolSfx_32("STRING_1651518715");
      noLegs_1_1_0.set(LegSymbolSfx_32);
      InstrumentLeg_32.insert(LegSymbolSfx_32.getString());
      FIX::LegTimeUnit LegTimeUnit_32("STRING_40671899");
      noLegs_1_1_0.set(LegTimeUnit_32);
      InstrumentLeg_32.insert(LegTimeUnit_32.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_32("STRING_1097627216");
      noLegs_1_1_0.set(LegUnitOfMeasure_32);
      InstrumentLeg_32.insert(LegUnitOfMeasure_32.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_32;
      LegUnitOfMeasureQty_32.setString("5962113");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_32);
      InstrumentLeg_32.insert(LegUnitOfMeasureQty_32.getString());
      all_values.push_back(InstrumentLeg_32);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_56;
        FIX::LegSecurityAltID LegSecurityAltID_56("STRING_358926965");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_56);
        LegSecAltIDGrp_NoLegSecurityAltID_56.insert(LegSecurityAltID_56.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_56("STRING_1055870323");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_56);
        LegSecAltIDGrp_NoLegSecurityAltID_56.insert(LegSecurityAltIDSource_56.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_56);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_33;
      FIX::EncodedLegIssuer EncodedLegIssuer_33("DATA_291297462");
      noLegs_1_1_1.set(EncodedLegIssuer_33);
      InstrumentLeg_33.insert(EncodedLegIssuer_33.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_33(975661112);
      noLegs_1_1_1.set(EncodedLegIssuerLen_33);
      InstrumentLeg_33.insert(EncodedLegIssuerLen_33.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_33("DATA_196267685");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_33);
      InstrumentLeg_33.insert(EncodedLegSecurityDesc_33.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_33(355361909);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_33);
      InstrumentLeg_33.insert(EncodedLegSecurityDescLen_33.getString());
      FIX::LegCFICode LegCFICode_33("STRING_978487509");
      noLegs_1_1_1.set(LegCFICode_33);
      InstrumentLeg_33.insert(LegCFICode_33.getString());
      FIX::LegContractMultiplier LegContractMultiplier_33;
      LegContractMultiplier_33.setString("63516");
      noLegs_1_1_1.set(LegContractMultiplier_33);
      InstrumentLeg_33.insert(LegContractMultiplier_33.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_33(1219944111);
      noLegs_1_1_1.set(LegContractMultiplierUnit_33);
      InstrumentLeg_33.insert(LegContractMultiplierUnit_33.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_33("MONTHYEAR_1271488727");
      noLegs_1_1_1.set(LegContractSettlMonth_33);
      InstrumentLeg_33.insert(LegContractSettlMonth_33.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_33("COUNTRY_2114429070");
      noLegs_1_1_1.set(LegCountryOfIssue_33);
      InstrumentLeg_33.insert(LegCountryOfIssue_33.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_33("LOCALMKTDATE_1103285093");
      noLegs_1_1_1.set(LegCouponPaymentDate_33);
      InstrumentLeg_33.insert(LegCouponPaymentDate_33.getString());
      FIX::LegCouponRate LegCouponRate_33;
      LegCouponRate_33.setString("82.960000");
      noLegs_1_1_1.set(LegCouponRate_33);
      InstrumentLeg_33.insert(LegCouponRate_33.getString());
      FIX::LegCreditRating LegCreditRating_33("STRING_535145468");
      noLegs_1_1_1.set(LegCreditRating_33);
      InstrumentLeg_33.insert(LegCreditRating_33.getString());
      FIX::LegCurrency LegCurrency_33("CHF");
      noLegs_1_1_1.set(LegCurrency_33);
      InstrumentLeg_33.insert(LegCurrency_33.getString());
      FIX::LegDatedDate LegDatedDate_33("LOCALMKTDATE_2072621184");
      noLegs_1_1_1.set(LegDatedDate_33);
      InstrumentLeg_33.insert(LegDatedDate_33.getString());
      FIX::LegExerciseStyle LegExerciseStyle_33(132516483);
      noLegs_1_1_1.set(LegExerciseStyle_33);
      InstrumentLeg_33.insert(LegExerciseStyle_33.getString());
      FIX::LegFactor LegFactor_33;
      LegFactor_33.setString("5078545");
      noLegs_1_1_1.set(LegFactor_33);
      InstrumentLeg_33.insert(LegFactor_33.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_33(1984937234);
      noLegs_1_1_1.set(LegFlowScheduleType_33);
      InstrumentLeg_33.insert(LegFlowScheduleType_33.getString());
      FIX::LegInstrRegistry LegInstrRegistry_33("STRING_83922832");
      noLegs_1_1_1.set(LegInstrRegistry_33);
      InstrumentLeg_33.insert(LegInstrRegistry_33.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_33("LOCALMKTDATE_916616563");
      noLegs_1_1_1.set(LegInterestAccrualDate_33);
      InstrumentLeg_33.insert(LegInterestAccrualDate_33.getString());
      FIX::LegIssueDate LegIssueDate_33("LOCALMKTDATE_1541508247");
      noLegs_1_1_1.set(LegIssueDate_33);
      InstrumentLeg_33.insert(LegIssueDate_33.getString());
      FIX::LegIssuer LegIssuer_33("STRING_1561894980");
      noLegs_1_1_1.set(LegIssuer_33);
      InstrumentLeg_33.insert(LegIssuer_33.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_33("STRING_2110496124");
      noLegs_1_1_1.set(LegLocaleOfIssue_33);
      InstrumentLeg_33.insert(LegLocaleOfIssue_33.getString());
      FIX::LegMaturityDate LegMaturityDate_33("LOCALMKTDATE_1718880754");
      noLegs_1_1_1.set(LegMaturityDate_33);
      InstrumentLeg_33.insert(LegMaturityDate_33.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_33("MONTHYEAR_1065930047");
      noLegs_1_1_1.set(LegMaturityMonthYear_33);
      InstrumentLeg_33.insert(LegMaturityMonthYear_33.getString());
      FIX::LegMaturityTime LegMaturityTime_33("TZTIMEONLY_3684375");
      noLegs_1_1_1.set(LegMaturityTime_33);
      InstrumentLeg_33.insert(LegMaturityTime_33.getString());
      FIX::LegOptAttribute LegOptAttribute_33('6');
      noLegs_1_1_1.set(LegOptAttribute_33);
      InstrumentLeg_33.insert(LegOptAttribute_33.getString());
      FIX::LegOptionRatio LegOptionRatio_33;
      LegOptionRatio_33.setString("16621414");
      noLegs_1_1_1.set(LegOptionRatio_33);
      InstrumentLeg_33.insert(LegOptionRatio_33.getString());
      FIX::LegPool LegPool_33("STRING_1330832356");
      noLegs_1_1_1.set(LegPool_33);
      InstrumentLeg_33.insert(LegPool_33.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_33("STRING_1027951288");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_33);
      InstrumentLeg_33.insert(LegPriceUnitOfMeasure_33.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_33;
      LegPriceUnitOfMeasureQty_33.setString("5705281");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_33);
      InstrumentLeg_33.insert(LegPriceUnitOfMeasureQty_33.getString());
      FIX::LegProduct LegProduct_33(1622129818);
      noLegs_1_1_1.set(LegProduct_33);
      InstrumentLeg_33.insert(LegProduct_33.getString());
      FIX::LegPutOrCall LegPutOrCall_33(2003612400);
      noLegs_1_1_1.set(LegPutOrCall_33);
      InstrumentLeg_33.insert(LegPutOrCall_33.getString());
      FIX::LegRatioQty LegRatioQty_33;
      LegRatioQty_33.setString("7667957");
      noLegs_1_1_1.set(LegRatioQty_33);
      InstrumentLeg_33.insert(LegRatioQty_33.getString());
      FIX::LegRedemptionDate LegRedemptionDate_33("LOCALMKTDATE_1977491728");
      noLegs_1_1_1.set(LegRedemptionDate_33);
      InstrumentLeg_33.insert(LegRedemptionDate_33.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_33("STRING_834616261");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_33);
      InstrumentLeg_33.insert(LegRepoCollateralSecurityType_33.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_33;
      LegRepurchaseRate_33.setString("74.450000");
      noLegs_1_1_1.set(LegRepurchaseRate_33);
      InstrumentLeg_33.insert(LegRepurchaseRate_33.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_33(1049952191);
      noLegs_1_1_1.set(LegRepurchaseTerm_33);
      InstrumentLeg_33.insert(LegRepurchaseTerm_33.getString());
      FIX::LegSecurityDesc LegSecurityDesc_33("STRING_2106104989");
      noLegs_1_1_1.set(LegSecurityDesc_33);
      InstrumentLeg_33.insert(LegSecurityDesc_33.getString());
      FIX::LegSecurityExchange LegSecurityExchange_33("EXCHANGE_740092867");
      noLegs_1_1_1.set(LegSecurityExchange_33);
      InstrumentLeg_33.insert(LegSecurityExchange_33.getString());
      FIX::LegSecurityID LegSecurityID_33("STRING_5753636");
      noLegs_1_1_1.set(LegSecurityID_33);
      InstrumentLeg_33.insert(LegSecurityID_33.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_33("STRING_840699637");
      noLegs_1_1_1.set(LegSecurityIDSource_33);
      InstrumentLeg_33.insert(LegSecurityIDSource_33.getString());
      FIX::LegSecuritySubType LegSecuritySubType_33("STRING_1275238335");
      noLegs_1_1_1.set(LegSecuritySubType_33);
      InstrumentLeg_33.insert(LegSecuritySubType_33.getString());
      FIX::LegSecurityType LegSecurityType_33("STRING_1423310330");
      noLegs_1_1_1.set(LegSecurityType_33);
      InstrumentLeg_33.insert(LegSecurityType_33.getString());
      FIX::LegSide LegSide_33('1');
      noLegs_1_1_1.set(LegSide_33);
      InstrumentLeg_33.insert(LegSide_33.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_33("STRING_1200375871");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_33);
      InstrumentLeg_33.insert(LegStateOrProvinceOfIssue_33.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_33("CAN");
      noLegs_1_1_1.set(LegStrikeCurrency_33);
      InstrumentLeg_33.insert(LegStrikeCurrency_33.getString());
      FIX::LegStrikePrice LegStrikePrice_33;
      LegStrikePrice_33.setString("10378294");
      noLegs_1_1_1.set(LegStrikePrice_33);
      InstrumentLeg_33.insert(LegStrikePrice_33.getString());
      FIX::LegSymbol LegSymbol_33("STRING_1639749646");
      noLegs_1_1_1.set(LegSymbol_33);
      InstrumentLeg_33.insert(LegSymbol_33.getString());
      FIX::LegSymbolSfx LegSymbolSfx_33("STRING_1162952443");
      noLegs_1_1_1.set(LegSymbolSfx_33);
      InstrumentLeg_33.insert(LegSymbolSfx_33.getString());
      FIX::LegTimeUnit LegTimeUnit_33("STRING_431854057");
      noLegs_1_1_1.set(LegTimeUnit_33);
      InstrumentLeg_33.insert(LegTimeUnit_33.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_33("STRING_1054160978");
      noLegs_1_1_1.set(LegUnitOfMeasure_33);
      InstrumentLeg_33.insert(LegUnitOfMeasure_33.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_33;
      LegUnitOfMeasureQty_33.setString("11259649");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_33);
      InstrumentLeg_33.insert(LegUnitOfMeasureQty_33.getString());
      all_values.push_back(InstrumentLeg_33);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_57;
        FIX::LegSecurityAltID LegSecurityAltID_57("STRING_2120091026");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_57);
        LegSecAltIDGrp_NoLegSecurityAltID_57.insert(LegSecurityAltID_57.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_57("STRING_1129649295");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_57);
        LegSecAltIDGrp_NoLegSecurityAltID_57.insert(LegSecurityAltIDSource_57.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_57);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_20;
    FIX::AttachmentPoint AttachmentPoint_20;
    AttachmentPoint_20.setString("54.850000");
    noRelatedSym_0_1.set(AttachmentPoint_20);
    Instrument_20.insert(AttachmentPoint_20.getString());
    FIX::CFICode CFICode_20("STRING_1634748805");
    noRelatedSym_0_1.set(CFICode_20);
    Instrument_20.insert(CFICode_20.getString());
    FIX::CPProgram CPProgram_20(99);
    noRelatedSym_0_1.set(CPProgram_20);
    Instrument_20.insert(CPProgram_20.getString());
    FIX::CPRegType CPRegType_20("STRING_1700226773");
    noRelatedSym_0_1.set(CPRegType_20);
    Instrument_20.insert(CPRegType_20.getString());
    FIX::CapPrice CapPrice_20;
    CapPrice_20.setString("577932");
    noRelatedSym_0_1.set(CapPrice_20);
    Instrument_20.insert(CapPrice_20.getString());
    FIX::ContractMultiplier ContractMultiplier_20;
    ContractMultiplier_20.setString("19351278");
    noRelatedSym_0_1.set(ContractMultiplier_20);
    Instrument_20.insert(ContractMultiplier_20.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_20(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_20);
    Instrument_20.insert(ContractMultiplierUnit_20.getString());
    FIX::ContractSettlMonth ContractSettlMonth_20("MONTHYEAR_824589048");
    noRelatedSym_0_1.set(ContractSettlMonth_20);
    Instrument_20.insert(ContractSettlMonth_20.getString());
    FIX::CountryOfIssue CountryOfIssue_20("COUNTRY_1765135901");
    noRelatedSym_0_1.set(CountryOfIssue_20);
    Instrument_20.insert(CountryOfIssue_20.getString());
    FIX::CouponPaymentDate CouponPaymentDate_20("LOCALMKTDATE_243488139");
    noRelatedSym_0_1.set(CouponPaymentDate_20);
    Instrument_20.insert(CouponPaymentDate_20.getString());
    FIX::CouponRate CouponRate_20;
    CouponRate_20.setString("64.930000");
    noRelatedSym_0_1.set(CouponRate_20);
    Instrument_20.insert(CouponRate_20.getString());
    FIX::CreditRating CreditRating_20("STRING_667604445");
    noRelatedSym_0_1.set(CreditRating_20);
    Instrument_20.insert(CreditRating_20.getString());
    FIX::DatedDate DatedDate_20("LOCALMKTDATE_202109480");
    noRelatedSym_0_1.set(DatedDate_20);
    Instrument_20.insert(DatedDate_20.getString());
    FIX::DetachmentPoint DetachmentPoint_20;
    DetachmentPoint_20.setString("57.120000");
    noRelatedSym_0_1.set(DetachmentPoint_20);
    Instrument_20.insert(DetachmentPoint_20.getString());
    FIX::EncodedIssuer EncodedIssuer_20("DATA_673358081");
    noRelatedSym_0_1.set(EncodedIssuer_20);
    Instrument_20.insert(EncodedIssuer_20.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_20(1042809117);
    noRelatedSym_0_1.set(EncodedIssuerLen_20);
    Instrument_20.insert(EncodedIssuerLen_20.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_20("DATA_1465584047");
    noRelatedSym_0_1.set(EncodedSecurityDesc_20);
    Instrument_20.insert(EncodedSecurityDesc_20.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_20(2096668412);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_20);
    Instrument_20.insert(EncodedSecurityDescLen_20.getString());
    FIX::ExerciseStyle ExerciseStyle_20(0);
    noRelatedSym_0_1.set(ExerciseStyle_20);
    Instrument_20.insert(ExerciseStyle_20.getString());
    FIX::Factor Factor_20;
    Factor_20.setString("5184762");
    noRelatedSym_0_1.set(Factor_20);
    Instrument_20.insert(Factor_20.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_20(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_20);
    Instrument_20.insert(FlexProductEligibilityIndicator_20.getString());
    FIX::FlexibleIndicator FlexibleIndicator_20(false);
    noRelatedSym_0_1.set(FlexibleIndicator_20);
    Instrument_20.insert(FlexibleIndicator_20.getString());
    FIX::FloorPrice FloorPrice_20;
    FloorPrice_20.setString("15563057");
    noRelatedSym_0_1.set(FloorPrice_20);
    Instrument_20.insert(FloorPrice_20.getString());
    FIX::FlowScheduleType FlowScheduleType_20(1);
    noRelatedSym_0_1.set(FlowScheduleType_20);
    Instrument_20.insert(FlowScheduleType_20.getString());
    FIX::InstrRegistry InstrRegistry_20("STRING_43095076");
    noRelatedSym_0_1.set(InstrRegistry_20);
    Instrument_20.insert(InstrRegistry_20.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_20('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_20);
    Instrument_20.insert(InstrmtAssignmentMethod_20.getString());
    FIX::InterestAccrualDate InterestAccrualDate_20("LOCALMKTDATE_2051438555");
    noRelatedSym_0_1.set(InterestAccrualDate_20);
    Instrument_20.insert(InterestAccrualDate_20.getString());
    FIX::IssueDate IssueDate_20("LOCALMKTDATE_1169059996");
    noRelatedSym_0_1.set(IssueDate_20);
    Instrument_20.insert(IssueDate_20.getString());
    FIX::Issuer Issuer_20("STRING_1991410948");
    noRelatedSym_0_1.set(Issuer_20);
    Instrument_20.insert(Issuer_20.getString());
    FIX::ListMethod ListMethod_20(1);
    noRelatedSym_0_1.set(ListMethod_20);
    Instrument_20.insert(ListMethod_20.getString());
    FIX::LocaleOfIssue LocaleOfIssue_20("STRING_151225643");
    noRelatedSym_0_1.set(LocaleOfIssue_20);
    Instrument_20.insert(LocaleOfIssue_20.getString());
    FIX::MaturityDate MaturityDate_20("LOCALMKTDATE_516202786");
    noRelatedSym_0_1.set(MaturityDate_20);
    Instrument_20.insert(MaturityDate_20.getString());
    FIX::MaturityMonthYear MaturityMonthYear_20("MONTHYEAR_1511311090");
    noRelatedSym_0_1.set(MaturityMonthYear_20);
    Instrument_20.insert(MaturityMonthYear_20.getString());
    FIX::MaturityTime MaturityTime_20("TZTIMEONLY_464223646");
    noRelatedSym_0_1.set(MaturityTime_20);
    Instrument_20.insert(MaturityTime_20.getString());
    FIX::MinPriceIncrement MinPriceIncrement_20;
    MinPriceIncrement_20.setString("689459");
    noRelatedSym_0_1.set(MinPriceIncrement_20);
    Instrument_20.insert(MinPriceIncrement_20.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_20;
    MinPriceIncrementAmount_20.setString("15691043");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_20);
    Instrument_20.insert(MinPriceIncrementAmount_20.getString());
    FIX::NTPositionLimit NTPositionLimit_20(251867819);
    noRelatedSym_0_1.set(NTPositionLimit_20);
    Instrument_20.insert(NTPositionLimit_20.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_20;
    NotionalPercentageOutstanding_20.setString("14.370000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_20);
    Instrument_20.insert(NotionalPercentageOutstanding_20.getString());
    FIX::OptAttribute OptAttribute_20('2');
    noRelatedSym_0_1.set(OptAttribute_20);
    Instrument_20.insert(OptAttribute_20.getString());
    FIX::OptPayoutAmount OptPayoutAmount_20;
    OptPayoutAmount_20.setString("20170037");
    noRelatedSym_0_1.set(OptPayoutAmount_20);
    Instrument_20.insert(OptPayoutAmount_20.getString());
    FIX::OptPayoutType OptPayoutType_20(3);
    noRelatedSym_0_1.set(OptPayoutType_20);
    Instrument_20.insert(OptPayoutType_20.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_20;
    OriginalNotionalPercentageOutstanding_20.setString("62.430000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_20);
    Instrument_20.insert(OriginalNotionalPercentageOutstanding_20.getString());
    FIX::Pool Pool_20("STRING_537124518");
    noRelatedSym_0_1.set(Pool_20);
    Instrument_20.insert(Pool_20.getString());
    FIX::PositionLimit PositionLimit_20(2070899056);
    noRelatedSym_0_1.set(PositionLimit_20);
    Instrument_20.insert(PositionLimit_20.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_20("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_20);
    Instrument_20.insert(PriceQuoteMethod_20.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_20("STRING_1210482599");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_20);
    Instrument_20.insert(PriceUnitOfMeasure_20.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_20;
    PriceUnitOfMeasureQty_20.setString("9662245");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_20);
    Instrument_20.insert(PriceUnitOfMeasureQty_20.getString());
    FIX::Product Product_22(3);
    noRelatedSym_0_1.set(Product_22);
    Instrument_20.insert(Product_22.getString());
    FIX::ProductComplex ProductComplex_20("STRING_1159667363");
    noRelatedSym_0_1.set(ProductComplex_20);
    Instrument_20.insert(ProductComplex_20.getString());
    FIX::PutOrCall PutOrCall_20(1);
    noRelatedSym_0_1.set(PutOrCall_20);
    Instrument_20.insert(PutOrCall_20.getString());
    FIX::RedemptionDate RedemptionDate_20("LOCALMKTDATE_1870868626");
    noRelatedSym_0_1.set(RedemptionDate_20);
    Instrument_20.insert(RedemptionDate_20.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_20("STRING_517195293");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_20);
    Instrument_20.insert(RepoCollateralSecurityType_20.getString());
    FIX::RepurchaseRate RepurchaseRate_20;
    RepurchaseRate_20.setString("75.610000");
    noRelatedSym_0_1.set(RepurchaseRate_20);
    Instrument_20.insert(RepurchaseRate_20.getString());
    FIX::RepurchaseTerm RepurchaseTerm_20(1279690706);
    noRelatedSym_0_1.set(RepurchaseTerm_20);
    Instrument_20.insert(RepurchaseTerm_20.getString());
    FIX::RestructuringType RestructuringType_20("STRING_MM");
    noRelatedSym_0_1.set(RestructuringType_20);
    Instrument_20.insert(RestructuringType_20.getString());
    FIX::SecurityDesc SecurityDesc_20("STRING_670752637");
    noRelatedSym_0_1.set(SecurityDesc_20);
    Instrument_20.insert(SecurityDesc_20.getString());
    FIX::SecurityExchange SecurityExchange_20("EXCHANGE_1120366844");
    noRelatedSym_0_1.set(SecurityExchange_20);
    Instrument_20.insert(SecurityExchange_20.getString());
    FIX::SecurityGroup SecurityGroup_20("STRING_1418427777");
    noRelatedSym_0_1.set(SecurityGroup_20);
    Instrument_20.insert(SecurityGroup_20.getString());
    FIX::SecurityID SecurityID_20("STRING_1839812633");
    noRelatedSym_0_1.set(SecurityID_20);
    Instrument_20.insert(SecurityID_20.getString());
    FIX::SecurityIDSource SecurityIDSource_20("STRING_1");
    noRelatedSym_0_1.set(SecurityIDSource_20);
    Instrument_20.insert(SecurityIDSource_20.getString());
    FIX::SecurityStatus SecurityStatus_20("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_20);
    Instrument_20.insert(SecurityStatus_20.getString());
    FIX::SecuritySubType SecuritySubType_21("STRING_1991038276");
    noRelatedSym_0_1.set(SecuritySubType_21);
    Instrument_20.insert(SecuritySubType_21.getString());
    FIX::SecurityType SecurityType_22("STRING_CDS");
    noRelatedSym_0_1.set(SecurityType_22);
    Instrument_20.insert(SecurityType_22.getString());
    FIX::Seniority Seniority_20("STRING_SB");
    noRelatedSym_0_1.set(Seniority_20);
    Instrument_20.insert(Seniority_20.getString());
    FIX::SettlMethod SettlMethod_20('C');
    noRelatedSym_0_1.set(SettlMethod_20);
    Instrument_20.insert(SettlMethod_20.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_20("STRING_1549442842");
    noRelatedSym_0_1.set(SettleOnOpenFlag_20);
    Instrument_20.insert(SettleOnOpenFlag_20.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_20("STRING_80438207");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_20);
    Instrument_20.insert(StateOrProvinceOfIssue_20.getString());
    FIX::StrikeCurrency StrikeCurrency_20("EUR");
    noRelatedSym_0_1.set(StrikeCurrency_20);
    Instrument_20.insert(StrikeCurrency_20.getString());
    FIX::StrikeMultiplier StrikeMultiplier_20;
    StrikeMultiplier_20.setString("3266479");
    noRelatedSym_0_1.set(StrikeMultiplier_20);
    Instrument_20.insert(StrikeMultiplier_20.getString());
    FIX::StrikePrice StrikePrice_20;
    StrikePrice_20.setString("4291661");
    noRelatedSym_0_1.set(StrikePrice_20);
    Instrument_20.insert(StrikePrice_20.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_20(5);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_20);
    Instrument_20.insert(StrikePriceBoundaryMethod_20.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_20;
    StrikePriceBoundaryPrecision_20.setString("5.530000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_20);
    Instrument_20.insert(StrikePriceBoundaryPrecision_20.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_20(2);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_20);
    Instrument_20.insert(StrikePriceDeterminationMethod_20.getString());
    FIX::StrikeValue StrikeValue_20;
    StrikeValue_20.setString("6719819");
    noRelatedSym_0_1.set(StrikeValue_20);
    Instrument_20.insert(StrikeValue_20.getString());
    FIX::Symbol Symbol_20("STRING_2057402508");
    noRelatedSym_0_1.set(Symbol_20);
    Instrument_20.insert(Symbol_20.getString());
    FIX::SymbolSfx SymbolSfx_20("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_20);
    Instrument_20.insert(SymbolSfx_20.getString());
    FIX::TimeUnit TimeUnit_20("STRING_Yr");
    noRelatedSym_0_1.set(TimeUnit_20);
    Instrument_20.insert(TimeUnit_20.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_20(4);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_20);
    Instrument_20.insert(UnderlyingPriceDeterminationMethod_20.getString());
    FIX::UnitOfMeasure UnitOfMeasure_20("STRING_tn");
    noRelatedSym_0_1.set(UnitOfMeasure_20);
    Instrument_20.insert(UnitOfMeasure_20.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_20;
    UnitOfMeasureQty_20.setString("12382377");
    noRelatedSym_0_1.set(UnitOfMeasureQty_20);
    Instrument_20.insert(UnitOfMeasureQty_20.getString());
    FIX::ValuationMethod ValuationMethod_20("STRING_CDS");
    noRelatedSym_0_1.set(ValuationMethod_20);
    Instrument_20.insert(ValuationMethod_20.getString());
    all_values.push_back(Instrument_20);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_41;
      FIX::ComplexEventCondition ComplexEventCondition_41(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventCondition_41.getString());
      FIX::ComplexEventPrice ComplexEventPrice_41;
      ComplexEventPrice_41.setString("1179032");
      noComplexEvents_1_1_0.set(ComplexEventPrice_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPrice_41.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_41(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceBoundaryMethod_41.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_41;
      ComplexEventPriceBoundaryPrecision_41.setString("43.220000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceBoundaryPrecision_41.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_41(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceTimeType_41.getString());
      FIX::ComplexEventType ComplexEventType_41(3);
      noComplexEvents_1_1_0.set(ComplexEventType_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventType_41.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_41;
      ComplexOptPayoutAmount_41.setString("814933");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexOptPayoutAmount_41.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_41);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_87;
        FIX::ComplexEventEndDate ComplexEventEndDate_87(FIX::UTCTIMESTAMP(16, 43, 3, 23, 102002));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_87);
        ComplexEventDates_NoComplexEventDates_87.insert(ComplexEventEndDate_87.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_87(FIX::UTCTIMESTAMP(4, 27, 12, 7, 92013));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_87);
        ComplexEventDates_NoComplexEventDates_87.insert(ComplexEventStartDate_87.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_87);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_179;
          FIX::ComplexEventEndTime ComplexEventEndTime_179(FIX::UTCTIMEONLY(1, 30, 16));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_179);
          ComplexEventTimes_NoComplexEventTimes_179.insert(ComplexEventEndTime_179.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_179(FIX::UTCTIMEONLY(18, 2, 51));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_179);
          ComplexEventTimes_NoComplexEventTimes_179.insert(ComplexEventStartTime_179.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_179);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_88;
        FIX::ComplexEventEndDate ComplexEventEndDate_88(FIX::UTCTIMESTAMP(2, 46, 10, 22, 122008));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_88);
        ComplexEventDates_NoComplexEventDates_88.insert(ComplexEventEndDate_88.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_88(FIX::UTCTIMESTAMP(1, 54, 37, 4, 22002));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_88);
        ComplexEventDates_NoComplexEventDates_88.insert(ComplexEventStartDate_88.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_88);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_180;
          FIX::ComplexEventEndTime ComplexEventEndTime_180(FIX::UTCTIMEONLY(6, 2, 26));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_180);
          ComplexEventTimes_NoComplexEventTimes_180.insert(ComplexEventEndTime_180.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_180(FIX::UTCTIMEONLY(22, 15, 31));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_180);
          ComplexEventTimes_NoComplexEventTimes_180.insert(ComplexEventStartTime_180.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_180);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_45;
      FIX::EventDate EventDate_45("LOCALMKTDATE_143090441");
      noEvents_1_1_0.set(EventDate_45);
      EvntGrp_NoEvents_45.insert(EventDate_45.getString());
      FIX::EventPx EventPx_45;
      EventPx_45.setString("3826073");
      noEvents_1_1_0.set(EventPx_45);
      EvntGrp_NoEvents_45.insert(EventPx_45.getString());
      FIX::EventText EventText_45("STRING_1193933552");
      noEvents_1_1_0.set(EventText_45);
      EvntGrp_NoEvents_45.insert(EventText_45.getString());
      FIX::EventTime EventTime_45(FIX::UTCTIMESTAMP(4, 34, 49, 16, 52000));
      noEvents_1_1_0.set(EventTime_45);
      EvntGrp_NoEvents_45.insert(EventTime_45.getString());
      FIX::EventType EventType_45(19);
      noEvents_1_1_0.set(EventType_45);
      EvntGrp_NoEvents_45.insert(EventType_45.getString());
      all_values.push_back(EvntGrp_NoEvents_45);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_46;
      FIX::EventDate EventDate_46("LOCALMKTDATE_146189562");
      noEvents_1_1_1.set(EventDate_46);
      EvntGrp_NoEvents_46.insert(EventDate_46.getString());
      FIX::EventPx EventPx_46;
      EventPx_46.setString("20492663");
      noEvents_1_1_1.set(EventPx_46);
      EvntGrp_NoEvents_46.insert(EventPx_46.getString());
      FIX::EventText EventText_46("STRING_1822504828");
      noEvents_1_1_1.set(EventText_46);
      EvntGrp_NoEvents_46.insert(EventText_46.getString());
      FIX::EventTime EventTime_46(FIX::UTCTIMESTAMP(4, 14, 14, 17, 52004));
      noEvents_1_1_1.set(EventTime_46);
      EvntGrp_NoEvents_46.insert(EventTime_46.getString());
      FIX::EventType EventType_46(99);
      noEvents_1_1_1.set(EventType_46);
      EvntGrp_NoEvents_46.insert(EventType_46.getString());
      all_values.push_back(EvntGrp_NoEvents_46);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_47;
      FIX::EventDate EventDate_47("LOCALMKTDATE_733515246");
      noEvents_1_1_2.set(EventDate_47);
      EvntGrp_NoEvents_47.insert(EventDate_47.getString());
      FIX::EventPx EventPx_47;
      EventPx_47.setString("15696187");
      noEvents_1_1_2.set(EventPx_47);
      EvntGrp_NoEvents_47.insert(EventPx_47.getString());
      FIX::EventText EventText_47("STRING_1834471741");
      noEvents_1_1_2.set(EventText_47);
      EvntGrp_NoEvents_47.insert(EventText_47.getString());
      FIX::EventTime EventTime_47(FIX::UTCTIMESTAMP(4, 16, 48, 16, 82011));
      noEvents_1_1_2.set(EventTime_47);
      EvntGrp_NoEvents_47.insert(EventTime_47.getString());
      FIX::EventType EventType_47(3);
      noEvents_1_1_2.set(EventType_47);
      EvntGrp_NoEvents_47.insert(EventType_47.getString());
      all_values.push_back(EvntGrp_NoEvents_47);

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_36;
      FIX::InstrumentPartyID InstrumentPartyID_36("STRING_237169708");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_36);
      InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyID_36.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_36('2');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_36);
      InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyIDSource_36.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_36(1057573349);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_36);
      InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyRole_36.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_36);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70;
        FIX::InstrumentPartySubID InstrumentPartySubID_70("STRING_2111536266");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_70);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70.insert(InstrumentPartySubID_70.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_70(1404024309);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_70);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70.insert(InstrumentPartySubIDType_70.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71;
        FIX::InstrumentPartySubID InstrumentPartySubID_71("STRING_123507825");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_71);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71.insert(InstrumentPartySubID_71.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_71(1778148936);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_71);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71.insert(InstrumentPartySubIDType_71.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72;
        FIX::InstrumentPartySubID InstrumentPartySubID_72("STRING_1550213871");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_72);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72.insert(InstrumentPartySubID_72.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_72(25290516);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_72);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72.insert(InstrumentPartySubIDType_72.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_44;
      FIX::SecurityAltID SecurityAltID_44("STRING_1551222628");
      noSecurityAltID_1_1_0.set(SecurityAltID_44);
      SecAltIDGrp_NoSecurityAltID_44.insert(SecurityAltID_44.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_44("STRING_1653253217");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_44);
      SecAltIDGrp_NoSecurityAltID_44.insert(SecurityAltIDSource_44.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_44);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_45;
      FIX::SecurityAltID SecurityAltID_45("STRING_1061647743");
      noSecurityAltID_1_1_1.set(SecurityAltID_45);
      SecAltIDGrp_NoSecurityAltID_45.insert(SecurityAltID_45.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_45("STRING_795144454");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_45);
      SecAltIDGrp_NoSecurityAltID_45.insert(SecurityAltIDSource_45.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_45);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_46;
      FIX::SecurityAltID SecurityAltID_46("STRING_862838194");
      noSecurityAltID_1_1_2.set(SecurityAltID_46);
      SecAltIDGrp_NoSecurityAltID_46.insert(SecurityAltID_46.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_46("STRING_836408027");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_46);
      SecAltIDGrp_NoSecurityAltID_46.insert(SecurityAltIDSource_46.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_46);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_40;
    FIX::SecurityXML SecurityXML_41("XMLDATA_219516066");
    noRelatedSym_0_1.set(SecurityXML_41);
    FIX::SecurityXMLLen SecurityXMLLen_20(32376865);
    noRelatedSym_0_1.set(SecurityXMLLen_20);
    FIX::SecurityXMLSchema SecurityXMLSchema_20("STRING_1569923273");
    noRelatedSym_0_1.set(SecurityXMLSchema_20);
    SecurityXML_40.insert(SecurityXMLSchema_20.getString());
    all_values.push_back(SecurityXML_40);

    // InstrumentExtension
    multiset<string> InstrumentExtension_7;
    FIX::DeliveryForm DeliveryForm_7(2);
    noRelatedSym_0_1.set(DeliveryForm_7);
    InstrumentExtension_7.insert(DeliveryForm_7.getString());
    FIX::PctAtRisk PctAtRisk_7;
    PctAtRisk_7.setString("86.070000");
    noRelatedSym_0_1.set(PctAtRisk_7);
    InstrumentExtension_7.insert(PctAtRisk_7.getString());
    all_values.push_back(InstrumentExtension_7);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_15;
      FIX::InstrAttribType InstrAttribType_15(19);
      noInstrAttrib_1_1_0.set(InstrAttribType_15);
      AttrbGrp_NoInstrAttrib_15.insert(InstrAttribType_15.getString());
      FIX::InstrAttribValue InstrAttribValue_15("STRING_504408755");
      noInstrAttrib_1_1_0.set(InstrAttribValue_15);
      AttrbGrp_NoInstrAttrib_15.insert(InstrAttribValue_15.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_15);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_3;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_3;
    SecondaryHighLimitPrice_3.setString("10286449");
    noRelatedSym_0_1.set(SecondaryHighLimitPrice_3);
    SecondaryPriceLimits_3.insert(SecondaryHighLimitPrice_3.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_3;
    SecondaryLowLimitPrice_3.setString("14147148");
    noRelatedSym_0_1.set(SecondaryLowLimitPrice_3);
    SecondaryPriceLimits_3.insert(SecondaryLowLimitPrice_3.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_3(730549746);
    noRelatedSym_0_1.set(SecondaryPriceLimitType_3);
    SecondaryPriceLimits_3.insert(SecondaryPriceLimitType_3.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_3;
    SecondaryTradingReferencePrice_3.setString("20115157");
    noRelatedSym_0_1.set(SecondaryTradingReferencePrice_3);
    SecondaryPriceLimits_3.insert(SecondaryTradingReferencePrice_3.getString());
    all_values.push_back(SecondaryPriceLimits_3);

    msg.addGroup(noRelatedSym_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_28;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_28("DATA_1437123388");
  msg.set(EncodedUnderlyingIssuer_28);
  UnderlyingInstrument_28.insert(EncodedUnderlyingIssuer_28.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_28(3140642);
  msg.set(EncodedUnderlyingIssuerLen_28);
  UnderlyingInstrument_28.insert(EncodedUnderlyingIssuerLen_28.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_28("DATA_101201816");
  msg.set(EncodedUnderlyingSecurityDesc_28);
  UnderlyingInstrument_28.insert(EncodedUnderlyingSecurityDesc_28.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_28(1661478538);
  msg.set(EncodedUnderlyingSecurityDescLen_28);
  UnderlyingInstrument_28.insert(EncodedUnderlyingSecurityDescLen_28.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_28;
  UnderlyingAdjustedQuantity_28.setString("10607139");
  msg.set(UnderlyingAdjustedQuantity_28);
  UnderlyingInstrument_28.insert(UnderlyingAdjustedQuantity_28.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_28;
  UnderlyingAllocationPercent_28.setString("12.540000");
  msg.set(UnderlyingAllocationPercent_28);
  UnderlyingInstrument_28.insert(UnderlyingAllocationPercent_28.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_28;
  UnderlyingAttachmentPoint_28.setString("11.570000");
  msg.set(UnderlyingAttachmentPoint_28);
  UnderlyingInstrument_28.insert(UnderlyingAttachmentPoint_28.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_28("STRING_317254653");
  msg.set(UnderlyingCFICode_28);
  UnderlyingInstrument_28.insert(UnderlyingCFICode_28.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_28("STRING_533539079");
  msg.set(UnderlyingCPProgram_28);
  UnderlyingInstrument_28.insert(UnderlyingCPProgram_28.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_28("STRING_1256196445");
  msg.set(UnderlyingCPRegType_28);
  UnderlyingInstrument_28.insert(UnderlyingCPRegType_28.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_28;
  UnderlyingCapValue_28.setString("18674685");
  msg.set(UnderlyingCapValue_28);
  UnderlyingInstrument_28.insert(UnderlyingCapValue_28.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_28;
  UnderlyingCashAmount_28.setString("5588295");
  msg.set(UnderlyingCashAmount_28);
  UnderlyingInstrument_28.insert(UnderlyingCashAmount_28.getString());
  FIX::UnderlyingCashType UnderlyingCashType_28("STRING_FIXED");
  msg.set(UnderlyingCashType_28);
  UnderlyingInstrument_28.insert(UnderlyingCashType_28.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_28;
  UnderlyingContractMultiplier_28.setString("12712075");
  msg.set(UnderlyingContractMultiplier_28);
  UnderlyingInstrument_28.insert(UnderlyingContractMultiplier_28.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_28(64599165);
  msg.set(UnderlyingContractMultiplierUnit_28);
  UnderlyingInstrument_28.insert(UnderlyingContractMultiplierUnit_28.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_28("COUNTRY_1623530657");
  msg.set(UnderlyingCountryOfIssue_28);
  UnderlyingInstrument_28.insert(UnderlyingCountryOfIssue_28.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_28("LOCALMKTDATE_2066351958");
  msg.set(UnderlyingCouponPaymentDate_28);
  UnderlyingInstrument_28.insert(UnderlyingCouponPaymentDate_28.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_28;
  UnderlyingCouponRate_28.setString("73.590000");
  msg.set(UnderlyingCouponRate_28);
  UnderlyingInstrument_28.insert(UnderlyingCouponRate_28.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_28("STRING_312455036");
  msg.set(UnderlyingCreditRating_28);
  UnderlyingInstrument_28.insert(UnderlyingCreditRating_28.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_28("GBP");
  msg.set(UnderlyingCurrency_28);
  UnderlyingInstrument_28.insert(UnderlyingCurrency_28.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_28;
  UnderlyingCurrentValue_28.setString("18823783");
  msg.set(UnderlyingCurrentValue_28);
  UnderlyingInstrument_28.insert(UnderlyingCurrentValue_28.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_28;
  UnderlyingDetachmentPoint_28.setString("91.900000");
  msg.set(UnderlyingDetachmentPoint_28);
  UnderlyingInstrument_28.insert(UnderlyingDetachmentPoint_28.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_28;
  UnderlyingDirtyPrice_28.setString("6791791");
  msg.set(UnderlyingDirtyPrice_28);
  UnderlyingInstrument_28.insert(UnderlyingDirtyPrice_28.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_28;
  UnderlyingEndPrice_28.setString("20712429");
  msg.set(UnderlyingEndPrice_28);
  UnderlyingInstrument_28.insert(UnderlyingEndPrice_28.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_28;
  UnderlyingEndValue_28.setString("15549492");
  msg.set(UnderlyingEndValue_28);
  UnderlyingInstrument_28.insert(UnderlyingEndValue_28.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_28(1183587938);
  msg.set(UnderlyingExerciseStyle_28);
  UnderlyingInstrument_28.insert(UnderlyingExerciseStyle_28.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_28;
  UnderlyingFXRate_28.setString("9524043");
  msg.set(UnderlyingFXRate_28);
  UnderlyingInstrument_28.insert(UnderlyingFXRate_28.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_28('D');
  msg.set(UnderlyingFXRateCalc_28);
  UnderlyingInstrument_28.insert(UnderlyingFXRateCalc_28.getString());
  FIX::UnderlyingFactor UnderlyingFactor_28;
  UnderlyingFactor_28.setString("19141376");
  msg.set(UnderlyingFactor_28);
  UnderlyingInstrument_28.insert(UnderlyingFactor_28.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_28(816436415);
  msg.set(UnderlyingFlowScheduleType_28);
  UnderlyingInstrument_28.insert(UnderlyingFlowScheduleType_28.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_28("STRING_111820118");
  msg.set(UnderlyingInstrRegistry_28);
  UnderlyingInstrument_28.insert(UnderlyingInstrRegistry_28.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_28("LOCALMKTDATE_1917278327");
  msg.set(UnderlyingIssueDate_28);
  UnderlyingInstrument_28.insert(UnderlyingIssueDate_28.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_28("STRING_917638232");
  msg.set(UnderlyingIssuer_28);
  UnderlyingInstrument_28.insert(UnderlyingIssuer_28.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_28("STRING_1773298657");
  msg.set(UnderlyingLocaleOfIssue_28);
  UnderlyingInstrument_28.insert(UnderlyingLocaleOfIssue_28.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_28("LOCALMKTDATE_830508670");
  msg.set(UnderlyingMaturityDate_28);
  UnderlyingInstrument_28.insert(UnderlyingMaturityDate_28.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_28("MONTHYEAR_1327669486");
  msg.set(UnderlyingMaturityMonthYear_28);
  UnderlyingInstrument_28.insert(UnderlyingMaturityMonthYear_28.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_28("TZTIMEONLY_1251346166");
  msg.set(UnderlyingMaturityTime_28);
  UnderlyingInstrument_28.insert(UnderlyingMaturityTime_28.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_28;
  UnderlyingNotionalPercentageOutstanding_28.setString("33.230000");
  msg.set(UnderlyingNotionalPercentageOutstanding_28);
  UnderlyingInstrument_28.insert(UnderlyingNotionalPercentageOutstanding_28.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_28('1');
  msg.set(UnderlyingOptAttribute_28);
  UnderlyingInstrument_28.insert(UnderlyingOptAttribute_28.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_28;
  UnderlyingOriginalNotionalPercentageOutstanding_28.setString("89.630000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_28);
  UnderlyingInstrument_28.insert(UnderlyingOriginalNotionalPercentageOutstanding_28.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_28("STRING_867748200");
  msg.set(UnderlyingPriceUnitOfMeasure_28);
  UnderlyingInstrument_28.insert(UnderlyingPriceUnitOfMeasure_28.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_28;
  UnderlyingPriceUnitOfMeasureQty_28.setString("2725545");
  msg.set(UnderlyingPriceUnitOfMeasureQty_28);
  UnderlyingInstrument_28.insert(UnderlyingPriceUnitOfMeasureQty_28.getString());
  FIX::UnderlyingProduct UnderlyingProduct_28(921941877);
  msg.set(UnderlyingProduct_28);
  UnderlyingInstrument_28.insert(UnderlyingProduct_28.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_28(2138955704);
  msg.set(UnderlyingPutOrCall_28);
  UnderlyingInstrument_28.insert(UnderlyingPutOrCall_28.getString());
  FIX::UnderlyingPx UnderlyingPx_28;
  UnderlyingPx_28.setString("3371536");
  msg.set(UnderlyingPx_28);
  UnderlyingInstrument_28.insert(UnderlyingPx_28.getString());
  FIX::UnderlyingQty UnderlyingQty_28;
  UnderlyingQty_28.setString("3979888");
  msg.set(UnderlyingQty_28);
  UnderlyingInstrument_28.insert(UnderlyingQty_28.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_28("LOCALMKTDATE_2057824015");
  msg.set(UnderlyingRedemptionDate_28);
  UnderlyingInstrument_28.insert(UnderlyingRedemptionDate_28.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_28("STRING_1264591037");
  msg.set(UnderlyingRepoCollateralSecurityType_28);
  UnderlyingInstrument_28.insert(UnderlyingRepoCollateralSecurityType_28.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_28;
  UnderlyingRepurchaseRate_28.setString("39.220000");
  msg.set(UnderlyingRepurchaseRate_28);
  UnderlyingInstrument_28.insert(UnderlyingRepurchaseRate_28.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_28(48724744);
  msg.set(UnderlyingRepurchaseTerm_28);
  UnderlyingInstrument_28.insert(UnderlyingRepurchaseTerm_28.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_28("STRING_76921614");
  msg.set(UnderlyingRestructuringType_28);
  UnderlyingInstrument_28.insert(UnderlyingRestructuringType_28.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_28("STRING_445338584");
  msg.set(UnderlyingSecurityDesc_28);
  UnderlyingInstrument_28.insert(UnderlyingSecurityDesc_28.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_28("EXCHANGE_1976243934");
  msg.set(UnderlyingSecurityExchange_28);
  UnderlyingInstrument_28.insert(UnderlyingSecurityExchange_28.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_28("STRING_756100797");
  msg.set(UnderlyingSecurityID_28);
  UnderlyingInstrument_28.insert(UnderlyingSecurityID_28.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_28("STRING_369097904");
  msg.set(UnderlyingSecurityIDSource_28);
  UnderlyingInstrument_28.insert(UnderlyingSecurityIDSource_28.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_28("STRING_1383709487");
  msg.set(UnderlyingSecuritySubType_28);
  UnderlyingInstrument_28.insert(UnderlyingSecuritySubType_28.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_28("STRING_1939688736");
  msg.set(UnderlyingSecurityType_28);
  UnderlyingInstrument_28.insert(UnderlyingSecurityType_28.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_28("STRING_1321502211");
  msg.set(UnderlyingSeniority_28);
  UnderlyingInstrument_28.insert(UnderlyingSeniority_28.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_28("STRING_58406217");
  msg.set(UnderlyingSettlMethod_28);
  UnderlyingInstrument_28.insert(UnderlyingSettlMethod_28.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_28(4);
  msg.set(UnderlyingSettlementType_28);
  UnderlyingInstrument_28.insert(UnderlyingSettlementType_28.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_28;
  UnderlyingStartValue_28.setString("21379386");
  msg.set(UnderlyingStartValue_28);
  UnderlyingInstrument_28.insert(UnderlyingStartValue_28.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_28("STRING_170226336");
  msg.set(UnderlyingStateOrProvinceOfIssue_28);
  UnderlyingInstrument_28.insert(UnderlyingStateOrProvinceOfIssue_28.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_28("GBP");
  msg.set(UnderlyingStrikeCurrency_28);
  UnderlyingInstrument_28.insert(UnderlyingStrikeCurrency_28.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_28;
  UnderlyingStrikePrice_28.setString("19435249");
  msg.set(UnderlyingStrikePrice_28);
  UnderlyingInstrument_28.insert(UnderlyingStrikePrice_28.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_28("STRING_159162474");
  msg.set(UnderlyingSymbol_28);
  UnderlyingInstrument_28.insert(UnderlyingSymbol_28.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_28("STRING_88279048");
  msg.set(UnderlyingSymbolSfx_28);
  UnderlyingInstrument_28.insert(UnderlyingSymbolSfx_28.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_28("STRING_1047387511");
  msg.set(UnderlyingTimeUnit_28);
  UnderlyingInstrument_28.insert(UnderlyingTimeUnit_28.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_28("STRING_1306925798");
  msg.set(UnderlyingUnitOfMeasure_28);
  UnderlyingInstrument_28.insert(UnderlyingUnitOfMeasure_28.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_28;
  UnderlyingUnitOfMeasureQty_28.setString("19494876");
  msg.set(UnderlyingUnitOfMeasureQty_28);
  UnderlyingInstrument_28.insert(UnderlyingUnitOfMeasureQty_28.getString());
  all_values.push_back(UnderlyingInstrument_28);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_53;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_53("STRING_27190350");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_53);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_53.insert(UnderlyingSecurityAltID_53.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_53("STRING_74558479");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_53);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_53.insert(UnderlyingSecurityAltIDSource_53.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_53);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_54;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_54("STRING_181904704");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_54);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_54.insert(UnderlyingSecurityAltID_54.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_54("STRING_18662406");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_54);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_54.insert(UnderlyingSecurityAltIDSource_54.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_54);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_55;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_55("STRING_411712158");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_55);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_55.insert(UnderlyingSecurityAltID_55.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_55("STRING_579893590");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_55);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_55.insert(UnderlyingSecurityAltIDSource_55.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_55);

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_53;
    FIX::UnderlyingStipType UnderlyingStipType_53("STRING_1676303195");
    noUnderlyingStips_0_0.set(UnderlyingStipType_53);
    UnderlyingStipulations_NoUnderlyingStips_53.insert(UnderlyingStipType_53.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_53("STRING_1290337513");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_53);
    UnderlyingStipulations_NoUnderlyingStips_53.insert(UnderlyingStipValue_53.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_53);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_54;
    FIX::UnderlyingStipType UnderlyingStipType_54("STRING_2125211165");
    noUnderlyingStips_0_1.set(UnderlyingStipType_54);
    UnderlyingStipulations_NoUnderlyingStips_54.insert(UnderlyingStipType_54.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_54("STRING_1753224809");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_54);
    UnderlyingStipulations_NoUnderlyingStips_54.insert(UnderlyingStipValue_54.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_54);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_53;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_53("STRING_1953971452");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_53);
    UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyID_53.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_53('3');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_53);
    UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyIDSource_53.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_53(2104774001);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_53);
    UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyRole_53.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_53);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_101("STRING_154047047");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_101);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101.insert(UnderlyingInstrumentPartySubID_101.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_101(1278792564);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_101);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101.insert(UnderlyingInstrumentPartySubIDType_101.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_102("STRING_1248603508");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_102);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102.insert(UnderlyingInstrumentPartySubID_102.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_102(1860389820);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_102);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102.insert(UnderlyingInstrumentPartySubIDType_102.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
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
