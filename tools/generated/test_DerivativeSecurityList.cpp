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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::DerivativeSecurityList msg;

  list<multiset<string>> all_values;
  multiset<string> DerivativeSecurityList_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_13("LOCALMKTDATE_754295921");
  msg.set(ClearingBusinessDate_13);
  DerivativeSecurityList_0.insert(ClearingBusinessDate_13.getString());
  FIX::LastFragment LastFragment_3(true);
  msg.set(LastFragment_3);
  DerivativeSecurityList_0.insert(LastFragment_3.getString());
  FIX::SecurityReportID SecurityReportID_0(2114193723);
  msg.set(SecurityReportID_0);
  DerivativeSecurityList_0.insert(SecurityReportID_0.getString());
  FIX::SecurityReqID SecurityReqID_0("STRING_759350866");
  msg.set(SecurityReqID_0);
  DerivativeSecurityList_0.insert(SecurityReqID_0.getString());
  FIX::SecurityRequestResult SecurityRequestResult_0(5);
  msg.set(SecurityRequestResult_0);
  DerivativeSecurityList_0.insert(SecurityRequestResult_0.getString());
  FIX::SecurityResponseID SecurityResponseID_0("STRING_623674602");
  msg.set(SecurityResponseID_0);
  DerivativeSecurityList_0.insert(SecurityResponseID_0.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_1(1047028903);
  msg.set(TotNoRelatedSym_1);
  DerivativeSecurityList_0.insert(TotNoRelatedSym_1.getString());
  FIX::TransactTime TransactTime_16(FIX::UTCTIMESTAMP(14, 6, 50, 5, 92007));
  msg.set(TransactTime_16);
  DerivativeSecurityList_0.insert(TransactTime_16.getString());
  all_values.push_back(DerivativeSecurityList_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_2;
  FIX::ApplID ApplID_2("STRING_1669283305");
  msg.set(ApplID_2);
  ApplicationSequenceControl_2.insert(ApplID_2.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_2(1524672448);
  msg.set(ApplLastSeqNum_2);
  ApplicationSequenceControl_2.insert(ApplLastSeqNum_2.getString());
  FIX::ApplResendFlag ApplResendFlag_2(true);
  msg.set(ApplResendFlag_2);
  ApplicationSequenceControl_2.insert(ApplResendFlag_2.getString());
  FIX::ApplSeqNum ApplSeqNum_2(254738526);
  msg.set(ApplSeqNum_2);
  ApplicationSequenceControl_2.insert(ApplSeqNum_2.getString());
  all_values.push_back(ApplicationSequenceControl_2);

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_0;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_0(false);
  msg.set(DerivFlexProductEligibilityIndicator_0);
  DerivativeInstrument_0.insert(DerivFlexProductEligibilityIndicator_0.getString());
  FIX::DerivativeCFICode DerivativeCFICode_0("STRING_1787267088");
  msg.set(DerivativeCFICode_0);
  DerivativeInstrument_0.insert(DerivativeCFICode_0.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_0;
  DerivativeCapPrice_0.setString("16821355");
  msg.set(DerivativeCapPrice_0);
  DerivativeInstrument_0.insert(DerivativeCapPrice_0.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_0;
  DerivativeContractMultiplier_0.setString("10593377");
  msg.set(DerivativeContractMultiplier_0);
  DerivativeInstrument_0.insert(DerivativeContractMultiplier_0.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_0(653880210);
  msg.set(DerivativeContractMultiplierUnit_0);
  DerivativeInstrument_0.insert(DerivativeContractMultiplierUnit_0.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_0("MONTHYEAR_1518944318");
  msg.set(DerivativeContractSettlMonth_0);
  DerivativeInstrument_0.insert(DerivativeContractSettlMonth_0.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_0("COUNTRY_1461740354");
  msg.set(DerivativeCountryOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeCountryOfIssue_0.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_0("DATA_1489041142");
  msg.set(DerivativeEncodedIssuer_0);
  DerivativeInstrument_0.insert(DerivativeEncodedIssuer_0.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_0(1741052841);
  msg.set(DerivativeEncodedIssuerLen_0);
  DerivativeInstrument_0.insert(DerivativeEncodedIssuerLen_0.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_0("DATA_146787275");
  msg.set(DerivativeEncodedSecurityDesc_0);
  DerivativeInstrument_0.insert(DerivativeEncodedSecurityDesc_0.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_0(1464172961);
  msg.set(DerivativeEncodedSecurityDescLen_0);
  DerivativeInstrument_0.insert(DerivativeEncodedSecurityDescLen_0.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_0('1');
  msg.set(DerivativeExerciseStyle_0);
  DerivativeInstrument_0.insert(DerivativeExerciseStyle_0.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_0;
  DerivativeFloorPrice_0.setString("7358865");
  msg.set(DerivativeFloorPrice_0);
  DerivativeInstrument_0.insert(DerivativeFloorPrice_0.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_0(70985234);
  msg.set(DerivativeFlowScheduleType_0);
  DerivativeInstrument_0.insert(DerivativeFlowScheduleType_0.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_0("STRING_2063915702");
  msg.set(DerivativeInstrRegistry_0);
  DerivativeInstrument_0.insert(DerivativeInstrRegistry_0.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_0('7');
  msg.set(DerivativeInstrmtAssignmentMethod_0);
  DerivativeInstrument_0.insert(DerivativeInstrmtAssignmentMethod_0.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_0("LOCALMKTDATE_830336100");
  msg.set(DerivativeIssueDate_0);
  DerivativeInstrument_0.insert(DerivativeIssueDate_0.getString());
  FIX::DerivativeIssuer DerivativeIssuer_0("STRING_1595221842");
  msg.set(DerivativeIssuer_0);
  DerivativeInstrument_0.insert(DerivativeIssuer_0.getString());
  FIX::DerivativeListMethod DerivativeListMethod_0(1326271226);
  msg.set(DerivativeListMethod_0);
  DerivativeInstrument_0.insert(DerivativeListMethod_0.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_0("STRING_1877365003");
  msg.set(DerivativeLocaleOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeLocaleOfIssue_0.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_0("LOCALMKTDATE_698823133");
  msg.set(DerivativeMaturityDate_0);
  DerivativeInstrument_0.insert(DerivativeMaturityDate_0.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_0("MONTHYEAR_155990504");
  msg.set(DerivativeMaturityMonthYear_0);
  DerivativeInstrument_0.insert(DerivativeMaturityMonthYear_0.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_0("TZTIMEONLY_446730941");
  msg.set(DerivativeMaturityTime_0);
  DerivativeInstrument_0.insert(DerivativeMaturityTime_0.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_0;
  DerivativeMinPriceIncrement_0.setString("17818362");
  msg.set(DerivativeMinPriceIncrement_0);
  DerivativeInstrument_0.insert(DerivativeMinPriceIncrement_0.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_0;
  DerivativeMinPriceIncrementAmount_0.setString("4000592");
  msg.set(DerivativeMinPriceIncrementAmount_0);
  DerivativeInstrument_0.insert(DerivativeMinPriceIncrementAmount_0.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_0(1147270525);
  msg.set(DerivativeNTPositionLimit_0);
  DerivativeInstrument_0.insert(DerivativeNTPositionLimit_0.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_0('1');
  msg.set(DerivativeOptAttribute_0);
  DerivativeInstrument_0.insert(DerivativeOptAttribute_0.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_0;
  DerivativeOptPayAmount_0.setString("20693425");
  msg.set(DerivativeOptPayAmount_0);
  DerivativeInstrument_0.insert(DerivativeOptPayAmount_0.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_0(524459325);
  msg.set(DerivativePositionLimit_0);
  DerivativeInstrument_0.insert(DerivativePositionLimit_0.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_0("STRING_856388443");
  msg.set(DerivativePriceQuoteMethod_0);
  DerivativeInstrument_0.insert(DerivativePriceQuoteMethod_0.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_0("STRING_176597469");
  msg.set(DerivativePriceUnitOfMeasure_0);
  DerivativeInstrument_0.insert(DerivativePriceUnitOfMeasure_0.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_0;
  DerivativePriceUnitOfMeasureQty_0.setString("18767189");
  msg.set(DerivativePriceUnitOfMeasureQty_0);
  DerivativeInstrument_0.insert(DerivativePriceUnitOfMeasureQty_0.getString());
  FIX::DerivativeProduct DerivativeProduct_0(496171883);
  msg.set(DerivativeProduct_0);
  DerivativeInstrument_0.insert(DerivativeProduct_0.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_0("STRING_1858733013");
  msg.set(DerivativeProductComplex_0);
  DerivativeInstrument_0.insert(DerivativeProductComplex_0.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_0(788572967);
  msg.set(DerivativePutOrCall_0);
  DerivativeInstrument_0.insert(DerivativePutOrCall_0.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_0("STRING_1150052093");
  msg.set(DerivativeSecurityDesc_0);
  DerivativeInstrument_0.insert(DerivativeSecurityDesc_0.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_0("EXCHANGE_1230193684");
  msg.set(DerivativeSecurityExchange_0);
  DerivativeInstrument_0.insert(DerivativeSecurityExchange_0.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_0("STRING_102829673");
  msg.set(DerivativeSecurityGroup_0);
  DerivativeInstrument_0.insert(DerivativeSecurityGroup_0.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_0("STRING_491609587");
  msg.set(DerivativeSecurityID_0);
  DerivativeInstrument_0.insert(DerivativeSecurityID_0.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_0("STRING_823762877");
  msg.set(DerivativeSecurityIDSource_0);
  DerivativeInstrument_0.insert(DerivativeSecurityIDSource_0.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_0("STRING_249616948");
  msg.set(DerivativeSecurityStatus_0);
  DerivativeInstrument_0.insert(DerivativeSecurityStatus_0.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_0("STRING_1955782548");
  msg.set(DerivativeSecuritySubType_0);
  DerivativeInstrument_0.insert(DerivativeSecuritySubType_0.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_0("STRING_1002943186");
  msg.set(DerivativeSecurityType_0);
  DerivativeInstrument_0.insert(DerivativeSecurityType_0.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_0('9');
  msg.set(DerivativeSettlMethod_0);
  DerivativeInstrument_0.insert(DerivativeSettlMethod_0.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_0("STRING_2026767782");
  msg.set(DerivativeSettleOnOpenFlag_0);
  DerivativeInstrument_0.insert(DerivativeSettleOnOpenFlag_0.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_0("STRING_919375240");
  msg.set(DerivativeStateOrProvinceOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeStateOrProvinceOfIssue_0.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_0("EUR");
  msg.set(DerivativeStrikeCurrency_0);
  DerivativeInstrument_0.insert(DerivativeStrikeCurrency_0.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_0;
  DerivativeStrikeMultiplier_0.setString("3671134");
  msg.set(DerivativeStrikeMultiplier_0);
  DerivativeInstrument_0.insert(DerivativeStrikeMultiplier_0.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_0;
  DerivativeStrikePrice_0.setString("8668876");
  msg.set(DerivativeStrikePrice_0);
  DerivativeInstrument_0.insert(DerivativeStrikePrice_0.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_0;
  DerivativeStrikeValue_0.setString("4395015");
  msg.set(DerivativeStrikeValue_0);
  DerivativeInstrument_0.insert(DerivativeStrikeValue_0.getString());
  FIX::DerivativeSymbol DerivativeSymbol_0("STRING_1065936568");
  msg.set(DerivativeSymbol_0);
  DerivativeInstrument_0.insert(DerivativeSymbol_0.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_0("STRING_1022878203");
  msg.set(DerivativeSymbolSfx_0);
  DerivativeInstrument_0.insert(DerivativeSymbolSfx_0.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_0("STRING_886232532");
  msg.set(DerivativeTimeUnit_0);
  DerivativeInstrument_0.insert(DerivativeTimeUnit_0.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_0("STRING_700289184");
  msg.set(DerivativeUnitOfMeasure_0);
  DerivativeInstrument_0.insert(DerivativeUnitOfMeasure_0.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_0;
  DerivativeUnitOfMeasureQty_0.setString("14229374");
  msg.set(DerivativeUnitOfMeasureQty_0);
  DerivativeInstrument_0.insert(DerivativeUnitOfMeasureQty_0.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_0("STRING_2033503057");
  msg.set(DerivativeValuationMethod_0);
  DerivativeInstrument_0.insert(DerivativeValuationMethod_0.getString());
  all_values.push_back(DerivativeInstrument_0);

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_0;
    FIX::DerivativeEventDate DerivativeEventDate_0("LOCALMKTDATE_1344796431");
    noDerivativeEvents_0_0.set(DerivativeEventDate_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventDate_0.getString());
    FIX::DerivativeEventPx DerivativeEventPx_0;
    DerivativeEventPx_0.setString("4104787");
    noDerivativeEvents_0_0.set(DerivativeEventPx_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventPx_0.getString());
    FIX::DerivativeEventText DerivativeEventText_0("STRING_779538819");
    noDerivativeEvents_0_0.set(DerivativeEventText_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventText_0.getString());
    FIX::DerivativeEventTime DerivativeEventTime_0(FIX::UTCTIMESTAMP(7, 2, 25, 18, 12015));
    noDerivativeEvents_0_0.set(DerivativeEventTime_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventTime_0.getString());
    FIX::DerivativeEventType DerivativeEventType_0(1031116632);
    noDerivativeEvents_0_0.set(DerivativeEventType_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventType_0.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_0);

    msg.addGroup(noDerivativeEvents_0_0);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_0;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_0("STRING_1139116179");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyID_0.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_0("STRING_1280733580");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyIDSource_0.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_0(578187636);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyRole_0.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_0("STRING_118753429");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_0);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0.insert(DerivativeInstrumentPartySubID_0.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_0(457471770);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_0);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0.insert(DerivativeInstrumentPartySubIDType_0.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_1("STRING_913950957");
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubID_1);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1.insert(DerivativeInstrumentPartySubID_1.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_1(1806853550);
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubIDType_1);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1.insert(DerivativeInstrumentPartySubIDType_1.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_1;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_1("STRING_1167092005");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyID_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyID_1.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_1("STRING_1281064392");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyIDSource_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyIDSource_1.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_1(526257600);
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyRole_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyRole_1.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_2("STRING_199517312");
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubID_2);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2.insert(DerivativeInstrumentPartySubID_2.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_2(1549135803);
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubIDType_2);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2.insert(DerivativeInstrumentPartySubIDType_2.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_3("STRING_345342480");
      noDerivativeInstrumentPartySubIDs_1_1_1.set(DerivativeInstrumentPartySubID_3);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3.insert(DerivativeInstrumentPartySubID_3.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_3(899806496);
      noDerivativeInstrumentPartySubIDs_1_1_1.set(DerivativeInstrumentPartySubIDType_3);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3.insert(DerivativeInstrumentPartySubIDType_3.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_2;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_4("STRING_824589644");
      noDerivativeInstrumentPartySubIDs_1_1_2.set(DerivativeInstrumentPartySubID_4);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4.insert(DerivativeInstrumentPartySubID_4.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_4(231361889);
      noDerivativeInstrumentPartySubIDs_1_1_2.set(DerivativeInstrumentPartySubIDType_4);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4.insert(DerivativeInstrumentPartySubIDType_4.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_0("STRING_21902427");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_0);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0.insert(DerivativeSecurityAltID_0.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_0("STRING_641840624");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_0);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0.insert(DerivativeSecurityAltIDSource_0.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_0;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_1("DATA_1602495690");
  msg.set(DerivativeSecurityXML_1);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_0(1543296327);
  msg.set(DerivativeSecurityXMLLen_0);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_0("STRING_781554616");
  msg.set(DerivativeSecurityXMLSchema_0);
  DerivativeSecurityXML_0.insert(DerivativeSecurityXMLSchema_0.getString());
  all_values.push_back(DerivativeSecurityXML_0);

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_0(628455944);
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribType_0);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0.insert(DerivativeInstrAttribType_0.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_0("STRING_1709841574");
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribValue_0);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0.insert(DerivativeInstrAttribValue_0.getString());
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_1;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_1(1009001893);
    noDerivativeInstrAttrib_0_1.set(DerivativeInstrAttribType_1);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1.insert(DerivativeInstrAttribType_1.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_1("STRING_943809246");
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
    FIX::MarketID MarketID_0("EXCHANGE_1778890628");
    noMarketSegments_0_0.set(MarketID_0);
    MarketSegmentGrp_NoMarketSegments_0.insert(MarketID_0.getString());
    FIX::MarketSegmentID MarketSegmentID_0("STRING_2082925425");
    noMarketSegments_0_0.set(MarketSegmentID_0);
    MarketSegmentGrp_NoMarketSegments_0.insert(MarketSegmentID_0.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_0);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_0;
    FIX::ExpirationCycle ExpirationCycle_0(1);
    noMarketSegments_0_0.set(ExpirationCycle_0);
    BaseTradingRules_0.insert(ExpirationCycle_0.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_0(0);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_0);
    BaseTradingRules_0.insert(ImpliedMarketIndicator_0.getString());
    FIX::MaxPriceVariation MaxPriceVariation_0;
    MaxPriceVariation_0.setString("20775011");
    noMarketSegments_0_0.set(MaxPriceVariation_0);
    BaseTradingRules_0.insert(MaxPriceVariation_0.getString());
    FIX::MaxTradeVol MaxTradeVol_0;
    MaxTradeVol_0.setString("19929615");
    noMarketSegments_0_0.set(MaxTradeVol_0);
    BaseTradingRules_0.insert(MaxTradeVol_0.getString());
    FIX::MinTradeVol MinTradeVol_0;
    MinTradeVol_0.setString("6670663");
    noMarketSegments_0_0.set(MinTradeVol_0);
    BaseTradingRules_0.insert(MinTradeVol_0.getString());
    FIX::MultilegModel MultilegModel_0(0);
    noMarketSegments_0_0.set(MultilegModel_0);
    BaseTradingRules_0.insert(MultilegModel_0.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_0(2);
    noMarketSegments_0_0.set(MultilegPriceMethod_0);
    BaseTradingRules_0.insert(MultilegPriceMethod_0.getString());
    FIX::PriceType PriceType_11(9);
    noMarketSegments_0_0.set(PriceType_11);
    BaseTradingRules_0.insert(PriceType_11.getString());
    FIX::RoundLot RoundLot_0;
    RoundLot_0.setString("21250328");
    noMarketSegments_0_0.set(RoundLot_0);
    BaseTradingRules_0.insert(RoundLot_0.getString());
    FIX::TradingCurrency TradingCurrency_0("GBP");
    noMarketSegments_0_0.set(TradingCurrency_0);
    BaseTradingRules_0.insert(TradingCurrency_0.getString());
    all_values.push_back(BaseTradingRules_0);

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
      MinLotSize_0.setString("16386108");
      noLotTypeRules_0_1_0.set(MinLotSize_0);
      LotTypeRules_NoLotTypeRules_0.insert(MinLotSize_0.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_0);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_0;
    FIX::HighLimitPrice HighLimitPrice_0;
    HighLimitPrice_0.setString("10768730");
    noMarketSegments_0_0.set(HighLimitPrice_0);
    PriceLimits_0.insert(HighLimitPrice_0.getString());
    FIX::LowLimitPrice LowLimitPrice_0;
    LowLimitPrice_0.setString("2573472");
    noMarketSegments_0_0.set(LowLimitPrice_0);
    PriceLimits_0.insert(LowLimitPrice_0.getString());
    FIX::PriceLimitType PriceLimitType_0(2);
    noMarketSegments_0_0.set(PriceLimitType_0);
    PriceLimits_0.insert(PriceLimitType_0.getString());
    FIX::TradingReferencePrice TradingReferencePrice_0;
    TradingReferencePrice_0.setString("18998298");
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
      EndTickPriceRange_0.setString("3643296");
      noTickRules_0_1_0.set(EndTickPriceRange_0);
      TickRules_NoTickRules_0.insert(EndTickPriceRange_0.getString());
      FIX::StartTickPriceRange StartTickPriceRange_0;
      StartTickPriceRange_0.setString("13548419");
      noTickRules_0_1_0.set(StartTickPriceRange_0);
      TickRules_NoTickRules_0.insert(StartTickPriceRange_0.getString());
      FIX::TickIncrement TickIncrement_0;
      TickIncrement_0.setString("18225459");
      noTickRules_0_1_0.set(TickIncrement_0);
      TickRules_NoTickRules_0.insert(TickIncrement_0.getString());
      FIX::TickRuleType TickRuleType_0(2);
      noTickRules_0_1_0.set(TickRuleType_0);
      TickRules_NoTickRules_0.insert(TickRuleType_0.getString());
      all_values.push_back(TickRules_NoTickRules_0);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_1;
      FIX::EndTickPriceRange EndTickPriceRange_1;
      EndTickPriceRange_1.setString("20855646");
      noTickRules_0_1_1.set(EndTickPriceRange_1);
      TickRules_NoTickRules_1.insert(EndTickPriceRange_1.getString());
      FIX::StartTickPriceRange StartTickPriceRange_1;
      StartTickPriceRange_1.setString("3035182");
      noTickRules_0_1_1.set(StartTickPriceRange_1);
      TickRules_NoTickRules_1.insert(StartTickPriceRange_1.getString());
      FIX::TickIncrement TickIncrement_1;
      TickIncrement_1.setString("7082422");
      noTickRules_0_1_1.set(TickIncrement_1);
      TickRules_NoTickRules_1.insert(TickIncrement_1.getString());
      FIX::TickRuleType TickRuleType_1(2);
      noTickRules_0_1_1.set(TickRuleType_1);
      TickRules_NoTickRules_1.insert(TickRuleType_1.getString());
      all_values.push_back(TickRules_NoTickRules_1);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_0;
      FIX::NestedInstrAttribType NestedInstrAttribType_0(1301716787);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_0);
      NestedInstrumentAttribute_NoNestedInstrAttrib_0.insert(NestedInstrAttribType_0.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_0("STRING_578489888");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_0);
      NestedInstrumentAttribute_NoNestedInstrAttrib_0.insert(NestedInstrAttribValue_0.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_0);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_1;
      FIX::NestedInstrAttribType NestedInstrAttribType_1(1182769296);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_1);
      NestedInstrumentAttribute_NoNestedInstrAttrib_1.insert(NestedInstrAttribType_1.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_1("STRING_1028441278");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_1);
      NestedInstrumentAttribute_NoNestedInstrAttrib_1.insert(NestedInstrAttribValue_1.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_1);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_2;
      FIX::NestedInstrAttribType NestedInstrAttribType_2(788084504);
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribType_2);
      NestedInstrumentAttribute_NoNestedInstrAttrib_2.insert(NestedInstrAttribType_2.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_2("STRING_1112786790");
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribValue_2);
      NestedInstrumentAttribute_NoNestedInstrAttrib_2.insert(NestedInstrAttribValue_2.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_2);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_0;
      FIX::TradingSessionID TradingSessionID_13("STRING_4");
      noTradingSessionRules_0_1_0.set(TradingSessionID_13);
      TradingSessionRulesGrp_NoTradingSessionRules_0.insert(TradingSessionID_13.getString());
      FIX::TradingSessionSubID TradingSessionSubID_13("STRING_1");
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
        FIX::ExecInstValue ExecInstValue_1('1');
        noExecInstRules_0_0_2_1.set(ExecInstValue_1);
        ExecInstRules_NoExecInstRules_1.insert(ExecInstValue_1.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_1);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_2;
        FIX::ExecInstValue ExecInstValue_2('4');
        noExecInstRules_0_0_2_2.set(ExecInstValue_2);
        ExecInstRules_NoExecInstRules_2.insert(ExecInstValue_2.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_2);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
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
        FIX::MDFeedType MDFeedType_0("STRING_1990113671");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MDFeedType_0.getString());
        FIX::MarketDepth MarketDepth_0(1926221149);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MarketDepth_0.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_0);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_1;
        FIX::MDBookType MDBookType_1(1);
        noMDFeedTypes_0_0_2_1.set(MDBookType_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MDBookType_1.getString());
        FIX::MDFeedType MDFeedType_1("STRING_99977245");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MDFeedType_1.getString());
        FIX::MarketDepth MarketDepth_1(1648710211);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MarketDepth_1.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_1);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_0;
        FIX::MatchAlgorithm MatchAlgorithm_0("STRING_379226895");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_0);
        MatchRules_NoMatchRules_0.insert(MatchAlgorithm_0.getString());
        FIX::MatchType MatchType_3("STRING_M6");
        noMatchRules_0_0_2_0.set(MatchType_3);
        MatchRules_NoMatchRules_0.insert(MatchType_3.getString());
        all_values.push_back(MatchRules_NoMatchRules_0);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_1;
        FIX::MatchAlgorithm MatchAlgorithm_1("STRING_464796");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_1);
        MatchRules_NoMatchRules_1.insert(MatchAlgorithm_1.getString());
        FIX::MatchType MatchType_4("STRING_2");
        noMatchRules_0_0_2_1.set(MatchType_4);
        MatchRules_NoMatchRules_1.insert(MatchType_4.getString());
        all_values.push_back(MatchRules_NoMatchRules_1);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_0;
        FIX::OrdType OrdType_1('4');
        noOrdTypeRules_0_0_2_0.set(OrdType_1);
        OrdTypeRules_NoOrdTypeRules_0.insert(OrdType_1.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_0);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_1;
        FIX::OrdType OrdType_2('H');
        noOrdTypeRules_0_0_2_1.set(OrdType_2);
        OrdTypeRules_NoOrdTypeRules_1.insert(OrdType_2.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_1);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_2;
        FIX::OrdType OrdType_3('6');
        noOrdTypeRules_0_0_2_2.set(OrdType_3);
        OrdTypeRules_NoOrdTypeRules_2.insert(OrdType_3.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_2);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_0;
        FIX::TimeInForce TimeInForce_1('5');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_1);
        TimeInForceRules_NoTimeInForceRules_0.insert(TimeInForce_1.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_0);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_1;
        FIX::TimeInForce TimeInForce_2('0');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_2);
        TimeInForceRules_NoTimeInForceRules_1.insert(TimeInForce_2.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_1);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_2;
        FIX::TimeInForce TimeInForce_3('6');
        noTimeInForceRules_0_0_2_2.set(TimeInForce_3);
        TimeInForceRules_NoTimeInForceRules_2.insert(TimeInForce_3.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_2);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_1;
      FIX::TradingSessionID TradingSessionID_14("STRING_2");
      noTradingSessionRules_0_1_1.set(TradingSessionID_14);
      TradingSessionRulesGrp_NoTradingSessionRules_1.insert(TradingSessionID_14.getString());
      FIX::TradingSessionSubID TradingSessionSubID_14("STRING_2");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_14);
      TradingSessionRulesGrp_NoTradingSessionRules_1.insert(TradingSessionSubID_14.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_1);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_3;
        FIX::ExecInstValue ExecInstValue_3('1');
        noExecInstRules_0_1_2_0.set(ExecInstValue_3);
        ExecInstRules_NoExecInstRules_3.insert(ExecInstValue_3.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_3);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_4;
        FIX::ExecInstValue ExecInstValue_4('6');
        noExecInstRules_0_1_2_1.set(ExecInstValue_4);
        ExecInstRules_NoExecInstRules_4.insert(ExecInstValue_4.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_4);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_5;
        FIX::ExecInstValue ExecInstValue_5('1');
        noExecInstRules_0_1_2_2.set(ExecInstValue_5);
        ExecInstRules_NoExecInstRules_5.insert(ExecInstValue_5.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_5);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_2;
        FIX::MDBookType MDBookType_2(1);
        noMDFeedTypes_0_1_2_0.set(MDBookType_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MDBookType_2.getString());
        FIX::MDFeedType MDFeedType_2("STRING_554212342");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MDFeedType_2.getString());
        FIX::MarketDepth MarketDepth_2(1349299836);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MarketDepth_2.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_2);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_2;
        FIX::MatchAlgorithm MatchAlgorithm_2("STRING_841822671");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_2);
        MatchRules_NoMatchRules_2.insert(MatchAlgorithm_2.getString());
        FIX::MatchType MatchType_5("STRING_M5");
        noMatchRules_0_1_2_0.set(MatchType_5);
        MatchRules_NoMatchRules_2.insert(MatchType_5.getString());
        all_values.push_back(MatchRules_NoMatchRules_2);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_3;
        FIX::MatchAlgorithm MatchAlgorithm_3("STRING_1260062239");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_3);
        MatchRules_NoMatchRules_3.insert(MatchAlgorithm_3.getString());
        FIX::MatchType MatchType_6("STRING_M2");
        noMatchRules_0_1_2_1.set(MatchType_6);
        MatchRules_NoMatchRules_3.insert(MatchType_6.getString());
        all_values.push_back(MatchRules_NoMatchRules_3);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_3;
        FIX::OrdType OrdType_4('L');
        noOrdTypeRules_0_1_2_0.set(OrdType_4);
        OrdTypeRules_NoOrdTypeRules_3.insert(OrdType_4.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_3);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_4;
        FIX::OrdType OrdType_5('8');
        noOrdTypeRules_0_1_2_1.set(OrdType_5);
        OrdTypeRules_NoOrdTypeRules_4.insert(OrdType_5.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_4);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_3;
        FIX::TimeInForce TimeInForce_4('9');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_4);
        TimeInForceRules_NoTimeInForceRules_3.insert(TimeInForce_4.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_3);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_4;
        FIX::TimeInForce TimeInForce_5('2');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_5);
        TimeInForceRules_NoTimeInForceRules_4.insert(TimeInForce_5.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_4);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_5;
        FIX::TimeInForce TimeInForce_6('8');
        noTimeInForceRules_0_1_2_2.set(TimeInForce_6);
        TimeInForceRules_NoTimeInForceRules_5.insert(TimeInForce_6.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_5);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_2;
      FIX::TradingSessionID TradingSessionID_15("STRING_6");
      noTradingSessionRules_0_1_2.set(TradingSessionID_15);
      TradingSessionRulesGrp_NoTradingSessionRules_2.insert(TradingSessionID_15.getString());
      FIX::TradingSessionSubID TradingSessionSubID_15("STRING_3");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_15);
      TradingSessionRulesGrp_NoTradingSessionRules_2.insert(TradingSessionSubID_15.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_2);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_6;
        FIX::ExecInstValue ExecInstValue_6('3');
        noExecInstRules_0_2_2_0.set(ExecInstValue_6);
        ExecInstRules_NoExecInstRules_6.insert(ExecInstValue_6.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_6);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_7;
        FIX::ExecInstValue ExecInstValue_7('5');
        noExecInstRules_0_2_2_1.set(ExecInstValue_7);
        ExecInstRules_NoExecInstRules_7.insert(ExecInstValue_7.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_7);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_3;
        FIX::MDBookType MDBookType_3(3);
        noMDFeedTypes_0_2_2_0.set(MDBookType_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MDBookType_3.getString());
        FIX::MDFeedType MDFeedType_3("STRING_1444898590");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MDFeedType_3.getString());
        FIX::MarketDepth MarketDepth_3(1140844596);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MarketDepth_3.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_3);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_4;
        FIX::MatchAlgorithm MatchAlgorithm_4("STRING_1199772141");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_4);
        MatchRules_NoMatchRules_4.insert(MatchAlgorithm_4.getString());
        FIX::MatchType MatchType_7("STRING_MT");
        noMatchRules_0_2_2_0.set(MatchType_7);
        MatchRules_NoMatchRules_4.insert(MatchType_7.getString());
        all_values.push_back(MatchRules_NoMatchRules_4);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_5;
        FIX::MatchAlgorithm MatchAlgorithm_5("STRING_1855158936");
        noMatchRules_0_2_2_1.set(MatchAlgorithm_5);
        MatchRules_NoMatchRules_5.insert(MatchAlgorithm_5.getString());
        FIX::MatchType MatchType_8("STRING_M1");
        noMatchRules_0_2_2_1.set(MatchType_8);
        MatchRules_NoMatchRules_5.insert(MatchType_8.getString());
        all_values.push_back(MatchRules_NoMatchRules_5);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_5;
        FIX::OrdType OrdType_6('8');
        noOrdTypeRules_0_2_2_0.set(OrdType_6);
        OrdTypeRules_NoOrdTypeRules_5.insert(OrdType_6.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_5);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_6;
        FIX::OrdType OrdType_7('F');
        noOrdTypeRules_0_2_2_1.set(OrdType_7);
        OrdTypeRules_NoOrdTypeRules_6.insert(OrdType_7.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_6);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_7;
        FIX::OrdType OrdType_8('5');
        noOrdTypeRules_0_2_2_2.set(OrdType_8);
        OrdTypeRules_NoOrdTypeRules_7.insert(OrdType_8.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_7);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_6;
        FIX::TimeInForce TimeInForce_7('0');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_7);
        TimeInForceRules_NoTimeInForceRules_6.insert(TimeInForce_7.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_6);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_7;
        FIX::TimeInForce TimeInForce_8('9');
        noTimeInForceRules_0_2_2_1.set(TimeInForce_8);
        TimeInForceRules_NoTimeInForceRules_7.insert(TimeInForce_8.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_7);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_8;
        FIX::TimeInForce TimeInForce_9('5');
        noTimeInForceRules_0_2_2_2.set(TimeInForce_9);
        TimeInForceRules_NoTimeInForceRules_8.insert(TimeInForce_9.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_8);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_2);
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
      EndStrikePxRange_0.setString("5270623");
      noStrikeRules_0_1_0.set(EndStrikePxRange_0);
      StrikeRules_NoStrikeRules_0.insert(EndStrikePxRange_0.getString());
      FIX::StartStrikePxRange StartStrikePxRange_0;
      StartStrikePxRange_0.setString("19916214");
      noStrikeRules_0_1_0.set(StartStrikePxRange_0);
      StrikeRules_NoStrikeRules_0.insert(StartStrikePxRange_0.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_0(431207658);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeExerciseStyle_0.getString());
      FIX::StrikeIncrement StrikeIncrement_0;
      StrikeIncrement_0.setString("6488490");
      noStrikeRules_0_1_0.set(StrikeIncrement_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeIncrement_0.getString());
      FIX::StrikeRuleID StrikeRuleID_0("STRING_843708103");
      noStrikeRules_0_1_0.set(StrikeRuleID_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeRuleID_0.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_0);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_0;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_0("MONTHYEAR_636192022");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_0);
        MaturityRules_NoMaturityRules_0.insert(EndMaturityMonthYear_0.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_0(1);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearFormat_0.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_0(1816545992);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearIncrement_0.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_0(3);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearIncrementUnits_0.getString());
        FIX::MaturityRuleID MaturityRuleID_0("STRING_634840482");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityRuleID_0.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_0("MONTHYEAR_1820425444");
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
      EndStrikePxRange_1.setString("584745");
      noStrikeRules_0_1_1.set(EndStrikePxRange_1);
      StrikeRules_NoStrikeRules_1.insert(EndStrikePxRange_1.getString());
      FIX::StartStrikePxRange StartStrikePxRange_1;
      StartStrikePxRange_1.setString("3115664");
      noStrikeRules_0_1_1.set(StartStrikePxRange_1);
      StrikeRules_NoStrikeRules_1.insert(StartStrikePxRange_1.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_1(1281956263);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeExerciseStyle_1.getString());
      FIX::StrikeIncrement StrikeIncrement_1;
      StrikeIncrement_1.setString("15033731");
      noStrikeRules_0_1_1.set(StrikeIncrement_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeIncrement_1.getString());
      FIX::StrikeRuleID StrikeRuleID_1("STRING_1452411068");
      noStrikeRules_0_1_1.set(StrikeRuleID_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeRuleID_1.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_1);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_1;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_1("MONTHYEAR_555661663");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_1);
        MaturityRules_NoMaturityRules_1.insert(EndMaturityMonthYear_1.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_1(2);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearFormat_1.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_1(1091583033);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearIncrement_1.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_1(2);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearIncrementUnits_1.getString());
        FIX::MaturityRuleID MaturityRuleID_1("STRING_1208442244");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityRuleID_1.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_1("MONTHYEAR_214253720");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_1);
        MaturityRules_NoMaturityRules_1.insert(StartMaturityMonthYear_1.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_1);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_2;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_2("MONTHYEAR_925383921");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_2);
        MaturityRules_NoMaturityRules_2.insert(EndMaturityMonthYear_2.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_2(0);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearFormat_2.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_2(686224243);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearIncrement_2.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_2(3);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearIncrementUnits_2.getString());
        FIX::MaturityRuleID MaturityRuleID_2("STRING_179623835");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityRuleID_2.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_2("MONTHYEAR_323898251");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_2);
        MaturityRules_NoMaturityRules_2.insert(StartMaturityMonthYear_2.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_2);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_3;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_3("MONTHYEAR_2102625325");
        noMaturityRules_0_1_2_2.set(EndMaturityMonthYear_3);
        MaturityRules_NoMaturityRules_3.insert(EndMaturityMonthYear_3.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_3(0);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearFormat_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearFormat_3.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_3(168036043);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrement_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearIncrement_3.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_3(3);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrementUnits_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearIncrementUnits_3.getString());
        FIX::MaturityRuleID MaturityRuleID_3("STRING_1355535176");
        noMaturityRules_0_1_2_2.set(MaturityRuleID_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityRuleID_3.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_3("MONTHYEAR_1011744146");
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
      EndStrikePxRange_2.setString("4093397");
      noStrikeRules_0_1_2.set(EndStrikePxRange_2);
      StrikeRules_NoStrikeRules_2.insert(EndStrikePxRange_2.getString());
      FIX::StartStrikePxRange StartStrikePxRange_2;
      StartStrikePxRange_2.setString("19917271");
      noStrikeRules_0_1_2.set(StartStrikePxRange_2);
      StrikeRules_NoStrikeRules_2.insert(StartStrikePxRange_2.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_2(708003710);
      noStrikeRules_0_1_2.set(StrikeExerciseStyle_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeExerciseStyle_2.getString());
      FIX::StrikeIncrement StrikeIncrement_2;
      StrikeIncrement_2.setString("784020");
      noStrikeRules_0_1_2.set(StrikeIncrement_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeIncrement_2.getString());
      FIX::StrikeRuleID StrikeRuleID_2("STRING_1479219110");
      noStrikeRules_0_1_2.set(StrikeRuleID_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeRuleID_2.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_2);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_4;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_4("MONTHYEAR_1898827513");
        noMaturityRules_0_2_2_0.set(EndMaturityMonthYear_4);
        MaturityRules_NoMaturityRules_4.insert(EndMaturityMonthYear_4.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_4(1);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearFormat_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearFormat_4.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_4(1654410664);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrement_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearIncrement_4.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_4(0);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrementUnits_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearIncrementUnits_4.getString());
        FIX::MaturityRuleID MaturityRuleID_4("STRING_893583213");
        noMaturityRules_0_2_2_0.set(MaturityRuleID_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityRuleID_4.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_4("MONTHYEAR_959338084");
        noMaturityRules_0_2_2_0.set(StartMaturityMonthYear_4);
        MaturityRules_NoMaturityRules_4.insert(StartMaturityMonthYear_4.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_4);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_5;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_5("MONTHYEAR_269724225");
        noMaturityRules_0_2_2_1.set(EndMaturityMonthYear_5);
        MaturityRules_NoMaturityRules_5.insert(EndMaturityMonthYear_5.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_5(1);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearFormat_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearFormat_5.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_5(1509829563);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrement_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearIncrement_5.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_5(3);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrementUnits_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityMonthYearIncrementUnits_5.getString());
        FIX::MaturityRuleID MaturityRuleID_5("STRING_1685987783");
        noMaturityRules_0_2_2_1.set(MaturityRuleID_5);
        MaturityRules_NoMaturityRules_5.insert(MaturityRuleID_5.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_5("MONTHYEAR_570788160");
        noMaturityRules_0_2_2_1.set(StartMaturityMonthYear_5);
        MaturityRules_NoMaturityRules_5.insert(StartMaturityMonthYear_5.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_5);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_6;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_6("MONTHYEAR_1575560979");
        noMaturityRules_0_2_2_2.set(EndMaturityMonthYear_6);
        MaturityRules_NoMaturityRules_6.insert(EndMaturityMonthYear_6.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_6(0);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearFormat_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearFormat_6.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_6(843909864);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearIncrement_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearIncrement_6.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_6(3);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearIncrementUnits_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityMonthYearIncrementUnits_6.getString());
        FIX::MaturityRuleID MaturityRuleID_6("STRING_1347861559");
        noMaturityRules_0_2_2_2.set(MaturityRuleID_6);
        MaturityRules_NoMaturityRules_6.insert(MaturityRuleID_6.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_6("MONTHYEAR_1023533700");
        noMaturityRules_0_2_2_2.set(StartMaturityMonthYear_6);
        MaturityRules_NoMaturityRules_6.insert(StartMaturityMonthYear_6.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_6);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_2);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_1;
    FIX::MarketID MarketID_1("EXCHANGE_438199826");
    noMarketSegments_0_1.set(MarketID_1);
    MarketSegmentGrp_NoMarketSegments_1.insert(MarketID_1.getString());
    FIX::MarketSegmentID MarketSegmentID_1("STRING_1303003236");
    noMarketSegments_0_1.set(MarketSegmentID_1);
    MarketSegmentGrp_NoMarketSegments_1.insert(MarketSegmentID_1.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_1);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_1;
    FIX::ExpirationCycle ExpirationCycle_1(0);
    noMarketSegments_0_1.set(ExpirationCycle_1);
    BaseTradingRules_1.insert(ExpirationCycle_1.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_1(1);
    noMarketSegments_0_1.set(ImpliedMarketIndicator_1);
    BaseTradingRules_1.insert(ImpliedMarketIndicator_1.getString());
    FIX::MaxPriceVariation MaxPriceVariation_1;
    MaxPriceVariation_1.setString("16893525");
    noMarketSegments_0_1.set(MaxPriceVariation_1);
    BaseTradingRules_1.insert(MaxPriceVariation_1.getString());
    FIX::MaxTradeVol MaxTradeVol_1;
    MaxTradeVol_1.setString("9382713");
    noMarketSegments_0_1.set(MaxTradeVol_1);
    BaseTradingRules_1.insert(MaxTradeVol_1.getString());
    FIX::MinTradeVol MinTradeVol_1;
    MinTradeVol_1.setString("16179800");
    noMarketSegments_0_1.set(MinTradeVol_1);
    BaseTradingRules_1.insert(MinTradeVol_1.getString());
    FIX::MultilegModel MultilegModel_1(2);
    noMarketSegments_0_1.set(MultilegModel_1);
    BaseTradingRules_1.insert(MultilegModel_1.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_1(0);
    noMarketSegments_0_1.set(MultilegPriceMethod_1);
    BaseTradingRules_1.insert(MultilegPriceMethod_1.getString());
    FIX::PriceType PriceType_12(19);
    noMarketSegments_0_1.set(PriceType_12);
    BaseTradingRules_1.insert(PriceType_12.getString());
    FIX::RoundLot RoundLot_1;
    RoundLot_1.setString("296107");
    noMarketSegments_0_1.set(RoundLot_1);
    BaseTradingRules_1.insert(RoundLot_1.getString());
    FIX::TradingCurrency TradingCurrency_1("GBP");
    noMarketSegments_0_1.set(TradingCurrency_1);
    BaseTradingRules_1.insert(TradingCurrency_1.getString());
    all_values.push_back(BaseTradingRules_1);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_1;
      FIX::LotType LotType_1('3');
      noLotTypeRules_1_1_0.set(LotType_1);
      LotTypeRules_NoLotTypeRules_1.insert(LotType_1.getString());
      FIX::MinLotSize MinLotSize_1;
      MinLotSize_1.setString("10282712");
      noLotTypeRules_1_1_0.set(MinLotSize_1);
      LotTypeRules_NoLotTypeRules_1.insert(MinLotSize_1.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_1);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_2;
      FIX::LotType LotType_2('3');
      noLotTypeRules_1_1_1.set(LotType_2);
      LotTypeRules_NoLotTypeRules_2.insert(LotType_2.getString());
      FIX::MinLotSize MinLotSize_2;
      MinLotSize_2.setString("3980436");
      noLotTypeRules_1_1_1.set(MinLotSize_2);
      LotTypeRules_NoLotTypeRules_2.insert(MinLotSize_2.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_2);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_1;
    FIX::HighLimitPrice HighLimitPrice_1;
    HighLimitPrice_1.setString("19876093");
    noMarketSegments_0_1.set(HighLimitPrice_1);
    PriceLimits_1.insert(HighLimitPrice_1.getString());
    FIX::LowLimitPrice LowLimitPrice_1;
    LowLimitPrice_1.setString("10839789");
    noMarketSegments_0_1.set(LowLimitPrice_1);
    PriceLimits_1.insert(LowLimitPrice_1.getString());
    FIX::PriceLimitType PriceLimitType_1(1);
    noMarketSegments_0_1.set(PriceLimitType_1);
    PriceLimits_1.insert(PriceLimitType_1.getString());
    FIX::TradingReferencePrice TradingReferencePrice_1;
    TradingReferencePrice_1.setString("13499552");
    noMarketSegments_0_1.set(TradingReferencePrice_1);
    PriceLimits_1.insert(TradingReferencePrice_1.getString());
    all_values.push_back(PriceLimits_1);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_2;
      FIX::EndTickPriceRange EndTickPriceRange_2;
      EndTickPriceRange_2.setString("13857926");
      noTickRules_1_1_0.set(EndTickPriceRange_2);
      TickRules_NoTickRules_2.insert(EndTickPriceRange_2.getString());
      FIX::StartTickPriceRange StartTickPriceRange_2;
      StartTickPriceRange_2.setString("19207434");
      noTickRules_1_1_0.set(StartTickPriceRange_2);
      TickRules_NoTickRules_2.insert(StartTickPriceRange_2.getString());
      FIX::TickIncrement TickIncrement_2;
      TickIncrement_2.setString("18733635");
      noTickRules_1_1_0.set(TickIncrement_2);
      TickRules_NoTickRules_2.insert(TickIncrement_2.getString());
      FIX::TickRuleType TickRuleType_2(3);
      noTickRules_1_1_0.set(TickRuleType_2);
      TickRules_NoTickRules_2.insert(TickRuleType_2.getString());
      all_values.push_back(TickRules_NoTickRules_2);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_3;
      FIX::EndTickPriceRange EndTickPriceRange_3;
      EndTickPriceRange_3.setString("6171696");
      noTickRules_1_1_1.set(EndTickPriceRange_3);
      TickRules_NoTickRules_3.insert(EndTickPriceRange_3.getString());
      FIX::StartTickPriceRange StartTickPriceRange_3;
      StartTickPriceRange_3.setString("19876651");
      noTickRules_1_1_1.set(StartTickPriceRange_3);
      TickRules_NoTickRules_3.insert(StartTickPriceRange_3.getString());
      FIX::TickIncrement TickIncrement_3;
      TickIncrement_3.setString("10500586");
      noTickRules_1_1_1.set(TickIncrement_3);
      TickRules_NoTickRules_3.insert(TickIncrement_3.getString());
      FIX::TickRuleType TickRuleType_3(3);
      noTickRules_1_1_1.set(TickRuleType_3);
      TickRules_NoTickRules_3.insert(TickRuleType_3.getString());
      all_values.push_back(TickRules_NoTickRules_3);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_3;
      FIX::NestedInstrAttribType NestedInstrAttribType_3(205578203);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_3);
      NestedInstrumentAttribute_NoNestedInstrAttrib_3.insert(NestedInstrAttribType_3.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_3("STRING_1223439553");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_3);
      NestedInstrumentAttribute_NoNestedInstrAttrib_3.insert(NestedInstrAttribValue_3.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_3);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_4;
      FIX::NestedInstrAttribType NestedInstrAttribType_4(884617148);
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribType_4);
      NestedInstrumentAttribute_NoNestedInstrAttrib_4.insert(NestedInstrAttribType_4.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_4("STRING_1894930774");
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribValue_4);
      NestedInstrumentAttribute_NoNestedInstrAttrib_4.insert(NestedInstrAttribValue_4.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_4);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_5;
      FIX::NestedInstrAttribType NestedInstrAttribType_5(14227272);
      noNestedInstrAttrib_1_1_2.set(NestedInstrAttribType_5);
      NestedInstrumentAttribute_NoNestedInstrAttrib_5.insert(NestedInstrAttribType_5.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_5("STRING_355113515");
      noNestedInstrAttrib_1_1_2.set(NestedInstrAttribValue_5);
      NestedInstrumentAttribute_NoNestedInstrAttrib_5.insert(NestedInstrAttribValue_5.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_5);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_3;
      FIX::TradingSessionID TradingSessionID_16("STRING_1");
      noTradingSessionRules_1_1_0.set(TradingSessionID_16);
      TradingSessionRulesGrp_NoTradingSessionRules_3.insert(TradingSessionID_16.getString());
      FIX::TradingSessionSubID TradingSessionSubID_16("STRING_3");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_16);
      TradingSessionRulesGrp_NoTradingSessionRules_3.insert(TradingSessionSubID_16.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_3);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_8;
        FIX::ExecInstValue ExecInstValue_8('9');
        noExecInstRules_1_0_2_0.set(ExecInstValue_8);
        ExecInstRules_NoExecInstRules_8.insert(ExecInstValue_8.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_8);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_9;
        FIX::ExecInstValue ExecInstValue_9('2');
        noExecInstRules_1_0_2_1.set(ExecInstValue_9);
        ExecInstRules_NoExecInstRules_9.insert(ExecInstValue_9.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_9);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_4;
        FIX::MDBookType MDBookType_4(1);
        noMDFeedTypes_1_0_2_0.set(MDBookType_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MDBookType_4.getString());
        FIX::MDFeedType MDFeedType_4("STRING_935745501");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MDFeedType_4.getString());
        FIX::MarketDepth MarketDepth_4(323475783);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MarketDepth_4.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_4);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_6;
        FIX::MatchAlgorithm MatchAlgorithm_6("STRING_775871224");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_6);
        MatchRules_NoMatchRules_6.insert(MatchAlgorithm_6.getString());
        FIX::MatchType MatchType_9("STRING_S4");
        noMatchRules_1_0_2_0.set(MatchType_9);
        MatchRules_NoMatchRules_6.insert(MatchType_9.getString());
        all_values.push_back(MatchRules_NoMatchRules_6);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_7;
        FIX::MatchAlgorithm MatchAlgorithm_7("STRING_513301492");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_7);
        MatchRules_NoMatchRules_7.insert(MatchAlgorithm_7.getString());
        FIX::MatchType MatchType_10("STRING_4");
        noMatchRules_1_0_2_1.set(MatchType_10);
        MatchRules_NoMatchRules_7.insert(MatchType_10.getString());
        all_values.push_back(MatchRules_NoMatchRules_7);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_8;
        FIX::MatchAlgorithm MatchAlgorithm_8("STRING_1705257265");
        noMatchRules_1_0_2_2.set(MatchAlgorithm_8);
        MatchRules_NoMatchRules_8.insert(MatchAlgorithm_8.getString());
        FIX::MatchType MatchType_11("STRING_8");
        noMatchRules_1_0_2_2.set(MatchType_11);
        MatchRules_NoMatchRules_8.insert(MatchType_11.getString());
        all_values.push_back(MatchRules_NoMatchRules_8);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_8;
        FIX::OrdType OrdType_9('8');
        noOrdTypeRules_1_0_2_0.set(OrdType_9);
        OrdTypeRules_NoOrdTypeRules_8.insert(OrdType_9.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_8);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_9;
        FIX::OrdType OrdType_10('B');
        noOrdTypeRules_1_0_2_1.set(OrdType_10);
        OrdTypeRules_NoOrdTypeRules_9.insert(OrdType_10.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_9);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_10;
        FIX::OrdType OrdType_11('D');
        noOrdTypeRules_1_0_2_2.set(OrdType_11);
        OrdTypeRules_NoOrdTypeRules_10.insert(OrdType_11.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_10);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_9;
        FIX::TimeInForce TimeInForce_10('1');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_10);
        TimeInForceRules_NoTimeInForceRules_9.insert(TimeInForce_10.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_9);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_10;
        FIX::TimeInForce TimeInForce_11('7');
        noTimeInForceRules_1_0_2_1.set(TimeInForce_11);
        TimeInForceRules_NoTimeInForceRules_10.insert(TimeInForce_11.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_10);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_4;
      FIX::TradingSessionID TradingSessionID_17("STRING_4");
      noTradingSessionRules_1_1_1.set(TradingSessionID_17);
      TradingSessionRulesGrp_NoTradingSessionRules_4.insert(TradingSessionID_17.getString());
      FIX::TradingSessionSubID TradingSessionSubID_17("STRING_7");
      noTradingSessionRules_1_1_1.set(TradingSessionSubID_17);
      TradingSessionRulesGrp_NoTradingSessionRules_4.insert(TradingSessionSubID_17.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_4);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_10;
        FIX::ExecInstValue ExecInstValue_10('2');
        noExecInstRules_1_1_2_0.set(ExecInstValue_10);
        ExecInstRules_NoExecInstRules_10.insert(ExecInstValue_10.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_10);

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_5;
        FIX::MDBookType MDBookType_5(1);
        noMDFeedTypes_1_1_2_0.set(MDBookType_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MDBookType_5.getString());
        FIX::MDFeedType MDFeedType_5("STRING_641946891");
        noMDFeedTypes_1_1_2_0.set(MDFeedType_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MDFeedType_5.getString());
        FIX::MarketDepth MarketDepth_5(155547265);
        noMDFeedTypes_1_1_2_0.set(MarketDepth_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MarketDepth_5.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_5);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_6;
        FIX::MDBookType MDBookType_6(2);
        noMDFeedTypes_1_1_2_1.set(MDBookType_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MDBookType_6.getString());
        FIX::MDFeedType MDFeedType_6("STRING_1175560484");
        noMDFeedTypes_1_1_2_1.set(MDFeedType_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MDFeedType_6.getString());
        FIX::MarketDepth MarketDepth_6(2031297404);
        noMDFeedTypes_1_1_2_1.set(MarketDepth_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MarketDepth_6.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_6);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_9;
        FIX::MatchAlgorithm MatchAlgorithm_9("STRING_1083034699");
        noMatchRules_1_1_2_0.set(MatchAlgorithm_9);
        MatchRules_NoMatchRules_9.insert(MatchAlgorithm_9.getString());
        FIX::MatchType MatchType_12("STRING_S1");
        noMatchRules_1_1_2_0.set(MatchType_12);
        MatchRules_NoMatchRules_9.insert(MatchType_12.getString());
        all_values.push_back(MatchRules_NoMatchRules_9);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_10;
        FIX::MatchAlgorithm MatchAlgorithm_10("STRING_1075362971");
        noMatchRules_1_1_2_1.set(MatchAlgorithm_10);
        MatchRules_NoMatchRules_10.insert(MatchAlgorithm_10.getString());
        FIX::MatchType MatchType_13("STRING_M3");
        noMatchRules_1_1_2_1.set(MatchType_13);
        MatchRules_NoMatchRules_10.insert(MatchType_13.getString());
        all_values.push_back(MatchRules_NoMatchRules_10);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_11;
        FIX::MatchAlgorithm MatchAlgorithm_11("STRING_1863994261");
        noMatchRules_1_1_2_2.set(MatchAlgorithm_11);
        MatchRules_NoMatchRules_11.insert(MatchAlgorithm_11.getString());
        FIX::MatchType MatchType_14("STRING_5");
        noMatchRules_1_1_2_2.set(MatchType_14);
        MatchRules_NoMatchRules_11.insert(MatchType_14.getString());
        all_values.push_back(MatchRules_NoMatchRules_11);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_11;
        FIX::OrdType OrdType_12('L');
        noOrdTypeRules_1_1_2_0.set(OrdType_12);
        OrdTypeRules_NoOrdTypeRules_11.insert(OrdType_12.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_11);

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_12;
        FIX::OrdType OrdType_13('5');
        noOrdTypeRules_1_1_2_1.set(OrdType_13);
        OrdTypeRules_NoOrdTypeRules_12.insert(OrdType_13.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_12);

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_11;
        FIX::TimeInForce TimeInForce_12('0');
        noTimeInForceRules_1_1_2_0.set(TimeInForce_12);
        TimeInForceRules_NoTimeInForceRules_11.insert(TimeInForce_12.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_11);

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_12;
        FIX::TimeInForce TimeInForce_13('6');
        noTimeInForceRules_1_1_2_1.set(TimeInForce_13);
        TimeInForceRules_NoTimeInForceRules_12.insert(TimeInForce_13.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_12);

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_13;
        FIX::TimeInForce TimeInForce_14('1');
        noTimeInForceRules_1_1_2_2.set(TimeInForce_14);
        TimeInForceRules_NoTimeInForceRules_13.insert(TimeInForce_14.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_13);

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_2);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_3;
      FIX::EndStrikePxRange EndStrikePxRange_3;
      EndStrikePxRange_3.setString("16075791");
      noStrikeRules_1_1_0.set(EndStrikePxRange_3);
      StrikeRules_NoStrikeRules_3.insert(EndStrikePxRange_3.getString());
      FIX::StartStrikePxRange StartStrikePxRange_3;
      StartStrikePxRange_3.setString("7458856");
      noStrikeRules_1_1_0.set(StartStrikePxRange_3);
      StrikeRules_NoStrikeRules_3.insert(StartStrikePxRange_3.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_3(1236711042);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeExerciseStyle_3.getString());
      FIX::StrikeIncrement StrikeIncrement_3;
      StrikeIncrement_3.setString("21114452");
      noStrikeRules_1_1_0.set(StrikeIncrement_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeIncrement_3.getString());
      FIX::StrikeRuleID StrikeRuleID_3("STRING_607877665");
      noStrikeRules_1_1_0.set(StrikeRuleID_3);
      StrikeRules_NoStrikeRules_3.insert(StrikeRuleID_3.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_3);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_7;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_7("MONTHYEAR_673406007");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_7);
        MaturityRules_NoMaturityRules_7.insert(EndMaturityMonthYear_7.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_7(1);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearFormat_7.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_7(925760645);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearIncrement_7.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_7(2);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityMonthYearIncrementUnits_7.getString());
        FIX::MaturityRuleID MaturityRuleID_7("STRING_645484476");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_7);
        MaturityRules_NoMaturityRules_7.insert(MaturityRuleID_7.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_7("MONTHYEAR_1567707536");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_7);
        MaturityRules_NoMaturityRules_7.insert(StartMaturityMonthYear_7.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_7);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_8;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_8("MONTHYEAR_1285844763");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_8);
        MaturityRules_NoMaturityRules_8.insert(EndMaturityMonthYear_8.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_8(2);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearFormat_8.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_8(595784372);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearIncrement_8.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_8(3);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityMonthYearIncrementUnits_8.getString());
        FIX::MaturityRuleID MaturityRuleID_8("STRING_1054311862");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_8);
        MaturityRules_NoMaturityRules_8.insert(MaturityRuleID_8.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_8("MONTHYEAR_1678819071");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_8);
        MaturityRules_NoMaturityRules_8.insert(StartMaturityMonthYear_8.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_8);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_2;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_2;
    FIX::MarketID MarketID_2("EXCHANGE_562693349");
    noMarketSegments_0_2.set(MarketID_2);
    MarketSegmentGrp_NoMarketSegments_2.insert(MarketID_2.getString());
    FIX::MarketSegmentID MarketSegmentID_2("STRING_2129674834");
    noMarketSegments_0_2.set(MarketSegmentID_2);
    MarketSegmentGrp_NoMarketSegments_2.insert(MarketSegmentID_2.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_2);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_2;
    FIX::ExpirationCycle ExpirationCycle_2(2);
    noMarketSegments_0_2.set(ExpirationCycle_2);
    BaseTradingRules_2.insert(ExpirationCycle_2.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_2(3);
    noMarketSegments_0_2.set(ImpliedMarketIndicator_2);
    BaseTradingRules_2.insert(ImpliedMarketIndicator_2.getString());
    FIX::MaxPriceVariation MaxPriceVariation_2;
    MaxPriceVariation_2.setString("18710507");
    noMarketSegments_0_2.set(MaxPriceVariation_2);
    BaseTradingRules_2.insert(MaxPriceVariation_2.getString());
    FIX::MaxTradeVol MaxTradeVol_2;
    MaxTradeVol_2.setString("497997");
    noMarketSegments_0_2.set(MaxTradeVol_2);
    BaseTradingRules_2.insert(MaxTradeVol_2.getString());
    FIX::MinTradeVol MinTradeVol_2;
    MinTradeVol_2.setString("14031692");
    noMarketSegments_0_2.set(MinTradeVol_2);
    BaseTradingRules_2.insert(MinTradeVol_2.getString());
    FIX::MultilegModel MultilegModel_2(2);
    noMarketSegments_0_2.set(MultilegModel_2);
    BaseTradingRules_2.insert(MultilegModel_2.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_2(0);
    noMarketSegments_0_2.set(MultilegPriceMethod_2);
    BaseTradingRules_2.insert(MultilegPriceMethod_2.getString());
    FIX::PriceType PriceType_13(17);
    noMarketSegments_0_2.set(PriceType_13);
    BaseTradingRules_2.insert(PriceType_13.getString());
    FIX::RoundLot RoundLot_2;
    RoundLot_2.setString("21320161");
    noMarketSegments_0_2.set(RoundLot_2);
    BaseTradingRules_2.insert(RoundLot_2.getString());
    FIX::TradingCurrency TradingCurrency_2("CAN");
    noMarketSegments_0_2.set(TradingCurrency_2);
    BaseTradingRules_2.insert(TradingCurrency_2.getString());
    all_values.push_back(BaseTradingRules_2);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_3;
      FIX::LotType LotType_3('1');
      noLotTypeRules_2_1_0.set(LotType_3);
      LotTypeRules_NoLotTypeRules_3.insert(LotType_3.getString());
      FIX::MinLotSize MinLotSize_3;
      MinLotSize_3.setString("11395280");
      noLotTypeRules_2_1_0.set(MinLotSize_3);
      LotTypeRules_NoLotTypeRules_3.insert(MinLotSize_3.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_3);

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_2;
    FIX::HighLimitPrice HighLimitPrice_2;
    HighLimitPrice_2.setString("15560732");
    noMarketSegments_0_2.set(HighLimitPrice_2);
    PriceLimits_2.insert(HighLimitPrice_2.getString());
    FIX::LowLimitPrice LowLimitPrice_2;
    LowLimitPrice_2.setString("2587033");
    noMarketSegments_0_2.set(LowLimitPrice_2);
    PriceLimits_2.insert(LowLimitPrice_2.getString());
    FIX::PriceLimitType PriceLimitType_2(1);
    noMarketSegments_0_2.set(PriceLimitType_2);
    PriceLimits_2.insert(PriceLimitType_2.getString());
    FIX::TradingReferencePrice TradingReferencePrice_2;
    TradingReferencePrice_2.setString("819956");
    noMarketSegments_0_2.set(TradingReferencePrice_2);
    PriceLimits_2.insert(TradingReferencePrice_2.getString());
    all_values.push_back(PriceLimits_2);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_4;
      FIX::EndTickPriceRange EndTickPriceRange_4;
      EndTickPriceRange_4.setString("5567323");
      noTickRules_2_1_0.set(EndTickPriceRange_4);
      TickRules_NoTickRules_4.insert(EndTickPriceRange_4.getString());
      FIX::StartTickPriceRange StartTickPriceRange_4;
      StartTickPriceRange_4.setString("12122931");
      noTickRules_2_1_0.set(StartTickPriceRange_4);
      TickRules_NoTickRules_4.insert(StartTickPriceRange_4.getString());
      FIX::TickIncrement TickIncrement_4;
      TickIncrement_4.setString("4500134");
      noTickRules_2_1_0.set(TickIncrement_4);
      TickRules_NoTickRules_4.insert(TickIncrement_4.getString());
      FIX::TickRuleType TickRuleType_4(2);
      noTickRules_2_1_0.set(TickRuleType_4);
      TickRules_NoTickRules_4.insert(TickRuleType_4.getString());
      all_values.push_back(TickRules_NoTickRules_4);

      noMarketSegments_0_2.addGroup(noTickRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_2_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_5;
      FIX::EndTickPriceRange EndTickPriceRange_5;
      EndTickPriceRange_5.setString("3506542");
      noTickRules_2_1_1.set(EndTickPriceRange_5);
      TickRules_NoTickRules_5.insert(EndTickPriceRange_5.getString());
      FIX::StartTickPriceRange StartTickPriceRange_5;
      StartTickPriceRange_5.setString("8444153");
      noTickRules_2_1_1.set(StartTickPriceRange_5);
      TickRules_NoTickRules_5.insert(StartTickPriceRange_5.getString());
      FIX::TickIncrement TickIncrement_5;
      TickIncrement_5.setString("5727406");
      noTickRules_2_1_1.set(TickIncrement_5);
      TickRules_NoTickRules_5.insert(TickIncrement_5.getString());
      FIX::TickRuleType TickRuleType_5(4);
      noTickRules_2_1_1.set(TickRuleType_5);
      TickRules_NoTickRules_5.insert(TickRuleType_5.getString());
      all_values.push_back(TickRules_NoTickRules_5);

      noMarketSegments_0_2.addGroup(noTickRules_2_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_6;
      FIX::NestedInstrAttribType NestedInstrAttribType_6(104076034);
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribType_6);
      NestedInstrumentAttribute_NoNestedInstrAttrib_6.insert(NestedInstrAttribType_6.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_6("STRING_2083006134");
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribValue_6);
      NestedInstrumentAttribute_NoNestedInstrAttrib_6.insert(NestedInstrAttribValue_6.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_6);

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_7;
      FIX::NestedInstrAttribType NestedInstrAttribType_7(1880918356);
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribType_7);
      NestedInstrumentAttribute_NoNestedInstrAttrib_7.insert(NestedInstrAttribType_7.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_7("STRING_1654191658");
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribValue_7);
      NestedInstrumentAttribute_NoNestedInstrAttrib_7.insert(NestedInstrAttribValue_7.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_7);

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_8;
      FIX::NestedInstrAttribType NestedInstrAttribType_8(214726449);
      noNestedInstrAttrib_2_1_2.set(NestedInstrAttribType_8);
      NestedInstrumentAttribute_NoNestedInstrAttrib_8.insert(NestedInstrAttribType_8.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_8("STRING_1604485494");
      noNestedInstrAttrib_2_1_2.set(NestedInstrAttribValue_8);
      NestedInstrumentAttribute_NoNestedInstrAttrib_8.insert(NestedInstrAttribValue_8.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_8);

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_5;
      FIX::TradingSessionID TradingSessionID_18("STRING_5");
      noTradingSessionRules_2_1_0.set(TradingSessionID_18);
      TradingSessionRulesGrp_NoTradingSessionRules_5.insert(TradingSessionID_18.getString());
      FIX::TradingSessionSubID TradingSessionSubID_18("STRING_6");
      noTradingSessionRules_2_1_0.set(TradingSessionSubID_18);
      TradingSessionRulesGrp_NoTradingSessionRules_5.insert(TradingSessionSubID_18.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_5);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_11;
        FIX::ExecInstValue ExecInstValue_11('1');
        noExecInstRules_2_0_2_0.set(ExecInstValue_11);
        ExecInstRules_NoExecInstRules_11.insert(ExecInstValue_11.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_11);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_12;
        FIX::ExecInstValue ExecInstValue_12('1');
        noExecInstRules_2_0_2_1.set(ExecInstValue_12);
        ExecInstRules_NoExecInstRules_12.insert(ExecInstValue_12.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_12);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_7;
        FIX::MDBookType MDBookType_7(1);
        noMDFeedTypes_2_0_2_0.set(MDBookType_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MDBookType_7.getString());
        FIX::MDFeedType MDFeedType_7("STRING_1011890596");
        noMDFeedTypes_2_0_2_0.set(MDFeedType_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MDFeedType_7.getString());
        FIX::MarketDepth MarketDepth_7(935067521);
        noMDFeedTypes_2_0_2_0.set(MarketDepth_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MarketDepth_7.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_7);

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_8;
        FIX::MDBookType MDBookType_8(2);
        noMDFeedTypes_2_0_2_1.set(MDBookType_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MDBookType_8.getString());
        FIX::MDFeedType MDFeedType_8("STRING_420480241");
        noMDFeedTypes_2_0_2_1.set(MDFeedType_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MDFeedType_8.getString());
        FIX::MarketDepth MarketDepth_8(1193770858);
        noMDFeedTypes_2_0_2_1.set(MarketDepth_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MarketDepth_8.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_8);

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_12;
        FIX::MatchAlgorithm MatchAlgorithm_12("STRING_502475893");
        noMatchRules_2_0_2_0.set(MatchAlgorithm_12);
        MatchRules_NoMatchRules_12.insert(MatchAlgorithm_12.getString());
        FIX::MatchType MatchType_15("STRING_M5");
        noMatchRules_2_0_2_0.set(MatchType_15);
        MatchRules_NoMatchRules_12.insert(MatchType_15.getString());
        all_values.push_back(MatchRules_NoMatchRules_12);

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_13;
        FIX::OrdType OrdType_14('4');
        noOrdTypeRules_2_0_2_0.set(OrdType_14);
        OrdTypeRules_NoOrdTypeRules_13.insert(OrdType_14.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_13);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_14;
        FIX::OrdType OrdType_15('F');
        noOrdTypeRules_2_0_2_1.set(OrdType_15);
        OrdTypeRules_NoOrdTypeRules_14.insert(OrdType_15.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_14);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_15;
        FIX::OrdType OrdType_16('G');
        noOrdTypeRules_2_0_2_2.set(OrdType_16);
        OrdTypeRules_NoOrdTypeRules_15.insert(OrdType_16.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_15);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_14;
        FIX::TimeInForce TimeInForce_15('0');
        noTimeInForceRules_2_0_2_0.set(TimeInForce_15);
        TimeInForceRules_NoTimeInForceRules_14.insert(TimeInForce_15.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_14);

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_6;
      FIX::TradingSessionID TradingSessionID_19("STRING_2");
      noTradingSessionRules_2_1_1.set(TradingSessionID_19);
      TradingSessionRulesGrp_NoTradingSessionRules_6.insert(TradingSessionID_19.getString());
      FIX::TradingSessionSubID TradingSessionSubID_19("STRING_7");
      noTradingSessionRules_2_1_1.set(TradingSessionSubID_19);
      TradingSessionRulesGrp_NoTradingSessionRules_6.insert(TradingSessionSubID_19.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_6);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_13;
        FIX::ExecInstValue ExecInstValue_13('1');
        noExecInstRules_2_1_2_0.set(ExecInstValue_13);
        ExecInstRules_NoExecInstRules_13.insert(ExecInstValue_13.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_13);

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_14;
        FIX::ExecInstValue ExecInstValue_14('1');
        noExecInstRules_2_1_2_1.set(ExecInstValue_14);
        ExecInstRules_NoExecInstRules_14.insert(ExecInstValue_14.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_14);

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_9;
        FIX::MDBookType MDBookType_9(2);
        noMDFeedTypes_2_1_2_0.set(MDBookType_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MDBookType_9.getString());
        FIX::MDFeedType MDFeedType_9("STRING_1588501379");
        noMDFeedTypes_2_1_2_0.set(MDFeedType_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MDFeedType_9.getString());
        FIX::MarketDepth MarketDepth_9(1234408616);
        noMDFeedTypes_2_1_2_0.set(MarketDepth_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MarketDepth_9.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_9);

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_13;
        FIX::MatchAlgorithm MatchAlgorithm_13("STRING_1058913476");
        noMatchRules_2_1_2_0.set(MatchAlgorithm_13);
        MatchRules_NoMatchRules_13.insert(MatchAlgorithm_13.getString());
        FIX::MatchType MatchType_16("STRING_8");
        noMatchRules_2_1_2_0.set(MatchType_16);
        MatchRules_NoMatchRules_13.insert(MatchType_16.getString());
        all_values.push_back(MatchRules_NoMatchRules_13);

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_14;
        FIX::MatchAlgorithm MatchAlgorithm_14("STRING_586692693");
        noMatchRules_2_1_2_1.set(MatchAlgorithm_14);
        MatchRules_NoMatchRules_14.insert(MatchAlgorithm_14.getString());
        FIX::MatchType MatchType_17("STRING_A5");
        noMatchRules_2_1_2_1.set(MatchType_17);
        MatchRules_NoMatchRules_14.insert(MatchType_17.getString());
        all_values.push_back(MatchRules_NoMatchRules_14);

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_15;
        FIX::MatchAlgorithm MatchAlgorithm_15("STRING_89433992");
        noMatchRules_2_1_2_2.set(MatchAlgorithm_15);
        MatchRules_NoMatchRules_15.insert(MatchAlgorithm_15.getString());
        FIX::MatchType MatchType_18("STRING_S5");
        noMatchRules_2_1_2_2.set(MatchType_18);
        MatchRules_NoMatchRules_15.insert(MatchType_18.getString());
        all_values.push_back(MatchRules_NoMatchRules_15);

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_16;
        FIX::OrdType OrdType_17('E');
        noOrdTypeRules_2_1_2_0.set(OrdType_17);
        OrdTypeRules_NoOrdTypeRules_16.insert(OrdType_17.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_16);

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_15;
        FIX::TimeInForce TimeInForce_16('9');
        noTimeInForceRules_2_1_2_0.set(TimeInForce_16);
        TimeInForceRules_NoTimeInForceRules_15.insert(TimeInForce_16.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_15);

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_16;
        FIX::TimeInForce TimeInForce_17('0');
        noTimeInForceRules_2_1_2_1.set(TimeInForce_17);
        TimeInForceRules_NoTimeInForceRules_16.insert(TimeInForce_17.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_16);

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_1);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_7;
      FIX::TradingSessionID TradingSessionID_20("STRING_6");
      noTradingSessionRules_2_1_2.set(TradingSessionID_20);
      TradingSessionRulesGrp_NoTradingSessionRules_7.insert(TradingSessionID_20.getString());
      FIX::TradingSessionSubID TradingSessionSubID_20("STRING_2");
      noTradingSessionRules_2_1_2.set(TradingSessionSubID_20);
      TradingSessionRulesGrp_NoTradingSessionRules_7.insert(TradingSessionSubID_20.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_7);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_15;
        FIX::ExecInstValue ExecInstValue_15('7');
        noExecInstRules_2_2_2_0.set(ExecInstValue_15);
        ExecInstRules_NoExecInstRules_15.insert(ExecInstValue_15.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_15);

        noTradingSessionRules_2_1_2.addGroup(noExecInstRules_2_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_10;
        FIX::MDBookType MDBookType_10(2);
        noMDFeedTypes_2_2_2_0.set(MDBookType_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MDBookType_10.getString());
        FIX::MDFeedType MDFeedType_10("STRING_3935014");
        noMDFeedTypes_2_2_2_0.set(MDFeedType_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MDFeedType_10.getString());
        FIX::MarketDepth MarketDepth_10(1561467257);
        noMDFeedTypes_2_2_2_0.set(MarketDepth_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MarketDepth_10.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_10);

        noTradingSessionRules_2_1_2.addGroup(noMDFeedTypes_2_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_11;
        FIX::MDBookType MDBookType_11(3);
        noMDFeedTypes_2_2_2_1.set(MDBookType_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MDBookType_11.getString());
        FIX::MDFeedType MDFeedType_11("STRING_149179905");
        noMDFeedTypes_2_2_2_1.set(MDFeedType_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MDFeedType_11.getString());
        FIX::MarketDepth MarketDepth_11(601566340);
        noMDFeedTypes_2_2_2_1.set(MarketDepth_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MarketDepth_11.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_11);

        noTradingSessionRules_2_1_2.addGroup(noMDFeedTypes_2_2_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_16;
        FIX::MatchAlgorithm MatchAlgorithm_16("STRING_45668318");
        noMatchRules_2_2_2_0.set(MatchAlgorithm_16);
        MatchRules_NoMatchRules_16.insert(MatchAlgorithm_16.getString());
        FIX::MatchType MatchType_19("STRING_6");
        noMatchRules_2_2_2_0.set(MatchType_19);
        MatchRules_NoMatchRules_16.insert(MatchType_19.getString());
        all_values.push_back(MatchRules_NoMatchRules_16);

        noTradingSessionRules_2_1_2.addGroup(noMatchRules_2_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_17;
        FIX::MatchAlgorithm MatchAlgorithm_17("STRING_26565857");
        noMatchRules_2_2_2_1.set(MatchAlgorithm_17);
        MatchRules_NoMatchRules_17.insert(MatchAlgorithm_17.getString());
        FIX::MatchType MatchType_20("STRING_A4");
        noMatchRules_2_2_2_1.set(MatchType_20);
        MatchRules_NoMatchRules_17.insert(MatchType_20.getString());
        all_values.push_back(MatchRules_NoMatchRules_17);

        noTradingSessionRules_2_1_2.addGroup(noMatchRules_2_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_17;
        FIX::OrdType OrdType_18('5');
        noOrdTypeRules_2_2_2_0.set(OrdType_18);
        OrdTypeRules_NoOrdTypeRules_17.insert(OrdType_18.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_17);

        noTradingSessionRules_2_1_2.addGroup(noOrdTypeRules_2_2_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_17;
        FIX::TimeInForce TimeInForce_18('1');
        noTimeInForceRules_2_2_2_0.set(TimeInForce_18);
        TimeInForceRules_NoTimeInForceRules_17.insert(TimeInForce_18.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_17);

        noTradingSessionRules_2_1_2.addGroup(noTimeInForceRules_2_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_18;
        FIX::TimeInForce TimeInForce_19('4');
        noTimeInForceRules_2_2_2_1.set(TimeInForce_19);
        TimeInForceRules_NoTimeInForceRules_18.insert(TimeInForce_19.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_18);

        noTradingSessionRules_2_1_2.addGroup(noTimeInForceRules_2_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_2_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_19;
        FIX::TimeInForce TimeInForce_20('0');
        noTimeInForceRules_2_2_2_2.set(TimeInForce_20);
        TimeInForceRules_NoTimeInForceRules_19.insert(TimeInForce_20.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_19);

        noTradingSessionRules_2_1_2.addGroup(noTimeInForceRules_2_2_2_2);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_4;
      FIX::EndStrikePxRange EndStrikePxRange_4;
      EndStrikePxRange_4.setString("9932472");
      noStrikeRules_2_1_0.set(EndStrikePxRange_4);
      StrikeRules_NoStrikeRules_4.insert(EndStrikePxRange_4.getString());
      FIX::StartStrikePxRange StartStrikePxRange_4;
      StartStrikePxRange_4.setString("16690890");
      noStrikeRules_2_1_0.set(StartStrikePxRange_4);
      StrikeRules_NoStrikeRules_4.insert(StartStrikePxRange_4.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_4(1209126358);
      noStrikeRules_2_1_0.set(StrikeExerciseStyle_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeExerciseStyle_4.getString());
      FIX::StrikeIncrement StrikeIncrement_4;
      StrikeIncrement_4.setString("7706511");
      noStrikeRules_2_1_0.set(StrikeIncrement_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeIncrement_4.getString());
      FIX::StrikeRuleID StrikeRuleID_4("STRING_622930034");
      noStrikeRules_2_1_0.set(StrikeRuleID_4);
      StrikeRules_NoStrikeRules_4.insert(StrikeRuleID_4.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_4);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_9;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_9("MONTHYEAR_998236870");
        noMaturityRules_2_0_2_0.set(EndMaturityMonthYear_9);
        MaturityRules_NoMaturityRules_9.insert(EndMaturityMonthYear_9.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_9(1);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearFormat_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearFormat_9.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_9(1572450398);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrement_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearIncrement_9.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_9(0);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrementUnits_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityMonthYearIncrementUnits_9.getString());
        FIX::MaturityRuleID MaturityRuleID_9("STRING_2021531939");
        noMaturityRules_2_0_2_0.set(MaturityRuleID_9);
        MaturityRules_NoMaturityRules_9.insert(MaturityRuleID_9.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_9("MONTHYEAR_128072182");
        noMaturityRules_2_0_2_0.set(StartMaturityMonthYear_9);
        MaturityRules_NoMaturityRules_9.insert(StartMaturityMonthYear_9.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_9);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_10;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_10("MONTHYEAR_106117617");
        noMaturityRules_2_0_2_1.set(EndMaturityMonthYear_10);
        MaturityRules_NoMaturityRules_10.insert(EndMaturityMonthYear_10.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_10(1);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearFormat_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearFormat_10.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_10(132007197);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrement_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearIncrement_10.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_10(2);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrementUnits_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityMonthYearIncrementUnits_10.getString());
        FIX::MaturityRuleID MaturityRuleID_10("STRING_827636539");
        noMaturityRules_2_0_2_1.set(MaturityRuleID_10);
        MaturityRules_NoMaturityRules_10.insert(MaturityRuleID_10.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_10("MONTHYEAR_281187102");
        noMaturityRules_2_0_2_1.set(StartMaturityMonthYear_10);
        MaturityRules_NoMaturityRules_10.insert(StartMaturityMonthYear_10.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_10);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_11;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_11("MONTHYEAR_121667566");
        noMaturityRules_2_0_2_2.set(EndMaturityMonthYear_11);
        MaturityRules_NoMaturityRules_11.insert(EndMaturityMonthYear_11.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_11(2);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearFormat_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearFormat_11.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_11(326855420);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearIncrement_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearIncrement_11.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_11(0);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearIncrementUnits_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityMonthYearIncrementUnits_11.getString());
        FIX::MaturityRuleID MaturityRuleID_11("STRING_1654476970");
        noMaturityRules_2_0_2_2.set(MaturityRuleID_11);
        MaturityRules_NoMaturityRules_11.insert(MaturityRuleID_11.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_11("MONTHYEAR_2446859");
        noMaturityRules_2_0_2_2.set(StartMaturityMonthYear_11);
        MaturityRules_NoMaturityRules_11.insert(StartMaturityMonthYear_11.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_11);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_2);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_5;
      FIX::EndStrikePxRange EndStrikePxRange_5;
      EndStrikePxRange_5.setString("4115172");
      noStrikeRules_2_1_1.set(EndStrikePxRange_5);
      StrikeRules_NoStrikeRules_5.insert(EndStrikePxRange_5.getString());
      FIX::StartStrikePxRange StartStrikePxRange_5;
      StartStrikePxRange_5.setString("11220605");
      noStrikeRules_2_1_1.set(StartStrikePxRange_5);
      StrikeRules_NoStrikeRules_5.insert(StartStrikePxRange_5.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_5(912446915);
      noStrikeRules_2_1_1.set(StrikeExerciseStyle_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeExerciseStyle_5.getString());
      FIX::StrikeIncrement StrikeIncrement_5;
      StrikeIncrement_5.setString("13105000");
      noStrikeRules_2_1_1.set(StrikeIncrement_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeIncrement_5.getString());
      FIX::StrikeRuleID StrikeRuleID_5("STRING_1648557623");
      noStrikeRules_2_1_1.set(StrikeRuleID_5);
      StrikeRules_NoStrikeRules_5.insert(StrikeRuleID_5.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_5);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_12;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_12("MONTHYEAR_648691844");
        noMaturityRules_2_1_2_0.set(EndMaturityMonthYear_12);
        MaturityRules_NoMaturityRules_12.insert(EndMaturityMonthYear_12.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_12(2);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearFormat_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearFormat_12.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_12(2013707460);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrement_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearIncrement_12.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_12(2);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrementUnits_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityMonthYearIncrementUnits_12.getString());
        FIX::MaturityRuleID MaturityRuleID_12("STRING_1264972351");
        noMaturityRules_2_1_2_0.set(MaturityRuleID_12);
        MaturityRules_NoMaturityRules_12.insert(MaturityRuleID_12.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_12("MONTHYEAR_489153846");
        noMaturityRules_2_1_2_0.set(StartMaturityMonthYear_12);
        MaturityRules_NoMaturityRules_12.insert(StartMaturityMonthYear_12.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_12);

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_0);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_6;
      FIX::EndStrikePxRange EndStrikePxRange_6;
      EndStrikePxRange_6.setString("15779793");
      noStrikeRules_2_1_2.set(EndStrikePxRange_6);
      StrikeRules_NoStrikeRules_6.insert(EndStrikePxRange_6.getString());
      FIX::StartStrikePxRange StartStrikePxRange_6;
      StartStrikePxRange_6.setString("1157255");
      noStrikeRules_2_1_2.set(StartStrikePxRange_6);
      StrikeRules_NoStrikeRules_6.insert(StartStrikePxRange_6.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_6(486405062);
      noStrikeRules_2_1_2.set(StrikeExerciseStyle_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeExerciseStyle_6.getString());
      FIX::StrikeIncrement StrikeIncrement_6;
      StrikeIncrement_6.setString("10029460");
      noStrikeRules_2_1_2.set(StrikeIncrement_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeIncrement_6.getString());
      FIX::StrikeRuleID StrikeRuleID_6("STRING_1422701702");
      noStrikeRules_2_1_2.set(StrikeRuleID_6);
      StrikeRules_NoStrikeRules_6.insert(StrikeRuleID_6.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_6);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_13;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_13("MONTHYEAR_1131018260");
        noMaturityRules_2_2_2_0.set(EndMaturityMonthYear_13);
        MaturityRules_NoMaturityRules_13.insert(EndMaturityMonthYear_13.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_13(2);
        noMaturityRules_2_2_2_0.set(MaturityMonthYearFormat_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearFormat_13.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_13(1826067762);
        noMaturityRules_2_2_2_0.set(MaturityMonthYearIncrement_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearIncrement_13.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_13(1);
        noMaturityRules_2_2_2_0.set(MaturityMonthYearIncrementUnits_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityMonthYearIncrementUnits_13.getString());
        FIX::MaturityRuleID MaturityRuleID_13("STRING_1048920546");
        noMaturityRules_2_2_2_0.set(MaturityRuleID_13);
        MaturityRules_NoMaturityRules_13.insert(MaturityRuleID_13.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_13("MONTHYEAR_506220653");
        noMaturityRules_2_2_2_0.set(StartMaturityMonthYear_13);
        MaturityRules_NoMaturityRules_13.insert(StartMaturityMonthYear_13.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_13);

        noStrikeRules_2_1_2.addGroup(noMaturityRules_2_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_14;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_14("MONTHYEAR_1544212559");
        noMaturityRules_2_2_2_1.set(EndMaturityMonthYear_14);
        MaturityRules_NoMaturityRules_14.insert(EndMaturityMonthYear_14.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_14(1);
        noMaturityRules_2_2_2_1.set(MaturityMonthYearFormat_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearFormat_14.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_14(2134131767);
        noMaturityRules_2_2_2_1.set(MaturityMonthYearIncrement_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearIncrement_14.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_14(3);
        noMaturityRules_2_2_2_1.set(MaturityMonthYearIncrementUnits_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityMonthYearIncrementUnits_14.getString());
        FIX::MaturityRuleID MaturityRuleID_14("STRING_1037997136");
        noMaturityRules_2_2_2_1.set(MaturityRuleID_14);
        MaturityRules_NoMaturityRules_14.insert(MaturityRuleID_14.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_14("MONTHYEAR_1641125089");
        noMaturityRules_2_2_2_1.set(StartMaturityMonthYear_14);
        MaturityRules_NoMaturityRules_14.insert(StartMaturityMonthYear_14.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_14);

        noStrikeRules_2_1_2.addGroup(noMaturityRules_2_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_2_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_15;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_15("MONTHYEAR_1873514838");
        noMaturityRules_2_2_2_2.set(EndMaturityMonthYear_15);
        MaturityRules_NoMaturityRules_15.insert(EndMaturityMonthYear_15.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_15(1);
        noMaturityRules_2_2_2_2.set(MaturityMonthYearFormat_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearFormat_15.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_15(615702000);
        noMaturityRules_2_2_2_2.set(MaturityMonthYearIncrement_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearIncrement_15.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_15(1);
        noMaturityRules_2_2_2_2.set(MaturityMonthYearIncrementUnits_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityMonthYearIncrementUnits_15.getString());
        FIX::MaturityRuleID MaturityRuleID_15("STRING_612530773");
        noMaturityRules_2_2_2_2.set(MaturityRuleID_15);
        MaturityRules_NoMaturityRules_15.insert(MaturityRuleID_15.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_15("MONTHYEAR_116775976");
        noMaturityRules_2_2_2_2.set(StartMaturityMonthYear_15);
        MaturityRules_NoMaturityRules_15.insert(StartMaturityMonthYear_15.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_15);

        noStrikeRules_2_1_2.addGroup(noMaturityRules_2_2_2_2);
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
    FIX::CorporateAction CorporateAction_0("MULTIPLECHARVALUE_W");
    noRelatedSym_0_0.set(CorporateAction_0);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(CorporateAction_0.getString());
    FIX::Currency Currency_14("CAN");
    noRelatedSym_0_0.set(Currency_14);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(Currency_14.getString());
    FIX::EncodedText EncodedText_28("DATA_971557171");
    noRelatedSym_0_0.set(EncodedText_28);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(EncodedText_28.getString());
    FIX::EncodedTextLen EncodedTextLen_28(1876069537);
    noRelatedSym_0_0.set(EncodedTextLen_28);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(EncodedTextLen_28.getString());
    FIX::RelSymTransactTime RelSymTransactTime_0(FIX::UTCTIMESTAMP(2, 11, 14, 4, 62012));
    noRelatedSym_0_0.set(RelSymTransactTime_0);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(RelSymTransactTime_0.getString());
    FIX::Text Text_28("STRING_388533540");
    noRelatedSym_0_0.set(Text_28);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(Text_28.getString());
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_25;
      FIX::EncodedLegIssuer EncodedLegIssuer_25("DATA_1863916662");
      noLegs_0_1_0.set(EncodedLegIssuer_25);
      InstrumentLeg_25.insert(EncodedLegIssuer_25.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_25(1651558997);
      noLegs_0_1_0.set(EncodedLegIssuerLen_25);
      InstrumentLeg_25.insert(EncodedLegIssuerLen_25.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_25("DATA_1697269383");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_25);
      InstrumentLeg_25.insert(EncodedLegSecurityDesc_25.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_25(222653668);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_25);
      InstrumentLeg_25.insert(EncodedLegSecurityDescLen_25.getString());
      FIX::LegCFICode LegCFICode_25("STRING_1048287908");
      noLegs_0_1_0.set(LegCFICode_25);
      InstrumentLeg_25.insert(LegCFICode_25.getString());
      FIX::LegContractMultiplier LegContractMultiplier_25;
      LegContractMultiplier_25.setString("7203738");
      noLegs_0_1_0.set(LegContractMultiplier_25);
      InstrumentLeg_25.insert(LegContractMultiplier_25.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_25(209301787);
      noLegs_0_1_0.set(LegContractMultiplierUnit_25);
      InstrumentLeg_25.insert(LegContractMultiplierUnit_25.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_25("MONTHYEAR_771872239");
      noLegs_0_1_0.set(LegContractSettlMonth_25);
      InstrumentLeg_25.insert(LegContractSettlMonth_25.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_25("COUNTRY_1758370984");
      noLegs_0_1_0.set(LegCountryOfIssue_25);
      InstrumentLeg_25.insert(LegCountryOfIssue_25.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_25("LOCALMKTDATE_1850426876");
      noLegs_0_1_0.set(LegCouponPaymentDate_25);
      InstrumentLeg_25.insert(LegCouponPaymentDate_25.getString());
      FIX::LegCouponRate LegCouponRate_25;
      LegCouponRate_25.setString("34.290000");
      noLegs_0_1_0.set(LegCouponRate_25);
      InstrumentLeg_25.insert(LegCouponRate_25.getString());
      FIX::LegCreditRating LegCreditRating_25("STRING_1060401729");
      noLegs_0_1_0.set(LegCreditRating_25);
      InstrumentLeg_25.insert(LegCreditRating_25.getString());
      FIX::LegCurrency LegCurrency_25("CHF");
      noLegs_0_1_0.set(LegCurrency_25);
      InstrumentLeg_25.insert(LegCurrency_25.getString());
      FIX::LegDatedDate LegDatedDate_25("LOCALMKTDATE_1672932503");
      noLegs_0_1_0.set(LegDatedDate_25);
      InstrumentLeg_25.insert(LegDatedDate_25.getString());
      FIX::LegExerciseStyle LegExerciseStyle_25(435421205);
      noLegs_0_1_0.set(LegExerciseStyle_25);
      InstrumentLeg_25.insert(LegExerciseStyle_25.getString());
      FIX::LegFactor LegFactor_25;
      LegFactor_25.setString("21194780");
      noLegs_0_1_0.set(LegFactor_25);
      InstrumentLeg_25.insert(LegFactor_25.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_25(786671472);
      noLegs_0_1_0.set(LegFlowScheduleType_25);
      InstrumentLeg_25.insert(LegFlowScheduleType_25.getString());
      FIX::LegInstrRegistry LegInstrRegistry_25("STRING_1046518391");
      noLegs_0_1_0.set(LegInstrRegistry_25);
      InstrumentLeg_25.insert(LegInstrRegistry_25.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_25("LOCALMKTDATE_821314645");
      noLegs_0_1_0.set(LegInterestAccrualDate_25);
      InstrumentLeg_25.insert(LegInterestAccrualDate_25.getString());
      FIX::LegIssueDate LegIssueDate_25("LOCALMKTDATE_1758228644");
      noLegs_0_1_0.set(LegIssueDate_25);
      InstrumentLeg_25.insert(LegIssueDate_25.getString());
      FIX::LegIssuer LegIssuer_25("STRING_775104280");
      noLegs_0_1_0.set(LegIssuer_25);
      InstrumentLeg_25.insert(LegIssuer_25.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_25("STRING_12305129");
      noLegs_0_1_0.set(LegLocaleOfIssue_25);
      InstrumentLeg_25.insert(LegLocaleOfIssue_25.getString());
      FIX::LegMaturityDate LegMaturityDate_25("LOCALMKTDATE_12797846");
      noLegs_0_1_0.set(LegMaturityDate_25);
      InstrumentLeg_25.insert(LegMaturityDate_25.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_25("MONTHYEAR_619415744");
      noLegs_0_1_0.set(LegMaturityMonthYear_25);
      InstrumentLeg_25.insert(LegMaturityMonthYear_25.getString());
      FIX::LegMaturityTime LegMaturityTime_25("TZTIMEONLY_1837184324");
      noLegs_0_1_0.set(LegMaturityTime_25);
      InstrumentLeg_25.insert(LegMaturityTime_25.getString());
      FIX::LegOptAttribute LegOptAttribute_25('1');
      noLegs_0_1_0.set(LegOptAttribute_25);
      InstrumentLeg_25.insert(LegOptAttribute_25.getString());
      FIX::LegOptionRatio LegOptionRatio_25;
      LegOptionRatio_25.setString("18864289");
      noLegs_0_1_0.set(LegOptionRatio_25);
      InstrumentLeg_25.insert(LegOptionRatio_25.getString());
      FIX::LegPool LegPool_25("STRING_1875033224");
      noLegs_0_1_0.set(LegPool_25);
      InstrumentLeg_25.insert(LegPool_25.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_25("STRING_1806330314");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_25);
      InstrumentLeg_25.insert(LegPriceUnitOfMeasure_25.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_25;
      LegPriceUnitOfMeasureQty_25.setString("3872940");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_25);
      InstrumentLeg_25.insert(LegPriceUnitOfMeasureQty_25.getString());
      FIX::LegProduct LegProduct_25(1591466238);
      noLegs_0_1_0.set(LegProduct_25);
      InstrumentLeg_25.insert(LegProduct_25.getString());
      FIX::LegPutOrCall LegPutOrCall_25(1310405663);
      noLegs_0_1_0.set(LegPutOrCall_25);
      InstrumentLeg_25.insert(LegPutOrCall_25.getString());
      FIX::LegRatioQty LegRatioQty_25;
      LegRatioQty_25.setString("20845634");
      noLegs_0_1_0.set(LegRatioQty_25);
      InstrumentLeg_25.insert(LegRatioQty_25.getString());
      FIX::LegRedemptionDate LegRedemptionDate_25("LOCALMKTDATE_1814119906");
      noLegs_0_1_0.set(LegRedemptionDate_25);
      InstrumentLeg_25.insert(LegRedemptionDate_25.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_25("STRING_211209923");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_25);
      InstrumentLeg_25.insert(LegRepoCollateralSecurityType_25.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_25;
      LegRepurchaseRate_25.setString("36.810000");
      noLegs_0_1_0.set(LegRepurchaseRate_25);
      InstrumentLeg_25.insert(LegRepurchaseRate_25.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_25(2023421693);
      noLegs_0_1_0.set(LegRepurchaseTerm_25);
      InstrumentLeg_25.insert(LegRepurchaseTerm_25.getString());
      FIX::LegSecurityDesc LegSecurityDesc_25("STRING_983082162");
      noLegs_0_1_0.set(LegSecurityDesc_25);
      InstrumentLeg_25.insert(LegSecurityDesc_25.getString());
      FIX::LegSecurityExchange LegSecurityExchange_25("EXCHANGE_268341017");
      noLegs_0_1_0.set(LegSecurityExchange_25);
      InstrumentLeg_25.insert(LegSecurityExchange_25.getString());
      FIX::LegSecurityID LegSecurityID_25("STRING_1726364922");
      noLegs_0_1_0.set(LegSecurityID_25);
      InstrumentLeg_25.insert(LegSecurityID_25.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_25("STRING_1480985592");
      noLegs_0_1_0.set(LegSecurityIDSource_25);
      InstrumentLeg_25.insert(LegSecurityIDSource_25.getString());
      FIX::LegSecuritySubType LegSecuritySubType_25("STRING_1328742746");
      noLegs_0_1_0.set(LegSecuritySubType_25);
      InstrumentLeg_25.insert(LegSecuritySubType_25.getString());
      FIX::LegSecurityType LegSecurityType_25("STRING_2045010151");
      noLegs_0_1_0.set(LegSecurityType_25);
      InstrumentLeg_25.insert(LegSecurityType_25.getString());
      FIX::LegSide LegSide_25('4');
      noLegs_0_1_0.set(LegSide_25);
      InstrumentLeg_25.insert(LegSide_25.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_25("STRING_854191601");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_25);
      InstrumentLeg_25.insert(LegStateOrProvinceOfIssue_25.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_25("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_25);
      InstrumentLeg_25.insert(LegStrikeCurrency_25.getString());
      FIX::LegStrikePrice LegStrikePrice_25;
      LegStrikePrice_25.setString("16408630");
      noLegs_0_1_0.set(LegStrikePrice_25);
      InstrumentLeg_25.insert(LegStrikePrice_25.getString());
      FIX::LegSymbol LegSymbol_25("STRING_1379466099");
      noLegs_0_1_0.set(LegSymbol_25);
      InstrumentLeg_25.insert(LegSymbol_25.getString());
      FIX::LegSymbolSfx LegSymbolSfx_25("STRING_1263192484");
      noLegs_0_1_0.set(LegSymbolSfx_25);
      InstrumentLeg_25.insert(LegSymbolSfx_25.getString());
      FIX::LegTimeUnit LegTimeUnit_25("STRING_1251608070");
      noLegs_0_1_0.set(LegTimeUnit_25);
      InstrumentLeg_25.insert(LegTimeUnit_25.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_25("STRING_7086731");
      noLegs_0_1_0.set(LegUnitOfMeasure_25);
      InstrumentLeg_25.insert(LegUnitOfMeasure_25.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_25;
      LegUnitOfMeasureQty_25.setString("12754976");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_25);
      InstrumentLeg_25.insert(LegUnitOfMeasureQty_25.getString());
      all_values.push_back(InstrumentLeg_25);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_43;
        FIX::LegSecurityAltID LegSecurityAltID_43("STRING_626502475");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_43);
        LegSecAltIDGrp_NoLegSecurityAltID_43.insert(LegSecurityAltID_43.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_43("STRING_965198290");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_43);
        LegSecAltIDGrp_NoLegSecurityAltID_43.insert(LegSecurityAltIDSource_43.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_43);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_44;
        FIX::LegSecurityAltID LegSecurityAltID_44("STRING_534719043");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_44);
        LegSecAltIDGrp_NoLegSecurityAltID_44.insert(LegSecurityAltID_44.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_44("STRING_365447737");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_44);
        LegSecAltIDGrp_NoLegSecurityAltID_44.insert(LegSecurityAltIDSource_44.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_44);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_45;
        FIX::LegSecurityAltID LegSecurityAltID_45("STRING_692747866");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltID_45);
        LegSecAltIDGrp_NoLegSecurityAltID_45.insert(LegSecurityAltID_45.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_45("STRING_193565709");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltIDSource_45);
        LegSecAltIDGrp_NoLegSecurityAltID_45.insert(LegSecurityAltIDSource_45.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_45);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_17;
    FIX::AttachmentPoint AttachmentPoint_17;
    AttachmentPoint_17.setString("18.350000");
    noRelatedSym_0_0.set(AttachmentPoint_17);
    Instrument_17.insert(AttachmentPoint_17.getString());
    FIX::CFICode CFICode_17("STRING_136730456");
    noRelatedSym_0_0.set(CFICode_17);
    Instrument_17.insert(CFICode_17.getString());
    FIX::CPProgram CPProgram_17(1);
    noRelatedSym_0_0.set(CPProgram_17);
    Instrument_17.insert(CPProgram_17.getString());
    FIX::CPRegType CPRegType_17("STRING_689821669");
    noRelatedSym_0_0.set(CPRegType_17);
    Instrument_17.insert(CPRegType_17.getString());
    FIX::CapPrice CapPrice_17;
    CapPrice_17.setString("19508503");
    noRelatedSym_0_0.set(CapPrice_17);
    Instrument_17.insert(CapPrice_17.getString());
    FIX::ContractMultiplier ContractMultiplier_17;
    ContractMultiplier_17.setString("17151812");
    noRelatedSym_0_0.set(ContractMultiplier_17);
    Instrument_17.insert(ContractMultiplier_17.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_17(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_17);
    Instrument_17.insert(ContractMultiplierUnit_17.getString());
    FIX::ContractSettlMonth ContractSettlMonth_17("MONTHYEAR_1826788408");
    noRelatedSym_0_0.set(ContractSettlMonth_17);
    Instrument_17.insert(ContractSettlMonth_17.getString());
    FIX::CountryOfIssue CountryOfIssue_17("COUNTRY_550779811");
    noRelatedSym_0_0.set(CountryOfIssue_17);
    Instrument_17.insert(CountryOfIssue_17.getString());
    FIX::CouponPaymentDate CouponPaymentDate_17("LOCALMKTDATE_1615616367");
    noRelatedSym_0_0.set(CouponPaymentDate_17);
    Instrument_17.insert(CouponPaymentDate_17.getString());
    FIX::CouponRate CouponRate_17;
    CouponRate_17.setString("96.820000");
    noRelatedSym_0_0.set(CouponRate_17);
    Instrument_17.insert(CouponRate_17.getString());
    FIX::CreditRating CreditRating_17("STRING_2031765403");
    noRelatedSym_0_0.set(CreditRating_17);
    Instrument_17.insert(CreditRating_17.getString());
    FIX::DatedDate DatedDate_17("LOCALMKTDATE_796875465");
    noRelatedSym_0_0.set(DatedDate_17);
    Instrument_17.insert(DatedDate_17.getString());
    FIX::DetachmentPoint DetachmentPoint_17;
    DetachmentPoint_17.setString("61.850000");
    noRelatedSym_0_0.set(DetachmentPoint_17);
    Instrument_17.insert(DetachmentPoint_17.getString());
    FIX::EncodedIssuer EncodedIssuer_17("DATA_354165234");
    noRelatedSym_0_0.set(EncodedIssuer_17);
    Instrument_17.insert(EncodedIssuer_17.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_17(1651067067);
    noRelatedSym_0_0.set(EncodedIssuerLen_17);
    Instrument_17.insert(EncodedIssuerLen_17.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_17("DATA_1636143893");
    noRelatedSym_0_0.set(EncodedSecurityDesc_17);
    Instrument_17.insert(EncodedSecurityDesc_17.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_17(796043073);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_17);
    Instrument_17.insert(EncodedSecurityDescLen_17.getString());
    FIX::ExerciseStyle ExerciseStyle_17(1);
    noRelatedSym_0_0.set(ExerciseStyle_17);
    Instrument_17.insert(ExerciseStyle_17.getString());
    FIX::Factor Factor_17;
    Factor_17.setString("8681263");
    noRelatedSym_0_0.set(Factor_17);
    Instrument_17.insert(Factor_17.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_17(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_17);
    Instrument_17.insert(FlexProductEligibilityIndicator_17.getString());
    FIX::FlexibleIndicator FlexibleIndicator_17(false);
    noRelatedSym_0_0.set(FlexibleIndicator_17);
    Instrument_17.insert(FlexibleIndicator_17.getString());
    FIX::FloorPrice FloorPrice_17;
    FloorPrice_17.setString("8752130");
    noRelatedSym_0_0.set(FloorPrice_17);
    Instrument_17.insert(FloorPrice_17.getString());
    FIX::FlowScheduleType FlowScheduleType_17(3);
    noRelatedSym_0_0.set(FlowScheduleType_17);
    Instrument_17.insert(FlowScheduleType_17.getString());
    FIX::InstrRegistry InstrRegistry_17("STRING_1512976831");
    noRelatedSym_0_0.set(InstrRegistry_17);
    Instrument_17.insert(InstrRegistry_17.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_17('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_17);
    Instrument_17.insert(InstrmtAssignmentMethod_17.getString());
    FIX::InterestAccrualDate InterestAccrualDate_17("LOCALMKTDATE_4964165");
    noRelatedSym_0_0.set(InterestAccrualDate_17);
    Instrument_17.insert(InterestAccrualDate_17.getString());
    FIX::IssueDate IssueDate_17("LOCALMKTDATE_2047695874");
    noRelatedSym_0_0.set(IssueDate_17);
    Instrument_17.insert(IssueDate_17.getString());
    FIX::Issuer Issuer_17("STRING_1867163288");
    noRelatedSym_0_0.set(Issuer_17);
    Instrument_17.insert(Issuer_17.getString());
    FIX::ListMethod ListMethod_17(1);
    noRelatedSym_0_0.set(ListMethod_17);
    Instrument_17.insert(ListMethod_17.getString());
    FIX::LocaleOfIssue LocaleOfIssue_17("STRING_93777936");
    noRelatedSym_0_0.set(LocaleOfIssue_17);
    Instrument_17.insert(LocaleOfIssue_17.getString());
    FIX::MaturityDate MaturityDate_17("LOCALMKTDATE_472421476");
    noRelatedSym_0_0.set(MaturityDate_17);
    Instrument_17.insert(MaturityDate_17.getString());
    FIX::MaturityMonthYear MaturityMonthYear_17("MONTHYEAR_834442488");
    noRelatedSym_0_0.set(MaturityMonthYear_17);
    Instrument_17.insert(MaturityMonthYear_17.getString());
    FIX::MaturityTime MaturityTime_17("TZTIMEONLY_1597749309");
    noRelatedSym_0_0.set(MaturityTime_17);
    Instrument_17.insert(MaturityTime_17.getString());
    FIX::MinPriceIncrement MinPriceIncrement_17;
    MinPriceIncrement_17.setString("11622431");
    noRelatedSym_0_0.set(MinPriceIncrement_17);
    Instrument_17.insert(MinPriceIncrement_17.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_17;
    MinPriceIncrementAmount_17.setString("6378092");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_17);
    Instrument_17.insert(MinPriceIncrementAmount_17.getString());
    FIX::NTPositionLimit NTPositionLimit_17(1165446957);
    noRelatedSym_0_0.set(NTPositionLimit_17);
    Instrument_17.insert(NTPositionLimit_17.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_17;
    NotionalPercentageOutstanding_17.setString("48.470000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_17);
    Instrument_17.insert(NotionalPercentageOutstanding_17.getString());
    FIX::OptAttribute OptAttribute_17('3');
    noRelatedSym_0_0.set(OptAttribute_17);
    Instrument_17.insert(OptAttribute_17.getString());
    FIX::OptPayoutAmount OptPayoutAmount_17;
    OptPayoutAmount_17.setString("17162267");
    noRelatedSym_0_0.set(OptPayoutAmount_17);
    Instrument_17.insert(OptPayoutAmount_17.getString());
    FIX::OptPayoutType OptPayoutType_17(2);
    noRelatedSym_0_0.set(OptPayoutType_17);
    Instrument_17.insert(OptPayoutType_17.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_17;
    OriginalNotionalPercentageOutstanding_17.setString("36.460000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_17);
    Instrument_17.insert(OriginalNotionalPercentageOutstanding_17.getString());
    FIX::Pool Pool_17("STRING_1600508523");
    noRelatedSym_0_0.set(Pool_17);
    Instrument_17.insert(Pool_17.getString());
    FIX::PositionLimit PositionLimit_17(627043031);
    noRelatedSym_0_0.set(PositionLimit_17);
    Instrument_17.insert(PositionLimit_17.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_17("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_17);
    Instrument_17.insert(PriceQuoteMethod_17.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_17("STRING_1954673757");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_17);
    Instrument_17.insert(PriceUnitOfMeasure_17.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_17;
    PriceUnitOfMeasureQty_17.setString("1306264");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_17);
    Instrument_17.insert(PriceUnitOfMeasureQty_17.getString());
    FIX::Product Product_19(4);
    noRelatedSym_0_0.set(Product_19);
    Instrument_17.insert(Product_19.getString());
    FIX::ProductComplex ProductComplex_17("STRING_603233182");
    noRelatedSym_0_0.set(ProductComplex_17);
    Instrument_17.insert(ProductComplex_17.getString());
    FIX::PutOrCall PutOrCall_17(1);
    noRelatedSym_0_0.set(PutOrCall_17);
    Instrument_17.insert(PutOrCall_17.getString());
    FIX::RedemptionDate RedemptionDate_17("LOCALMKTDATE_1235282773");
    noRelatedSym_0_0.set(RedemptionDate_17);
    Instrument_17.insert(RedemptionDate_17.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_17("STRING_514985092");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_17);
    Instrument_17.insert(RepoCollateralSecurityType_17.getString());
    FIX::RepurchaseRate RepurchaseRate_17;
    RepurchaseRate_17.setString("38.580000");
    noRelatedSym_0_0.set(RepurchaseRate_17);
    Instrument_17.insert(RepurchaseRate_17.getString());
    FIX::RepurchaseTerm RepurchaseTerm_17(2110495849);
    noRelatedSym_0_0.set(RepurchaseTerm_17);
    Instrument_17.insert(RepurchaseTerm_17.getString());
    FIX::RestructuringType RestructuringType_17("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_17);
    Instrument_17.insert(RestructuringType_17.getString());
    FIX::SecurityDesc SecurityDesc_17("STRING_889137042");
    noRelatedSym_0_0.set(SecurityDesc_17);
    Instrument_17.insert(SecurityDesc_17.getString());
    FIX::SecurityExchange SecurityExchange_17("EXCHANGE_1464727753");
    noRelatedSym_0_0.set(SecurityExchange_17);
    Instrument_17.insert(SecurityExchange_17.getString());
    FIX::SecurityGroup SecurityGroup_17("STRING_1707198781");
    noRelatedSym_0_0.set(SecurityGroup_17);
    Instrument_17.insert(SecurityGroup_17.getString());
    FIX::SecurityID SecurityID_17("STRING_789349268");
    noRelatedSym_0_0.set(SecurityID_17);
    Instrument_17.insert(SecurityID_17.getString());
    FIX::SecurityIDSource SecurityIDSource_17("STRING_G");
    noRelatedSym_0_0.set(SecurityIDSource_17);
    Instrument_17.insert(SecurityIDSource_17.getString());
    FIX::SecurityStatus SecurityStatus_17("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_17);
    Instrument_17.insert(SecurityStatus_17.getString());
    FIX::SecuritySubType SecuritySubType_17("STRING_883127204");
    noRelatedSym_0_0.set(SecuritySubType_17);
    Instrument_17.insert(SecuritySubType_17.getString());
    FIX::SecurityType SecurityType_19("STRING_STN");
    noRelatedSym_0_0.set(SecurityType_19);
    Instrument_17.insert(SecurityType_19.getString());
    FIX::Seniority Seniority_17("STRING_SB");
    noRelatedSym_0_0.set(Seniority_17);
    Instrument_17.insert(Seniority_17.getString());
    FIX::SettlMethod SettlMethod_17('P');
    noRelatedSym_0_0.set(SettlMethod_17);
    Instrument_17.insert(SettlMethod_17.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_17("STRING_671588366");
    noRelatedSym_0_0.set(SettleOnOpenFlag_17);
    Instrument_17.insert(SettleOnOpenFlag_17.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_17("STRING_1729678855");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_17);
    Instrument_17.insert(StateOrProvinceOfIssue_17.getString());
    FIX::StrikeCurrency StrikeCurrency_17("CHF");
    noRelatedSym_0_0.set(StrikeCurrency_17);
    Instrument_17.insert(StrikeCurrency_17.getString());
    FIX::StrikeMultiplier StrikeMultiplier_17;
    StrikeMultiplier_17.setString("20467928");
    noRelatedSym_0_0.set(StrikeMultiplier_17);
    Instrument_17.insert(StrikeMultiplier_17.getString());
    FIX::StrikePrice StrikePrice_17;
    StrikePrice_17.setString("10675829");
    noRelatedSym_0_0.set(StrikePrice_17);
    Instrument_17.insert(StrikePrice_17.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_17(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_17);
    Instrument_17.insert(StrikePriceBoundaryMethod_17.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_17;
    StrikePriceBoundaryPrecision_17.setString("28.170000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_17);
    Instrument_17.insert(StrikePriceBoundaryPrecision_17.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_17(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_17);
    Instrument_17.insert(StrikePriceDeterminationMethod_17.getString());
    FIX::StrikeValue StrikeValue_17;
    StrikeValue_17.setString("14908338");
    noRelatedSym_0_0.set(StrikeValue_17);
    Instrument_17.insert(StrikeValue_17.getString());
    FIX::Symbol Symbol_17("STRING_353105352");
    noRelatedSym_0_0.set(Symbol_17);
    Instrument_17.insert(Symbol_17.getString());
    FIX::SymbolSfx SymbolSfx_17("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_17);
    Instrument_17.insert(SymbolSfx_17.getString());
    FIX::TimeUnit TimeUnit_17("STRING_Min");
    noRelatedSym_0_0.set(TimeUnit_17);
    Instrument_17.insert(TimeUnit_17.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_17(2);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_17);
    Instrument_17.insert(UnderlyingPriceDeterminationMethod_17.getString());
    FIX::UnitOfMeasure UnitOfMeasure_17("STRING_tn");
    noRelatedSym_0_0.set(UnitOfMeasure_17);
    Instrument_17.insert(UnitOfMeasure_17.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_17;
    UnitOfMeasureQty_17.setString("7490495");
    noRelatedSym_0_0.set(UnitOfMeasureQty_17);
    Instrument_17.insert(UnitOfMeasureQty_17.getString());
    FIX::ValuationMethod ValuationMethod_17("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_17);
    Instrument_17.insert(ValuationMethod_17.getString());
    all_values.push_back(Instrument_17);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_38;
      FIX::ComplexEventCondition ComplexEventCondition_38(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventCondition_38.getString());
      FIX::ComplexEventPrice ComplexEventPrice_38;
      ComplexEventPrice_38.setString("19185567");
      noComplexEvents_0_1_0.set(ComplexEventPrice_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPrice_38.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_38(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceBoundaryMethod_38.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_38;
      ComplexEventPriceBoundaryPrecision_38.setString("68.090000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceBoundaryPrecision_38.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_38(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceTimeType_38.getString());
      FIX::ComplexEventType ComplexEventType_38(5);
      noComplexEvents_0_1_0.set(ComplexEventType_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventType_38.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_38;
      ComplexOptPayoutAmount_38.setString("18036960");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexOptPayoutAmount_38.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_38);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_82;
        FIX::ComplexEventEndDate ComplexEventEndDate_82(FIX::UTCTIMESTAMP(18, 36, 0, 24, 82012));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_82);
        ComplexEventDates_NoComplexEventDates_82.insert(ComplexEventEndDate_82.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_82(FIX::UTCTIMESTAMP(16, 19, 18, 8, 52017));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_82);
        ComplexEventDates_NoComplexEventDates_82.insert(ComplexEventStartDate_82.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_82);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_167;
          FIX::ComplexEventEndTime ComplexEventEndTime_167(FIX::UTCTIMEONLY(6, 4, 42));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_167);
          ComplexEventTimes_NoComplexEventTimes_167.insert(ComplexEventEndTime_167.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_167(FIX::UTCTIMEONLY(9, 49, 4));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_167);
          ComplexEventTimes_NoComplexEventTimes_167.insert(ComplexEventStartTime_167.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_167);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_168;
          FIX::ComplexEventEndTime ComplexEventEndTime_168(FIX::UTCTIMEONLY(1, 54, 50));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_168);
          ComplexEventTimes_NoComplexEventTimes_168.insert(ComplexEventEndTime_168.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_168(FIX::UTCTIMEONLY(2, 0, 38));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_168);
          ComplexEventTimes_NoComplexEventTimes_168.insert(ComplexEventStartTime_168.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_168);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_83;
        FIX::ComplexEventEndDate ComplexEventEndDate_83(FIX::UTCTIMESTAMP(19, 6, 50, 3, 22002));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_83);
        ComplexEventDates_NoComplexEventDates_83.insert(ComplexEventEndDate_83.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_83(FIX::UTCTIMESTAMP(22, 49, 0, 14, 62016));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_83);
        ComplexEventDates_NoComplexEventDates_83.insert(ComplexEventStartDate_83.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_83);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_169;
          FIX::ComplexEventEndTime ComplexEventEndTime_169(FIX::UTCTIMEONLY(8, 9, 24));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_169);
          ComplexEventTimes_NoComplexEventTimes_169.insert(ComplexEventEndTime_169.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_169(FIX::UTCTIMEONLY(23, 5, 13));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_169);
          ComplexEventTimes_NoComplexEventTimes_169.insert(ComplexEventStartTime_169.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_169);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_170;
          FIX::ComplexEventEndTime ComplexEventEndTime_170(FIX::UTCTIMEONLY(18, 7, 54));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_170);
          ComplexEventTimes_NoComplexEventTimes_170.insert(ComplexEventEndTime_170.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_170(FIX::UTCTIMEONLY(1, 47, 43));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_170);
          ComplexEventTimes_NoComplexEventTimes_170.insert(ComplexEventStartTime_170.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_170);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_171;
          FIX::ComplexEventEndTime ComplexEventEndTime_171(FIX::UTCTIMEONLY(6, 50, 26));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_171);
          ComplexEventTimes_NoComplexEventTimes_171.insert(ComplexEventEndTime_171.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_171(FIX::UTCTIMEONLY(7, 56, 51));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_171);
          ComplexEventTimes_NoComplexEventTimes_171.insert(ComplexEventStartTime_171.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_171);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_36;
      FIX::EventDate EventDate_36("LOCALMKTDATE_2043100486");
      noEvents_0_1_0.set(EventDate_36);
      EvntGrp_NoEvents_36.insert(EventDate_36.getString());
      FIX::EventPx EventPx_36;
      EventPx_36.setString("5552047");
      noEvents_0_1_0.set(EventPx_36);
      EvntGrp_NoEvents_36.insert(EventPx_36.getString());
      FIX::EventText EventText_36("STRING_1880676287");
      noEvents_0_1_0.set(EventText_36);
      EvntGrp_NoEvents_36.insert(EventText_36.getString());
      FIX::EventTime EventTime_36(FIX::UTCTIMESTAMP(5, 52, 37, 13, 72001));
      noEvents_0_1_0.set(EventTime_36);
      EvntGrp_NoEvents_36.insert(EventTime_36.getString());
      FIX::EventType EventType_36(3);
      noEvents_0_1_0.set(EventType_36);
      EvntGrp_NoEvents_36.insert(EventType_36.getString());
      all_values.push_back(EvntGrp_NoEvents_36);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_37;
      FIX::EventDate EventDate_37("LOCALMKTDATE_308937789");
      noEvents_0_1_1.set(EventDate_37);
      EvntGrp_NoEvents_37.insert(EventDate_37.getString());
      FIX::EventPx EventPx_37;
      EventPx_37.setString("14172456");
      noEvents_0_1_1.set(EventPx_37);
      EvntGrp_NoEvents_37.insert(EventPx_37.getString());
      FIX::EventText EventText_37("STRING_203455815");
      noEvents_0_1_1.set(EventText_37);
      EvntGrp_NoEvents_37.insert(EventText_37.getString());
      FIX::EventTime EventTime_37(FIX::UTCTIMESTAMP(5, 23, 59, 22, 52016));
      noEvents_0_1_1.set(EventTime_37);
      EvntGrp_NoEvents_37.insert(EventTime_37.getString());
      FIX::EventType EventType_37(3);
      noEvents_0_1_1.set(EventType_37);
      EvntGrp_NoEvents_37.insert(EventType_37.getString());
      all_values.push_back(EvntGrp_NoEvents_37);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_38;
      FIX::EventDate EventDate_38("LOCALMKTDATE_1455737128");
      noEvents_0_1_2.set(EventDate_38);
      EvntGrp_NoEvents_38.insert(EventDate_38.getString());
      FIX::EventPx EventPx_38;
      EventPx_38.setString("8402174");
      noEvents_0_1_2.set(EventPx_38);
      EvntGrp_NoEvents_38.insert(EventPx_38.getString());
      FIX::EventText EventText_38("STRING_2117602872");
      noEvents_0_1_2.set(EventText_38);
      EvntGrp_NoEvents_38.insert(EventText_38.getString());
      FIX::EventTime EventTime_38(FIX::UTCTIMESTAMP(5, 47, 42, 0, 62014));
      noEvents_0_1_2.set(EventTime_38);
      EvntGrp_NoEvents_38.insert(EventTime_38.getString());
      FIX::EventType EventType_38(17);
      noEvents_0_1_2.set(EventType_38);
      EvntGrp_NoEvents_38.insert(EventType_38.getString());
      all_values.push_back(EvntGrp_NoEvents_38);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_30;
      FIX::InstrumentPartyID InstrumentPartyID_30("STRING_1391575988");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_30);
      InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyID_30.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_30('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_30);
      InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyIDSource_30.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_30(1631284397);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_30);
      InstrumentParties_NoInstrumentParties_30.insert(InstrumentPartyRole_30.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_30);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57;
        FIX::InstrumentPartySubID InstrumentPartySubID_57("STRING_1747410275");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_57);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57.insert(InstrumentPartySubID_57.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_57(796369683);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_57);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57.insert(InstrumentPartySubIDType_57.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_31;
      FIX::InstrumentPartyID InstrumentPartyID_31("STRING_835652979");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_31);
      InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyID_31.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_31('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_31);
      InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyIDSource_31.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_31(1105307472);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_31);
      InstrumentParties_NoInstrumentParties_31.insert(InstrumentPartyRole_31.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_31);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58;
        FIX::InstrumentPartySubID InstrumentPartySubID_58("STRING_5067525");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_58);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58.insert(InstrumentPartySubID_58.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_58(305788757);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_58);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58.insert(InstrumentPartySubIDType_58.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59;
        FIX::InstrumentPartySubID InstrumentPartySubID_59("STRING_1174493418");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_59);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59.insert(InstrumentPartySubID_59.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_59(1433218628);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_59);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59.insert(InstrumentPartySubIDType_59.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_32;
      FIX::InstrumentPartyID InstrumentPartyID_32("STRING_1454818636");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_32);
      InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyID_32.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_32('3');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_32);
      InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyIDSource_32.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_32(1574504580);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_32);
      InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyRole_32.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_32);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60;
        FIX::InstrumentPartySubID InstrumentPartySubID_60("STRING_672749959");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_60);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60.insert(InstrumentPartySubID_60.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_60(882758060);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_60);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60.insert(InstrumentPartySubIDType_60.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61;
        FIX::InstrumentPartySubID InstrumentPartySubID_61("STRING_1663381095");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_61);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61.insert(InstrumentPartySubID_61.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_61(642869183);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_61);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61.insert(InstrumentPartySubIDType_61.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_37;
      FIX::SecurityAltID SecurityAltID_37("STRING_1658309557");
      noSecurityAltID_0_1_0.set(SecurityAltID_37);
      SecAltIDGrp_NoSecurityAltID_37.insert(SecurityAltID_37.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_37("STRING_1380153310");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_37);
      SecAltIDGrp_NoSecurityAltID_37.insert(SecurityAltIDSource_37.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_37);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_34;
    FIX::SecurityXML SecurityXML_35("XMLDATA_1504138181");
    noRelatedSym_0_0.set(SecurityXML_35);
    FIX::SecurityXMLLen SecurityXMLLen_17(862360121);
    noRelatedSym_0_0.set(SecurityXMLLen_17);
    FIX::SecurityXMLSchema SecurityXMLSchema_17("STRING_1192080115");
    noRelatedSym_0_0.set(SecurityXMLSchema_17);
    SecurityXML_34.insert(SecurityXMLSchema_17.getString());
    all_values.push_back(SecurityXML_34);

    // InstrumentExtension
    multiset<string> InstrumentExtension_4;
    FIX::DeliveryForm DeliveryForm_4(2);
    noRelatedSym_0_0.set(DeliveryForm_4);
    InstrumentExtension_4.insert(DeliveryForm_4.getString());
    FIX::PctAtRisk PctAtRisk_4;
    PctAtRisk_4.setString("54.490000");
    noRelatedSym_0_0.set(PctAtRisk_4);
    InstrumentExtension_4.insert(PctAtRisk_4.getString());
    all_values.push_back(InstrumentExtension_4);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_8;
      FIX::InstrAttribType InstrAttribType_8(24);
      noInstrAttrib_0_1_0.set(InstrAttribType_8);
      AttrbGrp_NoInstrAttrib_8.insert(InstrAttribType_8.getString());
      FIX::InstrAttribValue InstrAttribValue_8("STRING_1946953991");
      noInstrAttrib_0_1_0.set(InstrAttribValue_8);
      AttrbGrp_NoInstrAttrib_8.insert(InstrAttribValue_8.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_8);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_9;
      FIX::InstrAttribType InstrAttribType_9(99);
      noInstrAttrib_0_1_1.set(InstrAttribType_9);
      AttrbGrp_NoInstrAttrib_9.insert(InstrAttribType_9.getString());
      FIX::InstrAttribValue InstrAttribValue_9("STRING_125724571");
      noInstrAttrib_0_1_1.set(InstrAttribValue_9);
      AttrbGrp_NoInstrAttrib_9.insert(InstrAttribValue_9.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_9);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_10;
      FIX::InstrAttribType InstrAttribType_10(9);
      noInstrAttrib_0_1_2.set(InstrAttribType_10);
      AttrbGrp_NoInstrAttrib_10.insert(InstrAttribType_10.getString());
      FIX::InstrAttribValue InstrAttribValue_10("STRING_1017369992");
      noInstrAttrib_0_1_2.set(InstrAttribValue_10);
      AttrbGrp_NoInstrAttrib_10.insert(InstrAttribValue_10.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_10);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_0;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_0;
    SecondaryHighLimitPrice_0.setString("9613775");
    noRelatedSym_0_0.set(SecondaryHighLimitPrice_0);
    SecondaryPriceLimits_0.insert(SecondaryHighLimitPrice_0.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_0;
    SecondaryLowLimitPrice_0.setString("13484923");
    noRelatedSym_0_0.set(SecondaryLowLimitPrice_0);
    SecondaryPriceLimits_0.insert(SecondaryLowLimitPrice_0.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_0(2122677464);
    noRelatedSym_0_0.set(SecondaryPriceLimitType_0);
    SecondaryPriceLimits_0.insert(SecondaryPriceLimitType_0.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_0;
    SecondaryTradingReferencePrice_0.setString("10667925");
    noRelatedSym_0_0.set(SecondaryTradingReferencePrice_0);
    SecondaryPriceLimits_0.insert(SecondaryTradingReferencePrice_0.getString());
    all_values.push_back(SecondaryPriceLimits_0);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_1;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_1;
    FIX::CorporateAction CorporateAction_1("MULTIPLECHARVALUE_I");
    noRelatedSym_0_1.set(CorporateAction_1);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(CorporateAction_1.getString());
    FIX::Currency Currency_15("JPY");
    noRelatedSym_0_1.set(Currency_15);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(Currency_15.getString());
    FIX::EncodedText EncodedText_29("DATA_639294832");
    noRelatedSym_0_1.set(EncodedText_29);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(EncodedText_29.getString());
    FIX::EncodedTextLen EncodedTextLen_29(1735801209);
    noRelatedSym_0_1.set(EncodedTextLen_29);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(EncodedTextLen_29.getString());
    FIX::RelSymTransactTime RelSymTransactTime_1(FIX::UTCTIMESTAMP(21, 56, 14, 21, 12013));
    noRelatedSym_0_1.set(RelSymTransactTime_1);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(RelSymTransactTime_1.getString());
    FIX::Text Text_29("STRING_523181044");
    noRelatedSym_0_1.set(Text_29);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(Text_29.getString());
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_26;
      FIX::EncodedLegIssuer EncodedLegIssuer_26("DATA_996723099");
      noLegs_1_1_0.set(EncodedLegIssuer_26);
      InstrumentLeg_26.insert(EncodedLegIssuer_26.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_26(2027319225);
      noLegs_1_1_0.set(EncodedLegIssuerLen_26);
      InstrumentLeg_26.insert(EncodedLegIssuerLen_26.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_26("DATA_300564734");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_26);
      InstrumentLeg_26.insert(EncodedLegSecurityDesc_26.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_26(41319567);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_26);
      InstrumentLeg_26.insert(EncodedLegSecurityDescLen_26.getString());
      FIX::LegCFICode LegCFICode_26("STRING_1062137910");
      noLegs_1_1_0.set(LegCFICode_26);
      InstrumentLeg_26.insert(LegCFICode_26.getString());
      FIX::LegContractMultiplier LegContractMultiplier_26;
      LegContractMultiplier_26.setString("9221801");
      noLegs_1_1_0.set(LegContractMultiplier_26);
      InstrumentLeg_26.insert(LegContractMultiplier_26.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_26(778519127);
      noLegs_1_1_0.set(LegContractMultiplierUnit_26);
      InstrumentLeg_26.insert(LegContractMultiplierUnit_26.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_26("MONTHYEAR_1488532584");
      noLegs_1_1_0.set(LegContractSettlMonth_26);
      InstrumentLeg_26.insert(LegContractSettlMonth_26.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_26("COUNTRY_721650527");
      noLegs_1_1_0.set(LegCountryOfIssue_26);
      InstrumentLeg_26.insert(LegCountryOfIssue_26.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_26("LOCALMKTDATE_999519436");
      noLegs_1_1_0.set(LegCouponPaymentDate_26);
      InstrumentLeg_26.insert(LegCouponPaymentDate_26.getString());
      FIX::LegCouponRate LegCouponRate_26;
      LegCouponRate_26.setString("71.550000");
      noLegs_1_1_0.set(LegCouponRate_26);
      InstrumentLeg_26.insert(LegCouponRate_26.getString());
      FIX::LegCreditRating LegCreditRating_26("STRING_121047497");
      noLegs_1_1_0.set(LegCreditRating_26);
      InstrumentLeg_26.insert(LegCreditRating_26.getString());
      FIX::LegCurrency LegCurrency_26("CHF");
      noLegs_1_1_0.set(LegCurrency_26);
      InstrumentLeg_26.insert(LegCurrency_26.getString());
      FIX::LegDatedDate LegDatedDate_26("LOCALMKTDATE_1469539824");
      noLegs_1_1_0.set(LegDatedDate_26);
      InstrumentLeg_26.insert(LegDatedDate_26.getString());
      FIX::LegExerciseStyle LegExerciseStyle_26(1992083244);
      noLegs_1_1_0.set(LegExerciseStyle_26);
      InstrumentLeg_26.insert(LegExerciseStyle_26.getString());
      FIX::LegFactor LegFactor_26;
      LegFactor_26.setString("14949436");
      noLegs_1_1_0.set(LegFactor_26);
      InstrumentLeg_26.insert(LegFactor_26.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_26(675616029);
      noLegs_1_1_0.set(LegFlowScheduleType_26);
      InstrumentLeg_26.insert(LegFlowScheduleType_26.getString());
      FIX::LegInstrRegistry LegInstrRegistry_26("STRING_125582169");
      noLegs_1_1_0.set(LegInstrRegistry_26);
      InstrumentLeg_26.insert(LegInstrRegistry_26.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_26("LOCALMKTDATE_1588745922");
      noLegs_1_1_0.set(LegInterestAccrualDate_26);
      InstrumentLeg_26.insert(LegInterestAccrualDate_26.getString());
      FIX::LegIssueDate LegIssueDate_26("LOCALMKTDATE_1314910861");
      noLegs_1_1_0.set(LegIssueDate_26);
      InstrumentLeg_26.insert(LegIssueDate_26.getString());
      FIX::LegIssuer LegIssuer_26("STRING_1861383378");
      noLegs_1_1_0.set(LegIssuer_26);
      InstrumentLeg_26.insert(LegIssuer_26.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_26("STRING_2037180217");
      noLegs_1_1_0.set(LegLocaleOfIssue_26);
      InstrumentLeg_26.insert(LegLocaleOfIssue_26.getString());
      FIX::LegMaturityDate LegMaturityDate_26("LOCALMKTDATE_1381226626");
      noLegs_1_1_0.set(LegMaturityDate_26);
      InstrumentLeg_26.insert(LegMaturityDate_26.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_26("MONTHYEAR_125380987");
      noLegs_1_1_0.set(LegMaturityMonthYear_26);
      InstrumentLeg_26.insert(LegMaturityMonthYear_26.getString());
      FIX::LegMaturityTime LegMaturityTime_26("TZTIMEONLY_1010880823");
      noLegs_1_1_0.set(LegMaturityTime_26);
      InstrumentLeg_26.insert(LegMaturityTime_26.getString());
      FIX::LegOptAttribute LegOptAttribute_26('1');
      noLegs_1_1_0.set(LegOptAttribute_26);
      InstrumentLeg_26.insert(LegOptAttribute_26.getString());
      FIX::LegOptionRatio LegOptionRatio_26;
      LegOptionRatio_26.setString("527596");
      noLegs_1_1_0.set(LegOptionRatio_26);
      InstrumentLeg_26.insert(LegOptionRatio_26.getString());
      FIX::LegPool LegPool_26("STRING_627450612");
      noLegs_1_1_0.set(LegPool_26);
      InstrumentLeg_26.insert(LegPool_26.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_26("STRING_705997848");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_26);
      InstrumentLeg_26.insert(LegPriceUnitOfMeasure_26.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_26;
      LegPriceUnitOfMeasureQty_26.setString("16384479");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_26);
      InstrumentLeg_26.insert(LegPriceUnitOfMeasureQty_26.getString());
      FIX::LegProduct LegProduct_26(1624173712);
      noLegs_1_1_0.set(LegProduct_26);
      InstrumentLeg_26.insert(LegProduct_26.getString());
      FIX::LegPutOrCall LegPutOrCall_26(585833425);
      noLegs_1_1_0.set(LegPutOrCall_26);
      InstrumentLeg_26.insert(LegPutOrCall_26.getString());
      FIX::LegRatioQty LegRatioQty_26;
      LegRatioQty_26.setString("19390126");
      noLegs_1_1_0.set(LegRatioQty_26);
      InstrumentLeg_26.insert(LegRatioQty_26.getString());
      FIX::LegRedemptionDate LegRedemptionDate_26("LOCALMKTDATE_1665493279");
      noLegs_1_1_0.set(LegRedemptionDate_26);
      InstrumentLeg_26.insert(LegRedemptionDate_26.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_26("STRING_1647971335");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_26);
      InstrumentLeg_26.insert(LegRepoCollateralSecurityType_26.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_26;
      LegRepurchaseRate_26.setString("92.220000");
      noLegs_1_1_0.set(LegRepurchaseRate_26);
      InstrumentLeg_26.insert(LegRepurchaseRate_26.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_26(296528758);
      noLegs_1_1_0.set(LegRepurchaseTerm_26);
      InstrumentLeg_26.insert(LegRepurchaseTerm_26.getString());
      FIX::LegSecurityDesc LegSecurityDesc_26("STRING_989020271");
      noLegs_1_1_0.set(LegSecurityDesc_26);
      InstrumentLeg_26.insert(LegSecurityDesc_26.getString());
      FIX::LegSecurityExchange LegSecurityExchange_26("EXCHANGE_1435359749");
      noLegs_1_1_0.set(LegSecurityExchange_26);
      InstrumentLeg_26.insert(LegSecurityExchange_26.getString());
      FIX::LegSecurityID LegSecurityID_26("STRING_1296048194");
      noLegs_1_1_0.set(LegSecurityID_26);
      InstrumentLeg_26.insert(LegSecurityID_26.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_26("STRING_455793778");
      noLegs_1_1_0.set(LegSecurityIDSource_26);
      InstrumentLeg_26.insert(LegSecurityIDSource_26.getString());
      FIX::LegSecuritySubType LegSecuritySubType_26("STRING_1556407246");
      noLegs_1_1_0.set(LegSecuritySubType_26);
      InstrumentLeg_26.insert(LegSecuritySubType_26.getString());
      FIX::LegSecurityType LegSecurityType_26("STRING_1165453974");
      noLegs_1_1_0.set(LegSecurityType_26);
      InstrumentLeg_26.insert(LegSecurityType_26.getString());
      FIX::LegSide LegSide_26('8');
      noLegs_1_1_0.set(LegSide_26);
      InstrumentLeg_26.insert(LegSide_26.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_26("STRING_878463423");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_26);
      InstrumentLeg_26.insert(LegStateOrProvinceOfIssue_26.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_26("GBP");
      noLegs_1_1_0.set(LegStrikeCurrency_26);
      InstrumentLeg_26.insert(LegStrikeCurrency_26.getString());
      FIX::LegStrikePrice LegStrikePrice_26;
      LegStrikePrice_26.setString("15540794");
      noLegs_1_1_0.set(LegStrikePrice_26);
      InstrumentLeg_26.insert(LegStrikePrice_26.getString());
      FIX::LegSymbol LegSymbol_26("STRING_1135635739");
      noLegs_1_1_0.set(LegSymbol_26);
      InstrumentLeg_26.insert(LegSymbol_26.getString());
      FIX::LegSymbolSfx LegSymbolSfx_26("STRING_1820150714");
      noLegs_1_1_0.set(LegSymbolSfx_26);
      InstrumentLeg_26.insert(LegSymbolSfx_26.getString());
      FIX::LegTimeUnit LegTimeUnit_26("STRING_721506665");
      noLegs_1_1_0.set(LegTimeUnit_26);
      InstrumentLeg_26.insert(LegTimeUnit_26.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_26("STRING_849535469");
      noLegs_1_1_0.set(LegUnitOfMeasure_26);
      InstrumentLeg_26.insert(LegUnitOfMeasure_26.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_26;
      LegUnitOfMeasureQty_26.setString("17098472");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_26);
      InstrumentLeg_26.insert(LegUnitOfMeasureQty_26.getString());
      all_values.push_back(InstrumentLeg_26);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_46;
        FIX::LegSecurityAltID LegSecurityAltID_46("STRING_974916456");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_46);
        LegSecAltIDGrp_NoLegSecurityAltID_46.insert(LegSecurityAltID_46.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_46("STRING_573244459");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_46);
        LegSecAltIDGrp_NoLegSecurityAltID_46.insert(LegSecurityAltIDSource_46.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_46);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_47;
        FIX::LegSecurityAltID LegSecurityAltID_47("STRING_138066448");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_47);
        LegSecAltIDGrp_NoLegSecurityAltID_47.insert(LegSecurityAltID_47.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_47("STRING_1027676147");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_47);
        LegSecAltIDGrp_NoLegSecurityAltID_47.insert(LegSecurityAltIDSource_47.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_47);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_27;
      FIX::EncodedLegIssuer EncodedLegIssuer_27("DATA_1200695072");
      noLegs_1_1_1.set(EncodedLegIssuer_27);
      InstrumentLeg_27.insert(EncodedLegIssuer_27.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_27(844064296);
      noLegs_1_1_1.set(EncodedLegIssuerLen_27);
      InstrumentLeg_27.insert(EncodedLegIssuerLen_27.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_27("DATA_518640451");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_27);
      InstrumentLeg_27.insert(EncodedLegSecurityDesc_27.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_27(677385136);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_27);
      InstrumentLeg_27.insert(EncodedLegSecurityDescLen_27.getString());
      FIX::LegCFICode LegCFICode_27("STRING_1429897721");
      noLegs_1_1_1.set(LegCFICode_27);
      InstrumentLeg_27.insert(LegCFICode_27.getString());
      FIX::LegContractMultiplier LegContractMultiplier_27;
      LegContractMultiplier_27.setString("3101694");
      noLegs_1_1_1.set(LegContractMultiplier_27);
      InstrumentLeg_27.insert(LegContractMultiplier_27.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_27(195394767);
      noLegs_1_1_1.set(LegContractMultiplierUnit_27);
      InstrumentLeg_27.insert(LegContractMultiplierUnit_27.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_27("MONTHYEAR_930385408");
      noLegs_1_1_1.set(LegContractSettlMonth_27);
      InstrumentLeg_27.insert(LegContractSettlMonth_27.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_27("COUNTRY_1023878712");
      noLegs_1_1_1.set(LegCountryOfIssue_27);
      InstrumentLeg_27.insert(LegCountryOfIssue_27.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_27("LOCALMKTDATE_491923525");
      noLegs_1_1_1.set(LegCouponPaymentDate_27);
      InstrumentLeg_27.insert(LegCouponPaymentDate_27.getString());
      FIX::LegCouponRate LegCouponRate_27;
      LegCouponRate_27.setString("56.800000");
      noLegs_1_1_1.set(LegCouponRate_27);
      InstrumentLeg_27.insert(LegCouponRate_27.getString());
      FIX::LegCreditRating LegCreditRating_27("STRING_311754814");
      noLegs_1_1_1.set(LegCreditRating_27);
      InstrumentLeg_27.insert(LegCreditRating_27.getString());
      FIX::LegCurrency LegCurrency_27("USD");
      noLegs_1_1_1.set(LegCurrency_27);
      InstrumentLeg_27.insert(LegCurrency_27.getString());
      FIX::LegDatedDate LegDatedDate_27("LOCALMKTDATE_1868162060");
      noLegs_1_1_1.set(LegDatedDate_27);
      InstrumentLeg_27.insert(LegDatedDate_27.getString());
      FIX::LegExerciseStyle LegExerciseStyle_27(805942045);
      noLegs_1_1_1.set(LegExerciseStyle_27);
      InstrumentLeg_27.insert(LegExerciseStyle_27.getString());
      FIX::LegFactor LegFactor_27;
      LegFactor_27.setString("11116606");
      noLegs_1_1_1.set(LegFactor_27);
      InstrumentLeg_27.insert(LegFactor_27.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_27(599141835);
      noLegs_1_1_1.set(LegFlowScheduleType_27);
      InstrumentLeg_27.insert(LegFlowScheduleType_27.getString());
      FIX::LegInstrRegistry LegInstrRegistry_27("STRING_1815995615");
      noLegs_1_1_1.set(LegInstrRegistry_27);
      InstrumentLeg_27.insert(LegInstrRegistry_27.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_27("LOCALMKTDATE_1343065438");
      noLegs_1_1_1.set(LegInterestAccrualDate_27);
      InstrumentLeg_27.insert(LegInterestAccrualDate_27.getString());
      FIX::LegIssueDate LegIssueDate_27("LOCALMKTDATE_5737639");
      noLegs_1_1_1.set(LegIssueDate_27);
      InstrumentLeg_27.insert(LegIssueDate_27.getString());
      FIX::LegIssuer LegIssuer_27("STRING_804147706");
      noLegs_1_1_1.set(LegIssuer_27);
      InstrumentLeg_27.insert(LegIssuer_27.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_27("STRING_1015732504");
      noLegs_1_1_1.set(LegLocaleOfIssue_27);
      InstrumentLeg_27.insert(LegLocaleOfIssue_27.getString());
      FIX::LegMaturityDate LegMaturityDate_27("LOCALMKTDATE_727244305");
      noLegs_1_1_1.set(LegMaturityDate_27);
      InstrumentLeg_27.insert(LegMaturityDate_27.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_27("MONTHYEAR_1653683175");
      noLegs_1_1_1.set(LegMaturityMonthYear_27);
      InstrumentLeg_27.insert(LegMaturityMonthYear_27.getString());
      FIX::LegMaturityTime LegMaturityTime_27("TZTIMEONLY_578096140");
      noLegs_1_1_1.set(LegMaturityTime_27);
      InstrumentLeg_27.insert(LegMaturityTime_27.getString());
      FIX::LegOptAttribute LegOptAttribute_27('6');
      noLegs_1_1_1.set(LegOptAttribute_27);
      InstrumentLeg_27.insert(LegOptAttribute_27.getString());
      FIX::LegOptionRatio LegOptionRatio_27;
      LegOptionRatio_27.setString("4811159");
      noLegs_1_1_1.set(LegOptionRatio_27);
      InstrumentLeg_27.insert(LegOptionRatio_27.getString());
      FIX::LegPool LegPool_27("STRING_1151340600");
      noLegs_1_1_1.set(LegPool_27);
      InstrumentLeg_27.insert(LegPool_27.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_27("STRING_820560397");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_27);
      InstrumentLeg_27.insert(LegPriceUnitOfMeasure_27.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_27;
      LegPriceUnitOfMeasureQty_27.setString("15087921");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_27);
      InstrumentLeg_27.insert(LegPriceUnitOfMeasureQty_27.getString());
      FIX::LegProduct LegProduct_27(204552024);
      noLegs_1_1_1.set(LegProduct_27);
      InstrumentLeg_27.insert(LegProduct_27.getString());
      FIX::LegPutOrCall LegPutOrCall_27(1664624693);
      noLegs_1_1_1.set(LegPutOrCall_27);
      InstrumentLeg_27.insert(LegPutOrCall_27.getString());
      FIX::LegRatioQty LegRatioQty_27;
      LegRatioQty_27.setString("20274325");
      noLegs_1_1_1.set(LegRatioQty_27);
      InstrumentLeg_27.insert(LegRatioQty_27.getString());
      FIX::LegRedemptionDate LegRedemptionDate_27("LOCALMKTDATE_881937160");
      noLegs_1_1_1.set(LegRedemptionDate_27);
      InstrumentLeg_27.insert(LegRedemptionDate_27.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_27("STRING_947038766");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_27);
      InstrumentLeg_27.insert(LegRepoCollateralSecurityType_27.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_27;
      LegRepurchaseRate_27.setString("84.250000");
      noLegs_1_1_1.set(LegRepurchaseRate_27);
      InstrumentLeg_27.insert(LegRepurchaseRate_27.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_27(1077331927);
      noLegs_1_1_1.set(LegRepurchaseTerm_27);
      InstrumentLeg_27.insert(LegRepurchaseTerm_27.getString());
      FIX::LegSecurityDesc LegSecurityDesc_27("STRING_1877424174");
      noLegs_1_1_1.set(LegSecurityDesc_27);
      InstrumentLeg_27.insert(LegSecurityDesc_27.getString());
      FIX::LegSecurityExchange LegSecurityExchange_27("EXCHANGE_1213997137");
      noLegs_1_1_1.set(LegSecurityExchange_27);
      InstrumentLeg_27.insert(LegSecurityExchange_27.getString());
      FIX::LegSecurityID LegSecurityID_27("STRING_1569255452");
      noLegs_1_1_1.set(LegSecurityID_27);
      InstrumentLeg_27.insert(LegSecurityID_27.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_27("STRING_1649346206");
      noLegs_1_1_1.set(LegSecurityIDSource_27);
      InstrumentLeg_27.insert(LegSecurityIDSource_27.getString());
      FIX::LegSecuritySubType LegSecuritySubType_27("STRING_1525751951");
      noLegs_1_1_1.set(LegSecuritySubType_27);
      InstrumentLeg_27.insert(LegSecuritySubType_27.getString());
      FIX::LegSecurityType LegSecurityType_27("STRING_1209743523");
      noLegs_1_1_1.set(LegSecurityType_27);
      InstrumentLeg_27.insert(LegSecurityType_27.getString());
      FIX::LegSide LegSide_27('1');
      noLegs_1_1_1.set(LegSide_27);
      InstrumentLeg_27.insert(LegSide_27.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_27("STRING_1246430364");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_27);
      InstrumentLeg_27.insert(LegStateOrProvinceOfIssue_27.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_27("CHF");
      noLegs_1_1_1.set(LegStrikeCurrency_27);
      InstrumentLeg_27.insert(LegStrikeCurrency_27.getString());
      FIX::LegStrikePrice LegStrikePrice_27;
      LegStrikePrice_27.setString("18455721");
      noLegs_1_1_1.set(LegStrikePrice_27);
      InstrumentLeg_27.insert(LegStrikePrice_27.getString());
      FIX::LegSymbol LegSymbol_27("STRING_1684197535");
      noLegs_1_1_1.set(LegSymbol_27);
      InstrumentLeg_27.insert(LegSymbol_27.getString());
      FIX::LegSymbolSfx LegSymbolSfx_27("STRING_36820805");
      noLegs_1_1_1.set(LegSymbolSfx_27);
      InstrumentLeg_27.insert(LegSymbolSfx_27.getString());
      FIX::LegTimeUnit LegTimeUnit_27("STRING_1851309839");
      noLegs_1_1_1.set(LegTimeUnit_27);
      InstrumentLeg_27.insert(LegTimeUnit_27.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_27("STRING_340861593");
      noLegs_1_1_1.set(LegUnitOfMeasure_27);
      InstrumentLeg_27.insert(LegUnitOfMeasure_27.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_27;
      LegUnitOfMeasureQty_27.setString("10525533");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_27);
      InstrumentLeg_27.insert(LegUnitOfMeasureQty_27.getString());
      all_values.push_back(InstrumentLeg_27);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_48;
        FIX::LegSecurityAltID LegSecurityAltID_48("STRING_1994544768");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_48);
        LegSecAltIDGrp_NoLegSecurityAltID_48.insert(LegSecurityAltID_48.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_48("STRING_1630649450");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_48);
        LegSecAltIDGrp_NoLegSecurityAltID_48.insert(LegSecurityAltIDSource_48.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_48);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_49;
        FIX::LegSecurityAltID LegSecurityAltID_49("STRING_1113564445");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltID_49);
        LegSecAltIDGrp_NoLegSecurityAltID_49.insert(LegSecurityAltID_49.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_49("STRING_328177104");
        noLegSecurityAltID_1_1_2_1.set(LegSecurityAltIDSource_49);
        LegSecAltIDGrp_NoLegSecurityAltID_49.insert(LegSecurityAltIDSource_49.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_49);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_1_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_28;
      FIX::EncodedLegIssuer EncodedLegIssuer_28("DATA_634506402");
      noLegs_1_1_2.set(EncodedLegIssuer_28);
      InstrumentLeg_28.insert(EncodedLegIssuer_28.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_28(1934124842);
      noLegs_1_1_2.set(EncodedLegIssuerLen_28);
      InstrumentLeg_28.insert(EncodedLegIssuerLen_28.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_28("DATA_1836969236");
      noLegs_1_1_2.set(EncodedLegSecurityDesc_28);
      InstrumentLeg_28.insert(EncodedLegSecurityDesc_28.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_28(839058426);
      noLegs_1_1_2.set(EncodedLegSecurityDescLen_28);
      InstrumentLeg_28.insert(EncodedLegSecurityDescLen_28.getString());
      FIX::LegCFICode LegCFICode_28("STRING_1451265887");
      noLegs_1_1_2.set(LegCFICode_28);
      InstrumentLeg_28.insert(LegCFICode_28.getString());
      FIX::LegContractMultiplier LegContractMultiplier_28;
      LegContractMultiplier_28.setString("17169181");
      noLegs_1_1_2.set(LegContractMultiplier_28);
      InstrumentLeg_28.insert(LegContractMultiplier_28.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_28(1720995586);
      noLegs_1_1_2.set(LegContractMultiplierUnit_28);
      InstrumentLeg_28.insert(LegContractMultiplierUnit_28.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_28("MONTHYEAR_250821005");
      noLegs_1_1_2.set(LegContractSettlMonth_28);
      InstrumentLeg_28.insert(LegContractSettlMonth_28.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_28("COUNTRY_1907036596");
      noLegs_1_1_2.set(LegCountryOfIssue_28);
      InstrumentLeg_28.insert(LegCountryOfIssue_28.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_28("LOCALMKTDATE_650843865");
      noLegs_1_1_2.set(LegCouponPaymentDate_28);
      InstrumentLeg_28.insert(LegCouponPaymentDate_28.getString());
      FIX::LegCouponRate LegCouponRate_28;
      LegCouponRate_28.setString("51.790000");
      noLegs_1_1_2.set(LegCouponRate_28);
      InstrumentLeg_28.insert(LegCouponRate_28.getString());
      FIX::LegCreditRating LegCreditRating_28("STRING_973550085");
      noLegs_1_1_2.set(LegCreditRating_28);
      InstrumentLeg_28.insert(LegCreditRating_28.getString());
      FIX::LegCurrency LegCurrency_28("USD");
      noLegs_1_1_2.set(LegCurrency_28);
      InstrumentLeg_28.insert(LegCurrency_28.getString());
      FIX::LegDatedDate LegDatedDate_28("LOCALMKTDATE_351818389");
      noLegs_1_1_2.set(LegDatedDate_28);
      InstrumentLeg_28.insert(LegDatedDate_28.getString());
      FIX::LegExerciseStyle LegExerciseStyle_28(1282359192);
      noLegs_1_1_2.set(LegExerciseStyle_28);
      InstrumentLeg_28.insert(LegExerciseStyle_28.getString());
      FIX::LegFactor LegFactor_28;
      LegFactor_28.setString("13596861");
      noLegs_1_1_2.set(LegFactor_28);
      InstrumentLeg_28.insert(LegFactor_28.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_28(1598248753);
      noLegs_1_1_2.set(LegFlowScheduleType_28);
      InstrumentLeg_28.insert(LegFlowScheduleType_28.getString());
      FIX::LegInstrRegistry LegInstrRegistry_28("STRING_1150561112");
      noLegs_1_1_2.set(LegInstrRegistry_28);
      InstrumentLeg_28.insert(LegInstrRegistry_28.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_28("LOCALMKTDATE_53441474");
      noLegs_1_1_2.set(LegInterestAccrualDate_28);
      InstrumentLeg_28.insert(LegInterestAccrualDate_28.getString());
      FIX::LegIssueDate LegIssueDate_28("LOCALMKTDATE_1296337304");
      noLegs_1_1_2.set(LegIssueDate_28);
      InstrumentLeg_28.insert(LegIssueDate_28.getString());
      FIX::LegIssuer LegIssuer_28("STRING_687274999");
      noLegs_1_1_2.set(LegIssuer_28);
      InstrumentLeg_28.insert(LegIssuer_28.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_28("STRING_90262279");
      noLegs_1_1_2.set(LegLocaleOfIssue_28);
      InstrumentLeg_28.insert(LegLocaleOfIssue_28.getString());
      FIX::LegMaturityDate LegMaturityDate_28("LOCALMKTDATE_1000163495");
      noLegs_1_1_2.set(LegMaturityDate_28);
      InstrumentLeg_28.insert(LegMaturityDate_28.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_28("MONTHYEAR_1028136592");
      noLegs_1_1_2.set(LegMaturityMonthYear_28);
      InstrumentLeg_28.insert(LegMaturityMonthYear_28.getString());
      FIX::LegMaturityTime LegMaturityTime_28("TZTIMEONLY_1142815588");
      noLegs_1_1_2.set(LegMaturityTime_28);
      InstrumentLeg_28.insert(LegMaturityTime_28.getString());
      FIX::LegOptAttribute LegOptAttribute_28('1');
      noLegs_1_1_2.set(LegOptAttribute_28);
      InstrumentLeg_28.insert(LegOptAttribute_28.getString());
      FIX::LegOptionRatio LegOptionRatio_28;
      LegOptionRatio_28.setString("8751977");
      noLegs_1_1_2.set(LegOptionRatio_28);
      InstrumentLeg_28.insert(LegOptionRatio_28.getString());
      FIX::LegPool LegPool_28("STRING_625981390");
      noLegs_1_1_2.set(LegPool_28);
      InstrumentLeg_28.insert(LegPool_28.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_28("STRING_397314788");
      noLegs_1_1_2.set(LegPriceUnitOfMeasure_28);
      InstrumentLeg_28.insert(LegPriceUnitOfMeasure_28.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_28;
      LegPriceUnitOfMeasureQty_28.setString("12033748");
      noLegs_1_1_2.set(LegPriceUnitOfMeasureQty_28);
      InstrumentLeg_28.insert(LegPriceUnitOfMeasureQty_28.getString());
      FIX::LegProduct LegProduct_28(1260487792);
      noLegs_1_1_2.set(LegProduct_28);
      InstrumentLeg_28.insert(LegProduct_28.getString());
      FIX::LegPutOrCall LegPutOrCall_28(183955982);
      noLegs_1_1_2.set(LegPutOrCall_28);
      InstrumentLeg_28.insert(LegPutOrCall_28.getString());
      FIX::LegRatioQty LegRatioQty_28;
      LegRatioQty_28.setString("8928604");
      noLegs_1_1_2.set(LegRatioQty_28);
      InstrumentLeg_28.insert(LegRatioQty_28.getString());
      FIX::LegRedemptionDate LegRedemptionDate_28("LOCALMKTDATE_2099546218");
      noLegs_1_1_2.set(LegRedemptionDate_28);
      InstrumentLeg_28.insert(LegRedemptionDate_28.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_28("STRING_1635221869");
      noLegs_1_1_2.set(LegRepoCollateralSecurityType_28);
      InstrumentLeg_28.insert(LegRepoCollateralSecurityType_28.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_28;
      LegRepurchaseRate_28.setString("49.280000");
      noLegs_1_1_2.set(LegRepurchaseRate_28);
      InstrumentLeg_28.insert(LegRepurchaseRate_28.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_28(1673058156);
      noLegs_1_1_2.set(LegRepurchaseTerm_28);
      InstrumentLeg_28.insert(LegRepurchaseTerm_28.getString());
      FIX::LegSecurityDesc LegSecurityDesc_28("STRING_1886042874");
      noLegs_1_1_2.set(LegSecurityDesc_28);
      InstrumentLeg_28.insert(LegSecurityDesc_28.getString());
      FIX::LegSecurityExchange LegSecurityExchange_28("EXCHANGE_221847876");
      noLegs_1_1_2.set(LegSecurityExchange_28);
      InstrumentLeg_28.insert(LegSecurityExchange_28.getString());
      FIX::LegSecurityID LegSecurityID_28("STRING_176418373");
      noLegs_1_1_2.set(LegSecurityID_28);
      InstrumentLeg_28.insert(LegSecurityID_28.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_28("STRING_1866804406");
      noLegs_1_1_2.set(LegSecurityIDSource_28);
      InstrumentLeg_28.insert(LegSecurityIDSource_28.getString());
      FIX::LegSecuritySubType LegSecuritySubType_28("STRING_1195397961");
      noLegs_1_1_2.set(LegSecuritySubType_28);
      InstrumentLeg_28.insert(LegSecuritySubType_28.getString());
      FIX::LegSecurityType LegSecurityType_28("STRING_249034042");
      noLegs_1_1_2.set(LegSecurityType_28);
      InstrumentLeg_28.insert(LegSecurityType_28.getString());
      FIX::LegSide LegSide_28('1');
      noLegs_1_1_2.set(LegSide_28);
      InstrumentLeg_28.insert(LegSide_28.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_28("STRING_1547216350");
      noLegs_1_1_2.set(LegStateOrProvinceOfIssue_28);
      InstrumentLeg_28.insert(LegStateOrProvinceOfIssue_28.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_28("EUR");
      noLegs_1_1_2.set(LegStrikeCurrency_28);
      InstrumentLeg_28.insert(LegStrikeCurrency_28.getString());
      FIX::LegStrikePrice LegStrikePrice_28;
      LegStrikePrice_28.setString("9979814");
      noLegs_1_1_2.set(LegStrikePrice_28);
      InstrumentLeg_28.insert(LegStrikePrice_28.getString());
      FIX::LegSymbol LegSymbol_28("STRING_534470698");
      noLegs_1_1_2.set(LegSymbol_28);
      InstrumentLeg_28.insert(LegSymbol_28.getString());
      FIX::LegSymbolSfx LegSymbolSfx_28("STRING_615072429");
      noLegs_1_1_2.set(LegSymbolSfx_28);
      InstrumentLeg_28.insert(LegSymbolSfx_28.getString());
      FIX::LegTimeUnit LegTimeUnit_28("STRING_146835112");
      noLegs_1_1_2.set(LegTimeUnit_28);
      InstrumentLeg_28.insert(LegTimeUnit_28.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_28("STRING_1221745697");
      noLegs_1_1_2.set(LegUnitOfMeasure_28);
      InstrumentLeg_28.insert(LegUnitOfMeasure_28.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_28;
      LegUnitOfMeasureQty_28.setString("7053347");
      noLegs_1_1_2.set(LegUnitOfMeasureQty_28);
      InstrumentLeg_28.insert(LegUnitOfMeasureQty_28.getString());
      all_values.push_back(InstrumentLeg_28);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_50;
        FIX::LegSecurityAltID LegSecurityAltID_50("STRING_102398641");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltID_50);
        LegSecAltIDGrp_NoLegSecurityAltID_50.insert(LegSecurityAltID_50.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_50("STRING_1848150296");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltIDSource_50);
        LegSecAltIDGrp_NoLegSecurityAltID_50.insert(LegSecurityAltIDSource_50.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_50);

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_2);
    }
    // Instrument
    multiset<string> Instrument_18;
    FIX::AttachmentPoint AttachmentPoint_18;
    AttachmentPoint_18.setString("89.510000");
    noRelatedSym_0_1.set(AttachmentPoint_18);
    Instrument_18.insert(AttachmentPoint_18.getString());
    FIX::CFICode CFICode_18("STRING_977596354");
    noRelatedSym_0_1.set(CFICode_18);
    Instrument_18.insert(CFICode_18.getString());
    FIX::CPProgram CPProgram_18(99);
    noRelatedSym_0_1.set(CPProgram_18);
    Instrument_18.insert(CPProgram_18.getString());
    FIX::CPRegType CPRegType_18("STRING_828063739");
    noRelatedSym_0_1.set(CPRegType_18);
    Instrument_18.insert(CPRegType_18.getString());
    FIX::CapPrice CapPrice_18;
    CapPrice_18.setString("334875");
    noRelatedSym_0_1.set(CapPrice_18);
    Instrument_18.insert(CapPrice_18.getString());
    FIX::ContractMultiplier ContractMultiplier_18;
    ContractMultiplier_18.setString("15871358");
    noRelatedSym_0_1.set(ContractMultiplier_18);
    Instrument_18.insert(ContractMultiplier_18.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_18(1);
    noRelatedSym_0_1.set(ContractMultiplierUnit_18);
    Instrument_18.insert(ContractMultiplierUnit_18.getString());
    FIX::ContractSettlMonth ContractSettlMonth_18("MONTHYEAR_926347928");
    noRelatedSym_0_1.set(ContractSettlMonth_18);
    Instrument_18.insert(ContractSettlMonth_18.getString());
    FIX::CountryOfIssue CountryOfIssue_18("COUNTRY_1539198402");
    noRelatedSym_0_1.set(CountryOfIssue_18);
    Instrument_18.insert(CountryOfIssue_18.getString());
    FIX::CouponPaymentDate CouponPaymentDate_18("LOCALMKTDATE_499757943");
    noRelatedSym_0_1.set(CouponPaymentDate_18);
    Instrument_18.insert(CouponPaymentDate_18.getString());
    FIX::CouponRate CouponRate_18;
    CouponRate_18.setString("28.560000");
    noRelatedSym_0_1.set(CouponRate_18);
    Instrument_18.insert(CouponRate_18.getString());
    FIX::CreditRating CreditRating_18("STRING_1064772910");
    noRelatedSym_0_1.set(CreditRating_18);
    Instrument_18.insert(CreditRating_18.getString());
    FIX::DatedDate DatedDate_18("LOCALMKTDATE_238317170");
    noRelatedSym_0_1.set(DatedDate_18);
    Instrument_18.insert(DatedDate_18.getString());
    FIX::DetachmentPoint DetachmentPoint_18;
    DetachmentPoint_18.setString("7.320000");
    noRelatedSym_0_1.set(DetachmentPoint_18);
    Instrument_18.insert(DetachmentPoint_18.getString());
    FIX::EncodedIssuer EncodedIssuer_18("DATA_1241191284");
    noRelatedSym_0_1.set(EncodedIssuer_18);
    Instrument_18.insert(EncodedIssuer_18.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_18(2105121576);
    noRelatedSym_0_1.set(EncodedIssuerLen_18);
    Instrument_18.insert(EncodedIssuerLen_18.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_18("DATA_658405045");
    noRelatedSym_0_1.set(EncodedSecurityDesc_18);
    Instrument_18.insert(EncodedSecurityDesc_18.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_18(1490225326);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_18);
    Instrument_18.insert(EncodedSecurityDescLen_18.getString());
    FIX::ExerciseStyle ExerciseStyle_18(0);
    noRelatedSym_0_1.set(ExerciseStyle_18);
    Instrument_18.insert(ExerciseStyle_18.getString());
    FIX::Factor Factor_18;
    Factor_18.setString("581377");
    noRelatedSym_0_1.set(Factor_18);
    Instrument_18.insert(Factor_18.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_18(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_18);
    Instrument_18.insert(FlexProductEligibilityIndicator_18.getString());
    FIX::FlexibleIndicator FlexibleIndicator_18(false);
    noRelatedSym_0_1.set(FlexibleIndicator_18);
    Instrument_18.insert(FlexibleIndicator_18.getString());
    FIX::FloorPrice FloorPrice_18;
    FloorPrice_18.setString("10561192");
    noRelatedSym_0_1.set(FloorPrice_18);
    Instrument_18.insert(FloorPrice_18.getString());
    FIX::FlowScheduleType FlowScheduleType_18(1);
    noRelatedSym_0_1.set(FlowScheduleType_18);
    Instrument_18.insert(FlowScheduleType_18.getString());
    FIX::InstrRegistry InstrRegistry_18("STRING_336286160");
    noRelatedSym_0_1.set(InstrRegistry_18);
    Instrument_18.insert(InstrRegistry_18.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_18('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_18);
    Instrument_18.insert(InstrmtAssignmentMethod_18.getString());
    FIX::InterestAccrualDate InterestAccrualDate_18("LOCALMKTDATE_482867661");
    noRelatedSym_0_1.set(InterestAccrualDate_18);
    Instrument_18.insert(InterestAccrualDate_18.getString());
    FIX::IssueDate IssueDate_18("LOCALMKTDATE_1041620868");
    noRelatedSym_0_1.set(IssueDate_18);
    Instrument_18.insert(IssueDate_18.getString());
    FIX::Issuer Issuer_18("STRING_202469275");
    noRelatedSym_0_1.set(Issuer_18);
    Instrument_18.insert(Issuer_18.getString());
    FIX::ListMethod ListMethod_18(0);
    noRelatedSym_0_1.set(ListMethod_18);
    Instrument_18.insert(ListMethod_18.getString());
    FIX::LocaleOfIssue LocaleOfIssue_18("STRING_742287516");
    noRelatedSym_0_1.set(LocaleOfIssue_18);
    Instrument_18.insert(LocaleOfIssue_18.getString());
    FIX::MaturityDate MaturityDate_18("LOCALMKTDATE_633218226");
    noRelatedSym_0_1.set(MaturityDate_18);
    Instrument_18.insert(MaturityDate_18.getString());
    FIX::MaturityMonthYear MaturityMonthYear_18("MONTHYEAR_1562862656");
    noRelatedSym_0_1.set(MaturityMonthYear_18);
    Instrument_18.insert(MaturityMonthYear_18.getString());
    FIX::MaturityTime MaturityTime_18("TZTIMEONLY_1068935555");
    noRelatedSym_0_1.set(MaturityTime_18);
    Instrument_18.insert(MaturityTime_18.getString());
    FIX::MinPriceIncrement MinPriceIncrement_18;
    MinPriceIncrement_18.setString("14612819");
    noRelatedSym_0_1.set(MinPriceIncrement_18);
    Instrument_18.insert(MinPriceIncrement_18.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_18;
    MinPriceIncrementAmount_18.setString("15963501");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_18);
    Instrument_18.insert(MinPriceIncrementAmount_18.getString());
    FIX::NTPositionLimit NTPositionLimit_18(508587739);
    noRelatedSym_0_1.set(NTPositionLimit_18);
    Instrument_18.insert(NTPositionLimit_18.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_18;
    NotionalPercentageOutstanding_18.setString("80.390000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_18);
    Instrument_18.insert(NotionalPercentageOutstanding_18.getString());
    FIX::OptAttribute OptAttribute_18('3');
    noRelatedSym_0_1.set(OptAttribute_18);
    Instrument_18.insert(OptAttribute_18.getString());
    FIX::OptPayoutAmount OptPayoutAmount_18;
    OptPayoutAmount_18.setString("20477861");
    noRelatedSym_0_1.set(OptPayoutAmount_18);
    Instrument_18.insert(OptPayoutAmount_18.getString());
    FIX::OptPayoutType OptPayoutType_18(2);
    noRelatedSym_0_1.set(OptPayoutType_18);
    Instrument_18.insert(OptPayoutType_18.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_18;
    OriginalNotionalPercentageOutstanding_18.setString("73.150000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_18);
    Instrument_18.insert(OriginalNotionalPercentageOutstanding_18.getString());
    FIX::Pool Pool_18("STRING_965075403");
    noRelatedSym_0_1.set(Pool_18);
    Instrument_18.insert(Pool_18.getString());
    FIX::PositionLimit PositionLimit_18(1063893153);
    noRelatedSym_0_1.set(PositionLimit_18);
    Instrument_18.insert(PositionLimit_18.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_18("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_18);
    Instrument_18.insert(PriceQuoteMethod_18.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_18("STRING_58783039");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_18);
    Instrument_18.insert(PriceUnitOfMeasure_18.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_18;
    PriceUnitOfMeasureQty_18.setString("10215310");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_18);
    Instrument_18.insert(PriceUnitOfMeasureQty_18.getString());
    FIX::Product Product_20(8);
    noRelatedSym_0_1.set(Product_20);
    Instrument_18.insert(Product_20.getString());
    FIX::ProductComplex ProductComplex_18("STRING_1549008366");
    noRelatedSym_0_1.set(ProductComplex_18);
    Instrument_18.insert(ProductComplex_18.getString());
    FIX::PutOrCall PutOrCall_18(1);
    noRelatedSym_0_1.set(PutOrCall_18);
    Instrument_18.insert(PutOrCall_18.getString());
    FIX::RedemptionDate RedemptionDate_18("LOCALMKTDATE_1943407193");
    noRelatedSym_0_1.set(RedemptionDate_18);
    Instrument_18.insert(RedemptionDate_18.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_18("STRING_275659631");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_18);
    Instrument_18.insert(RepoCollateralSecurityType_18.getString());
    FIX::RepurchaseRate RepurchaseRate_18;
    RepurchaseRate_18.setString("12.360000");
    noRelatedSym_0_1.set(RepurchaseRate_18);
    Instrument_18.insert(RepurchaseRate_18.getString());
    FIX::RepurchaseTerm RepurchaseTerm_18(852042748);
    noRelatedSym_0_1.set(RepurchaseTerm_18);
    Instrument_18.insert(RepurchaseTerm_18.getString());
    FIX::RestructuringType RestructuringType_18("STRING_MM");
    noRelatedSym_0_1.set(RestructuringType_18);
    Instrument_18.insert(RestructuringType_18.getString());
    FIX::SecurityDesc SecurityDesc_18("STRING_238613748");
    noRelatedSym_0_1.set(SecurityDesc_18);
    Instrument_18.insert(SecurityDesc_18.getString());
    FIX::SecurityExchange SecurityExchange_18("EXCHANGE_2054997064");
    noRelatedSym_0_1.set(SecurityExchange_18);
    Instrument_18.insert(SecurityExchange_18.getString());
    FIX::SecurityGroup SecurityGroup_18("STRING_19649255");
    noRelatedSym_0_1.set(SecurityGroup_18);
    Instrument_18.insert(SecurityGroup_18.getString());
    FIX::SecurityID SecurityID_18("STRING_1280234616");
    noRelatedSym_0_1.set(SecurityID_18);
    Instrument_18.insert(SecurityID_18.getString());
    FIX::SecurityIDSource SecurityIDSource_18("STRING_6");
    noRelatedSym_0_1.set(SecurityIDSource_18);
    Instrument_18.insert(SecurityIDSource_18.getString());
    FIX::SecurityStatus SecurityStatus_18("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_18);
    Instrument_18.insert(SecurityStatus_18.getString());
    FIX::SecuritySubType SecuritySubType_18("STRING_2022522132");
    noRelatedSym_0_1.set(SecuritySubType_18);
    Instrument_18.insert(SecuritySubType_18.getString());
    FIX::SecurityType SecurityType_20("STRING_SPCLT");
    noRelatedSym_0_1.set(SecurityType_20);
    Instrument_18.insert(SecurityType_20.getString());
    FIX::Seniority Seniority_18("STRING_SR");
    noRelatedSym_0_1.set(Seniority_18);
    Instrument_18.insert(Seniority_18.getString());
    FIX::SettlMethod SettlMethod_18('C');
    noRelatedSym_0_1.set(SettlMethod_18);
    Instrument_18.insert(SettlMethod_18.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_18("STRING_56999234");
    noRelatedSym_0_1.set(SettleOnOpenFlag_18);
    Instrument_18.insert(SettleOnOpenFlag_18.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_18("STRING_1616644746");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_18);
    Instrument_18.insert(StateOrProvinceOfIssue_18.getString());
    FIX::StrikeCurrency StrikeCurrency_18("USD");
    noRelatedSym_0_1.set(StrikeCurrency_18);
    Instrument_18.insert(StrikeCurrency_18.getString());
    FIX::StrikeMultiplier StrikeMultiplier_18;
    StrikeMultiplier_18.setString("19918592");
    noRelatedSym_0_1.set(StrikeMultiplier_18);
    Instrument_18.insert(StrikeMultiplier_18.getString());
    FIX::StrikePrice StrikePrice_18;
    StrikePrice_18.setString("13528642");
    noRelatedSym_0_1.set(StrikePrice_18);
    Instrument_18.insert(StrikePrice_18.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_18(3);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_18);
    Instrument_18.insert(StrikePriceBoundaryMethod_18.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_18;
    StrikePriceBoundaryPrecision_18.setString("28.730000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_18);
    Instrument_18.insert(StrikePriceBoundaryPrecision_18.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_18(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_18);
    Instrument_18.insert(StrikePriceDeterminationMethod_18.getString());
    FIX::StrikeValue StrikeValue_18;
    StrikeValue_18.setString("1248027");
    noRelatedSym_0_1.set(StrikeValue_18);
    Instrument_18.insert(StrikeValue_18.getString());
    FIX::Symbol Symbol_18("STRING_687613624");
    noRelatedSym_0_1.set(Symbol_18);
    Instrument_18.insert(Symbol_18.getString());
    FIX::SymbolSfx SymbolSfx_18("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_18);
    Instrument_18.insert(SymbolSfx_18.getString());
    FIX::TimeUnit TimeUnit_18("STRING_Wk");
    noRelatedSym_0_1.set(TimeUnit_18);
    Instrument_18.insert(TimeUnit_18.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_18(2);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_18);
    Instrument_18.insert(UnderlyingPriceDeterminationMethod_18.getString());
    FIX::UnitOfMeasure UnitOfMeasure_18("STRING_MMbbl");
    noRelatedSym_0_1.set(UnitOfMeasure_18);
    Instrument_18.insert(UnitOfMeasure_18.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_18;
    UnitOfMeasureQty_18.setString("13274477");
    noRelatedSym_0_1.set(UnitOfMeasureQty_18);
    Instrument_18.insert(UnitOfMeasureQty_18.getString());
    FIX::ValuationMethod ValuationMethod_18("STRING_FUT");
    noRelatedSym_0_1.set(ValuationMethod_18);
    Instrument_18.insert(ValuationMethod_18.getString());
    all_values.push_back(Instrument_18);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_39;
      FIX::ComplexEventCondition ComplexEventCondition_39(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventCondition_39.getString());
      FIX::ComplexEventPrice ComplexEventPrice_39;
      ComplexEventPrice_39.setString("10733657");
      noComplexEvents_1_1_0.set(ComplexEventPrice_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPrice_39.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_39(4);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceBoundaryMethod_39.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_39;
      ComplexEventPriceBoundaryPrecision_39.setString("90.360000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceBoundaryPrecision_39.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_39(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceTimeType_39.getString());
      FIX::ComplexEventType ComplexEventType_39(9);
      noComplexEvents_1_1_0.set(ComplexEventType_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventType_39.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_39;
      ComplexOptPayoutAmount_39.setString("6011400");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexOptPayoutAmount_39.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_39);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_84;
        FIX::ComplexEventEndDate ComplexEventEndDate_84(FIX::UTCTIMESTAMP(8, 19, 50, 4, 102002));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_84);
        ComplexEventDates_NoComplexEventDates_84.insert(ComplexEventEndDate_84.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_84(FIX::UTCTIMESTAMP(7, 14, 31, 16, 82011));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_84);
        ComplexEventDates_NoComplexEventDates_84.insert(ComplexEventStartDate_84.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_84);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_172;
          FIX::ComplexEventEndTime ComplexEventEndTime_172(FIX::UTCTIMEONLY(18, 53, 45));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_172);
          ComplexEventTimes_NoComplexEventTimes_172.insert(ComplexEventEndTime_172.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_172(FIX::UTCTIMEONLY(1, 43, 47));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_172);
          ComplexEventTimes_NoComplexEventTimes_172.insert(ComplexEventStartTime_172.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_172);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_173;
          FIX::ComplexEventEndTime ComplexEventEndTime_173(FIX::UTCTIMEONLY(6, 17, 21));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_173);
          ComplexEventTimes_NoComplexEventTimes_173.insert(ComplexEventEndTime_173.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_173(FIX::UTCTIMEONLY(23, 25, 3));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_173);
          ComplexEventTimes_NoComplexEventTimes_173.insert(ComplexEventStartTime_173.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_173);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_85;
        FIX::ComplexEventEndDate ComplexEventEndDate_85(FIX::UTCTIMESTAMP(10, 14, 18, 22, 52000));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_85);
        ComplexEventDates_NoComplexEventDates_85.insert(ComplexEventEndDate_85.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_85(FIX::UTCTIMESTAMP(23, 12, 17, 0, 82016));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_85);
        ComplexEventDates_NoComplexEventDates_85.insert(ComplexEventStartDate_85.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_85);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_174;
          FIX::ComplexEventEndTime ComplexEventEndTime_174(FIX::UTCTIMEONLY(10, 40, 24));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_174);
          ComplexEventTimes_NoComplexEventTimes_174.insert(ComplexEventEndTime_174.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_174(FIX::UTCTIMEONLY(9, 7, 48));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_174);
          ComplexEventTimes_NoComplexEventTimes_174.insert(ComplexEventStartTime_174.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_174);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_175;
          FIX::ComplexEventEndTime ComplexEventEndTime_175(FIX::UTCTIMEONLY(2, 58, 52));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_175);
          ComplexEventTimes_NoComplexEventTimes_175.insert(ComplexEventEndTime_175.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_175(FIX::UTCTIMEONLY(21, 18, 3));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_175);
          ComplexEventTimes_NoComplexEventTimes_175.insert(ComplexEventStartTime_175.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_175);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_39;
      FIX::EventDate EventDate_39("LOCALMKTDATE_313538804");
      noEvents_1_1_0.set(EventDate_39);
      EvntGrp_NoEvents_39.insert(EventDate_39.getString());
      FIX::EventPx EventPx_39;
      EventPx_39.setString("20687581");
      noEvents_1_1_0.set(EventPx_39);
      EvntGrp_NoEvents_39.insert(EventPx_39.getString());
      FIX::EventText EventText_39("STRING_1604781779");
      noEvents_1_1_0.set(EventText_39);
      EvntGrp_NoEvents_39.insert(EventText_39.getString());
      FIX::EventTime EventTime_39(FIX::UTCTIMESTAMP(13, 57, 52, 1, 112008));
      noEvents_1_1_0.set(EventTime_39);
      EvntGrp_NoEvents_39.insert(EventTime_39.getString());
      FIX::EventType EventType_39(18);
      noEvents_1_1_0.set(EventType_39);
      EvntGrp_NoEvents_39.insert(EventType_39.getString());
      all_values.push_back(EvntGrp_NoEvents_39);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_40;
      FIX::EventDate EventDate_40("LOCALMKTDATE_1172622761");
      noEvents_1_1_1.set(EventDate_40);
      EvntGrp_NoEvents_40.insert(EventDate_40.getString());
      FIX::EventPx EventPx_40;
      EventPx_40.setString("3128490");
      noEvents_1_1_1.set(EventPx_40);
      EvntGrp_NoEvents_40.insert(EventPx_40.getString());
      FIX::EventText EventText_40("STRING_485046615");
      noEvents_1_1_1.set(EventText_40);
      EvntGrp_NoEvents_40.insert(EventText_40.getString());
      FIX::EventTime EventTime_40(FIX::UTCTIMESTAMP(9, 47, 44, 14, 102004));
      noEvents_1_1_1.set(EventTime_40);
      EvntGrp_NoEvents_40.insert(EventTime_40.getString());
      FIX::EventType EventType_40(12);
      noEvents_1_1_1.set(EventType_40);
      EvntGrp_NoEvents_40.insert(EventType_40.getString());
      all_values.push_back(EvntGrp_NoEvents_40);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_41;
      FIX::EventDate EventDate_41("LOCALMKTDATE_1903675084");
      noEvents_1_1_2.set(EventDate_41);
      EvntGrp_NoEvents_41.insert(EventDate_41.getString());
      FIX::EventPx EventPx_41;
      EventPx_41.setString("8491502");
      noEvents_1_1_2.set(EventPx_41);
      EvntGrp_NoEvents_41.insert(EventPx_41.getString());
      FIX::EventText EventText_41("STRING_1451936149");
      noEvents_1_1_2.set(EventText_41);
      EvntGrp_NoEvents_41.insert(EventText_41.getString());
      FIX::EventTime EventTime_41(FIX::UTCTIMESTAMP(21, 2, 6, 0, 82002));
      noEvents_1_1_2.set(EventTime_41);
      EvntGrp_NoEvents_41.insert(EventTime_41.getString());
      FIX::EventType EventType_41(3);
      noEvents_1_1_2.set(EventType_41);
      EvntGrp_NoEvents_41.insert(EventType_41.getString());
      all_values.push_back(EvntGrp_NoEvents_41);

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_33;
      FIX::InstrumentPartyID InstrumentPartyID_33("STRING_373867601");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_33);
      InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyID_33.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_33('3');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_33);
      InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyIDSource_33.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_33(1067644412);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_33);
      InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyRole_33.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_33);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62;
        FIX::InstrumentPartySubID InstrumentPartySubID_62("STRING_1646716312");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_62);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62.insert(InstrumentPartySubID_62.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_62(1194736002);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_62);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62.insert(InstrumentPartySubIDType_62.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63;
        FIX::InstrumentPartySubID InstrumentPartySubID_63("STRING_1507650747");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_63);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63.insert(InstrumentPartySubID_63.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_63(734003781);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_63);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63.insert(InstrumentPartySubIDType_63.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_34;
      FIX::InstrumentPartyID InstrumentPartyID_34("STRING_219875115");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_34);
      InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyID_34.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_34('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_34);
      InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyIDSource_34.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_34(1219050397);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_34);
      InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyRole_34.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_34);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64;
        FIX::InstrumentPartySubID InstrumentPartySubID_64("STRING_1612154691");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_64);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64.insert(InstrumentPartySubID_64.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_64(1412814324);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_64);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64.insert(InstrumentPartySubIDType_64.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65;
        FIX::InstrumentPartySubID InstrumentPartySubID_65("STRING_32001860");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_65);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65.insert(InstrumentPartySubID_65.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_65(843685673);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_65);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65.insert(InstrumentPartySubIDType_65.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66;
        FIX::InstrumentPartySubID InstrumentPartySubID_66("STRING_953701429");
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubID_66);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66.insert(InstrumentPartySubID_66.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_66(991039092);
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubIDType_66);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66.insert(InstrumentPartySubIDType_66.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_38;
      FIX::SecurityAltID SecurityAltID_38("STRING_709892865");
      noSecurityAltID_1_1_0.set(SecurityAltID_38);
      SecAltIDGrp_NoSecurityAltID_38.insert(SecurityAltID_38.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_38("STRING_1840189342");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_38);
      SecAltIDGrp_NoSecurityAltID_38.insert(SecurityAltIDSource_38.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_38);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_39;
      FIX::SecurityAltID SecurityAltID_39("STRING_834522445");
      noSecurityAltID_1_1_1.set(SecurityAltID_39);
      SecAltIDGrp_NoSecurityAltID_39.insert(SecurityAltID_39.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_39("STRING_870475174");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_39);
      SecAltIDGrp_NoSecurityAltID_39.insert(SecurityAltIDSource_39.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_39);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_40;
      FIX::SecurityAltID SecurityAltID_40("STRING_535416444");
      noSecurityAltID_1_1_2.set(SecurityAltID_40);
      SecAltIDGrp_NoSecurityAltID_40.insert(SecurityAltID_40.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_40("STRING_1825563328");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_40);
      SecAltIDGrp_NoSecurityAltID_40.insert(SecurityAltIDSource_40.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_40);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_36;
    FIX::SecurityXML SecurityXML_37("XMLDATA_78191252");
    noRelatedSym_0_1.set(SecurityXML_37);
    FIX::SecurityXMLLen SecurityXMLLen_18(418513348);
    noRelatedSym_0_1.set(SecurityXMLLen_18);
    FIX::SecurityXMLSchema SecurityXMLSchema_18("STRING_1197031623");
    noRelatedSym_0_1.set(SecurityXMLSchema_18);
    SecurityXML_36.insert(SecurityXMLSchema_18.getString());
    all_values.push_back(SecurityXML_36);

    // InstrumentExtension
    multiset<string> InstrumentExtension_5;
    FIX::DeliveryForm DeliveryForm_5(2);
    noRelatedSym_0_1.set(DeliveryForm_5);
    InstrumentExtension_5.insert(DeliveryForm_5.getString());
    FIX::PctAtRisk PctAtRisk_5;
    PctAtRisk_5.setString("48.020000");
    noRelatedSym_0_1.set(PctAtRisk_5);
    InstrumentExtension_5.insert(PctAtRisk_5.getString());
    all_values.push_back(InstrumentExtension_5);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_11;
      FIX::InstrAttribType InstrAttribType_11(5);
      noInstrAttrib_1_1_0.set(InstrAttribType_11);
      AttrbGrp_NoInstrAttrib_11.insert(InstrAttribType_11.getString());
      FIX::InstrAttribValue InstrAttribValue_11("STRING_572997526");
      noInstrAttrib_1_1_0.set(InstrAttribValue_11);
      AttrbGrp_NoInstrAttrib_11.insert(InstrAttribValue_11.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_11);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_1;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_1;
    SecondaryHighLimitPrice_1.setString("10934424");
    noRelatedSym_0_1.set(SecondaryHighLimitPrice_1);
    SecondaryPriceLimits_1.insert(SecondaryHighLimitPrice_1.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_1;
    SecondaryLowLimitPrice_1.setString("3166149");
    noRelatedSym_0_1.set(SecondaryLowLimitPrice_1);
    SecondaryPriceLimits_1.insert(SecondaryLowLimitPrice_1.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_1(72230190);
    noRelatedSym_0_1.set(SecondaryPriceLimitType_1);
    SecondaryPriceLimits_1.insert(SecondaryPriceLimitType_1.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_1;
    SecondaryTradingReferencePrice_1.setString("1406948");
    noRelatedSym_0_1.set(SecondaryTradingReferencePrice_1);
    SecondaryPriceLimits_1.insert(SecondaryTradingReferencePrice_1.getString());
    all_values.push_back(SecondaryPriceLimits_1);

    msg.addGroup(noRelatedSym_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_26;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_26("DATA_1824265729");
  msg.set(EncodedUnderlyingIssuer_26);
  UnderlyingInstrument_26.insert(EncodedUnderlyingIssuer_26.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_26(806233972);
  msg.set(EncodedUnderlyingIssuerLen_26);
  UnderlyingInstrument_26.insert(EncodedUnderlyingIssuerLen_26.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_26("DATA_360569931");
  msg.set(EncodedUnderlyingSecurityDesc_26);
  UnderlyingInstrument_26.insert(EncodedUnderlyingSecurityDesc_26.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_26(1497281851);
  msg.set(EncodedUnderlyingSecurityDescLen_26);
  UnderlyingInstrument_26.insert(EncodedUnderlyingSecurityDescLen_26.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_26;
  UnderlyingAdjustedQuantity_26.setString("20252843");
  msg.set(UnderlyingAdjustedQuantity_26);
  UnderlyingInstrument_26.insert(UnderlyingAdjustedQuantity_26.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_26;
  UnderlyingAllocationPercent_26.setString("92.270000");
  msg.set(UnderlyingAllocationPercent_26);
  UnderlyingInstrument_26.insert(UnderlyingAllocationPercent_26.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_26;
  UnderlyingAttachmentPoint_26.setString("28.940000");
  msg.set(UnderlyingAttachmentPoint_26);
  UnderlyingInstrument_26.insert(UnderlyingAttachmentPoint_26.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_26("STRING_1290615045");
  msg.set(UnderlyingCFICode_26);
  UnderlyingInstrument_26.insert(UnderlyingCFICode_26.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_26("STRING_233081088");
  msg.set(UnderlyingCPProgram_26);
  UnderlyingInstrument_26.insert(UnderlyingCPProgram_26.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_26("STRING_1805638567");
  msg.set(UnderlyingCPRegType_26);
  UnderlyingInstrument_26.insert(UnderlyingCPRegType_26.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_26;
  UnderlyingCapValue_26.setString("968328");
  msg.set(UnderlyingCapValue_26);
  UnderlyingInstrument_26.insert(UnderlyingCapValue_26.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_26;
  UnderlyingCashAmount_26.setString("12241201");
  msg.set(UnderlyingCashAmount_26);
  UnderlyingInstrument_26.insert(UnderlyingCashAmount_26.getString());
  FIX::UnderlyingCashType UnderlyingCashType_26("STRING_FIXED");
  msg.set(UnderlyingCashType_26);
  UnderlyingInstrument_26.insert(UnderlyingCashType_26.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_26;
  UnderlyingContractMultiplier_26.setString("8067256");
  msg.set(UnderlyingContractMultiplier_26);
  UnderlyingInstrument_26.insert(UnderlyingContractMultiplier_26.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_26(916825875);
  msg.set(UnderlyingContractMultiplierUnit_26);
  UnderlyingInstrument_26.insert(UnderlyingContractMultiplierUnit_26.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_26("COUNTRY_2022747309");
  msg.set(UnderlyingCountryOfIssue_26);
  UnderlyingInstrument_26.insert(UnderlyingCountryOfIssue_26.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_26("LOCALMKTDATE_1677200866");
  msg.set(UnderlyingCouponPaymentDate_26);
  UnderlyingInstrument_26.insert(UnderlyingCouponPaymentDate_26.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_26;
  UnderlyingCouponRate_26.setString("23.190000");
  msg.set(UnderlyingCouponRate_26);
  UnderlyingInstrument_26.insert(UnderlyingCouponRate_26.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_26("STRING_1700826989");
  msg.set(UnderlyingCreditRating_26);
  UnderlyingInstrument_26.insert(UnderlyingCreditRating_26.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_26("EUR");
  msg.set(UnderlyingCurrency_26);
  UnderlyingInstrument_26.insert(UnderlyingCurrency_26.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_26;
  UnderlyingCurrentValue_26.setString("7503749");
  msg.set(UnderlyingCurrentValue_26);
  UnderlyingInstrument_26.insert(UnderlyingCurrentValue_26.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_26;
  UnderlyingDetachmentPoint_26.setString("82.540000");
  msg.set(UnderlyingDetachmentPoint_26);
  UnderlyingInstrument_26.insert(UnderlyingDetachmentPoint_26.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_26;
  UnderlyingDirtyPrice_26.setString("20936404");
  msg.set(UnderlyingDirtyPrice_26);
  UnderlyingInstrument_26.insert(UnderlyingDirtyPrice_26.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_26;
  UnderlyingEndPrice_26.setString("7761730");
  msg.set(UnderlyingEndPrice_26);
  UnderlyingInstrument_26.insert(UnderlyingEndPrice_26.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_26;
  UnderlyingEndValue_26.setString("13281519");
  msg.set(UnderlyingEndValue_26);
  UnderlyingInstrument_26.insert(UnderlyingEndValue_26.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_26(519154348);
  msg.set(UnderlyingExerciseStyle_26);
  UnderlyingInstrument_26.insert(UnderlyingExerciseStyle_26.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_26;
  UnderlyingFXRate_26.setString("18696154");
  msg.set(UnderlyingFXRate_26);
  UnderlyingInstrument_26.insert(UnderlyingFXRate_26.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_26('M');
  msg.set(UnderlyingFXRateCalc_26);
  UnderlyingInstrument_26.insert(UnderlyingFXRateCalc_26.getString());
  FIX::UnderlyingFactor UnderlyingFactor_26;
  UnderlyingFactor_26.setString("5913845");
  msg.set(UnderlyingFactor_26);
  UnderlyingInstrument_26.insert(UnderlyingFactor_26.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_26(2010310293);
  msg.set(UnderlyingFlowScheduleType_26);
  UnderlyingInstrument_26.insert(UnderlyingFlowScheduleType_26.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_26("STRING_1321549052");
  msg.set(UnderlyingInstrRegistry_26);
  UnderlyingInstrument_26.insert(UnderlyingInstrRegistry_26.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_26("LOCALMKTDATE_1397618510");
  msg.set(UnderlyingIssueDate_26);
  UnderlyingInstrument_26.insert(UnderlyingIssueDate_26.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_26("STRING_223396576");
  msg.set(UnderlyingIssuer_26);
  UnderlyingInstrument_26.insert(UnderlyingIssuer_26.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_26("STRING_671347255");
  msg.set(UnderlyingLocaleOfIssue_26);
  UnderlyingInstrument_26.insert(UnderlyingLocaleOfIssue_26.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_26("LOCALMKTDATE_1275419231");
  msg.set(UnderlyingMaturityDate_26);
  UnderlyingInstrument_26.insert(UnderlyingMaturityDate_26.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_26("MONTHYEAR_424475804");
  msg.set(UnderlyingMaturityMonthYear_26);
  UnderlyingInstrument_26.insert(UnderlyingMaturityMonthYear_26.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_26("TZTIMEONLY_1633300149");
  msg.set(UnderlyingMaturityTime_26);
  UnderlyingInstrument_26.insert(UnderlyingMaturityTime_26.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_26;
  UnderlyingNotionalPercentageOutstanding_26.setString("6.290000");
  msg.set(UnderlyingNotionalPercentageOutstanding_26);
  UnderlyingInstrument_26.insert(UnderlyingNotionalPercentageOutstanding_26.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_26('6');
  msg.set(UnderlyingOptAttribute_26);
  UnderlyingInstrument_26.insert(UnderlyingOptAttribute_26.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_26;
  UnderlyingOriginalNotionalPercentageOutstanding_26.setString("50.690000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_26);
  UnderlyingInstrument_26.insert(UnderlyingOriginalNotionalPercentageOutstanding_26.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_26("STRING_515383456");
  msg.set(UnderlyingPriceUnitOfMeasure_26);
  UnderlyingInstrument_26.insert(UnderlyingPriceUnitOfMeasure_26.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_26;
  UnderlyingPriceUnitOfMeasureQty_26.setString("18816770");
  msg.set(UnderlyingPriceUnitOfMeasureQty_26);
  UnderlyingInstrument_26.insert(UnderlyingPriceUnitOfMeasureQty_26.getString());
  FIX::UnderlyingProduct UnderlyingProduct_26(332196285);
  msg.set(UnderlyingProduct_26);
  UnderlyingInstrument_26.insert(UnderlyingProduct_26.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_26(1322109148);
  msg.set(UnderlyingPutOrCall_26);
  UnderlyingInstrument_26.insert(UnderlyingPutOrCall_26.getString());
  FIX::UnderlyingPx UnderlyingPx_26;
  UnderlyingPx_26.setString("6510192");
  msg.set(UnderlyingPx_26);
  UnderlyingInstrument_26.insert(UnderlyingPx_26.getString());
  FIX::UnderlyingQty UnderlyingQty_26;
  UnderlyingQty_26.setString("2074599");
  msg.set(UnderlyingQty_26);
  UnderlyingInstrument_26.insert(UnderlyingQty_26.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_26("LOCALMKTDATE_851826367");
  msg.set(UnderlyingRedemptionDate_26);
  UnderlyingInstrument_26.insert(UnderlyingRedemptionDate_26.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_26("STRING_2103261618");
  msg.set(UnderlyingRepoCollateralSecurityType_26);
  UnderlyingInstrument_26.insert(UnderlyingRepoCollateralSecurityType_26.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_26;
  UnderlyingRepurchaseRate_26.setString("69.360000");
  msg.set(UnderlyingRepurchaseRate_26);
  UnderlyingInstrument_26.insert(UnderlyingRepurchaseRate_26.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_26(459734838);
  msg.set(UnderlyingRepurchaseTerm_26);
  UnderlyingInstrument_26.insert(UnderlyingRepurchaseTerm_26.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_26("STRING_1826533638");
  msg.set(UnderlyingRestructuringType_26);
  UnderlyingInstrument_26.insert(UnderlyingRestructuringType_26.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_26("STRING_511178253");
  msg.set(UnderlyingSecurityDesc_26);
  UnderlyingInstrument_26.insert(UnderlyingSecurityDesc_26.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_26("EXCHANGE_1814573092");
  msg.set(UnderlyingSecurityExchange_26);
  UnderlyingInstrument_26.insert(UnderlyingSecurityExchange_26.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_26("STRING_1772690460");
  msg.set(UnderlyingSecurityID_26);
  UnderlyingInstrument_26.insert(UnderlyingSecurityID_26.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_26("STRING_1287351268");
  msg.set(UnderlyingSecurityIDSource_26);
  UnderlyingInstrument_26.insert(UnderlyingSecurityIDSource_26.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_26("STRING_995241434");
  msg.set(UnderlyingSecuritySubType_26);
  UnderlyingInstrument_26.insert(UnderlyingSecuritySubType_26.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_26("STRING_144361160");
  msg.set(UnderlyingSecurityType_26);
  UnderlyingInstrument_26.insert(UnderlyingSecurityType_26.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_26("STRING_1009483097");
  msg.set(UnderlyingSeniority_26);
  UnderlyingInstrument_26.insert(UnderlyingSeniority_26.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_26("STRING_492524757");
  msg.set(UnderlyingSettlMethod_26);
  UnderlyingInstrument_26.insert(UnderlyingSettlMethod_26.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_26(2);
  msg.set(UnderlyingSettlementType_26);
  UnderlyingInstrument_26.insert(UnderlyingSettlementType_26.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_26;
  UnderlyingStartValue_26.setString("8723097");
  msg.set(UnderlyingStartValue_26);
  UnderlyingInstrument_26.insert(UnderlyingStartValue_26.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_26("STRING_1814073810");
  msg.set(UnderlyingStateOrProvinceOfIssue_26);
  UnderlyingInstrument_26.insert(UnderlyingStateOrProvinceOfIssue_26.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_26("JPY");
  msg.set(UnderlyingStrikeCurrency_26);
  UnderlyingInstrument_26.insert(UnderlyingStrikeCurrency_26.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_26;
  UnderlyingStrikePrice_26.setString("3379374");
  msg.set(UnderlyingStrikePrice_26);
  UnderlyingInstrument_26.insert(UnderlyingStrikePrice_26.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_26("STRING_1261299792");
  msg.set(UnderlyingSymbol_26);
  UnderlyingInstrument_26.insert(UnderlyingSymbol_26.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_26("STRING_1520182122");
  msg.set(UnderlyingSymbolSfx_26);
  UnderlyingInstrument_26.insert(UnderlyingSymbolSfx_26.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_26("STRING_1971237567");
  msg.set(UnderlyingTimeUnit_26);
  UnderlyingInstrument_26.insert(UnderlyingTimeUnit_26.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_26("STRING_1679850421");
  msg.set(UnderlyingUnitOfMeasure_26);
  UnderlyingInstrument_26.insert(UnderlyingUnitOfMeasure_26.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_26;
  UnderlyingUnitOfMeasureQty_26.setString("302553");
  msg.set(UnderlyingUnitOfMeasureQty_26);
  UnderlyingInstrument_26.insert(UnderlyingUnitOfMeasureQty_26.getString());
  all_values.push_back(UnderlyingInstrument_26);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_50;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_50("STRING_47750229");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_50);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_50.insert(UnderlyingSecurityAltID_50.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_50("STRING_1911932439");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_50);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_50.insert(UnderlyingSecurityAltIDSource_50.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_50);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_51;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_51("STRING_1447405273");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_51);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_51.insert(UnderlyingSecurityAltID_51.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_51("STRING_1369859378");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_51);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_51.insert(UnderlyingSecurityAltIDSource_51.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_51);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_49;
    FIX::UnderlyingStipType UnderlyingStipType_49("STRING_1654865219");
    noUnderlyingStips_0_0.set(UnderlyingStipType_49);
    UnderlyingStipulations_NoUnderlyingStips_49.insert(UnderlyingStipType_49.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_49("STRING_74202097");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_49);
    UnderlyingStipulations_NoUnderlyingStips_49.insert(UnderlyingStipValue_49.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_49);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_50;
    FIX::UnderlyingStipType UnderlyingStipType_50("STRING_371246061");
    noUnderlyingStips_0_1.set(UnderlyingStipType_50);
    UnderlyingStipulations_NoUnderlyingStips_50.insert(UnderlyingStipType_50.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_50("STRING_1415668507");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_50);
    UnderlyingStipulations_NoUnderlyingStips_50.insert(UnderlyingStipValue_50.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_50);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_48;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_48("STRING_50296051");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_48);
    UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyID_48.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_48('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_48);
    UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyIDSource_48.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_48(201026379);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_48);
    UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyRole_48.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_48);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_91("STRING_1066714380");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_91);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91.insert(UnderlyingInstrumentPartySubID_91.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_91(1196267813);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_91);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91.insert(UnderlyingInstrumentPartySubIDType_91.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_92("STRING_1967347671");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_92);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92.insert(UnderlyingInstrumentPartySubID_92.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_92(2076197477);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_92);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92.insert(UnderlyingInstrumentPartySubIDType_92.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_49;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_49("STRING_1688792570");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_49);
    UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyID_49.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_49('5');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_49);
    UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyIDSource_49.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_49(801023571);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_49);
    UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyRole_49.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_49);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_93("STRING_541490282");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_93);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93.insert(UnderlyingInstrumentPartySubID_93.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_93(1896729890);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_93);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93.insert(UnderlyingInstrumentPartySubIDType_93.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93);

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
