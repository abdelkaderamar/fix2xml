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
  FIX::ClearingBusinessDate ClearingBusinessDate_22("LOCALMKTDATE_1964341313");
  msg.set(ClearingBusinessDate_22);
  SecurityList_0.insert(ClearingBusinessDate_22.getString());
  FIX::EncodedSecurityListDesc EncodedSecurityListDesc_0("DATA_461160313");
  msg.set(EncodedSecurityListDesc_0);
  FIX::EncodedSecurityListDescLen EncodedSecurityListDescLen_0(590359359);
  msg.set(EncodedSecurityListDescLen_0);
  FIX::LastFragment LastFragment_13(true);
  msg.set(LastFragment_13);
  SecurityList_0.insert(LastFragment_13.getString());
  FIX::MarketID MarketID_17("EXCHANGE_861209065");
  msg.set(MarketID_17);
  SecurityList_0.insert(MarketID_17.getString());
  FIX::MarketSegmentID MarketSegmentID_17("STRING_1572717497");
  msg.set(MarketSegmentID_17);
  SecurityList_0.insert(MarketSegmentID_17.getString());
  FIX::SecurityListDesc SecurityListDesc_0("STRING_417955447");
  msg.set(SecurityListDesc_0);
  SecurityList_0.insert(SecurityListDesc_0.getString());
  FIX::SecurityListID SecurityListID_0("STRING_732700862");
  msg.set(SecurityListID_0);
  SecurityList_0.insert(SecurityListID_0.getString());
  FIX::SecurityListRefID SecurityListRefID_0("STRING_1959980328");
  msg.set(SecurityListRefID_0);
  SecurityList_0.insert(SecurityListRefID_0.getString());
  FIX::SecurityListType SecurityListType_0(2);
  msg.set(SecurityListType_0);
  SecurityList_0.insert(SecurityListType_0.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_0(2);
  msg.set(SecurityListTypeSource_0);
  SecurityList_0.insert(SecurityListTypeSource_0.getString());
  FIX::SecurityReportID SecurityReportID_3(1682649009);
  msg.set(SecurityReportID_3);
  SecurityList_0.insert(SecurityReportID_3.getString());
  FIX::SecurityReqID SecurityReqID_6("STRING_1122251814");
  msg.set(SecurityReqID_6);
  SecurityList_0.insert(SecurityReqID_6.getString());
  FIX::SecurityRequestResult SecurityRequestResult_2(0);
  msg.set(SecurityRequestResult_2);
  SecurityList_0.insert(SecurityRequestResult_2.getString());
  FIX::SecurityResponseID SecurityResponseID_4("STRING_1136349202");
  msg.set(SecurityResponseID_4);
  SecurityList_0.insert(SecurityResponseID_4.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_3(1951894629);
  msg.set(TotNoRelatedSym_3);
  SecurityList_0.insert(TotNoRelatedSym_3.getString());
  FIX::TransactTime TransactTime_57(FIX::UTCTIMESTAMP(18, 16, 17, 15, 6, 2008));
  msg.set(TransactTime_57);
  SecurityList_0.insert(TransactTime_57.getString());
  all_values.push_back(SecurityList_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_14;
  FIX::ApplID ApplID_14("STRING_1692465715");
  msg.set(ApplID_14);
  ApplicationSequenceControl_14.insert(ApplID_14.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_14(912404184);
  msg.set(ApplLastSeqNum_14);
  ApplicationSequenceControl_14.insert(ApplLastSeqNum_14.getString());
  FIX::ApplResendFlag ApplResendFlag_14(false);
  msg.set(ApplResendFlag_14);
  ApplicationSequenceControl_14.insert(ApplResendFlag_14.getString());
  FIX::ApplSeqNum ApplSeqNum_14(1503668358);
  msg.set(ApplSeqNum_14);
  ApplicationSequenceControl_14.insert(ApplSeqNum_14.getString());
  all_values.push_back(ApplicationSequenceControl_14);

  // SecListGrp
  // Group SecListGrp.NoRelatedSym
  {
    FIX50SP2::SecurityList::NoRelatedSym noRelatedSym_0_0;
    // SecListGrp.NoRelatedSym
    multiset<string> SecListGrp_NoRelatedSym_0;
    FIX::Currency Currency_60("CHF");
    noRelatedSym_0_0.set(Currency_60);
    SecListGrp_NoRelatedSym_0.insert(Currency_60.getString());
    FIX::EncodedText EncodedText_89("DATA_1830616728");
    noRelatedSym_0_0.set(EncodedText_89);
    SecListGrp_NoRelatedSym_0.insert(EncodedText_89.getString());
    FIX::EncodedTextLen EncodedTextLen_89(1054073710);
    noRelatedSym_0_0.set(EncodedTextLen_89);
    SecListGrp_NoRelatedSym_0.insert(EncodedTextLen_89.getString());
    FIX::RelSymTransactTime RelSymTransactTime_5(FIX::UTCTIMESTAMP(7, 54, 53, 4, 2, 2006));
    noRelatedSym_0_0.set(RelSymTransactTime_5);
    SecListGrp_NoRelatedSym_0.insert(RelSymTransactTime_5.getString());
    FIX::Text Text_89("STRING_1658706616");
    noRelatedSym_0_0.set(Text_89);
    SecListGrp_NoRelatedSym_0.insert(Text_89.getString());
    all_values.push_back(SecListGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_24;
    FIX::AgreementCurrency AgreementCurrency_24("EUR");
    noRelatedSym_0_0.set(AgreementCurrency_24);
    FinancingDetails_24.insert(AgreementCurrency_24.getString());
    FIX::AgreementDate AgreementDate_24("LOCALMKTDATE_1193871978");
    noRelatedSym_0_0.set(AgreementDate_24);
    FinancingDetails_24.insert(AgreementDate_24.getString());
    FIX::AgreementDesc AgreementDesc_24("STRING_1311449069");
    noRelatedSym_0_0.set(AgreementDesc_24);
    FinancingDetails_24.insert(AgreementDesc_24.getString());
    FIX::AgreementID AgreementID_24("STRING_843444365");
    noRelatedSym_0_0.set(AgreementID_24);
    FinancingDetails_24.insert(AgreementID_24.getString());
    FIX::DeliveryType DeliveryType_24(0);
    noRelatedSym_0_0.set(DeliveryType_24);
    FinancingDetails_24.insert(DeliveryType_24.getString());
    FIX::EndDate EndDate_24("LOCALMKTDATE_1115860050");
    noRelatedSym_0_0.set(EndDate_24);
    FinancingDetails_24.insert(EndDate_24.getString());
    FIX::MarginRatio MarginRatio_24;
    MarginRatio_24.setString("6.980000");
    noRelatedSym_0_0.set(MarginRatio_24);
    FinancingDetails_24.insert(MarginRatio_24.getString());
    FIX::StartDate StartDate_24("LOCALMKTDATE_1117021910");
    noRelatedSym_0_0.set(StartDate_24);
    FinancingDetails_24.insert(StartDate_24.getString());
    FIX::TerminationType TerminationType_24(3);
    noRelatedSym_0_0.set(TerminationType_24);
    FinancingDetails_24.insert(TerminationType_24.getString());
    all_values.push_back(FinancingDetails_24);

    // InstrmtLegSecListGrp
    // Group InstrmtLegSecListGrp.NoLegs
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_0;
      FIX::LegSettlType LegSettlType_23('1');
      noLegs_0_1_0.set(LegSettlType_23);
      InstrmtLegSecListGrp_NoLegs_0.insert(LegSettlType_23.getString());
      FIX::LegSwapType LegSwapType_23(1);
      noLegs_0_1_0.set(LegSwapType_23);
      InstrmtLegSecListGrp_NoLegs_0.insert(LegSwapType_23.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_0);

      // InstrumentLeg
      multiset<string> InstrumentLeg_123;
      FIX::EncodedLegIssuer EncodedLegIssuer_123("DATA_1168180788");
      noLegs_0_1_0.set(EncodedLegIssuer_123);
      InstrumentLeg_123.insert(EncodedLegIssuer_123.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_123(1300380977);
      noLegs_0_1_0.set(EncodedLegIssuerLen_123);
      InstrumentLeg_123.insert(EncodedLegIssuerLen_123.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_123("DATA_1600416512");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_123);
      InstrumentLeg_123.insert(EncodedLegSecurityDesc_123.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_123(1400860111);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_123);
      InstrumentLeg_123.insert(EncodedLegSecurityDescLen_123.getString());
      FIX::LegCFICode LegCFICode_123("STRING_656565687");
      noLegs_0_1_0.set(LegCFICode_123);
      InstrumentLeg_123.insert(LegCFICode_123.getString());
      FIX::LegContractMultiplier LegContractMultiplier_123;
      LegContractMultiplier_123.setString("17534975");
      noLegs_0_1_0.set(LegContractMultiplier_123);
      InstrumentLeg_123.insert(LegContractMultiplier_123.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_123(490592508);
      noLegs_0_1_0.set(LegContractMultiplierUnit_123);
      InstrumentLeg_123.insert(LegContractMultiplierUnit_123.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_123("MONTHYEAR_1246507362");
      noLegs_0_1_0.set(LegContractSettlMonth_123);
      InstrumentLeg_123.insert(LegContractSettlMonth_123.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_123("COUNTRY_1436630646");
      noLegs_0_1_0.set(LegCountryOfIssue_123);
      InstrumentLeg_123.insert(LegCountryOfIssue_123.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_123("LOCALMKTDATE_1544666218");
      noLegs_0_1_0.set(LegCouponPaymentDate_123);
      InstrumentLeg_123.insert(LegCouponPaymentDate_123.getString());
      FIX::LegCouponRate LegCouponRate_123;
      LegCouponRate_123.setString("57.030000");
      noLegs_0_1_0.set(LegCouponRate_123);
      InstrumentLeg_123.insert(LegCouponRate_123.getString());
      FIX::LegCreditRating LegCreditRating_123("STRING_1710123085");
      noLegs_0_1_0.set(LegCreditRating_123);
      InstrumentLeg_123.insert(LegCreditRating_123.getString());
      FIX::LegCurrency LegCurrency_123("GBP");
      noLegs_0_1_0.set(LegCurrency_123);
      InstrumentLeg_123.insert(LegCurrency_123.getString());
      FIX::LegDatedDate LegDatedDate_123("LOCALMKTDATE_1408849374");
      noLegs_0_1_0.set(LegDatedDate_123);
      InstrumentLeg_123.insert(LegDatedDate_123.getString());
      FIX::LegExerciseStyle LegExerciseStyle_123(739699606);
      noLegs_0_1_0.set(LegExerciseStyle_123);
      InstrumentLeg_123.insert(LegExerciseStyle_123.getString());
      FIX::LegFactor LegFactor_123;
      LegFactor_123.setString("4124813");
      noLegs_0_1_0.set(LegFactor_123);
      InstrumentLeg_123.insert(LegFactor_123.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_123(920072342);
      noLegs_0_1_0.set(LegFlowScheduleType_123);
      InstrumentLeg_123.insert(LegFlowScheduleType_123.getString());
      FIX::LegInstrRegistry LegInstrRegistry_123("STRING_928896861");
      noLegs_0_1_0.set(LegInstrRegistry_123);
      InstrumentLeg_123.insert(LegInstrRegistry_123.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_123("LOCALMKTDATE_1617130676");
      noLegs_0_1_0.set(LegInterestAccrualDate_123);
      InstrumentLeg_123.insert(LegInterestAccrualDate_123.getString());
      FIX::LegIssueDate LegIssueDate_123("LOCALMKTDATE_2113944320");
      noLegs_0_1_0.set(LegIssueDate_123);
      InstrumentLeg_123.insert(LegIssueDate_123.getString());
      FIX::LegIssuer LegIssuer_123("STRING_92862282");
      noLegs_0_1_0.set(LegIssuer_123);
      InstrumentLeg_123.insert(LegIssuer_123.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_123("STRING_313091393");
      noLegs_0_1_0.set(LegLocaleOfIssue_123);
      InstrumentLeg_123.insert(LegLocaleOfIssue_123.getString());
      FIX::LegMaturityDate LegMaturityDate_123("LOCALMKTDATE_149198205");
      noLegs_0_1_0.set(LegMaturityDate_123);
      InstrumentLeg_123.insert(LegMaturityDate_123.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_123("MONTHYEAR_1208722332");
      noLegs_0_1_0.set(LegMaturityMonthYear_123);
      InstrumentLeg_123.insert(LegMaturityMonthYear_123.getString());
      FIX::LegMaturityTime LegMaturityTime_123("TZTIMEONLY_32698444");
      noLegs_0_1_0.set(LegMaturityTime_123);
      InstrumentLeg_123.insert(LegMaturityTime_123.getString());
      FIX::LegOptAttribute LegOptAttribute_123('1');
      noLegs_0_1_0.set(LegOptAttribute_123);
      InstrumentLeg_123.insert(LegOptAttribute_123.getString());
      FIX::LegOptionRatio LegOptionRatio_123;
      LegOptionRatio_123.setString("8670810");
      noLegs_0_1_0.set(LegOptionRatio_123);
      InstrumentLeg_123.insert(LegOptionRatio_123.getString());
      FIX::LegPool LegPool_123("STRING_904808672");
      noLegs_0_1_0.set(LegPool_123);
      InstrumentLeg_123.insert(LegPool_123.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_123("STRING_874135377");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_123);
      InstrumentLeg_123.insert(LegPriceUnitOfMeasure_123.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_123;
      LegPriceUnitOfMeasureQty_123.setString("15550933");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_123);
      InstrumentLeg_123.insert(LegPriceUnitOfMeasureQty_123.getString());
      FIX::LegProduct LegProduct_123(2072989460);
      noLegs_0_1_0.set(LegProduct_123);
      InstrumentLeg_123.insert(LegProduct_123.getString());
      FIX::LegPutOrCall LegPutOrCall_123(27032707);
      noLegs_0_1_0.set(LegPutOrCall_123);
      InstrumentLeg_123.insert(LegPutOrCall_123.getString());
      FIX::LegRatioQty LegRatioQty_123;
      LegRatioQty_123.setString("10080262");
      noLegs_0_1_0.set(LegRatioQty_123);
      InstrumentLeg_123.insert(LegRatioQty_123.getString());
      FIX::LegRedemptionDate LegRedemptionDate_123("LOCALMKTDATE_1326365923");
      noLegs_0_1_0.set(LegRedemptionDate_123);
      InstrumentLeg_123.insert(LegRedemptionDate_123.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_123("STRING_683598394");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_123);
      InstrumentLeg_123.insert(LegRepoCollateralSecurityType_123.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_123;
      LegRepurchaseRate_123.setString("1.620000");
      noLegs_0_1_0.set(LegRepurchaseRate_123);
      InstrumentLeg_123.insert(LegRepurchaseRate_123.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_123(1816958432);
      noLegs_0_1_0.set(LegRepurchaseTerm_123);
      InstrumentLeg_123.insert(LegRepurchaseTerm_123.getString());
      FIX::LegSecurityDesc LegSecurityDesc_123("STRING_1930105757");
      noLegs_0_1_0.set(LegSecurityDesc_123);
      InstrumentLeg_123.insert(LegSecurityDesc_123.getString());
      FIX::LegSecurityExchange LegSecurityExchange_123("EXCHANGE_2050670808");
      noLegs_0_1_0.set(LegSecurityExchange_123);
      InstrumentLeg_123.insert(LegSecurityExchange_123.getString());
      FIX::LegSecurityID LegSecurityID_123("STRING_1214141002");
      noLegs_0_1_0.set(LegSecurityID_123);
      InstrumentLeg_123.insert(LegSecurityID_123.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_123("STRING_2080231460");
      noLegs_0_1_0.set(LegSecurityIDSource_123);
      InstrumentLeg_123.insert(LegSecurityIDSource_123.getString());
      FIX::LegSecuritySubType LegSecuritySubType_123("STRING_1613310246");
      noLegs_0_1_0.set(LegSecuritySubType_123);
      InstrumentLeg_123.insert(LegSecuritySubType_123.getString());
      FIX::LegSecurityType LegSecurityType_123("STRING_1073604367");
      noLegs_0_1_0.set(LegSecurityType_123);
      InstrumentLeg_123.insert(LegSecurityType_123.getString());
      FIX::LegSide LegSide_123('1');
      noLegs_0_1_0.set(LegSide_123);
      InstrumentLeg_123.insert(LegSide_123.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_123("STRING_874675972");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_123);
      InstrumentLeg_123.insert(LegStateOrProvinceOfIssue_123.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_123("EUR");
      noLegs_0_1_0.set(LegStrikeCurrency_123);
      InstrumentLeg_123.insert(LegStrikeCurrency_123.getString());
      FIX::LegStrikePrice LegStrikePrice_123;
      LegStrikePrice_123.setString("17947483");
      noLegs_0_1_0.set(LegStrikePrice_123);
      InstrumentLeg_123.insert(LegStrikePrice_123.getString());
      FIX::LegSymbol LegSymbol_123("STRING_594717186");
      noLegs_0_1_0.set(LegSymbol_123);
      InstrumentLeg_123.insert(LegSymbol_123.getString());
      FIX::LegSymbolSfx LegSymbolSfx_123("STRING_1877312973");
      noLegs_0_1_0.set(LegSymbolSfx_123);
      InstrumentLeg_123.insert(LegSymbolSfx_123.getString());
      FIX::LegTimeUnit LegTimeUnit_123("STRING_1761208987");
      noLegs_0_1_0.set(LegTimeUnit_123);
      InstrumentLeg_123.insert(LegTimeUnit_123.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_123("STRING_687579468");
      noLegs_0_1_0.set(LegUnitOfMeasure_123);
      InstrumentLeg_123.insert(LegUnitOfMeasure_123.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_123;
      LegUnitOfMeasureQty_123.setString("429207");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_123);
      InstrumentLeg_123.insert(LegUnitOfMeasureQty_123.getString());
      all_values.push_back(InstrumentLeg_123);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_247;
        FIX::LegSecurityAltID LegSecurityAltID_247("STRING_1896301800");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_247);
        LegSecAltIDGrp_NoLegSecurityAltID_247.insert(LegSecurityAltID_247.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_247("STRING_75619162");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_247);
        LegSecAltIDGrp_NoLegSecurityAltID_247.insert(LegSecurityAltIDSource_247.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_247);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_248;
        FIX::LegSecurityAltID LegSecurityAltID_248("STRING_1029143659");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_248);
        LegSecAltIDGrp_NoLegSecurityAltID_248.insert(LegSecurityAltID_248.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_248("STRING_615899203");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_248);
        LegSecAltIDGrp_NoLegSecurityAltID_248.insert(LegSecurityAltIDSource_248.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_248);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_13;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_13("CAN");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurveCurrency_13.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_13("STRING_23508934");
      noLegs_0_1_0.set(LegBenchmarkCurveName_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurveName_13.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_13("STRING_905933646");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurvePoint_13.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_13;
      LegBenchmarkPrice_13.setString("19303117");
      noLegs_0_1_0.set(LegBenchmarkPrice_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkPrice_13.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_13(1031535178);
      noLegs_0_1_0.set(LegBenchmarkPriceType_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkPriceType_13.getString());
      all_values.push_back(LegBenchmarkCurveData_13);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_47;
        FIX::LegStipulationType LegStipulationType_47("STRING_466426490");
        noLegStipulations_0_0_2_0.set(LegStipulationType_47);
        LegStipulations_NoLegStipulations_47.insert(LegStipulationType_47.getString());
        FIX::LegStipulationValue LegStipulationValue_47("STRING_1645575340");
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
      FIX::LegSettlType LegSettlType_24('1');
      noLegs_0_1_1.set(LegSettlType_24);
      InstrmtLegSecListGrp_NoLegs_1.insert(LegSettlType_24.getString());
      FIX::LegSwapType LegSwapType_24(5);
      noLegs_0_1_1.set(LegSwapType_24);
      InstrmtLegSecListGrp_NoLegs_1.insert(LegSwapType_24.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_1);

      // InstrumentLeg
      multiset<string> InstrumentLeg_124;
      FIX::EncodedLegIssuer EncodedLegIssuer_124("DATA_1548762500");
      noLegs_0_1_1.set(EncodedLegIssuer_124);
      InstrumentLeg_124.insert(EncodedLegIssuer_124.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_124(968431708);
      noLegs_0_1_1.set(EncodedLegIssuerLen_124);
      InstrumentLeg_124.insert(EncodedLegIssuerLen_124.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_124("DATA_181796411");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_124);
      InstrumentLeg_124.insert(EncodedLegSecurityDesc_124.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_124(1014589098);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_124);
      InstrumentLeg_124.insert(EncodedLegSecurityDescLen_124.getString());
      FIX::LegCFICode LegCFICode_124("STRING_2042036075");
      noLegs_0_1_1.set(LegCFICode_124);
      InstrumentLeg_124.insert(LegCFICode_124.getString());
      FIX::LegContractMultiplier LegContractMultiplier_124;
      LegContractMultiplier_124.setString("294973");
      noLegs_0_1_1.set(LegContractMultiplier_124);
      InstrumentLeg_124.insert(LegContractMultiplier_124.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_124(1889265070);
      noLegs_0_1_1.set(LegContractMultiplierUnit_124);
      InstrumentLeg_124.insert(LegContractMultiplierUnit_124.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_124("MONTHYEAR_1707856400");
      noLegs_0_1_1.set(LegContractSettlMonth_124);
      InstrumentLeg_124.insert(LegContractSettlMonth_124.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_124("COUNTRY_289679629");
      noLegs_0_1_1.set(LegCountryOfIssue_124);
      InstrumentLeg_124.insert(LegCountryOfIssue_124.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_124("LOCALMKTDATE_1536529737");
      noLegs_0_1_1.set(LegCouponPaymentDate_124);
      InstrumentLeg_124.insert(LegCouponPaymentDate_124.getString());
      FIX::LegCouponRate LegCouponRate_124;
      LegCouponRate_124.setString("99.380000");
      noLegs_0_1_1.set(LegCouponRate_124);
      InstrumentLeg_124.insert(LegCouponRate_124.getString());
      FIX::LegCreditRating LegCreditRating_124("STRING_19508954");
      noLegs_0_1_1.set(LegCreditRating_124);
      InstrumentLeg_124.insert(LegCreditRating_124.getString());
      FIX::LegCurrency LegCurrency_124("USD");
      noLegs_0_1_1.set(LegCurrency_124);
      InstrumentLeg_124.insert(LegCurrency_124.getString());
      FIX::LegDatedDate LegDatedDate_124("LOCALMKTDATE_62429672");
      noLegs_0_1_1.set(LegDatedDate_124);
      InstrumentLeg_124.insert(LegDatedDate_124.getString());
      FIX::LegExerciseStyle LegExerciseStyle_124(913178620);
      noLegs_0_1_1.set(LegExerciseStyle_124);
      InstrumentLeg_124.insert(LegExerciseStyle_124.getString());
      FIX::LegFactor LegFactor_124;
      LegFactor_124.setString("5914875");
      noLegs_0_1_1.set(LegFactor_124);
      InstrumentLeg_124.insert(LegFactor_124.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_124(138048835);
      noLegs_0_1_1.set(LegFlowScheduleType_124);
      InstrumentLeg_124.insert(LegFlowScheduleType_124.getString());
      FIX::LegInstrRegistry LegInstrRegistry_124("STRING_1942322279");
      noLegs_0_1_1.set(LegInstrRegistry_124);
      InstrumentLeg_124.insert(LegInstrRegistry_124.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_124("LOCALMKTDATE_1207386762");
      noLegs_0_1_1.set(LegInterestAccrualDate_124);
      InstrumentLeg_124.insert(LegInterestAccrualDate_124.getString());
      FIX::LegIssueDate LegIssueDate_124("LOCALMKTDATE_1118476669");
      noLegs_0_1_1.set(LegIssueDate_124);
      InstrumentLeg_124.insert(LegIssueDate_124.getString());
      FIX::LegIssuer LegIssuer_124("STRING_1698117668");
      noLegs_0_1_1.set(LegIssuer_124);
      InstrumentLeg_124.insert(LegIssuer_124.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_124("STRING_1230895697");
      noLegs_0_1_1.set(LegLocaleOfIssue_124);
      InstrumentLeg_124.insert(LegLocaleOfIssue_124.getString());
      FIX::LegMaturityDate LegMaturityDate_124("LOCALMKTDATE_2024410316");
      noLegs_0_1_1.set(LegMaturityDate_124);
      InstrumentLeg_124.insert(LegMaturityDate_124.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_124("MONTHYEAR_1480945764");
      noLegs_0_1_1.set(LegMaturityMonthYear_124);
      InstrumentLeg_124.insert(LegMaturityMonthYear_124.getString());
      FIX::LegMaturityTime LegMaturityTime_124("TZTIMEONLY_114947227");
      noLegs_0_1_1.set(LegMaturityTime_124);
      InstrumentLeg_124.insert(LegMaturityTime_124.getString());
      FIX::LegOptAttribute LegOptAttribute_124('2');
      noLegs_0_1_1.set(LegOptAttribute_124);
      InstrumentLeg_124.insert(LegOptAttribute_124.getString());
      FIX::LegOptionRatio LegOptionRatio_124;
      LegOptionRatio_124.setString("19473722");
      noLegs_0_1_1.set(LegOptionRatio_124);
      InstrumentLeg_124.insert(LegOptionRatio_124.getString());
      FIX::LegPool LegPool_124("STRING_1760522567");
      noLegs_0_1_1.set(LegPool_124);
      InstrumentLeg_124.insert(LegPool_124.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_124("STRING_1863516944");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_124);
      InstrumentLeg_124.insert(LegPriceUnitOfMeasure_124.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_124;
      LegPriceUnitOfMeasureQty_124.setString("489372");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_124);
      InstrumentLeg_124.insert(LegPriceUnitOfMeasureQty_124.getString());
      FIX::LegProduct LegProduct_124(1161801419);
      noLegs_0_1_1.set(LegProduct_124);
      InstrumentLeg_124.insert(LegProduct_124.getString());
      FIX::LegPutOrCall LegPutOrCall_124(684465004);
      noLegs_0_1_1.set(LegPutOrCall_124);
      InstrumentLeg_124.insert(LegPutOrCall_124.getString());
      FIX::LegRatioQty LegRatioQty_124;
      LegRatioQty_124.setString("2307336");
      noLegs_0_1_1.set(LegRatioQty_124);
      InstrumentLeg_124.insert(LegRatioQty_124.getString());
      FIX::LegRedemptionDate LegRedemptionDate_124("LOCALMKTDATE_28906870");
      noLegs_0_1_1.set(LegRedemptionDate_124);
      InstrumentLeg_124.insert(LegRedemptionDate_124.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_124("STRING_579017432");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_124);
      InstrumentLeg_124.insert(LegRepoCollateralSecurityType_124.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_124;
      LegRepurchaseRate_124.setString("9.500000");
      noLegs_0_1_1.set(LegRepurchaseRate_124);
      InstrumentLeg_124.insert(LegRepurchaseRate_124.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_124(1918171940);
      noLegs_0_1_1.set(LegRepurchaseTerm_124);
      InstrumentLeg_124.insert(LegRepurchaseTerm_124.getString());
      FIX::LegSecurityDesc LegSecurityDesc_124("STRING_139390184");
      noLegs_0_1_1.set(LegSecurityDesc_124);
      InstrumentLeg_124.insert(LegSecurityDesc_124.getString());
      FIX::LegSecurityExchange LegSecurityExchange_124("EXCHANGE_549910579");
      noLegs_0_1_1.set(LegSecurityExchange_124);
      InstrumentLeg_124.insert(LegSecurityExchange_124.getString());
      FIX::LegSecurityID LegSecurityID_124("STRING_1307218029");
      noLegs_0_1_1.set(LegSecurityID_124);
      InstrumentLeg_124.insert(LegSecurityID_124.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_124("STRING_294480123");
      noLegs_0_1_1.set(LegSecurityIDSource_124);
      InstrumentLeg_124.insert(LegSecurityIDSource_124.getString());
      FIX::LegSecuritySubType LegSecuritySubType_124("STRING_569419533");
      noLegs_0_1_1.set(LegSecuritySubType_124);
      InstrumentLeg_124.insert(LegSecuritySubType_124.getString());
      FIX::LegSecurityType LegSecurityType_124("STRING_309989457");
      noLegs_0_1_1.set(LegSecurityType_124);
      InstrumentLeg_124.insert(LegSecurityType_124.getString());
      FIX::LegSide LegSide_124('1');
      noLegs_0_1_1.set(LegSide_124);
      InstrumentLeg_124.insert(LegSide_124.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_124("STRING_631849205");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_124);
      InstrumentLeg_124.insert(LegStateOrProvinceOfIssue_124.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_124("GBP");
      noLegs_0_1_1.set(LegStrikeCurrency_124);
      InstrumentLeg_124.insert(LegStrikeCurrency_124.getString());
      FIX::LegStrikePrice LegStrikePrice_124;
      LegStrikePrice_124.setString("7698980");
      noLegs_0_1_1.set(LegStrikePrice_124);
      InstrumentLeg_124.insert(LegStrikePrice_124.getString());
      FIX::LegSymbol LegSymbol_124("STRING_1018006709");
      noLegs_0_1_1.set(LegSymbol_124);
      InstrumentLeg_124.insert(LegSymbol_124.getString());
      FIX::LegSymbolSfx LegSymbolSfx_124("STRING_788540203");
      noLegs_0_1_1.set(LegSymbolSfx_124);
      InstrumentLeg_124.insert(LegSymbolSfx_124.getString());
      FIX::LegTimeUnit LegTimeUnit_124("STRING_1888374710");
      noLegs_0_1_1.set(LegTimeUnit_124);
      InstrumentLeg_124.insert(LegTimeUnit_124.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_124("STRING_568640729");
      noLegs_0_1_1.set(LegUnitOfMeasure_124);
      InstrumentLeg_124.insert(LegUnitOfMeasure_124.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_124;
      LegUnitOfMeasureQty_124.setString("20194359");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_124);
      InstrumentLeg_124.insert(LegUnitOfMeasureQty_124.getString());
      all_values.push_back(InstrumentLeg_124);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_249;
        FIX::LegSecurityAltID LegSecurityAltID_249("STRING_2049586494");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_249);
        LegSecAltIDGrp_NoLegSecurityAltID_249.insert(LegSecurityAltID_249.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_249("STRING_2134383127");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_249);
        LegSecAltIDGrp_NoLegSecurityAltID_249.insert(LegSecurityAltIDSource_249.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_249);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_250;
        FIX::LegSecurityAltID LegSecurityAltID_250("STRING_1727043968");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_250);
        LegSecAltIDGrp_NoLegSecurityAltID_250.insert(LegSecurityAltID_250.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_250("STRING_1849475101");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_250);
        LegSecAltIDGrp_NoLegSecurityAltID_250.insert(LegSecurityAltIDSource_250.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_250);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_251;
        FIX::LegSecurityAltID LegSecurityAltID_251("STRING_1747422046");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_251);
        LegSecAltIDGrp_NoLegSecurityAltID_251.insert(LegSecurityAltID_251.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_251("STRING_1443077264");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_251);
        LegSecAltIDGrp_NoLegSecurityAltID_251.insert(LegSecurityAltIDSource_251.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_251);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_14;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_14("EUR");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurveCurrency_14.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_14("STRING_2127542268");
      noLegs_0_1_1.set(LegBenchmarkCurveName_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurveName_14.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_14("STRING_2129145925");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurvePoint_14.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_14;
      LegBenchmarkPrice_14.setString("7906466");
      noLegs_0_1_1.set(LegBenchmarkPrice_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkPrice_14.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_14(559076052);
      noLegs_0_1_1.set(LegBenchmarkPriceType_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkPriceType_14.getString());
      all_values.push_back(LegBenchmarkCurveData_14);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_48;
        FIX::LegStipulationType LegStipulationType_48("STRING_561334980");
        noLegStipulations_0_1_2_0.set(LegStipulationType_48);
        LegStipulations_NoLegStipulations_48.insert(LegStipulationType_48.getString());
        FIX::LegStipulationValue LegStipulationValue_48("STRING_698466237");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_48);
        LegStipulations_NoLegStipulations_48.insert(LegStipulationValue_48.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_48);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_49;
        FIX::LegStipulationType LegStipulationType_49("STRING_791803806");
        noLegStipulations_0_1_2_1.set(LegStipulationType_49);
        LegStipulations_NoLegStipulations_49.insert(LegStipulationType_49.getString());
        FIX::LegStipulationValue LegStipulationValue_49("STRING_1868553009");
        noLegStipulations_0_1_2_1.set(LegStipulationValue_49);
        LegStipulations_NoLegStipulations_49.insert(LegStipulationValue_49.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_49);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_50;
        FIX::LegStipulationType LegStipulationType_50("STRING_992946360");
        noLegStipulations_0_1_2_2.set(LegStipulationType_50);
        LegStipulations_NoLegStipulations_50.insert(LegStipulationType_50.getString());
        FIX::LegStipulationValue LegStipulationValue_50("STRING_1361223339");
        noLegStipulations_0_1_2_2.set(LegStipulationValue_50);
        LegStipulations_NoLegStipulations_50.insert(LegStipulationValue_50.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_50);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_76;
    FIX::AttachmentPoint AttachmentPoint_76;
    AttachmentPoint_76.setString("88.190000");
    noRelatedSym_0_0.set(AttachmentPoint_76);
    Instrument_76.insert(AttachmentPoint_76.getString());
    FIX::CFICode CFICode_76("STRING_2130095889");
    noRelatedSym_0_0.set(CFICode_76);
    Instrument_76.insert(CFICode_76.getString());
    FIX::CPProgram CPProgram_76(1);
    noRelatedSym_0_0.set(CPProgram_76);
    Instrument_76.insert(CPProgram_76.getString());
    FIX::CPRegType CPRegType_76("STRING_1254226896");
    noRelatedSym_0_0.set(CPRegType_76);
    Instrument_76.insert(CPRegType_76.getString());
    FIX::CapPrice CapPrice_76;
    CapPrice_76.setString("17112493");
    noRelatedSym_0_0.set(CapPrice_76);
    Instrument_76.insert(CapPrice_76.getString());
    FIX::ContractMultiplier ContractMultiplier_76;
    ContractMultiplier_76.setString("6154869");
    noRelatedSym_0_0.set(ContractMultiplier_76);
    Instrument_76.insert(ContractMultiplier_76.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_76(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_76);
    Instrument_76.insert(ContractMultiplierUnit_76.getString());
    FIX::ContractSettlMonth ContractSettlMonth_76("MONTHYEAR_352305885");
    noRelatedSym_0_0.set(ContractSettlMonth_76);
    Instrument_76.insert(ContractSettlMonth_76.getString());
    FIX::CountryOfIssue CountryOfIssue_76("COUNTRY_356377999");
    noRelatedSym_0_0.set(CountryOfIssue_76);
    Instrument_76.insert(CountryOfIssue_76.getString());
    FIX::CouponPaymentDate CouponPaymentDate_76("LOCALMKTDATE_693390687");
    noRelatedSym_0_0.set(CouponPaymentDate_76);
    Instrument_76.insert(CouponPaymentDate_76.getString());
    FIX::CouponRate CouponRate_76;
    CouponRate_76.setString("81.370000");
    noRelatedSym_0_0.set(CouponRate_76);
    Instrument_76.insert(CouponRate_76.getString());
    FIX::CreditRating CreditRating_76("STRING_2121679377");
    noRelatedSym_0_0.set(CreditRating_76);
    Instrument_76.insert(CreditRating_76.getString());
    FIX::DatedDate DatedDate_76("LOCALMKTDATE_595493533");
    noRelatedSym_0_0.set(DatedDate_76);
    Instrument_76.insert(DatedDate_76.getString());
    FIX::DetachmentPoint DetachmentPoint_76;
    DetachmentPoint_76.setString("76.160000");
    noRelatedSym_0_0.set(DetachmentPoint_76);
    Instrument_76.insert(DetachmentPoint_76.getString());
    FIX::EncodedIssuer EncodedIssuer_76("DATA_1701239697");
    noRelatedSym_0_0.set(EncodedIssuer_76);
    Instrument_76.insert(EncodedIssuer_76.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_76(297484986);
    noRelatedSym_0_0.set(EncodedIssuerLen_76);
    Instrument_76.insert(EncodedIssuerLen_76.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_76("DATA_1958579662");
    noRelatedSym_0_0.set(EncodedSecurityDesc_76);
    Instrument_76.insert(EncodedSecurityDesc_76.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_76(996833313);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_76);
    Instrument_76.insert(EncodedSecurityDescLen_76.getString());
    FIX::ExerciseStyle ExerciseStyle_76(2);
    noRelatedSym_0_0.set(ExerciseStyle_76);
    Instrument_76.insert(ExerciseStyle_76.getString());
    FIX::Factor Factor_76;
    Factor_76.setString("5728358");
    noRelatedSym_0_0.set(Factor_76);
    Instrument_76.insert(Factor_76.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_76(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_76);
    Instrument_76.insert(FlexProductEligibilityIndicator_76.getString());
    FIX::FlexibleIndicator FlexibleIndicator_76(false);
    noRelatedSym_0_0.set(FlexibleIndicator_76);
    Instrument_76.insert(FlexibleIndicator_76.getString());
    FIX::FloorPrice FloorPrice_76;
    FloorPrice_76.setString("13634825");
    noRelatedSym_0_0.set(FloorPrice_76);
    Instrument_76.insert(FloorPrice_76.getString());
    FIX::FlowScheduleType FlowScheduleType_76(1);
    noRelatedSym_0_0.set(FlowScheduleType_76);
    Instrument_76.insert(FlowScheduleType_76.getString());
    FIX::InstrRegistry InstrRegistry_76("STRING_271969150");
    noRelatedSym_0_0.set(InstrRegistry_76);
    Instrument_76.insert(InstrRegistry_76.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_76('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_76);
    Instrument_76.insert(InstrmtAssignmentMethod_76.getString());
    FIX::InterestAccrualDate InterestAccrualDate_76("LOCALMKTDATE_86950575");
    noRelatedSym_0_0.set(InterestAccrualDate_76);
    Instrument_76.insert(InterestAccrualDate_76.getString());
    FIX::IssueDate IssueDate_76("LOCALMKTDATE_1063772957");
    noRelatedSym_0_0.set(IssueDate_76);
    Instrument_76.insert(IssueDate_76.getString());
    FIX::Issuer Issuer_76("STRING_1645886860");
    noRelatedSym_0_0.set(Issuer_76);
    Instrument_76.insert(Issuer_76.getString());
    FIX::ListMethod ListMethod_76(1);
    noRelatedSym_0_0.set(ListMethod_76);
    Instrument_76.insert(ListMethod_76.getString());
    FIX::LocaleOfIssue LocaleOfIssue_76("STRING_277512648");
    noRelatedSym_0_0.set(LocaleOfIssue_76);
    Instrument_76.insert(LocaleOfIssue_76.getString());
    FIX::MaturityDate MaturityDate_76("LOCALMKTDATE_1676945679");
    noRelatedSym_0_0.set(MaturityDate_76);
    Instrument_76.insert(MaturityDate_76.getString());
    FIX::MaturityMonthYear MaturityMonthYear_76("MONTHYEAR_1062509177");
    noRelatedSym_0_0.set(MaturityMonthYear_76);
    Instrument_76.insert(MaturityMonthYear_76.getString());
    FIX::MaturityTime MaturityTime_76("TZTIMEONLY_123101545");
    noRelatedSym_0_0.set(MaturityTime_76);
    Instrument_76.insert(MaturityTime_76.getString());
    FIX::MinPriceIncrement MinPriceIncrement_76;
    MinPriceIncrement_76.setString("7836889");
    noRelatedSym_0_0.set(MinPriceIncrement_76);
    Instrument_76.insert(MinPriceIncrement_76.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_76;
    MinPriceIncrementAmount_76.setString("6262748");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_76);
    Instrument_76.insert(MinPriceIncrementAmount_76.getString());
    FIX::NTPositionLimit NTPositionLimit_76(738588483);
    noRelatedSym_0_0.set(NTPositionLimit_76);
    Instrument_76.insert(NTPositionLimit_76.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_76;
    NotionalPercentageOutstanding_76.setString("88.850000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_76);
    Instrument_76.insert(NotionalPercentageOutstanding_76.getString());
    FIX::OptAttribute OptAttribute_76('9');
    noRelatedSym_0_0.set(OptAttribute_76);
    Instrument_76.insert(OptAttribute_76.getString());
    FIX::OptPayoutAmount OptPayoutAmount_76;
    OptPayoutAmount_76.setString("10949664");
    noRelatedSym_0_0.set(OptPayoutAmount_76);
    Instrument_76.insert(OptPayoutAmount_76.getString());
    FIX::OptPayoutType OptPayoutType_76(3);
    noRelatedSym_0_0.set(OptPayoutType_76);
    Instrument_76.insert(OptPayoutType_76.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_76;
    OriginalNotionalPercentageOutstanding_76.setString("88.810000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_76);
    Instrument_76.insert(OriginalNotionalPercentageOutstanding_76.getString());
    FIX::Pool Pool_76("STRING_1069162212");
    noRelatedSym_0_0.set(Pool_76);
    Instrument_76.insert(Pool_76.getString());
    FIX::PositionLimit PositionLimit_76(49839457);
    noRelatedSym_0_0.set(PositionLimit_76);
    Instrument_76.insert(PositionLimit_76.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_76("STRING_INX");
    noRelatedSym_0_0.set(PriceQuoteMethod_76);
    Instrument_76.insert(PriceQuoteMethod_76.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_76("STRING_622918261");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_76);
    Instrument_76.insert(PriceUnitOfMeasure_76.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_76;
    PriceUnitOfMeasureQty_76.setString("3473244");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_76);
    Instrument_76.insert(PriceUnitOfMeasureQty_76.getString());
    FIX::Product Product_78(7);
    noRelatedSym_0_0.set(Product_78);
    Instrument_76.insert(Product_78.getString());
    FIX::ProductComplex ProductComplex_76("STRING_1619751575");
    noRelatedSym_0_0.set(ProductComplex_76);
    Instrument_76.insert(ProductComplex_76.getString());
    FIX::PutOrCall PutOrCall_76(1);
    noRelatedSym_0_0.set(PutOrCall_76);
    Instrument_76.insert(PutOrCall_76.getString());
    FIX::RedemptionDate RedemptionDate_76("LOCALMKTDATE_1797928342");
    noRelatedSym_0_0.set(RedemptionDate_76);
    Instrument_76.insert(RedemptionDate_76.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_76("STRING_449159861");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_76);
    Instrument_76.insert(RepoCollateralSecurityType_76.getString());
    FIX::RepurchaseRate RepurchaseRate_76;
    RepurchaseRate_76.setString("40.120000");
    noRelatedSym_0_0.set(RepurchaseRate_76);
    Instrument_76.insert(RepurchaseRate_76.getString());
    FIX::RepurchaseTerm RepurchaseTerm_76(1013927213);
    noRelatedSym_0_0.set(RepurchaseTerm_76);
    Instrument_76.insert(RepurchaseTerm_76.getString());
    FIX::RestructuringType RestructuringType_76("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_76);
    Instrument_76.insert(RestructuringType_76.getString());
    FIX::SecurityDesc SecurityDesc_76("STRING_697783162");
    noRelatedSym_0_0.set(SecurityDesc_76);
    Instrument_76.insert(SecurityDesc_76.getString());
    FIX::SecurityExchange SecurityExchange_76("EXCHANGE_791261064");
    noRelatedSym_0_0.set(SecurityExchange_76);
    Instrument_76.insert(SecurityExchange_76.getString());
    FIX::SecurityGroup SecurityGroup_76("STRING_2072078423");
    noRelatedSym_0_0.set(SecurityGroup_76);
    Instrument_76.insert(SecurityGroup_76.getString());
    FIX::SecurityID SecurityID_76("STRING_1761556119");
    noRelatedSym_0_0.set(SecurityID_76);
    Instrument_76.insert(SecurityID_76.getString());
    FIX::SecurityIDSource SecurityIDSource_76("STRING_2");
    noRelatedSym_0_0.set(SecurityIDSource_76);
    Instrument_76.insert(SecurityIDSource_76.getString());
    FIX::SecurityStatus SecurityStatus_76("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_76);
    Instrument_76.insert(SecurityStatus_76.getString());
    FIX::SecuritySubType SecuritySubType_77("STRING_2039068768");
    noRelatedSym_0_0.set(SecuritySubType_77);
    Instrument_76.insert(SecuritySubType_77.getString());
    FIX::SecurityType SecurityType_78("STRING_CPP");
    noRelatedSym_0_0.set(SecurityType_78);
    Instrument_76.insert(SecurityType_78.getString());
    FIX::Seniority Seniority_76("STRING_SB");
    noRelatedSym_0_0.set(Seniority_76);
    Instrument_76.insert(Seniority_76.getString());
    FIX::SettlMethod SettlMethod_76('P');
    noRelatedSym_0_0.set(SettlMethod_76);
    Instrument_76.insert(SettlMethod_76.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_76("STRING_602815236");
    noRelatedSym_0_0.set(SettleOnOpenFlag_76);
    Instrument_76.insert(SettleOnOpenFlag_76.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_76("STRING_545792098");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_76);
    Instrument_76.insert(StateOrProvinceOfIssue_76.getString());
    FIX::StrikeCurrency StrikeCurrency_76("USD");
    noRelatedSym_0_0.set(StrikeCurrency_76);
    Instrument_76.insert(StrikeCurrency_76.getString());
    FIX::StrikeMultiplier StrikeMultiplier_76;
    StrikeMultiplier_76.setString("15243728");
    noRelatedSym_0_0.set(StrikeMultiplier_76);
    Instrument_76.insert(StrikeMultiplier_76.getString());
    FIX::StrikePrice StrikePrice_76;
    StrikePrice_76.setString("18482416");
    noRelatedSym_0_0.set(StrikePrice_76);
    Instrument_76.insert(StrikePrice_76.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_76(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_76);
    Instrument_76.insert(StrikePriceBoundaryMethod_76.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_76;
    StrikePriceBoundaryPrecision_76.setString("80.750000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_76);
    Instrument_76.insert(StrikePriceBoundaryPrecision_76.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_76(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_76);
    Instrument_76.insert(StrikePriceDeterminationMethod_76.getString());
    FIX::StrikeValue StrikeValue_76;
    StrikeValue_76.setString("10154395");
    noRelatedSym_0_0.set(StrikeValue_76);
    Instrument_76.insert(StrikeValue_76.getString());
    FIX::Symbol Symbol_76("STRING_1993724572");
    noRelatedSym_0_0.set(Symbol_76);
    Instrument_76.insert(Symbol_76.getString());
    FIX::SymbolSfx SymbolSfx_76("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_76);
    Instrument_76.insert(SymbolSfx_76.getString());
    FIX::TimeUnit TimeUnit_76("STRING_Yr");
    noRelatedSym_0_0.set(TimeUnit_76);
    Instrument_76.insert(TimeUnit_76.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_76(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_76);
    Instrument_76.insert(UnderlyingPriceDeterminationMethod_76.getString());
    FIX::UnitOfMeasure UnitOfMeasure_76("STRING_USD");
    noRelatedSym_0_0.set(UnitOfMeasure_76);
    Instrument_76.insert(UnitOfMeasure_76.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_76;
    UnitOfMeasureQty_76.setString("17585020");
    noRelatedSym_0_0.set(UnitOfMeasureQty_76);
    Instrument_76.insert(UnitOfMeasureQty_76.getString());
    FIX::ValuationMethod ValuationMethod_76("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_76);
    Instrument_76.insert(ValuationMethod_76.getString());
    all_values.push_back(Instrument_76);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_146;
      FIX::ComplexEventCondition ComplexEventCondition_146(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventCondition_146.getString());
      FIX::ComplexEventPrice ComplexEventPrice_146;
      ComplexEventPrice_146.setString("17357053");
      noComplexEvents_0_1_0.set(ComplexEventPrice_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPrice_146.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_146(5);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceBoundaryMethod_146.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_146;
      ComplexEventPriceBoundaryPrecision_146.setString("55.630000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceBoundaryPrecision_146.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_146(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceTimeType_146.getString());
      FIX::ComplexEventType ComplexEventType_146(1);
      noComplexEvents_0_1_0.set(ComplexEventType_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventType_146.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_146;
      ComplexOptPayoutAmount_146.setString("3486880");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexOptPayoutAmount_146.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_146);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_303;
        FIX::ComplexEventEndDate ComplexEventEndDate_303(FIX::UTCTIMESTAMP(10, 5, 49, 24, 7, 2003));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_303);
        ComplexEventDates_NoComplexEventDates_303.insert(ComplexEventEndDate_303.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_303(FIX::UTCTIMESTAMP(16, 42, 11, 6, 10, 2008));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_303);
        ComplexEventDates_NoComplexEventDates_303.insert(ComplexEventStartDate_303.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_303);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_616;
          FIX::ComplexEventEndTime ComplexEventEndTime_616(FIX::UTCTIMEONLY(11, 26, 9));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_616);
          ComplexEventTimes_NoComplexEventTimes_616.insert(ComplexEventEndTime_616.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_616(FIX::UTCTIMEONLY(22, 39, 35));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_616);
          ComplexEventTimes_NoComplexEventTimes_616.insert(ComplexEventStartTime_616.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_616);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_617;
          FIX::ComplexEventEndTime ComplexEventEndTime_617(FIX::UTCTIMEONLY(19, 59, 38));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_617);
          ComplexEventTimes_NoComplexEventTimes_617.insert(ComplexEventEndTime_617.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_617(FIX::UTCTIMEONLY(6, 44, 4));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_617);
          ComplexEventTimes_NoComplexEventTimes_617.insert(ComplexEventStartTime_617.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_617);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_304;
        FIX::ComplexEventEndDate ComplexEventEndDate_304(FIX::UTCTIMESTAMP(7, 9, 12, 7, 4, 2004));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_304);
        ComplexEventDates_NoComplexEventDates_304.insert(ComplexEventEndDate_304.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_304(FIX::UTCTIMESTAMP(23, 26, 51, 18, 12, 2017));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_304);
        ComplexEventDates_NoComplexEventDates_304.insert(ComplexEventStartDate_304.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_304);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_618;
          FIX::ComplexEventEndTime ComplexEventEndTime_618(FIX::UTCTIMEONLY(8, 38, 31));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_618);
          ComplexEventTimes_NoComplexEventTimes_618.insert(ComplexEventEndTime_618.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_618(FIX::UTCTIMEONLY(5, 2, 30));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_618);
          ComplexEventTimes_NoComplexEventTimes_618.insert(ComplexEventStartTime_618.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_618);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_619;
          FIX::ComplexEventEndTime ComplexEventEndTime_619(FIX::UTCTIMEONLY(9, 21, 30));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_619);
          ComplexEventTimes_NoComplexEventTimes_619.insert(ComplexEventEndTime_619.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_619(FIX::UTCTIMEONLY(3, 14, 20));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_619);
          ComplexEventTimes_NoComplexEventTimes_619.insert(ComplexEventStartTime_619.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_619);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_620;
          FIX::ComplexEventEndTime ComplexEventEndTime_620(FIX::UTCTIMEONLY(1, 30, 27));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_620);
          ComplexEventTimes_NoComplexEventTimes_620.insert(ComplexEventEndTime_620.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_620(FIX::UTCTIMEONLY(13, 19, 44));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_620);
          ComplexEventTimes_NoComplexEventTimes_620.insert(ComplexEventStartTime_620.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_620);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_149;
      FIX::EventDate EventDate_149("LOCALMKTDATE_71134897");
      noEvents_0_1_0.set(EventDate_149);
      EvntGrp_NoEvents_149.insert(EventDate_149.getString());
      FIX::EventPx EventPx_149;
      EventPx_149.setString("10666040");
      noEvents_0_1_0.set(EventPx_149);
      EvntGrp_NoEvents_149.insert(EventPx_149.getString());
      FIX::EventText EventText_149("STRING_966073707");
      noEvents_0_1_0.set(EventText_149);
      EvntGrp_NoEvents_149.insert(EventText_149.getString());
      FIX::EventTime EventTime_149(FIX::UTCTIMESTAMP(8, 39, 34, 1, 11, 2011));
      noEvents_0_1_0.set(EventTime_149);
      EvntGrp_NoEvents_149.insert(EventTime_149.getString());
      FIX::EventType EventType_149(5);
      noEvents_0_1_0.set(EventType_149);
      EvntGrp_NoEvents_149.insert(EventType_149.getString());
      all_values.push_back(EvntGrp_NoEvents_149);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_150;
      FIX::EventDate EventDate_150("LOCALMKTDATE_1032525435");
      noEvents_0_1_1.set(EventDate_150);
      EvntGrp_NoEvents_150.insert(EventDate_150.getString());
      FIX::EventPx EventPx_150;
      EventPx_150.setString("12414919");
      noEvents_0_1_1.set(EventPx_150);
      EvntGrp_NoEvents_150.insert(EventPx_150.getString());
      FIX::EventText EventText_150("STRING_1404371814");
      noEvents_0_1_1.set(EventText_150);
      EvntGrp_NoEvents_150.insert(EventText_150.getString());
      FIX::EventTime EventTime_150(FIX::UTCTIMESTAMP(9, 15, 29, 1, 11, 2005));
      noEvents_0_1_1.set(EventTime_150);
      EvntGrp_NoEvents_150.insert(EventTime_150.getString());
      FIX::EventType EventType_150(15);
      noEvents_0_1_1.set(EventType_150);
      EvntGrp_NoEvents_150.insert(EventType_150.getString());
      all_values.push_back(EvntGrp_NoEvents_150);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_147;
      FIX::InstrumentPartyID InstrumentPartyID_147("STRING_1034738641");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyID_147.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_147('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyIDSource_147.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_147(894647739);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyRole_147.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_147);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300;
        FIX::InstrumentPartySubID InstrumentPartySubID_300("STRING_485735589");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_300);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300.insert(InstrumentPartySubID_300.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_300(167615450);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_300);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300.insert(InstrumentPartySubIDType_300.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_163;
      FIX::SecurityAltID SecurityAltID_163("STRING_1807936282");
      noSecurityAltID_0_1_0.set(SecurityAltID_163);
      SecAltIDGrp_NoSecurityAltID_163.insert(SecurityAltID_163.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_163("STRING_238750347");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_163);
      SecAltIDGrp_NoSecurityAltID_163.insert(SecurityAltIDSource_163.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_163);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_164;
      FIX::SecurityAltID SecurityAltID_164("STRING_1896579496");
      noSecurityAltID_0_1_1.set(SecurityAltID_164);
      SecAltIDGrp_NoSecurityAltID_164.insert(SecurityAltID_164.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_164("STRING_626526341");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_164);
      SecAltIDGrp_NoSecurityAltID_164.insert(SecurityAltIDSource_164.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_164);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_165;
      FIX::SecurityAltID SecurityAltID_165("STRING_1463492320");
      noSecurityAltID_0_1_2.set(SecurityAltID_165);
      SecAltIDGrp_NoSecurityAltID_165.insert(SecurityAltID_165.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_165("STRING_446956313");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_165);
      SecAltIDGrp_NoSecurityAltID_165.insert(SecurityAltIDSource_165.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_165);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_152;
    FIX::SecurityXML SecurityXML_153("XMLDATA_1524888021");
    noRelatedSym_0_0.set(SecurityXML_153);
    FIX::SecurityXMLLen SecurityXMLLen_76(1896038534);
    noRelatedSym_0_0.set(SecurityXMLLen_76);
    FIX::SecurityXMLSchema SecurityXMLSchema_76("STRING_1500341122");
    noRelatedSym_0_0.set(SecurityXMLSchema_76);
    SecurityXML_152.insert(SecurityXMLSchema_76.getString());
    all_values.push_back(SecurityXML_152);

    // InstrumentExtension
    multiset<string> InstrumentExtension_12;
    FIX::DeliveryForm DeliveryForm_12(2);
    noRelatedSym_0_0.set(DeliveryForm_12);
    InstrumentExtension_12.insert(DeliveryForm_12.getString());
    FIX::PctAtRisk PctAtRisk_12;
    PctAtRisk_12.setString("95.910000");
    noRelatedSym_0_0.set(PctAtRisk_12);
    InstrumentExtension_12.insert(PctAtRisk_12.getString());
    all_values.push_back(InstrumentExtension_12);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_25;
      FIX::InstrAttribType InstrAttribType_25(9);
      noInstrAttrib_0_1_0.set(InstrAttribType_25);
      AttrbGrp_NoInstrAttrib_25.insert(InstrAttribType_25.getString());
      FIX::InstrAttribValue InstrAttribValue_25("STRING_1903411518");
      noInstrAttrib_0_1_0.set(InstrAttribValue_25);
      AttrbGrp_NoInstrAttrib_25.insert(InstrAttribValue_25.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_25);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_26;
      FIX::InstrAttribType InstrAttribType_26(3);
      noInstrAttrib_0_1_1.set(InstrAttribType_26);
      AttrbGrp_NoInstrAttrib_26.insert(InstrAttribType_26.getString());
      FIX::InstrAttribValue InstrAttribValue_26("STRING_1626526725");
      noInstrAttrib_0_1_1.set(InstrAttribValue_26);
      AttrbGrp_NoInstrAttrib_26.insert(InstrAttribValue_26.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_26);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_27;
      FIX::InstrAttribType InstrAttribType_27(8);
      noInstrAttrib_0_1_2.set(InstrAttribType_27);
      AttrbGrp_NoInstrAttrib_27.insert(InstrAttribType_27.getString());
      FIX::InstrAttribValue InstrAttribValue_27("STRING_1179072999");
      noInstrAttrib_0_1_2.set(InstrAttribValue_27);
      AttrbGrp_NoInstrAttrib_27.insert(InstrAttribValue_27.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_27);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_9;
    FIX::ExpirationCycle ExpirationCycle_10(0);
    noRelatedSym_0_0.set(ExpirationCycle_10);
    BaseTradingRules_9.insert(ExpirationCycle_10.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_9(1);
    noRelatedSym_0_0.set(ImpliedMarketIndicator_9);
    BaseTradingRules_9.insert(ImpliedMarketIndicator_9.getString());
    FIX::MaxPriceVariation MaxPriceVariation_9;
    MaxPriceVariation_9.setString("19013615");
    noRelatedSym_0_0.set(MaxPriceVariation_9);
    BaseTradingRules_9.insert(MaxPriceVariation_9.getString());
    FIX::MaxTradeVol MaxTradeVol_9;
    MaxTradeVol_9.setString("6860612");
    noRelatedSym_0_0.set(MaxTradeVol_9);
    BaseTradingRules_9.insert(MaxTradeVol_9.getString());
    FIX::MinTradeVol MinTradeVol_9;
    MinTradeVol_9.setString("19915493");
    noRelatedSym_0_0.set(MinTradeVol_9);
    BaseTradingRules_9.insert(MinTradeVol_9.getString());
    FIX::MultilegModel MultilegModel_11(2);
    noRelatedSym_0_0.set(MultilegModel_11);
    BaseTradingRules_9.insert(MultilegModel_11.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_11(0);
    noRelatedSym_0_0.set(MultilegPriceMethod_11);
    BaseTradingRules_9.insert(MultilegPriceMethod_11.getString());
    FIX::PriceType PriceType_43(4);
    noRelatedSym_0_0.set(PriceType_43);
    BaseTradingRules_9.insert(PriceType_43.getString());
    FIX::RoundLot RoundLot_9;
    RoundLot_9.setString("11451773");
    noRelatedSym_0_0.set(RoundLot_9);
    BaseTradingRules_9.insert(RoundLot_9.getString());
    FIX::TradingCurrency TradingCurrency_9("USD");
    noRelatedSym_0_0.set(TradingCurrency_9);
    BaseTradingRules_9.insert(TradingCurrency_9.getString());
    all_values.push_back(BaseTradingRules_9);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_18;
      FIX::LotType LotType_24('2');
      noLotTypeRules_0_1_0.set(LotType_24);
      LotTypeRules_NoLotTypeRules_18.insert(LotType_24.getString());
      FIX::MinLotSize MinLotSize_18;
      MinLotSize_18.setString("16721700");
      noLotTypeRules_0_1_0.set(MinLotSize_18);
      LotTypeRules_NoLotTypeRules_18.insert(MinLotSize_18.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_18);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_19;
      FIX::LotType LotType_25('4');
      noLotTypeRules_0_1_1.set(LotType_25);
      LotTypeRules_NoLotTypeRules_19.insert(LotType_25.getString());
      FIX::MinLotSize MinLotSize_19;
      MinLotSize_19.setString("2155857");
      noLotTypeRules_0_1_1.set(MinLotSize_19);
      LotTypeRules_NoLotTypeRules_19.insert(MinLotSize_19.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_19);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_20;
      FIX::LotType LotType_26('1');
      noLotTypeRules_0_1_2.set(LotType_26);
      LotTypeRules_NoLotTypeRules_20.insert(LotType_26.getString());
      FIX::MinLotSize MinLotSize_20;
      MinLotSize_20.setString("8675518");
      noLotTypeRules_0_1_2.set(MinLotSize_20);
      LotTypeRules_NoLotTypeRules_20.insert(MinLotSize_20.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_20);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_9;
    FIX::HighLimitPrice HighLimitPrice_9;
    HighLimitPrice_9.setString("6625420");
    noRelatedSym_0_0.set(HighLimitPrice_9);
    PriceLimits_9.insert(HighLimitPrice_9.getString());
    FIX::LowLimitPrice LowLimitPrice_9;
    LowLimitPrice_9.setString("16761007");
    noRelatedSym_0_0.set(LowLimitPrice_9);
    PriceLimits_9.insert(LowLimitPrice_9.getString());
    FIX::PriceLimitType PriceLimitType_9(2);
    noRelatedSym_0_0.set(PriceLimitType_9);
    PriceLimits_9.insert(PriceLimitType_9.getString());
    FIX::TradingReferencePrice TradingReferencePrice_9;
    TradingReferencePrice_9.setString("153995");
    noRelatedSym_0_0.set(TradingReferencePrice_9);
    PriceLimits_9.insert(TradingReferencePrice_9.getString());
    all_values.push_back(PriceLimits_9);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_19;
      FIX::EndTickPriceRange EndTickPriceRange_19;
      EndTickPriceRange_19.setString("12780263");
      noTickRules_0_1_0.set(EndTickPriceRange_19);
      TickRules_NoTickRules_19.insert(EndTickPriceRange_19.getString());
      FIX::StartTickPriceRange StartTickPriceRange_19;
      StartTickPriceRange_19.setString("2190568");
      noTickRules_0_1_0.set(StartTickPriceRange_19);
      TickRules_NoTickRules_19.insert(StartTickPriceRange_19.getString());
      FIX::TickIncrement TickIncrement_19;
      TickIncrement_19.setString("21321247");
      noTickRules_0_1_0.set(TickIncrement_19);
      TickRules_NoTickRules_19.insert(TickIncrement_19.getString());
      FIX::TickRuleType TickRuleType_19(3);
      noTickRules_0_1_0.set(TickRuleType_19);
      TickRules_NoTickRules_19.insert(TickRuleType_19.getString());
      all_values.push_back(TickRules_NoTickRules_19);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_20;
      FIX::EndTickPriceRange EndTickPriceRange_20;
      EndTickPriceRange_20.setString("18270860");
      noTickRules_0_1_1.set(EndTickPriceRange_20);
      TickRules_NoTickRules_20.insert(EndTickPriceRange_20.getString());
      FIX::StartTickPriceRange StartTickPriceRange_20;
      StartTickPriceRange_20.setString("16111678");
      noTickRules_0_1_1.set(StartTickPriceRange_20);
      TickRules_NoTickRules_20.insert(StartTickPriceRange_20.getString());
      FIX::TickIncrement TickIncrement_20;
      TickIncrement_20.setString("17950316");
      noTickRules_0_1_1.set(TickIncrement_20);
      TickRules_NoTickRules_20.insert(TickIncrement_20.getString());
      FIX::TickRuleType TickRuleType_20(0);
      noTickRules_0_1_1.set(TickRuleType_20);
      TickRules_NoTickRules_20.insert(TickRuleType_20.getString());
      all_values.push_back(TickRules_NoTickRules_20);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_21;
      FIX::EndTickPriceRange EndTickPriceRange_21;
      EndTickPriceRange_21.setString("17083510");
      noTickRules_0_1_2.set(EndTickPriceRange_21);
      TickRules_NoTickRules_21.insert(EndTickPriceRange_21.getString());
      FIX::StartTickPriceRange StartTickPriceRange_21;
      StartTickPriceRange_21.setString("9924458");
      noTickRules_0_1_2.set(StartTickPriceRange_21);
      TickRules_NoTickRules_21.insert(StartTickPriceRange_21.getString());
      FIX::TickIncrement TickIncrement_21;
      TickIncrement_21.setString("6125532");
      noTickRules_0_1_2.set(TickIncrement_21);
      TickRules_NoTickRules_21.insert(TickIncrement_21.getString());
      FIX::TickRuleType TickRuleType_21(2);
      noTickRules_0_1_2.set(TickRuleType_21);
      TickRules_NoTickRules_21.insert(TickRuleType_21.getString());
      all_values.push_back(TickRules_NoTickRules_21);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_13;
      FIX::NestedInstrAttribType NestedInstrAttribType_13(863082860);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_13);
      NestedInstrumentAttribute_NoNestedInstrAttrib_13.insert(NestedInstrAttribType_13.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_13("STRING_1967728629");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_13);
      NestedInstrumentAttribute_NoNestedInstrAttrib_13.insert(NestedInstrAttribValue_13.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_13);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_14;
      FIX::NestedInstrAttribType NestedInstrAttribType_14(215009669);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_14);
      NestedInstrumentAttribute_NoNestedInstrAttrib_14.insert(NestedInstrAttribType_14.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_14("STRING_2008260221");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_14);
      NestedInstrumentAttribute_NoNestedInstrAttrib_14.insert(NestedInstrAttribValue_14.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_14);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_13;
      FIX::TradingSessionID TradingSessionID_81("STRING_4");
      noTradingSessionRules_0_1_0.set(TradingSessionID_81);
      TradingSessionRulesGrp_NoTradingSessionRules_13.insert(TradingSessionID_81.getString());
      FIX::TradingSessionSubID TradingSessionSubID_81("STRING_3");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_81);
      TradingSessionRulesGrp_NoTradingSessionRules_13.insert(TradingSessionSubID_81.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_13);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_28;
        FIX::ExecInstValue ExecInstValue_28('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_28);
        ExecInstRules_NoExecInstRules_28.insert(ExecInstValue_28.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_28);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_29;
        FIX::ExecInstValue ExecInstValue_29('5');
        noExecInstRules_0_0_2_1.set(ExecInstValue_29);
        ExecInstRules_NoExecInstRules_29.insert(ExecInstValue_29.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_29);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_26;
        FIX::MDBookType MDBookType_28(2);
        noMDFeedTypes_0_0_2_0.set(MDBookType_28);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MDBookType_28.getString());
        FIX::MDFeedType MDFeedType_28("STRING_1445180727");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_28);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MDFeedType_28.getString());
        FIX::MarketDepth MarketDepth_30(801377304);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_30);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MarketDepth_30.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_26);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_27;
        FIX::MatchAlgorithm MatchAlgorithm_27("STRING_2061287444");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_27);
        MatchRules_NoMatchRules_27.insert(MatchAlgorithm_27.getString());
        FIX::MatchType MatchType_33("STRING_4");
        noMatchRules_0_0_2_0.set(MatchType_33);
        MatchRules_NoMatchRules_27.insert(MatchType_33.getString());
        all_values.push_back(MatchRules_NoMatchRules_27);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_28;
        FIX::MatchAlgorithm MatchAlgorithm_28("STRING_671609571");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_28);
        MatchRules_NoMatchRules_28.insert(MatchAlgorithm_28.getString());
        FIX::MatchType MatchType_34("STRING_M5");
        noMatchRules_0_0_2_1.set(MatchType_34);
        MatchRules_NoMatchRules_28.insert(MatchType_34.getString());
        all_values.push_back(MatchRules_NoMatchRules_28);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_29;
        FIX::MatchAlgorithm MatchAlgorithm_29("STRING_1035833760");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_29);
        MatchRules_NoMatchRules_29.insert(MatchAlgorithm_29.getString());
        FIX::MatchType MatchType_35("STRING_S2");
        noMatchRules_0_0_2_2.set(MatchType_35);
        MatchRules_NoMatchRules_29.insert(MatchType_35.getString());
        all_values.push_back(MatchRules_NoMatchRules_29);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_34;
        FIX::OrdType OrdType_60('K');
        noOrdTypeRules_0_0_2_0.set(OrdType_60);
        OrdTypeRules_NoOrdTypeRules_34.insert(OrdType_60.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_34);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_35;
        FIX::OrdType OrdType_61('M');
        noOrdTypeRules_0_0_2_1.set(OrdType_61);
        OrdTypeRules_NoOrdTypeRules_35.insert(OrdType_61.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_35);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_30;
        FIX::TimeInForce TimeInForce_43('1');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_43);
        TimeInForceRules_NoTimeInForceRules_30.insert(TimeInForce_43.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_30);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_31;
        FIX::TimeInForce TimeInForce_44('6');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_44);
        TimeInForceRules_NoTimeInForceRules_31.insert(TimeInForce_44.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_31);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_32;
        FIX::TimeInForce TimeInForce_45('1');
        noTimeInForceRules_0_0_2_2.set(TimeInForce_45);
        TimeInForceRules_NoTimeInForceRules_32.insert(TimeInForce_45.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_32);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_14;
      FIX::TradingSessionID TradingSessionID_82("STRING_1");
      noTradingSessionRules_0_1_1.set(TradingSessionID_82);
      TradingSessionRulesGrp_NoTradingSessionRules_14.insert(TradingSessionID_82.getString());
      FIX::TradingSessionSubID TradingSessionSubID_82("STRING_5");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_82);
      TradingSessionRulesGrp_NoTradingSessionRules_14.insert(TradingSessionSubID_82.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_14);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_30;
        FIX::ExecInstValue ExecInstValue_30('9');
        noExecInstRules_0_1_2_0.set(ExecInstValue_30);
        ExecInstRules_NoExecInstRules_30.insert(ExecInstValue_30.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_30);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_27;
        FIX::MDBookType MDBookType_29(3);
        noMDFeedTypes_0_1_2_0.set(MDBookType_29);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MDBookType_29.getString());
        FIX::MDFeedType MDFeedType_29("STRING_763040526");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_29);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MDFeedType_29.getString());
        FIX::MarketDepth MarketDepth_31(1352219068);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_31);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MarketDepth_31.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_27);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_28;
        FIX::MDBookType MDBookType_30(1);
        noMDFeedTypes_0_1_2_1.set(MDBookType_30);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MDBookType_30.getString());
        FIX::MDFeedType MDFeedType_30("STRING_1936609911");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_30);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MDFeedType_30.getString());
        FIX::MarketDepth MarketDepth_32(1275468495);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_32);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MarketDepth_32.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_28);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_30;
        FIX::MatchAlgorithm MatchAlgorithm_30("STRING_366755159");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_30);
        MatchRules_NoMatchRules_30.insert(MatchAlgorithm_30.getString());
        FIX::MatchType MatchType_36("STRING_M3");
        noMatchRules_0_1_2_0.set(MatchType_36);
        MatchRules_NoMatchRules_30.insert(MatchType_36.getString());
        all_values.push_back(MatchRules_NoMatchRules_30);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_31;
        FIX::MatchAlgorithm MatchAlgorithm_31("STRING_1208131293");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_31);
        MatchRules_NoMatchRules_31.insert(MatchAlgorithm_31.getString());
        FIX::MatchType MatchType_37("STRING_S3");
        noMatchRules_0_1_2_1.set(MatchType_37);
        MatchRules_NoMatchRules_31.insert(MatchType_37.getString());
        all_values.push_back(MatchRules_NoMatchRules_31);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_36;
        FIX::OrdType OrdType_62('5');
        noOrdTypeRules_0_1_2_0.set(OrdType_62);
        OrdTypeRules_NoOrdTypeRules_36.insert(OrdType_62.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_36);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_37;
        FIX::OrdType OrdType_63('3');
        noOrdTypeRules_0_1_2_1.set(OrdType_63);
        OrdTypeRules_NoOrdTypeRules_37.insert(OrdType_63.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_37);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_33;
        FIX::TimeInForce TimeInForce_46('3');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_46);
        TimeInForceRules_NoTimeInForceRules_33.insert(TimeInForce_46.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_33);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_15;
      FIX::TradingSessionID TradingSessionID_83("STRING_5");
      noTradingSessionRules_0_1_2.set(TradingSessionID_83);
      TradingSessionRulesGrp_NoTradingSessionRules_15.insert(TradingSessionID_83.getString());
      FIX::TradingSessionSubID TradingSessionSubID_83("STRING_7");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_83);
      TradingSessionRulesGrp_NoTradingSessionRules_15.insert(TradingSessionSubID_83.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_15);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_31;
        FIX::ExecInstValue ExecInstValue_31('8');
        noExecInstRules_0_2_2_0.set(ExecInstValue_31);
        ExecInstRules_NoExecInstRules_31.insert(ExecInstValue_31.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_31);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_29;
        FIX::MDBookType MDBookType_31(1);
        noMDFeedTypes_0_2_2_0.set(MDBookType_31);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MDBookType_31.getString());
        FIX::MDFeedType MDFeedType_31("STRING_574235385");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_31);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MDFeedType_31.getString());
        FIX::MarketDepth MarketDepth_33(2062871977);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_33);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MarketDepth_33.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_29);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_30;
        FIX::MDBookType MDBookType_32(2);
        noMDFeedTypes_0_2_2_1.set(MDBookType_32);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MDBookType_32.getString());
        FIX::MDFeedType MDFeedType_32("STRING_1292529836");
        noMDFeedTypes_0_2_2_1.set(MDFeedType_32);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MDFeedType_32.getString());
        FIX::MarketDepth MarketDepth_34(2102053069);
        noMDFeedTypes_0_2_2_1.set(MarketDepth_34);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MarketDepth_34.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_30);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_31;
        FIX::MDBookType MDBookType_33(2);
        noMDFeedTypes_0_2_2_2.set(MDBookType_33);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MDBookType_33.getString());
        FIX::MDFeedType MDFeedType_33("STRING_699852166");
        noMDFeedTypes_0_2_2_2.set(MDFeedType_33);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MDFeedType_33.getString());
        FIX::MarketDepth MarketDepth_35(856833374);
        noMDFeedTypes_0_2_2_2.set(MarketDepth_35);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MarketDepth_35.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_31);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_32;
        FIX::MatchAlgorithm MatchAlgorithm_32("STRING_322184164");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_32);
        MatchRules_NoMatchRules_32.insert(MatchAlgorithm_32.getString());
        FIX::MatchType MatchType_38("STRING_M3");
        noMatchRules_0_2_2_0.set(MatchType_38);
        MatchRules_NoMatchRules_32.insert(MatchType_38.getString());
        all_values.push_back(MatchRules_NoMatchRules_32);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_38;
        FIX::OrdType OrdType_64('L');
        noOrdTypeRules_0_2_2_0.set(OrdType_64);
        OrdTypeRules_NoOrdTypeRules_38.insert(OrdType_64.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_38);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_34;
        FIX::TimeInForce TimeInForce_47('6');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_47);
        TimeInForceRules_NoTimeInForceRules_34.insert(TimeInForce_47.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_34);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_30;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_30("GBP");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurveCurrency_30.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_30("STRING_LIBOR");
    noRelatedSym_0_0.set(BenchmarkCurveName_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurveName_30.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_30("STRING_537396026");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurvePoint_30.getString());
    FIX::BenchmarkPrice BenchmarkPrice_30;
    BenchmarkPrice_30.setString("14402075");
    noRelatedSym_0_0.set(BenchmarkPrice_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkPrice_30.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_30(1111416333);
    noRelatedSym_0_0.set(BenchmarkPriceType_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkPriceType_30.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_30("STRING_1029286878");
    noRelatedSym_0_0.set(BenchmarkSecurityID_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkSecurityID_30.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_30("STRING_1018463594");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkSecurityIDSource_30.getString());
    FIX::Spread Spread_30;
    Spread_30.setString("19963905");
    noRelatedSym_0_0.set(Spread_30);
    SpreadOrBenchmarkCurveData_30.insert(Spread_30.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_30);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_42;
      FIX::StipulationType StipulationType_42("STRING_MAXBAL");
      noStipulations_0_1_0.set(StipulationType_42);
      Stipulations_NoStipulations_42.insert(StipulationType_42.getString());
      FIX::StipulationValue StipulationValue_42("STRING_1769714912");
      noStipulations_0_1_0.set(StipulationValue_42);
      Stipulations_NoStipulations_42.insert(StipulationValue_42.getString());
      all_values.push_back(Stipulations_NoStipulations_42);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_43;
      FIX::StipulationType StipulationType_43("STRING_ISSUE");
      noStipulations_0_1_1.set(StipulationType_43);
      Stipulations_NoStipulations_43.insert(StipulationType_43.getString());
      FIX::StipulationValue StipulationValue_43("STRING_489452856");
      noStipulations_0_1_1.set(StipulationValue_43);
      Stipulations_NoStipulations_43.insert(StipulationValue_43.getString());
      all_values.push_back(Stipulations_NoStipulations_43);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_44;
      FIX::StipulationType StipulationType_44("STRING_INTERNALQTY");
      noStipulations_0_1_2.set(StipulationType_44);
      Stipulations_NoStipulations_44.insert(StipulationType_44.getString());
      FIX::StipulationValue StipulationValue_44("STRING_1657256971");
      noStipulations_0_1_2.set(StipulationValue_44);
      Stipulations_NoStipulations_44.insert(StipulationValue_44.getString());
      all_values.push_back(Stipulations_NoStipulations_44);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_12;
      FIX::EndStrikePxRange EndStrikePxRange_12;
      EndStrikePxRange_12.setString("263800");
      noStrikeRules_0_1_0.set(EndStrikePxRange_12);
      StrikeRules_NoStrikeRules_12.insert(EndStrikePxRange_12.getString());
      FIX::StartStrikePxRange StartStrikePxRange_12;
      StartStrikePxRange_12.setString("11302614");
      noStrikeRules_0_1_0.set(StartStrikePxRange_12);
      StrikeRules_NoStrikeRules_12.insert(StartStrikePxRange_12.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_12(208734430);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeExerciseStyle_12.getString());
      FIX::StrikeIncrement StrikeIncrement_12;
      StrikeIncrement_12.setString("21284331");
      noStrikeRules_0_1_0.set(StrikeIncrement_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeIncrement_12.getString());
      FIX::StrikeRuleID StrikeRuleID_12("STRING_530996877");
      noStrikeRules_0_1_0.set(StrikeRuleID_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeRuleID_12.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_12);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_27;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_27("MONTHYEAR_837782866");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_27);
        MaturityRules_NoMaturityRules_27.insert(EndMaturityMonthYear_27.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_27(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearFormat_27.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_27(1230770760);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearIncrement_27.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_27(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearIncrementUnits_27.getString());
        FIX::MaturityRuleID MaturityRuleID_27("STRING_180638650");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityRuleID_27.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_27("MONTHYEAR_1254530325");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_27);
        MaturityRules_NoMaturityRules_27.insert(StartMaturityMonthYear_27.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_27);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_28;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_28("MONTHYEAR_1719173281");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_28);
        MaturityRules_NoMaturityRules_28.insert(EndMaturityMonthYear_28.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_28(2);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearFormat_28.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_28(583795058);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearIncrement_28.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_28(3);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearIncrementUnits_28.getString());
        FIX::MaturityRuleID MaturityRuleID_28("STRING_852772892");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityRuleID_28.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_28("MONTHYEAR_1121191084");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_28);
        MaturityRules_NoMaturityRules_28.insert(StartMaturityMonthYear_28.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_28);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_29;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_29("MONTHYEAR_640168867");
        noMaturityRules_0_0_2_2.set(EndMaturityMonthYear_29);
        MaturityRules_NoMaturityRules_29.insert(EndMaturityMonthYear_29.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_29(2);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearFormat_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearFormat_29.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_29(2994315);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrement_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearIncrement_29.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_29(1);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrementUnits_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearIncrementUnits_29.getString());
        FIX::MaturityRuleID MaturityRuleID_29("STRING_1813096144");
        noMaturityRules_0_0_2_2.set(MaturityRuleID_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityRuleID_29.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_29("MONTHYEAR_48297968");
        noMaturityRules_0_0_2_2.set(StartMaturityMonthYear_29);
        MaturityRules_NoMaturityRules_29.insert(StartMaturityMonthYear_29.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_29);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_118;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_118("DATA_1435327409");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_118);
      UnderlyingInstrument_118.insert(EncodedUnderlyingIssuer_118.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_118(1913352698);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_118);
      UnderlyingInstrument_118.insert(EncodedUnderlyingIssuerLen_118.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_118("DATA_1789151401");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_118);
      UnderlyingInstrument_118.insert(EncodedUnderlyingSecurityDesc_118.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_118(1546319150);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_118);
      UnderlyingInstrument_118.insert(EncodedUnderlyingSecurityDescLen_118.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_118;
      UnderlyingAdjustedQuantity_118.setString("14231260");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_118);
      UnderlyingInstrument_118.insert(UnderlyingAdjustedQuantity_118.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_118;
      UnderlyingAllocationPercent_118.setString("59.950000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_118);
      UnderlyingInstrument_118.insert(UnderlyingAllocationPercent_118.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_118;
      UnderlyingAttachmentPoint_118.setString("92.200000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_118);
      UnderlyingInstrument_118.insert(UnderlyingAttachmentPoint_118.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_118("STRING_405903825");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_118);
      UnderlyingInstrument_118.insert(UnderlyingCFICode_118.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_118("STRING_914090425");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_118);
      UnderlyingInstrument_118.insert(UnderlyingCPProgram_118.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_118("STRING_1553648712");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_118);
      UnderlyingInstrument_118.insert(UnderlyingCPRegType_118.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_118;
      UnderlyingCapValue_118.setString("9369007");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_118);
      UnderlyingInstrument_118.insert(UnderlyingCapValue_118.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_118;
      UnderlyingCashAmount_118.setString("18226770");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_118);
      UnderlyingInstrument_118.insert(UnderlyingCashAmount_118.getString());
      FIX::UnderlyingCashType UnderlyingCashType_118("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_118);
      UnderlyingInstrument_118.insert(UnderlyingCashType_118.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_118;
      UnderlyingContractMultiplier_118.setString("6166089");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_118);
      UnderlyingInstrument_118.insert(UnderlyingContractMultiplier_118.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_118(905964133);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_118);
      UnderlyingInstrument_118.insert(UnderlyingContractMultiplierUnit_118.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_118("COUNTRY_554121048");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_118);
      UnderlyingInstrument_118.insert(UnderlyingCountryOfIssue_118.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_118("LOCALMKTDATE_797247582");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_118);
      UnderlyingInstrument_118.insert(UnderlyingCouponPaymentDate_118.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_118;
      UnderlyingCouponRate_118.setString("8.100000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_118);
      UnderlyingInstrument_118.insert(UnderlyingCouponRate_118.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_118("STRING_125810681");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_118);
      UnderlyingInstrument_118.insert(UnderlyingCreditRating_118.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_118("JPY");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_118);
      UnderlyingInstrument_118.insert(UnderlyingCurrency_118.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_118;
      UnderlyingCurrentValue_118.setString("14732556");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_118);
      UnderlyingInstrument_118.insert(UnderlyingCurrentValue_118.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_118;
      UnderlyingDetachmentPoint_118.setString("43.930000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_118);
      UnderlyingInstrument_118.insert(UnderlyingDetachmentPoint_118.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_118;
      UnderlyingDirtyPrice_118.setString("17179969");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_118);
      UnderlyingInstrument_118.insert(UnderlyingDirtyPrice_118.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_118;
      UnderlyingEndPrice_118.setString("21134245");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_118);
      UnderlyingInstrument_118.insert(UnderlyingEndPrice_118.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_118;
      UnderlyingEndValue_118.setString("12762799");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_118);
      UnderlyingInstrument_118.insert(UnderlyingEndValue_118.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_118(1720991268);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_118);
      UnderlyingInstrument_118.insert(UnderlyingExerciseStyle_118.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_118;
      UnderlyingFXRate_118.setString("16245733");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_118);
      UnderlyingInstrument_118.insert(UnderlyingFXRate_118.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_118('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_118);
      UnderlyingInstrument_118.insert(UnderlyingFXRateCalc_118.getString());
      FIX::UnderlyingFactor UnderlyingFactor_118;
      UnderlyingFactor_118.setString("17692892");
      noUnderlyings_0_1_0.set(UnderlyingFactor_118);
      UnderlyingInstrument_118.insert(UnderlyingFactor_118.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_118(776788213);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_118);
      UnderlyingInstrument_118.insert(UnderlyingFlowScheduleType_118.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_118("STRING_229736228");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_118);
      UnderlyingInstrument_118.insert(UnderlyingInstrRegistry_118.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_118("LOCALMKTDATE_1535158287");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_118);
      UnderlyingInstrument_118.insert(UnderlyingIssueDate_118.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_118("STRING_418455967");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_118);
      UnderlyingInstrument_118.insert(UnderlyingIssuer_118.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_118("STRING_1776055378");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_118);
      UnderlyingInstrument_118.insert(UnderlyingLocaleOfIssue_118.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_118("LOCALMKTDATE_810800661");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_118);
      UnderlyingInstrument_118.insert(UnderlyingMaturityDate_118.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_118("MONTHYEAR_1123811962");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_118);
      UnderlyingInstrument_118.insert(UnderlyingMaturityMonthYear_118.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_118("TZTIMEONLY_1201270951");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_118);
      UnderlyingInstrument_118.insert(UnderlyingMaturityTime_118.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_118;
      UnderlyingNotionalPercentageOutstanding_118.setString("44.860000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_118);
      UnderlyingInstrument_118.insert(UnderlyingNotionalPercentageOutstanding_118.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_118('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_118);
      UnderlyingInstrument_118.insert(UnderlyingOptAttribute_118.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_118;
      UnderlyingOriginalNotionalPercentageOutstanding_118.setString("60.150000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_118);
      UnderlyingInstrument_118.insert(UnderlyingOriginalNotionalPercentageOutstanding_118.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_118("STRING_6121541");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_118);
      UnderlyingInstrument_118.insert(UnderlyingPriceUnitOfMeasure_118.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_118;
      UnderlyingPriceUnitOfMeasureQty_118.setString("17130957");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_118);
      UnderlyingInstrument_118.insert(UnderlyingPriceUnitOfMeasureQty_118.getString());
      FIX::UnderlyingProduct UnderlyingProduct_118(851383946);
      noUnderlyings_0_1_0.set(UnderlyingProduct_118);
      UnderlyingInstrument_118.insert(UnderlyingProduct_118.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_118(622730473);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_118);
      UnderlyingInstrument_118.insert(UnderlyingPutOrCall_118.getString());
      FIX::UnderlyingPx UnderlyingPx_118;
      UnderlyingPx_118.setString("4715762");
      noUnderlyings_0_1_0.set(UnderlyingPx_118);
      UnderlyingInstrument_118.insert(UnderlyingPx_118.getString());
      FIX::UnderlyingQty UnderlyingQty_118;
      UnderlyingQty_118.setString("14055049");
      noUnderlyings_0_1_0.set(UnderlyingQty_118);
      UnderlyingInstrument_118.insert(UnderlyingQty_118.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_118("LOCALMKTDATE_1419978055");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_118);
      UnderlyingInstrument_118.insert(UnderlyingRedemptionDate_118.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_118("STRING_484587056");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_118);
      UnderlyingInstrument_118.insert(UnderlyingRepoCollateralSecurityType_118.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_118;
      UnderlyingRepurchaseRate_118.setString("56.760000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_118);
      UnderlyingInstrument_118.insert(UnderlyingRepurchaseRate_118.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_118(2026779557);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_118);
      UnderlyingInstrument_118.insert(UnderlyingRepurchaseTerm_118.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_118("STRING_1081392924");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_118);
      UnderlyingInstrument_118.insert(UnderlyingRestructuringType_118.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_118("STRING_857087664");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_118);
      UnderlyingInstrument_118.insert(UnderlyingSecurityDesc_118.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_118("EXCHANGE_1338870302");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_118);
      UnderlyingInstrument_118.insert(UnderlyingSecurityExchange_118.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_118("STRING_651906229");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_118);
      UnderlyingInstrument_118.insert(UnderlyingSecurityID_118.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_118("STRING_823028520");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_118);
      UnderlyingInstrument_118.insert(UnderlyingSecurityIDSource_118.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_118("STRING_467666625");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_118);
      UnderlyingInstrument_118.insert(UnderlyingSecuritySubType_118.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_118("STRING_225413849");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_118);
      UnderlyingInstrument_118.insert(UnderlyingSecurityType_118.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_118("STRING_300118188");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_118);
      UnderlyingInstrument_118.insert(UnderlyingSeniority_118.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_118("STRING_1409559093");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_118);
      UnderlyingInstrument_118.insert(UnderlyingSettlMethod_118.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_118(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_118);
      UnderlyingInstrument_118.insert(UnderlyingSettlementType_118.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_118;
      UnderlyingStartValue_118.setString("10769064");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_118);
      UnderlyingInstrument_118.insert(UnderlyingStartValue_118.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_118("STRING_1639295321");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_118);
      UnderlyingInstrument_118.insert(UnderlyingStateOrProvinceOfIssue_118.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_118("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_118);
      UnderlyingInstrument_118.insert(UnderlyingStrikeCurrency_118.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_118;
      UnderlyingStrikePrice_118.setString("12678670");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_118);
      UnderlyingInstrument_118.insert(UnderlyingStrikePrice_118.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_118("STRING_45694738");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_118);
      UnderlyingInstrument_118.insert(UnderlyingSymbol_118.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_118("STRING_471690683");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_118);
      UnderlyingInstrument_118.insert(UnderlyingSymbolSfx_118.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_118("STRING_321654355");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_118);
      UnderlyingInstrument_118.insert(UnderlyingTimeUnit_118.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_118("STRING_1262399224");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_118);
      UnderlyingInstrument_118.insert(UnderlyingUnitOfMeasure_118.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_118;
      UnderlyingUnitOfMeasureQty_118.setString("3621094");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_118);
      UnderlyingInstrument_118.insert(UnderlyingUnitOfMeasureQty_118.getString());
      all_values.push_back(UnderlyingInstrument_118);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_249;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_249("STRING_1268520765");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_249);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_249.insert(UnderlyingSecurityAltID_249.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_249("STRING_2075205182");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_249);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_249.insert(UnderlyingSecurityAltIDSource_249.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_249);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_235;
        FIX::UnderlyingStipType UnderlyingStipType_235("STRING_1891251238");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_235);
        UnderlyingStipulations_NoUnderlyingStips_235.insert(UnderlyingStipType_235.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_235("STRING_399297779");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_235);
        UnderlyingStipulations_NoUnderlyingStips_235.insert(UnderlyingStipValue_235.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_235);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_236;
        FIX::UnderlyingStipType UnderlyingStipType_236("STRING_1038495663");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_236);
        UnderlyingStipulations_NoUnderlyingStips_236.insert(UnderlyingStipType_236.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_236("STRING_1163745646");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_236);
        UnderlyingStipulations_NoUnderlyingStips_236.insert(UnderlyingStipValue_236.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_236);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_237;
        FIX::UnderlyingStipType UnderlyingStipType_237("STRING_883884835");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_237);
        UnderlyingStipulations_NoUnderlyingStips_237.insert(UnderlyingStipType_237.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_237("STRING_422327691");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_237);
        UnderlyingStipulations_NoUnderlyingStips_237.insert(UnderlyingStipValue_237.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_237);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_234;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_234("STRING_1965277760");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_234);
        UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyID_234.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_234('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_234);
        UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyIDSource_234.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_234(234428209);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_234);
        UndlyInstrumentParties_NoUndlyInstrumentParties_234.insert(UnderlyingInstrumentPartyRole_234.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_234);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_467("STRING_2102443875");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_467);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467.insert(UnderlyingInstrumentPartySubID_467.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_467(702094835);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_467);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467.insert(UnderlyingInstrumentPartySubIDType_467.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_468("STRING_695114191");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_468);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468.insert(UnderlyingInstrumentPartySubID_468.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_468(255078416);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_468);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468.insert(UnderlyingInstrumentPartySubIDType_468.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_235;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_235("STRING_2111653928");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_235);
        UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyID_235.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_235('5');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_235);
        UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyIDSource_235.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_235(1331984818);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_235);
        UndlyInstrumentParties_NoUndlyInstrumentParties_235.insert(UnderlyingInstrumentPartyRole_235.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_235);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_469("STRING_1924711354");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_469);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469.insert(UnderlyingInstrumentPartySubID_469.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_469(679863539);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_469);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469.insert(UnderlyingInstrumentPartySubIDType_469.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_470("STRING_723849005");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_470);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470.insert(UnderlyingInstrumentPartySubID_470.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_470(1970406092);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_470);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470.insert(UnderlyingInstrumentPartySubIDType_470.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_471("STRING_1151554222");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_471);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471.insert(UnderlyingInstrumentPartySubID_471.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_471(1045503360);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_471);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471.insert(UnderlyingInstrumentPartySubIDType_471.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_119;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_119("DATA_1085321668");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_119);
      UnderlyingInstrument_119.insert(EncodedUnderlyingIssuer_119.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_119(1513663644);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_119);
      UnderlyingInstrument_119.insert(EncodedUnderlyingIssuerLen_119.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_119("DATA_1974593731");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_119);
      UnderlyingInstrument_119.insert(EncodedUnderlyingSecurityDesc_119.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_119(206358786);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_119);
      UnderlyingInstrument_119.insert(EncodedUnderlyingSecurityDescLen_119.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_119;
      UnderlyingAdjustedQuantity_119.setString("14413851");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_119);
      UnderlyingInstrument_119.insert(UnderlyingAdjustedQuantity_119.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_119;
      UnderlyingAllocationPercent_119.setString("43.990000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_119);
      UnderlyingInstrument_119.insert(UnderlyingAllocationPercent_119.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_119;
      UnderlyingAttachmentPoint_119.setString("0.240000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_119);
      UnderlyingInstrument_119.insert(UnderlyingAttachmentPoint_119.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_119("STRING_1840682957");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_119);
      UnderlyingInstrument_119.insert(UnderlyingCFICode_119.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_119("STRING_498596414");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_119);
      UnderlyingInstrument_119.insert(UnderlyingCPProgram_119.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_119("STRING_1113872022");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_119);
      UnderlyingInstrument_119.insert(UnderlyingCPRegType_119.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_119;
      UnderlyingCapValue_119.setString("5770841");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_119);
      UnderlyingInstrument_119.insert(UnderlyingCapValue_119.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_119;
      UnderlyingCashAmount_119.setString("9209241");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_119);
      UnderlyingInstrument_119.insert(UnderlyingCashAmount_119.getString());
      FIX::UnderlyingCashType UnderlyingCashType_119("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_119);
      UnderlyingInstrument_119.insert(UnderlyingCashType_119.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_119;
      UnderlyingContractMultiplier_119.setString("3948782");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_119);
      UnderlyingInstrument_119.insert(UnderlyingContractMultiplier_119.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_119(52855813);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_119);
      UnderlyingInstrument_119.insert(UnderlyingContractMultiplierUnit_119.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_119("COUNTRY_243858139");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_119);
      UnderlyingInstrument_119.insert(UnderlyingCountryOfIssue_119.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_119("LOCALMKTDATE_864578598");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_119);
      UnderlyingInstrument_119.insert(UnderlyingCouponPaymentDate_119.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_119;
      UnderlyingCouponRate_119.setString("60.400000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_119);
      UnderlyingInstrument_119.insert(UnderlyingCouponRate_119.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_119("STRING_945952974");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_119);
      UnderlyingInstrument_119.insert(UnderlyingCreditRating_119.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_119("JPY");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_119);
      UnderlyingInstrument_119.insert(UnderlyingCurrency_119.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_119;
      UnderlyingCurrentValue_119.setString("9101232");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_119);
      UnderlyingInstrument_119.insert(UnderlyingCurrentValue_119.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_119;
      UnderlyingDetachmentPoint_119.setString("64.180000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_119);
      UnderlyingInstrument_119.insert(UnderlyingDetachmentPoint_119.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_119;
      UnderlyingDirtyPrice_119.setString("15948792");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_119);
      UnderlyingInstrument_119.insert(UnderlyingDirtyPrice_119.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_119;
      UnderlyingEndPrice_119.setString("3661052");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_119);
      UnderlyingInstrument_119.insert(UnderlyingEndPrice_119.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_119;
      UnderlyingEndValue_119.setString("18792541");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_119);
      UnderlyingInstrument_119.insert(UnderlyingEndValue_119.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_119(127259165);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_119);
      UnderlyingInstrument_119.insert(UnderlyingExerciseStyle_119.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_119;
      UnderlyingFXRate_119.setString("10899542");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_119);
      UnderlyingInstrument_119.insert(UnderlyingFXRate_119.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_119('D');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_119);
      UnderlyingInstrument_119.insert(UnderlyingFXRateCalc_119.getString());
      FIX::UnderlyingFactor UnderlyingFactor_119;
      UnderlyingFactor_119.setString("12788133");
      noUnderlyings_0_1_1.set(UnderlyingFactor_119);
      UnderlyingInstrument_119.insert(UnderlyingFactor_119.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_119(2135457573);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_119);
      UnderlyingInstrument_119.insert(UnderlyingFlowScheduleType_119.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_119("STRING_640014589");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_119);
      UnderlyingInstrument_119.insert(UnderlyingInstrRegistry_119.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_119("LOCALMKTDATE_644993383");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_119);
      UnderlyingInstrument_119.insert(UnderlyingIssueDate_119.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_119("STRING_1962567656");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_119);
      UnderlyingInstrument_119.insert(UnderlyingIssuer_119.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_119("STRING_846373375");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_119);
      UnderlyingInstrument_119.insert(UnderlyingLocaleOfIssue_119.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_119("LOCALMKTDATE_2086378561");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_119);
      UnderlyingInstrument_119.insert(UnderlyingMaturityDate_119.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_119("MONTHYEAR_1422668408");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_119);
      UnderlyingInstrument_119.insert(UnderlyingMaturityMonthYear_119.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_119("TZTIMEONLY_796499751");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_119);
      UnderlyingInstrument_119.insert(UnderlyingMaturityTime_119.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_119;
      UnderlyingNotionalPercentageOutstanding_119.setString("78.710000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_119);
      UnderlyingInstrument_119.insert(UnderlyingNotionalPercentageOutstanding_119.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_119('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_119);
      UnderlyingInstrument_119.insert(UnderlyingOptAttribute_119.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_119;
      UnderlyingOriginalNotionalPercentageOutstanding_119.setString("17.740000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_119);
      UnderlyingInstrument_119.insert(UnderlyingOriginalNotionalPercentageOutstanding_119.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_119("STRING_209178368");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_119);
      UnderlyingInstrument_119.insert(UnderlyingPriceUnitOfMeasure_119.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_119;
      UnderlyingPriceUnitOfMeasureQty_119.setString("6947052");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_119);
      UnderlyingInstrument_119.insert(UnderlyingPriceUnitOfMeasureQty_119.getString());
      FIX::UnderlyingProduct UnderlyingProduct_119(1919801703);
      noUnderlyings_0_1_1.set(UnderlyingProduct_119);
      UnderlyingInstrument_119.insert(UnderlyingProduct_119.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_119(604056625);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_119);
      UnderlyingInstrument_119.insert(UnderlyingPutOrCall_119.getString());
      FIX::UnderlyingPx UnderlyingPx_119;
      UnderlyingPx_119.setString("7475610");
      noUnderlyings_0_1_1.set(UnderlyingPx_119);
      UnderlyingInstrument_119.insert(UnderlyingPx_119.getString());
      FIX::UnderlyingQty UnderlyingQty_119;
      UnderlyingQty_119.setString("161761");
      noUnderlyings_0_1_1.set(UnderlyingQty_119);
      UnderlyingInstrument_119.insert(UnderlyingQty_119.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_119("LOCALMKTDATE_1468635223");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_119);
      UnderlyingInstrument_119.insert(UnderlyingRedemptionDate_119.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_119("STRING_755377133");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_119);
      UnderlyingInstrument_119.insert(UnderlyingRepoCollateralSecurityType_119.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_119;
      UnderlyingRepurchaseRate_119.setString("91.680000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_119);
      UnderlyingInstrument_119.insert(UnderlyingRepurchaseRate_119.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_119(880844365);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_119);
      UnderlyingInstrument_119.insert(UnderlyingRepurchaseTerm_119.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_119("STRING_1018271590");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_119);
      UnderlyingInstrument_119.insert(UnderlyingRestructuringType_119.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_119("STRING_1872252422");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_119);
      UnderlyingInstrument_119.insert(UnderlyingSecurityDesc_119.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_119("EXCHANGE_835387135");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_119);
      UnderlyingInstrument_119.insert(UnderlyingSecurityExchange_119.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_119("STRING_465667216");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_119);
      UnderlyingInstrument_119.insert(UnderlyingSecurityID_119.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_119("STRING_90873982");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_119);
      UnderlyingInstrument_119.insert(UnderlyingSecurityIDSource_119.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_119("STRING_567157612");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_119);
      UnderlyingInstrument_119.insert(UnderlyingSecuritySubType_119.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_119("STRING_592926382");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_119);
      UnderlyingInstrument_119.insert(UnderlyingSecurityType_119.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_119("STRING_1180828195");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_119);
      UnderlyingInstrument_119.insert(UnderlyingSeniority_119.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_119("STRING_121850532");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_119);
      UnderlyingInstrument_119.insert(UnderlyingSettlMethod_119.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_119(4);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_119);
      UnderlyingInstrument_119.insert(UnderlyingSettlementType_119.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_119;
      UnderlyingStartValue_119.setString("11688021");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_119);
      UnderlyingInstrument_119.insert(UnderlyingStartValue_119.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_119("STRING_761865121");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_119);
      UnderlyingInstrument_119.insert(UnderlyingStateOrProvinceOfIssue_119.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_119("CHF");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_119);
      UnderlyingInstrument_119.insert(UnderlyingStrikeCurrency_119.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_119;
      UnderlyingStrikePrice_119.setString("16082384");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_119);
      UnderlyingInstrument_119.insert(UnderlyingStrikePrice_119.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_119("STRING_308144418");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_119);
      UnderlyingInstrument_119.insert(UnderlyingSymbol_119.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_119("STRING_259070889");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_119);
      UnderlyingInstrument_119.insert(UnderlyingSymbolSfx_119.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_119("STRING_257254600");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_119);
      UnderlyingInstrument_119.insert(UnderlyingTimeUnit_119.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_119("STRING_2087722289");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_119);
      UnderlyingInstrument_119.insert(UnderlyingUnitOfMeasure_119.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_119;
      UnderlyingUnitOfMeasureQty_119.setString("328520");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_119);
      UnderlyingInstrument_119.insert(UnderlyingUnitOfMeasureQty_119.getString());
      all_values.push_back(UnderlyingInstrument_119);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_250;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_250("STRING_149417009");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_250);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_250.insert(UnderlyingSecurityAltID_250.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_250("STRING_727557343");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_250);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_250.insert(UnderlyingSecurityAltIDSource_250.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_250);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_238;
        FIX::UnderlyingStipType UnderlyingStipType_238("STRING_753473634");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_238);
        UnderlyingStipulations_NoUnderlyingStips_238.insert(UnderlyingStipType_238.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_238("STRING_1475118436");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_238);
        UnderlyingStipulations_NoUnderlyingStips_238.insert(UnderlyingStipValue_238.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_238);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_236;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_236("STRING_74625210");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_236);
        UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyID_236.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_236('8');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_236);
        UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyIDSource_236.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_236(770766144);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_236);
        UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyRole_236.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_236);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_472("STRING_1101283512");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_472);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472.insert(UnderlyingInstrumentPartySubID_472.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_472(495534919);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_472);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472.insert(UnderlyingInstrumentPartySubIDType_472.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_473("STRING_1790856710");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_473);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473.insert(UnderlyingInstrumentPartySubID_473.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_473(1566950728);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_473);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473.insert(UnderlyingInstrumentPartySubIDType_473.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_25;
    FIX::Yield Yield_25;
    Yield_25.setString("89.010000");
    noRelatedSym_0_0.set(Yield_25);
    YieldData_25.insert(Yield_25.getString());
    FIX::YieldCalcDate YieldCalcDate_25("LOCALMKTDATE_210530674");
    noRelatedSym_0_0.set(YieldCalcDate_25);
    YieldData_25.insert(YieldCalcDate_25.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_25("LOCALMKTDATE_12393462");
    noRelatedSym_0_0.set(YieldRedemptionDate_25);
    YieldData_25.insert(YieldRedemptionDate_25.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_25;
    YieldRedemptionPrice_25.setString("17672370");
    noRelatedSym_0_0.set(YieldRedemptionPrice_25);
    YieldData_25.insert(YieldRedemptionPrice_25.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_25(332381207);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_25);
    YieldData_25.insert(YieldRedemptionPriceType_25.getString());
    FIX::YieldType YieldType_25("STRING_GOVTEQUIV");
    noRelatedSym_0_0.set(YieldType_25);
    YieldData_25.insert(YieldType_25.getString());
    all_values.push_back(YieldData_25);

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
