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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityList msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityList_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_22("LOCALMKTDATE_1252415386");
  msg.set(ClearingBusinessDate_22);
  SecurityList_0.insert(ClearingBusinessDate_22.getString());
  FIX::EncodedSecurityListDesc EncodedSecurityListDesc_0("DATA_994512222");
  msg.set(EncodedSecurityListDesc_0);
  FIX::EncodedSecurityListDescLen EncodedSecurityListDescLen_0(1039194277);
  msg.set(EncodedSecurityListDescLen_0);
  FIX::LastFragment LastFragment_12(true);
  msg.set(LastFragment_12);
  SecurityList_0.insert(LastFragment_12.getString());
  FIX::MarketID MarketID_21("EXCHANGE_1474955590");
  msg.set(MarketID_21);
  SecurityList_0.insert(MarketID_21.getString());
  FIX::MarketSegmentID MarketSegmentID_21("STRING_1843973669");
  msg.set(MarketSegmentID_21);
  SecurityList_0.insert(MarketSegmentID_21.getString());
  FIX::SecurityListDesc SecurityListDesc_0("STRING_1575982675");
  msg.set(SecurityListDesc_0);
  SecurityList_0.insert(SecurityListDesc_0.getString());
  FIX::SecurityListID SecurityListID_0("STRING_48328104");
  msg.set(SecurityListID_0);
  SecurityList_0.insert(SecurityListID_0.getString());
  FIX::SecurityListRefID SecurityListRefID_0("STRING_1674779068");
  msg.set(SecurityListRefID_0);
  SecurityList_0.insert(SecurityListRefID_0.getString());
  FIX::SecurityListType SecurityListType_0(4);
  msg.set(SecurityListType_0);
  SecurityList_0.insert(SecurityListType_0.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_0(3);
  msg.set(SecurityListTypeSource_0);
  SecurityList_0.insert(SecurityListTypeSource_0.getString());
  FIX::SecurityReportID SecurityReportID_3(35715609);
  msg.set(SecurityReportID_3);
  SecurityList_0.insert(SecurityReportID_3.getString());
  FIX::SecurityReqID SecurityReqID_6("STRING_266070356");
  msg.set(SecurityReqID_6);
  SecurityList_0.insert(SecurityReqID_6.getString());
  FIX::SecurityRequestResult SecurityRequestResult_2(5);
  msg.set(SecurityRequestResult_2);
  SecurityList_0.insert(SecurityRequestResult_2.getString());
  FIX::SecurityResponseID SecurityResponseID_4("STRING_1991567161");
  msg.set(SecurityResponseID_4);
  SecurityList_0.insert(SecurityResponseID_4.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_3(1472628557);
  msg.set(TotNoRelatedSym_3);
  SecurityList_0.insert(TotNoRelatedSym_3.getString());
  FIX::TransactTime TransactTime_55(FIX::UTCTIMESTAMP(4, 59, 4, 6, 62004));
  msg.set(TransactTime_55);
  SecurityList_0.insert(TransactTime_55.getString());
  all_values.push_back(SecurityList_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_14;
  FIX::ApplID ApplID_14("STRING_925301506");
  msg.set(ApplID_14);
  ApplicationSequenceControl_14.insert(ApplID_14.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_14(966298156);
  msg.set(ApplLastSeqNum_14);
  ApplicationSequenceControl_14.insert(ApplLastSeqNum_14.getString());
  FIX::ApplResendFlag ApplResendFlag_14(false);
  msg.set(ApplResendFlag_14);
  ApplicationSequenceControl_14.insert(ApplResendFlag_14.getString());
  FIX::ApplSeqNum ApplSeqNum_14(665424744);
  msg.set(ApplSeqNum_14);
  ApplicationSequenceControl_14.insert(ApplSeqNum_14.getString());
  all_values.push_back(ApplicationSequenceControl_14);

  // SecListGrp
  // Group SecListGrp.NoRelatedSym
  {
    FIX50SP2::SecurityList::NoRelatedSym noRelatedSym_0_0;
    // SecListGrp.NoRelatedSym
    multiset<string> SecListGrp_NoRelatedSym_0;
    FIX::Currency Currency_56("GBP");
    noRelatedSym_0_0.set(Currency_56);
    SecListGrp_NoRelatedSym_0.insert(Currency_56.getString());
    FIX::EncodedText EncodedText_80("DATA_1167646044");
    noRelatedSym_0_0.set(EncodedText_80);
    SecListGrp_NoRelatedSym_0.insert(EncodedText_80.getString());
    FIX::EncodedTextLen EncodedTextLen_80(567589554);
    noRelatedSym_0_0.set(EncodedTextLen_80);
    SecListGrp_NoRelatedSym_0.insert(EncodedTextLen_80.getString());
    FIX::RelSymTransactTime RelSymTransactTime_4(FIX::UTCTIMESTAMP(17, 2, 22, 18, 32005));
    noRelatedSym_0_0.set(RelSymTransactTime_4);
    SecListGrp_NoRelatedSym_0.insert(RelSymTransactTime_4.getString());
    FIX::Text Text_80("STRING_1430625762");
    noRelatedSym_0_0.set(Text_80);
    SecListGrp_NoRelatedSym_0.insert(Text_80.getString());
    all_values.push_back(SecListGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_26;
    FIX::AgreementCurrency AgreementCurrency_26("JPY");
    noRelatedSym_0_0.set(AgreementCurrency_26);
    FinancingDetails_26.insert(AgreementCurrency_26.getString());
    FIX::AgreementDate AgreementDate_26("LOCALMKTDATE_1466341371");
    noRelatedSym_0_0.set(AgreementDate_26);
    FinancingDetails_26.insert(AgreementDate_26.getString());
    FIX::AgreementDesc AgreementDesc_26("STRING_2070739422");
    noRelatedSym_0_0.set(AgreementDesc_26);
    FinancingDetails_26.insert(AgreementDesc_26.getString());
    FIX::AgreementID AgreementID_26("STRING_311986399");
    noRelatedSym_0_0.set(AgreementID_26);
    FinancingDetails_26.insert(AgreementID_26.getString());
    FIX::DeliveryType DeliveryType_26(1);
    noRelatedSym_0_0.set(DeliveryType_26);
    FinancingDetails_26.insert(DeliveryType_26.getString());
    FIX::EndDate EndDate_26("LOCALMKTDATE_1395884331");
    noRelatedSym_0_0.set(EndDate_26);
    FinancingDetails_26.insert(EndDate_26.getString());
    FIX::MarginRatio MarginRatio_26;
    MarginRatio_26.setString("38.900000");
    noRelatedSym_0_0.set(MarginRatio_26);
    FinancingDetails_26.insert(MarginRatio_26.getString());
    FIX::StartDate StartDate_26("LOCALMKTDATE_841466177");
    noRelatedSym_0_0.set(StartDate_26);
    FinancingDetails_26.insert(StartDate_26.getString());
    FIX::TerminationType TerminationType_26(3);
    noRelatedSym_0_0.set(TerminationType_26);
    FinancingDetails_26.insert(TerminationType_26.getString());
    all_values.push_back(FinancingDetails_26);

    // InstrmtLegSecListGrp
    // Group InstrmtLegSecListGrp.NoLegs
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_0;
      FIX::LegSettlType LegSettlType_19('2');
      noLegs_0_1_0.set(LegSettlType_19);
      InstrmtLegSecListGrp_NoLegs_0.insert(LegSettlType_19.getString());
      FIX::LegSwapType LegSwapType_19(1);
      noLegs_0_1_0.set(LegSwapType_19);
      InstrmtLegSecListGrp_NoLegs_0.insert(LegSwapType_19.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_0);

      // InstrumentLeg
      multiset<string> InstrumentLeg_104;
      FIX::EncodedLegIssuer EncodedLegIssuer_104("DATA_1810163979");
      noLegs_0_1_0.set(EncodedLegIssuer_104);
      InstrumentLeg_104.insert(EncodedLegIssuer_104.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_104(798552509);
      noLegs_0_1_0.set(EncodedLegIssuerLen_104);
      InstrumentLeg_104.insert(EncodedLegIssuerLen_104.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_104("DATA_389045720");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_104);
      InstrumentLeg_104.insert(EncodedLegSecurityDesc_104.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_104(347404014);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_104);
      InstrumentLeg_104.insert(EncodedLegSecurityDescLen_104.getString());
      FIX::LegCFICode LegCFICode_104("STRING_1463977253");
      noLegs_0_1_0.set(LegCFICode_104);
      InstrumentLeg_104.insert(LegCFICode_104.getString());
      FIX::LegContractMultiplier LegContractMultiplier_104;
      LegContractMultiplier_104.setString("1624348");
      noLegs_0_1_0.set(LegContractMultiplier_104);
      InstrumentLeg_104.insert(LegContractMultiplier_104.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_104(1810061830);
      noLegs_0_1_0.set(LegContractMultiplierUnit_104);
      InstrumentLeg_104.insert(LegContractMultiplierUnit_104.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_104("MONTHYEAR_1645297831");
      noLegs_0_1_0.set(LegContractSettlMonth_104);
      InstrumentLeg_104.insert(LegContractSettlMonth_104.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_104("COUNTRY_1330080913");
      noLegs_0_1_0.set(LegCountryOfIssue_104);
      InstrumentLeg_104.insert(LegCountryOfIssue_104.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_104("LOCALMKTDATE_230167736");
      noLegs_0_1_0.set(LegCouponPaymentDate_104);
      InstrumentLeg_104.insert(LegCouponPaymentDate_104.getString());
      FIX::LegCouponRate LegCouponRate_104;
      LegCouponRate_104.setString("69.830000");
      noLegs_0_1_0.set(LegCouponRate_104);
      InstrumentLeg_104.insert(LegCouponRate_104.getString());
      FIX::LegCreditRating LegCreditRating_104("STRING_1389437586");
      noLegs_0_1_0.set(LegCreditRating_104);
      InstrumentLeg_104.insert(LegCreditRating_104.getString());
      FIX::LegCurrency LegCurrency_104("USD");
      noLegs_0_1_0.set(LegCurrency_104);
      InstrumentLeg_104.insert(LegCurrency_104.getString());
      FIX::LegDatedDate LegDatedDate_104("LOCALMKTDATE_1145284280");
      noLegs_0_1_0.set(LegDatedDate_104);
      InstrumentLeg_104.insert(LegDatedDate_104.getString());
      FIX::LegExerciseStyle LegExerciseStyle_104(1405211440);
      noLegs_0_1_0.set(LegExerciseStyle_104);
      InstrumentLeg_104.insert(LegExerciseStyle_104.getString());
      FIX::LegFactor LegFactor_104;
      LegFactor_104.setString("17285845");
      noLegs_0_1_0.set(LegFactor_104);
      InstrumentLeg_104.insert(LegFactor_104.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_104(428426394);
      noLegs_0_1_0.set(LegFlowScheduleType_104);
      InstrumentLeg_104.insert(LegFlowScheduleType_104.getString());
      FIX::LegInstrRegistry LegInstrRegistry_104("STRING_1062396858");
      noLegs_0_1_0.set(LegInstrRegistry_104);
      InstrumentLeg_104.insert(LegInstrRegistry_104.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_104("LOCALMKTDATE_1113074797");
      noLegs_0_1_0.set(LegInterestAccrualDate_104);
      InstrumentLeg_104.insert(LegInterestAccrualDate_104.getString());
      FIX::LegIssueDate LegIssueDate_104("LOCALMKTDATE_1894767766");
      noLegs_0_1_0.set(LegIssueDate_104);
      InstrumentLeg_104.insert(LegIssueDate_104.getString());
      FIX::LegIssuer LegIssuer_104("STRING_985652632");
      noLegs_0_1_0.set(LegIssuer_104);
      InstrumentLeg_104.insert(LegIssuer_104.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_104("STRING_1425061196");
      noLegs_0_1_0.set(LegLocaleOfIssue_104);
      InstrumentLeg_104.insert(LegLocaleOfIssue_104.getString());
      FIX::LegMaturityDate LegMaturityDate_104("LOCALMKTDATE_1057709003");
      noLegs_0_1_0.set(LegMaturityDate_104);
      InstrumentLeg_104.insert(LegMaturityDate_104.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_104("MONTHYEAR_234053315");
      noLegs_0_1_0.set(LegMaturityMonthYear_104);
      InstrumentLeg_104.insert(LegMaturityMonthYear_104.getString());
      FIX::LegMaturityTime LegMaturityTime_104("TZTIMEONLY_820901438");
      noLegs_0_1_0.set(LegMaturityTime_104);
      InstrumentLeg_104.insert(LegMaturityTime_104.getString());
      FIX::LegOptAttribute LegOptAttribute_104('1');
      noLegs_0_1_0.set(LegOptAttribute_104);
      InstrumentLeg_104.insert(LegOptAttribute_104.getString());
      FIX::LegOptionRatio LegOptionRatio_104;
      LegOptionRatio_104.setString("18881299");
      noLegs_0_1_0.set(LegOptionRatio_104);
      InstrumentLeg_104.insert(LegOptionRatio_104.getString());
      FIX::LegPool LegPool_104("STRING_1178792904");
      noLegs_0_1_0.set(LegPool_104);
      InstrumentLeg_104.insert(LegPool_104.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_104("STRING_1772426183");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_104);
      InstrumentLeg_104.insert(LegPriceUnitOfMeasure_104.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_104;
      LegPriceUnitOfMeasureQty_104.setString("13108775");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_104);
      InstrumentLeg_104.insert(LegPriceUnitOfMeasureQty_104.getString());
      FIX::LegProduct LegProduct_104(841473235);
      noLegs_0_1_0.set(LegProduct_104);
      InstrumentLeg_104.insert(LegProduct_104.getString());
      FIX::LegPutOrCall LegPutOrCall_104(423495044);
      noLegs_0_1_0.set(LegPutOrCall_104);
      InstrumentLeg_104.insert(LegPutOrCall_104.getString());
      FIX::LegRatioQty LegRatioQty_104;
      LegRatioQty_104.setString("16999232");
      noLegs_0_1_0.set(LegRatioQty_104);
      InstrumentLeg_104.insert(LegRatioQty_104.getString());
      FIX::LegRedemptionDate LegRedemptionDate_104("LOCALMKTDATE_1188877249");
      noLegs_0_1_0.set(LegRedemptionDate_104);
      InstrumentLeg_104.insert(LegRedemptionDate_104.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_104("STRING_1887472298");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_104);
      InstrumentLeg_104.insert(LegRepoCollateralSecurityType_104.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_104;
      LegRepurchaseRate_104.setString("80.990000");
      noLegs_0_1_0.set(LegRepurchaseRate_104);
      InstrumentLeg_104.insert(LegRepurchaseRate_104.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_104(851455431);
      noLegs_0_1_0.set(LegRepurchaseTerm_104);
      InstrumentLeg_104.insert(LegRepurchaseTerm_104.getString());
      FIX::LegSecurityDesc LegSecurityDesc_104("STRING_1385286481");
      noLegs_0_1_0.set(LegSecurityDesc_104);
      InstrumentLeg_104.insert(LegSecurityDesc_104.getString());
      FIX::LegSecurityExchange LegSecurityExchange_104("EXCHANGE_1044955364");
      noLegs_0_1_0.set(LegSecurityExchange_104);
      InstrumentLeg_104.insert(LegSecurityExchange_104.getString());
      FIX::LegSecurityID LegSecurityID_104("STRING_1081623167");
      noLegs_0_1_0.set(LegSecurityID_104);
      InstrumentLeg_104.insert(LegSecurityID_104.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_104("STRING_2058933465");
      noLegs_0_1_0.set(LegSecurityIDSource_104);
      InstrumentLeg_104.insert(LegSecurityIDSource_104.getString());
      FIX::LegSecuritySubType LegSecuritySubType_104("STRING_286909302");
      noLegs_0_1_0.set(LegSecuritySubType_104);
      InstrumentLeg_104.insert(LegSecuritySubType_104.getString());
      FIX::LegSecurityType LegSecurityType_104("STRING_1111321418");
      noLegs_0_1_0.set(LegSecurityType_104);
      InstrumentLeg_104.insert(LegSecurityType_104.getString());
      FIX::LegSide LegSide_104('1');
      noLegs_0_1_0.set(LegSide_104);
      InstrumentLeg_104.insert(LegSide_104.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_104("STRING_1432193582");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_104);
      InstrumentLeg_104.insert(LegStateOrProvinceOfIssue_104.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_104("JPY");
      noLegs_0_1_0.set(LegStrikeCurrency_104);
      InstrumentLeg_104.insert(LegStrikeCurrency_104.getString());
      FIX::LegStrikePrice LegStrikePrice_104;
      LegStrikePrice_104.setString("18606199");
      noLegs_0_1_0.set(LegStrikePrice_104);
      InstrumentLeg_104.insert(LegStrikePrice_104.getString());
      FIX::LegSymbol LegSymbol_104("STRING_1431446068");
      noLegs_0_1_0.set(LegSymbol_104);
      InstrumentLeg_104.insert(LegSymbol_104.getString());
      FIX::LegSymbolSfx LegSymbolSfx_104("STRING_1782577265");
      noLegs_0_1_0.set(LegSymbolSfx_104);
      InstrumentLeg_104.insert(LegSymbolSfx_104.getString());
      FIX::LegTimeUnit LegTimeUnit_104("STRING_1607904094");
      noLegs_0_1_0.set(LegTimeUnit_104);
      InstrumentLeg_104.insert(LegTimeUnit_104.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_104("STRING_269615052");
      noLegs_0_1_0.set(LegUnitOfMeasure_104);
      InstrumentLeg_104.insert(LegUnitOfMeasure_104.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_104;
      LegUnitOfMeasureQty_104.setString("10601548");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_104);
      InstrumentLeg_104.insert(LegUnitOfMeasureQty_104.getString());
      all_values.push_back(InstrumentLeg_104);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_185;
        FIX::LegSecurityAltID LegSecurityAltID_185("STRING_503668367");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_185);
        LegSecAltIDGrp_NoLegSecurityAltID_185.insert(LegSecurityAltID_185.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_185("STRING_1881056251");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_185);
        LegSecAltIDGrp_NoLegSecurityAltID_185.insert(LegSecurityAltIDSource_185.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_185);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_186;
        FIX::LegSecurityAltID LegSecurityAltID_186("STRING_269820981");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_186);
        LegSecAltIDGrp_NoLegSecurityAltID_186.insert(LegSecurityAltID_186.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_186("STRING_244314665");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_186);
        LegSecAltIDGrp_NoLegSecurityAltID_186.insert(LegSecurityAltIDSource_186.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_186);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_12;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_12("GBP");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_12);
      LegBenchmarkCurveData_12.insert(LegBenchmarkCurveCurrency_12.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_12("STRING_1555192174");
      noLegs_0_1_0.set(LegBenchmarkCurveName_12);
      LegBenchmarkCurveData_12.insert(LegBenchmarkCurveName_12.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_12("STRING_1753838743");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_12);
      LegBenchmarkCurveData_12.insert(LegBenchmarkCurvePoint_12.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_12;
      LegBenchmarkPrice_12.setString("3182585");
      noLegs_0_1_0.set(LegBenchmarkPrice_12);
      LegBenchmarkCurveData_12.insert(LegBenchmarkPrice_12.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_12(1107631756);
      noLegs_0_1_0.set(LegBenchmarkPriceType_12);
      LegBenchmarkCurveData_12.insert(LegBenchmarkPriceType_12.getString());
      all_values.push_back(LegBenchmarkCurveData_12);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_47;
        FIX::LegStipulationType LegStipulationType_47("STRING_58247211");
        noLegStipulations_0_0_2_0.set(LegStipulationType_47);
        LegStipulations_NoLegStipulations_47.insert(LegStipulationType_47.getString());
        FIX::LegStipulationValue LegStipulationValue_47("STRING_822506207");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_47);
        LegStipulations_NoLegStipulations_47.insert(LegStipulationValue_47.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_47);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_1;
      FIX::LegSettlType LegSettlType_20('1');
      noLegs_0_1_1.set(LegSettlType_20);
      InstrmtLegSecListGrp_NoLegs_1.insert(LegSettlType_20.getString());
      FIX::LegSwapType LegSwapType_20(1);
      noLegs_0_1_1.set(LegSwapType_20);
      InstrmtLegSecListGrp_NoLegs_1.insert(LegSwapType_20.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_1);

      // InstrumentLeg
      multiset<string> InstrumentLeg_105;
      FIX::EncodedLegIssuer EncodedLegIssuer_105("DATA_1867461571");
      noLegs_0_1_1.set(EncodedLegIssuer_105);
      InstrumentLeg_105.insert(EncodedLegIssuer_105.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_105(580827295);
      noLegs_0_1_1.set(EncodedLegIssuerLen_105);
      InstrumentLeg_105.insert(EncodedLegIssuerLen_105.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_105("DATA_1354983509");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_105);
      InstrumentLeg_105.insert(EncodedLegSecurityDesc_105.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_105(6887225);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_105);
      InstrumentLeg_105.insert(EncodedLegSecurityDescLen_105.getString());
      FIX::LegCFICode LegCFICode_105("STRING_1692148713");
      noLegs_0_1_1.set(LegCFICode_105);
      InstrumentLeg_105.insert(LegCFICode_105.getString());
      FIX::LegContractMultiplier LegContractMultiplier_105;
      LegContractMultiplier_105.setString("2959014");
      noLegs_0_1_1.set(LegContractMultiplier_105);
      InstrumentLeg_105.insert(LegContractMultiplier_105.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_105(1439080807);
      noLegs_0_1_1.set(LegContractMultiplierUnit_105);
      InstrumentLeg_105.insert(LegContractMultiplierUnit_105.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_105("MONTHYEAR_2061197924");
      noLegs_0_1_1.set(LegContractSettlMonth_105);
      InstrumentLeg_105.insert(LegContractSettlMonth_105.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_105("COUNTRY_965403872");
      noLegs_0_1_1.set(LegCountryOfIssue_105);
      InstrumentLeg_105.insert(LegCountryOfIssue_105.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_105("LOCALMKTDATE_1152217136");
      noLegs_0_1_1.set(LegCouponPaymentDate_105);
      InstrumentLeg_105.insert(LegCouponPaymentDate_105.getString());
      FIX::LegCouponRate LegCouponRate_105;
      LegCouponRate_105.setString("3.440000");
      noLegs_0_1_1.set(LegCouponRate_105);
      InstrumentLeg_105.insert(LegCouponRate_105.getString());
      FIX::LegCreditRating LegCreditRating_105("STRING_600497489");
      noLegs_0_1_1.set(LegCreditRating_105);
      InstrumentLeg_105.insert(LegCreditRating_105.getString());
      FIX::LegCurrency LegCurrency_105("CAN");
      noLegs_0_1_1.set(LegCurrency_105);
      InstrumentLeg_105.insert(LegCurrency_105.getString());
      FIX::LegDatedDate LegDatedDate_105("LOCALMKTDATE_1660652302");
      noLegs_0_1_1.set(LegDatedDate_105);
      InstrumentLeg_105.insert(LegDatedDate_105.getString());
      FIX::LegExerciseStyle LegExerciseStyle_105(1130767032);
      noLegs_0_1_1.set(LegExerciseStyle_105);
      InstrumentLeg_105.insert(LegExerciseStyle_105.getString());
      FIX::LegFactor LegFactor_105;
      LegFactor_105.setString("21184437");
      noLegs_0_1_1.set(LegFactor_105);
      InstrumentLeg_105.insert(LegFactor_105.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_105(1394224905);
      noLegs_0_1_1.set(LegFlowScheduleType_105);
      InstrumentLeg_105.insert(LegFlowScheduleType_105.getString());
      FIX::LegInstrRegistry LegInstrRegistry_105("STRING_1400588013");
      noLegs_0_1_1.set(LegInstrRegistry_105);
      InstrumentLeg_105.insert(LegInstrRegistry_105.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_105("LOCALMKTDATE_215274781");
      noLegs_0_1_1.set(LegInterestAccrualDate_105);
      InstrumentLeg_105.insert(LegInterestAccrualDate_105.getString());
      FIX::LegIssueDate LegIssueDate_105("LOCALMKTDATE_159106765");
      noLegs_0_1_1.set(LegIssueDate_105);
      InstrumentLeg_105.insert(LegIssueDate_105.getString());
      FIX::LegIssuer LegIssuer_105("STRING_1295351530");
      noLegs_0_1_1.set(LegIssuer_105);
      InstrumentLeg_105.insert(LegIssuer_105.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_105("STRING_1770466956");
      noLegs_0_1_1.set(LegLocaleOfIssue_105);
      InstrumentLeg_105.insert(LegLocaleOfIssue_105.getString());
      FIX::LegMaturityDate LegMaturityDate_105("LOCALMKTDATE_1912945508");
      noLegs_0_1_1.set(LegMaturityDate_105);
      InstrumentLeg_105.insert(LegMaturityDate_105.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_105("MONTHYEAR_1613610091");
      noLegs_0_1_1.set(LegMaturityMonthYear_105);
      InstrumentLeg_105.insert(LegMaturityMonthYear_105.getString());
      FIX::LegMaturityTime LegMaturityTime_105("TZTIMEONLY_730615064");
      noLegs_0_1_1.set(LegMaturityTime_105);
      InstrumentLeg_105.insert(LegMaturityTime_105.getString());
      FIX::LegOptAttribute LegOptAttribute_105('5');
      noLegs_0_1_1.set(LegOptAttribute_105);
      InstrumentLeg_105.insert(LegOptAttribute_105.getString());
      FIX::LegOptionRatio LegOptionRatio_105;
      LegOptionRatio_105.setString("16718573");
      noLegs_0_1_1.set(LegOptionRatio_105);
      InstrumentLeg_105.insert(LegOptionRatio_105.getString());
      FIX::LegPool LegPool_105("STRING_1553121272");
      noLegs_0_1_1.set(LegPool_105);
      InstrumentLeg_105.insert(LegPool_105.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_105("STRING_59898332");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_105);
      InstrumentLeg_105.insert(LegPriceUnitOfMeasure_105.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_105;
      LegPriceUnitOfMeasureQty_105.setString("9679073");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_105);
      InstrumentLeg_105.insert(LegPriceUnitOfMeasureQty_105.getString());
      FIX::LegProduct LegProduct_105(1273099195);
      noLegs_0_1_1.set(LegProduct_105);
      InstrumentLeg_105.insert(LegProduct_105.getString());
      FIX::LegPutOrCall LegPutOrCall_105(640725628);
      noLegs_0_1_1.set(LegPutOrCall_105);
      InstrumentLeg_105.insert(LegPutOrCall_105.getString());
      FIX::LegRatioQty LegRatioQty_105;
      LegRatioQty_105.setString("1754072");
      noLegs_0_1_1.set(LegRatioQty_105);
      InstrumentLeg_105.insert(LegRatioQty_105.getString());
      FIX::LegRedemptionDate LegRedemptionDate_105("LOCALMKTDATE_1279986421");
      noLegs_0_1_1.set(LegRedemptionDate_105);
      InstrumentLeg_105.insert(LegRedemptionDate_105.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_105("STRING_185390693");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_105);
      InstrumentLeg_105.insert(LegRepoCollateralSecurityType_105.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_105;
      LegRepurchaseRate_105.setString("86.120000");
      noLegs_0_1_1.set(LegRepurchaseRate_105);
      InstrumentLeg_105.insert(LegRepurchaseRate_105.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_105(571583580);
      noLegs_0_1_1.set(LegRepurchaseTerm_105);
      InstrumentLeg_105.insert(LegRepurchaseTerm_105.getString());
      FIX::LegSecurityDesc LegSecurityDesc_105("STRING_99104969");
      noLegs_0_1_1.set(LegSecurityDesc_105);
      InstrumentLeg_105.insert(LegSecurityDesc_105.getString());
      FIX::LegSecurityExchange LegSecurityExchange_105("EXCHANGE_1436712485");
      noLegs_0_1_1.set(LegSecurityExchange_105);
      InstrumentLeg_105.insert(LegSecurityExchange_105.getString());
      FIX::LegSecurityID LegSecurityID_105("STRING_1723800716");
      noLegs_0_1_1.set(LegSecurityID_105);
      InstrumentLeg_105.insert(LegSecurityID_105.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_105("STRING_1444265314");
      noLegs_0_1_1.set(LegSecurityIDSource_105);
      InstrumentLeg_105.insert(LegSecurityIDSource_105.getString());
      FIX::LegSecuritySubType LegSecuritySubType_105("STRING_2037209974");
      noLegs_0_1_1.set(LegSecuritySubType_105);
      InstrumentLeg_105.insert(LegSecuritySubType_105.getString());
      FIX::LegSecurityType LegSecurityType_105("STRING_188954651");
      noLegs_0_1_1.set(LegSecurityType_105);
      InstrumentLeg_105.insert(LegSecurityType_105.getString());
      FIX::LegSide LegSide_105('9');
      noLegs_0_1_1.set(LegSide_105);
      InstrumentLeg_105.insert(LegSide_105.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_105("STRING_1550378629");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_105);
      InstrumentLeg_105.insert(LegStateOrProvinceOfIssue_105.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_105("CHF");
      noLegs_0_1_1.set(LegStrikeCurrency_105);
      InstrumentLeg_105.insert(LegStrikeCurrency_105.getString());
      FIX::LegStrikePrice LegStrikePrice_105;
      LegStrikePrice_105.setString("7971198");
      noLegs_0_1_1.set(LegStrikePrice_105);
      InstrumentLeg_105.insert(LegStrikePrice_105.getString());
      FIX::LegSymbol LegSymbol_105("STRING_572826048");
      noLegs_0_1_1.set(LegSymbol_105);
      InstrumentLeg_105.insert(LegSymbol_105.getString());
      FIX::LegSymbolSfx LegSymbolSfx_105("STRING_1097791961");
      noLegs_0_1_1.set(LegSymbolSfx_105);
      InstrumentLeg_105.insert(LegSymbolSfx_105.getString());
      FIX::LegTimeUnit LegTimeUnit_105("STRING_956226651");
      noLegs_0_1_1.set(LegTimeUnit_105);
      InstrumentLeg_105.insert(LegTimeUnit_105.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_105("STRING_1868177578");
      noLegs_0_1_1.set(LegUnitOfMeasure_105);
      InstrumentLeg_105.insert(LegUnitOfMeasure_105.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_105;
      LegUnitOfMeasureQty_105.setString("7207752");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_105);
      InstrumentLeg_105.insert(LegUnitOfMeasureQty_105.getString());
      all_values.push_back(InstrumentLeg_105);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_187;
        FIX::LegSecurityAltID LegSecurityAltID_187("STRING_1334304021");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_187);
        LegSecAltIDGrp_NoLegSecurityAltID_187.insert(LegSecurityAltID_187.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_187("STRING_1451390333");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_187);
        LegSecAltIDGrp_NoLegSecurityAltID_187.insert(LegSecurityAltIDSource_187.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_187);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_13;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_13("CAN");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurveCurrency_13.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_13("STRING_857027957");
      noLegs_0_1_1.set(LegBenchmarkCurveName_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurveName_13.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_13("STRING_1342281048");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurvePoint_13.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_13;
      LegBenchmarkPrice_13.setString("18265850");
      noLegs_0_1_1.set(LegBenchmarkPrice_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkPrice_13.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_13(2130127153);
      noLegs_0_1_1.set(LegBenchmarkPriceType_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkPriceType_13.getString());
      all_values.push_back(LegBenchmarkCurveData_13);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_48;
        FIX::LegStipulationType LegStipulationType_48("STRING_2001992230");
        noLegStipulations_0_1_2_0.set(LegStipulationType_48);
        LegStipulations_NoLegStipulations_48.insert(LegStipulationType_48.getString());
        FIX::LegStipulationValue LegStipulationValue_48("STRING_1262629926");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_48);
        LegStipulations_NoLegStipulations_48.insert(LegStipulationValue_48.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_48);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_49;
        FIX::LegStipulationType LegStipulationType_49("STRING_20913722");
        noLegStipulations_0_1_2_1.set(LegStipulationType_49);
        LegStipulations_NoLegStipulations_49.insert(LegStipulationType_49.getString());
        FIX::LegStipulationValue LegStipulationValue_49("STRING_325817194");
        noLegStipulations_0_1_2_1.set(LegStipulationValue_49);
        LegStipulations_NoLegStipulations_49.insert(LegStipulationValue_49.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_49);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_74;
    FIX::AttachmentPoint AttachmentPoint_74;
    AttachmentPoint_74.setString("35.060000");
    noRelatedSym_0_0.set(AttachmentPoint_74);
    Instrument_74.insert(AttachmentPoint_74.getString());
    FIX::CFICode CFICode_74("STRING_120018691");
    noRelatedSym_0_0.set(CFICode_74);
    Instrument_74.insert(CFICode_74.getString());
    FIX::CPProgram CPProgram_74(1);
    noRelatedSym_0_0.set(CPProgram_74);
    Instrument_74.insert(CPProgram_74.getString());
    FIX::CPRegType CPRegType_74("STRING_1410530575");
    noRelatedSym_0_0.set(CPRegType_74);
    Instrument_74.insert(CPRegType_74.getString());
    FIX::CapPrice CapPrice_74;
    CapPrice_74.setString("15642840");
    noRelatedSym_0_0.set(CapPrice_74);
    Instrument_74.insert(CapPrice_74.getString());
    FIX::ContractMultiplier ContractMultiplier_74;
    ContractMultiplier_74.setString("16522560");
    noRelatedSym_0_0.set(ContractMultiplier_74);
    Instrument_74.insert(ContractMultiplier_74.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_74(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_74);
    Instrument_74.insert(ContractMultiplierUnit_74.getString());
    FIX::ContractSettlMonth ContractSettlMonth_74("MONTHYEAR_328357420");
    noRelatedSym_0_0.set(ContractSettlMonth_74);
    Instrument_74.insert(ContractSettlMonth_74.getString());
    FIX::CountryOfIssue CountryOfIssue_74("COUNTRY_1055150987");
    noRelatedSym_0_0.set(CountryOfIssue_74);
    Instrument_74.insert(CountryOfIssue_74.getString());
    FIX::CouponPaymentDate CouponPaymentDate_74("LOCALMKTDATE_771723261");
    noRelatedSym_0_0.set(CouponPaymentDate_74);
    Instrument_74.insert(CouponPaymentDate_74.getString());
    FIX::CouponRate CouponRate_74;
    CouponRate_74.setString("46.000000");
    noRelatedSym_0_0.set(CouponRate_74);
    Instrument_74.insert(CouponRate_74.getString());
    FIX::CreditRating CreditRating_74("STRING_1852270873");
    noRelatedSym_0_0.set(CreditRating_74);
    Instrument_74.insert(CreditRating_74.getString());
    FIX::DatedDate DatedDate_74("LOCALMKTDATE_1344549309");
    noRelatedSym_0_0.set(DatedDate_74);
    Instrument_74.insert(DatedDate_74.getString());
    FIX::DetachmentPoint DetachmentPoint_74;
    DetachmentPoint_74.setString("29.130000");
    noRelatedSym_0_0.set(DetachmentPoint_74);
    Instrument_74.insert(DetachmentPoint_74.getString());
    FIX::EncodedIssuer EncodedIssuer_74("DATA_661013877");
    noRelatedSym_0_0.set(EncodedIssuer_74);
    Instrument_74.insert(EncodedIssuer_74.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_74(1065243240);
    noRelatedSym_0_0.set(EncodedIssuerLen_74);
    Instrument_74.insert(EncodedIssuerLen_74.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_74("DATA_881958182");
    noRelatedSym_0_0.set(EncodedSecurityDesc_74);
    Instrument_74.insert(EncodedSecurityDesc_74.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_74(1382702388);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_74);
    Instrument_74.insert(EncodedSecurityDescLen_74.getString());
    FIX::ExerciseStyle ExerciseStyle_74(1);
    noRelatedSym_0_0.set(ExerciseStyle_74);
    Instrument_74.insert(ExerciseStyle_74.getString());
    FIX::Factor Factor_74;
    Factor_74.setString("1858648");
    noRelatedSym_0_0.set(Factor_74);
    Instrument_74.insert(Factor_74.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_74(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_74);
    Instrument_74.insert(FlexProductEligibilityIndicator_74.getString());
    FIX::FlexibleIndicator FlexibleIndicator_74(false);
    noRelatedSym_0_0.set(FlexibleIndicator_74);
    Instrument_74.insert(FlexibleIndicator_74.getString());
    FIX::FloorPrice FloorPrice_74;
    FloorPrice_74.setString("10428928");
    noRelatedSym_0_0.set(FloorPrice_74);
    Instrument_74.insert(FloorPrice_74.getString());
    FIX::FlowScheduleType FlowScheduleType_74(0);
    noRelatedSym_0_0.set(FlowScheduleType_74);
    Instrument_74.insert(FlowScheduleType_74.getString());
    FIX::InstrRegistry InstrRegistry_74("STRING_789842663");
    noRelatedSym_0_0.set(InstrRegistry_74);
    Instrument_74.insert(InstrRegistry_74.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_74('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_74);
    Instrument_74.insert(InstrmtAssignmentMethod_74.getString());
    FIX::InterestAccrualDate InterestAccrualDate_74("LOCALMKTDATE_1695405533");
    noRelatedSym_0_0.set(InterestAccrualDate_74);
    Instrument_74.insert(InterestAccrualDate_74.getString());
    FIX::IssueDate IssueDate_74("LOCALMKTDATE_644351245");
    noRelatedSym_0_0.set(IssueDate_74);
    Instrument_74.insert(IssueDate_74.getString());
    FIX::Issuer Issuer_74("STRING_140682608");
    noRelatedSym_0_0.set(Issuer_74);
    Instrument_74.insert(Issuer_74.getString());
    FIX::ListMethod ListMethod_74(1);
    noRelatedSym_0_0.set(ListMethod_74);
    Instrument_74.insert(ListMethod_74.getString());
    FIX::LocaleOfIssue LocaleOfIssue_74("STRING_970168439");
    noRelatedSym_0_0.set(LocaleOfIssue_74);
    Instrument_74.insert(LocaleOfIssue_74.getString());
    FIX::MaturityDate MaturityDate_74("LOCALMKTDATE_1974896114");
    noRelatedSym_0_0.set(MaturityDate_74);
    Instrument_74.insert(MaturityDate_74.getString());
    FIX::MaturityMonthYear MaturityMonthYear_74("MONTHYEAR_1836337947");
    noRelatedSym_0_0.set(MaturityMonthYear_74);
    Instrument_74.insert(MaturityMonthYear_74.getString());
    FIX::MaturityTime MaturityTime_74("TZTIMEONLY_585214471");
    noRelatedSym_0_0.set(MaturityTime_74);
    Instrument_74.insert(MaturityTime_74.getString());
    FIX::MinPriceIncrement MinPriceIncrement_74;
    MinPriceIncrement_74.setString("12379430");
    noRelatedSym_0_0.set(MinPriceIncrement_74);
    Instrument_74.insert(MinPriceIncrement_74.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_74;
    MinPriceIncrementAmount_74.setString("12531383");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_74);
    Instrument_74.insert(MinPriceIncrementAmount_74.getString());
    FIX::NTPositionLimit NTPositionLimit_74(89986829);
    noRelatedSym_0_0.set(NTPositionLimit_74);
    Instrument_74.insert(NTPositionLimit_74.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_74;
    NotionalPercentageOutstanding_74.setString("46.190000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_74);
    Instrument_74.insert(NotionalPercentageOutstanding_74.getString());
    FIX::OptAttribute OptAttribute_74('1');
    noRelatedSym_0_0.set(OptAttribute_74);
    Instrument_74.insert(OptAttribute_74.getString());
    FIX::OptPayoutAmount OptPayoutAmount_74;
    OptPayoutAmount_74.setString("11451378");
    noRelatedSym_0_0.set(OptPayoutAmount_74);
    Instrument_74.insert(OptPayoutAmount_74.getString());
    FIX::OptPayoutType OptPayoutType_74(3);
    noRelatedSym_0_0.set(OptPayoutType_74);
    Instrument_74.insert(OptPayoutType_74.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_74;
    OriginalNotionalPercentageOutstanding_74.setString("66.770000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_74);
    Instrument_74.insert(OriginalNotionalPercentageOutstanding_74.getString());
    FIX::Pool Pool_74("STRING_849925041");
    noRelatedSym_0_0.set(Pool_74);
    Instrument_74.insert(Pool_74.getString());
    FIX::PositionLimit PositionLimit_74(658733542);
    noRelatedSym_0_0.set(PositionLimit_74);
    Instrument_74.insert(PositionLimit_74.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_74("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_74);
    Instrument_74.insert(PriceQuoteMethod_74.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_74("STRING_1510938918");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_74);
    Instrument_74.insert(PriceUnitOfMeasure_74.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_74;
    PriceUnitOfMeasureQty_74.setString("17239767");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_74);
    Instrument_74.insert(PriceUnitOfMeasureQty_74.getString());
    FIX::Product Product_76(3);
    noRelatedSym_0_0.set(Product_76);
    Instrument_74.insert(Product_76.getString());
    FIX::ProductComplex ProductComplex_74("STRING_746157659");
    noRelatedSym_0_0.set(ProductComplex_74);
    Instrument_74.insert(ProductComplex_74.getString());
    FIX::PutOrCall PutOrCall_74(1);
    noRelatedSym_0_0.set(PutOrCall_74);
    Instrument_74.insert(PutOrCall_74.getString());
    FIX::RedemptionDate RedemptionDate_74("LOCALMKTDATE_1873892639");
    noRelatedSym_0_0.set(RedemptionDate_74);
    Instrument_74.insert(RedemptionDate_74.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_74("STRING_1263759115");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_74);
    Instrument_74.insert(RepoCollateralSecurityType_74.getString());
    FIX::RepurchaseRate RepurchaseRate_74;
    RepurchaseRate_74.setString("80.360000");
    noRelatedSym_0_0.set(RepurchaseRate_74);
    Instrument_74.insert(RepurchaseRate_74.getString());
    FIX::RepurchaseTerm RepurchaseTerm_74(769301816);
    noRelatedSym_0_0.set(RepurchaseTerm_74);
    Instrument_74.insert(RepurchaseTerm_74.getString());
    FIX::RestructuringType RestructuringType_74("STRING_FR");
    noRelatedSym_0_0.set(RestructuringType_74);
    Instrument_74.insert(RestructuringType_74.getString());
    FIX::SecurityDesc SecurityDesc_74("STRING_1729140699");
    noRelatedSym_0_0.set(SecurityDesc_74);
    Instrument_74.insert(SecurityDesc_74.getString());
    FIX::SecurityExchange SecurityExchange_74("EXCHANGE_1794838146");
    noRelatedSym_0_0.set(SecurityExchange_74);
    Instrument_74.insert(SecurityExchange_74.getString());
    FIX::SecurityGroup SecurityGroup_74("STRING_524079858");
    noRelatedSym_0_0.set(SecurityGroup_74);
    Instrument_74.insert(SecurityGroup_74.getString());
    FIX::SecurityID SecurityID_74("STRING_226008296");
    noRelatedSym_0_0.set(SecurityID_74);
    Instrument_74.insert(SecurityID_74.getString());
    FIX::SecurityIDSource SecurityIDSource_74("STRING_3");
    noRelatedSym_0_0.set(SecurityIDSource_74);
    Instrument_74.insert(SecurityIDSource_74.getString());
    FIX::SecurityStatus SecurityStatus_74("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_74);
    Instrument_74.insert(SecurityStatus_74.getString());
    FIX::SecuritySubType SecuritySubType_75("STRING_1196176736");
    noRelatedSym_0_0.set(SecuritySubType_75);
    Instrument_74.insert(SecuritySubType_75.getString());
    FIX::SecurityType SecurityType_76("STRING_PEF");
    noRelatedSym_0_0.set(SecurityType_76);
    Instrument_74.insert(SecurityType_76.getString());
    FIX::Seniority Seniority_74("STRING_SB");
    noRelatedSym_0_0.set(Seniority_74);
    Instrument_74.insert(Seniority_74.getString());
    FIX::SettlMethod SettlMethod_74('P');
    noRelatedSym_0_0.set(SettlMethod_74);
    Instrument_74.insert(SettlMethod_74.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_74("STRING_853392614");
    noRelatedSym_0_0.set(SettleOnOpenFlag_74);
    Instrument_74.insert(SettleOnOpenFlag_74.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_74("STRING_1034908069");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_74);
    Instrument_74.insert(StateOrProvinceOfIssue_74.getString());
    FIX::StrikeCurrency StrikeCurrency_74("GBP");
    noRelatedSym_0_0.set(StrikeCurrency_74);
    Instrument_74.insert(StrikeCurrency_74.getString());
    FIX::StrikeMultiplier StrikeMultiplier_74;
    StrikeMultiplier_74.setString("4689201");
    noRelatedSym_0_0.set(StrikeMultiplier_74);
    Instrument_74.insert(StrikeMultiplier_74.getString());
    FIX::StrikePrice StrikePrice_74;
    StrikePrice_74.setString("8690322");
    noRelatedSym_0_0.set(StrikePrice_74);
    Instrument_74.insert(StrikePrice_74.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_74(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_74);
    Instrument_74.insert(StrikePriceBoundaryMethod_74.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_74;
    StrikePriceBoundaryPrecision_74.setString("68.230000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_74);
    Instrument_74.insert(StrikePriceBoundaryPrecision_74.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_74(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_74);
    Instrument_74.insert(StrikePriceDeterminationMethod_74.getString());
    FIX::StrikeValue StrikeValue_74;
    StrikeValue_74.setString("15162550");
    noRelatedSym_0_0.set(StrikeValue_74);
    Instrument_74.insert(StrikeValue_74.getString());
    FIX::Symbol Symbol_74("STRING_1919876413");
    noRelatedSym_0_0.set(Symbol_74);
    Instrument_74.insert(Symbol_74.getString());
    FIX::SymbolSfx SymbolSfx_74("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_74);
    Instrument_74.insert(SymbolSfx_74.getString());
    FIX::TimeUnit TimeUnit_74("STRING_D");
    noRelatedSym_0_0.set(TimeUnit_74);
    Instrument_74.insert(TimeUnit_74.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_74(2);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_74);
    Instrument_74.insert(UnderlyingPriceDeterminationMethod_74.getString());
    FIX::UnitOfMeasure UnitOfMeasure_74("STRING_MWh");
    noRelatedSym_0_0.set(UnitOfMeasure_74);
    Instrument_74.insert(UnitOfMeasure_74.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_74;
    UnitOfMeasureQty_74.setString("9213048");
    noRelatedSym_0_0.set(UnitOfMeasureQty_74);
    Instrument_74.insert(UnitOfMeasureQty_74.getString());
    FIX::ValuationMethod ValuationMethod_74("STRING_CDS");
    noRelatedSym_0_0.set(ValuationMethod_74);
    Instrument_74.insert(ValuationMethod_74.getString());
    all_values.push_back(Instrument_74);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_138;
      FIX::ComplexEventCondition ComplexEventCondition_138(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventCondition_138.getString());
      FIX::ComplexEventPrice ComplexEventPrice_138;
      ComplexEventPrice_138.setString("19561313");
      noComplexEvents_0_1_0.set(ComplexEventPrice_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventPrice_138.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_138(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceBoundaryMethod_138.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_138;
      ComplexEventPriceBoundaryPrecision_138.setString("99.780000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceBoundaryPrecision_138.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_138(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventPriceTimeType_138.getString());
      FIX::ComplexEventType ComplexEventType_138(3);
      noComplexEvents_0_1_0.set(ComplexEventType_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexEventType_138.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_138;
      ComplexOptPayoutAmount_138.setString("16682682");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_138);
      ComplexEvents_NoComplexEvents_138.insert(ComplexOptPayoutAmount_138.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_138);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_287;
        FIX::ComplexEventEndDate ComplexEventEndDate_287(FIX::UTCTIMESTAMP(2, 23, 35, 25, 22012));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_287);
        ComplexEventDates_NoComplexEventDates_287.insert(ComplexEventEndDate_287.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_287(FIX::UTCTIMESTAMP(19, 10, 13, 2, 62013));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_287);
        ComplexEventDates_NoComplexEventDates_287.insert(ComplexEventStartDate_287.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_287);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_570;
          FIX::ComplexEventEndTime ComplexEventEndTime_570(FIX::UTCTIMEONLY(19, 45, 27));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_570);
          ComplexEventTimes_NoComplexEventTimes_570.insert(ComplexEventEndTime_570.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_570(FIX::UTCTIMEONLY(15, 27, 48));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_570);
          ComplexEventTimes_NoComplexEventTimes_570.insert(ComplexEventStartTime_570.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_570);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_571;
          FIX::ComplexEventEndTime ComplexEventEndTime_571(FIX::UTCTIMEONLY(12, 43, 3));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_571);
          ComplexEventTimes_NoComplexEventTimes_571.insert(ComplexEventEndTime_571.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_571(FIX::UTCTIMEONLY(4, 18, 30));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_571);
          ComplexEventTimes_NoComplexEventTimes_571.insert(ComplexEventStartTime_571.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_571);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_572;
          FIX::ComplexEventEndTime ComplexEventEndTime_572(FIX::UTCTIMEONLY(12, 45, 26));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_572);
          ComplexEventTimes_NoComplexEventTimes_572.insert(ComplexEventEndTime_572.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_572(FIX::UTCTIMEONLY(2, 50, 43));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_572);
          ComplexEventTimes_NoComplexEventTimes_572.insert(ComplexEventStartTime_572.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_572);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_288;
        FIX::ComplexEventEndDate ComplexEventEndDate_288(FIX::UTCTIMESTAMP(16, 57, 0, 9, 92012));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_288);
        ComplexEventDates_NoComplexEventDates_288.insert(ComplexEventEndDate_288.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_288(FIX::UTCTIMESTAMP(15, 27, 18, 17, 112015));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_288);
        ComplexEventDates_NoComplexEventDates_288.insert(ComplexEventStartDate_288.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_288);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_573;
          FIX::ComplexEventEndTime ComplexEventEndTime_573(FIX::UTCTIMEONLY(10, 17, 31));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_573);
          ComplexEventTimes_NoComplexEventTimes_573.insert(ComplexEventEndTime_573.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_573(FIX::UTCTIMEONLY(21, 41, 52));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_573);
          ComplexEventTimes_NoComplexEventTimes_573.insert(ComplexEventStartTime_573.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_573);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_574;
          FIX::ComplexEventEndTime ComplexEventEndTime_574(FIX::UTCTIMEONLY(10, 37, 6));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_574);
          ComplexEventTimes_NoComplexEventTimes_574.insert(ComplexEventEndTime_574.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_574(FIX::UTCTIMEONLY(3, 48, 3));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_574);
          ComplexEventTimes_NoComplexEventTimes_574.insert(ComplexEventStartTime_574.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_574);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_575;
          FIX::ComplexEventEndTime ComplexEventEndTime_575(FIX::UTCTIMEONLY(4, 52, 33));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_575);
          ComplexEventTimes_NoComplexEventTimes_575.insert(ComplexEventEndTime_575.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_575(FIX::UTCTIMEONLY(4, 16, 28));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_575);
          ComplexEventTimes_NoComplexEventTimes_575.insert(ComplexEventStartTime_575.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_575);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_139;
      FIX::ComplexEventCondition ComplexEventCondition_139(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventCondition_139.getString());
      FIX::ComplexEventPrice ComplexEventPrice_139;
      ComplexEventPrice_139.setString("487673");
      noComplexEvents_0_1_1.set(ComplexEventPrice_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPrice_139.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_139(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceBoundaryMethod_139.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_139;
      ComplexEventPriceBoundaryPrecision_139.setString("26.760000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceBoundaryPrecision_139.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_139(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventPriceTimeType_139.getString());
      FIX::ComplexEventType ComplexEventType_139(4);
      noComplexEvents_0_1_1.set(ComplexEventType_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexEventType_139.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_139;
      ComplexOptPayoutAmount_139.setString("20213246");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_139);
      ComplexEvents_NoComplexEvents_139.insert(ComplexOptPayoutAmount_139.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_139);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_289;
        FIX::ComplexEventEndDate ComplexEventEndDate_289(FIX::UTCTIMESTAMP(19, 1, 48, 4, 122016));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_289);
        ComplexEventDates_NoComplexEventDates_289.insert(ComplexEventEndDate_289.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_289(FIX::UTCTIMESTAMP(21, 9, 51, 21, 52016));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_289);
        ComplexEventDates_NoComplexEventDates_289.insert(ComplexEventStartDate_289.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_289);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_576;
          FIX::ComplexEventEndTime ComplexEventEndTime_576(FIX::UTCTIMEONLY(0, 21, 59));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_576);
          ComplexEventTimes_NoComplexEventTimes_576.insert(ComplexEventEndTime_576.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_576(FIX::UTCTIMEONLY(13, 15, 2));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_576);
          ComplexEventTimes_NoComplexEventTimes_576.insert(ComplexEventStartTime_576.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_576);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_290;
        FIX::ComplexEventEndDate ComplexEventEndDate_290(FIX::UTCTIMESTAMP(15, 41, 57, 17, 102005));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_290);
        ComplexEventDates_NoComplexEventDates_290.insert(ComplexEventEndDate_290.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_290(FIX::UTCTIMESTAMP(23, 54, 24, 11, 42005));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_290);
        ComplexEventDates_NoComplexEventDates_290.insert(ComplexEventStartDate_290.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_290);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_577;
          FIX::ComplexEventEndTime ComplexEventEndTime_577(FIX::UTCTIMEONLY(12, 52, 19));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_577);
          ComplexEventTimes_NoComplexEventTimes_577.insert(ComplexEventEndTime_577.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_577(FIX::UTCTIMEONLY(20, 51, 22));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_577);
          ComplexEventTimes_NoComplexEventTimes_577.insert(ComplexEventStartTime_577.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_577);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_291;
        FIX::ComplexEventEndDate ComplexEventEndDate_291(FIX::UTCTIMESTAMP(20, 35, 10, 10, 52011));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_291);
        ComplexEventDates_NoComplexEventDates_291.insert(ComplexEventEndDate_291.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_291(FIX::UTCTIMESTAMP(17, 8, 57, 3, 22012));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_291);
        ComplexEventDates_NoComplexEventDates_291.insert(ComplexEventStartDate_291.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_291);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_578;
          FIX::ComplexEventEndTime ComplexEventEndTime_578(FIX::UTCTIMEONLY(17, 13, 49));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_578);
          ComplexEventTimes_NoComplexEventTimes_578.insert(ComplexEventEndTime_578.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_578(FIX::UTCTIMEONLY(4, 48, 11));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_578);
          ComplexEventTimes_NoComplexEventTimes_578.insert(ComplexEventStartTime_578.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_578);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_579;
          FIX::ComplexEventEndTime ComplexEventEndTime_579(FIX::UTCTIMEONLY(1, 3, 43));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_579);
          ComplexEventTimes_NoComplexEventTimes_579.insert(ComplexEventEndTime_579.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_579(FIX::UTCTIMEONLY(4, 27, 0));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_579);
          ComplexEventTimes_NoComplexEventTimes_579.insert(ComplexEventStartTime_579.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_579);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_580;
          FIX::ComplexEventEndTime ComplexEventEndTime_580(FIX::UTCTIMEONLY(11, 35, 52));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventEndTime_580);
          ComplexEventTimes_NoComplexEventTimes_580.insert(ComplexEventEndTime_580.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_580(FIX::UTCTIMEONLY(8, 10, 9));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventStartTime_580);
          ComplexEventTimes_NoComplexEventTimes_580.insert(ComplexEventStartTime_580.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_580);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_142;
      FIX::EventDate EventDate_142("LOCALMKTDATE_100386730");
      noEvents_0_1_0.set(EventDate_142);
      EvntGrp_NoEvents_142.insert(EventDate_142.getString());
      FIX::EventPx EventPx_142;
      EventPx_142.setString("3437791");
      noEvents_0_1_0.set(EventPx_142);
      EvntGrp_NoEvents_142.insert(EventPx_142.getString());
      FIX::EventText EventText_142("STRING_1975608272");
      noEvents_0_1_0.set(EventText_142);
      EvntGrp_NoEvents_142.insert(EventText_142.getString());
      FIX::EventTime EventTime_142(FIX::UTCTIMESTAMP(1, 51, 36, 27, 92001));
      noEvents_0_1_0.set(EventTime_142);
      EvntGrp_NoEvents_142.insert(EventTime_142.getString());
      FIX::EventType EventType_142(99);
      noEvents_0_1_0.set(EventType_142);
      EvntGrp_NoEvents_142.insert(EventType_142.getString());
      all_values.push_back(EvntGrp_NoEvents_142);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_143;
      FIX::EventDate EventDate_143("LOCALMKTDATE_27847012");
      noEvents_0_1_1.set(EventDate_143);
      EvntGrp_NoEvents_143.insert(EventDate_143.getString());
      FIX::EventPx EventPx_143;
      EventPx_143.setString("17586374");
      noEvents_0_1_1.set(EventPx_143);
      EvntGrp_NoEvents_143.insert(EventPx_143.getString());
      FIX::EventText EventText_143("STRING_77091883");
      noEvents_0_1_1.set(EventText_143);
      EvntGrp_NoEvents_143.insert(EventText_143.getString());
      FIX::EventTime EventTime_143(FIX::UTCTIMESTAMP(7, 46, 59, 21, 72002));
      noEvents_0_1_1.set(EventTime_143);
      EvntGrp_NoEvents_143.insert(EventTime_143.getString());
      FIX::EventType EventType_143(7);
      noEvents_0_1_1.set(EventType_143);
      EvntGrp_NoEvents_143.insert(EventType_143.getString());
      all_values.push_back(EvntGrp_NoEvents_143);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_142;
      FIX::InstrumentPartyID InstrumentPartyID_142("STRING_531754661");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyID_142.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_142('2');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyIDSource_142.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_142(1624455593);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_142);
      InstrumentParties_NoInstrumentParties_142.insert(InstrumentPartyRole_142.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_142);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284;
        FIX::InstrumentPartySubID InstrumentPartySubID_284("STRING_409838013");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_284);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284.insert(InstrumentPartySubID_284.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_284(497763295);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_284);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284.insert(InstrumentPartySubIDType_284.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_284);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285;
        FIX::InstrumentPartySubID InstrumentPartySubID_285("STRING_310150176");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_285);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285.insert(InstrumentPartySubID_285.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_285(311926527);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_285);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285.insert(InstrumentPartySubIDType_285.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286;
        FIX::InstrumentPartySubID InstrumentPartySubID_286("STRING_598150026");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_286);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286.insert(InstrumentPartySubID_286.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_286(653929303);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_286);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286.insert(InstrumentPartySubIDType_286.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_143;
      FIX::InstrumentPartyID InstrumentPartyID_143("STRING_140051151");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyID_143.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_143('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyIDSource_143.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_143(1426184744);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_143);
      InstrumentParties_NoInstrumentParties_143.insert(InstrumentPartyRole_143.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_143);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287;
        FIX::InstrumentPartySubID InstrumentPartySubID_287("STRING_1719095394");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_287);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287.insert(InstrumentPartySubID_287.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_287(997690675);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_287);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287.insert(InstrumentPartySubIDType_287.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_156;
      FIX::SecurityAltID SecurityAltID_156("STRING_19616412");
      noSecurityAltID_0_1_0.set(SecurityAltID_156);
      SecAltIDGrp_NoSecurityAltID_156.insert(SecurityAltID_156.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_156("STRING_2041318835");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_156);
      SecAltIDGrp_NoSecurityAltID_156.insert(SecurityAltIDSource_156.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_156);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_148;
    FIX::SecurityXML SecurityXML_149("XMLDATA_556483282");
    noRelatedSym_0_0.set(SecurityXML_149);
    FIX::SecurityXMLLen SecurityXMLLen_74(1778253866);
    noRelatedSym_0_0.set(SecurityXMLLen_74);
    FIX::SecurityXMLSchema SecurityXMLSchema_74("STRING_2118410718");
    noRelatedSym_0_0.set(SecurityXMLSchema_74);
    SecurityXML_148.insert(SecurityXMLSchema_74.getString());
    all_values.push_back(SecurityXML_148);

    // InstrumentExtension
    multiset<string> InstrumentExtension_11;
    FIX::DeliveryForm DeliveryForm_11(1);
    noRelatedSym_0_0.set(DeliveryForm_11);
    InstrumentExtension_11.insert(DeliveryForm_11.getString());
    FIX::PctAtRisk PctAtRisk_11;
    PctAtRisk_11.setString("43.050000");
    noRelatedSym_0_0.set(PctAtRisk_11);
    InstrumentExtension_11.insert(PctAtRisk_11.getString());
    all_values.push_back(InstrumentExtension_11);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_23;
      FIX::InstrAttribType InstrAttribType_23(9);
      noInstrAttrib_0_1_0.set(InstrAttribType_23);
      AttrbGrp_NoInstrAttrib_23.insert(InstrAttribType_23.getString());
      FIX::InstrAttribValue InstrAttribValue_23("STRING_560710930");
      noInstrAttrib_0_1_0.set(InstrAttribValue_23);
      AttrbGrp_NoInstrAttrib_23.insert(InstrAttribValue_23.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_23);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_24;
      FIX::InstrAttribType InstrAttribType_24(8);
      noInstrAttrib_0_1_1.set(InstrAttribType_24);
      AttrbGrp_NoInstrAttrib_24.insert(InstrAttribType_24.getString());
      FIX::InstrAttribValue InstrAttribValue_24("STRING_488415416");
      noInstrAttrib_0_1_1.set(InstrAttribValue_24);
      AttrbGrp_NoInstrAttrib_24.insert(InstrAttribValue_24.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_24);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_25;
      FIX::InstrAttribType InstrAttribType_25(27);
      noInstrAttrib_0_1_2.set(InstrAttribType_25);
      AttrbGrp_NoInstrAttrib_25.insert(InstrAttribType_25.getString());
      FIX::InstrAttribValue InstrAttribValue_25("STRING_1156116968");
      noInstrAttrib_0_1_2.set(InstrAttribValue_25);
      AttrbGrp_NoInstrAttrib_25.insert(InstrAttribValue_25.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_25);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_13;
    FIX::ExpirationCycle ExpirationCycle_14(2);
    noRelatedSym_0_0.set(ExpirationCycle_14);
    BaseTradingRules_13.insert(ExpirationCycle_14.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_13(2);
    noRelatedSym_0_0.set(ImpliedMarketIndicator_13);
    BaseTradingRules_13.insert(ImpliedMarketIndicator_13.getString());
    FIX::MaxPriceVariation MaxPriceVariation_13;
    MaxPriceVariation_13.setString("6330889");
    noRelatedSym_0_0.set(MaxPriceVariation_13);
    BaseTradingRules_13.insert(MaxPriceVariation_13.getString());
    FIX::MaxTradeVol MaxTradeVol_13;
    MaxTradeVol_13.setString("11508679");
    noRelatedSym_0_0.set(MaxTradeVol_13);
    BaseTradingRules_13.insert(MaxTradeVol_13.getString());
    FIX::MinTradeVol MinTradeVol_13;
    MinTradeVol_13.setString("19244713");
    noRelatedSym_0_0.set(MinTradeVol_13);
    BaseTradingRules_13.insert(MinTradeVol_13.getString());
    FIX::MultilegModel MultilegModel_15(1);
    noRelatedSym_0_0.set(MultilegModel_15);
    BaseTradingRules_13.insert(MultilegModel_15.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_15(4);
    noRelatedSym_0_0.set(MultilegPriceMethod_15);
    BaseTradingRules_13.insert(MultilegPriceMethod_15.getString());
    FIX::PriceType PriceType_46(3);
    noRelatedSym_0_0.set(PriceType_46);
    BaseTradingRules_13.insert(PriceType_46.getString());
    FIX::RoundLot RoundLot_13;
    RoundLot_13.setString("17290022");
    noRelatedSym_0_0.set(RoundLot_13);
    BaseTradingRules_13.insert(RoundLot_13.getString());
    FIX::TradingCurrency TradingCurrency_13("USD");
    noRelatedSym_0_0.set(TradingCurrency_13);
    BaseTradingRules_13.insert(TradingCurrency_13.getString());
    all_values.push_back(BaseTradingRules_13);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_28;
      FIX::LotType LotType_32('1');
      noLotTypeRules_0_1_0.set(LotType_32);
      LotTypeRules_NoLotTypeRules_28.insert(LotType_32.getString());
      FIX::MinLotSize MinLotSize_28;
      MinLotSize_28.setString("1466033");
      noLotTypeRules_0_1_0.set(MinLotSize_28);
      LotTypeRules_NoLotTypeRules_28.insert(MinLotSize_28.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_28);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_29;
      FIX::LotType LotType_33('4');
      noLotTypeRules_0_1_1.set(LotType_33);
      LotTypeRules_NoLotTypeRules_29.insert(LotType_33.getString());
      FIX::MinLotSize MinLotSize_29;
      MinLotSize_29.setString("2438555");
      noLotTypeRules_0_1_1.set(MinLotSize_29);
      LotTypeRules_NoLotTypeRules_29.insert(MinLotSize_29.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_29);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_30;
      FIX::LotType LotType_34('4');
      noLotTypeRules_0_1_2.set(LotType_34);
      LotTypeRules_NoLotTypeRules_30.insert(LotType_34.getString());
      FIX::MinLotSize MinLotSize_30;
      MinLotSize_30.setString("5022175");
      noLotTypeRules_0_1_2.set(MinLotSize_30);
      LotTypeRules_NoLotTypeRules_30.insert(MinLotSize_30.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_30);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_13;
    FIX::HighLimitPrice HighLimitPrice_13;
    HighLimitPrice_13.setString("1376907");
    noRelatedSym_0_0.set(HighLimitPrice_13);
    PriceLimits_13.insert(HighLimitPrice_13.getString());
    FIX::LowLimitPrice LowLimitPrice_13;
    LowLimitPrice_13.setString("12317229");
    noRelatedSym_0_0.set(LowLimitPrice_13);
    PriceLimits_13.insert(LowLimitPrice_13.getString());
    FIX::PriceLimitType PriceLimitType_13(0);
    noRelatedSym_0_0.set(PriceLimitType_13);
    PriceLimits_13.insert(PriceLimitType_13.getString());
    FIX::TradingReferencePrice TradingReferencePrice_13;
    TradingReferencePrice_13.setString("1086177");
    noRelatedSym_0_0.set(TradingReferencePrice_13);
    PriceLimits_13.insert(TradingReferencePrice_13.getString());
    all_values.push_back(PriceLimits_13);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_23;
      FIX::EndTickPriceRange EndTickPriceRange_23;
      EndTickPriceRange_23.setString("7166821");
      noTickRules_0_1_0.set(EndTickPriceRange_23);
      TickRules_NoTickRules_23.insert(EndTickPriceRange_23.getString());
      FIX::StartTickPriceRange StartTickPriceRange_23;
      StartTickPriceRange_23.setString("19838940");
      noTickRules_0_1_0.set(StartTickPriceRange_23);
      TickRules_NoTickRules_23.insert(StartTickPriceRange_23.getString());
      FIX::TickIncrement TickIncrement_23;
      TickIncrement_23.setString("2116054");
      noTickRules_0_1_0.set(TickIncrement_23);
      TickRules_NoTickRules_23.insert(TickIncrement_23.getString());
      FIX::TickRuleType TickRuleType_23(2);
      noTickRules_0_1_0.set(TickRuleType_23);
      TickRules_NoTickRules_23.insert(TickRuleType_23.getString());
      all_values.push_back(TickRules_NoTickRules_23);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_25;
      FIX::NestedInstrAttribType NestedInstrAttribType_25(700020866);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_25);
      NestedInstrumentAttribute_NoNestedInstrAttrib_25.insert(NestedInstrAttribType_25.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_25("STRING_360342165");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_25);
      NestedInstrumentAttribute_NoNestedInstrAttrib_25.insert(NestedInstrAttribValue_25.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_25);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_26;
      FIX::NestedInstrAttribType NestedInstrAttribType_26(1490457088);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_26);
      NestedInstrumentAttribute_NoNestedInstrAttrib_26.insert(NestedInstrAttribType_26.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_26("STRING_1720190944");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_26);
      NestedInstrumentAttribute_NoNestedInstrAttrib_26.insert(NestedInstrAttribValue_26.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_26);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_27;
      FIX::NestedInstrAttribType NestedInstrAttribType_27(1874975515);
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribType_27);
      NestedInstrumentAttribute_NoNestedInstrAttrib_27.insert(NestedInstrAttribType_27.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_27("STRING_2123546001");
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribValue_27);
      NestedInstrumentAttribute_NoNestedInstrAttrib_27.insert(NestedInstrAttribValue_27.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_27);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_22;
      FIX::TradingSessionID TradingSessionID_85("STRING_2");
      noTradingSessionRules_0_1_0.set(TradingSessionID_85);
      TradingSessionRulesGrp_NoTradingSessionRules_22.insert(TradingSessionID_85.getString());
      FIX::TradingSessionSubID TradingSessionSubID_85("STRING_6");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_85);
      TradingSessionRulesGrp_NoTradingSessionRules_22.insert(TradingSessionSubID_85.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_22);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_49;
        FIX::ExecInstValue ExecInstValue_49('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_49);
        ExecInstRules_NoExecInstRules_49.insert(ExecInstValue_49.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_49);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_45;
        FIX::MDBookType MDBookType_47(2);
        noMDFeedTypes_0_0_2_0.set(MDBookType_47);
        MarketDataFeedTypes_NoMDFeedTypes_45.insert(MDBookType_47.getString());
        FIX::MDFeedType MDFeedType_47("STRING_1969842867");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_47);
        MarketDataFeedTypes_NoMDFeedTypes_45.insert(MDFeedType_47.getString());
        FIX::MarketDepth MarketDepth_48(1599422574);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_48);
        MarketDataFeedTypes_NoMDFeedTypes_45.insert(MarketDepth_48.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_45);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_46;
        FIX::MDBookType MDBookType_48(2);
        noMDFeedTypes_0_0_2_1.set(MDBookType_48);
        MarketDataFeedTypes_NoMDFeedTypes_46.insert(MDBookType_48.getString());
        FIX::MDFeedType MDFeedType_48("STRING_2116446236");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_48);
        MarketDataFeedTypes_NoMDFeedTypes_46.insert(MDFeedType_48.getString());
        FIX::MarketDepth MarketDepth_49(2082023746);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_49);
        MarketDataFeedTypes_NoMDFeedTypes_46.insert(MarketDepth_49.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_46);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_50;
        FIX::MatchAlgorithm MatchAlgorithm_50("STRING_644202227");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_50);
        MatchRules_NoMatchRules_50.insert(MatchAlgorithm_50.getString());
        FIX::MatchType MatchType_55("STRING_M4");
        noMatchRules_0_0_2_0.set(MatchType_55);
        MatchRules_NoMatchRules_50.insert(MatchType_55.getString());
        all_values.push_back(MatchRules_NoMatchRules_50);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_53;
        FIX::OrdType OrdType_76('L');
        noOrdTypeRules_0_0_2_0.set(OrdType_76);
        OrdTypeRules_NoOrdTypeRules_53.insert(OrdType_76.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_53);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_50;
        FIX::TimeInForce TimeInForce_63('5');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_63);
        TimeInForceRules_NoTimeInForceRules_50.insert(TimeInForce_63.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_50);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_23;
      FIX::TradingSessionID TradingSessionID_86("STRING_1");
      noTradingSessionRules_0_1_1.set(TradingSessionID_86);
      TradingSessionRulesGrp_NoTradingSessionRules_23.insert(TradingSessionID_86.getString());
      FIX::TradingSessionSubID TradingSessionSubID_86("STRING_7");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_86);
      TradingSessionRulesGrp_NoTradingSessionRules_23.insert(TradingSessionSubID_86.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_23);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_50;
        FIX::ExecInstValue ExecInstValue_50('1');
        noExecInstRules_0_1_2_0.set(ExecInstValue_50);
        ExecInstRules_NoExecInstRules_50.insert(ExecInstValue_50.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_50);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_51;
        FIX::ExecInstValue ExecInstValue_51('4');
        noExecInstRules_0_1_2_1.set(ExecInstValue_51);
        ExecInstRules_NoExecInstRules_51.insert(ExecInstValue_51.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_51);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_47;
        FIX::MDBookType MDBookType_49(1);
        noMDFeedTypes_0_1_2_0.set(MDBookType_49);
        MarketDataFeedTypes_NoMDFeedTypes_47.insert(MDBookType_49.getString());
        FIX::MDFeedType MDFeedType_49("STRING_776679144");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_49);
        MarketDataFeedTypes_NoMDFeedTypes_47.insert(MDFeedType_49.getString());
        FIX::MarketDepth MarketDepth_50(1402109948);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_50);
        MarketDataFeedTypes_NoMDFeedTypes_47.insert(MarketDepth_50.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_47);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_51;
        FIX::MatchAlgorithm MatchAlgorithm_51("STRING_504171011");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_51);
        MatchRules_NoMatchRules_51.insert(MatchAlgorithm_51.getString());
        FIX::MatchType MatchType_56("STRING_1");
        noMatchRules_0_1_2_0.set(MatchType_56);
        MatchRules_NoMatchRules_51.insert(MatchType_56.getString());
        all_values.push_back(MatchRules_NoMatchRules_51);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_52;
        FIX::MatchAlgorithm MatchAlgorithm_52("STRING_123874786");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_52);
        MatchRules_NoMatchRules_52.insert(MatchAlgorithm_52.getString());
        FIX::MatchType MatchType_57("STRING_5");
        noMatchRules_0_1_2_1.set(MatchType_57);
        MatchRules_NoMatchRules_52.insert(MatchType_57.getString());
        all_values.push_back(MatchRules_NoMatchRules_52);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_53;
        FIX::MatchAlgorithm MatchAlgorithm_53("STRING_337603216");
        noMatchRules_0_1_2_2.set(MatchAlgorithm_53);
        MatchRules_NoMatchRules_53.insert(MatchAlgorithm_53.getString());
        FIX::MatchType MatchType_58("STRING_1");
        noMatchRules_0_1_2_2.set(MatchType_58);
        MatchRules_NoMatchRules_53.insert(MatchType_58.getString());
        all_values.push_back(MatchRules_NoMatchRules_53);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_54;
        FIX::OrdType OrdType_77('7');
        noOrdTypeRules_0_1_2_0.set(OrdType_77);
        OrdTypeRules_NoOrdTypeRules_54.insert(OrdType_77.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_54);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_55;
        FIX::OrdType OrdType_78('A');
        noOrdTypeRules_0_1_2_1.set(OrdType_78);
        OrdTypeRules_NoOrdTypeRules_55.insert(OrdType_78.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_55);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_56;
        FIX::OrdType OrdType_79('G');
        noOrdTypeRules_0_1_2_2.set(OrdType_79);
        OrdTypeRules_NoOrdTypeRules_56.insert(OrdType_79.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_56);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_51;
        FIX::TimeInForce TimeInForce_64('8');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_64);
        TimeInForceRules_NoTimeInForceRules_51.insert(TimeInForce_64.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_51);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_52;
        FIX::TimeInForce TimeInForce_65('5');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_65);
        TimeInForceRules_NoTimeInForceRules_52.insert(TimeInForce_65.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_52);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_31;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_31("GBP");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurveCurrency_31.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_31("STRING_MuniAAA");
    noRelatedSym_0_0.set(BenchmarkCurveName_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurveName_31.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_31("STRING_849273072");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurvePoint_31.getString());
    FIX::BenchmarkPrice BenchmarkPrice_31;
    BenchmarkPrice_31.setString("6906581");
    noRelatedSym_0_0.set(BenchmarkPrice_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkPrice_31.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_31(1913493603);
    noRelatedSym_0_0.set(BenchmarkPriceType_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkPriceType_31.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_31("STRING_1419018555");
    noRelatedSym_0_0.set(BenchmarkSecurityID_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkSecurityID_31.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_31("STRING_431560457");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkSecurityIDSource_31.getString());
    FIX::Spread Spread_31;
    Spread_31.setString("8294595");
    noRelatedSym_0_0.set(Spread_31);
    SpreadOrBenchmarkCurveData_31.insert(Spread_31.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_31);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_56;
      FIX::StipulationType StipulationType_56("STRING_PPC");
      noStipulations_0_1_0.set(StipulationType_56);
      Stipulations_NoStipulations_56.insert(StipulationType_56.getString());
      FIX::StipulationValue StipulationValue_56("STRING_2104514606");
      noStipulations_0_1_0.set(StipulationValue_56);
      Stipulations_NoStipulations_56.insert(StipulationValue_56.getString());
      all_values.push_back(Stipulations_NoStipulations_56);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_57;
      FIX::StipulationType StipulationType_57("STRING_REDEMPTION");
      noStipulations_0_1_1.set(StipulationType_57);
      Stipulations_NoStipulations_57.insert(StipulationType_57.getString());
      FIX::StipulationValue StipulationValue_57("STRING_2068009706");
      noStipulations_0_1_1.set(StipulationValue_57);
      Stipulations_NoStipulations_57.insert(StipulationValue_57.getString());
      all_values.push_back(Stipulations_NoStipulations_57);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_58;
      FIX::StipulationType StipulationType_58("STRING_MHP");
      noStipulations_0_1_2.set(StipulationType_58);
      Stipulations_NoStipulations_58.insert(StipulationType_58.getString());
      FIX::StipulationValue StipulationValue_58("STRING_1750978619");
      noStipulations_0_1_2.set(StipulationValue_58);
      Stipulations_NoStipulations_58.insert(StipulationValue_58.getString());
      all_values.push_back(Stipulations_NoStipulations_58);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_19;
      FIX::EndStrikePxRange EndStrikePxRange_19;
      EndStrikePxRange_19.setString("13324064");
      noStrikeRules_0_1_0.set(EndStrikePxRange_19);
      StrikeRules_NoStrikeRules_19.insert(EndStrikePxRange_19.getString());
      FIX::StartStrikePxRange StartStrikePxRange_19;
      StartStrikePxRange_19.setString("1076659");
      noStrikeRules_0_1_0.set(StartStrikePxRange_19);
      StrikeRules_NoStrikeRules_19.insert(StartStrikePxRange_19.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_19(553324660);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_19);
      StrikeRules_NoStrikeRules_19.insert(StrikeExerciseStyle_19.getString());
      FIX::StrikeIncrement StrikeIncrement_19;
      StrikeIncrement_19.setString("14562812");
      noStrikeRules_0_1_0.set(StrikeIncrement_19);
      StrikeRules_NoStrikeRules_19.insert(StrikeIncrement_19.getString());
      FIX::StrikeRuleID StrikeRuleID_19("STRING_116316577");
      noStrikeRules_0_1_0.set(StrikeRuleID_19);
      StrikeRules_NoStrikeRules_19.insert(StrikeRuleID_19.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_19);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_39;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_39("MONTHYEAR_1617265687");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_39);
        MaturityRules_NoMaturityRules_39.insert(EndMaturityMonthYear_39.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_39(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityMonthYearFormat_39.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_39(1916964243);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityMonthYearIncrement_39.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_39(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityMonthYearIncrementUnits_39.getString());
        FIX::MaturityRuleID MaturityRuleID_39("STRING_1290248284");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityRuleID_39.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_39("MONTHYEAR_247455887");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_39);
        MaturityRules_NoMaturityRules_39.insert(StartMaturityMonthYear_39.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_39);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_20;
      FIX::EndStrikePxRange EndStrikePxRange_20;
      EndStrikePxRange_20.setString("11991197");
      noStrikeRules_0_1_1.set(EndStrikePxRange_20);
      StrikeRules_NoStrikeRules_20.insert(EndStrikePxRange_20.getString());
      FIX::StartStrikePxRange StartStrikePxRange_20;
      StartStrikePxRange_20.setString("6836145");
      noStrikeRules_0_1_1.set(StartStrikePxRange_20);
      StrikeRules_NoStrikeRules_20.insert(StartStrikePxRange_20.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_20(659971278);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_20);
      StrikeRules_NoStrikeRules_20.insert(StrikeExerciseStyle_20.getString());
      FIX::StrikeIncrement StrikeIncrement_20;
      StrikeIncrement_20.setString("1100097");
      noStrikeRules_0_1_1.set(StrikeIncrement_20);
      StrikeRules_NoStrikeRules_20.insert(StrikeIncrement_20.getString());
      FIX::StrikeRuleID StrikeRuleID_20("STRING_721182966");
      noStrikeRules_0_1_1.set(StrikeRuleID_20);
      StrikeRules_NoStrikeRules_20.insert(StrikeRuleID_20.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_20);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_40;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_40("MONTHYEAR_800667874");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_40);
        MaturityRules_NoMaturityRules_40.insert(EndMaturityMonthYear_40.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_40(1);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityMonthYearFormat_40.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_40(780779257);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityMonthYearIncrement_40.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_40(3);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityMonthYearIncrementUnits_40.getString());
        FIX::MaturityRuleID MaturityRuleID_40("STRING_1316652477");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityRuleID_40.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_40("MONTHYEAR_1338741753");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_40);
        MaturityRules_NoMaturityRules_40.insert(StartMaturityMonthYear_40.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_40);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_21;
      FIX::EndStrikePxRange EndStrikePxRange_21;
      EndStrikePxRange_21.setString("12411015");
      noStrikeRules_0_1_2.set(EndStrikePxRange_21);
      StrikeRules_NoStrikeRules_21.insert(EndStrikePxRange_21.getString());
      FIX::StartStrikePxRange StartStrikePxRange_21;
      StartStrikePxRange_21.setString("12736834");
      noStrikeRules_0_1_2.set(StartStrikePxRange_21);
      StrikeRules_NoStrikeRules_21.insert(StartStrikePxRange_21.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_21(165557580);
      noStrikeRules_0_1_2.set(StrikeExerciseStyle_21);
      StrikeRules_NoStrikeRules_21.insert(StrikeExerciseStyle_21.getString());
      FIX::StrikeIncrement StrikeIncrement_21;
      StrikeIncrement_21.setString("11616275");
      noStrikeRules_0_1_2.set(StrikeIncrement_21);
      StrikeRules_NoStrikeRules_21.insert(StrikeIncrement_21.getString());
      FIX::StrikeRuleID StrikeRuleID_21("STRING_1058306662");
      noStrikeRules_0_1_2.set(StrikeRuleID_21);
      StrikeRules_NoStrikeRules_21.insert(StrikeRuleID_21.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_21);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_41;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_41("MONTHYEAR_336779945");
        noMaturityRules_0_2_2_0.set(EndMaturityMonthYear_41);
        MaturityRules_NoMaturityRules_41.insert(EndMaturityMonthYear_41.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_41(2);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearFormat_41);
        MaturityRules_NoMaturityRules_41.insert(MaturityMonthYearFormat_41.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_41(2024202182);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrement_41);
        MaturityRules_NoMaturityRules_41.insert(MaturityMonthYearIncrement_41.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_41(1);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrementUnits_41);
        MaturityRules_NoMaturityRules_41.insert(MaturityMonthYearIncrementUnits_41.getString());
        FIX::MaturityRuleID MaturityRuleID_41("STRING_1699510681");
        noMaturityRules_0_2_2_0.set(MaturityRuleID_41);
        MaturityRules_NoMaturityRules_41.insert(MaturityRuleID_41.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_41("MONTHYEAR_2140518759");
        noMaturityRules_0_2_2_0.set(StartMaturityMonthYear_41);
        MaturityRules_NoMaturityRules_41.insert(StartMaturityMonthYear_41.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_41);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_42;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_42("MONTHYEAR_1781032482");
        noMaturityRules_0_2_2_1.set(EndMaturityMonthYear_42);
        MaturityRules_NoMaturityRules_42.insert(EndMaturityMonthYear_42.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_42(0);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearFormat_42);
        MaturityRules_NoMaturityRules_42.insert(MaturityMonthYearFormat_42.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_42(1858879756);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrement_42);
        MaturityRules_NoMaturityRules_42.insert(MaturityMonthYearIncrement_42.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_42(1);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrementUnits_42);
        MaturityRules_NoMaturityRules_42.insert(MaturityMonthYearIncrementUnits_42.getString());
        FIX::MaturityRuleID MaturityRuleID_42("STRING_804632648");
        noMaturityRules_0_2_2_1.set(MaturityRuleID_42);
        MaturityRules_NoMaturityRules_42.insert(MaturityRuleID_42.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_42("MONTHYEAR_1001644392");
        noMaturityRules_0_2_2_1.set(StartMaturityMonthYear_42);
        MaturityRules_NoMaturityRules_42.insert(StartMaturityMonthYear_42.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_42);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_43;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_43("MONTHYEAR_1797968965");
        noMaturityRules_0_2_2_2.set(EndMaturityMonthYear_43);
        MaturityRules_NoMaturityRules_43.insert(EndMaturityMonthYear_43.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_43(2);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearFormat_43);
        MaturityRules_NoMaturityRules_43.insert(MaturityMonthYearFormat_43.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_43(1685258904);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearIncrement_43);
        MaturityRules_NoMaturityRules_43.insert(MaturityMonthYearIncrement_43.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_43(3);
        noMaturityRules_0_2_2_2.set(MaturityMonthYearIncrementUnits_43);
        MaturityRules_NoMaturityRules_43.insert(MaturityMonthYearIncrementUnits_43.getString());
        FIX::MaturityRuleID MaturityRuleID_43("STRING_2113762119");
        noMaturityRules_0_2_2_2.set(MaturityRuleID_43);
        MaturityRules_NoMaturityRules_43.insert(MaturityRuleID_43.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_43("MONTHYEAR_258958223");
        noMaturityRules_0_2_2_2.set(StartMaturityMonthYear_43);
        MaturityRules_NoMaturityRules_43.insert(StartMaturityMonthYear_43.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_43);

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_128;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_128("DATA_766946345");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_128);
      UnderlyingInstrument_128.insert(EncodedUnderlyingIssuer_128.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_128(746151144);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_128);
      UnderlyingInstrument_128.insert(EncodedUnderlyingIssuerLen_128.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_128("DATA_452996554");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_128);
      UnderlyingInstrument_128.insert(EncodedUnderlyingSecurityDesc_128.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_128(1999174676);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_128);
      UnderlyingInstrument_128.insert(EncodedUnderlyingSecurityDescLen_128.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_128;
      UnderlyingAdjustedQuantity_128.setString("20628036");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_128);
      UnderlyingInstrument_128.insert(UnderlyingAdjustedQuantity_128.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_128;
      UnderlyingAllocationPercent_128.setString("83.070000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_128);
      UnderlyingInstrument_128.insert(UnderlyingAllocationPercent_128.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_128;
      UnderlyingAttachmentPoint_128.setString("25.560000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_128);
      UnderlyingInstrument_128.insert(UnderlyingAttachmentPoint_128.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_128("STRING_1189003408");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_128);
      UnderlyingInstrument_128.insert(UnderlyingCFICode_128.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_128("STRING_1957295888");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_128);
      UnderlyingInstrument_128.insert(UnderlyingCPProgram_128.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_128("STRING_106936495");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_128);
      UnderlyingInstrument_128.insert(UnderlyingCPRegType_128.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_128;
      UnderlyingCapValue_128.setString("998264");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_128);
      UnderlyingInstrument_128.insert(UnderlyingCapValue_128.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_128;
      UnderlyingCashAmount_128.setString("17263484");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_128);
      UnderlyingInstrument_128.insert(UnderlyingCashAmount_128.getString());
      FIX::UnderlyingCashType UnderlyingCashType_128("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_128);
      UnderlyingInstrument_128.insert(UnderlyingCashType_128.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_128;
      UnderlyingContractMultiplier_128.setString("3430558");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_128);
      UnderlyingInstrument_128.insert(UnderlyingContractMultiplier_128.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_128(1603066973);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_128);
      UnderlyingInstrument_128.insert(UnderlyingContractMultiplierUnit_128.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_128("COUNTRY_1333821045");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_128);
      UnderlyingInstrument_128.insert(UnderlyingCountryOfIssue_128.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_128("LOCALMKTDATE_2042566558");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_128);
      UnderlyingInstrument_128.insert(UnderlyingCouponPaymentDate_128.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_128;
      UnderlyingCouponRate_128.setString("20.840000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_128);
      UnderlyingInstrument_128.insert(UnderlyingCouponRate_128.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_128("STRING_967369880");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_128);
      UnderlyingInstrument_128.insert(UnderlyingCreditRating_128.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_128("GBP");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_128);
      UnderlyingInstrument_128.insert(UnderlyingCurrency_128.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_128;
      UnderlyingCurrentValue_128.setString("3703993");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_128);
      UnderlyingInstrument_128.insert(UnderlyingCurrentValue_128.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_128;
      UnderlyingDetachmentPoint_128.setString("82.790000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_128);
      UnderlyingInstrument_128.insert(UnderlyingDetachmentPoint_128.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_128;
      UnderlyingDirtyPrice_128.setString("1616589");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_128);
      UnderlyingInstrument_128.insert(UnderlyingDirtyPrice_128.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_128;
      UnderlyingEndPrice_128.setString("208846");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_128);
      UnderlyingInstrument_128.insert(UnderlyingEndPrice_128.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_128;
      UnderlyingEndValue_128.setString("17252770");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_128);
      UnderlyingInstrument_128.insert(UnderlyingEndValue_128.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_128(1846917841);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_128);
      UnderlyingInstrument_128.insert(UnderlyingExerciseStyle_128.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_128;
      UnderlyingFXRate_128.setString("3313412");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_128);
      UnderlyingInstrument_128.insert(UnderlyingFXRate_128.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_128('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_128);
      UnderlyingInstrument_128.insert(UnderlyingFXRateCalc_128.getString());
      FIX::UnderlyingFactor UnderlyingFactor_128;
      UnderlyingFactor_128.setString("21058760");
      noUnderlyings_0_1_0.set(UnderlyingFactor_128);
      UnderlyingInstrument_128.insert(UnderlyingFactor_128.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_128(3558518);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_128);
      UnderlyingInstrument_128.insert(UnderlyingFlowScheduleType_128.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_128("STRING_311018194");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_128);
      UnderlyingInstrument_128.insert(UnderlyingInstrRegistry_128.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_128("LOCALMKTDATE_704543561");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_128);
      UnderlyingInstrument_128.insert(UnderlyingIssueDate_128.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_128("STRING_456555072");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_128);
      UnderlyingInstrument_128.insert(UnderlyingIssuer_128.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_128("STRING_162709222");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_128);
      UnderlyingInstrument_128.insert(UnderlyingLocaleOfIssue_128.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_128("LOCALMKTDATE_619863534");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_128);
      UnderlyingInstrument_128.insert(UnderlyingMaturityDate_128.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_128("MONTHYEAR_100809732");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_128);
      UnderlyingInstrument_128.insert(UnderlyingMaturityMonthYear_128.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_128("TZTIMEONLY_1255501778");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_128);
      UnderlyingInstrument_128.insert(UnderlyingMaturityTime_128.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_128;
      UnderlyingNotionalPercentageOutstanding_128.setString("69.430000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_128);
      UnderlyingInstrument_128.insert(UnderlyingNotionalPercentageOutstanding_128.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_128('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_128);
      UnderlyingInstrument_128.insert(UnderlyingOptAttribute_128.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_128;
      UnderlyingOriginalNotionalPercentageOutstanding_128.setString("82.730000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_128);
      UnderlyingInstrument_128.insert(UnderlyingOriginalNotionalPercentageOutstanding_128.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_128("STRING_1908693365");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_128);
      UnderlyingInstrument_128.insert(UnderlyingPriceUnitOfMeasure_128.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_128;
      UnderlyingPriceUnitOfMeasureQty_128.setString("16369704");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_128);
      UnderlyingInstrument_128.insert(UnderlyingPriceUnitOfMeasureQty_128.getString());
      FIX::UnderlyingProduct UnderlyingProduct_128(1806154713);
      noUnderlyings_0_1_0.set(UnderlyingProduct_128);
      UnderlyingInstrument_128.insert(UnderlyingProduct_128.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_128(104265594);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_128);
      UnderlyingInstrument_128.insert(UnderlyingPutOrCall_128.getString());
      FIX::UnderlyingPx UnderlyingPx_128;
      UnderlyingPx_128.setString("10925537");
      noUnderlyings_0_1_0.set(UnderlyingPx_128);
      UnderlyingInstrument_128.insert(UnderlyingPx_128.getString());
      FIX::UnderlyingQty UnderlyingQty_128;
      UnderlyingQty_128.setString("9924921");
      noUnderlyings_0_1_0.set(UnderlyingQty_128);
      UnderlyingInstrument_128.insert(UnderlyingQty_128.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_128("LOCALMKTDATE_2146832153");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_128);
      UnderlyingInstrument_128.insert(UnderlyingRedemptionDate_128.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_128("STRING_541172173");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_128);
      UnderlyingInstrument_128.insert(UnderlyingRepoCollateralSecurityType_128.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_128;
      UnderlyingRepurchaseRate_128.setString("19.910000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_128);
      UnderlyingInstrument_128.insert(UnderlyingRepurchaseRate_128.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_128(1063724136);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_128);
      UnderlyingInstrument_128.insert(UnderlyingRepurchaseTerm_128.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_128("STRING_1848670366");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_128);
      UnderlyingInstrument_128.insert(UnderlyingRestructuringType_128.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_128("STRING_182777652");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_128);
      UnderlyingInstrument_128.insert(UnderlyingSecurityDesc_128.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_128("EXCHANGE_785248767");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_128);
      UnderlyingInstrument_128.insert(UnderlyingSecurityExchange_128.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_128("STRING_2010329303");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_128);
      UnderlyingInstrument_128.insert(UnderlyingSecurityID_128.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_128("STRING_203662279");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_128);
      UnderlyingInstrument_128.insert(UnderlyingSecurityIDSource_128.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_128("STRING_363042145");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_128);
      UnderlyingInstrument_128.insert(UnderlyingSecuritySubType_128.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_128("STRING_1709763496");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_128);
      UnderlyingInstrument_128.insert(UnderlyingSecurityType_128.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_128("STRING_535003500");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_128);
      UnderlyingInstrument_128.insert(UnderlyingSeniority_128.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_128("STRING_2054597642");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_128);
      UnderlyingInstrument_128.insert(UnderlyingSettlMethod_128.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_128(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_128);
      UnderlyingInstrument_128.insert(UnderlyingSettlementType_128.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_128;
      UnderlyingStartValue_128.setString("5385620");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_128);
      UnderlyingInstrument_128.insert(UnderlyingStartValue_128.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_128("STRING_218132188");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_128);
      UnderlyingInstrument_128.insert(UnderlyingStateOrProvinceOfIssue_128.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_128("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_128);
      UnderlyingInstrument_128.insert(UnderlyingStrikeCurrency_128.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_128;
      UnderlyingStrikePrice_128.setString("3808414");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_128);
      UnderlyingInstrument_128.insert(UnderlyingStrikePrice_128.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_128("STRING_845079360");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_128);
      UnderlyingInstrument_128.insert(UnderlyingSymbol_128.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_128("STRING_1095926823");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_128);
      UnderlyingInstrument_128.insert(UnderlyingSymbolSfx_128.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_128("STRING_1636343189");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_128);
      UnderlyingInstrument_128.insert(UnderlyingTimeUnit_128.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_128("STRING_506462655");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_128);
      UnderlyingInstrument_128.insert(UnderlyingUnitOfMeasure_128.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_128;
      UnderlyingUnitOfMeasureQty_128.setString("10065487");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_128);
      UnderlyingInstrument_128.insert(UnderlyingUnitOfMeasureQty_128.getString());
      all_values.push_back(UnderlyingInstrument_128);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_255;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_255("STRING_267672373");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_255);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_255.insert(UnderlyingSecurityAltID_255.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_255("STRING_496035559");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_255);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_255.insert(UnderlyingSecurityAltIDSource_255.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_255);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_247;
        FIX::UnderlyingStipType UnderlyingStipType_247("STRING_371937967");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_247);
        UnderlyingStipulations_NoUnderlyingStips_247.insert(UnderlyingStipType_247.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_247("STRING_1588589296");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_247);
        UnderlyingStipulations_NoUnderlyingStips_247.insert(UnderlyingStipValue_247.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_247);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_248;
        FIX::UnderlyingStipType UnderlyingStipType_248("STRING_1502460991");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_248);
        UnderlyingStipulations_NoUnderlyingStips_248.insert(UnderlyingStipType_248.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_248("STRING_371286472");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_248);
        UnderlyingStipulations_NoUnderlyingStips_248.insert(UnderlyingStipValue_248.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_248);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_249;
        FIX::UnderlyingStipType UnderlyingStipType_249("STRING_2129761469");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_249);
        UnderlyingStipulations_NoUnderlyingStips_249.insert(UnderlyingStipType_249.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_249("STRING_1314839334");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_249);
        UnderlyingStipulations_NoUnderlyingStips_249.insert(UnderlyingStipValue_249.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_249);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_258;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_258("STRING_1830948187");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_258);
        UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyID_258.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_258('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_258);
        UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyIDSource_258.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_258(72775728);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_258);
        UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyRole_258.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_258);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_510("STRING_1701279265");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_510);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510.insert(UnderlyingInstrumentPartySubID_510.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_510(435817873);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_510);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510.insert(UnderlyingInstrumentPartySubIDType_510.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_511("STRING_1256073691");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_511);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511.insert(UnderlyingInstrumentPartySubID_511.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_511(88799118);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_511);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511.insert(UnderlyingInstrumentPartySubIDType_511.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_259;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_259("STRING_342931868");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_259);
        UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyID_259.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_259('7');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_259);
        UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyIDSource_259.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_259(627361137);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_259);
        UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyRole_259.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_259);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_512("STRING_1001961782");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_512);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512.insert(UnderlyingInstrumentPartySubID_512.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_512(1622478228);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_512);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512.insert(UnderlyingInstrumentPartySubIDType_512.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_129;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_129("DATA_941905467");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_129);
      UnderlyingInstrument_129.insert(EncodedUnderlyingIssuer_129.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_129(1847041142);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_129);
      UnderlyingInstrument_129.insert(EncodedUnderlyingIssuerLen_129.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_129("DATA_570921404");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_129);
      UnderlyingInstrument_129.insert(EncodedUnderlyingSecurityDesc_129.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_129(430765008);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_129);
      UnderlyingInstrument_129.insert(EncodedUnderlyingSecurityDescLen_129.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_129;
      UnderlyingAdjustedQuantity_129.setString("2060201");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_129);
      UnderlyingInstrument_129.insert(UnderlyingAdjustedQuantity_129.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_129;
      UnderlyingAllocationPercent_129.setString("1.990000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_129);
      UnderlyingInstrument_129.insert(UnderlyingAllocationPercent_129.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_129;
      UnderlyingAttachmentPoint_129.setString("28.220000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_129);
      UnderlyingInstrument_129.insert(UnderlyingAttachmentPoint_129.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_129("STRING_473692523");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_129);
      UnderlyingInstrument_129.insert(UnderlyingCFICode_129.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_129("STRING_2073505758");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_129);
      UnderlyingInstrument_129.insert(UnderlyingCPProgram_129.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_129("STRING_1792031702");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_129);
      UnderlyingInstrument_129.insert(UnderlyingCPRegType_129.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_129;
      UnderlyingCapValue_129.setString("8456304");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_129);
      UnderlyingInstrument_129.insert(UnderlyingCapValue_129.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_129;
      UnderlyingCashAmount_129.setString("15146114");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_129);
      UnderlyingInstrument_129.insert(UnderlyingCashAmount_129.getString());
      FIX::UnderlyingCashType UnderlyingCashType_129("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_129);
      UnderlyingInstrument_129.insert(UnderlyingCashType_129.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_129;
      UnderlyingContractMultiplier_129.setString("12169169");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_129);
      UnderlyingInstrument_129.insert(UnderlyingContractMultiplier_129.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_129(1496889228);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_129);
      UnderlyingInstrument_129.insert(UnderlyingContractMultiplierUnit_129.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_129("COUNTRY_314364731");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_129);
      UnderlyingInstrument_129.insert(UnderlyingCountryOfIssue_129.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_129("LOCALMKTDATE_504443923");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_129);
      UnderlyingInstrument_129.insert(UnderlyingCouponPaymentDate_129.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_129;
      UnderlyingCouponRate_129.setString("37.670000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_129);
      UnderlyingInstrument_129.insert(UnderlyingCouponRate_129.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_129("STRING_1811981718");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_129);
      UnderlyingInstrument_129.insert(UnderlyingCreditRating_129.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_129("GBP");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_129);
      UnderlyingInstrument_129.insert(UnderlyingCurrency_129.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_129;
      UnderlyingCurrentValue_129.setString("13657773");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_129);
      UnderlyingInstrument_129.insert(UnderlyingCurrentValue_129.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_129;
      UnderlyingDetachmentPoint_129.setString("75.250000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_129);
      UnderlyingInstrument_129.insert(UnderlyingDetachmentPoint_129.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_129;
      UnderlyingDirtyPrice_129.setString("19827376");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_129);
      UnderlyingInstrument_129.insert(UnderlyingDirtyPrice_129.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_129;
      UnderlyingEndPrice_129.setString("14545764");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_129);
      UnderlyingInstrument_129.insert(UnderlyingEndPrice_129.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_129;
      UnderlyingEndValue_129.setString("13559693");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_129);
      UnderlyingInstrument_129.insert(UnderlyingEndValue_129.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_129(611999961);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_129);
      UnderlyingInstrument_129.insert(UnderlyingExerciseStyle_129.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_129;
      UnderlyingFXRate_129.setString("20819375");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_129);
      UnderlyingInstrument_129.insert(UnderlyingFXRate_129.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_129('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_129);
      UnderlyingInstrument_129.insert(UnderlyingFXRateCalc_129.getString());
      FIX::UnderlyingFactor UnderlyingFactor_129;
      UnderlyingFactor_129.setString("16139617");
      noUnderlyings_0_1_1.set(UnderlyingFactor_129);
      UnderlyingInstrument_129.insert(UnderlyingFactor_129.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_129(1556932171);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_129);
      UnderlyingInstrument_129.insert(UnderlyingFlowScheduleType_129.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_129("STRING_711455268");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_129);
      UnderlyingInstrument_129.insert(UnderlyingInstrRegistry_129.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_129("LOCALMKTDATE_1313519237");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_129);
      UnderlyingInstrument_129.insert(UnderlyingIssueDate_129.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_129("STRING_2127853575");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_129);
      UnderlyingInstrument_129.insert(UnderlyingIssuer_129.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_129("STRING_1142220276");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_129);
      UnderlyingInstrument_129.insert(UnderlyingLocaleOfIssue_129.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_129("LOCALMKTDATE_1519539387");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_129);
      UnderlyingInstrument_129.insert(UnderlyingMaturityDate_129.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_129("MONTHYEAR_1557840126");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_129);
      UnderlyingInstrument_129.insert(UnderlyingMaturityMonthYear_129.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_129("TZTIMEONLY_276799451");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_129);
      UnderlyingInstrument_129.insert(UnderlyingMaturityTime_129.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_129;
      UnderlyingNotionalPercentageOutstanding_129.setString("19.100000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_129);
      UnderlyingInstrument_129.insert(UnderlyingNotionalPercentageOutstanding_129.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_129('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_129);
      UnderlyingInstrument_129.insert(UnderlyingOptAttribute_129.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_129;
      UnderlyingOriginalNotionalPercentageOutstanding_129.setString("11.530000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_129);
      UnderlyingInstrument_129.insert(UnderlyingOriginalNotionalPercentageOutstanding_129.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_129("STRING_691378753");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_129);
      UnderlyingInstrument_129.insert(UnderlyingPriceUnitOfMeasure_129.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_129;
      UnderlyingPriceUnitOfMeasureQty_129.setString("8509899");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_129);
      UnderlyingInstrument_129.insert(UnderlyingPriceUnitOfMeasureQty_129.getString());
      FIX::UnderlyingProduct UnderlyingProduct_129(1068356551);
      noUnderlyings_0_1_1.set(UnderlyingProduct_129);
      UnderlyingInstrument_129.insert(UnderlyingProduct_129.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_129(1908295716);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_129);
      UnderlyingInstrument_129.insert(UnderlyingPutOrCall_129.getString());
      FIX::UnderlyingPx UnderlyingPx_129;
      UnderlyingPx_129.setString("2003955");
      noUnderlyings_0_1_1.set(UnderlyingPx_129);
      UnderlyingInstrument_129.insert(UnderlyingPx_129.getString());
      FIX::UnderlyingQty UnderlyingQty_129;
      UnderlyingQty_129.setString("13827212");
      noUnderlyings_0_1_1.set(UnderlyingQty_129);
      UnderlyingInstrument_129.insert(UnderlyingQty_129.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_129("LOCALMKTDATE_265255991");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_129);
      UnderlyingInstrument_129.insert(UnderlyingRedemptionDate_129.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_129("STRING_1380749343");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_129);
      UnderlyingInstrument_129.insert(UnderlyingRepoCollateralSecurityType_129.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_129;
      UnderlyingRepurchaseRate_129.setString("93.520000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_129);
      UnderlyingInstrument_129.insert(UnderlyingRepurchaseRate_129.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_129(842475643);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_129);
      UnderlyingInstrument_129.insert(UnderlyingRepurchaseTerm_129.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_129("STRING_2107413305");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_129);
      UnderlyingInstrument_129.insert(UnderlyingRestructuringType_129.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_129("STRING_265513040");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_129);
      UnderlyingInstrument_129.insert(UnderlyingSecurityDesc_129.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_129("EXCHANGE_1855513168");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_129);
      UnderlyingInstrument_129.insert(UnderlyingSecurityExchange_129.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_129("STRING_1942667310");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_129);
      UnderlyingInstrument_129.insert(UnderlyingSecurityID_129.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_129("STRING_1720089493");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_129);
      UnderlyingInstrument_129.insert(UnderlyingSecurityIDSource_129.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_129("STRING_1063998913");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_129);
      UnderlyingInstrument_129.insert(UnderlyingSecuritySubType_129.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_129("STRING_407183623");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_129);
      UnderlyingInstrument_129.insert(UnderlyingSecurityType_129.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_129("STRING_1654543436");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_129);
      UnderlyingInstrument_129.insert(UnderlyingSeniority_129.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_129("STRING_833548714");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_129);
      UnderlyingInstrument_129.insert(UnderlyingSettlMethod_129.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_129(2);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_129);
      UnderlyingInstrument_129.insert(UnderlyingSettlementType_129.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_129;
      UnderlyingStartValue_129.setString("10639919");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_129);
      UnderlyingInstrument_129.insert(UnderlyingStartValue_129.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_129("STRING_1545003983");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_129);
      UnderlyingInstrument_129.insert(UnderlyingStateOrProvinceOfIssue_129.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_129("GBP");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_129);
      UnderlyingInstrument_129.insert(UnderlyingStrikeCurrency_129.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_129;
      UnderlyingStrikePrice_129.setString("5397406");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_129);
      UnderlyingInstrument_129.insert(UnderlyingStrikePrice_129.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_129("STRING_559236695");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_129);
      UnderlyingInstrument_129.insert(UnderlyingSymbol_129.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_129("STRING_454718364");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_129);
      UnderlyingInstrument_129.insert(UnderlyingSymbolSfx_129.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_129("STRING_816540062");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_129);
      UnderlyingInstrument_129.insert(UnderlyingTimeUnit_129.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_129("STRING_404984957");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_129);
      UnderlyingInstrument_129.insert(UnderlyingUnitOfMeasure_129.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_129;
      UnderlyingUnitOfMeasureQty_129.setString("19385806");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_129);
      UnderlyingInstrument_129.insert(UnderlyingUnitOfMeasureQty_129.getString());
      all_values.push_back(UnderlyingInstrument_129);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_256;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_256("STRING_1096363710");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_256);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_256.insert(UnderlyingSecurityAltID_256.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_256("STRING_642086949");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_256);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_256.insert(UnderlyingSecurityAltIDSource_256.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_256);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_257;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_257("STRING_1806244119");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_257);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_257.insert(UnderlyingSecurityAltID_257.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_257("STRING_857175778");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_257);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_257.insert(UnderlyingSecurityAltIDSource_257.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_257);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_258;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_258("STRING_842482524");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltID_258);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_258.insert(UnderlyingSecurityAltID_258.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_258("STRING_1041481753");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltIDSource_258);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_258.insert(UnderlyingSecurityAltIDSource_258.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_258);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_250;
        FIX::UnderlyingStipType UnderlyingStipType_250("STRING_75748219");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_250);
        UnderlyingStipulations_NoUnderlyingStips_250.insert(UnderlyingStipType_250.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_250("STRING_2088701106");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_250);
        UnderlyingStipulations_NoUnderlyingStips_250.insert(UnderlyingStipValue_250.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_250);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_251;
        FIX::UnderlyingStipType UnderlyingStipType_251("STRING_1964907413");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_251);
        UnderlyingStipulations_NoUnderlyingStips_251.insert(UnderlyingStipType_251.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_251("STRING_35677876");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_251);
        UnderlyingStipulations_NoUnderlyingStips_251.insert(UnderlyingStipValue_251.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_251);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_260;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_260("STRING_1672936933");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_260);
        UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyID_260.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_260('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_260);
        UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyIDSource_260.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_260(1926819991);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_260);
        UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyRole_260.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_260);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_513("STRING_238045161");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_513);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513.insert(UnderlyingInstrumentPartySubID_513.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_513(1433879779);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_513);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513.insert(UnderlyingInstrumentPartySubIDType_513.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_130;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_130("DATA_1423000912");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_130);
      UnderlyingInstrument_130.insert(EncodedUnderlyingIssuer_130.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_130(111706879);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_130);
      UnderlyingInstrument_130.insert(EncodedUnderlyingIssuerLen_130.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_130("DATA_350388090");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_130);
      UnderlyingInstrument_130.insert(EncodedUnderlyingSecurityDesc_130.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_130(820521247);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_130);
      UnderlyingInstrument_130.insert(EncodedUnderlyingSecurityDescLen_130.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_130;
      UnderlyingAdjustedQuantity_130.setString("12988878");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_130);
      UnderlyingInstrument_130.insert(UnderlyingAdjustedQuantity_130.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_130;
      UnderlyingAllocationPercent_130.setString("99.760000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_130);
      UnderlyingInstrument_130.insert(UnderlyingAllocationPercent_130.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_130;
      UnderlyingAttachmentPoint_130.setString("18.590000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_130);
      UnderlyingInstrument_130.insert(UnderlyingAttachmentPoint_130.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_130("STRING_1858124530");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_130);
      UnderlyingInstrument_130.insert(UnderlyingCFICode_130.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_130("STRING_1849468341");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_130);
      UnderlyingInstrument_130.insert(UnderlyingCPProgram_130.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_130("STRING_29318273");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_130);
      UnderlyingInstrument_130.insert(UnderlyingCPRegType_130.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_130;
      UnderlyingCapValue_130.setString("1156258");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_130);
      UnderlyingInstrument_130.insert(UnderlyingCapValue_130.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_130;
      UnderlyingCashAmount_130.setString("16405652");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_130);
      UnderlyingInstrument_130.insert(UnderlyingCashAmount_130.getString());
      FIX::UnderlyingCashType UnderlyingCashType_130("STRING_DIFF");
      noUnderlyings_0_1_2.set(UnderlyingCashType_130);
      UnderlyingInstrument_130.insert(UnderlyingCashType_130.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_130;
      UnderlyingContractMultiplier_130.setString("12119895");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_130);
      UnderlyingInstrument_130.insert(UnderlyingContractMultiplier_130.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_130(135168595);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_130);
      UnderlyingInstrument_130.insert(UnderlyingContractMultiplierUnit_130.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_130("COUNTRY_425966312");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_130);
      UnderlyingInstrument_130.insert(UnderlyingCountryOfIssue_130.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_130("LOCALMKTDATE_2069165328");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_130);
      UnderlyingInstrument_130.insert(UnderlyingCouponPaymentDate_130.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_130;
      UnderlyingCouponRate_130.setString("11.200000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_130);
      UnderlyingInstrument_130.insert(UnderlyingCouponRate_130.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_130("STRING_1467448066");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_130);
      UnderlyingInstrument_130.insert(UnderlyingCreditRating_130.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_130("CHF");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_130);
      UnderlyingInstrument_130.insert(UnderlyingCurrency_130.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_130;
      UnderlyingCurrentValue_130.setString("14086655");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_130);
      UnderlyingInstrument_130.insert(UnderlyingCurrentValue_130.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_130;
      UnderlyingDetachmentPoint_130.setString("72.150000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_130);
      UnderlyingInstrument_130.insert(UnderlyingDetachmentPoint_130.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_130;
      UnderlyingDirtyPrice_130.setString("10890772");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_130);
      UnderlyingInstrument_130.insert(UnderlyingDirtyPrice_130.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_130;
      UnderlyingEndPrice_130.setString("16153960");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_130);
      UnderlyingInstrument_130.insert(UnderlyingEndPrice_130.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_130;
      UnderlyingEndValue_130.setString("3869905");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_130);
      UnderlyingInstrument_130.insert(UnderlyingEndValue_130.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_130(919938754);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_130);
      UnderlyingInstrument_130.insert(UnderlyingExerciseStyle_130.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_130;
      UnderlyingFXRate_130.setString("13947323");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_130);
      UnderlyingInstrument_130.insert(UnderlyingFXRate_130.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_130('D');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_130);
      UnderlyingInstrument_130.insert(UnderlyingFXRateCalc_130.getString());
      FIX::UnderlyingFactor UnderlyingFactor_130;
      UnderlyingFactor_130.setString("11579839");
      noUnderlyings_0_1_2.set(UnderlyingFactor_130);
      UnderlyingInstrument_130.insert(UnderlyingFactor_130.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_130(681128497);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_130);
      UnderlyingInstrument_130.insert(UnderlyingFlowScheduleType_130.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_130("STRING_251959963");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_130);
      UnderlyingInstrument_130.insert(UnderlyingInstrRegistry_130.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_130("LOCALMKTDATE_1269690795");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_130);
      UnderlyingInstrument_130.insert(UnderlyingIssueDate_130.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_130("STRING_1031516587");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_130);
      UnderlyingInstrument_130.insert(UnderlyingIssuer_130.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_130("STRING_1072481210");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_130);
      UnderlyingInstrument_130.insert(UnderlyingLocaleOfIssue_130.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_130("LOCALMKTDATE_421094982");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_130);
      UnderlyingInstrument_130.insert(UnderlyingMaturityDate_130.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_130("MONTHYEAR_278782916");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_130);
      UnderlyingInstrument_130.insert(UnderlyingMaturityMonthYear_130.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_130("TZTIMEONLY_285259421");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_130);
      UnderlyingInstrument_130.insert(UnderlyingMaturityTime_130.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_130;
      UnderlyingNotionalPercentageOutstanding_130.setString("58.640000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_130);
      UnderlyingInstrument_130.insert(UnderlyingNotionalPercentageOutstanding_130.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_130('2');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_130);
      UnderlyingInstrument_130.insert(UnderlyingOptAttribute_130.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_130;
      UnderlyingOriginalNotionalPercentageOutstanding_130.setString("76.950000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_130);
      UnderlyingInstrument_130.insert(UnderlyingOriginalNotionalPercentageOutstanding_130.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_130("STRING_247361704");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_130);
      UnderlyingInstrument_130.insert(UnderlyingPriceUnitOfMeasure_130.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_130;
      UnderlyingPriceUnitOfMeasureQty_130.setString("16213329");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_130);
      UnderlyingInstrument_130.insert(UnderlyingPriceUnitOfMeasureQty_130.getString());
      FIX::UnderlyingProduct UnderlyingProduct_130(1081783536);
      noUnderlyings_0_1_2.set(UnderlyingProduct_130);
      UnderlyingInstrument_130.insert(UnderlyingProduct_130.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_130(1459351254);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_130);
      UnderlyingInstrument_130.insert(UnderlyingPutOrCall_130.getString());
      FIX::UnderlyingPx UnderlyingPx_130;
      UnderlyingPx_130.setString("17565014");
      noUnderlyings_0_1_2.set(UnderlyingPx_130);
      UnderlyingInstrument_130.insert(UnderlyingPx_130.getString());
      FIX::UnderlyingQty UnderlyingQty_130;
      UnderlyingQty_130.setString("15077498");
      noUnderlyings_0_1_2.set(UnderlyingQty_130);
      UnderlyingInstrument_130.insert(UnderlyingQty_130.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_130("LOCALMKTDATE_1381032934");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_130);
      UnderlyingInstrument_130.insert(UnderlyingRedemptionDate_130.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_130("STRING_586668971");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_130);
      UnderlyingInstrument_130.insert(UnderlyingRepoCollateralSecurityType_130.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_130;
      UnderlyingRepurchaseRate_130.setString("42.670000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_130);
      UnderlyingInstrument_130.insert(UnderlyingRepurchaseRate_130.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_130(277662737);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_130);
      UnderlyingInstrument_130.insert(UnderlyingRepurchaseTerm_130.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_130("STRING_1640068310");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_130);
      UnderlyingInstrument_130.insert(UnderlyingRestructuringType_130.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_130("STRING_88896143");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_130);
      UnderlyingInstrument_130.insert(UnderlyingSecurityDesc_130.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_130("EXCHANGE_1139199952");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_130);
      UnderlyingInstrument_130.insert(UnderlyingSecurityExchange_130.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_130("STRING_581661878");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_130);
      UnderlyingInstrument_130.insert(UnderlyingSecurityID_130.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_130("STRING_1704292165");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_130);
      UnderlyingInstrument_130.insert(UnderlyingSecurityIDSource_130.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_130("STRING_1526190453");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_130);
      UnderlyingInstrument_130.insert(UnderlyingSecuritySubType_130.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_130("STRING_1501600633");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_130);
      UnderlyingInstrument_130.insert(UnderlyingSecurityType_130.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_130("STRING_951540882");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_130);
      UnderlyingInstrument_130.insert(UnderlyingSeniority_130.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_130("STRING_355149503");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_130);
      UnderlyingInstrument_130.insert(UnderlyingSettlMethod_130.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_130(4);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_130);
      UnderlyingInstrument_130.insert(UnderlyingSettlementType_130.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_130;
      UnderlyingStartValue_130.setString("16326693");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_130);
      UnderlyingInstrument_130.insert(UnderlyingStartValue_130.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_130("STRING_607109466");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_130);
      UnderlyingInstrument_130.insert(UnderlyingStateOrProvinceOfIssue_130.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_130("EUR");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_130);
      UnderlyingInstrument_130.insert(UnderlyingStrikeCurrency_130.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_130;
      UnderlyingStrikePrice_130.setString("16795906");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_130);
      UnderlyingInstrument_130.insert(UnderlyingStrikePrice_130.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_130("STRING_55403031");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_130);
      UnderlyingInstrument_130.insert(UnderlyingSymbol_130.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_130("STRING_795485235");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_130);
      UnderlyingInstrument_130.insert(UnderlyingSymbolSfx_130.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_130("STRING_1964850098");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_130);
      UnderlyingInstrument_130.insert(UnderlyingTimeUnit_130.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_130("STRING_187138895");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_130);
      UnderlyingInstrument_130.insert(UnderlyingUnitOfMeasure_130.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_130;
      UnderlyingUnitOfMeasureQty_130.setString("7762528");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_130);
      UnderlyingInstrument_130.insert(UnderlyingUnitOfMeasureQty_130.getString());
      all_values.push_back(UnderlyingInstrument_130);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_259;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_259("STRING_434500599");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_259);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_259.insert(UnderlyingSecurityAltID_259.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_259("STRING_250102099");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_259);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_259.insert(UnderlyingSecurityAltIDSource_259.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_259);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_260;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_260("STRING_1213727682");
        noUnderlyingSecurityAltID_0_2_2_1.set(UnderlyingSecurityAltID_260);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_260.insert(UnderlyingSecurityAltID_260.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_260("STRING_1893851853");
        noUnderlyingSecurityAltID_0_2_2_1.set(UnderlyingSecurityAltIDSource_260);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_260.insert(UnderlyingSecurityAltIDSource_260.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_260);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_261;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_261("STRING_2006603598");
        noUnderlyingSecurityAltID_0_2_2_2.set(UnderlyingSecurityAltID_261);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_261.insert(UnderlyingSecurityAltID_261.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_261("STRING_573993883");
        noUnderlyingSecurityAltID_0_2_2_2.set(UnderlyingSecurityAltIDSource_261);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_261.insert(UnderlyingSecurityAltIDSource_261.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_261);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_252;
        FIX::UnderlyingStipType UnderlyingStipType_252("STRING_445788921");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_252);
        UnderlyingStipulations_NoUnderlyingStips_252.insert(UnderlyingStipType_252.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_252("STRING_1401708150");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_252);
        UnderlyingStipulations_NoUnderlyingStips_252.insert(UnderlyingStipValue_252.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_252);

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_261;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_261("STRING_2085857232");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_261);
        UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyID_261.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_261('1');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_261);
        UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyIDSource_261.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_261(396780181);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_261);
        UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyRole_261.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_261);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_514("STRING_1047412810");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_514);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514.insert(UnderlyingInstrumentPartySubID_514.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_514(1922970634);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_514);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514.insert(UnderlyingInstrumentPartySubIDType_514.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_262;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_262("STRING_2021636095");
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyID_262);
        UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyID_262.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_262('1');
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyIDSource_262);
        UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyIDSource_262.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_262(130636490);
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyRole_262);
        UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyRole_262.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_262);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_515("STRING_1484139424");
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubID_515);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515.insert(UnderlyingInstrumentPartySubID_515.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_515(737745956);
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_515);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515.insert(UnderlyingInstrumentPartySubIDType_515.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515);

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_263;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_263("STRING_20561397");
        noUndlyInstrumentParties_0_2_2_2.set(UnderlyingInstrumentPartyID_263);
        UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyID_263.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_263('2');
        noUndlyInstrumentParties_0_2_2_2.set(UnderlyingInstrumentPartyIDSource_263);
        UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyIDSource_263.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_263(269852985);
        noUndlyInstrumentParties_0_2_2_2.set(UnderlyingInstrumentPartyRole_263);
        UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyRole_263.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_263);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_516("STRING_648843330");
          noUndlyInstrumentPartySubIDs_0_2_2_3_0.set(UnderlyingInstrumentPartySubID_516);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516.insert(UnderlyingInstrumentPartySubID_516.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_516(87219436);
          noUndlyInstrumentPartySubIDs_0_2_2_3_0.set(UnderlyingInstrumentPartySubIDType_516);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516.insert(UnderlyingInstrumentPartySubIDType_516.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516);

          noUndlyInstrumentParties_0_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_26;
    FIX::Yield Yield_26;
    Yield_26.setString("33.230000");
    noRelatedSym_0_0.set(Yield_26);
    YieldData_26.insert(Yield_26.getString());
    FIX::YieldCalcDate YieldCalcDate_26("LOCALMKTDATE_1425096174");
    noRelatedSym_0_0.set(YieldCalcDate_26);
    YieldData_26.insert(YieldCalcDate_26.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_26("LOCALMKTDATE_219163581");
    noRelatedSym_0_0.set(YieldRedemptionDate_26);
    YieldData_26.insert(YieldRedemptionDate_26.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_26;
    YieldRedemptionPrice_26.setString("6976039");
    noRelatedSym_0_0.set(YieldRedemptionPrice_26);
    YieldData_26.insert(YieldRedemptionPrice_26.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_26(1675198273);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_26);
    YieldData_26.insert(YieldRedemptionPriceType_26.getString());
    FIX::YieldType YieldType_26("STRING_PREVCLOSE");
    noRelatedSym_0_0.set(YieldType_26);
    YieldData_26.insert(YieldType_26.getString());
    all_values.push_back(YieldData_26);

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
