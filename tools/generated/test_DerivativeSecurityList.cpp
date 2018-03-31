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
  FIX::ClearingBusinessDate ClearingBusinessDate_13("LOCALMKTDATE_2028852416");
  msg.set(ClearingBusinessDate_13);
  DerivativeSecurityList_0.insert(ClearingBusinessDate_13.getString());
  FIX::LastFragment LastFragment_3(false);
  msg.set(LastFragment_3);
  DerivativeSecurityList_0.insert(LastFragment_3.getString());
  FIX::SecurityReportID SecurityReportID_0(1164605420);
  msg.set(SecurityReportID_0);
  DerivativeSecurityList_0.insert(SecurityReportID_0.getString());
  FIX::SecurityReqID SecurityReqID_0("STRING_1168965005");
  msg.set(SecurityReqID_0);
  DerivativeSecurityList_0.insert(SecurityReqID_0.getString());
  FIX::SecurityRequestResult SecurityRequestResult_0(1);
  msg.set(SecurityRequestResult_0);
  DerivativeSecurityList_0.insert(SecurityRequestResult_0.getString());
  FIX::SecurityResponseID SecurityResponseID_0("STRING_684603464");
  msg.set(SecurityResponseID_0);
  DerivativeSecurityList_0.insert(SecurityResponseID_0.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_1(201240734);
  msg.set(TotNoRelatedSym_1);
  DerivativeSecurityList_0.insert(TotNoRelatedSym_1.getString());
  FIX::TransactTime TransactTime_16(FIX::UTCTIMESTAMP(23, 53, 34, 24, 3, 2001));
  msg.set(TransactTime_16);
  DerivativeSecurityList_0.insert(TransactTime_16.getString());
  all_values.push_back(DerivativeSecurityList_0);

  all_compo_names.insert("DerivativeSecurityList");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_2;
  FIX::ApplID ApplID_2("STRING_1938934469");
  msg.set(ApplID_2);
  ApplicationSequenceControl_2.insert(ApplID_2.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_2(949422979);
  msg.set(ApplLastSeqNum_2);
  ApplicationSequenceControl_2.insert(ApplLastSeqNum_2.getString());
  FIX::ApplResendFlag ApplResendFlag_2(true);
  msg.set(ApplResendFlag_2);
  ApplicationSequenceControl_2.insert(ApplResendFlag_2.getString());
  FIX::ApplSeqNum ApplSeqNum_2(194053219);
  msg.set(ApplSeqNum_2);
  ApplicationSequenceControl_2.insert(ApplSeqNum_2.getString());
  all_values.push_back(ApplicationSequenceControl_2);
  all_compo_names.insert(".");

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_0;
  FIX::DerivFlexProductEligibilityIndicator DerivFlexProductEligibilityIndicator_0(false);
  msg.set(DerivFlexProductEligibilityIndicator_0);
  DerivativeInstrument_0.insert(DerivFlexProductEligibilityIndicator_0.getString());
  FIX::DerivativeCFICode DerivativeCFICode_0("STRING_1494357719");
  msg.set(DerivativeCFICode_0);
  DerivativeInstrument_0.insert(DerivativeCFICode_0.getString());
  FIX::DerivativeCapPrice DerivativeCapPrice_0;
  DerivativeCapPrice_0.setString("18284556");
  msg.set(DerivativeCapPrice_0);
  DerivativeInstrument_0.insert(DerivativeCapPrice_0.getString());
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_0;
  DerivativeContractMultiplier_0.setString("3511544");
  msg.set(DerivativeContractMultiplier_0);
  DerivativeInstrument_0.insert(DerivativeContractMultiplier_0.getString());
  FIX::DerivativeContractMultiplierUnit DerivativeContractMultiplierUnit_0(1632285635);
  msg.set(DerivativeContractMultiplierUnit_0);
  DerivativeInstrument_0.insert(DerivativeContractMultiplierUnit_0.getString());
  FIX::DerivativeContractSettlMonth DerivativeContractSettlMonth_0("MONTHYEAR_63995641");
  msg.set(DerivativeContractSettlMonth_0);
  DerivativeInstrument_0.insert(DerivativeContractSettlMonth_0.getString());
  FIX::DerivativeCountryOfIssue DerivativeCountryOfIssue_0("COUNTRY_755088442");
  msg.set(DerivativeCountryOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeCountryOfIssue_0.getString());
  FIX::DerivativeEncodedIssuer DerivativeEncodedIssuer_0("DATA_541896742");
  msg.set(DerivativeEncodedIssuer_0);
  DerivativeInstrument_0.insert(DerivativeEncodedIssuer_0.getString());
  FIX::DerivativeEncodedIssuerLen DerivativeEncodedIssuerLen_0(316023281);
  msg.set(DerivativeEncodedIssuerLen_0);
  DerivativeInstrument_0.insert(DerivativeEncodedIssuerLen_0.getString());
  FIX::DerivativeEncodedSecurityDesc DerivativeEncodedSecurityDesc_0("DATA_534546427");
  msg.set(DerivativeEncodedSecurityDesc_0);
  DerivativeInstrument_0.insert(DerivativeEncodedSecurityDesc_0.getString());
  FIX::DerivativeEncodedSecurityDescLen DerivativeEncodedSecurityDescLen_0(1569525936);
  msg.set(DerivativeEncodedSecurityDescLen_0);
  DerivativeInstrument_0.insert(DerivativeEncodedSecurityDescLen_0.getString());
  FIX::DerivativeExerciseStyle DerivativeExerciseStyle_0('5');
  msg.set(DerivativeExerciseStyle_0);
  DerivativeInstrument_0.insert(DerivativeExerciseStyle_0.getString());
  FIX::DerivativeFloorPrice DerivativeFloorPrice_0;
  DerivativeFloorPrice_0.setString("9267245");
  msg.set(DerivativeFloorPrice_0);
  DerivativeInstrument_0.insert(DerivativeFloorPrice_0.getString());
  FIX::DerivativeFlowScheduleType DerivativeFlowScheduleType_0(1450894704);
  msg.set(DerivativeFlowScheduleType_0);
  DerivativeInstrument_0.insert(DerivativeFlowScheduleType_0.getString());
  FIX::DerivativeInstrRegistry DerivativeInstrRegistry_0("STRING_2137708675");
  msg.set(DerivativeInstrRegistry_0);
  DerivativeInstrument_0.insert(DerivativeInstrRegistry_0.getString());
  FIX::DerivativeInstrmtAssignmentMethod DerivativeInstrmtAssignmentMethod_0('2');
  msg.set(DerivativeInstrmtAssignmentMethod_0);
  DerivativeInstrument_0.insert(DerivativeInstrmtAssignmentMethod_0.getString());
  FIX::DerivativeIssueDate DerivativeIssueDate_0("LOCALMKTDATE_472376061");
  msg.set(DerivativeIssueDate_0);
  DerivativeInstrument_0.insert(DerivativeIssueDate_0.getString());
  FIX::DerivativeIssuer DerivativeIssuer_0("STRING_1329707010");
  msg.set(DerivativeIssuer_0);
  DerivativeInstrument_0.insert(DerivativeIssuer_0.getString());
  FIX::DerivativeListMethod DerivativeListMethod_0(628449759);
  msg.set(DerivativeListMethod_0);
  DerivativeInstrument_0.insert(DerivativeListMethod_0.getString());
  FIX::DerivativeLocaleOfIssue DerivativeLocaleOfIssue_0("STRING_673616795");
  msg.set(DerivativeLocaleOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeLocaleOfIssue_0.getString());
  FIX::DerivativeMaturityDate DerivativeMaturityDate_0("LOCALMKTDATE_1518948116");
  msg.set(DerivativeMaturityDate_0);
  DerivativeInstrument_0.insert(DerivativeMaturityDate_0.getString());
  FIX::DerivativeMaturityMonthYear DerivativeMaturityMonthYear_0("MONTHYEAR_552160014");
  msg.set(DerivativeMaturityMonthYear_0);
  DerivativeInstrument_0.insert(DerivativeMaturityMonthYear_0.getString());
  FIX::DerivativeMaturityTime DerivativeMaturityTime_0("TZTIMEONLY_2053905989");
  msg.set(DerivativeMaturityTime_0);
  DerivativeInstrument_0.insert(DerivativeMaturityTime_0.getString());
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_0;
  DerivativeMinPriceIncrement_0.setString("10060701");
  msg.set(DerivativeMinPriceIncrement_0);
  DerivativeInstrument_0.insert(DerivativeMinPriceIncrement_0.getString());
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_0;
  DerivativeMinPriceIncrementAmount_0.setString("12757710");
  msg.set(DerivativeMinPriceIncrementAmount_0);
  DerivativeInstrument_0.insert(DerivativeMinPriceIncrementAmount_0.getString());
  FIX::DerivativeNTPositionLimit DerivativeNTPositionLimit_0(1772284127);
  msg.set(DerivativeNTPositionLimit_0);
  DerivativeInstrument_0.insert(DerivativeNTPositionLimit_0.getString());
  FIX::DerivativeOptAttribute DerivativeOptAttribute_0('1');
  msg.set(DerivativeOptAttribute_0);
  DerivativeInstrument_0.insert(DerivativeOptAttribute_0.getString());
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_0;
  DerivativeOptPayAmount_0.setString("10672218");
  msg.set(DerivativeOptPayAmount_0);
  DerivativeInstrument_0.insert(DerivativeOptPayAmount_0.getString());
  FIX::DerivativePositionLimit DerivativePositionLimit_0(574223458);
  msg.set(DerivativePositionLimit_0);
  DerivativeInstrument_0.insert(DerivativePositionLimit_0.getString());
  FIX::DerivativePriceQuoteMethod DerivativePriceQuoteMethod_0("STRING_1317522192");
  msg.set(DerivativePriceQuoteMethod_0);
  DerivativeInstrument_0.insert(DerivativePriceQuoteMethod_0.getString());
  FIX::DerivativePriceUnitOfMeasure DerivativePriceUnitOfMeasure_0("STRING_1261275078");
  msg.set(DerivativePriceUnitOfMeasure_0);
  DerivativeInstrument_0.insert(DerivativePriceUnitOfMeasure_0.getString());
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_0;
  DerivativePriceUnitOfMeasureQty_0.setString("13263819");
  msg.set(DerivativePriceUnitOfMeasureQty_0);
  DerivativeInstrument_0.insert(DerivativePriceUnitOfMeasureQty_0.getString());
  FIX::DerivativeProduct DerivativeProduct_0(664396263);
  msg.set(DerivativeProduct_0);
  DerivativeInstrument_0.insert(DerivativeProduct_0.getString());
  FIX::DerivativeProductComplex DerivativeProductComplex_0("STRING_942247113");
  msg.set(DerivativeProductComplex_0);
  DerivativeInstrument_0.insert(DerivativeProductComplex_0.getString());
  FIX::DerivativePutOrCall DerivativePutOrCall_0(1677536402);
  msg.set(DerivativePutOrCall_0);
  DerivativeInstrument_0.insert(DerivativePutOrCall_0.getString());
  FIX::DerivativeSecurityDesc DerivativeSecurityDesc_0("STRING_149198250");
  msg.set(DerivativeSecurityDesc_0);
  DerivativeInstrument_0.insert(DerivativeSecurityDesc_0.getString());
  FIX::DerivativeSecurityExchange DerivativeSecurityExchange_0("EXCHANGE_1006242755");
  msg.set(DerivativeSecurityExchange_0);
  DerivativeInstrument_0.insert(DerivativeSecurityExchange_0.getString());
  FIX::DerivativeSecurityGroup DerivativeSecurityGroup_0("STRING_285141196");
  msg.set(DerivativeSecurityGroup_0);
  DerivativeInstrument_0.insert(DerivativeSecurityGroup_0.getString());
  FIX::DerivativeSecurityID DerivativeSecurityID_0("STRING_691094992");
  msg.set(DerivativeSecurityID_0);
  DerivativeInstrument_0.insert(DerivativeSecurityID_0.getString());
  FIX::DerivativeSecurityIDSource DerivativeSecurityIDSource_0("STRING_1322266036");
  msg.set(DerivativeSecurityIDSource_0);
  DerivativeInstrument_0.insert(DerivativeSecurityIDSource_0.getString());
  FIX::DerivativeSecurityStatus DerivativeSecurityStatus_0("STRING_819687623");
  msg.set(DerivativeSecurityStatus_0);
  DerivativeInstrument_0.insert(DerivativeSecurityStatus_0.getString());
  FIX::DerivativeSecuritySubType DerivativeSecuritySubType_0("STRING_113137280");
  msg.set(DerivativeSecuritySubType_0);
  DerivativeInstrument_0.insert(DerivativeSecuritySubType_0.getString());
  FIX::DerivativeSecurityType DerivativeSecurityType_0("STRING_1374704970");
  msg.set(DerivativeSecurityType_0);
  DerivativeInstrument_0.insert(DerivativeSecurityType_0.getString());
  FIX::DerivativeSettlMethod DerivativeSettlMethod_0('1');
  msg.set(DerivativeSettlMethod_0);
  DerivativeInstrument_0.insert(DerivativeSettlMethod_0.getString());
  FIX::DerivativeSettleOnOpenFlag DerivativeSettleOnOpenFlag_0("STRING_1564031985");
  msg.set(DerivativeSettleOnOpenFlag_0);
  DerivativeInstrument_0.insert(DerivativeSettleOnOpenFlag_0.getString());
  FIX::DerivativeStateOrProvinceOfIssue DerivativeStateOrProvinceOfIssue_0("STRING_1364929997");
  msg.set(DerivativeStateOrProvinceOfIssue_0);
  DerivativeInstrument_0.insert(DerivativeStateOrProvinceOfIssue_0.getString());
  FIX::DerivativeStrikeCurrency DerivativeStrikeCurrency_0("USD");
  msg.set(DerivativeStrikeCurrency_0);
  DerivativeInstrument_0.insert(DerivativeStrikeCurrency_0.getString());
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_0;
  DerivativeStrikeMultiplier_0.setString("5471533");
  msg.set(DerivativeStrikeMultiplier_0);
  DerivativeInstrument_0.insert(DerivativeStrikeMultiplier_0.getString());
  FIX::DerivativeStrikePrice DerivativeStrikePrice_0;
  DerivativeStrikePrice_0.setString("1712245");
  msg.set(DerivativeStrikePrice_0);
  DerivativeInstrument_0.insert(DerivativeStrikePrice_0.getString());
  FIX::DerivativeStrikeValue DerivativeStrikeValue_0;
  DerivativeStrikeValue_0.setString("5625411");
  msg.set(DerivativeStrikeValue_0);
  DerivativeInstrument_0.insert(DerivativeStrikeValue_0.getString());
  FIX::DerivativeSymbol DerivativeSymbol_0("STRING_2066101475");
  msg.set(DerivativeSymbol_0);
  DerivativeInstrument_0.insert(DerivativeSymbol_0.getString());
  FIX::DerivativeSymbolSfx DerivativeSymbolSfx_0("STRING_723384565");
  msg.set(DerivativeSymbolSfx_0);
  DerivativeInstrument_0.insert(DerivativeSymbolSfx_0.getString());
  FIX::DerivativeTimeUnit DerivativeTimeUnit_0("STRING_468963535");
  msg.set(DerivativeTimeUnit_0);
  DerivativeInstrument_0.insert(DerivativeTimeUnit_0.getString());
  FIX::DerivativeUnitOfMeasure DerivativeUnitOfMeasure_0("STRING_924687950");
  msg.set(DerivativeUnitOfMeasure_0);
  DerivativeInstrument_0.insert(DerivativeUnitOfMeasure_0.getString());
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_0;
  DerivativeUnitOfMeasureQty_0.setString("19991556");
  msg.set(DerivativeUnitOfMeasureQty_0);
  DerivativeInstrument_0.insert(DerivativeUnitOfMeasureQty_0.getString());
  FIX::DerivativeValuationMethod DerivativeValuationMethod_0("STRING_93764014");
  msg.set(DerivativeValuationMethod_0);
  DerivativeInstrument_0.insert(DerivativeValuationMethod_0.getString());
  all_values.push_back(DerivativeInstrument_0);
  all_compo_names.insert("..");

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_0;
    FIX::DerivativeEventDate DerivativeEventDate_0("LOCALMKTDATE_918893815");
    noDerivativeEvents_0_0.set(DerivativeEventDate_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventDate_0.getString());
    FIX::DerivativeEventPx DerivativeEventPx_0;
    DerivativeEventPx_0.setString("6679874");
    noDerivativeEvents_0_0.set(DerivativeEventPx_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventPx_0.getString());
    FIX::DerivativeEventText DerivativeEventText_0("STRING_109027342");
    noDerivativeEvents_0_0.set(DerivativeEventText_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventText_0.getString());
    FIX::DerivativeEventTime DerivativeEventTime_0(FIX::UTCTIMESTAMP(2, 26, 39, 12, 9, 2002));
    noDerivativeEvents_0_0.set(DerivativeEventTime_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventTime_0.getString());
    FIX::DerivativeEventType DerivativeEventType_0(1809563352);
    noDerivativeEvents_0_0.set(DerivativeEventType_0);
    DerivativeEventsGrp_NoDerivativeEvents_0.insert(DerivativeEventType_0.getString());
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_0);
    all_compo_names.insert("....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_0);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_0;
    FIX::DerivativeInstrumentPartyID DerivativeInstrumentPartyID_0("STRING_1155957503");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyID_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyID_0.getString());
    FIX::DerivativeInstrumentPartyIDSource DerivativeInstrumentPartyIDSource_0("STRING_481767328");
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyIDSource_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyIDSource_0.getString());
    FIX::DerivativeInstrumentPartyRole DerivativeInstrumentPartyRole_0(1726854129);
    noDerivativeInstrumentParties_0_0.set(DerivativeInstrumentPartyRole_0);
    DerivativeInstrumentParties_NoDerivativeInstrumentParties_0.insert(DerivativeInstrumentPartyRole_0.getString());
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);
    all_compo_names.insert("....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0;
      FIX::DerivativeInstrumentPartySubID DerivativeInstrumentPartySubID_0("STRING_80695826");
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubID_0);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0.insert(DerivativeInstrumentPartySubID_0.getString());
      FIX::DerivativeInstrumentPartySubIDType DerivativeInstrumentPartySubIDType_0(1143402466);
      noDerivativeInstrumentPartySubIDs_0_1_0.set(DerivativeInstrumentPartySubIDType_0);
      DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0.insert(DerivativeInstrumentPartySubIDType_0.getString());
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0);
      all_compo_names.insert("....NoDerivativeInstrumentParties..NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0;
    FIX::DerivativeSecurityAltID DerivativeSecurityAltID_0("STRING_1770954266");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltID_0);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0.insert(DerivativeSecurityAltID_0.getString());
    FIX::DerivativeSecurityAltIDSource DerivativeSecurityAltIDSource_0("STRING_1032326865");
    noDerivativeSecurityAltID_0_0.set(DerivativeSecurityAltIDSource_0);
    DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0.insert(DerivativeSecurityAltIDSource_0.getString());
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);
    all_compo_names.insert("....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_0;
  FIX::DerivativeSecurityXML DerivativeSecurityXML_1("DATA_147778534");
  msg.set(DerivativeSecurityXML_1);
  FIX::DerivativeSecurityXMLLen DerivativeSecurityXMLLen_0(1942178818);
  msg.set(DerivativeSecurityXMLLen_0);
  FIX::DerivativeSecurityXMLSchema DerivativeSecurityXMLSchema_0("STRING_1594868059");
  msg.set(DerivativeSecurityXMLSchema_0);
  DerivativeSecurityXML_0.insert(DerivativeSecurityXMLSchema_0.getString());
  all_values.push_back(DerivativeSecurityXML_0);
  all_compo_names.insert("...");

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0;
    FIX::DerivativeInstrAttribType DerivativeInstrAttribType_0(518079735);
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribType_0);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0.insert(DerivativeInstrAttribType_0.getString());
    FIX::DerivativeInstrAttribValue DerivativeInstrAttribValue_0("STRING_2063831594");
    noDerivativeInstrAttrib_0_0.set(DerivativeInstrAttribValue_0);
    DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0.insert(DerivativeInstrAttribValue_0.getString());
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);
    all_compo_names.insert("...NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_0;
    FIX::MarketID MarketID_0("EXCHANGE_369751691");
    noMarketSegments_0_0.set(MarketID_0);
    MarketSegmentGrp_NoMarketSegments_0.insert(MarketID_0.getString());
    FIX::MarketSegmentID MarketSegmentID_0("STRING_10111960");
    noMarketSegments_0_0.set(MarketSegmentID_0);
    MarketSegmentGrp_NoMarketSegments_0.insert(MarketSegmentID_0.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_0);
    all_compo_names.insert("...NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_0;
    FIX::ExpirationCycle ExpirationCycle_0(1);
    noMarketSegments_0_0.set(ExpirationCycle_0);
    BaseTradingRules_0.insert(ExpirationCycle_0.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_0(3);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_0);
    BaseTradingRules_0.insert(ImpliedMarketIndicator_0.getString());
    FIX::MaxPriceVariation MaxPriceVariation_0;
    MaxPriceVariation_0.setString("6780994");
    noMarketSegments_0_0.set(MaxPriceVariation_0);
    BaseTradingRules_0.insert(MaxPriceVariation_0.getString());
    FIX::MaxTradeVol MaxTradeVol_0;
    MaxTradeVol_0.setString("20391004");
    noMarketSegments_0_0.set(MaxTradeVol_0);
    BaseTradingRules_0.insert(MaxTradeVol_0.getString());
    FIX::MinTradeVol MinTradeVol_0;
    MinTradeVol_0.setString("13213307");
    noMarketSegments_0_0.set(MinTradeVol_0);
    BaseTradingRules_0.insert(MinTradeVol_0.getString());
    FIX::MultilegModel MultilegModel_0(1);
    noMarketSegments_0_0.set(MultilegModel_0);
    BaseTradingRules_0.insert(MultilegModel_0.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_0(2);
    noMarketSegments_0_0.set(MultilegPriceMethod_0);
    BaseTradingRules_0.insert(MultilegPriceMethod_0.getString());
    FIX::PriceType PriceType_11(16);
    noMarketSegments_0_0.set(PriceType_11);
    BaseTradingRules_0.insert(PriceType_11.getString());
    FIX::RoundLot RoundLot_0;
    RoundLot_0.setString("20494073");
    noMarketSegments_0_0.set(RoundLot_0);
    BaseTradingRules_0.insert(RoundLot_0.getString());
    FIX::TradingCurrency TradingCurrency_0("CAN");
    noMarketSegments_0_0.set(TradingCurrency_0);
    BaseTradingRules_0.insert(TradingCurrency_0.getString());
    all_values.push_back(BaseTradingRules_0);
    all_compo_names.insert("...NoMarketSegments..");

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
      MinLotSize_0.setString("11384284");
      noLotTypeRules_0_1_0.set(MinLotSize_0);
      LotTypeRules_NoLotTypeRules_0.insert(MinLotSize_0.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_0);
      all_compo_names.insert("...NoMarketSegments....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_0;
    FIX::HighLimitPrice HighLimitPrice_0;
    HighLimitPrice_0.setString("457707");
    noMarketSegments_0_0.set(HighLimitPrice_0);
    PriceLimits_0.insert(HighLimitPrice_0.getString());
    FIX::LowLimitPrice LowLimitPrice_0;
    LowLimitPrice_0.setString("6332659");
    noMarketSegments_0_0.set(LowLimitPrice_0);
    PriceLimits_0.insert(LowLimitPrice_0.getString());
    FIX::PriceLimitType PriceLimitType_0(2);
    noMarketSegments_0_0.set(PriceLimitType_0);
    PriceLimits_0.insert(PriceLimitType_0.getString());
    FIX::TradingReferencePrice TradingReferencePrice_0;
    TradingReferencePrice_0.setString("1264665");
    noMarketSegments_0_0.set(TradingReferencePrice_0);
    PriceLimits_0.insert(TradingReferencePrice_0.getString());
    all_values.push_back(PriceLimits_0);
    all_compo_names.insert("...NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_0;
      FIX::EndTickPriceRange EndTickPriceRange_0;
      EndTickPriceRange_0.setString("11222324");
      noTickRules_0_1_0.set(EndTickPriceRange_0);
      TickRules_NoTickRules_0.insert(EndTickPriceRange_0.getString());
      FIX::StartTickPriceRange StartTickPriceRange_0;
      StartTickPriceRange_0.setString("18974208");
      noTickRules_0_1_0.set(StartTickPriceRange_0);
      TickRules_NoTickRules_0.insert(StartTickPriceRange_0.getString());
      FIX::TickIncrement TickIncrement_0;
      TickIncrement_0.setString("6615116");
      noTickRules_0_1_0.set(TickIncrement_0);
      TickRules_NoTickRules_0.insert(TickIncrement_0.getString());
      FIX::TickRuleType TickRuleType_0(4);
      noTickRules_0_1_0.set(TickRuleType_0);
      TickRules_NoTickRules_0.insert(TickRuleType_0.getString());
      all_values.push_back(TickRules_NoTickRules_0);
      all_compo_names.insert("...NoMarketSegments....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_0;
      FIX::NestedInstrAttribType NestedInstrAttribType_0(108896044);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_0);
      NestedInstrumentAttribute_NoNestedInstrAttrib_0.insert(NestedInstrAttribType_0.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_0("STRING_1336407331");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_0);
      NestedInstrumentAttribute_NoNestedInstrAttrib_0.insert(NestedInstrAttribValue_0.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_0);
      all_compo_names.insert("...NoMarketSegments...NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_0;
      FIX::TradingSessionID TradingSessionID_12("STRING_5");
      noTradingSessionRules_0_1_0.set(TradingSessionID_12);
      TradingSessionRulesGrp_NoTradingSessionRules_0.insert(TradingSessionID_12.getString());
      FIX::TradingSessionSubID TradingSessionSubID_12("STRING_7");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_12);
      TradingSessionRulesGrp_NoTradingSessionRules_0.insert(TradingSessionSubID_12.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_0);
      all_compo_names.insert("...NoMarketSegments...NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_0;
        FIX::ExecInstValue ExecInstValue_0('3');
        noExecInstRules_0_0_2_0.set(ExecInstValue_0);
        ExecInstRules_NoExecInstRules_0.insert(ExecInstValue_0.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_0);
        all_compo_names.insert("...NoMarketSegments...NoTradingSessionRules...NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_0;
        FIX::MDBookType MDBookType_0(1);
        noMDFeedTypes_0_0_2_0.set(MDBookType_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MDBookType_0.getString());
        FIX::MDFeedType MDFeedType_0("STRING_713455382");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MDFeedType_0.getString());
        FIX::MarketDepth MarketDepth_0(2001697909);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_0);
        MarketDataFeedTypes_NoMDFeedTypes_0.insert(MarketDepth_0.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_0);
        all_compo_names.insert("...NoMarketSegments...NoTradingSessionRules...NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_0;
        FIX::MatchAlgorithm MatchAlgorithm_0("STRING_1238440569");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_0);
        MatchRules_NoMatchRules_0.insert(MatchAlgorithm_0.getString());
        FIX::MatchType MatchType_3("STRING_A3");
        noMatchRules_0_0_2_0.set(MatchType_3);
        MatchRules_NoMatchRules_0.insert(MatchType_3.getString());
        all_values.push_back(MatchRules_NoMatchRules_0);
        all_compo_names.insert("...NoMarketSegments...NoTradingSessionRules...NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_0;
        FIX::OrdType OrdType_1('I');
        noOrdTypeRules_0_0_2_0.set(OrdType_1);
        OrdTypeRules_NoOrdTypeRules_0.insert(OrdType_1.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_0);
        all_compo_names.insert("...NoMarketSegments...NoTradingSessionRules...NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_0;
        FIX::TimeInForce TimeInForce_1('7');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_1);
        TimeInForceRules_NoTimeInForceRules_0.insert(TimeInForce_1.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_0);
        all_compo_names.insert("...NoMarketSegments...NoTradingSessionRules...NoTimeInForceRules");

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
      EndStrikePxRange_0.setString("10133287");
      noStrikeRules_0_1_0.set(EndStrikePxRange_0);
      StrikeRules_NoStrikeRules_0.insert(EndStrikePxRange_0.getString());
      FIX::StartStrikePxRange StartStrikePxRange_0;
      StartStrikePxRange_0.setString("171515");
      noStrikeRules_0_1_0.set(StartStrikePxRange_0);
      StrikeRules_NoStrikeRules_0.insert(StartStrikePxRange_0.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_0(750138393);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeExerciseStyle_0.getString());
      FIX::StrikeIncrement StrikeIncrement_0;
      StrikeIncrement_0.setString("16465947");
      noStrikeRules_0_1_0.set(StrikeIncrement_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeIncrement_0.getString());
      FIX::StrikeRuleID StrikeRuleID_0("STRING_1538758822");
      noStrikeRules_0_1_0.set(StrikeRuleID_0);
      StrikeRules_NoStrikeRules_0.insert(StrikeRuleID_0.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_0);
      all_compo_names.insert("...NoMarketSegments..NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_0;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_0("MONTHYEAR_1275779476");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_0);
        MaturityRules_NoMaturityRules_0.insert(EndMaturityMonthYear_0.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_0(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearFormat_0.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_0(626542119);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearIncrement_0.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_0(1);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityMonthYearIncrementUnits_0.getString());
        FIX::MaturityRuleID MaturityRuleID_0("STRING_1783518578");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_0);
        MaturityRules_NoMaturityRules_0.insert(MaturityRuleID_0.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_0("MONTHYEAR_171174462");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_0);
        MaturityRules_NoMaturityRules_0.insert(StartMaturityMonthYear_0.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_0);
        all_compo_names.insert("...NoMarketSegments..NoStrikeRules..NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  // RelSymDerivSecGrp
  // Group RelSymDerivSecGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_0;
    FIX::CorporateAction CorporateAction_0("MULTIPLECHARVALUE_H");
    noRelatedSym_0_0.set(CorporateAction_0);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(CorporateAction_0.getString());
    FIX::Currency Currency_14("CAN");
    noRelatedSym_0_0.set(Currency_14);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(Currency_14.getString());
    FIX::EncodedText EncodedText_25("DATA_1152450256");
    noRelatedSym_0_0.set(EncodedText_25);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(EncodedText_25.getString());
    FIX::EncodedTextLen EncodedTextLen_25(666350309);
    noRelatedSym_0_0.set(EncodedTextLen_25);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(EncodedTextLen_25.getString());
    FIX::RelSymTransactTime RelSymTransactTime_0(FIX::UTCTIMESTAMP(9, 58, 8, 2, 4, 2005));
    noRelatedSym_0_0.set(RelSymTransactTime_0);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(RelSymTransactTime_0.getString());
    FIX::Text Text_25("STRING_1488516646");
    noRelatedSym_0_0.set(Text_25);
    RelSymDerivSecGrp_NoRelatedSym_0.insert(Text_25.getString());
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_0);
    all_compo_names.insert("..NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_14;
      FIX::EncodedLegIssuer EncodedLegIssuer_14("DATA_904080014");
      noLegs_0_1_0.set(EncodedLegIssuer_14);
      InstrumentLeg_14.insert(EncodedLegIssuer_14.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_14(1447949937);
      noLegs_0_1_0.set(EncodedLegIssuerLen_14);
      InstrumentLeg_14.insert(EncodedLegIssuerLen_14.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_14("DATA_1057391294");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_14);
      InstrumentLeg_14.insert(EncodedLegSecurityDesc_14.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_14(1608447679);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_14);
      InstrumentLeg_14.insert(EncodedLegSecurityDescLen_14.getString());
      FIX::LegCFICode LegCFICode_14("STRING_313795048");
      noLegs_0_1_0.set(LegCFICode_14);
      InstrumentLeg_14.insert(LegCFICode_14.getString());
      FIX::LegContractMultiplier LegContractMultiplier_14;
      LegContractMultiplier_14.setString("10745428");
      noLegs_0_1_0.set(LegContractMultiplier_14);
      InstrumentLeg_14.insert(LegContractMultiplier_14.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_14(211102424);
      noLegs_0_1_0.set(LegContractMultiplierUnit_14);
      InstrumentLeg_14.insert(LegContractMultiplierUnit_14.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_14("MONTHYEAR_1960389757");
      noLegs_0_1_0.set(LegContractSettlMonth_14);
      InstrumentLeg_14.insert(LegContractSettlMonth_14.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_14("COUNTRY_465818032");
      noLegs_0_1_0.set(LegCountryOfIssue_14);
      InstrumentLeg_14.insert(LegCountryOfIssue_14.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_14("LOCALMKTDATE_1087707371");
      noLegs_0_1_0.set(LegCouponPaymentDate_14);
      InstrumentLeg_14.insert(LegCouponPaymentDate_14.getString());
      FIX::LegCouponRate LegCouponRate_14;
      LegCouponRate_14.setString("55.850000");
      noLegs_0_1_0.set(LegCouponRate_14);
      InstrumentLeg_14.insert(LegCouponRate_14.getString());
      FIX::LegCreditRating LegCreditRating_14("STRING_979325641");
      noLegs_0_1_0.set(LegCreditRating_14);
      InstrumentLeg_14.insert(LegCreditRating_14.getString());
      FIX::LegCurrency LegCurrency_14("CAN");
      noLegs_0_1_0.set(LegCurrency_14);
      InstrumentLeg_14.insert(LegCurrency_14.getString());
      FIX::LegDatedDate LegDatedDate_14("LOCALMKTDATE_615360571");
      noLegs_0_1_0.set(LegDatedDate_14);
      InstrumentLeg_14.insert(LegDatedDate_14.getString());
      FIX::LegExerciseStyle LegExerciseStyle_14(1885423953);
      noLegs_0_1_0.set(LegExerciseStyle_14);
      InstrumentLeg_14.insert(LegExerciseStyle_14.getString());
      FIX::LegFactor LegFactor_14;
      LegFactor_14.setString("7771965");
      noLegs_0_1_0.set(LegFactor_14);
      InstrumentLeg_14.insert(LegFactor_14.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_14(1587802832);
      noLegs_0_1_0.set(LegFlowScheduleType_14);
      InstrumentLeg_14.insert(LegFlowScheduleType_14.getString());
      FIX::LegInstrRegistry LegInstrRegistry_14("STRING_2119310493");
      noLegs_0_1_0.set(LegInstrRegistry_14);
      InstrumentLeg_14.insert(LegInstrRegistry_14.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_14("LOCALMKTDATE_701144048");
      noLegs_0_1_0.set(LegInterestAccrualDate_14);
      InstrumentLeg_14.insert(LegInterestAccrualDate_14.getString());
      FIX::LegIssueDate LegIssueDate_14("LOCALMKTDATE_592769440");
      noLegs_0_1_0.set(LegIssueDate_14);
      InstrumentLeg_14.insert(LegIssueDate_14.getString());
      FIX::LegIssuer LegIssuer_14("STRING_638177154");
      noLegs_0_1_0.set(LegIssuer_14);
      InstrumentLeg_14.insert(LegIssuer_14.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_14("STRING_660447493");
      noLegs_0_1_0.set(LegLocaleOfIssue_14);
      InstrumentLeg_14.insert(LegLocaleOfIssue_14.getString());
      FIX::LegMaturityDate LegMaturityDate_14("LOCALMKTDATE_1707817153");
      noLegs_0_1_0.set(LegMaturityDate_14);
      InstrumentLeg_14.insert(LegMaturityDate_14.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_14("MONTHYEAR_878153092");
      noLegs_0_1_0.set(LegMaturityMonthYear_14);
      InstrumentLeg_14.insert(LegMaturityMonthYear_14.getString());
      FIX::LegMaturityTime LegMaturityTime_14("TZTIMEONLY_1333206321");
      noLegs_0_1_0.set(LegMaturityTime_14);
      InstrumentLeg_14.insert(LegMaturityTime_14.getString());
      FIX::LegOptAttribute LegOptAttribute_14('5');
      noLegs_0_1_0.set(LegOptAttribute_14);
      InstrumentLeg_14.insert(LegOptAttribute_14.getString());
      FIX::LegOptionRatio LegOptionRatio_14;
      LegOptionRatio_14.setString("20130854");
      noLegs_0_1_0.set(LegOptionRatio_14);
      InstrumentLeg_14.insert(LegOptionRatio_14.getString());
      FIX::LegPool LegPool_14("STRING_1096922071");
      noLegs_0_1_0.set(LegPool_14);
      InstrumentLeg_14.insert(LegPool_14.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_14("STRING_2018112126");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_14);
      InstrumentLeg_14.insert(LegPriceUnitOfMeasure_14.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_14;
      LegPriceUnitOfMeasureQty_14.setString("20442699");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_14);
      InstrumentLeg_14.insert(LegPriceUnitOfMeasureQty_14.getString());
      FIX::LegProduct LegProduct_14(2001002085);
      noLegs_0_1_0.set(LegProduct_14);
      InstrumentLeg_14.insert(LegProduct_14.getString());
      FIX::LegPutOrCall LegPutOrCall_14(1318578415);
      noLegs_0_1_0.set(LegPutOrCall_14);
      InstrumentLeg_14.insert(LegPutOrCall_14.getString());
      FIX::LegRatioQty LegRatioQty_14;
      LegRatioQty_14.setString("9541775");
      noLegs_0_1_0.set(LegRatioQty_14);
      InstrumentLeg_14.insert(LegRatioQty_14.getString());
      FIX::LegRedemptionDate LegRedemptionDate_14("LOCALMKTDATE_1461966117");
      noLegs_0_1_0.set(LegRedemptionDate_14);
      InstrumentLeg_14.insert(LegRedemptionDate_14.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_14("STRING_1632373464");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_14);
      InstrumentLeg_14.insert(LegRepoCollateralSecurityType_14.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_14;
      LegRepurchaseRate_14.setString("4.330000");
      noLegs_0_1_0.set(LegRepurchaseRate_14);
      InstrumentLeg_14.insert(LegRepurchaseRate_14.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_14(1673068541);
      noLegs_0_1_0.set(LegRepurchaseTerm_14);
      InstrumentLeg_14.insert(LegRepurchaseTerm_14.getString());
      FIX::LegSecurityDesc LegSecurityDesc_14("STRING_1445279573");
      noLegs_0_1_0.set(LegSecurityDesc_14);
      InstrumentLeg_14.insert(LegSecurityDesc_14.getString());
      FIX::LegSecurityExchange LegSecurityExchange_14("EXCHANGE_347054817");
      noLegs_0_1_0.set(LegSecurityExchange_14);
      InstrumentLeg_14.insert(LegSecurityExchange_14.getString());
      FIX::LegSecurityID LegSecurityID_14("STRING_613292265");
      noLegs_0_1_0.set(LegSecurityID_14);
      InstrumentLeg_14.insert(LegSecurityID_14.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_14("STRING_386481510");
      noLegs_0_1_0.set(LegSecurityIDSource_14);
      InstrumentLeg_14.insert(LegSecurityIDSource_14.getString());
      FIX::LegSecuritySubType LegSecuritySubType_14("STRING_1326380458");
      noLegs_0_1_0.set(LegSecuritySubType_14);
      InstrumentLeg_14.insert(LegSecuritySubType_14.getString());
      FIX::LegSecurityType LegSecurityType_14("STRING_180058108");
      noLegs_0_1_0.set(LegSecurityType_14);
      InstrumentLeg_14.insert(LegSecurityType_14.getString());
      FIX::LegSide LegSide_14('1');
      noLegs_0_1_0.set(LegSide_14);
      InstrumentLeg_14.insert(LegSide_14.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_14("STRING_1941741029");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_14);
      InstrumentLeg_14.insert(LegStateOrProvinceOfIssue_14.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_14("JPY");
      noLegs_0_1_0.set(LegStrikeCurrency_14);
      InstrumentLeg_14.insert(LegStrikeCurrency_14.getString());
      FIX::LegStrikePrice LegStrikePrice_14;
      LegStrikePrice_14.setString("13820602");
      noLegs_0_1_0.set(LegStrikePrice_14);
      InstrumentLeg_14.insert(LegStrikePrice_14.getString());
      FIX::LegSymbol LegSymbol_14("STRING_2037308906");
      noLegs_0_1_0.set(LegSymbol_14);
      InstrumentLeg_14.insert(LegSymbol_14.getString());
      FIX::LegSymbolSfx LegSymbolSfx_14("STRING_595831510");
      noLegs_0_1_0.set(LegSymbolSfx_14);
      InstrumentLeg_14.insert(LegSymbolSfx_14.getString());
      FIX::LegTimeUnit LegTimeUnit_14("STRING_1974829653");
      noLegs_0_1_0.set(LegTimeUnit_14);
      InstrumentLeg_14.insert(LegTimeUnit_14.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_14("STRING_528002412");
      noLegs_0_1_0.set(LegUnitOfMeasure_14);
      InstrumentLeg_14.insert(LegUnitOfMeasure_14.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_14;
      LegUnitOfMeasureQty_14.setString("12562790");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_14);
      InstrumentLeg_14.insert(LegUnitOfMeasureQty_14.getString());
      all_values.push_back(InstrumentLeg_14);
      all_compo_names.insert("..NoRelatedSym..NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_14;
        FIX::LegSecurityAltID LegSecurityAltID_14("STRING_1406155505");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_14);
        LegSecAltIDGrp_NoLegSecurityAltID_14.insert(LegSecurityAltID_14.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_14("STRING_442001677");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_14);
        LegSecAltIDGrp_NoLegSecurityAltID_14.insert(LegSecurityAltIDSource_14.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_14);
        all_compo_names.insert("..NoRelatedSym..NoLegs...NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_16;
    FIX::AttachmentPoint AttachmentPoint_16;
    AttachmentPoint_16.setString("86.380000");
    noRelatedSym_0_0.set(AttachmentPoint_16);
    Instrument_16.insert(AttachmentPoint_16.getString());
    FIX::CFICode CFICode_16("STRING_1271757269");
    noRelatedSym_0_0.set(CFICode_16);
    Instrument_16.insert(CFICode_16.getString());
    FIX::CPProgram CPProgram_16(99);
    noRelatedSym_0_0.set(CPProgram_16);
    Instrument_16.insert(CPProgram_16.getString());
    FIX::CPRegType CPRegType_16("STRING_1935387116");
    noRelatedSym_0_0.set(CPRegType_16);
    Instrument_16.insert(CPRegType_16.getString());
    FIX::CapPrice CapPrice_16;
    CapPrice_16.setString("11685435");
    noRelatedSym_0_0.set(CapPrice_16);
    Instrument_16.insert(CapPrice_16.getString());
    FIX::ContractMultiplier ContractMultiplier_16;
    ContractMultiplier_16.setString("13924421");
    noRelatedSym_0_0.set(ContractMultiplier_16);
    Instrument_16.insert(ContractMultiplier_16.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_16(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_16);
    Instrument_16.insert(ContractMultiplierUnit_16.getString());
    FIX::ContractSettlMonth ContractSettlMonth_16("MONTHYEAR_2122721126");
    noRelatedSym_0_0.set(ContractSettlMonth_16);
    Instrument_16.insert(ContractSettlMonth_16.getString());
    FIX::CountryOfIssue CountryOfIssue_16("COUNTRY_706924654");
    noRelatedSym_0_0.set(CountryOfIssue_16);
    Instrument_16.insert(CountryOfIssue_16.getString());
    FIX::CouponPaymentDate CouponPaymentDate_16("LOCALMKTDATE_591371699");
    noRelatedSym_0_0.set(CouponPaymentDate_16);
    Instrument_16.insert(CouponPaymentDate_16.getString());
    FIX::CouponRate CouponRate_16;
    CouponRate_16.setString("79.120000");
    noRelatedSym_0_0.set(CouponRate_16);
    Instrument_16.insert(CouponRate_16.getString());
    FIX::CreditRating CreditRating_16("STRING_232509548");
    noRelatedSym_0_0.set(CreditRating_16);
    Instrument_16.insert(CreditRating_16.getString());
    FIX::DatedDate DatedDate_16("LOCALMKTDATE_2036651272");
    noRelatedSym_0_0.set(DatedDate_16);
    Instrument_16.insert(DatedDate_16.getString());
    FIX::DetachmentPoint DetachmentPoint_16;
    DetachmentPoint_16.setString("90.810000");
    noRelatedSym_0_0.set(DetachmentPoint_16);
    Instrument_16.insert(DetachmentPoint_16.getString());
    FIX::EncodedIssuer EncodedIssuer_16("DATA_845801813");
    noRelatedSym_0_0.set(EncodedIssuer_16);
    Instrument_16.insert(EncodedIssuer_16.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_16(275649135);
    noRelatedSym_0_0.set(EncodedIssuerLen_16);
    Instrument_16.insert(EncodedIssuerLen_16.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_16("DATA_1529909540");
    noRelatedSym_0_0.set(EncodedSecurityDesc_16);
    Instrument_16.insert(EncodedSecurityDesc_16.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_16(1025859921);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_16);
    Instrument_16.insert(EncodedSecurityDescLen_16.getString());
    FIX::ExerciseStyle ExerciseStyle_16(2);
    noRelatedSym_0_0.set(ExerciseStyle_16);
    Instrument_16.insert(ExerciseStyle_16.getString());
    FIX::Factor Factor_16;
    Factor_16.setString("13241669");
    noRelatedSym_0_0.set(Factor_16);
    Instrument_16.insert(Factor_16.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_16(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_16);
    Instrument_16.insert(FlexProductEligibilityIndicator_16.getString());
    FIX::FlexibleIndicator FlexibleIndicator_16(true);
    noRelatedSym_0_0.set(FlexibleIndicator_16);
    Instrument_16.insert(FlexibleIndicator_16.getString());
    FIX::FloorPrice FloorPrice_16;
    FloorPrice_16.setString("5587434");
    noRelatedSym_0_0.set(FloorPrice_16);
    Instrument_16.insert(FloorPrice_16.getString());
    FIX::FlowScheduleType FlowScheduleType_16(2);
    noRelatedSym_0_0.set(FlowScheduleType_16);
    Instrument_16.insert(FlowScheduleType_16.getString());
    FIX::InstrRegistry InstrRegistry_16("STRING_2031142664");
    noRelatedSym_0_0.set(InstrRegistry_16);
    Instrument_16.insert(InstrRegistry_16.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_16('3');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_16);
    Instrument_16.insert(InstrmtAssignmentMethod_16.getString());
    FIX::InterestAccrualDate InterestAccrualDate_16("LOCALMKTDATE_1361686004");
    noRelatedSym_0_0.set(InterestAccrualDate_16);
    Instrument_16.insert(InterestAccrualDate_16.getString());
    FIX::IssueDate IssueDate_16("LOCALMKTDATE_1139938020");
    noRelatedSym_0_0.set(IssueDate_16);
    Instrument_16.insert(IssueDate_16.getString());
    FIX::Issuer Issuer_16("STRING_1921252651");
    noRelatedSym_0_0.set(Issuer_16);
    Instrument_16.insert(Issuer_16.getString());
    FIX::ListMethod ListMethod_16(1);
    noRelatedSym_0_0.set(ListMethod_16);
    Instrument_16.insert(ListMethod_16.getString());
    FIX::LocaleOfIssue LocaleOfIssue_16("STRING_1581939697");
    noRelatedSym_0_0.set(LocaleOfIssue_16);
    Instrument_16.insert(LocaleOfIssue_16.getString());
    FIX::MaturityDate MaturityDate_16("LOCALMKTDATE_1838527641");
    noRelatedSym_0_0.set(MaturityDate_16);
    Instrument_16.insert(MaturityDate_16.getString());
    FIX::MaturityMonthYear MaturityMonthYear_16("MONTHYEAR_1892115130");
    noRelatedSym_0_0.set(MaturityMonthYear_16);
    Instrument_16.insert(MaturityMonthYear_16.getString());
    FIX::MaturityTime MaturityTime_16("TZTIMEONLY_973379797");
    noRelatedSym_0_0.set(MaturityTime_16);
    Instrument_16.insert(MaturityTime_16.getString());
    FIX::MinPriceIncrement MinPriceIncrement_16;
    MinPriceIncrement_16.setString("16264311");
    noRelatedSym_0_0.set(MinPriceIncrement_16);
    Instrument_16.insert(MinPriceIncrement_16.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_16;
    MinPriceIncrementAmount_16.setString("9131750");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_16);
    Instrument_16.insert(MinPriceIncrementAmount_16.getString());
    FIX::NTPositionLimit NTPositionLimit_16(218338334);
    noRelatedSym_0_0.set(NTPositionLimit_16);
    Instrument_16.insert(NTPositionLimit_16.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_16;
    NotionalPercentageOutstanding_16.setString("93.440000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_16);
    Instrument_16.insert(NotionalPercentageOutstanding_16.getString());
    FIX::OptAttribute OptAttribute_16('8');
    noRelatedSym_0_0.set(OptAttribute_16);
    Instrument_16.insert(OptAttribute_16.getString());
    FIX::OptPayoutAmount OptPayoutAmount_16;
    OptPayoutAmount_16.setString("9252629");
    noRelatedSym_0_0.set(OptPayoutAmount_16);
    Instrument_16.insert(OptPayoutAmount_16.getString());
    FIX::OptPayoutType OptPayoutType_16(3);
    noRelatedSym_0_0.set(OptPayoutType_16);
    Instrument_16.insert(OptPayoutType_16.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_16;
    OriginalNotionalPercentageOutstanding_16.setString("67.750000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_16);
    Instrument_16.insert(OriginalNotionalPercentageOutstanding_16.getString());
    FIX::Pool Pool_16("STRING_1157772537");
    noRelatedSym_0_0.set(Pool_16);
    Instrument_16.insert(Pool_16.getString());
    FIX::PositionLimit PositionLimit_16(1065968668);
    noRelatedSym_0_0.set(PositionLimit_16);
    Instrument_16.insert(PositionLimit_16.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_16("STRING_INX");
    noRelatedSym_0_0.set(PriceQuoteMethod_16);
    Instrument_16.insert(PriceQuoteMethod_16.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_16("STRING_2003574350");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_16);
    Instrument_16.insert(PriceUnitOfMeasure_16.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_16;
    PriceUnitOfMeasureQty_16.setString("13416178");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_16);
    Instrument_16.insert(PriceUnitOfMeasureQty_16.getString());
    FIX::Product Product_18(5);
    noRelatedSym_0_0.set(Product_18);
    Instrument_16.insert(Product_18.getString());
    FIX::ProductComplex ProductComplex_16("STRING_881950623");
    noRelatedSym_0_0.set(ProductComplex_16);
    Instrument_16.insert(ProductComplex_16.getString());
    FIX::PutOrCall PutOrCall_16(0);
    noRelatedSym_0_0.set(PutOrCall_16);
    Instrument_16.insert(PutOrCall_16.getString());
    FIX::RedemptionDate RedemptionDate_16("LOCALMKTDATE_1655008670");
    noRelatedSym_0_0.set(RedemptionDate_16);
    Instrument_16.insert(RedemptionDate_16.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_16("STRING_1825808957");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_16);
    Instrument_16.insert(RepoCollateralSecurityType_16.getString());
    FIX::RepurchaseRate RepurchaseRate_16;
    RepurchaseRate_16.setString("53.540000");
    noRelatedSym_0_0.set(RepurchaseRate_16);
    Instrument_16.insert(RepurchaseRate_16.getString());
    FIX::RepurchaseTerm RepurchaseTerm_16(66268509);
    noRelatedSym_0_0.set(RepurchaseTerm_16);
    Instrument_16.insert(RepurchaseTerm_16.getString());
    FIX::RestructuringType RestructuringType_16("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_16);
    Instrument_16.insert(RestructuringType_16.getString());
    FIX::SecurityDesc SecurityDesc_16("STRING_2053728019");
    noRelatedSym_0_0.set(SecurityDesc_16);
    Instrument_16.insert(SecurityDesc_16.getString());
    FIX::SecurityExchange SecurityExchange_16("EXCHANGE_452358002");
    noRelatedSym_0_0.set(SecurityExchange_16);
    Instrument_16.insert(SecurityExchange_16.getString());
    FIX::SecurityGroup SecurityGroup_16("STRING_1873694905");
    noRelatedSym_0_0.set(SecurityGroup_16);
    Instrument_16.insert(SecurityGroup_16.getString());
    FIX::SecurityID SecurityID_16("STRING_1046182391");
    noRelatedSym_0_0.set(SecurityID_16);
    Instrument_16.insert(SecurityID_16.getString());
    FIX::SecurityIDSource SecurityIDSource_16("STRING_6");
    noRelatedSym_0_0.set(SecurityIDSource_16);
    Instrument_16.insert(SecurityIDSource_16.getString());
    FIX::SecurityStatus SecurityStatus_16("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_16);
    Instrument_16.insert(SecurityStatus_16.getString());
    FIX::SecuritySubType SecuritySubType_16("STRING_480638440");
    noRelatedSym_0_0.set(SecuritySubType_16);
    Instrument_16.insert(SecuritySubType_16.getString());
    FIX::SecurityType SecurityType_18("STRING_BRADY");
    noRelatedSym_0_0.set(SecurityType_18);
    Instrument_16.insert(SecurityType_18.getString());
    FIX::Seniority Seniority_16("STRING_SR");
    noRelatedSym_0_0.set(Seniority_16);
    Instrument_16.insert(Seniority_16.getString());
    FIX::SettlMethod SettlMethod_16('P');
    noRelatedSym_0_0.set(SettlMethod_16);
    Instrument_16.insert(SettlMethod_16.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_16("STRING_1543602107");
    noRelatedSym_0_0.set(SettleOnOpenFlag_16);
    Instrument_16.insert(SettleOnOpenFlag_16.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_16("STRING_1004375634");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_16);
    Instrument_16.insert(StateOrProvinceOfIssue_16.getString());
    FIX::StrikeCurrency StrikeCurrency_16("EUR");
    noRelatedSym_0_0.set(StrikeCurrency_16);
    Instrument_16.insert(StrikeCurrency_16.getString());
    FIX::StrikeMultiplier StrikeMultiplier_16;
    StrikeMultiplier_16.setString("18927881");
    noRelatedSym_0_0.set(StrikeMultiplier_16);
    Instrument_16.insert(StrikeMultiplier_16.getString());
    FIX::StrikePrice StrikePrice_16;
    StrikePrice_16.setString("4501359");
    noRelatedSym_0_0.set(StrikePrice_16);
    Instrument_16.insert(StrikePrice_16.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_16(3);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_16);
    Instrument_16.insert(StrikePriceBoundaryMethod_16.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_16;
    StrikePriceBoundaryPrecision_16.setString("12.730000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_16);
    Instrument_16.insert(StrikePriceBoundaryPrecision_16.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_16(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_16);
    Instrument_16.insert(StrikePriceDeterminationMethod_16.getString());
    FIX::StrikeValue StrikeValue_16;
    StrikeValue_16.setString("768338");
    noRelatedSym_0_0.set(StrikeValue_16);
    Instrument_16.insert(StrikeValue_16.getString());
    FIX::Symbol Symbol_16("STRING_1438607130");
    noRelatedSym_0_0.set(Symbol_16);
    Instrument_16.insert(Symbol_16.getString());
    FIX::SymbolSfx SymbolSfx_16("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_16);
    Instrument_16.insert(SymbolSfx_16.getString());
    FIX::TimeUnit TimeUnit_16("STRING_H");
    noRelatedSym_0_0.set(TimeUnit_16);
    Instrument_16.insert(TimeUnit_16.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_16(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_16);
    Instrument_16.insert(UnderlyingPriceDeterminationMethod_16.getString());
    FIX::UnitOfMeasure UnitOfMeasure_16("STRING_MMbbl");
    noRelatedSym_0_0.set(UnitOfMeasure_16);
    Instrument_16.insert(UnitOfMeasure_16.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_16;
    UnitOfMeasureQty_16.setString("57258");
    noRelatedSym_0_0.set(UnitOfMeasureQty_16);
    Instrument_16.insert(UnitOfMeasureQty_16.getString());
    FIX::ValuationMethod ValuationMethod_16("STRING_FUTDA");
    noRelatedSym_0_0.set(ValuationMethod_16);
    Instrument_16.insert(ValuationMethod_16.getString());
    all_values.push_back(Instrument_16);
    all_compo_names.insert("..NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_16;
      FIX::ComplexEventCondition ComplexEventCondition_16(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_16);
      ComplexEvents_NoComplexEvents_16.insert(ComplexEventCondition_16.getString());
      FIX::ComplexEventPrice ComplexEventPrice_16;
      ComplexEventPrice_16.setString("13432424");
      noComplexEvents_0_1_0.set(ComplexEventPrice_16);
      ComplexEvents_NoComplexEvents_16.insert(ComplexEventPrice_16.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_16(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_16);
      ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceBoundaryMethod_16.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_16;
      ComplexEventPriceBoundaryPrecision_16.setString("92.450000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_16);
      ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceBoundaryPrecision_16.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_16(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_16);
      ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceTimeType_16.getString());
      FIX::ComplexEventType ComplexEventType_16(1);
      noComplexEvents_0_1_0.set(ComplexEventType_16);
      ComplexEvents_NoComplexEvents_16.insert(ComplexEventType_16.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_16;
      ComplexOptPayoutAmount_16.setString("9807379");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_16);
      ComplexEvents_NoComplexEvents_16.insert(ComplexOptPayoutAmount_16.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_16);
      all_compo_names.insert("..NoRelatedSym...NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_16;
        FIX::ComplexEventEndDate ComplexEventEndDate_16(FIX::UTCTIMESTAMP(12, 36, 54, 13, 4, 2007));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_16);
        ComplexEventDates_NoComplexEventDates_16.insert(ComplexEventEndDate_16.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_16(FIX::UTCTIMESTAMP(15, 47, 33, 6, 9, 2004));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_16);
        ComplexEventDates_NoComplexEventDates_16.insert(ComplexEventStartDate_16.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_16);
        all_compo_names.insert("..NoRelatedSym...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_16;
          FIX::ComplexEventEndTime ComplexEventEndTime_16(FIX::UTCTIMEONLY(14, 18, 14));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_16);
          ComplexEventTimes_NoComplexEventTimes_16.insert(ComplexEventEndTime_16.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_16(FIX::UTCTIMEONLY(17, 36, 8));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_16);
          ComplexEventTimes_NoComplexEventTimes_16.insert(ComplexEventStartTime_16.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_16);
          all_compo_names.insert("..NoRelatedSym...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_16;
      FIX::EventDate EventDate_16("LOCALMKTDATE_1178474100");
      noEvents_0_1_0.set(EventDate_16);
      EvntGrp_NoEvents_16.insert(EventDate_16.getString());
      FIX::EventPx EventPx_16;
      EventPx_16.setString("21314017");
      noEvents_0_1_0.set(EventPx_16);
      EvntGrp_NoEvents_16.insert(EventPx_16.getString());
      FIX::EventText EventText_16("STRING_1791308112");
      noEvents_0_1_0.set(EventText_16);
      EvntGrp_NoEvents_16.insert(EventText_16.getString());
      FIX::EventTime EventTime_16(FIX::UTCTIMESTAMP(18, 12, 16, 7, 1, 2002));
      noEvents_0_1_0.set(EventTime_16);
      EvntGrp_NoEvents_16.insert(EventTime_16.getString());
      FIX::EventType EventType_16(19);
      noEvents_0_1_0.set(EventType_16);
      EvntGrp_NoEvents_16.insert(EventType_16.getString());
      all_values.push_back(EvntGrp_NoEvents_16);
      all_compo_names.insert("..NoRelatedSym...NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_16;
      FIX::InstrumentPartyID InstrumentPartyID_16("STRING_1827266280");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_16);
      InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyID_16.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_16('5');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_16);
      InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyIDSource_16.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_16(999150190);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_16);
      InstrumentParties_NoInstrumentParties_16.insert(InstrumentPartyRole_16.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_16);
      all_compo_names.insert("..NoRelatedSym...NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16;
        FIX::InstrumentPartySubID InstrumentPartySubID_16("STRING_1825426426");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_16);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16.insert(InstrumentPartySubID_16.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_16(1742070043);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_16);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16.insert(InstrumentPartySubIDType_16.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);
        all_compo_names.insert("..NoRelatedSym...NoInstrumentParties..NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_16;
      FIX::SecurityAltID SecurityAltID_16("STRING_1470595498");
      noSecurityAltID_0_1_0.set(SecurityAltID_16);
      SecAltIDGrp_NoSecurityAltID_16.insert(SecurityAltID_16.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_16("STRING_1945414697");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_16);
      SecAltIDGrp_NoSecurityAltID_16.insert(SecurityAltIDSource_16.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_16);
      all_compo_names.insert("..NoRelatedSym...NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_32;
    FIX::SecurityXML SecurityXML_33("XMLDATA_1728040936");
    noRelatedSym_0_0.set(SecurityXML_33);
    FIX::SecurityXMLLen SecurityXMLLen_16(406888053);
    noRelatedSym_0_0.set(SecurityXMLLen_16);
    FIX::SecurityXMLSchema SecurityXMLSchema_16("STRING_1465274855");
    noRelatedSym_0_0.set(SecurityXMLSchema_16);
    SecurityXML_32.insert(SecurityXMLSchema_16.getString());
    all_values.push_back(SecurityXML_32);
    all_compo_names.insert("..NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_4;
    FIX::DeliveryForm DeliveryForm_4(1);
    noRelatedSym_0_0.set(DeliveryForm_4);
    InstrumentExtension_4.insert(DeliveryForm_4.getString());
    FIX::PctAtRisk PctAtRisk_4;
    PctAtRisk_4.setString("94.880000");
    noRelatedSym_0_0.set(PctAtRisk_4);
    InstrumentExtension_4.insert(PctAtRisk_4.getString());
    all_values.push_back(InstrumentExtension_4);
    all_compo_names.insert("..NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_4;
      FIX::InstrAttribType InstrAttribType_4(18);
      noInstrAttrib_0_1_0.set(InstrAttribType_4);
      AttrbGrp_NoInstrAttrib_4.insert(InstrAttribType_4.getString());
      FIX::InstrAttribValue InstrAttribValue_4("STRING_947861176");
      noInstrAttrib_0_1_0.set(InstrAttribValue_4);
      AttrbGrp_NoInstrAttrib_4.insert(InstrAttribValue_4.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_4);
      all_compo_names.insert("..NoRelatedSym...NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_0;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_0;
    SecondaryHighLimitPrice_0.setString("7787188");
    noRelatedSym_0_0.set(SecondaryHighLimitPrice_0);
    SecondaryPriceLimits_0.insert(SecondaryHighLimitPrice_0.getString());
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_0;
    SecondaryLowLimitPrice_0.setString("7934992");
    noRelatedSym_0_0.set(SecondaryLowLimitPrice_0);
    SecondaryPriceLimits_0.insert(SecondaryLowLimitPrice_0.getString());
    FIX::SecondaryPriceLimitType SecondaryPriceLimitType_0(2126335276);
    noRelatedSym_0_0.set(SecondaryPriceLimitType_0);
    SecondaryPriceLimits_0.insert(SecondaryPriceLimitType_0.getString());
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_0;
    SecondaryTradingReferencePrice_0.setString("7626369");
    noRelatedSym_0_0.set(SecondaryTradingReferencePrice_0);
    SecondaryPriceLimits_0.insert(SecondaryTradingReferencePrice_0.getString());
    all_values.push_back(SecondaryPriceLimits_0);
    all_compo_names.insert("..NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_15;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_15("DATA_437323679");
  msg.set(EncodedUnderlyingIssuer_15);
  UnderlyingInstrument_15.insert(EncodedUnderlyingIssuer_15.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_15(805442494);
  msg.set(EncodedUnderlyingIssuerLen_15);
  UnderlyingInstrument_15.insert(EncodedUnderlyingIssuerLen_15.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_15("DATA_861566567");
  msg.set(EncodedUnderlyingSecurityDesc_15);
  UnderlyingInstrument_15.insert(EncodedUnderlyingSecurityDesc_15.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_15(1061886132);
  msg.set(EncodedUnderlyingSecurityDescLen_15);
  UnderlyingInstrument_15.insert(EncodedUnderlyingSecurityDescLen_15.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_15;
  UnderlyingAdjustedQuantity_15.setString("15062771");
  msg.set(UnderlyingAdjustedQuantity_15);
  UnderlyingInstrument_15.insert(UnderlyingAdjustedQuantity_15.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_15;
  UnderlyingAllocationPercent_15.setString("69.300000");
  msg.set(UnderlyingAllocationPercent_15);
  UnderlyingInstrument_15.insert(UnderlyingAllocationPercent_15.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_15;
  UnderlyingAttachmentPoint_15.setString("13.640000");
  msg.set(UnderlyingAttachmentPoint_15);
  UnderlyingInstrument_15.insert(UnderlyingAttachmentPoint_15.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_15("STRING_1998526534");
  msg.set(UnderlyingCFICode_15);
  UnderlyingInstrument_15.insert(UnderlyingCFICode_15.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_15("STRING_387884960");
  msg.set(UnderlyingCPProgram_15);
  UnderlyingInstrument_15.insert(UnderlyingCPProgram_15.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_15("STRING_1706707614");
  msg.set(UnderlyingCPRegType_15);
  UnderlyingInstrument_15.insert(UnderlyingCPRegType_15.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_15;
  UnderlyingCapValue_15.setString("16783091");
  msg.set(UnderlyingCapValue_15);
  UnderlyingInstrument_15.insert(UnderlyingCapValue_15.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_15;
  UnderlyingCashAmount_15.setString("9108499");
  msg.set(UnderlyingCashAmount_15);
  UnderlyingInstrument_15.insert(UnderlyingCashAmount_15.getString());
  FIX::UnderlyingCashType UnderlyingCashType_15("STRING_FIXED");
  msg.set(UnderlyingCashType_15);
  UnderlyingInstrument_15.insert(UnderlyingCashType_15.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_15;
  UnderlyingContractMultiplier_15.setString("5271728");
  msg.set(UnderlyingContractMultiplier_15);
  UnderlyingInstrument_15.insert(UnderlyingContractMultiplier_15.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_15(588792717);
  msg.set(UnderlyingContractMultiplierUnit_15);
  UnderlyingInstrument_15.insert(UnderlyingContractMultiplierUnit_15.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_15("COUNTRY_152960551");
  msg.set(UnderlyingCountryOfIssue_15);
  UnderlyingInstrument_15.insert(UnderlyingCountryOfIssue_15.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_15("LOCALMKTDATE_1850950019");
  msg.set(UnderlyingCouponPaymentDate_15);
  UnderlyingInstrument_15.insert(UnderlyingCouponPaymentDate_15.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_15;
  UnderlyingCouponRate_15.setString("82.160000");
  msg.set(UnderlyingCouponRate_15);
  UnderlyingInstrument_15.insert(UnderlyingCouponRate_15.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_15("STRING_2098375248");
  msg.set(UnderlyingCreditRating_15);
  UnderlyingInstrument_15.insert(UnderlyingCreditRating_15.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_15("CHF");
  msg.set(UnderlyingCurrency_15);
  UnderlyingInstrument_15.insert(UnderlyingCurrency_15.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_15;
  UnderlyingCurrentValue_15.setString("14161664");
  msg.set(UnderlyingCurrentValue_15);
  UnderlyingInstrument_15.insert(UnderlyingCurrentValue_15.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_15;
  UnderlyingDetachmentPoint_15.setString("63.650000");
  msg.set(UnderlyingDetachmentPoint_15);
  UnderlyingInstrument_15.insert(UnderlyingDetachmentPoint_15.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_15;
  UnderlyingDirtyPrice_15.setString("14314221");
  msg.set(UnderlyingDirtyPrice_15);
  UnderlyingInstrument_15.insert(UnderlyingDirtyPrice_15.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_15;
  UnderlyingEndPrice_15.setString("4522839");
  msg.set(UnderlyingEndPrice_15);
  UnderlyingInstrument_15.insert(UnderlyingEndPrice_15.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_15;
  UnderlyingEndValue_15.setString("17715267");
  msg.set(UnderlyingEndValue_15);
  UnderlyingInstrument_15.insert(UnderlyingEndValue_15.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_15(231799638);
  msg.set(UnderlyingExerciseStyle_15);
  UnderlyingInstrument_15.insert(UnderlyingExerciseStyle_15.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_15;
  UnderlyingFXRate_15.setString("12310028");
  msg.set(UnderlyingFXRate_15);
  UnderlyingInstrument_15.insert(UnderlyingFXRate_15.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_15('M');
  msg.set(UnderlyingFXRateCalc_15);
  UnderlyingInstrument_15.insert(UnderlyingFXRateCalc_15.getString());
  FIX::UnderlyingFactor UnderlyingFactor_15;
  UnderlyingFactor_15.setString("2106512");
  msg.set(UnderlyingFactor_15);
  UnderlyingInstrument_15.insert(UnderlyingFactor_15.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_15(1993639724);
  msg.set(UnderlyingFlowScheduleType_15);
  UnderlyingInstrument_15.insert(UnderlyingFlowScheduleType_15.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_15("STRING_854865959");
  msg.set(UnderlyingInstrRegistry_15);
  UnderlyingInstrument_15.insert(UnderlyingInstrRegistry_15.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_15("LOCALMKTDATE_1016093760");
  msg.set(UnderlyingIssueDate_15);
  UnderlyingInstrument_15.insert(UnderlyingIssueDate_15.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_15("STRING_707722643");
  msg.set(UnderlyingIssuer_15);
  UnderlyingInstrument_15.insert(UnderlyingIssuer_15.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_15("STRING_1916752091");
  msg.set(UnderlyingLocaleOfIssue_15);
  UnderlyingInstrument_15.insert(UnderlyingLocaleOfIssue_15.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_15("LOCALMKTDATE_374887242");
  msg.set(UnderlyingMaturityDate_15);
  UnderlyingInstrument_15.insert(UnderlyingMaturityDate_15.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_15("MONTHYEAR_2129799574");
  msg.set(UnderlyingMaturityMonthYear_15);
  UnderlyingInstrument_15.insert(UnderlyingMaturityMonthYear_15.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_15("TZTIMEONLY_769609807");
  msg.set(UnderlyingMaturityTime_15);
  UnderlyingInstrument_15.insert(UnderlyingMaturityTime_15.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_15;
  UnderlyingNotionalPercentageOutstanding_15.setString("1.290000");
  msg.set(UnderlyingNotionalPercentageOutstanding_15);
  UnderlyingInstrument_15.insert(UnderlyingNotionalPercentageOutstanding_15.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_15('3');
  msg.set(UnderlyingOptAttribute_15);
  UnderlyingInstrument_15.insert(UnderlyingOptAttribute_15.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_15;
  UnderlyingOriginalNotionalPercentageOutstanding_15.setString("37.730000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_15);
  UnderlyingInstrument_15.insert(UnderlyingOriginalNotionalPercentageOutstanding_15.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_15("STRING_1904239295");
  msg.set(UnderlyingPriceUnitOfMeasure_15);
  UnderlyingInstrument_15.insert(UnderlyingPriceUnitOfMeasure_15.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_15;
  UnderlyingPriceUnitOfMeasureQty_15.setString("12810508");
  msg.set(UnderlyingPriceUnitOfMeasureQty_15);
  UnderlyingInstrument_15.insert(UnderlyingPriceUnitOfMeasureQty_15.getString());
  FIX::UnderlyingProduct UnderlyingProduct_15(887207929);
  msg.set(UnderlyingProduct_15);
  UnderlyingInstrument_15.insert(UnderlyingProduct_15.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_15(283928477);
  msg.set(UnderlyingPutOrCall_15);
  UnderlyingInstrument_15.insert(UnderlyingPutOrCall_15.getString());
  FIX::UnderlyingPx UnderlyingPx_15;
  UnderlyingPx_15.setString("18698435");
  msg.set(UnderlyingPx_15);
  UnderlyingInstrument_15.insert(UnderlyingPx_15.getString());
  FIX::UnderlyingQty UnderlyingQty_15;
  UnderlyingQty_15.setString("10401684");
  msg.set(UnderlyingQty_15);
  UnderlyingInstrument_15.insert(UnderlyingQty_15.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_15("LOCALMKTDATE_2134878496");
  msg.set(UnderlyingRedemptionDate_15);
  UnderlyingInstrument_15.insert(UnderlyingRedemptionDate_15.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_15("STRING_1781748111");
  msg.set(UnderlyingRepoCollateralSecurityType_15);
  UnderlyingInstrument_15.insert(UnderlyingRepoCollateralSecurityType_15.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_15;
  UnderlyingRepurchaseRate_15.setString("0.810000");
  msg.set(UnderlyingRepurchaseRate_15);
  UnderlyingInstrument_15.insert(UnderlyingRepurchaseRate_15.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_15(1418902155);
  msg.set(UnderlyingRepurchaseTerm_15);
  UnderlyingInstrument_15.insert(UnderlyingRepurchaseTerm_15.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_15("STRING_2100540733");
  msg.set(UnderlyingRestructuringType_15);
  UnderlyingInstrument_15.insert(UnderlyingRestructuringType_15.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_15("STRING_259742889");
  msg.set(UnderlyingSecurityDesc_15);
  UnderlyingInstrument_15.insert(UnderlyingSecurityDesc_15.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_15("EXCHANGE_2106198520");
  msg.set(UnderlyingSecurityExchange_15);
  UnderlyingInstrument_15.insert(UnderlyingSecurityExchange_15.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_15("STRING_1384479194");
  msg.set(UnderlyingSecurityID_15);
  UnderlyingInstrument_15.insert(UnderlyingSecurityID_15.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_15("STRING_712026837");
  msg.set(UnderlyingSecurityIDSource_15);
  UnderlyingInstrument_15.insert(UnderlyingSecurityIDSource_15.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_15("STRING_1730241584");
  msg.set(UnderlyingSecuritySubType_15);
  UnderlyingInstrument_15.insert(UnderlyingSecuritySubType_15.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_15("STRING_1616278832");
  msg.set(UnderlyingSecurityType_15);
  UnderlyingInstrument_15.insert(UnderlyingSecurityType_15.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_15("STRING_1943029645");
  msg.set(UnderlyingSeniority_15);
  UnderlyingInstrument_15.insert(UnderlyingSeniority_15.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_15("STRING_300216");
  msg.set(UnderlyingSettlMethod_15);
  UnderlyingInstrument_15.insert(UnderlyingSettlMethod_15.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_15(5);
  msg.set(UnderlyingSettlementType_15);
  UnderlyingInstrument_15.insert(UnderlyingSettlementType_15.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_15;
  UnderlyingStartValue_15.setString("17891857");
  msg.set(UnderlyingStartValue_15);
  UnderlyingInstrument_15.insert(UnderlyingStartValue_15.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_15("STRING_855166175");
  msg.set(UnderlyingStateOrProvinceOfIssue_15);
  UnderlyingInstrument_15.insert(UnderlyingStateOrProvinceOfIssue_15.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_15("CAN");
  msg.set(UnderlyingStrikeCurrency_15);
  UnderlyingInstrument_15.insert(UnderlyingStrikeCurrency_15.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_15;
  UnderlyingStrikePrice_15.setString("6244346");
  msg.set(UnderlyingStrikePrice_15);
  UnderlyingInstrument_15.insert(UnderlyingStrikePrice_15.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_15("STRING_1070427454");
  msg.set(UnderlyingSymbol_15);
  UnderlyingInstrument_15.insert(UnderlyingSymbol_15.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_15("STRING_331740643");
  msg.set(UnderlyingSymbolSfx_15);
  UnderlyingInstrument_15.insert(UnderlyingSymbolSfx_15.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_15("STRING_1394044425");
  msg.set(UnderlyingTimeUnit_15);
  UnderlyingInstrument_15.insert(UnderlyingTimeUnit_15.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_15("STRING_1296357583");
  msg.set(UnderlyingUnitOfMeasure_15);
  UnderlyingInstrument_15.insert(UnderlyingUnitOfMeasure_15.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_15;
  UnderlyingUnitOfMeasureQty_15.setString("7019415");
  msg.set(UnderlyingUnitOfMeasureQty_15);
  UnderlyingInstrument_15.insert(UnderlyingUnitOfMeasureQty_15.getString());
  all_values.push_back(UnderlyingInstrument_15);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_15;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_15("STRING_1053113230");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_15);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_15.insert(UnderlyingSecurityAltID_15.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_15("STRING_1982992355");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_15);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_15.insert(UnderlyingSecurityAltIDSource_15.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);
    all_compo_names.insert("...NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_15;
    FIX::UnderlyingStipType UnderlyingStipType_15("STRING_1337041707");
    noUnderlyingStips_0_0.set(UnderlyingStipType_15);
    UnderlyingStipulations_NoUnderlyingStips_15.insert(UnderlyingStipType_15.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_15("STRING_1705352251");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_15);
    UnderlyingStipulations_NoUnderlyingStips_15.insert(UnderlyingStipValue_15.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_15);
    all_compo_names.insert("...NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_15;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_15("STRING_1324436555");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_15);
    UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyID_15.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_15('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_15);
    UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyIDSource_15.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_15(346347394);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_15);
    UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyRole_15.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_15);
    all_compo_names.insert("...NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_15("STRING_1292673799");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_15);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15.insert(UnderlyingInstrumentPartySubID_15.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_15(606090283);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_15);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15.insert(UnderlyingInstrumentPartySubIDType_15.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);
      all_compo_names.insert("...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
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

 for (const auto &l : all_values) {
     bool found = false;
  for (const auto &xml_l : elt_lists) {
      if ( l == xml_l) {
          found = true;
          break;
      }
  }
  if ( ! found ) {
      cout << " ------> CANDIDATE " << endl;
      copy(l.begin(), l.end(), ostream_iterator<string>(cout, ", "));
      cout << endl;
  }
}
}
