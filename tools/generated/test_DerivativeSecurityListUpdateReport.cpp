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
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListUpdateReport_0;
  FIX::LastFragment LastFragment_4(false);
  msg.set(LastFragment_4);
  DerivativeSecurityListUpdateReport_0.insert(LastFragment_4.getString());
  FIX::SecurityReqID SecurityReqID_2("STRING_1086940420");
  msg.set(SecurityReqID_2);
  DerivativeSecurityListUpdateReport_0.insert(SecurityReqID_2.getString());
  FIX::SecurityRequestResult SecurityRequestResult_1(4);
  msg.set(SecurityRequestResult_1);
  DerivativeSecurityListUpdateReport_0.insert(SecurityRequestResult_1.getString());
  FIX::SecurityResponseID SecurityResponseID_1("STRING_1094788366");
  msg.set(SecurityResponseID_1);
  DerivativeSecurityListUpdateReport_0.insert(SecurityResponseID_1.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_0('M');
  msg.set(SecurityUpdateAction_0);
  DerivativeSecurityListUpdateReport_0.insert(SecurityUpdateAction_0.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_2(1946810428);
  msg.set(TotNoRelatedSym_2);
  DerivativeSecurityListUpdateReport_0.insert(TotNoRelatedSym_2.getString());
  FIX::TransactTime TransactTime_17(FIX::UTCTIMESTAMP(20, 54, 23, 12, 11, 2000));
  msg.set(TransactTime_17);
  DerivativeSecurityListUpdateReport_0.insert(TransactTime_17.getString());
  all_values.push_back(DerivativeSecurityListUpdateReport_0);

  all_compo_names.insert("DerivativeSecurityListUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_3;
  FIX::ApplID ApplID_3("STRING_1032774810");
  msg.set(ApplID_3);
  ApplicationSequenceControl_3.insert(ApplID_3.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_3(1865092293);
  msg.set(ApplLastSeqNum_3);
  ApplicationSequenceControl_3.insert(ApplLastSeqNum_3.getString());
  FIX::ApplResendFlag ApplResendFlag_3(true);
  msg.set(ApplResendFlag_3);
  ApplicationSequenceControl_3.insert(ApplResendFlag_3.getString());
  FIX::ApplSeqNum ApplSeqNum_3(1942492263);
  msg.set(ApplSeqNum_3);
  ApplicationSequenceControl_3.insert(ApplSeqNum_3.getString());
  all_values.push_back(ApplicationSequenceControl_3);
  all_compo_names.insert("ApplicationSequenceControl");

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_2;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_2(true);
  msg.set(DerivFlexProductEligibilityIndicator_2);
  DerivativeInstrument_2.insert(DerivFlexProductEligibilityIndicator_2.getString());
  FIX::DerivativeCFICode DerivativeCFICode_2("STRING_1824848313");
  msg.set(DerivativeCFICode_2);
  DerivativeInstrument_2.insert(DerivativeCFICode_2.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_2;
  DerivativeCapPrice_2.setString("8111690");
  msg.set(DerivativeCapPrice_2);
  DerivativeInstrument_2.insert(DerivativeCapPrice_2.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_2;
  DerivativeContractMultiplier_2.setString("4926497");
  msg.set(DerivativeContractMultiplier_2);
  DerivativeInstrument_2.insert(DerivativeContractMultiplier_2.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_2(182627796);
  msg.set(DerivativeContractMultiplierUnit_2);
  DerivativeInstrument_2.insert(DerivativeContractMultiplierUnit_2.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_2("MONTHYEAR_894335859");
  msg.set(DerivativeContractSettlMonth_2);
  DerivativeInstrument_2.insert(DerivativeContractSettlMonth_2.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_2("COUNTRY_523946807");
  msg.set(DerivativeCountryOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeCountryOfIssue_2.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_2("DATA_1983700565");
  msg.set(DerivativeEncodedIssuer_2);
  DerivativeInstrument_2.insert(DerivativeEncodedIssuer_2.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_2(1268880143);
  msg.set(DerivativeEncodedIssuerLen_2);
  DerivativeInstrument_2.insert(DerivativeEncodedIssuerLen_2.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_2("DATA_249702316");
  msg.set(DerivativeEncodedSecurityDesc_2);
  DerivativeInstrument_2.insert(DerivativeEncodedSecurityDesc_2.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_2(370621017);
  msg.set(DerivativeEncodedSecurityDescLen_2);
  DerivativeInstrument_2.insert(DerivativeEncodedSecurityDescLen_2.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_2('1');
  msg.set(DerivativeExerciseStyle_2);
  DerivativeInstrument_2.insert(DerivativeExerciseStyle_2.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_2;
  DerivativeFloorPrice_2.setString("4658469");
  msg.set(DerivativeFloorPrice_2);
  DerivativeInstrument_2.insert(DerivativeFloorPrice_2.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_2(1154707958);
  msg.set(DerivativeFlowScheduleType_2);
  DerivativeInstrument_2.insert(DerivativeFlowScheduleType_2.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_2("STRING_1121290590");
  msg.set(DerivativeInstrRegistry_2);
  DerivativeInstrument_2.insert(DerivativeInstrRegistry_2.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_2('1');
  msg.set(DerivativeInstrmtAssignmentMethod_2);
  DerivativeInstrument_2.insert(DerivativeInstrmtAssignmentMethod_2.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_2("LOCALMKTDATE_814544795");
  msg.set(DerivativeIssueDate_2);
  DerivativeInstrument_2.insert(DerivativeIssueDate_2.getString());
  FIX::DerivativeIssuer DerivativeIssuer_2("STRING_68595308");
  msg.set(DerivativeIssuer_2);
  DerivativeInstrument_2.insert(DerivativeIssuer_2.getString());
  FIX::DerivativeListMethod DerivativeListMethod_2(494371923);
  msg.set(DerivativeListMethod_2);
  DerivativeInstrument_2.insert(DerivativeListMethod_2.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_2("STRING_613871575");
  msg.set(DerivativeLocaleOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeLocaleOfIssue_2.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_2("LOCALMKTDATE_254383970");
  msg.set(DerivativeMaturityDate_2);
  DerivativeInstrument_2.insert(DerivativeMaturityDate_2.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_2("MONTHYEAR_2145681023");
  msg.set(DerivativeMaturityMonthYear_2);
  DerivativeInstrument_2.insert(DerivativeMaturityMonthYear_2.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_2("TZTIMEONLY_1150459909");
  msg.set(DerivativeMaturityTime_2);
  DerivativeInstrument_2.insert(DerivativeMaturityTime_2.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_2;
  DerivativeMinPriceIncrement_2.setString("14315816");
  msg.set(DerivativeMinPriceIncrement_2);
  DerivativeInstrument_2.insert(DerivativeMinPriceIncrement_2.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_2;
  DerivativeMinPriceIncrementAmount_2.setString("14757709");
  msg.set(DerivativeMinPriceIncrementAmount_2);
  DerivativeInstrument_2.insert(DerivativeMinPriceIncrementAmount_2.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_2(1260183924);
  msg.set(DerivativeNTPositionLimit_2);
  DerivativeInstrument_2.insert(DerivativeNTPositionLimit_2.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_2('3');
  msg.set(DerivativeOptAttribute_2);
  DerivativeInstrument_2.insert(DerivativeOptAttribute_2.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_2;
  DerivativeOptPayAmount_2.setString("3610621");
  msg.set(DerivativeOptPayAmount_2);
  DerivativeInstrument_2.insert(DerivativeOptPayAmount_2.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_2(977792569);
  msg.set(DerivativePositionLimit_2);
  DerivativeInstrument_2.insert(DerivativePositionLimit_2.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_2("STRING_1232628807");
  msg.set(DerivativePriceQuoteMethod_2);
  DerivativeInstrument_2.insert(DerivativePriceQuoteMethod_2.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_2("STRING_156070745");
  msg.set(DerivativePriceUnitOfMeasure_2);
  DerivativeInstrument_2.insert(DerivativePriceUnitOfMeasure_2.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_2;
  DerivativePriceUnitOfMeasureQty_2.setString("20366359");
  msg.set(DerivativePriceUnitOfMeasureQty_2);
  DerivativeInstrument_2.insert(DerivativePriceUnitOfMeasureQty_2.getString());
  FIX::DerivativeProduct DerivativeProduct_2(909993473);
  msg.set(DerivativeProduct_2);
  DerivativeInstrument_2.insert(DerivativeProduct_2.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_2("STRING_967239835");
  msg.set(DerivativeProductComplex_2);
  DerivativeInstrument_2.insert(DerivativeProductComplex_2.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_2(381802138);
  msg.set(DerivativePutOrCall_2);
  DerivativeInstrument_2.insert(DerivativePutOrCall_2.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_2("STRING_1092621269");
  msg.set(DerivativeSecurityDesc_2);
  DerivativeInstrument_2.insert(DerivativeSecurityDesc_2.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_2("EXCHANGE_1861575695");
  msg.set(DerivativeSecurityExchange_2);
  DerivativeInstrument_2.insert(DerivativeSecurityExchange_2.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_2("STRING_905748946");
  msg.set(DerivativeSecurityGroup_2);
  DerivativeInstrument_2.insert(DerivativeSecurityGroup_2.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_2("STRING_928838186");
  msg.set(DerivativeSecurityID_2);
  DerivativeInstrument_2.insert(DerivativeSecurityID_2.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_2("STRING_982972190");
  msg.set(DerivativeSecurityIDSource_2);
  DerivativeInstrument_2.insert(DerivativeSecurityIDSource_2.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_2("STRING_1155451262");
  msg.set(DerivativeSecurityStatus_2);
  DerivativeInstrument_2.insert(DerivativeSecurityStatus_2.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_2("STRING_1299459203");
  msg.set(DerivativeSecuritySubType_2);
  DerivativeInstrument_2.insert(DerivativeSecuritySubType_2.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_2("STRING_813232313");
  msg.set(DerivativeSecurityType_2);
  DerivativeInstrument_2.insert(DerivativeSecurityType_2.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_2('1');
  msg.set(DerivativeSettlMethod_2);
  DerivativeInstrument_2.insert(DerivativeSettlMethod_2.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_2("STRING_306683514");
  msg.set(DerivativeSettleOnOpenFlag_2);
  DerivativeInstrument_2.insert(DerivativeSettleOnOpenFlag_2.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_2("STRING_1934522903");
  msg.set(DerivativeStateOrProvinceOfIssue_2);
  DerivativeInstrument_2.insert(DerivativeStateOrProvinceOfIssue_2.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_2("CAN");
  msg.set(DerivativeStrikeCurrency_2);
  DerivativeInstrument_2.insert(DerivativeStrikeCurrency_2.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_2;
  DerivativeStrikeMultiplier_2.setString("20031182");
  msg.set(DerivativeStrikeMultiplier_2);
  DerivativeInstrument_2.insert(DerivativeStrikeMultiplier_2.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_2;
  DerivativeStrikePrice_2.setString("15209737");
  msg.set(DerivativeStrikePrice_2);
  DerivativeInstrument_2.insert(DerivativeStrikePrice_2.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_2;
  DerivativeStrikeValue_2.setString("17350998");
  msg.set(DerivativeStrikeValue_2);
  DerivativeInstrument_2.insert(DerivativeStrikeValue_2.getString());
  FIX::DerivativeSymbol DerivativeSymbol_2("STRING_110018533");
  msg.set(DerivativeSymbol_2);
  DerivativeInstrument_2.insert(DerivativeSymbol_2.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_2("STRING_1519171171");
  msg.set(DerivativeSymbolSfx_2);
  DerivativeInstrument_2.insert(DerivativeSymbolSfx_2.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_2("STRING_738076145");
  msg.set(DerivativeTimeUnit_2);
  DerivativeInstrument_2.insert(DerivativeTimeUnit_2.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_2("STRING_1541600186");
  msg.set(DerivativeUnitOfMeasure_2);
  DerivativeInstrument_2.insert(DerivativeUnitOfMeasure_2.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_2;
  DerivativeUnitOfMeasureQty_2.setString("8474584");
  msg.set(DerivativeUnitOfMeasureQty_2);
  DerivativeInstrument_2.insert(DerivativeUnitOfMeasureQty_2.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_2("STRING_1998260069");
  msg.set(DerivativeValuationMethod_2);
  DerivativeInstrument_2.insert(DerivativeValuationMethod_2.getString());
  all_values.push_back(DerivativeInstrument_2);
  all_compo_names.insert("DerivativeInstrument");

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_5;
    FIX::DerivativeEventDate DerivativeEventDate_5("LOCALMKTDATE_1208520622");
    noDerivativeEvents_0_0.set(DerivativeEventDate_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventDate_5.getString());
    FIX::DerivativeEventPx DerivativeEventPx_5;
    DerivativeEventPx_5.setString("8285689");
    noDerivativeEvents_0_0.set(DerivativeEventPx_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventPx_5.getString());
    FIX::DerivativeEventText DerivativeEventText_5("STRING_968246259");
    noDerivativeEvents_0_0.set(DerivativeEventText_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventText_5.getString());
    FIX::DerivativeEventTime DerivativeEventTime_5(FIX::UTCTIMESTAMP(12, 32, 15, 11, 6, 2014));
    noDerivativeEvents_0_0.set(DerivativeEventTime_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventTime_5.getString());
    FIX::DerivativeEventType DerivativeEventType_5(2005272417);
    noDerivativeEvents_0_0.set(DerivativeEventType_5);
    DerivativeEventsGrp_NoDerivativeEvents_5.insert(DerivativeEventType_5.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_5);
    all_compo_names.insert("DerivativeEventsGrp.NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_6;
    FIX::DerivativeEventDate DerivativeEventDate_6("LOCALMKTDATE_1752215539");
    noDerivativeEvents_0_1.set(DerivativeEventDate_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventDate_6.getString());
    FIX::DerivativeEventPx DerivativeEventPx_6;
    DerivativeEventPx_6.setString("8814117");
    noDerivativeEvents_0_1.set(DerivativeEventPx_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventPx_6.getString());
    FIX::DerivativeEventText DerivativeEventText_6("STRING_1013240031");
    noDerivativeEvents_0_1.set(DerivativeEventText_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventText_6.getString());
    FIX::DerivativeEventTime DerivativeEventTime_6(FIX::UTCTIMESTAMP(2, 5, 28, 25, 7, 2001));
    noDerivativeEvents_0_1.set(DerivativeEventTime_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventTime_6.getString());
    FIX::DerivativeEventType DerivativeEventType_6(1337317925);
    noDerivativeEvents_0_1.set(DerivativeEventType_6);
    DerivativeEventsGrp_NoDerivativeEvents_6.insert(DerivativeEventType_6.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_6);
    all_compo_names.insert("DerivativeEventsGrp.NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_1);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_4;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_4("STRING_1919719153");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyID_4.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_4("STRING_1447336458");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyIDSource_4.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_4(258834109);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_4);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_4.insert(DerivativeInstrumentPartyRole_4.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);
    all_compo_names.insert("DerivativeInstrumentParties.NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_6("STRING_841452997");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_6);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6.insert(DerivativeInstrumentPartySubID_6.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_6(1106292601);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_6);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6.insert(DerivativeInstrumentPartySubIDType_6.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_7("STRING_361088072");
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubID_7);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7.insert(DerivativeInstrumentPartySubID_7.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_7(577070448);
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubIDType_7);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7.insert(DerivativeInstrumentPartySubIDType_7.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_2;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_8("STRING_167329575");
      noDerivativeInstrumentPartySubIDs_0_1_2.set(DerivativeInstrumentPartySubID_8);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8.insert(DerivativeInstrumentPartySubID_8.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_8(1189657063);
      noDerivativeInstrumentPartySubIDs_0_1_2.set(DerivativeInstrumentPartySubIDType_8);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8.insert(DerivativeInstrumentPartySubIDType_8.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_5;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_5("STRING_1545316707");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyID_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyID_5.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_5("STRING_1531920942");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyIDSource_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyIDSource_5.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_5(1907378396);
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyRole_5);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_5.insert(DerivativeInstrumentPartyRole_5.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);
    all_compo_names.insert("DerivativeInstrumentParties.NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_9("STRING_1716268497");
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubID_9);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9.insert(DerivativeInstrumentPartySubID_9.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_9(859418219);
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubIDType_9);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9.insert(DerivativeInstrumentPartySubIDType_9.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_2;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_6;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_6("STRING_2099450144");
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyID_6);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_6.insert(DerivativeInstrumentPartyID_6.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_6("STRING_1614708099");
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyIDSource_6);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_6.insert(DerivativeInstrumentPartyIDSource_6.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_6(717206988);
    noDerivativeInstrumentParties_0_2.set(DerivativeInstrumentPartyRole_6);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_6.insert(DerivativeInstrumentPartyRole_6.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_6);
    all_compo_names.insert("DerivativeInstrumentParties.NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_10("STRING_348636244");
      noDerivativeInstrumentPartySubIDs_2_1_0.set(DerivativeInstrumentPartySubID_10);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10.insert(DerivativeInstrumentPartySubID_10.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_10(1730447019);
      noDerivativeInstrumentPartySubIDs_2_1_0.set(DerivativeInstrumentPartySubIDType_10);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10.insert(DerivativeInstrumentPartySubIDType_10.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_11("STRING_460889482");
      noDerivativeInstrumentPartySubIDs_2_1_1.set(DerivativeInstrumentPartySubID_11);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11.insert(DerivativeInstrumentPartySubID_11.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_11(2043280350);
      noDerivativeInstrumentPartySubIDs_2_1_1.set(DerivativeInstrumentPartySubIDType_11);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11.insert(DerivativeInstrumentPartySubIDType_11.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_2);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_6("STRING_1671764090");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_6);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6.insert(DerivativeSecurityAltID_6.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_6("STRING_1377480063");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_6);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6.insert(DerivativeSecurityAltIDSource_6.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_6);
    all_compo_names.insert("DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_4;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_5("DATA_1583674374");
  msg.set(DerivativeSecurityXML_5);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_2(1856383360);
  msg.set(DerivativeSecurityXMLLen_2);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_2("STRING_567314340");
  msg.set(DerivativeSecurityXMLSchema_2);
  DerivativeSecurityXML_4.insert(DerivativeSecurityXMLSchema_2.getString());
  all_values.push_back(DerivativeSecurityXML_4);
  all_compo_names.insert("DerivativeSecurityXML");

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_1(1628618865);
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribType_1);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1.insert(DerivativeInstrAttribType_1.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_1("STRING_2014650799");
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribValue_1);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1.insert(DerivativeInstrAttribValue_1.getString());
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1);
    all_compo_names.insert("DerivativeInstrumentAttribute.NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_3;
    FIX::MarketID MarketID_4("EXCHANGE_2138930516");
    noMarketSegments_0_0.set(MarketID_4);
    MarketSegmentGrp_NoMarketSegments_3.insert(MarketID_4.getString());
    FIX::MarketSegmentID MarketSegmentID_4("STRING_708620148");
    noMarketSegments_0_0.set(MarketSegmentID_4);
    MarketSegmentGrp_NoMarketSegments_3.insert(MarketSegmentID_4.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_3);
    all_compo_names.insert("MarketSegmentGrp.NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_3;
    FIX::ExpirationCycle ExpirationCycle_3(0);
    noMarketSegments_0_0.set(ExpirationCycle_3);
    BaseTradingRules_3.insert(ExpirationCycle_3.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_3(1);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_3);
    BaseTradingRules_3.insert(ImpliedMarketIndicator_3.getString());
    FIX::MaxPriceVariation MaxPriceVariation_3;
    MaxPriceVariation_3.setString("12856905");
    noMarketSegments_0_0.set(MaxPriceVariation_3);
    BaseTradingRules_3.insert(MaxPriceVariation_3.getString());
    FIX::MaxTradeVol MaxTradeVol_3;
    MaxTradeVol_3.setString("18557935");
    noMarketSegments_0_0.set(MaxTradeVol_3);
    BaseTradingRules_3.insert(MaxTradeVol_3.getString());
    FIX::MinTradeVol MinTradeVol_3;
    MinTradeVol_3.setString("15421920");
    noMarketSegments_0_0.set(MinTradeVol_3);
    BaseTradingRules_3.insert(MinTradeVol_3.getString());
    FIX::MultilegModel MultilegModel_3(2);
    noMarketSegments_0_0.set(MultilegModel_3);
    BaseTradingRules_3.insert(MultilegModel_3.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_3(4);
    noMarketSegments_0_0.set(MultilegPriceMethod_3);
    BaseTradingRules_3.insert(MultilegPriceMethod_3.getString());
    FIX::PriceType PriceType_16(18);
    noMarketSegments_0_0.set(PriceType_16);
    BaseTradingRules_3.insert(PriceType_16.getString());
    FIX::RoundLot RoundLot_3;
    RoundLot_3.setString("19595964");
    noMarketSegments_0_0.set(RoundLot_3);
    BaseTradingRules_3.insert(RoundLot_3.getString());
    FIX::TradingCurrency TradingCurrency_3("EUR");
    noMarketSegments_0_0.set(TradingCurrency_3);
    BaseTradingRules_3.insert(TradingCurrency_3.getString());
    all_values.push_back(BaseTradingRules_3);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_6;
      FIX::LotType LotType_6('2');
      noLotTypeRules_0_1_0.set(LotType_6);
      LotTypeRules_NoLotTypeRules_6.insert(LotType_6.getString());
      FIX::MinLotSize MinLotSize_6;
      MinLotSize_6.setString("7312283");
      noLotTypeRules_0_1_0.set(MinLotSize_6);
      LotTypeRules_NoLotTypeRules_6.insert(MinLotSize_6.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_6);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_3;
    FIX::HighLimitPrice HighLimitPrice_3;
    HighLimitPrice_3.setString("14682613");
    noMarketSegments_0_0.set(HighLimitPrice_3);
    PriceLimits_3.insert(HighLimitPrice_3.getString());
    FIX::LowLimitPrice LowLimitPrice_3;
    LowLimitPrice_3.setString("6248764");
    noMarketSegments_0_0.set(LowLimitPrice_3);
    PriceLimits_3.insert(LowLimitPrice_3.getString());
    FIX::PriceLimitType PriceLimitType_3(0);
    noMarketSegments_0_0.set(PriceLimitType_3);
    PriceLimits_3.insert(PriceLimitType_3.getString());
    FIX::TradingReferencePrice TradingReferencePrice_3;
    TradingReferencePrice_3.setString("19291508");
    noMarketSegments_0_0.set(TradingReferencePrice_3);
    PriceLimits_3.insert(TradingReferencePrice_3.getString());
    all_values.push_back(PriceLimits_3);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_9;
      FIX::EndTickPriceRange EndTickPriceRange_9;
      EndTickPriceRange_9.setString("3842096");
      noTickRules_0_1_0.set(EndTickPriceRange_9);
      TickRules_NoTickRules_9.insert(EndTickPriceRange_9.getString());
      FIX::StartTickPriceRange StartTickPriceRange_9;
      StartTickPriceRange_9.setString("14534312");
      noTickRules_0_1_0.set(StartTickPriceRange_9);
      TickRules_NoTickRules_9.insert(StartTickPriceRange_9.getString());
      FIX::TickIncrement TickIncrement_9;
      TickIncrement_9.setString("18981532");
      noTickRules_0_1_0.set(TickIncrement_9);
      TickRules_NoTickRules_9.insert(TickIncrement_9.getString());
      FIX::TickRuleType TickRuleType_9(4);
      noTickRules_0_1_0.set(TickRuleType_9);
      TickRules_NoTickRules_9.insert(TickRuleType_9.getString());
      all_values.push_back(TickRules_NoTickRules_9);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_7;
      FIX::NestedInstrAttribType NestedInstrAttribType_7(317983895);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_7);
      NestedInstrumentAttribute_NoNestedInstrAttrib_7.insert(NestedInstrAttribType_7.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_7("STRING_143737658");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_7);
      NestedInstrumentAttribute_NoNestedInstrAttrib_7.insert(NestedInstrAttribValue_7.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_7);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_7;
      FIX::TradingSessionID TradingSessionID_25("STRING_5");
      noTradingSessionRules_0_1_0.set(TradingSessionID_25);
      TradingSessionRulesGrp_NoTradingSessionRules_7.insert(TradingSessionID_25.getString());
      FIX::TradingSessionSubID TradingSessionSubID_25("STRING_2");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_25);
      TradingSessionRulesGrp_NoTradingSessionRules_7.insert(TradingSessionSubID_25.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_7);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_10;
        FIX::ExecInstValue ExecInstValue_10('8');
        noExecInstRules_0_0_2_0.set(ExecInstValue_10);
        ExecInstRules_NoExecInstRules_10.insert(ExecInstValue_10.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_10);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_11;
        FIX::ExecInstValue ExecInstValue_11('2');
        noExecInstRules_0_0_2_1.set(ExecInstValue_11);
        ExecInstRules_NoExecInstRules_11.insert(ExecInstValue_11.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_11);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_12;
        FIX::ExecInstValue ExecInstValue_12('9');
        noExecInstRules_0_0_2_2.set(ExecInstValue_12);
        ExecInstRules_NoExecInstRules_12.insert(ExecInstValue_12.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_12);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_12;
        FIX::MDBookType MDBookType_12(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_12);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MDBookType_12.getString());
        FIX::MDFeedType MDFeedType_12("STRING_382156351");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_12);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MDFeedType_12.getString());
        FIX::MarketDepth MarketDepth_12(715501799);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_12);
        MarketDataFeedTypes_NoMDFeedTypes_12.insert(MarketDepth_12.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_12);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_17;
        FIX::MatchAlgorithm MatchAlgorithm_17("STRING_1684243104");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_17);
        MatchRules_NoMatchRules_17.insert(MatchAlgorithm_17.getString());
        FIX::MatchType MatchType_20("STRING_5");
        noMatchRules_0_0_2_0.set(MatchType_20);
        MatchRules_NoMatchRules_17.insert(MatchType_20.getString());
        all_values.push_back(MatchRules_NoMatchRules_17);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_18;
        FIX::MatchAlgorithm MatchAlgorithm_18("STRING_2024446040");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_18);
        MatchRules_NoMatchRules_18.insert(MatchAlgorithm_18.getString());
        FIX::MatchType MatchType_21("STRING_A4");
        noMatchRules_0_0_2_1.set(MatchType_21);
        MatchRules_NoMatchRules_18.insert(MatchType_21.getString());
        all_values.push_back(MatchRules_NoMatchRules_18);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_19;
        FIX::MatchAlgorithm MatchAlgorithm_19("STRING_291693894");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_19);
        MatchRules_NoMatchRules_19.insert(MatchAlgorithm_19.getString());
        FIX::MatchType MatchType_22("STRING_4");
        noMatchRules_0_0_2_2.set(MatchType_22);
        MatchRules_NoMatchRules_19.insert(MatchType_22.getString());
        all_values.push_back(MatchRules_NoMatchRules_19);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_13;
        FIX::OrdType OrdType_14('J');
        noOrdTypeRules_0_0_2_0.set(OrdType_14);
        OrdTypeRules_NoOrdTypeRules_13.insert(OrdType_14.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_13);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_14;
        FIX::OrdType OrdType_15('8');
        noOrdTypeRules_0_0_2_1.set(OrdType_15);
        OrdTypeRules_NoOrdTypeRules_14.insert(OrdType_15.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_14);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_15;
        FIX::TimeInForce TimeInForce_16('1');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_16);
        TimeInForceRules_NoTimeInForceRules_15.insert(TimeInForce_16.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_15);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_16;
        FIX::TimeInForce TimeInForce_17('2');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_17);
        TimeInForceRules_NoTimeInForceRules_16.insert(TimeInForce_17.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_16);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_8;
      FIX::TradingSessionID TradingSessionID_26("STRING_2");
      noTradingSessionRules_0_1_1.set(TradingSessionID_26);
      TradingSessionRulesGrp_NoTradingSessionRules_8.insert(TradingSessionID_26.getString());
      FIX::TradingSessionSubID TradingSessionSubID_26("STRING_4");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_26);
      TradingSessionRulesGrp_NoTradingSessionRules_8.insert(TradingSessionSubID_26.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_8);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_13;
        FIX::ExecInstValue ExecInstValue_13('8');
        noExecInstRules_0_1_2_0.set(ExecInstValue_13);
        ExecInstRules_NoExecInstRules_13.insert(ExecInstValue_13.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_13);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
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
        FIX::MDFeedType MDFeedType_13("STRING_944548398");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_13);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MDFeedType_13.getString());
        FIX::MarketDepth MarketDepth_13(505883505);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_13);
        MarketDataFeedTypes_NoMDFeedTypes_13.insert(MarketDepth_13.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_13);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_20;
        FIX::MatchAlgorithm MatchAlgorithm_20("STRING_1670457478");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_20);
        MatchRules_NoMatchRules_20.insert(MatchAlgorithm_20.getString());
        FIX::MatchType MatchType_23("STRING_S2");
        noMatchRules_0_1_2_0.set(MatchType_23);
        MatchRules_NoMatchRules_20.insert(MatchType_23.getString());
        all_values.push_back(MatchRules_NoMatchRules_20);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_21;
        FIX::MatchAlgorithm MatchAlgorithm_21("STRING_298844206");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_21);
        MatchRules_NoMatchRules_21.insert(MatchAlgorithm_21.getString());
        FIX::MatchType MatchType_24("STRING_A5");
        noMatchRules_0_1_2_1.set(MatchType_24);
        MatchRules_NoMatchRules_21.insert(MatchType_24.getString());
        all_values.push_back(MatchRules_NoMatchRules_21);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_15;
        FIX::OrdType OrdType_16('E');
        noOrdTypeRules_0_1_2_0.set(OrdType_16);
        OrdTypeRules_NoOrdTypeRules_15.insert(OrdType_16.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_15);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_16;
        FIX::OrdType OrdType_17('K');
        noOrdTypeRules_0_1_2_1.set(OrdType_17);
        OrdTypeRules_NoOrdTypeRules_16.insert(OrdType_17.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_16);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_17;
        FIX::TimeInForce TimeInForce_18('8');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_18);
        TimeInForceRules_NoTimeInForceRules_17.insert(TimeInForce_18.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_17);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_6;
      FIX::EndStrikePxRange EndStrikePxRange_6;
      EndStrikePxRange_6.setString("20471603");
      noStrikeRules_0_1_0.set(EndStrikePxRange_6);
      StrikeRules_NoStrikeRules_6.insert(EndStrikePxRange_6.getString());
      FIX::StartStrikePxRange StartStrikePxRange_6;
      StartStrikePxRange_6.setString("15739387");
      noStrikeRules_0_1_0.set(StartStrikePxRange_6);
      StrikeRules_NoStrikeRules_6.insert(StartStrikePxRange_6.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_6(857455381);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeExerciseStyle_6.getString());
      FIX::StrikeIncrement StrikeIncrement_6;
      StrikeIncrement_6.setString("15979411");
      noStrikeRules_0_1_0.set(StrikeIncrement_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeIncrement_6.getString());
      FIX::StrikeRuleID StrikeRuleID_6("STRING_1865632641");
      noStrikeRules_0_1_0.set(StrikeRuleID_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeRuleID_6.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_6);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_11;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_11("MONTHYEAR_1879950232");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_11);
        MaturityRules_NoMaturityRules_11.insert(EndMaturityMonthYear_11.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_11(1);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearFormat_11.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_11(1788736990);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearIncrement_11.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_11(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearIncrementUnits_11.getString());
        FIX::MaturityRuleID MaturityRuleID_11("STRING_872242962");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityRuleID_11.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_11("MONTHYEAR_940005504");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_11);
        MaturityRules_NoMaturityRules_11.insert(StartMaturityMonthYear_11.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_11);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_7;
      FIX::EndStrikePxRange EndStrikePxRange_7;
      EndStrikePxRange_7.setString("13090777");
      noStrikeRules_0_1_1.set(EndStrikePxRange_7);
      StrikeRules_NoStrikeRules_7.insert(EndStrikePxRange_7.getString());
      FIX::StartStrikePxRange StartStrikePxRange_7;
      StartStrikePxRange_7.setString("17198129");
      noStrikeRules_0_1_1.set(StartStrikePxRange_7);
      StrikeRules_NoStrikeRules_7.insert(StartStrikePxRange_7.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_7(1989427222);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeExerciseStyle_7.getString());
      FIX::StrikeIncrement StrikeIncrement_7;
      StrikeIncrement_7.setString("21098884");
      noStrikeRules_0_1_1.set(StrikeIncrement_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeIncrement_7.getString());
      FIX::StrikeRuleID StrikeRuleID_7("STRING_1582230281");
      noStrikeRules_0_1_1.set(StrikeRuleID_7);
      StrikeRules_NoStrikeRules_7.insert(StrikeRuleID_7.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_7);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_12;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_12("MONTHYEAR_906953241");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_12);
        MaturityRules_NoMaturityRules_12.insert(EndMaturityMonthYear_12.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_12(2);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearFormat_12.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_12(614422198);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearIncrement_12.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_12(3);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearIncrementUnits_12.getString());
        FIX::MaturityRuleID MaturityRuleID_12("STRING_1081426697");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityRuleID_12.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_12("MONTHYEAR_913266404");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_12);
        MaturityRules_NoMaturityRules_12.insert(StartMaturityMonthYear_12.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_12);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_13;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_13("MONTHYEAR_219790357");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_13);
        MaturityRules_NoMaturityRules_13.insert(EndMaturityMonthYear_13.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_13(1);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearFormat_13.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_13(1244088753);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearIncrement_13.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_13(1);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearIncrementUnits_13.getString());
        FIX::MaturityRuleID MaturityRuleID_13("STRING_1425104861");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityRuleID_13.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_13("MONTHYEAR_142929253");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_13);
        MaturityRules_NoMaturityRules_13.insert(StartMaturityMonthYear_13.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_13);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_14;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_14("MONTHYEAR_965346038");
        noMaturityRules_0_1_2_2.set(EndMaturityMonthYear_14);
        MaturityRules_NoMaturityRules_14.insert(EndMaturityMonthYear_14.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_14(0);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearFormat_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearFormat_14.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_14(1716868000);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrement_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearIncrement_14.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_14(0);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrementUnits_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearIncrementUnits_14.getString());
        FIX::MaturityRuleID MaturityRuleID_14("STRING_775239067");
        noMaturityRules_0_1_2_2.set(MaturityRuleID_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityRuleID_14.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_14("MONTHYEAR_1435016993");
        noMaturityRules_0_1_2_2.set(StartMaturityMonthYear_14);
        MaturityRules_NoMaturityRules_14.insert(StartMaturityMonthYear_14.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_14);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_4;
    FIX::MarketID MarketID_5("EXCHANGE_685975739");
    noMarketSegments_0_1.set(MarketID_5);
    MarketSegmentGrp_NoMarketSegments_4.insert(MarketID_5.getString());
    FIX::MarketSegmentID MarketSegmentID_5("STRING_507705651");
    noMarketSegments_0_1.set(MarketSegmentID_5);
    MarketSegmentGrp_NoMarketSegments_4.insert(MarketSegmentID_5.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_4);
    all_compo_names.insert("MarketSegmentGrp.NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_4;
    FIX::ExpirationCycle ExpirationCycle_4(1);
    noMarketSegments_0_1.set(ExpirationCycle_4);
    BaseTradingRules_4.insert(ExpirationCycle_4.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_4(1);
    noMarketSegments_0_1.set(ImpliedMarketIndicator_4);
    BaseTradingRules_4.insert(ImpliedMarketIndicator_4.getString());
    FIX::MaxPriceVariation MaxPriceVariation_4;
    MaxPriceVariation_4.setString("8363730");
    noMarketSegments_0_1.set(MaxPriceVariation_4);
    BaseTradingRules_4.insert(MaxPriceVariation_4.getString());
    FIX::MaxTradeVol MaxTradeVol_4;
    MaxTradeVol_4.setString("16378805");
    noMarketSegments_0_1.set(MaxTradeVol_4);
    BaseTradingRules_4.insert(MaxTradeVol_4.getString());
    FIX::MinTradeVol MinTradeVol_4;
    MinTradeVol_4.setString("12672345");
    noMarketSegments_0_1.set(MinTradeVol_4);
    BaseTradingRules_4.insert(MinTradeVol_4.getString());
    FIX::MultilegModel MultilegModel_4(2);
    noMarketSegments_0_1.set(MultilegModel_4);
    BaseTradingRules_4.insert(MultilegModel_4.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_4(0);
    noMarketSegments_0_1.set(MultilegPriceMethod_4);
    BaseTradingRules_4.insert(MultilegPriceMethod_4.getString());
    FIX::PriceType PriceType_17(17);
    noMarketSegments_0_1.set(PriceType_17);
    BaseTradingRules_4.insert(PriceType_17.getString());
    FIX::RoundLot RoundLot_4;
    RoundLot_4.setString("21078556");
    noMarketSegments_0_1.set(RoundLot_4);
    BaseTradingRules_4.insert(RoundLot_4.getString());
    FIX::TradingCurrency TradingCurrency_4("USD");
    noMarketSegments_0_1.set(TradingCurrency_4);
    BaseTradingRules_4.insert(TradingCurrency_4.getString());
    all_values.push_back(BaseTradingRules_4);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_7;
      FIX::LotType LotType_7('1');
      noLotTypeRules_1_1_0.set(LotType_7);
      LotTypeRules_NoLotTypeRules_7.insert(LotType_7.getString());
      FIX::MinLotSize MinLotSize_7;
      MinLotSize_7.setString("7854658");
      noLotTypeRules_1_1_0.set(MinLotSize_7);
      LotTypeRules_NoLotTypeRules_7.insert(MinLotSize_7.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_7);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_4;
    FIX::HighLimitPrice HighLimitPrice_4;
    HighLimitPrice_4.setString("12972522");
    noMarketSegments_0_1.set(HighLimitPrice_4);
    PriceLimits_4.insert(HighLimitPrice_4.getString());
    FIX::LowLimitPrice LowLimitPrice_4;
    LowLimitPrice_4.setString("16670133");
    noMarketSegments_0_1.set(LowLimitPrice_4);
    PriceLimits_4.insert(LowLimitPrice_4.getString());
    FIX::PriceLimitType PriceLimitType_4(1);
    noMarketSegments_0_1.set(PriceLimitType_4);
    PriceLimits_4.insert(PriceLimitType_4.getString());
    FIX::TradingReferencePrice TradingReferencePrice_4;
    TradingReferencePrice_4.setString("15170426");
    noMarketSegments_0_1.set(TradingReferencePrice_4);
    PriceLimits_4.insert(TradingReferencePrice_4.getString());
    all_values.push_back(PriceLimits_4);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_10;
      FIX::EndTickPriceRange EndTickPriceRange_10;
      EndTickPriceRange_10.setString("7953374");
      noTickRules_1_1_0.set(EndTickPriceRange_10);
      TickRules_NoTickRules_10.insert(EndTickPriceRange_10.getString());
      FIX::StartTickPriceRange StartTickPriceRange_10;
      StartTickPriceRange_10.setString("15018956");
      noTickRules_1_1_0.set(StartTickPriceRange_10);
      TickRules_NoTickRules_10.insert(StartTickPriceRange_10.getString());
      FIX::TickIncrement TickIncrement_10;
      TickIncrement_10.setString("20068221");
      noTickRules_1_1_0.set(TickIncrement_10);
      TickRules_NoTickRules_10.insert(TickIncrement_10.getString());
      FIX::TickRuleType TickRuleType_10(0);
      noTickRules_1_1_0.set(TickRuleType_10);
      TickRules_NoTickRules_10.insert(TickRuleType_10.getString());
      all_values.push_back(TickRules_NoTickRules_10);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_8;
      FIX::NestedInstrAttribType NestedInstrAttribType_8(1184120053);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_8);
      NestedInstrumentAttribute_NoNestedInstrAttrib_8.insert(NestedInstrAttribType_8.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_8("STRING_507651012");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_8);
      NestedInstrumentAttribute_NoNestedInstrAttrib_8.insert(NestedInstrAttribValue_8.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_8);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_9;
      FIX::NestedInstrAttribType NestedInstrAttribType_9(2142559485);
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribType_9);
      NestedInstrumentAttribute_NoNestedInstrAttrib_9.insert(NestedInstrAttribType_9.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_9("STRING_1959359120");
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribValue_9);
      NestedInstrumentAttribute_NoNestedInstrAttrib_9.insert(NestedInstrAttribValue_9.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_9);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_10;
      FIX::NestedInstrAttribType NestedInstrAttribType_10(1942668005);
      noNestedInstrAttrib_1_1_2.set(NestedInstrAttribType_10);
      NestedInstrumentAttribute_NoNestedInstrAttrib_10.insert(NestedInstrAttribType_10.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_10("STRING_681051576");
      noNestedInstrAttrib_1_1_2.set(NestedInstrAttribValue_10);
      NestedInstrumentAttribute_NoNestedInstrAttrib_10.insert(NestedInstrAttribValue_10.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_10);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_9;
      FIX::TradingSessionID TradingSessionID_27("STRING_2");
      noTradingSessionRules_1_1_0.set(TradingSessionID_27);
      TradingSessionRulesGrp_NoTradingSessionRules_9.insert(TradingSessionID_27.getString());
      FIX::TradingSessionSubID TradingSessionSubID_27("STRING_7");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_27);
      TradingSessionRulesGrp_NoTradingSessionRules_9.insert(TradingSessionSubID_27.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_9);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_14;
        FIX::ExecInstValue ExecInstValue_14('5');
        noExecInstRules_1_0_2_0.set(ExecInstValue_14);
        ExecInstRules_NoExecInstRules_14.insert(ExecInstValue_14.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_14);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_15;
        FIX::ExecInstValue ExecInstValue_15('1');
        noExecInstRules_1_0_2_1.set(ExecInstValue_15);
        ExecInstRules_NoExecInstRules_15.insert(ExecInstValue_15.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_15);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_14;
        FIX::MDBookType MDBookType_14(2);
        noMDFeedTypes_1_0_2_0.set(MDBookType_14);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MDBookType_14.getString());
        FIX::MDFeedType MDFeedType_14("STRING_1237209754");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_14);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MDFeedType_14.getString());
        FIX::MarketDepth MarketDepth_14(1114293202);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_14);
        MarketDataFeedTypes_NoMDFeedTypes_14.insert(MarketDepth_14.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_14);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_15;
        FIX::MDBookType MDBookType_15(3);
        noMDFeedTypes_1_0_2_1.set(MDBookType_15);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MDBookType_15.getString());
        FIX::MDFeedType MDFeedType_15("STRING_1408253453");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_15);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MDFeedType_15.getString());
        FIX::MarketDepth MarketDepth_15(1981618399);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_15);
        MarketDataFeedTypes_NoMDFeedTypes_15.insert(MarketDepth_15.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_15);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_22;
        FIX::MatchAlgorithm MatchAlgorithm_22("STRING_46235702");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_22);
        MatchRules_NoMatchRules_22.insert(MatchAlgorithm_22.getString());
        FIX::MatchType MatchType_25("STRING_M5");
        noMatchRules_1_0_2_0.set(MatchType_25);
        MatchRules_NoMatchRules_22.insert(MatchType_25.getString());
        all_values.push_back(MatchRules_NoMatchRules_22);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_23;
        FIX::MatchAlgorithm MatchAlgorithm_23("STRING_2011501389");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_23);
        MatchRules_NoMatchRules_23.insert(MatchAlgorithm_23.getString());
        FIX::MatchType MatchType_26("STRING_MT");
        noMatchRules_1_0_2_1.set(MatchType_26);
        MatchRules_NoMatchRules_23.insert(MatchType_26.getString());
        all_values.push_back(MatchRules_NoMatchRules_23);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_24;
        FIX::MatchAlgorithm MatchAlgorithm_24("STRING_500945998");
        noMatchRules_1_0_2_2.set(MatchAlgorithm_24);
        MatchRules_NoMatchRules_24.insert(MatchAlgorithm_24.getString());
        FIX::MatchType MatchType_27("STRING_3");
        noMatchRules_1_0_2_2.set(MatchType_27);
        MatchRules_NoMatchRules_24.insert(MatchType_27.getString());
        all_values.push_back(MatchRules_NoMatchRules_24);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_17;
        FIX::OrdType OrdType_18('A');
        noOrdTypeRules_1_0_2_0.set(OrdType_18);
        OrdTypeRules_NoOrdTypeRules_17.insert(OrdType_18.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_17);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_18;
        FIX::OrdType OrdType_19('6');
        noOrdTypeRules_1_0_2_1.set(OrdType_19);
        OrdTypeRules_NoOrdTypeRules_18.insert(OrdType_19.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_18);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_18;
        FIX::TimeInForce TimeInForce_19('0');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_19);
        TimeInForceRules_NoTimeInForceRules_18.insert(TimeInForce_19.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_18);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_10;
      FIX::TradingSessionID TradingSessionID_28("STRING_1");
      noTradingSessionRules_1_1_1.set(TradingSessionID_28);
      TradingSessionRulesGrp_NoTradingSessionRules_10.insert(TradingSessionID_28.getString());
      FIX::TradingSessionSubID TradingSessionSubID_28("STRING_2");
      noTradingSessionRules_1_1_1.set(TradingSessionSubID_28);
      TradingSessionRulesGrp_NoTradingSessionRules_10.insert(TradingSessionSubID_28.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_10);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_16;
        FIX::ExecInstValue ExecInstValue_16('1');
        noExecInstRules_1_1_2_0.set(ExecInstValue_16);
        ExecInstRules_NoExecInstRules_16.insert(ExecInstValue_16.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_16);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_17;
        FIX::ExecInstValue ExecInstValue_17('1');
        noExecInstRules_1_1_2_1.set(ExecInstValue_17);
        ExecInstRules_NoExecInstRules_17.insert(ExecInstValue_17.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_17);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_18;
        FIX::ExecInstValue ExecInstValue_18('8');
        noExecInstRules_1_1_2_2.set(ExecInstValue_18);
        ExecInstRules_NoExecInstRules_18.insert(ExecInstValue_18.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_18);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_16;
        FIX::MDBookType MDBookType_16(1);
        noMDFeedTypes_1_1_2_0.set(MDBookType_16);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MDBookType_16.getString());
        FIX::MDFeedType MDFeedType_16("STRING_1859524162");
        noMDFeedTypes_1_1_2_0.set(MDFeedType_16);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MDFeedType_16.getString());
        FIX::MarketDepth MarketDepth_16(629120620);
        noMDFeedTypes_1_1_2_0.set(MarketDepth_16);
        MarketDataFeedTypes_NoMDFeedTypes_16.insert(MarketDepth_16.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_16);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_17;
        FIX::MDBookType MDBookType_17(2);
        noMDFeedTypes_1_1_2_1.set(MDBookType_17);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MDBookType_17.getString());
        FIX::MDFeedType MDFeedType_17("STRING_1987555757");
        noMDFeedTypes_1_1_2_1.set(MDFeedType_17);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MDFeedType_17.getString());
        FIX::MarketDepth MarketDepth_17(1783041866);
        noMDFeedTypes_1_1_2_1.set(MarketDepth_17);
        MarketDataFeedTypes_NoMDFeedTypes_17.insert(MarketDepth_17.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_17);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_25;
        FIX::MatchAlgorithm MatchAlgorithm_25("STRING_1077281863");
        noMatchRules_1_1_2_0.set(MatchAlgorithm_25);
        MatchRules_NoMatchRules_25.insert(MatchAlgorithm_25.getString());
        FIX::MatchType MatchType_28("STRING_8");
        noMatchRules_1_1_2_0.set(MatchType_28);
        MatchRules_NoMatchRules_25.insert(MatchType_28.getString());
        all_values.push_back(MatchRules_NoMatchRules_25);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_19;
        FIX::OrdType OrdType_20('5');
        noOrdTypeRules_1_1_2_0.set(OrdType_20);
        OrdTypeRules_NoOrdTypeRules_19.insert(OrdType_20.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_19);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_19;
        FIX::TimeInForce TimeInForce_20('2');
        noTimeInForceRules_1_1_2_0.set(TimeInForce_20);
        TimeInForceRules_NoTimeInForceRules_19.insert(TimeInForce_20.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_19);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_20;
        FIX::TimeInForce TimeInForce_21('0');
        noTimeInForceRules_1_1_2_1.set(TimeInForce_21);
        TimeInForceRules_NoTimeInForceRules_20.insert(TimeInForce_21.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_20);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_1);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_8;
      FIX::EndStrikePxRange EndStrikePxRange_8;
      EndStrikePxRange_8.setString("13273167");
      noStrikeRules_1_1_0.set(EndStrikePxRange_8);
      StrikeRules_NoStrikeRules_8.insert(EndStrikePxRange_8.getString());
      FIX::StartStrikePxRange StartStrikePxRange_8;
      StartStrikePxRange_8.setString("21292553");
      noStrikeRules_1_1_0.set(StartStrikePxRange_8);
      StrikeRules_NoStrikeRules_8.insert(StartStrikePxRange_8.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_8(68835542);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeExerciseStyle_8.getString());
      FIX::StrikeIncrement StrikeIncrement_8;
      StrikeIncrement_8.setString("17730518");
      noStrikeRules_1_1_0.set(StrikeIncrement_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeIncrement_8.getString());
      FIX::StrikeRuleID StrikeRuleID_8("STRING_374593488");
      noStrikeRules_1_1_0.set(StrikeRuleID_8);
      StrikeRules_NoStrikeRules_8.insert(StrikeRuleID_8.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_8);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_15;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_15("MONTHYEAR_2078125285");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_15);
        MaturityRules_NoMaturityRules_15.insert(EndMaturityMonthYear_15.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_15(0);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearFormat_15.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_15(99309658);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearIncrement_15.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_15(3);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearIncrementUnits_15.getString());
        FIX::MaturityRuleID MaturityRuleID_15("STRING_1396937699");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityRuleID_15.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_15("MONTHYEAR_269501586");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_15);
        MaturityRules_NoMaturityRules_15.insert(StartMaturityMonthYear_15.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_15);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_16;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_16("MONTHYEAR_573420537");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_16);
        MaturityRules_NoMaturityRules_16.insert(EndMaturityMonthYear_16.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_16(1);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearFormat_16.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_16(1120745090);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearIncrement_16.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_16(0);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityMonthYearIncrementUnits_16.getString());
        FIX::MaturityRuleID MaturityRuleID_16("STRING_930639910");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_16);
        MaturityRules_NoMaturityRules_16.insert(MaturityRuleID_16.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_16("MONTHYEAR_832785604");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_16);
        MaturityRules_NoMaturityRules_16.insert(StartMaturityMonthYear_16.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_16);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_17;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_17("MONTHYEAR_675707644");
        noMaturityRules_1_0_2_2.set(EndMaturityMonthYear_17);
        MaturityRules_NoMaturityRules_17.insert(EndMaturityMonthYear_17.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_17(0);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearFormat_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearFormat_17.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_17(672857713);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrement_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearIncrement_17.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_17(2);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrementUnits_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityMonthYearIncrementUnits_17.getString());
        FIX::MaturityRuleID MaturityRuleID_17("STRING_241546636");
        noMaturityRules_1_0_2_2.set(MaturityRuleID_17);
        MaturityRules_NoMaturityRules_17.insert(MaturityRuleID_17.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_17("MONTHYEAR_1750139577");
        noMaturityRules_1_0_2_2.set(StartMaturityMonthYear_17);
        MaturityRules_NoMaturityRules_17.insert(StartMaturityMonthYear_17.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_17);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_2);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_2;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_5;
    FIX::MarketID MarketID_6("EXCHANGE_1061117283");
    noMarketSegments_0_2.set(MarketID_6);
    MarketSegmentGrp_NoMarketSegments_5.insert(MarketID_6.getString());
    FIX::MarketSegmentID MarketSegmentID_6("STRING_1360357609");
    noMarketSegments_0_2.set(MarketSegmentID_6);
    MarketSegmentGrp_NoMarketSegments_5.insert(MarketSegmentID_6.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_5);
    all_compo_names.insert("MarketSegmentGrp.NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_5;
    FIX::ExpirationCycle ExpirationCycle_5(1);
    noMarketSegments_0_2.set(ExpirationCycle_5);
    BaseTradingRules_5.insert(ExpirationCycle_5.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_5(0);
    noMarketSegments_0_2.set(ImpliedMarketIndicator_5);
    BaseTradingRules_5.insert(ImpliedMarketIndicator_5.getString());
    FIX::MaxPriceVariation MaxPriceVariation_5;
    MaxPriceVariation_5.setString("6761730");
    noMarketSegments_0_2.set(MaxPriceVariation_5);
    BaseTradingRules_5.insert(MaxPriceVariation_5.getString());
    FIX::MaxTradeVol MaxTradeVol_5;
    MaxTradeVol_5.setString("3249949");
    noMarketSegments_0_2.set(MaxTradeVol_5);
    BaseTradingRules_5.insert(MaxTradeVol_5.getString());
    FIX::MinTradeVol MinTradeVol_5;
    MinTradeVol_5.setString("12129930");
    noMarketSegments_0_2.set(MinTradeVol_5);
    BaseTradingRules_5.insert(MinTradeVol_5.getString());
    FIX::MultilegModel MultilegModel_5(2);
    noMarketSegments_0_2.set(MultilegModel_5);
    BaseTradingRules_5.insert(MultilegModel_5.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_5(2);
    noMarketSegments_0_2.set(MultilegPriceMethod_5);
    BaseTradingRules_5.insert(MultilegPriceMethod_5.getString());
    FIX::PriceType PriceType_18(17);
    noMarketSegments_0_2.set(PriceType_18);
    BaseTradingRules_5.insert(PriceType_18.getString());
    FIX::RoundLot RoundLot_5;
    RoundLot_5.setString("16290579");
    noMarketSegments_0_2.set(RoundLot_5);
    BaseTradingRules_5.insert(RoundLot_5.getString());
    FIX::TradingCurrency TradingCurrency_5("USD");
    noMarketSegments_0_2.set(TradingCurrency_5);
    BaseTradingRules_5.insert(TradingCurrency_5.getString());
    all_values.push_back(BaseTradingRules_5);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_8;
      FIX::LotType LotType_8('3');
      noLotTypeRules_2_1_0.set(LotType_8);
      LotTypeRules_NoLotTypeRules_8.insert(LotType_8.getString());
      FIX::MinLotSize MinLotSize_8;
      MinLotSize_8.setString("13053317");
      noLotTypeRules_2_1_0.set(MinLotSize_8);
      LotTypeRules_NoLotTypeRules_8.insert(MinLotSize_8.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_8);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_9;
      FIX::LotType LotType_9('4');
      noLotTypeRules_2_1_1.set(LotType_9);
      LotTypeRules_NoLotTypeRules_9.insert(LotType_9.getString());
      FIX::MinLotSize MinLotSize_9;
      MinLotSize_9.setString("16364961");
      noLotTypeRules_2_1_1.set(MinLotSize_9);
      LotTypeRules_NoLotTypeRules_9.insert(MinLotSize_9.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_9);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_5;
    FIX::HighLimitPrice HighLimitPrice_5;
    HighLimitPrice_5.setString("15748333");
    noMarketSegments_0_2.set(HighLimitPrice_5);
    PriceLimits_5.insert(HighLimitPrice_5.getString());
    FIX::LowLimitPrice LowLimitPrice_5;
    LowLimitPrice_5.setString("14054716");
    noMarketSegments_0_2.set(LowLimitPrice_5);
    PriceLimits_5.insert(LowLimitPrice_5.getString());
    FIX::PriceLimitType PriceLimitType_5(2);
    noMarketSegments_0_2.set(PriceLimitType_5);
    PriceLimits_5.insert(PriceLimitType_5.getString());
    FIX::TradingReferencePrice TradingReferencePrice_5;
    TradingReferencePrice_5.setString("5480947");
    noMarketSegments_0_2.set(TradingReferencePrice_5);
    PriceLimits_5.insert(TradingReferencePrice_5.getString());
    all_values.push_back(PriceLimits_5);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_11;
      FIX::EndTickPriceRange EndTickPriceRange_11;
      EndTickPriceRange_11.setString("13030302");
      noTickRules_2_1_0.set(EndTickPriceRange_11);
      TickRules_NoTickRules_11.insert(EndTickPriceRange_11.getString());
      FIX::StartTickPriceRange StartTickPriceRange_11;
      StartTickPriceRange_11.setString("13808804");
      noTickRules_2_1_0.set(StartTickPriceRange_11);
      TickRules_NoTickRules_11.insert(StartTickPriceRange_11.getString());
      FIX::TickIncrement TickIncrement_11;
      TickIncrement_11.setString("21277663");
      noTickRules_2_1_0.set(TickIncrement_11);
      TickRules_NoTickRules_11.insert(TickIncrement_11.getString());
      FIX::TickRuleType TickRuleType_11(0);
      noTickRules_2_1_0.set(TickRuleType_11);
      TickRules_NoTickRules_11.insert(TickRuleType_11.getString());
      all_values.push_back(TickRules_NoTickRules_11);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_12;
      FIX::EndTickPriceRange EndTickPriceRange_12;
      EndTickPriceRange_12.setString("20537381");
      noTickRules_2_1_1.set(EndTickPriceRange_12);
      TickRules_NoTickRules_12.insert(EndTickPriceRange_12.getString());
      FIX::StartTickPriceRange StartTickPriceRange_12;
      StartTickPriceRange_12.setString("2915485");
      noTickRules_2_1_1.set(StartTickPriceRange_12);
      TickRules_NoTickRules_12.insert(StartTickPriceRange_12.getString());
      FIX::TickIncrement TickIncrement_12;
      TickIncrement_12.setString("4262140");
      noTickRules_2_1_1.set(TickIncrement_12);
      TickRules_NoTickRules_12.insert(TickIncrement_12.getString());
      FIX::TickRuleType TickRuleType_12(4);
      noTickRules_2_1_1.set(TickRuleType_12);
      TickRules_NoTickRules_12.insert(TickRuleType_12.getString());
      all_values.push_back(TickRules_NoTickRules_12);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_2_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_13;
      FIX::EndTickPriceRange EndTickPriceRange_13;
      EndTickPriceRange_13.setString("13526658");
      noTickRules_2_1_2.set(EndTickPriceRange_13);
      TickRules_NoTickRules_13.insert(EndTickPriceRange_13.getString());
      FIX::StartTickPriceRange StartTickPriceRange_13;
      StartTickPriceRange_13.setString("17865716");
      noTickRules_2_1_2.set(StartTickPriceRange_13);
      TickRules_NoTickRules_13.insert(StartTickPriceRange_13.getString());
      FIX::TickIncrement TickIncrement_13;
      TickIncrement_13.setString("15971016");
      noTickRules_2_1_2.set(TickIncrement_13);
      TickRules_NoTickRules_13.insert(TickIncrement_13.getString());
      FIX::TickRuleType TickRuleType_13(0);
      noTickRules_2_1_2.set(TickRuleType_13);
      TickRules_NoTickRules_13.insert(TickRuleType_13.getString());
      all_values.push_back(TickRules_NoTickRules_13);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_11;
      FIX::NestedInstrAttribType NestedInstrAttribType_11(1922096609);
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribType_11);
      NestedInstrumentAttribute_NoNestedInstrAttrib_11.insert(NestedInstrAttribType_11.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_11("STRING_2063278635");
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribValue_11);
      NestedInstrumentAttribute_NoNestedInstrAttrib_11.insert(NestedInstrAttribValue_11.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_11);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_12;
      FIX::NestedInstrAttribType NestedInstrAttribType_12(171267151);
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribType_12);
      NestedInstrumentAttribute_NoNestedInstrAttrib_12.insert(NestedInstrAttribType_12.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_12("STRING_81379655");
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribValue_12);
      NestedInstrumentAttribute_NoNestedInstrAttrib_12.insert(NestedInstrAttribValue_12.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_12);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_11;
      FIX::TradingSessionID TradingSessionID_29("STRING_2");
      noTradingSessionRules_2_1_0.set(TradingSessionID_29);
      TradingSessionRulesGrp_NoTradingSessionRules_11.insert(TradingSessionID_29.getString());
      FIX::TradingSessionSubID TradingSessionSubID_29("STRING_1");
      noTradingSessionRules_2_1_0.set(TradingSessionSubID_29);
      TradingSessionRulesGrp_NoTradingSessionRules_11.insert(TradingSessionSubID_29.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_11);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_19;
        FIX::ExecInstValue ExecInstValue_19('1');
        noExecInstRules_2_0_2_0.set(ExecInstValue_19);
        ExecInstRules_NoExecInstRules_19.insert(ExecInstValue_19.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_19);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
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
        FIX::MDFeedType MDFeedType_18("STRING_2044592183");
        noMDFeedTypes_2_0_2_0.set(MDFeedType_18);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MDFeedType_18.getString());
        FIX::MarketDepth MarketDepth_18(491310781);
        noMDFeedTypes_2_0_2_0.set(MarketDepth_18);
        MarketDataFeedTypes_NoMDFeedTypes_18.insert(MarketDepth_18.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_18);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_26;
        FIX::MatchAlgorithm MatchAlgorithm_26("STRING_1302580196");
        noMatchRules_2_0_2_0.set(MatchAlgorithm_26);
        MatchRules_NoMatchRules_26.insert(MatchAlgorithm_26.getString());
        FIX::MatchType MatchType_29("STRING_M2");
        noMatchRules_2_0_2_0.set(MatchType_29);
        MatchRules_NoMatchRules_26.insert(MatchType_29.getString());
        all_values.push_back(MatchRules_NoMatchRules_26);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_27;
        FIX::MatchAlgorithm MatchAlgorithm_27("STRING_1536938265");
        noMatchRules_2_0_2_1.set(MatchAlgorithm_27);
        MatchRules_NoMatchRules_27.insert(MatchAlgorithm_27.getString());
        FIX::MatchType MatchType_30("STRING_M4");
        noMatchRules_2_0_2_1.set(MatchType_30);
        MatchRules_NoMatchRules_27.insert(MatchType_30.getString());
        all_values.push_back(MatchRules_NoMatchRules_27);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_20;
        FIX::OrdType OrdType_21('B');
        noOrdTypeRules_2_0_2_0.set(OrdType_21);
        OrdTypeRules_NoOrdTypeRules_20.insert(OrdType_21.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_20);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_21;
        FIX::OrdType OrdType_22('J');
        noOrdTypeRules_2_0_2_1.set(OrdType_22);
        OrdTypeRules_NoOrdTypeRules_21.insert(OrdType_22.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_21);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_21;
        FIX::TimeInForce TimeInForce_22('5');
        noTimeInForceRules_2_0_2_0.set(TimeInForce_22);
        TimeInForceRules_NoTimeInForceRules_21.insert(TimeInForce_22.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_21);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_12;
      FIX::TradingSessionID TradingSessionID_30("STRING_6");
      noTradingSessionRules_2_1_1.set(TradingSessionID_30);
      TradingSessionRulesGrp_NoTradingSessionRules_12.insert(TradingSessionID_30.getString());
      FIX::TradingSessionSubID TradingSessionSubID_30("STRING_1");
      noTradingSessionRules_2_1_1.set(TradingSessionSubID_30);
      TradingSessionRulesGrp_NoTradingSessionRules_12.insert(TradingSessionSubID_30.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_12);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_20;
        FIX::ExecInstValue ExecInstValue_20('8');
        noExecInstRules_2_1_2_0.set(ExecInstValue_20);
        ExecInstRules_NoExecInstRules_20.insert(ExecInstValue_20.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_20);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_21;
        FIX::ExecInstValue ExecInstValue_21('2');
        noExecInstRules_2_1_2_1.set(ExecInstValue_21);
        ExecInstRules_NoExecInstRules_21.insert(ExecInstValue_21.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_21);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_22;
        FIX::ExecInstValue ExecInstValue_22('1');
        noExecInstRules_2_1_2_2.set(ExecInstValue_22);
        ExecInstRules_NoExecInstRules_22.insert(ExecInstValue_22.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_22);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_19;
        FIX::MDBookType MDBookType_19(3);
        noMDFeedTypes_2_1_2_0.set(MDBookType_19);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MDBookType_19.getString());
        FIX::MDFeedType MDFeedType_19("STRING_1557214484");
        noMDFeedTypes_2_1_2_0.set(MDFeedType_19);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MDFeedType_19.getString());
        FIX::MarketDepth MarketDepth_19(850249259);
        noMDFeedTypes_2_1_2_0.set(MarketDepth_19);
        MarketDataFeedTypes_NoMDFeedTypes_19.insert(MarketDepth_19.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_19);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_28;
        FIX::MatchAlgorithm MatchAlgorithm_28("STRING_1638594140");
        noMatchRules_2_1_2_0.set(MatchAlgorithm_28);
        MatchRules_NoMatchRules_28.insert(MatchAlgorithm_28.getString());
        FIX::MatchType MatchType_31("STRING_2");
        noMatchRules_2_1_2_0.set(MatchType_31);
        MatchRules_NoMatchRules_28.insert(MatchType_31.getString());
        all_values.push_back(MatchRules_NoMatchRules_28);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_29;
        FIX::MatchAlgorithm MatchAlgorithm_29("STRING_408586707");
        noMatchRules_2_1_2_1.set(MatchAlgorithm_29);
        MatchRules_NoMatchRules_29.insert(MatchAlgorithm_29.getString());
        FIX::MatchType MatchType_32("STRING_7");
        noMatchRules_2_1_2_1.set(MatchType_32);
        MatchRules_NoMatchRules_29.insert(MatchType_32.getString());
        all_values.push_back(MatchRules_NoMatchRules_29);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_22;
        FIX::OrdType OrdType_23('7');
        noOrdTypeRules_2_1_2_0.set(OrdType_23);
        OrdTypeRules_NoOrdTypeRules_22.insert(OrdType_23.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_22);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_23;
        FIX::OrdType OrdType_24('F');
        noOrdTypeRules_2_1_2_1.set(OrdType_24);
        OrdTypeRules_NoOrdTypeRules_23.insert(OrdType_24.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_23);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_22;
        FIX::TimeInForce TimeInForce_23('1');
        noTimeInForceRules_2_1_2_0.set(TimeInForce_23);
        TimeInForceRules_NoTimeInForceRules_22.insert(TimeInForce_23.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_22);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_0);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_9;
      FIX::EndStrikePxRange EndStrikePxRange_9;
      EndStrikePxRange_9.setString("5594047");
      noStrikeRules_2_1_0.set(EndStrikePxRange_9);
      StrikeRules_NoStrikeRules_9.insert(EndStrikePxRange_9.getString());
      FIX::StartStrikePxRange StartStrikePxRange_9;
      StartStrikePxRange_9.setString("6733328");
      noStrikeRules_2_1_0.set(StartStrikePxRange_9);
      StrikeRules_NoStrikeRules_9.insert(StartStrikePxRange_9.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_9(463676869);
      noStrikeRules_2_1_0.set(StrikeExerciseStyle_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeExerciseStyle_9.getString());
      FIX::StrikeIncrement StrikeIncrement_9;
      StrikeIncrement_9.setString("20963429");
      noStrikeRules_2_1_0.set(StrikeIncrement_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeIncrement_9.getString());
      FIX::StrikeRuleID StrikeRuleID_9("STRING_1280488082");
      noStrikeRules_2_1_0.set(StrikeRuleID_9);
      StrikeRules_NoStrikeRules_9.insert(StrikeRuleID_9.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_9);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_18;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_18("MONTHYEAR_719194351");
        noMaturityRules_2_0_2_0.set(EndMaturityMonthYear_18);
        MaturityRules_NoMaturityRules_18.insert(EndMaturityMonthYear_18.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_18(2);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearFormat_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearFormat_18.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_18(686839700);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrement_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearIncrement_18.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_18(1);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrementUnits_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityMonthYearIncrementUnits_18.getString());
        FIX::MaturityRuleID MaturityRuleID_18("STRING_599428806");
        noMaturityRules_2_0_2_0.set(MaturityRuleID_18);
        MaturityRules_NoMaturityRules_18.insert(MaturityRuleID_18.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_18("MONTHYEAR_1316968823");
        noMaturityRules_2_0_2_0.set(StartMaturityMonthYear_18);
        MaturityRules_NoMaturityRules_18.insert(StartMaturityMonthYear_18.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_18);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_19;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_19("MONTHYEAR_1581283718");
        noMaturityRules_2_0_2_1.set(EndMaturityMonthYear_19);
        MaturityRules_NoMaturityRules_19.insert(EndMaturityMonthYear_19.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_19(0);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearFormat_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearFormat_19.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_19(1586185923);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrement_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearIncrement_19.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_19(1);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrementUnits_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityMonthYearIncrementUnits_19.getString());
        FIX::MaturityRuleID MaturityRuleID_19("STRING_1618051714");
        noMaturityRules_2_0_2_1.set(MaturityRuleID_19);
        MaturityRules_NoMaturityRules_19.insert(MaturityRuleID_19.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_19("MONTHYEAR_23180368");
        noMaturityRules_2_0_2_1.set(StartMaturityMonthYear_19);
        MaturityRules_NoMaturityRules_19.insert(StartMaturityMonthYear_19.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_19);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_20;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_20("MONTHYEAR_626132430");
        noMaturityRules_2_0_2_2.set(EndMaturityMonthYear_20);
        MaturityRules_NoMaturityRules_20.insert(EndMaturityMonthYear_20.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_20(1);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearFormat_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearFormat_20.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_20(778925612);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearIncrement_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearIncrement_20.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_20(2);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearIncrementUnits_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityMonthYearIncrementUnits_20.getString());
        FIX::MaturityRuleID MaturityRuleID_20("STRING_221206466");
        noMaturityRules_2_0_2_2.set(MaturityRuleID_20);
        MaturityRules_NoMaturityRules_20.insert(MaturityRuleID_20.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_20("MONTHYEAR_1187512319");
        noMaturityRules_2_0_2_2.set(StartMaturityMonthYear_20);
        MaturityRules_NoMaturityRules_20.insert(StartMaturityMonthYear_20.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_20);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_2);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_0);
    }
    msg.addGroup(noMarketSegments_0_2);
  }
  // RelSymDerivSecUpdGrp
  // Group RelSymDerivSecUpdGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_0;
    FIX::CorporateAction CorporateAction_2("MULTIPLECHARVALUE_M");
    noRelatedSym_0_0.set(CorporateAction_2);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(CorporateAction_2.getString());
    FIX::Currency Currency_17("JPY");
    noRelatedSym_0_0.set(Currency_17);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(Currency_17.getString());
    FIX::EncodedText EncodedText_32("DATA_2095802497");
    noRelatedSym_0_0.set(EncodedText_32);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(EncodedText_32.getString());
    FIX::EncodedTextLen EncodedTextLen_32(31909091);
    noRelatedSym_0_0.set(EncodedTextLen_32);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(EncodedTextLen_32.getString());
    FIX::ListUpdateAction ListUpdateAction_0('1');
    noRelatedSym_0_0.set(ListUpdateAction_0);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(ListUpdateAction_0.getString());
    FIX::RelSymTransactTime RelSymTransactTime_2(FIX::UTCTIMESTAMP(20, 42, 58, 11, 1, 2005));
    noRelatedSym_0_0.set(RelSymTransactTime_2);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(RelSymTransactTime_2.getString());
    FIX::Text Text_32("STRING_1706172371");
    noRelatedSym_0_0.set(Text_32);
    RelSymDerivSecUpdGrp_NoRelatedSym_0.insert(Text_32.getString());
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_0);
    all_compo_names.insert("RelSymDerivSecUpdGrp.NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_35;
      FIX::EncodedLegIssuer EncodedLegIssuer_35("DATA_424077438");
      noLegs_0_1_0.set(EncodedLegIssuer_35);
      InstrumentLeg_35.insert(EncodedLegIssuer_35.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_35(158117529);
      noLegs_0_1_0.set(EncodedLegIssuerLen_35);
      InstrumentLeg_35.insert(EncodedLegIssuerLen_35.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_35("DATA_2030143952");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_35);
      InstrumentLeg_35.insert(EncodedLegSecurityDesc_35.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_35(2005361157);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_35);
      InstrumentLeg_35.insert(EncodedLegSecurityDescLen_35.getString());
      FIX::LegCFICode LegCFICode_35("STRING_841714972");
      noLegs_0_1_0.set(LegCFICode_35);
      InstrumentLeg_35.insert(LegCFICode_35.getString());
      FIX::LegContractMultiplier LegContractMultiplier_35;
      LegContractMultiplier_35.setString("14688462");
      noLegs_0_1_0.set(LegContractMultiplier_35);
      InstrumentLeg_35.insert(LegContractMultiplier_35.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_35(1074279102);
      noLegs_0_1_0.set(LegContractMultiplierUnit_35);
      InstrumentLeg_35.insert(LegContractMultiplierUnit_35.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_35("MONTHYEAR_312283038");
      noLegs_0_1_0.set(LegContractSettlMonth_35);
      InstrumentLeg_35.insert(LegContractSettlMonth_35.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_35("COUNTRY_1492026595");
      noLegs_0_1_0.set(LegCountryOfIssue_35);
      InstrumentLeg_35.insert(LegCountryOfIssue_35.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_35("LOCALMKTDATE_1700411532");
      noLegs_0_1_0.set(LegCouponPaymentDate_35);
      InstrumentLeg_35.insert(LegCouponPaymentDate_35.getString());
      FIX::LegCouponRate LegCouponRate_35;
      LegCouponRate_35.setString("3.630000");
      noLegs_0_1_0.set(LegCouponRate_35);
      InstrumentLeg_35.insert(LegCouponRate_35.getString());
      FIX::LegCreditRating LegCreditRating_35("STRING_123468559");
      noLegs_0_1_0.set(LegCreditRating_35);
      InstrumentLeg_35.insert(LegCreditRating_35.getString());
      FIX::LegCurrency LegCurrency_35("CHF");
      noLegs_0_1_0.set(LegCurrency_35);
      InstrumentLeg_35.insert(LegCurrency_35.getString());
      FIX::LegDatedDate LegDatedDate_35("LOCALMKTDATE_1310980878");
      noLegs_0_1_0.set(LegDatedDate_35);
      InstrumentLeg_35.insert(LegDatedDate_35.getString());
      FIX::LegExerciseStyle LegExerciseStyle_35(41264058);
      noLegs_0_1_0.set(LegExerciseStyle_35);
      InstrumentLeg_35.insert(LegExerciseStyle_35.getString());
      FIX::LegFactor LegFactor_35;
      LegFactor_35.setString("12320644");
      noLegs_0_1_0.set(LegFactor_35);
      InstrumentLeg_35.insert(LegFactor_35.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_35(1972137316);
      noLegs_0_1_0.set(LegFlowScheduleType_35);
      InstrumentLeg_35.insert(LegFlowScheduleType_35.getString());
      FIX::LegInstrRegistry LegInstrRegistry_35("STRING_1668505924");
      noLegs_0_1_0.set(LegInstrRegistry_35);
      InstrumentLeg_35.insert(LegInstrRegistry_35.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_35("LOCALMKTDATE_1180383279");
      noLegs_0_1_0.set(LegInterestAccrualDate_35);
      InstrumentLeg_35.insert(LegInterestAccrualDate_35.getString());
      FIX::LegIssueDate LegIssueDate_35("LOCALMKTDATE_2004046407");
      noLegs_0_1_0.set(LegIssueDate_35);
      InstrumentLeg_35.insert(LegIssueDate_35.getString());
      FIX::LegIssuer LegIssuer_35("STRING_748239889");
      noLegs_0_1_0.set(LegIssuer_35);
      InstrumentLeg_35.insert(LegIssuer_35.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_35("STRING_1688106844");
      noLegs_0_1_0.set(LegLocaleOfIssue_35);
      InstrumentLeg_35.insert(LegLocaleOfIssue_35.getString());
      FIX::LegMaturityDate LegMaturityDate_35("LOCALMKTDATE_561804699");
      noLegs_0_1_0.set(LegMaturityDate_35);
      InstrumentLeg_35.insert(LegMaturityDate_35.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_35("MONTHYEAR_291650723");
      noLegs_0_1_0.set(LegMaturityMonthYear_35);
      InstrumentLeg_35.insert(LegMaturityMonthYear_35.getString());
      FIX::LegMaturityTime LegMaturityTime_35("TZTIMEONLY_2144689742");
      noLegs_0_1_0.set(LegMaturityTime_35);
      InstrumentLeg_35.insert(LegMaturityTime_35.getString());
      FIX::LegOptAttribute LegOptAttribute_35('4');
      noLegs_0_1_0.set(LegOptAttribute_35);
      InstrumentLeg_35.insert(LegOptAttribute_35.getString());
      FIX::LegOptionRatio LegOptionRatio_35;
      LegOptionRatio_35.setString("3179861");
      noLegs_0_1_0.set(LegOptionRatio_35);
      InstrumentLeg_35.insert(LegOptionRatio_35.getString());
      FIX::LegPool LegPool_35("STRING_1172983344");
      noLegs_0_1_0.set(LegPool_35);
      InstrumentLeg_35.insert(LegPool_35.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_35("STRING_2106223446");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_35);
      InstrumentLeg_35.insert(LegPriceUnitOfMeasure_35.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_35;
      LegPriceUnitOfMeasureQty_35.setString("10311612");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_35);
      InstrumentLeg_35.insert(LegPriceUnitOfMeasureQty_35.getString());
      FIX::LegProduct LegProduct_35(1597060782);
      noLegs_0_1_0.set(LegProduct_35);
      InstrumentLeg_35.insert(LegProduct_35.getString());
      FIX::LegPutOrCall LegPutOrCall_35(116857327);
      noLegs_0_1_0.set(LegPutOrCall_35);
      InstrumentLeg_35.insert(LegPutOrCall_35.getString());
      FIX::LegRatioQty LegRatioQty_35;
      LegRatioQty_35.setString("9138215");
      noLegs_0_1_0.set(LegRatioQty_35);
      InstrumentLeg_35.insert(LegRatioQty_35.getString());
      FIX::LegRedemptionDate LegRedemptionDate_35("LOCALMKTDATE_1454938291");
      noLegs_0_1_0.set(LegRedemptionDate_35);
      InstrumentLeg_35.insert(LegRedemptionDate_35.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_35("STRING_958572299");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_35);
      InstrumentLeg_35.insert(LegRepoCollateralSecurityType_35.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_35;
      LegRepurchaseRate_35.setString("41.640000");
      noLegs_0_1_0.set(LegRepurchaseRate_35);
      InstrumentLeg_35.insert(LegRepurchaseRate_35.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_35(381733746);
      noLegs_0_1_0.set(LegRepurchaseTerm_35);
      InstrumentLeg_35.insert(LegRepurchaseTerm_35.getString());
      FIX::LegSecurityDesc LegSecurityDesc_35("STRING_1270855337");
      noLegs_0_1_0.set(LegSecurityDesc_35);
      InstrumentLeg_35.insert(LegSecurityDesc_35.getString());
      FIX::LegSecurityExchange LegSecurityExchange_35("EXCHANGE_1727210760");
      noLegs_0_1_0.set(LegSecurityExchange_35);
      InstrumentLeg_35.insert(LegSecurityExchange_35.getString());
      FIX::LegSecurityID LegSecurityID_35("STRING_2082145278");
      noLegs_0_1_0.set(LegSecurityID_35);
      InstrumentLeg_35.insert(LegSecurityID_35.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_35("STRING_1903955700");
      noLegs_0_1_0.set(LegSecurityIDSource_35);
      InstrumentLeg_35.insert(LegSecurityIDSource_35.getString());
      FIX::LegSecuritySubType LegSecuritySubType_35("STRING_1850679319");
      noLegs_0_1_0.set(LegSecuritySubType_35);
      InstrumentLeg_35.insert(LegSecuritySubType_35.getString());
      FIX::LegSecurityType LegSecurityType_35("STRING_1752316085");
      noLegs_0_1_0.set(LegSecurityType_35);
      InstrumentLeg_35.insert(LegSecurityType_35.getString());
      FIX::LegSide LegSide_35('6');
      noLegs_0_1_0.set(LegSide_35);
      InstrumentLeg_35.insert(LegSide_35.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_35("STRING_1014176550");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_35);
      InstrumentLeg_35.insert(LegStateOrProvinceOfIssue_35.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_35("USD");
      noLegs_0_1_0.set(LegStrikeCurrency_35);
      InstrumentLeg_35.insert(LegStrikeCurrency_35.getString());
      FIX::LegStrikePrice LegStrikePrice_35;
      LegStrikePrice_35.setString("8388302");
      noLegs_0_1_0.set(LegStrikePrice_35);
      InstrumentLeg_35.insert(LegStrikePrice_35.getString());
      FIX::LegSymbol LegSymbol_35("STRING_1314602420");
      noLegs_0_1_0.set(LegSymbol_35);
      InstrumentLeg_35.insert(LegSymbol_35.getString());
      FIX::LegSymbolSfx LegSymbolSfx_35("STRING_875742944");
      noLegs_0_1_0.set(LegSymbolSfx_35);
      InstrumentLeg_35.insert(LegSymbolSfx_35.getString());
      FIX::LegTimeUnit LegTimeUnit_35("STRING_695392977");
      noLegs_0_1_0.set(LegTimeUnit_35);
      InstrumentLeg_35.insert(LegTimeUnit_35.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_35("STRING_2062842309");
      noLegs_0_1_0.set(LegUnitOfMeasure_35);
      InstrumentLeg_35.insert(LegUnitOfMeasure_35.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_35;
      LegUnitOfMeasureQty_35.setString("4163661");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_35);
      InstrumentLeg_35.insert(LegUnitOfMeasureQty_35.getString());
      all_values.push_back(InstrumentLeg_35);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_71;
        FIX::LegSecurityAltID LegSecurityAltID_71("STRING_207009385");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_71);
        LegSecAltIDGrp_NoLegSecurityAltID_71.insert(LegSecurityAltID_71.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_71("STRING_413572235");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_71);
        LegSecAltIDGrp_NoLegSecurityAltID_71.insert(LegSecurityAltIDSource_71.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_71);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_18;
    FIX::AttachmentPoint AttachmentPoint_18;
    AttachmentPoint_18.setString("87.510000");
    noRelatedSym_0_0.set(AttachmentPoint_18);
    Instrument_18.insert(AttachmentPoint_18.getString());
    FIX::CFICode CFICode_18("STRING_524995537");
    noRelatedSym_0_0.set(CFICode_18);
    Instrument_18.insert(CFICode_18.getString());
    FIX::CPProgram CPProgram_18(99);
    noRelatedSym_0_0.set(CPProgram_18);
    Instrument_18.insert(CPProgram_18.getString());
    FIX::CPRegType CPRegType_18("STRING_1615988549");
    noRelatedSym_0_0.set(CPRegType_18);
    Instrument_18.insert(CPRegType_18.getString());
    FIX::CapPrice CapPrice_18;
    CapPrice_18.setString("15561568");
    noRelatedSym_0_0.set(CapPrice_18);
    Instrument_18.insert(CapPrice_18.getString());
    FIX::ContractMultiplier ContractMultiplier_18;
    ContractMultiplier_18.setString("10361327");
    noRelatedSym_0_0.set(ContractMultiplier_18);
    Instrument_18.insert(ContractMultiplier_18.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_18(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_18);
    Instrument_18.insert(ContractMultiplierUnit_18.getString());
    FIX::ContractSettlMonth ContractSettlMonth_18("MONTHYEAR_322494755");
    noRelatedSym_0_0.set(ContractSettlMonth_18);
    Instrument_18.insert(ContractSettlMonth_18.getString());
    FIX::CountryOfIssue CountryOfIssue_18("COUNTRY_343587357");
    noRelatedSym_0_0.set(CountryOfIssue_18);
    Instrument_18.insert(CountryOfIssue_18.getString());
    FIX::CouponPaymentDate CouponPaymentDate_18("LOCALMKTDATE_543934528");
    noRelatedSym_0_0.set(CouponPaymentDate_18);
    Instrument_18.insert(CouponPaymentDate_18.getString());
    FIX::CouponRate CouponRate_18;
    CouponRate_18.setString("89.190000");
    noRelatedSym_0_0.set(CouponRate_18);
    Instrument_18.insert(CouponRate_18.getString());
    FIX::CreditRating CreditRating_18("STRING_725321103");
    noRelatedSym_0_0.set(CreditRating_18);
    Instrument_18.insert(CreditRating_18.getString());
    FIX::DatedDate DatedDate_18("LOCALMKTDATE_1814789865");
    noRelatedSym_0_0.set(DatedDate_18);
    Instrument_18.insert(DatedDate_18.getString());
    FIX::DetachmentPoint DetachmentPoint_18;
    DetachmentPoint_18.setString("60.310000");
    noRelatedSym_0_0.set(DetachmentPoint_18);
    Instrument_18.insert(DetachmentPoint_18.getString());
    FIX::EncodedIssuer EncodedIssuer_18("DATA_659982733");
    noRelatedSym_0_0.set(EncodedIssuer_18);
    Instrument_18.insert(EncodedIssuer_18.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_18(1571261918);
    noRelatedSym_0_0.set(EncodedIssuerLen_18);
    Instrument_18.insert(EncodedIssuerLen_18.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_18("DATA_1988085351");
    noRelatedSym_0_0.set(EncodedSecurityDesc_18);
    Instrument_18.insert(EncodedSecurityDesc_18.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_18(264815170);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_18);
    Instrument_18.insert(EncodedSecurityDescLen_18.getString());
    FIX::ExerciseStyle ExerciseStyle_18(2);
    noRelatedSym_0_0.set(ExerciseStyle_18);
    Instrument_18.insert(ExerciseStyle_18.getString());
    FIX::Factor Factor_18;
    Factor_18.setString("8547782");
    noRelatedSym_0_0.set(Factor_18);
    Instrument_18.insert(Factor_18.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_18(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_18);
    Instrument_18.insert(FlexProductEligibilityIndicator_18.getString());
    FIX::FlexibleIndicator FlexibleIndicator_18(true);
    noRelatedSym_0_0.set(FlexibleIndicator_18);
    Instrument_18.insert(FlexibleIndicator_18.getString());
    FIX::FloorPrice FloorPrice_18;
    FloorPrice_18.setString("16936084");
    noRelatedSym_0_0.set(FloorPrice_18);
    Instrument_18.insert(FloorPrice_18.getString());
    FIX::FlowScheduleType FlowScheduleType_18(1);
    noRelatedSym_0_0.set(FlowScheduleType_18);
    Instrument_18.insert(FlowScheduleType_18.getString());
    FIX::InstrRegistry InstrRegistry_18("STRING_605659760");
    noRelatedSym_0_0.set(InstrRegistry_18);
    Instrument_18.insert(InstrRegistry_18.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_18('2');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_18);
    Instrument_18.insert(InstrmtAssignmentMethod_18.getString());
    FIX::InterestAccrualDate InterestAccrualDate_18("LOCALMKTDATE_1140872747");
    noRelatedSym_0_0.set(InterestAccrualDate_18);
    Instrument_18.insert(InterestAccrualDate_18.getString());
    FIX::IssueDate IssueDate_18("LOCALMKTDATE_1022025901");
    noRelatedSym_0_0.set(IssueDate_18);
    Instrument_18.insert(IssueDate_18.getString());
    FIX::Issuer Issuer_18("STRING_1498715476");
    noRelatedSym_0_0.set(Issuer_18);
    Instrument_18.insert(Issuer_18.getString());
    FIX::ListMethod ListMethod_18(0);
    noRelatedSym_0_0.set(ListMethod_18);
    Instrument_18.insert(ListMethod_18.getString());
    FIX::LocaleOfIssue LocaleOfIssue_18("STRING_1435598136");
    noRelatedSym_0_0.set(LocaleOfIssue_18);
    Instrument_18.insert(LocaleOfIssue_18.getString());
    FIX::MaturityDate MaturityDate_18("LOCALMKTDATE_1008480579");
    noRelatedSym_0_0.set(MaturityDate_18);
    Instrument_18.insert(MaturityDate_18.getString());
    FIX::MaturityMonthYear MaturityMonthYear_18("MONTHYEAR_1872877669");
    noRelatedSym_0_0.set(MaturityMonthYear_18);
    Instrument_18.insert(MaturityMonthYear_18.getString());
    FIX::MaturityTime MaturityTime_18("TZTIMEONLY_874670067");
    noRelatedSym_0_0.set(MaturityTime_18);
    Instrument_18.insert(MaturityTime_18.getString());
    FIX::MinPriceIncrement MinPriceIncrement_18;
    MinPriceIncrement_18.setString("4769854");
    noRelatedSym_0_0.set(MinPriceIncrement_18);
    Instrument_18.insert(MinPriceIncrement_18.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_18;
    MinPriceIncrementAmount_18.setString("12815508");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_18);
    Instrument_18.insert(MinPriceIncrementAmount_18.getString());
    FIX::NTPositionLimit NTPositionLimit_18(1910802780);
    noRelatedSym_0_0.set(NTPositionLimit_18);
    Instrument_18.insert(NTPositionLimit_18.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_18;
    NotionalPercentageOutstanding_18.setString("77.090000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_18);
    Instrument_18.insert(NotionalPercentageOutstanding_18.getString());
    FIX::OptAttribute OptAttribute_18('1');
    noRelatedSym_0_0.set(OptAttribute_18);
    Instrument_18.insert(OptAttribute_18.getString());
    FIX::OptPayoutAmount OptPayoutAmount_18;
    OptPayoutAmount_18.setString("1069064");
    noRelatedSym_0_0.set(OptPayoutAmount_18);
    Instrument_18.insert(OptPayoutAmount_18.getString());
    FIX::OptPayoutType OptPayoutType_18(1);
    noRelatedSym_0_0.set(OptPayoutType_18);
    Instrument_18.insert(OptPayoutType_18.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_18;
    OriginalNotionalPercentageOutstanding_18.setString("8.660000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_18);
    Instrument_18.insert(OriginalNotionalPercentageOutstanding_18.getString());
    FIX::Pool Pool_18("STRING_832227592");
    noRelatedSym_0_0.set(Pool_18);
    Instrument_18.insert(Pool_18.getString());
    FIX::PositionLimit PositionLimit_18(273588454);
    noRelatedSym_0_0.set(PositionLimit_18);
    Instrument_18.insert(PositionLimit_18.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_18("STRING_INX");
    noRelatedSym_0_0.set(PriceQuoteMethod_18);
    Instrument_18.insert(PriceQuoteMethod_18.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_18("STRING_1492210326");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_18);
    Instrument_18.insert(PriceUnitOfMeasure_18.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_18;
    PriceUnitOfMeasureQty_18.setString("18448503");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_18);
    Instrument_18.insert(PriceUnitOfMeasureQty_18.getString());
    FIX::Product Product_20(5);
    noRelatedSym_0_0.set(Product_20);
    Instrument_18.insert(Product_20.getString());
    FIX::ProductComplex ProductComplex_18("STRING_1757025496");
    noRelatedSym_0_0.set(ProductComplex_18);
    Instrument_18.insert(ProductComplex_18.getString());
    FIX::PutOrCall PutOrCall_18(0);
    noRelatedSym_0_0.set(PutOrCall_18);
    Instrument_18.insert(PutOrCall_18.getString());
    FIX::RedemptionDate RedemptionDate_18("LOCALMKTDATE_847026853");
    noRelatedSym_0_0.set(RedemptionDate_18);
    Instrument_18.insert(RedemptionDate_18.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_18("STRING_1667937162");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_18);
    Instrument_18.insert(RepoCollateralSecurityType_18.getString());
    FIX::RepurchaseRate RepurchaseRate_18;
    RepurchaseRate_18.setString("43.410000");
    noRelatedSym_0_0.set(RepurchaseRate_18);
    Instrument_18.insert(RepurchaseRate_18.getString());
    FIX::RepurchaseTerm RepurchaseTerm_18(393151676);
    noRelatedSym_0_0.set(RepurchaseTerm_18);
    Instrument_18.insert(RepurchaseTerm_18.getString());
    FIX::RestructuringType RestructuringType_18("STRING_FR");
    noRelatedSym_0_0.set(RestructuringType_18);
    Instrument_18.insert(RestructuringType_18.getString());
    FIX::SecurityDesc SecurityDesc_18("STRING_67500453");
    noRelatedSym_0_0.set(SecurityDesc_18);
    Instrument_18.insert(SecurityDesc_18.getString());
    FIX::SecurityExchange SecurityExchange_18("EXCHANGE_634669476");
    noRelatedSym_0_0.set(SecurityExchange_18);
    Instrument_18.insert(SecurityExchange_18.getString());
    FIX::SecurityGroup SecurityGroup_18("STRING_1886840348");
    noRelatedSym_0_0.set(SecurityGroup_18);
    Instrument_18.insert(SecurityGroup_18.getString());
    FIX::SecurityID SecurityID_18("STRING_1089526354");
    noRelatedSym_0_0.set(SecurityID_18);
    Instrument_18.insert(SecurityID_18.getString());
    FIX::SecurityIDSource SecurityIDSource_18("STRING_8");
    noRelatedSym_0_0.set(SecurityIDSource_18);
    Instrument_18.insert(SecurityIDSource_18.getString());
    FIX::SecurityStatus SecurityStatus_18("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_18);
    Instrument_18.insert(SecurityStatus_18.getString());
    FIX::SecuritySubType SecuritySubType_19("STRING_377640842");
    noRelatedSym_0_0.set(SecuritySubType_19);
    Instrument_18.insert(SecuritySubType_19.getString());
    FIX::SecurityType SecurityType_20("STRING_XLINKD");
    noRelatedSym_0_0.set(SecurityType_20);
    Instrument_18.insert(SecurityType_20.getString());
    FIX::Seniority Seniority_18("STRING_SD");
    noRelatedSym_0_0.set(Seniority_18);
    Instrument_18.insert(Seniority_18.getString());
    FIX::SettlMethod SettlMethod_18('P');
    noRelatedSym_0_0.set(SettlMethod_18);
    Instrument_18.insert(SettlMethod_18.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_18("STRING_1471367365");
    noRelatedSym_0_0.set(SettleOnOpenFlag_18);
    Instrument_18.insert(SettleOnOpenFlag_18.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_18("STRING_2094183693");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_18);
    Instrument_18.insert(StateOrProvinceOfIssue_18.getString());
    FIX::StrikeCurrency StrikeCurrency_18("USD");
    noRelatedSym_0_0.set(StrikeCurrency_18);
    Instrument_18.insert(StrikeCurrency_18.getString());
    FIX::StrikeMultiplier StrikeMultiplier_18;
    StrikeMultiplier_18.setString("15507456");
    noRelatedSym_0_0.set(StrikeMultiplier_18);
    Instrument_18.insert(StrikeMultiplier_18.getString());
    FIX::StrikePrice StrikePrice_18;
    StrikePrice_18.setString("11225365");
    noRelatedSym_0_0.set(StrikePrice_18);
    Instrument_18.insert(StrikePrice_18.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_18(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_18);
    Instrument_18.insert(StrikePriceBoundaryMethod_18.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_18;
    StrikePriceBoundaryPrecision_18.setString("65.060000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_18);
    Instrument_18.insert(StrikePriceBoundaryPrecision_18.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_18(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_18);
    Instrument_18.insert(StrikePriceDeterminationMethod_18.getString());
    FIX::StrikeValue StrikeValue_18;
    StrikeValue_18.setString("2661021");
    noRelatedSym_0_0.set(StrikeValue_18);
    Instrument_18.insert(StrikeValue_18.getString());
    FIX::Symbol Symbol_18("STRING_1716633403");
    noRelatedSym_0_0.set(Symbol_18);
    Instrument_18.insert(Symbol_18.getString());
    FIX::SymbolSfx SymbolSfx_18("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_18);
    Instrument_18.insert(SymbolSfx_18.getString());
    FIX::TimeUnit TimeUnit_18("STRING_D");
    noRelatedSym_0_0.set(TimeUnit_18);
    Instrument_18.insert(TimeUnit_18.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_18(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_18);
    Instrument_18.insert(UnderlyingPriceDeterminationMethod_18.getString());
    FIX::UnitOfMeasure UnitOfMeasure_18("STRING_lbs");
    noRelatedSym_0_0.set(UnitOfMeasure_18);
    Instrument_18.insert(UnitOfMeasure_18.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_18;
    UnitOfMeasureQty_18.setString("18428763");
    noRelatedSym_0_0.set(UnitOfMeasureQty_18);
    Instrument_18.insert(UnitOfMeasureQty_18.getString());
    FIX::ValuationMethod ValuationMethod_18("STRING_CDSD");
    noRelatedSym_0_0.set(ValuationMethod_18);
    Instrument_18.insert(ValuationMethod_18.getString());
    all_values.push_back(Instrument_18);
    all_compo_names.insert("Instrument");

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
      ComplexEventPrice_40.setString("8015768");
      noComplexEvents_0_1_0.set(ComplexEventPrice_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPrice_40.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_40(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceBoundaryMethod_40.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_40;
      ComplexEventPriceBoundaryPrecision_40.setString("75.130000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceBoundaryPrecision_40.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_40(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventPriceTimeType_40.getString());
      FIX::ComplexEventType ComplexEventType_40(3);
      noComplexEvents_0_1_0.set(ComplexEventType_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexEventType_40.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_40;
      ComplexOptPayoutAmount_40.setString("3142602");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_40);
      ComplexEvents_NoComplexEvents_40.insert(ComplexOptPayoutAmount_40.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_40);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_83;
        FIX::ComplexEventEndDate ComplexEventEndDate_83(FIX::UTCTIMESTAMP(22, 24, 4, 23, 2, 2017));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_83);
        ComplexEventDates_NoComplexEventDates_83.insert(ComplexEventEndDate_83.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_83(FIX::UTCTIMESTAMP(23, 1, 17, 10, 4, 2013));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_83);
        ComplexEventDates_NoComplexEventDates_83.insert(ComplexEventStartDate_83.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_83);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_169;
          FIX::ComplexEventEndTime ComplexEventEndTime_169(FIX::UTCTIMEONLY(7, 57, 39));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_169);
          ComplexEventTimes_NoComplexEventTimes_169.insert(ComplexEventEndTime_169.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_169(FIX::UTCTIMEONLY(20, 28, 54));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_169);
          ComplexEventTimes_NoComplexEventTimes_169.insert(ComplexEventStartTime_169.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_169);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_170;
          FIX::ComplexEventEndTime ComplexEventEndTime_170(FIX::UTCTIMEONLY(14, 0, 0));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_170);
          ComplexEventTimes_NoComplexEventTimes_170.insert(ComplexEventEndTime_170.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_170(FIX::UTCTIMEONLY(21, 20, 28));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_170);
          ComplexEventTimes_NoComplexEventTimes_170.insert(ComplexEventStartTime_170.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_170);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_171;
          FIX::ComplexEventEndTime ComplexEventEndTime_171(FIX::UTCTIMEONLY(10, 52, 11));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_171);
          ComplexEventTimes_NoComplexEventTimes_171.insert(ComplexEventEndTime_171.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_171(FIX::UTCTIMEONLY(9, 41, 23));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_171);
          ComplexEventTimes_NoComplexEventTimes_171.insert(ComplexEventStartTime_171.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_171);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_84;
        FIX::ComplexEventEndDate ComplexEventEndDate_84(FIX::UTCTIMESTAMP(18, 32, 18, 10, 2, 2006));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_84);
        ComplexEventDates_NoComplexEventDates_84.insert(ComplexEventEndDate_84.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_84(FIX::UTCTIMESTAMP(8, 43, 36, 1, 4, 2010));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_84);
        ComplexEventDates_NoComplexEventDates_84.insert(ComplexEventStartDate_84.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_84);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_172;
          FIX::ComplexEventEndTime ComplexEventEndTime_172(FIX::UTCTIMEONLY(11, 40, 39));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_172);
          ComplexEventTimes_NoComplexEventTimes_172.insert(ComplexEventEndTime_172.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_172(FIX::UTCTIMEONLY(1, 51, 0));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_172);
          ComplexEventTimes_NoComplexEventTimes_172.insert(ComplexEventStartTime_172.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_172);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

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
      multiset<string> EvntGrp_NoEvents_37;
      FIX::EventDate EventDate_37("LOCALMKTDATE_1877091985");
      noEvents_0_1_0.set(EventDate_37);
      EvntGrp_NoEvents_37.insert(EventDate_37.getString());
      FIX::EventPx EventPx_37;
      EventPx_37.setString("15335974");
      noEvents_0_1_0.set(EventPx_37);
      EvntGrp_NoEvents_37.insert(EventPx_37.getString());
      FIX::EventText EventText_37("STRING_632084456");
      noEvents_0_1_0.set(EventText_37);
      EvntGrp_NoEvents_37.insert(EventText_37.getString());
      FIX::EventTime EventTime_37(FIX::UTCTIMESTAMP(14, 37, 58, 3, 1, 2006));
      noEvents_0_1_0.set(EventTime_37);
      EvntGrp_NoEvents_37.insert(EventTime_37.getString());
      FIX::EventType EventType_37(6);
      noEvents_0_1_0.set(EventType_37);
      EvntGrp_NoEvents_37.insert(EventType_37.getString());
      all_values.push_back(EvntGrp_NoEvents_37);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_33;
      FIX::InstrumentPartyID InstrumentPartyID_33("STRING_104629679");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_33);
      InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyID_33.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_33('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_33);
      InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyIDSource_33.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_33(1063866311);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_33);
      InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyRole_33.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_33);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65;
        FIX::InstrumentPartySubID InstrumentPartySubID_65("STRING_225013567");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_65);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65.insert(InstrumentPartySubID_65.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_65(1395859547);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_65);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65.insert(InstrumentPartySubIDType_65.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66;
        FIX::InstrumentPartySubID InstrumentPartySubID_66("STRING_248123128");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_66);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66.insert(InstrumentPartySubID_66.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_66(154577018);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_66);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66.insert(InstrumentPartySubIDType_66.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_34;
      FIX::InstrumentPartyID InstrumentPartyID_34("STRING_701489503");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_34);
      InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyID_34.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_34('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_34);
      InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyIDSource_34.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_34(285495917);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_34);
      InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyRole_34.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_34);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67;
        FIX::InstrumentPartySubID InstrumentPartySubID_67("STRING_1478454956");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_67);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67.insert(InstrumentPartySubID_67.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_67(1989987777);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_67);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67.insert(InstrumentPartySubIDType_67.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_35;
      FIX::InstrumentPartyID InstrumentPartyID_35("STRING_74636598");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_35);
      InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyID_35.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_35('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_35);
      InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyIDSource_35.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_35(1287345520);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_35);
      InstrumentParties_NoInstrumentParties_35.insert(InstrumentPartyRole_35.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_35);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68;
        FIX::InstrumentPartySubID InstrumentPartySubID_68("STRING_1760535079");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_68);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68.insert(InstrumentPartySubID_68.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_68(1016953858);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_68);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68.insert(InstrumentPartySubIDType_68.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69;
        FIX::InstrumentPartySubID InstrumentPartySubID_69("STRING_239177884");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_69);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69.insert(InstrumentPartySubID_69.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_69(245135887);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_69);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69.insert(InstrumentPartySubIDType_69.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_32;
      FIX::SecurityAltID SecurityAltID_32("STRING_2120874810");
      noSecurityAltID_0_1_0.set(SecurityAltID_32);
      SecAltIDGrp_NoSecurityAltID_32.insert(SecurityAltID_32.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_32("STRING_2040881325");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_32);
      SecAltIDGrp_NoSecurityAltID_32.insert(SecurityAltIDSource_32.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_32);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_36;
    FIX::SecurityXML SecurityXML_37("XMLDATA_1975465651");
    noRelatedSym_0_0.set(SecurityXML_37);
    FIX::SecurityXMLLen SecurityXMLLen_18(1182348649);
    noRelatedSym_0_0.set(SecurityXMLLen_18);
    FIX::SecurityXMLSchema SecurityXMLSchema_18("STRING_722480989");
    noRelatedSym_0_0.set(SecurityXMLSchema_18);
    SecurityXML_36.insert(SecurityXMLSchema_18.getString());
    all_values.push_back(SecurityXML_36);
    all_compo_names.insert("SecurityXML");

    // InstrumentExtension
    multiset<string> InstrumentExtension_6;
    FIX::DeliveryForm DeliveryForm_6(2);
    noRelatedSym_0_0.set(DeliveryForm_6);
    InstrumentExtension_6.insert(DeliveryForm_6.getString());
    FIX::PctAtRisk PctAtRisk_6;
    PctAtRisk_6.setString("14.070000");
    noRelatedSym_0_0.set(PctAtRisk_6);
    InstrumentExtension_6.insert(PctAtRisk_6.getString());
    all_values.push_back(InstrumentExtension_6);
    all_compo_names.insert("InstrumentExtension");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_12;
      FIX::InstrAttribType InstrAttribType_12(23);
      noInstrAttrib_0_1_0.set(InstrAttribType_12);
      AttrbGrp_NoInstrAttrib_12.insert(InstrAttribType_12.getString());
      FIX::InstrAttribValue InstrAttribValue_12("STRING_2029813558");
      noInstrAttrib_0_1_0.set(InstrAttribValue_12);
      AttrbGrp_NoInstrAttrib_12.insert(InstrAttribValue_12.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_12);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_13;
      FIX::InstrAttribType InstrAttribType_13(7);
      noInstrAttrib_0_1_1.set(InstrAttribType_13);
      AttrbGrp_NoInstrAttrib_13.insert(InstrAttribType_13.getString());
      FIX::InstrAttribValue InstrAttribValue_13("STRING_1036053567");
      noInstrAttrib_0_1_1.set(InstrAttribValue_13);
      AttrbGrp_NoInstrAttrib_13.insert(InstrAttribValue_13.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_13);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_2;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_2;
    SecondaryHighLimitPrice_2.setString("1073434");
    noRelatedSym_0_0.set(SecondaryHighLimitPrice_2);
    SecondaryPriceLimits_2.insert(SecondaryHighLimitPrice_2.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_2;
    SecondaryLowLimitPrice_2.setString("3318077");
    noRelatedSym_0_0.set(SecondaryLowLimitPrice_2);
    SecondaryPriceLimits_2.insert(SecondaryLowLimitPrice_2.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_2(1284176695);
    noRelatedSym_0_0.set(SecondaryPriceLimitType_2);
    SecondaryPriceLimits_2.insert(SecondaryPriceLimitType_2.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_2;
    SecondaryTradingReferencePrice_2.setString("2619204");
    noRelatedSym_0_0.set(SecondaryTradingReferencePrice_2);
    SecondaryPriceLimits_2.insert(SecondaryTradingReferencePrice_2.getString());
    all_values.push_back(SecondaryPriceLimits_2);
    all_compo_names.insert("SecondaryPriceLimits");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_1;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_1;
    FIX::CorporateAction CorporateAction_3("MULTIPLECHARVALUE_B");
    noRelatedSym_0_1.set(CorporateAction_3);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(CorporateAction_3.getString());
    FIX::Currency Currency_18("CAN");
    noRelatedSym_0_1.set(Currency_18);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(Currency_18.getString());
    FIX::EncodedText EncodedText_33("DATA_815630355");
    noRelatedSym_0_1.set(EncodedText_33);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(EncodedText_33.getString());
    FIX::EncodedTextLen EncodedTextLen_33(1921843140);
    noRelatedSym_0_1.set(EncodedTextLen_33);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(EncodedTextLen_33.getString());
    FIX::ListUpdateAction ListUpdateAction_1('3');
    noRelatedSym_0_1.set(ListUpdateAction_1);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(ListUpdateAction_1.getString());
    FIX::RelSymTransactTime RelSymTransactTime_3(FIX::UTCTIMESTAMP(2, 23, 52, 5, 2, 2008));
    noRelatedSym_0_1.set(RelSymTransactTime_3);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(RelSymTransactTime_3.getString());
    FIX::Text Text_33("STRING_1310759865");
    noRelatedSym_0_1.set(Text_33);
    RelSymDerivSecUpdGrp_NoRelatedSym_1.insert(Text_33.getString());
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_1);
    all_compo_names.insert("RelSymDerivSecUpdGrp.NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_36;
      FIX::EncodedLegIssuer EncodedLegIssuer_36("DATA_1955900119");
      noLegs_1_1_0.set(EncodedLegIssuer_36);
      InstrumentLeg_36.insert(EncodedLegIssuer_36.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_36(1204157542);
      noLegs_1_1_0.set(EncodedLegIssuerLen_36);
      InstrumentLeg_36.insert(EncodedLegIssuerLen_36.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_36("DATA_1350259389");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_36);
      InstrumentLeg_36.insert(EncodedLegSecurityDesc_36.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_36(990765120);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_36);
      InstrumentLeg_36.insert(EncodedLegSecurityDescLen_36.getString());
      FIX::LegCFICode LegCFICode_36("STRING_1926638531");
      noLegs_1_1_0.set(LegCFICode_36);
      InstrumentLeg_36.insert(LegCFICode_36.getString());
      FIX::LegContractMultiplier LegContractMultiplier_36;
      LegContractMultiplier_36.setString("8594308");
      noLegs_1_1_0.set(LegContractMultiplier_36);
      InstrumentLeg_36.insert(LegContractMultiplier_36.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_36(1681006527);
      noLegs_1_1_0.set(LegContractMultiplierUnit_36);
      InstrumentLeg_36.insert(LegContractMultiplierUnit_36.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_36("MONTHYEAR_1946204106");
      noLegs_1_1_0.set(LegContractSettlMonth_36);
      InstrumentLeg_36.insert(LegContractSettlMonth_36.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_36("COUNTRY_473231918");
      noLegs_1_1_0.set(LegCountryOfIssue_36);
      InstrumentLeg_36.insert(LegCountryOfIssue_36.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_36("LOCALMKTDATE_1563336438");
      noLegs_1_1_0.set(LegCouponPaymentDate_36);
      InstrumentLeg_36.insert(LegCouponPaymentDate_36.getString());
      FIX::LegCouponRate LegCouponRate_36;
      LegCouponRate_36.setString("23.440000");
      noLegs_1_1_0.set(LegCouponRate_36);
      InstrumentLeg_36.insert(LegCouponRate_36.getString());
      FIX::LegCreditRating LegCreditRating_36("STRING_1509285485");
      noLegs_1_1_0.set(LegCreditRating_36);
      InstrumentLeg_36.insert(LegCreditRating_36.getString());
      FIX::LegCurrency LegCurrency_36("EUR");
      noLegs_1_1_0.set(LegCurrency_36);
      InstrumentLeg_36.insert(LegCurrency_36.getString());
      FIX::LegDatedDate LegDatedDate_36("LOCALMKTDATE_645978532");
      noLegs_1_1_0.set(LegDatedDate_36);
      InstrumentLeg_36.insert(LegDatedDate_36.getString());
      FIX::LegExerciseStyle LegExerciseStyle_36(1932600411);
      noLegs_1_1_0.set(LegExerciseStyle_36);
      InstrumentLeg_36.insert(LegExerciseStyle_36.getString());
      FIX::LegFactor LegFactor_36;
      LegFactor_36.setString("997737");
      noLegs_1_1_0.set(LegFactor_36);
      InstrumentLeg_36.insert(LegFactor_36.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_36(1089366716);
      noLegs_1_1_0.set(LegFlowScheduleType_36);
      InstrumentLeg_36.insert(LegFlowScheduleType_36.getString());
      FIX::LegInstrRegistry LegInstrRegistry_36("STRING_332533177");
      noLegs_1_1_0.set(LegInstrRegistry_36);
      InstrumentLeg_36.insert(LegInstrRegistry_36.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_36("LOCALMKTDATE_915404124");
      noLegs_1_1_0.set(LegInterestAccrualDate_36);
      InstrumentLeg_36.insert(LegInterestAccrualDate_36.getString());
      FIX::LegIssueDate LegIssueDate_36("LOCALMKTDATE_863726209");
      noLegs_1_1_0.set(LegIssueDate_36);
      InstrumentLeg_36.insert(LegIssueDate_36.getString());
      FIX::LegIssuer LegIssuer_36("STRING_722453719");
      noLegs_1_1_0.set(LegIssuer_36);
      InstrumentLeg_36.insert(LegIssuer_36.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_36("STRING_1805671078");
      noLegs_1_1_0.set(LegLocaleOfIssue_36);
      InstrumentLeg_36.insert(LegLocaleOfIssue_36.getString());
      FIX::LegMaturityDate LegMaturityDate_36("LOCALMKTDATE_168815107");
      noLegs_1_1_0.set(LegMaturityDate_36);
      InstrumentLeg_36.insert(LegMaturityDate_36.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_36("MONTHYEAR_252236134");
      noLegs_1_1_0.set(LegMaturityMonthYear_36);
      InstrumentLeg_36.insert(LegMaturityMonthYear_36.getString());
      FIX::LegMaturityTime LegMaturityTime_36("TZTIMEONLY_1401518502");
      noLegs_1_1_0.set(LegMaturityTime_36);
      InstrumentLeg_36.insert(LegMaturityTime_36.getString());
      FIX::LegOptAttribute LegOptAttribute_36('1');
      noLegs_1_1_0.set(LegOptAttribute_36);
      InstrumentLeg_36.insert(LegOptAttribute_36.getString());
      FIX::LegOptionRatio LegOptionRatio_36;
      LegOptionRatio_36.setString("7989724");
      noLegs_1_1_0.set(LegOptionRatio_36);
      InstrumentLeg_36.insert(LegOptionRatio_36.getString());
      FIX::LegPool LegPool_36("STRING_1236543811");
      noLegs_1_1_0.set(LegPool_36);
      InstrumentLeg_36.insert(LegPool_36.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_36("STRING_397715302");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_36);
      InstrumentLeg_36.insert(LegPriceUnitOfMeasure_36.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_36;
      LegPriceUnitOfMeasureQty_36.setString("1737661");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_36);
      InstrumentLeg_36.insert(LegPriceUnitOfMeasureQty_36.getString());
      FIX::LegProduct LegProduct_36(1044960282);
      noLegs_1_1_0.set(LegProduct_36);
      InstrumentLeg_36.insert(LegProduct_36.getString());
      FIX::LegPutOrCall LegPutOrCall_36(1601872844);
      noLegs_1_1_0.set(LegPutOrCall_36);
      InstrumentLeg_36.insert(LegPutOrCall_36.getString());
      FIX::LegRatioQty LegRatioQty_36;
      LegRatioQty_36.setString("15240255");
      noLegs_1_1_0.set(LegRatioQty_36);
      InstrumentLeg_36.insert(LegRatioQty_36.getString());
      FIX::LegRedemptionDate LegRedemptionDate_36("LOCALMKTDATE_2035725402");
      noLegs_1_1_0.set(LegRedemptionDate_36);
      InstrumentLeg_36.insert(LegRedemptionDate_36.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_36("STRING_1381027727");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_36);
      InstrumentLeg_36.insert(LegRepoCollateralSecurityType_36.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_36;
      LegRepurchaseRate_36.setString("27.000000");
      noLegs_1_1_0.set(LegRepurchaseRate_36);
      InstrumentLeg_36.insert(LegRepurchaseRate_36.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_36(1569248282);
      noLegs_1_1_0.set(LegRepurchaseTerm_36);
      InstrumentLeg_36.insert(LegRepurchaseTerm_36.getString());
      FIX::LegSecurityDesc LegSecurityDesc_36("STRING_1179748185");
      noLegs_1_1_0.set(LegSecurityDesc_36);
      InstrumentLeg_36.insert(LegSecurityDesc_36.getString());
      FIX::LegSecurityExchange LegSecurityExchange_36("EXCHANGE_709204618");
      noLegs_1_1_0.set(LegSecurityExchange_36);
      InstrumentLeg_36.insert(LegSecurityExchange_36.getString());
      FIX::LegSecurityID LegSecurityID_36("STRING_985101072");
      noLegs_1_1_0.set(LegSecurityID_36);
      InstrumentLeg_36.insert(LegSecurityID_36.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_36("STRING_2061900529");
      noLegs_1_1_0.set(LegSecurityIDSource_36);
      InstrumentLeg_36.insert(LegSecurityIDSource_36.getString());
      FIX::LegSecuritySubType LegSecuritySubType_36("STRING_71006455");
      noLegs_1_1_0.set(LegSecuritySubType_36);
      InstrumentLeg_36.insert(LegSecuritySubType_36.getString());
      FIX::LegSecurityType LegSecurityType_36("STRING_508297339");
      noLegs_1_1_0.set(LegSecurityType_36);
      InstrumentLeg_36.insert(LegSecurityType_36.getString());
      FIX::LegSide LegSide_36('1');
      noLegs_1_1_0.set(LegSide_36);
      InstrumentLeg_36.insert(LegSide_36.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_36("STRING_716984988");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_36);
      InstrumentLeg_36.insert(LegStateOrProvinceOfIssue_36.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_36("CHF");
      noLegs_1_1_0.set(LegStrikeCurrency_36);
      InstrumentLeg_36.insert(LegStrikeCurrency_36.getString());
      FIX::LegStrikePrice LegStrikePrice_36;
      LegStrikePrice_36.setString("18063517");
      noLegs_1_1_0.set(LegStrikePrice_36);
      InstrumentLeg_36.insert(LegStrikePrice_36.getString());
      FIX::LegSymbol LegSymbol_36("STRING_625947280");
      noLegs_1_1_0.set(LegSymbol_36);
      InstrumentLeg_36.insert(LegSymbol_36.getString());
      FIX::LegSymbolSfx LegSymbolSfx_36("STRING_2143554904");
      noLegs_1_1_0.set(LegSymbolSfx_36);
      InstrumentLeg_36.insert(LegSymbolSfx_36.getString());
      FIX::LegTimeUnit LegTimeUnit_36("STRING_522594265");
      noLegs_1_1_0.set(LegTimeUnit_36);
      InstrumentLeg_36.insert(LegTimeUnit_36.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_36("STRING_1348400999");
      noLegs_1_1_0.set(LegUnitOfMeasure_36);
      InstrumentLeg_36.insert(LegUnitOfMeasure_36.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_36;
      LegUnitOfMeasureQty_36.setString("18017423");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_36);
      InstrumentLeg_36.insert(LegUnitOfMeasureQty_36.getString());
      all_values.push_back(InstrumentLeg_36);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_72;
        FIX::LegSecurityAltID LegSecurityAltID_72("STRING_1600637134");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_72);
        LegSecAltIDGrp_NoLegSecurityAltID_72.insert(LegSecurityAltID_72.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_72("STRING_1055777188");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_72);
        LegSecAltIDGrp_NoLegSecurityAltID_72.insert(LegSecurityAltIDSource_72.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_72);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_37;
      FIX::EncodedLegIssuer EncodedLegIssuer_37("DATA_1925848458");
      noLegs_1_1_1.set(EncodedLegIssuer_37);
      InstrumentLeg_37.insert(EncodedLegIssuer_37.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_37(252125893);
      noLegs_1_1_1.set(EncodedLegIssuerLen_37);
      InstrumentLeg_37.insert(EncodedLegIssuerLen_37.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_37("DATA_144837351");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_37);
      InstrumentLeg_37.insert(EncodedLegSecurityDesc_37.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_37(176080112);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_37);
      InstrumentLeg_37.insert(EncodedLegSecurityDescLen_37.getString());
      FIX::LegCFICode LegCFICode_37("STRING_425892039");
      noLegs_1_1_1.set(LegCFICode_37);
      InstrumentLeg_37.insert(LegCFICode_37.getString());
      FIX::LegContractMultiplier LegContractMultiplier_37;
      LegContractMultiplier_37.setString("11897976");
      noLegs_1_1_1.set(LegContractMultiplier_37);
      InstrumentLeg_37.insert(LegContractMultiplier_37.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_37(1777952956);
      noLegs_1_1_1.set(LegContractMultiplierUnit_37);
      InstrumentLeg_37.insert(LegContractMultiplierUnit_37.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_37("MONTHYEAR_1949917573");
      noLegs_1_1_1.set(LegContractSettlMonth_37);
      InstrumentLeg_37.insert(LegContractSettlMonth_37.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_37("COUNTRY_1078039388");
      noLegs_1_1_1.set(LegCountryOfIssue_37);
      InstrumentLeg_37.insert(LegCountryOfIssue_37.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_37("LOCALMKTDATE_1011497035");
      noLegs_1_1_1.set(LegCouponPaymentDate_37);
      InstrumentLeg_37.insert(LegCouponPaymentDate_37.getString());
      FIX::LegCouponRate LegCouponRate_37;
      LegCouponRate_37.setString("66.260000");
      noLegs_1_1_1.set(LegCouponRate_37);
      InstrumentLeg_37.insert(LegCouponRate_37.getString());
      FIX::LegCreditRating LegCreditRating_37("STRING_499804022");
      noLegs_1_1_1.set(LegCreditRating_37);
      InstrumentLeg_37.insert(LegCreditRating_37.getString());
      FIX::LegCurrency LegCurrency_37("USD");
      noLegs_1_1_1.set(LegCurrency_37);
      InstrumentLeg_37.insert(LegCurrency_37.getString());
      FIX::LegDatedDate LegDatedDate_37("LOCALMKTDATE_1484905094");
      noLegs_1_1_1.set(LegDatedDate_37);
      InstrumentLeg_37.insert(LegDatedDate_37.getString());
      FIX::LegExerciseStyle LegExerciseStyle_37(2105662101);
      noLegs_1_1_1.set(LegExerciseStyle_37);
      InstrumentLeg_37.insert(LegExerciseStyle_37.getString());
      FIX::LegFactor LegFactor_37;
      LegFactor_37.setString("8186177");
      noLegs_1_1_1.set(LegFactor_37);
      InstrumentLeg_37.insert(LegFactor_37.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_37(1993202433);
      noLegs_1_1_1.set(LegFlowScheduleType_37);
      InstrumentLeg_37.insert(LegFlowScheduleType_37.getString());
      FIX::LegInstrRegistry LegInstrRegistry_37("STRING_1086555463");
      noLegs_1_1_1.set(LegInstrRegistry_37);
      InstrumentLeg_37.insert(LegInstrRegistry_37.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_37("LOCALMKTDATE_1535602688");
      noLegs_1_1_1.set(LegInterestAccrualDate_37);
      InstrumentLeg_37.insert(LegInterestAccrualDate_37.getString());
      FIX::LegIssueDate LegIssueDate_37("LOCALMKTDATE_139132888");
      noLegs_1_1_1.set(LegIssueDate_37);
      InstrumentLeg_37.insert(LegIssueDate_37.getString());
      FIX::LegIssuer LegIssuer_37("STRING_167222594");
      noLegs_1_1_1.set(LegIssuer_37);
      InstrumentLeg_37.insert(LegIssuer_37.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_37("STRING_1194470744");
      noLegs_1_1_1.set(LegLocaleOfIssue_37);
      InstrumentLeg_37.insert(LegLocaleOfIssue_37.getString());
      FIX::LegMaturityDate LegMaturityDate_37("LOCALMKTDATE_765080168");
      noLegs_1_1_1.set(LegMaturityDate_37);
      InstrumentLeg_37.insert(LegMaturityDate_37.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_37("MONTHYEAR_163293850");
      noLegs_1_1_1.set(LegMaturityMonthYear_37);
      InstrumentLeg_37.insert(LegMaturityMonthYear_37.getString());
      FIX::LegMaturityTime LegMaturityTime_37("TZTIMEONLY_1717065010");
      noLegs_1_1_1.set(LegMaturityTime_37);
      InstrumentLeg_37.insert(LegMaturityTime_37.getString());
      FIX::LegOptAttribute LegOptAttribute_37('2');
      noLegs_1_1_1.set(LegOptAttribute_37);
      InstrumentLeg_37.insert(LegOptAttribute_37.getString());
      FIX::LegOptionRatio LegOptionRatio_37;
      LegOptionRatio_37.setString("19650361");
      noLegs_1_1_1.set(LegOptionRatio_37);
      InstrumentLeg_37.insert(LegOptionRatio_37.getString());
      FIX::LegPool LegPool_37("STRING_260990735");
      noLegs_1_1_1.set(LegPool_37);
      InstrumentLeg_37.insert(LegPool_37.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_37("STRING_1566634654");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_37);
      InstrumentLeg_37.insert(LegPriceUnitOfMeasure_37.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_37;
      LegPriceUnitOfMeasureQty_37.setString("8733297");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_37);
      InstrumentLeg_37.insert(LegPriceUnitOfMeasureQty_37.getString());
      FIX::LegProduct LegProduct_37(39355545);
      noLegs_1_1_1.set(LegProduct_37);
      InstrumentLeg_37.insert(LegProduct_37.getString());
      FIX::LegPutOrCall LegPutOrCall_37(1818760547);
      noLegs_1_1_1.set(LegPutOrCall_37);
      InstrumentLeg_37.insert(LegPutOrCall_37.getString());
      FIX::LegRatioQty LegRatioQty_37;
      LegRatioQty_37.setString("10181670");
      noLegs_1_1_1.set(LegRatioQty_37);
      InstrumentLeg_37.insert(LegRatioQty_37.getString());
      FIX::LegRedemptionDate LegRedemptionDate_37("LOCALMKTDATE_215435657");
      noLegs_1_1_1.set(LegRedemptionDate_37);
      InstrumentLeg_37.insert(LegRedemptionDate_37.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_37("STRING_97168938");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_37);
      InstrumentLeg_37.insert(LegRepoCollateralSecurityType_37.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_37;
      LegRepurchaseRate_37.setString("10.620000");
      noLegs_1_1_1.set(LegRepurchaseRate_37);
      InstrumentLeg_37.insert(LegRepurchaseRate_37.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_37(1993388613);
      noLegs_1_1_1.set(LegRepurchaseTerm_37);
      InstrumentLeg_37.insert(LegRepurchaseTerm_37.getString());
      FIX::LegSecurityDesc LegSecurityDesc_37("STRING_2047086512");
      noLegs_1_1_1.set(LegSecurityDesc_37);
      InstrumentLeg_37.insert(LegSecurityDesc_37.getString());
      FIX::LegSecurityExchange LegSecurityExchange_37("EXCHANGE_1138520450");
      noLegs_1_1_1.set(LegSecurityExchange_37);
      InstrumentLeg_37.insert(LegSecurityExchange_37.getString());
      FIX::LegSecurityID LegSecurityID_37("STRING_857402000");
      noLegs_1_1_1.set(LegSecurityID_37);
      InstrumentLeg_37.insert(LegSecurityID_37.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_37("STRING_2085493138");
      noLegs_1_1_1.set(LegSecurityIDSource_37);
      InstrumentLeg_37.insert(LegSecurityIDSource_37.getString());
      FIX::LegSecuritySubType LegSecuritySubType_37("STRING_1638324472");
      noLegs_1_1_1.set(LegSecuritySubType_37);
      InstrumentLeg_37.insert(LegSecuritySubType_37.getString());
      FIX::LegSecurityType LegSecurityType_37("STRING_901163572");
      noLegs_1_1_1.set(LegSecurityType_37);
      InstrumentLeg_37.insert(LegSecurityType_37.getString());
      FIX::LegSide LegSide_37('6');
      noLegs_1_1_1.set(LegSide_37);
      InstrumentLeg_37.insert(LegSide_37.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_37("STRING_975745918");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_37);
      InstrumentLeg_37.insert(LegStateOrProvinceOfIssue_37.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_37("JPY");
      noLegs_1_1_1.set(LegStrikeCurrency_37);
      InstrumentLeg_37.insert(LegStrikeCurrency_37.getString());
      FIX::LegStrikePrice LegStrikePrice_37;
      LegStrikePrice_37.setString("8214647");
      noLegs_1_1_1.set(LegStrikePrice_37);
      InstrumentLeg_37.insert(LegStrikePrice_37.getString());
      FIX::LegSymbol LegSymbol_37("STRING_1945897488");
      noLegs_1_1_1.set(LegSymbol_37);
      InstrumentLeg_37.insert(LegSymbol_37.getString());
      FIX::LegSymbolSfx LegSymbolSfx_37("STRING_892357474");
      noLegs_1_1_1.set(LegSymbolSfx_37);
      InstrumentLeg_37.insert(LegSymbolSfx_37.getString());
      FIX::LegTimeUnit LegTimeUnit_37("STRING_960597592");
      noLegs_1_1_1.set(LegTimeUnit_37);
      InstrumentLeg_37.insert(LegTimeUnit_37.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_37("STRING_2113120082");
      noLegs_1_1_1.set(LegUnitOfMeasure_37);
      InstrumentLeg_37.insert(LegUnitOfMeasure_37.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_37;
      LegUnitOfMeasureQty_37.setString("20868282");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_37);
      InstrumentLeg_37.insert(LegUnitOfMeasureQty_37.getString());
      all_values.push_back(InstrumentLeg_37);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_73;
        FIX::LegSecurityAltID LegSecurityAltID_73("STRING_128930285");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_73);
        LegSecAltIDGrp_NoLegSecurityAltID_73.insert(LegSecurityAltID_73.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_73("STRING_1656409581");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_73);
        LegSecAltIDGrp_NoLegSecurityAltID_73.insert(LegSecurityAltIDSource_73.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_73);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_19;
    FIX::AttachmentPoint AttachmentPoint_19;
    AttachmentPoint_19.setString("52.800000");
    noRelatedSym_0_1.set(AttachmentPoint_19);
    Instrument_19.insert(AttachmentPoint_19.getString());
    FIX::CFICode CFICode_19("STRING_2093966469");
    noRelatedSym_0_1.set(CFICode_19);
    Instrument_19.insert(CFICode_19.getString());
    FIX::CPProgram CPProgram_19(99);
    noRelatedSym_0_1.set(CPProgram_19);
    Instrument_19.insert(CPProgram_19.getString());
    FIX::CPRegType CPRegType_19("STRING_1110826286");
    noRelatedSym_0_1.set(CPRegType_19);
    Instrument_19.insert(CPRegType_19.getString());
    FIX::CapPrice CapPrice_19;
    CapPrice_19.setString("8198125");
    noRelatedSym_0_1.set(CapPrice_19);
    Instrument_19.insert(CapPrice_19.getString());
    FIX::ContractMultiplier ContractMultiplier_19;
    ContractMultiplier_19.setString("19567558");
    noRelatedSym_0_1.set(ContractMultiplier_19);
    Instrument_19.insert(ContractMultiplier_19.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_19(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_19);
    Instrument_19.insert(ContractMultiplierUnit_19.getString());
    FIX::ContractSettlMonth ContractSettlMonth_19("MONTHYEAR_1837979623");
    noRelatedSym_0_1.set(ContractSettlMonth_19);
    Instrument_19.insert(ContractSettlMonth_19.getString());
    FIX::CountryOfIssue CountryOfIssue_19("COUNTRY_24707870");
    noRelatedSym_0_1.set(CountryOfIssue_19);
    Instrument_19.insert(CountryOfIssue_19.getString());
    FIX::CouponPaymentDate CouponPaymentDate_19("LOCALMKTDATE_879272124");
    noRelatedSym_0_1.set(CouponPaymentDate_19);
    Instrument_19.insert(CouponPaymentDate_19.getString());
    FIX::CouponRate CouponRate_19;
    CouponRate_19.setString("6.850000");
    noRelatedSym_0_1.set(CouponRate_19);
    Instrument_19.insert(CouponRate_19.getString());
    FIX::CreditRating CreditRating_19("STRING_2018096483");
    noRelatedSym_0_1.set(CreditRating_19);
    Instrument_19.insert(CreditRating_19.getString());
    FIX::DatedDate DatedDate_19("LOCALMKTDATE_778874988");
    noRelatedSym_0_1.set(DatedDate_19);
    Instrument_19.insert(DatedDate_19.getString());
    FIX::DetachmentPoint DetachmentPoint_19;
    DetachmentPoint_19.setString("74.870000");
    noRelatedSym_0_1.set(DetachmentPoint_19);
    Instrument_19.insert(DetachmentPoint_19.getString());
    FIX::EncodedIssuer EncodedIssuer_19("DATA_728014835");
    noRelatedSym_0_1.set(EncodedIssuer_19);
    Instrument_19.insert(EncodedIssuer_19.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_19(716884478);
    noRelatedSym_0_1.set(EncodedIssuerLen_19);
    Instrument_19.insert(EncodedIssuerLen_19.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_19("DATA_380338311");
    noRelatedSym_0_1.set(EncodedSecurityDesc_19);
    Instrument_19.insert(EncodedSecurityDesc_19.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_19(1629178407);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_19);
    Instrument_19.insert(EncodedSecurityDescLen_19.getString());
    FIX::ExerciseStyle ExerciseStyle_19(2);
    noRelatedSym_0_1.set(ExerciseStyle_19);
    Instrument_19.insert(ExerciseStyle_19.getString());
    FIX::Factor Factor_19;
    Factor_19.setString("13560842");
    noRelatedSym_0_1.set(Factor_19);
    Instrument_19.insert(Factor_19.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_19(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_19);
    Instrument_19.insert(FlexProductEligibilityIndicator_19.getString());
    FIX::FlexibleIndicator FlexibleIndicator_19(false);
    noRelatedSym_0_1.set(FlexibleIndicator_19);
    Instrument_19.insert(FlexibleIndicator_19.getString());
    FIX::FloorPrice FloorPrice_19;
    FloorPrice_19.setString("300652");
    noRelatedSym_0_1.set(FloorPrice_19);
    Instrument_19.insert(FloorPrice_19.getString());
    FIX::FlowScheduleType FlowScheduleType_19(4);
    noRelatedSym_0_1.set(FlowScheduleType_19);
    Instrument_19.insert(FlowScheduleType_19.getString());
    FIX::InstrRegistry InstrRegistry_19("STRING_1651617474");
    noRelatedSym_0_1.set(InstrRegistry_19);
    Instrument_19.insert(InstrRegistry_19.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_19('9');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_19);
    Instrument_19.insert(InstrmtAssignmentMethod_19.getString());
    FIX::InterestAccrualDate InterestAccrualDate_19("LOCALMKTDATE_105087058");
    noRelatedSym_0_1.set(InterestAccrualDate_19);
    Instrument_19.insert(InterestAccrualDate_19.getString());
    FIX::IssueDate IssueDate_19("LOCALMKTDATE_1590962045");
    noRelatedSym_0_1.set(IssueDate_19);
    Instrument_19.insert(IssueDate_19.getString());
    FIX::Issuer Issuer_19("STRING_568856989");
    noRelatedSym_0_1.set(Issuer_19);
    Instrument_19.insert(Issuer_19.getString());
    FIX::ListMethod ListMethod_19(1);
    noRelatedSym_0_1.set(ListMethod_19);
    Instrument_19.insert(ListMethod_19.getString());
    FIX::LocaleOfIssue LocaleOfIssue_19("STRING_1099887978");
    noRelatedSym_0_1.set(LocaleOfIssue_19);
    Instrument_19.insert(LocaleOfIssue_19.getString());
    FIX::MaturityDate MaturityDate_19("LOCALMKTDATE_113048621");
    noRelatedSym_0_1.set(MaturityDate_19);
    Instrument_19.insert(MaturityDate_19.getString());
    FIX::MaturityMonthYear MaturityMonthYear_19("MONTHYEAR_180500165");
    noRelatedSym_0_1.set(MaturityMonthYear_19);
    Instrument_19.insert(MaturityMonthYear_19.getString());
    FIX::MaturityTime MaturityTime_19("TZTIMEONLY_869804646");
    noRelatedSym_0_1.set(MaturityTime_19);
    Instrument_19.insert(MaturityTime_19.getString());
    FIX::MinPriceIncrement MinPriceIncrement_19;
    MinPriceIncrement_19.setString("12238749");
    noRelatedSym_0_1.set(MinPriceIncrement_19);
    Instrument_19.insert(MinPriceIncrement_19.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_19;
    MinPriceIncrementAmount_19.setString("10003127");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_19);
    Instrument_19.insert(MinPriceIncrementAmount_19.getString());
    FIX::NTPositionLimit NTPositionLimit_19(679076859);
    noRelatedSym_0_1.set(NTPositionLimit_19);
    Instrument_19.insert(NTPositionLimit_19.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_19;
    NotionalPercentageOutstanding_19.setString("80.940000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_19);
    Instrument_19.insert(NotionalPercentageOutstanding_19.getString());
    FIX::OptAttribute OptAttribute_19('6');
    noRelatedSym_0_1.set(OptAttribute_19);
    Instrument_19.insert(OptAttribute_19.getString());
    FIX::OptPayoutAmount OptPayoutAmount_19;
    OptPayoutAmount_19.setString("7037847");
    noRelatedSym_0_1.set(OptPayoutAmount_19);
    Instrument_19.insert(OptPayoutAmount_19.getString());
    FIX::OptPayoutType OptPayoutType_19(1);
    noRelatedSym_0_1.set(OptPayoutType_19);
    Instrument_19.insert(OptPayoutType_19.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_19;
    OriginalNotionalPercentageOutstanding_19.setString("57.230000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_19);
    Instrument_19.insert(OriginalNotionalPercentageOutstanding_19.getString());
    FIX::Pool Pool_19("STRING_574397564");
    noRelatedSym_0_1.set(Pool_19);
    Instrument_19.insert(Pool_19.getString());
    FIX::PositionLimit PositionLimit_19(1516641559);
    noRelatedSym_0_1.set(PositionLimit_19);
    Instrument_19.insert(PositionLimit_19.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_19("STRING_INT");
    noRelatedSym_0_1.set(PriceQuoteMethod_19);
    Instrument_19.insert(PriceQuoteMethod_19.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_19("STRING_1302412399");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_19);
    Instrument_19.insert(PriceUnitOfMeasure_19.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_19;
    PriceUnitOfMeasureQty_19.setString("860423");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_19);
    Instrument_19.insert(PriceUnitOfMeasureQty_19.getString());
    FIX::Product Product_21(13);
    noRelatedSym_0_1.set(Product_21);
    Instrument_19.insert(Product_21.getString());
    FIX::ProductComplex ProductComplex_19("STRING_784107158");
    noRelatedSym_0_1.set(ProductComplex_19);
    Instrument_19.insert(ProductComplex_19.getString());
    FIX::PutOrCall PutOrCall_19(0);
    noRelatedSym_0_1.set(PutOrCall_19);
    Instrument_19.insert(PutOrCall_19.getString());
    FIX::RedemptionDate RedemptionDate_19("LOCALMKTDATE_920222102");
    noRelatedSym_0_1.set(RedemptionDate_19);
    Instrument_19.insert(RedemptionDate_19.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_19("STRING_1125143942");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_19);
    Instrument_19.insert(RepoCollateralSecurityType_19.getString());
    FIX::RepurchaseRate RepurchaseRate_19;
    RepurchaseRate_19.setString("39.540000");
    noRelatedSym_0_1.set(RepurchaseRate_19);
    Instrument_19.insert(RepurchaseRate_19.getString());
    FIX::RepurchaseTerm RepurchaseTerm_19(950287387);
    noRelatedSym_0_1.set(RepurchaseTerm_19);
    Instrument_19.insert(RepurchaseTerm_19.getString());
    FIX::RestructuringType RestructuringType_19("STRING_MM");
    noRelatedSym_0_1.set(RestructuringType_19);
    Instrument_19.insert(RestructuringType_19.getString());
    FIX::SecurityDesc SecurityDesc_19("STRING_1751941428");
    noRelatedSym_0_1.set(SecurityDesc_19);
    Instrument_19.insert(SecurityDesc_19.getString());
    FIX::SecurityExchange SecurityExchange_19("EXCHANGE_1940950263");
    noRelatedSym_0_1.set(SecurityExchange_19);
    Instrument_19.insert(SecurityExchange_19.getString());
    FIX::SecurityGroup SecurityGroup_19("STRING_1369681624");
    noRelatedSym_0_1.set(SecurityGroup_19);
    Instrument_19.insert(SecurityGroup_19.getString());
    FIX::SecurityID SecurityID_19("STRING_1195419825");
    noRelatedSym_0_1.set(SecurityID_19);
    Instrument_19.insert(SecurityID_19.getString());
    FIX::SecurityIDSource SecurityIDSource_19("STRING_H");
    noRelatedSym_0_1.set(SecurityIDSource_19);
    Instrument_19.insert(SecurityIDSource_19.getString());
    FIX::SecurityStatus SecurityStatus_19("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_19);
    Instrument_19.insert(SecurityStatus_19.getString());
    FIX::SecuritySubType SecuritySubType_20("STRING_147824155");
    noRelatedSym_0_1.set(SecuritySubType_20);
    Instrument_19.insert(SecuritySubType_20.getString());
    FIX::SecurityType SecurityType_21("STRING_OOP");
    noRelatedSym_0_1.set(SecurityType_21);
    Instrument_19.insert(SecurityType_21.getString());
    FIX::Seniority Seniority_19("STRING_SR");
    noRelatedSym_0_1.set(Seniority_19);
    Instrument_19.insert(Seniority_19.getString());
    FIX::SettlMethod SettlMethod_19('P');
    noRelatedSym_0_1.set(SettlMethod_19);
    Instrument_19.insert(SettlMethod_19.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_19("STRING_1699247134");
    noRelatedSym_0_1.set(SettleOnOpenFlag_19);
    Instrument_19.insert(SettleOnOpenFlag_19.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_19("STRING_637028196");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_19);
    Instrument_19.insert(StateOrProvinceOfIssue_19.getString());
    FIX::StrikeCurrency StrikeCurrency_19("JPY");
    noRelatedSym_0_1.set(StrikeCurrency_19);
    Instrument_19.insert(StrikeCurrency_19.getString());
    FIX::StrikeMultiplier StrikeMultiplier_19;
    StrikeMultiplier_19.setString("13278368");
    noRelatedSym_0_1.set(StrikeMultiplier_19);
    Instrument_19.insert(StrikeMultiplier_19.getString());
    FIX::StrikePrice StrikePrice_19;
    StrikePrice_19.setString("2530067");
    noRelatedSym_0_1.set(StrikePrice_19);
    Instrument_19.insert(StrikePrice_19.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_19(3);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_19);
    Instrument_19.insert(StrikePriceBoundaryMethod_19.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_19;
    StrikePriceBoundaryPrecision_19.setString("26.060000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_19);
    Instrument_19.insert(StrikePriceBoundaryPrecision_19.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_19(2);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_19);
    Instrument_19.insert(StrikePriceDeterminationMethod_19.getString());
    FIX::StrikeValue StrikeValue_19;
    StrikeValue_19.setString("16646660");
    noRelatedSym_0_1.set(StrikeValue_19);
    Instrument_19.insert(StrikeValue_19.getString());
    FIX::Symbol Symbol_19("STRING_953422169");
    noRelatedSym_0_1.set(Symbol_19);
    Instrument_19.insert(Symbol_19.getString());
    FIX::SymbolSfx SymbolSfx_19("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_19);
    Instrument_19.insert(SymbolSfx_19.getString());
    FIX::TimeUnit TimeUnit_19("STRING_S");
    noRelatedSym_0_1.set(TimeUnit_19);
    Instrument_19.insert(TimeUnit_19.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_19(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_19);
    Instrument_19.insert(UnderlyingPriceDeterminationMethod_19.getString());
    FIX::UnitOfMeasure UnitOfMeasure_19("STRING_Gal");
    noRelatedSym_0_1.set(UnitOfMeasure_19);
    Instrument_19.insert(UnitOfMeasure_19.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_19;
    UnitOfMeasureQty_19.setString("10917724");
    noRelatedSym_0_1.set(UnitOfMeasureQty_19);
    Instrument_19.insert(UnitOfMeasureQty_19.getString());
    FIX::ValuationMethod ValuationMethod_19("STRING_EQTY");
    noRelatedSym_0_1.set(ValuationMethod_19);
    Instrument_19.insert(ValuationMethod_19.getString());
    all_values.push_back(Instrument_19);
    all_compo_names.insert("Instrument");

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
      ComplexEventPrice_41.setString("2405858");
      noComplexEvents_1_1_0.set(ComplexEventPrice_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPrice_41.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_41(5);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceBoundaryMethod_41.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_41;
      ComplexEventPriceBoundaryPrecision_41.setString("41.390000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceBoundaryPrecision_41.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_41(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventPriceTimeType_41.getString());
      FIX::ComplexEventType ComplexEventType_41(4);
      noComplexEvents_1_1_0.set(ComplexEventType_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexEventType_41.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_41;
      ComplexOptPayoutAmount_41.setString("19919739");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_41);
      ComplexEvents_NoComplexEvents_41.insert(ComplexOptPayoutAmount_41.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_41);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_85;
        FIX::ComplexEventEndDate ComplexEventEndDate_85(FIX::UTCTIMESTAMP(23, 50, 43, 16, 5, 2002));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_85);
        ComplexEventDates_NoComplexEventDates_85.insert(ComplexEventEndDate_85.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_85(FIX::UTCTIMESTAMP(20, 55, 25, 6, 6, 2016));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_85);
        ComplexEventDates_NoComplexEventDates_85.insert(ComplexEventStartDate_85.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_85);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_173;
          FIX::ComplexEventEndTime ComplexEventEndTime_173(FIX::UTCTIMEONLY(18, 15, 57));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_173);
          ComplexEventTimes_NoComplexEventTimes_173.insert(ComplexEventEndTime_173.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_173(FIX::UTCTIMEONLY(16, 42, 8));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_173);
          ComplexEventTimes_NoComplexEventTimes_173.insert(ComplexEventStartTime_173.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_173);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_38;
      FIX::EventDate EventDate_38("LOCALMKTDATE_1912694486");
      noEvents_1_1_0.set(EventDate_38);
      EvntGrp_NoEvents_38.insert(EventDate_38.getString());
      FIX::EventPx EventPx_38;
      EventPx_38.setString("9936615");
      noEvents_1_1_0.set(EventPx_38);
      EvntGrp_NoEvents_38.insert(EventPx_38.getString());
      FIX::EventText EventText_38("STRING_35140723");
      noEvents_1_1_0.set(EventText_38);
      EvntGrp_NoEvents_38.insert(EventText_38.getString());
      FIX::EventTime EventTime_38(FIX::UTCTIMESTAMP(17, 48, 21, 7, 4, 2011));
      noEvents_1_1_0.set(EventTime_38);
      EvntGrp_NoEvents_38.insert(EventTime_38.getString());
      FIX::EventType EventType_38(12);
      noEvents_1_1_0.set(EventType_38);
      EvntGrp_NoEvents_38.insert(EventType_38.getString());
      all_values.push_back(EvntGrp_NoEvents_38);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_39;
      FIX::EventDate EventDate_39("LOCALMKTDATE_881888784");
      noEvents_1_1_1.set(EventDate_39);
      EvntGrp_NoEvents_39.insert(EventDate_39.getString());
      FIX::EventPx EventPx_39;
      EventPx_39.setString("14908995");
      noEvents_1_1_1.set(EventPx_39);
      EvntGrp_NoEvents_39.insert(EventPx_39.getString());
      FIX::EventText EventText_39("STRING_196338863");
      noEvents_1_1_1.set(EventText_39);
      EvntGrp_NoEvents_39.insert(EventText_39.getString());
      FIX::EventTime EventTime_39(FIX::UTCTIMESTAMP(15, 18, 6, 22, 4, 2004));
      noEvents_1_1_1.set(EventTime_39);
      EvntGrp_NoEvents_39.insert(EventTime_39.getString());
      FIX::EventType EventType_39(11);
      noEvents_1_1_1.set(EventType_39);
      EvntGrp_NoEvents_39.insert(EventType_39.getString());
      all_values.push_back(EvntGrp_NoEvents_39);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_40;
      FIX::EventDate EventDate_40("LOCALMKTDATE_2112622106");
      noEvents_1_1_2.set(EventDate_40);
      EvntGrp_NoEvents_40.insert(EventDate_40.getString());
      FIX::EventPx EventPx_40;
      EventPx_40.setString("12197445");
      noEvents_1_1_2.set(EventPx_40);
      EvntGrp_NoEvents_40.insert(EventPx_40.getString());
      FIX::EventText EventText_40("STRING_2055125365");
      noEvents_1_1_2.set(EventText_40);
      EvntGrp_NoEvents_40.insert(EventText_40.getString());
      FIX::EventTime EventTime_40(FIX::UTCTIMESTAMP(11, 9, 57, 12, 6, 2003));
      noEvents_1_1_2.set(EventTime_40);
      EvntGrp_NoEvents_40.insert(EventTime_40.getString());
      FIX::EventType EventType_40(15);
      noEvents_1_1_2.set(EventType_40);
      EvntGrp_NoEvents_40.insert(EventType_40.getString());
      all_values.push_back(EvntGrp_NoEvents_40);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_36;
      FIX::InstrumentPartyID InstrumentPartyID_36("STRING_1436047692");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_36);
      InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyID_36.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_36('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_36);
      InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyIDSource_36.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_36(1402457585);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_36);
      InstrumentParties_NoInstrumentParties_36.insert(InstrumentPartyRole_36.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_36);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70;
        FIX::InstrumentPartySubID InstrumentPartySubID_70("STRING_280488707");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_70);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70.insert(InstrumentPartySubID_70.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_70(1274403096);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_70);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70.insert(InstrumentPartySubIDType_70.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_70);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71;
        FIX::InstrumentPartySubID InstrumentPartySubID_71("STRING_551591257");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_71);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71.insert(InstrumentPartySubID_71.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_71(515975518);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_71);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71.insert(InstrumentPartySubIDType_71.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_71);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_37;
      FIX::InstrumentPartyID InstrumentPartyID_37("STRING_8808232");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_37);
      InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyID_37.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_37('2');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_37);
      InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyIDSource_37.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_37(712314381);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_37);
      InstrumentParties_NoInstrumentParties_37.insert(InstrumentPartyRole_37.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_37);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72;
        FIX::InstrumentPartySubID InstrumentPartySubID_72("STRING_1219676532");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_72);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72.insert(InstrumentPartySubID_72.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_72(49858531);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_72);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72.insert(InstrumentPartySubIDType_72.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_72);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73;
        FIX::InstrumentPartySubID InstrumentPartySubID_73("STRING_1555604747");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_73);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73.insert(InstrumentPartySubID_73.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_73(378656470);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_73);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73.insert(InstrumentPartySubIDType_73.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_73);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74;
        FIX::InstrumentPartySubID InstrumentPartySubID_74("STRING_298230574");
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubID_74);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74.insert(InstrumentPartySubID_74.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_74(1153439875);
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubIDType_74);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74.insert(InstrumentPartySubIDType_74.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_74);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_33;
      FIX::SecurityAltID SecurityAltID_33("STRING_263369032");
      noSecurityAltID_1_1_0.set(SecurityAltID_33);
      SecAltIDGrp_NoSecurityAltID_33.insert(SecurityAltID_33.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_33("STRING_225700742");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_33);
      SecAltIDGrp_NoSecurityAltID_33.insert(SecurityAltIDSource_33.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_33);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_34;
      FIX::SecurityAltID SecurityAltID_34("STRING_1091738437");
      noSecurityAltID_1_1_1.set(SecurityAltID_34);
      SecAltIDGrp_NoSecurityAltID_34.insert(SecurityAltID_34.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_34("STRING_462833947");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_34);
      SecAltIDGrp_NoSecurityAltID_34.insert(SecurityAltIDSource_34.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_34);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_35;
      FIX::SecurityAltID SecurityAltID_35("STRING_1686311210");
      noSecurityAltID_1_1_2.set(SecurityAltID_35);
      SecAltIDGrp_NoSecurityAltID_35.insert(SecurityAltID_35.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_35("STRING_1193354027");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_35);
      SecAltIDGrp_NoSecurityAltID_35.insert(SecurityAltIDSource_35.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_35);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_38;
    FIX::SecurityXML SecurityXML_39("XMLDATA_186923816");
    noRelatedSym_0_1.set(SecurityXML_39);
    FIX::SecurityXMLLen SecurityXMLLen_19(984404490);
    noRelatedSym_0_1.set(SecurityXMLLen_19);
    FIX::SecurityXMLSchema SecurityXMLSchema_19("STRING_533556200");
    noRelatedSym_0_1.set(SecurityXMLSchema_19);
    SecurityXML_38.insert(SecurityXMLSchema_19.getString());
    all_values.push_back(SecurityXML_38);
    all_compo_names.insert("SecurityXML");

    // InstrumentExtension
    multiset<string> InstrumentExtension_7;
    FIX::DeliveryForm DeliveryForm_7(2);
    noRelatedSym_0_1.set(DeliveryForm_7);
    InstrumentExtension_7.insert(DeliveryForm_7.getString());
    FIX::PctAtRisk PctAtRisk_7;
    PctAtRisk_7.setString("93.040000");
    noRelatedSym_0_1.set(PctAtRisk_7);
    InstrumentExtension_7.insert(PctAtRisk_7.getString());
    all_values.push_back(InstrumentExtension_7);
    all_compo_names.insert("InstrumentExtension");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_14;
      FIX::InstrAttribType InstrAttribType_14(17);
      noInstrAttrib_1_1_0.set(InstrAttribType_14);
      AttrbGrp_NoInstrAttrib_14.insert(InstrAttribType_14.getString());
      FIX::InstrAttribValue InstrAttribValue_14("STRING_644985056");
      noInstrAttrib_1_1_0.set(InstrAttribValue_14);
      AttrbGrp_NoInstrAttrib_14.insert(InstrAttribValue_14.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_14);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_3;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_3;
    SecondaryHighLimitPrice_3.setString("13113566");
    noRelatedSym_0_1.set(SecondaryHighLimitPrice_3);
    SecondaryPriceLimits_3.insert(SecondaryHighLimitPrice_3.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_3;
    SecondaryLowLimitPrice_3.setString("5964757");
    noRelatedSym_0_1.set(SecondaryLowLimitPrice_3);
    SecondaryPriceLimits_3.insert(SecondaryLowLimitPrice_3.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_3(925473763);
    noRelatedSym_0_1.set(SecondaryPriceLimitType_3);
    SecondaryPriceLimits_3.insert(SecondaryPriceLimitType_3.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_3;
    SecondaryTradingReferencePrice_3.setString("4382761");
    noRelatedSym_0_1.set(SecondaryTradingReferencePrice_3);
    SecondaryPriceLimits_3.insert(SecondaryTradingReferencePrice_3.getString());
    all_values.push_back(SecondaryPriceLimits_3);
    all_compo_names.insert("SecondaryPriceLimits");

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_2;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_2;
    FIX::CorporateAction CorporateAction_4("MULTIPLECHARVALUE_R");
    noRelatedSym_0_2.set(CorporateAction_4);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(CorporateAction_4.getString());
    FIX::Currency Currency_19("CHF");
    noRelatedSym_0_2.set(Currency_19);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(Currency_19.getString());
    FIX::EncodedText EncodedText_34("DATA_1043074156");
    noRelatedSym_0_2.set(EncodedText_34);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(EncodedText_34.getString());
    FIX::EncodedTextLen EncodedTextLen_34(6280014);
    noRelatedSym_0_2.set(EncodedTextLen_34);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(EncodedTextLen_34.getString());
    FIX::ListUpdateAction ListUpdateAction_2('1');
    noRelatedSym_0_2.set(ListUpdateAction_2);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(ListUpdateAction_2.getString());
    FIX::RelSymTransactTime RelSymTransactTime_4(FIX::UTCTIMESTAMP(1, 23, 31, 27, 12, 2004));
    noRelatedSym_0_2.set(RelSymTransactTime_4);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(RelSymTransactTime_4.getString());
    FIX::Text Text_34("STRING_617738152");
    noRelatedSym_0_2.set(Text_34);
    RelSymDerivSecUpdGrp_NoRelatedSym_2.insert(Text_34.getString());
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_2);
    all_compo_names.insert("RelSymDerivSecUpdGrp.NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_2_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_38;
      FIX::EncodedLegIssuer EncodedLegIssuer_38("DATA_622275021");
      noLegs_2_1_0.set(EncodedLegIssuer_38);
      InstrumentLeg_38.insert(EncodedLegIssuer_38.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_38(1080572099);
      noLegs_2_1_0.set(EncodedLegIssuerLen_38);
      InstrumentLeg_38.insert(EncodedLegIssuerLen_38.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_38("DATA_75552295");
      noLegs_2_1_0.set(EncodedLegSecurityDesc_38);
      InstrumentLeg_38.insert(EncodedLegSecurityDesc_38.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_38(1815629048);
      noLegs_2_1_0.set(EncodedLegSecurityDescLen_38);
      InstrumentLeg_38.insert(EncodedLegSecurityDescLen_38.getString());
      FIX::LegCFICode LegCFICode_38("STRING_1267495916");
      noLegs_2_1_0.set(LegCFICode_38);
      InstrumentLeg_38.insert(LegCFICode_38.getString());
      FIX::LegContractMultiplier LegContractMultiplier_38;
      LegContractMultiplier_38.setString("10599567");
      noLegs_2_1_0.set(LegContractMultiplier_38);
      InstrumentLeg_38.insert(LegContractMultiplier_38.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_38(201701601);
      noLegs_2_1_0.set(LegContractMultiplierUnit_38);
      InstrumentLeg_38.insert(LegContractMultiplierUnit_38.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_38("MONTHYEAR_943720439");
      noLegs_2_1_0.set(LegContractSettlMonth_38);
      InstrumentLeg_38.insert(LegContractSettlMonth_38.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_38("COUNTRY_188632442");
      noLegs_2_1_0.set(LegCountryOfIssue_38);
      InstrumentLeg_38.insert(LegCountryOfIssue_38.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_38("LOCALMKTDATE_110600698");
      noLegs_2_1_0.set(LegCouponPaymentDate_38);
      InstrumentLeg_38.insert(LegCouponPaymentDate_38.getString());
      FIX::LegCouponRate LegCouponRate_38;
      LegCouponRate_38.setString("26.550000");
      noLegs_2_1_0.set(LegCouponRate_38);
      InstrumentLeg_38.insert(LegCouponRate_38.getString());
      FIX::LegCreditRating LegCreditRating_38("STRING_833617498");
      noLegs_2_1_0.set(LegCreditRating_38);
      InstrumentLeg_38.insert(LegCreditRating_38.getString());
      FIX::LegCurrency LegCurrency_38("EUR");
      noLegs_2_1_0.set(LegCurrency_38);
      InstrumentLeg_38.insert(LegCurrency_38.getString());
      FIX::LegDatedDate LegDatedDate_38("LOCALMKTDATE_1759091261");
      noLegs_2_1_0.set(LegDatedDate_38);
      InstrumentLeg_38.insert(LegDatedDate_38.getString());
      FIX::LegExerciseStyle LegExerciseStyle_38(1860233512);
      noLegs_2_1_0.set(LegExerciseStyle_38);
      InstrumentLeg_38.insert(LegExerciseStyle_38.getString());
      FIX::LegFactor LegFactor_38;
      LegFactor_38.setString("16530516");
      noLegs_2_1_0.set(LegFactor_38);
      InstrumentLeg_38.insert(LegFactor_38.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_38(1053056894);
      noLegs_2_1_0.set(LegFlowScheduleType_38);
      InstrumentLeg_38.insert(LegFlowScheduleType_38.getString());
      FIX::LegInstrRegistry LegInstrRegistry_38("STRING_159834227");
      noLegs_2_1_0.set(LegInstrRegistry_38);
      InstrumentLeg_38.insert(LegInstrRegistry_38.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_38("LOCALMKTDATE_548642177");
      noLegs_2_1_0.set(LegInterestAccrualDate_38);
      InstrumentLeg_38.insert(LegInterestAccrualDate_38.getString());
      FIX::LegIssueDate LegIssueDate_38("LOCALMKTDATE_1059336908");
      noLegs_2_1_0.set(LegIssueDate_38);
      InstrumentLeg_38.insert(LegIssueDate_38.getString());
      FIX::LegIssuer LegIssuer_38("STRING_2056780892");
      noLegs_2_1_0.set(LegIssuer_38);
      InstrumentLeg_38.insert(LegIssuer_38.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_38("STRING_663909218");
      noLegs_2_1_0.set(LegLocaleOfIssue_38);
      InstrumentLeg_38.insert(LegLocaleOfIssue_38.getString());
      FIX::LegMaturityDate LegMaturityDate_38("LOCALMKTDATE_1115475453");
      noLegs_2_1_0.set(LegMaturityDate_38);
      InstrumentLeg_38.insert(LegMaturityDate_38.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_38("MONTHYEAR_1214365007");
      noLegs_2_1_0.set(LegMaturityMonthYear_38);
      InstrumentLeg_38.insert(LegMaturityMonthYear_38.getString());
      FIX::LegMaturityTime LegMaturityTime_38("TZTIMEONLY_1157832730");
      noLegs_2_1_0.set(LegMaturityTime_38);
      InstrumentLeg_38.insert(LegMaturityTime_38.getString());
      FIX::LegOptAttribute LegOptAttribute_38('1');
      noLegs_2_1_0.set(LegOptAttribute_38);
      InstrumentLeg_38.insert(LegOptAttribute_38.getString());
      FIX::LegOptionRatio LegOptionRatio_38;
      LegOptionRatio_38.setString("15253889");
      noLegs_2_1_0.set(LegOptionRatio_38);
      InstrumentLeg_38.insert(LegOptionRatio_38.getString());
      FIX::LegPool LegPool_38("STRING_688369314");
      noLegs_2_1_0.set(LegPool_38);
      InstrumentLeg_38.insert(LegPool_38.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_38("STRING_2087582724");
      noLegs_2_1_0.set(LegPriceUnitOfMeasure_38);
      InstrumentLeg_38.insert(LegPriceUnitOfMeasure_38.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_38;
      LegPriceUnitOfMeasureQty_38.setString("20621137");
      noLegs_2_1_0.set(LegPriceUnitOfMeasureQty_38);
      InstrumentLeg_38.insert(LegPriceUnitOfMeasureQty_38.getString());
      FIX::LegProduct LegProduct_38(1310644335);
      noLegs_2_1_0.set(LegProduct_38);
      InstrumentLeg_38.insert(LegProduct_38.getString());
      FIX::LegPutOrCall LegPutOrCall_38(1020671176);
      noLegs_2_1_0.set(LegPutOrCall_38);
      InstrumentLeg_38.insert(LegPutOrCall_38.getString());
      FIX::LegRatioQty LegRatioQty_38;
      LegRatioQty_38.setString("21376660");
      noLegs_2_1_0.set(LegRatioQty_38);
      InstrumentLeg_38.insert(LegRatioQty_38.getString());
      FIX::LegRedemptionDate LegRedemptionDate_38("LOCALMKTDATE_978789736");
      noLegs_2_1_0.set(LegRedemptionDate_38);
      InstrumentLeg_38.insert(LegRedemptionDate_38.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_38("STRING_140683444");
      noLegs_2_1_0.set(LegRepoCollateralSecurityType_38);
      InstrumentLeg_38.insert(LegRepoCollateralSecurityType_38.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_38;
      LegRepurchaseRate_38.setString("91.650000");
      noLegs_2_1_0.set(LegRepurchaseRate_38);
      InstrumentLeg_38.insert(LegRepurchaseRate_38.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_38(1180491337);
      noLegs_2_1_0.set(LegRepurchaseTerm_38);
      InstrumentLeg_38.insert(LegRepurchaseTerm_38.getString());
      FIX::LegSecurityDesc LegSecurityDesc_38("STRING_1084403883");
      noLegs_2_1_0.set(LegSecurityDesc_38);
      InstrumentLeg_38.insert(LegSecurityDesc_38.getString());
      FIX::LegSecurityExchange LegSecurityExchange_38("EXCHANGE_1238771607");
      noLegs_2_1_0.set(LegSecurityExchange_38);
      InstrumentLeg_38.insert(LegSecurityExchange_38.getString());
      FIX::LegSecurityID LegSecurityID_38("STRING_1291092035");
      noLegs_2_1_0.set(LegSecurityID_38);
      InstrumentLeg_38.insert(LegSecurityID_38.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_38("STRING_992912891");
      noLegs_2_1_0.set(LegSecurityIDSource_38);
      InstrumentLeg_38.insert(LegSecurityIDSource_38.getString());
      FIX::LegSecuritySubType LegSecuritySubType_38("STRING_2072389105");
      noLegs_2_1_0.set(LegSecuritySubType_38);
      InstrumentLeg_38.insert(LegSecuritySubType_38.getString());
      FIX::LegSecurityType LegSecurityType_38("STRING_565565768");
      noLegs_2_1_0.set(LegSecurityType_38);
      InstrumentLeg_38.insert(LegSecurityType_38.getString());
      FIX::LegSide LegSide_38('1');
      noLegs_2_1_0.set(LegSide_38);
      InstrumentLeg_38.insert(LegSide_38.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_38("STRING_1683996718");
      noLegs_2_1_0.set(LegStateOrProvinceOfIssue_38);
      InstrumentLeg_38.insert(LegStateOrProvinceOfIssue_38.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_38("EUR");
      noLegs_2_1_0.set(LegStrikeCurrency_38);
      InstrumentLeg_38.insert(LegStrikeCurrency_38.getString());
      FIX::LegStrikePrice LegStrikePrice_38;
      LegStrikePrice_38.setString("5895699");
      noLegs_2_1_0.set(LegStrikePrice_38);
      InstrumentLeg_38.insert(LegStrikePrice_38.getString());
      FIX::LegSymbol LegSymbol_38("STRING_438149860");
      noLegs_2_1_0.set(LegSymbol_38);
      InstrumentLeg_38.insert(LegSymbol_38.getString());
      FIX::LegSymbolSfx LegSymbolSfx_38("STRING_1552107799");
      noLegs_2_1_0.set(LegSymbolSfx_38);
      InstrumentLeg_38.insert(LegSymbolSfx_38.getString());
      FIX::LegTimeUnit LegTimeUnit_38("STRING_1648906872");
      noLegs_2_1_0.set(LegTimeUnit_38);
      InstrumentLeg_38.insert(LegTimeUnit_38.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_38("STRING_347447104");
      noLegs_2_1_0.set(LegUnitOfMeasure_38);
      InstrumentLeg_38.insert(LegUnitOfMeasure_38.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_38;
      LegUnitOfMeasureQty_38.setString("685333");
      noLegs_2_1_0.set(LegUnitOfMeasureQty_38);
      InstrumentLeg_38.insert(LegUnitOfMeasureQty_38.getString());
      all_values.push_back(InstrumentLeg_38);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_74;
        FIX::LegSecurityAltID LegSecurityAltID_74("STRING_1561812111");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltID_74);
        LegSecAltIDGrp_NoLegSecurityAltID_74.insert(LegSecurityAltID_74.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_74("STRING_1226366099");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltIDSource_74);
        LegSecAltIDGrp_NoLegSecurityAltID_74.insert(LegSecurityAltIDSource_74.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_74);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_75;
        FIX::LegSecurityAltID LegSecurityAltID_75("STRING_2086743249");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltID_75);
        LegSecAltIDGrp_NoLegSecurityAltID_75.insert(LegSecurityAltID_75.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_75("STRING_939717462");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltIDSource_75);
        LegSecAltIDGrp_NoLegSecurityAltID_75.insert(LegSecurityAltIDSource_75.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_75);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_2_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_39;
      FIX::EncodedLegIssuer EncodedLegIssuer_39("DATA_1914735413");
      noLegs_2_1_1.set(EncodedLegIssuer_39);
      InstrumentLeg_39.insert(EncodedLegIssuer_39.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_39(2026842326);
      noLegs_2_1_1.set(EncodedLegIssuerLen_39);
      InstrumentLeg_39.insert(EncodedLegIssuerLen_39.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_39("DATA_854347546");
      noLegs_2_1_1.set(EncodedLegSecurityDesc_39);
      InstrumentLeg_39.insert(EncodedLegSecurityDesc_39.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_39(1077896101);
      noLegs_2_1_1.set(EncodedLegSecurityDescLen_39);
      InstrumentLeg_39.insert(EncodedLegSecurityDescLen_39.getString());
      FIX::LegCFICode LegCFICode_39("STRING_900029854");
      noLegs_2_1_1.set(LegCFICode_39);
      InstrumentLeg_39.insert(LegCFICode_39.getString());
      FIX::LegContractMultiplier LegContractMultiplier_39;
      LegContractMultiplier_39.setString("8445299");
      noLegs_2_1_1.set(LegContractMultiplier_39);
      InstrumentLeg_39.insert(LegContractMultiplier_39.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_39(2056685837);
      noLegs_2_1_1.set(LegContractMultiplierUnit_39);
      InstrumentLeg_39.insert(LegContractMultiplierUnit_39.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_39("MONTHYEAR_1040713298");
      noLegs_2_1_1.set(LegContractSettlMonth_39);
      InstrumentLeg_39.insert(LegContractSettlMonth_39.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_39("COUNTRY_1894669090");
      noLegs_2_1_1.set(LegCountryOfIssue_39);
      InstrumentLeg_39.insert(LegCountryOfIssue_39.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_39("LOCALMKTDATE_1089693526");
      noLegs_2_1_1.set(LegCouponPaymentDate_39);
      InstrumentLeg_39.insert(LegCouponPaymentDate_39.getString());
      FIX::LegCouponRate LegCouponRate_39;
      LegCouponRate_39.setString("71.810000");
      noLegs_2_1_1.set(LegCouponRate_39);
      InstrumentLeg_39.insert(LegCouponRate_39.getString());
      FIX::LegCreditRating LegCreditRating_39("STRING_985957049");
      noLegs_2_1_1.set(LegCreditRating_39);
      InstrumentLeg_39.insert(LegCreditRating_39.getString());
      FIX::LegCurrency LegCurrency_39("GBP");
      noLegs_2_1_1.set(LegCurrency_39);
      InstrumentLeg_39.insert(LegCurrency_39.getString());
      FIX::LegDatedDate LegDatedDate_39("LOCALMKTDATE_910862506");
      noLegs_2_1_1.set(LegDatedDate_39);
      InstrumentLeg_39.insert(LegDatedDate_39.getString());
      FIX::LegExerciseStyle LegExerciseStyle_39(798867682);
      noLegs_2_1_1.set(LegExerciseStyle_39);
      InstrumentLeg_39.insert(LegExerciseStyle_39.getString());
      FIX::LegFactor LegFactor_39;
      LegFactor_39.setString("3209603");
      noLegs_2_1_1.set(LegFactor_39);
      InstrumentLeg_39.insert(LegFactor_39.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_39(447375576);
      noLegs_2_1_1.set(LegFlowScheduleType_39);
      InstrumentLeg_39.insert(LegFlowScheduleType_39.getString());
      FIX::LegInstrRegistry LegInstrRegistry_39("STRING_1077183314");
      noLegs_2_1_1.set(LegInstrRegistry_39);
      InstrumentLeg_39.insert(LegInstrRegistry_39.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_39("LOCALMKTDATE_1324425998");
      noLegs_2_1_1.set(LegInterestAccrualDate_39);
      InstrumentLeg_39.insert(LegInterestAccrualDate_39.getString());
      FIX::LegIssueDate LegIssueDate_39("LOCALMKTDATE_1036945540");
      noLegs_2_1_1.set(LegIssueDate_39);
      InstrumentLeg_39.insert(LegIssueDate_39.getString());
      FIX::LegIssuer LegIssuer_39("STRING_1515333174");
      noLegs_2_1_1.set(LegIssuer_39);
      InstrumentLeg_39.insert(LegIssuer_39.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_39("STRING_729050149");
      noLegs_2_1_1.set(LegLocaleOfIssue_39);
      InstrumentLeg_39.insert(LegLocaleOfIssue_39.getString());
      FIX::LegMaturityDate LegMaturityDate_39("LOCALMKTDATE_538368764");
      noLegs_2_1_1.set(LegMaturityDate_39);
      InstrumentLeg_39.insert(LegMaturityDate_39.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_39("MONTHYEAR_1862780278");
      noLegs_2_1_1.set(LegMaturityMonthYear_39);
      InstrumentLeg_39.insert(LegMaturityMonthYear_39.getString());
      FIX::LegMaturityTime LegMaturityTime_39("TZTIMEONLY_797583519");
      noLegs_2_1_1.set(LegMaturityTime_39);
      InstrumentLeg_39.insert(LegMaturityTime_39.getString());
      FIX::LegOptAttribute LegOptAttribute_39('1');
      noLegs_2_1_1.set(LegOptAttribute_39);
      InstrumentLeg_39.insert(LegOptAttribute_39.getString());
      FIX::LegOptionRatio LegOptionRatio_39;
      LegOptionRatio_39.setString("12771087");
      noLegs_2_1_1.set(LegOptionRatio_39);
      InstrumentLeg_39.insert(LegOptionRatio_39.getString());
      FIX::LegPool LegPool_39("STRING_2023949618");
      noLegs_2_1_1.set(LegPool_39);
      InstrumentLeg_39.insert(LegPool_39.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_39("STRING_1094527043");
      noLegs_2_1_1.set(LegPriceUnitOfMeasure_39);
      InstrumentLeg_39.insert(LegPriceUnitOfMeasure_39.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_39;
      LegPriceUnitOfMeasureQty_39.setString("693425");
      noLegs_2_1_1.set(LegPriceUnitOfMeasureQty_39);
      InstrumentLeg_39.insert(LegPriceUnitOfMeasureQty_39.getString());
      FIX::LegProduct LegProduct_39(1791201384);
      noLegs_2_1_1.set(LegProduct_39);
      InstrumentLeg_39.insert(LegProduct_39.getString());
      FIX::LegPutOrCall LegPutOrCall_39(973885721);
      noLegs_2_1_1.set(LegPutOrCall_39);
      InstrumentLeg_39.insert(LegPutOrCall_39.getString());
      FIX::LegRatioQty LegRatioQty_39;
      LegRatioQty_39.setString("9236901");
      noLegs_2_1_1.set(LegRatioQty_39);
      InstrumentLeg_39.insert(LegRatioQty_39.getString());
      FIX::LegRedemptionDate LegRedemptionDate_39("LOCALMKTDATE_721613837");
      noLegs_2_1_1.set(LegRedemptionDate_39);
      InstrumentLeg_39.insert(LegRedemptionDate_39.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_39("STRING_1873915575");
      noLegs_2_1_1.set(LegRepoCollateralSecurityType_39);
      InstrumentLeg_39.insert(LegRepoCollateralSecurityType_39.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_39;
      LegRepurchaseRate_39.setString("0.270000");
      noLegs_2_1_1.set(LegRepurchaseRate_39);
      InstrumentLeg_39.insert(LegRepurchaseRate_39.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_39(630816026);
      noLegs_2_1_1.set(LegRepurchaseTerm_39);
      InstrumentLeg_39.insert(LegRepurchaseTerm_39.getString());
      FIX::LegSecurityDesc LegSecurityDesc_39("STRING_767145225");
      noLegs_2_1_1.set(LegSecurityDesc_39);
      InstrumentLeg_39.insert(LegSecurityDesc_39.getString());
      FIX::LegSecurityExchange LegSecurityExchange_39("EXCHANGE_1515405470");
      noLegs_2_1_1.set(LegSecurityExchange_39);
      InstrumentLeg_39.insert(LegSecurityExchange_39.getString());
      FIX::LegSecurityID LegSecurityID_39("STRING_1720509552");
      noLegs_2_1_1.set(LegSecurityID_39);
      InstrumentLeg_39.insert(LegSecurityID_39.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_39("STRING_744778758");
      noLegs_2_1_1.set(LegSecurityIDSource_39);
      InstrumentLeg_39.insert(LegSecurityIDSource_39.getString());
      FIX::LegSecuritySubType LegSecuritySubType_39("STRING_353878871");
      noLegs_2_1_1.set(LegSecuritySubType_39);
      InstrumentLeg_39.insert(LegSecuritySubType_39.getString());
      FIX::LegSecurityType LegSecurityType_39("STRING_1953811465");
      noLegs_2_1_1.set(LegSecurityType_39);
      InstrumentLeg_39.insert(LegSecurityType_39.getString());
      FIX::LegSide LegSide_39('1');
      noLegs_2_1_1.set(LegSide_39);
      InstrumentLeg_39.insert(LegSide_39.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_39("STRING_1264741378");
      noLegs_2_1_1.set(LegStateOrProvinceOfIssue_39);
      InstrumentLeg_39.insert(LegStateOrProvinceOfIssue_39.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_39("JPY");
      noLegs_2_1_1.set(LegStrikeCurrency_39);
      InstrumentLeg_39.insert(LegStrikeCurrency_39.getString());
      FIX::LegStrikePrice LegStrikePrice_39;
      LegStrikePrice_39.setString("17121169");
      noLegs_2_1_1.set(LegStrikePrice_39);
      InstrumentLeg_39.insert(LegStrikePrice_39.getString());
      FIX::LegSymbol LegSymbol_39("STRING_1682378814");
      noLegs_2_1_1.set(LegSymbol_39);
      InstrumentLeg_39.insert(LegSymbol_39.getString());
      FIX::LegSymbolSfx LegSymbolSfx_39("STRING_1213227910");
      noLegs_2_1_1.set(LegSymbolSfx_39);
      InstrumentLeg_39.insert(LegSymbolSfx_39.getString());
      FIX::LegTimeUnit LegTimeUnit_39("STRING_601578847");
      noLegs_2_1_1.set(LegTimeUnit_39);
      InstrumentLeg_39.insert(LegTimeUnit_39.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_39("STRING_1050228340");
      noLegs_2_1_1.set(LegUnitOfMeasure_39);
      InstrumentLeg_39.insert(LegUnitOfMeasure_39.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_39;
      LegUnitOfMeasureQty_39.setString("19422780");
      noLegs_2_1_1.set(LegUnitOfMeasureQty_39);
      InstrumentLeg_39.insert(LegUnitOfMeasureQty_39.getString());
      all_values.push_back(InstrumentLeg_39);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_76;
        FIX::LegSecurityAltID LegSecurityAltID_76("STRING_765524971");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltID_76);
        LegSecAltIDGrp_NoLegSecurityAltID_76.insert(LegSecurityAltID_76.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_76("STRING_592377931");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltIDSource_76);
        LegSecAltIDGrp_NoLegSecurityAltID_76.insert(LegSecurityAltIDSource_76.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_76);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_1);
    }
    // Instrument
    multiset<string> Instrument_20;
    FIX::AttachmentPoint AttachmentPoint_20;
    AttachmentPoint_20.setString("14.050000");
    noRelatedSym_0_2.set(AttachmentPoint_20);
    Instrument_20.insert(AttachmentPoint_20.getString());
    FIX::CFICode CFICode_20("STRING_2042633713");
    noRelatedSym_0_2.set(CFICode_20);
    Instrument_20.insert(CFICode_20.getString());
    FIX::CPProgram CPProgram_20(2);
    noRelatedSym_0_2.set(CPProgram_20);
    Instrument_20.insert(CPProgram_20.getString());
    FIX::CPRegType CPRegType_20("STRING_1242258448");
    noRelatedSym_0_2.set(CPRegType_20);
    Instrument_20.insert(CPRegType_20.getString());
    FIX::CapPrice CapPrice_20;
    CapPrice_20.setString("21119762");
    noRelatedSym_0_2.set(CapPrice_20);
    Instrument_20.insert(CapPrice_20.getString());
    FIX::ContractMultiplier ContractMultiplier_20;
    ContractMultiplier_20.setString("1125616");
    noRelatedSym_0_2.set(ContractMultiplier_20);
    Instrument_20.insert(ContractMultiplier_20.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_20(1);
    noRelatedSym_0_2.set(ContractMultiplierUnit_20);
    Instrument_20.insert(ContractMultiplierUnit_20.getString());
    FIX::ContractSettlMonth ContractSettlMonth_20("MONTHYEAR_888182723");
    noRelatedSym_0_2.set(ContractSettlMonth_20);
    Instrument_20.insert(ContractSettlMonth_20.getString());
    FIX::CountryOfIssue CountryOfIssue_20("COUNTRY_834175474");
    noRelatedSym_0_2.set(CountryOfIssue_20);
    Instrument_20.insert(CountryOfIssue_20.getString());
    FIX::CouponPaymentDate CouponPaymentDate_20("LOCALMKTDATE_1942576096");
    noRelatedSym_0_2.set(CouponPaymentDate_20);
    Instrument_20.insert(CouponPaymentDate_20.getString());
    FIX::CouponRate CouponRate_20;
    CouponRate_20.setString("91.020000");
    noRelatedSym_0_2.set(CouponRate_20);
    Instrument_20.insert(CouponRate_20.getString());
    FIX::CreditRating CreditRating_20("STRING_1464991500");
    noRelatedSym_0_2.set(CreditRating_20);
    Instrument_20.insert(CreditRating_20.getString());
    FIX::DatedDate DatedDate_20("LOCALMKTDATE_562237673");
    noRelatedSym_0_2.set(DatedDate_20);
    Instrument_20.insert(DatedDate_20.getString());
    FIX::DetachmentPoint DetachmentPoint_20;
    DetachmentPoint_20.setString("45.720000");
    noRelatedSym_0_2.set(DetachmentPoint_20);
    Instrument_20.insert(DetachmentPoint_20.getString());
    FIX::EncodedIssuer EncodedIssuer_20("DATA_1038017404");
    noRelatedSym_0_2.set(EncodedIssuer_20);
    Instrument_20.insert(EncodedIssuer_20.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_20(1307016431);
    noRelatedSym_0_2.set(EncodedIssuerLen_20);
    Instrument_20.insert(EncodedIssuerLen_20.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_20("DATA_230719796");
    noRelatedSym_0_2.set(EncodedSecurityDesc_20);
    Instrument_20.insert(EncodedSecurityDesc_20.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_20(844345222);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_20);
    Instrument_20.insert(EncodedSecurityDescLen_20.getString());
    FIX::ExerciseStyle ExerciseStyle_20(0);
    noRelatedSym_0_2.set(ExerciseStyle_20);
    Instrument_20.insert(ExerciseStyle_20.getString());
    FIX::Factor Factor_20;
    Factor_20.setString("14954611");
    noRelatedSym_0_2.set(Factor_20);
    Instrument_20.insert(Factor_20.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_20(false);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_20);
    Instrument_20.insert(FlexProductEligibilityIndicator_20.getString());
    FIX::FlexibleIndicator FlexibleIndicator_20(true);
    noRelatedSym_0_2.set(FlexibleIndicator_20);
    Instrument_20.insert(FlexibleIndicator_20.getString());
    FIX::FloorPrice FloorPrice_20;
    FloorPrice_20.setString("10600944");
    noRelatedSym_0_2.set(FloorPrice_20);
    Instrument_20.insert(FloorPrice_20.getString());
    FIX::FlowScheduleType FlowScheduleType_20(2);
    noRelatedSym_0_2.set(FlowScheduleType_20);
    Instrument_20.insert(FlowScheduleType_20.getString());
    FIX::InstrRegistry InstrRegistry_20("STRING_1976887789");
    noRelatedSym_0_2.set(InstrRegistry_20);
    Instrument_20.insert(InstrRegistry_20.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_20('1');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_20);
    Instrument_20.insert(InstrmtAssignmentMethod_20.getString());
    FIX::InterestAccrualDate InterestAccrualDate_20("LOCALMKTDATE_2034664228");
    noRelatedSym_0_2.set(InterestAccrualDate_20);
    Instrument_20.insert(InterestAccrualDate_20.getString());
    FIX::IssueDate IssueDate_20("LOCALMKTDATE_1771682201");
    noRelatedSym_0_2.set(IssueDate_20);
    Instrument_20.insert(IssueDate_20.getString());
    FIX::Issuer Issuer_20("STRING_654137291");
    noRelatedSym_0_2.set(Issuer_20);
    Instrument_20.insert(Issuer_20.getString());
    FIX::ListMethod ListMethod_20(1);
    noRelatedSym_0_2.set(ListMethod_20);
    Instrument_20.insert(ListMethod_20.getString());
    FIX::LocaleOfIssue LocaleOfIssue_20("STRING_216576484");
    noRelatedSym_0_2.set(LocaleOfIssue_20);
    Instrument_20.insert(LocaleOfIssue_20.getString());
    FIX::MaturityDate MaturityDate_20("LOCALMKTDATE_801868696");
    noRelatedSym_0_2.set(MaturityDate_20);
    Instrument_20.insert(MaturityDate_20.getString());
    FIX::MaturityMonthYear MaturityMonthYear_20("MONTHYEAR_547855616");
    noRelatedSym_0_2.set(MaturityMonthYear_20);
    Instrument_20.insert(MaturityMonthYear_20.getString());
    FIX::MaturityTime MaturityTime_20("TZTIMEONLY_685420385");
    noRelatedSym_0_2.set(MaturityTime_20);
    Instrument_20.insert(MaturityTime_20.getString());
    FIX::MinPriceIncrement MinPriceIncrement_20;
    MinPriceIncrement_20.setString("20441271");
    noRelatedSym_0_2.set(MinPriceIncrement_20);
    Instrument_20.insert(MinPriceIncrement_20.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_20;
    MinPriceIncrementAmount_20.setString("5123482");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_20);
    Instrument_20.insert(MinPriceIncrementAmount_20.getString());
    FIX::NTPositionLimit NTPositionLimit_20(797982023);
    noRelatedSym_0_2.set(NTPositionLimit_20);
    Instrument_20.insert(NTPositionLimit_20.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_20;
    NotionalPercentageOutstanding_20.setString("76.650000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_20);
    Instrument_20.insert(NotionalPercentageOutstanding_20.getString());
    FIX::OptAttribute OptAttribute_20('1');
    noRelatedSym_0_2.set(OptAttribute_20);
    Instrument_20.insert(OptAttribute_20.getString());
    FIX::OptPayoutAmount OptPayoutAmount_20;
    OptPayoutAmount_20.setString("16321574");
    noRelatedSym_0_2.set(OptPayoutAmount_20);
    Instrument_20.insert(OptPayoutAmount_20.getString());
    FIX::OptPayoutType OptPayoutType_20(3);
    noRelatedSym_0_2.set(OptPayoutType_20);
    Instrument_20.insert(OptPayoutType_20.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_20;
    OriginalNotionalPercentageOutstanding_20.setString("0.620000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_20);
    Instrument_20.insert(OriginalNotionalPercentageOutstanding_20.getString());
    FIX::Pool Pool_20("STRING_949665350");
    noRelatedSym_0_2.set(Pool_20);
    Instrument_20.insert(Pool_20.getString());
    FIX::PositionLimit PositionLimit_20(322634138);
    noRelatedSym_0_2.set(PositionLimit_20);
    Instrument_20.insert(PositionLimit_20.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_20("STRING_PCTPAR");
    noRelatedSym_0_2.set(PriceQuoteMethod_20);
    Instrument_20.insert(PriceQuoteMethod_20.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_20("STRING_1987682754");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_20);
    Instrument_20.insert(PriceUnitOfMeasure_20.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_20;
    PriceUnitOfMeasureQty_20.setString("16296505");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_20);
    Instrument_20.insert(PriceUnitOfMeasureQty_20.getString());
    FIX::Product Product_22(9);
    noRelatedSym_0_2.set(Product_22);
    Instrument_20.insert(Product_22.getString());
    FIX::ProductComplex ProductComplex_20("STRING_684544328");
    noRelatedSym_0_2.set(ProductComplex_20);
    Instrument_20.insert(ProductComplex_20.getString());
    FIX::PutOrCall PutOrCall_20(0);
    noRelatedSym_0_2.set(PutOrCall_20);
    Instrument_20.insert(PutOrCall_20.getString());
    FIX::RedemptionDate RedemptionDate_20("LOCALMKTDATE_1364988309");
    noRelatedSym_0_2.set(RedemptionDate_20);
    Instrument_20.insert(RedemptionDate_20.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_20("STRING_2134085050");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_20);
    Instrument_20.insert(RepoCollateralSecurityType_20.getString());
    FIX::RepurchaseRate RepurchaseRate_20;
    RepurchaseRate_20.setString("47.660000");
    noRelatedSym_0_2.set(RepurchaseRate_20);
    Instrument_20.insert(RepurchaseRate_20.getString());
    FIX::RepurchaseTerm RepurchaseTerm_20(277599141);
    noRelatedSym_0_2.set(RepurchaseTerm_20);
    Instrument_20.insert(RepurchaseTerm_20.getString());
    FIX::RestructuringType RestructuringType_20("STRING_MR");
    noRelatedSym_0_2.set(RestructuringType_20);
    Instrument_20.insert(RestructuringType_20.getString());
    FIX::SecurityDesc SecurityDesc_20("STRING_950088907");
    noRelatedSym_0_2.set(SecurityDesc_20);
    Instrument_20.insert(SecurityDesc_20.getString());
    FIX::SecurityExchange SecurityExchange_20("EXCHANGE_1939272469");
    noRelatedSym_0_2.set(SecurityExchange_20);
    Instrument_20.insert(SecurityExchange_20.getString());
    FIX::SecurityGroup SecurityGroup_20("STRING_858217869");
    noRelatedSym_0_2.set(SecurityGroup_20);
    Instrument_20.insert(SecurityGroup_20.getString());
    FIX::SecurityID SecurityID_20("STRING_574287460");
    noRelatedSym_0_2.set(SecurityID_20);
    Instrument_20.insert(SecurityID_20.getString());
    FIX::SecurityIDSource SecurityIDSource_20("STRING_H");
    noRelatedSym_0_2.set(SecurityIDSource_20);
    Instrument_20.insert(SecurityIDSource_20.getString());
    FIX::SecurityStatus SecurityStatus_20("STRING_1");
    noRelatedSym_0_2.set(SecurityStatus_20);
    Instrument_20.insert(SecurityStatus_20.getString());
    FIX::SecuritySubType SecuritySubType_21("STRING_790863944");
    noRelatedSym_0_2.set(SecuritySubType_21);
    Instrument_20.insert(SecuritySubType_21.getString());
    FIX::SecurityType SecurityType_22("STRING_BRADY");
    noRelatedSym_0_2.set(SecurityType_22);
    Instrument_20.insert(SecurityType_22.getString());
    FIX::Seniority Seniority_20("STRING_SB");
    noRelatedSym_0_2.set(Seniority_20);
    Instrument_20.insert(Seniority_20.getString());
    FIX::SettlMethod SettlMethod_20('C');
    noRelatedSym_0_2.set(SettlMethod_20);
    Instrument_20.insert(SettlMethod_20.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_20("STRING_1144438304");
    noRelatedSym_0_2.set(SettleOnOpenFlag_20);
    Instrument_20.insert(SettleOnOpenFlag_20.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_20("STRING_423643625");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_20);
    Instrument_20.insert(StateOrProvinceOfIssue_20.getString());
    FIX::StrikeCurrency StrikeCurrency_20("CHF");
    noRelatedSym_0_2.set(StrikeCurrency_20);
    Instrument_20.insert(StrikeCurrency_20.getString());
    FIX::StrikeMultiplier StrikeMultiplier_20;
    StrikeMultiplier_20.setString("18241745");
    noRelatedSym_0_2.set(StrikeMultiplier_20);
    Instrument_20.insert(StrikeMultiplier_20.getString());
    FIX::StrikePrice StrikePrice_20;
    StrikePrice_20.setString("17589402");
    noRelatedSym_0_2.set(StrikePrice_20);
    Instrument_20.insert(StrikePrice_20.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_20(2);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_20);
    Instrument_20.insert(StrikePriceBoundaryMethod_20.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_20;
    StrikePriceBoundaryPrecision_20.setString("10.000000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_20);
    Instrument_20.insert(StrikePriceBoundaryPrecision_20.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_20(1);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_20);
    Instrument_20.insert(StrikePriceDeterminationMethod_20.getString());
    FIX::StrikeValue StrikeValue_20;
    StrikeValue_20.setString("11927729");
    noRelatedSym_0_2.set(StrikeValue_20);
    Instrument_20.insert(StrikeValue_20.getString());
    FIX::Symbol Symbol_20("STRING_1224948339");
    noRelatedSym_0_2.set(Symbol_20);
    Instrument_20.insert(Symbol_20.getString());
    FIX::SymbolSfx SymbolSfx_20("STRING_WI");
    noRelatedSym_0_2.set(SymbolSfx_20);
    Instrument_20.insert(SymbolSfx_20.getString());
    FIX::TimeUnit TimeUnit_20("STRING_Yr");
    noRelatedSym_0_2.set(TimeUnit_20);
    Instrument_20.insert(TimeUnit_20.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_20(3);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_20);
    Instrument_20.insert(UnderlyingPriceDeterminationMethod_20.getString());
    FIX::UnitOfMeasure UnitOfMeasure_20("STRING_Bcf");
    noRelatedSym_0_2.set(UnitOfMeasure_20);
    Instrument_20.insert(UnitOfMeasure_20.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_20;
    UnitOfMeasureQty_20.setString("10319647");
    noRelatedSym_0_2.set(UnitOfMeasureQty_20);
    Instrument_20.insert(UnitOfMeasureQty_20.getString());
    FIX::ValuationMethod ValuationMethod_20("STRING_EQTY");
    noRelatedSym_0_2.set(ValuationMethod_20);
    Instrument_20.insert(ValuationMethod_20.getString());
    all_values.push_back(Instrument_20);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_42;
      FIX::ComplexEventCondition ComplexEventCondition_42(1);
      noComplexEvents_2_1_0.set(ComplexEventCondition_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventCondition_42.getString());
      FIX::ComplexEventPrice ComplexEventPrice_42;
      ComplexEventPrice_42.setString("5895792");
      noComplexEvents_2_1_0.set(ComplexEventPrice_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPrice_42.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_42(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceBoundaryMethod_42.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_42;
      ComplexEventPriceBoundaryPrecision_42.setString("47.590000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceBoundaryPrecision_42.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_42(1);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventPriceTimeType_42.getString());
      FIX::ComplexEventType ComplexEventType_42(3);
      noComplexEvents_2_1_0.set(ComplexEventType_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexEventType_42.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_42;
      ComplexOptPayoutAmount_42.setString("15295422");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_42);
      ComplexEvents_NoComplexEvents_42.insert(ComplexOptPayoutAmount_42.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_42);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_86;
        FIX::ComplexEventEndDate ComplexEventEndDate_86(FIX::UTCTIMESTAMP(20, 57, 13, 14, 10, 2001));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_86);
        ComplexEventDates_NoComplexEventDates_86.insert(ComplexEventEndDate_86.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_86(FIX::UTCTIMESTAMP(10, 56, 46, 0, 5, 2006));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_86);
        ComplexEventDates_NoComplexEventDates_86.insert(ComplexEventStartDate_86.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_86);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_174;
          FIX::ComplexEventEndTime ComplexEventEndTime_174(FIX::UTCTIMEONLY(5, 54, 41));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_174);
          ComplexEventTimes_NoComplexEventTimes_174.insert(ComplexEventEndTime_174.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_174(FIX::UTCTIMEONLY(19, 28, 6));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_174);
          ComplexEventTimes_NoComplexEventTimes_174.insert(ComplexEventStartTime_174.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_174);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_87;
        FIX::ComplexEventEndDate ComplexEventEndDate_87(FIX::UTCTIMESTAMP(9, 29, 11, 2, 3, 2007));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_87);
        ComplexEventDates_NoComplexEventDates_87.insert(ComplexEventEndDate_87.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_87(FIX::UTCTIMESTAMP(3, 19, 21, 12, 7, 2017));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_87);
        ComplexEventDates_NoComplexEventDates_87.insert(ComplexEventStartDate_87.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_87);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_175;
          FIX::ComplexEventEndTime ComplexEventEndTime_175(FIX::UTCTIMEONLY(9, 56, 27));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_175);
          ComplexEventTimes_NoComplexEventTimes_175.insert(ComplexEventEndTime_175.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_175(FIX::UTCTIMEONLY(16, 50, 54));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_175);
          ComplexEventTimes_NoComplexEventTimes_175.insert(ComplexEventStartTime_175.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_175);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_176;
          FIX::ComplexEventEndTime ComplexEventEndTime_176(FIX::UTCTIMEONLY(7, 40, 25));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_176);
          ComplexEventTimes_NoComplexEventTimes_176.insert(ComplexEventEndTime_176.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_176(FIX::UTCTIMEONLY(0, 54, 23));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_176);
          ComplexEventTimes_NoComplexEventTimes_176.insert(ComplexEventStartTime_176.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_176);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_177;
          FIX::ComplexEventEndTime ComplexEventEndTime_177(FIX::UTCTIMEONLY(7, 44, 30));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventEndTime_177);
          ComplexEventTimes_NoComplexEventTimes_177.insert(ComplexEventEndTime_177.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_177(FIX::UTCTIMEONLY(22, 53, 37));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventStartTime_177);
          ComplexEventTimes_NoComplexEventTimes_177.insert(ComplexEventStartTime_177.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_177);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_43;
      FIX::ComplexEventCondition ComplexEventCondition_43(2);
      noComplexEvents_2_1_1.set(ComplexEventCondition_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventCondition_43.getString());
      FIX::ComplexEventPrice ComplexEventPrice_43;
      ComplexEventPrice_43.setString("15846607");
      noComplexEvents_2_1_1.set(ComplexEventPrice_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPrice_43.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_43(2);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceBoundaryMethod_43.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_43;
      ComplexEventPriceBoundaryPrecision_43.setString("61.860000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceBoundaryPrecision_43.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_43(3);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventPriceTimeType_43.getString());
      FIX::ComplexEventType ComplexEventType_43(3);
      noComplexEvents_2_1_1.set(ComplexEventType_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexEventType_43.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_43;
      ComplexOptPayoutAmount_43.setString("317134");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_43);
      ComplexEvents_NoComplexEvents_43.insert(ComplexOptPayoutAmount_43.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_43);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_88;
        FIX::ComplexEventEndDate ComplexEventEndDate_88(FIX::UTCTIMESTAMP(9, 20, 29, 18, 11, 2010));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_88);
        ComplexEventDates_NoComplexEventDates_88.insert(ComplexEventEndDate_88.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_88(FIX::UTCTIMESTAMP(5, 56, 39, 10, 1, 2007));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_88);
        ComplexEventDates_NoComplexEventDates_88.insert(ComplexEventStartDate_88.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_88);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_178;
          FIX::ComplexEventEndTime ComplexEventEndTime_178(FIX::UTCTIMEONLY(20, 1, 18));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_178);
          ComplexEventTimes_NoComplexEventTimes_178.insert(ComplexEventEndTime_178.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_178(FIX::UTCTIMEONLY(16, 4, 39));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_178);
          ComplexEventTimes_NoComplexEventTimes_178.insert(ComplexEventStartTime_178.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_178);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_179;
          FIX::ComplexEventEndTime ComplexEventEndTime_179(FIX::UTCTIMEONLY(21, 22, 31));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventEndTime_179);
          ComplexEventTimes_NoComplexEventTimes_179.insert(ComplexEventEndTime_179.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_179(FIX::UTCTIMEONLY(0, 9, 12));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventStartTime_179);
          ComplexEventTimes_NoComplexEventTimes_179.insert(ComplexEventStartTime_179.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_179);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_180;
          FIX::ComplexEventEndTime ComplexEventEndTime_180(FIX::UTCTIMEONLY(6, 24, 25));
          noComplexEventTimes_2_1_0_3_2.set(ComplexEventEndTime_180);
          ComplexEventTimes_NoComplexEventTimes_180.insert(ComplexEventEndTime_180.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_180(FIX::UTCTIMEONLY(10, 41, 18));
          noComplexEventTimes_2_1_0_3_2.set(ComplexEventStartTime_180);
          ComplexEventTimes_NoComplexEventTimes_180.insert(ComplexEventStartTime_180.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_180);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_89;
        FIX::ComplexEventEndDate ComplexEventEndDate_89(FIX::UTCTIMESTAMP(18, 50, 14, 14, 8, 2007));
        noComplexEventDates_2_1_2_1.set(ComplexEventEndDate_89);
        ComplexEventDates_NoComplexEventDates_89.insert(ComplexEventEndDate_89.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_89(FIX::UTCTIMESTAMP(8, 24, 5, 26, 5, 2009));
        noComplexEventDates_2_1_2_1.set(ComplexEventStartDate_89);
        ComplexEventDates_NoComplexEventDates_89.insert(ComplexEventStartDate_89.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_89);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_181;
          FIX::ComplexEventEndTime ComplexEventEndTime_181(FIX::UTCTIMEONLY(6, 52, 21));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventEndTime_181);
          ComplexEventTimes_NoComplexEventTimes_181.insert(ComplexEventEndTime_181.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_181(FIX::UTCTIMEONLY(8, 30, 34));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventStartTime_181);
          ComplexEventTimes_NoComplexEventTimes_181.insert(ComplexEventStartTime_181.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_181);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_182;
          FIX::ComplexEventEndTime ComplexEventEndTime_182(FIX::UTCTIMEONLY(5, 59, 6));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventEndTime_182);
          ComplexEventTimes_NoComplexEventTimes_182.insert(ComplexEventEndTime_182.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_182(FIX::UTCTIMEONLY(9, 39, 20));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventStartTime_182);
          ComplexEventTimes_NoComplexEventTimes_182.insert(ComplexEventStartTime_182.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_182);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_183;
          FIX::ComplexEventEndTime ComplexEventEndTime_183(FIX::UTCTIMEONLY(1, 10, 59));
          noComplexEventTimes_2_1_1_3_2.set(ComplexEventEndTime_183);
          ComplexEventTimes_NoComplexEventTimes_183.insert(ComplexEventEndTime_183.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_183(FIX::UTCTIMEONLY(21, 22, 54));
          noComplexEventTimes_2_1_1_3_2.set(ComplexEventStartTime_183);
          ComplexEventTimes_NoComplexEventTimes_183.insert(ComplexEventStartTime_183.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_183);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_44;
      FIX::ComplexEventCondition ComplexEventCondition_44(2);
      noComplexEvents_2_1_2.set(ComplexEventCondition_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventCondition_44.getString());
      FIX::ComplexEventPrice ComplexEventPrice_44;
      ComplexEventPrice_44.setString("12147220");
      noComplexEvents_2_1_2.set(ComplexEventPrice_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPrice_44.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_44(5);
      noComplexEvents_2_1_2.set(ComplexEventPriceBoundaryMethod_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceBoundaryMethod_44.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_44;
      ComplexEventPriceBoundaryPrecision_44.setString("69.630000");
      noComplexEvents_2_1_2.set(ComplexEventPriceBoundaryPrecision_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceBoundaryPrecision_44.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_44(1);
      noComplexEvents_2_1_2.set(ComplexEventPriceTimeType_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventPriceTimeType_44.getString());
      FIX::ComplexEventType ComplexEventType_44(7);
      noComplexEvents_2_1_2.set(ComplexEventType_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexEventType_44.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_44;
      ComplexOptPayoutAmount_44.setString("13824574");
      noComplexEvents_2_1_2.set(ComplexOptPayoutAmount_44);
      ComplexEvents_NoComplexEvents_44.insert(ComplexOptPayoutAmount_44.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_44);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_90;
        FIX::ComplexEventEndDate ComplexEventEndDate_90(FIX::UTCTIMESTAMP(21, 55, 40, 13, 6, 2009));
        noComplexEventDates_2_2_2_0.set(ComplexEventEndDate_90);
        ComplexEventDates_NoComplexEventDates_90.insert(ComplexEventEndDate_90.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_90(FIX::UTCTIMESTAMP(22, 6, 24, 4, 8, 2001));
        noComplexEventDates_2_2_2_0.set(ComplexEventStartDate_90);
        ComplexEventDates_NoComplexEventDates_90.insert(ComplexEventStartDate_90.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_90);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_184;
          FIX::ComplexEventEndTime ComplexEventEndTime_184(FIX::UTCTIMEONLY(13, 46, 8));
          noComplexEventTimes_2_2_0_3_0.set(ComplexEventEndTime_184);
          ComplexEventTimes_NoComplexEventTimes_184.insert(ComplexEventEndTime_184.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_184(FIX::UTCTIMEONLY(7, 31, 43));
          noComplexEventTimes_2_2_0_3_0.set(ComplexEventStartTime_184);
          ComplexEventTimes_NoComplexEventTimes_184.insert(ComplexEventStartTime_184.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_184);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_185;
          FIX::ComplexEventEndTime ComplexEventEndTime_185(FIX::UTCTIMEONLY(6, 35, 48));
          noComplexEventTimes_2_2_0_3_1.set(ComplexEventEndTime_185);
          ComplexEventTimes_NoComplexEventTimes_185.insert(ComplexEventEndTime_185.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_185(FIX::UTCTIMEONLY(15, 13, 35));
          noComplexEventTimes_2_2_0_3_1.set(ComplexEventStartTime_185);
          ComplexEventTimes_NoComplexEventTimes_185.insert(ComplexEventStartTime_185.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_185);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_186;
          FIX::ComplexEventEndTime ComplexEventEndTime_186(FIX::UTCTIMEONLY(2, 22, 10));
          noComplexEventTimes_2_2_0_3_2.set(ComplexEventEndTime_186);
          ComplexEventTimes_NoComplexEventTimes_186.insert(ComplexEventEndTime_186.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_186(FIX::UTCTIMEONLY(15, 25, 18));
          noComplexEventTimes_2_2_0_3_2.set(ComplexEventStartTime_186);
          ComplexEventTimes_NoComplexEventTimes_186.insert(ComplexEventStartTime_186.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_186);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_2);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_0);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_41;
      FIX::EventDate EventDate_41("LOCALMKTDATE_64591763");
      noEvents_2_1_0.set(EventDate_41);
      EvntGrp_NoEvents_41.insert(EventDate_41.getString());
      FIX::EventPx EventPx_41;
      EventPx_41.setString("21150141");
      noEvents_2_1_0.set(EventPx_41);
      EvntGrp_NoEvents_41.insert(EventPx_41.getString());
      FIX::EventText EventText_41("STRING_1254576978");
      noEvents_2_1_0.set(EventText_41);
      EvntGrp_NoEvents_41.insert(EventText_41.getString());
      FIX::EventTime EventTime_41(FIX::UTCTIMESTAMP(17, 54, 12, 18, 9, 2014));
      noEvents_2_1_0.set(EventTime_41);
      EvntGrp_NoEvents_41.insert(EventTime_41.getString());
      FIX::EventType EventType_41(8);
      noEvents_2_1_0.set(EventType_41);
      EvntGrp_NoEvents_41.insert(EventType_41.getString());
      all_values.push_back(EvntGrp_NoEvents_41);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_38;
      FIX::InstrumentPartyID InstrumentPartyID_38("STRING_1997342511");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_38);
      InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyID_38.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_38('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_38);
      InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyIDSource_38.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_38(2135149520);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_38);
      InstrumentParties_NoInstrumentParties_38.insert(InstrumentPartyRole_38.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_38);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75;
        FIX::InstrumentPartySubID InstrumentPartySubID_75("STRING_806623450");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_75);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75.insert(InstrumentPartySubID_75.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_75(104360521);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_75);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75.insert(InstrumentPartySubIDType_75.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_75);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76;
        FIX::InstrumentPartySubID InstrumentPartySubID_76("STRING_1164468055");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_76);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76.insert(InstrumentPartySubID_76.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_76(1274997817);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_76);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76.insert(InstrumentPartySubIDType_76.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_36;
      FIX::SecurityAltID SecurityAltID_36("STRING_782952682");
      noSecurityAltID_2_1_0.set(SecurityAltID_36);
      SecAltIDGrp_NoSecurityAltID_36.insert(SecurityAltID_36.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_36("STRING_165016927");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_36);
      SecAltIDGrp_NoSecurityAltID_36.insert(SecurityAltIDSource_36.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_36);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_37;
      FIX::SecurityAltID SecurityAltID_37("STRING_2093893769");
      noSecurityAltID_2_1_1.set(SecurityAltID_37);
      SecAltIDGrp_NoSecurityAltID_37.insert(SecurityAltID_37.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_37("STRING_1408429424");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_37);
      SecAltIDGrp_NoSecurityAltID_37.insert(SecurityAltIDSource_37.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_37);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_38;
      FIX::SecurityAltID SecurityAltID_38("STRING_453786438");
      noSecurityAltID_2_1_2.set(SecurityAltID_38);
      SecAltIDGrp_NoSecurityAltID_38.insert(SecurityAltID_38.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_38("STRING_977068761");
      noSecurityAltID_2_1_2.set(SecurityAltIDSource_38);
      SecAltIDGrp_NoSecurityAltID_38.insert(SecurityAltIDSource_38.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_38);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_40;
    FIX::SecurityXML SecurityXML_41("XMLDATA_65434215");
    noRelatedSym_0_2.set(SecurityXML_41);
    FIX::SecurityXMLLen SecurityXMLLen_20(317563535);
    noRelatedSym_0_2.set(SecurityXMLLen_20);
    FIX::SecurityXMLSchema SecurityXMLSchema_20("STRING_1480748859");
    noRelatedSym_0_2.set(SecurityXMLSchema_20);
    SecurityXML_40.insert(SecurityXMLSchema_20.getString());
    all_values.push_back(SecurityXML_40);
    all_compo_names.insert("SecurityXML");

    // InstrumentExtension
    multiset<string> InstrumentExtension_8;
    FIX::DeliveryForm DeliveryForm_8(2);
    noRelatedSym_0_2.set(DeliveryForm_8);
    InstrumentExtension_8.insert(DeliveryForm_8.getString());
    FIX::PctAtRisk PctAtRisk_8;
    PctAtRisk_8.setString("52.990000");
    noRelatedSym_0_2.set(PctAtRisk_8);
    InstrumentExtension_8.insert(PctAtRisk_8.getString());
    all_values.push_back(InstrumentExtension_8);
    all_compo_names.insert("InstrumentExtension");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_15;
      FIX::InstrAttribType InstrAttribType_15(28);
      noInstrAttrib_2_1_0.set(InstrAttribType_15);
      AttrbGrp_NoInstrAttrib_15.insert(InstrAttribType_15.getString());
      FIX::InstrAttribValue InstrAttribValue_15("STRING_579211434");
      noInstrAttrib_2_1_0.set(InstrAttribValue_15);
      AttrbGrp_NoInstrAttrib_15.insert(InstrAttribValue_15.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_15);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_16;
      FIX::InstrAttribType InstrAttribType_16(5);
      noInstrAttrib_2_1_1.set(InstrAttribType_16);
      AttrbGrp_NoInstrAttrib_16.insert(InstrAttribType_16.getString());
      FIX::InstrAttribValue InstrAttribValue_16("STRING_264932833");
      noInstrAttrib_2_1_1.set(InstrAttribValue_16);
      AttrbGrp_NoInstrAttrib_16.insert(InstrAttribValue_16.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_16);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_4;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_4;
    SecondaryHighLimitPrice_4.setString("18432022");
    noRelatedSym_0_2.set(SecondaryHighLimitPrice_4);
    SecondaryPriceLimits_4.insert(SecondaryHighLimitPrice_4.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_4;
    SecondaryLowLimitPrice_4.setString("1802986");
    noRelatedSym_0_2.set(SecondaryLowLimitPrice_4);
    SecondaryPriceLimits_4.insert(SecondaryLowLimitPrice_4.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_4(584817885);
    noRelatedSym_0_2.set(SecondaryPriceLimitType_4);
    SecondaryPriceLimits_4.insert(SecondaryPriceLimitType_4.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_4;
    SecondaryTradingReferencePrice_4.setString("10524509");
    noRelatedSym_0_2.set(SecondaryTradingReferencePrice_4);
    SecondaryPriceLimits_4.insert(SecondaryTradingReferencePrice_4.getString());
    all_values.push_back(SecondaryPriceLimits_4);
    all_compo_names.insert("SecondaryPriceLimits");

    msg.addGroup(noRelatedSym_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_34;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_34("DATA_2060066332");
  msg.set(EncodedUnderlyingIssuer_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingIssuer_34.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_34(430542425);
  msg.set(EncodedUnderlyingIssuerLen_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingIssuerLen_34.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_34("DATA_902309822");
  msg.set(EncodedUnderlyingSecurityDesc_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingSecurityDesc_34.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_34(1366221447);
  msg.set(EncodedUnderlyingSecurityDescLen_34);
  UnderlyingInstrument_34.insert(EncodedUnderlyingSecurityDescLen_34.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_34;
  UnderlyingAdjustedQuantity_34.setString("4182082");
  msg.set(UnderlyingAdjustedQuantity_34);
  UnderlyingInstrument_34.insert(UnderlyingAdjustedQuantity_34.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_34;
  UnderlyingAllocationPercent_34.setString("72.350000");
  msg.set(UnderlyingAllocationPercent_34);
  UnderlyingInstrument_34.insert(UnderlyingAllocationPercent_34.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_34;
  UnderlyingAttachmentPoint_34.setString("12.490000");
  msg.set(UnderlyingAttachmentPoint_34);
  UnderlyingInstrument_34.insert(UnderlyingAttachmentPoint_34.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_34("STRING_522568818");
  msg.set(UnderlyingCFICode_34);
  UnderlyingInstrument_34.insert(UnderlyingCFICode_34.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_34("STRING_1624485290");
  msg.set(UnderlyingCPProgram_34);
  UnderlyingInstrument_34.insert(UnderlyingCPProgram_34.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_34("STRING_1300359067");
  msg.set(UnderlyingCPRegType_34);
  UnderlyingInstrument_34.insert(UnderlyingCPRegType_34.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_34;
  UnderlyingCapValue_34.setString("21260814");
  msg.set(UnderlyingCapValue_34);
  UnderlyingInstrument_34.insert(UnderlyingCapValue_34.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_34;
  UnderlyingCashAmount_34.setString("2599543");
  msg.set(UnderlyingCashAmount_34);
  UnderlyingInstrument_34.insert(UnderlyingCashAmount_34.getString());
  FIX::UnderlyingCashType UnderlyingCashType_34("STRING_FIXED");
  msg.set(UnderlyingCashType_34);
  UnderlyingInstrument_34.insert(UnderlyingCashType_34.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_34;
  UnderlyingContractMultiplier_34.setString("20724915");
  msg.set(UnderlyingContractMultiplier_34);
  UnderlyingInstrument_34.insert(UnderlyingContractMultiplier_34.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_34(1668383748);
  msg.set(UnderlyingContractMultiplierUnit_34);
  UnderlyingInstrument_34.insert(UnderlyingContractMultiplierUnit_34.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_34("COUNTRY_1919162432");
  msg.set(UnderlyingCountryOfIssue_34);
  UnderlyingInstrument_34.insert(UnderlyingCountryOfIssue_34.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_34("LOCALMKTDATE_902076667");
  msg.set(UnderlyingCouponPaymentDate_34);
  UnderlyingInstrument_34.insert(UnderlyingCouponPaymentDate_34.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_34;
  UnderlyingCouponRate_34.setString("79.640000");
  msg.set(UnderlyingCouponRate_34);
  UnderlyingInstrument_34.insert(UnderlyingCouponRate_34.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_34("STRING_89242320");
  msg.set(UnderlyingCreditRating_34);
  UnderlyingInstrument_34.insert(UnderlyingCreditRating_34.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_34("EUR");
  msg.set(UnderlyingCurrency_34);
  UnderlyingInstrument_34.insert(UnderlyingCurrency_34.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_34;
  UnderlyingCurrentValue_34.setString("4713976");
  msg.set(UnderlyingCurrentValue_34);
  UnderlyingInstrument_34.insert(UnderlyingCurrentValue_34.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_34;
  UnderlyingDetachmentPoint_34.setString("12.310000");
  msg.set(UnderlyingDetachmentPoint_34);
  UnderlyingInstrument_34.insert(UnderlyingDetachmentPoint_34.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_34;
  UnderlyingDirtyPrice_34.setString("11788940");
  msg.set(UnderlyingDirtyPrice_34);
  UnderlyingInstrument_34.insert(UnderlyingDirtyPrice_34.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_34;
  UnderlyingEndPrice_34.setString("10506090");
  msg.set(UnderlyingEndPrice_34);
  UnderlyingInstrument_34.insert(UnderlyingEndPrice_34.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_34;
  UnderlyingEndValue_34.setString("2874166");
  msg.set(UnderlyingEndValue_34);
  UnderlyingInstrument_34.insert(UnderlyingEndValue_34.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_34(1443826906);
  msg.set(UnderlyingExerciseStyle_34);
  UnderlyingInstrument_34.insert(UnderlyingExerciseStyle_34.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_34;
  UnderlyingFXRate_34.setString("7463276");
  msg.set(UnderlyingFXRate_34);
  UnderlyingInstrument_34.insert(UnderlyingFXRate_34.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_34('D');
  msg.set(UnderlyingFXRateCalc_34);
  UnderlyingInstrument_34.insert(UnderlyingFXRateCalc_34.getString());
  FIX::UnderlyingFactor UnderlyingFactor_34;
  UnderlyingFactor_34.setString("20286447");
  msg.set(UnderlyingFactor_34);
  UnderlyingInstrument_34.insert(UnderlyingFactor_34.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_34(1798778649);
  msg.set(UnderlyingFlowScheduleType_34);
  UnderlyingInstrument_34.insert(UnderlyingFlowScheduleType_34.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_34("STRING_380298047");
  msg.set(UnderlyingInstrRegistry_34);
  UnderlyingInstrument_34.insert(UnderlyingInstrRegistry_34.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_34("LOCALMKTDATE_311703569");
  msg.set(UnderlyingIssueDate_34);
  UnderlyingInstrument_34.insert(UnderlyingIssueDate_34.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_34("STRING_553604823");
  msg.set(UnderlyingIssuer_34);
  UnderlyingInstrument_34.insert(UnderlyingIssuer_34.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_34("STRING_1746519494");
  msg.set(UnderlyingLocaleOfIssue_34);
  UnderlyingInstrument_34.insert(UnderlyingLocaleOfIssue_34.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_34("LOCALMKTDATE_729911866");
  msg.set(UnderlyingMaturityDate_34);
  UnderlyingInstrument_34.insert(UnderlyingMaturityDate_34.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_34("MONTHYEAR_1013622059");
  msg.set(UnderlyingMaturityMonthYear_34);
  UnderlyingInstrument_34.insert(UnderlyingMaturityMonthYear_34.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_34("TZTIMEONLY_1771880744");
  msg.set(UnderlyingMaturityTime_34);
  UnderlyingInstrument_34.insert(UnderlyingMaturityTime_34.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_34;
  UnderlyingNotionalPercentageOutstanding_34.setString("6.850000");
  msg.set(UnderlyingNotionalPercentageOutstanding_34);
  UnderlyingInstrument_34.insert(UnderlyingNotionalPercentageOutstanding_34.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_34('4');
  msg.set(UnderlyingOptAttribute_34);
  UnderlyingInstrument_34.insert(UnderlyingOptAttribute_34.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_34;
  UnderlyingOriginalNotionalPercentageOutstanding_34.setString("61.630000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_34);
  UnderlyingInstrument_34.insert(UnderlyingOriginalNotionalPercentageOutstanding_34.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_34("STRING_1231078470");
  msg.set(UnderlyingPriceUnitOfMeasure_34);
  UnderlyingInstrument_34.insert(UnderlyingPriceUnitOfMeasure_34.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_34;
  UnderlyingPriceUnitOfMeasureQty_34.setString("7505780");
  msg.set(UnderlyingPriceUnitOfMeasureQty_34);
  UnderlyingInstrument_34.insert(UnderlyingPriceUnitOfMeasureQty_34.getString());
  FIX::UnderlyingProduct UnderlyingProduct_34(242648509);
  msg.set(UnderlyingProduct_34);
  UnderlyingInstrument_34.insert(UnderlyingProduct_34.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_34(1156086376);
  msg.set(UnderlyingPutOrCall_34);
  UnderlyingInstrument_34.insert(UnderlyingPutOrCall_34.getString());
  FIX::UnderlyingPx UnderlyingPx_34;
  UnderlyingPx_34.setString("2714781");
  msg.set(UnderlyingPx_34);
  UnderlyingInstrument_34.insert(UnderlyingPx_34.getString());
  FIX::UnderlyingQty UnderlyingQty_34;
  UnderlyingQty_34.setString("143272");
  msg.set(UnderlyingQty_34);
  UnderlyingInstrument_34.insert(UnderlyingQty_34.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_34("LOCALMKTDATE_2058163043");
  msg.set(UnderlyingRedemptionDate_34);
  UnderlyingInstrument_34.insert(UnderlyingRedemptionDate_34.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_34("STRING_2005296090");
  msg.set(UnderlyingRepoCollateralSecurityType_34);
  UnderlyingInstrument_34.insert(UnderlyingRepoCollateralSecurityType_34.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_34;
  UnderlyingRepurchaseRate_34.setString("96.140000");
  msg.set(UnderlyingRepurchaseRate_34);
  UnderlyingInstrument_34.insert(UnderlyingRepurchaseRate_34.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_34(146021273);
  msg.set(UnderlyingRepurchaseTerm_34);
  UnderlyingInstrument_34.insert(UnderlyingRepurchaseTerm_34.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_34("STRING_1760621796");
  msg.set(UnderlyingRestructuringType_34);
  UnderlyingInstrument_34.insert(UnderlyingRestructuringType_34.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_34("STRING_574967233");
  msg.set(UnderlyingSecurityDesc_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityDesc_34.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_34("EXCHANGE_1829642504");
  msg.set(UnderlyingSecurityExchange_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityExchange_34.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_34("STRING_792032221");
  msg.set(UnderlyingSecurityID_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityID_34.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_34("STRING_1625576286");
  msg.set(UnderlyingSecurityIDSource_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityIDSource_34.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_34("STRING_2117059201");
  msg.set(UnderlyingSecuritySubType_34);
  UnderlyingInstrument_34.insert(UnderlyingSecuritySubType_34.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_34("STRING_88375479");
  msg.set(UnderlyingSecurityType_34);
  UnderlyingInstrument_34.insert(UnderlyingSecurityType_34.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_34("STRING_224420329");
  msg.set(UnderlyingSeniority_34);
  UnderlyingInstrument_34.insert(UnderlyingSeniority_34.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_34("STRING_437290916");
  msg.set(UnderlyingSettlMethod_34);
  UnderlyingInstrument_34.insert(UnderlyingSettlMethod_34.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_34(5);
  msg.set(UnderlyingSettlementType_34);
  UnderlyingInstrument_34.insert(UnderlyingSettlementType_34.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_34;
  UnderlyingStartValue_34.setString("20231989");
  msg.set(UnderlyingStartValue_34);
  UnderlyingInstrument_34.insert(UnderlyingStartValue_34.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_34("STRING_817588963");
  msg.set(UnderlyingStateOrProvinceOfIssue_34);
  UnderlyingInstrument_34.insert(UnderlyingStateOrProvinceOfIssue_34.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_34("USD");
  msg.set(UnderlyingStrikeCurrency_34);
  UnderlyingInstrument_34.insert(UnderlyingStrikeCurrency_34.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_34;
  UnderlyingStrikePrice_34.setString("4166248");
  msg.set(UnderlyingStrikePrice_34);
  UnderlyingInstrument_34.insert(UnderlyingStrikePrice_34.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_34("STRING_1011152059");
  msg.set(UnderlyingSymbol_34);
  UnderlyingInstrument_34.insert(UnderlyingSymbol_34.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_34("STRING_1442942213");
  msg.set(UnderlyingSymbolSfx_34);
  UnderlyingInstrument_34.insert(UnderlyingSymbolSfx_34.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_34("STRING_41021905");
  msg.set(UnderlyingTimeUnit_34);
  UnderlyingInstrument_34.insert(UnderlyingTimeUnit_34.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_34("STRING_116149096");
  msg.set(UnderlyingUnitOfMeasure_34);
  UnderlyingInstrument_34.insert(UnderlyingUnitOfMeasure_34.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_34;
  UnderlyingUnitOfMeasureQty_34.setString("19335659");
  msg.set(UnderlyingUnitOfMeasureQty_34);
  UnderlyingInstrument_34.insert(UnderlyingUnitOfMeasureQty_34.getString());
  all_values.push_back(UnderlyingInstrument_34);
  all_compo_names.insert("UnderlyingInstrument");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_74;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_74("STRING_1347227566");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_74);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_74.insert(UnderlyingSecurityAltID_74.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_74("STRING_536660292");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_74);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_74.insert(UnderlyingSecurityAltIDSource_74.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_74);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_75;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_75("STRING_1208426578");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_75);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_75.insert(UnderlyingSecurityAltID_75.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_75("STRING_355830294");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_75);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_75.insert(UnderlyingSecurityAltIDSource_75.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_75);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_76;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_76("STRING_808138419");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_76);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_76.insert(UnderlyingSecurityAltID_76.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_76("STRING_1222753872");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_76);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_76.insert(UnderlyingSecurityAltIDSource_76.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_76);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_68;
    FIX::UnderlyingStipType UnderlyingStipType_68("STRING_665950861");
    noUnderlyingStips_0_0.set(UnderlyingStipType_68);
    UnderlyingStipulations_NoUnderlyingStips_68.insert(UnderlyingStipType_68.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_68("STRING_1326323486");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_68);
    UnderlyingStipulations_NoUnderlyingStips_68.insert(UnderlyingStipValue_68.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_68);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_65;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_65("STRING_279089009");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_65);
    UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyID_65.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_65('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_65);
    UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyIDSource_65.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_65(94689818);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_65);
    UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyRole_65.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_65);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_130("STRING_1379383357");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_130);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130.insert(UnderlyingInstrumentPartySubID_130.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_130(64265371);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_130);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130.insert(UnderlyingInstrumentPartySubIDType_130.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_66;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_66("STRING_1159496710");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_66);
    UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyID_66.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_66('1');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_66);
    UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyIDSource_66.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_66(501556287);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_66);
    UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyRole_66.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_66);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_131("STRING_1479519016");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_131);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131.insert(UnderlyingInstrumentPartySubID_131.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_131(1319145250);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_131);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131.insert(UnderlyingInstrumentPartySubIDType_131.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_132("STRING_1410273526");
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubID_132);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132.insert(UnderlyingInstrumentPartySubID_132.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_132(1908839170);
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubIDType_132);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132.insert(UnderlyingInstrumentPartySubIDType_132.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_67;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_67("STRING_1735770060");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_67);
    UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyID_67.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_67('2');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_67);
    UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyIDSource_67.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_67(1204297735);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_67);
    UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyRole_67.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_67);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_133("STRING_390091033");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_133);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133.insert(UnderlyingInstrumentPartySubID_133.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_133(990380002);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_133);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133.insert(UnderlyingInstrumentPartySubIDType_133.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_134("STRING_595086386");
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubID_134);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134.insert(UnderlyingInstrumentPartySubID_134.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_134(1737318599);
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubIDType_134);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134.insert(UnderlyingInstrumentPartySubIDType_134.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
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
