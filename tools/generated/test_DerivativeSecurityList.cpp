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
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityList_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_13("LOCALMKTDATE_1927324190");
  msg.set(ClearingBusinessDate_13);
  DerivativeSecurityList_0.insert(ClearingBusinessDate_13.getString());
  FIX::LastFragment LastFragment_3(false);
  msg.set(LastFragment_3);
  DerivativeSecurityList_0.insert(LastFragment_3.getString());
  FIX::SecurityReportID SecurityReportID_0(1311357332);
  msg.set(SecurityReportID_0);
  DerivativeSecurityList_0.insert(SecurityReportID_0.getString());
  FIX::SecurityReqID SecurityReqID_0("STRING_1320261588");
  msg.set(SecurityReqID_0);
  DerivativeSecurityList_0.insert(SecurityReqID_0.getString());
  FIX::SecurityRequestResult SecurityRequestResult_0(3);
  msg.set(SecurityRequestResult_0);
  DerivativeSecurityList_0.insert(SecurityRequestResult_0.getString());
  FIX::SecurityResponseID SecurityResponseID_0("STRING_1917350118");
  msg.set(SecurityResponseID_0);
  DerivativeSecurityList_0.insert(SecurityResponseID_0.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_1(1268723745);
  msg.set(TotNoRelatedSym_1);
  DerivativeSecurityList_0.insert(TotNoRelatedSym_1.getString());
  FIX::TransactTime TransactTime_16(FIX::UTCTIMESTAMP(8, 9, 27, 8, 2, 2004));
  msg.set(TransactTime_16);
  DerivativeSecurityList_0.insert(TransactTime_16.getString());
  all_values.push_back(DerivativeSecurityList_0);

  all_compo_names.insert("DerivativeSecurityList");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_2;
  FIX::ApplID ApplID_2("STRING_1636428260");
  msg.set(ApplID_2);
  ApplicationSequenceControl_2.insert(ApplID_2.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_2(410998018);
  msg.set(ApplLastSeqNum_2);
  ApplicationSequenceControl_2.insert(ApplLastSeqNum_2.getString());
  FIX::ApplResendFlag ApplResendFlag_2(true);
  msg.set(ApplResendFlag_2);
  ApplicationSequenceControl_2.insert(ApplResendFlag_2.getString());
  FIX::ApplSeqNum ApplSeqNum_2(392005695);
  msg.set(ApplSeqNum_2);
  ApplicationSequenceControl_2.insert(ApplSeqNum_2.getString());
  all_values.push_back(ApplicationSequenceControl_2);
  all_compo_names.insert("ApplicationSequenceControl");

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_0;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_0(true);
  msg.set(DerivFlexProductEligibilityIndicator_0);
  DerivativeInstrument_0.insert(DerivFlexProductEligibilityIndicator_0.getString());
  FIX::DerivativeCFICode DerivativeCFICode_0("STRING_1600384840");
  msg.set(DerivativeCFICode_0);
  DerivativeInstrument_0.insert(DerivativeCFICode_0.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_0;
  DerivativeCapPrice_0.setString("21061240");
  msg.set(DerivativeCapPrice_0);
  DerivativeInstrument_0.insert(DerivativeCapPrice_0.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_0;
  DerivativeContractMultiplier_0.setString("12648744");
  msg.set(DerivativeContractMultiplier_0);
  DerivativeInstrument_0.insert(DerivativeContractMultiplier_0.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_0(1533645014);
  msg.set(DerivativeContractMultiplierUnit_0);
  DerivativeInstrument_0.insert(DerivativeContractMultiplierUnit_0.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_0("MONTHYEAR_663914550");
  msg.set(DerivativeContractSettlMonth_0);
  DerivativeInstrument_0.insert(DerivativeContractSettlMonth_0.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_0("COUNTRY_1429626916");
  msg.set(DerivativeCountryOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeCountryOfIssue_0.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_0("DATA_2014810175");
  msg.set(DerivativeEncodedIssuer_0);
  DerivativeInstrument_0.insert(DerivativeEncodedIssuer_0.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_0(696318075);
  msg.set(DerivativeEncodedIssuerLen_0);
  DerivativeInstrument_0.insert(DerivativeEncodedIssuerLen_0.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_0("DATA_223656127");
  msg.set(DerivativeEncodedSecurityDesc_0);
  DerivativeInstrument_0.insert(DerivativeEncodedSecurityDesc_0.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_0(465431886);
  msg.set(DerivativeEncodedSecurityDescLen_0);
  DerivativeInstrument_0.insert(DerivativeEncodedSecurityDescLen_0.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_0('1');
  msg.set(DerivativeExerciseStyle_0);
  DerivativeInstrument_0.insert(DerivativeExerciseStyle_0.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_0;
  DerivativeFloorPrice_0.setString("14044320");
  msg.set(DerivativeFloorPrice_0);
  DerivativeInstrument_0.insert(DerivativeFloorPrice_0.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_0(245272428);
  msg.set(DerivativeFlowScheduleType_0);
  DerivativeInstrument_0.insert(DerivativeFlowScheduleType_0.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_0("STRING_2073815055");
  msg.set(DerivativeInstrRegistry_0);
  DerivativeInstrument_0.insert(DerivativeInstrRegistry_0.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_0('5');
  msg.set(DerivativeInstrmtAssignmentMethod_0);
  DerivativeInstrument_0.insert(DerivativeInstrmtAssignmentMethod_0.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_0("LOCALMKTDATE_1565534016");
  msg.set(DerivativeIssueDate_0);
  DerivativeInstrument_0.insert(DerivativeIssueDate_0.getString());
  FIX::DerivativeIssuer DerivativeIssuer_0("STRING_291940961");
  msg.set(DerivativeIssuer_0);
  DerivativeInstrument_0.insert(DerivativeIssuer_0.getString());
  FIX::DerivativeListMethod DerivativeListMethod_0(338172166);
  msg.set(DerivativeListMethod_0);
  DerivativeInstrument_0.insert(DerivativeListMethod_0.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_0("STRING_686774114");
  msg.set(DerivativeLocaleOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeLocaleOfIssue_0.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_0("LOCALMKTDATE_39949733");
  msg.set(DerivativeMaturityDate_0);
  DerivativeInstrument_0.insert(DerivativeMaturityDate_0.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_0("MONTHYEAR_1773944430");
  msg.set(DerivativeMaturityMonthYear_0);
  DerivativeInstrument_0.insert(DerivativeMaturityMonthYear_0.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_0("TZTIMEONLY_769609763");
  msg.set(DerivativeMaturityTime_0);
  DerivativeInstrument_0.insert(DerivativeMaturityTime_0.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_0;
  DerivativeMinPriceIncrement_0.setString("1859021");
  msg.set(DerivativeMinPriceIncrement_0);
  DerivativeInstrument_0.insert(DerivativeMinPriceIncrement_0.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_0;
  DerivativeMinPriceIncrementAmount_0.setString("6926719");
  msg.set(DerivativeMinPriceIncrementAmount_0);
  DerivativeInstrument_0.insert(DerivativeMinPriceIncrementAmount_0.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_0(1681317636);
  msg.set(DerivativeNTPositionLimit_0);
  DerivativeInstrument_0.insert(DerivativeNTPositionLimit_0.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_0('1');
  msg.set(DerivativeOptAttribute_0);
  DerivativeInstrument_0.insert(DerivativeOptAttribute_0.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_0;
  DerivativeOptPayAmount_0.setString("1816165");
  msg.set(DerivativeOptPayAmount_0);
  DerivativeInstrument_0.insert(DerivativeOptPayAmount_0.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_0(2092315654);
  msg.set(DerivativePositionLimit_0);
  DerivativeInstrument_0.insert(DerivativePositionLimit_0.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_0("STRING_775256279");
  msg.set(DerivativePriceQuoteMethod_0);
  DerivativeInstrument_0.insert(DerivativePriceQuoteMethod_0.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_0("STRING_573622258");
  msg.set(DerivativePriceUnitOfMeasure_0);
  DerivativeInstrument_0.insert(DerivativePriceUnitOfMeasure_0.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_0;
  DerivativePriceUnitOfMeasureQty_0.setString("8822613");
  msg.set(DerivativePriceUnitOfMeasureQty_0);
  DerivativeInstrument_0.insert(DerivativePriceUnitOfMeasureQty_0.getString());
  FIX::DerivativeProduct DerivativeProduct_0(228157471);
  msg.set(DerivativeProduct_0);
  DerivativeInstrument_0.insert(DerivativeProduct_0.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_0("STRING_532262611");
  msg.set(DerivativeProductComplex_0);
  DerivativeInstrument_0.insert(DerivativeProductComplex_0.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_0(2147135780);
  msg.set(DerivativePutOrCall_0);
  DerivativeInstrument_0.insert(DerivativePutOrCall_0.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_0("STRING_1761802485");
  msg.set(DerivativeSecurityDesc_0);
  DerivativeInstrument_0.insert(DerivativeSecurityDesc_0.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_0("EXCHANGE_1196177161");
  msg.set(DerivativeSecurityExchange_0);
  DerivativeInstrument_0.insert(DerivativeSecurityExchange_0.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_0("STRING_1429279048");
  msg.set(DerivativeSecurityGroup_0);
  DerivativeInstrument_0.insert(DerivativeSecurityGroup_0.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_0("STRING_1629129012");
  msg.set(DerivativeSecurityID_0);
  DerivativeInstrument_0.insert(DerivativeSecurityID_0.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_0("STRING_1892495236");
  msg.set(DerivativeSecurityIDSource_0);
  DerivativeInstrument_0.insert(DerivativeSecurityIDSource_0.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_0("STRING_1652935175");
  msg.set(DerivativeSecurityStatus_0);
  DerivativeInstrument_0.insert(DerivativeSecurityStatus_0.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_0("STRING_2094560899");
  msg.set(DerivativeSecuritySubType_0);
  DerivativeInstrument_0.insert(DerivativeSecuritySubType_0.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_0("STRING_1140024209");
  msg.set(DerivativeSecurityType_0);
  DerivativeInstrument_0.insert(DerivativeSecurityType_0.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_0('9');
  msg.set(DerivativeSettlMethod_0);
  DerivativeInstrument_0.insert(DerivativeSettlMethod_0.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_0("STRING_192349679");
  msg.set(DerivativeSettleOnOpenFlag_0);
  DerivativeInstrument_0.insert(DerivativeSettleOnOpenFlag_0.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_0("STRING_1066355616");
  msg.set(DerivativeStateOrProvinceOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeStateOrProvinceOfIssue_0.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_0("USD");
  msg.set(DerivativeStrikeCurrency_0);
  DerivativeInstrument_0.insert(DerivativeStrikeCurrency_0.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_0;
  DerivativeStrikeMultiplier_0.setString("13582965");
  msg.set(DerivativeStrikeMultiplier_0);
  DerivativeInstrument_0.insert(DerivativeStrikeMultiplier_0.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_0;
  DerivativeStrikePrice_0.setString("18163614");
  msg.set(DerivativeStrikePrice_0);
  DerivativeInstrument_0.insert(DerivativeStrikePrice_0.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_0;
  DerivativeStrikeValue_0.setString("2971741");
  msg.set(DerivativeStrikeValue_0);
  DerivativeInstrument_0.insert(DerivativeStrikeValue_0.getString());
  FIX::DerivativeSymbol DerivativeSymbol_0("STRING_1398246310");
  msg.set(DerivativeSymbol_0);
  DerivativeInstrument_0.insert(DerivativeSymbol_0.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_0("STRING_1442822182");
  msg.set(DerivativeSymbolSfx_0);
  DerivativeInstrument_0.insert(DerivativeSymbolSfx_0.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_0("STRING_1066783925");
  msg.set(DerivativeTimeUnit_0);
  DerivativeInstrument_0.insert(DerivativeTimeUnit_0.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_0("STRING_1584148470");
  msg.set(DerivativeUnitOfMeasure_0);
  DerivativeInstrument_0.insert(DerivativeUnitOfMeasure_0.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_0;
  DerivativeUnitOfMeasureQty_0.setString("21354941");
  msg.set(DerivativeUnitOfMeasureQty_0);
  DerivativeInstrument_0.insert(DerivativeUnitOfMeasureQty_0.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_0("STRING_600617914");
  msg.set(DerivativeValuationMethod_0);
  DerivativeInstrument_0.insert(DerivativeValuationMethod_0.getString());
  all_values.push_back(DerivativeInstrument_0);
  all_compo_names.insert("DerivativeInstrument");

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_0;
    FIX::DerivativeEventDate DerivativeEventDate_0("LOCALMKTDATE_169627047");
    noDerivativeEvents_0_0.set(DerivativeEventDate_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventDate_0.getString());
    FIX::DerivativeEventPx DerivativeEventPx_0;
    DerivativeEventPx_0.setString("5454499");
    noDerivativeEvents_0_0.set(DerivativeEventPx_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventPx_0.getString());
    FIX::DerivativeEventText DerivativeEventText_0("STRING_2138104504");
    noDerivativeEvents_0_0.set(DerivativeEventText_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventText_0.getString());
    FIX::DerivativeEventTime DerivativeEventTime_0(FIX::UTCTIMESTAMP(5, 27, 56, 5, 1, 2014));
    noDerivativeEvents_0_0.set(DerivativeEventTime_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventTime_0.getString());
    FIX::DerivativeEventType DerivativeEventType_0(709158769);
    noDerivativeEvents_0_0.set(DerivativeEventType_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventType_0.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_0);
    all_compo_names.insert("DerivativeEventsGrp.NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_1;
    FIX::DerivativeEventDate DerivativeEventDate_1("LOCALMKTDATE_1462226176");
    noDerivativeEvents_0_1.set(DerivativeEventDate_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventDate_1.getString());
    FIX::DerivativeEventPx DerivativeEventPx_1;
    DerivativeEventPx_1.setString("692170");
    noDerivativeEvents_0_1.set(DerivativeEventPx_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventPx_1.getString());
    FIX::DerivativeEventText DerivativeEventText_1("STRING_214610296");
    noDerivativeEvents_0_1.set(DerivativeEventText_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventText_1.getString());
    FIX::DerivativeEventTime DerivativeEventTime_1(FIX::UTCTIMESTAMP(3, 54, 27, 8, 1, 2007));
    noDerivativeEvents_0_1.set(DerivativeEventTime_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventTime_1.getString());
    FIX::DerivativeEventType DerivativeEventType_1(1486409773);
    noDerivativeEvents_0_1.set(DerivativeEventType_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventType_1.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_1);
    all_compo_names.insert("DerivativeEventsGrp.NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_2;
    FIX::DerivativeEventDate DerivativeEventDate_2("LOCALMKTDATE_124077172");
    noDerivativeEvents_0_2.set(DerivativeEventDate_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventDate_2.getString());
    FIX::DerivativeEventPx DerivativeEventPx_2;
    DerivativeEventPx_2.setString("15092273");
    noDerivativeEvents_0_2.set(DerivativeEventPx_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventPx_2.getString());
    FIX::DerivativeEventText DerivativeEventText_2("STRING_737172436");
    noDerivativeEvents_0_2.set(DerivativeEventText_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventText_2.getString());
    FIX::DerivativeEventTime DerivativeEventTime_2(FIX::UTCTIMESTAMP(10, 38, 0, 20, 8, 2015));
    noDerivativeEvents_0_2.set(DerivativeEventTime_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventTime_2.getString());
    FIX::DerivativeEventType DerivativeEventType_2(1574595429);
    noDerivativeEvents_0_2.set(DerivativeEventType_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventType_2.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_2);
    all_compo_names.insert("DerivativeEventsGrp.NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_2);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_0;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_0("STRING_320302545");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyID_0.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_0("STRING_854823018");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyIDSource_0.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_0(1746084666);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyRole_0.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);
    all_compo_names.insert("DerivativeInstrumentParties.NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_0("STRING_134702739");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_0);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0.insert(DerivativeInstrumentPartySubID_0.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_0(1579181830);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_0);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0.insert(DerivativeInstrumentPartySubIDType_0.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_1("STRING_1920019891");
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubID_1);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1.insert(DerivativeInstrumentPartySubID_1.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_1(843861508);
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubIDType_1);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1.insert(DerivativeInstrumentPartySubIDType_1.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_2;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_2("STRING_893924359");
      noDerivativeInstrumentPartySubIDs_0_1_2.set(DerivativeInstrumentPartySubID_2);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2.insert(DerivativeInstrumentPartySubID_2.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_2(1989236910);
      noDerivativeInstrumentPartySubIDs_0_1_2.set(DerivativeInstrumentPartySubIDType_2);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2.insert(DerivativeInstrumentPartySubIDType_2.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2);
      all_compo_names.insert("DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_0("STRING_155744138");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_0);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0.insert(DerivativeSecurityAltID_0.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_0("STRING_1050994489");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_0);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0.insert(DerivativeSecurityAltIDSource_0.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);
    all_compo_names.insert("DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_1("STRING_35481990");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltID_1);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1.insert(DerivativeSecurityAltID_1.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_1("STRING_1757397245");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltIDSource_1);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1.insert(DerivativeSecurityAltIDSource_1.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1);
    all_compo_names.insert("DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_2;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_2("STRING_1179107685");
    noDerivativeSecurityAltID_0_2.set(DerivativeSecurityAltID_2);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2.insert(DerivativeSecurityAltID_2.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_2("STRING_490681411");
    noDerivativeSecurityAltID_0_2.set(DerivativeSecurityAltIDSource_2);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2.insert(DerivativeSecurityAltIDSource_2.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2);
    all_compo_names.insert("DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_2);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_0;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_1("DATA_821966752");
  msg.set(DerivativeSecurityXML_1);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_0(518033811);
  msg.set(DerivativeSecurityXMLLen_0);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_0("STRING_614758583");
  msg.set(DerivativeSecurityXMLSchema_0);
  DerivativeSecurityXML_0.insert(DerivativeSecurityXMLSchema_0.getString());
  all_values.push_back(DerivativeSecurityXML_0);
  all_compo_names.insert("DerivativeSecurityXML");

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_0(1255206247);
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribType_0);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0.insert(DerivativeInstrAttribType_0.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_0("STRING_34174290");
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribValue_0);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0.insert(DerivativeInstrAttribValue_0.getString());
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);
    all_compo_names.insert("DerivativeInstrumentAttribute.NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_0;
    FIX::MarketID MarketID_0("EXCHANGE_1429043505");
    noMarketSegments_0_0.set(MarketID_0);
    MarketSegmentGrp_NoMarketSegments_0.insert(MarketID_0.getString());
    FIX::MarketSegmentID MarketSegmentID_0("STRING_1589084130");
    noMarketSegments_0_0.set(MarketSegmentID_0);
    MarketSegmentGrp_NoMarketSegments_0.insert(MarketSegmentID_0.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_0);
    all_compo_names.insert("MarketSegmentGrp.NoMarketSegments");

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
    MaxPriceVariation_0.setString("11661373");
    noMarketSegments_0_0.set(MaxPriceVariation_0);
    BaseTradingRules_0.insert(MaxPriceVariation_0.getString());
    FIX::MaxTradeVol MaxTradeVol_0;
    MaxTradeVol_0.setString("10684953");
    noMarketSegments_0_0.set(MaxTradeVol_0);
    BaseTradingRules_0.insert(MaxTradeVol_0.getString());
    FIX::MinTradeVol MinTradeVol_0;
    MinTradeVol_0.setString("1980680");
    noMarketSegments_0_0.set(MinTradeVol_0);
    BaseTradingRules_0.insert(MinTradeVol_0.getString());
    FIX::MultilegModel MultilegModel_0(2);
    noMarketSegments_0_0.set(MultilegModel_0);
    BaseTradingRules_0.insert(MultilegModel_0.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_0(5);
    noMarketSegments_0_0.set(MultilegPriceMethod_0);
    BaseTradingRules_0.insert(MultilegPriceMethod_0.getString());
    FIX::PriceType PriceType_13(6);
    noMarketSegments_0_0.set(PriceType_13);
    BaseTradingRules_0.insert(PriceType_13.getString());
    FIX::RoundLot RoundLot_0;
    RoundLot_0.setString("9347707");
    noMarketSegments_0_0.set(RoundLot_0);
    BaseTradingRules_0.insert(RoundLot_0.getString());
    FIX::TradingCurrency TradingCurrency_0("EUR");
    noMarketSegments_0_0.set(TradingCurrency_0);
    BaseTradingRules_0.insert(TradingCurrency_0.getString());
    all_values.push_back(BaseTradingRules_0);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_0;
      FIX::LotType LotType_0('3');
      noLotTypeRules_0_1_0.set(LotType_0);
      LotTypeRules_NoLotTypeRules_0.insert(LotType_0.getString());
      FIX::MinLotSize MinLotSize_0;
      MinLotSize_0.setString("1222915");
      noLotTypeRules_0_1_0.set(MinLotSize_0);
      LotTypeRules_NoLotTypeRules_0.insert(MinLotSize_0.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_0);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_1;
      FIX::LotType LotType_1('3');
      noLotTypeRules_0_1_1.set(LotType_1);
      LotTypeRules_NoLotTypeRules_1.insert(LotType_1.getString());
      FIX::MinLotSize MinLotSize_1;
      MinLotSize_1.setString("18128707");
      noLotTypeRules_0_1_1.set(MinLotSize_1);
      LotTypeRules_NoLotTypeRules_1.insert(MinLotSize_1.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_1);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_2;
      FIX::LotType LotType_2('4');
      noLotTypeRules_0_1_2.set(LotType_2);
      LotTypeRules_NoLotTypeRules_2.insert(LotType_2.getString());
      FIX::MinLotSize MinLotSize_2;
      MinLotSize_2.setString("16000547");
      noLotTypeRules_0_1_2.set(MinLotSize_2);
      LotTypeRules_NoLotTypeRules_2.insert(MinLotSize_2.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_2);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_0;
    FIX::HighLimitPrice HighLimitPrice_0;
    HighLimitPrice_0.setString("18483527");
    noMarketSegments_0_0.set(HighLimitPrice_0);
    PriceLimits_0.insert(HighLimitPrice_0.getString());
    FIX::LowLimitPrice LowLimitPrice_0;
    LowLimitPrice_0.setString("20354329");
    noMarketSegments_0_0.set(LowLimitPrice_0);
    PriceLimits_0.insert(LowLimitPrice_0.getString());
    FIX::PriceLimitType PriceLimitType_0(0);
    noMarketSegments_0_0.set(PriceLimitType_0);
    PriceLimits_0.insert(PriceLimitType_0.getString());
    FIX::TradingReferencePrice TradingReferencePrice_0;
    TradingReferencePrice_0.setString("1915504");
    noMarketSegments_0_0.set(TradingReferencePrice_0);
    PriceLimits_0.insert(TradingReferencePrice_0.getString());
    all_values.push_back(PriceLimits_0);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_0;
      FIX::EndTickPriceRange EndTickPriceRange_0;
      EndTickPriceRange_0.setString("11497125");
      noTickRules_0_1_0.set(EndTickPriceRange_0);
      TickRules_NoTickRules_0.insert(EndTickPriceRange_0.getString());
      FIX::StartTickPriceRange StartTickPriceRange_0;
      StartTickPriceRange_0.setString("8063090");
      noTickRules_0_1_0.set(StartTickPriceRange_0);
      TickRules_NoTickRules_0.insert(StartTickPriceRange_0.getString());
      FIX::TickIncrement TickIncrement_0;
      TickIncrement_0.setString("8936265");
      noTickRules_0_1_0.set(TickIncrement_0);
      TickRules_NoTickRules_0.insert(TickIncrement_0.getString());
      FIX::TickRuleType TickRuleType_0(1);
      noTickRules_0_1_0.set(TickRuleType_0);
      TickRules_NoTickRules_0.insert(TickRuleType_0.getString());
      all_values.push_back(TickRules_NoTickRules_0);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_1;
      FIX::EndTickPriceRange EndTickPriceRange_1;
      EndTickPriceRange_1.setString("8404833");
      noTickRules_0_1_1.set(EndTickPriceRange_1);
      TickRules_NoTickRules_1.insert(EndTickPriceRange_1.getString());
      FIX::StartTickPriceRange StartTickPriceRange_1;
      StartTickPriceRange_1.setString("15058645");
      noTickRules_0_1_1.set(StartTickPriceRange_1);
      TickRules_NoTickRules_1.insert(StartTickPriceRange_1.getString());
      FIX::TickIncrement TickIncrement_1;
      TickIncrement_1.setString("16864786");
      noTickRules_0_1_1.set(TickIncrement_1);
      TickRules_NoTickRules_1.insert(TickIncrement_1.getString());
      FIX::TickRuleType TickRuleType_1(1);
      noTickRules_0_1_1.set(TickRuleType_1);
      TickRules_NoTickRules_1.insert(TickRuleType_1.getString());
      all_values.push_back(TickRules_NoTickRules_1);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_2;
      FIX::EndTickPriceRange EndTickPriceRange_2;
      EndTickPriceRange_2.setString("9997643");
      noTickRules_0_1_2.set(EndTickPriceRange_2);
      TickRules_NoTickRules_2.insert(EndTickPriceRange_2.getString());
      FIX::StartTickPriceRange StartTickPriceRange_2;
      StartTickPriceRange_2.setString("3572403");
      noTickRules_0_1_2.set(StartTickPriceRange_2);
      TickRules_NoTickRules_2.insert(StartTickPriceRange_2.getString());
      FIX::TickIncrement TickIncrement_2;
      TickIncrement_2.setString("14482212");
      noTickRules_0_1_2.set(TickIncrement_2);
      TickRules_NoTickRules_2.insert(TickIncrement_2.getString());
      FIX::TickRuleType TickRuleType_2(0);
      noTickRules_0_1_2.set(TickRuleType_2);
      TickRules_NoTickRules_2.insert(TickRuleType_2.getString());
      all_values.push_back(TickRules_NoTickRules_2);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_0;
      FIX::NestedInstrAttribType NestedInstrAttribType_0(787177473);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_0);
      NestedInstrumentAttribute_NoNestedInstrAttrib_0.insert(NestedInstrAttribType_0.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_0("STRING_1844094376");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_0);
      NestedInstrumentAttribute_NoNestedInstrAttrib_0.insert(NestedInstrAttribValue_0.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_0);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_1;
      FIX::NestedInstrAttribType NestedInstrAttribType_1(351977453);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_1);
      NestedInstrumentAttribute_NoNestedInstrAttrib_1.insert(NestedInstrAttribType_1.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_1("STRING_1721948202");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_1);
      NestedInstrumentAttribute_NoNestedInstrAttrib_1.insert(NestedInstrAttribValue_1.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_1);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_2;
      FIX::NestedInstrAttribType NestedInstrAttribType_2(1754631790);
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribType_2);
      NestedInstrumentAttribute_NoNestedInstrAttrib_2.insert(NestedInstrAttribType_2.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_2("STRING_1727828334");
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribValue_2);
      NestedInstrumentAttribute_NoNestedInstrAttrib_2.insert(NestedInstrAttribValue_2.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_2);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_0;
      FIX::TradingSessionID TradingSessionID_17("STRING_2");
      noTradingSessionRules_0_1_0.set(TradingSessionID_17);
      TradingSessionRulesGrp_NoTradingSessionRules_0.insert(TradingSessionID_17.getString());
      FIX::TradingSessionSubID TradingSessionSubID_17("STRING_6");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_17);
      TradingSessionRulesGrp_NoTradingSessionRules_0.insert(TradingSessionSubID_17.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_0);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_0;
        FIX::ExecInstValue ExecInstValue_0('2');
        noExecInstRules_0_0_2_0.set(ExecInstValue_0);
        ExecInstRules_NoExecInstRules_0.insert(ExecInstValue_0.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_0);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
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
        FIX::MDFeedType MDFeedType_0("STRING_1875286860");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MDFeedType_0.getString());
        FIX::MarketDepth MarketDepth_0(2016104986);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MarketDepth_0.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_0);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_1;
        FIX::MDBookType MDBookType_1(3);
        noMDFeedTypes_0_0_2_1.set(MDBookType_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MDBookType_1.getString());
        FIX::MDFeedType MDFeedType_1("STRING_2066837340");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MDFeedType_1.getString());
        FIX::MarketDepth MarketDepth_1(578537419);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MarketDepth_1.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_1);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_0;
        FIX::MatchAlgorithm MatchAlgorithm_0("STRING_725662756");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_0);
        MatchRules_NoMatchRules_0.insert(MatchAlgorithm_0.getString());
        FIX::MatchType MatchType_3("STRING_M3");
        noMatchRules_0_0_2_0.set(MatchType_3);
        MatchRules_NoMatchRules_0.insert(MatchType_3.getString());
        all_values.push_back(MatchRules_NoMatchRules_0);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_1;
        FIX::MatchAlgorithm MatchAlgorithm_1("STRING_174745691");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_1);
        MatchRules_NoMatchRules_1.insert(MatchAlgorithm_1.getString());
        FIX::MatchType MatchType_4("STRING_S5");
        noMatchRules_0_0_2_1.set(MatchType_4);
        MatchRules_NoMatchRules_1.insert(MatchType_4.getString());
        all_values.push_back(MatchRules_NoMatchRules_1);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_2;
        FIX::MatchAlgorithm MatchAlgorithm_2("STRING_830544792");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_2);
        MatchRules_NoMatchRules_2.insert(MatchAlgorithm_2.getString());
        FIX::MatchType MatchType_5("STRING_A5");
        noMatchRules_0_0_2_2.set(MatchType_5);
        MatchRules_NoMatchRules_2.insert(MatchType_5.getString());
        all_values.push_back(MatchRules_NoMatchRules_2);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_0;
        FIX::OrdType OrdType_1('K');
        noOrdTypeRules_0_0_2_0.set(OrdType_1);
        OrdTypeRules_NoOrdTypeRules_0.insert(OrdType_1.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_0);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_1;
        FIX::OrdType OrdType_2('A');
        noOrdTypeRules_0_0_2_1.set(OrdType_2);
        OrdTypeRules_NoOrdTypeRules_1.insert(OrdType_2.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_1);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_2;
        FIX::OrdType OrdType_3('2');
        noOrdTypeRules_0_0_2_2.set(OrdType_3);
        OrdTypeRules_NoOrdTypeRules_2.insert(OrdType_3.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_2);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_0;
        FIX::TimeInForce TimeInForce_1('1');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_1);
        TimeInForceRules_NoTimeInForceRules_0.insert(TimeInForce_1.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_0);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_0;
      FIX::EndStrikePxRange EndStrikePxRange_0;
      EndStrikePxRange_0.setString("14476959");
      noStrikeRules_0_1_0.set(EndStrikePxRange_0);
      StrikeRules_NoStrikeRules_0.insert(EndStrikePxRange_0.getString());
      FIX::StartStrikePxRange StartStrikePxRange_0;
      StartStrikePxRange_0.setString("9782669");
      noStrikeRules_0_1_0.set(StartStrikePxRange_0);
      StrikeRules_NoStrikeRules_0.insert(StartStrikePxRange_0.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_0(1510609532);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeExerciseStyle_0.getString());
      FIX::StrikeIncrement StrikeIncrement_0;
      StrikeIncrement_0.setString("10548441");
      noStrikeRules_0_1_0.set(StrikeIncrement_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeIncrement_0.getString());
      FIX::StrikeRuleID StrikeRuleID_0("STRING_558611631");
      noStrikeRules_0_1_0.set(StrikeRuleID_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeRuleID_0.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_0);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_0;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_0("MONTHYEAR_1416391175");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_0);
        MaturityRules_NoMaturityRules_0.insert(EndMaturityMonthYear_0.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_0(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearFormat_0.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_0(475729170);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearIncrement_0.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_0(3);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearIncrementUnits_0.getString());
        FIX::MaturityRuleID MaturityRuleID_0("STRING_241919920");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityRuleID_0.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_0("MONTHYEAR_759132006");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_0);
        MaturityRules_NoMaturityRules_0.insert(StartMaturityMonthYear_0.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_0);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_1;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_1("MONTHYEAR_1171128531");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_1);
        MaturityRules_NoMaturityRules_1.insert(EndMaturityMonthYear_1.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_1(0);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearFormat_1.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_1(1674213602);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearIncrement_1.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_1(0);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearIncrementUnits_1.getString());
        FIX::MaturityRuleID MaturityRuleID_1("STRING_689078678");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityRuleID_1.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_1("MONTHYEAR_1591524123");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_1);
        MaturityRules_NoMaturityRules_1.insert(StartMaturityMonthYear_1.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_1);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_2;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_2("MONTHYEAR_1816144980");
        noMaturityRules_0_0_2_2.set(EndMaturityMonthYear_2);
        MaturityRules_NoMaturityRules_2.insert(EndMaturityMonthYear_2.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_2(1);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearFormat_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearFormat_2.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_2(1766269814);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrement_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearIncrement_2.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_2(2);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrementUnits_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearIncrementUnits_2.getString());
        FIX::MaturityRuleID MaturityRuleID_2("STRING_844303744");
        noMaturityRules_0_0_2_2.set(MaturityRuleID_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityRuleID_2.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_2("MONTHYEAR_1480010534");
        noMaturityRules_0_0_2_2.set(StartMaturityMonthYear_2);
        MaturityRules_NoMaturityRules_2.insert(StartMaturityMonthYear_2.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_2);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_1;
      FIX::EndStrikePxRange EndStrikePxRange_1;
      EndStrikePxRange_1.setString("9355537");
      noStrikeRules_0_1_1.set(EndStrikePxRange_1);
      StrikeRules_NoStrikeRules_1.insert(EndStrikePxRange_1.getString());
      FIX::StartStrikePxRange StartStrikePxRange_1;
      StartStrikePxRange_1.setString("5271292");
      noStrikeRules_0_1_1.set(StartStrikePxRange_1);
      StrikeRules_NoStrikeRules_1.insert(StartStrikePxRange_1.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_1(1550991624);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeExerciseStyle_1.getString());
      FIX::StrikeIncrement StrikeIncrement_1;
      StrikeIncrement_1.setString("20845212");
      noStrikeRules_0_1_1.set(StrikeIncrement_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeIncrement_1.getString());
      FIX::StrikeRuleID StrikeRuleID_1("STRING_130730876");
      noStrikeRules_0_1_1.set(StrikeRuleID_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeRuleID_1.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_1);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_3;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_3("MONTHYEAR_1873182576");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_3);
        MaturityRules_NoMaturityRules_3.insert(EndMaturityMonthYear_3.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_3(1);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearFormat_3.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_3(1008064412);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearIncrement_3.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_3(0);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearIncrementUnits_3.getString());
        FIX::MaturityRuleID MaturityRuleID_3("STRING_485787306");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityRuleID_3.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_3("MONTHYEAR_1566676043");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_3);
        MaturityRules_NoMaturityRules_3.insert(StartMaturityMonthYear_3.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_3);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_1;
    FIX::MarketID MarketID_1("EXCHANGE_881205871");
    noMarketSegments_0_1.set(MarketID_1);
    MarketSegmentGrp_NoMarketSegments_1.insert(MarketID_1.getString());
    FIX::MarketSegmentID MarketSegmentID_1("STRING_1902178482");
    noMarketSegments_0_1.set(MarketSegmentID_1);
    MarketSegmentGrp_NoMarketSegments_1.insert(MarketSegmentID_1.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_1);
    all_compo_names.insert("MarketSegmentGrp.NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_1;
    FIX::ExpirationCycle ExpirationCycle_1(1);
    noMarketSegments_0_1.set(ExpirationCycle_1);
    BaseTradingRules_1.insert(ExpirationCycle_1.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_1(1);
    noMarketSegments_0_1.set(ImpliedMarketIndicator_1);
    BaseTradingRules_1.insert(ImpliedMarketIndicator_1.getString());
    FIX::MaxPriceVariation MaxPriceVariation_1;
    MaxPriceVariation_1.setString("11980201");
    noMarketSegments_0_1.set(MaxPriceVariation_1);
    BaseTradingRules_1.insert(MaxPriceVariation_1.getString());
    FIX::MaxTradeVol MaxTradeVol_1;
    MaxTradeVol_1.setString("20698438");
    noMarketSegments_0_1.set(MaxTradeVol_1);
    BaseTradingRules_1.insert(MaxTradeVol_1.getString());
    FIX::MinTradeVol MinTradeVol_1;
    MinTradeVol_1.setString("21160670");
    noMarketSegments_0_1.set(MinTradeVol_1);
    BaseTradingRules_1.insert(MinTradeVol_1.getString());
    FIX::MultilegModel MultilegModel_1(1);
    noMarketSegments_0_1.set(MultilegModel_1);
    BaseTradingRules_1.insert(MultilegModel_1.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_1(3);
    noMarketSegments_0_1.set(MultilegPriceMethod_1);
    BaseTradingRules_1.insert(MultilegPriceMethod_1.getString());
    FIX::PriceType PriceType_14(3);
    noMarketSegments_0_1.set(PriceType_14);
    BaseTradingRules_1.insert(PriceType_14.getString());
    FIX::RoundLot RoundLot_1;
    RoundLot_1.setString("13121472");
    noMarketSegments_0_1.set(RoundLot_1);
    BaseTradingRules_1.insert(RoundLot_1.getString());
    FIX::TradingCurrency TradingCurrency_1("CHF");
    noMarketSegments_0_1.set(TradingCurrency_1);
    BaseTradingRules_1.insert(TradingCurrency_1.getString());
    all_values.push_back(BaseTradingRules_1);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_3;
      FIX::LotType LotType_3('2');
      noLotTypeRules_1_1_0.set(LotType_3);
      LotTypeRules_NoLotTypeRules_3.insert(LotType_3.getString());
      FIX::MinLotSize MinLotSize_3;
      MinLotSize_3.setString("7056236");
      noLotTypeRules_1_1_0.set(MinLotSize_3);
      LotTypeRules_NoLotTypeRules_3.insert(MinLotSize_3.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_3);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_4;
      FIX::LotType LotType_4('3');
      noLotTypeRules_1_1_1.set(LotType_4);
      LotTypeRules_NoLotTypeRules_4.insert(LotType_4.getString());
      FIX::MinLotSize MinLotSize_4;
      MinLotSize_4.setString("15800428");
      noLotTypeRules_1_1_1.set(MinLotSize_4);
      LotTypeRules_NoLotTypeRules_4.insert(MinLotSize_4.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_4);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_1;
    FIX::HighLimitPrice HighLimitPrice_1;
    HighLimitPrice_1.setString("381505");
    noMarketSegments_0_1.set(HighLimitPrice_1);
    PriceLimits_1.insert(HighLimitPrice_1.getString());
    FIX::LowLimitPrice LowLimitPrice_1;
    LowLimitPrice_1.setString("10036861");
    noMarketSegments_0_1.set(LowLimitPrice_1);
    PriceLimits_1.insert(LowLimitPrice_1.getString());
    FIX::PriceLimitType PriceLimitType_1(0);
    noMarketSegments_0_1.set(PriceLimitType_1);
    PriceLimits_1.insert(PriceLimitType_1.getString());
    FIX::TradingReferencePrice TradingReferencePrice_1;
    TradingReferencePrice_1.setString("15891421");
    noMarketSegments_0_1.set(TradingReferencePrice_1);
    PriceLimits_1.insert(TradingReferencePrice_1.getString());
    all_values.push_back(PriceLimits_1);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_3;
      FIX::EndTickPriceRange EndTickPriceRange_3;
      EndTickPriceRange_3.setString("904193");
      noTickRules_1_1_0.set(EndTickPriceRange_3);
      TickRules_NoTickRules_3.insert(EndTickPriceRange_3.getString());
      FIX::StartTickPriceRange StartTickPriceRange_3;
      StartTickPriceRange_3.setString("16189396");
      noTickRules_1_1_0.set(StartTickPriceRange_3);
      TickRules_NoTickRules_3.insert(StartTickPriceRange_3.getString());
      FIX::TickIncrement TickIncrement_3;
      TickIncrement_3.setString("6664226");
      noTickRules_1_1_0.set(TickIncrement_3);
      TickRules_NoTickRules_3.insert(TickIncrement_3.getString());
      FIX::TickRuleType TickRuleType_3(4);
      noTickRules_1_1_0.set(TickRuleType_3);
      TickRules_NoTickRules_3.insert(TickRuleType_3.getString());
      all_values.push_back(TickRules_NoTickRules_3);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_4;
      FIX::EndTickPriceRange EndTickPriceRange_4;
      EndTickPriceRange_4.setString("4795203");
      noTickRules_1_1_1.set(EndTickPriceRange_4);
      TickRules_NoTickRules_4.insert(EndTickPriceRange_4.getString());
      FIX::StartTickPriceRange StartTickPriceRange_4;
      StartTickPriceRange_4.setString("19027311");
      noTickRules_1_1_1.set(StartTickPriceRange_4);
      TickRules_NoTickRules_4.insert(StartTickPriceRange_4.getString());
      FIX::TickIncrement TickIncrement_4;
      TickIncrement_4.setString("71498");
      noTickRules_1_1_1.set(TickIncrement_4);
      TickRules_NoTickRules_4.insert(TickIncrement_4.getString());
      FIX::TickRuleType TickRuleType_4(3);
      noTickRules_1_1_1.set(TickRuleType_4);
      TickRules_NoTickRules_4.insert(TickRuleType_4.getString());
      all_values.push_back(TickRules_NoTickRules_4);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_1_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_5;
      FIX::EndTickPriceRange EndTickPriceRange_5;
      EndTickPriceRange_5.setString("6364533");
      noTickRules_1_1_2.set(EndTickPriceRange_5);
      TickRules_NoTickRules_5.insert(EndTickPriceRange_5.getString());
      FIX::StartTickPriceRange StartTickPriceRange_5;
      StartTickPriceRange_5.setString("19093283");
      noTickRules_1_1_2.set(StartTickPriceRange_5);
      TickRules_NoTickRules_5.insert(StartTickPriceRange_5.getString());
      FIX::TickIncrement TickIncrement_5;
      TickIncrement_5.setString("17266367");
      noTickRules_1_1_2.set(TickIncrement_5);
      TickRules_NoTickRules_5.insert(TickIncrement_5.getString());
      FIX::TickRuleType TickRuleType_5(2);
      noTickRules_1_1_2.set(TickRuleType_5);
      TickRules_NoTickRules_5.insert(TickRuleType_5.getString());
      all_values.push_back(TickRules_NoTickRules_5);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_3;
      FIX::NestedInstrAttribType NestedInstrAttribType_3(1648996958);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_3);
      NestedInstrumentAttribute_NoNestedInstrAttrib_3.insert(NestedInstrAttribType_3.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_3("STRING_1961971777");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_3);
      NestedInstrumentAttribute_NoNestedInstrAttrib_3.insert(NestedInstrAttribValue_3.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_3);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_1;
      FIX::TradingSessionID TradingSessionID_18("STRING_1");
      noTradingSessionRules_1_1_0.set(TradingSessionID_18);
      TradingSessionRulesGrp_NoTradingSessionRules_1.insert(TradingSessionID_18.getString());
      FIX::TradingSessionSubID TradingSessionSubID_18("STRING_2");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_18);
      TradingSessionRulesGrp_NoTradingSessionRules_1.insert(TradingSessionSubID_18.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_1);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_1;
        FIX::ExecInstValue ExecInstValue_1('2');
        noExecInstRules_1_0_2_0.set(ExecInstValue_1);
        ExecInstRules_NoExecInstRules_1.insert(ExecInstValue_1.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_1);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_2;
        FIX::MDBookType MDBookType_2(3);
        noMDFeedTypes_1_0_2_0.set(MDBookType_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MDBookType_2.getString());
        FIX::MDFeedType MDFeedType_2("STRING_992134069");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MDFeedType_2.getString());
        FIX::MarketDepth MarketDepth_2(1102262603);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MarketDepth_2.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_2);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_3;
        FIX::MDBookType MDBookType_3(1);
        noMDFeedTypes_1_0_2_1.set(MDBookType_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MDBookType_3.getString());
        FIX::MDFeedType MDFeedType_3("STRING_424693279");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MDFeedType_3.getString());
        FIX::MarketDepth MarketDepth_3(1140413133);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MarketDepth_3.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_3);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_4;
        FIX::MDBookType MDBookType_4(3);
        noMDFeedTypes_1_0_2_2.set(MDBookType_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MDBookType_4.getString());
        FIX::MDFeedType MDFeedType_4("STRING_384381773");
        noMDFeedTypes_1_0_2_2.set(MDFeedType_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MDFeedType_4.getString());
        FIX::MarketDepth MarketDepth_4(582071639);
        noMDFeedTypes_1_0_2_2.set(MarketDepth_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MarketDepth_4.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_4);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_3;
        FIX::MatchAlgorithm MatchAlgorithm_3("STRING_474801143");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_3);
        MatchRules_NoMatchRules_3.insert(MatchAlgorithm_3.getString());
        FIX::MatchType MatchType_6("STRING_M4");
        noMatchRules_1_0_2_0.set(MatchType_6);
        MatchRules_NoMatchRules_3.insert(MatchType_6.getString());
        all_values.push_back(MatchRules_NoMatchRules_3);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_4;
        FIX::MatchAlgorithm MatchAlgorithm_4("STRING_1858483343");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_4);
        MatchRules_NoMatchRules_4.insert(MatchAlgorithm_4.getString());
        FIX::MatchType MatchType_7("STRING_8");
        noMatchRules_1_0_2_1.set(MatchType_7);
        MatchRules_NoMatchRules_4.insert(MatchType_7.getString());
        all_values.push_back(MatchRules_NoMatchRules_4);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_5;
        FIX::MatchAlgorithm MatchAlgorithm_5("STRING_533047998");
        noMatchRules_1_0_2_2.set(MatchAlgorithm_5);
        MatchRules_NoMatchRules_5.insert(MatchAlgorithm_5.getString());
        FIX::MatchType MatchType_8("STRING_A3");
        noMatchRules_1_0_2_2.set(MatchType_8);
        MatchRules_NoMatchRules_5.insert(MatchType_8.getString());
        all_values.push_back(MatchRules_NoMatchRules_5);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_3;
        FIX::OrdType OrdType_4('C');
        noOrdTypeRules_1_0_2_0.set(OrdType_4);
        OrdTypeRules_NoOrdTypeRules_3.insert(OrdType_4.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_3);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_1;
        FIX::TimeInForce TimeInForce_2('6');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_2);
        TimeInForceRules_NoTimeInForceRules_1.insert(TimeInForce_2.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_1);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_2;
        FIX::TimeInForce TimeInForce_3('4');
        noTimeInForceRules_1_0_2_1.set(TimeInForce_3);
        TimeInForceRules_NoTimeInForceRules_2.insert(TimeInForce_3.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_2);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_3;
        FIX::TimeInForce TimeInForce_4('4');
        noTimeInForceRules_1_0_2_2.set(TimeInForce_4);
        TimeInForceRules_NoTimeInForceRules_3.insert(TimeInForce_4.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_3);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_2);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_2;
      FIX::TradingSessionID TradingSessionID_19("STRING_2");
      noTradingSessionRules_1_1_1.set(TradingSessionID_19);
      TradingSessionRulesGrp_NoTradingSessionRules_2.insert(TradingSessionID_19.getString());
      FIX::TradingSessionSubID TradingSessionSubID_19("STRING_5");
      noTradingSessionRules_1_1_1.set(TradingSessionSubID_19);
      TradingSessionRulesGrp_NoTradingSessionRules_2.insert(TradingSessionSubID_19.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_2);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_2;
        FIX::ExecInstValue ExecInstValue_2('1');
        noExecInstRules_1_1_2_0.set(ExecInstValue_2);
        ExecInstRules_NoExecInstRules_2.insert(ExecInstValue_2.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_2);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_5;
        FIX::MDBookType MDBookType_5(3);
        noMDFeedTypes_1_1_2_0.set(MDBookType_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MDBookType_5.getString());
        FIX::MDFeedType MDFeedType_5("STRING_105262904");
        noMDFeedTypes_1_1_2_0.set(MDFeedType_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MDFeedType_5.getString());
        FIX::MarketDepth MarketDepth_5(1450720572);
        noMDFeedTypes_1_1_2_0.set(MarketDepth_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MarketDepth_5.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_5);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_6;
        FIX::MatchAlgorithm MatchAlgorithm_6("STRING_1432265005");
        noMatchRules_1_1_2_0.set(MatchAlgorithm_6);
        MatchRules_NoMatchRules_6.insert(MatchAlgorithm_6.getString());
        FIX::MatchType MatchType_9("STRING_S4");
        noMatchRules_1_1_2_0.set(MatchType_9);
        MatchRules_NoMatchRules_6.insert(MatchType_9.getString());
        all_values.push_back(MatchRules_NoMatchRules_6);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_7;
        FIX::MatchAlgorithm MatchAlgorithm_7("STRING_571796401");
        noMatchRules_1_1_2_1.set(MatchAlgorithm_7);
        MatchRules_NoMatchRules_7.insert(MatchAlgorithm_7.getString());
        FIX::MatchType MatchType_10("STRING_M5");
        noMatchRules_1_1_2_1.set(MatchType_10);
        MatchRules_NoMatchRules_7.insert(MatchType_10.getString());
        all_values.push_back(MatchRules_NoMatchRules_7);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_4;
        FIX::OrdType OrdType_5('Q');
        noOrdTypeRules_1_1_2_0.set(OrdType_5);
        OrdTypeRules_NoOrdTypeRules_4.insert(OrdType_5.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_4);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_4;
        FIX::TimeInForce TimeInForce_5('5');
        noTimeInForceRules_1_1_2_0.set(TimeInForce_5);
        TimeInForceRules_NoTimeInForceRules_4.insert(TimeInForce_5.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_4);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_5;
        FIX::TimeInForce TimeInForce_6('6');
        noTimeInForceRules_1_1_2_1.set(TimeInForce_6);
        TimeInForceRules_NoTimeInForceRules_5.insert(TimeInForce_6.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_5);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_6;
        FIX::TimeInForce TimeInForce_7('2');
        noTimeInForceRules_1_1_2_2.set(TimeInForce_7);
        TimeInForceRules_NoTimeInForceRules_6.insert(TimeInForce_7.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_6);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_2);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_3;
      FIX::TradingSessionID TradingSessionID_20("STRING_5");
      noTradingSessionRules_1_1_2.set(TradingSessionID_20);
      TradingSessionRulesGrp_NoTradingSessionRules_3.insert(TradingSessionID_20.getString());
      FIX::TradingSessionSubID TradingSessionSubID_20("STRING_1");
      noTradingSessionRules_1_1_2.set(TradingSessionSubID_20);
      TradingSessionRulesGrp_NoTradingSessionRules_3.insert(TradingSessionSubID_20.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_3);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_3;
        FIX::ExecInstValue ExecInstValue_3('1');
        noExecInstRules_1_2_2_0.set(ExecInstValue_3);
        ExecInstRules_NoExecInstRules_3.insert(ExecInstValue_3.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_3);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_2.addGroup(noExecInstRules_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_4;
        FIX::ExecInstValue ExecInstValue_4('7');
        noExecInstRules_1_2_2_1.set(ExecInstValue_4);
        ExecInstRules_NoExecInstRules_4.insert(ExecInstValue_4.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_4);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_2.addGroup(noExecInstRules_1_2_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_6;
        FIX::MDBookType MDBookType_6(1);
        noMDFeedTypes_1_2_2_0.set(MDBookType_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MDBookType_6.getString());
        FIX::MDFeedType MDFeedType_6("STRING_1165133917");
        noMDFeedTypes_1_2_2_0.set(MDFeedType_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MDFeedType_6.getString());
        FIX::MarketDepth MarketDepth_6(1403260854);
        noMDFeedTypes_1_2_2_0.set(MarketDepth_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MarketDepth_6.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_6);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_7;
        FIX::MDBookType MDBookType_7(2);
        noMDFeedTypes_1_2_2_1.set(MDBookType_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MDBookType_7.getString());
        FIX::MDFeedType MDFeedType_7("STRING_1176047781");
        noMDFeedTypes_1_2_2_1.set(MDFeedType_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MDFeedType_7.getString());
        FIX::MarketDepth MarketDepth_7(1351866080);
        noMDFeedTypes_1_2_2_1.set(MarketDepth_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MarketDepth_7.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_7);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_8;
        FIX::MatchAlgorithm MatchAlgorithm_8("STRING_688474956");
        noMatchRules_1_2_2_0.set(MatchAlgorithm_8);
        MatchRules_NoMatchRules_8.insert(MatchAlgorithm_8.getString());
        FIX::MatchType MatchType_11("STRING_6");
        noMatchRules_1_2_2_0.set(MatchType_11);
        MatchRules_NoMatchRules_8.insert(MatchType_11.getString());
        all_values.push_back(MatchRules_NoMatchRules_8);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_2.addGroup(noMatchRules_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_9;
        FIX::MatchAlgorithm MatchAlgorithm_9("STRING_1827975310");
        noMatchRules_1_2_2_1.set(MatchAlgorithm_9);
        MatchRules_NoMatchRules_9.insert(MatchAlgorithm_9.getString());
        FIX::MatchType MatchType_12("STRING_AQ");
        noMatchRules_1_2_2_1.set(MatchType_12);
        MatchRules_NoMatchRules_9.insert(MatchType_12.getString());
        all_values.push_back(MatchRules_NoMatchRules_9);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_2.addGroup(noMatchRules_1_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_2_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_10;
        FIX::MatchAlgorithm MatchAlgorithm_10("STRING_187854273");
        noMatchRules_1_2_2_2.set(MatchAlgorithm_10);
        MatchRules_NoMatchRules_10.insert(MatchAlgorithm_10.getString());
        FIX::MatchType MatchType_13("STRING_M2");
        noMatchRules_1_2_2_2.set(MatchType_13);
        MatchRules_NoMatchRules_10.insert(MatchType_13.getString());
        all_values.push_back(MatchRules_NoMatchRules_10);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_2.addGroup(noMatchRules_1_2_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_5;
        FIX::OrdType OrdType_6('8');
        noOrdTypeRules_1_2_2_0.set(OrdType_6);
        OrdTypeRules_NoOrdTypeRules_5.insert(OrdType_6.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_5);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_6;
        FIX::OrdType OrdType_7('C');
        noOrdTypeRules_1_2_2_1.set(OrdType_7);
        OrdTypeRules_NoOrdTypeRules_6.insert(OrdType_7.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_6);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_7;
        FIX::OrdType OrdType_8('K');
        noOrdTypeRules_1_2_2_2.set(OrdType_8);
        OrdTypeRules_NoOrdTypeRules_7.insert(OrdType_8.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_7);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_7;
        FIX::TimeInForce TimeInForce_8('5');
        noTimeInForceRules_1_2_2_0.set(TimeInForce_8);
        TimeInForceRules_NoTimeInForceRules_7.insert(TimeInForce_8.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_7);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_2.addGroup(noTimeInForceRules_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_8;
        FIX::TimeInForce TimeInForce_9('6');
        noTimeInForceRules_1_2_2_1.set(TimeInForce_9);
        TimeInForceRules_NoTimeInForceRules_8.insert(TimeInForce_9.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_8);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_2.addGroup(noTimeInForceRules_1_2_2_1);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_2;
      FIX::EndStrikePxRange EndStrikePxRange_2;
      EndStrikePxRange_2.setString("6817045");
      noStrikeRules_1_1_0.set(EndStrikePxRange_2);
      StrikeRules_NoStrikeRules_2.insert(EndStrikePxRange_2.getString());
      FIX::StartStrikePxRange StartStrikePxRange_2;
      StartStrikePxRange_2.setString("11584351");
      noStrikeRules_1_1_0.set(StartStrikePxRange_2);
      StrikeRules_NoStrikeRules_2.insert(StartStrikePxRange_2.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_2(2088191534);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeExerciseStyle_2.getString());
      FIX::StrikeIncrement StrikeIncrement_2;
      StrikeIncrement_2.setString("6575344");
      noStrikeRules_1_1_0.set(StrikeIncrement_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeIncrement_2.getString());
      FIX::StrikeRuleID StrikeRuleID_2("STRING_590198702");
      noStrikeRules_1_1_0.set(StrikeRuleID_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeRuleID_2.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_2);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_4;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_4("MONTHYEAR_344363982");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_4);
        MaturityRules_NoMaturityRules_4.insert(EndMaturityMonthYear_4.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_4(2);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearFormat_4.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_4(874406164);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearIncrement_4.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_4(0);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearIncrementUnits_4.getString());
        FIX::MaturityRuleID MaturityRuleID_4("STRING_1596850430");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityRuleID_4.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_4("MONTHYEAR_2039540081");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_4);
        MaturityRules_NoMaturityRules_4.insert(StartMaturityMonthYear_4.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_4);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_5;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_5("MONTHYEAR_900701546");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_5);
        MaturityRules_NoMaturityRules_5.insert(EndMaturityMonthYear_5.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_5(1);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearFormat_5.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_5(1068104214);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearIncrement_5.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_5(3);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearIncrementUnits_5.getString());
        FIX::MaturityRuleID MaturityRuleID_5("STRING_714671816");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityRuleID_5.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_5("MONTHYEAR_1756579171");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_5);
        MaturityRules_NoMaturityRules_5.insert(StartMaturityMonthYear_5.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_5);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_6;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_6("MONTHYEAR_1220043414");
        noMaturityRules_1_0_2_2.set(EndMaturityMonthYear_6);
        MaturityRules_NoMaturityRules_6.insert(EndMaturityMonthYear_6.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_6(1);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearFormat_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearFormat_6.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_6(1491896096);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrement_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearIncrement_6.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_6(0);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrementUnits_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearIncrementUnits_6.getString());
        FIX::MaturityRuleID MaturityRuleID_6("STRING_180918044");
        noMaturityRules_1_0_2_2.set(MaturityRuleID_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityRuleID_6.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_6("MONTHYEAR_530449946");
        noMaturityRules_1_0_2_2.set(StartMaturityMonthYear_6);
        MaturityRules_NoMaturityRules_6.insert(StartMaturityMonthYear_6.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_6);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_2);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_2;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_2;
    FIX::MarketID MarketID_2("EXCHANGE_1065285759");
    noMarketSegments_0_2.set(MarketID_2);
    MarketSegmentGrp_NoMarketSegments_2.insert(MarketID_2.getString());
    FIX::MarketSegmentID MarketSegmentID_2("STRING_1398937615");
    noMarketSegments_0_2.set(MarketSegmentID_2);
    MarketSegmentGrp_NoMarketSegments_2.insert(MarketSegmentID_2.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_2);
    all_compo_names.insert("MarketSegmentGrp.NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_2;
    FIX::ExpirationCycle ExpirationCycle_2(1);
    noMarketSegments_0_2.set(ExpirationCycle_2);
    BaseTradingRules_2.insert(ExpirationCycle_2.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_2(0);
    noMarketSegments_0_2.set(ImpliedMarketIndicator_2);
    BaseTradingRules_2.insert(ImpliedMarketIndicator_2.getString());
    FIX::MaxPriceVariation MaxPriceVariation_2;
    MaxPriceVariation_2.setString("11493893");
    noMarketSegments_0_2.set(MaxPriceVariation_2);
    BaseTradingRules_2.insert(MaxPriceVariation_2.getString());
    FIX::MaxTradeVol MaxTradeVol_2;
    MaxTradeVol_2.setString("20658475");
    noMarketSegments_0_2.set(MaxTradeVol_2);
    BaseTradingRules_2.insert(MaxTradeVol_2.getString());
    FIX::MinTradeVol MinTradeVol_2;
    MinTradeVol_2.setString("10883805");
    noMarketSegments_0_2.set(MinTradeVol_2);
    BaseTradingRules_2.insert(MinTradeVol_2.getString());
    FIX::MultilegModel MultilegModel_2(2);
    noMarketSegments_0_2.set(MultilegModel_2);
    BaseTradingRules_2.insert(MultilegModel_2.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_2(1);
    noMarketSegments_0_2.set(MultilegPriceMethod_2);
    BaseTradingRules_2.insert(MultilegPriceMethod_2.getString());
    FIX::PriceType PriceType_15(4);
    noMarketSegments_0_2.set(PriceType_15);
    BaseTradingRules_2.insert(PriceType_15.getString());
    FIX::RoundLot RoundLot_2;
    RoundLot_2.setString("3411447");
    noMarketSegments_0_2.set(RoundLot_2);
    BaseTradingRules_2.insert(RoundLot_2.getString());
    FIX::TradingCurrency TradingCurrency_2("CAN");
    noMarketSegments_0_2.set(TradingCurrency_2);
    BaseTradingRules_2.insert(TradingCurrency_2.getString());
    all_values.push_back(BaseTradingRules_2);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_5;
      FIX::LotType LotType_5('2');
      noLotTypeRules_2_1_0.set(LotType_5);
      LotTypeRules_NoLotTypeRules_5.insert(LotType_5.getString());
      FIX::MinLotSize MinLotSize_5;
      MinLotSize_5.setString("20445276");
      noLotTypeRules_2_1_0.set(MinLotSize_5);
      LotTypeRules_NoLotTypeRules_5.insert(MinLotSize_5.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_5);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_2;
    FIX::HighLimitPrice HighLimitPrice_2;
    HighLimitPrice_2.setString("1829494");
    noMarketSegments_0_2.set(HighLimitPrice_2);
    PriceLimits_2.insert(HighLimitPrice_2.getString());
    FIX::LowLimitPrice LowLimitPrice_2;
    LowLimitPrice_2.setString("11344905");
    noMarketSegments_0_2.set(LowLimitPrice_2);
    PriceLimits_2.insert(LowLimitPrice_2.getString());
    FIX::PriceLimitType PriceLimitType_2(0);
    noMarketSegments_0_2.set(PriceLimitType_2);
    PriceLimits_2.insert(PriceLimitType_2.getString());
    FIX::TradingReferencePrice TradingReferencePrice_2;
    TradingReferencePrice_2.setString("10836509");
    noMarketSegments_0_2.set(TradingReferencePrice_2);
    PriceLimits_2.insert(TradingReferencePrice_2.getString());
    all_values.push_back(PriceLimits_2);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_6;
      FIX::EndTickPriceRange EndTickPriceRange_6;
      EndTickPriceRange_6.setString("8572046");
      noTickRules_2_1_0.set(EndTickPriceRange_6);
      TickRules_NoTickRules_6.insert(EndTickPriceRange_6.getString());
      FIX::StartTickPriceRange StartTickPriceRange_6;
      StartTickPriceRange_6.setString("11887349");
      noTickRules_2_1_0.set(StartTickPriceRange_6);
      TickRules_NoTickRules_6.insert(StartTickPriceRange_6.getString());
      FIX::TickIncrement TickIncrement_6;
      TickIncrement_6.setString("4949282");
      noTickRules_2_1_0.set(TickIncrement_6);
      TickRules_NoTickRules_6.insert(TickIncrement_6.getString());
      FIX::TickRuleType TickRuleType_6(1);
      noTickRules_2_1_0.set(TickRuleType_6);
      TickRules_NoTickRules_6.insert(TickRuleType_6.getString());
      all_values.push_back(TickRules_NoTickRules_6);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_2_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_7;
      FIX::EndTickPriceRange EndTickPriceRange_7;
      EndTickPriceRange_7.setString("2612947");
      noTickRules_2_1_1.set(EndTickPriceRange_7);
      TickRules_NoTickRules_7.insert(EndTickPriceRange_7.getString());
      FIX::StartTickPriceRange StartTickPriceRange_7;
      StartTickPriceRange_7.setString("8900916");
      noTickRules_2_1_1.set(StartTickPriceRange_7);
      TickRules_NoTickRules_7.insert(StartTickPriceRange_7.getString());
      FIX::TickIncrement TickIncrement_7;
      TickIncrement_7.setString("19581962");
      noTickRules_2_1_1.set(TickIncrement_7);
      TickRules_NoTickRules_7.insert(TickIncrement_7.getString());
      FIX::TickRuleType TickRuleType_7(4);
      noTickRules_2_1_1.set(TickRuleType_7);
      TickRules_NoTickRules_7.insert(TickRuleType_7.getString());
      all_values.push_back(TickRules_NoTickRules_7);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_2_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_8;
      FIX::EndTickPriceRange EndTickPriceRange_8;
      EndTickPriceRange_8.setString("10710097");
      noTickRules_2_1_2.set(EndTickPriceRange_8);
      TickRules_NoTickRules_8.insert(EndTickPriceRange_8.getString());
      FIX::StartTickPriceRange StartTickPriceRange_8;
      StartTickPriceRange_8.setString("3411625");
      noTickRules_2_1_2.set(StartTickPriceRange_8);
      TickRules_NoTickRules_8.insert(StartTickPriceRange_8.getString());
      FIX::TickIncrement TickIncrement_8;
      TickIncrement_8.setString("5869945");
      noTickRules_2_1_2.set(TickIncrement_8);
      TickRules_NoTickRules_8.insert(TickIncrement_8.getString());
      FIX::TickRuleType TickRuleType_8(0);
      noTickRules_2_1_2.set(TickRuleType_8);
      TickRules_NoTickRules_8.insert(TickRuleType_8.getString());
      all_values.push_back(TickRules_NoTickRules_8);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_4;
      FIX::NestedInstrAttribType NestedInstrAttribType_4(1881464743);
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribType_4);
      NestedInstrumentAttribute_NoNestedInstrAttrib_4.insert(NestedInstrAttribType_4.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_4("STRING_1471853092");
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribValue_4);
      NestedInstrumentAttribute_NoNestedInstrAttrib_4.insert(NestedInstrAttribValue_4.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_4);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_5;
      FIX::NestedInstrAttribType NestedInstrAttribType_5(123901282);
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribType_5);
      NestedInstrumentAttribute_NoNestedInstrAttrib_5.insert(NestedInstrAttribType_5.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_5("STRING_822361688");
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribValue_5);
      NestedInstrumentAttribute_NoNestedInstrAttrib_5.insert(NestedInstrAttribValue_5.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_5);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_6;
      FIX::NestedInstrAttribType NestedInstrAttribType_6(1155463405);
      noNestedInstrAttrib_2_1_2.set(NestedInstrAttribType_6);
      NestedInstrumentAttribute_NoNestedInstrAttrib_6.insert(NestedInstrAttribType_6.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_6("STRING_1200700350");
      noNestedInstrAttrib_2_1_2.set(NestedInstrAttribValue_6);
      NestedInstrumentAttribute_NoNestedInstrAttrib_6.insert(NestedInstrAttribValue_6.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_6);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_4;
      FIX::TradingSessionID TradingSessionID_21("STRING_6");
      noTradingSessionRules_2_1_0.set(TradingSessionID_21);
      TradingSessionRulesGrp_NoTradingSessionRules_4.insert(TradingSessionID_21.getString());
      FIX::TradingSessionSubID TradingSessionSubID_21("STRING_5");
      noTradingSessionRules_2_1_0.set(TradingSessionSubID_21);
      TradingSessionRulesGrp_NoTradingSessionRules_4.insert(TradingSessionSubID_21.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_4);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_5;
        FIX::ExecInstValue ExecInstValue_5('3');
        noExecInstRules_2_0_2_0.set(ExecInstValue_5);
        ExecInstRules_NoExecInstRules_5.insert(ExecInstValue_5.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_5);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_6;
        FIX::ExecInstValue ExecInstValue_6('2');
        noExecInstRules_2_0_2_1.set(ExecInstValue_6);
        ExecInstRules_NoExecInstRules_6.insert(ExecInstValue_6.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_6);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_7;
        FIX::ExecInstValue ExecInstValue_7('7');
        noExecInstRules_2_0_2_2.set(ExecInstValue_7);
        ExecInstRules_NoExecInstRules_7.insert(ExecInstValue_7.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_7);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_8;
        FIX::MDBookType MDBookType_8(1);
        noMDFeedTypes_2_0_2_0.set(MDBookType_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MDBookType_8.getString());
        FIX::MDFeedType MDFeedType_8("STRING_560232499");
        noMDFeedTypes_2_0_2_0.set(MDFeedType_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MDFeedType_8.getString());
        FIX::MarketDepth MarketDepth_8(1301233616);
        noMDFeedTypes_2_0_2_0.set(MarketDepth_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MarketDepth_8.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_8);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_11;
        FIX::MatchAlgorithm MatchAlgorithm_11("STRING_1417437167");
        noMatchRules_2_0_2_0.set(MatchAlgorithm_11);
        MatchRules_NoMatchRules_11.insert(MatchAlgorithm_11.getString());
        FIX::MatchType MatchType_14("STRING_AQ");
        noMatchRules_2_0_2_0.set(MatchType_14);
        MatchRules_NoMatchRules_11.insert(MatchType_14.getString());
        all_values.push_back(MatchRules_NoMatchRules_11);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_8;
        FIX::OrdType OrdType_9('G');
        noOrdTypeRules_2_0_2_0.set(OrdType_9);
        OrdTypeRules_NoOrdTypeRules_8.insert(OrdType_9.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_8);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_9;
        FIX::OrdType OrdType_10('9');
        noOrdTypeRules_2_0_2_1.set(OrdType_10);
        OrdTypeRules_NoOrdTypeRules_9.insert(OrdType_10.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_9);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_10;
        FIX::OrdType OrdType_11('M');
        noOrdTypeRules_2_0_2_2.set(OrdType_11);
        OrdTypeRules_NoOrdTypeRules_10.insert(OrdType_11.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_10);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_9;
        FIX::TimeInForce TimeInForce_10('6');
        noTimeInForceRules_2_0_2_0.set(TimeInForce_10);
        TimeInForceRules_NoTimeInForceRules_9.insert(TimeInForce_10.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_9);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_10;
        FIX::TimeInForce TimeInForce_11('8');
        noTimeInForceRules_2_0_2_1.set(TimeInForce_11);
        TimeInForceRules_NoTimeInForceRules_10.insert(TimeInForce_11.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_10);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_1);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_5;
      FIX::TradingSessionID TradingSessionID_22("STRING_2");
      noTradingSessionRules_2_1_1.set(TradingSessionID_22);
      TradingSessionRulesGrp_NoTradingSessionRules_5.insert(TradingSessionID_22.getString());
      FIX::TradingSessionSubID TradingSessionSubID_22("STRING_5");
      noTradingSessionRules_2_1_1.set(TradingSessionSubID_22);
      TradingSessionRulesGrp_NoTradingSessionRules_5.insert(TradingSessionSubID_22.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_5);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_8;
        FIX::ExecInstValue ExecInstValue_8('9');
        noExecInstRules_2_1_2_0.set(ExecInstValue_8);
        ExecInstRules_NoExecInstRules_8.insert(ExecInstValue_8.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_8);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_9;
        FIX::MDBookType MDBookType_9(3);
        noMDFeedTypes_2_1_2_0.set(MDBookType_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MDBookType_9.getString());
        FIX::MDFeedType MDFeedType_9("STRING_217567596");
        noMDFeedTypes_2_1_2_0.set(MDFeedType_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MDFeedType_9.getString());
        FIX::MarketDepth MarketDepth_9(1268825670);
        noMDFeedTypes_2_1_2_0.set(MarketDepth_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MarketDepth_9.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_9);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_10;
        FIX::MDBookType MDBookType_10(3);
        noMDFeedTypes_2_1_2_1.set(MDBookType_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MDBookType_10.getString());
        FIX::MDFeedType MDFeedType_10("STRING_1418267946");
        noMDFeedTypes_2_1_2_1.set(MDFeedType_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MDFeedType_10.getString());
        FIX::MarketDepth MarketDepth_10(972792189);
        noMDFeedTypes_2_1_2_1.set(MarketDepth_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MarketDepth_10.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_10);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_12;
        FIX::MatchAlgorithm MatchAlgorithm_12("STRING_2138482418");
        noMatchRules_2_1_2_0.set(MatchAlgorithm_12);
        MatchRules_NoMatchRules_12.insert(MatchAlgorithm_12.getString());
        FIX::MatchType MatchType_15("STRING_M4");
        noMatchRules_2_1_2_0.set(MatchType_15);
        MatchRules_NoMatchRules_12.insert(MatchType_15.getString());
        all_values.push_back(MatchRules_NoMatchRules_12);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_13;
        FIX::MatchAlgorithm MatchAlgorithm_13("STRING_1667201761");
        noMatchRules_2_1_2_1.set(MatchAlgorithm_13);
        MatchRules_NoMatchRules_13.insert(MatchAlgorithm_13.getString());
        FIX::MatchType MatchType_16("STRING_M3");
        noMatchRules_2_1_2_1.set(MatchType_16);
        MatchRules_NoMatchRules_13.insert(MatchType_16.getString());
        all_values.push_back(MatchRules_NoMatchRules_13);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_11;
        FIX::OrdType OrdType_12('K');
        noOrdTypeRules_2_1_2_0.set(OrdType_12);
        OrdTypeRules_NoOrdTypeRules_11.insert(OrdType_12.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_11);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_11;
        FIX::TimeInForce TimeInForce_12('9');
        noTimeInForceRules_2_1_2_0.set(TimeInForce_12);
        TimeInForceRules_NoTimeInForceRules_11.insert(TimeInForce_12.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_11);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_12;
        FIX::TimeInForce TimeInForce_13('9');
        noTimeInForceRules_2_1_2_1.set(TimeInForce_13);
        TimeInForceRules_NoTimeInForceRules_12.insert(TimeInForce_13.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_12);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_13;
        FIX::TimeInForce TimeInForce_14('7');
        noTimeInForceRules_2_1_2_2.set(TimeInForce_14);
        TimeInForceRules_NoTimeInForceRules_13.insert(TimeInForce_14.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_13);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_2);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_6;
      FIX::TradingSessionID TradingSessionID_23("STRING_6");
      noTradingSessionRules_2_1_2.set(TradingSessionID_23);
      TradingSessionRulesGrp_NoTradingSessionRules_6.insert(TradingSessionID_23.getString());
      FIX::TradingSessionSubID TradingSessionSubID_23("STRING_3");
      noTradingSessionRules_2_1_2.set(TradingSessionSubID_23);
      TradingSessionRulesGrp_NoTradingSessionRules_6.insert(TradingSessionSubID_23.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_6);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_9;
        FIX::ExecInstValue ExecInstValue_9('3');
        noExecInstRules_2_2_2_0.set(ExecInstValue_9);
        ExecInstRules_NoExecInstRules_9.insert(ExecInstValue_9.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_9);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_2.addGroup(noExecInstRules_2_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_11;
        FIX::MDBookType MDBookType_11(1);
        noMDFeedTypes_2_2_2_0.set(MDBookType_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MDBookType_11.getString());
        FIX::MDFeedType MDFeedType_11("STRING_1731418339");
        noMDFeedTypes_2_2_2_0.set(MDFeedType_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MDFeedType_11.getString());
        FIX::MarketDepth MarketDepth_11(2110287293);
        noMDFeedTypes_2_2_2_0.set(MarketDepth_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MarketDepth_11.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_11);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_2.addGroup(noMDFeedTypes_2_2_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_14;
        FIX::MatchAlgorithm MatchAlgorithm_14("STRING_1619547276");
        noMatchRules_2_2_2_0.set(MatchAlgorithm_14);
        MatchRules_NoMatchRules_14.insert(MatchAlgorithm_14.getString());
        FIX::MatchType MatchType_17("STRING_M2");
        noMatchRules_2_2_2_0.set(MatchType_17);
        MatchRules_NoMatchRules_14.insert(MatchType_17.getString());
        all_values.push_back(MatchRules_NoMatchRules_14);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_2.addGroup(noMatchRules_2_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_15;
        FIX::MatchAlgorithm MatchAlgorithm_15("STRING_1733774916");
        noMatchRules_2_2_2_1.set(MatchAlgorithm_15);
        MatchRules_NoMatchRules_15.insert(MatchAlgorithm_15.getString());
        FIX::MatchType MatchType_18("STRING_M5");
        noMatchRules_2_2_2_1.set(MatchType_18);
        MatchRules_NoMatchRules_15.insert(MatchType_18.getString());
        all_values.push_back(MatchRules_NoMatchRules_15);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_2.addGroup(noMatchRules_2_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_2_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_16;
        FIX::MatchAlgorithm MatchAlgorithm_16("STRING_1121750514");
        noMatchRules_2_2_2_2.set(MatchAlgorithm_16);
        MatchRules_NoMatchRules_16.insert(MatchAlgorithm_16.getString());
        FIX::MatchType MatchType_19("STRING_S4");
        noMatchRules_2_2_2_2.set(MatchType_19);
        MatchRules_NoMatchRules_16.insert(MatchType_19.getString());
        all_values.push_back(MatchRules_NoMatchRules_16);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_2.addGroup(noMatchRules_2_2_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_12;
        FIX::OrdType OrdType_13('I');
        noOrdTypeRules_2_2_2_0.set(OrdType_13);
        OrdTypeRules_NoOrdTypeRules_12.insert(OrdType_13.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_12);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_2.addGroup(noOrdTypeRules_2_2_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_14;
        FIX::TimeInForce TimeInForce_15('5');
        noTimeInForceRules_2_2_2_0.set(TimeInForce_15);
        TimeInForceRules_NoTimeInForceRules_14.insert(TimeInForce_15.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_14);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_2.addGroup(noTimeInForceRules_2_2_2_0);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_3;
      FIX::EndStrikePxRange EndStrikePxRange_3;
      EndStrikePxRange_3.setString("3353171");
      noStrikeRules_2_1_0.set(EndStrikePxRange_3);
      StrikeRules_NoStrikeRules_3.insert(EndStrikePxRange_3.getString());
      FIX::StartStrikePxRange StartStrikePxRange_3;
      StartStrikePxRange_3.setString("11925642");
      noStrikeRules_2_1_0.set(StartStrikePxRange_3);
      StrikeRules_NoStrikeRules_3.insert(StartStrikePxRange_3.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_3(915281292);
      noStrikeRules_2_1_0.set(StrikeExerciseStyle_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeExerciseStyle_3.getString());
      FIX::StrikeIncrement StrikeIncrement_3;
      StrikeIncrement_3.setString("20025189");
      noStrikeRules_2_1_0.set(StrikeIncrement_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeIncrement_3.getString());
      FIX::StrikeRuleID StrikeRuleID_3("STRING_1441417570");
      noStrikeRules_2_1_0.set(StrikeRuleID_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeRuleID_3.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_3);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_7;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_7("MONTHYEAR_1739819679");
        noMaturityRules_2_0_2_0.set(EndMaturityMonthYear_7);
        MaturityRules_NoMaturityRules_7.insert(EndMaturityMonthYear_7.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_7(1);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearFormat_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearFormat_7.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_7(269087364);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrement_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearIncrement_7.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_7(2);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrementUnits_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearIncrementUnits_7.getString());
        FIX::MaturityRuleID MaturityRuleID_7("STRING_1601448452");
        noMaturityRules_2_0_2_0.set(MaturityRuleID_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityRuleID_7.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_7("MONTHYEAR_569801993");
        noMaturityRules_2_0_2_0.set(StartMaturityMonthYear_7);
        MaturityRules_NoMaturityRules_7.insert(StartMaturityMonthYear_7.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_7);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_4;
      FIX::EndStrikePxRange EndStrikePxRange_4;
      EndStrikePxRange_4.setString("20118897");
      noStrikeRules_2_1_1.set(EndStrikePxRange_4);
      StrikeRules_NoStrikeRules_4.insert(EndStrikePxRange_4.getString());
      FIX::StartStrikePxRange StartStrikePxRange_4;
      StartStrikePxRange_4.setString("17878106");
      noStrikeRules_2_1_1.set(StartStrikePxRange_4);
      StrikeRules_NoStrikeRules_4.insert(StartStrikePxRange_4.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_4(606770333);
      noStrikeRules_2_1_1.set(StrikeExerciseStyle_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeExerciseStyle_4.getString());
      FIX::StrikeIncrement StrikeIncrement_4;
      StrikeIncrement_4.setString("18492049");
      noStrikeRules_2_1_1.set(StrikeIncrement_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeIncrement_4.getString());
      FIX::StrikeRuleID StrikeRuleID_4("STRING_236826916");
      noStrikeRules_2_1_1.set(StrikeRuleID_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeRuleID_4.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_4);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_8;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_8("MONTHYEAR_1812008617");
        noMaturityRules_2_1_2_0.set(EndMaturityMonthYear_8);
        MaturityRules_NoMaturityRules_8.insert(EndMaturityMonthYear_8.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_8(1);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearFormat_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearFormat_8.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_8(1810252300);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrement_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearIncrement_8.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_8(1);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrementUnits_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearIncrementUnits_8.getString());
        FIX::MaturityRuleID MaturityRuleID_8("STRING_1900765571");
        noMaturityRules_2_1_2_0.set(MaturityRuleID_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityRuleID_8.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_8("MONTHYEAR_1375982243");
        noMaturityRules_2_1_2_0.set(StartMaturityMonthYear_8);
        MaturityRules_NoMaturityRules_8.insert(StartMaturityMonthYear_8.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_8);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_9;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_9("MONTHYEAR_1461562015");
        noMaturityRules_2_1_2_1.set(EndMaturityMonthYear_9);
        MaturityRules_NoMaturityRules_9.insert(EndMaturityMonthYear_9.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_9(1);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearFormat_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearFormat_9.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_9(1159279782);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearIncrement_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearIncrement_9.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_9(0);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearIncrementUnits_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearIncrementUnits_9.getString());
        FIX::MaturityRuleID MaturityRuleID_9("STRING_1317786085");
        noMaturityRules_2_1_2_1.set(MaturityRuleID_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityRuleID_9.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_9("MONTHYEAR_213361619");
        noMaturityRules_2_1_2_1.set(StartMaturityMonthYear_9);
        MaturityRules_NoMaturityRules_9.insert(StartMaturityMonthYear_9.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_9);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_1);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_5;
      FIX::EndStrikePxRange EndStrikePxRange_5;
      EndStrikePxRange_5.setString("7730556");
      noStrikeRules_2_1_2.set(EndStrikePxRange_5);
      StrikeRules_NoStrikeRules_5.insert(EndStrikePxRange_5.getString());
      FIX::StartStrikePxRange StartStrikePxRange_5;
      StartStrikePxRange_5.setString("16531032");
      noStrikeRules_2_1_2.set(StartStrikePxRange_5);
      StrikeRules_NoStrikeRules_5.insert(StartStrikePxRange_5.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_5(1405925875);
      noStrikeRules_2_1_2.set(StrikeExerciseStyle_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeExerciseStyle_5.getString());
      FIX::StrikeIncrement StrikeIncrement_5;
      StrikeIncrement_5.setString("16883369");
      noStrikeRules_2_1_2.set(StrikeIncrement_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeIncrement_5.getString());
      FIX::StrikeRuleID StrikeRuleID_5("STRING_1508138506");
      noStrikeRules_2_1_2.set(StrikeRuleID_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeRuleID_5.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_5);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_10;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_10("MONTHYEAR_926663177");
        noMaturityRules_2_2_2_0.set(EndMaturityMonthYear_10);
        MaturityRules_NoMaturityRules_10.insert(EndMaturityMonthYear_10.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_10(2);
        noMaturityRules_2_2_2_0.set(MaturityMonthYearFormat_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearFormat_10.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_10(1634992081);
        noMaturityRules_2_2_2_0.set(MaturityMonthYearIncrement_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearIncrement_10.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_10(1);
        noMaturityRules_2_2_2_0.set(MaturityMonthYearIncrementUnits_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearIncrementUnits_10.getString());
        FIX::MaturityRuleID MaturityRuleID_10("STRING_1731344948");
        noMaturityRules_2_2_2_0.set(MaturityRuleID_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityRuleID_10.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_10("MONTHYEAR_1088956885");
        noMaturityRules_2_2_2_0.set(StartMaturityMonthYear_10);
        MaturityRules_NoMaturityRules_10.insert(StartMaturityMonthYear_10.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_10);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_2.addGroup(noMaturityRules_2_2_2_0);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_2);
    }
    msg.addGroup(noMarketSegments_0_2);
  }
  // RelSymDerivSecGrp
  // Group RelSymDerivSecGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_0;
    FIX::CorporateAction CorporateAction_0("MULTIPLECHARVALUE_J");
    noRelatedSym_0_0.set(CorporateAction_0);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(CorporateAction_0.getString());
    FIX::Currency Currency_14("EUR");
    noRelatedSym_0_0.set(Currency_14);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(Currency_14.getString());
    FIX::EncodedText EncodedText_29("DATA_1297472327");
    noRelatedSym_0_0.set(EncodedText_29);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(EncodedText_29.getString());
    FIX::EncodedTextLen EncodedTextLen_29(966110799);
    noRelatedSym_0_0.set(EncodedTextLen_29);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(EncodedTextLen_29.getString());
    FIX::RelSymTransactTime RelSymTransactTime_0(FIX::UTCTIMESTAMP(16, 13, 56, 9, 5, 2007));
    noRelatedSym_0_0.set(RelSymTransactTime_0);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(RelSymTransactTime_0.getString());
    FIX::Text Text_29("STRING_615887164");
    noRelatedSym_0_0.set(Text_29);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(Text_29.getString());
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_0);
    all_compo_names.insert("RelSymDerivSecGrp.NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_31;
      FIX::EncodedLegIssuer EncodedLegIssuer_31("DATA_466091273");
      noLegs_0_1_0.set(EncodedLegIssuer_31);
      InstrumentLeg_31.insert(EncodedLegIssuer_31.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_31(173058069);
      noLegs_0_1_0.set(EncodedLegIssuerLen_31);
      InstrumentLeg_31.insert(EncodedLegIssuerLen_31.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_31("DATA_524239627");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_31);
      InstrumentLeg_31.insert(EncodedLegSecurityDesc_31.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_31(679452892);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_31);
      InstrumentLeg_31.insert(EncodedLegSecurityDescLen_31.getString());
      FIX::LegCFICode LegCFICode_31("STRING_946113700");
      noLegs_0_1_0.set(LegCFICode_31);
      InstrumentLeg_31.insert(LegCFICode_31.getString());
      FIX::LegContractMultiplier LegContractMultiplier_31;
      LegContractMultiplier_31.setString("298592");
      noLegs_0_1_0.set(LegContractMultiplier_31);
      InstrumentLeg_31.insert(LegContractMultiplier_31.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_31(2085378767);
      noLegs_0_1_0.set(LegContractMultiplierUnit_31);
      InstrumentLeg_31.insert(LegContractMultiplierUnit_31.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_31("MONTHYEAR_486966975");
      noLegs_0_1_0.set(LegContractSettlMonth_31);
      InstrumentLeg_31.insert(LegContractSettlMonth_31.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_31("COUNTRY_1537997725");
      noLegs_0_1_0.set(LegCountryOfIssue_31);
      InstrumentLeg_31.insert(LegCountryOfIssue_31.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_31("LOCALMKTDATE_637754916");
      noLegs_0_1_0.set(LegCouponPaymentDate_31);
      InstrumentLeg_31.insert(LegCouponPaymentDate_31.getString());
      FIX::LegCouponRate LegCouponRate_31;
      LegCouponRate_31.setString("1.520000");
      noLegs_0_1_0.set(LegCouponRate_31);
      InstrumentLeg_31.insert(LegCouponRate_31.getString());
      FIX::LegCreditRating LegCreditRating_31("STRING_490988614");
      noLegs_0_1_0.set(LegCreditRating_31);
      InstrumentLeg_31.insert(LegCreditRating_31.getString());
      FIX::LegCurrency LegCurrency_31("USD");
      noLegs_0_1_0.set(LegCurrency_31);
      InstrumentLeg_31.insert(LegCurrency_31.getString());
      FIX::LegDatedDate LegDatedDate_31("LOCALMKTDATE_74849914");
      noLegs_0_1_0.set(LegDatedDate_31);
      InstrumentLeg_31.insert(LegDatedDate_31.getString());
      FIX::LegExerciseStyle LegExerciseStyle_31(1214220235);
      noLegs_0_1_0.set(LegExerciseStyle_31);
      InstrumentLeg_31.insert(LegExerciseStyle_31.getString());
      FIX::LegFactor LegFactor_31;
      LegFactor_31.setString("799659");
      noLegs_0_1_0.set(LegFactor_31);
      InstrumentLeg_31.insert(LegFactor_31.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_31(1670600917);
      noLegs_0_1_0.set(LegFlowScheduleType_31);
      InstrumentLeg_31.insert(LegFlowScheduleType_31.getString());
      FIX::LegInstrRegistry LegInstrRegistry_31("STRING_1943504118");
      noLegs_0_1_0.set(LegInstrRegistry_31);
      InstrumentLeg_31.insert(LegInstrRegistry_31.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_31("LOCALMKTDATE_304805152");
      noLegs_0_1_0.set(LegInterestAccrualDate_31);
      InstrumentLeg_31.insert(LegInterestAccrualDate_31.getString());
      FIX::LegIssueDate LegIssueDate_31("LOCALMKTDATE_820589596");
      noLegs_0_1_0.set(LegIssueDate_31);
      InstrumentLeg_31.insert(LegIssueDate_31.getString());
      FIX::LegIssuer LegIssuer_31("STRING_762131269");
      noLegs_0_1_0.set(LegIssuer_31);
      InstrumentLeg_31.insert(LegIssuer_31.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_31("STRING_720349395");
      noLegs_0_1_0.set(LegLocaleOfIssue_31);
      InstrumentLeg_31.insert(LegLocaleOfIssue_31.getString());
      FIX::LegMaturityDate LegMaturityDate_31("LOCALMKTDATE_1782586892");
      noLegs_0_1_0.set(LegMaturityDate_31);
      InstrumentLeg_31.insert(LegMaturityDate_31.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_31("MONTHYEAR_1895232723");
      noLegs_0_1_0.set(LegMaturityMonthYear_31);
      InstrumentLeg_31.insert(LegMaturityMonthYear_31.getString());
      FIX::LegMaturityTime LegMaturityTime_31("TZTIMEONLY_798662291");
      noLegs_0_1_0.set(LegMaturityTime_31);
      InstrumentLeg_31.insert(LegMaturityTime_31.getString());
      FIX::LegOptAttribute LegOptAttribute_31('9');
      noLegs_0_1_0.set(LegOptAttribute_31);
      InstrumentLeg_31.insert(LegOptAttribute_31.getString());
      FIX::LegOptionRatio LegOptionRatio_31;
      LegOptionRatio_31.setString("6341324");
      noLegs_0_1_0.set(LegOptionRatio_31);
      InstrumentLeg_31.insert(LegOptionRatio_31.getString());
      FIX::LegPool LegPool_31("STRING_105473782");
      noLegs_0_1_0.set(LegPool_31);
      InstrumentLeg_31.insert(LegPool_31.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_31("STRING_1552799206");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_31);
      InstrumentLeg_31.insert(LegPriceUnitOfMeasure_31.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_31;
      LegPriceUnitOfMeasureQty_31.setString("19880696");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_31);
      InstrumentLeg_31.insert(LegPriceUnitOfMeasureQty_31.getString());
      FIX::LegProduct LegProduct_31(571565055);
      noLegs_0_1_0.set(LegProduct_31);
      InstrumentLeg_31.insert(LegProduct_31.getString());
      FIX::LegPutOrCall LegPutOrCall_31(1725857275);
      noLegs_0_1_0.set(LegPutOrCall_31);
      InstrumentLeg_31.insert(LegPutOrCall_31.getString());
      FIX::LegRatioQty LegRatioQty_31;
      LegRatioQty_31.setString("3648256");
      noLegs_0_1_0.set(LegRatioQty_31);
      InstrumentLeg_31.insert(LegRatioQty_31.getString());
      FIX::LegRedemptionDate LegRedemptionDate_31("LOCALMKTDATE_1251017948");
      noLegs_0_1_0.set(LegRedemptionDate_31);
      InstrumentLeg_31.insert(LegRedemptionDate_31.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_31("STRING_524487327");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_31);
      InstrumentLeg_31.insert(LegRepoCollateralSecurityType_31.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_31;
      LegRepurchaseRate_31.setString("48.400000");
      noLegs_0_1_0.set(LegRepurchaseRate_31);
      InstrumentLeg_31.insert(LegRepurchaseRate_31.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_31(1188913067);
      noLegs_0_1_0.set(LegRepurchaseTerm_31);
      InstrumentLeg_31.insert(LegRepurchaseTerm_31.getString());
      FIX::LegSecurityDesc LegSecurityDesc_31("STRING_1011454302");
      noLegs_0_1_0.set(LegSecurityDesc_31);
      InstrumentLeg_31.insert(LegSecurityDesc_31.getString());
      FIX::LegSecurityExchange LegSecurityExchange_31("EXCHANGE_1932682565");
      noLegs_0_1_0.set(LegSecurityExchange_31);
      InstrumentLeg_31.insert(LegSecurityExchange_31.getString());
      FIX::LegSecurityID LegSecurityID_31("STRING_1826667984");
      noLegs_0_1_0.set(LegSecurityID_31);
      InstrumentLeg_31.insert(LegSecurityID_31.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_31("STRING_277600806");
      noLegs_0_1_0.set(LegSecurityIDSource_31);
      InstrumentLeg_31.insert(LegSecurityIDSource_31.getString());
      FIX::LegSecuritySubType LegSecuritySubType_31("STRING_276187531");
      noLegs_0_1_0.set(LegSecuritySubType_31);
      InstrumentLeg_31.insert(LegSecuritySubType_31.getString());
      FIX::LegSecurityType LegSecurityType_31("STRING_1951931334");
      noLegs_0_1_0.set(LegSecurityType_31);
      InstrumentLeg_31.insert(LegSecurityType_31.getString());
      FIX::LegSide LegSide_31('7');
      noLegs_0_1_0.set(LegSide_31);
      InstrumentLeg_31.insert(LegSide_31.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_31("STRING_351037446");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_31);
      InstrumentLeg_31.insert(LegStateOrProvinceOfIssue_31.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_31("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_31);
      InstrumentLeg_31.insert(LegStrikeCurrency_31.getString());
      FIX::LegStrikePrice LegStrikePrice_31;
      LegStrikePrice_31.setString("20216383");
      noLegs_0_1_0.set(LegStrikePrice_31);
      InstrumentLeg_31.insert(LegStrikePrice_31.getString());
      FIX::LegSymbol LegSymbol_31("STRING_814688392");
      noLegs_0_1_0.set(LegSymbol_31);
      InstrumentLeg_31.insert(LegSymbol_31.getString());
      FIX::LegSymbolSfx LegSymbolSfx_31("STRING_1124268937");
      noLegs_0_1_0.set(LegSymbolSfx_31);
      InstrumentLeg_31.insert(LegSymbolSfx_31.getString());
      FIX::LegTimeUnit LegTimeUnit_31("STRING_694744312");
      noLegs_0_1_0.set(LegTimeUnit_31);
      InstrumentLeg_31.insert(LegTimeUnit_31.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_31("STRING_1576819661");
      noLegs_0_1_0.set(LegUnitOfMeasure_31);
      InstrumentLeg_31.insert(LegUnitOfMeasure_31.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_31;
      LegUnitOfMeasureQty_31.setString("18446183");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_31);
      InstrumentLeg_31.insert(LegUnitOfMeasureQty_31.getString());
      all_values.push_back(InstrumentLeg_31);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_62;
        FIX::LegSecurityAltID LegSecurityAltID_62("STRING_1324568736");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_62);
        LegSecAltIDGrp_NoLegSecurityAltID_62.insert(LegSecurityAltID_62.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_62("STRING_495796976");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_62);
        LegSecAltIDGrp_NoLegSecurityAltID_62.insert(LegSecurityAltIDSource_62.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_62);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_63;
        FIX::LegSecurityAltID LegSecurityAltID_63("STRING_1266759598");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_63);
        LegSecAltIDGrp_NoLegSecurityAltID_63.insert(LegSecurityAltID_63.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_63("STRING_1958701188");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_63);
        LegSecAltIDGrp_NoLegSecurityAltID_63.insert(LegSecurityAltIDSource_63.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_63);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_32;
      FIX::EncodedLegIssuer EncodedLegIssuer_32("DATA_601270758");
      noLegs_0_1_1.set(EncodedLegIssuer_32);
      InstrumentLeg_32.insert(EncodedLegIssuer_32.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_32(672075156);
      noLegs_0_1_1.set(EncodedLegIssuerLen_32);
      InstrumentLeg_32.insert(EncodedLegIssuerLen_32.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_32("DATA_1799287182");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_32);
      InstrumentLeg_32.insert(EncodedLegSecurityDesc_32.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_32(1172835814);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_32);
      InstrumentLeg_32.insert(EncodedLegSecurityDescLen_32.getString());
      FIX::LegCFICode LegCFICode_32("STRING_250448783");
      noLegs_0_1_1.set(LegCFICode_32);
      InstrumentLeg_32.insert(LegCFICode_32.getString());
      FIX::LegContractMultiplier LegContractMultiplier_32;
      LegContractMultiplier_32.setString("166291");
      noLegs_0_1_1.set(LegContractMultiplier_32);
      InstrumentLeg_32.insert(LegContractMultiplier_32.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_32(276370114);
      noLegs_0_1_1.set(LegContractMultiplierUnit_32);
      InstrumentLeg_32.insert(LegContractMultiplierUnit_32.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_32("MONTHYEAR_774936110");
      noLegs_0_1_1.set(LegContractSettlMonth_32);
      InstrumentLeg_32.insert(LegContractSettlMonth_32.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_32("COUNTRY_411313995");
      noLegs_0_1_1.set(LegCountryOfIssue_32);
      InstrumentLeg_32.insert(LegCountryOfIssue_32.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_32("LOCALMKTDATE_1465283181");
      noLegs_0_1_1.set(LegCouponPaymentDate_32);
      InstrumentLeg_32.insert(LegCouponPaymentDate_32.getString());
      FIX::LegCouponRate LegCouponRate_32;
      LegCouponRate_32.setString("4.120000");
      noLegs_0_1_1.set(LegCouponRate_32);
      InstrumentLeg_32.insert(LegCouponRate_32.getString());
      FIX::LegCreditRating LegCreditRating_32("STRING_196512912");
      noLegs_0_1_1.set(LegCreditRating_32);
      InstrumentLeg_32.insert(LegCreditRating_32.getString());
      FIX::LegCurrency LegCurrency_32("GBP");
      noLegs_0_1_1.set(LegCurrency_32);
      InstrumentLeg_32.insert(LegCurrency_32.getString());
      FIX::LegDatedDate LegDatedDate_32("LOCALMKTDATE_472700444");
      noLegs_0_1_1.set(LegDatedDate_32);
      InstrumentLeg_32.insert(LegDatedDate_32.getString());
      FIX::LegExerciseStyle LegExerciseStyle_32(948915203);
      noLegs_0_1_1.set(LegExerciseStyle_32);
      InstrumentLeg_32.insert(LegExerciseStyle_32.getString());
      FIX::LegFactor LegFactor_32;
      LegFactor_32.setString("6560054");
      noLegs_0_1_1.set(LegFactor_32);
      InstrumentLeg_32.insert(LegFactor_32.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_32(823737890);
      noLegs_0_1_1.set(LegFlowScheduleType_32);
      InstrumentLeg_32.insert(LegFlowScheduleType_32.getString());
      FIX::LegInstrRegistry LegInstrRegistry_32("STRING_1967583125");
      noLegs_0_1_1.set(LegInstrRegistry_32);
      InstrumentLeg_32.insert(LegInstrRegistry_32.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_32("LOCALMKTDATE_1475469208");
      noLegs_0_1_1.set(LegInterestAccrualDate_32);
      InstrumentLeg_32.insert(LegInterestAccrualDate_32.getString());
      FIX::LegIssueDate LegIssueDate_32("LOCALMKTDATE_697892605");
      noLegs_0_1_1.set(LegIssueDate_32);
      InstrumentLeg_32.insert(LegIssueDate_32.getString());
      FIX::LegIssuer LegIssuer_32("STRING_634787869");
      noLegs_0_1_1.set(LegIssuer_32);
      InstrumentLeg_32.insert(LegIssuer_32.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_32("STRING_452254497");
      noLegs_0_1_1.set(LegLocaleOfIssue_32);
      InstrumentLeg_32.insert(LegLocaleOfIssue_32.getString());
      FIX::LegMaturityDate LegMaturityDate_32("LOCALMKTDATE_1392636917");
      noLegs_0_1_1.set(LegMaturityDate_32);
      InstrumentLeg_32.insert(LegMaturityDate_32.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_32("MONTHYEAR_64123882");
      noLegs_0_1_1.set(LegMaturityMonthYear_32);
      InstrumentLeg_32.insert(LegMaturityMonthYear_32.getString());
      FIX::LegMaturityTime LegMaturityTime_32("TZTIMEONLY_149389181");
      noLegs_0_1_1.set(LegMaturityTime_32);
      InstrumentLeg_32.insert(LegMaturityTime_32.getString());
      FIX::LegOptAttribute LegOptAttribute_32('1');
      noLegs_0_1_1.set(LegOptAttribute_32);
      InstrumentLeg_32.insert(LegOptAttribute_32.getString());
      FIX::LegOptionRatio LegOptionRatio_32;
      LegOptionRatio_32.setString("13886926");
      noLegs_0_1_1.set(LegOptionRatio_32);
      InstrumentLeg_32.insert(LegOptionRatio_32.getString());
      FIX::LegPool LegPool_32("STRING_645186157");
      noLegs_0_1_1.set(LegPool_32);
      InstrumentLeg_32.insert(LegPool_32.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_32("STRING_841760424");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_32);
      InstrumentLeg_32.insert(LegPriceUnitOfMeasure_32.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_32;
      LegPriceUnitOfMeasureQty_32.setString("11999101");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_32);
      InstrumentLeg_32.insert(LegPriceUnitOfMeasureQty_32.getString());
      FIX::LegProduct LegProduct_32(1246456916);
      noLegs_0_1_1.set(LegProduct_32);
      InstrumentLeg_32.insert(LegProduct_32.getString());
      FIX::LegPutOrCall LegPutOrCall_32(1513835580);
      noLegs_0_1_1.set(LegPutOrCall_32);
      InstrumentLeg_32.insert(LegPutOrCall_32.getString());
      FIX::LegRatioQty LegRatioQty_32;
      LegRatioQty_32.setString("8517136");
      noLegs_0_1_1.set(LegRatioQty_32);
      InstrumentLeg_32.insert(LegRatioQty_32.getString());
      FIX::LegRedemptionDate LegRedemptionDate_32("LOCALMKTDATE_271809082");
      noLegs_0_1_1.set(LegRedemptionDate_32);
      InstrumentLeg_32.insert(LegRedemptionDate_32.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_32("STRING_1764284363");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_32);
      InstrumentLeg_32.insert(LegRepoCollateralSecurityType_32.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_32;
      LegRepurchaseRate_32.setString("28.480000");
      noLegs_0_1_1.set(LegRepurchaseRate_32);
      InstrumentLeg_32.insert(LegRepurchaseRate_32.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_32(548179196);
      noLegs_0_1_1.set(LegRepurchaseTerm_32);
      InstrumentLeg_32.insert(LegRepurchaseTerm_32.getString());
      FIX::LegSecurityDesc LegSecurityDesc_32("STRING_391736825");
      noLegs_0_1_1.set(LegSecurityDesc_32);
      InstrumentLeg_32.insert(LegSecurityDesc_32.getString());
      FIX::LegSecurityExchange LegSecurityExchange_32("EXCHANGE_1279656844");
      noLegs_0_1_1.set(LegSecurityExchange_32);
      InstrumentLeg_32.insert(LegSecurityExchange_32.getString());
      FIX::LegSecurityID LegSecurityID_32("STRING_2013462377");
      noLegs_0_1_1.set(LegSecurityID_32);
      InstrumentLeg_32.insert(LegSecurityID_32.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_32("STRING_30643589");
      noLegs_0_1_1.set(LegSecurityIDSource_32);
      InstrumentLeg_32.insert(LegSecurityIDSource_32.getString());
      FIX::LegSecuritySubType LegSecuritySubType_32("STRING_1476169756");
      noLegs_0_1_1.set(LegSecuritySubType_32);
      InstrumentLeg_32.insert(LegSecuritySubType_32.getString());
      FIX::LegSecurityType LegSecurityType_32("STRING_1010446247");
      noLegs_0_1_1.set(LegSecurityType_32);
      InstrumentLeg_32.insert(LegSecurityType_32.getString());
      FIX::LegSide LegSide_32('2');
      noLegs_0_1_1.set(LegSide_32);
      InstrumentLeg_32.insert(LegSide_32.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_32("STRING_1948870200");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_32);
      InstrumentLeg_32.insert(LegStateOrProvinceOfIssue_32.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_32("USD");
      noLegs_0_1_1.set(LegStrikeCurrency_32);
      InstrumentLeg_32.insert(LegStrikeCurrency_32.getString());
      FIX::LegStrikePrice LegStrikePrice_32;
      LegStrikePrice_32.setString("6251244");
      noLegs_0_1_1.set(LegStrikePrice_32);
      InstrumentLeg_32.insert(LegStrikePrice_32.getString());
      FIX::LegSymbol LegSymbol_32("STRING_1779460927");
      noLegs_0_1_1.set(LegSymbol_32);
      InstrumentLeg_32.insert(LegSymbol_32.getString());
      FIX::LegSymbolSfx LegSymbolSfx_32("STRING_2078625790");
      noLegs_0_1_1.set(LegSymbolSfx_32);
      InstrumentLeg_32.insert(LegSymbolSfx_32.getString());
      FIX::LegTimeUnit LegTimeUnit_32("STRING_1323017048");
      noLegs_0_1_1.set(LegTimeUnit_32);
      InstrumentLeg_32.insert(LegTimeUnit_32.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_32("STRING_266765148");
      noLegs_0_1_1.set(LegUnitOfMeasure_32);
      InstrumentLeg_32.insert(LegUnitOfMeasure_32.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_32;
      LegUnitOfMeasureQty_32.setString("3833966");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_32);
      InstrumentLeg_32.insert(LegUnitOfMeasureQty_32.getString());
      all_values.push_back(InstrumentLeg_32);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_64;
        FIX::LegSecurityAltID LegSecurityAltID_64("STRING_330889031");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_64);
        LegSecAltIDGrp_NoLegSecurityAltID_64.insert(LegSecurityAltID_64.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_64("STRING_532785821");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_64);
        LegSecAltIDGrp_NoLegSecurityAltID_64.insert(LegSecurityAltIDSource_64.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_64);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_65;
        FIX::LegSecurityAltID LegSecurityAltID_65("STRING_143171143");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_65);
        LegSecAltIDGrp_NoLegSecurityAltID_65.insert(LegSecurityAltID_65.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_65("STRING_1719581650");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_65);
        LegSecAltIDGrp_NoLegSecurityAltID_65.insert(LegSecurityAltIDSource_65.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_65);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_66;
        FIX::LegSecurityAltID LegSecurityAltID_66("STRING_1177971978");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_66);
        LegSecAltIDGrp_NoLegSecurityAltID_66.insert(LegSecurityAltID_66.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_66("STRING_984931567");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_66);
        LegSecAltIDGrp_NoLegSecurityAltID_66.insert(LegSecurityAltIDSource_66.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_66);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_33;
      FIX::EncodedLegIssuer EncodedLegIssuer_33("DATA_772008161");
      noLegs_0_1_2.set(EncodedLegIssuer_33);
      InstrumentLeg_33.insert(EncodedLegIssuer_33.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_33(276945246);
      noLegs_0_1_2.set(EncodedLegIssuerLen_33);
      InstrumentLeg_33.insert(EncodedLegIssuerLen_33.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_33("DATA_351283499");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_33);
      InstrumentLeg_33.insert(EncodedLegSecurityDesc_33.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_33(1623721854);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_33);
      InstrumentLeg_33.insert(EncodedLegSecurityDescLen_33.getString());
      FIX::LegCFICode LegCFICode_33("STRING_548754328");
      noLegs_0_1_2.set(LegCFICode_33);
      InstrumentLeg_33.insert(LegCFICode_33.getString());
      FIX::LegContractMultiplier LegContractMultiplier_33;
      LegContractMultiplier_33.setString("21155678");
      noLegs_0_1_2.set(LegContractMultiplier_33);
      InstrumentLeg_33.insert(LegContractMultiplier_33.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_33(344581054);
      noLegs_0_1_2.set(LegContractMultiplierUnit_33);
      InstrumentLeg_33.insert(LegContractMultiplierUnit_33.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_33("MONTHYEAR_1096933524");
      noLegs_0_1_2.set(LegContractSettlMonth_33);
      InstrumentLeg_33.insert(LegContractSettlMonth_33.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_33("COUNTRY_359821039");
      noLegs_0_1_2.set(LegCountryOfIssue_33);
      InstrumentLeg_33.insert(LegCountryOfIssue_33.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_33("LOCALMKTDATE_1624237898");
      noLegs_0_1_2.set(LegCouponPaymentDate_33);
      InstrumentLeg_33.insert(LegCouponPaymentDate_33.getString());
      FIX::LegCouponRate LegCouponRate_33;
      LegCouponRate_33.setString("22.540000");
      noLegs_0_1_2.set(LegCouponRate_33);
      InstrumentLeg_33.insert(LegCouponRate_33.getString());
      FIX::LegCreditRating LegCreditRating_33("STRING_390464628");
      noLegs_0_1_2.set(LegCreditRating_33);
      InstrumentLeg_33.insert(LegCreditRating_33.getString());
      FIX::LegCurrency LegCurrency_33("CHF");
      noLegs_0_1_2.set(LegCurrency_33);
      InstrumentLeg_33.insert(LegCurrency_33.getString());
      FIX::LegDatedDate LegDatedDate_33("LOCALMKTDATE_337615788");
      noLegs_0_1_2.set(LegDatedDate_33);
      InstrumentLeg_33.insert(LegDatedDate_33.getString());
      FIX::LegExerciseStyle LegExerciseStyle_33(754310559);
      noLegs_0_1_2.set(LegExerciseStyle_33);
      InstrumentLeg_33.insert(LegExerciseStyle_33.getString());
      FIX::LegFactor LegFactor_33;
      LegFactor_33.setString("17852363");
      noLegs_0_1_2.set(LegFactor_33);
      InstrumentLeg_33.insert(LegFactor_33.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_33(940772370);
      noLegs_0_1_2.set(LegFlowScheduleType_33);
      InstrumentLeg_33.insert(LegFlowScheduleType_33.getString());
      FIX::LegInstrRegistry LegInstrRegistry_33("STRING_1379435002");
      noLegs_0_1_2.set(LegInstrRegistry_33);
      InstrumentLeg_33.insert(LegInstrRegistry_33.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_33("LOCALMKTDATE_1417213583");
      noLegs_0_1_2.set(LegInterestAccrualDate_33);
      InstrumentLeg_33.insert(LegInterestAccrualDate_33.getString());
      FIX::LegIssueDate LegIssueDate_33("LOCALMKTDATE_871914513");
      noLegs_0_1_2.set(LegIssueDate_33);
      InstrumentLeg_33.insert(LegIssueDate_33.getString());
      FIX::LegIssuer LegIssuer_33("STRING_554968402");
      noLegs_0_1_2.set(LegIssuer_33);
      InstrumentLeg_33.insert(LegIssuer_33.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_33("STRING_1683978731");
      noLegs_0_1_2.set(LegLocaleOfIssue_33);
      InstrumentLeg_33.insert(LegLocaleOfIssue_33.getString());
      FIX::LegMaturityDate LegMaturityDate_33("LOCALMKTDATE_1255311152");
      noLegs_0_1_2.set(LegMaturityDate_33);
      InstrumentLeg_33.insert(LegMaturityDate_33.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_33("MONTHYEAR_1123138719");
      noLegs_0_1_2.set(LegMaturityMonthYear_33);
      InstrumentLeg_33.insert(LegMaturityMonthYear_33.getString());
      FIX::LegMaturityTime LegMaturityTime_33("TZTIMEONLY_2014867762");
      noLegs_0_1_2.set(LegMaturityTime_33);
      InstrumentLeg_33.insert(LegMaturityTime_33.getString());
      FIX::LegOptAttribute LegOptAttribute_33('1');
      noLegs_0_1_2.set(LegOptAttribute_33);
      InstrumentLeg_33.insert(LegOptAttribute_33.getString());
      FIX::LegOptionRatio LegOptionRatio_33;
      LegOptionRatio_33.setString("12663098");
      noLegs_0_1_2.set(LegOptionRatio_33);
      InstrumentLeg_33.insert(LegOptionRatio_33.getString());
      FIX::LegPool LegPool_33("STRING_1586965764");
      noLegs_0_1_2.set(LegPool_33);
      InstrumentLeg_33.insert(LegPool_33.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_33("STRING_818585304");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_33);
      InstrumentLeg_33.insert(LegPriceUnitOfMeasure_33.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_33;
      LegPriceUnitOfMeasureQty_33.setString("1037577");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_33);
      InstrumentLeg_33.insert(LegPriceUnitOfMeasureQty_33.getString());
      FIX::LegProduct LegProduct_33(211490277);
      noLegs_0_1_2.set(LegProduct_33);
      InstrumentLeg_33.insert(LegProduct_33.getString());
      FIX::LegPutOrCall LegPutOrCall_33(1095530550);
      noLegs_0_1_2.set(LegPutOrCall_33);
      InstrumentLeg_33.insert(LegPutOrCall_33.getString());
      FIX::LegRatioQty LegRatioQty_33;
      LegRatioQty_33.setString("4550412");
      noLegs_0_1_2.set(LegRatioQty_33);
      InstrumentLeg_33.insert(LegRatioQty_33.getString());
      FIX::LegRedemptionDate LegRedemptionDate_33("LOCALMKTDATE_1835212131");
      noLegs_0_1_2.set(LegRedemptionDate_33);
      InstrumentLeg_33.insert(LegRedemptionDate_33.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_33("STRING_1644284879");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_33);
      InstrumentLeg_33.insert(LegRepoCollateralSecurityType_33.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_33;
      LegRepurchaseRate_33.setString("54.960000");
      noLegs_0_1_2.set(LegRepurchaseRate_33);
      InstrumentLeg_33.insert(LegRepurchaseRate_33.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_33(32309538);
      noLegs_0_1_2.set(LegRepurchaseTerm_33);
      InstrumentLeg_33.insert(LegRepurchaseTerm_33.getString());
      FIX::LegSecurityDesc LegSecurityDesc_33("STRING_593734755");
      noLegs_0_1_2.set(LegSecurityDesc_33);
      InstrumentLeg_33.insert(LegSecurityDesc_33.getString());
      FIX::LegSecurityExchange LegSecurityExchange_33("EXCHANGE_782946536");
      noLegs_0_1_2.set(LegSecurityExchange_33);
      InstrumentLeg_33.insert(LegSecurityExchange_33.getString());
      FIX::LegSecurityID LegSecurityID_33("STRING_1656547436");
      noLegs_0_1_2.set(LegSecurityID_33);
      InstrumentLeg_33.insert(LegSecurityID_33.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_33("STRING_1556647009");
      noLegs_0_1_2.set(LegSecurityIDSource_33);
      InstrumentLeg_33.insert(LegSecurityIDSource_33.getString());
      FIX::LegSecuritySubType LegSecuritySubType_33("STRING_1173411164");
      noLegs_0_1_2.set(LegSecuritySubType_33);
      InstrumentLeg_33.insert(LegSecuritySubType_33.getString());
      FIX::LegSecurityType LegSecurityType_33("STRING_461987795");
      noLegs_0_1_2.set(LegSecurityType_33);
      InstrumentLeg_33.insert(LegSecurityType_33.getString());
      FIX::LegSide LegSide_33('1');
      noLegs_0_1_2.set(LegSide_33);
      InstrumentLeg_33.insert(LegSide_33.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_33("STRING_1511026952");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_33);
      InstrumentLeg_33.insert(LegStateOrProvinceOfIssue_33.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_33("USD");
      noLegs_0_1_2.set(LegStrikeCurrency_33);
      InstrumentLeg_33.insert(LegStrikeCurrency_33.getString());
      FIX::LegStrikePrice LegStrikePrice_33;
      LegStrikePrice_33.setString("3043156");
      noLegs_0_1_2.set(LegStrikePrice_33);
      InstrumentLeg_33.insert(LegStrikePrice_33.getString());
      FIX::LegSymbol LegSymbol_33("STRING_448249709");
      noLegs_0_1_2.set(LegSymbol_33);
      InstrumentLeg_33.insert(LegSymbol_33.getString());
      FIX::LegSymbolSfx LegSymbolSfx_33("STRING_290004453");
      noLegs_0_1_2.set(LegSymbolSfx_33);
      InstrumentLeg_33.insert(LegSymbolSfx_33.getString());
      FIX::LegTimeUnit LegTimeUnit_33("STRING_1176230188");
      noLegs_0_1_2.set(LegTimeUnit_33);
      InstrumentLeg_33.insert(LegTimeUnit_33.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_33("STRING_1003218111");
      noLegs_0_1_2.set(LegUnitOfMeasure_33);
      InstrumentLeg_33.insert(LegUnitOfMeasure_33.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_33;
      LegUnitOfMeasureQty_33.setString("19739831");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_33);
      InstrumentLeg_33.insert(LegUnitOfMeasureQty_33.getString());
      all_values.push_back(InstrumentLeg_33);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_67;
        FIX::LegSecurityAltID LegSecurityAltID_67("STRING_2126356830");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_67);
        LegSecAltIDGrp_NoLegSecurityAltID_67.insert(LegSecurityAltID_67.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_67("STRING_1841367299");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_67);
        LegSecAltIDGrp_NoLegSecurityAltID_67.insert(LegSecurityAltIDSource_67.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_67);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_68;
        FIX::LegSecurityAltID LegSecurityAltID_68("STRING_2072154666");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_68);
        LegSecAltIDGrp_NoLegSecurityAltID_68.insert(LegSecurityAltID_68.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_68("STRING_1245183045");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_68);
        LegSecAltIDGrp_NoLegSecurityAltID_68.insert(LegSecurityAltIDSource_68.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_68);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_16;
    FIX::AttachmentPoint AttachmentPoint_16;
    AttachmentPoint_16.setString("94.150000");
    noRelatedSym_0_0.set(AttachmentPoint_16);
    Instrument_16.insert(AttachmentPoint_16.getString());
    FIX::CFICode CFICode_16("STRING_743256322");
    noRelatedSym_0_0.set(CFICode_16);
    Instrument_16.insert(CFICode_16.getString());
    FIX::CPProgram CPProgram_16(99);
    noRelatedSym_0_0.set(CPProgram_16);
    Instrument_16.insert(CPProgram_16.getString());
    FIX::CPRegType CPRegType_16("STRING_1492339693");
    noRelatedSym_0_0.set(CPRegType_16);
    Instrument_16.insert(CPRegType_16.getString());
    FIX::CapPrice CapPrice_16;
    CapPrice_16.setString("18387868");
    noRelatedSym_0_0.set(CapPrice_16);
    Instrument_16.insert(CapPrice_16.getString());
    FIX::ContractMultiplier ContractMultiplier_16;
    ContractMultiplier_16.setString("18039821");
    noRelatedSym_0_0.set(ContractMultiplier_16);
    Instrument_16.insert(ContractMultiplier_16.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_16(2);
    noRelatedSym_0_0.set(ContractMultiplierUnit_16);
    Instrument_16.insert(ContractMultiplierUnit_16.getString());
    FIX::ContractSettlMonth ContractSettlMonth_16("MONTHYEAR_1335588103");
    noRelatedSym_0_0.set(ContractSettlMonth_16);
    Instrument_16.insert(ContractSettlMonth_16.getString());
    FIX::CountryOfIssue CountryOfIssue_16("COUNTRY_79623958");
    noRelatedSym_0_0.set(CountryOfIssue_16);
    Instrument_16.insert(CountryOfIssue_16.getString());
    FIX::CouponPaymentDate CouponPaymentDate_16("LOCALMKTDATE_1212377714");
    noRelatedSym_0_0.set(CouponPaymentDate_16);
    Instrument_16.insert(CouponPaymentDate_16.getString());
    FIX::CouponRate CouponRate_16;
    CouponRate_16.setString("28.590000");
    noRelatedSym_0_0.set(CouponRate_16);
    Instrument_16.insert(CouponRate_16.getString());
    FIX::CreditRating CreditRating_16("STRING_862570494");
    noRelatedSym_0_0.set(CreditRating_16);
    Instrument_16.insert(CreditRating_16.getString());
    FIX::DatedDate DatedDate_16("LOCALMKTDATE_721441503");
    noRelatedSym_0_0.set(DatedDate_16);
    Instrument_16.insert(DatedDate_16.getString());
    FIX::DetachmentPoint DetachmentPoint_16;
    DetachmentPoint_16.setString("62.200000");
    noRelatedSym_0_0.set(DetachmentPoint_16);
    Instrument_16.insert(DetachmentPoint_16.getString());
    FIX::EncodedIssuer EncodedIssuer_16("DATA_2035981659");
    noRelatedSym_0_0.set(EncodedIssuer_16);
    Instrument_16.insert(EncodedIssuer_16.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_16(1183429298);
    noRelatedSym_0_0.set(EncodedIssuerLen_16);
    Instrument_16.insert(EncodedIssuerLen_16.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_16("DATA_573524435");
    noRelatedSym_0_0.set(EncodedSecurityDesc_16);
    Instrument_16.insert(EncodedSecurityDesc_16.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_16(1399524963);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_16);
    Instrument_16.insert(EncodedSecurityDescLen_16.getString());
    FIX::ExerciseStyle ExerciseStyle_16(0);
    noRelatedSym_0_0.set(ExerciseStyle_16);
    Instrument_16.insert(ExerciseStyle_16.getString());
    FIX::Factor Factor_16;
    Factor_16.setString("15937989");
    noRelatedSym_0_0.set(Factor_16);
    Instrument_16.insert(Factor_16.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_16(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_16);
    Instrument_16.insert(FlexProductEligibilityIndicator_16.getString());
    FIX::FlexibleIndicator FlexibleIndicator_16(true);
    noRelatedSym_0_0.set(FlexibleIndicator_16);
    Instrument_16.insert(FlexibleIndicator_16.getString());
    FIX::FloorPrice FloorPrice_16;
    FloorPrice_16.setString("18838034");
    noRelatedSym_0_0.set(FloorPrice_16);
    Instrument_16.insert(FloorPrice_16.getString());
    FIX::FlowScheduleType FlowScheduleType_16(3);
    noRelatedSym_0_0.set(FlowScheduleType_16);
    Instrument_16.insert(FlowScheduleType_16.getString());
    FIX::InstrRegistry InstrRegistry_16("STRING_1703711825");
    noRelatedSym_0_0.set(InstrRegistry_16);
    Instrument_16.insert(InstrRegistry_16.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_16('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_16);
    Instrument_16.insert(InstrmtAssignmentMethod_16.getString());
    FIX::InterestAccrualDate InterestAccrualDate_16("LOCALMKTDATE_1016644871");
    noRelatedSym_0_0.set(InterestAccrualDate_16);
    Instrument_16.insert(InterestAccrualDate_16.getString());
    FIX::IssueDate IssueDate_16("LOCALMKTDATE_1682585008");
    noRelatedSym_0_0.set(IssueDate_16);
    Instrument_16.insert(IssueDate_16.getString());
    FIX::Issuer Issuer_16("STRING_1404186593");
    noRelatedSym_0_0.set(Issuer_16);
    Instrument_16.insert(Issuer_16.getString());
    FIX::ListMethod ListMethod_16(1);
    noRelatedSym_0_0.set(ListMethod_16);
    Instrument_16.insert(ListMethod_16.getString());
    FIX::LocaleOfIssue LocaleOfIssue_16("STRING_780284405");
    noRelatedSym_0_0.set(LocaleOfIssue_16);
    Instrument_16.insert(LocaleOfIssue_16.getString());
    FIX::MaturityDate MaturityDate_16("LOCALMKTDATE_537552361");
    noRelatedSym_0_0.set(MaturityDate_16);
    Instrument_16.insert(MaturityDate_16.getString());
    FIX::MaturityMonthYear MaturityMonthYear_16("MONTHYEAR_1684572211");
    noRelatedSym_0_0.set(MaturityMonthYear_16);
    Instrument_16.insert(MaturityMonthYear_16.getString());
    FIX::MaturityTime MaturityTime_16("TZTIMEONLY_2129225233");
    noRelatedSym_0_0.set(MaturityTime_16);
    Instrument_16.insert(MaturityTime_16.getString());
    FIX::MinPriceIncrement MinPriceIncrement_16;
    MinPriceIncrement_16.setString("20298920");
    noRelatedSym_0_0.set(MinPriceIncrement_16);
    Instrument_16.insert(MinPriceIncrement_16.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_16;
    MinPriceIncrementAmount_16.setString("13758754");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_16);
    Instrument_16.insert(MinPriceIncrementAmount_16.getString());
    FIX::NTPositionLimit NTPositionLimit_16(1785723695);
    noRelatedSym_0_0.set(NTPositionLimit_16);
    Instrument_16.insert(NTPositionLimit_16.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_16;
    NotionalPercentageOutstanding_16.setString("65.820000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_16);
    Instrument_16.insert(NotionalPercentageOutstanding_16.getString());
    FIX::OptAttribute OptAttribute_16('5');
    noRelatedSym_0_0.set(OptAttribute_16);
    Instrument_16.insert(OptAttribute_16.getString());
    FIX::OptPayoutAmount OptPayoutAmount_16;
    OptPayoutAmount_16.setString("18653476");
    noRelatedSym_0_0.set(OptPayoutAmount_16);
    Instrument_16.insert(OptPayoutAmount_16.getString());
    FIX::OptPayoutType OptPayoutType_16(1);
    noRelatedSym_0_0.set(OptPayoutType_16);
    Instrument_16.insert(OptPayoutType_16.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_16;
    OriginalNotionalPercentageOutstanding_16.setString("91.020000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_16);
    Instrument_16.insert(OriginalNotionalPercentageOutstanding_16.getString());
    FIX::Pool Pool_16("STRING_580434500");
    noRelatedSym_0_0.set(Pool_16);
    Instrument_16.insert(Pool_16.getString());
    FIX::PositionLimit PositionLimit_16(848812152);
    noRelatedSym_0_0.set(PositionLimit_16);
    Instrument_16.insert(PositionLimit_16.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_16("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_16);
    Instrument_16.insert(PriceQuoteMethod_16.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_16("STRING_468932511");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_16);
    Instrument_16.insert(PriceUnitOfMeasure_16.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_16;
    PriceUnitOfMeasureQty_16.setString("20322414");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_16);
    Instrument_16.insert(PriceUnitOfMeasureQty_16.getString());
    FIX::Product Product_18(4);
    noRelatedSym_0_0.set(Product_18);
    Instrument_16.insert(Product_18.getString());
    FIX::ProductComplex ProductComplex_16("STRING_1868457475");
    noRelatedSym_0_0.set(ProductComplex_16);
    Instrument_16.insert(ProductComplex_16.getString());
    FIX::PutOrCall PutOrCall_16(0);
    noRelatedSym_0_0.set(PutOrCall_16);
    Instrument_16.insert(PutOrCall_16.getString());
    FIX::RedemptionDate RedemptionDate_16("LOCALMKTDATE_1704145062");
    noRelatedSym_0_0.set(RedemptionDate_16);
    Instrument_16.insert(RedemptionDate_16.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_16("STRING_1424814465");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_16);
    Instrument_16.insert(RepoCollateralSecurityType_16.getString());
    FIX::RepurchaseRate RepurchaseRate_16;
    RepurchaseRate_16.setString("55.220000");
    noRelatedSym_0_0.set(RepurchaseRate_16);
    Instrument_16.insert(RepurchaseRate_16.getString());
    FIX::RepurchaseTerm RepurchaseTerm_16(1440464820);
    noRelatedSym_0_0.set(RepurchaseTerm_16);
    Instrument_16.insert(RepurchaseTerm_16.getString());
    FIX::RestructuringType RestructuringType_16("STRING_FR");
    noRelatedSym_0_0.set(RestructuringType_16);
    Instrument_16.insert(RestructuringType_16.getString());
    FIX::SecurityDesc SecurityDesc_16("STRING_393723700");
    noRelatedSym_0_0.set(SecurityDesc_16);
    Instrument_16.insert(SecurityDesc_16.getString());
    FIX::SecurityExchange SecurityExchange_16("EXCHANGE_1003284115");
    noRelatedSym_0_0.set(SecurityExchange_16);
    Instrument_16.insert(SecurityExchange_16.getString());
    FIX::SecurityGroup SecurityGroup_16("STRING_1026562867");
    noRelatedSym_0_0.set(SecurityGroup_16);
    Instrument_16.insert(SecurityGroup_16.getString());
    FIX::SecurityID SecurityID_16("STRING_2076308708");
    noRelatedSym_0_0.set(SecurityID_16);
    Instrument_16.insert(SecurityID_16.getString());
    FIX::SecurityIDSource SecurityIDSource_16("STRING_F");
    noRelatedSym_0_0.set(SecurityIDSource_16);
    Instrument_16.insert(SecurityIDSource_16.getString());
    FIX::SecurityStatus SecurityStatus_16("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_16);
    Instrument_16.insert(SecurityStatus_16.getString());
    FIX::SecuritySubType SecuritySubType_16("STRING_709109465");
    noRelatedSym_0_0.set(SecuritySubType_16);
    Instrument_16.insert(SecuritySubType_16.getString());
    FIX::SecurityType SecurityType_18("STRING_TLQN");
    noRelatedSym_0_0.set(SecurityType_18);
    Instrument_16.insert(SecurityType_18.getString());
    FIX::Seniority Seniority_16("STRING_SD");
    noRelatedSym_0_0.set(Seniority_16);
    Instrument_16.insert(Seniority_16.getString());
    FIX::SettlMethod SettlMethod_16('P');
    noRelatedSym_0_0.set(SettlMethod_16);
    Instrument_16.insert(SettlMethod_16.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_16("STRING_679947827");
    noRelatedSym_0_0.set(SettleOnOpenFlag_16);
    Instrument_16.insert(SettleOnOpenFlag_16.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_16("STRING_733359106");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_16);
    Instrument_16.insert(StateOrProvinceOfIssue_16.getString());
    FIX::StrikeCurrency StrikeCurrency_16("GBP");
    noRelatedSym_0_0.set(StrikeCurrency_16);
    Instrument_16.insert(StrikeCurrency_16.getString());
    FIX::StrikeMultiplier StrikeMultiplier_16;
    StrikeMultiplier_16.setString("12973389");
    noRelatedSym_0_0.set(StrikeMultiplier_16);
    Instrument_16.insert(StrikeMultiplier_16.getString());
    FIX::StrikePrice StrikePrice_16;
    StrikePrice_16.setString("469551");
    noRelatedSym_0_0.set(StrikePrice_16);
    Instrument_16.insert(StrikePrice_16.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_16(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_16);
    Instrument_16.insert(StrikePriceBoundaryMethod_16.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_16;
    StrikePriceBoundaryPrecision_16.setString("80.990000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_16);
    Instrument_16.insert(StrikePriceBoundaryPrecision_16.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_16(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_16);
    Instrument_16.insert(StrikePriceDeterminationMethod_16.getString());
    FIX::StrikeValue StrikeValue_16;
    StrikeValue_16.setString("5711235");
    noRelatedSym_0_0.set(StrikeValue_16);
    Instrument_16.insert(StrikeValue_16.getString());
    FIX::Symbol Symbol_16("STRING_1179979774");
    noRelatedSym_0_0.set(Symbol_16);
    Instrument_16.insert(Symbol_16.getString());
    FIX::SymbolSfx SymbolSfx_16("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_16);
    Instrument_16.insert(SymbolSfx_16.getString());
    FIX::TimeUnit TimeUnit_16("STRING_S");
    noRelatedSym_0_0.set(TimeUnit_16);
    Instrument_16.insert(TimeUnit_16.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_16(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_16);
    Instrument_16.insert(UnderlyingPriceDeterminationMethod_16.getString());
    FIX::UnitOfMeasure UnitOfMeasure_16("STRING_t");
    noRelatedSym_0_0.set(UnitOfMeasure_16);
    Instrument_16.insert(UnitOfMeasure_16.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_16;
    UnitOfMeasureQty_16.setString("5928831");
    noRelatedSym_0_0.set(UnitOfMeasureQty_16);
    Instrument_16.insert(UnitOfMeasureQty_16.getString());
    FIX::ValuationMethod ValuationMethod_16("STRING_CDS");
    noRelatedSym_0_0.set(ValuationMethod_16);
    Instrument_16.insert(ValuationMethod_16.getString());
    all_values.push_back(Instrument_16);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_35;
      FIX::ComplexEventCondition ComplexEventCondition_35(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventCondition_35.getString());
      FIX::ComplexEventPrice ComplexEventPrice_35;
      ComplexEventPrice_35.setString("1399684");
      noComplexEvents_0_1_0.set(ComplexEventPrice_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventPrice_35.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_35(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceBoundaryMethod_35.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_35;
      ComplexEventPriceBoundaryPrecision_35.setString("23.960000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceBoundaryPrecision_35.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_35(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventPriceTimeType_35.getString());
      FIX::ComplexEventType ComplexEventType_35(9);
      noComplexEvents_0_1_0.set(ComplexEventType_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexEventType_35.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_35;
      ComplexOptPayoutAmount_35.setString("17529274");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_35);
      ComplexEvents_NoComplexEvents_35.insert(ComplexOptPayoutAmount_35.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_35);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_74;
        FIX::ComplexEventEndDate ComplexEventEndDate_74(FIX::UTCTIMESTAMP(9, 59, 23, 8, 12, 2015));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_74);
        ComplexEventDates_NoComplexEventDates_74.insert(ComplexEventEndDate_74.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_74(FIX::UTCTIMESTAMP(17, 39, 27, 24, 11, 2010));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_74);
        ComplexEventDates_NoComplexEventDates_74.insert(ComplexEventStartDate_74.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_74);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_149;
          FIX::ComplexEventEndTime ComplexEventEndTime_149(FIX::UTCTIMEONLY(1, 8, 40));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_149);
          ComplexEventTimes_NoComplexEventTimes_149.insert(ComplexEventEndTime_149.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_149(FIX::UTCTIMEONLY(10, 38, 45));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_149);
          ComplexEventTimes_NoComplexEventTimes_149.insert(ComplexEventStartTime_149.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_149);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_150;
          FIX::ComplexEventEndTime ComplexEventEndTime_150(FIX::UTCTIMEONLY(16, 22, 38));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_150);
          ComplexEventTimes_NoComplexEventTimes_150.insert(ComplexEventEndTime_150.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_150(FIX::UTCTIMEONLY(22, 6, 32));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_150);
          ComplexEventTimes_NoComplexEventTimes_150.insert(ComplexEventStartTime_150.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_150);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_151;
          FIX::ComplexEventEndTime ComplexEventEndTime_151(FIX::UTCTIMEONLY(15, 31, 5));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_151);
          ComplexEventTimes_NoComplexEventTimes_151.insert(ComplexEventEndTime_151.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_151(FIX::UTCTIMEONLY(10, 15, 39));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_151);
          ComplexEventTimes_NoComplexEventTimes_151.insert(ComplexEventStartTime_151.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_151);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_75;
        FIX::ComplexEventEndDate ComplexEventEndDate_75(FIX::UTCTIMESTAMP(6, 6, 59, 20, 4, 2010));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_75);
        ComplexEventDates_NoComplexEventDates_75.insert(ComplexEventEndDate_75.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_75(FIX::UTCTIMESTAMP(8, 31, 49, 0, 10, 2013));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_75);
        ComplexEventDates_NoComplexEventDates_75.insert(ComplexEventStartDate_75.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_75);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_152;
          FIX::ComplexEventEndTime ComplexEventEndTime_152(FIX::UTCTIMEONLY(11, 40, 25));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_152);
          ComplexEventTimes_NoComplexEventTimes_152.insert(ComplexEventEndTime_152.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_152(FIX::UTCTIMEONLY(7, 31, 17));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_152);
          ComplexEventTimes_NoComplexEventTimes_152.insert(ComplexEventStartTime_152.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_152);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_76;
        FIX::ComplexEventEndDate ComplexEventEndDate_76(FIX::UTCTIMESTAMP(10, 41, 19, 6, 4, 2016));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_76);
        ComplexEventDates_NoComplexEventDates_76.insert(ComplexEventEndDate_76.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_76(FIX::UTCTIMESTAMP(7, 20, 4, 22, 5, 2011));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_76);
        ComplexEventDates_NoComplexEventDates_76.insert(ComplexEventStartDate_76.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_76);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_153;
          FIX::ComplexEventEndTime ComplexEventEndTime_153(FIX::UTCTIMEONLY(11, 16, 46));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_153);
          ComplexEventTimes_NoComplexEventTimes_153.insert(ComplexEventEndTime_153.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_153(FIX::UTCTIMEONLY(5, 5, 21));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_153);
          ComplexEventTimes_NoComplexEventTimes_153.insert(ComplexEventStartTime_153.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_153);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_154;
          FIX::ComplexEventEndTime ComplexEventEndTime_154(FIX::UTCTIMEONLY(21, 54, 57));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_154);
          ComplexEventTimes_NoComplexEventTimes_154.insert(ComplexEventEndTime_154.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_154(FIX::UTCTIMEONLY(13, 28, 48));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_154);
          ComplexEventTimes_NoComplexEventTimes_154.insert(ComplexEventStartTime_154.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_154);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_155;
          FIX::ComplexEventEndTime ComplexEventEndTime_155(FIX::UTCTIMEONLY(6, 29, 49));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventEndTime_155);
          ComplexEventTimes_NoComplexEventTimes_155.insert(ComplexEventEndTime_155.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_155(FIX::UTCTIMEONLY(20, 15, 46));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventStartTime_155);
          ComplexEventTimes_NoComplexEventTimes_155.insert(ComplexEventStartTime_155.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_155);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_36;
      FIX::ComplexEventCondition ComplexEventCondition_36(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventCondition_36.getString());
      FIX::ComplexEventPrice ComplexEventPrice_36;
      ComplexEventPrice_36.setString("20038799");
      noComplexEvents_0_1_1.set(ComplexEventPrice_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventPrice_36.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_36(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceBoundaryMethod_36.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_36;
      ComplexEventPriceBoundaryPrecision_36.setString("81.540000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceBoundaryPrecision_36.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_36(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventPriceTimeType_36.getString());
      FIX::ComplexEventType ComplexEventType_36(7);
      noComplexEvents_0_1_1.set(ComplexEventType_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexEventType_36.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_36;
      ComplexOptPayoutAmount_36.setString("11535202");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_36);
      ComplexEvents_NoComplexEvents_36.insert(ComplexOptPayoutAmount_36.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_36);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_77;
        FIX::ComplexEventEndDate ComplexEventEndDate_77(FIX::UTCTIMESTAMP(7, 8, 48, 4, 6, 2007));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_77);
        ComplexEventDates_NoComplexEventDates_77.insert(ComplexEventEndDate_77.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_77(FIX::UTCTIMESTAMP(6, 55, 21, 13, 1, 2017));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_77);
        ComplexEventDates_NoComplexEventDates_77.insert(ComplexEventStartDate_77.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_77);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_156;
          FIX::ComplexEventEndTime ComplexEventEndTime_156(FIX::UTCTIMEONLY(3, 14, 24));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_156);
          ComplexEventTimes_NoComplexEventTimes_156.insert(ComplexEventEndTime_156.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_156(FIX::UTCTIMEONLY(14, 40, 39));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_156);
          ComplexEventTimes_NoComplexEventTimes_156.insert(ComplexEventStartTime_156.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_156);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_157;
          FIX::ComplexEventEndTime ComplexEventEndTime_157(FIX::UTCTIMEONLY(7, 13, 24));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_157);
          ComplexEventTimes_NoComplexEventTimes_157.insert(ComplexEventEndTime_157.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_157(FIX::UTCTIMEONLY(23, 15, 53));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_157);
          ComplexEventTimes_NoComplexEventTimes_157.insert(ComplexEventStartTime_157.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_157);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_158;
          FIX::ComplexEventEndTime ComplexEventEndTime_158(FIX::UTCTIMEONLY(10, 1, 59));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_158);
          ComplexEventTimes_NoComplexEventTimes_158.insert(ComplexEventEndTime_158.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_158(FIX::UTCTIMEONLY(22, 1, 38));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_158);
          ComplexEventTimes_NoComplexEventTimes_158.insert(ComplexEventStartTime_158.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_158);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_78;
        FIX::ComplexEventEndDate ComplexEventEndDate_78(FIX::UTCTIMESTAMP(12, 51, 54, 5, 9, 2011));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_78);
        ComplexEventDates_NoComplexEventDates_78.insert(ComplexEventEndDate_78.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_78(FIX::UTCTIMESTAMP(23, 1, 52, 0, 4, 2006));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_78);
        ComplexEventDates_NoComplexEventDates_78.insert(ComplexEventStartDate_78.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_78);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_159;
          FIX::ComplexEventEndTime ComplexEventEndTime_159(FIX::UTCTIMEONLY(12, 4, 53));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_159);
          ComplexEventTimes_NoComplexEventTimes_159.insert(ComplexEventEndTime_159.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_159(FIX::UTCTIMEONLY(7, 0, 40));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_159);
          ComplexEventTimes_NoComplexEventTimes_159.insert(ComplexEventStartTime_159.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_159);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_79;
        FIX::ComplexEventEndDate ComplexEventEndDate_79(FIX::UTCTIMESTAMP(2, 41, 42, 0, 9, 2017));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_79);
        ComplexEventDates_NoComplexEventDates_79.insert(ComplexEventEndDate_79.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_79(FIX::UTCTIMESTAMP(13, 24, 41, 7, 6, 2001));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_79);
        ComplexEventDates_NoComplexEventDates_79.insert(ComplexEventStartDate_79.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_79);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_160;
          FIX::ComplexEventEndTime ComplexEventEndTime_160(FIX::UTCTIMEONLY(17, 39, 29));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_160);
          ComplexEventTimes_NoComplexEventTimes_160.insert(ComplexEventEndTime_160.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_160(FIX::UTCTIMEONLY(10, 54, 44));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_160);
          ComplexEventTimes_NoComplexEventTimes_160.insert(ComplexEventStartTime_160.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_160);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_161;
          FIX::ComplexEventEndTime ComplexEventEndTime_161(FIX::UTCTIMEONLY(6, 48, 13));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_161);
          ComplexEventTimes_NoComplexEventTimes_161.insert(ComplexEventEndTime_161.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_161(FIX::UTCTIMEONLY(8, 14, 46));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_161);
          ComplexEventTimes_NoComplexEventTimes_161.insert(ComplexEventStartTime_161.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_161);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_37;
      FIX::ComplexEventCondition ComplexEventCondition_37(2);
      noComplexEvents_0_1_2.set(ComplexEventCondition_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventCondition_37.getString());
      FIX::ComplexEventPrice ComplexEventPrice_37;
      ComplexEventPrice_37.setString("9455347");
      noComplexEvents_0_1_2.set(ComplexEventPrice_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventPrice_37.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_37(5);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceBoundaryMethod_37.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_37;
      ComplexEventPriceBoundaryPrecision_37.setString("99.050000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceBoundaryPrecision_37.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_37(2);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventPriceTimeType_37.getString());
      FIX::ComplexEventType ComplexEventType_37(7);
      noComplexEvents_0_1_2.set(ComplexEventType_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexEventType_37.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_37;
      ComplexOptPayoutAmount_37.setString("19915606");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_37);
      ComplexEvents_NoComplexEvents_37.insert(ComplexOptPayoutAmount_37.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_37);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_80;
        FIX::ComplexEventEndDate ComplexEventEndDate_80(FIX::UTCTIMESTAMP(13, 21, 3, 18, 3, 2001));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_80);
        ComplexEventDates_NoComplexEventDates_80.insert(ComplexEventEndDate_80.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_80(FIX::UTCTIMESTAMP(19, 20, 52, 4, 8, 2010));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_80);
        ComplexEventDates_NoComplexEventDates_80.insert(ComplexEventStartDate_80.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_80);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_162;
          FIX::ComplexEventEndTime ComplexEventEndTime_162(FIX::UTCTIMEONLY(8, 25, 0));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_162);
          ComplexEventTimes_NoComplexEventTimes_162.insert(ComplexEventEndTime_162.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_162(FIX::UTCTIMEONLY(13, 14, 32));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_162);
          ComplexEventTimes_NoComplexEventTimes_162.insert(ComplexEventStartTime_162.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_162);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_163;
          FIX::ComplexEventEndTime ComplexEventEndTime_163(FIX::UTCTIMEONLY(23, 51, 17));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_163);
          ComplexEventTimes_NoComplexEventTimes_163.insert(ComplexEventEndTime_163.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_163(FIX::UTCTIMEONLY(23, 30, 3));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_163);
          ComplexEventTimes_NoComplexEventTimes_163.insert(ComplexEventStartTime_163.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_163);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_164;
          FIX::ComplexEventEndTime ComplexEventEndTime_164(FIX::UTCTIMEONLY(19, 16, 35));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_164);
          ComplexEventTimes_NoComplexEventTimes_164.insert(ComplexEventEndTime_164.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_164(FIX::UTCTIMEONLY(19, 16, 8));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_164);
          ComplexEventTimes_NoComplexEventTimes_164.insert(ComplexEventStartTime_164.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_164);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

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
      multiset<string> EvntGrp_NoEvents_33;
      FIX::EventDate EventDate_33("LOCALMKTDATE_1986430897");
      noEvents_0_1_0.set(EventDate_33);
      EvntGrp_NoEvents_33.insert(EventDate_33.getString());
      FIX::EventPx EventPx_33;
      EventPx_33.setString("16096695");
      noEvents_0_1_0.set(EventPx_33);
      EvntGrp_NoEvents_33.insert(EventPx_33.getString());
      FIX::EventText EventText_33("STRING_1493204683");
      noEvents_0_1_0.set(EventText_33);
      EvntGrp_NoEvents_33.insert(EventText_33.getString());
      FIX::EventTime EventTime_33(FIX::UTCTIMESTAMP(3, 19, 35, 24, 9, 2005));
      noEvents_0_1_0.set(EventTime_33);
      EvntGrp_NoEvents_33.insert(EventTime_33.getString());
      FIX::EventType EventType_33(3);
      noEvents_0_1_0.set(EventType_33);
      EvntGrp_NoEvents_33.insert(EventType_33.getString());
      all_values.push_back(EvntGrp_NoEvents_33);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_31;
      FIX::InstrumentPartyID InstrumentPartyID_31("STRING_1385048382");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_31);
      InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyID_31.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_31('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_31);
      InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyIDSource_31.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_31(146350013);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_31);
      InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyRole_31.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_31);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61;
        FIX::InstrumentPartySubID InstrumentPartySubID_61("STRING_837340477");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_61);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61.insert(InstrumentPartySubID_61.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_61(854223731);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_61);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61.insert(InstrumentPartySubIDType_61.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62;
        FIX::InstrumentPartySubID InstrumentPartySubID_62("STRING_1101935313");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_62);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62.insert(InstrumentPartySubID_62.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_62(1945018572);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_62);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62.insert(InstrumentPartySubIDType_62.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63;
        FIX::InstrumentPartySubID InstrumentPartySubID_63("STRING_1406174441");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_63);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63.insert(InstrumentPartySubID_63.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_63(1080345448);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_63);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63.insert(InstrumentPartySubIDType_63.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_28;
      FIX::SecurityAltID SecurityAltID_28("STRING_1026079661");
      noSecurityAltID_0_1_0.set(SecurityAltID_28);
      SecAltIDGrp_NoSecurityAltID_28.insert(SecurityAltID_28.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_28("STRING_2069687505");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_28);
      SecAltIDGrp_NoSecurityAltID_28.insert(SecurityAltIDSource_28.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_28);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_32;
    FIX::SecurityXML SecurityXML_33("XMLDATA_526201143");
    noRelatedSym_0_0.set(SecurityXML_33);
    FIX::SecurityXMLLen SecurityXMLLen_16(1418350226);
    noRelatedSym_0_0.set(SecurityXMLLen_16);
    FIX::SecurityXMLSchema SecurityXMLSchema_16("STRING_1291830860");
    noRelatedSym_0_0.set(SecurityXMLSchema_16);
    SecurityXML_32.insert(SecurityXMLSchema_16.getString());
    all_values.push_back(SecurityXML_32);
    all_compo_names.insert("SecurityXML");

    // InstrumentExtension
    multiset<string> InstrumentExtension_4;
    FIX::DeliveryForm DeliveryForm_4(2);
    noRelatedSym_0_0.set(DeliveryForm_4);
    InstrumentExtension_4.insert(DeliveryForm_4.getString());
    FIX::PctAtRisk PctAtRisk_4;
    PctAtRisk_4.setString("75.470000");
    noRelatedSym_0_0.set(PctAtRisk_4);
    InstrumentExtension_4.insert(PctAtRisk_4.getString());
    all_values.push_back(InstrumentExtension_4);
    all_compo_names.insert("InstrumentExtension");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_6;
      FIX::InstrAttribType InstrAttribType_6(19);
      noInstrAttrib_0_1_0.set(InstrAttribType_6);
      AttrbGrp_NoInstrAttrib_6.insert(InstrAttribType_6.getString());
      FIX::InstrAttribValue InstrAttribValue_6("STRING_1620397108");
      noInstrAttrib_0_1_0.set(InstrAttribValue_6);
      AttrbGrp_NoInstrAttrib_6.insert(InstrAttribValue_6.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_6);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_7;
      FIX::InstrAttribType InstrAttribType_7(8);
      noInstrAttrib_0_1_1.set(InstrAttribType_7);
      AttrbGrp_NoInstrAttrib_7.insert(InstrAttribType_7.getString());
      FIX::InstrAttribValue InstrAttribValue_7("STRING_215100628");
      noInstrAttrib_0_1_1.set(InstrAttribValue_7);
      AttrbGrp_NoInstrAttrib_7.insert(InstrAttribValue_7.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_7);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_8;
      FIX::InstrAttribType InstrAttribType_8(99);
      noInstrAttrib_0_1_2.set(InstrAttribType_8);
      AttrbGrp_NoInstrAttrib_8.insert(InstrAttribType_8.getString());
      FIX::InstrAttribValue InstrAttribValue_8("STRING_1754735277");
      noInstrAttrib_0_1_2.set(InstrAttribValue_8);
      AttrbGrp_NoInstrAttrib_8.insert(InstrAttribValue_8.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_8);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_0;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_0;
    SecondaryHighLimitPrice_0.setString("11865505");
    noRelatedSym_0_0.set(SecondaryHighLimitPrice_0);
    SecondaryPriceLimits_0.insert(SecondaryHighLimitPrice_0.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_0;
    SecondaryLowLimitPrice_0.setString("19052636");
    noRelatedSym_0_0.set(SecondaryLowLimitPrice_0);
    SecondaryPriceLimits_0.insert(SecondaryLowLimitPrice_0.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_0(765443433);
    noRelatedSym_0_0.set(SecondaryPriceLimitType_0);
    SecondaryPriceLimits_0.insert(SecondaryPriceLimitType_0.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_0;
    SecondaryTradingReferencePrice_0.setString("9114189");
    noRelatedSym_0_0.set(SecondaryTradingReferencePrice_0);
    SecondaryPriceLimits_0.insert(SecondaryTradingReferencePrice_0.getString());
    all_values.push_back(SecondaryPriceLimits_0);
    all_compo_names.insert("SecondaryPriceLimits");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_1;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_1;
    FIX::CorporateAction CorporateAction_1("MULTIPLECHARVALUE_U");
    noRelatedSym_0_1.set(CorporateAction_1);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(CorporateAction_1.getString());
    FIX::Currency Currency_15("CAN");
    noRelatedSym_0_1.set(Currency_15);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(Currency_15.getString());
    FIX::EncodedText EncodedText_30("DATA_389483607");
    noRelatedSym_0_1.set(EncodedText_30);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(EncodedText_30.getString());
    FIX::EncodedTextLen EncodedTextLen_30(2099799648);
    noRelatedSym_0_1.set(EncodedTextLen_30);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(EncodedTextLen_30.getString());
    FIX::RelSymTransactTime RelSymTransactTime_1(FIX::UTCTIMESTAMP(5, 51, 47, 9, 2, 2015));
    noRelatedSym_0_1.set(RelSymTransactTime_1);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(RelSymTransactTime_1.getString());
    FIX::Text Text_30("STRING_1700353005");
    noRelatedSym_0_1.set(Text_30);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(Text_30.getString());
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_1);
    all_compo_names.insert("RelSymDerivSecGrp.NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_34;
      FIX::EncodedLegIssuer EncodedLegIssuer_34("DATA_1949264152");
      noLegs_1_1_0.set(EncodedLegIssuer_34);
      InstrumentLeg_34.insert(EncodedLegIssuer_34.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_34(79070500);
      noLegs_1_1_0.set(EncodedLegIssuerLen_34);
      InstrumentLeg_34.insert(EncodedLegIssuerLen_34.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_34("DATA_362176764");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_34);
      InstrumentLeg_34.insert(EncodedLegSecurityDesc_34.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_34(1093611364);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_34);
      InstrumentLeg_34.insert(EncodedLegSecurityDescLen_34.getString());
      FIX::LegCFICode LegCFICode_34("STRING_224497732");
      noLegs_1_1_0.set(LegCFICode_34);
      InstrumentLeg_34.insert(LegCFICode_34.getString());
      FIX::LegContractMultiplier LegContractMultiplier_34;
      LegContractMultiplier_34.setString("3729043");
      noLegs_1_1_0.set(LegContractMultiplier_34);
      InstrumentLeg_34.insert(LegContractMultiplier_34.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_34(808054439);
      noLegs_1_1_0.set(LegContractMultiplierUnit_34);
      InstrumentLeg_34.insert(LegContractMultiplierUnit_34.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_34("MONTHYEAR_208872212");
      noLegs_1_1_0.set(LegContractSettlMonth_34);
      InstrumentLeg_34.insert(LegContractSettlMonth_34.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_34("COUNTRY_1993301419");
      noLegs_1_1_0.set(LegCountryOfIssue_34);
      InstrumentLeg_34.insert(LegCountryOfIssue_34.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_34("LOCALMKTDATE_2015702196");
      noLegs_1_1_0.set(LegCouponPaymentDate_34);
      InstrumentLeg_34.insert(LegCouponPaymentDate_34.getString());
      FIX::LegCouponRate LegCouponRate_34;
      LegCouponRate_34.setString("28.410000");
      noLegs_1_1_0.set(LegCouponRate_34);
      InstrumentLeg_34.insert(LegCouponRate_34.getString());
      FIX::LegCreditRating LegCreditRating_34("STRING_872151251");
      noLegs_1_1_0.set(LegCreditRating_34);
      InstrumentLeg_34.insert(LegCreditRating_34.getString());
      FIX::LegCurrency LegCurrency_34("JPY");
      noLegs_1_1_0.set(LegCurrency_34);
      InstrumentLeg_34.insert(LegCurrency_34.getString());
      FIX::LegDatedDate LegDatedDate_34("LOCALMKTDATE_629931270");
      noLegs_1_1_0.set(LegDatedDate_34);
      InstrumentLeg_34.insert(LegDatedDate_34.getString());
      FIX::LegExerciseStyle LegExerciseStyle_34(240913611);
      noLegs_1_1_0.set(LegExerciseStyle_34);
      InstrumentLeg_34.insert(LegExerciseStyle_34.getString());
      FIX::LegFactor LegFactor_34;
      LegFactor_34.setString("3744587");
      noLegs_1_1_0.set(LegFactor_34);
      InstrumentLeg_34.insert(LegFactor_34.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_34(1772810652);
      noLegs_1_1_0.set(LegFlowScheduleType_34);
      InstrumentLeg_34.insert(LegFlowScheduleType_34.getString());
      FIX::LegInstrRegistry LegInstrRegistry_34("STRING_46879598");
      noLegs_1_1_0.set(LegInstrRegistry_34);
      InstrumentLeg_34.insert(LegInstrRegistry_34.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_34("LOCALMKTDATE_523442372");
      noLegs_1_1_0.set(LegInterestAccrualDate_34);
      InstrumentLeg_34.insert(LegInterestAccrualDate_34.getString());
      FIX::LegIssueDate LegIssueDate_34("LOCALMKTDATE_14810611");
      noLegs_1_1_0.set(LegIssueDate_34);
      InstrumentLeg_34.insert(LegIssueDate_34.getString());
      FIX::LegIssuer LegIssuer_34("STRING_2146679246");
      noLegs_1_1_0.set(LegIssuer_34);
      InstrumentLeg_34.insert(LegIssuer_34.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_34("STRING_368221906");
      noLegs_1_1_0.set(LegLocaleOfIssue_34);
      InstrumentLeg_34.insert(LegLocaleOfIssue_34.getString());
      FIX::LegMaturityDate LegMaturityDate_34("LOCALMKTDATE_1241634696");
      noLegs_1_1_0.set(LegMaturityDate_34);
      InstrumentLeg_34.insert(LegMaturityDate_34.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_34("MONTHYEAR_805735330");
      noLegs_1_1_0.set(LegMaturityMonthYear_34);
      InstrumentLeg_34.insert(LegMaturityMonthYear_34.getString());
      FIX::LegMaturityTime LegMaturityTime_34("TZTIMEONLY_1314936753");
      noLegs_1_1_0.set(LegMaturityTime_34);
      InstrumentLeg_34.insert(LegMaturityTime_34.getString());
      FIX::LegOptAttribute LegOptAttribute_34('1');
      noLegs_1_1_0.set(LegOptAttribute_34);
      InstrumentLeg_34.insert(LegOptAttribute_34.getString());
      FIX::LegOptionRatio LegOptionRatio_34;
      LegOptionRatio_34.setString("8709658");
      noLegs_1_1_0.set(LegOptionRatio_34);
      InstrumentLeg_34.insert(LegOptionRatio_34.getString());
      FIX::LegPool LegPool_34("STRING_1194513401");
      noLegs_1_1_0.set(LegPool_34);
      InstrumentLeg_34.insert(LegPool_34.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_34("STRING_1818863063");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_34);
      InstrumentLeg_34.insert(LegPriceUnitOfMeasure_34.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_34;
      LegPriceUnitOfMeasureQty_34.setString("19622760");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_34);
      InstrumentLeg_34.insert(LegPriceUnitOfMeasureQty_34.getString());
      FIX::LegProduct LegProduct_34(996293905);
      noLegs_1_1_0.set(LegProduct_34);
      InstrumentLeg_34.insert(LegProduct_34.getString());
      FIX::LegPutOrCall LegPutOrCall_34(1897933564);
      noLegs_1_1_0.set(LegPutOrCall_34);
      InstrumentLeg_34.insert(LegPutOrCall_34.getString());
      FIX::LegRatioQty LegRatioQty_34;
      LegRatioQty_34.setString("1769691");
      noLegs_1_1_0.set(LegRatioQty_34);
      InstrumentLeg_34.insert(LegRatioQty_34.getString());
      FIX::LegRedemptionDate LegRedemptionDate_34("LOCALMKTDATE_2089905270");
      noLegs_1_1_0.set(LegRedemptionDate_34);
      InstrumentLeg_34.insert(LegRedemptionDate_34.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_34("STRING_2122431296");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_34);
      InstrumentLeg_34.insert(LegRepoCollateralSecurityType_34.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_34;
      LegRepurchaseRate_34.setString("34.690000");
      noLegs_1_1_0.set(LegRepurchaseRate_34);
      InstrumentLeg_34.insert(LegRepurchaseRate_34.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_34(750476061);
      noLegs_1_1_0.set(LegRepurchaseTerm_34);
      InstrumentLeg_34.insert(LegRepurchaseTerm_34.getString());
      FIX::LegSecurityDesc LegSecurityDesc_34("STRING_183819860");
      noLegs_1_1_0.set(LegSecurityDesc_34);
      InstrumentLeg_34.insert(LegSecurityDesc_34.getString());
      FIX::LegSecurityExchange LegSecurityExchange_34("EXCHANGE_395691240");
      noLegs_1_1_0.set(LegSecurityExchange_34);
      InstrumentLeg_34.insert(LegSecurityExchange_34.getString());
      FIX::LegSecurityID LegSecurityID_34("STRING_618694609");
      noLegs_1_1_0.set(LegSecurityID_34);
      InstrumentLeg_34.insert(LegSecurityID_34.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_34("STRING_607792701");
      noLegs_1_1_0.set(LegSecurityIDSource_34);
      InstrumentLeg_34.insert(LegSecurityIDSource_34.getString());
      FIX::LegSecuritySubType LegSecuritySubType_34("STRING_1267842491");
      noLegs_1_1_0.set(LegSecuritySubType_34);
      InstrumentLeg_34.insert(LegSecuritySubType_34.getString());
      FIX::LegSecurityType LegSecurityType_34("STRING_94164787");
      noLegs_1_1_0.set(LegSecurityType_34);
      InstrumentLeg_34.insert(LegSecurityType_34.getString());
      FIX::LegSide LegSide_34('7');
      noLegs_1_1_0.set(LegSide_34);
      InstrumentLeg_34.insert(LegSide_34.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_34("STRING_1897773762");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_34);
      InstrumentLeg_34.insert(LegStateOrProvinceOfIssue_34.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_34("CHF");
      noLegs_1_1_0.set(LegStrikeCurrency_34);
      InstrumentLeg_34.insert(LegStrikeCurrency_34.getString());
      FIX::LegStrikePrice LegStrikePrice_34;
      LegStrikePrice_34.setString("15231007");
      noLegs_1_1_0.set(LegStrikePrice_34);
      InstrumentLeg_34.insert(LegStrikePrice_34.getString());
      FIX::LegSymbol LegSymbol_34("STRING_381957996");
      noLegs_1_1_0.set(LegSymbol_34);
      InstrumentLeg_34.insert(LegSymbol_34.getString());
      FIX::LegSymbolSfx LegSymbolSfx_34("STRING_968733558");
      noLegs_1_1_0.set(LegSymbolSfx_34);
      InstrumentLeg_34.insert(LegSymbolSfx_34.getString());
      FIX::LegTimeUnit LegTimeUnit_34("STRING_1537911377");
      noLegs_1_1_0.set(LegTimeUnit_34);
      InstrumentLeg_34.insert(LegTimeUnit_34.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_34("STRING_381153594");
      noLegs_1_1_0.set(LegUnitOfMeasure_34);
      InstrumentLeg_34.insert(LegUnitOfMeasure_34.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_34;
      LegUnitOfMeasureQty_34.setString("13369554");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_34);
      InstrumentLeg_34.insert(LegUnitOfMeasureQty_34.getString());
      all_values.push_back(InstrumentLeg_34);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_69;
        FIX::LegSecurityAltID LegSecurityAltID_69("STRING_1186888924");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_69);
        LegSecAltIDGrp_NoLegSecurityAltID_69.insert(LegSecurityAltID_69.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_69("STRING_504408570");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_69);
        LegSecAltIDGrp_NoLegSecurityAltID_69.insert(LegSecurityAltIDSource_69.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_69);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_70;
        FIX::LegSecurityAltID LegSecurityAltID_70("STRING_750572484");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_70);
        LegSecAltIDGrp_NoLegSecurityAltID_70.insert(LegSecurityAltID_70.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_70("STRING_2057854779");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_70);
        LegSecAltIDGrp_NoLegSecurityAltID_70.insert(LegSecurityAltIDSource_70.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_70);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_17;
    FIX::AttachmentPoint AttachmentPoint_17;
    AttachmentPoint_17.setString("19.710000");
    noRelatedSym_0_1.set(AttachmentPoint_17);
    Instrument_17.insert(AttachmentPoint_17.getString());
    FIX::CFICode CFICode_17("STRING_421951899");
    noRelatedSym_0_1.set(CFICode_17);
    Instrument_17.insert(CFICode_17.getString());
    FIX::CPProgram CPProgram_17(1);
    noRelatedSym_0_1.set(CPProgram_17);
    Instrument_17.insert(CPProgram_17.getString());
    FIX::CPRegType CPRegType_17("STRING_547732228");
    noRelatedSym_0_1.set(CPRegType_17);
    Instrument_17.insert(CPRegType_17.getString());
    FIX::CapPrice CapPrice_17;
    CapPrice_17.setString("1724018");
    noRelatedSym_0_1.set(CapPrice_17);
    Instrument_17.insert(CapPrice_17.getString());
    FIX::ContractMultiplier ContractMultiplier_17;
    ContractMultiplier_17.setString("20496163");
    noRelatedSym_0_1.set(ContractMultiplier_17);
    Instrument_17.insert(ContractMultiplier_17.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_17(2);
    noRelatedSym_0_1.set(ContractMultiplierUnit_17);
    Instrument_17.insert(ContractMultiplierUnit_17.getString());
    FIX::ContractSettlMonth ContractSettlMonth_17("MONTHYEAR_147349463");
    noRelatedSym_0_1.set(ContractSettlMonth_17);
    Instrument_17.insert(ContractSettlMonth_17.getString());
    FIX::CountryOfIssue CountryOfIssue_17("COUNTRY_452006151");
    noRelatedSym_0_1.set(CountryOfIssue_17);
    Instrument_17.insert(CountryOfIssue_17.getString());
    FIX::CouponPaymentDate CouponPaymentDate_17("LOCALMKTDATE_1240629911");
    noRelatedSym_0_1.set(CouponPaymentDate_17);
    Instrument_17.insert(CouponPaymentDate_17.getString());
    FIX::CouponRate CouponRate_17;
    CouponRate_17.setString("93.240000");
    noRelatedSym_0_1.set(CouponRate_17);
    Instrument_17.insert(CouponRate_17.getString());
    FIX::CreditRating CreditRating_17("STRING_847697391");
    noRelatedSym_0_1.set(CreditRating_17);
    Instrument_17.insert(CreditRating_17.getString());
    FIX::DatedDate DatedDate_17("LOCALMKTDATE_1859324521");
    noRelatedSym_0_1.set(DatedDate_17);
    Instrument_17.insert(DatedDate_17.getString());
    FIX::DetachmentPoint DetachmentPoint_17;
    DetachmentPoint_17.setString("20.250000");
    noRelatedSym_0_1.set(DetachmentPoint_17);
    Instrument_17.insert(DetachmentPoint_17.getString());
    FIX::EncodedIssuer EncodedIssuer_17("DATA_2115539883");
    noRelatedSym_0_1.set(EncodedIssuer_17);
    Instrument_17.insert(EncodedIssuer_17.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_17(1953489308);
    noRelatedSym_0_1.set(EncodedIssuerLen_17);
    Instrument_17.insert(EncodedIssuerLen_17.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_17("DATA_1009794503");
    noRelatedSym_0_1.set(EncodedSecurityDesc_17);
    Instrument_17.insert(EncodedSecurityDesc_17.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_17(1865829997);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_17);
    Instrument_17.insert(EncodedSecurityDescLen_17.getString());
    FIX::ExerciseStyle ExerciseStyle_17(1);
    noRelatedSym_0_1.set(ExerciseStyle_17);
    Instrument_17.insert(ExerciseStyle_17.getString());
    FIX::Factor Factor_17;
    Factor_17.setString("14550856");
    noRelatedSym_0_1.set(Factor_17);
    Instrument_17.insert(Factor_17.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_17(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_17);
    Instrument_17.insert(FlexProductEligibilityIndicator_17.getString());
    FIX::FlexibleIndicator FlexibleIndicator_17(true);
    noRelatedSym_0_1.set(FlexibleIndicator_17);
    Instrument_17.insert(FlexibleIndicator_17.getString());
    FIX::FloorPrice FloorPrice_17;
    FloorPrice_17.setString("2763355");
    noRelatedSym_0_1.set(FloorPrice_17);
    Instrument_17.insert(FloorPrice_17.getString());
    FIX::FlowScheduleType FlowScheduleType_17(4);
    noRelatedSym_0_1.set(FlowScheduleType_17);
    Instrument_17.insert(FlowScheduleType_17.getString());
    FIX::InstrRegistry InstrRegistry_17("STRING_904195648");
    noRelatedSym_0_1.set(InstrRegistry_17);
    Instrument_17.insert(InstrRegistry_17.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_17('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_17);
    Instrument_17.insert(InstrmtAssignmentMethod_17.getString());
    FIX::InterestAccrualDate InterestAccrualDate_17("LOCALMKTDATE_1263937270");
    noRelatedSym_0_1.set(InterestAccrualDate_17);
    Instrument_17.insert(InterestAccrualDate_17.getString());
    FIX::IssueDate IssueDate_17("LOCALMKTDATE_2091084573");
    noRelatedSym_0_1.set(IssueDate_17);
    Instrument_17.insert(IssueDate_17.getString());
    FIX::Issuer Issuer_17("STRING_2117699633");
    noRelatedSym_0_1.set(Issuer_17);
    Instrument_17.insert(Issuer_17.getString());
    FIX::ListMethod ListMethod_17(0);
    noRelatedSym_0_1.set(ListMethod_17);
    Instrument_17.insert(ListMethod_17.getString());
    FIX::LocaleOfIssue LocaleOfIssue_17("STRING_2001455704");
    noRelatedSym_0_1.set(LocaleOfIssue_17);
    Instrument_17.insert(LocaleOfIssue_17.getString());
    FIX::MaturityDate MaturityDate_17("LOCALMKTDATE_1669137956");
    noRelatedSym_0_1.set(MaturityDate_17);
    Instrument_17.insert(MaturityDate_17.getString());
    FIX::MaturityMonthYear MaturityMonthYear_17("MONTHYEAR_288978006");
    noRelatedSym_0_1.set(MaturityMonthYear_17);
    Instrument_17.insert(MaturityMonthYear_17.getString());
    FIX::MaturityTime MaturityTime_17("TZTIMEONLY_1726619229");
    noRelatedSym_0_1.set(MaturityTime_17);
    Instrument_17.insert(MaturityTime_17.getString());
    FIX::MinPriceIncrement MinPriceIncrement_17;
    MinPriceIncrement_17.setString("693865");
    noRelatedSym_0_1.set(MinPriceIncrement_17);
    Instrument_17.insert(MinPriceIncrement_17.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_17;
    MinPriceIncrementAmount_17.setString("4613798");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_17);
    Instrument_17.insert(MinPriceIncrementAmount_17.getString());
    FIX::NTPositionLimit NTPositionLimit_17(1628751911);
    noRelatedSym_0_1.set(NTPositionLimit_17);
    Instrument_17.insert(NTPositionLimit_17.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_17;
    NotionalPercentageOutstanding_17.setString("3.870000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_17);
    Instrument_17.insert(NotionalPercentageOutstanding_17.getString());
    FIX::OptAttribute OptAttribute_17('6');
    noRelatedSym_0_1.set(OptAttribute_17);
    Instrument_17.insert(OptAttribute_17.getString());
    FIX::OptPayoutAmount OptPayoutAmount_17;
    OptPayoutAmount_17.setString("20807580");
    noRelatedSym_0_1.set(OptPayoutAmount_17);
    Instrument_17.insert(OptPayoutAmount_17.getString());
    FIX::OptPayoutType OptPayoutType_17(2);
    noRelatedSym_0_1.set(OptPayoutType_17);
    Instrument_17.insert(OptPayoutType_17.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_17;
    OriginalNotionalPercentageOutstanding_17.setString("86.090000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_17);
    Instrument_17.insert(OriginalNotionalPercentageOutstanding_17.getString());
    FIX::Pool Pool_17("STRING_780971805");
    noRelatedSym_0_1.set(Pool_17);
    Instrument_17.insert(Pool_17.getString());
    FIX::PositionLimit PositionLimit_17(1512011172);
    noRelatedSym_0_1.set(PositionLimit_17);
    Instrument_17.insert(PositionLimit_17.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_17("STRING_INT");
    noRelatedSym_0_1.set(PriceQuoteMethod_17);
    Instrument_17.insert(PriceQuoteMethod_17.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_17("STRING_749028040");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_17);
    Instrument_17.insert(PriceUnitOfMeasure_17.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_17;
    PriceUnitOfMeasureQty_17.setString("13180168");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_17);
    Instrument_17.insert(PriceUnitOfMeasureQty_17.getString());
    FIX::Product Product_19(8);
    noRelatedSym_0_1.set(Product_19);
    Instrument_17.insert(Product_19.getString());
    FIX::ProductComplex ProductComplex_17("STRING_467374389");
    noRelatedSym_0_1.set(ProductComplex_17);
    Instrument_17.insert(ProductComplex_17.getString());
    FIX::PutOrCall PutOrCall_17(0);
    noRelatedSym_0_1.set(PutOrCall_17);
    Instrument_17.insert(PutOrCall_17.getString());
    FIX::RedemptionDate RedemptionDate_17("LOCALMKTDATE_48773531");
    noRelatedSym_0_1.set(RedemptionDate_17);
    Instrument_17.insert(RedemptionDate_17.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_17("STRING_1708821504");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_17);
    Instrument_17.insert(RepoCollateralSecurityType_17.getString());
    FIX::RepurchaseRate RepurchaseRate_17;
    RepurchaseRate_17.setString("29.440000");
    noRelatedSym_0_1.set(RepurchaseRate_17);
    Instrument_17.insert(RepurchaseRate_17.getString());
    FIX::RepurchaseTerm RepurchaseTerm_17(325109130);
    noRelatedSym_0_1.set(RepurchaseTerm_17);
    Instrument_17.insert(RepurchaseTerm_17.getString());
    FIX::RestructuringType RestructuringType_17("STRING_MR");
    noRelatedSym_0_1.set(RestructuringType_17);
    Instrument_17.insert(RestructuringType_17.getString());
    FIX::SecurityDesc SecurityDesc_17("STRING_738854944");
    noRelatedSym_0_1.set(SecurityDesc_17);
    Instrument_17.insert(SecurityDesc_17.getString());
    FIX::SecurityExchange SecurityExchange_17("EXCHANGE_1938400193");
    noRelatedSym_0_1.set(SecurityExchange_17);
    Instrument_17.insert(SecurityExchange_17.getString());
    FIX::SecurityGroup SecurityGroup_17("STRING_1457149971");
    noRelatedSym_0_1.set(SecurityGroup_17);
    Instrument_17.insert(SecurityGroup_17.getString());
    FIX::SecurityID SecurityID_17("STRING_682455869");
    noRelatedSym_0_1.set(SecurityID_17);
    Instrument_17.insert(SecurityID_17.getString());
    FIX::SecurityIDSource SecurityIDSource_17("STRING_K");
    noRelatedSym_0_1.set(SecurityIDSource_17);
    Instrument_17.insert(SecurityIDSource_17.getString());
    FIX::SecurityStatus SecurityStatus_17("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_17);
    Instrument_17.insert(SecurityStatus_17.getString());
    FIX::SecuritySubType SecuritySubType_17("STRING_536427926");
    noRelatedSym_0_1.set(SecuritySubType_17);
    Instrument_17.insert(SecuritySubType_17.getString());
    FIX::SecurityType SecurityType_19("STRING_TINT");
    noRelatedSym_0_1.set(SecurityType_19);
    Instrument_17.insert(SecurityType_19.getString());
    FIX::Seniority Seniority_17("STRING_SD");
    noRelatedSym_0_1.set(Seniority_17);
    Instrument_17.insert(Seniority_17.getString());
    FIX::SettlMethod SettlMethod_17('P');
    noRelatedSym_0_1.set(SettlMethod_17);
    Instrument_17.insert(SettlMethod_17.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_17("STRING_1499657024");
    noRelatedSym_0_1.set(SettleOnOpenFlag_17);
    Instrument_17.insert(SettleOnOpenFlag_17.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_17("STRING_2074533905");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_17);
    Instrument_17.insert(StateOrProvinceOfIssue_17.getString());
    FIX::StrikeCurrency StrikeCurrency_17("JPY");
    noRelatedSym_0_1.set(StrikeCurrency_17);
    Instrument_17.insert(StrikeCurrency_17.getString());
    FIX::StrikeMultiplier StrikeMultiplier_17;
    StrikeMultiplier_17.setString("5357795");
    noRelatedSym_0_1.set(StrikeMultiplier_17);
    Instrument_17.insert(StrikeMultiplier_17.getString());
    FIX::StrikePrice StrikePrice_17;
    StrikePrice_17.setString("16775898");
    noRelatedSym_0_1.set(StrikePrice_17);
    Instrument_17.insert(StrikePrice_17.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_17(4);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_17);
    Instrument_17.insert(StrikePriceBoundaryMethod_17.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_17;
    StrikePriceBoundaryPrecision_17.setString("81.510000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_17);
    Instrument_17.insert(StrikePriceBoundaryPrecision_17.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_17(2);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_17);
    Instrument_17.insert(StrikePriceDeterminationMethod_17.getString());
    FIX::StrikeValue StrikeValue_17;
    StrikeValue_17.setString("10764115");
    noRelatedSym_0_1.set(StrikeValue_17);
    Instrument_17.insert(StrikeValue_17.getString());
    FIX::Symbol Symbol_17("STRING_1207055138");
    noRelatedSym_0_1.set(Symbol_17);
    Instrument_17.insert(Symbol_17.getString());
    FIX::SymbolSfx SymbolSfx_17("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_17);
    Instrument_17.insert(SymbolSfx_17.getString());
    FIX::TimeUnit TimeUnit_17("STRING_D");
    noRelatedSym_0_1.set(TimeUnit_17);
    Instrument_17.insert(TimeUnit_17.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_17(1);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_17);
    Instrument_17.insert(UnderlyingPriceDeterminationMethod_17.getString());
    FIX::UnitOfMeasure UnitOfMeasure_17("STRING_tn");
    noRelatedSym_0_1.set(UnitOfMeasure_17);
    Instrument_17.insert(UnitOfMeasure_17.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_17;
    UnitOfMeasureQty_17.setString("17060456");
    noRelatedSym_0_1.set(UnitOfMeasureQty_17);
    Instrument_17.insert(UnitOfMeasureQty_17.getString());
    FIX::ValuationMethod ValuationMethod_17("STRING_CDSD");
    noRelatedSym_0_1.set(ValuationMethod_17);
    Instrument_17.insert(ValuationMethod_17.getString());
    all_values.push_back(Instrument_17);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_38;
      FIX::ComplexEventCondition ComplexEventCondition_38(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventCondition_38.getString());
      FIX::ComplexEventPrice ComplexEventPrice_38;
      ComplexEventPrice_38.setString("1746256");
      noComplexEvents_1_1_0.set(ComplexEventPrice_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPrice_38.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_38(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceBoundaryMethod_38.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_38;
      ComplexEventPriceBoundaryPrecision_38.setString("62.530000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceBoundaryPrecision_38.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_38(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceTimeType_38.getString());
      FIX::ComplexEventType ComplexEventType_38(5);
      noComplexEvents_1_1_0.set(ComplexEventType_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventType_38.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_38;
      ComplexOptPayoutAmount_38.setString("8145321");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexOptPayoutAmount_38.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_38);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_81;
        FIX::ComplexEventEndDate ComplexEventEndDate_81(FIX::UTCTIMESTAMP(1, 5, 14, 8, 6, 2012));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_81);
        ComplexEventDates_NoComplexEventDates_81.insert(ComplexEventEndDate_81.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_81(FIX::UTCTIMESTAMP(1, 14, 10, 4, 11, 2007));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_81);
        ComplexEventDates_NoComplexEventDates_81.insert(ComplexEventStartDate_81.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_81);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_165;
          FIX::ComplexEventEndTime ComplexEventEndTime_165(FIX::UTCTIMEONLY(9, 38, 8));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_165);
          ComplexEventTimes_NoComplexEventTimes_165.insert(ComplexEventEndTime_165.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_165(FIX::UTCTIMEONLY(3, 7, 9));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_165);
          ComplexEventTimes_NoComplexEventTimes_165.insert(ComplexEventStartTime_165.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_165);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_39;
      FIX::ComplexEventCondition ComplexEventCondition_39(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventCondition_39.getString());
      FIX::ComplexEventPrice ComplexEventPrice_39;
      ComplexEventPrice_39.setString("570247");
      noComplexEvents_1_1_1.set(ComplexEventPrice_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPrice_39.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_39(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceBoundaryMethod_39.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_39;
      ComplexEventPriceBoundaryPrecision_39.setString("86.940000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceBoundaryPrecision_39.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_39(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceTimeType_39.getString());
      FIX::ComplexEventType ComplexEventType_39(9);
      noComplexEvents_1_1_1.set(ComplexEventType_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventType_39.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_39;
      ComplexOptPayoutAmount_39.setString("12069808");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexOptPayoutAmount_39.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_39);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_82;
        FIX::ComplexEventEndDate ComplexEventEndDate_82(FIX::UTCTIMESTAMP(2, 9, 43, 18, 3, 2017));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_82);
        ComplexEventDates_NoComplexEventDates_82.insert(ComplexEventEndDate_82.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_82(FIX::UTCTIMESTAMP(16, 54, 42, 20, 5, 2011));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_82);
        ComplexEventDates_NoComplexEventDates_82.insert(ComplexEventStartDate_82.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_82);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_166;
          FIX::ComplexEventEndTime ComplexEventEndTime_166(FIX::UTCTIMEONLY(15, 34, 28));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_166);
          ComplexEventTimes_NoComplexEventTimes_166.insert(ComplexEventEndTime_166.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_166(FIX::UTCTIMEONLY(6, 27, 5));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_166);
          ComplexEventTimes_NoComplexEventTimes_166.insert(ComplexEventStartTime_166.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_166);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_167;
          FIX::ComplexEventEndTime ComplexEventEndTime_167(FIX::UTCTIMEONLY(23, 3, 32));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_167);
          ComplexEventTimes_NoComplexEventTimes_167.insert(ComplexEventEndTime_167.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_167(FIX::UTCTIMEONLY(5, 21, 17));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_167);
          ComplexEventTimes_NoComplexEventTimes_167.insert(ComplexEventStartTime_167.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_167);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_168;
          FIX::ComplexEventEndTime ComplexEventEndTime_168(FIX::UTCTIMEONLY(23, 26, 54));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventEndTime_168);
          ComplexEventTimes_NoComplexEventTimes_168.insert(ComplexEventEndTime_168.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_168(FIX::UTCTIMEONLY(9, 33, 17));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventStartTime_168);
          ComplexEventTimes_NoComplexEventTimes_168.insert(ComplexEventStartTime_168.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_168);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_34;
      FIX::EventDate EventDate_34("LOCALMKTDATE_162600507");
      noEvents_1_1_0.set(EventDate_34);
      EvntGrp_NoEvents_34.insert(EventDate_34.getString());
      FIX::EventPx EventPx_34;
      EventPx_34.setString("6477432");
      noEvents_1_1_0.set(EventPx_34);
      EvntGrp_NoEvents_34.insert(EventPx_34.getString());
      FIX::EventText EventText_34("STRING_705527865");
      noEvents_1_1_0.set(EventText_34);
      EvntGrp_NoEvents_34.insert(EventText_34.getString());
      FIX::EventTime EventTime_34(FIX::UTCTIMESTAMP(9, 41, 31, 20, 9, 2005));
      noEvents_1_1_0.set(EventTime_34);
      EvntGrp_NoEvents_34.insert(EventTime_34.getString());
      FIX::EventType EventType_34(17);
      noEvents_1_1_0.set(EventType_34);
      EvntGrp_NoEvents_34.insert(EventType_34.getString());
      all_values.push_back(EvntGrp_NoEvents_34);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_35;
      FIX::EventDate EventDate_35("LOCALMKTDATE_2101483646");
      noEvents_1_1_1.set(EventDate_35);
      EvntGrp_NoEvents_35.insert(EventDate_35.getString());
      FIX::EventPx EventPx_35;
      EventPx_35.setString("12831107");
      noEvents_1_1_1.set(EventPx_35);
      EvntGrp_NoEvents_35.insert(EventPx_35.getString());
      FIX::EventText EventText_35("STRING_1500486033");
      noEvents_1_1_1.set(EventText_35);
      EvntGrp_NoEvents_35.insert(EventText_35.getString());
      FIX::EventTime EventTime_35(FIX::UTCTIMESTAMP(21, 28, 41, 7, 10, 2002));
      noEvents_1_1_1.set(EventTime_35);
      EvntGrp_NoEvents_35.insert(EventTime_35.getString());
      FIX::EventType EventType_35(1);
      noEvents_1_1_1.set(EventType_35);
      EvntGrp_NoEvents_35.insert(EventType_35.getString());
      all_values.push_back(EvntGrp_NoEvents_35);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_36;
      FIX::EventDate EventDate_36("LOCALMKTDATE_45598692");
      noEvents_1_1_2.set(EventDate_36);
      EvntGrp_NoEvents_36.insert(EventDate_36.getString());
      FIX::EventPx EventPx_36;
      EventPx_36.setString("16099551");
      noEvents_1_1_2.set(EventPx_36);
      EvntGrp_NoEvents_36.insert(EventPx_36.getString());
      FIX::EventText EventText_36("STRING_901709319");
      noEvents_1_1_2.set(EventText_36);
      EvntGrp_NoEvents_36.insert(EventText_36.getString());
      FIX::EventTime EventTime_36(FIX::UTCTIMESTAMP(3, 40, 31, 9, 10, 2017));
      noEvents_1_1_2.set(EventTime_36);
      EvntGrp_NoEvents_36.insert(EventTime_36.getString());
      FIX::EventType EventType_36(9);
      noEvents_1_1_2.set(EventType_36);
      EvntGrp_NoEvents_36.insert(EventType_36.getString());
      all_values.push_back(EvntGrp_NoEvents_36);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_32;
      FIX::InstrumentPartyID InstrumentPartyID_32("STRING_1525147818");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_32);
      InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyID_32.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_32('7');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_32);
      InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyIDSource_32.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_32(1127956816);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_32);
      InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyRole_32.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_32);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64;
        FIX::InstrumentPartySubID InstrumentPartySubID_64("STRING_1530462305");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_64);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64.insert(InstrumentPartySubID_64.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_64(318168976);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_64);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64.insert(InstrumentPartySubIDType_64.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_29;
      FIX::SecurityAltID SecurityAltID_29("STRING_1439797413");
      noSecurityAltID_1_1_0.set(SecurityAltID_29);
      SecAltIDGrp_NoSecurityAltID_29.insert(SecurityAltID_29.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_29("STRING_272168974");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_29);
      SecAltIDGrp_NoSecurityAltID_29.insert(SecurityAltIDSource_29.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_29);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_30;
      FIX::SecurityAltID SecurityAltID_30("STRING_1236444472");
      noSecurityAltID_1_1_1.set(SecurityAltID_30);
      SecAltIDGrp_NoSecurityAltID_30.insert(SecurityAltID_30.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_30("STRING_792799798");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_30);
      SecAltIDGrp_NoSecurityAltID_30.insert(SecurityAltIDSource_30.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_30);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_31;
      FIX::SecurityAltID SecurityAltID_31("STRING_1250329250");
      noSecurityAltID_1_1_2.set(SecurityAltID_31);
      SecAltIDGrp_NoSecurityAltID_31.insert(SecurityAltID_31.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_31("STRING_1769241229");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_31);
      SecAltIDGrp_NoSecurityAltID_31.insert(SecurityAltIDSource_31.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_31);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_34;
    FIX::SecurityXML SecurityXML_35("XMLDATA_1157477366");
    noRelatedSym_0_1.set(SecurityXML_35);
    FIX::SecurityXMLLen SecurityXMLLen_17(1497614851);
    noRelatedSym_0_1.set(SecurityXMLLen_17);
    FIX::SecurityXMLSchema SecurityXMLSchema_17("STRING_1574290912");
    noRelatedSym_0_1.set(SecurityXMLSchema_17);
    SecurityXML_34.insert(SecurityXMLSchema_17.getString());
    all_values.push_back(SecurityXML_34);
    all_compo_names.insert("SecurityXML");

    // InstrumentExtension
    multiset<string> InstrumentExtension_5;
    FIX::DeliveryForm DeliveryForm_5(1);
    noRelatedSym_0_1.set(DeliveryForm_5);
    InstrumentExtension_5.insert(DeliveryForm_5.getString());
    FIX::PctAtRisk PctAtRisk_5;
    PctAtRisk_5.setString("29.460000");
    noRelatedSym_0_1.set(PctAtRisk_5);
    InstrumentExtension_5.insert(PctAtRisk_5.getString());
    all_values.push_back(InstrumentExtension_5);
    all_compo_names.insert("InstrumentExtension");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_9;
      FIX::InstrAttribType InstrAttribType_9(11);
      noInstrAttrib_1_1_0.set(InstrAttribType_9);
      AttrbGrp_NoInstrAttrib_9.insert(InstrAttribType_9.getString());
      FIX::InstrAttribValue InstrAttribValue_9("STRING_1683478048");
      noInstrAttrib_1_1_0.set(InstrAttribValue_9);
      AttrbGrp_NoInstrAttrib_9.insert(InstrAttribValue_9.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_9);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_10;
      FIX::InstrAttribType InstrAttribType_10(15);
      noInstrAttrib_1_1_1.set(InstrAttribType_10);
      AttrbGrp_NoInstrAttrib_10.insert(InstrAttribType_10.getString());
      FIX::InstrAttribValue InstrAttribValue_10("STRING_308944898");
      noInstrAttrib_1_1_1.set(InstrAttribValue_10);
      AttrbGrp_NoInstrAttrib_10.insert(InstrAttribValue_10.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_10);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_11;
      FIX::InstrAttribType InstrAttribType_11(8);
      noInstrAttrib_1_1_2.set(InstrAttribType_11);
      AttrbGrp_NoInstrAttrib_11.insert(InstrAttribType_11.getString());
      FIX::InstrAttribValue InstrAttribValue_11("STRING_1399757004");
      noInstrAttrib_1_1_2.set(InstrAttribValue_11);
      AttrbGrp_NoInstrAttrib_11.insert(InstrAttribValue_11.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_11);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_2);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_1;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_1;
    SecondaryHighLimitPrice_1.setString("3161680");
    noRelatedSym_0_1.set(SecondaryHighLimitPrice_1);
    SecondaryPriceLimits_1.insert(SecondaryHighLimitPrice_1.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_1;
    SecondaryLowLimitPrice_1.setString("11019712");
    noRelatedSym_0_1.set(SecondaryLowLimitPrice_1);
    SecondaryPriceLimits_1.insert(SecondaryLowLimitPrice_1.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_1(381126853);
    noRelatedSym_0_1.set(SecondaryPriceLimitType_1);
    SecondaryPriceLimits_1.insert(SecondaryPriceLimitType_1.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_1;
    SecondaryTradingReferencePrice_1.setString("4859917");
    noRelatedSym_0_1.set(SecondaryTradingReferencePrice_1);
    SecondaryPriceLimits_1.insert(SecondaryTradingReferencePrice_1.getString());
    all_values.push_back(SecondaryPriceLimits_1);
    all_compo_names.insert("SecondaryPriceLimits");

    msg.addGroup(noRelatedSym_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_32;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_32("DATA_1089675697");
  msg.set(EncodedUnderlyingIssuer_32);
  UnderlyingInstrument_32.insert(EncodedUnderlyingIssuer_32.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_32(68024567);
  msg.set(EncodedUnderlyingIssuerLen_32);
  UnderlyingInstrument_32.insert(EncodedUnderlyingIssuerLen_32.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_32("DATA_2011139607");
  msg.set(EncodedUnderlyingSecurityDesc_32);
  UnderlyingInstrument_32.insert(EncodedUnderlyingSecurityDesc_32.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_32(1868493242);
  msg.set(EncodedUnderlyingSecurityDescLen_32);
  UnderlyingInstrument_32.insert(EncodedUnderlyingSecurityDescLen_32.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_32;
  UnderlyingAdjustedQuantity_32.setString("11959813");
  msg.set(UnderlyingAdjustedQuantity_32);
  UnderlyingInstrument_32.insert(UnderlyingAdjustedQuantity_32.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_32;
  UnderlyingAllocationPercent_32.setString("74.690000");
  msg.set(UnderlyingAllocationPercent_32);
  UnderlyingInstrument_32.insert(UnderlyingAllocationPercent_32.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_32;
  UnderlyingAttachmentPoint_32.setString("19.000000");
  msg.set(UnderlyingAttachmentPoint_32);
  UnderlyingInstrument_32.insert(UnderlyingAttachmentPoint_32.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_32("STRING_1514150359");
  msg.set(UnderlyingCFICode_32);
  UnderlyingInstrument_32.insert(UnderlyingCFICode_32.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_32("STRING_1974841182");
  msg.set(UnderlyingCPProgram_32);
  UnderlyingInstrument_32.insert(UnderlyingCPProgram_32.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_32("STRING_543785665");
  msg.set(UnderlyingCPRegType_32);
  UnderlyingInstrument_32.insert(UnderlyingCPRegType_32.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_32;
  UnderlyingCapValue_32.setString("17863193");
  msg.set(UnderlyingCapValue_32);
  UnderlyingInstrument_32.insert(UnderlyingCapValue_32.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_32;
  UnderlyingCashAmount_32.setString("10638020");
  msg.set(UnderlyingCashAmount_32);
  UnderlyingInstrument_32.insert(UnderlyingCashAmount_32.getString());
  FIX::UnderlyingCashType UnderlyingCashType_32("STRING_FIXED");
  msg.set(UnderlyingCashType_32);
  UnderlyingInstrument_32.insert(UnderlyingCashType_32.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_32;
  UnderlyingContractMultiplier_32.setString("8891649");
  msg.set(UnderlyingContractMultiplier_32);
  UnderlyingInstrument_32.insert(UnderlyingContractMultiplier_32.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_32(685559588);
  msg.set(UnderlyingContractMultiplierUnit_32);
  UnderlyingInstrument_32.insert(UnderlyingContractMultiplierUnit_32.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_32("COUNTRY_346579182");
  msg.set(UnderlyingCountryOfIssue_32);
  UnderlyingInstrument_32.insert(UnderlyingCountryOfIssue_32.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_32("LOCALMKTDATE_239296139");
  msg.set(UnderlyingCouponPaymentDate_32);
  UnderlyingInstrument_32.insert(UnderlyingCouponPaymentDate_32.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_32;
  UnderlyingCouponRate_32.setString("68.520000");
  msg.set(UnderlyingCouponRate_32);
  UnderlyingInstrument_32.insert(UnderlyingCouponRate_32.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_32("STRING_745147210");
  msg.set(UnderlyingCreditRating_32);
  UnderlyingInstrument_32.insert(UnderlyingCreditRating_32.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_32("CHF");
  msg.set(UnderlyingCurrency_32);
  UnderlyingInstrument_32.insert(UnderlyingCurrency_32.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_32;
  UnderlyingCurrentValue_32.setString("11893139");
  msg.set(UnderlyingCurrentValue_32);
  UnderlyingInstrument_32.insert(UnderlyingCurrentValue_32.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_32;
  UnderlyingDetachmentPoint_32.setString("71.330000");
  msg.set(UnderlyingDetachmentPoint_32);
  UnderlyingInstrument_32.insert(UnderlyingDetachmentPoint_32.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_32;
  UnderlyingDirtyPrice_32.setString("18157465");
  msg.set(UnderlyingDirtyPrice_32);
  UnderlyingInstrument_32.insert(UnderlyingDirtyPrice_32.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_32;
  UnderlyingEndPrice_32.setString("14982588");
  msg.set(UnderlyingEndPrice_32);
  UnderlyingInstrument_32.insert(UnderlyingEndPrice_32.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_32;
  UnderlyingEndValue_32.setString("16108234");
  msg.set(UnderlyingEndValue_32);
  UnderlyingInstrument_32.insert(UnderlyingEndValue_32.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_32(1068019857);
  msg.set(UnderlyingExerciseStyle_32);
  UnderlyingInstrument_32.insert(UnderlyingExerciseStyle_32.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_32;
  UnderlyingFXRate_32.setString("18144269");
  msg.set(UnderlyingFXRate_32);
  UnderlyingInstrument_32.insert(UnderlyingFXRate_32.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_32('M');
  msg.set(UnderlyingFXRateCalc_32);
  UnderlyingInstrument_32.insert(UnderlyingFXRateCalc_32.getString());
  FIX::UnderlyingFactor UnderlyingFactor_32;
  UnderlyingFactor_32.setString("14491467");
  msg.set(UnderlyingFactor_32);
  UnderlyingInstrument_32.insert(UnderlyingFactor_32.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_32(152935058);
  msg.set(UnderlyingFlowScheduleType_32);
  UnderlyingInstrument_32.insert(UnderlyingFlowScheduleType_32.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_32("STRING_1654986738");
  msg.set(UnderlyingInstrRegistry_32);
  UnderlyingInstrument_32.insert(UnderlyingInstrRegistry_32.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_32("LOCALMKTDATE_1517171278");
  msg.set(UnderlyingIssueDate_32);
  UnderlyingInstrument_32.insert(UnderlyingIssueDate_32.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_32("STRING_16591017");
  msg.set(UnderlyingIssuer_32);
  UnderlyingInstrument_32.insert(UnderlyingIssuer_32.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_32("STRING_1375996333");
  msg.set(UnderlyingLocaleOfIssue_32);
  UnderlyingInstrument_32.insert(UnderlyingLocaleOfIssue_32.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_32("LOCALMKTDATE_565669013");
  msg.set(UnderlyingMaturityDate_32);
  UnderlyingInstrument_32.insert(UnderlyingMaturityDate_32.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_32("MONTHYEAR_2038098486");
  msg.set(UnderlyingMaturityMonthYear_32);
  UnderlyingInstrument_32.insert(UnderlyingMaturityMonthYear_32.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_32("TZTIMEONLY_479984585");
  msg.set(UnderlyingMaturityTime_32);
  UnderlyingInstrument_32.insert(UnderlyingMaturityTime_32.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_32;
  UnderlyingNotionalPercentageOutstanding_32.setString("93.730000");
  msg.set(UnderlyingNotionalPercentageOutstanding_32);
  UnderlyingInstrument_32.insert(UnderlyingNotionalPercentageOutstanding_32.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_32('1');
  msg.set(UnderlyingOptAttribute_32);
  UnderlyingInstrument_32.insert(UnderlyingOptAttribute_32.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_32;
  UnderlyingOriginalNotionalPercentageOutstanding_32.setString("2.500000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_32);
  UnderlyingInstrument_32.insert(UnderlyingOriginalNotionalPercentageOutstanding_32.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_32("STRING_1718655058");
  msg.set(UnderlyingPriceUnitOfMeasure_32);
  UnderlyingInstrument_32.insert(UnderlyingPriceUnitOfMeasure_32.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_32;
  UnderlyingPriceUnitOfMeasureQty_32.setString("7817743");
  msg.set(UnderlyingPriceUnitOfMeasureQty_32);
  UnderlyingInstrument_32.insert(UnderlyingPriceUnitOfMeasureQty_32.getString());
  FIX::UnderlyingProduct UnderlyingProduct_32(212872066);
  msg.set(UnderlyingProduct_32);
  UnderlyingInstrument_32.insert(UnderlyingProduct_32.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_32(460336346);
  msg.set(UnderlyingPutOrCall_32);
  UnderlyingInstrument_32.insert(UnderlyingPutOrCall_32.getString());
  FIX::UnderlyingPx UnderlyingPx_32;
  UnderlyingPx_32.setString("14673339");
  msg.set(UnderlyingPx_32);
  UnderlyingInstrument_32.insert(UnderlyingPx_32.getString());
  FIX::UnderlyingQty UnderlyingQty_32;
  UnderlyingQty_32.setString("5594512");
  msg.set(UnderlyingQty_32);
  UnderlyingInstrument_32.insert(UnderlyingQty_32.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_32("LOCALMKTDATE_699632486");
  msg.set(UnderlyingRedemptionDate_32);
  UnderlyingInstrument_32.insert(UnderlyingRedemptionDate_32.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_32("STRING_1579700820");
  msg.set(UnderlyingRepoCollateralSecurityType_32);
  UnderlyingInstrument_32.insert(UnderlyingRepoCollateralSecurityType_32.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_32;
  UnderlyingRepurchaseRate_32.setString("84.590000");
  msg.set(UnderlyingRepurchaseRate_32);
  UnderlyingInstrument_32.insert(UnderlyingRepurchaseRate_32.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_32(1012451571);
  msg.set(UnderlyingRepurchaseTerm_32);
  UnderlyingInstrument_32.insert(UnderlyingRepurchaseTerm_32.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_32("STRING_2092902837");
  msg.set(UnderlyingRestructuringType_32);
  UnderlyingInstrument_32.insert(UnderlyingRestructuringType_32.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_32("STRING_346428742");
  msg.set(UnderlyingSecurityDesc_32);
  UnderlyingInstrument_32.insert(UnderlyingSecurityDesc_32.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_32("EXCHANGE_861265057");
  msg.set(UnderlyingSecurityExchange_32);
  UnderlyingInstrument_32.insert(UnderlyingSecurityExchange_32.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_32("STRING_1761165691");
  msg.set(UnderlyingSecurityID_32);
  UnderlyingInstrument_32.insert(UnderlyingSecurityID_32.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_32("STRING_1844687570");
  msg.set(UnderlyingSecurityIDSource_32);
  UnderlyingInstrument_32.insert(UnderlyingSecurityIDSource_32.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_32("STRING_324604882");
  msg.set(UnderlyingSecuritySubType_32);
  UnderlyingInstrument_32.insert(UnderlyingSecuritySubType_32.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_32("STRING_681701900");
  msg.set(UnderlyingSecurityType_32);
  UnderlyingInstrument_32.insert(UnderlyingSecurityType_32.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_32("STRING_1511630840");
  msg.set(UnderlyingSeniority_32);
  UnderlyingInstrument_32.insert(UnderlyingSeniority_32.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_32("STRING_889915923");
  msg.set(UnderlyingSettlMethod_32);
  UnderlyingInstrument_32.insert(UnderlyingSettlMethod_32.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_32(4);
  msg.set(UnderlyingSettlementType_32);
  UnderlyingInstrument_32.insert(UnderlyingSettlementType_32.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_32;
  UnderlyingStartValue_32.setString("16645658");
  msg.set(UnderlyingStartValue_32);
  UnderlyingInstrument_32.insert(UnderlyingStartValue_32.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_32("STRING_397419014");
  msg.set(UnderlyingStateOrProvinceOfIssue_32);
  UnderlyingInstrument_32.insert(UnderlyingStateOrProvinceOfIssue_32.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_32("GBP");
  msg.set(UnderlyingStrikeCurrency_32);
  UnderlyingInstrument_32.insert(UnderlyingStrikeCurrency_32.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_32;
  UnderlyingStrikePrice_32.setString("17734153");
  msg.set(UnderlyingStrikePrice_32);
  UnderlyingInstrument_32.insert(UnderlyingStrikePrice_32.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_32("STRING_2066205254");
  msg.set(UnderlyingSymbol_32);
  UnderlyingInstrument_32.insert(UnderlyingSymbol_32.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_32("STRING_1571771755");
  msg.set(UnderlyingSymbolSfx_32);
  UnderlyingInstrument_32.insert(UnderlyingSymbolSfx_32.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_32("STRING_105916284");
  msg.set(UnderlyingTimeUnit_32);
  UnderlyingInstrument_32.insert(UnderlyingTimeUnit_32.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_32("STRING_1998540979");
  msg.set(UnderlyingUnitOfMeasure_32);
  UnderlyingInstrument_32.insert(UnderlyingUnitOfMeasure_32.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_32;
  UnderlyingUnitOfMeasureQty_32.setString("12897441");
  msg.set(UnderlyingUnitOfMeasureQty_32);
  UnderlyingInstrument_32.insert(UnderlyingUnitOfMeasureQty_32.getString());
  all_values.push_back(UnderlyingInstrument_32);
  all_compo_names.insert("UnderlyingInstrument");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_70;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_70("STRING_1569712390");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_70);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_70.insert(UnderlyingSecurityAltID_70.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_70("STRING_2071518507");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_70);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_70.insert(UnderlyingSecurityAltIDSource_70.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_70);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_64;
    FIX::UnderlyingStipType UnderlyingStipType_64("STRING_2030048736");
    noUnderlyingStips_0_0.set(UnderlyingStipType_64);
    UnderlyingStipulations_NoUnderlyingStips_64.insert(UnderlyingStipType_64.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_64("STRING_1391368827");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_64);
    UnderlyingStipulations_NoUnderlyingStips_64.insert(UnderlyingStipValue_64.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_64);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_65;
    FIX::UnderlyingStipType UnderlyingStipType_65("STRING_1902009850");
    noUnderlyingStips_0_1.set(UnderlyingStipType_65);
    UnderlyingStipulations_NoUnderlyingStips_65.insert(UnderlyingStipType_65.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_65("STRING_582197574");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_65);
    UnderlyingStipulations_NoUnderlyingStips_65.insert(UnderlyingStipValue_65.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_65);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_66;
    FIX::UnderlyingStipType UnderlyingStipType_66("STRING_823585999");
    noUnderlyingStips_0_2.set(UnderlyingStipType_66);
    UnderlyingStipulations_NoUnderlyingStips_66.insert(UnderlyingStipType_66.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_66("STRING_1059124661");
    noUnderlyingStips_0_2.set(UnderlyingStipValue_66);
    UnderlyingStipulations_NoUnderlyingStips_66.insert(UnderlyingStipValue_66.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_66);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_62;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_62("STRING_769005188");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_62);
    UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyID_62.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_62('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_62);
    UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyIDSource_62.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_62(308430555);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_62);
    UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyRole_62.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_62);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_124("STRING_1102757326");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_124);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124.insert(UnderlyingInstrumentPartySubID_124.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_124(633035437);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_124);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124.insert(UnderlyingInstrumentPartySubIDType_124.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_125("STRING_1064389132");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_125);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125.insert(UnderlyingInstrumentPartySubID_125.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_125(466904518);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_125);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125.insert(UnderlyingInstrumentPartySubIDType_125.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_63;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_63("STRING_1522951360");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_63);
    UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyID_63.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_63('1');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_63);
    UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyIDSource_63.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_63(2131470417);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_63);
    UndlyInstrumentParties_NoUndlyInstrumentParties_63.insert(UnderlyingInstrumentPartyRole_63.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_63);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_126("STRING_400806688");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_126);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126.insert(UnderlyingInstrumentPartySubID_126.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_126(1665143686);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_126);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126.insert(UnderlyingInstrumentPartySubIDType_126.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

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
