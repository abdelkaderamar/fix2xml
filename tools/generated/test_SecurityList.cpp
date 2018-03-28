#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityList, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityList msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityList_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_22("LOCALMKTDATE_1475055169");
  msg.set(ClearingBusinessDate_22);
  SecurityList_0.insert(ClearingBusinessDate_22.getString());
  FIX::EncodedSecurityListDesc EncodedSecurityListDesc_0("DATA_1333619720");
  msg.set(EncodedSecurityListDesc_0);
  FIX::EncodedSecurityListDescLen EncodedSecurityListDescLen_0(727948368);
  msg.set(EncodedSecurityListDescLen_0);
  FIX::LastFragment LastFragment_14(true);
  msg.set(LastFragment_14);
  SecurityList_0.insert(LastFragment_14.getString());
  FIX::MarketID MarketID_16("EXCHANGE_1926258636");
  msg.set(MarketID_16);
  SecurityList_0.insert(MarketID_16.getString());
  FIX::MarketSegmentID MarketSegmentID_16("STRING_1831762385");
  msg.set(MarketSegmentID_16);
  SecurityList_0.insert(MarketSegmentID_16.getString());
  FIX::SecurityListDesc SecurityListDesc_0("STRING_970487299");
  msg.set(SecurityListDesc_0);
  SecurityList_0.insert(SecurityListDesc_0.getString());
  FIX::SecurityListID SecurityListID_0("STRING_621549766");
  msg.set(SecurityListID_0);
  SecurityList_0.insert(SecurityListID_0.getString());
  FIX::SecurityListRefID SecurityListRefID_0("STRING_1170224653");
  msg.set(SecurityListRefID_0);
  SecurityList_0.insert(SecurityListRefID_0.getString());
  FIX::SecurityListType SecurityListType_0(3);
  msg.set(SecurityListType_0);
  SecurityList_0.insert(SecurityListType_0.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_0(2);
  msg.set(SecurityListTypeSource_0);
  SecurityList_0.insert(SecurityListTypeSource_0.getString());
  FIX::SecurityReportID SecurityReportID_3(372353761);
  msg.set(SecurityReportID_3);
  SecurityList_0.insert(SecurityReportID_3.getString());
  FIX::SecurityReqID SecurityReqID_6("STRING_2092794869");
  msg.set(SecurityReqID_6);
  SecurityList_0.insert(SecurityReqID_6.getString());
  FIX::SecurityRequestResult SecurityRequestResult_2(1);
  msg.set(SecurityRequestResult_2);
  SecurityList_0.insert(SecurityRequestResult_2.getString());
  FIX::SecurityResponseID SecurityResponseID_4("STRING_1718886778");
  msg.set(SecurityResponseID_4);
  SecurityList_0.insert(SecurityResponseID_4.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_3(1810336338);
  msg.set(TotNoRelatedSym_3);
  SecurityList_0.insert(TotNoRelatedSym_3.getString());
  FIX::TransactTime TransactTime_62(FIX::UTCTIMESTAMP(13, 39, 54, 19, 4, 2002));
  msg.set(TransactTime_62);
  SecurityList_0.insert(TransactTime_62.getString());
  all_values.push_back(SecurityList_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_14;
  FIX::ApplID ApplID_14("STRING_1682478590");
  msg.set(ApplID_14);
  ApplicationSequenceControl_14.insert(ApplID_14.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_14(1196169001);
  msg.set(ApplLastSeqNum_14);
  ApplicationSequenceControl_14.insert(ApplLastSeqNum_14.getString());
  FIX::ApplResendFlag ApplResendFlag_14(true);
  msg.set(ApplResendFlag_14);
  ApplicationSequenceControl_14.insert(ApplResendFlag_14.getString());
  FIX::ApplSeqNum ApplSeqNum_14(823752786);
  msg.set(ApplSeqNum_14);
  ApplicationSequenceControl_14.insert(ApplSeqNum_14.getString());
  all_values.push_back(ApplicationSequenceControl_14);

  // SecListGrp
  // Group SecListGrp.NoRelatedSym
  {
    FIX50SP2::SecurityList::NoRelatedSym noRelatedSym_0_0;
    // SecListGrp.NoRelatedSym
    multiset<string> SecListGrp_NoRelatedSym_0;
    FIX::Currency Currency_62("GBP");
    noRelatedSym_0_0.set(Currency_62);
    SecListGrp_NoRelatedSym_0.insert(Currency_62.getString());
    FIX::EncodedText EncodedText_78("DATA_294932668");
    noRelatedSym_0_0.set(EncodedText_78);
    SecListGrp_NoRelatedSym_0.insert(EncodedText_78.getString());
    FIX::EncodedTextLen EncodedTextLen_78(1303616257);
    noRelatedSym_0_0.set(EncodedTextLen_78);
    SecListGrp_NoRelatedSym_0.insert(EncodedTextLen_78.getString());
    FIX::RelSymTransactTime RelSymTransactTime_5(FIX::UTCTIMESTAMP(4, 29, 19, 6, 5, 2011));
    noRelatedSym_0_0.set(RelSymTransactTime_5);
    SecListGrp_NoRelatedSym_0.insert(RelSymTransactTime_5.getString());
    FIX::Text Text_78("STRING_1877384427");
    noRelatedSym_0_0.set(Text_78);
    SecListGrp_NoRelatedSym_0.insert(Text_78.getString());
    all_values.push_back(SecListGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_27;
    FIX::AgreementCurrency AgreementCurrency_27("CAN");
    noRelatedSym_0_0.set(AgreementCurrency_27);
    FinancingDetails_27.insert(AgreementCurrency_27.getString());
    FIX::AgreementDate AgreementDate_27("LOCALMKTDATE_102254540");
    noRelatedSym_0_0.set(AgreementDate_27);
    FinancingDetails_27.insert(AgreementDate_27.getString());
    FIX::AgreementDesc AgreementDesc_27("STRING_1787893191");
    noRelatedSym_0_0.set(AgreementDesc_27);
    FinancingDetails_27.insert(AgreementDesc_27.getString());
    FIX::AgreementID AgreementID_27("STRING_1129453030");
    noRelatedSym_0_0.set(AgreementID_27);
    FinancingDetails_27.insert(AgreementID_27.getString());
    FIX::DeliveryType DeliveryType_27(3);
    noRelatedSym_0_0.set(DeliveryType_27);
    FinancingDetails_27.insert(DeliveryType_27.getString());
    FIX::EndDate EndDate_27("LOCALMKTDATE_1450745882");
    noRelatedSym_0_0.set(EndDate_27);
    FinancingDetails_27.insert(EndDate_27.getString());
    FIX::MarginRatio MarginRatio_27;
    MarginRatio_27.setString("69.820000");
    noRelatedSym_0_0.set(MarginRatio_27);
    FinancingDetails_27.insert(MarginRatio_27.getString());
    FIX::StartDate StartDate_27("LOCALMKTDATE_1467709260");
    noRelatedSym_0_0.set(StartDate_27);
    FinancingDetails_27.insert(StartDate_27.getString());
    FIX::TerminationType TerminationType_27(2);
    noRelatedSym_0_0.set(TerminationType_27);
    FinancingDetails_27.insert(TerminationType_27.getString());
    all_values.push_back(FinancingDetails_27);

    // InstrmtLegSecListGrp
    // Group InstrmtLegSecListGrp.NoLegs
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_0;
      FIX::LegSettlType LegSettlType_24('1');
      noLegs_0_1_0.set(LegSettlType_24);
      InstrmtLegSecListGrp_NoLegs_0.insert(LegSettlType_24.getString());
      FIX::LegSwapType LegSwapType_24(1);
      noLegs_0_1_0.set(LegSwapType_24);
      InstrmtLegSecListGrp_NoLegs_0.insert(LegSwapType_24.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_0);

      // InstrumentLeg
      multiset<string> InstrumentLeg_129;
      FIX::EncodedLegIssuer EncodedLegIssuer_129("DATA_880629143");
      noLegs_0_1_0.set(EncodedLegIssuer_129);
      InstrumentLeg_129.insert(EncodedLegIssuer_129.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_129(1310799730);
      noLegs_0_1_0.set(EncodedLegIssuerLen_129);
      InstrumentLeg_129.insert(EncodedLegIssuerLen_129.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_129("DATA_288905430");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_129);
      InstrumentLeg_129.insert(EncodedLegSecurityDesc_129.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_129(985477659);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_129);
      InstrumentLeg_129.insert(EncodedLegSecurityDescLen_129.getString());
      FIX::LegCFICode LegCFICode_129("STRING_2134552516");
      noLegs_0_1_0.set(LegCFICode_129);
      InstrumentLeg_129.insert(LegCFICode_129.getString());
      FIX::LegContractMultiplier LegContractMultiplier_129;
      LegContractMultiplier_129.setString("12443485");
      noLegs_0_1_0.set(LegContractMultiplier_129);
      InstrumentLeg_129.insert(LegContractMultiplier_129.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_129(814038747);
      noLegs_0_1_0.set(LegContractMultiplierUnit_129);
      InstrumentLeg_129.insert(LegContractMultiplierUnit_129.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_129("MONTHYEAR_1881296387");
      noLegs_0_1_0.set(LegContractSettlMonth_129);
      InstrumentLeg_129.insert(LegContractSettlMonth_129.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_129("COUNTRY_1539281239");
      noLegs_0_1_0.set(LegCountryOfIssue_129);
      InstrumentLeg_129.insert(LegCountryOfIssue_129.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_129("LOCALMKTDATE_2117655004");
      noLegs_0_1_0.set(LegCouponPaymentDate_129);
      InstrumentLeg_129.insert(LegCouponPaymentDate_129.getString());
      FIX::LegCouponRate LegCouponRate_129;
      LegCouponRate_129.setString("63.290000");
      noLegs_0_1_0.set(LegCouponRate_129);
      InstrumentLeg_129.insert(LegCouponRate_129.getString());
      FIX::LegCreditRating LegCreditRating_129("STRING_414678627");
      noLegs_0_1_0.set(LegCreditRating_129);
      InstrumentLeg_129.insert(LegCreditRating_129.getString());
      FIX::LegCurrency LegCurrency_129("USD");
      noLegs_0_1_0.set(LegCurrency_129);
      InstrumentLeg_129.insert(LegCurrency_129.getString());
      FIX::LegDatedDate LegDatedDate_129("LOCALMKTDATE_1121838401");
      noLegs_0_1_0.set(LegDatedDate_129);
      InstrumentLeg_129.insert(LegDatedDate_129.getString());
      FIX::LegExerciseStyle LegExerciseStyle_129(782892297);
      noLegs_0_1_0.set(LegExerciseStyle_129);
      InstrumentLeg_129.insert(LegExerciseStyle_129.getString());
      FIX::LegFactor LegFactor_129;
      LegFactor_129.setString("10065196");
      noLegs_0_1_0.set(LegFactor_129);
      InstrumentLeg_129.insert(LegFactor_129.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_129(851739181);
      noLegs_0_1_0.set(LegFlowScheduleType_129);
      InstrumentLeg_129.insert(LegFlowScheduleType_129.getString());
      FIX::LegInstrRegistry LegInstrRegistry_129("STRING_477990619");
      noLegs_0_1_0.set(LegInstrRegistry_129);
      InstrumentLeg_129.insert(LegInstrRegistry_129.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_129("LOCALMKTDATE_273155245");
      noLegs_0_1_0.set(LegInterestAccrualDate_129);
      InstrumentLeg_129.insert(LegInterestAccrualDate_129.getString());
      FIX::LegIssueDate LegIssueDate_129("LOCALMKTDATE_953993721");
      noLegs_0_1_0.set(LegIssueDate_129);
      InstrumentLeg_129.insert(LegIssueDate_129.getString());
      FIX::LegIssuer LegIssuer_129("STRING_118400162");
      noLegs_0_1_0.set(LegIssuer_129);
      InstrumentLeg_129.insert(LegIssuer_129.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_129("STRING_1402608275");
      noLegs_0_1_0.set(LegLocaleOfIssue_129);
      InstrumentLeg_129.insert(LegLocaleOfIssue_129.getString());
      FIX::LegMaturityDate LegMaturityDate_129("LOCALMKTDATE_627651392");
      noLegs_0_1_0.set(LegMaturityDate_129);
      InstrumentLeg_129.insert(LegMaturityDate_129.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_129("MONTHYEAR_1569146044");
      noLegs_0_1_0.set(LegMaturityMonthYear_129);
      InstrumentLeg_129.insert(LegMaturityMonthYear_129.getString());
      FIX::LegMaturityTime LegMaturityTime_129("TZTIMEONLY_1488445258");
      noLegs_0_1_0.set(LegMaturityTime_129);
      InstrumentLeg_129.insert(LegMaturityTime_129.getString());
      FIX::LegOptAttribute LegOptAttribute_129('2');
      noLegs_0_1_0.set(LegOptAttribute_129);
      InstrumentLeg_129.insert(LegOptAttribute_129.getString());
      FIX::LegOptionRatio LegOptionRatio_129;
      LegOptionRatio_129.setString("2267733");
      noLegs_0_1_0.set(LegOptionRatio_129);
      InstrumentLeg_129.insert(LegOptionRatio_129.getString());
      FIX::LegPool LegPool_129("STRING_1345900507");
      noLegs_0_1_0.set(LegPool_129);
      InstrumentLeg_129.insert(LegPool_129.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_129("STRING_1723681793");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_129);
      InstrumentLeg_129.insert(LegPriceUnitOfMeasure_129.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_129;
      LegPriceUnitOfMeasureQty_129.setString("14669934");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_129);
      InstrumentLeg_129.insert(LegPriceUnitOfMeasureQty_129.getString());
      FIX::LegProduct LegProduct_129(79046002);
      noLegs_0_1_0.set(LegProduct_129);
      InstrumentLeg_129.insert(LegProduct_129.getString());
      FIX::LegPutOrCall LegPutOrCall_129(886997875);
      noLegs_0_1_0.set(LegPutOrCall_129);
      InstrumentLeg_129.insert(LegPutOrCall_129.getString());
      FIX::LegRatioQty LegRatioQty_129;
      LegRatioQty_129.setString("17558988");
      noLegs_0_1_0.set(LegRatioQty_129);
      InstrumentLeg_129.insert(LegRatioQty_129.getString());
      FIX::LegRedemptionDate LegRedemptionDate_129("LOCALMKTDATE_1064523661");
      noLegs_0_1_0.set(LegRedemptionDate_129);
      InstrumentLeg_129.insert(LegRedemptionDate_129.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_129("STRING_874066744");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_129);
      InstrumentLeg_129.insert(LegRepoCollateralSecurityType_129.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_129;
      LegRepurchaseRate_129.setString("38.190000");
      noLegs_0_1_0.set(LegRepurchaseRate_129);
      InstrumentLeg_129.insert(LegRepurchaseRate_129.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_129(1878562408);
      noLegs_0_1_0.set(LegRepurchaseTerm_129);
      InstrumentLeg_129.insert(LegRepurchaseTerm_129.getString());
      FIX::LegSecurityDesc LegSecurityDesc_129("STRING_607879483");
      noLegs_0_1_0.set(LegSecurityDesc_129);
      InstrumentLeg_129.insert(LegSecurityDesc_129.getString());
      FIX::LegSecurityExchange LegSecurityExchange_129("EXCHANGE_244561410");
      noLegs_0_1_0.set(LegSecurityExchange_129);
      InstrumentLeg_129.insert(LegSecurityExchange_129.getString());
      FIX::LegSecurityID LegSecurityID_129("STRING_1848733764");
      noLegs_0_1_0.set(LegSecurityID_129);
      InstrumentLeg_129.insert(LegSecurityID_129.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_129("STRING_1422055812");
      noLegs_0_1_0.set(LegSecurityIDSource_129);
      InstrumentLeg_129.insert(LegSecurityIDSource_129.getString());
      FIX::LegSecuritySubType LegSecuritySubType_129("STRING_659240038");
      noLegs_0_1_0.set(LegSecuritySubType_129);
      InstrumentLeg_129.insert(LegSecuritySubType_129.getString());
      FIX::LegSecurityType LegSecurityType_129("STRING_1740021941");
      noLegs_0_1_0.set(LegSecurityType_129);
      InstrumentLeg_129.insert(LegSecurityType_129.getString());
      FIX::LegSide LegSide_129('9');
      noLegs_0_1_0.set(LegSide_129);
      InstrumentLeg_129.insert(LegSide_129.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_129("STRING_1781078439");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_129);
      InstrumentLeg_129.insert(LegStateOrProvinceOfIssue_129.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_129("CHF");
      noLegs_0_1_0.set(LegStrikeCurrency_129);
      InstrumentLeg_129.insert(LegStrikeCurrency_129.getString());
      FIX::LegStrikePrice LegStrikePrice_129;
      LegStrikePrice_129.setString("4853339");
      noLegs_0_1_0.set(LegStrikePrice_129);
      InstrumentLeg_129.insert(LegStrikePrice_129.getString());
      FIX::LegSymbol LegSymbol_129("STRING_853421209");
      noLegs_0_1_0.set(LegSymbol_129);
      InstrumentLeg_129.insert(LegSymbol_129.getString());
      FIX::LegSymbolSfx LegSymbolSfx_129("STRING_80078276");
      noLegs_0_1_0.set(LegSymbolSfx_129);
      InstrumentLeg_129.insert(LegSymbolSfx_129.getString());
      FIX::LegTimeUnit LegTimeUnit_129("STRING_1439327694");
      noLegs_0_1_0.set(LegTimeUnit_129);
      InstrumentLeg_129.insert(LegTimeUnit_129.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_129("STRING_971821371");
      noLegs_0_1_0.set(LegUnitOfMeasure_129);
      InstrumentLeg_129.insert(LegUnitOfMeasure_129.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_129;
      LegUnitOfMeasureQty_129.setString("14826865");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_129);
      InstrumentLeg_129.insert(LegUnitOfMeasureQty_129.getString());
      all_values.push_back(InstrumentLeg_129);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_246;
        FIX::LegSecurityAltID LegSecurityAltID_246("STRING_393483768");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_246);
        LegSecAltIDGrp_NoLegSecurityAltID_246.insert(LegSecurityAltID_246.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_246("STRING_823648161");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_246);
        LegSecAltIDGrp_NoLegSecurityAltID_246.insert(LegSecurityAltIDSource_246.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_246);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_247;
        FIX::LegSecurityAltID LegSecurityAltID_247("STRING_2014856091");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_247);
        LegSecAltIDGrp_NoLegSecurityAltID_247.insert(LegSecurityAltID_247.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_247("STRING_620257158");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_247);
        LegSecAltIDGrp_NoLegSecurityAltID_247.insert(LegSecurityAltIDSource_247.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_247);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_248;
        FIX::LegSecurityAltID LegSecurityAltID_248("STRING_22065020");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltID_248);
        LegSecAltIDGrp_NoLegSecurityAltID_248.insert(LegSecurityAltID_248.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_248("STRING_1591054236");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltIDSource_248);
        LegSecAltIDGrp_NoLegSecurityAltID_248.insert(LegSecurityAltIDSource_248.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_248);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_12;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_12("USD");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_12);
      LegBenchmarkCurveData_12.insert(LegBenchmarkCurveCurrency_12.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_12("STRING_330568464");
      noLegs_0_1_0.set(LegBenchmarkCurveName_12);
      LegBenchmarkCurveData_12.insert(LegBenchmarkCurveName_12.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_12("STRING_1695665873");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_12);
      LegBenchmarkCurveData_12.insert(LegBenchmarkCurvePoint_12.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_12;
      LegBenchmarkPrice_12.setString("11656346");
      noLegs_0_1_0.set(LegBenchmarkPrice_12);
      LegBenchmarkCurveData_12.insert(LegBenchmarkPrice_12.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_12(1204635208);
      noLegs_0_1_0.set(LegBenchmarkPriceType_12);
      LegBenchmarkCurveData_12.insert(LegBenchmarkPriceType_12.getString());
      all_values.push_back(LegBenchmarkCurveData_12);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_51;
        FIX::LegStipulationType LegStipulationType_51("STRING_896713443");
        noLegStipulations_0_0_2_0.set(LegStipulationType_51);
        LegStipulations_NoLegStipulations_51.insert(LegStipulationType_51.getString());
        FIX::LegStipulationValue LegStipulationValue_51("STRING_1812514691");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_51);
        LegStipulations_NoLegStipulations_51.insert(LegStipulationValue_51.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_51);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_52;
        FIX::LegStipulationType LegStipulationType_52("STRING_645507455");
        noLegStipulations_0_0_2_1.set(LegStipulationType_52);
        LegStipulations_NoLegStipulations_52.insert(LegStipulationType_52.getString());
        FIX::LegStipulationValue LegStipulationValue_52("STRING_597963559");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_52);
        LegStipulations_NoLegStipulations_52.insert(LegStipulationValue_52.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_52);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_1;
      FIX::LegSettlType LegSettlType_25('1');
      noLegs_0_1_1.set(LegSettlType_25);
      InstrmtLegSecListGrp_NoLegs_1.insert(LegSettlType_25.getString());
      FIX::LegSwapType LegSwapType_25(2);
      noLegs_0_1_1.set(LegSwapType_25);
      InstrmtLegSecListGrp_NoLegs_1.insert(LegSwapType_25.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_1);

      // InstrumentLeg
      multiset<string> InstrumentLeg_130;
      FIX::EncodedLegIssuer EncodedLegIssuer_130("DATA_190501852");
      noLegs_0_1_1.set(EncodedLegIssuer_130);
      InstrumentLeg_130.insert(EncodedLegIssuer_130.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_130(2034973928);
      noLegs_0_1_1.set(EncodedLegIssuerLen_130);
      InstrumentLeg_130.insert(EncodedLegIssuerLen_130.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_130("DATA_938342284");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_130);
      InstrumentLeg_130.insert(EncodedLegSecurityDesc_130.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_130(565932442);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_130);
      InstrumentLeg_130.insert(EncodedLegSecurityDescLen_130.getString());
      FIX::LegCFICode LegCFICode_130("STRING_1841896959");
      noLegs_0_1_1.set(LegCFICode_130);
      InstrumentLeg_130.insert(LegCFICode_130.getString());
      FIX::LegContractMultiplier LegContractMultiplier_130;
      LegContractMultiplier_130.setString("14236762");
      noLegs_0_1_1.set(LegContractMultiplier_130);
      InstrumentLeg_130.insert(LegContractMultiplier_130.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_130(1419353651);
      noLegs_0_1_1.set(LegContractMultiplierUnit_130);
      InstrumentLeg_130.insert(LegContractMultiplierUnit_130.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_130("MONTHYEAR_1921975235");
      noLegs_0_1_1.set(LegContractSettlMonth_130);
      InstrumentLeg_130.insert(LegContractSettlMonth_130.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_130("COUNTRY_715520303");
      noLegs_0_1_1.set(LegCountryOfIssue_130);
      InstrumentLeg_130.insert(LegCountryOfIssue_130.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_130("LOCALMKTDATE_243691375");
      noLegs_0_1_1.set(LegCouponPaymentDate_130);
      InstrumentLeg_130.insert(LegCouponPaymentDate_130.getString());
      FIX::LegCouponRate LegCouponRate_130;
      LegCouponRate_130.setString("81.390000");
      noLegs_0_1_1.set(LegCouponRate_130);
      InstrumentLeg_130.insert(LegCouponRate_130.getString());
      FIX::LegCreditRating LegCreditRating_130("STRING_635015741");
      noLegs_0_1_1.set(LegCreditRating_130);
      InstrumentLeg_130.insert(LegCreditRating_130.getString());
      FIX::LegCurrency LegCurrency_130("GBP");
      noLegs_0_1_1.set(LegCurrency_130);
      InstrumentLeg_130.insert(LegCurrency_130.getString());
      FIX::LegDatedDate LegDatedDate_130("LOCALMKTDATE_502388185");
      noLegs_0_1_1.set(LegDatedDate_130);
      InstrumentLeg_130.insert(LegDatedDate_130.getString());
      FIX::LegExerciseStyle LegExerciseStyle_130(1257432301);
      noLegs_0_1_1.set(LegExerciseStyle_130);
      InstrumentLeg_130.insert(LegExerciseStyle_130.getString());
      FIX::LegFactor LegFactor_130;
      LegFactor_130.setString("21028913");
      noLegs_0_1_1.set(LegFactor_130);
      InstrumentLeg_130.insert(LegFactor_130.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_130(2093442421);
      noLegs_0_1_1.set(LegFlowScheduleType_130);
      InstrumentLeg_130.insert(LegFlowScheduleType_130.getString());
      FIX::LegInstrRegistry LegInstrRegistry_130("STRING_1197199277");
      noLegs_0_1_1.set(LegInstrRegistry_130);
      InstrumentLeg_130.insert(LegInstrRegistry_130.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_130("LOCALMKTDATE_56518695");
      noLegs_0_1_1.set(LegInterestAccrualDate_130);
      InstrumentLeg_130.insert(LegInterestAccrualDate_130.getString());
      FIX::LegIssueDate LegIssueDate_130("LOCALMKTDATE_276527237");
      noLegs_0_1_1.set(LegIssueDate_130);
      InstrumentLeg_130.insert(LegIssueDate_130.getString());
      FIX::LegIssuer LegIssuer_130("STRING_745381502");
      noLegs_0_1_1.set(LegIssuer_130);
      InstrumentLeg_130.insert(LegIssuer_130.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_130("STRING_1222153379");
      noLegs_0_1_1.set(LegLocaleOfIssue_130);
      InstrumentLeg_130.insert(LegLocaleOfIssue_130.getString());
      FIX::LegMaturityDate LegMaturityDate_130("LOCALMKTDATE_1481162445");
      noLegs_0_1_1.set(LegMaturityDate_130);
      InstrumentLeg_130.insert(LegMaturityDate_130.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_130("MONTHYEAR_1146327547");
      noLegs_0_1_1.set(LegMaturityMonthYear_130);
      InstrumentLeg_130.insert(LegMaturityMonthYear_130.getString());
      FIX::LegMaturityTime LegMaturityTime_130("TZTIMEONLY_2118866822");
      noLegs_0_1_1.set(LegMaturityTime_130);
      InstrumentLeg_130.insert(LegMaturityTime_130.getString());
      FIX::LegOptAttribute LegOptAttribute_130('1');
      noLegs_0_1_1.set(LegOptAttribute_130);
      InstrumentLeg_130.insert(LegOptAttribute_130.getString());
      FIX::LegOptionRatio LegOptionRatio_130;
      LegOptionRatio_130.setString("17918350");
      noLegs_0_1_1.set(LegOptionRatio_130);
      InstrumentLeg_130.insert(LegOptionRatio_130.getString());
      FIX::LegPool LegPool_130("STRING_569346734");
      noLegs_0_1_1.set(LegPool_130);
      InstrumentLeg_130.insert(LegPool_130.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_130("STRING_85796696");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_130);
      InstrumentLeg_130.insert(LegPriceUnitOfMeasure_130.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_130;
      LegPriceUnitOfMeasureQty_130.setString("9490988");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_130);
      InstrumentLeg_130.insert(LegPriceUnitOfMeasureQty_130.getString());
      FIX::LegProduct LegProduct_130(759848586);
      noLegs_0_1_1.set(LegProduct_130);
      InstrumentLeg_130.insert(LegProduct_130.getString());
      FIX::LegPutOrCall LegPutOrCall_130(2120770624);
      noLegs_0_1_1.set(LegPutOrCall_130);
      InstrumentLeg_130.insert(LegPutOrCall_130.getString());
      FIX::LegRatioQty LegRatioQty_130;
      LegRatioQty_130.setString("18874411");
      noLegs_0_1_1.set(LegRatioQty_130);
      InstrumentLeg_130.insert(LegRatioQty_130.getString());
      FIX::LegRedemptionDate LegRedemptionDate_130("LOCALMKTDATE_1325781029");
      noLegs_0_1_1.set(LegRedemptionDate_130);
      InstrumentLeg_130.insert(LegRedemptionDate_130.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_130("STRING_1815183936");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_130);
      InstrumentLeg_130.insert(LegRepoCollateralSecurityType_130.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_130;
      LegRepurchaseRate_130.setString("37.400000");
      noLegs_0_1_1.set(LegRepurchaseRate_130);
      InstrumentLeg_130.insert(LegRepurchaseRate_130.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_130(597651032);
      noLegs_0_1_1.set(LegRepurchaseTerm_130);
      InstrumentLeg_130.insert(LegRepurchaseTerm_130.getString());
      FIX::LegSecurityDesc LegSecurityDesc_130("STRING_1589675523");
      noLegs_0_1_1.set(LegSecurityDesc_130);
      InstrumentLeg_130.insert(LegSecurityDesc_130.getString());
      FIX::LegSecurityExchange LegSecurityExchange_130("EXCHANGE_1879154043");
      noLegs_0_1_1.set(LegSecurityExchange_130);
      InstrumentLeg_130.insert(LegSecurityExchange_130.getString());
      FIX::LegSecurityID LegSecurityID_130("STRING_841342407");
      noLegs_0_1_1.set(LegSecurityID_130);
      InstrumentLeg_130.insert(LegSecurityID_130.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_130("STRING_699370014");
      noLegs_0_1_1.set(LegSecurityIDSource_130);
      InstrumentLeg_130.insert(LegSecurityIDSource_130.getString());
      FIX::LegSecuritySubType LegSecuritySubType_130("STRING_366686137");
      noLegs_0_1_1.set(LegSecuritySubType_130);
      InstrumentLeg_130.insert(LegSecuritySubType_130.getString());
      FIX::LegSecurityType LegSecurityType_130("STRING_1478517550");
      noLegs_0_1_1.set(LegSecurityType_130);
      InstrumentLeg_130.insert(LegSecurityType_130.getString());
      FIX::LegSide LegSide_130('6');
      noLegs_0_1_1.set(LegSide_130);
      InstrumentLeg_130.insert(LegSide_130.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_130("STRING_869074322");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_130);
      InstrumentLeg_130.insert(LegStateOrProvinceOfIssue_130.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_130("JPY");
      noLegs_0_1_1.set(LegStrikeCurrency_130);
      InstrumentLeg_130.insert(LegStrikeCurrency_130.getString());
      FIX::LegStrikePrice LegStrikePrice_130;
      LegStrikePrice_130.setString("8150330");
      noLegs_0_1_1.set(LegStrikePrice_130);
      InstrumentLeg_130.insert(LegStrikePrice_130.getString());
      FIX::LegSymbol LegSymbol_130("STRING_1785665481");
      noLegs_0_1_1.set(LegSymbol_130);
      InstrumentLeg_130.insert(LegSymbol_130.getString());
      FIX::LegSymbolSfx LegSymbolSfx_130("STRING_644639035");
      noLegs_0_1_1.set(LegSymbolSfx_130);
      InstrumentLeg_130.insert(LegSymbolSfx_130.getString());
      FIX::LegTimeUnit LegTimeUnit_130("STRING_1091560333");
      noLegs_0_1_1.set(LegTimeUnit_130);
      InstrumentLeg_130.insert(LegTimeUnit_130.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_130("STRING_383563335");
      noLegs_0_1_1.set(LegUnitOfMeasure_130);
      InstrumentLeg_130.insert(LegUnitOfMeasure_130.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_130;
      LegUnitOfMeasureQty_130.setString("18667924");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_130);
      InstrumentLeg_130.insert(LegUnitOfMeasureQty_130.getString());
      all_values.push_back(InstrumentLeg_130);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_249;
        FIX::LegSecurityAltID LegSecurityAltID_249("STRING_1529890882");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_249);
        LegSecAltIDGrp_NoLegSecurityAltID_249.insert(LegSecurityAltID_249.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_249("STRING_1838175589");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_249);
        LegSecAltIDGrp_NoLegSecurityAltID_249.insert(LegSecurityAltIDSource_249.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_249);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_250;
        FIX::LegSecurityAltID LegSecurityAltID_250("STRING_1571432619");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_250);
        LegSecAltIDGrp_NoLegSecurityAltID_250.insert(LegSecurityAltID_250.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_250("STRING_1174242236");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_250);
        LegSecAltIDGrp_NoLegSecurityAltID_250.insert(LegSecurityAltIDSource_250.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_250);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_251;
        FIX::LegSecurityAltID LegSecurityAltID_251("STRING_260038675");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_251);
        LegSecAltIDGrp_NoLegSecurityAltID_251.insert(LegSecurityAltID_251.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_251("STRING_1657229315");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_251);
        LegSecAltIDGrp_NoLegSecurityAltID_251.insert(LegSecurityAltIDSource_251.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_251);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_13;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_13("EUR");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurveCurrency_13.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_13("STRING_1630516291");
      noLegs_0_1_1.set(LegBenchmarkCurveName_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurveName_13.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_13("STRING_1863298567");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurvePoint_13.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_13;
      LegBenchmarkPrice_13.setString("1981846");
      noLegs_0_1_1.set(LegBenchmarkPrice_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkPrice_13.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_13(1298216579);
      noLegs_0_1_1.set(LegBenchmarkPriceType_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkPriceType_13.getString());
      all_values.push_back(LegBenchmarkCurveData_13);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_53;
        FIX::LegStipulationType LegStipulationType_53("STRING_795835675");
        noLegStipulations_0_1_2_0.set(LegStipulationType_53);
        LegStipulations_NoLegStipulations_53.insert(LegStipulationType_53.getString());
        FIX::LegStipulationValue LegStipulationValue_53("STRING_740408455");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_53);
        LegStipulations_NoLegStipulations_53.insert(LegStipulationValue_53.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_53);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_2;
      FIX::LegSettlType LegSettlType_26('6');
      noLegs_0_1_2.set(LegSettlType_26);
      InstrmtLegSecListGrp_NoLegs_2.insert(LegSettlType_26.getString());
      FIX::LegSwapType LegSwapType_26(4);
      noLegs_0_1_2.set(LegSwapType_26);
      InstrmtLegSecListGrp_NoLegs_2.insert(LegSwapType_26.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_2);

      // InstrumentLeg
      multiset<string> InstrumentLeg_131;
      FIX::EncodedLegIssuer EncodedLegIssuer_131("DATA_1439778469");
      noLegs_0_1_2.set(EncodedLegIssuer_131);
      InstrumentLeg_131.insert(EncodedLegIssuer_131.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_131(977805192);
      noLegs_0_1_2.set(EncodedLegIssuerLen_131);
      InstrumentLeg_131.insert(EncodedLegIssuerLen_131.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_131("DATA_968211985");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_131);
      InstrumentLeg_131.insert(EncodedLegSecurityDesc_131.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_131(2072491136);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_131);
      InstrumentLeg_131.insert(EncodedLegSecurityDescLen_131.getString());
      FIX::LegCFICode LegCFICode_131("STRING_1846879514");
      noLegs_0_1_2.set(LegCFICode_131);
      InstrumentLeg_131.insert(LegCFICode_131.getString());
      FIX::LegContractMultiplier LegContractMultiplier_131;
      LegContractMultiplier_131.setString("15566781");
      noLegs_0_1_2.set(LegContractMultiplier_131);
      InstrumentLeg_131.insert(LegContractMultiplier_131.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_131(513127828);
      noLegs_0_1_2.set(LegContractMultiplierUnit_131);
      InstrumentLeg_131.insert(LegContractMultiplierUnit_131.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_131("MONTHYEAR_514428961");
      noLegs_0_1_2.set(LegContractSettlMonth_131);
      InstrumentLeg_131.insert(LegContractSettlMonth_131.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_131("COUNTRY_1194860021");
      noLegs_0_1_2.set(LegCountryOfIssue_131);
      InstrumentLeg_131.insert(LegCountryOfIssue_131.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_131("LOCALMKTDATE_1157766864");
      noLegs_0_1_2.set(LegCouponPaymentDate_131);
      InstrumentLeg_131.insert(LegCouponPaymentDate_131.getString());
      FIX::LegCouponRate LegCouponRate_131;
      LegCouponRate_131.setString("92.940000");
      noLegs_0_1_2.set(LegCouponRate_131);
      InstrumentLeg_131.insert(LegCouponRate_131.getString());
      FIX::LegCreditRating LegCreditRating_131("STRING_1578423357");
      noLegs_0_1_2.set(LegCreditRating_131);
      InstrumentLeg_131.insert(LegCreditRating_131.getString());
      FIX::LegCurrency LegCurrency_131("CAN");
      noLegs_0_1_2.set(LegCurrency_131);
      InstrumentLeg_131.insert(LegCurrency_131.getString());
      FIX::LegDatedDate LegDatedDate_131("LOCALMKTDATE_960830591");
      noLegs_0_1_2.set(LegDatedDate_131);
      InstrumentLeg_131.insert(LegDatedDate_131.getString());
      FIX::LegExerciseStyle LegExerciseStyle_131(567767571);
      noLegs_0_1_2.set(LegExerciseStyle_131);
      InstrumentLeg_131.insert(LegExerciseStyle_131.getString());
      FIX::LegFactor LegFactor_131;
      LegFactor_131.setString("14551773");
      noLegs_0_1_2.set(LegFactor_131);
      InstrumentLeg_131.insert(LegFactor_131.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_131(2135072828);
      noLegs_0_1_2.set(LegFlowScheduleType_131);
      InstrumentLeg_131.insert(LegFlowScheduleType_131.getString());
      FIX::LegInstrRegistry LegInstrRegistry_131("STRING_827806246");
      noLegs_0_1_2.set(LegInstrRegistry_131);
      InstrumentLeg_131.insert(LegInstrRegistry_131.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_131("LOCALMKTDATE_964923063");
      noLegs_0_1_2.set(LegInterestAccrualDate_131);
      InstrumentLeg_131.insert(LegInterestAccrualDate_131.getString());
      FIX::LegIssueDate LegIssueDate_131("LOCALMKTDATE_2110930263");
      noLegs_0_1_2.set(LegIssueDate_131);
      InstrumentLeg_131.insert(LegIssueDate_131.getString());
      FIX::LegIssuer LegIssuer_131("STRING_1847693508");
      noLegs_0_1_2.set(LegIssuer_131);
      InstrumentLeg_131.insert(LegIssuer_131.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_131("STRING_447955706");
      noLegs_0_1_2.set(LegLocaleOfIssue_131);
      InstrumentLeg_131.insert(LegLocaleOfIssue_131.getString());
      FIX::LegMaturityDate LegMaturityDate_131("LOCALMKTDATE_1826745182");
      noLegs_0_1_2.set(LegMaturityDate_131);
      InstrumentLeg_131.insert(LegMaturityDate_131.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_131("MONTHYEAR_2045878150");
      noLegs_0_1_2.set(LegMaturityMonthYear_131);
      InstrumentLeg_131.insert(LegMaturityMonthYear_131.getString());
      FIX::LegMaturityTime LegMaturityTime_131("TZTIMEONLY_1746172286");
      noLegs_0_1_2.set(LegMaturityTime_131);
      InstrumentLeg_131.insert(LegMaturityTime_131.getString());
      FIX::LegOptAttribute LegOptAttribute_131('5');
      noLegs_0_1_2.set(LegOptAttribute_131);
      InstrumentLeg_131.insert(LegOptAttribute_131.getString());
      FIX::LegOptionRatio LegOptionRatio_131;
      LegOptionRatio_131.setString("6942301");
      noLegs_0_1_2.set(LegOptionRatio_131);
      InstrumentLeg_131.insert(LegOptionRatio_131.getString());
      FIX::LegPool LegPool_131("STRING_339097093");
      noLegs_0_1_2.set(LegPool_131);
      InstrumentLeg_131.insert(LegPool_131.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_131("STRING_1169829249");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_131);
      InstrumentLeg_131.insert(LegPriceUnitOfMeasure_131.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_131;
      LegPriceUnitOfMeasureQty_131.setString("1839246");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_131);
      InstrumentLeg_131.insert(LegPriceUnitOfMeasureQty_131.getString());
      FIX::LegProduct LegProduct_131(1778875562);
      noLegs_0_1_2.set(LegProduct_131);
      InstrumentLeg_131.insert(LegProduct_131.getString());
      FIX::LegPutOrCall LegPutOrCall_131(150793);
      noLegs_0_1_2.set(LegPutOrCall_131);
      InstrumentLeg_131.insert(LegPutOrCall_131.getString());
      FIX::LegRatioQty LegRatioQty_131;
      LegRatioQty_131.setString("11521365");
      noLegs_0_1_2.set(LegRatioQty_131);
      InstrumentLeg_131.insert(LegRatioQty_131.getString());
      FIX::LegRedemptionDate LegRedemptionDate_131("LOCALMKTDATE_1703883051");
      noLegs_0_1_2.set(LegRedemptionDate_131);
      InstrumentLeg_131.insert(LegRedemptionDate_131.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_131("STRING_1847030307");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_131);
      InstrumentLeg_131.insert(LegRepoCollateralSecurityType_131.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_131;
      LegRepurchaseRate_131.setString("11.370000");
      noLegs_0_1_2.set(LegRepurchaseRate_131);
      InstrumentLeg_131.insert(LegRepurchaseRate_131.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_131(69527231);
      noLegs_0_1_2.set(LegRepurchaseTerm_131);
      InstrumentLeg_131.insert(LegRepurchaseTerm_131.getString());
      FIX::LegSecurityDesc LegSecurityDesc_131("STRING_213975620");
      noLegs_0_1_2.set(LegSecurityDesc_131);
      InstrumentLeg_131.insert(LegSecurityDesc_131.getString());
      FIX::LegSecurityExchange LegSecurityExchange_131("EXCHANGE_1756191159");
      noLegs_0_1_2.set(LegSecurityExchange_131);
      InstrumentLeg_131.insert(LegSecurityExchange_131.getString());
      FIX::LegSecurityID LegSecurityID_131("STRING_1227294095");
      noLegs_0_1_2.set(LegSecurityID_131);
      InstrumentLeg_131.insert(LegSecurityID_131.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_131("STRING_1819964915");
      noLegs_0_1_2.set(LegSecurityIDSource_131);
      InstrumentLeg_131.insert(LegSecurityIDSource_131.getString());
      FIX::LegSecuritySubType LegSecuritySubType_131("STRING_1187130868");
      noLegs_0_1_2.set(LegSecuritySubType_131);
      InstrumentLeg_131.insert(LegSecuritySubType_131.getString());
      FIX::LegSecurityType LegSecurityType_131("STRING_2104369726");
      noLegs_0_1_2.set(LegSecurityType_131);
      InstrumentLeg_131.insert(LegSecurityType_131.getString());
      FIX::LegSide LegSide_131('1');
      noLegs_0_1_2.set(LegSide_131);
      InstrumentLeg_131.insert(LegSide_131.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_131("STRING_477811");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_131);
      InstrumentLeg_131.insert(LegStateOrProvinceOfIssue_131.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_131("USD");
      noLegs_0_1_2.set(LegStrikeCurrency_131);
      InstrumentLeg_131.insert(LegStrikeCurrency_131.getString());
      FIX::LegStrikePrice LegStrikePrice_131;
      LegStrikePrice_131.setString("21355506");
      noLegs_0_1_2.set(LegStrikePrice_131);
      InstrumentLeg_131.insert(LegStrikePrice_131.getString());
      FIX::LegSymbol LegSymbol_131("STRING_1352459896");
      noLegs_0_1_2.set(LegSymbol_131);
      InstrumentLeg_131.insert(LegSymbol_131.getString());
      FIX::LegSymbolSfx LegSymbolSfx_131("STRING_1976326503");
      noLegs_0_1_2.set(LegSymbolSfx_131);
      InstrumentLeg_131.insert(LegSymbolSfx_131.getString());
      FIX::LegTimeUnit LegTimeUnit_131("STRING_2098997255");
      noLegs_0_1_2.set(LegTimeUnit_131);
      InstrumentLeg_131.insert(LegTimeUnit_131.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_131("STRING_1052669756");
      noLegs_0_1_2.set(LegUnitOfMeasure_131);
      InstrumentLeg_131.insert(LegUnitOfMeasure_131.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_131;
      LegUnitOfMeasureQty_131.setString("2767985");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_131);
      InstrumentLeg_131.insert(LegUnitOfMeasureQty_131.getString());
      all_values.push_back(InstrumentLeg_131);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_252;
        FIX::LegSecurityAltID LegSecurityAltID_252("STRING_951064258");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_252);
        LegSecAltIDGrp_NoLegSecurityAltID_252.insert(LegSecurityAltID_252.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_252("STRING_2022970847");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_252);
        LegSecAltIDGrp_NoLegSecurityAltID_252.insert(LegSecurityAltIDSource_252.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_252);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_253;
        FIX::LegSecurityAltID LegSecurityAltID_253("STRING_189485335");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_253);
        LegSecAltIDGrp_NoLegSecurityAltID_253.insert(LegSecurityAltID_253.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_253("STRING_1645294436");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_253);
        LegSecAltIDGrp_NoLegSecurityAltID_253.insert(LegSecurityAltIDSource_253.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_253);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_254;
        FIX::LegSecurityAltID LegSecurityAltID_254("STRING_214584292");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltID_254);
        LegSecAltIDGrp_NoLegSecurityAltID_254.insert(LegSecurityAltID_254.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_254("STRING_1359314584");
        noLegSecurityAltID_0_2_2_2.set(LegSecurityAltIDSource_254);
        LegSecAltIDGrp_NoLegSecurityAltID_254.insert(LegSecurityAltIDSource_254.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_254);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_14;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_14("EUR");
      noLegs_0_1_2.set(LegBenchmarkCurveCurrency_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurveCurrency_14.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_14("STRING_1359465377");
      noLegs_0_1_2.set(LegBenchmarkCurveName_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurveName_14.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_14("STRING_833871997");
      noLegs_0_1_2.set(LegBenchmarkCurvePoint_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurvePoint_14.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_14;
      LegBenchmarkPrice_14.setString("15498592");
      noLegs_0_1_2.set(LegBenchmarkPrice_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkPrice_14.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_14(1059012036);
      noLegs_0_1_2.set(LegBenchmarkPriceType_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkPriceType_14.getString());
      all_values.push_back(LegBenchmarkCurveData_14);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_54;
        FIX::LegStipulationType LegStipulationType_54("STRING_1619386489");
        noLegStipulations_0_2_2_0.set(LegStipulationType_54);
        LegStipulations_NoLegStipulations_54.insert(LegStipulationType_54.getString());
        FIX::LegStipulationValue LegStipulationValue_54("STRING_1272987657");
        noLegStipulations_0_2_2_0.set(LegStipulationValue_54);
        LegStipulations_NoLegStipulations_54.insert(LegStipulationValue_54.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_54);

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_55;
        FIX::LegStipulationType LegStipulationType_55("STRING_1003910645");
        noLegStipulations_0_2_2_1.set(LegStipulationType_55);
        LegStipulations_NoLegStipulations_55.insert(LegStipulationType_55.getString());
        FIX::LegStipulationValue LegStipulationValue_55("STRING_699196937");
        noLegStipulations_0_2_2_1.set(LegStipulationValue_55);
        LegStipulations_NoLegStipulations_55.insert(LegStipulationValue_55.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_55);

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_82;
    FIX::AttachmentPoint AttachmentPoint_82;
    AttachmentPoint_82.setString("89.240000");
    noRelatedSym_0_0.set(AttachmentPoint_82);
    Instrument_82.insert(AttachmentPoint_82.getString());
    FIX::CFICode CFICode_82("STRING_43557865");
    noRelatedSym_0_0.set(CFICode_82);
    Instrument_82.insert(CFICode_82.getString());
    FIX::CPProgram CPProgram_82(2);
    noRelatedSym_0_0.set(CPProgram_82);
    Instrument_82.insert(CPProgram_82.getString());
    FIX::CPRegType CPRegType_82("STRING_501694968");
    noRelatedSym_0_0.set(CPRegType_82);
    Instrument_82.insert(CPRegType_82.getString());
    FIX::CapPrice CapPrice_82;
    CapPrice_82.setString("440356");
    noRelatedSym_0_0.set(CapPrice_82);
    Instrument_82.insert(CapPrice_82.getString());
    FIX::ContractMultiplier ContractMultiplier_82;
    ContractMultiplier_82.setString("11807366");
    noRelatedSym_0_0.set(ContractMultiplier_82);
    Instrument_82.insert(ContractMultiplier_82.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_82(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_82);
    Instrument_82.insert(ContractMultiplierUnit_82.getString());
    FIX::ContractSettlMonth ContractSettlMonth_82("MONTHYEAR_32102668");
    noRelatedSym_0_0.set(ContractSettlMonth_82);
    Instrument_82.insert(ContractSettlMonth_82.getString());
    FIX::CountryOfIssue CountryOfIssue_82("COUNTRY_385712912");
    noRelatedSym_0_0.set(CountryOfIssue_82);
    Instrument_82.insert(CountryOfIssue_82.getString());
    FIX::CouponPaymentDate CouponPaymentDate_82("LOCALMKTDATE_1341941263");
    noRelatedSym_0_0.set(CouponPaymentDate_82);
    Instrument_82.insert(CouponPaymentDate_82.getString());
    FIX::CouponRate CouponRate_82;
    CouponRate_82.setString("99.230000");
    noRelatedSym_0_0.set(CouponRate_82);
    Instrument_82.insert(CouponRate_82.getString());
    FIX::CreditRating CreditRating_82("STRING_1438382668");
    noRelatedSym_0_0.set(CreditRating_82);
    Instrument_82.insert(CreditRating_82.getString());
    FIX::DatedDate DatedDate_82("LOCALMKTDATE_1618739824");
    noRelatedSym_0_0.set(DatedDate_82);
    Instrument_82.insert(DatedDate_82.getString());
    FIX::DetachmentPoint DetachmentPoint_82;
    DetachmentPoint_82.setString("50.650000");
    noRelatedSym_0_0.set(DetachmentPoint_82);
    Instrument_82.insert(DetachmentPoint_82.getString());
    FIX::EncodedIssuer EncodedIssuer_82("DATA_241963279");
    noRelatedSym_0_0.set(EncodedIssuer_82);
    Instrument_82.insert(EncodedIssuer_82.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_82(1494227024);
    noRelatedSym_0_0.set(EncodedIssuerLen_82);
    Instrument_82.insert(EncodedIssuerLen_82.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_82("DATA_1951360400");
    noRelatedSym_0_0.set(EncodedSecurityDesc_82);
    Instrument_82.insert(EncodedSecurityDesc_82.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_82(1887257715);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_82);
    Instrument_82.insert(EncodedSecurityDescLen_82.getString());
    FIX::ExerciseStyle ExerciseStyle_82(0);
    noRelatedSym_0_0.set(ExerciseStyle_82);
    Instrument_82.insert(ExerciseStyle_82.getString());
    FIX::Factor Factor_82;
    Factor_82.setString("11631913");
    noRelatedSym_0_0.set(Factor_82);
    Instrument_82.insert(Factor_82.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_82(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_82);
    Instrument_82.insert(FlexProductEligibilityIndicator_82.getString());
    FIX::FlexibleIndicator FlexibleIndicator_82(false);
    noRelatedSym_0_0.set(FlexibleIndicator_82);
    Instrument_82.insert(FlexibleIndicator_82.getString());
    FIX::FloorPrice FloorPrice_82;
    FloorPrice_82.setString("3751730");
    noRelatedSym_0_0.set(FloorPrice_82);
    Instrument_82.insert(FloorPrice_82.getString());
    FIX::FlowScheduleType FlowScheduleType_82(4);
    noRelatedSym_0_0.set(FlowScheduleType_82);
    Instrument_82.insert(FlowScheduleType_82.getString());
    FIX::InstrRegistry InstrRegistry_82("STRING_957163133");
    noRelatedSym_0_0.set(InstrRegistry_82);
    Instrument_82.insert(InstrRegistry_82.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_82('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_82);
    Instrument_82.insert(InstrmtAssignmentMethod_82.getString());
    FIX::InterestAccrualDate InterestAccrualDate_82("LOCALMKTDATE_1650584598");
    noRelatedSym_0_0.set(InterestAccrualDate_82);
    Instrument_82.insert(InterestAccrualDate_82.getString());
    FIX::IssueDate IssueDate_82("LOCALMKTDATE_429065975");
    noRelatedSym_0_0.set(IssueDate_82);
    Instrument_82.insert(IssueDate_82.getString());
    FIX::Issuer Issuer_82("STRING_559689112");
    noRelatedSym_0_0.set(Issuer_82);
    Instrument_82.insert(Issuer_82.getString());
    FIX::ListMethod ListMethod_82(0);
    noRelatedSym_0_0.set(ListMethod_82);
    Instrument_82.insert(ListMethod_82.getString());
    FIX::LocaleOfIssue LocaleOfIssue_82("STRING_1128262912");
    noRelatedSym_0_0.set(LocaleOfIssue_82);
    Instrument_82.insert(LocaleOfIssue_82.getString());
    FIX::MaturityDate MaturityDate_82("LOCALMKTDATE_1505158036");
    noRelatedSym_0_0.set(MaturityDate_82);
    Instrument_82.insert(MaturityDate_82.getString());
    FIX::MaturityMonthYear MaturityMonthYear_82("MONTHYEAR_550569461");
    noRelatedSym_0_0.set(MaturityMonthYear_82);
    Instrument_82.insert(MaturityMonthYear_82.getString());
    FIX::MaturityTime MaturityTime_82("TZTIMEONLY_1784345927");
    noRelatedSym_0_0.set(MaturityTime_82);
    Instrument_82.insert(MaturityTime_82.getString());
    FIX::MinPriceIncrement MinPriceIncrement_82;
    MinPriceIncrement_82.setString("20068530");
    noRelatedSym_0_0.set(MinPriceIncrement_82);
    Instrument_82.insert(MinPriceIncrement_82.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_82;
    MinPriceIncrementAmount_82.setString("5946051");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_82);
    Instrument_82.insert(MinPriceIncrementAmount_82.getString());
    FIX::NTPositionLimit NTPositionLimit_82(817598943);
    noRelatedSym_0_0.set(NTPositionLimit_82);
    Instrument_82.insert(NTPositionLimit_82.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_82;
    NotionalPercentageOutstanding_82.setString("77.640000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_82);
    Instrument_82.insert(NotionalPercentageOutstanding_82.getString());
    FIX::OptAttribute OptAttribute_82('6');
    noRelatedSym_0_0.set(OptAttribute_82);
    Instrument_82.insert(OptAttribute_82.getString());
    FIX::OptPayoutAmount OptPayoutAmount_82;
    OptPayoutAmount_82.setString("12033118");
    noRelatedSym_0_0.set(OptPayoutAmount_82);
    Instrument_82.insert(OptPayoutAmount_82.getString());
    FIX::OptPayoutType OptPayoutType_82(2);
    noRelatedSym_0_0.set(OptPayoutType_82);
    Instrument_82.insert(OptPayoutType_82.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_82;
    OriginalNotionalPercentageOutstanding_82.setString("40.820000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_82);
    Instrument_82.insert(OriginalNotionalPercentageOutstanding_82.getString());
    FIX::Pool Pool_82("STRING_494210876");
    noRelatedSym_0_0.set(Pool_82);
    Instrument_82.insert(Pool_82.getString());
    FIX::PositionLimit PositionLimit_82(38181555);
    noRelatedSym_0_0.set(PositionLimit_82);
    Instrument_82.insert(PositionLimit_82.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_82("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_82);
    Instrument_82.insert(PriceQuoteMethod_82.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_82("STRING_736174155");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_82);
    Instrument_82.insert(PriceUnitOfMeasure_82.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_82;
    PriceUnitOfMeasureQty_82.setString("15324085");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_82);
    Instrument_82.insert(PriceUnitOfMeasureQty_82.getString());
    FIX::Product Product_84(1);
    noRelatedSym_0_0.set(Product_84);
    Instrument_82.insert(Product_84.getString());
    FIX::ProductComplex ProductComplex_82("STRING_475948222");
    noRelatedSym_0_0.set(ProductComplex_82);
    Instrument_82.insert(ProductComplex_82.getString());
    FIX::PutOrCall PutOrCall_82(0);
    noRelatedSym_0_0.set(PutOrCall_82);
    Instrument_82.insert(PutOrCall_82.getString());
    FIX::RedemptionDate RedemptionDate_82("LOCALMKTDATE_1191783589");
    noRelatedSym_0_0.set(RedemptionDate_82);
    Instrument_82.insert(RedemptionDate_82.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_82("STRING_2044941337");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_82);
    Instrument_82.insert(RepoCollateralSecurityType_82.getString());
    FIX::RepurchaseRate RepurchaseRate_82;
    RepurchaseRate_82.setString("1.230000");
    noRelatedSym_0_0.set(RepurchaseRate_82);
    Instrument_82.insert(RepurchaseRate_82.getString());
    FIX::RepurchaseTerm RepurchaseTerm_82(1566956655);
    noRelatedSym_0_0.set(RepurchaseTerm_82);
    Instrument_82.insert(RepurchaseTerm_82.getString());
    FIX::RestructuringType RestructuringType_82("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_82);
    Instrument_82.insert(RestructuringType_82.getString());
    FIX::SecurityDesc SecurityDesc_82("STRING_1458203257");
    noRelatedSym_0_0.set(SecurityDesc_82);
    Instrument_82.insert(SecurityDesc_82.getString());
    FIX::SecurityExchange SecurityExchange_82("EXCHANGE_853658110");
    noRelatedSym_0_0.set(SecurityExchange_82);
    Instrument_82.insert(SecurityExchange_82.getString());
    FIX::SecurityGroup SecurityGroup_82("STRING_1803423752");
    noRelatedSym_0_0.set(SecurityGroup_82);
    Instrument_82.insert(SecurityGroup_82.getString());
    FIX::SecurityID SecurityID_82("STRING_1887269232");
    noRelatedSym_0_0.set(SecurityID_82);
    Instrument_82.insert(SecurityID_82.getString());
    FIX::SecurityIDSource SecurityIDSource_82("STRING_D");
    noRelatedSym_0_0.set(SecurityIDSource_82);
    Instrument_82.insert(SecurityIDSource_82.getString());
    FIX::SecurityStatus SecurityStatus_82("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_82);
    Instrument_82.insert(SecurityStatus_82.getString());
    FIX::SecuritySubType SecuritySubType_83("STRING_868048496");
    noRelatedSym_0_0.set(SecuritySubType_83);
    Instrument_82.insert(SecuritySubType_83.getString());
    FIX::SecurityType SecurityType_84("STRING_DEFLTED");
    noRelatedSym_0_0.set(SecurityType_84);
    Instrument_82.insert(SecurityType_84.getString());
    FIX::Seniority Seniority_82("STRING_SD");
    noRelatedSym_0_0.set(Seniority_82);
    Instrument_82.insert(Seniority_82.getString());
    FIX::SettlMethod SettlMethod_82('P');
    noRelatedSym_0_0.set(SettlMethod_82);
    Instrument_82.insert(SettlMethod_82.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_82("STRING_630390966");
    noRelatedSym_0_0.set(SettleOnOpenFlag_82);
    Instrument_82.insert(SettleOnOpenFlag_82.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_82("STRING_1308126300");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_82);
    Instrument_82.insert(StateOrProvinceOfIssue_82.getString());
    FIX::StrikeCurrency StrikeCurrency_82("GBP");
    noRelatedSym_0_0.set(StrikeCurrency_82);
    Instrument_82.insert(StrikeCurrency_82.getString());
    FIX::StrikeMultiplier StrikeMultiplier_82;
    StrikeMultiplier_82.setString("19348341");
    noRelatedSym_0_0.set(StrikeMultiplier_82);
    Instrument_82.insert(StrikeMultiplier_82.getString());
    FIX::StrikePrice StrikePrice_82;
    StrikePrice_82.setString("3783379");
    noRelatedSym_0_0.set(StrikePrice_82);
    Instrument_82.insert(StrikePrice_82.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_82(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_82);
    Instrument_82.insert(StrikePriceBoundaryMethod_82.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_82;
    StrikePriceBoundaryPrecision_82.setString("45.410000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_82);
    Instrument_82.insert(StrikePriceBoundaryPrecision_82.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_82(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_82);
    Instrument_82.insert(StrikePriceDeterminationMethod_82.getString());
    FIX::StrikeValue StrikeValue_82;
    StrikeValue_82.setString("4604820");
    noRelatedSym_0_0.set(StrikeValue_82);
    Instrument_82.insert(StrikeValue_82.getString());
    FIX::Symbol Symbol_82("STRING_622390041");
    noRelatedSym_0_0.set(Symbol_82);
    Instrument_82.insert(Symbol_82.getString());
    FIX::SymbolSfx SymbolSfx_82("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_82);
    Instrument_82.insert(SymbolSfx_82.getString());
    FIX::TimeUnit TimeUnit_82("STRING_Wk");
    noRelatedSym_0_0.set(TimeUnit_82);
    Instrument_82.insert(TimeUnit_82.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_82(2);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_82);
    Instrument_82.insert(UnderlyingPriceDeterminationMethod_82.getString());
    FIX::UnitOfMeasure UnitOfMeasure_82("STRING_oz_tr");
    noRelatedSym_0_0.set(UnitOfMeasure_82);
    Instrument_82.insert(UnitOfMeasure_82.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_82;
    UnitOfMeasureQty_82.setString("9391431");
    noRelatedSym_0_0.set(UnitOfMeasureQty_82);
    Instrument_82.insert(UnitOfMeasureQty_82.getString());
    FIX::ValuationMethod ValuationMethod_82("STRING_FUTDA");
    noRelatedSym_0_0.set(ValuationMethod_82);
    Instrument_82.insert(ValuationMethod_82.getString());
    all_values.push_back(Instrument_82);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_154;
      FIX::ComplexEventCondition ComplexEventCondition_154(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventCondition_154.getString());
      FIX::ComplexEventPrice ComplexEventPrice_154;
      ComplexEventPrice_154.setString("12622388");
      noComplexEvents_0_1_0.set(ComplexEventPrice_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventPrice_154.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_154(5);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceBoundaryMethod_154.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_154;
      ComplexEventPriceBoundaryPrecision_154.setString("29.290000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceBoundaryPrecision_154.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_154(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceTimeType_154.getString());
      FIX::ComplexEventType ComplexEventType_154(1);
      noComplexEvents_0_1_0.set(ComplexEventType_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventType_154.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_154;
      ComplexOptPayoutAmount_154.setString("4906885");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexOptPayoutAmount_154.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_154);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_316;
        FIX::ComplexEventEndDate ComplexEventEndDate_316(FIX::UTCTIMESTAMP(1, 57, 41, 12, 4, 2017));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_316);
        ComplexEventDates_NoComplexEventDates_316.insert(ComplexEventEndDate_316.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_316(FIX::UTCTIMESTAMP(10, 40, 1, 7, 7, 2002));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_316);
        ComplexEventDates_NoComplexEventDates_316.insert(ComplexEventStartDate_316.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_316);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_635;
          FIX::ComplexEventEndTime ComplexEventEndTime_635(FIX::UTCTIMEONLY(14, 13, 48));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_635);
          ComplexEventTimes_NoComplexEventTimes_635.insert(ComplexEventEndTime_635.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_635(FIX::UTCTIMEONLY(17, 22, 50));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_635);
          ComplexEventTimes_NoComplexEventTimes_635.insert(ComplexEventStartTime_635.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_635);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_636;
          FIX::ComplexEventEndTime ComplexEventEndTime_636(FIX::UTCTIMEONLY(11, 6, 42));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_636);
          ComplexEventTimes_NoComplexEventTimes_636.insert(ComplexEventEndTime_636.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_636(FIX::UTCTIMEONLY(10, 35, 50));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_636);
          ComplexEventTimes_NoComplexEventTimes_636.insert(ComplexEventStartTime_636.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_636);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_155;
      FIX::ComplexEventCondition ComplexEventCondition_155(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventCondition_155.getString());
      FIX::ComplexEventPrice ComplexEventPrice_155;
      ComplexEventPrice_155.setString("19039416");
      noComplexEvents_0_1_1.set(ComplexEventPrice_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventPrice_155.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_155(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceBoundaryMethod_155.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_155;
      ComplexEventPriceBoundaryPrecision_155.setString("50.270000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceBoundaryPrecision_155.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_155(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceTimeType_155.getString());
      FIX::ComplexEventType ComplexEventType_155(3);
      noComplexEvents_0_1_1.set(ComplexEventType_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventType_155.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_155;
      ComplexOptPayoutAmount_155.setString("11603550");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexOptPayoutAmount_155.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_155);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_317;
        FIX::ComplexEventEndDate ComplexEventEndDate_317(FIX::UTCTIMESTAMP(17, 28, 16, 3, 1, 2006));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_317);
        ComplexEventDates_NoComplexEventDates_317.insert(ComplexEventEndDate_317.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_317(FIX::UTCTIMESTAMP(6, 25, 10, 2, 8, 2000));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_317);
        ComplexEventDates_NoComplexEventDates_317.insert(ComplexEventStartDate_317.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_317);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_637;
          FIX::ComplexEventEndTime ComplexEventEndTime_637(FIX::UTCTIMEONLY(4, 58, 43));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_637);
          ComplexEventTimes_NoComplexEventTimes_637.insert(ComplexEventEndTime_637.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_637(FIX::UTCTIMEONLY(0, 18, 13));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_637);
          ComplexEventTimes_NoComplexEventTimes_637.insert(ComplexEventStartTime_637.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_637);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_638;
          FIX::ComplexEventEndTime ComplexEventEndTime_638(FIX::UTCTIMEONLY(23, 52, 21));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_638);
          ComplexEventTimes_NoComplexEventTimes_638.insert(ComplexEventEndTime_638.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_638(FIX::UTCTIMEONLY(23, 34, 34));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_638);
          ComplexEventTimes_NoComplexEventTimes_638.insert(ComplexEventStartTime_638.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_638);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_164;
      FIX::EventDate EventDate_164("LOCALMKTDATE_1038894568");
      noEvents_0_1_0.set(EventDate_164);
      EvntGrp_NoEvents_164.insert(EventDate_164.getString());
      FIX::EventPx EventPx_164;
      EventPx_164.setString("10781482");
      noEvents_0_1_0.set(EventPx_164);
      EvntGrp_NoEvents_164.insert(EventPx_164.getString());
      FIX::EventText EventText_164("STRING_255883991");
      noEvents_0_1_0.set(EventText_164);
      EvntGrp_NoEvents_164.insert(EventText_164.getString());
      FIX::EventTime EventTime_164(FIX::UTCTIMESTAMP(22, 24, 10, 25, 6, 2006));
      noEvents_0_1_0.set(EventTime_164);
      EvntGrp_NoEvents_164.insert(EventTime_164.getString());
      FIX::EventType EventType_164(4);
      noEvents_0_1_0.set(EventType_164);
      EvntGrp_NoEvents_164.insert(EventType_164.getString());
      all_values.push_back(EvntGrp_NoEvents_164);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_167;
      FIX::InstrumentPartyID InstrumentPartyID_167("STRING_1147644817");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_167);
      InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyID_167.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_167('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_167);
      InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyIDSource_167.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_167(637903781);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_167);
      InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyRole_167.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_167);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351;
        FIX::InstrumentPartySubID InstrumentPartySubID_351("STRING_135328697");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_351);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351.insert(InstrumentPartySubID_351.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_351(1649646924);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_351);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351.insert(InstrumentPartySubIDType_351.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352;
        FIX::InstrumentPartySubID InstrumentPartySubID_352("STRING_430376420");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_352);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352.insert(InstrumentPartySubID_352.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_352(1240857353);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_352);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352.insert(InstrumentPartySubIDType_352.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353;
        FIX::InstrumentPartySubID InstrumentPartySubID_353("STRING_1059111094");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_353);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353.insert(InstrumentPartySubID_353.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_353(255843206);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_353);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353.insert(InstrumentPartySubIDType_353.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_183;
      FIX::SecurityAltID SecurityAltID_183("STRING_225033301");
      noSecurityAltID_0_1_0.set(SecurityAltID_183);
      SecAltIDGrp_NoSecurityAltID_183.insert(SecurityAltID_183.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_183("STRING_1385757258");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_183);
      SecAltIDGrp_NoSecurityAltID_183.insert(SecurityAltIDSource_183.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_183);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_164;
    FIX::SecurityXML SecurityXML_165("XMLDATA_409114120");
    noRelatedSym_0_0.set(SecurityXML_165);
    FIX::SecurityXMLLen SecurityXMLLen_82(1011061329);
    noRelatedSym_0_0.set(SecurityXMLLen_82);
    FIX::SecurityXMLSchema SecurityXMLSchema_82("STRING_160840785");
    noRelatedSym_0_0.set(SecurityXMLSchema_82);
    SecurityXML_164.insert(SecurityXMLSchema_82.getString());
    all_values.push_back(SecurityXML_164);

    // InstrumentExtension
    multiset<string> InstrumentExtension_12;
    FIX::DeliveryForm DeliveryForm_12(2);
    noRelatedSym_0_0.set(DeliveryForm_12);
    InstrumentExtension_12.insert(DeliveryForm_12.getString());
    FIX::PctAtRisk PctAtRisk_12;
    PctAtRisk_12.setString("17.350000");
    noRelatedSym_0_0.set(PctAtRisk_12);
    InstrumentExtension_12.insert(PctAtRisk_12.getString());
    all_values.push_back(InstrumentExtension_12);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_25;
      FIX::InstrAttribType InstrAttribType_25(14);
      noInstrAttrib_0_1_0.set(InstrAttribType_25);
      AttrbGrp_NoInstrAttrib_25.insert(InstrAttribType_25.getString());
      FIX::InstrAttribValue InstrAttribValue_25("STRING_1239049950");
      noInstrAttrib_0_1_0.set(InstrAttribValue_25);
      AttrbGrp_NoInstrAttrib_25.insert(InstrAttribValue_25.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_25);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_26;
      FIX::InstrAttribType InstrAttribType_26(1);
      noInstrAttrib_0_1_1.set(InstrAttribType_26);
      AttrbGrp_NoInstrAttrib_26.insert(InstrAttribType_26.getString());
      FIX::InstrAttribValue InstrAttribValue_26("STRING_1243879170");
      noInstrAttrib_0_1_1.set(InstrAttribValue_26);
      AttrbGrp_NoInstrAttrib_26.insert(InstrAttribValue_26.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_26);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_8;
    FIX::ExpirationCycle ExpirationCycle_9(2);
    noRelatedSym_0_0.set(ExpirationCycle_9);
    BaseTradingRules_8.insert(ExpirationCycle_9.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_8(0);
    noRelatedSym_0_0.set(ImpliedMarketIndicator_8);
    BaseTradingRules_8.insert(ImpliedMarketIndicator_8.getString());
    FIX::MaxPriceVariation MaxPriceVariation_8;
    MaxPriceVariation_8.setString("16108660");
    noRelatedSym_0_0.set(MaxPriceVariation_8);
    BaseTradingRules_8.insert(MaxPriceVariation_8.getString());
    FIX::MaxTradeVol MaxTradeVol_8;
    MaxTradeVol_8.setString("6198822");
    noRelatedSym_0_0.set(MaxTradeVol_8);
    BaseTradingRules_8.insert(MaxTradeVol_8.getString());
    FIX::MinTradeVol MinTradeVol_8;
    MinTradeVol_8.setString("3294028");
    noRelatedSym_0_0.set(MinTradeVol_8);
    BaseTradingRules_8.insert(MinTradeVol_8.getString());
    FIX::MultilegModel MultilegModel_10(2);
    noRelatedSym_0_0.set(MultilegModel_10);
    BaseTradingRules_8.insert(MultilegModel_10.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_10(4);
    noRelatedSym_0_0.set(MultilegPriceMethod_10);
    BaseTradingRules_8.insert(MultilegPriceMethod_10.getString());
    FIX::PriceType PriceType_39(3);
    noRelatedSym_0_0.set(PriceType_39);
    BaseTradingRules_8.insert(PriceType_39.getString());
    FIX::RoundLot RoundLot_8;
    RoundLot_8.setString("9512333");
    noRelatedSym_0_0.set(RoundLot_8);
    BaseTradingRules_8.insert(RoundLot_8.getString());
    FIX::TradingCurrency TradingCurrency_8("EUR");
    noRelatedSym_0_0.set(TradingCurrency_8);
    BaseTradingRules_8.insert(TradingCurrency_8.getString());
    all_values.push_back(BaseTradingRules_8);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_15;
      FIX::LotType LotType_18('1');
      noLotTypeRules_0_1_0.set(LotType_18);
      LotTypeRules_NoLotTypeRules_15.insert(LotType_18.getString());
      FIX::MinLotSize MinLotSize_15;
      MinLotSize_15.setString("1501467");
      noLotTypeRules_0_1_0.set(MinLotSize_15);
      LotTypeRules_NoLotTypeRules_15.insert(MinLotSize_15.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_15);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_16;
      FIX::LotType LotType_19('4');
      noLotTypeRules_0_1_1.set(LotType_19);
      LotTypeRules_NoLotTypeRules_16.insert(LotType_19.getString());
      FIX::MinLotSize MinLotSize_16;
      MinLotSize_16.setString("17733976");
      noLotTypeRules_0_1_1.set(MinLotSize_16);
      LotTypeRules_NoLotTypeRules_16.insert(MinLotSize_16.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_16);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_8;
    FIX::HighLimitPrice HighLimitPrice_8;
    HighLimitPrice_8.setString("12092578");
    noRelatedSym_0_0.set(HighLimitPrice_8);
    PriceLimits_8.insert(HighLimitPrice_8.getString());
    FIX::LowLimitPrice LowLimitPrice_8;
    LowLimitPrice_8.setString("13940276");
    noRelatedSym_0_0.set(LowLimitPrice_8);
    PriceLimits_8.insert(LowLimitPrice_8.getString());
    FIX::PriceLimitType PriceLimitType_8(0);
    noRelatedSym_0_0.set(PriceLimitType_8);
    PriceLimits_8.insert(PriceLimitType_8.getString());
    FIX::TradingReferencePrice TradingReferencePrice_8;
    TradingReferencePrice_8.setString("14342911");
    noRelatedSym_0_0.set(TradingReferencePrice_8);
    PriceLimits_8.insert(TradingReferencePrice_8.getString());
    all_values.push_back(PriceLimits_8);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_14;
      FIX::EndTickPriceRange EndTickPriceRange_14;
      EndTickPriceRange_14.setString("11938481");
      noTickRules_0_1_0.set(EndTickPriceRange_14);
      TickRules_NoTickRules_14.insert(EndTickPriceRange_14.getString());
      FIX::StartTickPriceRange StartTickPriceRange_14;
      StartTickPriceRange_14.setString("2978688");
      noTickRules_0_1_0.set(StartTickPriceRange_14);
      TickRules_NoTickRules_14.insert(StartTickPriceRange_14.getString());
      FIX::TickIncrement TickIncrement_14;
      TickIncrement_14.setString("7931420");
      noTickRules_0_1_0.set(TickIncrement_14);
      TickRules_NoTickRules_14.insert(TickIncrement_14.getString());
      FIX::TickRuleType TickRuleType_14(2);
      noTickRules_0_1_0.set(TickRuleType_14);
      TickRules_NoTickRules_14.insert(TickRuleType_14.getString());
      all_values.push_back(TickRules_NoTickRules_14);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_15;
      FIX::EndTickPriceRange EndTickPriceRange_15;
      EndTickPriceRange_15.setString("4587705");
      noTickRules_0_1_1.set(EndTickPriceRange_15);
      TickRules_NoTickRules_15.insert(EndTickPriceRange_15.getString());
      FIX::StartTickPriceRange StartTickPriceRange_15;
      StartTickPriceRange_15.setString("127840");
      noTickRules_0_1_1.set(StartTickPriceRange_15);
      TickRules_NoTickRules_15.insert(StartTickPriceRange_15.getString());
      FIX::TickIncrement TickIncrement_15;
      TickIncrement_15.setString("17247855");
      noTickRules_0_1_1.set(TickIncrement_15);
      TickRules_NoTickRules_15.insert(TickIncrement_15.getString());
      FIX::TickRuleType TickRuleType_15(3);
      noTickRules_0_1_1.set(TickRuleType_15);
      TickRules_NoTickRules_15.insert(TickRuleType_15.getString());
      all_values.push_back(TickRules_NoTickRules_15);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_11;
      FIX::NestedInstrAttribType NestedInstrAttribType_11(821181029);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_11);
      NestedInstrumentAttribute_NoNestedInstrAttrib_11.insert(NestedInstrAttribType_11.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_11("STRING_1790436110");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_11);
      NestedInstrumentAttribute_NoNestedInstrAttrib_11.insert(NestedInstrAttribValue_11.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_11);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_12;
      FIX::NestedInstrAttribType NestedInstrAttribType_12(1790649899);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_12);
      NestedInstrumentAttribute_NoNestedInstrAttrib_12.insert(NestedInstrAttribType_12.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_12("STRING_284563442");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_12);
      NestedInstrumentAttribute_NoNestedInstrAttrib_12.insert(NestedInstrAttribValue_12.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_12);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_12;
      FIX::TradingSessionID TradingSessionID_80("STRING_4");
      noTradingSessionRules_0_1_0.set(TradingSessionID_80);
      TradingSessionRulesGrp_NoTradingSessionRules_12.insert(TradingSessionID_80.getString());
      FIX::TradingSessionSubID TradingSessionSubID_80("STRING_4");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_80);
      TradingSessionRulesGrp_NoTradingSessionRules_12.insert(TradingSessionSubID_80.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_12);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_27;
        FIX::ExecInstValue ExecInstValue_27('2');
        noExecInstRules_0_0_2_0.set(ExecInstValue_27);
        ExecInstRules_NoExecInstRules_27.insert(ExecInstValue_27.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_27);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_28;
        FIX::ExecInstValue ExecInstValue_28('1');
        noExecInstRules_0_0_2_1.set(ExecInstValue_28);
        ExecInstRules_NoExecInstRules_28.insert(ExecInstValue_28.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_28);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_26;
        FIX::MDBookType MDBookType_28(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_28);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MDBookType_28.getString());
        FIX::MDFeedType MDFeedType_28("STRING_1747193248");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_28);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MDFeedType_28.getString());
        FIX::MarketDepth MarketDepth_29(1406456640);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_29);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MarketDepth_29.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_26);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_28;
        FIX::MatchAlgorithm MatchAlgorithm_28("STRING_737894039");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_28);
        MatchRules_NoMatchRules_28.insert(MatchAlgorithm_28.getString());
        FIX::MatchType MatchType_33("STRING_S1");
        noMatchRules_0_0_2_0.set(MatchType_33);
        MatchRules_NoMatchRules_28.insert(MatchType_33.getString());
        all_values.push_back(MatchRules_NoMatchRules_28);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_29;
        FIX::MatchAlgorithm MatchAlgorithm_29("STRING_1990036833");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_29);
        MatchRules_NoMatchRules_29.insert(MatchAlgorithm_29.getString());
        FIX::MatchType MatchType_34("STRING_M1");
        noMatchRules_0_0_2_1.set(MatchType_34);
        MatchRules_NoMatchRules_29.insert(MatchType_34.getString());
        all_values.push_back(MatchRules_NoMatchRules_29);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_30;
        FIX::MatchAlgorithm MatchAlgorithm_30("STRING_1817104666");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_30);
        MatchRules_NoMatchRules_30.insert(MatchAlgorithm_30.getString());
        FIX::MatchType MatchType_35("STRING_S3");
        noMatchRules_0_0_2_2.set(MatchType_35);
        MatchRules_NoMatchRules_30.insert(MatchType_35.getString());
        all_values.push_back(MatchRules_NoMatchRules_30);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_32;
        FIX::OrdType OrdType_61('8');
        noOrdTypeRules_0_0_2_0.set(OrdType_61);
        OrdTypeRules_NoOrdTypeRules_32.insert(OrdType_61.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_32);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_33;
        FIX::OrdType OrdType_62('2');
        noOrdTypeRules_0_0_2_1.set(OrdType_62);
        OrdTypeRules_NoOrdTypeRules_33.insert(OrdType_62.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_33);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_25;
        FIX::TimeInForce TimeInForce_36('9');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_36);
        TimeInForceRules_NoTimeInForceRules_25.insert(TimeInForce_36.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_25);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_26;
        FIX::TimeInForce TimeInForce_37('7');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_37);
        TimeInForceRules_NoTimeInForceRules_26.insert(TimeInForce_37.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_26);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_27;
        FIX::TimeInForce TimeInForce_38('7');
        noTimeInForceRules_0_0_2_2.set(TimeInForce_38);
        TimeInForceRules_NoTimeInForceRules_27.insert(TimeInForce_38.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_27);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_29;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_29("CAN");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_29);
    SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurveCurrency_29.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_29("STRING_Pfandbriefe");
    noRelatedSym_0_0.set(BenchmarkCurveName_29);
    SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurveName_29.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_29("STRING_1128079788");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_29);
    SpreadOrBenchmarkCurveData_29.insert(BenchmarkCurvePoint_29.getString());
    FIX::BenchmarkPrice BenchmarkPrice_29;
    BenchmarkPrice_29.setString("12267729");
    noRelatedSym_0_0.set(BenchmarkPrice_29);
    SpreadOrBenchmarkCurveData_29.insert(BenchmarkPrice_29.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_29(554141723);
    noRelatedSym_0_0.set(BenchmarkPriceType_29);
    SpreadOrBenchmarkCurveData_29.insert(BenchmarkPriceType_29.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_29("STRING_1412643230");
    noRelatedSym_0_0.set(BenchmarkSecurityID_29);
    SpreadOrBenchmarkCurveData_29.insert(BenchmarkSecurityID_29.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_29("STRING_1489607717");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_29);
    SpreadOrBenchmarkCurveData_29.insert(BenchmarkSecurityIDSource_29.getString());
    FIX::Spread Spread_29;
    Spread_29.setString("5267108");
    noRelatedSym_0_0.set(Spread_29);
    SpreadOrBenchmarkCurveData_29.insert(Spread_29.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_29);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_48;
      FIX::StipulationType StipulationType_48("STRING_CUSTOMDATE");
      noStipulations_0_1_0.set(StipulationType_48);
      Stipulations_NoStipulations_48.insert(StipulationType_48.getString());
      FIX::StipulationValue StipulationValue_48("STRING_509359661");
      noStipulations_0_1_0.set(StipulationValue_48);
      Stipulations_NoStipulations_48.insert(StipulationValue_48.getString());
      all_values.push_back(Stipulations_NoStipulations_48);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_49;
      FIX::StipulationType StipulationType_49("STRING_MAXSUBS");
      noStipulations_0_1_1.set(StipulationType_49);
      Stipulations_NoStipulations_49.insert(StipulationType_49.getString());
      FIX::StipulationValue StipulationValue_49("STRING_692745194");
      noStipulations_0_1_1.set(StipulationValue_49);
      Stipulations_NoStipulations_49.insert(StipulationValue_49.getString());
      all_values.push_back(Stipulations_NoStipulations_49);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_12;
      FIX::EndStrikePxRange EndStrikePxRange_12;
      EndStrikePxRange_12.setString("21398899");
      noStrikeRules_0_1_0.set(EndStrikePxRange_12);
      StrikeRules_NoStrikeRules_12.insert(EndStrikePxRange_12.getString());
      FIX::StartStrikePxRange StartStrikePxRange_12;
      StartStrikePxRange_12.setString("20992018");
      noStrikeRules_0_1_0.set(StartStrikePxRange_12);
      StrikeRules_NoStrikeRules_12.insert(StartStrikePxRange_12.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_12(1920770931);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeExerciseStyle_12.getString());
      FIX::StrikeIncrement StrikeIncrement_12;
      StrikeIncrement_12.setString("7303003");
      noStrikeRules_0_1_0.set(StrikeIncrement_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeIncrement_12.getString());
      FIX::StrikeRuleID StrikeRuleID_12("STRING_984088816");
      noStrikeRules_0_1_0.set(StrikeRuleID_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeRuleID_12.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_12);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_23;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_23("MONTHYEAR_714738414");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_23);
        MaturityRules_NoMaturityRules_23.insert(EndMaturityMonthYear_23.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_23(1);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearFormat_23.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_23(892684785);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearIncrement_23.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_23(3);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearIncrementUnits_23.getString());
        FIX::MaturityRuleID MaturityRuleID_23("STRING_1517179010");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityRuleID_23.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_23("MONTHYEAR_319914266");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_23);
        MaturityRules_NoMaturityRules_23.insert(StartMaturityMonthYear_23.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_23);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_24;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_24("MONTHYEAR_593875394");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_24);
        MaturityRules_NoMaturityRules_24.insert(EndMaturityMonthYear_24.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_24(2);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearFormat_24.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_24(205914295);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearIncrement_24.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_24(3);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearIncrementUnits_24.getString());
        FIX::MaturityRuleID MaturityRuleID_24("STRING_406191020");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityRuleID_24.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_24("MONTHYEAR_1789734822");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_24);
        MaturityRules_NoMaturityRules_24.insert(StartMaturityMonthYear_24.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_24);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_13;
      FIX::EndStrikePxRange EndStrikePxRange_13;
      EndStrikePxRange_13.setString("7800326");
      noStrikeRules_0_1_1.set(EndStrikePxRange_13);
      StrikeRules_NoStrikeRules_13.insert(EndStrikePxRange_13.getString());
      FIX::StartStrikePxRange StartStrikePxRange_13;
      StartStrikePxRange_13.setString("15342708");
      noStrikeRules_0_1_1.set(StartStrikePxRange_13);
      StrikeRules_NoStrikeRules_13.insert(StartStrikePxRange_13.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_13(869024163);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeExerciseStyle_13.getString());
      FIX::StrikeIncrement StrikeIncrement_13;
      StrikeIncrement_13.setString("13341743");
      noStrikeRules_0_1_1.set(StrikeIncrement_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeIncrement_13.getString());
      FIX::StrikeRuleID StrikeRuleID_13("STRING_799430390");
      noStrikeRules_0_1_1.set(StrikeRuleID_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeRuleID_13.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_13);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_25;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_25("MONTHYEAR_1860885191");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_25);
        MaturityRules_NoMaturityRules_25.insert(EndMaturityMonthYear_25.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_25(1);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearFormat_25.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_25(29977071);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearIncrement_25.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_25(0);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearIncrementUnits_25.getString());
        FIX::MaturityRuleID MaturityRuleID_25("STRING_545438637");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityRuleID_25.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_25("MONTHYEAR_722722265");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_25);
        MaturityRules_NoMaturityRules_25.insert(StartMaturityMonthYear_25.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_25);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_26;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_26("MONTHYEAR_1362753133");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_26);
        MaturityRules_NoMaturityRules_26.insert(EndMaturityMonthYear_26.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_26(1);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearFormat_26.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_26(674440451);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearIncrement_26.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_26(0);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearIncrementUnits_26.getString());
        FIX::MaturityRuleID MaturityRuleID_26("STRING_1268145353");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityRuleID_26.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_26("MONTHYEAR_1658529268");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_26);
        MaturityRules_NoMaturityRules_26.insert(StartMaturityMonthYear_26.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_26);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_125;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_125("DATA_1982883767");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_125);
      UnderlyingInstrument_125.insert(EncodedUnderlyingIssuer_125.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_125(164755455);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_125);
      UnderlyingInstrument_125.insert(EncodedUnderlyingIssuerLen_125.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_125("DATA_1644565670");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_125);
      UnderlyingInstrument_125.insert(EncodedUnderlyingSecurityDesc_125.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_125(1166877827);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_125);
      UnderlyingInstrument_125.insert(EncodedUnderlyingSecurityDescLen_125.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_125;
      UnderlyingAdjustedQuantity_125.setString("16819344");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_125);
      UnderlyingInstrument_125.insert(UnderlyingAdjustedQuantity_125.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_125;
      UnderlyingAllocationPercent_125.setString("99.360000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_125);
      UnderlyingInstrument_125.insert(UnderlyingAllocationPercent_125.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_125;
      UnderlyingAttachmentPoint_125.setString("32.210000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_125);
      UnderlyingInstrument_125.insert(UnderlyingAttachmentPoint_125.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_125("STRING_1781226727");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_125);
      UnderlyingInstrument_125.insert(UnderlyingCFICode_125.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_125("STRING_22910583");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_125);
      UnderlyingInstrument_125.insert(UnderlyingCPProgram_125.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_125("STRING_1629810364");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_125);
      UnderlyingInstrument_125.insert(UnderlyingCPRegType_125.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_125;
      UnderlyingCapValue_125.setString("399341");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_125);
      UnderlyingInstrument_125.insert(UnderlyingCapValue_125.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_125;
      UnderlyingCashAmount_125.setString("18126454");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_125);
      UnderlyingInstrument_125.insert(UnderlyingCashAmount_125.getString());
      FIX::UnderlyingCashType UnderlyingCashType_125("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_125);
      UnderlyingInstrument_125.insert(UnderlyingCashType_125.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_125;
      UnderlyingContractMultiplier_125.setString("15742049");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_125);
      UnderlyingInstrument_125.insert(UnderlyingContractMultiplier_125.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_125(534185920);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_125);
      UnderlyingInstrument_125.insert(UnderlyingContractMultiplierUnit_125.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_125("COUNTRY_1596533669");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_125);
      UnderlyingInstrument_125.insert(UnderlyingCountryOfIssue_125.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_125("LOCALMKTDATE_226151651");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_125);
      UnderlyingInstrument_125.insert(UnderlyingCouponPaymentDate_125.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_125;
      UnderlyingCouponRate_125.setString("41.530000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_125);
      UnderlyingInstrument_125.insert(UnderlyingCouponRate_125.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_125("STRING_1309935213");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_125);
      UnderlyingInstrument_125.insert(UnderlyingCreditRating_125.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_125("GBP");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_125);
      UnderlyingInstrument_125.insert(UnderlyingCurrency_125.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_125;
      UnderlyingCurrentValue_125.setString("15326964");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_125);
      UnderlyingInstrument_125.insert(UnderlyingCurrentValue_125.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_125;
      UnderlyingDetachmentPoint_125.setString("21.880000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_125);
      UnderlyingInstrument_125.insert(UnderlyingDetachmentPoint_125.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_125;
      UnderlyingDirtyPrice_125.setString("14980334");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_125);
      UnderlyingInstrument_125.insert(UnderlyingDirtyPrice_125.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_125;
      UnderlyingEndPrice_125.setString("7479659");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_125);
      UnderlyingInstrument_125.insert(UnderlyingEndPrice_125.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_125;
      UnderlyingEndValue_125.setString("14621771");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_125);
      UnderlyingInstrument_125.insert(UnderlyingEndValue_125.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_125(24990293);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_125);
      UnderlyingInstrument_125.insert(UnderlyingExerciseStyle_125.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_125;
      UnderlyingFXRate_125.setString("18840063");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_125);
      UnderlyingInstrument_125.insert(UnderlyingFXRate_125.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_125('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_125);
      UnderlyingInstrument_125.insert(UnderlyingFXRateCalc_125.getString());
      FIX::UnderlyingFactor UnderlyingFactor_125;
      UnderlyingFactor_125.setString("16835195");
      noUnderlyings_0_1_0.set(UnderlyingFactor_125);
      UnderlyingInstrument_125.insert(UnderlyingFactor_125.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_125(488403556);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_125);
      UnderlyingInstrument_125.insert(UnderlyingFlowScheduleType_125.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_125("STRING_418238988");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_125);
      UnderlyingInstrument_125.insert(UnderlyingInstrRegistry_125.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_125("LOCALMKTDATE_1848275016");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_125);
      UnderlyingInstrument_125.insert(UnderlyingIssueDate_125.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_125("STRING_2132969226");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_125);
      UnderlyingInstrument_125.insert(UnderlyingIssuer_125.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_125("STRING_1585116815");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_125);
      UnderlyingInstrument_125.insert(UnderlyingLocaleOfIssue_125.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_125("LOCALMKTDATE_1382725833");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_125);
      UnderlyingInstrument_125.insert(UnderlyingMaturityDate_125.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_125("MONTHYEAR_1949965514");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_125);
      UnderlyingInstrument_125.insert(UnderlyingMaturityMonthYear_125.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_125("TZTIMEONLY_1198386388");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_125);
      UnderlyingInstrument_125.insert(UnderlyingMaturityTime_125.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_125;
      UnderlyingNotionalPercentageOutstanding_125.setString("89.130000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_125);
      UnderlyingInstrument_125.insert(UnderlyingNotionalPercentageOutstanding_125.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_125('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_125);
      UnderlyingInstrument_125.insert(UnderlyingOptAttribute_125.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_125;
      UnderlyingOriginalNotionalPercentageOutstanding_125.setString("31.040000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_125);
      UnderlyingInstrument_125.insert(UnderlyingOriginalNotionalPercentageOutstanding_125.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_125("STRING_1056403013");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_125);
      UnderlyingInstrument_125.insert(UnderlyingPriceUnitOfMeasure_125.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_125;
      UnderlyingPriceUnitOfMeasureQty_125.setString("16380378");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_125);
      UnderlyingInstrument_125.insert(UnderlyingPriceUnitOfMeasureQty_125.getString());
      FIX::UnderlyingProduct UnderlyingProduct_125(943072435);
      noUnderlyings_0_1_0.set(UnderlyingProduct_125);
      UnderlyingInstrument_125.insert(UnderlyingProduct_125.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_125(483124273);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_125);
      UnderlyingInstrument_125.insert(UnderlyingPutOrCall_125.getString());
      FIX::UnderlyingPx UnderlyingPx_125;
      UnderlyingPx_125.setString("247401");
      noUnderlyings_0_1_0.set(UnderlyingPx_125);
      UnderlyingInstrument_125.insert(UnderlyingPx_125.getString());
      FIX::UnderlyingQty UnderlyingQty_125;
      UnderlyingQty_125.setString("3921224");
      noUnderlyings_0_1_0.set(UnderlyingQty_125);
      UnderlyingInstrument_125.insert(UnderlyingQty_125.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_125("LOCALMKTDATE_709275924");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_125);
      UnderlyingInstrument_125.insert(UnderlyingRedemptionDate_125.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_125("STRING_770074280");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_125);
      UnderlyingInstrument_125.insert(UnderlyingRepoCollateralSecurityType_125.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_125;
      UnderlyingRepurchaseRate_125.setString("76.690000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_125);
      UnderlyingInstrument_125.insert(UnderlyingRepurchaseRate_125.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_125(1088169475);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_125);
      UnderlyingInstrument_125.insert(UnderlyingRepurchaseTerm_125.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_125("STRING_1545385504");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_125);
      UnderlyingInstrument_125.insert(UnderlyingRestructuringType_125.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_125("STRING_1087270439");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_125);
      UnderlyingInstrument_125.insert(UnderlyingSecurityDesc_125.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_125("EXCHANGE_2012501663");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_125);
      UnderlyingInstrument_125.insert(UnderlyingSecurityExchange_125.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_125("STRING_895935346");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_125);
      UnderlyingInstrument_125.insert(UnderlyingSecurityID_125.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_125("STRING_1835236341");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_125);
      UnderlyingInstrument_125.insert(UnderlyingSecurityIDSource_125.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_125("STRING_1327195178");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_125);
      UnderlyingInstrument_125.insert(UnderlyingSecuritySubType_125.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_125("STRING_920925639");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_125);
      UnderlyingInstrument_125.insert(UnderlyingSecurityType_125.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_125("STRING_1571759012");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_125);
      UnderlyingInstrument_125.insert(UnderlyingSeniority_125.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_125("STRING_1910034047");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_125);
      UnderlyingInstrument_125.insert(UnderlyingSettlMethod_125.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_125(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_125);
      UnderlyingInstrument_125.insert(UnderlyingSettlementType_125.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_125;
      UnderlyingStartValue_125.setString("20601625");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_125);
      UnderlyingInstrument_125.insert(UnderlyingStartValue_125.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_125("STRING_180789387");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_125);
      UnderlyingInstrument_125.insert(UnderlyingStateOrProvinceOfIssue_125.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_125("JPY");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_125);
      UnderlyingInstrument_125.insert(UnderlyingStrikeCurrency_125.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_125;
      UnderlyingStrikePrice_125.setString("17659062");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_125);
      UnderlyingInstrument_125.insert(UnderlyingStrikePrice_125.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_125("STRING_1540478753");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_125);
      UnderlyingInstrument_125.insert(UnderlyingSymbol_125.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_125("STRING_1848130012");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_125);
      UnderlyingInstrument_125.insert(UnderlyingSymbolSfx_125.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_125("STRING_816808942");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_125);
      UnderlyingInstrument_125.insert(UnderlyingTimeUnit_125.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_125("STRING_409464018");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_125);
      UnderlyingInstrument_125.insert(UnderlyingUnitOfMeasure_125.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_125;
      UnderlyingUnitOfMeasureQty_125.setString("16735224");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_125);
      UnderlyingInstrument_125.insert(UnderlyingUnitOfMeasureQty_125.getString());
      all_values.push_back(UnderlyingInstrument_125);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_250;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_250("STRING_1465867031");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_250);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_250.insert(UnderlyingSecurityAltID_250.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_250("STRING_1164076667");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_250);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_250.insert(UnderlyingSecurityAltIDSource_250.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_250);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_251;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_251("STRING_293110833");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_251);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_251.insert(UnderlyingSecurityAltID_251.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_251("STRING_1948991305");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_251);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_251.insert(UnderlyingSecurityAltIDSource_251.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_251);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_237;
        FIX::UnderlyingStipType UnderlyingStipType_237("STRING_685233289");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_237);
        UnderlyingStipulations_NoUnderlyingStips_237.insert(UnderlyingStipType_237.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_237("STRING_510783581");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_237);
        UnderlyingStipulations_NoUnderlyingStips_237.insert(UnderlyingStipValue_237.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_237);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_238;
        FIX::UnderlyingStipType UnderlyingStipType_238("STRING_1958891074");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_238);
        UnderlyingStipulations_NoUnderlyingStips_238.insert(UnderlyingStipType_238.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_238("STRING_239807311");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_238);
        UnderlyingStipulations_NoUnderlyingStips_238.insert(UnderlyingStipValue_238.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_238);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_239;
        FIX::UnderlyingStipType UnderlyingStipType_239("STRING_1598953056");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_239);
        UnderlyingStipulations_NoUnderlyingStips_239.insert(UnderlyingStipType_239.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_239("STRING_1356792930");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_239);
        UnderlyingStipulations_NoUnderlyingStips_239.insert(UnderlyingStipValue_239.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_239);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_255;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_255("STRING_1463971071");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_255);
        UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyID_255.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_255('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_255);
        UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyIDSource_255.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_255(1014830443);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_255);
        UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyRole_255.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_255);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_477("STRING_1026170267");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_477);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477.insert(UnderlyingInstrumentPartySubID_477.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_477(439105808);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_477);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477.insert(UnderlyingInstrumentPartySubIDType_477.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_478("STRING_406233001");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_478);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478.insert(UnderlyingInstrumentPartySubID_478.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_478(1483131819);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_478);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478.insert(UnderlyingInstrumentPartySubIDType_478.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_126;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_126("DATA_351784728");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_126);
      UnderlyingInstrument_126.insert(EncodedUnderlyingIssuer_126.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_126(587022388);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_126);
      UnderlyingInstrument_126.insert(EncodedUnderlyingIssuerLen_126.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_126("DATA_1640884739");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_126);
      UnderlyingInstrument_126.insert(EncodedUnderlyingSecurityDesc_126.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_126(249949227);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_126);
      UnderlyingInstrument_126.insert(EncodedUnderlyingSecurityDescLen_126.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_126;
      UnderlyingAdjustedQuantity_126.setString("2054449");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_126);
      UnderlyingInstrument_126.insert(UnderlyingAdjustedQuantity_126.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_126;
      UnderlyingAllocationPercent_126.setString("98.450000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_126);
      UnderlyingInstrument_126.insert(UnderlyingAllocationPercent_126.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_126;
      UnderlyingAttachmentPoint_126.setString("92.390000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_126);
      UnderlyingInstrument_126.insert(UnderlyingAttachmentPoint_126.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_126("STRING_1022253884");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_126);
      UnderlyingInstrument_126.insert(UnderlyingCFICode_126.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_126("STRING_1443343863");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_126);
      UnderlyingInstrument_126.insert(UnderlyingCPProgram_126.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_126("STRING_1624118053");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_126);
      UnderlyingInstrument_126.insert(UnderlyingCPRegType_126.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_126;
      UnderlyingCapValue_126.setString("3722922");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_126);
      UnderlyingInstrument_126.insert(UnderlyingCapValue_126.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_126;
      UnderlyingCashAmount_126.setString("7617272");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_126);
      UnderlyingInstrument_126.insert(UnderlyingCashAmount_126.getString());
      FIX::UnderlyingCashType UnderlyingCashType_126("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_126);
      UnderlyingInstrument_126.insert(UnderlyingCashType_126.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_126;
      UnderlyingContractMultiplier_126.setString("6654031");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_126);
      UnderlyingInstrument_126.insert(UnderlyingContractMultiplier_126.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_126(563234904);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_126);
      UnderlyingInstrument_126.insert(UnderlyingContractMultiplierUnit_126.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_126("COUNTRY_1829527866");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_126);
      UnderlyingInstrument_126.insert(UnderlyingCountryOfIssue_126.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_126("LOCALMKTDATE_1350636404");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_126);
      UnderlyingInstrument_126.insert(UnderlyingCouponPaymentDate_126.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_126;
      UnderlyingCouponRate_126.setString("84.850000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_126);
      UnderlyingInstrument_126.insert(UnderlyingCouponRate_126.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_126("STRING_1640935292");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_126);
      UnderlyingInstrument_126.insert(UnderlyingCreditRating_126.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_126("JPY");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_126);
      UnderlyingInstrument_126.insert(UnderlyingCurrency_126.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_126;
      UnderlyingCurrentValue_126.setString("8502445");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_126);
      UnderlyingInstrument_126.insert(UnderlyingCurrentValue_126.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_126;
      UnderlyingDetachmentPoint_126.setString("78.170000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_126);
      UnderlyingInstrument_126.insert(UnderlyingDetachmentPoint_126.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_126;
      UnderlyingDirtyPrice_126.setString("19894589");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_126);
      UnderlyingInstrument_126.insert(UnderlyingDirtyPrice_126.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_126;
      UnderlyingEndPrice_126.setString("9554892");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_126);
      UnderlyingInstrument_126.insert(UnderlyingEndPrice_126.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_126;
      UnderlyingEndValue_126.setString("17848682");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_126);
      UnderlyingInstrument_126.insert(UnderlyingEndValue_126.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_126(485657919);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_126);
      UnderlyingInstrument_126.insert(UnderlyingExerciseStyle_126.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_126;
      UnderlyingFXRate_126.setString("19816594");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_126);
      UnderlyingInstrument_126.insert(UnderlyingFXRate_126.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_126('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_126);
      UnderlyingInstrument_126.insert(UnderlyingFXRateCalc_126.getString());
      FIX::UnderlyingFactor UnderlyingFactor_126;
      UnderlyingFactor_126.setString("8918909");
      noUnderlyings_0_1_1.set(UnderlyingFactor_126);
      UnderlyingInstrument_126.insert(UnderlyingFactor_126.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_126(1317307642);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_126);
      UnderlyingInstrument_126.insert(UnderlyingFlowScheduleType_126.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_126("STRING_428275149");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_126);
      UnderlyingInstrument_126.insert(UnderlyingInstrRegistry_126.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_126("LOCALMKTDATE_1478913308");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_126);
      UnderlyingInstrument_126.insert(UnderlyingIssueDate_126.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_126("STRING_810708734");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_126);
      UnderlyingInstrument_126.insert(UnderlyingIssuer_126.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_126("STRING_678224376");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_126);
      UnderlyingInstrument_126.insert(UnderlyingLocaleOfIssue_126.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_126("LOCALMKTDATE_1684358250");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_126);
      UnderlyingInstrument_126.insert(UnderlyingMaturityDate_126.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_126("MONTHYEAR_1844588579");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_126);
      UnderlyingInstrument_126.insert(UnderlyingMaturityMonthYear_126.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_126("TZTIMEONLY_628819968");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_126);
      UnderlyingInstrument_126.insert(UnderlyingMaturityTime_126.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_126;
      UnderlyingNotionalPercentageOutstanding_126.setString("84.860000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_126);
      UnderlyingInstrument_126.insert(UnderlyingNotionalPercentageOutstanding_126.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_126('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_126);
      UnderlyingInstrument_126.insert(UnderlyingOptAttribute_126.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_126;
      UnderlyingOriginalNotionalPercentageOutstanding_126.setString("43.730000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_126);
      UnderlyingInstrument_126.insert(UnderlyingOriginalNotionalPercentageOutstanding_126.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_126("STRING_931420768");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_126);
      UnderlyingInstrument_126.insert(UnderlyingPriceUnitOfMeasure_126.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_126;
      UnderlyingPriceUnitOfMeasureQty_126.setString("19021760");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_126);
      UnderlyingInstrument_126.insert(UnderlyingPriceUnitOfMeasureQty_126.getString());
      FIX::UnderlyingProduct UnderlyingProduct_126(746165445);
      noUnderlyings_0_1_1.set(UnderlyingProduct_126);
      UnderlyingInstrument_126.insert(UnderlyingProduct_126.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_126(1596823883);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_126);
      UnderlyingInstrument_126.insert(UnderlyingPutOrCall_126.getString());
      FIX::UnderlyingPx UnderlyingPx_126;
      UnderlyingPx_126.setString("3179272");
      noUnderlyings_0_1_1.set(UnderlyingPx_126);
      UnderlyingInstrument_126.insert(UnderlyingPx_126.getString());
      FIX::UnderlyingQty UnderlyingQty_126;
      UnderlyingQty_126.setString("4282096");
      noUnderlyings_0_1_1.set(UnderlyingQty_126);
      UnderlyingInstrument_126.insert(UnderlyingQty_126.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_126("LOCALMKTDATE_799976640");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_126);
      UnderlyingInstrument_126.insert(UnderlyingRedemptionDate_126.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_126("STRING_1391945783");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_126);
      UnderlyingInstrument_126.insert(UnderlyingRepoCollateralSecurityType_126.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_126;
      UnderlyingRepurchaseRate_126.setString("49.560000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_126);
      UnderlyingInstrument_126.insert(UnderlyingRepurchaseRate_126.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_126(242936707);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_126);
      UnderlyingInstrument_126.insert(UnderlyingRepurchaseTerm_126.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_126("STRING_1917433677");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_126);
      UnderlyingInstrument_126.insert(UnderlyingRestructuringType_126.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_126("STRING_771905883");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_126);
      UnderlyingInstrument_126.insert(UnderlyingSecurityDesc_126.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_126("EXCHANGE_1012974525");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_126);
      UnderlyingInstrument_126.insert(UnderlyingSecurityExchange_126.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_126("STRING_1759408994");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_126);
      UnderlyingInstrument_126.insert(UnderlyingSecurityID_126.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_126("STRING_1727395087");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_126);
      UnderlyingInstrument_126.insert(UnderlyingSecurityIDSource_126.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_126("STRING_650359138");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_126);
      UnderlyingInstrument_126.insert(UnderlyingSecuritySubType_126.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_126("STRING_97583266");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_126);
      UnderlyingInstrument_126.insert(UnderlyingSecurityType_126.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_126("STRING_1561570910");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_126);
      UnderlyingInstrument_126.insert(UnderlyingSeniority_126.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_126("STRING_726849559");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_126);
      UnderlyingInstrument_126.insert(UnderlyingSettlMethod_126.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_126(5);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_126);
      UnderlyingInstrument_126.insert(UnderlyingSettlementType_126.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_126;
      UnderlyingStartValue_126.setString("7313949");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_126);
      UnderlyingInstrument_126.insert(UnderlyingStartValue_126.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_126("STRING_1155124708");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_126);
      UnderlyingInstrument_126.insert(UnderlyingStateOrProvinceOfIssue_126.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_126("USD");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_126);
      UnderlyingInstrument_126.insert(UnderlyingStrikeCurrency_126.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_126;
      UnderlyingStrikePrice_126.setString("18333490");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_126);
      UnderlyingInstrument_126.insert(UnderlyingStrikePrice_126.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_126("STRING_2005262097");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_126);
      UnderlyingInstrument_126.insert(UnderlyingSymbol_126.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_126("STRING_1239208569");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_126);
      UnderlyingInstrument_126.insert(UnderlyingSymbolSfx_126.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_126("STRING_314685405");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_126);
      UnderlyingInstrument_126.insert(UnderlyingTimeUnit_126.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_126("STRING_416906936");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_126);
      UnderlyingInstrument_126.insert(UnderlyingUnitOfMeasure_126.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_126;
      UnderlyingUnitOfMeasureQty_126.setString("2321737");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_126);
      UnderlyingInstrument_126.insert(UnderlyingUnitOfMeasureQty_126.getString());
      all_values.push_back(UnderlyingInstrument_126);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_252;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_252("STRING_1348327704");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_252);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_252.insert(UnderlyingSecurityAltID_252.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_252("STRING_2134349757");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_252);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_252.insert(UnderlyingSecurityAltIDSource_252.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_252);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_253;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_253("STRING_1166305223");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_253);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_253.insert(UnderlyingSecurityAltID_253.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_253("STRING_797667940");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_253);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_253.insert(UnderlyingSecurityAltIDSource_253.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_253);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_254;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_254("STRING_304793407");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltID_254);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_254.insert(UnderlyingSecurityAltID_254.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_254("STRING_1594514887");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltIDSource_254);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_254.insert(UnderlyingSecurityAltIDSource_254.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_254);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_240;
        FIX::UnderlyingStipType UnderlyingStipType_240("STRING_1696739190");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_240);
        UnderlyingStipulations_NoUnderlyingStips_240.insert(UnderlyingStipType_240.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_240("STRING_1516176196");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_240);
        UnderlyingStipulations_NoUnderlyingStips_240.insert(UnderlyingStipValue_240.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_240);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_241;
        FIX::UnderlyingStipType UnderlyingStipType_241("STRING_1840581287");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_241);
        UnderlyingStipulations_NoUnderlyingStips_241.insert(UnderlyingStipType_241.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_241("STRING_1466689219");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_241);
        UnderlyingStipulations_NoUnderlyingStips_241.insert(UnderlyingStipValue_241.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_241);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_256;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_256("STRING_706072164");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_256);
        UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyID_256.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_256('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_256);
        UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyIDSource_256.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_256(1867993518);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_256);
        UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyRole_256.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_256);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_479("STRING_1176197831");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_479);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479.insert(UnderlyingInstrumentPartySubID_479.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_479(1282080780);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_479);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479.insert(UnderlyingInstrumentPartySubIDType_479.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_480("STRING_2083280861");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_480);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480.insert(UnderlyingInstrumentPartySubID_480.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_480(18188370);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_480);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480.insert(UnderlyingInstrumentPartySubIDType_480.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_257;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_257("STRING_2013475685");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_257);
        UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyID_257.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_257('1');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_257);
        UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyIDSource_257.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_257(339092217);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_257);
        UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyRole_257.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_257);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_481("STRING_776787359");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_481);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481.insert(UnderlyingInstrumentPartySubID_481.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_481(196870666);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_481);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481.insert(UnderlyingInstrumentPartySubIDType_481.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_258;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_258("STRING_499820597");
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyID_258);
        UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyID_258.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_258('1');
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyIDSource_258);
        UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyIDSource_258.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_258(613777602);
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyRole_258);
        UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyRole_258.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_258);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_482("STRING_1511612542");
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubID_482);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482.insert(UnderlyingInstrumentPartySubID_482.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_482(1962105307);
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_482);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482.insert(UnderlyingInstrumentPartySubIDType_482.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482);

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_483("STRING_718860422");
          noUndlyInstrumentPartySubIDs_0_1_2_3_1.set(UnderlyingInstrumentPartySubID_483);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483.insert(UnderlyingInstrumentPartySubID_483.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_483(530434117);
          noUndlyInstrumentPartySubIDs_0_1_2_3_1.set(UnderlyingInstrumentPartySubIDType_483);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483.insert(UnderlyingInstrumentPartySubIDType_483.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483);

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_127;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_127("DATA_612289599");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_127);
      UnderlyingInstrument_127.insert(EncodedUnderlyingIssuer_127.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_127(1023653829);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_127);
      UnderlyingInstrument_127.insert(EncodedUnderlyingIssuerLen_127.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_127("DATA_2124949005");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_127);
      UnderlyingInstrument_127.insert(EncodedUnderlyingSecurityDesc_127.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_127(62450531);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_127);
      UnderlyingInstrument_127.insert(EncodedUnderlyingSecurityDescLen_127.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_127;
      UnderlyingAdjustedQuantity_127.setString("5729093");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_127);
      UnderlyingInstrument_127.insert(UnderlyingAdjustedQuantity_127.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_127;
      UnderlyingAllocationPercent_127.setString("15.530000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_127);
      UnderlyingInstrument_127.insert(UnderlyingAllocationPercent_127.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_127;
      UnderlyingAttachmentPoint_127.setString("18.180000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_127);
      UnderlyingInstrument_127.insert(UnderlyingAttachmentPoint_127.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_127("STRING_2039598590");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_127);
      UnderlyingInstrument_127.insert(UnderlyingCFICode_127.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_127("STRING_1634239984");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_127);
      UnderlyingInstrument_127.insert(UnderlyingCPProgram_127.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_127("STRING_461620335");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_127);
      UnderlyingInstrument_127.insert(UnderlyingCPRegType_127.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_127;
      UnderlyingCapValue_127.setString("9707295");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_127);
      UnderlyingInstrument_127.insert(UnderlyingCapValue_127.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_127;
      UnderlyingCashAmount_127.setString("13547498");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_127);
      UnderlyingInstrument_127.insert(UnderlyingCashAmount_127.getString());
      FIX::UnderlyingCashType UnderlyingCashType_127("STRING_DIFF");
      noUnderlyings_0_1_2.set(UnderlyingCashType_127);
      UnderlyingInstrument_127.insert(UnderlyingCashType_127.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_127;
      UnderlyingContractMultiplier_127.setString("21469273");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_127);
      UnderlyingInstrument_127.insert(UnderlyingContractMultiplier_127.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_127(489346987);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_127);
      UnderlyingInstrument_127.insert(UnderlyingContractMultiplierUnit_127.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_127("COUNTRY_1753848851");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_127);
      UnderlyingInstrument_127.insert(UnderlyingCountryOfIssue_127.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_127("LOCALMKTDATE_17632061");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_127);
      UnderlyingInstrument_127.insert(UnderlyingCouponPaymentDate_127.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_127;
      UnderlyingCouponRate_127.setString("90.240000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_127);
      UnderlyingInstrument_127.insert(UnderlyingCouponRate_127.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_127("STRING_697287125");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_127);
      UnderlyingInstrument_127.insert(UnderlyingCreditRating_127.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_127("GBP");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_127);
      UnderlyingInstrument_127.insert(UnderlyingCurrency_127.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_127;
      UnderlyingCurrentValue_127.setString("14740744");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_127);
      UnderlyingInstrument_127.insert(UnderlyingCurrentValue_127.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_127;
      UnderlyingDetachmentPoint_127.setString("49.450000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_127);
      UnderlyingInstrument_127.insert(UnderlyingDetachmentPoint_127.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_127;
      UnderlyingDirtyPrice_127.setString("1157716");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_127);
      UnderlyingInstrument_127.insert(UnderlyingDirtyPrice_127.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_127;
      UnderlyingEndPrice_127.setString("4180636");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_127);
      UnderlyingInstrument_127.insert(UnderlyingEndPrice_127.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_127;
      UnderlyingEndValue_127.setString("11673725");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_127);
      UnderlyingInstrument_127.insert(UnderlyingEndValue_127.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_127(847765962);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_127);
      UnderlyingInstrument_127.insert(UnderlyingExerciseStyle_127.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_127;
      UnderlyingFXRate_127.setString("19296761");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_127);
      UnderlyingInstrument_127.insert(UnderlyingFXRate_127.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_127('D');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_127);
      UnderlyingInstrument_127.insert(UnderlyingFXRateCalc_127.getString());
      FIX::UnderlyingFactor UnderlyingFactor_127;
      UnderlyingFactor_127.setString("15666263");
      noUnderlyings_0_1_2.set(UnderlyingFactor_127);
      UnderlyingInstrument_127.insert(UnderlyingFactor_127.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_127(312626611);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_127);
      UnderlyingInstrument_127.insert(UnderlyingFlowScheduleType_127.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_127("STRING_1594283805");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_127);
      UnderlyingInstrument_127.insert(UnderlyingInstrRegistry_127.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_127("LOCALMKTDATE_442796566");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_127);
      UnderlyingInstrument_127.insert(UnderlyingIssueDate_127.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_127("STRING_290091968");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_127);
      UnderlyingInstrument_127.insert(UnderlyingIssuer_127.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_127("STRING_1656734336");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_127);
      UnderlyingInstrument_127.insert(UnderlyingLocaleOfIssue_127.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_127("LOCALMKTDATE_1015705937");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_127);
      UnderlyingInstrument_127.insert(UnderlyingMaturityDate_127.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_127("MONTHYEAR_1783733521");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_127);
      UnderlyingInstrument_127.insert(UnderlyingMaturityMonthYear_127.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_127("TZTIMEONLY_1412282507");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_127);
      UnderlyingInstrument_127.insert(UnderlyingMaturityTime_127.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_127;
      UnderlyingNotionalPercentageOutstanding_127.setString("8.800000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_127);
      UnderlyingInstrument_127.insert(UnderlyingNotionalPercentageOutstanding_127.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_127('1');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_127);
      UnderlyingInstrument_127.insert(UnderlyingOptAttribute_127.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_127;
      UnderlyingOriginalNotionalPercentageOutstanding_127.setString("28.420000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_127);
      UnderlyingInstrument_127.insert(UnderlyingOriginalNotionalPercentageOutstanding_127.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_127("STRING_1878550388");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_127);
      UnderlyingInstrument_127.insert(UnderlyingPriceUnitOfMeasure_127.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_127;
      UnderlyingPriceUnitOfMeasureQty_127.setString("4777560");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_127);
      UnderlyingInstrument_127.insert(UnderlyingPriceUnitOfMeasureQty_127.getString());
      FIX::UnderlyingProduct UnderlyingProduct_127(1544470831);
      noUnderlyings_0_1_2.set(UnderlyingProduct_127);
      UnderlyingInstrument_127.insert(UnderlyingProduct_127.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_127(1877994079);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_127);
      UnderlyingInstrument_127.insert(UnderlyingPutOrCall_127.getString());
      FIX::UnderlyingPx UnderlyingPx_127;
      UnderlyingPx_127.setString("9671030");
      noUnderlyings_0_1_2.set(UnderlyingPx_127);
      UnderlyingInstrument_127.insert(UnderlyingPx_127.getString());
      FIX::UnderlyingQty UnderlyingQty_127;
      UnderlyingQty_127.setString("11508360");
      noUnderlyings_0_1_2.set(UnderlyingQty_127);
      UnderlyingInstrument_127.insert(UnderlyingQty_127.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_127("LOCALMKTDATE_1895626141");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_127);
      UnderlyingInstrument_127.insert(UnderlyingRedemptionDate_127.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_127("STRING_1322442077");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_127);
      UnderlyingInstrument_127.insert(UnderlyingRepoCollateralSecurityType_127.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_127;
      UnderlyingRepurchaseRate_127.setString("31.590000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_127);
      UnderlyingInstrument_127.insert(UnderlyingRepurchaseRate_127.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_127(104866771);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_127);
      UnderlyingInstrument_127.insert(UnderlyingRepurchaseTerm_127.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_127("STRING_938393129");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_127);
      UnderlyingInstrument_127.insert(UnderlyingRestructuringType_127.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_127("STRING_1174713995");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_127);
      UnderlyingInstrument_127.insert(UnderlyingSecurityDesc_127.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_127("EXCHANGE_658461716");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_127);
      UnderlyingInstrument_127.insert(UnderlyingSecurityExchange_127.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_127("STRING_1054164778");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_127);
      UnderlyingInstrument_127.insert(UnderlyingSecurityID_127.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_127("STRING_1592777595");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_127);
      UnderlyingInstrument_127.insert(UnderlyingSecurityIDSource_127.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_127("STRING_1825834264");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_127);
      UnderlyingInstrument_127.insert(UnderlyingSecuritySubType_127.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_127("STRING_1901930740");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_127);
      UnderlyingInstrument_127.insert(UnderlyingSecurityType_127.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_127("STRING_1374970089");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_127);
      UnderlyingInstrument_127.insert(UnderlyingSeniority_127.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_127("STRING_660344822");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_127);
      UnderlyingInstrument_127.insert(UnderlyingSettlMethod_127.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_127(4);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_127);
      UnderlyingInstrument_127.insert(UnderlyingSettlementType_127.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_127;
      UnderlyingStartValue_127.setString("16875967");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_127);
      UnderlyingInstrument_127.insert(UnderlyingStartValue_127.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_127("STRING_107144980");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_127);
      UnderlyingInstrument_127.insert(UnderlyingStateOrProvinceOfIssue_127.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_127("EUR");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_127);
      UnderlyingInstrument_127.insert(UnderlyingStrikeCurrency_127.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_127;
      UnderlyingStrikePrice_127.setString("17638793");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_127);
      UnderlyingInstrument_127.insert(UnderlyingStrikePrice_127.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_127("STRING_632092332");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_127);
      UnderlyingInstrument_127.insert(UnderlyingSymbol_127.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_127("STRING_1613938543");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_127);
      UnderlyingInstrument_127.insert(UnderlyingSymbolSfx_127.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_127("STRING_1028678175");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_127);
      UnderlyingInstrument_127.insert(UnderlyingTimeUnit_127.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_127("STRING_1539913212");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_127);
      UnderlyingInstrument_127.insert(UnderlyingUnitOfMeasure_127.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_127;
      UnderlyingUnitOfMeasureQty_127.setString("7369447");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_127);
      UnderlyingInstrument_127.insert(UnderlyingUnitOfMeasureQty_127.getString());
      all_values.push_back(UnderlyingInstrument_127);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_255;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_255("STRING_1270979952");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_255);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_255.insert(UnderlyingSecurityAltID_255.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_255("STRING_1214700818");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_255);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_255.insert(UnderlyingSecurityAltIDSource_255.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_255);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_242;
        FIX::UnderlyingStipType UnderlyingStipType_242("STRING_1001490383");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_242);
        UnderlyingStipulations_NoUnderlyingStips_242.insert(UnderlyingStipType_242.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_242("STRING_34320222");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_242);
        UnderlyingStipulations_NoUnderlyingStips_242.insert(UnderlyingStipValue_242.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_242);

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_259;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_259("STRING_749632876");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_259);
        UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyID_259.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_259('1');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_259);
        UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyIDSource_259.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_259(1003560099);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_259);
        UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyRole_259.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_259);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_484("STRING_147671780");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_484);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484.insert(UnderlyingInstrumentPartySubID_484.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_484(30790446);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_484);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484.insert(UnderlyingInstrumentPartySubIDType_484.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_260;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_260("STRING_1512961364");
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyID_260);
        UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyID_260.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_260('1');
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyIDSource_260);
        UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyIDSource_260.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_260(1623568042);
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyRole_260);
        UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyRole_260.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_260);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_485("STRING_956283650");
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubID_485);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485.insert(UnderlyingInstrumentPartySubID_485.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_485(851054483);
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_485);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485.insert(UnderlyingInstrumentPartySubIDType_485.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485);

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_486("STRING_1851656803");
          noUndlyInstrumentPartySubIDs_0_2_1_3_1.set(UnderlyingInstrumentPartySubID_486);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486.insert(UnderlyingInstrumentPartySubID_486.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_486(129873479);
          noUndlyInstrumentPartySubIDs_0_2_1_3_1.set(UnderlyingInstrumentPartySubIDType_486);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486.insert(UnderlyingInstrumentPartySubIDType_486.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486);

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_24;
    FIX::Yield Yield_24;
    Yield_24.setString("75.360000");
    noRelatedSym_0_0.set(Yield_24);
    YieldData_24.insert(Yield_24.getString());
    FIX::YieldCalcDate YieldCalcDate_24("LOCALMKTDATE_1958801783");
    noRelatedSym_0_0.set(YieldCalcDate_24);
    YieldData_24.insert(YieldCalcDate_24.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_24("LOCALMKTDATE_1893743521");
    noRelatedSym_0_0.set(YieldRedemptionDate_24);
    YieldData_24.insert(YieldRedemptionDate_24.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_24;
    YieldRedemptionPrice_24.setString("2213725");
    noRelatedSym_0_0.set(YieldRedemptionPrice_24);
    YieldData_24.insert(YieldRedemptionPrice_24.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_24(1575197451);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_24);
    YieldData_24.insert(YieldRedemptionPriceType_24.getString());
    FIX::YieldType YieldType_24("STRING_ANNUAL");
    noRelatedSym_0_0.set(YieldType_24);
    YieldData_24.insert(YieldType_24.getString());
    all_values.push_back(YieldData_24);

    msg.addGroup(noRelatedSym_0_0);
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
