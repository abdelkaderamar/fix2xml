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
  FIX::ClearingBusinessDate ClearingBusinessDate_13("LOCALMKTDATE_1996953993");
  msg.set(ClearingBusinessDate_13);
  DerivativeSecurityList_0.insert(ClearingBusinessDate_13.getString());
  FIX::LastFragment LastFragment_3(false);
  msg.set(LastFragment_3);
  DerivativeSecurityList_0.insert(LastFragment_3.getString());
  FIX::SecurityReportID SecurityReportID_0(1259671011);
  msg.set(SecurityReportID_0);
  DerivativeSecurityList_0.insert(SecurityReportID_0.getString());
  FIX::SecurityReqID SecurityReqID_0("STRING_1924162054");
  msg.set(SecurityReqID_0);
  DerivativeSecurityList_0.insert(SecurityReqID_0.getString());
  FIX::SecurityRequestResult SecurityRequestResult_0(0);
  msg.set(SecurityRequestResult_0);
  DerivativeSecurityList_0.insert(SecurityRequestResult_0.getString());
  FIX::SecurityResponseID SecurityResponseID_0("STRING_1599180248");
  msg.set(SecurityResponseID_0);
  DerivativeSecurityList_0.insert(SecurityResponseID_0.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_1(433509120);
  msg.set(TotNoRelatedSym_1);
  DerivativeSecurityList_0.insert(TotNoRelatedSym_1.getString());
  FIX::TransactTime TransactTime_16(FIX::UTCTIMESTAMP(20, 48, 29, 14, 8, 2010));
  msg.set(TransactTime_16);
  DerivativeSecurityList_0.insert(TransactTime_16.getString());
  all_values.push_back(DerivativeSecurityList_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_2;
  FIX::ApplID ApplID_2("STRING_1786214677");
  msg.set(ApplID_2);
  ApplicationSequenceControl_2.insert(ApplID_2.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_2(1400584826);
  msg.set(ApplLastSeqNum_2);
  ApplicationSequenceControl_2.insert(ApplLastSeqNum_2.getString());
  FIX::ApplResendFlag ApplResendFlag_2(true);
  msg.set(ApplResendFlag_2);
  ApplicationSequenceControl_2.insert(ApplResendFlag_2.getString());
  FIX::ApplSeqNum ApplSeqNum_2(1119482030);
  msg.set(ApplSeqNum_2);
  ApplicationSequenceControl_2.insert(ApplSeqNum_2.getString());
  all_values.push_back(ApplicationSequenceControl_2);

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_0;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_0(false);
  msg.set(DerivFlexProductEligibilityIndicator_0);
  DerivativeInstrument_0.insert(DerivFlexProductEligibilityIndicator_0.getString());
  FIX::DerivativeCFICode DerivativeCFICode_0("STRING_17388052");
  msg.set(DerivativeCFICode_0);
  DerivativeInstrument_0.insert(DerivativeCFICode_0.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_0;
  DerivativeCapPrice_0.setString("2096414");
  msg.set(DerivativeCapPrice_0);
  DerivativeInstrument_0.insert(DerivativeCapPrice_0.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_0;
  DerivativeContractMultiplier_0.setString("1140459");
  msg.set(DerivativeContractMultiplier_0);
  DerivativeInstrument_0.insert(DerivativeContractMultiplier_0.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_0(58878566);
  msg.set(DerivativeContractMultiplierUnit_0);
  DerivativeInstrument_0.insert(DerivativeContractMultiplierUnit_0.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_0("MONTHYEAR_1432423539");
  msg.set(DerivativeContractSettlMonth_0);
  DerivativeInstrument_0.insert(DerivativeContractSettlMonth_0.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_0("COUNTRY_422147427");
  msg.set(DerivativeCountryOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeCountryOfIssue_0.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_0("DATA_1863374165");
  msg.set(DerivativeEncodedIssuer_0);
  DerivativeInstrument_0.insert(DerivativeEncodedIssuer_0.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_0(174433677);
  msg.set(DerivativeEncodedIssuerLen_0);
  DerivativeInstrument_0.insert(DerivativeEncodedIssuerLen_0.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_0("DATA_35196413");
  msg.set(DerivativeEncodedSecurityDesc_0);
  DerivativeInstrument_0.insert(DerivativeEncodedSecurityDesc_0.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_0(341324283);
  msg.set(DerivativeEncodedSecurityDescLen_0);
  DerivativeInstrument_0.insert(DerivativeEncodedSecurityDescLen_0.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_0('1');
  msg.set(DerivativeExerciseStyle_0);
  DerivativeInstrument_0.insert(DerivativeExerciseStyle_0.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_0;
  DerivativeFloorPrice_0.setString("1693031");
  msg.set(DerivativeFloorPrice_0);
  DerivativeInstrument_0.insert(DerivativeFloorPrice_0.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_0(190794628);
  msg.set(DerivativeFlowScheduleType_0);
  DerivativeInstrument_0.insert(DerivativeFlowScheduleType_0.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_0("STRING_162495898");
  msg.set(DerivativeInstrRegistry_0);
  DerivativeInstrument_0.insert(DerivativeInstrRegistry_0.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_0('1');
  msg.set(DerivativeInstrmtAssignmentMethod_0);
  DerivativeInstrument_0.insert(DerivativeInstrmtAssignmentMethod_0.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_0("LOCALMKTDATE_2114956682");
  msg.set(DerivativeIssueDate_0);
  DerivativeInstrument_0.insert(DerivativeIssueDate_0.getString());
  FIX::DerivativeIssuer DerivativeIssuer_0("STRING_35563958");
  msg.set(DerivativeIssuer_0);
  DerivativeInstrument_0.insert(DerivativeIssuer_0.getString());
  FIX::DerivativeListMethod DerivativeListMethod_0(880670764);
  msg.set(DerivativeListMethod_0);
  DerivativeInstrument_0.insert(DerivativeListMethod_0.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_0("STRING_400982155");
  msg.set(DerivativeLocaleOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeLocaleOfIssue_0.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_0("LOCALMKTDATE_112430527");
  msg.set(DerivativeMaturityDate_0);
  DerivativeInstrument_0.insert(DerivativeMaturityDate_0.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_0("MONTHYEAR_286981000");
  msg.set(DerivativeMaturityMonthYear_0);
  DerivativeInstrument_0.insert(DerivativeMaturityMonthYear_0.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_0("TZTIMEONLY_2026251763");
  msg.set(DerivativeMaturityTime_0);
  DerivativeInstrument_0.insert(DerivativeMaturityTime_0.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_0;
  DerivativeMinPriceIncrement_0.setString("4435821");
  msg.set(DerivativeMinPriceIncrement_0);
  DerivativeInstrument_0.insert(DerivativeMinPriceIncrement_0.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_0;
  DerivativeMinPriceIncrementAmount_0.setString("15865055");
  msg.set(DerivativeMinPriceIncrementAmount_0);
  DerivativeInstrument_0.insert(DerivativeMinPriceIncrementAmount_0.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_0(659902086);
  msg.set(DerivativeNTPositionLimit_0);
  DerivativeInstrument_0.insert(DerivativeNTPositionLimit_0.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_0('1');
  msg.set(DerivativeOptAttribute_0);
  DerivativeInstrument_0.insert(DerivativeOptAttribute_0.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_0;
  DerivativeOptPayAmount_0.setString("12252366");
  msg.set(DerivativeOptPayAmount_0);
  DerivativeInstrument_0.insert(DerivativeOptPayAmount_0.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_0(2060486912);
  msg.set(DerivativePositionLimit_0);
  DerivativeInstrument_0.insert(DerivativePositionLimit_0.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_0("STRING_180618779");
  msg.set(DerivativePriceQuoteMethod_0);
  DerivativeInstrument_0.insert(DerivativePriceQuoteMethod_0.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_0("STRING_197235002");
  msg.set(DerivativePriceUnitOfMeasure_0);
  DerivativeInstrument_0.insert(DerivativePriceUnitOfMeasure_0.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_0;
  DerivativePriceUnitOfMeasureQty_0.setString("6957970");
  msg.set(DerivativePriceUnitOfMeasureQty_0);
  DerivativeInstrument_0.insert(DerivativePriceUnitOfMeasureQty_0.getString());
  FIX::DerivativeProduct DerivativeProduct_0(198006831);
  msg.set(DerivativeProduct_0);
  DerivativeInstrument_0.insert(DerivativeProduct_0.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_0("STRING_406876442");
  msg.set(DerivativeProductComplex_0);
  DerivativeInstrument_0.insert(DerivativeProductComplex_0.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_0(809842999);
  msg.set(DerivativePutOrCall_0);
  DerivativeInstrument_0.insert(DerivativePutOrCall_0.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_0("STRING_256885398");
  msg.set(DerivativeSecurityDesc_0);
  DerivativeInstrument_0.insert(DerivativeSecurityDesc_0.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_0("EXCHANGE_1839299982");
  msg.set(DerivativeSecurityExchange_0);
  DerivativeInstrument_0.insert(DerivativeSecurityExchange_0.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_0("STRING_1231990426");
  msg.set(DerivativeSecurityGroup_0);
  DerivativeInstrument_0.insert(DerivativeSecurityGroup_0.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_0("STRING_2120259563");
  msg.set(DerivativeSecurityID_0);
  DerivativeInstrument_0.insert(DerivativeSecurityID_0.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_0("STRING_2013733659");
  msg.set(DerivativeSecurityIDSource_0);
  DerivativeInstrument_0.insert(DerivativeSecurityIDSource_0.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_0("STRING_1267186840");
  msg.set(DerivativeSecurityStatus_0);
  DerivativeInstrument_0.insert(DerivativeSecurityStatus_0.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_0("STRING_314100198");
  msg.set(DerivativeSecuritySubType_0);
  DerivativeInstrument_0.insert(DerivativeSecuritySubType_0.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_0("STRING_1246355520");
  msg.set(DerivativeSecurityType_0);
  DerivativeInstrument_0.insert(DerivativeSecurityType_0.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_0('1');
  msg.set(DerivativeSettlMethod_0);
  DerivativeInstrument_0.insert(DerivativeSettlMethod_0.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_0("STRING_504894827");
  msg.set(DerivativeSettleOnOpenFlag_0);
  DerivativeInstrument_0.insert(DerivativeSettleOnOpenFlag_0.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_0("STRING_1408851418");
  msg.set(DerivativeStateOrProvinceOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeStateOrProvinceOfIssue_0.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_0("CAN");
  msg.set(DerivativeStrikeCurrency_0);
  DerivativeInstrument_0.insert(DerivativeStrikeCurrency_0.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_0;
  DerivativeStrikeMultiplier_0.setString("14444153");
  msg.set(DerivativeStrikeMultiplier_0);
  DerivativeInstrument_0.insert(DerivativeStrikeMultiplier_0.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_0;
  DerivativeStrikePrice_0.setString("15986512");
  msg.set(DerivativeStrikePrice_0);
  DerivativeInstrument_0.insert(DerivativeStrikePrice_0.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_0;
  DerivativeStrikeValue_0.setString("8733500");
  msg.set(DerivativeStrikeValue_0);
  DerivativeInstrument_0.insert(DerivativeStrikeValue_0.getString());
  FIX::DerivativeSymbol DerivativeSymbol_0("STRING_1556845904");
  msg.set(DerivativeSymbol_0);
  DerivativeInstrument_0.insert(DerivativeSymbol_0.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_0("STRING_1885632274");
  msg.set(DerivativeSymbolSfx_0);
  DerivativeInstrument_0.insert(DerivativeSymbolSfx_0.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_0("STRING_752118131");
  msg.set(DerivativeTimeUnit_0);
  DerivativeInstrument_0.insert(DerivativeTimeUnit_0.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_0("STRING_2000428100");
  msg.set(DerivativeUnitOfMeasure_0);
  DerivativeInstrument_0.insert(DerivativeUnitOfMeasure_0.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_0;
  DerivativeUnitOfMeasureQty_0.setString("13246542");
  msg.set(DerivativeUnitOfMeasureQty_0);
  DerivativeInstrument_0.insert(DerivativeUnitOfMeasureQty_0.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_0("STRING_1412020218");
  msg.set(DerivativeValuationMethod_0);
  DerivativeInstrument_0.insert(DerivativeValuationMethod_0.getString());
  all_values.push_back(DerivativeInstrument_0);

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_0;
    FIX::DerivativeEventDate DerivativeEventDate_0("LOCALMKTDATE_402407189");
    noDerivativeEvents_0_0.set(DerivativeEventDate_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventDate_0.getString());
    FIX::DerivativeEventPx DerivativeEventPx_0;
    DerivativeEventPx_0.setString("13250234");
    noDerivativeEvents_0_0.set(DerivativeEventPx_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventPx_0.getString());
    FIX::DerivativeEventText DerivativeEventText_0("STRING_1306155292");
    noDerivativeEvents_0_0.set(DerivativeEventText_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventText_0.getString());
    FIX::DerivativeEventTime DerivativeEventTime_0(FIX::UTCTIMESTAMP(10, 43, 34, 5, 2, 2002));
    noDerivativeEvents_0_0.set(DerivativeEventTime_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventTime_0.getString());
    FIX::DerivativeEventType DerivativeEventType_0(1915170355);
    noDerivativeEvents_0_0.set(DerivativeEventType_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventType_0.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_0);

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_1;
    FIX::DerivativeEventDate DerivativeEventDate_1("LOCALMKTDATE_1733823436");
    noDerivativeEvents_0_1.set(DerivativeEventDate_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventDate_1.getString());
    FIX::DerivativeEventPx DerivativeEventPx_1;
    DerivativeEventPx_1.setString("5645849");
    noDerivativeEvents_0_1.set(DerivativeEventPx_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventPx_1.getString());
    FIX::DerivativeEventText DerivativeEventText_1("STRING_1034873547");
    noDerivativeEvents_0_1.set(DerivativeEventText_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventText_1.getString());
    FIX::DerivativeEventTime DerivativeEventTime_1(FIX::UTCTIMESTAMP(3, 12, 14, 25, 2, 2013));
    noDerivativeEvents_0_1.set(DerivativeEventTime_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventTime_1.getString());
    FIX::DerivativeEventType DerivativeEventType_1(369239998);
    noDerivativeEvents_0_1.set(DerivativeEventType_1);
    DerivativeEventsGrp_NoDerivativeEvents_1.insert(DerivativeEventType_1.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_1);

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_2;
    FIX::DerivativeEventDate DerivativeEventDate_2("LOCALMKTDATE_493028027");
    noDerivativeEvents_0_2.set(DerivativeEventDate_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventDate_2.getString());
    FIX::DerivativeEventPx DerivativeEventPx_2;
    DerivativeEventPx_2.setString("17510526");
    noDerivativeEvents_0_2.set(DerivativeEventPx_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventPx_2.getString());
    FIX::DerivativeEventText DerivativeEventText_2("STRING_1926085902");
    noDerivativeEvents_0_2.set(DerivativeEventText_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventText_2.getString());
    FIX::DerivativeEventTime DerivativeEventTime_2(FIX::UTCTIMESTAMP(23, 54, 30, 25, 4, 2005));
    noDerivativeEvents_0_2.set(DerivativeEventTime_2);
    DerivativeEventsGrp_NoDerivativeEvents_2.insert(DerivativeEventTime_2.getString());
    FIX::DerivativeEventType DerivativeEventType_2(945247228);
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
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_0("STRING_410396603");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyID_0.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_0("STRING_818584158");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyIDSource_0.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_0(1419916987);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyRole_0.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_0("STRING_1501764087");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_0);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0.insert(DerivativeInstrumentPartySubID_0.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_0(1033480860);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_0);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0.insert(DerivativeInstrumentPartySubIDType_0.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0);

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_1("STRING_2115250206");
      noDerivativeInstrumentPartySubIDs_0_1_1.set(DerivativeInstrumentPartySubID_1);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1.insert(DerivativeInstrumentPartySubID_1.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_1(1269450794);
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
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_1("STRING_619820649");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyID_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyID_1.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_1("STRING_532351538");
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyIDSource_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyIDSource_1.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_1(156840694);
    noDerivativeInstrumentParties_0_1.set(DerivativeInstrumentPartyRole_1);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_1.insert(DerivativeInstrumentPartyRole_1.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_2("STRING_195808389");
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubID_2);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2.insert(DerivativeInstrumentPartySubID_2.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_2(480720586);
      noDerivativeInstrumentPartySubIDs_1_1_0.set(DerivativeInstrumentPartySubIDType_2);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2.insert(DerivativeInstrumentPartySubIDType_2.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2);

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_0("STRING_1268116659");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_0);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0.insert(DerivativeSecurityAltID_0.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_0("STRING_1522580988");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_0);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0.insert(DerivativeSecurityAltIDSource_0.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_1("STRING_1803298125");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltID_1);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1.insert(DerivativeSecurityAltID_1.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_1("STRING_1637356657");
    noDerivativeSecurityAltID_0_1.set(DerivativeSecurityAltIDSource_1);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1.insert(DerivativeSecurityAltIDSource_1.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1);

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_2;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_2("STRING_2015609015");
    noDerivativeSecurityAltID_0_2.set(DerivativeSecurityAltID_2);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2.insert(DerivativeSecurityAltID_2.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_2("STRING_1406867169");
    noDerivativeSecurityAltID_0_2.set(DerivativeSecurityAltIDSource_2);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2.insert(DerivativeSecurityAltIDSource_2.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2);

    msg.addGroup(noDerivativeSecurityAltID_0_2);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_0;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_1("DATA_1415958911");
  msg.set(DerivativeSecurityXML_1);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_0(99302020);
  msg.set(DerivativeSecurityXMLLen_0);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_0("STRING_1762554345");
  msg.set(DerivativeSecurityXMLSchema_0);
  DerivativeSecurityXML_0.insert(DerivativeSecurityXMLSchema_0.getString());
  all_values.push_back(DerivativeSecurityXML_0);

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_0(1655132890);
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribType_0);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0.insert(DerivativeInstrAttribType_0.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_0("STRING_1382778090");
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribValue_0);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0.insert(DerivativeInstrAttribValue_0.getString());
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_0;
    FIX::MarketID MarketID_0("EXCHANGE_1465887301");
    noMarketSegments_0_0.set(MarketID_0);
    MarketSegmentGrp_NoMarketSegments_0.insert(MarketID_0.getString());
    FIX::MarketSegmentID MarketSegmentID_0("STRING_180541670");
    noMarketSegments_0_0.set(MarketSegmentID_0);
    MarketSegmentGrp_NoMarketSegments_0.insert(MarketSegmentID_0.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_0);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_0;
    FIX::ExpirationCycle ExpirationCycle_0(0);
    noMarketSegments_0_0.set(ExpirationCycle_0);
    BaseTradingRules_0.insert(ExpirationCycle_0.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_0(1);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_0);
    BaseTradingRules_0.insert(ImpliedMarketIndicator_0.getString());
    FIX::MaxPriceVariation MaxPriceVariation_0;
    MaxPriceVariation_0.setString("9991258");
    noMarketSegments_0_0.set(MaxPriceVariation_0);
    BaseTradingRules_0.insert(MaxPriceVariation_0.getString());
    FIX::MaxTradeVol MaxTradeVol_0;
    MaxTradeVol_0.setString("9927770");
    noMarketSegments_0_0.set(MaxTradeVol_0);
    BaseTradingRules_0.insert(MaxTradeVol_0.getString());
    FIX::MinTradeVol MinTradeVol_0;
    MinTradeVol_0.setString("11457154");
    noMarketSegments_0_0.set(MinTradeVol_0);
    BaseTradingRules_0.insert(MinTradeVol_0.getString());
    FIX::MultilegModel MultilegModel_0(0);
    noMarketSegments_0_0.set(MultilegModel_0);
    BaseTradingRules_0.insert(MultilegModel_0.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_0(0);
    noMarketSegments_0_0.set(MultilegPriceMethod_0);
    BaseTradingRules_0.insert(MultilegPriceMethod_0.getString());
    FIX::PriceType PriceType_13(2);
    noMarketSegments_0_0.set(PriceType_13);
    BaseTradingRules_0.insert(PriceType_13.getString());
    FIX::RoundLot RoundLot_0;
    RoundLot_0.setString("16228570");
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
      FIX::LotType LotType_0('2');
      noLotTypeRules_0_1_0.set(LotType_0);
      LotTypeRules_NoLotTypeRules_0.insert(LotType_0.getString());
      FIX::MinLotSize MinLotSize_0;
      MinLotSize_0.setString("18416419");
      noLotTypeRules_0_1_0.set(MinLotSize_0);
      LotTypeRules_NoLotTypeRules_0.insert(MinLotSize_0.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_0);

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
      MinLotSize_1.setString("19444509");
      noLotTypeRules_0_1_1.set(MinLotSize_1);
      LotTypeRules_NoLotTypeRules_1.insert(MinLotSize_1.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_1);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_0;
    FIX::HighLimitPrice HighLimitPrice_0;
    HighLimitPrice_0.setString("9622749");
    noMarketSegments_0_0.set(HighLimitPrice_0);
    PriceLimits_0.insert(HighLimitPrice_0.getString());
    FIX::LowLimitPrice LowLimitPrice_0;
    LowLimitPrice_0.setString("16355156");
    noMarketSegments_0_0.set(LowLimitPrice_0);
    PriceLimits_0.insert(LowLimitPrice_0.getString());
    FIX::PriceLimitType PriceLimitType_0(1);
    noMarketSegments_0_0.set(PriceLimitType_0);
    PriceLimits_0.insert(PriceLimitType_0.getString());
    FIX::TradingReferencePrice TradingReferencePrice_0;
    TradingReferencePrice_0.setString("4521480");
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
      EndTickPriceRange_0.setString("8596489");
      noTickRules_0_1_0.set(EndTickPriceRange_0);
      TickRules_NoTickRules_0.insert(EndTickPriceRange_0.getString());
      FIX::StartTickPriceRange StartTickPriceRange_0;
      StartTickPriceRange_0.setString("18681069");
      noTickRules_0_1_0.set(StartTickPriceRange_0);
      TickRules_NoTickRules_0.insert(StartTickPriceRange_0.getString());
      FIX::TickIncrement TickIncrement_0;
      TickIncrement_0.setString("16029430");
      noTickRules_0_1_0.set(TickIncrement_0);
      TickRules_NoTickRules_0.insert(TickIncrement_0.getString());
      FIX::TickRuleType TickRuleType_0(3);
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
      FIX::NestedInstrAttribType NestedInstrAttribType_0(1110592311);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_0);
      NestedInstrumentAttribute_NoNestedInstrAttrib_0.insert(NestedInstrAttribType_0.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_0("STRING_1857497773");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_0);
      NestedInstrumentAttribute_NoNestedInstrAttrib_0.insert(NestedInstrAttribValue_0.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_0);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_1;
      FIX::NestedInstrAttribType NestedInstrAttribType_1(425234070);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_1);
      NestedInstrumentAttribute_NoNestedInstrAttrib_1.insert(NestedInstrAttribType_1.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_1("STRING_428995965");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_1);
      NestedInstrumentAttribute_NoNestedInstrAttrib_1.insert(NestedInstrAttribValue_1.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_1);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_0;
      FIX::TradingSessionID TradingSessionID_18("STRING_2");
      noTradingSessionRules_0_1_0.set(TradingSessionID_18);
      TradingSessionRulesGrp_NoTradingSessionRules_0.insert(TradingSessionID_18.getString());
      FIX::TradingSessionSubID TradingSessionSubID_18("STRING_4");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_18);
      TradingSessionRulesGrp_NoTradingSessionRules_0.insert(TradingSessionSubID_18.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_0);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_0;
        FIX::ExecInstValue ExecInstValue_0('9');
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
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_0;
        FIX::MDBookType MDBookType_0(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MDBookType_0.getString());
        FIX::MDFeedType MDFeedType_0("STRING_269510122");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MDFeedType_0.getString());
        FIX::MarketDepth MarketDepth_0(718461306);
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
        FIX::MDFeedType MDFeedType_1("STRING_1915343714");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MDFeedType_1.getString());
        FIX::MarketDepth MarketDepth_1(350675414);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_1);
        MarketDataFeedTypes_NoMDFeedTypes_1.insert(MarketDepth_1.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_1);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_2;
        FIX::MDBookType MDBookType_2(3);
        noMDFeedTypes_0_0_2_2.set(MDBookType_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MDBookType_2.getString());
        FIX::MDFeedType MDFeedType_2("STRING_1609502047");
        noMDFeedTypes_0_0_2_2.set(MDFeedType_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MDFeedType_2.getString());
        FIX::MarketDepth MarketDepth_2(463610108);
        noMDFeedTypes_0_0_2_2.set(MarketDepth_2);
        MarketDataFeedTypes_NoMDFeedTypes_2.insert(MarketDepth_2.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_2);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_0;
        FIX::MatchAlgorithm MatchAlgorithm_0("STRING_424293391");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_0);
        MatchRules_NoMatchRules_0.insert(MatchAlgorithm_0.getString());
        FIX::MatchType MatchType_3("STRING_M4");
        noMatchRules_0_0_2_0.set(MatchType_3);
        MatchRules_NoMatchRules_0.insert(MatchType_3.getString());
        all_values.push_back(MatchRules_NoMatchRules_0);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_0;
        FIX::OrdType OrdType_1('9');
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
        FIX::OrdType OrdType_3('J');
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
      FIX::TradingSessionID TradingSessionID_19("STRING_2");
      noTradingSessionRules_0_1_1.set(TradingSessionID_19);
      TradingSessionRulesGrp_NoTradingSessionRules_1.insert(TradingSessionID_19.getString());
      FIX::TradingSessionSubID TradingSessionSubID_19("STRING_2");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_19);
      TradingSessionRulesGrp_NoTradingSessionRules_1.insert(TradingSessionSubID_19.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_1);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_2;
        FIX::ExecInstValue ExecInstValue_2('5');
        noExecInstRules_0_1_2_0.set(ExecInstValue_2);
        ExecInstRules_NoExecInstRules_2.insert(ExecInstValue_2.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_2);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_3;
        FIX::ExecInstValue ExecInstValue_3('1');
        noExecInstRules_0_1_2_1.set(ExecInstValue_3);
        ExecInstRules_NoExecInstRules_3.insert(ExecInstValue_3.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_3);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_3;
        FIX::MDBookType MDBookType_3(3);
        noMDFeedTypes_0_1_2_0.set(MDBookType_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MDBookType_3.getString());
        FIX::MDFeedType MDFeedType_3("STRING_1788521731");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MDFeedType_3.getString());
        FIX::MarketDepth MarketDepth_3(460643464);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_3);
        MarketDataFeedTypes_NoMDFeedTypes_3.insert(MarketDepth_3.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_3);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_4;
        FIX::MDBookType MDBookType_4(2);
        noMDFeedTypes_0_1_2_1.set(MDBookType_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MDBookType_4.getString());
        FIX::MDFeedType MDFeedType_4("STRING_631909245");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MDFeedType_4.getString());
        FIX::MarketDepth MarketDepth_4(1764155181);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_4);
        MarketDataFeedTypes_NoMDFeedTypes_4.insert(MarketDepth_4.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_4);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_5;
        FIX::MDBookType MDBookType_5(2);
        noMDFeedTypes_0_1_2_2.set(MDBookType_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MDBookType_5.getString());
        FIX::MDFeedType MDFeedType_5("STRING_1501554660");
        noMDFeedTypes_0_1_2_2.set(MDFeedType_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MDFeedType_5.getString());
        FIX::MarketDepth MarketDepth_5(2033665304);
        noMDFeedTypes_0_1_2_2.set(MarketDepth_5);
        MarketDataFeedTypes_NoMDFeedTypes_5.insert(MarketDepth_5.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_5);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_1;
        FIX::MatchAlgorithm MatchAlgorithm_1("STRING_722311327");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_1);
        MatchRules_NoMatchRules_1.insert(MatchAlgorithm_1.getString());
        FIX::MatchType MatchType_4("STRING_M3");
        noMatchRules_0_1_2_0.set(MatchType_4);
        MatchRules_NoMatchRules_1.insert(MatchType_4.getString());
        all_values.push_back(MatchRules_NoMatchRules_1);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_2;
        FIX::MatchAlgorithm MatchAlgorithm_2("STRING_1478722539");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_2);
        MatchRules_NoMatchRules_2.insert(MatchAlgorithm_2.getString());
        FIX::MatchType MatchType_5("STRING_M2");
        noMatchRules_0_1_2_1.set(MatchType_5);
        MatchRules_NoMatchRules_2.insert(MatchType_5.getString());
        all_values.push_back(MatchRules_NoMatchRules_2);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_3;
        FIX::OrdType OrdType_4('Q');
        noOrdTypeRules_0_1_2_0.set(OrdType_4);
        OrdTypeRules_NoOrdTypeRules_3.insert(OrdType_4.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_3);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_4;
        FIX::OrdType OrdType_5('K');
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
        multiset<string> TimeInForceRules_NoTimeInForceRules_1;
        FIX::TimeInForce TimeInForce_2('0');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_2);
        TimeInForceRules_NoTimeInForceRules_1.insert(TimeInForce_2.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_1);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_2;
        FIX::TimeInForce TimeInForce_3('5');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_3);
        TimeInForceRules_NoTimeInForceRules_2.insert(TimeInForce_3.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_2);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_3;
        FIX::TimeInForce TimeInForce_4('4');
        noTimeInForceRules_0_1_2_2.set(TimeInForce_4);
        TimeInForceRules_NoTimeInForceRules_3.insert(TimeInForce_4.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_3);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_0;
      FIX::EndStrikePxRange EndStrikePxRange_0;
      EndStrikePxRange_0.setString("8368747");
      noStrikeRules_0_1_0.set(EndStrikePxRange_0);
      StrikeRules_NoStrikeRules_0.insert(EndStrikePxRange_0.getString());
      FIX::StartStrikePxRange StartStrikePxRange_0;
      StartStrikePxRange_0.setString("10138595");
      noStrikeRules_0_1_0.set(StartStrikePxRange_0);
      StrikeRules_NoStrikeRules_0.insert(StartStrikePxRange_0.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_0(2112516949);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeExerciseStyle_0.getString());
      FIX::StrikeIncrement StrikeIncrement_0;
      StrikeIncrement_0.setString("16606048");
      noStrikeRules_0_1_0.set(StrikeIncrement_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeIncrement_0.getString());
      FIX::StrikeRuleID StrikeRuleID_0("STRING_231569449");
      noStrikeRules_0_1_0.set(StrikeRuleID_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeRuleID_0.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_0);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_0;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_0("MONTHYEAR_46865317");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_0);
        MaturityRules_NoMaturityRules_0.insert(EndMaturityMonthYear_0.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_0(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearFormat_0.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_0(141731821);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearIncrement_0.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_0(3);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearIncrementUnits_0.getString());
        FIX::MaturityRuleID MaturityRuleID_0("STRING_1663035140");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityRuleID_0.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_0("MONTHYEAR_602375285");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_0);
        MaturityRules_NoMaturityRules_0.insert(StartMaturityMonthYear_0.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_0);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_1;
    FIX::MarketID MarketID_1("EXCHANGE_1785146842");
    noMarketSegments_0_1.set(MarketID_1);
    MarketSegmentGrp_NoMarketSegments_1.insert(MarketID_1.getString());
    FIX::MarketSegmentID MarketSegmentID_1("STRING_147460738");
    noMarketSegments_0_1.set(MarketSegmentID_1);
    MarketSegmentGrp_NoMarketSegments_1.insert(MarketSegmentID_1.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_1);

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
    MaxPriceVariation_1.setString("16490153");
    noMarketSegments_0_1.set(MaxPriceVariation_1);
    BaseTradingRules_1.insert(MaxPriceVariation_1.getString());
    FIX::MaxTradeVol MaxTradeVol_1;
    MaxTradeVol_1.setString("1052284");
    noMarketSegments_0_1.set(MaxTradeVol_1);
    BaseTradingRules_1.insert(MaxTradeVol_1.getString());
    FIX::MinTradeVol MinTradeVol_1;
    MinTradeVol_1.setString("11752961");
    noMarketSegments_0_1.set(MinTradeVol_1);
    BaseTradingRules_1.insert(MinTradeVol_1.getString());
    FIX::MultilegModel MultilegModel_1(0);
    noMarketSegments_0_1.set(MultilegModel_1);
    BaseTradingRules_1.insert(MultilegModel_1.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_1(3);
    noMarketSegments_0_1.set(MultilegPriceMethod_1);
    BaseTradingRules_1.insert(MultilegPriceMethod_1.getString());
    FIX::PriceType PriceType_14(19);
    noMarketSegments_0_1.set(PriceType_14);
    BaseTradingRules_1.insert(PriceType_14.getString());
    FIX::RoundLot RoundLot_1;
    RoundLot_1.setString("11857666");
    noMarketSegments_0_1.set(RoundLot_1);
    BaseTradingRules_1.insert(RoundLot_1.getString());
    FIX::TradingCurrency TradingCurrency_1("CHF");
    noMarketSegments_0_1.set(TradingCurrency_1);
    BaseTradingRules_1.insert(TradingCurrency_1.getString());
    all_values.push_back(BaseTradingRules_1);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_2;
      FIX::LotType LotType_2('3');
      noLotTypeRules_1_1_0.set(LotType_2);
      LotTypeRules_NoLotTypeRules_2.insert(LotType_2.getString());
      FIX::MinLotSize MinLotSize_2;
      MinLotSize_2.setString("478751");
      noLotTypeRules_1_1_0.set(MinLotSize_2);
      LotTypeRules_NoLotTypeRules_2.insert(MinLotSize_2.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_2);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_3;
      FIX::LotType LotType_3('1');
      noLotTypeRules_1_1_1.set(LotType_3);
      LotTypeRules_NoLotTypeRules_3.insert(LotType_3.getString());
      FIX::MinLotSize MinLotSize_3;
      MinLotSize_3.setString("9799623");
      noLotTypeRules_1_1_1.set(MinLotSize_3);
      LotTypeRules_NoLotTypeRules_3.insert(MinLotSize_3.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_3);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_1;
    FIX::HighLimitPrice HighLimitPrice_1;
    HighLimitPrice_1.setString("12496495");
    noMarketSegments_0_1.set(HighLimitPrice_1);
    PriceLimits_1.insert(HighLimitPrice_1.getString());
    FIX::LowLimitPrice LowLimitPrice_1;
    LowLimitPrice_1.setString("13615252");
    noMarketSegments_0_1.set(LowLimitPrice_1);
    PriceLimits_1.insert(LowLimitPrice_1.getString());
    FIX::PriceLimitType PriceLimitType_1(0);
    noMarketSegments_0_1.set(PriceLimitType_1);
    PriceLimits_1.insert(PriceLimitType_1.getString());
    FIX::TradingReferencePrice TradingReferencePrice_1;
    TradingReferencePrice_1.setString("12146828");
    noMarketSegments_0_1.set(TradingReferencePrice_1);
    PriceLimits_1.insert(TradingReferencePrice_1.getString());
    all_values.push_back(PriceLimits_1);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_1;
      FIX::EndTickPriceRange EndTickPriceRange_1;
      EndTickPriceRange_1.setString("779077");
      noTickRules_1_1_0.set(EndTickPriceRange_1);
      TickRules_NoTickRules_1.insert(EndTickPriceRange_1.getString());
      FIX::StartTickPriceRange StartTickPriceRange_1;
      StartTickPriceRange_1.setString("10535673");
      noTickRules_1_1_0.set(StartTickPriceRange_1);
      TickRules_NoTickRules_1.insert(StartTickPriceRange_1.getString());
      FIX::TickIncrement TickIncrement_1;
      TickIncrement_1.setString("9215117");
      noTickRules_1_1_0.set(TickIncrement_1);
      TickRules_NoTickRules_1.insert(TickIncrement_1.getString());
      FIX::TickRuleType TickRuleType_1(1);
      noTickRules_1_1_0.set(TickRuleType_1);
      TickRules_NoTickRules_1.insert(TickRuleType_1.getString());
      all_values.push_back(TickRules_NoTickRules_1);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_2;
      FIX::EndTickPriceRange EndTickPriceRange_2;
      EndTickPriceRange_2.setString("11952992");
      noTickRules_1_1_1.set(EndTickPriceRange_2);
      TickRules_NoTickRules_2.insert(EndTickPriceRange_2.getString());
      FIX::StartTickPriceRange StartTickPriceRange_2;
      StartTickPriceRange_2.setString("13926770");
      noTickRules_1_1_1.set(StartTickPriceRange_2);
      TickRules_NoTickRules_2.insert(StartTickPriceRange_2.getString());
      FIX::TickIncrement TickIncrement_2;
      TickIncrement_2.setString("16154562");
      noTickRules_1_1_1.set(TickIncrement_2);
      TickRules_NoTickRules_2.insert(TickIncrement_2.getString());
      FIX::TickRuleType TickRuleType_2(2);
      noTickRules_1_1_1.set(TickRuleType_2);
      TickRules_NoTickRules_2.insert(TickRuleType_2.getString());
      all_values.push_back(TickRules_NoTickRules_2);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_2;
      FIX::NestedInstrAttribType NestedInstrAttribType_2(1762917031);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_2);
      NestedInstrumentAttribute_NoNestedInstrAttrib_2.insert(NestedInstrAttribType_2.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_2("STRING_2016721311");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_2);
      NestedInstrumentAttribute_NoNestedInstrAttrib_2.insert(NestedInstrAttribValue_2.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_2);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_3;
      FIX::NestedInstrAttribType NestedInstrAttribType_3(1077589209);
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribType_3);
      NestedInstrumentAttribute_NoNestedInstrAttrib_3.insert(NestedInstrAttribType_3.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_3("STRING_1264448781");
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribValue_3);
      NestedInstrumentAttribute_NoNestedInstrAttrib_3.insert(NestedInstrAttribValue_3.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_3);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_4;
      FIX::NestedInstrAttribType NestedInstrAttribType_4(2121949786);
      noNestedInstrAttrib_1_1_2.set(NestedInstrAttribType_4);
      NestedInstrumentAttribute_NoNestedInstrAttrib_4.insert(NestedInstrAttribType_4.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_4("STRING_105401699");
      noNestedInstrAttrib_1_1_2.set(NestedInstrAttribValue_4);
      NestedInstrumentAttribute_NoNestedInstrAttrib_4.insert(NestedInstrAttribValue_4.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_4);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_2;
      FIX::TradingSessionID TradingSessionID_20("STRING_6");
      noTradingSessionRules_1_1_0.set(TradingSessionID_20);
      TradingSessionRulesGrp_NoTradingSessionRules_2.insert(TradingSessionID_20.getString());
      FIX::TradingSessionSubID TradingSessionSubID_20("STRING_6");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_20);
      TradingSessionRulesGrp_NoTradingSessionRules_2.insert(TradingSessionSubID_20.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_2);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_4;
        FIX::ExecInstValue ExecInstValue_4('7');
        noExecInstRules_1_0_2_0.set(ExecInstValue_4);
        ExecInstRules_NoExecInstRules_4.insert(ExecInstValue_4.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_4);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_6;
        FIX::MDBookType MDBookType_6(2);
        noMDFeedTypes_1_0_2_0.set(MDBookType_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MDBookType_6.getString());
        FIX::MDFeedType MDFeedType_6("STRING_1319717779");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MDFeedType_6.getString());
        FIX::MarketDepth MarketDepth_6(961195929);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_6);
        MarketDataFeedTypes_NoMDFeedTypes_6.insert(MarketDepth_6.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_6);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_7;
        FIX::MDBookType MDBookType_7(2);
        noMDFeedTypes_1_0_2_1.set(MDBookType_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MDBookType_7.getString());
        FIX::MDFeedType MDFeedType_7("STRING_152196513");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MDFeedType_7.getString());
        FIX::MarketDepth MarketDepth_7(63361788);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_7);
        MarketDataFeedTypes_NoMDFeedTypes_7.insert(MarketDepth_7.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_7);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_8;
        FIX::MDBookType MDBookType_8(1);
        noMDFeedTypes_1_0_2_2.set(MDBookType_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MDBookType_8.getString());
        FIX::MDFeedType MDFeedType_8("STRING_2146018455");
        noMDFeedTypes_1_0_2_2.set(MDFeedType_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MDFeedType_8.getString());
        FIX::MarketDepth MarketDepth_8(1278044595);
        noMDFeedTypes_1_0_2_2.set(MarketDepth_8);
        MarketDataFeedTypes_NoMDFeedTypes_8.insert(MarketDepth_8.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_8);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_3;
        FIX::MatchAlgorithm MatchAlgorithm_3("STRING_76442551");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_3);
        MatchRules_NoMatchRules_3.insert(MatchAlgorithm_3.getString());
        FIX::MatchType MatchType_6("STRING_MT");
        noMatchRules_1_0_2_0.set(MatchType_6);
        MatchRules_NoMatchRules_3.insert(MatchType_6.getString());
        all_values.push_back(MatchRules_NoMatchRules_3);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_4;
        FIX::MatchAlgorithm MatchAlgorithm_4("STRING_2098211086");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_4);
        MatchRules_NoMatchRules_4.insert(MatchAlgorithm_4.getString());
        FIX::MatchType MatchType_7("STRING_A1");
        noMatchRules_1_0_2_1.set(MatchType_7);
        MatchRules_NoMatchRules_4.insert(MatchType_7.getString());
        all_values.push_back(MatchRules_NoMatchRules_4);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_5;
        FIX::OrdType OrdType_6('Q');
        noOrdTypeRules_1_0_2_0.set(OrdType_6);
        OrdTypeRules_NoOrdTypeRules_5.insert(OrdType_6.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_5);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_4;
        FIX::TimeInForce TimeInForce_5('5');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_5);
        TimeInForceRules_NoTimeInForceRules_4.insert(TimeInForce_5.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_4);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_5;
        FIX::TimeInForce TimeInForce_6('6');
        noTimeInForceRules_1_0_2_1.set(TimeInForce_6);
        TimeInForceRules_NoTimeInForceRules_5.insert(TimeInForce_6.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_5);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_6;
        FIX::TimeInForce TimeInForce_7('1');
        noTimeInForceRules_1_0_2_2.set(TimeInForce_7);
        TimeInForceRules_NoTimeInForceRules_6.insert(TimeInForce_7.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_6);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_2);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_3;
      FIX::TradingSessionID TradingSessionID_21("STRING_3");
      noTradingSessionRules_1_1_1.set(TradingSessionID_21);
      TradingSessionRulesGrp_NoTradingSessionRules_3.insert(TradingSessionID_21.getString());
      FIX::TradingSessionSubID TradingSessionSubID_21("STRING_5");
      noTradingSessionRules_1_1_1.set(TradingSessionSubID_21);
      TradingSessionRulesGrp_NoTradingSessionRules_3.insert(TradingSessionSubID_21.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_3);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_5;
        FIX::ExecInstValue ExecInstValue_5('8');
        noExecInstRules_1_1_2_0.set(ExecInstValue_5);
        ExecInstRules_NoExecInstRules_5.insert(ExecInstValue_5.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_5);

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_9;
        FIX::MDBookType MDBookType_9(2);
        noMDFeedTypes_1_1_2_0.set(MDBookType_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MDBookType_9.getString());
        FIX::MDFeedType MDFeedType_9("STRING_607058522");
        noMDFeedTypes_1_1_2_0.set(MDFeedType_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MDFeedType_9.getString());
        FIX::MarketDepth MarketDepth_9(2021188624);
        noMDFeedTypes_1_1_2_0.set(MarketDepth_9);
        MarketDataFeedTypes_NoMDFeedTypes_9.insert(MarketDepth_9.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_9);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_10;
        FIX::MDBookType MDBookType_10(1);
        noMDFeedTypes_1_1_2_1.set(MDBookType_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MDBookType_10.getString());
        FIX::MDFeedType MDFeedType_10("STRING_1363608824");
        noMDFeedTypes_1_1_2_1.set(MDFeedType_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MDFeedType_10.getString());
        FIX::MarketDepth MarketDepth_10(787025734);
        noMDFeedTypes_1_1_2_1.set(MarketDepth_10);
        MarketDataFeedTypes_NoMDFeedTypes_10.insert(MarketDepth_10.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_10);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_11;
        FIX::MDBookType MDBookType_11(2);
        noMDFeedTypes_1_1_2_2.set(MDBookType_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MDBookType_11.getString());
        FIX::MDFeedType MDFeedType_11("STRING_535842955");
        noMDFeedTypes_1_1_2_2.set(MDFeedType_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MDFeedType_11.getString());
        FIX::MarketDepth MarketDepth_11(1748221663);
        noMDFeedTypes_1_1_2_2.set(MarketDepth_11);
        MarketDataFeedTypes_NoMDFeedTypes_11.insert(MarketDepth_11.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_11);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_5;
        FIX::MatchAlgorithm MatchAlgorithm_5("STRING_688039469");
        noMatchRules_1_1_2_0.set(MatchAlgorithm_5);
        MatchRules_NoMatchRules_5.insert(MatchAlgorithm_5.getString());
        FIX::MatchType MatchType_8("STRING_A4");
        noMatchRules_1_1_2_0.set(MatchType_8);
        MatchRules_NoMatchRules_5.insert(MatchType_8.getString());
        all_values.push_back(MatchRules_NoMatchRules_5);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_6;
        FIX::MatchAlgorithm MatchAlgorithm_6("STRING_50043021");
        noMatchRules_1_1_2_1.set(MatchAlgorithm_6);
        MatchRules_NoMatchRules_6.insert(MatchAlgorithm_6.getString());
        FIX::MatchType MatchType_9("STRING_M2");
        noMatchRules_1_1_2_1.set(MatchType_9);
        MatchRules_NoMatchRules_6.insert(MatchType_9.getString());
        all_values.push_back(MatchRules_NoMatchRules_6);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_7;
        FIX::MatchAlgorithm MatchAlgorithm_7("STRING_942144399");
        noMatchRules_1_1_2_2.set(MatchAlgorithm_7);
        MatchRules_NoMatchRules_7.insert(MatchAlgorithm_7.getString());
        FIX::MatchType MatchType_10("STRING_1");
        noMatchRules_1_1_2_2.set(MatchType_10);
        MatchRules_NoMatchRules_7.insert(MatchType_10.getString());
        all_values.push_back(MatchRules_NoMatchRules_7);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_6;
        FIX::OrdType OrdType_7('D');
        noOrdTypeRules_1_1_2_0.set(OrdType_7);
        OrdTypeRules_NoOrdTypeRules_6.insert(OrdType_7.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_6);

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_7;
        FIX::OrdType OrdType_8('5');
        noOrdTypeRules_1_1_2_1.set(OrdType_8);
        OrdTypeRules_NoOrdTypeRules_7.insert(OrdType_8.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_7);

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_7;
        FIX::TimeInForce TimeInForce_8('5');
        noTimeInForceRules_1_1_2_0.set(TimeInForce_8);
        TimeInForceRules_NoTimeInForceRules_7.insert(TimeInForce_8.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_7);

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_1;
      FIX::EndStrikePxRange EndStrikePxRange_1;
      EndStrikePxRange_1.setString("2887168");
      noStrikeRules_1_1_0.set(EndStrikePxRange_1);
      StrikeRules_NoStrikeRules_1.insert(EndStrikePxRange_1.getString());
      FIX::StartStrikePxRange StartStrikePxRange_1;
      StartStrikePxRange_1.setString("13878350");
      noStrikeRules_1_1_0.set(StartStrikePxRange_1);
      StrikeRules_NoStrikeRules_1.insert(StartStrikePxRange_1.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_1(599651589);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeExerciseStyle_1.getString());
      FIX::StrikeIncrement StrikeIncrement_1;
      StrikeIncrement_1.setString("15484702");
      noStrikeRules_1_1_0.set(StrikeIncrement_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeIncrement_1.getString());
      FIX::StrikeRuleID StrikeRuleID_1("STRING_139207410");
      noStrikeRules_1_1_0.set(StrikeRuleID_1);
      StrikeRules_NoStrikeRules_1.insert(StrikeRuleID_1.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_1);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_1;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_1("MONTHYEAR_1925188776");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_1);
        MaturityRules_NoMaturityRules_1.insert(EndMaturityMonthYear_1.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_1(2);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearFormat_1.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_1(1165270032);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearIncrement_1.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_1(2);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityMonthYearIncrementUnits_1.getString());
        FIX::MaturityRuleID MaturityRuleID_1("STRING_1619588120");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_1);
        MaturityRules_NoMaturityRules_1.insert(MaturityRuleID_1.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_1("MONTHYEAR_1038975008");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_1);
        MaturityRules_NoMaturityRules_1.insert(StartMaturityMonthYear_1.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_1);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_2;
      FIX::EndStrikePxRange EndStrikePxRange_2;
      EndStrikePxRange_2.setString("18868170");
      noStrikeRules_1_1_1.set(EndStrikePxRange_2);
      StrikeRules_NoStrikeRules_2.insert(EndStrikePxRange_2.getString());
      FIX::StartStrikePxRange StartStrikePxRange_2;
      StartStrikePxRange_2.setString("8357132");
      noStrikeRules_1_1_1.set(StartStrikePxRange_2);
      StrikeRules_NoStrikeRules_2.insert(StartStrikePxRange_2.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_2(1826000742);
      noStrikeRules_1_1_1.set(StrikeExerciseStyle_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeExerciseStyle_2.getString());
      FIX::StrikeIncrement StrikeIncrement_2;
      StrikeIncrement_2.setString("5467958");
      noStrikeRules_1_1_1.set(StrikeIncrement_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeIncrement_2.getString());
      FIX::StrikeRuleID StrikeRuleID_2("STRING_1371556251");
      noStrikeRules_1_1_1.set(StrikeRuleID_2);
      StrikeRules_NoStrikeRules_2.insert(StrikeRuleID_2.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_2);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_2;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_2("MONTHYEAR_294785889");
        noMaturityRules_1_1_2_0.set(EndMaturityMonthYear_2);
        MaturityRules_NoMaturityRules_2.insert(EndMaturityMonthYear_2.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_2(2);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearFormat_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearFormat_2.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_2(1090838561);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearIncrement_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearIncrement_2.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_2(2);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearIncrementUnits_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityMonthYearIncrementUnits_2.getString());
        FIX::MaturityRuleID MaturityRuleID_2("STRING_598686349");
        noMaturityRules_1_1_2_0.set(MaturityRuleID_2);
        MaturityRules_NoMaturityRules_2.insert(MaturityRuleID_2.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_2("MONTHYEAR_2032982960");
        noMaturityRules_1_1_2_0.set(StartMaturityMonthYear_2);
        MaturityRules_NoMaturityRules_2.insert(StartMaturityMonthYear_2.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_2);

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_3;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_3("MONTHYEAR_1571571284");
        noMaturityRules_1_1_2_1.set(EndMaturityMonthYear_3);
        MaturityRules_NoMaturityRules_3.insert(EndMaturityMonthYear_3.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_3(2);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearFormat_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearFormat_3.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_3(1011772044);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearIncrement_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearIncrement_3.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_3(0);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearIncrementUnits_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityMonthYearIncrementUnits_3.getString());
        FIX::MaturityRuleID MaturityRuleID_3("STRING_6100060");
        noMaturityRules_1_1_2_1.set(MaturityRuleID_3);
        MaturityRules_NoMaturityRules_3.insert(MaturityRuleID_3.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_3("MONTHYEAR_1369988669");
        noMaturityRules_1_1_2_1.set(StartMaturityMonthYear_3);
        MaturityRules_NoMaturityRules_3.insert(StartMaturityMonthYear_3.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_3);

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_4;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_4("MONTHYEAR_974948051");
        noMaturityRules_1_1_2_2.set(EndMaturityMonthYear_4);
        MaturityRules_NoMaturityRules_4.insert(EndMaturityMonthYear_4.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_4(2);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearFormat_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearFormat_4.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_4(610340031);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearIncrement_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearIncrement_4.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_4(1);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearIncrementUnits_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityMonthYearIncrementUnits_4.getString());
        FIX::MaturityRuleID MaturityRuleID_4("STRING_1843287203");
        noMaturityRules_1_1_2_2.set(MaturityRuleID_4);
        MaturityRules_NoMaturityRules_4.insert(MaturityRuleID_4.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_4("MONTHYEAR_749547442");
        noMaturityRules_1_1_2_2.set(StartMaturityMonthYear_4);
        MaturityRules_NoMaturityRules_4.insert(StartMaturityMonthYear_4.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_4);

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_2);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_1);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  // RelSymDerivSecGrp
  // Group RelSymDerivSecGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_0;
    FIX::CorporateAction CorporateAction_0("MULTIPLECHARVALUE_K");
    noRelatedSym_0_0.set(CorporateAction_0);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(CorporateAction_0.getString());
    FIX::Currency Currency_14("GBP");
    noRelatedSym_0_0.set(Currency_14);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(Currency_14.getString());
    FIX::EncodedText EncodedText_30("DATA_1116224185");
    noRelatedSym_0_0.set(EncodedText_30);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(EncodedText_30.getString());
    FIX::EncodedTextLen EncodedTextLen_30(1234181511);
    noRelatedSym_0_0.set(EncodedTextLen_30);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(EncodedTextLen_30.getString());
    FIX::RelSymTransactTime RelSymTransactTime_0(FIX::UTCTIMESTAMP(17, 47, 44, 17, 8, 2005));
    noRelatedSym_0_0.set(RelSymTransactTime_0);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(RelSymTransactTime_0.getString());
    FIX::Text Text_30("STRING_1697139278");
    noRelatedSym_0_0.set(Text_30);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(Text_30.getString());
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_27;
      FIX::EncodedLegIssuer EncodedLegIssuer_27("DATA_1435989934");
      noLegs_0_1_0.set(EncodedLegIssuer_27);
      InstrumentLeg_27.insert(EncodedLegIssuer_27.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_27(2041968188);
      noLegs_0_1_0.set(EncodedLegIssuerLen_27);
      InstrumentLeg_27.insert(EncodedLegIssuerLen_27.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_27("DATA_1804765832");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_27);
      InstrumentLeg_27.insert(EncodedLegSecurityDesc_27.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_27(1321489246);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_27);
      InstrumentLeg_27.insert(EncodedLegSecurityDescLen_27.getString());
      FIX::LegCFICode LegCFICode_27("STRING_1466055825");
      noLegs_0_1_0.set(LegCFICode_27);
      InstrumentLeg_27.insert(LegCFICode_27.getString());
      FIX::LegContractMultiplier LegContractMultiplier_27;
      LegContractMultiplier_27.setString("10189853");
      noLegs_0_1_0.set(LegContractMultiplier_27);
      InstrumentLeg_27.insert(LegContractMultiplier_27.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_27(185777643);
      noLegs_0_1_0.set(LegContractMultiplierUnit_27);
      InstrumentLeg_27.insert(LegContractMultiplierUnit_27.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_27("MONTHYEAR_2067613273");
      noLegs_0_1_0.set(LegContractSettlMonth_27);
      InstrumentLeg_27.insert(LegContractSettlMonth_27.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_27("COUNTRY_1025085421");
      noLegs_0_1_0.set(LegCountryOfIssue_27);
      InstrumentLeg_27.insert(LegCountryOfIssue_27.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_27("LOCALMKTDATE_1555766312");
      noLegs_0_1_0.set(LegCouponPaymentDate_27);
      InstrumentLeg_27.insert(LegCouponPaymentDate_27.getString());
      FIX::LegCouponRate LegCouponRate_27;
      LegCouponRate_27.setString("76.770000");
      noLegs_0_1_0.set(LegCouponRate_27);
      InstrumentLeg_27.insert(LegCouponRate_27.getString());
      FIX::LegCreditRating LegCreditRating_27("STRING_1319902362");
      noLegs_0_1_0.set(LegCreditRating_27);
      InstrumentLeg_27.insert(LegCreditRating_27.getString());
      FIX::LegCurrency LegCurrency_27("USD");
      noLegs_0_1_0.set(LegCurrency_27);
      InstrumentLeg_27.insert(LegCurrency_27.getString());
      FIX::LegDatedDate LegDatedDate_27("LOCALMKTDATE_1015705917");
      noLegs_0_1_0.set(LegDatedDate_27);
      InstrumentLeg_27.insert(LegDatedDate_27.getString());
      FIX::LegExerciseStyle LegExerciseStyle_27(768170138);
      noLegs_0_1_0.set(LegExerciseStyle_27);
      InstrumentLeg_27.insert(LegExerciseStyle_27.getString());
      FIX::LegFactor LegFactor_27;
      LegFactor_27.setString("16528114");
      noLegs_0_1_0.set(LegFactor_27);
      InstrumentLeg_27.insert(LegFactor_27.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_27(489214600);
      noLegs_0_1_0.set(LegFlowScheduleType_27);
      InstrumentLeg_27.insert(LegFlowScheduleType_27.getString());
      FIX::LegInstrRegistry LegInstrRegistry_27("STRING_382763529");
      noLegs_0_1_0.set(LegInstrRegistry_27);
      InstrumentLeg_27.insert(LegInstrRegistry_27.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_27("LOCALMKTDATE_2001215610");
      noLegs_0_1_0.set(LegInterestAccrualDate_27);
      InstrumentLeg_27.insert(LegInterestAccrualDate_27.getString());
      FIX::LegIssueDate LegIssueDate_27("LOCALMKTDATE_1605438786");
      noLegs_0_1_0.set(LegIssueDate_27);
      InstrumentLeg_27.insert(LegIssueDate_27.getString());
      FIX::LegIssuer LegIssuer_27("STRING_1616945041");
      noLegs_0_1_0.set(LegIssuer_27);
      InstrumentLeg_27.insert(LegIssuer_27.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_27("STRING_1241111132");
      noLegs_0_1_0.set(LegLocaleOfIssue_27);
      InstrumentLeg_27.insert(LegLocaleOfIssue_27.getString());
      FIX::LegMaturityDate LegMaturityDate_27("LOCALMKTDATE_313512723");
      noLegs_0_1_0.set(LegMaturityDate_27);
      InstrumentLeg_27.insert(LegMaturityDate_27.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_27("MONTHYEAR_1539356200");
      noLegs_0_1_0.set(LegMaturityMonthYear_27);
      InstrumentLeg_27.insert(LegMaturityMonthYear_27.getString());
      FIX::LegMaturityTime LegMaturityTime_27("TZTIMEONLY_159523748");
      noLegs_0_1_0.set(LegMaturityTime_27);
      InstrumentLeg_27.insert(LegMaturityTime_27.getString());
      FIX::LegOptAttribute LegOptAttribute_27('1');
      noLegs_0_1_0.set(LegOptAttribute_27);
      InstrumentLeg_27.insert(LegOptAttribute_27.getString());
      FIX::LegOptionRatio LegOptionRatio_27;
      LegOptionRatio_27.setString("6858399");
      noLegs_0_1_0.set(LegOptionRatio_27);
      InstrumentLeg_27.insert(LegOptionRatio_27.getString());
      FIX::LegPool LegPool_27("STRING_504675121");
      noLegs_0_1_0.set(LegPool_27);
      InstrumentLeg_27.insert(LegPool_27.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_27("STRING_1265521742");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_27);
      InstrumentLeg_27.insert(LegPriceUnitOfMeasure_27.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_27;
      LegPriceUnitOfMeasureQty_27.setString("18919194");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_27);
      InstrumentLeg_27.insert(LegPriceUnitOfMeasureQty_27.getString());
      FIX::LegProduct LegProduct_27(1940665056);
      noLegs_0_1_0.set(LegProduct_27);
      InstrumentLeg_27.insert(LegProduct_27.getString());
      FIX::LegPutOrCall LegPutOrCall_27(1160006283);
      noLegs_0_1_0.set(LegPutOrCall_27);
      InstrumentLeg_27.insert(LegPutOrCall_27.getString());
      FIX::LegRatioQty LegRatioQty_27;
      LegRatioQty_27.setString("15492016");
      noLegs_0_1_0.set(LegRatioQty_27);
      InstrumentLeg_27.insert(LegRatioQty_27.getString());
      FIX::LegRedemptionDate LegRedemptionDate_27("LOCALMKTDATE_1114670654");
      noLegs_0_1_0.set(LegRedemptionDate_27);
      InstrumentLeg_27.insert(LegRedemptionDate_27.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_27("STRING_478578460");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_27);
      InstrumentLeg_27.insert(LegRepoCollateralSecurityType_27.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_27;
      LegRepurchaseRate_27.setString("33.440000");
      noLegs_0_1_0.set(LegRepurchaseRate_27);
      InstrumentLeg_27.insert(LegRepurchaseRate_27.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_27(1300448297);
      noLegs_0_1_0.set(LegRepurchaseTerm_27);
      InstrumentLeg_27.insert(LegRepurchaseTerm_27.getString());
      FIX::LegSecurityDesc LegSecurityDesc_27("STRING_398708085");
      noLegs_0_1_0.set(LegSecurityDesc_27);
      InstrumentLeg_27.insert(LegSecurityDesc_27.getString());
      FIX::LegSecurityExchange LegSecurityExchange_27("EXCHANGE_1445788765");
      noLegs_0_1_0.set(LegSecurityExchange_27);
      InstrumentLeg_27.insert(LegSecurityExchange_27.getString());
      FIX::LegSecurityID LegSecurityID_27("STRING_708730962");
      noLegs_0_1_0.set(LegSecurityID_27);
      InstrumentLeg_27.insert(LegSecurityID_27.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_27("STRING_1293785762");
      noLegs_0_1_0.set(LegSecurityIDSource_27);
      InstrumentLeg_27.insert(LegSecurityIDSource_27.getString());
      FIX::LegSecuritySubType LegSecuritySubType_27("STRING_618207479");
      noLegs_0_1_0.set(LegSecuritySubType_27);
      InstrumentLeg_27.insert(LegSecuritySubType_27.getString());
      FIX::LegSecurityType LegSecurityType_27("STRING_727353658");
      noLegs_0_1_0.set(LegSecurityType_27);
      InstrumentLeg_27.insert(LegSecurityType_27.getString());
      FIX::LegSide LegSide_27('1');
      noLegs_0_1_0.set(LegSide_27);
      InstrumentLeg_27.insert(LegSide_27.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_27("STRING_1633913396");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_27);
      InstrumentLeg_27.insert(LegStateOrProvinceOfIssue_27.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_27("JPY");
      noLegs_0_1_0.set(LegStrikeCurrency_27);
      InstrumentLeg_27.insert(LegStrikeCurrency_27.getString());
      FIX::LegStrikePrice LegStrikePrice_27;
      LegStrikePrice_27.setString("21231279");
      noLegs_0_1_0.set(LegStrikePrice_27);
      InstrumentLeg_27.insert(LegStrikePrice_27.getString());
      FIX::LegSymbol LegSymbol_27("STRING_1878287325");
      noLegs_0_1_0.set(LegSymbol_27);
      InstrumentLeg_27.insert(LegSymbol_27.getString());
      FIX::LegSymbolSfx LegSymbolSfx_27("STRING_975039194");
      noLegs_0_1_0.set(LegSymbolSfx_27);
      InstrumentLeg_27.insert(LegSymbolSfx_27.getString());
      FIX::LegTimeUnit LegTimeUnit_27("STRING_1581083135");
      noLegs_0_1_0.set(LegTimeUnit_27);
      InstrumentLeg_27.insert(LegTimeUnit_27.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_27("STRING_1347748718");
      noLegs_0_1_0.set(LegUnitOfMeasure_27);
      InstrumentLeg_27.insert(LegUnitOfMeasure_27.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_27;
      LegUnitOfMeasureQty_27.setString("686666");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_27);
      InstrumentLeg_27.insert(LegUnitOfMeasureQty_27.getString());
      all_values.push_back(InstrumentLeg_27);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_62;
        FIX::LegSecurityAltID LegSecurityAltID_62("STRING_739621271");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_62);
        LegSecAltIDGrp_NoLegSecurityAltID_62.insert(LegSecurityAltID_62.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_62("STRING_228190426");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_62);
        LegSecAltIDGrp_NoLegSecurityAltID_62.insert(LegSecurityAltIDSource_62.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_62);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_63;
        FIX::LegSecurityAltID LegSecurityAltID_63("STRING_1462978323");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_63);
        LegSecAltIDGrp_NoLegSecurityAltID_63.insert(LegSecurityAltID_63.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_63("STRING_1425461234");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_63);
        LegSecAltIDGrp_NoLegSecurityAltID_63.insert(LegSecurityAltIDSource_63.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_63);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_64;
        FIX::LegSecurityAltID LegSecurityAltID_64("STRING_732865548");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltID_64);
        LegSecAltIDGrp_NoLegSecurityAltID_64.insert(LegSecurityAltID_64.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_64("STRING_581016417");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltIDSource_64);
        LegSecAltIDGrp_NoLegSecurityAltID_64.insert(LegSecurityAltIDSource_64.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_64);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_28;
      FIX::EncodedLegIssuer EncodedLegIssuer_28("DATA_1169897033");
      noLegs_0_1_1.set(EncodedLegIssuer_28);
      InstrumentLeg_28.insert(EncodedLegIssuer_28.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_28(526046956);
      noLegs_0_1_1.set(EncodedLegIssuerLen_28);
      InstrumentLeg_28.insert(EncodedLegIssuerLen_28.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_28("DATA_1741022700");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_28);
      InstrumentLeg_28.insert(EncodedLegSecurityDesc_28.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_28(571615017);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_28);
      InstrumentLeg_28.insert(EncodedLegSecurityDescLen_28.getString());
      FIX::LegCFICode LegCFICode_28("STRING_1640717610");
      noLegs_0_1_1.set(LegCFICode_28);
      InstrumentLeg_28.insert(LegCFICode_28.getString());
      FIX::LegContractMultiplier LegContractMultiplier_28;
      LegContractMultiplier_28.setString("721175");
      noLegs_0_1_1.set(LegContractMultiplier_28);
      InstrumentLeg_28.insert(LegContractMultiplier_28.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_28(992318361);
      noLegs_0_1_1.set(LegContractMultiplierUnit_28);
      InstrumentLeg_28.insert(LegContractMultiplierUnit_28.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_28("MONTHYEAR_793682260");
      noLegs_0_1_1.set(LegContractSettlMonth_28);
      InstrumentLeg_28.insert(LegContractSettlMonth_28.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_28("COUNTRY_470825598");
      noLegs_0_1_1.set(LegCountryOfIssue_28);
      InstrumentLeg_28.insert(LegCountryOfIssue_28.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_28("LOCALMKTDATE_290623479");
      noLegs_0_1_1.set(LegCouponPaymentDate_28);
      InstrumentLeg_28.insert(LegCouponPaymentDate_28.getString());
      FIX::LegCouponRate LegCouponRate_28;
      LegCouponRate_28.setString("32.220000");
      noLegs_0_1_1.set(LegCouponRate_28);
      InstrumentLeg_28.insert(LegCouponRate_28.getString());
      FIX::LegCreditRating LegCreditRating_28("STRING_1764611360");
      noLegs_0_1_1.set(LegCreditRating_28);
      InstrumentLeg_28.insert(LegCreditRating_28.getString());
      FIX::LegCurrency LegCurrency_28("USD");
      noLegs_0_1_1.set(LegCurrency_28);
      InstrumentLeg_28.insert(LegCurrency_28.getString());
      FIX::LegDatedDate LegDatedDate_28("LOCALMKTDATE_1233107145");
      noLegs_0_1_1.set(LegDatedDate_28);
      InstrumentLeg_28.insert(LegDatedDate_28.getString());
      FIX::LegExerciseStyle LegExerciseStyle_28(395260707);
      noLegs_0_1_1.set(LegExerciseStyle_28);
      InstrumentLeg_28.insert(LegExerciseStyle_28.getString());
      FIX::LegFactor LegFactor_28;
      LegFactor_28.setString("15778070");
      noLegs_0_1_1.set(LegFactor_28);
      InstrumentLeg_28.insert(LegFactor_28.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_28(206930729);
      noLegs_0_1_1.set(LegFlowScheduleType_28);
      InstrumentLeg_28.insert(LegFlowScheduleType_28.getString());
      FIX::LegInstrRegistry LegInstrRegistry_28("STRING_370905056");
      noLegs_0_1_1.set(LegInstrRegistry_28);
      InstrumentLeg_28.insert(LegInstrRegistry_28.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_28("LOCALMKTDATE_1308610705");
      noLegs_0_1_1.set(LegInterestAccrualDate_28);
      InstrumentLeg_28.insert(LegInterestAccrualDate_28.getString());
      FIX::LegIssueDate LegIssueDate_28("LOCALMKTDATE_1181969924");
      noLegs_0_1_1.set(LegIssueDate_28);
      InstrumentLeg_28.insert(LegIssueDate_28.getString());
      FIX::LegIssuer LegIssuer_28("STRING_1951988191");
      noLegs_0_1_1.set(LegIssuer_28);
      InstrumentLeg_28.insert(LegIssuer_28.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_28("STRING_508875776");
      noLegs_0_1_1.set(LegLocaleOfIssue_28);
      InstrumentLeg_28.insert(LegLocaleOfIssue_28.getString());
      FIX::LegMaturityDate LegMaturityDate_28("LOCALMKTDATE_1250636602");
      noLegs_0_1_1.set(LegMaturityDate_28);
      InstrumentLeg_28.insert(LegMaturityDate_28.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_28("MONTHYEAR_1699100401");
      noLegs_0_1_1.set(LegMaturityMonthYear_28);
      InstrumentLeg_28.insert(LegMaturityMonthYear_28.getString());
      FIX::LegMaturityTime LegMaturityTime_28("TZTIMEONLY_1248497047");
      noLegs_0_1_1.set(LegMaturityTime_28);
      InstrumentLeg_28.insert(LegMaturityTime_28.getString());
      FIX::LegOptAttribute LegOptAttribute_28('1');
      noLegs_0_1_1.set(LegOptAttribute_28);
      InstrumentLeg_28.insert(LegOptAttribute_28.getString());
      FIX::LegOptionRatio LegOptionRatio_28;
      LegOptionRatio_28.setString("10145950");
      noLegs_0_1_1.set(LegOptionRatio_28);
      InstrumentLeg_28.insert(LegOptionRatio_28.getString());
      FIX::LegPool LegPool_28("STRING_526474633");
      noLegs_0_1_1.set(LegPool_28);
      InstrumentLeg_28.insert(LegPool_28.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_28("STRING_64208929");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_28);
      InstrumentLeg_28.insert(LegPriceUnitOfMeasure_28.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_28;
      LegPriceUnitOfMeasureQty_28.setString("15956114");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_28);
      InstrumentLeg_28.insert(LegPriceUnitOfMeasureQty_28.getString());
      FIX::LegProduct LegProduct_28(1696371667);
      noLegs_0_1_1.set(LegProduct_28);
      InstrumentLeg_28.insert(LegProduct_28.getString());
      FIX::LegPutOrCall LegPutOrCall_28(590255885);
      noLegs_0_1_1.set(LegPutOrCall_28);
      InstrumentLeg_28.insert(LegPutOrCall_28.getString());
      FIX::LegRatioQty LegRatioQty_28;
      LegRatioQty_28.setString("11891505");
      noLegs_0_1_1.set(LegRatioQty_28);
      InstrumentLeg_28.insert(LegRatioQty_28.getString());
      FIX::LegRedemptionDate LegRedemptionDate_28("LOCALMKTDATE_120503036");
      noLegs_0_1_1.set(LegRedemptionDate_28);
      InstrumentLeg_28.insert(LegRedemptionDate_28.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_28("STRING_83489847");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_28);
      InstrumentLeg_28.insert(LegRepoCollateralSecurityType_28.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_28;
      LegRepurchaseRate_28.setString("80.590000");
      noLegs_0_1_1.set(LegRepurchaseRate_28);
      InstrumentLeg_28.insert(LegRepurchaseRate_28.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_28(1112821397);
      noLegs_0_1_1.set(LegRepurchaseTerm_28);
      InstrumentLeg_28.insert(LegRepurchaseTerm_28.getString());
      FIX::LegSecurityDesc LegSecurityDesc_28("STRING_877172107");
      noLegs_0_1_1.set(LegSecurityDesc_28);
      InstrumentLeg_28.insert(LegSecurityDesc_28.getString());
      FIX::LegSecurityExchange LegSecurityExchange_28("EXCHANGE_1732093657");
      noLegs_0_1_1.set(LegSecurityExchange_28);
      InstrumentLeg_28.insert(LegSecurityExchange_28.getString());
      FIX::LegSecurityID LegSecurityID_28("STRING_1403444876");
      noLegs_0_1_1.set(LegSecurityID_28);
      InstrumentLeg_28.insert(LegSecurityID_28.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_28("STRING_232101681");
      noLegs_0_1_1.set(LegSecurityIDSource_28);
      InstrumentLeg_28.insert(LegSecurityIDSource_28.getString());
      FIX::LegSecuritySubType LegSecuritySubType_28("STRING_1349221369");
      noLegs_0_1_1.set(LegSecuritySubType_28);
      InstrumentLeg_28.insert(LegSecuritySubType_28.getString());
      FIX::LegSecurityType LegSecurityType_28("STRING_164792187");
      noLegs_0_1_1.set(LegSecurityType_28);
      InstrumentLeg_28.insert(LegSecurityType_28.getString());
      FIX::LegSide LegSide_28('3');
      noLegs_0_1_1.set(LegSide_28);
      InstrumentLeg_28.insert(LegSide_28.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_28("STRING_434844866");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_28);
      InstrumentLeg_28.insert(LegStateOrProvinceOfIssue_28.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_28("CHF");
      noLegs_0_1_1.set(LegStrikeCurrency_28);
      InstrumentLeg_28.insert(LegStrikeCurrency_28.getString());
      FIX::LegStrikePrice LegStrikePrice_28;
      LegStrikePrice_28.setString("6417755");
      noLegs_0_1_1.set(LegStrikePrice_28);
      InstrumentLeg_28.insert(LegStrikePrice_28.getString());
      FIX::LegSymbol LegSymbol_28("STRING_930957950");
      noLegs_0_1_1.set(LegSymbol_28);
      InstrumentLeg_28.insert(LegSymbol_28.getString());
      FIX::LegSymbolSfx LegSymbolSfx_28("STRING_1053318999");
      noLegs_0_1_1.set(LegSymbolSfx_28);
      InstrumentLeg_28.insert(LegSymbolSfx_28.getString());
      FIX::LegTimeUnit LegTimeUnit_28("STRING_1823745520");
      noLegs_0_1_1.set(LegTimeUnit_28);
      InstrumentLeg_28.insert(LegTimeUnit_28.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_28("STRING_735462493");
      noLegs_0_1_1.set(LegUnitOfMeasure_28);
      InstrumentLeg_28.insert(LegUnitOfMeasure_28.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_28;
      LegUnitOfMeasureQty_28.setString("15621947");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_28);
      InstrumentLeg_28.insert(LegUnitOfMeasureQty_28.getString());
      all_values.push_back(InstrumentLeg_28);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_65;
        FIX::LegSecurityAltID LegSecurityAltID_65("STRING_287079246");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_65);
        LegSecAltIDGrp_NoLegSecurityAltID_65.insert(LegSecurityAltID_65.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_65("STRING_663208174");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_65);
        LegSecAltIDGrp_NoLegSecurityAltID_65.insert(LegSecurityAltIDSource_65.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_65);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_17;
    FIX::AttachmentPoint AttachmentPoint_17;
    AttachmentPoint_17.setString("18.550000");
    noRelatedSym_0_0.set(AttachmentPoint_17);
    Instrument_17.insert(AttachmentPoint_17.getString());
    FIX::CFICode CFICode_17("STRING_1301674323");
    noRelatedSym_0_0.set(CFICode_17);
    Instrument_17.insert(CFICode_17.getString());
    FIX::CPProgram CPProgram_17(99);
    noRelatedSym_0_0.set(CPProgram_17);
    Instrument_17.insert(CPProgram_17.getString());
    FIX::CPRegType CPRegType_17("STRING_322450784");
    noRelatedSym_0_0.set(CPRegType_17);
    Instrument_17.insert(CPRegType_17.getString());
    FIX::CapPrice CapPrice_17;
    CapPrice_17.setString("7498021");
    noRelatedSym_0_0.set(CapPrice_17);
    Instrument_17.insert(CapPrice_17.getString());
    FIX::ContractMultiplier ContractMultiplier_17;
    ContractMultiplier_17.setString("7385708");
    noRelatedSym_0_0.set(ContractMultiplier_17);
    Instrument_17.insert(ContractMultiplier_17.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_17(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_17);
    Instrument_17.insert(ContractMultiplierUnit_17.getString());
    FIX::ContractSettlMonth ContractSettlMonth_17("MONTHYEAR_1938952715");
    noRelatedSym_0_0.set(ContractSettlMonth_17);
    Instrument_17.insert(ContractSettlMonth_17.getString());
    FIX::CountryOfIssue CountryOfIssue_17("COUNTRY_859073862");
    noRelatedSym_0_0.set(CountryOfIssue_17);
    Instrument_17.insert(CountryOfIssue_17.getString());
    FIX::CouponPaymentDate CouponPaymentDate_17("LOCALMKTDATE_996196517");
    noRelatedSym_0_0.set(CouponPaymentDate_17);
    Instrument_17.insert(CouponPaymentDate_17.getString());
    FIX::CouponRate CouponRate_17;
    CouponRate_17.setString("71.260000");
    noRelatedSym_0_0.set(CouponRate_17);
    Instrument_17.insert(CouponRate_17.getString());
    FIX::CreditRating CreditRating_17("STRING_1971895260");
    noRelatedSym_0_0.set(CreditRating_17);
    Instrument_17.insert(CreditRating_17.getString());
    FIX::DatedDate DatedDate_17("LOCALMKTDATE_1873368624");
    noRelatedSym_0_0.set(DatedDate_17);
    Instrument_17.insert(DatedDate_17.getString());
    FIX::DetachmentPoint DetachmentPoint_17;
    DetachmentPoint_17.setString("71.350000");
    noRelatedSym_0_0.set(DetachmentPoint_17);
    Instrument_17.insert(DetachmentPoint_17.getString());
    FIX::EncodedIssuer EncodedIssuer_17("DATA_1227856488");
    noRelatedSym_0_0.set(EncodedIssuer_17);
    Instrument_17.insert(EncodedIssuer_17.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_17(2105470306);
    noRelatedSym_0_0.set(EncodedIssuerLen_17);
    Instrument_17.insert(EncodedIssuerLen_17.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_17("DATA_1986568505");
    noRelatedSym_0_0.set(EncodedSecurityDesc_17);
    Instrument_17.insert(EncodedSecurityDesc_17.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_17(1392648675);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_17);
    Instrument_17.insert(EncodedSecurityDescLen_17.getString());
    FIX::ExerciseStyle ExerciseStyle_17(2);
    noRelatedSym_0_0.set(ExerciseStyle_17);
    Instrument_17.insert(ExerciseStyle_17.getString());
    FIX::Factor Factor_17;
    Factor_17.setString("2739297");
    noRelatedSym_0_0.set(Factor_17);
    Instrument_17.insert(Factor_17.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_17(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_17);
    Instrument_17.insert(FlexProductEligibilityIndicator_17.getString());
    FIX::FlexibleIndicator FlexibleIndicator_17(false);
    noRelatedSym_0_0.set(FlexibleIndicator_17);
    Instrument_17.insert(FlexibleIndicator_17.getString());
    FIX::FloorPrice FloorPrice_17;
    FloorPrice_17.setString("9157053");
    noRelatedSym_0_0.set(FloorPrice_17);
    Instrument_17.insert(FloorPrice_17.getString());
    FIX::FlowScheduleType FlowScheduleType_17(1);
    noRelatedSym_0_0.set(FlowScheduleType_17);
    Instrument_17.insert(FlowScheduleType_17.getString());
    FIX::InstrRegistry InstrRegistry_17("STRING_1070398864");
    noRelatedSym_0_0.set(InstrRegistry_17);
    Instrument_17.insert(InstrRegistry_17.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_17('5');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_17);
    Instrument_17.insert(InstrmtAssignmentMethod_17.getString());
    FIX::InterestAccrualDate InterestAccrualDate_17("LOCALMKTDATE_1471638364");
    noRelatedSym_0_0.set(InterestAccrualDate_17);
    Instrument_17.insert(InterestAccrualDate_17.getString());
    FIX::IssueDate IssueDate_17("LOCALMKTDATE_485109991");
    noRelatedSym_0_0.set(IssueDate_17);
    Instrument_17.insert(IssueDate_17.getString());
    FIX::Issuer Issuer_17("STRING_1518865666");
    noRelatedSym_0_0.set(Issuer_17);
    Instrument_17.insert(Issuer_17.getString());
    FIX::ListMethod ListMethod_17(1);
    noRelatedSym_0_0.set(ListMethod_17);
    Instrument_17.insert(ListMethod_17.getString());
    FIX::LocaleOfIssue LocaleOfIssue_17("STRING_1148318165");
    noRelatedSym_0_0.set(LocaleOfIssue_17);
    Instrument_17.insert(LocaleOfIssue_17.getString());
    FIX::MaturityDate MaturityDate_17("LOCALMKTDATE_1777107521");
    noRelatedSym_0_0.set(MaturityDate_17);
    Instrument_17.insert(MaturityDate_17.getString());
    FIX::MaturityMonthYear MaturityMonthYear_17("MONTHYEAR_912908286");
    noRelatedSym_0_0.set(MaturityMonthYear_17);
    Instrument_17.insert(MaturityMonthYear_17.getString());
    FIX::MaturityTime MaturityTime_17("TZTIMEONLY_190517324");
    noRelatedSym_0_0.set(MaturityTime_17);
    Instrument_17.insert(MaturityTime_17.getString());
    FIX::MinPriceIncrement MinPriceIncrement_17;
    MinPriceIncrement_17.setString("20995583");
    noRelatedSym_0_0.set(MinPriceIncrement_17);
    Instrument_17.insert(MinPriceIncrement_17.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_17;
    MinPriceIncrementAmount_17.setString("16627104");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_17);
    Instrument_17.insert(MinPriceIncrementAmount_17.getString());
    FIX::NTPositionLimit NTPositionLimit_17(929088151);
    noRelatedSym_0_0.set(NTPositionLimit_17);
    Instrument_17.insert(NTPositionLimit_17.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_17;
    NotionalPercentageOutstanding_17.setString("13.270000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_17);
    Instrument_17.insert(NotionalPercentageOutstanding_17.getString());
    FIX::OptAttribute OptAttribute_17('1');
    noRelatedSym_0_0.set(OptAttribute_17);
    Instrument_17.insert(OptAttribute_17.getString());
    FIX::OptPayoutAmount OptPayoutAmount_17;
    OptPayoutAmount_17.setString("17881620");
    noRelatedSym_0_0.set(OptPayoutAmount_17);
    Instrument_17.insert(OptPayoutAmount_17.getString());
    FIX::OptPayoutType OptPayoutType_17(1);
    noRelatedSym_0_0.set(OptPayoutType_17);
    Instrument_17.insert(OptPayoutType_17.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_17;
    OriginalNotionalPercentageOutstanding_17.setString("30.010000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_17);
    Instrument_17.insert(OriginalNotionalPercentageOutstanding_17.getString());
    FIX::Pool Pool_17("STRING_1612573625");
    noRelatedSym_0_0.set(Pool_17);
    Instrument_17.insert(Pool_17.getString());
    FIX::PositionLimit PositionLimit_17(1586862821);
    noRelatedSym_0_0.set(PositionLimit_17);
    Instrument_17.insert(PositionLimit_17.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_17("STRING_STD");
    noRelatedSym_0_0.set(PriceQuoteMethod_17);
    Instrument_17.insert(PriceQuoteMethod_17.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_17("STRING_692946466");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_17);
    Instrument_17.insert(PriceUnitOfMeasure_17.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_17;
    PriceUnitOfMeasureQty_17.setString("15448494");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_17);
    Instrument_17.insert(PriceUnitOfMeasureQty_17.getString());
    FIX::Product Product_19(3);
    noRelatedSym_0_0.set(Product_19);
    Instrument_17.insert(Product_19.getString());
    FIX::ProductComplex ProductComplex_17("STRING_2085595141");
    noRelatedSym_0_0.set(ProductComplex_17);
    Instrument_17.insert(ProductComplex_17.getString());
    FIX::PutOrCall PutOrCall_17(0);
    noRelatedSym_0_0.set(PutOrCall_17);
    Instrument_17.insert(PutOrCall_17.getString());
    FIX::RedemptionDate RedemptionDate_17("LOCALMKTDATE_1109794717");
    noRelatedSym_0_0.set(RedemptionDate_17);
    Instrument_17.insert(RedemptionDate_17.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_17("STRING_1890813063");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_17);
    Instrument_17.insert(RepoCollateralSecurityType_17.getString());
    FIX::RepurchaseRate RepurchaseRate_17;
    RepurchaseRate_17.setString("9.150000");
    noRelatedSym_0_0.set(RepurchaseRate_17);
    Instrument_17.insert(RepurchaseRate_17.getString());
    FIX::RepurchaseTerm RepurchaseTerm_17(2025500036);
    noRelatedSym_0_0.set(RepurchaseTerm_17);
    Instrument_17.insert(RepurchaseTerm_17.getString());
    FIX::RestructuringType RestructuringType_17("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_17);
    Instrument_17.insert(RestructuringType_17.getString());
    FIX::SecurityDesc SecurityDesc_17("STRING_757216131");
    noRelatedSym_0_0.set(SecurityDesc_17);
    Instrument_17.insert(SecurityDesc_17.getString());
    FIX::SecurityExchange SecurityExchange_17("EXCHANGE_469983580");
    noRelatedSym_0_0.set(SecurityExchange_17);
    Instrument_17.insert(SecurityExchange_17.getString());
    FIX::SecurityGroup SecurityGroup_17("STRING_1951143651");
    noRelatedSym_0_0.set(SecurityGroup_17);
    Instrument_17.insert(SecurityGroup_17.getString());
    FIX::SecurityID SecurityID_17("STRING_1242326122");
    noRelatedSym_0_0.set(SecurityID_17);
    Instrument_17.insert(SecurityID_17.getString());
    FIX::SecurityIDSource SecurityIDSource_17("STRING_B");
    noRelatedSym_0_0.set(SecurityIDSource_17);
    Instrument_17.insert(SecurityIDSource_17.getString());
    FIX::SecurityStatus SecurityStatus_17("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_17);
    Instrument_17.insert(SecurityStatus_17.getString());
    FIX::SecuritySubType SecuritySubType_17("STRING_243160639");
    noRelatedSym_0_0.set(SecuritySubType_17);
    Instrument_17.insert(SecuritySubType_17.getString());
    FIX::SecurityType SecurityType_19("STRING_TMCP");
    noRelatedSym_0_0.set(SecurityType_19);
    Instrument_17.insert(SecurityType_19.getString());
    FIX::Seniority Seniority_17("STRING_SR");
    noRelatedSym_0_0.set(Seniority_17);
    Instrument_17.insert(Seniority_17.getString());
    FIX::SettlMethod SettlMethod_17('C');
    noRelatedSym_0_0.set(SettlMethod_17);
    Instrument_17.insert(SettlMethod_17.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_17("STRING_1570547777");
    noRelatedSym_0_0.set(SettleOnOpenFlag_17);
    Instrument_17.insert(SettleOnOpenFlag_17.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_17("STRING_1990512707");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_17);
    Instrument_17.insert(StateOrProvinceOfIssue_17.getString());
    FIX::StrikeCurrency StrikeCurrency_17("CAN");
    noRelatedSym_0_0.set(StrikeCurrency_17);
    Instrument_17.insert(StrikeCurrency_17.getString());
    FIX::StrikeMultiplier StrikeMultiplier_17;
    StrikeMultiplier_17.setString("12972085");
    noRelatedSym_0_0.set(StrikeMultiplier_17);
    Instrument_17.insert(StrikeMultiplier_17.getString());
    FIX::StrikePrice StrikePrice_17;
    StrikePrice_17.setString("10034444");
    noRelatedSym_0_0.set(StrikePrice_17);
    Instrument_17.insert(StrikePrice_17.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_17(4);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_17);
    Instrument_17.insert(StrikePriceBoundaryMethod_17.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_17;
    StrikePriceBoundaryPrecision_17.setString("15.820000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_17);
    Instrument_17.insert(StrikePriceBoundaryPrecision_17.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_17(3);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_17);
    Instrument_17.insert(StrikePriceDeterminationMethod_17.getString());
    FIX::StrikeValue StrikeValue_17;
    StrikeValue_17.setString("15882024");
    noRelatedSym_0_0.set(StrikeValue_17);
    Instrument_17.insert(StrikeValue_17.getString());
    FIX::Symbol Symbol_17("STRING_505938071");
    noRelatedSym_0_0.set(Symbol_17);
    Instrument_17.insert(Symbol_17.getString());
    FIX::SymbolSfx SymbolSfx_17("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_17);
    Instrument_17.insert(SymbolSfx_17.getString());
    FIX::TimeUnit TimeUnit_17("STRING_Min");
    noRelatedSym_0_0.set(TimeUnit_17);
    Instrument_17.insert(TimeUnit_17.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_17(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_17);
    Instrument_17.insert(UnderlyingPriceDeterminationMethod_17.getString());
    FIX::UnitOfMeasure UnitOfMeasure_17("STRING_MMbbl");
    noRelatedSym_0_0.set(UnitOfMeasure_17);
    Instrument_17.insert(UnitOfMeasure_17.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_17;
    UnitOfMeasureQty_17.setString("6553057");
    noRelatedSym_0_0.set(UnitOfMeasureQty_17);
    Instrument_17.insert(UnitOfMeasureQty_17.getString());
    FIX::ValuationMethod ValuationMethod_17("STRING_CDS");
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
      ComplexEventPrice_38.setString("1821305");
      noComplexEvents_0_1_0.set(ComplexEventPrice_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPrice_38.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_38(5);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceBoundaryMethod_38.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_38;
      ComplexEventPriceBoundaryPrecision_38.setString("91.070000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceBoundaryPrecision_38.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_38(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventPriceTimeType_38.getString());
      FIX::ComplexEventType ComplexEventType_38(4);
      noComplexEvents_0_1_0.set(ComplexEventType_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexEventType_38.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_38;
      ComplexOptPayoutAmount_38.setString("1941815");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_38);
      ComplexEvents_NoComplexEvents_38.insert(ComplexOptPayoutAmount_38.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_38);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_78;
        FIX::ComplexEventEndDate ComplexEventEndDate_78(FIX::UTCTIMESTAMP(13, 39, 20, 21, 2, 2005));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_78);
        ComplexEventDates_NoComplexEventDates_78.insert(ComplexEventEndDate_78.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_78(FIX::UTCTIMESTAMP(6, 0, 12, 15, 8, 2008));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_78);
        ComplexEventDates_NoComplexEventDates_78.insert(ComplexEventStartDate_78.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_78);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_168;
          FIX::ComplexEventEndTime ComplexEventEndTime_168(FIX::UTCTIMEONLY(18, 3, 22));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_168);
          ComplexEventTimes_NoComplexEventTimes_168.insert(ComplexEventEndTime_168.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_168(FIX::UTCTIMEONLY(3, 16, 28));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_168);
          ComplexEventTimes_NoComplexEventTimes_168.insert(ComplexEventStartTime_168.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_168);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_169;
          FIX::ComplexEventEndTime ComplexEventEndTime_169(FIX::UTCTIMEONLY(10, 27, 46));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_169);
          ComplexEventTimes_NoComplexEventTimes_169.insert(ComplexEventEndTime_169.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_169(FIX::UTCTIMEONLY(13, 27, 52));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_169);
          ComplexEventTimes_NoComplexEventTimes_169.insert(ComplexEventStartTime_169.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_169);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_79;
        FIX::ComplexEventEndDate ComplexEventEndDate_79(FIX::UTCTIMESTAMP(16, 23, 49, 1, 5, 2010));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_79);
        ComplexEventDates_NoComplexEventDates_79.insert(ComplexEventEndDate_79.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_79(FIX::UTCTIMESTAMP(10, 33, 10, 2, 5, 2000));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_79);
        ComplexEventDates_NoComplexEventDates_79.insert(ComplexEventStartDate_79.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_79);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_170;
          FIX::ComplexEventEndTime ComplexEventEndTime_170(FIX::UTCTIMEONLY(11, 23, 40));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_170);
          ComplexEventTimes_NoComplexEventTimes_170.insert(ComplexEventEndTime_170.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_170(FIX::UTCTIMEONLY(15, 48, 43));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_170);
          ComplexEventTimes_NoComplexEventTimes_170.insert(ComplexEventStartTime_170.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_170);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_171;
          FIX::ComplexEventEndTime ComplexEventEndTime_171(FIX::UTCTIMEONLY(22, 3, 20));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_171);
          ComplexEventTimes_NoComplexEventTimes_171.insert(ComplexEventEndTime_171.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_171(FIX::UTCTIMEONLY(4, 47, 42));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_171);
          ComplexEventTimes_NoComplexEventTimes_171.insert(ComplexEventStartTime_171.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_171);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_172;
          FIX::ComplexEventEndTime ComplexEventEndTime_172(FIX::UTCTIMEONLY(4, 6, 15));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_172);
          ComplexEventTimes_NoComplexEventTimes_172.insert(ComplexEventEndTime_172.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_172(FIX::UTCTIMEONLY(22, 48, 39));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_172);
          ComplexEventTimes_NoComplexEventTimes_172.insert(ComplexEventStartTime_172.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_172);

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
      multiset<string> EvntGrp_NoEvents_30;
      FIX::EventDate EventDate_30("LOCALMKTDATE_807628881");
      noEvents_0_1_0.set(EventDate_30);
      EvntGrp_NoEvents_30.insert(EventDate_30.getString());
      FIX::EventPx EventPx_30;
      EventPx_30.setString("9530560");
      noEvents_0_1_0.set(EventPx_30);
      EvntGrp_NoEvents_30.insert(EventPx_30.getString());
      FIX::EventText EventText_30("STRING_673219967");
      noEvents_0_1_0.set(EventText_30);
      EvntGrp_NoEvents_30.insert(EventText_30.getString());
      FIX::EventTime EventTime_30(FIX::UTCTIMESTAMP(5, 7, 59, 12, 7, 2015));
      noEvents_0_1_0.set(EventTime_30);
      EvntGrp_NoEvents_30.insert(EventTime_30.getString());
      FIX::EventType EventType_30(16);
      noEvents_0_1_0.set(EventType_30);
      EvntGrp_NoEvents_30.insert(EventType_30.getString());
      all_values.push_back(EvntGrp_NoEvents_30);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_31;
      FIX::EventDate EventDate_31("LOCALMKTDATE_1505493877");
      noEvents_0_1_1.set(EventDate_31);
      EvntGrp_NoEvents_31.insert(EventDate_31.getString());
      FIX::EventPx EventPx_31;
      EventPx_31.setString("17481319");
      noEvents_0_1_1.set(EventPx_31);
      EvntGrp_NoEvents_31.insert(EventPx_31.getString());
      FIX::EventText EventText_31("STRING_2062768419");
      noEvents_0_1_1.set(EventText_31);
      EvntGrp_NoEvents_31.insert(EventText_31.getString());
      FIX::EventTime EventTime_31(FIX::UTCTIMESTAMP(18, 42, 23, 9, 3, 2011));
      noEvents_0_1_1.set(EventTime_31);
      EvntGrp_NoEvents_31.insert(EventTime_31.getString());
      FIX::EventType EventType_31(12);
      noEvents_0_1_1.set(EventType_31);
      EvntGrp_NoEvents_31.insert(EventType_31.getString());
      all_values.push_back(EvntGrp_NoEvents_31);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_32;
      FIX::InstrumentPartyID InstrumentPartyID_32("STRING_488468119");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_32);
      InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyID_32.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_32('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_32);
      InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyIDSource_32.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_32(2123791100);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_32);
      InstrumentParties_NoInstrumentParties_32.insert(InstrumentPartyRole_32.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_32);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76;
        FIX::InstrumentPartySubID InstrumentPartySubID_76("STRING_1298098180");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_76);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76.insert(InstrumentPartySubID_76.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_76(279965760);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_76);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76.insert(InstrumentPartySubIDType_76.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_33;
      FIX::InstrumentPartyID InstrumentPartyID_33("STRING_1734127959");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_33);
      InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyID_33.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_33('4');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_33);
      InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyIDSource_33.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_33(1087594641);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_33);
      InstrumentParties_NoInstrumentParties_33.insert(InstrumentPartyRole_33.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_33);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77;
        FIX::InstrumentPartySubID InstrumentPartySubID_77("STRING_1090163612");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_77);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77.insert(InstrumentPartySubID_77.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_77(1769889362);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_77);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77.insert(InstrumentPartySubIDType_77.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78;
        FIX::InstrumentPartySubID InstrumentPartySubID_78("STRING_1486954202");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_78);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78.insert(InstrumentPartySubID_78.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_78(287711671);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_78);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78.insert(InstrumentPartySubIDType_78.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79;
        FIX::InstrumentPartySubID InstrumentPartySubID_79("STRING_55999613");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_79);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79.insert(InstrumentPartySubID_79.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_79(853200994);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_79);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79.insert(InstrumentPartySubIDType_79.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_35;
      FIX::SecurityAltID SecurityAltID_35("STRING_1459329092");
      noSecurityAltID_0_1_0.set(SecurityAltID_35);
      SecAltIDGrp_NoSecurityAltID_35.insert(SecurityAltID_35.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_35("STRING_310312042");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_35);
      SecAltIDGrp_NoSecurityAltID_35.insert(SecurityAltIDSource_35.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_35);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_36;
      FIX::SecurityAltID SecurityAltID_36("STRING_1765570891");
      noSecurityAltID_0_1_1.set(SecurityAltID_36);
      SecAltIDGrp_NoSecurityAltID_36.insert(SecurityAltID_36.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_36("STRING_1059977392");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_36);
      SecAltIDGrp_NoSecurityAltID_36.insert(SecurityAltIDSource_36.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_36);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_37;
      FIX::SecurityAltID SecurityAltID_37("STRING_225596813");
      noSecurityAltID_0_1_2.set(SecurityAltID_37);
      SecAltIDGrp_NoSecurityAltID_37.insert(SecurityAltID_37.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_37("STRING_1609660234");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_37);
      SecAltIDGrp_NoSecurityAltID_37.insert(SecurityAltIDSource_37.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_37);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_34;
    FIX::SecurityXML SecurityXML_35("XMLDATA_562625571");
    noRelatedSym_0_0.set(SecurityXML_35);
    FIX::SecurityXMLLen SecurityXMLLen_17(141308247);
    noRelatedSym_0_0.set(SecurityXMLLen_17);
    FIX::SecurityXMLSchema SecurityXMLSchema_17("STRING_1992118378");
    noRelatedSym_0_0.set(SecurityXMLSchema_17);
    SecurityXML_34.insert(SecurityXMLSchema_17.getString());
    all_values.push_back(SecurityXML_34);

    // InstrumentExtension
    multiset<string> InstrumentExtension_4;
    FIX::DeliveryForm DeliveryForm_4(1);
    noRelatedSym_0_0.set(DeliveryForm_4);
    InstrumentExtension_4.insert(DeliveryForm_4.getString());
    FIX::PctAtRisk PctAtRisk_4;
    PctAtRisk_4.setString("64.050000");
    noRelatedSym_0_0.set(PctAtRisk_4);
    InstrumentExtension_4.insert(PctAtRisk_4.getString());
    all_values.push_back(InstrumentExtension_4);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_7;
      FIX::InstrAttribType InstrAttribType_7(12);
      noInstrAttrib_0_1_0.set(InstrAttribType_7);
      AttrbGrp_NoInstrAttrib_7.insert(InstrAttribType_7.getString());
      FIX::InstrAttribValue InstrAttribValue_7("STRING_1040868790");
      noInstrAttrib_0_1_0.set(InstrAttribValue_7);
      AttrbGrp_NoInstrAttrib_7.insert(InstrAttribValue_7.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_7);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_8;
      FIX::InstrAttribType InstrAttribType_8(21);
      noInstrAttrib_0_1_1.set(InstrAttribType_8);
      AttrbGrp_NoInstrAttrib_8.insert(InstrAttribType_8.getString());
      FIX::InstrAttribValue InstrAttribValue_8("STRING_366588821");
      noInstrAttrib_0_1_1.set(InstrAttribValue_8);
      AttrbGrp_NoInstrAttrib_8.insert(InstrAttribValue_8.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_8);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_0;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_0;
    SecondaryHighLimitPrice_0.setString("10171762");
    noRelatedSym_0_0.set(SecondaryHighLimitPrice_0);
    SecondaryPriceLimits_0.insert(SecondaryHighLimitPrice_0.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_0;
    SecondaryLowLimitPrice_0.setString("7173891");
    noRelatedSym_0_0.set(SecondaryLowLimitPrice_0);
    SecondaryPriceLimits_0.insert(SecondaryLowLimitPrice_0.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_0(1664687001);
    noRelatedSym_0_0.set(SecondaryPriceLimitType_0);
    SecondaryPriceLimits_0.insert(SecondaryPriceLimitType_0.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_0;
    SecondaryTradingReferencePrice_0.setString("12971420");
    noRelatedSym_0_0.set(SecondaryTradingReferencePrice_0);
    SecondaryPriceLimits_0.insert(SecondaryTradingReferencePrice_0.getString());
    all_values.push_back(SecondaryPriceLimits_0);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_1;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_1;
    FIX::CorporateAction CorporateAction_1("MULTIPLECHARVALUE_M");
    noRelatedSym_0_1.set(CorporateAction_1);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(CorporateAction_1.getString());
    FIX::Currency Currency_15("CAN");
    noRelatedSym_0_1.set(Currency_15);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(Currency_15.getString());
    FIX::EncodedText EncodedText_31("DATA_843733804");
    noRelatedSym_0_1.set(EncodedText_31);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(EncodedText_31.getString());
    FIX::EncodedTextLen EncodedTextLen_31(1024310610);
    noRelatedSym_0_1.set(EncodedTextLen_31);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(EncodedTextLen_31.getString());
    FIX::RelSymTransactTime RelSymTransactTime_1(FIX::UTCTIMESTAMP(22, 1, 30, 25, 7, 2012));
    noRelatedSym_0_1.set(RelSymTransactTime_1);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(RelSymTransactTime_1.getString());
    FIX::Text Text_31("STRING_1346717395");
    noRelatedSym_0_1.set(Text_31);
    RelSymDerivSecGrp_NoRelatedSym_1.insert(Text_31.getString());
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_1);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_29;
      FIX::EncodedLegIssuer EncodedLegIssuer_29("DATA_287481159");
      noLegs_1_1_0.set(EncodedLegIssuer_29);
      InstrumentLeg_29.insert(EncodedLegIssuer_29.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_29(1572314208);
      noLegs_1_1_0.set(EncodedLegIssuerLen_29);
      InstrumentLeg_29.insert(EncodedLegIssuerLen_29.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_29("DATA_652363124");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_29);
      InstrumentLeg_29.insert(EncodedLegSecurityDesc_29.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_29(850106730);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_29);
      InstrumentLeg_29.insert(EncodedLegSecurityDescLen_29.getString());
      FIX::LegCFICode LegCFICode_29("STRING_1713622455");
      noLegs_1_1_0.set(LegCFICode_29);
      InstrumentLeg_29.insert(LegCFICode_29.getString());
      FIX::LegContractMultiplier LegContractMultiplier_29;
      LegContractMultiplier_29.setString("4969978");
      noLegs_1_1_0.set(LegContractMultiplier_29);
      InstrumentLeg_29.insert(LegContractMultiplier_29.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_29(1026691870);
      noLegs_1_1_0.set(LegContractMultiplierUnit_29);
      InstrumentLeg_29.insert(LegContractMultiplierUnit_29.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_29("MONTHYEAR_291925212");
      noLegs_1_1_0.set(LegContractSettlMonth_29);
      InstrumentLeg_29.insert(LegContractSettlMonth_29.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_29("COUNTRY_1508930795");
      noLegs_1_1_0.set(LegCountryOfIssue_29);
      InstrumentLeg_29.insert(LegCountryOfIssue_29.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_29("LOCALMKTDATE_1631339181");
      noLegs_1_1_0.set(LegCouponPaymentDate_29);
      InstrumentLeg_29.insert(LegCouponPaymentDate_29.getString());
      FIX::LegCouponRate LegCouponRate_29;
      LegCouponRate_29.setString("40.020000");
      noLegs_1_1_0.set(LegCouponRate_29);
      InstrumentLeg_29.insert(LegCouponRate_29.getString());
      FIX::LegCreditRating LegCreditRating_29("STRING_861848207");
      noLegs_1_1_0.set(LegCreditRating_29);
      InstrumentLeg_29.insert(LegCreditRating_29.getString());
      FIX::LegCurrency LegCurrency_29("USD");
      noLegs_1_1_0.set(LegCurrency_29);
      InstrumentLeg_29.insert(LegCurrency_29.getString());
      FIX::LegDatedDate LegDatedDate_29("LOCALMKTDATE_1579237319");
      noLegs_1_1_0.set(LegDatedDate_29);
      InstrumentLeg_29.insert(LegDatedDate_29.getString());
      FIX::LegExerciseStyle LegExerciseStyle_29(1515131355);
      noLegs_1_1_0.set(LegExerciseStyle_29);
      InstrumentLeg_29.insert(LegExerciseStyle_29.getString());
      FIX::LegFactor LegFactor_29;
      LegFactor_29.setString("14996285");
      noLegs_1_1_0.set(LegFactor_29);
      InstrumentLeg_29.insert(LegFactor_29.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_29(1883270743);
      noLegs_1_1_0.set(LegFlowScheduleType_29);
      InstrumentLeg_29.insert(LegFlowScheduleType_29.getString());
      FIX::LegInstrRegistry LegInstrRegistry_29("STRING_1449278353");
      noLegs_1_1_0.set(LegInstrRegistry_29);
      InstrumentLeg_29.insert(LegInstrRegistry_29.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_29("LOCALMKTDATE_1736881593");
      noLegs_1_1_0.set(LegInterestAccrualDate_29);
      InstrumentLeg_29.insert(LegInterestAccrualDate_29.getString());
      FIX::LegIssueDate LegIssueDate_29("LOCALMKTDATE_579520900");
      noLegs_1_1_0.set(LegIssueDate_29);
      InstrumentLeg_29.insert(LegIssueDate_29.getString());
      FIX::LegIssuer LegIssuer_29("STRING_326105315");
      noLegs_1_1_0.set(LegIssuer_29);
      InstrumentLeg_29.insert(LegIssuer_29.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_29("STRING_1596540302");
      noLegs_1_1_0.set(LegLocaleOfIssue_29);
      InstrumentLeg_29.insert(LegLocaleOfIssue_29.getString());
      FIX::LegMaturityDate LegMaturityDate_29("LOCALMKTDATE_762725258");
      noLegs_1_1_0.set(LegMaturityDate_29);
      InstrumentLeg_29.insert(LegMaturityDate_29.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_29("MONTHYEAR_1638127596");
      noLegs_1_1_0.set(LegMaturityMonthYear_29);
      InstrumentLeg_29.insert(LegMaturityMonthYear_29.getString());
      FIX::LegMaturityTime LegMaturityTime_29("TZTIMEONLY_1512198624");
      noLegs_1_1_0.set(LegMaturityTime_29);
      InstrumentLeg_29.insert(LegMaturityTime_29.getString());
      FIX::LegOptAttribute LegOptAttribute_29('1');
      noLegs_1_1_0.set(LegOptAttribute_29);
      InstrumentLeg_29.insert(LegOptAttribute_29.getString());
      FIX::LegOptionRatio LegOptionRatio_29;
      LegOptionRatio_29.setString("10627432");
      noLegs_1_1_0.set(LegOptionRatio_29);
      InstrumentLeg_29.insert(LegOptionRatio_29.getString());
      FIX::LegPool LegPool_29("STRING_739702391");
      noLegs_1_1_0.set(LegPool_29);
      InstrumentLeg_29.insert(LegPool_29.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_29("STRING_998364358");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_29);
      InstrumentLeg_29.insert(LegPriceUnitOfMeasure_29.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_29;
      LegPriceUnitOfMeasureQty_29.setString("1054461");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_29);
      InstrumentLeg_29.insert(LegPriceUnitOfMeasureQty_29.getString());
      FIX::LegProduct LegProduct_29(1027183550);
      noLegs_1_1_0.set(LegProduct_29);
      InstrumentLeg_29.insert(LegProduct_29.getString());
      FIX::LegPutOrCall LegPutOrCall_29(423194918);
      noLegs_1_1_0.set(LegPutOrCall_29);
      InstrumentLeg_29.insert(LegPutOrCall_29.getString());
      FIX::LegRatioQty LegRatioQty_29;
      LegRatioQty_29.setString("7578092");
      noLegs_1_1_0.set(LegRatioQty_29);
      InstrumentLeg_29.insert(LegRatioQty_29.getString());
      FIX::LegRedemptionDate LegRedemptionDate_29("LOCALMKTDATE_1877290280");
      noLegs_1_1_0.set(LegRedemptionDate_29);
      InstrumentLeg_29.insert(LegRedemptionDate_29.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_29("STRING_2136817373");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_29);
      InstrumentLeg_29.insert(LegRepoCollateralSecurityType_29.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_29;
      LegRepurchaseRate_29.setString("71.100000");
      noLegs_1_1_0.set(LegRepurchaseRate_29);
      InstrumentLeg_29.insert(LegRepurchaseRate_29.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_29(756498502);
      noLegs_1_1_0.set(LegRepurchaseTerm_29);
      InstrumentLeg_29.insert(LegRepurchaseTerm_29.getString());
      FIX::LegSecurityDesc LegSecurityDesc_29("STRING_281258938");
      noLegs_1_1_0.set(LegSecurityDesc_29);
      InstrumentLeg_29.insert(LegSecurityDesc_29.getString());
      FIX::LegSecurityExchange LegSecurityExchange_29("EXCHANGE_616254257");
      noLegs_1_1_0.set(LegSecurityExchange_29);
      InstrumentLeg_29.insert(LegSecurityExchange_29.getString());
      FIX::LegSecurityID LegSecurityID_29("STRING_240354035");
      noLegs_1_1_0.set(LegSecurityID_29);
      InstrumentLeg_29.insert(LegSecurityID_29.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_29("STRING_1614052940");
      noLegs_1_1_0.set(LegSecurityIDSource_29);
      InstrumentLeg_29.insert(LegSecurityIDSource_29.getString());
      FIX::LegSecuritySubType LegSecuritySubType_29("STRING_1478102464");
      noLegs_1_1_0.set(LegSecuritySubType_29);
      InstrumentLeg_29.insert(LegSecuritySubType_29.getString());
      FIX::LegSecurityType LegSecurityType_29("STRING_90798390");
      noLegs_1_1_0.set(LegSecurityType_29);
      InstrumentLeg_29.insert(LegSecurityType_29.getString());
      FIX::LegSide LegSide_29('1');
      noLegs_1_1_0.set(LegSide_29);
      InstrumentLeg_29.insert(LegSide_29.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_29("STRING_909856136");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_29);
      InstrumentLeg_29.insert(LegStateOrProvinceOfIssue_29.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_29("CAN");
      noLegs_1_1_0.set(LegStrikeCurrency_29);
      InstrumentLeg_29.insert(LegStrikeCurrency_29.getString());
      FIX::LegStrikePrice LegStrikePrice_29;
      LegStrikePrice_29.setString("6456432");
      noLegs_1_1_0.set(LegStrikePrice_29);
      InstrumentLeg_29.insert(LegStrikePrice_29.getString());
      FIX::LegSymbol LegSymbol_29("STRING_907724451");
      noLegs_1_1_0.set(LegSymbol_29);
      InstrumentLeg_29.insert(LegSymbol_29.getString());
      FIX::LegSymbolSfx LegSymbolSfx_29("STRING_758082433");
      noLegs_1_1_0.set(LegSymbolSfx_29);
      InstrumentLeg_29.insert(LegSymbolSfx_29.getString());
      FIX::LegTimeUnit LegTimeUnit_29("STRING_1225164131");
      noLegs_1_1_0.set(LegTimeUnit_29);
      InstrumentLeg_29.insert(LegTimeUnit_29.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_29("STRING_1233829766");
      noLegs_1_1_0.set(LegUnitOfMeasure_29);
      InstrumentLeg_29.insert(LegUnitOfMeasure_29.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_29;
      LegUnitOfMeasureQty_29.setString("2071390");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_29);
      InstrumentLeg_29.insert(LegUnitOfMeasureQty_29.getString());
      all_values.push_back(InstrumentLeg_29);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_66;
        FIX::LegSecurityAltID LegSecurityAltID_66("STRING_724473715");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_66);
        LegSecAltIDGrp_NoLegSecurityAltID_66.insert(LegSecurityAltID_66.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_66("STRING_1719337712");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_66);
        LegSecAltIDGrp_NoLegSecurityAltID_66.insert(LegSecurityAltIDSource_66.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_66);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_67;
        FIX::LegSecurityAltID LegSecurityAltID_67("STRING_1639536353");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_67);
        LegSecAltIDGrp_NoLegSecurityAltID_67.insert(LegSecurityAltID_67.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_67("STRING_1787216958");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_67);
        LegSecAltIDGrp_NoLegSecurityAltID_67.insert(LegSecurityAltIDSource_67.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_67);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_68;
        FIX::LegSecurityAltID LegSecurityAltID_68("STRING_311556455");
        noLegSecurityAltID_1_0_2_2.set(LegSecurityAltID_68);
        LegSecAltIDGrp_NoLegSecurityAltID_68.insert(LegSecurityAltID_68.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_68("STRING_490417064");
        noLegSecurityAltID_1_0_2_2.set(LegSecurityAltIDSource_68);
        LegSecAltIDGrp_NoLegSecurityAltID_68.insert(LegSecurityAltIDSource_68.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_68);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_30;
      FIX::EncodedLegIssuer EncodedLegIssuer_30("DATA_1892663090");
      noLegs_1_1_1.set(EncodedLegIssuer_30);
      InstrumentLeg_30.insert(EncodedLegIssuer_30.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_30(1338740005);
      noLegs_1_1_1.set(EncodedLegIssuerLen_30);
      InstrumentLeg_30.insert(EncodedLegIssuerLen_30.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_30("DATA_913611982");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_30);
      InstrumentLeg_30.insert(EncodedLegSecurityDesc_30.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_30(502988699);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_30);
      InstrumentLeg_30.insert(EncodedLegSecurityDescLen_30.getString());
      FIX::LegCFICode LegCFICode_30("STRING_1068546637");
      noLegs_1_1_1.set(LegCFICode_30);
      InstrumentLeg_30.insert(LegCFICode_30.getString());
      FIX::LegContractMultiplier LegContractMultiplier_30;
      LegContractMultiplier_30.setString("9029457");
      noLegs_1_1_1.set(LegContractMultiplier_30);
      InstrumentLeg_30.insert(LegContractMultiplier_30.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_30(1757795809);
      noLegs_1_1_1.set(LegContractMultiplierUnit_30);
      InstrumentLeg_30.insert(LegContractMultiplierUnit_30.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_30("MONTHYEAR_1825045139");
      noLegs_1_1_1.set(LegContractSettlMonth_30);
      InstrumentLeg_30.insert(LegContractSettlMonth_30.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_30("COUNTRY_1184204646");
      noLegs_1_1_1.set(LegCountryOfIssue_30);
      InstrumentLeg_30.insert(LegCountryOfIssue_30.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_30("LOCALMKTDATE_226566419");
      noLegs_1_1_1.set(LegCouponPaymentDate_30);
      InstrumentLeg_30.insert(LegCouponPaymentDate_30.getString());
      FIX::LegCouponRate LegCouponRate_30;
      LegCouponRate_30.setString("91.740000");
      noLegs_1_1_1.set(LegCouponRate_30);
      InstrumentLeg_30.insert(LegCouponRate_30.getString());
      FIX::LegCreditRating LegCreditRating_30("STRING_650773938");
      noLegs_1_1_1.set(LegCreditRating_30);
      InstrumentLeg_30.insert(LegCreditRating_30.getString());
      FIX::LegCurrency LegCurrency_30("GBP");
      noLegs_1_1_1.set(LegCurrency_30);
      InstrumentLeg_30.insert(LegCurrency_30.getString());
      FIX::LegDatedDate LegDatedDate_30("LOCALMKTDATE_319829827");
      noLegs_1_1_1.set(LegDatedDate_30);
      InstrumentLeg_30.insert(LegDatedDate_30.getString());
      FIX::LegExerciseStyle LegExerciseStyle_30(467041371);
      noLegs_1_1_1.set(LegExerciseStyle_30);
      InstrumentLeg_30.insert(LegExerciseStyle_30.getString());
      FIX::LegFactor LegFactor_30;
      LegFactor_30.setString("16146436");
      noLegs_1_1_1.set(LegFactor_30);
      InstrumentLeg_30.insert(LegFactor_30.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_30(1488514315);
      noLegs_1_1_1.set(LegFlowScheduleType_30);
      InstrumentLeg_30.insert(LegFlowScheduleType_30.getString());
      FIX::LegInstrRegistry LegInstrRegistry_30("STRING_1112684603");
      noLegs_1_1_1.set(LegInstrRegistry_30);
      InstrumentLeg_30.insert(LegInstrRegistry_30.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_30("LOCALMKTDATE_374884465");
      noLegs_1_1_1.set(LegInterestAccrualDate_30);
      InstrumentLeg_30.insert(LegInterestAccrualDate_30.getString());
      FIX::LegIssueDate LegIssueDate_30("LOCALMKTDATE_99113100");
      noLegs_1_1_1.set(LegIssueDate_30);
      InstrumentLeg_30.insert(LegIssueDate_30.getString());
      FIX::LegIssuer LegIssuer_30("STRING_190365086");
      noLegs_1_1_1.set(LegIssuer_30);
      InstrumentLeg_30.insert(LegIssuer_30.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_30("STRING_1608714231");
      noLegs_1_1_1.set(LegLocaleOfIssue_30);
      InstrumentLeg_30.insert(LegLocaleOfIssue_30.getString());
      FIX::LegMaturityDate LegMaturityDate_30("LOCALMKTDATE_306252187");
      noLegs_1_1_1.set(LegMaturityDate_30);
      InstrumentLeg_30.insert(LegMaturityDate_30.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_30("MONTHYEAR_30770828");
      noLegs_1_1_1.set(LegMaturityMonthYear_30);
      InstrumentLeg_30.insert(LegMaturityMonthYear_30.getString());
      FIX::LegMaturityTime LegMaturityTime_30("TZTIMEONLY_185704298");
      noLegs_1_1_1.set(LegMaturityTime_30);
      InstrumentLeg_30.insert(LegMaturityTime_30.getString());
      FIX::LegOptAttribute LegOptAttribute_30('2');
      noLegs_1_1_1.set(LegOptAttribute_30);
      InstrumentLeg_30.insert(LegOptAttribute_30.getString());
      FIX::LegOptionRatio LegOptionRatio_30;
      LegOptionRatio_30.setString("16703071");
      noLegs_1_1_1.set(LegOptionRatio_30);
      InstrumentLeg_30.insert(LegOptionRatio_30.getString());
      FIX::LegPool LegPool_30("STRING_1972921256");
      noLegs_1_1_1.set(LegPool_30);
      InstrumentLeg_30.insert(LegPool_30.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_30("STRING_189662706");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_30);
      InstrumentLeg_30.insert(LegPriceUnitOfMeasure_30.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_30;
      LegPriceUnitOfMeasureQty_30.setString("132405");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_30);
      InstrumentLeg_30.insert(LegPriceUnitOfMeasureQty_30.getString());
      FIX::LegProduct LegProduct_30(1718100699);
      noLegs_1_1_1.set(LegProduct_30);
      InstrumentLeg_30.insert(LegProduct_30.getString());
      FIX::LegPutOrCall LegPutOrCall_30(1528402711);
      noLegs_1_1_1.set(LegPutOrCall_30);
      InstrumentLeg_30.insert(LegPutOrCall_30.getString());
      FIX::LegRatioQty LegRatioQty_30;
      LegRatioQty_30.setString("9268525");
      noLegs_1_1_1.set(LegRatioQty_30);
      InstrumentLeg_30.insert(LegRatioQty_30.getString());
      FIX::LegRedemptionDate LegRedemptionDate_30("LOCALMKTDATE_73605750");
      noLegs_1_1_1.set(LegRedemptionDate_30);
      InstrumentLeg_30.insert(LegRedemptionDate_30.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_30("STRING_449465700");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_30);
      InstrumentLeg_30.insert(LegRepoCollateralSecurityType_30.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_30;
      LegRepurchaseRate_30.setString("82.880000");
      noLegs_1_1_1.set(LegRepurchaseRate_30);
      InstrumentLeg_30.insert(LegRepurchaseRate_30.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_30(1831401559);
      noLegs_1_1_1.set(LegRepurchaseTerm_30);
      InstrumentLeg_30.insert(LegRepurchaseTerm_30.getString());
      FIX::LegSecurityDesc LegSecurityDesc_30("STRING_127027191");
      noLegs_1_1_1.set(LegSecurityDesc_30);
      InstrumentLeg_30.insert(LegSecurityDesc_30.getString());
      FIX::LegSecurityExchange LegSecurityExchange_30("EXCHANGE_866519286");
      noLegs_1_1_1.set(LegSecurityExchange_30);
      InstrumentLeg_30.insert(LegSecurityExchange_30.getString());
      FIX::LegSecurityID LegSecurityID_30("STRING_2057967978");
      noLegs_1_1_1.set(LegSecurityID_30);
      InstrumentLeg_30.insert(LegSecurityID_30.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_30("STRING_44942718");
      noLegs_1_1_1.set(LegSecurityIDSource_30);
      InstrumentLeg_30.insert(LegSecurityIDSource_30.getString());
      FIX::LegSecuritySubType LegSecuritySubType_30("STRING_1517293225");
      noLegs_1_1_1.set(LegSecuritySubType_30);
      InstrumentLeg_30.insert(LegSecuritySubType_30.getString());
      FIX::LegSecurityType LegSecurityType_30("STRING_1615153214");
      noLegs_1_1_1.set(LegSecurityType_30);
      InstrumentLeg_30.insert(LegSecurityType_30.getString());
      FIX::LegSide LegSide_30('5');
      noLegs_1_1_1.set(LegSide_30);
      InstrumentLeg_30.insert(LegSide_30.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_30("STRING_1837123052");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_30);
      InstrumentLeg_30.insert(LegStateOrProvinceOfIssue_30.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_30("GBP");
      noLegs_1_1_1.set(LegStrikeCurrency_30);
      InstrumentLeg_30.insert(LegStrikeCurrency_30.getString());
      FIX::LegStrikePrice LegStrikePrice_30;
      LegStrikePrice_30.setString("11781537");
      noLegs_1_1_1.set(LegStrikePrice_30);
      InstrumentLeg_30.insert(LegStrikePrice_30.getString());
      FIX::LegSymbol LegSymbol_30("STRING_1047395540");
      noLegs_1_1_1.set(LegSymbol_30);
      InstrumentLeg_30.insert(LegSymbol_30.getString());
      FIX::LegSymbolSfx LegSymbolSfx_30("STRING_2043184761");
      noLegs_1_1_1.set(LegSymbolSfx_30);
      InstrumentLeg_30.insert(LegSymbolSfx_30.getString());
      FIX::LegTimeUnit LegTimeUnit_30("STRING_1277266819");
      noLegs_1_1_1.set(LegTimeUnit_30);
      InstrumentLeg_30.insert(LegTimeUnit_30.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_30("STRING_1237760627");
      noLegs_1_1_1.set(LegUnitOfMeasure_30);
      InstrumentLeg_30.insert(LegUnitOfMeasure_30.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_30;
      LegUnitOfMeasureQty_30.setString("15044153");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_30);
      InstrumentLeg_30.insert(LegUnitOfMeasureQty_30.getString());
      all_values.push_back(InstrumentLeg_30);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_69;
        FIX::LegSecurityAltID LegSecurityAltID_69("STRING_1268531455");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_69);
        LegSecAltIDGrp_NoLegSecurityAltID_69.insert(LegSecurityAltID_69.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_69("STRING_1690119643");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_69);
        LegSecAltIDGrp_NoLegSecurityAltID_69.insert(LegSecurityAltIDSource_69.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_69);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_1_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_31;
      FIX::EncodedLegIssuer EncodedLegIssuer_31("DATA_1461625258");
      noLegs_1_1_2.set(EncodedLegIssuer_31);
      InstrumentLeg_31.insert(EncodedLegIssuer_31.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_31(791354989);
      noLegs_1_1_2.set(EncodedLegIssuerLen_31);
      InstrumentLeg_31.insert(EncodedLegIssuerLen_31.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_31("DATA_1515557252");
      noLegs_1_1_2.set(EncodedLegSecurityDesc_31);
      InstrumentLeg_31.insert(EncodedLegSecurityDesc_31.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_31(1651287965);
      noLegs_1_1_2.set(EncodedLegSecurityDescLen_31);
      InstrumentLeg_31.insert(EncodedLegSecurityDescLen_31.getString());
      FIX::LegCFICode LegCFICode_31("STRING_804595587");
      noLegs_1_1_2.set(LegCFICode_31);
      InstrumentLeg_31.insert(LegCFICode_31.getString());
      FIX::LegContractMultiplier LegContractMultiplier_31;
      LegContractMultiplier_31.setString("10861743");
      noLegs_1_1_2.set(LegContractMultiplier_31);
      InstrumentLeg_31.insert(LegContractMultiplier_31.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_31(1032207028);
      noLegs_1_1_2.set(LegContractMultiplierUnit_31);
      InstrumentLeg_31.insert(LegContractMultiplierUnit_31.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_31("MONTHYEAR_1731448168");
      noLegs_1_1_2.set(LegContractSettlMonth_31);
      InstrumentLeg_31.insert(LegContractSettlMonth_31.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_31("COUNTRY_1159780053");
      noLegs_1_1_2.set(LegCountryOfIssue_31);
      InstrumentLeg_31.insert(LegCountryOfIssue_31.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_31("LOCALMKTDATE_1481672729");
      noLegs_1_1_2.set(LegCouponPaymentDate_31);
      InstrumentLeg_31.insert(LegCouponPaymentDate_31.getString());
      FIX::LegCouponRate LegCouponRate_31;
      LegCouponRate_31.setString("28.080000");
      noLegs_1_1_2.set(LegCouponRate_31);
      InstrumentLeg_31.insert(LegCouponRate_31.getString());
      FIX::LegCreditRating LegCreditRating_31("STRING_843697964");
      noLegs_1_1_2.set(LegCreditRating_31);
      InstrumentLeg_31.insert(LegCreditRating_31.getString());
      FIX::LegCurrency LegCurrency_31("CHF");
      noLegs_1_1_2.set(LegCurrency_31);
      InstrumentLeg_31.insert(LegCurrency_31.getString());
      FIX::LegDatedDate LegDatedDate_31("LOCALMKTDATE_754182295");
      noLegs_1_1_2.set(LegDatedDate_31);
      InstrumentLeg_31.insert(LegDatedDate_31.getString());
      FIX::LegExerciseStyle LegExerciseStyle_31(1653642638);
      noLegs_1_1_2.set(LegExerciseStyle_31);
      InstrumentLeg_31.insert(LegExerciseStyle_31.getString());
      FIX::LegFactor LegFactor_31;
      LegFactor_31.setString("16500916");
      noLegs_1_1_2.set(LegFactor_31);
      InstrumentLeg_31.insert(LegFactor_31.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_31(221851861);
      noLegs_1_1_2.set(LegFlowScheduleType_31);
      InstrumentLeg_31.insert(LegFlowScheduleType_31.getString());
      FIX::LegInstrRegistry LegInstrRegistry_31("STRING_1707299273");
      noLegs_1_1_2.set(LegInstrRegistry_31);
      InstrumentLeg_31.insert(LegInstrRegistry_31.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_31("LOCALMKTDATE_1339731076");
      noLegs_1_1_2.set(LegInterestAccrualDate_31);
      InstrumentLeg_31.insert(LegInterestAccrualDate_31.getString());
      FIX::LegIssueDate LegIssueDate_31("LOCALMKTDATE_156562798");
      noLegs_1_1_2.set(LegIssueDate_31);
      InstrumentLeg_31.insert(LegIssueDate_31.getString());
      FIX::LegIssuer LegIssuer_31("STRING_1228115921");
      noLegs_1_1_2.set(LegIssuer_31);
      InstrumentLeg_31.insert(LegIssuer_31.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_31("STRING_370401148");
      noLegs_1_1_2.set(LegLocaleOfIssue_31);
      InstrumentLeg_31.insert(LegLocaleOfIssue_31.getString());
      FIX::LegMaturityDate LegMaturityDate_31("LOCALMKTDATE_1203958339");
      noLegs_1_1_2.set(LegMaturityDate_31);
      InstrumentLeg_31.insert(LegMaturityDate_31.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_31("MONTHYEAR_1123817035");
      noLegs_1_1_2.set(LegMaturityMonthYear_31);
      InstrumentLeg_31.insert(LegMaturityMonthYear_31.getString());
      FIX::LegMaturityTime LegMaturityTime_31("TZTIMEONLY_1647667967");
      noLegs_1_1_2.set(LegMaturityTime_31);
      InstrumentLeg_31.insert(LegMaturityTime_31.getString());
      FIX::LegOptAttribute LegOptAttribute_31('2');
      noLegs_1_1_2.set(LegOptAttribute_31);
      InstrumentLeg_31.insert(LegOptAttribute_31.getString());
      FIX::LegOptionRatio LegOptionRatio_31;
      LegOptionRatio_31.setString("4807487");
      noLegs_1_1_2.set(LegOptionRatio_31);
      InstrumentLeg_31.insert(LegOptionRatio_31.getString());
      FIX::LegPool LegPool_31("STRING_1083703326");
      noLegs_1_1_2.set(LegPool_31);
      InstrumentLeg_31.insert(LegPool_31.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_31("STRING_1562766773");
      noLegs_1_1_2.set(LegPriceUnitOfMeasure_31);
      InstrumentLeg_31.insert(LegPriceUnitOfMeasure_31.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_31;
      LegPriceUnitOfMeasureQty_31.setString("233847");
      noLegs_1_1_2.set(LegPriceUnitOfMeasureQty_31);
      InstrumentLeg_31.insert(LegPriceUnitOfMeasureQty_31.getString());
      FIX::LegProduct LegProduct_31(397844937);
      noLegs_1_1_2.set(LegProduct_31);
      InstrumentLeg_31.insert(LegProduct_31.getString());
      FIX::LegPutOrCall LegPutOrCall_31(206638115);
      noLegs_1_1_2.set(LegPutOrCall_31);
      InstrumentLeg_31.insert(LegPutOrCall_31.getString());
      FIX::LegRatioQty LegRatioQty_31;
      LegRatioQty_31.setString("15389419");
      noLegs_1_1_2.set(LegRatioQty_31);
      InstrumentLeg_31.insert(LegRatioQty_31.getString());
      FIX::LegRedemptionDate LegRedemptionDate_31("LOCALMKTDATE_2049132902");
      noLegs_1_1_2.set(LegRedemptionDate_31);
      InstrumentLeg_31.insert(LegRedemptionDate_31.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_31("STRING_1011233702");
      noLegs_1_1_2.set(LegRepoCollateralSecurityType_31);
      InstrumentLeg_31.insert(LegRepoCollateralSecurityType_31.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_31;
      LegRepurchaseRate_31.setString("26.340000");
      noLegs_1_1_2.set(LegRepurchaseRate_31);
      InstrumentLeg_31.insert(LegRepurchaseRate_31.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_31(933856282);
      noLegs_1_1_2.set(LegRepurchaseTerm_31);
      InstrumentLeg_31.insert(LegRepurchaseTerm_31.getString());
      FIX::LegSecurityDesc LegSecurityDesc_31("STRING_595198222");
      noLegs_1_1_2.set(LegSecurityDesc_31);
      InstrumentLeg_31.insert(LegSecurityDesc_31.getString());
      FIX::LegSecurityExchange LegSecurityExchange_31("EXCHANGE_1637412687");
      noLegs_1_1_2.set(LegSecurityExchange_31);
      InstrumentLeg_31.insert(LegSecurityExchange_31.getString());
      FIX::LegSecurityID LegSecurityID_31("STRING_268045363");
      noLegs_1_1_2.set(LegSecurityID_31);
      InstrumentLeg_31.insert(LegSecurityID_31.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_31("STRING_2008961031");
      noLegs_1_1_2.set(LegSecurityIDSource_31);
      InstrumentLeg_31.insert(LegSecurityIDSource_31.getString());
      FIX::LegSecuritySubType LegSecuritySubType_31("STRING_333627004");
      noLegs_1_1_2.set(LegSecuritySubType_31);
      InstrumentLeg_31.insert(LegSecuritySubType_31.getString());
      FIX::LegSecurityType LegSecurityType_31("STRING_1876745284");
      noLegs_1_1_2.set(LegSecurityType_31);
      InstrumentLeg_31.insert(LegSecurityType_31.getString());
      FIX::LegSide LegSide_31('2');
      noLegs_1_1_2.set(LegSide_31);
      InstrumentLeg_31.insert(LegSide_31.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_31("STRING_1087809299");
      noLegs_1_1_2.set(LegStateOrProvinceOfIssue_31);
      InstrumentLeg_31.insert(LegStateOrProvinceOfIssue_31.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_31("GBP");
      noLegs_1_1_2.set(LegStrikeCurrency_31);
      InstrumentLeg_31.insert(LegStrikeCurrency_31.getString());
      FIX::LegStrikePrice LegStrikePrice_31;
      LegStrikePrice_31.setString("13096611");
      noLegs_1_1_2.set(LegStrikePrice_31);
      InstrumentLeg_31.insert(LegStrikePrice_31.getString());
      FIX::LegSymbol LegSymbol_31("STRING_942719899");
      noLegs_1_1_2.set(LegSymbol_31);
      InstrumentLeg_31.insert(LegSymbol_31.getString());
      FIX::LegSymbolSfx LegSymbolSfx_31("STRING_836614930");
      noLegs_1_1_2.set(LegSymbolSfx_31);
      InstrumentLeg_31.insert(LegSymbolSfx_31.getString());
      FIX::LegTimeUnit LegTimeUnit_31("STRING_1466223958");
      noLegs_1_1_2.set(LegTimeUnit_31);
      InstrumentLeg_31.insert(LegTimeUnit_31.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_31("STRING_23352173");
      noLegs_1_1_2.set(LegUnitOfMeasure_31);
      InstrumentLeg_31.insert(LegUnitOfMeasure_31.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_31;
      LegUnitOfMeasureQty_31.setString("12070160");
      noLegs_1_1_2.set(LegUnitOfMeasureQty_31);
      InstrumentLeg_31.insert(LegUnitOfMeasureQty_31.getString());
      all_values.push_back(InstrumentLeg_31);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_70;
        FIX::LegSecurityAltID LegSecurityAltID_70("STRING_1147169208");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltID_70);
        LegSecAltIDGrp_NoLegSecurityAltID_70.insert(LegSecurityAltID_70.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_70("STRING_707200398");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltIDSource_70);
        LegSecAltIDGrp_NoLegSecurityAltID_70.insert(LegSecurityAltIDSource_70.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_70);

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_2);
    }
    // Instrument
    multiset<string> Instrument_18;
    FIX::AttachmentPoint AttachmentPoint_18;
    AttachmentPoint_18.setString("39.670000");
    noRelatedSym_0_1.set(AttachmentPoint_18);
    Instrument_18.insert(AttachmentPoint_18.getString());
    FIX::CFICode CFICode_18("STRING_1627917940");
    noRelatedSym_0_1.set(CFICode_18);
    Instrument_18.insert(CFICode_18.getString());
    FIX::CPProgram CPProgram_18(1);
    noRelatedSym_0_1.set(CPProgram_18);
    Instrument_18.insert(CPProgram_18.getString());
    FIX::CPRegType CPRegType_18("STRING_232217093");
    noRelatedSym_0_1.set(CPRegType_18);
    Instrument_18.insert(CPRegType_18.getString());
    FIX::CapPrice CapPrice_18;
    CapPrice_18.setString("16513026");
    noRelatedSym_0_1.set(CapPrice_18);
    Instrument_18.insert(CapPrice_18.getString());
    FIX::ContractMultiplier ContractMultiplier_18;
    ContractMultiplier_18.setString("412650");
    noRelatedSym_0_1.set(ContractMultiplier_18);
    Instrument_18.insert(ContractMultiplier_18.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_18(1);
    noRelatedSym_0_1.set(ContractMultiplierUnit_18);
    Instrument_18.insert(ContractMultiplierUnit_18.getString());
    FIX::ContractSettlMonth ContractSettlMonth_18("MONTHYEAR_1042760999");
    noRelatedSym_0_1.set(ContractSettlMonth_18);
    Instrument_18.insert(ContractSettlMonth_18.getString());
    FIX::CountryOfIssue CountryOfIssue_18("COUNTRY_2090397915");
    noRelatedSym_0_1.set(CountryOfIssue_18);
    Instrument_18.insert(CountryOfIssue_18.getString());
    FIX::CouponPaymentDate CouponPaymentDate_18("LOCALMKTDATE_1450088910");
    noRelatedSym_0_1.set(CouponPaymentDate_18);
    Instrument_18.insert(CouponPaymentDate_18.getString());
    FIX::CouponRate CouponRate_18;
    CouponRate_18.setString("36.330000");
    noRelatedSym_0_1.set(CouponRate_18);
    Instrument_18.insert(CouponRate_18.getString());
    FIX::CreditRating CreditRating_18("STRING_876770550");
    noRelatedSym_0_1.set(CreditRating_18);
    Instrument_18.insert(CreditRating_18.getString());
    FIX::DatedDate DatedDate_18("LOCALMKTDATE_2045287133");
    noRelatedSym_0_1.set(DatedDate_18);
    Instrument_18.insert(DatedDate_18.getString());
    FIX::DetachmentPoint DetachmentPoint_18;
    DetachmentPoint_18.setString("26.730000");
    noRelatedSym_0_1.set(DetachmentPoint_18);
    Instrument_18.insert(DetachmentPoint_18.getString());
    FIX::EncodedIssuer EncodedIssuer_18("DATA_1144815913");
    noRelatedSym_0_1.set(EncodedIssuer_18);
    Instrument_18.insert(EncodedIssuer_18.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_18(1906764516);
    noRelatedSym_0_1.set(EncodedIssuerLen_18);
    Instrument_18.insert(EncodedIssuerLen_18.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_18("DATA_1343949677");
    noRelatedSym_0_1.set(EncodedSecurityDesc_18);
    Instrument_18.insert(EncodedSecurityDesc_18.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_18(874077549);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_18);
    Instrument_18.insert(EncodedSecurityDescLen_18.getString());
    FIX::ExerciseStyle ExerciseStyle_18(1);
    noRelatedSym_0_1.set(ExerciseStyle_18);
    Instrument_18.insert(ExerciseStyle_18.getString());
    FIX::Factor Factor_18;
    Factor_18.setString("2842753");
    noRelatedSym_0_1.set(Factor_18);
    Instrument_18.insert(Factor_18.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_18(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_18);
    Instrument_18.insert(FlexProductEligibilityIndicator_18.getString());
    FIX::FlexibleIndicator FlexibleIndicator_18(true);
    noRelatedSym_0_1.set(FlexibleIndicator_18);
    Instrument_18.insert(FlexibleIndicator_18.getString());
    FIX::FloorPrice FloorPrice_18;
    FloorPrice_18.setString("15939364");
    noRelatedSym_0_1.set(FloorPrice_18);
    Instrument_18.insert(FloorPrice_18.getString());
    FIX::FlowScheduleType FlowScheduleType_18(0);
    noRelatedSym_0_1.set(FlowScheduleType_18);
    Instrument_18.insert(FlowScheduleType_18.getString());
    FIX::InstrRegistry InstrRegistry_18("STRING_87055482");
    noRelatedSym_0_1.set(InstrRegistry_18);
    Instrument_18.insert(InstrRegistry_18.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_18('9');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_18);
    Instrument_18.insert(InstrmtAssignmentMethod_18.getString());
    FIX::InterestAccrualDate InterestAccrualDate_18("LOCALMKTDATE_1075570248");
    noRelatedSym_0_1.set(InterestAccrualDate_18);
    Instrument_18.insert(InterestAccrualDate_18.getString());
    FIX::IssueDate IssueDate_18("LOCALMKTDATE_1294071561");
    noRelatedSym_0_1.set(IssueDate_18);
    Instrument_18.insert(IssueDate_18.getString());
    FIX::Issuer Issuer_18("STRING_1435375448");
    noRelatedSym_0_1.set(Issuer_18);
    Instrument_18.insert(Issuer_18.getString());
    FIX::ListMethod ListMethod_18(0);
    noRelatedSym_0_1.set(ListMethod_18);
    Instrument_18.insert(ListMethod_18.getString());
    FIX::LocaleOfIssue LocaleOfIssue_18("STRING_2001271959");
    noRelatedSym_0_1.set(LocaleOfIssue_18);
    Instrument_18.insert(LocaleOfIssue_18.getString());
    FIX::MaturityDate MaturityDate_18("LOCALMKTDATE_104825767");
    noRelatedSym_0_1.set(MaturityDate_18);
    Instrument_18.insert(MaturityDate_18.getString());
    FIX::MaturityMonthYear MaturityMonthYear_18("MONTHYEAR_1703173748");
    noRelatedSym_0_1.set(MaturityMonthYear_18);
    Instrument_18.insert(MaturityMonthYear_18.getString());
    FIX::MaturityTime MaturityTime_18("TZTIMEONLY_1644692035");
    noRelatedSym_0_1.set(MaturityTime_18);
    Instrument_18.insert(MaturityTime_18.getString());
    FIX::MinPriceIncrement MinPriceIncrement_18;
    MinPriceIncrement_18.setString("3370428");
    noRelatedSym_0_1.set(MinPriceIncrement_18);
    Instrument_18.insert(MinPriceIncrement_18.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_18;
    MinPriceIncrementAmount_18.setString("12069927");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_18);
    Instrument_18.insert(MinPriceIncrementAmount_18.getString());
    FIX::NTPositionLimit NTPositionLimit_18(1685957049);
    noRelatedSym_0_1.set(NTPositionLimit_18);
    Instrument_18.insert(NTPositionLimit_18.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_18;
    NotionalPercentageOutstanding_18.setString("80.680000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_18);
    Instrument_18.insert(NotionalPercentageOutstanding_18.getString());
    FIX::OptAttribute OptAttribute_18('1');
    noRelatedSym_0_1.set(OptAttribute_18);
    Instrument_18.insert(OptAttribute_18.getString());
    FIX::OptPayoutAmount OptPayoutAmount_18;
    OptPayoutAmount_18.setString("16288713");
    noRelatedSym_0_1.set(OptPayoutAmount_18);
    Instrument_18.insert(OptPayoutAmount_18.getString());
    FIX::OptPayoutType OptPayoutType_18(1);
    noRelatedSym_0_1.set(OptPayoutType_18);
    Instrument_18.insert(OptPayoutType_18.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_18;
    OriginalNotionalPercentageOutstanding_18.setString("37.520000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_18);
    Instrument_18.insert(OriginalNotionalPercentageOutstanding_18.getString());
    FIX::Pool Pool_18("STRING_358158218");
    noRelatedSym_0_1.set(Pool_18);
    Instrument_18.insert(Pool_18.getString());
    FIX::PositionLimit PositionLimit_18(2123790464);
    noRelatedSym_0_1.set(PositionLimit_18);
    Instrument_18.insert(PositionLimit_18.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_18("STRING_INX");
    noRelatedSym_0_1.set(PriceQuoteMethod_18);
    Instrument_18.insert(PriceQuoteMethod_18.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_18("STRING_1502974132");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_18);
    Instrument_18.insert(PriceUnitOfMeasure_18.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_18;
    PriceUnitOfMeasureQty_18.setString("18830713");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_18);
    Instrument_18.insert(PriceUnitOfMeasureQty_18.getString());
    FIX::Product Product_20(12);
    noRelatedSym_0_1.set(Product_20);
    Instrument_18.insert(Product_20.getString());
    FIX::ProductComplex ProductComplex_18("STRING_229568033");
    noRelatedSym_0_1.set(ProductComplex_18);
    Instrument_18.insert(ProductComplex_18.getString());
    FIX::PutOrCall PutOrCall_18(0);
    noRelatedSym_0_1.set(PutOrCall_18);
    Instrument_18.insert(PutOrCall_18.getString());
    FIX::RedemptionDate RedemptionDate_18("LOCALMKTDATE_2113727782");
    noRelatedSym_0_1.set(RedemptionDate_18);
    Instrument_18.insert(RedemptionDate_18.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_18("STRING_339066209");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_18);
    Instrument_18.insert(RepoCollateralSecurityType_18.getString());
    FIX::RepurchaseRate RepurchaseRate_18;
    RepurchaseRate_18.setString("85.820000");
    noRelatedSym_0_1.set(RepurchaseRate_18);
    Instrument_18.insert(RepurchaseRate_18.getString());
    FIX::RepurchaseTerm RepurchaseTerm_18(1560180622);
    noRelatedSym_0_1.set(RepurchaseTerm_18);
    Instrument_18.insert(RepurchaseTerm_18.getString());
    FIX::RestructuringType RestructuringType_18("STRING_MR");
    noRelatedSym_0_1.set(RestructuringType_18);
    Instrument_18.insert(RestructuringType_18.getString());
    FIX::SecurityDesc SecurityDesc_18("STRING_974124064");
    noRelatedSym_0_1.set(SecurityDesc_18);
    Instrument_18.insert(SecurityDesc_18.getString());
    FIX::SecurityExchange SecurityExchange_18("EXCHANGE_325373773");
    noRelatedSym_0_1.set(SecurityExchange_18);
    Instrument_18.insert(SecurityExchange_18.getString());
    FIX::SecurityGroup SecurityGroup_18("STRING_319370885");
    noRelatedSym_0_1.set(SecurityGroup_18);
    Instrument_18.insert(SecurityGroup_18.getString());
    FIX::SecurityID SecurityID_18("STRING_120711977");
    noRelatedSym_0_1.set(SecurityID_18);
    Instrument_18.insert(SecurityID_18.getString());
    FIX::SecurityIDSource SecurityIDSource_18("STRING_C");
    noRelatedSym_0_1.set(SecurityIDSource_18);
    Instrument_18.insert(SecurityIDSource_18.getString());
    FIX::SecurityStatus SecurityStatus_18("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_18);
    Instrument_18.insert(SecurityStatus_18.getString());
    FIX::SecuritySubType SecuritySubType_18("STRING_2121983936");
    noRelatedSym_0_1.set(SecuritySubType_18);
    Instrument_18.insert(SecuritySubType_18.getString());
    FIX::SecurityType SecurityType_20("STRING_CAMM");
    noRelatedSym_0_1.set(SecurityType_20);
    Instrument_18.insert(SecurityType_20.getString());
    FIX::Seniority Seniority_18("STRING_SD");
    noRelatedSym_0_1.set(Seniority_18);
    Instrument_18.insert(Seniority_18.getString());
    FIX::SettlMethod SettlMethod_18('C');
    noRelatedSym_0_1.set(SettlMethod_18);
    Instrument_18.insert(SettlMethod_18.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_18("STRING_55134201");
    noRelatedSym_0_1.set(SettleOnOpenFlag_18);
    Instrument_18.insert(SettleOnOpenFlag_18.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_18("STRING_1157309562");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_18);
    Instrument_18.insert(StateOrProvinceOfIssue_18.getString());
    FIX::StrikeCurrency StrikeCurrency_18("EUR");
    noRelatedSym_0_1.set(StrikeCurrency_18);
    Instrument_18.insert(StrikeCurrency_18.getString());
    FIX::StrikeMultiplier StrikeMultiplier_18;
    StrikeMultiplier_18.setString("12595796");
    noRelatedSym_0_1.set(StrikeMultiplier_18);
    Instrument_18.insert(StrikeMultiplier_18.getString());
    FIX::StrikePrice StrikePrice_18;
    StrikePrice_18.setString("6390533");
    noRelatedSym_0_1.set(StrikePrice_18);
    Instrument_18.insert(StrikePrice_18.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_18(1);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_18);
    Instrument_18.insert(StrikePriceBoundaryMethod_18.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_18;
    StrikePriceBoundaryPrecision_18.setString("97.860000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_18);
    Instrument_18.insert(StrikePriceBoundaryPrecision_18.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_18(1);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_18);
    Instrument_18.insert(StrikePriceDeterminationMethod_18.getString());
    FIX::StrikeValue StrikeValue_18;
    StrikeValue_18.setString("8858424");
    noRelatedSym_0_1.set(StrikeValue_18);
    Instrument_18.insert(StrikeValue_18.getString());
    FIX::Symbol Symbol_18("STRING_1220262563");
    noRelatedSym_0_1.set(Symbol_18);
    Instrument_18.insert(Symbol_18.getString());
    FIX::SymbolSfx SymbolSfx_18("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_18);
    Instrument_18.insert(SymbolSfx_18.getString());
    FIX::TimeUnit TimeUnit_18("STRING_Wk");
    noRelatedSym_0_1.set(TimeUnit_18);
    Instrument_18.insert(TimeUnit_18.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_18(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_18);
    Instrument_18.insert(UnderlyingPriceDeterminationMethod_18.getString());
    FIX::UnitOfMeasure UnitOfMeasure_18("STRING_Alw");
    noRelatedSym_0_1.set(UnitOfMeasure_18);
    Instrument_18.insert(UnitOfMeasure_18.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_18;
    UnitOfMeasureQty_18.setString("1105744");
    noRelatedSym_0_1.set(UnitOfMeasureQty_18);
    Instrument_18.insert(UnitOfMeasureQty_18.getString());
    FIX::ValuationMethod ValuationMethod_18("STRING_CDSD");
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
      ComplexEventPrice_39.setString("2811724");
      noComplexEvents_1_1_0.set(ComplexEventPrice_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPrice_39.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_39(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceBoundaryMethod_39.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_39;
      ComplexEventPriceBoundaryPrecision_39.setString("71.290000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceBoundaryPrecision_39.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_39(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventPriceTimeType_39.getString());
      FIX::ComplexEventType ComplexEventType_39(8);
      noComplexEvents_1_1_0.set(ComplexEventType_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexEventType_39.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_39;
      ComplexOptPayoutAmount_39.setString("20924791");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_39);
      ComplexEvents_NoComplexEvents_39.insert(ComplexOptPayoutAmount_39.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_39);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_80;
        FIX::ComplexEventEndDate ComplexEventEndDate_80(FIX::UTCTIMESTAMP(11, 53, 10, 11, 3, 2004));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_80);
        ComplexEventDates_NoComplexEventDates_80.insert(ComplexEventEndDate_80.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_80(FIX::UTCTIMESTAMP(20, 26, 41, 20, 5, 2005));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_80);
        ComplexEventDates_NoComplexEventDates_80.insert(ComplexEventStartDate_80.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_80);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_173;
          FIX::ComplexEventEndTime ComplexEventEndTime_173(FIX::UTCTIMEONLY(9, 5, 37));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_173);
          ComplexEventTimes_NoComplexEventTimes_173.insert(ComplexEventEndTime_173.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_173(FIX::UTCTIMEONLY(20, 14, 10));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_173);
          ComplexEventTimes_NoComplexEventTimes_173.insert(ComplexEventStartTime_173.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_173);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_81;
        FIX::ComplexEventEndDate ComplexEventEndDate_81(FIX::UTCTIMESTAMP(1, 6, 53, 5, 12, 2014));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_81);
        ComplexEventDates_NoComplexEventDates_81.insert(ComplexEventEndDate_81.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_81(FIX::UTCTIMESTAMP(23, 59, 35, 1, 3, 2000));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_81);
        ComplexEventDates_NoComplexEventDates_81.insert(ComplexEventStartDate_81.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_81);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_174;
          FIX::ComplexEventEndTime ComplexEventEndTime_174(FIX::UTCTIMEONLY(6, 47, 23));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_174);
          ComplexEventTimes_NoComplexEventTimes_174.insert(ComplexEventEndTime_174.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_174(FIX::UTCTIMEONLY(19, 29, 43));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_174);
          ComplexEventTimes_NoComplexEventTimes_174.insert(ComplexEventStartTime_174.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_174);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_175;
          FIX::ComplexEventEndTime ComplexEventEndTime_175(FIX::UTCTIMEONLY(14, 49, 8));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_175);
          ComplexEventTimes_NoComplexEventTimes_175.insert(ComplexEventEndTime_175.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_175(FIX::UTCTIMEONLY(13, 22, 23));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_175);
          ComplexEventTimes_NoComplexEventTimes_175.insert(ComplexEventStartTime_175.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_175);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_176;
          FIX::ComplexEventEndTime ComplexEventEndTime_176(FIX::UTCTIMEONLY(15, 21, 59));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_176);
          ComplexEventTimes_NoComplexEventTimes_176.insert(ComplexEventEndTime_176.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_176(FIX::UTCTIMEONLY(1, 23, 34));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_176);
          ComplexEventTimes_NoComplexEventTimes_176.insert(ComplexEventStartTime_176.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_176);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
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
      multiset<string> EvntGrp_NoEvents_32;
      FIX::EventDate EventDate_32("LOCALMKTDATE_2098973362");
      noEvents_1_1_0.set(EventDate_32);
      EvntGrp_NoEvents_32.insert(EventDate_32.getString());
      FIX::EventPx EventPx_32;
      EventPx_32.setString("6765287");
      noEvents_1_1_0.set(EventPx_32);
      EvntGrp_NoEvents_32.insert(EventPx_32.getString());
      FIX::EventText EventText_32("STRING_1410736405");
      noEvents_1_1_0.set(EventText_32);
      EvntGrp_NoEvents_32.insert(EventText_32.getString());
      FIX::EventTime EventTime_32(FIX::UTCTIMESTAMP(0, 46, 58, 26, 11, 2009));
      noEvents_1_1_0.set(EventTime_32);
      EvntGrp_NoEvents_32.insert(EventTime_32.getString());
      FIX::EventType EventType_32(5);
      noEvents_1_1_0.set(EventType_32);
      EvntGrp_NoEvents_32.insert(EventType_32.getString());
      all_values.push_back(EvntGrp_NoEvents_32);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_34;
      FIX::InstrumentPartyID InstrumentPartyID_34("STRING_548027202");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_34);
      InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyID_34.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_34('4');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_34);
      InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyIDSource_34.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_34(2024488536);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_34);
      InstrumentParties_NoInstrumentParties_34.insert(InstrumentPartyRole_34.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_34);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80;
        FIX::InstrumentPartySubID InstrumentPartySubID_80("STRING_1871525737");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_80);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80.insert(InstrumentPartySubID_80.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_80(1026034717);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_80);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80.insert(InstrumentPartySubIDType_80.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_38;
      FIX::SecurityAltID SecurityAltID_38("STRING_176682678");
      noSecurityAltID_1_1_0.set(SecurityAltID_38);
      SecAltIDGrp_NoSecurityAltID_38.insert(SecurityAltID_38.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_38("STRING_557199771");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_38);
      SecAltIDGrp_NoSecurityAltID_38.insert(SecurityAltIDSource_38.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_38);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_39;
      FIX::SecurityAltID SecurityAltID_39("STRING_1841501522");
      noSecurityAltID_1_1_1.set(SecurityAltID_39);
      SecAltIDGrp_NoSecurityAltID_39.insert(SecurityAltID_39.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_39("STRING_683451271");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_39);
      SecAltIDGrp_NoSecurityAltID_39.insert(SecurityAltIDSource_39.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_39);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_36;
    FIX::SecurityXML SecurityXML_37("XMLDATA_899156179");
    noRelatedSym_0_1.set(SecurityXML_37);
    FIX::SecurityXMLLen SecurityXMLLen_18(1623637335);
    noRelatedSym_0_1.set(SecurityXMLLen_18);
    FIX::SecurityXMLSchema SecurityXMLSchema_18("STRING_1068631350");
    noRelatedSym_0_1.set(SecurityXMLSchema_18);
    SecurityXML_36.insert(SecurityXMLSchema_18.getString());
    all_values.push_back(SecurityXML_36);

    // InstrumentExtension
    multiset<string> InstrumentExtension_5;
    FIX::DeliveryForm DeliveryForm_5(2);
    noRelatedSym_0_1.set(DeliveryForm_5);
    InstrumentExtension_5.insert(DeliveryForm_5.getString());
    FIX::PctAtRisk PctAtRisk_5;
    PctAtRisk_5.setString("44.080000");
    noRelatedSym_0_1.set(PctAtRisk_5);
    InstrumentExtension_5.insert(PctAtRisk_5.getString());
    all_values.push_back(InstrumentExtension_5);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_9;
      FIX::InstrAttribType InstrAttribType_9(9);
      noInstrAttrib_1_1_0.set(InstrAttribType_9);
      AttrbGrp_NoInstrAttrib_9.insert(InstrAttribType_9.getString());
      FIX::InstrAttribValue InstrAttribValue_9("STRING_1107923648");
      noInstrAttrib_1_1_0.set(InstrAttribValue_9);
      AttrbGrp_NoInstrAttrib_9.insert(InstrAttribValue_9.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_9);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_10;
      FIX::InstrAttribType InstrAttribType_10(8);
      noInstrAttrib_1_1_1.set(InstrAttribType_10);
      AttrbGrp_NoInstrAttrib_10.insert(InstrAttribType_10.getString());
      FIX::InstrAttribValue InstrAttribValue_10("STRING_288971432");
      noInstrAttrib_1_1_1.set(InstrAttribValue_10);
      AttrbGrp_NoInstrAttrib_10.insert(InstrAttribValue_10.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_10);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_11;
      FIX::InstrAttribType InstrAttribType_11(26);
      noInstrAttrib_1_1_2.set(InstrAttribType_11);
      AttrbGrp_NoInstrAttrib_11.insert(InstrAttribType_11.getString());
      FIX::InstrAttribValue InstrAttribValue_11("STRING_314304915");
      noInstrAttrib_1_1_2.set(InstrAttribValue_11);
      AttrbGrp_NoInstrAttrib_11.insert(InstrAttribValue_11.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_11);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_2);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_1;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_1;
    SecondaryHighLimitPrice_1.setString("3861064");
    noRelatedSym_0_1.set(SecondaryHighLimitPrice_1);
    SecondaryPriceLimits_1.insert(SecondaryHighLimitPrice_1.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_1;
    SecondaryLowLimitPrice_1.setString("15784135");
    noRelatedSym_0_1.set(SecondaryLowLimitPrice_1);
    SecondaryPriceLimits_1.insert(SecondaryLowLimitPrice_1.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_1(1230362653);
    noRelatedSym_0_1.set(SecondaryPriceLimitType_1);
    SecondaryPriceLimits_1.insert(SecondaryPriceLimitType_1.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_1;
    SecondaryTradingReferencePrice_1.setString("7279174");
    noRelatedSym_0_1.set(SecondaryTradingReferencePrice_1);
    SecondaryPriceLimits_1.insert(SecondaryTradingReferencePrice_1.getString());
    all_values.push_back(SecondaryPriceLimits_1);

    msg.addGroup(noRelatedSym_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_33;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_33("DATA_1533524858");
  msg.set(EncodedUnderlyingIssuer_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingIssuer_33.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_33(869837547);
  msg.set(EncodedUnderlyingIssuerLen_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingIssuerLen_33.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_33("DATA_900526038");
  msg.set(EncodedUnderlyingSecurityDesc_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingSecurityDesc_33.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_33(2070126935);
  msg.set(EncodedUnderlyingSecurityDescLen_33);
  UnderlyingInstrument_33.insert(EncodedUnderlyingSecurityDescLen_33.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_33;
  UnderlyingAdjustedQuantity_33.setString("14178647");
  msg.set(UnderlyingAdjustedQuantity_33);
  UnderlyingInstrument_33.insert(UnderlyingAdjustedQuantity_33.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_33;
  UnderlyingAllocationPercent_33.setString("61.260000");
  msg.set(UnderlyingAllocationPercent_33);
  UnderlyingInstrument_33.insert(UnderlyingAllocationPercent_33.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_33;
  UnderlyingAttachmentPoint_33.setString("18.240000");
  msg.set(UnderlyingAttachmentPoint_33);
  UnderlyingInstrument_33.insert(UnderlyingAttachmentPoint_33.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_33("STRING_1117314214");
  msg.set(UnderlyingCFICode_33);
  UnderlyingInstrument_33.insert(UnderlyingCFICode_33.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_33("STRING_1099938215");
  msg.set(UnderlyingCPProgram_33);
  UnderlyingInstrument_33.insert(UnderlyingCPProgram_33.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_33("STRING_825682893");
  msg.set(UnderlyingCPRegType_33);
  UnderlyingInstrument_33.insert(UnderlyingCPRegType_33.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_33;
  UnderlyingCapValue_33.setString("9408096");
  msg.set(UnderlyingCapValue_33);
  UnderlyingInstrument_33.insert(UnderlyingCapValue_33.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_33;
  UnderlyingCashAmount_33.setString("12766208");
  msg.set(UnderlyingCashAmount_33);
  UnderlyingInstrument_33.insert(UnderlyingCashAmount_33.getString());
  FIX::UnderlyingCashType UnderlyingCashType_33("STRING_FIXED");
  msg.set(UnderlyingCashType_33);
  UnderlyingInstrument_33.insert(UnderlyingCashType_33.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_33;
  UnderlyingContractMultiplier_33.setString("6348275");
  msg.set(UnderlyingContractMultiplier_33);
  UnderlyingInstrument_33.insert(UnderlyingContractMultiplier_33.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_33(1960072165);
  msg.set(UnderlyingContractMultiplierUnit_33);
  UnderlyingInstrument_33.insert(UnderlyingContractMultiplierUnit_33.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_33("COUNTRY_134555195");
  msg.set(UnderlyingCountryOfIssue_33);
  UnderlyingInstrument_33.insert(UnderlyingCountryOfIssue_33.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_33("LOCALMKTDATE_110981234");
  msg.set(UnderlyingCouponPaymentDate_33);
  UnderlyingInstrument_33.insert(UnderlyingCouponPaymentDate_33.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_33;
  UnderlyingCouponRate_33.setString("98.670000");
  msg.set(UnderlyingCouponRate_33);
  UnderlyingInstrument_33.insert(UnderlyingCouponRate_33.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_33("STRING_645521739");
  msg.set(UnderlyingCreditRating_33);
  UnderlyingInstrument_33.insert(UnderlyingCreditRating_33.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_33("CHF");
  msg.set(UnderlyingCurrency_33);
  UnderlyingInstrument_33.insert(UnderlyingCurrency_33.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_33;
  UnderlyingCurrentValue_33.setString("2579644");
  msg.set(UnderlyingCurrentValue_33);
  UnderlyingInstrument_33.insert(UnderlyingCurrentValue_33.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_33;
  UnderlyingDetachmentPoint_33.setString("56.430000");
  msg.set(UnderlyingDetachmentPoint_33);
  UnderlyingInstrument_33.insert(UnderlyingDetachmentPoint_33.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_33;
  UnderlyingDirtyPrice_33.setString("12396626");
  msg.set(UnderlyingDirtyPrice_33);
  UnderlyingInstrument_33.insert(UnderlyingDirtyPrice_33.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_33;
  UnderlyingEndPrice_33.setString("5469358");
  msg.set(UnderlyingEndPrice_33);
  UnderlyingInstrument_33.insert(UnderlyingEndPrice_33.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_33;
  UnderlyingEndValue_33.setString("12444920");
  msg.set(UnderlyingEndValue_33);
  UnderlyingInstrument_33.insert(UnderlyingEndValue_33.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_33(1553967596);
  msg.set(UnderlyingExerciseStyle_33);
  UnderlyingInstrument_33.insert(UnderlyingExerciseStyle_33.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_33;
  UnderlyingFXRate_33.setString("9330423");
  msg.set(UnderlyingFXRate_33);
  UnderlyingInstrument_33.insert(UnderlyingFXRate_33.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_33('M');
  msg.set(UnderlyingFXRateCalc_33);
  UnderlyingInstrument_33.insert(UnderlyingFXRateCalc_33.getString());
  FIX::UnderlyingFactor UnderlyingFactor_33;
  UnderlyingFactor_33.setString("6368466");
  msg.set(UnderlyingFactor_33);
  UnderlyingInstrument_33.insert(UnderlyingFactor_33.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_33(1660959843);
  msg.set(UnderlyingFlowScheduleType_33);
  UnderlyingInstrument_33.insert(UnderlyingFlowScheduleType_33.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_33("STRING_61463203");
  msg.set(UnderlyingInstrRegistry_33);
  UnderlyingInstrument_33.insert(UnderlyingInstrRegistry_33.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_33("LOCALMKTDATE_1506684148");
  msg.set(UnderlyingIssueDate_33);
  UnderlyingInstrument_33.insert(UnderlyingIssueDate_33.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_33("STRING_414002233");
  msg.set(UnderlyingIssuer_33);
  UnderlyingInstrument_33.insert(UnderlyingIssuer_33.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_33("STRING_2131590138");
  msg.set(UnderlyingLocaleOfIssue_33);
  UnderlyingInstrument_33.insert(UnderlyingLocaleOfIssue_33.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_33("LOCALMKTDATE_777065250");
  msg.set(UnderlyingMaturityDate_33);
  UnderlyingInstrument_33.insert(UnderlyingMaturityDate_33.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_33("MONTHYEAR_1789898360");
  msg.set(UnderlyingMaturityMonthYear_33);
  UnderlyingInstrument_33.insert(UnderlyingMaturityMonthYear_33.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_33("TZTIMEONLY_1931238314");
  msg.set(UnderlyingMaturityTime_33);
  UnderlyingInstrument_33.insert(UnderlyingMaturityTime_33.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_33;
  UnderlyingNotionalPercentageOutstanding_33.setString("94.640000");
  msg.set(UnderlyingNotionalPercentageOutstanding_33);
  UnderlyingInstrument_33.insert(UnderlyingNotionalPercentageOutstanding_33.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_33('7');
  msg.set(UnderlyingOptAttribute_33);
  UnderlyingInstrument_33.insert(UnderlyingOptAttribute_33.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_33;
  UnderlyingOriginalNotionalPercentageOutstanding_33.setString("75.590000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_33);
  UnderlyingInstrument_33.insert(UnderlyingOriginalNotionalPercentageOutstanding_33.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_33("STRING_687705489");
  msg.set(UnderlyingPriceUnitOfMeasure_33);
  UnderlyingInstrument_33.insert(UnderlyingPriceUnitOfMeasure_33.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_33;
  UnderlyingPriceUnitOfMeasureQty_33.setString("20189738");
  msg.set(UnderlyingPriceUnitOfMeasureQty_33);
  UnderlyingInstrument_33.insert(UnderlyingPriceUnitOfMeasureQty_33.getString());
  FIX::UnderlyingProduct UnderlyingProduct_33(1992320224);
  msg.set(UnderlyingProduct_33);
  UnderlyingInstrument_33.insert(UnderlyingProduct_33.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_33(1322533036);
  msg.set(UnderlyingPutOrCall_33);
  UnderlyingInstrument_33.insert(UnderlyingPutOrCall_33.getString());
  FIX::UnderlyingPx UnderlyingPx_33;
  UnderlyingPx_33.setString("18315623");
  msg.set(UnderlyingPx_33);
  UnderlyingInstrument_33.insert(UnderlyingPx_33.getString());
  FIX::UnderlyingQty UnderlyingQty_33;
  UnderlyingQty_33.setString("21268754");
  msg.set(UnderlyingQty_33);
  UnderlyingInstrument_33.insert(UnderlyingQty_33.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_33("LOCALMKTDATE_1433514271");
  msg.set(UnderlyingRedemptionDate_33);
  UnderlyingInstrument_33.insert(UnderlyingRedemptionDate_33.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_33("STRING_565298557");
  msg.set(UnderlyingRepoCollateralSecurityType_33);
  UnderlyingInstrument_33.insert(UnderlyingRepoCollateralSecurityType_33.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_33;
  UnderlyingRepurchaseRate_33.setString("35.100000");
  msg.set(UnderlyingRepurchaseRate_33);
  UnderlyingInstrument_33.insert(UnderlyingRepurchaseRate_33.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_33(1198906266);
  msg.set(UnderlyingRepurchaseTerm_33);
  UnderlyingInstrument_33.insert(UnderlyingRepurchaseTerm_33.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_33("STRING_576253150");
  msg.set(UnderlyingRestructuringType_33);
  UnderlyingInstrument_33.insert(UnderlyingRestructuringType_33.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_33("STRING_882877939");
  msg.set(UnderlyingSecurityDesc_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityDesc_33.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_33("EXCHANGE_2072221909");
  msg.set(UnderlyingSecurityExchange_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityExchange_33.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_33("STRING_1815915831");
  msg.set(UnderlyingSecurityID_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityID_33.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_33("STRING_1429813800");
  msg.set(UnderlyingSecurityIDSource_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityIDSource_33.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_33("STRING_1169230310");
  msg.set(UnderlyingSecuritySubType_33);
  UnderlyingInstrument_33.insert(UnderlyingSecuritySubType_33.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_33("STRING_1222399779");
  msg.set(UnderlyingSecurityType_33);
  UnderlyingInstrument_33.insert(UnderlyingSecurityType_33.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_33("STRING_215372501");
  msg.set(UnderlyingSeniority_33);
  UnderlyingInstrument_33.insert(UnderlyingSeniority_33.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_33("STRING_1844652303");
  msg.set(UnderlyingSettlMethod_33);
  UnderlyingInstrument_33.insert(UnderlyingSettlMethod_33.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_33(4);
  msg.set(UnderlyingSettlementType_33);
  UnderlyingInstrument_33.insert(UnderlyingSettlementType_33.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_33;
  UnderlyingStartValue_33.setString("18763323");
  msg.set(UnderlyingStartValue_33);
  UnderlyingInstrument_33.insert(UnderlyingStartValue_33.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_33("STRING_1906115506");
  msg.set(UnderlyingStateOrProvinceOfIssue_33);
  UnderlyingInstrument_33.insert(UnderlyingStateOrProvinceOfIssue_33.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_33("GBP");
  msg.set(UnderlyingStrikeCurrency_33);
  UnderlyingInstrument_33.insert(UnderlyingStrikeCurrency_33.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_33;
  UnderlyingStrikePrice_33.setString("18902219");
  msg.set(UnderlyingStrikePrice_33);
  UnderlyingInstrument_33.insert(UnderlyingStrikePrice_33.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_33("STRING_1995512131");
  msg.set(UnderlyingSymbol_33);
  UnderlyingInstrument_33.insert(UnderlyingSymbol_33.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_33("STRING_1932749290");
  msg.set(UnderlyingSymbolSfx_33);
  UnderlyingInstrument_33.insert(UnderlyingSymbolSfx_33.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_33("STRING_1673976663");
  msg.set(UnderlyingTimeUnit_33);
  UnderlyingInstrument_33.insert(UnderlyingTimeUnit_33.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_33("STRING_1742407947");
  msg.set(UnderlyingUnitOfMeasure_33);
  UnderlyingInstrument_33.insert(UnderlyingUnitOfMeasure_33.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_33;
  UnderlyingUnitOfMeasureQty_33.setString("5276185");
  msg.set(UnderlyingUnitOfMeasureQty_33);
  UnderlyingInstrument_33.insert(UnderlyingUnitOfMeasureQty_33.getString());
  all_values.push_back(UnderlyingInstrument_33);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_71;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_71("STRING_282629789");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_71);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_71.insert(UnderlyingSecurityAltID_71.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_71("STRING_399108742");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_71);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_71.insert(UnderlyingSecurityAltIDSource_71.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_71);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_72;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_72("STRING_2128250799");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_72);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_72.insert(UnderlyingSecurityAltID_72.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_72("STRING_1605162825");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_72);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_72.insert(UnderlyingSecurityAltIDSource_72.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_72);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_73;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_73("STRING_83187432");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_73);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_73.insert(UnderlyingSecurityAltID_73.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_73("STRING_2107642570");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_73);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_73.insert(UnderlyingSecurityAltIDSource_73.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_73);

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_61;
    FIX::UnderlyingStipType UnderlyingStipType_61("STRING_648485990");
    noUnderlyingStips_0_0.set(UnderlyingStipType_61);
    UnderlyingStipulations_NoUnderlyingStips_61.insert(UnderlyingStipType_61.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_61("STRING_585072433");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_61);
    UnderlyingStipulations_NoUnderlyingStips_61.insert(UnderlyingStipValue_61.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_61);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_62;
    FIX::UnderlyingStipType UnderlyingStipType_62("STRING_2090099714");
    noUnderlyingStips_0_1.set(UnderlyingStipType_62);
    UnderlyingStipulations_NoUnderlyingStips_62.insert(UnderlyingStipType_62.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_62("STRING_1224739140");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_62);
    UnderlyingStipulations_NoUnderlyingStips_62.insert(UnderlyingStipValue_62.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_62);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_63;
    FIX::UnderlyingStipType UnderlyingStipType_63("STRING_1467950372");
    noUnderlyingStips_0_2.set(UnderlyingStipType_63);
    UnderlyingStipulations_NoUnderlyingStips_63.insert(UnderlyingStipType_63.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_63("STRING_2014837976");
    noUnderlyingStips_0_2.set(UnderlyingStipValue_63);
    UnderlyingStipulations_NoUnderlyingStips_63.insert(UnderlyingStipValue_63.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_63);

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_65;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_65("STRING_750280525");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_65);
    UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyID_65.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_65('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_65);
    UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyIDSource_65.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_65(2115571102);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_65);
    UndlyInstrumentParties_NoUndlyInstrumentParties_65.insert(UnderlyingInstrumentPartyRole_65.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_65);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_142("STRING_733753294");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_142);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142.insert(UnderlyingInstrumentPartySubID_142.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_142(1827333835);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_142);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142.insert(UnderlyingInstrumentPartySubIDType_142.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_142);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_66;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_66("STRING_694501723");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_66);
    UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyID_66.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_66('4');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_66);
    UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyIDSource_66.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_66(898297068);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_66);
    UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyRole_66.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_66);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_143("STRING_235123501");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_143);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143.insert(UnderlyingInstrumentPartySubID_143.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_143(746325551);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_143);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143.insert(UnderlyingInstrumentPartySubIDType_143.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143);

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
