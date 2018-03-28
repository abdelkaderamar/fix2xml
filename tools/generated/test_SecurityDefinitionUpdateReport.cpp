#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityDefinitionUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionUpdateReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinitionUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityDefinitionUpdateReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_21("LOCALMKTDATE_1445754328");
  msg.set(ClearingBusinessDate_21);
  SecurityDefinitionUpdateReport_0.insert(ClearingBusinessDate_21.getString());
  FIX::CorporateAction CorporateAction_9("MULTIPLECHARVALUE_O");
  msg.set(CorporateAction_9);
  SecurityDefinitionUpdateReport_0.insert(CorporateAction_9.getString());
  FIX::Currency Currency_59("CAN");
  msg.set(Currency_59);
  SecurityDefinitionUpdateReport_0.insert(Currency_59.getString());
  FIX::EncodedText EncodedText_88("DATA_1400480389");
  msg.set(EncodedText_88);
  SecurityDefinitionUpdateReport_0.insert(EncodedText_88.getString());
  FIX::EncodedTextLen EncodedTextLen_88(376361557);
  msg.set(EncodedTextLen_88);
  SecurityDefinitionUpdateReport_0.insert(EncodedTextLen_88.getString());
  FIX::SecurityReportID SecurityReportID_2(1561065176);
  msg.set(SecurityReportID_2);
  SecurityDefinitionUpdateReport_0.insert(SecurityReportID_2.getString());
  FIX::SecurityReqID SecurityReqID_5("STRING_993095977");
  msg.set(SecurityReqID_5);
  SecurityDefinitionUpdateReport_0.insert(SecurityReqID_5.getString());
  FIX::SecurityResponseID SecurityResponseID_3("STRING_116864581");
  msg.set(SecurityResponseID_3);
  SecurityDefinitionUpdateReport_0.insert(SecurityResponseID_3.getString());
  FIX::SecurityResponseType SecurityResponseType_1(3);
  msg.set(SecurityResponseType_1);
  SecurityDefinitionUpdateReport_0.insert(SecurityResponseType_1.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_1('A');
  msg.set(SecurityUpdateAction_1);
  SecurityDefinitionUpdateReport_0.insert(SecurityUpdateAction_1.getString());
  FIX::Text Text_88("STRING_1737156187");
  msg.set(Text_88);
  SecurityDefinitionUpdateReport_0.insert(Text_88.getString());
  FIX::TransactTime TransactTime_56(FIX::UTCTIMESTAMP(18, 23, 23, 20, 12, 2017));
  msg.set(TransactTime_56);
  SecurityDefinitionUpdateReport_0.insert(TransactTime_56.getString());
  all_values.push_back(SecurityDefinitionUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_13;
  FIX::ApplID ApplID_13("STRING_449434333");
  msg.set(ApplID_13);
  ApplicationSequenceControl_13.insert(ApplID_13.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_13(789699490);
  msg.set(ApplLastSeqNum_13);
  ApplicationSequenceControl_13.insert(ApplLastSeqNum_13.getString());
  FIX::ApplResendFlag ApplResendFlag_13(false);
  msg.set(ApplResendFlag_13);
  ApplicationSequenceControl_13.insert(ApplResendFlag_13.getString());
  FIX::ApplSeqNum ApplSeqNum_13(1700126810);
  msg.set(ApplSeqNum_13);
  ApplicationSequenceControl_13.insert(ApplSeqNum_13.getString());
  all_values.push_back(ApplicationSequenceControl_13);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_120;
    FIX::EncodedLegIssuer EncodedLegIssuer_120("DATA_1361550455");
    noLegs_0_0.set(EncodedLegIssuer_120);
    InstrumentLeg_120.insert(EncodedLegIssuer_120.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_120(1796620122);
    noLegs_0_0.set(EncodedLegIssuerLen_120);
    InstrumentLeg_120.insert(EncodedLegIssuerLen_120.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_120("DATA_993878218");
    noLegs_0_0.set(EncodedLegSecurityDesc_120);
    InstrumentLeg_120.insert(EncodedLegSecurityDesc_120.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_120(1953634016);
    noLegs_0_0.set(EncodedLegSecurityDescLen_120);
    InstrumentLeg_120.insert(EncodedLegSecurityDescLen_120.getString());
    FIX::LegCFICode LegCFICode_120("STRING_413227125");
    noLegs_0_0.set(LegCFICode_120);
    InstrumentLeg_120.insert(LegCFICode_120.getString());
    FIX::LegContractMultiplier LegContractMultiplier_120;
    LegContractMultiplier_120.setString("21347479");
    noLegs_0_0.set(LegContractMultiplier_120);
    InstrumentLeg_120.insert(LegContractMultiplier_120.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_120(1714250177);
    noLegs_0_0.set(LegContractMultiplierUnit_120);
    InstrumentLeg_120.insert(LegContractMultiplierUnit_120.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_120("MONTHYEAR_1858981453");
    noLegs_0_0.set(LegContractSettlMonth_120);
    InstrumentLeg_120.insert(LegContractSettlMonth_120.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_120("COUNTRY_381804056");
    noLegs_0_0.set(LegCountryOfIssue_120);
    InstrumentLeg_120.insert(LegCountryOfIssue_120.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_120("LOCALMKTDATE_1279221826");
    noLegs_0_0.set(LegCouponPaymentDate_120);
    InstrumentLeg_120.insert(LegCouponPaymentDate_120.getString());
    FIX::LegCouponRate LegCouponRate_120;
    LegCouponRate_120.setString("49.880000");
    noLegs_0_0.set(LegCouponRate_120);
    InstrumentLeg_120.insert(LegCouponRate_120.getString());
    FIX::LegCreditRating LegCreditRating_120("STRING_1782284446");
    noLegs_0_0.set(LegCreditRating_120);
    InstrumentLeg_120.insert(LegCreditRating_120.getString());
    FIX::LegCurrency LegCurrency_120("USD");
    noLegs_0_0.set(LegCurrency_120);
    InstrumentLeg_120.insert(LegCurrency_120.getString());
    FIX::LegDatedDate LegDatedDate_120("LOCALMKTDATE_627896775");
    noLegs_0_0.set(LegDatedDate_120);
    InstrumentLeg_120.insert(LegDatedDate_120.getString());
    FIX::LegExerciseStyle LegExerciseStyle_120(1772447965);
    noLegs_0_0.set(LegExerciseStyle_120);
    InstrumentLeg_120.insert(LegExerciseStyle_120.getString());
    FIX::LegFactor LegFactor_120;
    LegFactor_120.setString("16342526");
    noLegs_0_0.set(LegFactor_120);
    InstrumentLeg_120.insert(LegFactor_120.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_120(1243361961);
    noLegs_0_0.set(LegFlowScheduleType_120);
    InstrumentLeg_120.insert(LegFlowScheduleType_120.getString());
    FIX::LegInstrRegistry LegInstrRegistry_120("STRING_1362120504");
    noLegs_0_0.set(LegInstrRegistry_120);
    InstrumentLeg_120.insert(LegInstrRegistry_120.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_120("LOCALMKTDATE_1350197672");
    noLegs_0_0.set(LegInterestAccrualDate_120);
    InstrumentLeg_120.insert(LegInterestAccrualDate_120.getString());
    FIX::LegIssueDate LegIssueDate_120("LOCALMKTDATE_1671343035");
    noLegs_0_0.set(LegIssueDate_120);
    InstrumentLeg_120.insert(LegIssueDate_120.getString());
    FIX::LegIssuer LegIssuer_120("STRING_1855175747");
    noLegs_0_0.set(LegIssuer_120);
    InstrumentLeg_120.insert(LegIssuer_120.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_120("STRING_2049574136");
    noLegs_0_0.set(LegLocaleOfIssue_120);
    InstrumentLeg_120.insert(LegLocaleOfIssue_120.getString());
    FIX::LegMaturityDate LegMaturityDate_120("LOCALMKTDATE_451597855");
    noLegs_0_0.set(LegMaturityDate_120);
    InstrumentLeg_120.insert(LegMaturityDate_120.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_120("MONTHYEAR_733974051");
    noLegs_0_0.set(LegMaturityMonthYear_120);
    InstrumentLeg_120.insert(LegMaturityMonthYear_120.getString());
    FIX::LegMaturityTime LegMaturityTime_120("TZTIMEONLY_620061959");
    noLegs_0_0.set(LegMaturityTime_120);
    InstrumentLeg_120.insert(LegMaturityTime_120.getString());
    FIX::LegOptAttribute LegOptAttribute_120('9');
    noLegs_0_0.set(LegOptAttribute_120);
    InstrumentLeg_120.insert(LegOptAttribute_120.getString());
    FIX::LegOptionRatio LegOptionRatio_120;
    LegOptionRatio_120.setString("15236735");
    noLegs_0_0.set(LegOptionRatio_120);
    InstrumentLeg_120.insert(LegOptionRatio_120.getString());
    FIX::LegPool LegPool_120("STRING_347069032");
    noLegs_0_0.set(LegPool_120);
    InstrumentLeg_120.insert(LegPool_120.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_120("STRING_453675350");
    noLegs_0_0.set(LegPriceUnitOfMeasure_120);
    InstrumentLeg_120.insert(LegPriceUnitOfMeasure_120.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_120;
    LegPriceUnitOfMeasureQty_120.setString("17234165");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_120);
    InstrumentLeg_120.insert(LegPriceUnitOfMeasureQty_120.getString());
    FIX::LegProduct LegProduct_120(1708619487);
    noLegs_0_0.set(LegProduct_120);
    InstrumentLeg_120.insert(LegProduct_120.getString());
    FIX::LegPutOrCall LegPutOrCall_120(102811825);
    noLegs_0_0.set(LegPutOrCall_120);
    InstrumentLeg_120.insert(LegPutOrCall_120.getString());
    FIX::LegRatioQty LegRatioQty_120;
    LegRatioQty_120.setString("5698110");
    noLegs_0_0.set(LegRatioQty_120);
    InstrumentLeg_120.insert(LegRatioQty_120.getString());
    FIX::LegRedemptionDate LegRedemptionDate_120("LOCALMKTDATE_1514769855");
    noLegs_0_0.set(LegRedemptionDate_120);
    InstrumentLeg_120.insert(LegRedemptionDate_120.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_120("STRING_516038950");
    noLegs_0_0.set(LegRepoCollateralSecurityType_120);
    InstrumentLeg_120.insert(LegRepoCollateralSecurityType_120.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_120;
    LegRepurchaseRate_120.setString("54.060000");
    noLegs_0_0.set(LegRepurchaseRate_120);
    InstrumentLeg_120.insert(LegRepurchaseRate_120.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_120(1081536384);
    noLegs_0_0.set(LegRepurchaseTerm_120);
    InstrumentLeg_120.insert(LegRepurchaseTerm_120.getString());
    FIX::LegSecurityDesc LegSecurityDesc_120("STRING_227536755");
    noLegs_0_0.set(LegSecurityDesc_120);
    InstrumentLeg_120.insert(LegSecurityDesc_120.getString());
    FIX::LegSecurityExchange LegSecurityExchange_120("EXCHANGE_938879462");
    noLegs_0_0.set(LegSecurityExchange_120);
    InstrumentLeg_120.insert(LegSecurityExchange_120.getString());
    FIX::LegSecurityID LegSecurityID_120("STRING_213274563");
    noLegs_0_0.set(LegSecurityID_120);
    InstrumentLeg_120.insert(LegSecurityID_120.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_120("STRING_709421743");
    noLegs_0_0.set(LegSecurityIDSource_120);
    InstrumentLeg_120.insert(LegSecurityIDSource_120.getString());
    FIX::LegSecuritySubType LegSecuritySubType_120("STRING_573680260");
    noLegs_0_0.set(LegSecuritySubType_120);
    InstrumentLeg_120.insert(LegSecuritySubType_120.getString());
    FIX::LegSecurityType LegSecurityType_120("STRING_1868857947");
    noLegs_0_0.set(LegSecurityType_120);
    InstrumentLeg_120.insert(LegSecurityType_120.getString());
    FIX::LegSide LegSide_120('6');
    noLegs_0_0.set(LegSide_120);
    InstrumentLeg_120.insert(LegSide_120.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_120("STRING_1201577035");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_120);
    InstrumentLeg_120.insert(LegStateOrProvinceOfIssue_120.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_120("CAN");
    noLegs_0_0.set(LegStrikeCurrency_120);
    InstrumentLeg_120.insert(LegStrikeCurrency_120.getString());
    FIX::LegStrikePrice LegStrikePrice_120;
    LegStrikePrice_120.setString("2974553");
    noLegs_0_0.set(LegStrikePrice_120);
    InstrumentLeg_120.insert(LegStrikePrice_120.getString());
    FIX::LegSymbol LegSymbol_120("STRING_708459120");
    noLegs_0_0.set(LegSymbol_120);
    InstrumentLeg_120.insert(LegSymbol_120.getString());
    FIX::LegSymbolSfx LegSymbolSfx_120("STRING_1441854907");
    noLegs_0_0.set(LegSymbolSfx_120);
    InstrumentLeg_120.insert(LegSymbolSfx_120.getString());
    FIX::LegTimeUnit LegTimeUnit_120("STRING_1968798384");
    noLegs_0_0.set(LegTimeUnit_120);
    InstrumentLeg_120.insert(LegTimeUnit_120.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_120("STRING_416151219");
    noLegs_0_0.set(LegUnitOfMeasure_120);
    InstrumentLeg_120.insert(LegUnitOfMeasure_120.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_120;
    LegUnitOfMeasureQty_120.setString("13439453");
    noLegs_0_0.set(LegUnitOfMeasureQty_120);
    InstrumentLeg_120.insert(LegUnitOfMeasureQty_120.getString());
    all_values.push_back(InstrumentLeg_120);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_242;
      FIX::LegSecurityAltID LegSecurityAltID_242("STRING_1150125270");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_242);
      LegSecAltIDGrp_NoLegSecurityAltID_242.insert(LegSecurityAltID_242.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_242("STRING_1964007354");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_242);
      LegSecAltIDGrp_NoLegSecurityAltID_242.insert(LegSecurityAltIDSource_242.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_242);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_121;
    FIX::EncodedLegIssuer EncodedLegIssuer_121("DATA_1173944780");
    noLegs_0_1.set(EncodedLegIssuer_121);
    InstrumentLeg_121.insert(EncodedLegIssuer_121.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_121(526315164);
    noLegs_0_1.set(EncodedLegIssuerLen_121);
    InstrumentLeg_121.insert(EncodedLegIssuerLen_121.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_121("DATA_163592738");
    noLegs_0_1.set(EncodedLegSecurityDesc_121);
    InstrumentLeg_121.insert(EncodedLegSecurityDesc_121.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_121(1627620131);
    noLegs_0_1.set(EncodedLegSecurityDescLen_121);
    InstrumentLeg_121.insert(EncodedLegSecurityDescLen_121.getString());
    FIX::LegCFICode LegCFICode_121("STRING_102248032");
    noLegs_0_1.set(LegCFICode_121);
    InstrumentLeg_121.insert(LegCFICode_121.getString());
    FIX::LegContractMultiplier LegContractMultiplier_121;
    LegContractMultiplier_121.setString("18722122");
    noLegs_0_1.set(LegContractMultiplier_121);
    InstrumentLeg_121.insert(LegContractMultiplier_121.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_121(1730431956);
    noLegs_0_1.set(LegContractMultiplierUnit_121);
    InstrumentLeg_121.insert(LegContractMultiplierUnit_121.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_121("MONTHYEAR_672059119");
    noLegs_0_1.set(LegContractSettlMonth_121);
    InstrumentLeg_121.insert(LegContractSettlMonth_121.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_121("COUNTRY_1239498432");
    noLegs_0_1.set(LegCountryOfIssue_121);
    InstrumentLeg_121.insert(LegCountryOfIssue_121.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_121("LOCALMKTDATE_98987258");
    noLegs_0_1.set(LegCouponPaymentDate_121);
    InstrumentLeg_121.insert(LegCouponPaymentDate_121.getString());
    FIX::LegCouponRate LegCouponRate_121;
    LegCouponRate_121.setString("45.250000");
    noLegs_0_1.set(LegCouponRate_121);
    InstrumentLeg_121.insert(LegCouponRate_121.getString());
    FIX::LegCreditRating LegCreditRating_121("STRING_173551169");
    noLegs_0_1.set(LegCreditRating_121);
    InstrumentLeg_121.insert(LegCreditRating_121.getString());
    FIX::LegCurrency LegCurrency_121("EUR");
    noLegs_0_1.set(LegCurrency_121);
    InstrumentLeg_121.insert(LegCurrency_121.getString());
    FIX::LegDatedDate LegDatedDate_121("LOCALMKTDATE_386825732");
    noLegs_0_1.set(LegDatedDate_121);
    InstrumentLeg_121.insert(LegDatedDate_121.getString());
    FIX::LegExerciseStyle LegExerciseStyle_121(1035945756);
    noLegs_0_1.set(LegExerciseStyle_121);
    InstrumentLeg_121.insert(LegExerciseStyle_121.getString());
    FIX::LegFactor LegFactor_121;
    LegFactor_121.setString("5942106");
    noLegs_0_1.set(LegFactor_121);
    InstrumentLeg_121.insert(LegFactor_121.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_121(108200031);
    noLegs_0_1.set(LegFlowScheduleType_121);
    InstrumentLeg_121.insert(LegFlowScheduleType_121.getString());
    FIX::LegInstrRegistry LegInstrRegistry_121("STRING_1640834016");
    noLegs_0_1.set(LegInstrRegistry_121);
    InstrumentLeg_121.insert(LegInstrRegistry_121.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_121("LOCALMKTDATE_1795787635");
    noLegs_0_1.set(LegInterestAccrualDate_121);
    InstrumentLeg_121.insert(LegInterestAccrualDate_121.getString());
    FIX::LegIssueDate LegIssueDate_121("LOCALMKTDATE_1602022295");
    noLegs_0_1.set(LegIssueDate_121);
    InstrumentLeg_121.insert(LegIssueDate_121.getString());
    FIX::LegIssuer LegIssuer_121("STRING_1732491251");
    noLegs_0_1.set(LegIssuer_121);
    InstrumentLeg_121.insert(LegIssuer_121.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_121("STRING_2093242984");
    noLegs_0_1.set(LegLocaleOfIssue_121);
    InstrumentLeg_121.insert(LegLocaleOfIssue_121.getString());
    FIX::LegMaturityDate LegMaturityDate_121("LOCALMKTDATE_162997767");
    noLegs_0_1.set(LegMaturityDate_121);
    InstrumentLeg_121.insert(LegMaturityDate_121.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_121("MONTHYEAR_1026862511");
    noLegs_0_1.set(LegMaturityMonthYear_121);
    InstrumentLeg_121.insert(LegMaturityMonthYear_121.getString());
    FIX::LegMaturityTime LegMaturityTime_121("TZTIMEONLY_1914557721");
    noLegs_0_1.set(LegMaturityTime_121);
    InstrumentLeg_121.insert(LegMaturityTime_121.getString());
    FIX::LegOptAttribute LegOptAttribute_121('5');
    noLegs_0_1.set(LegOptAttribute_121);
    InstrumentLeg_121.insert(LegOptAttribute_121.getString());
    FIX::LegOptionRatio LegOptionRatio_121;
    LegOptionRatio_121.setString("2233242");
    noLegs_0_1.set(LegOptionRatio_121);
    InstrumentLeg_121.insert(LegOptionRatio_121.getString());
    FIX::LegPool LegPool_121("STRING_39986665");
    noLegs_0_1.set(LegPool_121);
    InstrumentLeg_121.insert(LegPool_121.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_121("STRING_1729274257");
    noLegs_0_1.set(LegPriceUnitOfMeasure_121);
    InstrumentLeg_121.insert(LegPriceUnitOfMeasure_121.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_121;
    LegPriceUnitOfMeasureQty_121.setString("398479");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_121);
    InstrumentLeg_121.insert(LegPriceUnitOfMeasureQty_121.getString());
    FIX::LegProduct LegProduct_121(1213931445);
    noLegs_0_1.set(LegProduct_121);
    InstrumentLeg_121.insert(LegProduct_121.getString());
    FIX::LegPutOrCall LegPutOrCall_121(108105773);
    noLegs_0_1.set(LegPutOrCall_121);
    InstrumentLeg_121.insert(LegPutOrCall_121.getString());
    FIX::LegRatioQty LegRatioQty_121;
    LegRatioQty_121.setString("2034407");
    noLegs_0_1.set(LegRatioQty_121);
    InstrumentLeg_121.insert(LegRatioQty_121.getString());
    FIX::LegRedemptionDate LegRedemptionDate_121("LOCALMKTDATE_694067928");
    noLegs_0_1.set(LegRedemptionDate_121);
    InstrumentLeg_121.insert(LegRedemptionDate_121.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_121("STRING_210353805");
    noLegs_0_1.set(LegRepoCollateralSecurityType_121);
    InstrumentLeg_121.insert(LegRepoCollateralSecurityType_121.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_121;
    LegRepurchaseRate_121.setString("29.290000");
    noLegs_0_1.set(LegRepurchaseRate_121);
    InstrumentLeg_121.insert(LegRepurchaseRate_121.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_121(277016236);
    noLegs_0_1.set(LegRepurchaseTerm_121);
    InstrumentLeg_121.insert(LegRepurchaseTerm_121.getString());
    FIX::LegSecurityDesc LegSecurityDesc_121("STRING_882412924");
    noLegs_0_1.set(LegSecurityDesc_121);
    InstrumentLeg_121.insert(LegSecurityDesc_121.getString());
    FIX::LegSecurityExchange LegSecurityExchange_121("EXCHANGE_1167667713");
    noLegs_0_1.set(LegSecurityExchange_121);
    InstrumentLeg_121.insert(LegSecurityExchange_121.getString());
    FIX::LegSecurityID LegSecurityID_121("STRING_376003494");
    noLegs_0_1.set(LegSecurityID_121);
    InstrumentLeg_121.insert(LegSecurityID_121.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_121("STRING_2111547449");
    noLegs_0_1.set(LegSecurityIDSource_121);
    InstrumentLeg_121.insert(LegSecurityIDSource_121.getString());
    FIX::LegSecuritySubType LegSecuritySubType_121("STRING_1341218882");
    noLegs_0_1.set(LegSecuritySubType_121);
    InstrumentLeg_121.insert(LegSecuritySubType_121.getString());
    FIX::LegSecurityType LegSecurityType_121("STRING_702527507");
    noLegs_0_1.set(LegSecurityType_121);
    InstrumentLeg_121.insert(LegSecurityType_121.getString());
    FIX::LegSide LegSide_121('2');
    noLegs_0_1.set(LegSide_121);
    InstrumentLeg_121.insert(LegSide_121.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_121("STRING_1728044614");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_121);
    InstrumentLeg_121.insert(LegStateOrProvinceOfIssue_121.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_121("CAN");
    noLegs_0_1.set(LegStrikeCurrency_121);
    InstrumentLeg_121.insert(LegStrikeCurrency_121.getString());
    FIX::LegStrikePrice LegStrikePrice_121;
    LegStrikePrice_121.setString("18362446");
    noLegs_0_1.set(LegStrikePrice_121);
    InstrumentLeg_121.insert(LegStrikePrice_121.getString());
    FIX::LegSymbol LegSymbol_121("STRING_1231823632");
    noLegs_0_1.set(LegSymbol_121);
    InstrumentLeg_121.insert(LegSymbol_121.getString());
    FIX::LegSymbolSfx LegSymbolSfx_121("STRING_227108728");
    noLegs_0_1.set(LegSymbolSfx_121);
    InstrumentLeg_121.insert(LegSymbolSfx_121.getString());
    FIX::LegTimeUnit LegTimeUnit_121("STRING_1290783292");
    noLegs_0_1.set(LegTimeUnit_121);
    InstrumentLeg_121.insert(LegTimeUnit_121.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_121("STRING_816831236");
    noLegs_0_1.set(LegUnitOfMeasure_121);
    InstrumentLeg_121.insert(LegUnitOfMeasure_121.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_121;
    LegUnitOfMeasureQty_121.setString("1728680");
    noLegs_0_1.set(LegUnitOfMeasureQty_121);
    InstrumentLeg_121.insert(LegUnitOfMeasureQty_121.getString());
    all_values.push_back(InstrumentLeg_121);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_243;
      FIX::LegSecurityAltID LegSecurityAltID_243("STRING_1843693747");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_243);
      LegSecAltIDGrp_NoLegSecurityAltID_243.insert(LegSecurityAltID_243.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_243("STRING_2087425786");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_243);
      LegSecAltIDGrp_NoLegSecurityAltID_243.insert(LegSecurityAltIDSource_243.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_243);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_244;
      FIX::LegSecurityAltID LegSecurityAltID_244("STRING_2032930046");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_244);
      LegSecAltIDGrp_NoLegSecurityAltID_244.insert(LegSecurityAltID_244.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_244("STRING_2067018005");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_244);
      LegSecAltIDGrp_NoLegSecurityAltID_244.insert(LegSecurityAltIDSource_244.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_244);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_122;
    FIX::EncodedLegIssuer EncodedLegIssuer_122("DATA_2127412451");
    noLegs_0_2.set(EncodedLegIssuer_122);
    InstrumentLeg_122.insert(EncodedLegIssuer_122.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_122(1614720655);
    noLegs_0_2.set(EncodedLegIssuerLen_122);
    InstrumentLeg_122.insert(EncodedLegIssuerLen_122.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_122("DATA_2106865970");
    noLegs_0_2.set(EncodedLegSecurityDesc_122);
    InstrumentLeg_122.insert(EncodedLegSecurityDesc_122.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_122(1193860248);
    noLegs_0_2.set(EncodedLegSecurityDescLen_122);
    InstrumentLeg_122.insert(EncodedLegSecurityDescLen_122.getString());
    FIX::LegCFICode LegCFICode_122("STRING_1722826428");
    noLegs_0_2.set(LegCFICode_122);
    InstrumentLeg_122.insert(LegCFICode_122.getString());
    FIX::LegContractMultiplier LegContractMultiplier_122;
    LegContractMultiplier_122.setString("1628230");
    noLegs_0_2.set(LegContractMultiplier_122);
    InstrumentLeg_122.insert(LegContractMultiplier_122.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_122(1887928177);
    noLegs_0_2.set(LegContractMultiplierUnit_122);
    InstrumentLeg_122.insert(LegContractMultiplierUnit_122.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_122("MONTHYEAR_1933180233");
    noLegs_0_2.set(LegContractSettlMonth_122);
    InstrumentLeg_122.insert(LegContractSettlMonth_122.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_122("COUNTRY_90992307");
    noLegs_0_2.set(LegCountryOfIssue_122);
    InstrumentLeg_122.insert(LegCountryOfIssue_122.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_122("LOCALMKTDATE_17460765");
    noLegs_0_2.set(LegCouponPaymentDate_122);
    InstrumentLeg_122.insert(LegCouponPaymentDate_122.getString());
    FIX::LegCouponRate LegCouponRate_122;
    LegCouponRate_122.setString("95.100000");
    noLegs_0_2.set(LegCouponRate_122);
    InstrumentLeg_122.insert(LegCouponRate_122.getString());
    FIX::LegCreditRating LegCreditRating_122("STRING_1258660020");
    noLegs_0_2.set(LegCreditRating_122);
    InstrumentLeg_122.insert(LegCreditRating_122.getString());
    FIX::LegCurrency LegCurrency_122("CHF");
    noLegs_0_2.set(LegCurrency_122);
    InstrumentLeg_122.insert(LegCurrency_122.getString());
    FIX::LegDatedDate LegDatedDate_122("LOCALMKTDATE_452395255");
    noLegs_0_2.set(LegDatedDate_122);
    InstrumentLeg_122.insert(LegDatedDate_122.getString());
    FIX::LegExerciseStyle LegExerciseStyle_122(1095991767);
    noLegs_0_2.set(LegExerciseStyle_122);
    InstrumentLeg_122.insert(LegExerciseStyle_122.getString());
    FIX::LegFactor LegFactor_122;
    LegFactor_122.setString("6167674");
    noLegs_0_2.set(LegFactor_122);
    InstrumentLeg_122.insert(LegFactor_122.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_122(32956221);
    noLegs_0_2.set(LegFlowScheduleType_122);
    InstrumentLeg_122.insert(LegFlowScheduleType_122.getString());
    FIX::LegInstrRegistry LegInstrRegistry_122("STRING_686981383");
    noLegs_0_2.set(LegInstrRegistry_122);
    InstrumentLeg_122.insert(LegInstrRegistry_122.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_122("LOCALMKTDATE_1195572193");
    noLegs_0_2.set(LegInterestAccrualDate_122);
    InstrumentLeg_122.insert(LegInterestAccrualDate_122.getString());
    FIX::LegIssueDate LegIssueDate_122("LOCALMKTDATE_1869200867");
    noLegs_0_2.set(LegIssueDate_122);
    InstrumentLeg_122.insert(LegIssueDate_122.getString());
    FIX::LegIssuer LegIssuer_122("STRING_1918805016");
    noLegs_0_2.set(LegIssuer_122);
    InstrumentLeg_122.insert(LegIssuer_122.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_122("STRING_1422680922");
    noLegs_0_2.set(LegLocaleOfIssue_122);
    InstrumentLeg_122.insert(LegLocaleOfIssue_122.getString());
    FIX::LegMaturityDate LegMaturityDate_122("LOCALMKTDATE_1012500511");
    noLegs_0_2.set(LegMaturityDate_122);
    InstrumentLeg_122.insert(LegMaturityDate_122.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_122("MONTHYEAR_588152604");
    noLegs_0_2.set(LegMaturityMonthYear_122);
    InstrumentLeg_122.insert(LegMaturityMonthYear_122.getString());
    FIX::LegMaturityTime LegMaturityTime_122("TZTIMEONLY_1595548987");
    noLegs_0_2.set(LegMaturityTime_122);
    InstrumentLeg_122.insert(LegMaturityTime_122.getString());
    FIX::LegOptAttribute LegOptAttribute_122('3');
    noLegs_0_2.set(LegOptAttribute_122);
    InstrumentLeg_122.insert(LegOptAttribute_122.getString());
    FIX::LegOptionRatio LegOptionRatio_122;
    LegOptionRatio_122.setString("2843627");
    noLegs_0_2.set(LegOptionRatio_122);
    InstrumentLeg_122.insert(LegOptionRatio_122.getString());
    FIX::LegPool LegPool_122("STRING_1535491125");
    noLegs_0_2.set(LegPool_122);
    InstrumentLeg_122.insert(LegPool_122.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_122("STRING_204244321");
    noLegs_0_2.set(LegPriceUnitOfMeasure_122);
    InstrumentLeg_122.insert(LegPriceUnitOfMeasure_122.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_122;
    LegPriceUnitOfMeasureQty_122.setString("2038970");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_122);
    InstrumentLeg_122.insert(LegPriceUnitOfMeasureQty_122.getString());
    FIX::LegProduct LegProduct_122(1515419928);
    noLegs_0_2.set(LegProduct_122);
    InstrumentLeg_122.insert(LegProduct_122.getString());
    FIX::LegPutOrCall LegPutOrCall_122(1818964976);
    noLegs_0_2.set(LegPutOrCall_122);
    InstrumentLeg_122.insert(LegPutOrCall_122.getString());
    FIX::LegRatioQty LegRatioQty_122;
    LegRatioQty_122.setString("1632793");
    noLegs_0_2.set(LegRatioQty_122);
    InstrumentLeg_122.insert(LegRatioQty_122.getString());
    FIX::LegRedemptionDate LegRedemptionDate_122("LOCALMKTDATE_561796528");
    noLegs_0_2.set(LegRedemptionDate_122);
    InstrumentLeg_122.insert(LegRedemptionDate_122.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_122("STRING_1394307756");
    noLegs_0_2.set(LegRepoCollateralSecurityType_122);
    InstrumentLeg_122.insert(LegRepoCollateralSecurityType_122.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_122;
    LegRepurchaseRate_122.setString("24.090000");
    noLegs_0_2.set(LegRepurchaseRate_122);
    InstrumentLeg_122.insert(LegRepurchaseRate_122.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_122(302241057);
    noLegs_0_2.set(LegRepurchaseTerm_122);
    InstrumentLeg_122.insert(LegRepurchaseTerm_122.getString());
    FIX::LegSecurityDesc LegSecurityDesc_122("STRING_1180004341");
    noLegs_0_2.set(LegSecurityDesc_122);
    InstrumentLeg_122.insert(LegSecurityDesc_122.getString());
    FIX::LegSecurityExchange LegSecurityExchange_122("EXCHANGE_417094716");
    noLegs_0_2.set(LegSecurityExchange_122);
    InstrumentLeg_122.insert(LegSecurityExchange_122.getString());
    FIX::LegSecurityID LegSecurityID_122("STRING_319701823");
    noLegs_0_2.set(LegSecurityID_122);
    InstrumentLeg_122.insert(LegSecurityID_122.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_122("STRING_1848113851");
    noLegs_0_2.set(LegSecurityIDSource_122);
    InstrumentLeg_122.insert(LegSecurityIDSource_122.getString());
    FIX::LegSecuritySubType LegSecuritySubType_122("STRING_1675754736");
    noLegs_0_2.set(LegSecuritySubType_122);
    InstrumentLeg_122.insert(LegSecuritySubType_122.getString());
    FIX::LegSecurityType LegSecurityType_122("STRING_713166083");
    noLegs_0_2.set(LegSecurityType_122);
    InstrumentLeg_122.insert(LegSecurityType_122.getString());
    FIX::LegSide LegSide_122('3');
    noLegs_0_2.set(LegSide_122);
    InstrumentLeg_122.insert(LegSide_122.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_122("STRING_2128149991");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_122);
    InstrumentLeg_122.insert(LegStateOrProvinceOfIssue_122.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_122("CAN");
    noLegs_0_2.set(LegStrikeCurrency_122);
    InstrumentLeg_122.insert(LegStrikeCurrency_122.getString());
    FIX::LegStrikePrice LegStrikePrice_122;
    LegStrikePrice_122.setString("136225");
    noLegs_0_2.set(LegStrikePrice_122);
    InstrumentLeg_122.insert(LegStrikePrice_122.getString());
    FIX::LegSymbol LegSymbol_122("STRING_348655586");
    noLegs_0_2.set(LegSymbol_122);
    InstrumentLeg_122.insert(LegSymbol_122.getString());
    FIX::LegSymbolSfx LegSymbolSfx_122("STRING_2145143161");
    noLegs_0_2.set(LegSymbolSfx_122);
    InstrumentLeg_122.insert(LegSymbolSfx_122.getString());
    FIX::LegTimeUnit LegTimeUnit_122("STRING_1882823432");
    noLegs_0_2.set(LegTimeUnit_122);
    InstrumentLeg_122.insert(LegTimeUnit_122.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_122("STRING_119976954");
    noLegs_0_2.set(LegUnitOfMeasure_122);
    InstrumentLeg_122.insert(LegUnitOfMeasure_122.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_122;
    LegUnitOfMeasureQty_122.setString("14203404");
    noLegs_0_2.set(LegUnitOfMeasureQty_122);
    InstrumentLeg_122.insert(LegUnitOfMeasureQty_122.getString());
    all_values.push_back(InstrumentLeg_122);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_245;
      FIX::LegSecurityAltID LegSecurityAltID_245("STRING_708129558");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_245);
      LegSecAltIDGrp_NoLegSecurityAltID_245.insert(LegSecurityAltID_245.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_245("STRING_868405774");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_245);
      LegSecAltIDGrp_NoLegSecurityAltID_245.insert(LegSecurityAltIDSource_245.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_245);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_246;
      FIX::LegSecurityAltID LegSecurityAltID_246("STRING_1066638218");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_246);
      LegSecAltIDGrp_NoLegSecurityAltID_246.insert(LegSecurityAltID_246.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_246("STRING_992492261");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_246);
      LegSecAltIDGrp_NoLegSecurityAltID_246.insert(LegSecurityAltIDSource_246.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_246);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_75;
  FIX::AttachmentPoint AttachmentPoint_75;
  AttachmentPoint_75.setString("32.510000");
  msg.set(AttachmentPoint_75);
  Instrument_75.insert(AttachmentPoint_75.getString());
  FIX::CFICode CFICode_75("STRING_1270882539");
  msg.set(CFICode_75);
  Instrument_75.insert(CFICode_75.getString());
  FIX::CPProgram CPProgram_75(2);
  msg.set(CPProgram_75);
  Instrument_75.insert(CPProgram_75.getString());
  FIX::CPRegType CPRegType_75("STRING_1771833179");
  msg.set(CPRegType_75);
  Instrument_75.insert(CPRegType_75.getString());
  FIX::CapPrice CapPrice_75;
  CapPrice_75.setString("9423638");
  msg.set(CapPrice_75);
  Instrument_75.insert(CapPrice_75.getString());
  FIX::ContractMultiplier ContractMultiplier_75;
  ContractMultiplier_75.setString("13596687");
  msg.set(ContractMultiplier_75);
  Instrument_75.insert(ContractMultiplier_75.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_75(1);
  msg.set(ContractMultiplierUnit_75);
  Instrument_75.insert(ContractMultiplierUnit_75.getString());
  FIX::ContractSettlMonth ContractSettlMonth_75("MONTHYEAR_189187975");
  msg.set(ContractSettlMonth_75);
  Instrument_75.insert(ContractSettlMonth_75.getString());
  FIX::CountryOfIssue CountryOfIssue_75("COUNTRY_1685771113");
  msg.set(CountryOfIssue_75);
  Instrument_75.insert(CountryOfIssue_75.getString());
  FIX::CouponPaymentDate CouponPaymentDate_75("LOCALMKTDATE_488387117");
  msg.set(CouponPaymentDate_75);
  Instrument_75.insert(CouponPaymentDate_75.getString());
  FIX::CouponRate CouponRate_75;
  CouponRate_75.setString("23.170000");
  msg.set(CouponRate_75);
  Instrument_75.insert(CouponRate_75.getString());
  FIX::CreditRating CreditRating_75("STRING_2102865829");
  msg.set(CreditRating_75);
  Instrument_75.insert(CreditRating_75.getString());
  FIX::DatedDate DatedDate_75("LOCALMKTDATE_808088940");
  msg.set(DatedDate_75);
  Instrument_75.insert(DatedDate_75.getString());
  FIX::DetachmentPoint DetachmentPoint_75;
  DetachmentPoint_75.setString("25.200000");
  msg.set(DetachmentPoint_75);
  Instrument_75.insert(DetachmentPoint_75.getString());
  FIX::EncodedIssuer EncodedIssuer_75("DATA_1631136918");
  msg.set(EncodedIssuer_75);
  Instrument_75.insert(EncodedIssuer_75.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_75(1521255023);
  msg.set(EncodedIssuerLen_75);
  Instrument_75.insert(EncodedIssuerLen_75.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_75("DATA_1402626035");
  msg.set(EncodedSecurityDesc_75);
  Instrument_75.insert(EncodedSecurityDesc_75.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_75(1611803261);
  msg.set(EncodedSecurityDescLen_75);
  Instrument_75.insert(EncodedSecurityDescLen_75.getString());
  FIX::ExerciseStyle ExerciseStyle_75(2);
  msg.set(ExerciseStyle_75);
  Instrument_75.insert(ExerciseStyle_75.getString());
  FIX::Factor Factor_75;
  Factor_75.setString("2047133");
  msg.set(Factor_75);
  Instrument_75.insert(Factor_75.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_75(true);
  msg.set(FlexProductEligibilityIndicator_75);
  Instrument_75.insert(FlexProductEligibilityIndicator_75.getString());
  FIX::FlexibleIndicator FlexibleIndicator_75(false);
  msg.set(FlexibleIndicator_75);
  Instrument_75.insert(FlexibleIndicator_75.getString());
  FIX::FloorPrice FloorPrice_75;
  FloorPrice_75.setString("2023728");
  msg.set(FloorPrice_75);
  Instrument_75.insert(FloorPrice_75.getString());
  FIX::FlowScheduleType FlowScheduleType_75(0);
  msg.set(FlowScheduleType_75);
  Instrument_75.insert(FlowScheduleType_75.getString());
  FIX::InstrRegistry InstrRegistry_75("STRING_1651561765");
  msg.set(InstrRegistry_75);
  Instrument_75.insert(InstrRegistry_75.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_75('1');
  msg.set(InstrmtAssignmentMethod_75);
  Instrument_75.insert(InstrmtAssignmentMethod_75.getString());
  FIX::InterestAccrualDate InterestAccrualDate_75("LOCALMKTDATE_2108605906");
  msg.set(InterestAccrualDate_75);
  Instrument_75.insert(InterestAccrualDate_75.getString());
  FIX::IssueDate IssueDate_75("LOCALMKTDATE_212207675");
  msg.set(IssueDate_75);
  Instrument_75.insert(IssueDate_75.getString());
  FIX::Issuer Issuer_75("STRING_343635429");
  msg.set(Issuer_75);
  Instrument_75.insert(Issuer_75.getString());
  FIX::ListMethod ListMethod_75(0);
  msg.set(ListMethod_75);
  Instrument_75.insert(ListMethod_75.getString());
  FIX::LocaleOfIssue LocaleOfIssue_75("STRING_1204699936");
  msg.set(LocaleOfIssue_75);
  Instrument_75.insert(LocaleOfIssue_75.getString());
  FIX::MaturityDate MaturityDate_75("LOCALMKTDATE_600048680");
  msg.set(MaturityDate_75);
  Instrument_75.insert(MaturityDate_75.getString());
  FIX::MaturityMonthYear MaturityMonthYear_75("MONTHYEAR_151159368");
  msg.set(MaturityMonthYear_75);
  Instrument_75.insert(MaturityMonthYear_75.getString());
  FIX::MaturityTime MaturityTime_75("TZTIMEONLY_253605610");
  msg.set(MaturityTime_75);
  Instrument_75.insert(MaturityTime_75.getString());
  FIX::MinPriceIncrement MinPriceIncrement_75;
  MinPriceIncrement_75.setString("2243982");
  msg.set(MinPriceIncrement_75);
  Instrument_75.insert(MinPriceIncrement_75.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_75;
  MinPriceIncrementAmount_75.setString("10935232");
  msg.set(MinPriceIncrementAmount_75);
  Instrument_75.insert(MinPriceIncrementAmount_75.getString());
  FIX::NTPositionLimit NTPositionLimit_75(1613274314);
  msg.set(NTPositionLimit_75);
  Instrument_75.insert(NTPositionLimit_75.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_75;
  NotionalPercentageOutstanding_75.setString("42.700000");
  msg.set(NotionalPercentageOutstanding_75);
  Instrument_75.insert(NotionalPercentageOutstanding_75.getString());
  FIX::OptAttribute OptAttribute_75('1');
  msg.set(OptAttribute_75);
  Instrument_75.insert(OptAttribute_75.getString());
  FIX::OptPayoutAmount OptPayoutAmount_75;
  OptPayoutAmount_75.setString("11515617");
  msg.set(OptPayoutAmount_75);
  Instrument_75.insert(OptPayoutAmount_75.getString());
  FIX::OptPayoutType OptPayoutType_75(3);
  msg.set(OptPayoutType_75);
  Instrument_75.insert(OptPayoutType_75.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_75;
  OriginalNotionalPercentageOutstanding_75.setString("98.800000");
  msg.set(OriginalNotionalPercentageOutstanding_75);
  Instrument_75.insert(OriginalNotionalPercentageOutstanding_75.getString());
  FIX::Pool Pool_75("STRING_1106943961");
  msg.set(Pool_75);
  Instrument_75.insert(Pool_75.getString());
  FIX::PositionLimit PositionLimit_75(1707020327);
  msg.set(PositionLimit_75);
  Instrument_75.insert(PositionLimit_75.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_75("STRING_STD");
  msg.set(PriceQuoteMethod_75);
  Instrument_75.insert(PriceQuoteMethod_75.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_75("STRING_590597231");
  msg.set(PriceUnitOfMeasure_75);
  Instrument_75.insert(PriceUnitOfMeasure_75.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_75;
  PriceUnitOfMeasureQty_75.setString("10807917");
  msg.set(PriceUnitOfMeasureQty_75);
  Instrument_75.insert(PriceUnitOfMeasureQty_75.getString());
  FIX::Product Product_77(12);
  msg.set(Product_77);
  Instrument_75.insert(Product_77.getString());
  FIX::ProductComplex ProductComplex_75("STRING_54916845");
  msg.set(ProductComplex_75);
  Instrument_75.insert(ProductComplex_75.getString());
  FIX::PutOrCall PutOrCall_75(0);
  msg.set(PutOrCall_75);
  Instrument_75.insert(PutOrCall_75.getString());
  FIX::RedemptionDate RedemptionDate_75("LOCALMKTDATE_1034098143");
  msg.set(RedemptionDate_75);
  Instrument_75.insert(RedemptionDate_75.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_75("STRING_1680342671");
  msg.set(RepoCollateralSecurityType_75);
  Instrument_75.insert(RepoCollateralSecurityType_75.getString());
  FIX::RepurchaseRate RepurchaseRate_75;
  RepurchaseRate_75.setString("20.910000");
  msg.set(RepurchaseRate_75);
  Instrument_75.insert(RepurchaseRate_75.getString());
  FIX::RepurchaseTerm RepurchaseTerm_75(1236471011);
  msg.set(RepurchaseTerm_75);
  Instrument_75.insert(RepurchaseTerm_75.getString());
  FIX::RestructuringType RestructuringType_75("STRING_MM");
  msg.set(RestructuringType_75);
  Instrument_75.insert(RestructuringType_75.getString());
  FIX::SecurityDesc SecurityDesc_75("STRING_1151900209");
  msg.set(SecurityDesc_75);
  Instrument_75.insert(SecurityDesc_75.getString());
  FIX::SecurityExchange SecurityExchange_75("EXCHANGE_711700666");
  msg.set(SecurityExchange_75);
  Instrument_75.insert(SecurityExchange_75.getString());
  FIX::SecurityGroup SecurityGroup_75("STRING_854746892");
  msg.set(SecurityGroup_75);
  Instrument_75.insert(SecurityGroup_75.getString());
  FIX::SecurityID SecurityID_75("STRING_1364107884");
  msg.set(SecurityID_75);
  Instrument_75.insert(SecurityID_75.getString());
  FIX::SecurityIDSource SecurityIDSource_75("STRING_C");
  msg.set(SecurityIDSource_75);
  Instrument_75.insert(SecurityIDSource_75.getString());
  FIX::SecurityStatus SecurityStatus_75("STRING_1");
  msg.set(SecurityStatus_75);
  Instrument_75.insert(SecurityStatus_75.getString());
  FIX::SecuritySubType SecuritySubType_76("STRING_421324173");
  msg.set(SecuritySubType_76);
  Instrument_75.insert(SecuritySubType_76.getString());
  FIX::SecurityType SecurityType_77("STRING_CD");
  msg.set(SecurityType_77);
  Instrument_75.insert(SecurityType_77.getString());
  FIX::Seniority Seniority_75("STRING_SD");
  msg.set(Seniority_75);
  Instrument_75.insert(Seniority_75.getString());
  FIX::SettlMethod SettlMethod_75('P');
  msg.set(SettlMethod_75);
  Instrument_75.insert(SettlMethod_75.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_75("STRING_1879782986");
  msg.set(SettleOnOpenFlag_75);
  Instrument_75.insert(SettleOnOpenFlag_75.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_75("STRING_979706324");
  msg.set(StateOrProvinceOfIssue_75);
  Instrument_75.insert(StateOrProvinceOfIssue_75.getString());
  FIX::StrikeCurrency StrikeCurrency_75("USD");
  msg.set(StrikeCurrency_75);
  Instrument_75.insert(StrikeCurrency_75.getString());
  FIX::StrikeMultiplier StrikeMultiplier_75;
  StrikeMultiplier_75.setString("1149338");
  msg.set(StrikeMultiplier_75);
  Instrument_75.insert(StrikeMultiplier_75.getString());
  FIX::StrikePrice StrikePrice_75;
  StrikePrice_75.setString("12922822");
  msg.set(StrikePrice_75);
  Instrument_75.insert(StrikePrice_75.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_75(2);
  msg.set(StrikePriceBoundaryMethod_75);
  Instrument_75.insert(StrikePriceBoundaryMethod_75.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_75;
  StrikePriceBoundaryPrecision_75.setString("37.670000");
  msg.set(StrikePriceBoundaryPrecision_75);
  Instrument_75.insert(StrikePriceBoundaryPrecision_75.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_75(4);
  msg.set(StrikePriceDeterminationMethod_75);
  Instrument_75.insert(StrikePriceDeterminationMethod_75.getString());
  FIX::StrikeValue StrikeValue_75;
  StrikeValue_75.setString("6013116");
  msg.set(StrikeValue_75);
  Instrument_75.insert(StrikeValue_75.getString());
  FIX::Symbol Symbol_75("STRING_46112519");
  msg.set(Symbol_75);
  Instrument_75.insert(Symbol_75.getString());
  FIX::SymbolSfx SymbolSfx_75("STRING_CD");
  msg.set(SymbolSfx_75);
  Instrument_75.insert(SymbolSfx_75.getString());
  FIX::TimeUnit TimeUnit_75("STRING_Wk");
  msg.set(TimeUnit_75);
  Instrument_75.insert(TimeUnit_75.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_75(4);
  msg.set(UnderlyingPriceDeterminationMethod_75);
  Instrument_75.insert(UnderlyingPriceDeterminationMethod_75.getString());
  FIX::UnitOfMeasure UnitOfMeasure_75("STRING_Alw");
  msg.set(UnitOfMeasure_75);
  Instrument_75.insert(UnitOfMeasure_75.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_75;
  UnitOfMeasureQty_75.setString("17983406");
  msg.set(UnitOfMeasureQty_75);
  Instrument_75.insert(UnitOfMeasureQty_75.getString());
  FIX::ValuationMethod ValuationMethod_75("STRING_EQTY");
  msg.set(ValuationMethod_75);
  Instrument_75.insert(ValuationMethod_75.getString());
  all_values.push_back(Instrument_75);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_145;
    FIX::ComplexEventCondition ComplexEventCondition_145(2);
    noComplexEvents_0_0.set(ComplexEventCondition_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventCondition_145.getString());
    FIX::ComplexEventPrice ComplexEventPrice_145;
    ComplexEventPrice_145.setString("9985828");
    noComplexEvents_0_0.set(ComplexEventPrice_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventPrice_145.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_145(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceBoundaryMethod_145.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_145;
    ComplexEventPriceBoundaryPrecision_145.setString("56.620000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceBoundaryPrecision_145.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_145(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceTimeType_145.getString());
    FIX::ComplexEventType ComplexEventType_145(7);
    noComplexEvents_0_0.set(ComplexEventType_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexEventType_145.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_145;
    ComplexOptPayoutAmount_145.setString("16672035");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_145);
    ComplexEvents_NoComplexEvents_145.insert(ComplexOptPayoutAmount_145.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_145);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_300;
      FIX::ComplexEventEndDate ComplexEventEndDate_300(FIX::UTCTIMESTAMP(8, 33, 38, 7, 12, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_300);
      ComplexEventDates_NoComplexEventDates_300.insert(ComplexEventEndDate_300.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_300(FIX::UTCTIMESTAMP(16, 1, 54, 20, 1, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_300);
      ComplexEventDates_NoComplexEventDates_300.insert(ComplexEventStartDate_300.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_300);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_610;
        FIX::ComplexEventEndTime ComplexEventEndTime_610(FIX::UTCTIMEONLY(3, 41, 27));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_610);
        ComplexEventTimes_NoComplexEventTimes_610.insert(ComplexEventEndTime_610.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_610(FIX::UTCTIMEONLY(3, 17, 58));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_610);
        ComplexEventTimes_NoComplexEventTimes_610.insert(ComplexEventStartTime_610.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_610);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_611;
        FIX::ComplexEventEndTime ComplexEventEndTime_611(FIX::UTCTIMEONLY(15, 55, 47));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_611);
        ComplexEventTimes_NoComplexEventTimes_611.insert(ComplexEventEndTime_611.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_611(FIX::UTCTIMEONLY(16, 34, 1));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_611);
        ComplexEventTimes_NoComplexEventTimes_611.insert(ComplexEventStartTime_611.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_611);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_301;
      FIX::ComplexEventEndDate ComplexEventEndDate_301(FIX::UTCTIMESTAMP(10, 34, 47, 25, 3, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_301);
      ComplexEventDates_NoComplexEventDates_301.insert(ComplexEventEndDate_301.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_301(FIX::UTCTIMESTAMP(18, 54, 4, 18, 7, 2017));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_301);
      ComplexEventDates_NoComplexEventDates_301.insert(ComplexEventStartDate_301.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_301);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_612;
        FIX::ComplexEventEndTime ComplexEventEndTime_612(FIX::UTCTIMEONLY(0, 19, 49));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_612);
        ComplexEventTimes_NoComplexEventTimes_612.insert(ComplexEventEndTime_612.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_612(FIX::UTCTIMEONLY(10, 58, 49));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_612);
        ComplexEventTimes_NoComplexEventTimes_612.insert(ComplexEventStartTime_612.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_612);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_302;
      FIX::ComplexEventEndDate ComplexEventEndDate_302(FIX::UTCTIMESTAMP(13, 36, 23, 8, 9, 2001));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_302);
      ComplexEventDates_NoComplexEventDates_302.insert(ComplexEventEndDate_302.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_302(FIX::UTCTIMESTAMP(2, 28, 55, 13, 2, 2015));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_302);
      ComplexEventDates_NoComplexEventDates_302.insert(ComplexEventStartDate_302.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_302);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_613;
        FIX::ComplexEventEndTime ComplexEventEndTime_613(FIX::UTCTIMEONLY(7, 29, 15));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_613);
        ComplexEventTimes_NoComplexEventTimes_613.insert(ComplexEventEndTime_613.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_613(FIX::UTCTIMEONLY(0, 0, 19));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_613);
        ComplexEventTimes_NoComplexEventTimes_613.insert(ComplexEventStartTime_613.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_613);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_614;
        FIX::ComplexEventEndTime ComplexEventEndTime_614(FIX::UTCTIMEONLY(1, 30, 15));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_614);
        ComplexEventTimes_NoComplexEventTimes_614.insert(ComplexEventEndTime_614.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_614(FIX::UTCTIMEONLY(4, 5, 14));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_614);
        ComplexEventTimes_NoComplexEventTimes_614.insert(ComplexEventStartTime_614.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_614);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_615;
        FIX::ComplexEventEndTime ComplexEventEndTime_615(FIX::UTCTIMEONLY(23, 50, 23));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_615);
        ComplexEventTimes_NoComplexEventTimes_615.insert(ComplexEventEndTime_615.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_615(FIX::UTCTIMEONLY(3, 4, 56));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_615);
        ComplexEventTimes_NoComplexEventTimes_615.insert(ComplexEventStartTime_615.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_615);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_148;
    FIX::EventDate EventDate_148("LOCALMKTDATE_1288862792");
    noEvents_0_0.set(EventDate_148);
    EvntGrp_NoEvents_148.insert(EventDate_148.getString());
    FIX::EventPx EventPx_148;
    EventPx_148.setString("14434301");
    noEvents_0_0.set(EventPx_148);
    EvntGrp_NoEvents_148.insert(EventPx_148.getString());
    FIX::EventText EventText_148("STRING_1391217122");
    noEvents_0_0.set(EventText_148);
    EvntGrp_NoEvents_148.insert(EventText_148.getString());
    FIX::EventTime EventTime_148(FIX::UTCTIMESTAMP(5, 37, 37, 16, 12, 2015));
    noEvents_0_0.set(EventTime_148);
    EvntGrp_NoEvents_148.insert(EventTime_148.getString());
    FIX::EventType EventType_148(19);
    noEvents_0_0.set(EventType_148);
    EvntGrp_NoEvents_148.insert(EventType_148.getString());
    all_values.push_back(EvntGrp_NoEvents_148);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_146;
    FIX::InstrumentPartyID InstrumentPartyID_146("STRING_1537263585");
    noInstrumentParties_0_0.set(InstrumentPartyID_146);
    InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyID_146.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_146('5');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_146);
    InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyIDSource_146.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_146(802989389);
    noInstrumentParties_0_0.set(InstrumentPartyRole_146);
    InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyRole_146.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_146);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297;
      FIX::InstrumentPartySubID InstrumentPartySubID_297("STRING_821792679");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_297);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297.insert(InstrumentPartySubID_297.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_297(348647976);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_297);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297.insert(InstrumentPartySubIDType_297.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298;
      FIX::InstrumentPartySubID InstrumentPartySubID_298("STRING_508689779");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_298);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298.insert(InstrumentPartySubID_298.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_298(403862411);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_298);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298.insert(InstrumentPartySubIDType_298.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299;
      FIX::InstrumentPartySubID InstrumentPartySubID_299("STRING_747845561");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_299);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299.insert(InstrumentPartySubID_299.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_299(892060573);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_299);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299.insert(InstrumentPartySubIDType_299.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_161;
    FIX::SecurityAltID SecurityAltID_161("STRING_754123600");
    noSecurityAltID_0_0.set(SecurityAltID_161);
    SecAltIDGrp_NoSecurityAltID_161.insert(SecurityAltID_161.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_161("STRING_568250335");
    noSecurityAltID_0_0.set(SecurityAltIDSource_161);
    SecAltIDGrp_NoSecurityAltID_161.insert(SecurityAltIDSource_161.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_161);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_162;
    FIX::SecurityAltID SecurityAltID_162("STRING_2052564822");
    noSecurityAltID_0_1.set(SecurityAltID_162);
    SecAltIDGrp_NoSecurityAltID_162.insert(SecurityAltID_162.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_162("STRING_831307027");
    noSecurityAltID_0_1.set(SecurityAltIDSource_162);
    SecAltIDGrp_NoSecurityAltID_162.insert(SecurityAltIDSource_162.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_162);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_150;
  FIX::SecurityXML SecurityXML_151("XMLDATA_1067466682");
  msg.set(SecurityXML_151);
  FIX::SecurityXMLLen SecurityXMLLen_75(2059502807);
  msg.set(SecurityXMLLen_75);
  FIX::SecurityXMLSchema SecurityXMLSchema_75("STRING_2061356703");
  msg.set(SecurityXMLSchema_75);
  SecurityXML_150.insert(SecurityXMLSchema_75.getString());
  all_values.push_back(SecurityXML_150);

  // InstrumentExtension
  multiset<string> InstrumentExtension_11;
  FIX::DeliveryForm DeliveryForm_11(2);
  msg.set(DeliveryForm_11);
  InstrumentExtension_11.insert(DeliveryForm_11.getString());
  FIX::PctAtRisk PctAtRisk_11;
  PctAtRisk_11.setString("19.510000");
  msg.set(PctAtRisk_11);
  InstrumentExtension_11.insert(PctAtRisk_11.getString());
  all_values.push_back(InstrumentExtension_11);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_22;
    FIX::InstrAttribType InstrAttribType_22(9);
    noInstrAttrib_0_0.set(InstrAttribType_22);
    AttrbGrp_NoInstrAttrib_22.insert(InstrAttribType_22.getString());
    FIX::InstrAttribValue InstrAttribValue_22("STRING_1984958257");
    noInstrAttrib_0_0.set(InstrAttribValue_22);
    AttrbGrp_NoInstrAttrib_22.insert(InstrAttribValue_22.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_22);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_23;
    FIX::InstrAttribType InstrAttribType_23(23);
    noInstrAttrib_0_1.set(InstrAttribType_23);
    AttrbGrp_NoInstrAttrib_23.insert(InstrAttribType_23.getString());
    FIX::InstrAttribValue InstrAttribValue_23("STRING_379028947");
    noInstrAttrib_0_1.set(InstrAttribValue_23);
    AttrbGrp_NoInstrAttrib_23.insert(InstrAttribValue_23.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_23);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_24;
    FIX::InstrAttribType InstrAttribType_24(8);
    noInstrAttrib_0_2.set(InstrAttribType_24);
    AttrbGrp_NoInstrAttrib_24.insert(InstrAttribType_24.getString());
    FIX::InstrAttribValue InstrAttribValue_24("STRING_560887808");
    noInstrAttrib_0_2.set(InstrAttribValue_24);
    AttrbGrp_NoInstrAttrib_24.insert(InstrAttribValue_24.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_24);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_6;
    FIX::MarketID MarketID_16("EXCHANGE_2115143632");
    noMarketSegments_0_0.set(MarketID_16);
    MarketSegmentGrp_NoMarketSegments_6.insert(MarketID_16.getString());
    FIX::MarketSegmentID MarketSegmentID_16("STRING_1499025786");
    noMarketSegments_0_0.set(MarketSegmentID_16);
    MarketSegmentGrp_NoMarketSegments_6.insert(MarketSegmentID_16.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_6);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_8;
    FIX::ExpirationCycle ExpirationCycle_9(0);
    noMarketSegments_0_0.set(ExpirationCycle_9);
    BaseTradingRules_8.insert(ExpirationCycle_9.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_8(1);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_8);
    BaseTradingRules_8.insert(ImpliedMarketIndicator_8.getString());
    FIX::MaxPriceVariation MaxPriceVariation_8;
    MaxPriceVariation_8.setString("20596635");
    noMarketSegments_0_0.set(MaxPriceVariation_8);
    BaseTradingRules_8.insert(MaxPriceVariation_8.getString());
    FIX::MaxTradeVol MaxTradeVol_8;
    MaxTradeVol_8.setString("13726267");
    noMarketSegments_0_0.set(MaxTradeVol_8);
    BaseTradingRules_8.insert(MaxTradeVol_8.getString());
    FIX::MinTradeVol MinTradeVol_8;
    MinTradeVol_8.setString("15713410");
    noMarketSegments_0_0.set(MinTradeVol_8);
    BaseTradingRules_8.insert(MinTradeVol_8.getString());
    FIX::MultilegModel MultilegModel_10(1);
    noMarketSegments_0_0.set(MultilegModel_10);
    BaseTradingRules_8.insert(MultilegModel_10.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_10(2);
    noMarketSegments_0_0.set(MultilegPriceMethod_10);
    BaseTradingRules_8.insert(MultilegPriceMethod_10.getString());
    FIX::PriceType PriceType_42(15);
    noMarketSegments_0_0.set(PriceType_42);
    BaseTradingRules_8.insert(PriceType_42.getString());
    FIX::RoundLot RoundLot_8;
    RoundLot_8.setString("11378350");
    noMarketSegments_0_0.set(RoundLot_8);
    BaseTradingRules_8.insert(RoundLot_8.getString());
    FIX::TradingCurrency TradingCurrency_8("USD");
    noMarketSegments_0_0.set(TradingCurrency_8);
    BaseTradingRules_8.insert(TradingCurrency_8.getString());
    all_values.push_back(BaseTradingRules_8);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_17;
      FIX::LotType LotType_23('1');
      noLotTypeRules_0_1_0.set(LotType_23);
      LotTypeRules_NoLotTypeRules_17.insert(LotType_23.getString());
      FIX::MinLotSize MinLotSize_17;
      MinLotSize_17.setString("13928581");
      noLotTypeRules_0_1_0.set(MinLotSize_17);
      LotTypeRules_NoLotTypeRules_17.insert(MinLotSize_17.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_17);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_8;
    FIX::HighLimitPrice HighLimitPrice_8;
    HighLimitPrice_8.setString("3307020");
    noMarketSegments_0_0.set(HighLimitPrice_8);
    PriceLimits_8.insert(HighLimitPrice_8.getString());
    FIX::LowLimitPrice LowLimitPrice_8;
    LowLimitPrice_8.setString("19070672");
    noMarketSegments_0_0.set(LowLimitPrice_8);
    PriceLimits_8.insert(LowLimitPrice_8.getString());
    FIX::PriceLimitType PriceLimitType_8(1);
    noMarketSegments_0_0.set(PriceLimitType_8);
    PriceLimits_8.insert(PriceLimitType_8.getString());
    FIX::TradingReferencePrice TradingReferencePrice_8;
    TradingReferencePrice_8.setString("2427212");
    noMarketSegments_0_0.set(TradingReferencePrice_8);
    PriceLimits_8.insert(TradingReferencePrice_8.getString());
    all_values.push_back(PriceLimits_8);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_17;
      FIX::EndTickPriceRange EndTickPriceRange_17;
      EndTickPriceRange_17.setString("18513019");
      noTickRules_0_1_0.set(EndTickPriceRange_17);
      TickRules_NoTickRules_17.insert(EndTickPriceRange_17.getString());
      FIX::StartTickPriceRange StartTickPriceRange_17;
      StartTickPriceRange_17.setString("14436031");
      noTickRules_0_1_0.set(StartTickPriceRange_17);
      TickRules_NoTickRules_17.insert(StartTickPriceRange_17.getString());
      FIX::TickIncrement TickIncrement_17;
      TickIncrement_17.setString("10307599");
      noTickRules_0_1_0.set(TickIncrement_17);
      TickRules_NoTickRules_17.insert(TickIncrement_17.getString());
      FIX::TickRuleType TickRuleType_17(3);
      noTickRules_0_1_0.set(TickRuleType_17);
      TickRules_NoTickRules_17.insert(TickRuleType_17.getString());
      all_values.push_back(TickRules_NoTickRules_17);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_18;
      FIX::EndTickPriceRange EndTickPriceRange_18;
      EndTickPriceRange_18.setString("12810777");
      noTickRules_0_1_1.set(EndTickPriceRange_18);
      TickRules_NoTickRules_18.insert(EndTickPriceRange_18.getString());
      FIX::StartTickPriceRange StartTickPriceRange_18;
      StartTickPriceRange_18.setString("8162408");
      noTickRules_0_1_1.set(StartTickPriceRange_18);
      TickRules_NoTickRules_18.insert(StartTickPriceRange_18.getString());
      FIX::TickIncrement TickIncrement_18;
      TickIncrement_18.setString("8650415");
      noTickRules_0_1_1.set(TickIncrement_18);
      TickRules_NoTickRules_18.insert(TickIncrement_18.getString());
      FIX::TickRuleType TickRuleType_18(3);
      noTickRules_0_1_1.set(TickRuleType_18);
      TickRules_NoTickRules_18.insert(TickRuleType_18.getString());
      all_values.push_back(TickRules_NoTickRules_18);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_12;
      FIX::NestedInstrAttribType NestedInstrAttribType_12(1373735077);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_12);
      NestedInstrumentAttribute_NoNestedInstrAttrib_12.insert(NestedInstrAttribType_12.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_12("STRING_335485187");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_12);
      NestedInstrumentAttribute_NoNestedInstrAttrib_12.insert(NestedInstrAttribValue_12.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_12);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_11;
      FIX::TradingSessionID TradingSessionID_79("STRING_6");
      noTradingSessionRules_0_1_0.set(TradingSessionID_79);
      TradingSessionRulesGrp_NoTradingSessionRules_11.insert(TradingSessionID_79.getString());
      FIX::TradingSessionSubID TradingSessionSubID_79("STRING_5");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_79);
      TradingSessionRulesGrp_NoTradingSessionRules_11.insert(TradingSessionSubID_79.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_11);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_24;
        FIX::ExecInstValue ExecInstValue_24('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_24);
        ExecInstRules_NoExecInstRules_24.insert(ExecInstValue_24.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_24);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_22;
        FIX::MDBookType MDBookType_24(2);
        noMDFeedTypes_0_0_2_0.set(MDBookType_24);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MDBookType_24.getString());
        FIX::MDFeedType MDFeedType_24("STRING_742306644");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_24);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MDFeedType_24.getString());
        FIX::MarketDepth MarketDepth_26(1196813391);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_26);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MarketDepth_26.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_22);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_23;
        FIX::MDBookType MDBookType_25(1);
        noMDFeedTypes_0_0_2_1.set(MDBookType_25);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MDBookType_25.getString());
        FIX::MDFeedType MDFeedType_25("STRING_1063943292");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_25);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MDFeedType_25.getString());
        FIX::MarketDepth MarketDepth_27(2021421171);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_27);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MarketDepth_27.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_23);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_24;
        FIX::MatchAlgorithm MatchAlgorithm_24("STRING_2139703540");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_24);
        MatchRules_NoMatchRules_24.insert(MatchAlgorithm_24.getString());
        FIX::MatchType MatchType_30("STRING_6");
        noMatchRules_0_0_2_0.set(MatchType_30);
        MatchRules_NoMatchRules_24.insert(MatchType_30.getString());
        all_values.push_back(MatchRules_NoMatchRules_24);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_25;
        FIX::MatchAlgorithm MatchAlgorithm_25("STRING_1121497659");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_25);
        MatchRules_NoMatchRules_25.insert(MatchAlgorithm_25.getString());
        FIX::MatchType MatchType_31("STRING_A1");
        noMatchRules_0_0_2_1.set(MatchType_31);
        MatchRules_NoMatchRules_25.insert(MatchType_31.getString());
        all_values.push_back(MatchRules_NoMatchRules_25);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_29;
        FIX::OrdType OrdType_55('F');
        noOrdTypeRules_0_0_2_0.set(OrdType_55);
        OrdTypeRules_NoOrdTypeRules_29.insert(OrdType_55.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_29);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_30;
        FIX::OrdType OrdType_56('L');
        noOrdTypeRules_0_0_2_1.set(OrdType_56);
        OrdTypeRules_NoOrdTypeRules_30.insert(OrdType_56.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_30);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_27;
        FIX::TimeInForce TimeInForce_40('8');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_40);
        TimeInForceRules_NoTimeInForceRules_27.insert(TimeInForce_40.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_27);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_28;
        FIX::TimeInForce TimeInForce_41('4');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_41);
        TimeInForceRules_NoTimeInForceRules_28.insert(TimeInForce_41.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_28);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_12;
      FIX::TradingSessionID TradingSessionID_80("STRING_5");
      noTradingSessionRules_0_1_1.set(TradingSessionID_80);
      TradingSessionRulesGrp_NoTradingSessionRules_12.insert(TradingSessionID_80.getString());
      FIX::TradingSessionSubID TradingSessionSubID_80("STRING_6");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_80);
      TradingSessionRulesGrp_NoTradingSessionRules_12.insert(TradingSessionSubID_80.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_12);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_25;
        FIX::ExecInstValue ExecInstValue_25('4');
        noExecInstRules_0_1_2_0.set(ExecInstValue_25);
        ExecInstRules_NoExecInstRules_25.insert(ExecInstValue_25.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_25);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_26;
        FIX::ExecInstValue ExecInstValue_26('1');
        noExecInstRules_0_1_2_1.set(ExecInstValue_26);
        ExecInstRules_NoExecInstRules_26.insert(ExecInstValue_26.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_26);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_27;
        FIX::ExecInstValue ExecInstValue_27('5');
        noExecInstRules_0_1_2_2.set(ExecInstValue_27);
        ExecInstRules_NoExecInstRules_27.insert(ExecInstValue_27.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_27);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_24;
        FIX::MDBookType MDBookType_26(3);
        noMDFeedTypes_0_1_2_0.set(MDBookType_26);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MDBookType_26.getString());
        FIX::MDFeedType MDFeedType_26("STRING_1230576925");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_26);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MDFeedType_26.getString());
        FIX::MarketDepth MarketDepth_28(1656649537);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_28);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MarketDepth_28.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_24);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_25;
        FIX::MDBookType MDBookType_27(3);
        noMDFeedTypes_0_1_2_1.set(MDBookType_27);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MDBookType_27.getString());
        FIX::MDFeedType MDFeedType_27("STRING_1871427694");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_27);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MDFeedType_27.getString());
        FIX::MarketDepth MarketDepth_29(677681447);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_29);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MarketDepth_29.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_25);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_26;
        FIX::MatchAlgorithm MatchAlgorithm_26("STRING_1098767422");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_26);
        MatchRules_NoMatchRules_26.insert(MatchAlgorithm_26.getString());
        FIX::MatchType MatchType_32("STRING_A4");
        noMatchRules_0_1_2_0.set(MatchType_32);
        MatchRules_NoMatchRules_26.insert(MatchType_32.getString());
        all_values.push_back(MatchRules_NoMatchRules_26);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_31;
        FIX::OrdType OrdType_57('8');
        noOrdTypeRules_0_1_2_0.set(OrdType_57);
        OrdTypeRules_NoOrdTypeRules_31.insert(OrdType_57.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_31);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_32;
        FIX::OrdType OrdType_58('G');
        noOrdTypeRules_0_1_2_1.set(OrdType_58);
        OrdTypeRules_NoOrdTypeRules_32.insert(OrdType_58.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_32);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_33;
        FIX::OrdType OrdType_59('J');
        noOrdTypeRules_0_1_2_2.set(OrdType_59);
        OrdTypeRules_NoOrdTypeRules_33.insert(OrdType_59.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_33);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_29;
        FIX::TimeInForce TimeInForce_42('7');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_42);
        TimeInForceRules_NoTimeInForceRules_29.insert(TimeInForce_42.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_29);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_11;
      FIX::EndStrikePxRange EndStrikePxRange_11;
      EndStrikePxRange_11.setString("12287517");
      noStrikeRules_0_1_0.set(EndStrikePxRange_11);
      StrikeRules_NoStrikeRules_11.insert(EndStrikePxRange_11.getString());
      FIX::StartStrikePxRange StartStrikePxRange_11;
      StartStrikePxRange_11.setString("804711");
      noStrikeRules_0_1_0.set(StartStrikePxRange_11);
      StrikeRules_NoStrikeRules_11.insert(StartStrikePxRange_11.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_11(1076650214);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeExerciseStyle_11.getString());
      FIX::StrikeIncrement StrikeIncrement_11;
      StrikeIncrement_11.setString("4454870");
      noStrikeRules_0_1_0.set(StrikeIncrement_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeIncrement_11.getString());
      FIX::StrikeRuleID StrikeRuleID_11("STRING_1653215000");
      noStrikeRules_0_1_0.set(StrikeRuleID_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeRuleID_11.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_11);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_24;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_24("MONTHYEAR_1105825376");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_24);
        MaturityRules_NoMaturityRules_24.insert(EndMaturityMonthYear_24.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_24(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearFormat_24.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_24(1982089419);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearIncrement_24.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_24(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearIncrementUnits_24.getString());
        FIX::MaturityRuleID MaturityRuleID_24("STRING_1234012515");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityRuleID_24.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_24("MONTHYEAR_321631432");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_24);
        MaturityRules_NoMaturityRules_24.insert(StartMaturityMonthYear_24.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_24);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_25;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_25("MONTHYEAR_1061515548");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_25);
        MaturityRules_NoMaturityRules_25.insert(EndMaturityMonthYear_25.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_25(0);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearFormat_25.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_25(34908522);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearIncrement_25.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_25(2);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearIncrementUnits_25.getString());
        FIX::MaturityRuleID MaturityRuleID_25("STRING_819011877");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityRuleID_25.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_25("MONTHYEAR_1691558060");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_25);
        MaturityRules_NoMaturityRules_25.insert(StartMaturityMonthYear_25.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_25);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_26;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_26("MONTHYEAR_1748926405");
        noMaturityRules_0_0_2_2.set(EndMaturityMonthYear_26);
        MaturityRules_NoMaturityRules_26.insert(EndMaturityMonthYear_26.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_26(2);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearFormat_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearFormat_26.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_26(221755859);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrement_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearIncrement_26.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_26(1);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrementUnits_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearIncrementUnits_26.getString());
        FIX::MaturityRuleID MaturityRuleID_26("STRING_1641723345");
        noMaturityRules_0_0_2_2.set(MaturityRuleID_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityRuleID_26.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_26("MONTHYEAR_1641743950");
        noMaturityRules_0_0_2_2.set(StartMaturityMonthYear_26);
        MaturityRules_NoMaturityRules_26.insert(StartMaturityMonthYear_26.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_26);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_29;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_29("CHF");
  msg.set(BenchmarkCurveCurrency_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurveCurrency_29.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_29("STRING_EUREPO");
  msg.set(BenchmarkCurveName_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurveName_29.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_29("STRING_1937342270");
  msg.set(BenchmarkCurvePoint_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurvePoint_29.getString());
  FIX::BenchmarkPrice BenchmarkPrice_29;
  BenchmarkPrice_29.setString("10654359");
  msg.set(BenchmarkPrice_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkPrice_29.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_29(159375664);
  msg.set(BenchmarkPriceType_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkPriceType_29.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_29("STRING_1434355696");
  msg.set(BenchmarkSecurityID_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkSecurityID_29.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_29("STRING_146704145");
  msg.set(BenchmarkSecurityIDSource_29);
  SpreadOrBenchmarkCurveData_29.insert(BenchmarkSecurityIDSource_29.getString());
  FIX::Spread Spread_29;
  Spread_29.setString("2398468");
  msg.set(Spread_29);
  SpreadOrBenchmarkCurveData_29.insert(Spread_29.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_29);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_40;
    FIX::StipulationType StipulationType_40("STRING_PURPOSE");
    noStipulations_0_0.set(StipulationType_40);
    Stipulations_NoStipulations_40.insert(StipulationType_40.getString());
    FIX::StipulationValue StipulationValue_40("STRING_1893061812");
    noStipulations_0_0.set(StipulationValue_40);
    Stipulations_NoStipulations_40.insert(StipulationValue_40.getString());
    all_values.push_back(Stipulations_NoStipulations_40);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_41;
    FIX::StipulationType StipulationType_41("STRING_PIECES");
    noStipulations_0_1.set(StipulationType_41);
    Stipulations_NoStipulations_41.insert(StipulationType_41.getString());
    FIX::StipulationValue StipulationValue_41("STRING_1698016528");
    noStipulations_0_1.set(StipulationValue_41);
    Stipulations_NoStipulations_41.insert(StipulationValue_41.getString());
    all_values.push_back(Stipulations_NoStipulations_41);

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_115;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_115("DATA_410749714");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_115);
    UnderlyingInstrument_115.insert(EncodedUnderlyingIssuer_115.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_115(450290741);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_115);
    UnderlyingInstrument_115.insert(EncodedUnderlyingIssuerLen_115.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_115("DATA_941342166");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_115);
    UnderlyingInstrument_115.insert(EncodedUnderlyingSecurityDesc_115.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_115(732381146);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_115);
    UnderlyingInstrument_115.insert(EncodedUnderlyingSecurityDescLen_115.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_115;
    UnderlyingAdjustedQuantity_115.setString("15118062");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_115);
    UnderlyingInstrument_115.insert(UnderlyingAdjustedQuantity_115.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_115;
    UnderlyingAllocationPercent_115.setString("71.180000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_115);
    UnderlyingInstrument_115.insert(UnderlyingAllocationPercent_115.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_115;
    UnderlyingAttachmentPoint_115.setString("96.690000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_115);
    UnderlyingInstrument_115.insert(UnderlyingAttachmentPoint_115.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_115("STRING_923081063");
    noUnderlyings_0_0.set(UnderlyingCFICode_115);
    UnderlyingInstrument_115.insert(UnderlyingCFICode_115.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_115("STRING_1348788995");
    noUnderlyings_0_0.set(UnderlyingCPProgram_115);
    UnderlyingInstrument_115.insert(UnderlyingCPProgram_115.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_115("STRING_311364081");
    noUnderlyings_0_0.set(UnderlyingCPRegType_115);
    UnderlyingInstrument_115.insert(UnderlyingCPRegType_115.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_115;
    UnderlyingCapValue_115.setString("5245238");
    noUnderlyings_0_0.set(UnderlyingCapValue_115);
    UnderlyingInstrument_115.insert(UnderlyingCapValue_115.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_115;
    UnderlyingCashAmount_115.setString("18917449");
    noUnderlyings_0_0.set(UnderlyingCashAmount_115);
    UnderlyingInstrument_115.insert(UnderlyingCashAmount_115.getString());
    FIX::UnderlyingCashType UnderlyingCashType_115("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_115);
    UnderlyingInstrument_115.insert(UnderlyingCashType_115.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_115;
    UnderlyingContractMultiplier_115.setString("15804007");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_115);
    UnderlyingInstrument_115.insert(UnderlyingContractMultiplier_115.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_115(1385984616);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_115);
    UnderlyingInstrument_115.insert(UnderlyingContractMultiplierUnit_115.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_115("COUNTRY_27380242");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_115);
    UnderlyingInstrument_115.insert(UnderlyingCountryOfIssue_115.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_115("LOCALMKTDATE_992557934");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_115);
    UnderlyingInstrument_115.insert(UnderlyingCouponPaymentDate_115.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_115;
    UnderlyingCouponRate_115.setString("28.330000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_115);
    UnderlyingInstrument_115.insert(UnderlyingCouponRate_115.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_115("STRING_2005571927");
    noUnderlyings_0_0.set(UnderlyingCreditRating_115);
    UnderlyingInstrument_115.insert(UnderlyingCreditRating_115.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_115("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_115);
    UnderlyingInstrument_115.insert(UnderlyingCurrency_115.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_115;
    UnderlyingCurrentValue_115.setString("174639");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_115);
    UnderlyingInstrument_115.insert(UnderlyingCurrentValue_115.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_115;
    UnderlyingDetachmentPoint_115.setString("86.040000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_115);
    UnderlyingInstrument_115.insert(UnderlyingDetachmentPoint_115.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_115;
    UnderlyingDirtyPrice_115.setString("14088229");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_115);
    UnderlyingInstrument_115.insert(UnderlyingDirtyPrice_115.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_115;
    UnderlyingEndPrice_115.setString("2573107");
    noUnderlyings_0_0.set(UnderlyingEndPrice_115);
    UnderlyingInstrument_115.insert(UnderlyingEndPrice_115.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_115;
    UnderlyingEndValue_115.setString("4328108");
    noUnderlyings_0_0.set(UnderlyingEndValue_115);
    UnderlyingInstrument_115.insert(UnderlyingEndValue_115.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_115(2001014130);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_115);
    UnderlyingInstrument_115.insert(UnderlyingExerciseStyle_115.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_115;
    UnderlyingFXRate_115.setString("28889");
    noUnderlyings_0_0.set(UnderlyingFXRate_115);
    UnderlyingInstrument_115.insert(UnderlyingFXRate_115.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_115('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_115);
    UnderlyingInstrument_115.insert(UnderlyingFXRateCalc_115.getString());
    FIX::UnderlyingFactor UnderlyingFactor_115;
    UnderlyingFactor_115.setString("15515470");
    noUnderlyings_0_0.set(UnderlyingFactor_115);
    UnderlyingInstrument_115.insert(UnderlyingFactor_115.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_115(1857702219);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_115);
    UnderlyingInstrument_115.insert(UnderlyingFlowScheduleType_115.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_115("STRING_1419704525");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_115);
    UnderlyingInstrument_115.insert(UnderlyingInstrRegistry_115.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_115("LOCALMKTDATE_2001837751");
    noUnderlyings_0_0.set(UnderlyingIssueDate_115);
    UnderlyingInstrument_115.insert(UnderlyingIssueDate_115.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_115("STRING_651560738");
    noUnderlyings_0_0.set(UnderlyingIssuer_115);
    UnderlyingInstrument_115.insert(UnderlyingIssuer_115.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_115("STRING_4602023");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_115);
    UnderlyingInstrument_115.insert(UnderlyingLocaleOfIssue_115.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_115("LOCALMKTDATE_1366160392");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_115);
    UnderlyingInstrument_115.insert(UnderlyingMaturityDate_115.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_115("MONTHYEAR_1181337856");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_115);
    UnderlyingInstrument_115.insert(UnderlyingMaturityMonthYear_115.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_115("TZTIMEONLY_771891692");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_115);
    UnderlyingInstrument_115.insert(UnderlyingMaturityTime_115.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_115;
    UnderlyingNotionalPercentageOutstanding_115.setString("78.080000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_115);
    UnderlyingInstrument_115.insert(UnderlyingNotionalPercentageOutstanding_115.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_115('3');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_115);
    UnderlyingInstrument_115.insert(UnderlyingOptAttribute_115.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_115;
    UnderlyingOriginalNotionalPercentageOutstanding_115.setString("57.730000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_115);
    UnderlyingInstrument_115.insert(UnderlyingOriginalNotionalPercentageOutstanding_115.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_115("STRING_666281629");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_115);
    UnderlyingInstrument_115.insert(UnderlyingPriceUnitOfMeasure_115.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_115;
    UnderlyingPriceUnitOfMeasureQty_115.setString("1269044");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_115);
    UnderlyingInstrument_115.insert(UnderlyingPriceUnitOfMeasureQty_115.getString());
    FIX::UnderlyingProduct UnderlyingProduct_115(1616375713);
    noUnderlyings_0_0.set(UnderlyingProduct_115);
    UnderlyingInstrument_115.insert(UnderlyingProduct_115.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_115(99198727);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_115);
    UnderlyingInstrument_115.insert(UnderlyingPutOrCall_115.getString());
    FIX::UnderlyingPx UnderlyingPx_115;
    UnderlyingPx_115.setString("15128890");
    noUnderlyings_0_0.set(UnderlyingPx_115);
    UnderlyingInstrument_115.insert(UnderlyingPx_115.getString());
    FIX::UnderlyingQty UnderlyingQty_115;
    UnderlyingQty_115.setString("16437559");
    noUnderlyings_0_0.set(UnderlyingQty_115);
    UnderlyingInstrument_115.insert(UnderlyingQty_115.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_115("LOCALMKTDATE_1091756661");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_115);
    UnderlyingInstrument_115.insert(UnderlyingRedemptionDate_115.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_115("STRING_1709571922");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_115);
    UnderlyingInstrument_115.insert(UnderlyingRepoCollateralSecurityType_115.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_115;
    UnderlyingRepurchaseRate_115.setString("42.340000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_115);
    UnderlyingInstrument_115.insert(UnderlyingRepurchaseRate_115.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_115(1874173217);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_115);
    UnderlyingInstrument_115.insert(UnderlyingRepurchaseTerm_115.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_115("STRING_824207107");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_115);
    UnderlyingInstrument_115.insert(UnderlyingRestructuringType_115.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_115("STRING_1519308178");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_115);
    UnderlyingInstrument_115.insert(UnderlyingSecurityDesc_115.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_115("EXCHANGE_1943461822");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_115);
    UnderlyingInstrument_115.insert(UnderlyingSecurityExchange_115.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_115("STRING_85546436");
    noUnderlyings_0_0.set(UnderlyingSecurityID_115);
    UnderlyingInstrument_115.insert(UnderlyingSecurityID_115.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_115("STRING_1776618934");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_115);
    UnderlyingInstrument_115.insert(UnderlyingSecurityIDSource_115.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_115("STRING_228789041");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_115);
    UnderlyingInstrument_115.insert(UnderlyingSecuritySubType_115.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_115("STRING_2086560566");
    noUnderlyings_0_0.set(UnderlyingSecurityType_115);
    UnderlyingInstrument_115.insert(UnderlyingSecurityType_115.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_115("STRING_1779507854");
    noUnderlyings_0_0.set(UnderlyingSeniority_115);
    UnderlyingInstrument_115.insert(UnderlyingSeniority_115.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_115("STRING_1237743851");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_115);
    UnderlyingInstrument_115.insert(UnderlyingSettlMethod_115.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_115(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_115);
    UnderlyingInstrument_115.insert(UnderlyingSettlementType_115.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_115;
    UnderlyingStartValue_115.setString("14897264");
    noUnderlyings_0_0.set(UnderlyingStartValue_115);
    UnderlyingInstrument_115.insert(UnderlyingStartValue_115.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_115("STRING_509964728");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_115);
    UnderlyingInstrument_115.insert(UnderlyingStateOrProvinceOfIssue_115.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_115("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_115);
    UnderlyingInstrument_115.insert(UnderlyingStrikeCurrency_115.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_115;
    UnderlyingStrikePrice_115.setString("5145667");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_115);
    UnderlyingInstrument_115.insert(UnderlyingStrikePrice_115.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_115("STRING_563654777");
    noUnderlyings_0_0.set(UnderlyingSymbol_115);
    UnderlyingInstrument_115.insert(UnderlyingSymbol_115.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_115("STRING_1175141372");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_115);
    UnderlyingInstrument_115.insert(UnderlyingSymbolSfx_115.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_115("STRING_1286458444");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_115);
    UnderlyingInstrument_115.insert(UnderlyingTimeUnit_115.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_115("STRING_705412585");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_115);
    UnderlyingInstrument_115.insert(UnderlyingUnitOfMeasure_115.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_115;
    UnderlyingUnitOfMeasureQty_115.setString("15577845");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_115);
    UnderlyingInstrument_115.insert(UnderlyingUnitOfMeasureQty_115.getString());
    all_values.push_back(UnderlyingInstrument_115);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_240;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_240("STRING_1371694214");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_240);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_240.insert(UnderlyingSecurityAltID_240.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_240("STRING_1684689048");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_240);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_240.insert(UnderlyingSecurityAltIDSource_240.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_240);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_241;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_241("STRING_1838606283");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_241);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_241.insert(UnderlyingSecurityAltID_241.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_241("STRING_1470892941");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_241);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_241.insert(UnderlyingSecurityAltIDSource_241.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_241);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_242;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_242("STRING_1050094490");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_242);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_242.insert(UnderlyingSecurityAltID_242.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_242("STRING_1334878591");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_242);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_242.insert(UnderlyingSecurityAltIDSource_242.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_242);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_228;
      FIX::UnderlyingStipType UnderlyingStipType_228("STRING_612182764");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_228);
      UnderlyingStipulations_NoUnderlyingStips_228.insert(UnderlyingStipType_228.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_228("STRING_689239177");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_228);
      UnderlyingStipulations_NoUnderlyingStips_228.insert(UnderlyingStipValue_228.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_228);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_229;
      FIX::UnderlyingStipType UnderlyingStipType_229("STRING_141855523");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_229);
      UnderlyingStipulations_NoUnderlyingStips_229.insert(UnderlyingStipType_229.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_229("STRING_1436389871");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_229);
      UnderlyingStipulations_NoUnderlyingStips_229.insert(UnderlyingStipValue_229.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_229);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_230;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_230("STRING_2085317345");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_230);
      UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyID_230.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_230('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_230);
      UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyIDSource_230.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_230(1837682641);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_230);
      UndlyInstrumentParties_NoUndlyInstrumentParties_230.insert(UnderlyingInstrumentPartyRole_230.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_230);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_456("STRING_1461013226");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_456);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456.insert(UnderlyingInstrumentPartySubID_456.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_456(1469706848);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_456);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456.insert(UnderlyingInstrumentPartySubIDType_456.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_457("STRING_1404366590");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_457);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457.insert(UnderlyingInstrumentPartySubID_457.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_457(804153507);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_457);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457.insert(UnderlyingInstrumentPartySubIDType_457.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_458("STRING_811949626");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_458);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458.insert(UnderlyingInstrumentPartySubID_458.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_458(1914331318);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_458);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458.insert(UnderlyingInstrumentPartySubIDType_458.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_116;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_116("DATA_1647892");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_116);
    UnderlyingInstrument_116.insert(EncodedUnderlyingIssuer_116.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_116(805753142);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_116);
    UnderlyingInstrument_116.insert(EncodedUnderlyingIssuerLen_116.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_116("DATA_281414422");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_116);
    UnderlyingInstrument_116.insert(EncodedUnderlyingSecurityDesc_116.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_116(565302669);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_116);
    UnderlyingInstrument_116.insert(EncodedUnderlyingSecurityDescLen_116.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_116;
    UnderlyingAdjustedQuantity_116.setString("19808945");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_116);
    UnderlyingInstrument_116.insert(UnderlyingAdjustedQuantity_116.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_116;
    UnderlyingAllocationPercent_116.setString("28.670000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_116);
    UnderlyingInstrument_116.insert(UnderlyingAllocationPercent_116.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_116;
    UnderlyingAttachmentPoint_116.setString("52.540000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_116);
    UnderlyingInstrument_116.insert(UnderlyingAttachmentPoint_116.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_116("STRING_1391195441");
    noUnderlyings_0_1.set(UnderlyingCFICode_116);
    UnderlyingInstrument_116.insert(UnderlyingCFICode_116.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_116("STRING_1790103437");
    noUnderlyings_0_1.set(UnderlyingCPProgram_116);
    UnderlyingInstrument_116.insert(UnderlyingCPProgram_116.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_116("STRING_494925820");
    noUnderlyings_0_1.set(UnderlyingCPRegType_116);
    UnderlyingInstrument_116.insert(UnderlyingCPRegType_116.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_116;
    UnderlyingCapValue_116.setString("9284008");
    noUnderlyings_0_1.set(UnderlyingCapValue_116);
    UnderlyingInstrument_116.insert(UnderlyingCapValue_116.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_116;
    UnderlyingCashAmount_116.setString("14812260");
    noUnderlyings_0_1.set(UnderlyingCashAmount_116);
    UnderlyingInstrument_116.insert(UnderlyingCashAmount_116.getString());
    FIX::UnderlyingCashType UnderlyingCashType_116("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_116);
    UnderlyingInstrument_116.insert(UnderlyingCashType_116.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_116;
    UnderlyingContractMultiplier_116.setString("19784953");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_116);
    UnderlyingInstrument_116.insert(UnderlyingContractMultiplier_116.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_116(668621015);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_116);
    UnderlyingInstrument_116.insert(UnderlyingContractMultiplierUnit_116.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_116("COUNTRY_233501067");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_116);
    UnderlyingInstrument_116.insert(UnderlyingCountryOfIssue_116.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_116("LOCALMKTDATE_443194448");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_116);
    UnderlyingInstrument_116.insert(UnderlyingCouponPaymentDate_116.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_116;
    UnderlyingCouponRate_116.setString("1.930000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_116);
    UnderlyingInstrument_116.insert(UnderlyingCouponRate_116.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_116("STRING_375356590");
    noUnderlyings_0_1.set(UnderlyingCreditRating_116);
    UnderlyingInstrument_116.insert(UnderlyingCreditRating_116.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_116("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_116);
    UnderlyingInstrument_116.insert(UnderlyingCurrency_116.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_116;
    UnderlyingCurrentValue_116.setString("3131902");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_116);
    UnderlyingInstrument_116.insert(UnderlyingCurrentValue_116.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_116;
    UnderlyingDetachmentPoint_116.setString("69.790000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_116);
    UnderlyingInstrument_116.insert(UnderlyingDetachmentPoint_116.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_116;
    UnderlyingDirtyPrice_116.setString("11091228");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_116);
    UnderlyingInstrument_116.insert(UnderlyingDirtyPrice_116.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_116;
    UnderlyingEndPrice_116.setString("4798130");
    noUnderlyings_0_1.set(UnderlyingEndPrice_116);
    UnderlyingInstrument_116.insert(UnderlyingEndPrice_116.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_116;
    UnderlyingEndValue_116.setString("5675665");
    noUnderlyings_0_1.set(UnderlyingEndValue_116);
    UnderlyingInstrument_116.insert(UnderlyingEndValue_116.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_116(431346094);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_116);
    UnderlyingInstrument_116.insert(UnderlyingExerciseStyle_116.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_116;
    UnderlyingFXRate_116.setString("18841796");
    noUnderlyings_0_1.set(UnderlyingFXRate_116);
    UnderlyingInstrument_116.insert(UnderlyingFXRate_116.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_116('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_116);
    UnderlyingInstrument_116.insert(UnderlyingFXRateCalc_116.getString());
    FIX::UnderlyingFactor UnderlyingFactor_116;
    UnderlyingFactor_116.setString("12432957");
    noUnderlyings_0_1.set(UnderlyingFactor_116);
    UnderlyingInstrument_116.insert(UnderlyingFactor_116.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_116(1651027287);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_116);
    UnderlyingInstrument_116.insert(UnderlyingFlowScheduleType_116.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_116("STRING_1373367957");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_116);
    UnderlyingInstrument_116.insert(UnderlyingInstrRegistry_116.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_116("LOCALMKTDATE_2049048862");
    noUnderlyings_0_1.set(UnderlyingIssueDate_116);
    UnderlyingInstrument_116.insert(UnderlyingIssueDate_116.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_116("STRING_1932441709");
    noUnderlyings_0_1.set(UnderlyingIssuer_116);
    UnderlyingInstrument_116.insert(UnderlyingIssuer_116.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_116("STRING_1938670626");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_116);
    UnderlyingInstrument_116.insert(UnderlyingLocaleOfIssue_116.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_116("LOCALMKTDATE_1882459728");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_116);
    UnderlyingInstrument_116.insert(UnderlyingMaturityDate_116.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_116("MONTHYEAR_1352830928");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_116);
    UnderlyingInstrument_116.insert(UnderlyingMaturityMonthYear_116.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_116("TZTIMEONLY_1061902232");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_116);
    UnderlyingInstrument_116.insert(UnderlyingMaturityTime_116.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_116;
    UnderlyingNotionalPercentageOutstanding_116.setString("15.210000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_116);
    UnderlyingInstrument_116.insert(UnderlyingNotionalPercentageOutstanding_116.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_116('9');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_116);
    UnderlyingInstrument_116.insert(UnderlyingOptAttribute_116.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_116;
    UnderlyingOriginalNotionalPercentageOutstanding_116.setString("80.520000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_116);
    UnderlyingInstrument_116.insert(UnderlyingOriginalNotionalPercentageOutstanding_116.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_116("STRING_2054572362");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_116);
    UnderlyingInstrument_116.insert(UnderlyingPriceUnitOfMeasure_116.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_116;
    UnderlyingPriceUnitOfMeasureQty_116.setString("3291931");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_116);
    UnderlyingInstrument_116.insert(UnderlyingPriceUnitOfMeasureQty_116.getString());
    FIX::UnderlyingProduct UnderlyingProduct_116(1375163165);
    noUnderlyings_0_1.set(UnderlyingProduct_116);
    UnderlyingInstrument_116.insert(UnderlyingProduct_116.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_116(1885584046);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_116);
    UnderlyingInstrument_116.insert(UnderlyingPutOrCall_116.getString());
    FIX::UnderlyingPx UnderlyingPx_116;
    UnderlyingPx_116.setString("9978141");
    noUnderlyings_0_1.set(UnderlyingPx_116);
    UnderlyingInstrument_116.insert(UnderlyingPx_116.getString());
    FIX::UnderlyingQty UnderlyingQty_116;
    UnderlyingQty_116.setString("16086642");
    noUnderlyings_0_1.set(UnderlyingQty_116);
    UnderlyingInstrument_116.insert(UnderlyingQty_116.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_116("LOCALMKTDATE_181294846");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_116);
    UnderlyingInstrument_116.insert(UnderlyingRedemptionDate_116.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_116("STRING_208190702");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_116);
    UnderlyingInstrument_116.insert(UnderlyingRepoCollateralSecurityType_116.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_116;
    UnderlyingRepurchaseRate_116.setString("8.230000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_116);
    UnderlyingInstrument_116.insert(UnderlyingRepurchaseRate_116.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_116(2060879165);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_116);
    UnderlyingInstrument_116.insert(UnderlyingRepurchaseTerm_116.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_116("STRING_1627114603");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_116);
    UnderlyingInstrument_116.insert(UnderlyingRestructuringType_116.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_116("STRING_149727463");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_116);
    UnderlyingInstrument_116.insert(UnderlyingSecurityDesc_116.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_116("EXCHANGE_1167432497");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_116);
    UnderlyingInstrument_116.insert(UnderlyingSecurityExchange_116.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_116("STRING_588753849");
    noUnderlyings_0_1.set(UnderlyingSecurityID_116);
    UnderlyingInstrument_116.insert(UnderlyingSecurityID_116.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_116("STRING_629540489");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_116);
    UnderlyingInstrument_116.insert(UnderlyingSecurityIDSource_116.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_116("STRING_1734999055");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_116);
    UnderlyingInstrument_116.insert(UnderlyingSecuritySubType_116.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_116("STRING_1020099943");
    noUnderlyings_0_1.set(UnderlyingSecurityType_116);
    UnderlyingInstrument_116.insert(UnderlyingSecurityType_116.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_116("STRING_366236458");
    noUnderlyings_0_1.set(UnderlyingSeniority_116);
    UnderlyingInstrument_116.insert(UnderlyingSeniority_116.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_116("STRING_959235472");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_116);
    UnderlyingInstrument_116.insert(UnderlyingSettlMethod_116.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_116(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_116);
    UnderlyingInstrument_116.insert(UnderlyingSettlementType_116.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_116;
    UnderlyingStartValue_116.setString("20172637");
    noUnderlyings_0_1.set(UnderlyingStartValue_116);
    UnderlyingInstrument_116.insert(UnderlyingStartValue_116.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_116("STRING_185119782");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_116);
    UnderlyingInstrument_116.insert(UnderlyingStateOrProvinceOfIssue_116.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_116("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_116);
    UnderlyingInstrument_116.insert(UnderlyingStrikeCurrency_116.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_116;
    UnderlyingStrikePrice_116.setString("21237904");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_116);
    UnderlyingInstrument_116.insert(UnderlyingStrikePrice_116.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_116("STRING_1899936957");
    noUnderlyings_0_1.set(UnderlyingSymbol_116);
    UnderlyingInstrument_116.insert(UnderlyingSymbol_116.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_116("STRING_1007569087");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_116);
    UnderlyingInstrument_116.insert(UnderlyingSymbolSfx_116.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_116("STRING_1038208993");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_116);
    UnderlyingInstrument_116.insert(UnderlyingTimeUnit_116.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_116("STRING_878624830");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_116);
    UnderlyingInstrument_116.insert(UnderlyingUnitOfMeasure_116.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_116;
    UnderlyingUnitOfMeasureQty_116.setString("20030198");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_116);
    UnderlyingInstrument_116.insert(UnderlyingUnitOfMeasureQty_116.getString());
    all_values.push_back(UnderlyingInstrument_116);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_243;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_243("STRING_785713544");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_243);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_243.insert(UnderlyingSecurityAltID_243.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_243("STRING_184729298");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_243);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_243.insert(UnderlyingSecurityAltIDSource_243.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_243);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_244;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_244("STRING_1822716563");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_244);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_244.insert(UnderlyingSecurityAltID_244.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_244("STRING_523813942");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_244);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_244.insert(UnderlyingSecurityAltIDSource_244.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_244);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_245;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_245("STRING_1182543456");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_245);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_245.insert(UnderlyingSecurityAltID_245.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_245("STRING_1283897147");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_245);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_245.insert(UnderlyingSecurityAltIDSource_245.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_245);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_230;
      FIX::UnderlyingStipType UnderlyingStipType_230("STRING_1390734158");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_230);
      UnderlyingStipulations_NoUnderlyingStips_230.insert(UnderlyingStipType_230.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_230("STRING_1120434322");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_230);
      UnderlyingStipulations_NoUnderlyingStips_230.insert(UnderlyingStipValue_230.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_230);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_231;
      FIX::UnderlyingStipType UnderlyingStipType_231("STRING_618504306");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_231);
      UnderlyingStipulations_NoUnderlyingStips_231.insert(UnderlyingStipType_231.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_231("STRING_870365113");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_231);
      UnderlyingStipulations_NoUnderlyingStips_231.insert(UnderlyingStipValue_231.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_231);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_232;
      FIX::UnderlyingStipType UnderlyingStipType_232("STRING_1270161785");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_232);
      UnderlyingStipulations_NoUnderlyingStips_232.insert(UnderlyingStipType_232.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_232("STRING_1785936803");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_232);
      UnderlyingStipulations_NoUnderlyingStips_232.insert(UnderlyingStipValue_232.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_232);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_231;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_231("STRING_1899702275");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_231);
      UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyID_231.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_231('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_231);
      UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyIDSource_231.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_231(331735257);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_231);
      UndlyInstrumentParties_NoUndlyInstrumentParties_231.insert(UnderlyingInstrumentPartyRole_231.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_231);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_459("STRING_185204034");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_459);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459.insert(UnderlyingInstrumentPartySubID_459.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_459(447647272);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_459);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459.insert(UnderlyingInstrumentPartySubIDType_459.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_460("STRING_2135718830");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_460);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460.insert(UnderlyingInstrumentPartySubID_460.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_460(370323816);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_460);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460.insert(UnderlyingInstrumentPartySubIDType_460.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_232;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_232("STRING_465124501");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_232);
      UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyID_232.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_232('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_232);
      UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyIDSource_232.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_232(346630577);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_232);
      UndlyInstrumentParties_NoUndlyInstrumentParties_232.insert(UnderlyingInstrumentPartyRole_232.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_232);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_461("STRING_650542427");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_461);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461.insert(UnderlyingInstrumentPartySubID_461.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_461(1384839570);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_461);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461.insert(UnderlyingInstrumentPartySubIDType_461.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_462("STRING_1096202640");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_462);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462.insert(UnderlyingInstrumentPartySubID_462.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_462(506078584);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_462);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462.insert(UnderlyingInstrumentPartySubIDType_462.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_463("STRING_1832392967");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_463);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463.insert(UnderlyingInstrumentPartySubID_463.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_463(1881916185);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_463);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463.insert(UnderlyingInstrumentPartySubIDType_463.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_117;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_117("DATA_690807882");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingIssuer_117.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_117(1507625882);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingIssuerLen_117.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_117("DATA_258246479");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingSecurityDesc_117.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_117(1873351338);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_117);
    UnderlyingInstrument_117.insert(EncodedUnderlyingSecurityDescLen_117.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_117;
    UnderlyingAdjustedQuantity_117.setString("6440393");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_117);
    UnderlyingInstrument_117.insert(UnderlyingAdjustedQuantity_117.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_117;
    UnderlyingAllocationPercent_117.setString("52.680000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_117);
    UnderlyingInstrument_117.insert(UnderlyingAllocationPercent_117.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_117;
    UnderlyingAttachmentPoint_117.setString("18.490000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_117);
    UnderlyingInstrument_117.insert(UnderlyingAttachmentPoint_117.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_117("STRING_1764473704");
    noUnderlyings_0_2.set(UnderlyingCFICode_117);
    UnderlyingInstrument_117.insert(UnderlyingCFICode_117.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_117("STRING_1581859574");
    noUnderlyings_0_2.set(UnderlyingCPProgram_117);
    UnderlyingInstrument_117.insert(UnderlyingCPProgram_117.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_117("STRING_1986966962");
    noUnderlyings_0_2.set(UnderlyingCPRegType_117);
    UnderlyingInstrument_117.insert(UnderlyingCPRegType_117.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_117;
    UnderlyingCapValue_117.setString("8871518");
    noUnderlyings_0_2.set(UnderlyingCapValue_117);
    UnderlyingInstrument_117.insert(UnderlyingCapValue_117.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_117;
    UnderlyingCashAmount_117.setString("12203127");
    noUnderlyings_0_2.set(UnderlyingCashAmount_117);
    UnderlyingInstrument_117.insert(UnderlyingCashAmount_117.getString());
    FIX::UnderlyingCashType UnderlyingCashType_117("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_117);
    UnderlyingInstrument_117.insert(UnderlyingCashType_117.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_117;
    UnderlyingContractMultiplier_117.setString("6393704");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_117);
    UnderlyingInstrument_117.insert(UnderlyingContractMultiplier_117.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_117(446281291);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_117);
    UnderlyingInstrument_117.insert(UnderlyingContractMultiplierUnit_117.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_117("COUNTRY_1630337534");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_117);
    UnderlyingInstrument_117.insert(UnderlyingCountryOfIssue_117.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_117("LOCALMKTDATE_757825554");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_117);
    UnderlyingInstrument_117.insert(UnderlyingCouponPaymentDate_117.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_117;
    UnderlyingCouponRate_117.setString("53.250000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_117);
    UnderlyingInstrument_117.insert(UnderlyingCouponRate_117.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_117("STRING_2077984807");
    noUnderlyings_0_2.set(UnderlyingCreditRating_117);
    UnderlyingInstrument_117.insert(UnderlyingCreditRating_117.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_117("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_117);
    UnderlyingInstrument_117.insert(UnderlyingCurrency_117.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_117;
    UnderlyingCurrentValue_117.setString("3956256");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_117);
    UnderlyingInstrument_117.insert(UnderlyingCurrentValue_117.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_117;
    UnderlyingDetachmentPoint_117.setString("40.760000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_117);
    UnderlyingInstrument_117.insert(UnderlyingDetachmentPoint_117.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_117;
    UnderlyingDirtyPrice_117.setString("13484397");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_117);
    UnderlyingInstrument_117.insert(UnderlyingDirtyPrice_117.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_117;
    UnderlyingEndPrice_117.setString("6132034");
    noUnderlyings_0_2.set(UnderlyingEndPrice_117);
    UnderlyingInstrument_117.insert(UnderlyingEndPrice_117.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_117;
    UnderlyingEndValue_117.setString("10395765");
    noUnderlyings_0_2.set(UnderlyingEndValue_117);
    UnderlyingInstrument_117.insert(UnderlyingEndValue_117.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_117(585795641);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_117);
    UnderlyingInstrument_117.insert(UnderlyingExerciseStyle_117.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_117;
    UnderlyingFXRate_117.setString("17094061");
    noUnderlyings_0_2.set(UnderlyingFXRate_117);
    UnderlyingInstrument_117.insert(UnderlyingFXRate_117.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_117('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_117);
    UnderlyingInstrument_117.insert(UnderlyingFXRateCalc_117.getString());
    FIX::UnderlyingFactor UnderlyingFactor_117;
    UnderlyingFactor_117.setString("2707049");
    noUnderlyings_0_2.set(UnderlyingFactor_117);
    UnderlyingInstrument_117.insert(UnderlyingFactor_117.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_117(1443838648);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_117);
    UnderlyingInstrument_117.insert(UnderlyingFlowScheduleType_117.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_117("STRING_88979322");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_117);
    UnderlyingInstrument_117.insert(UnderlyingInstrRegistry_117.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_117("LOCALMKTDATE_1778330843");
    noUnderlyings_0_2.set(UnderlyingIssueDate_117);
    UnderlyingInstrument_117.insert(UnderlyingIssueDate_117.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_117("STRING_1702085128");
    noUnderlyings_0_2.set(UnderlyingIssuer_117);
    UnderlyingInstrument_117.insert(UnderlyingIssuer_117.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_117("STRING_1962330661");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_117);
    UnderlyingInstrument_117.insert(UnderlyingLocaleOfIssue_117.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_117("LOCALMKTDATE_274886577");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_117);
    UnderlyingInstrument_117.insert(UnderlyingMaturityDate_117.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_117("MONTHYEAR_517956748");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_117);
    UnderlyingInstrument_117.insert(UnderlyingMaturityMonthYear_117.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_117("TZTIMEONLY_931448862");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_117);
    UnderlyingInstrument_117.insert(UnderlyingMaturityTime_117.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_117;
    UnderlyingNotionalPercentageOutstanding_117.setString("2.810000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_117);
    UnderlyingInstrument_117.insert(UnderlyingNotionalPercentageOutstanding_117.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_117('2');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_117);
    UnderlyingInstrument_117.insert(UnderlyingOptAttribute_117.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_117;
    UnderlyingOriginalNotionalPercentageOutstanding_117.setString("21.760000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_117);
    UnderlyingInstrument_117.insert(UnderlyingOriginalNotionalPercentageOutstanding_117.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_117("STRING_779028475");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_117);
    UnderlyingInstrument_117.insert(UnderlyingPriceUnitOfMeasure_117.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_117;
    UnderlyingPriceUnitOfMeasureQty_117.setString("11726454");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_117);
    UnderlyingInstrument_117.insert(UnderlyingPriceUnitOfMeasureQty_117.getString());
    FIX::UnderlyingProduct UnderlyingProduct_117(2069534453);
    noUnderlyings_0_2.set(UnderlyingProduct_117);
    UnderlyingInstrument_117.insert(UnderlyingProduct_117.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_117(1418398944);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_117);
    UnderlyingInstrument_117.insert(UnderlyingPutOrCall_117.getString());
    FIX::UnderlyingPx UnderlyingPx_117;
    UnderlyingPx_117.setString("16189266");
    noUnderlyings_0_2.set(UnderlyingPx_117);
    UnderlyingInstrument_117.insert(UnderlyingPx_117.getString());
    FIX::UnderlyingQty UnderlyingQty_117;
    UnderlyingQty_117.setString("15523883");
    noUnderlyings_0_2.set(UnderlyingQty_117);
    UnderlyingInstrument_117.insert(UnderlyingQty_117.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_117("LOCALMKTDATE_28740850");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_117);
    UnderlyingInstrument_117.insert(UnderlyingRedemptionDate_117.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_117("STRING_102928371");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_117);
    UnderlyingInstrument_117.insert(UnderlyingRepoCollateralSecurityType_117.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_117;
    UnderlyingRepurchaseRate_117.setString("94.990000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_117);
    UnderlyingInstrument_117.insert(UnderlyingRepurchaseRate_117.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_117(774801586);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_117);
    UnderlyingInstrument_117.insert(UnderlyingRepurchaseTerm_117.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_117("STRING_1104737513");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_117);
    UnderlyingInstrument_117.insert(UnderlyingRestructuringType_117.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_117("STRING_1878515159");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityDesc_117.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_117("EXCHANGE_1163835663");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityExchange_117.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_117("STRING_305693584");
    noUnderlyings_0_2.set(UnderlyingSecurityID_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityID_117.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_117("STRING_344234982");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityIDSource_117.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_117("STRING_55928519");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_117);
    UnderlyingInstrument_117.insert(UnderlyingSecuritySubType_117.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_117("STRING_891489225");
    noUnderlyings_0_2.set(UnderlyingSecurityType_117);
    UnderlyingInstrument_117.insert(UnderlyingSecurityType_117.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_117("STRING_2053641094");
    noUnderlyings_0_2.set(UnderlyingSeniority_117);
    UnderlyingInstrument_117.insert(UnderlyingSeniority_117.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_117("STRING_1601583607");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_117);
    UnderlyingInstrument_117.insert(UnderlyingSettlMethod_117.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_117(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_117);
    UnderlyingInstrument_117.insert(UnderlyingSettlementType_117.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_117;
    UnderlyingStartValue_117.setString("13499960");
    noUnderlyings_0_2.set(UnderlyingStartValue_117);
    UnderlyingInstrument_117.insert(UnderlyingStartValue_117.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_117("STRING_1690562929");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_117);
    UnderlyingInstrument_117.insert(UnderlyingStateOrProvinceOfIssue_117.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_117("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_117);
    UnderlyingInstrument_117.insert(UnderlyingStrikeCurrency_117.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_117;
    UnderlyingStrikePrice_117.setString("15054099");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_117);
    UnderlyingInstrument_117.insert(UnderlyingStrikePrice_117.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_117("STRING_1067927958");
    noUnderlyings_0_2.set(UnderlyingSymbol_117);
    UnderlyingInstrument_117.insert(UnderlyingSymbol_117.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_117("STRING_1422554322");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_117);
    UnderlyingInstrument_117.insert(UnderlyingSymbolSfx_117.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_117("STRING_289375156");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_117);
    UnderlyingInstrument_117.insert(UnderlyingTimeUnit_117.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_117("STRING_959804591");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_117);
    UnderlyingInstrument_117.insert(UnderlyingUnitOfMeasure_117.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_117;
    UnderlyingUnitOfMeasureQty_117.setString("13748869");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_117);
    UnderlyingInstrument_117.insert(UnderlyingUnitOfMeasureQty_117.getString());
    all_values.push_back(UnderlyingInstrument_117);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_246;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_246("STRING_1738833067");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_246);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_246.insert(UnderlyingSecurityAltID_246.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_246("STRING_400048751");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_246);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_246.insert(UnderlyingSecurityAltIDSource_246.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_246);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_247;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_247("STRING_982358138");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_247);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_247.insert(UnderlyingSecurityAltID_247.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_247("STRING_1009748363");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_247);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_247.insert(UnderlyingSecurityAltIDSource_247.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_247);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_248;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_248("STRING_2018975445");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_248);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_248.insert(UnderlyingSecurityAltID_248.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_248("STRING_387262830");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_248);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_248.insert(UnderlyingSecurityAltIDSource_248.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_248);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_233;
      FIX::UnderlyingStipType UnderlyingStipType_233("STRING_2121903817");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_233);
      UnderlyingStipulations_NoUnderlyingStips_233.insert(UnderlyingStipType_233.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_233("STRING_1870152329");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_233);
      UnderlyingStipulations_NoUnderlyingStips_233.insert(UnderlyingStipValue_233.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_233);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_234;
      FIX::UnderlyingStipType UnderlyingStipType_234("STRING_1813290800");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_234);
      UnderlyingStipulations_NoUnderlyingStips_234.insert(UnderlyingStipType_234.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_234("STRING_1079157682");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_234);
      UnderlyingStipulations_NoUnderlyingStips_234.insert(UnderlyingStipValue_234.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_234);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_233;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_233("STRING_829642815");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_233);
      UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyID_233.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_233('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_233);
      UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyIDSource_233.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_233(1945418823);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_233);
      UndlyInstrumentParties_NoUndlyInstrumentParties_233.insert(UnderlyingInstrumentPartyRole_233.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_233);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_464("STRING_128856844");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_464);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464.insert(UnderlyingInstrumentPartySubID_464.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_464(1851576269);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_464);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464.insert(UnderlyingInstrumentPartySubIDType_464.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_465("STRING_339671293");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_465);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465.insert(UnderlyingInstrumentPartySubID_465.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_465(1291051030);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_465);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465.insert(UnderlyingInstrumentPartySubIDType_465.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_466("STRING_1054088716");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_466);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466.insert(UnderlyingInstrumentPartySubID_466.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_466(2030234223);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_466);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466.insert(UnderlyingInstrumentPartySubIDType_466.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_24;
  FIX::Yield Yield_24;
  Yield_24.setString("24.110000");
  msg.set(Yield_24);
  YieldData_24.insert(Yield_24.getString());
  FIX::YieldCalcDate YieldCalcDate_24("LOCALMKTDATE_1958686290");
  msg.set(YieldCalcDate_24);
  YieldData_24.insert(YieldCalcDate_24.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_24("LOCALMKTDATE_1388160517");
  msg.set(YieldRedemptionDate_24);
  YieldData_24.insert(YieldRedemptionDate_24.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_24;
  YieldRedemptionPrice_24.setString("10045367");
  msg.set(YieldRedemptionPrice_24);
  YieldData_24.insert(YieldRedemptionPrice_24.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_24(1233756965);
  msg.set(YieldRedemptionPriceType_24);
  YieldData_24.insert(YieldRedemptionPriceType_24.getString());
  FIX::YieldType YieldType_24("STRING_LONGAVGLIFE");
  msg.set(YieldType_24);
  YieldData_24.insert(YieldType_24.getString());
  all_values.push_back(YieldData_24);


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
