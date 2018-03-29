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
  multiset<string> all_compo_names;
  multiset<string> SecurityList_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_22("LOCALMKTDATE_214204772");
  msg.set(ClearingBusinessDate_22);
  SecurityList_0.insert(ClearingBusinessDate_22.getString());
  FIX::EncodedSecurityListDesc EncodedSecurityListDesc_0("DATA_1399600800");
  msg.set(EncodedSecurityListDesc_0);
  FIX::EncodedSecurityListDescLen EncodedSecurityListDescLen_0(768025726);
  msg.set(EncodedSecurityListDescLen_0);
  FIX::LastFragment LastFragment_14(true);
  msg.set(LastFragment_14);
  SecurityList_0.insert(LastFragment_14.getString());
  FIX::MarketID MarketID_20("EXCHANGE_988267995");
  msg.set(MarketID_20);
  SecurityList_0.insert(MarketID_20.getString());
  FIX::MarketSegmentID MarketSegmentID_20("STRING_1849104021");
  msg.set(MarketSegmentID_20);
  SecurityList_0.insert(MarketSegmentID_20.getString());
  FIX::SecurityListDesc SecurityListDesc_0("STRING_1871783700");
  msg.set(SecurityListDesc_0);
  SecurityList_0.insert(SecurityListDesc_0.getString());
  FIX::SecurityListID SecurityListID_0("STRING_570280456");
  msg.set(SecurityListID_0);
  SecurityList_0.insert(SecurityListID_0.getString());
  FIX::SecurityListRefID SecurityListRefID_0("STRING_664295112");
  msg.set(SecurityListRefID_0);
  SecurityList_0.insert(SecurityListRefID_0.getString());
  FIX::SecurityListType SecurityListType_0(4);
  msg.set(SecurityListType_0);
  SecurityList_0.insert(SecurityListType_0.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_0(3);
  msg.set(SecurityListTypeSource_0);
  SecurityList_0.insert(SecurityListTypeSource_0.getString());
  FIX::SecurityReportID SecurityReportID_3(2118081777);
  msg.set(SecurityReportID_3);
  SecurityList_0.insert(SecurityReportID_3.getString());
  FIX::SecurityReqID SecurityReqID_6("STRING_761215731");
  msg.set(SecurityReqID_6);
  SecurityList_0.insert(SecurityReqID_6.getString());
  FIX::SecurityRequestResult SecurityRequestResult_2(0);
  msg.set(SecurityRequestResult_2);
  SecurityList_0.insert(SecurityRequestResult_2.getString());
  FIX::SecurityResponseID SecurityResponseID_4("STRING_469397192");
  msg.set(SecurityResponseID_4);
  SecurityList_0.insert(SecurityResponseID_4.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_3(239407472);
  msg.set(TotNoRelatedSym_3);
  SecurityList_0.insert(TotNoRelatedSym_3.getString());
  FIX::TransactTime TransactTime_65(FIX::UTCTIMESTAMP(16, 46, 26, 10, 7, 2008));
  msg.set(TransactTime_65);
  SecurityList_0.insert(TransactTime_65.getString());
  all_values.push_back(SecurityList_0);

  all_compo_names.insert("SecurityList");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_14;
  FIX::ApplID ApplID_14("STRING_474367603");
  msg.set(ApplID_14);
  ApplicationSequenceControl_14.insert(ApplID_14.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_14(103450710);
  msg.set(ApplLastSeqNum_14);
  ApplicationSequenceControl_14.insert(ApplLastSeqNum_14.getString());
  FIX::ApplResendFlag ApplResendFlag_14(false);
  msg.set(ApplResendFlag_14);
  ApplicationSequenceControl_14.insert(ApplResendFlag_14.getString());
  FIX::ApplSeqNum ApplSeqNum_14(965767319);
  msg.set(ApplSeqNum_14);
  ApplicationSequenceControl_14.insert(ApplSeqNum_14.getString());
  all_values.push_back(ApplicationSequenceControl_14);
  all_compo_names.insert("ApplicationSequenceControl");

  // SecListGrp
  // Group SecListGrp.NoRelatedSym
  {
    FIX50SP2::SecurityList::NoRelatedSym noRelatedSym_0_0;
    // SecListGrp.NoRelatedSym
    multiset<string> SecListGrp_NoRelatedSym_0;
    FIX::Currency Currency_66("CHF");
    noRelatedSym_0_0.set(Currency_66);
    SecListGrp_NoRelatedSym_0.insert(Currency_66.getString());
    FIX::EncodedText EncodedText_85("DATA_1571250480");
    noRelatedSym_0_0.set(EncodedText_85);
    SecListGrp_NoRelatedSym_0.insert(EncodedText_85.getString());
    FIX::EncodedTextLen EncodedTextLen_85(601945249);
    noRelatedSym_0_0.set(EncodedTextLen_85);
    SecListGrp_NoRelatedSym_0.insert(EncodedTextLen_85.getString());
    FIX::RelSymTransactTime RelSymTransactTime_5(FIX::UTCTIMESTAMP(14, 3, 20, 15, 8, 2001));
    noRelatedSym_0_0.set(RelSymTransactTime_5);
    SecListGrp_NoRelatedSym_0.insert(RelSymTransactTime_5.getString());
    FIX::Text Text_85("STRING_557708044");
    noRelatedSym_0_0.set(Text_85);
    SecListGrp_NoRelatedSym_0.insert(Text_85.getString());
    all_values.push_back(SecListGrp_NoRelatedSym_0);
    all_compo_names.insert("SecListGrp.NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_25;
    FIX::AgreementCurrency AgreementCurrency_25("EUR");
    noRelatedSym_0_0.set(AgreementCurrency_25);
    FinancingDetails_25.insert(AgreementCurrency_25.getString());
    FIX::AgreementDate AgreementDate_25("LOCALMKTDATE_528306173");
    noRelatedSym_0_0.set(AgreementDate_25);
    FinancingDetails_25.insert(AgreementDate_25.getString());
    FIX::AgreementDesc AgreementDesc_25("STRING_284578738");
    noRelatedSym_0_0.set(AgreementDesc_25);
    FinancingDetails_25.insert(AgreementDesc_25.getString());
    FIX::AgreementID AgreementID_25("STRING_1041271429");
    noRelatedSym_0_0.set(AgreementID_25);
    FinancingDetails_25.insert(AgreementID_25.getString());
    FIX::DeliveryType DeliveryType_25(1);
    noRelatedSym_0_0.set(DeliveryType_25);
    FinancingDetails_25.insert(DeliveryType_25.getString());
    FIX::EndDate EndDate_25("LOCALMKTDATE_523986210");
    noRelatedSym_0_0.set(EndDate_25);
    FinancingDetails_25.insert(EndDate_25.getString());
    FIX::MarginRatio MarginRatio_25;
    MarginRatio_25.setString("86.250000");
    noRelatedSym_0_0.set(MarginRatio_25);
    FinancingDetails_25.insert(MarginRatio_25.getString());
    FIX::StartDate StartDate_25("LOCALMKTDATE_610936870");
    noRelatedSym_0_0.set(StartDate_25);
    FinancingDetails_25.insert(StartDate_25.getString());
    FIX::TerminationType TerminationType_25(2);
    noRelatedSym_0_0.set(TerminationType_25);
    FinancingDetails_25.insert(TerminationType_25.getString());
    all_values.push_back(FinancingDetails_25);
    all_compo_names.insert("FinancingDetails");

    // InstrmtLegSecListGrp
    // Group InstrmtLegSecListGrp.NoLegs
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_0;
      FIX::LegSettlType LegSettlType_18('4');
      noLegs_0_1_0.set(LegSettlType_18);
      InstrmtLegSecListGrp_NoLegs_0.insert(LegSettlType_18.getString());
      FIX::LegSwapType LegSwapType_18(5);
      noLegs_0_1_0.set(LegSwapType_18);
      InstrmtLegSecListGrp_NoLegs_0.insert(LegSwapType_18.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_0);
      all_compo_names.insert("InstrmtLegSecListGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_134;
      FIX::EncodedLegIssuer EncodedLegIssuer_134("DATA_476230061");
      noLegs_0_1_0.set(EncodedLegIssuer_134);
      InstrumentLeg_134.insert(EncodedLegIssuer_134.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_134(901579807);
      noLegs_0_1_0.set(EncodedLegIssuerLen_134);
      InstrumentLeg_134.insert(EncodedLegIssuerLen_134.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_134("DATA_1346715766");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_134);
      InstrumentLeg_134.insert(EncodedLegSecurityDesc_134.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_134(766993818);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_134);
      InstrumentLeg_134.insert(EncodedLegSecurityDescLen_134.getString());
      FIX::LegCFICode LegCFICode_134("STRING_1867347126");
      noLegs_0_1_0.set(LegCFICode_134);
      InstrumentLeg_134.insert(LegCFICode_134.getString());
      FIX::LegContractMultiplier LegContractMultiplier_134;
      LegContractMultiplier_134.setString("18745822");
      noLegs_0_1_0.set(LegContractMultiplier_134);
      InstrumentLeg_134.insert(LegContractMultiplier_134.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_134(1154734295);
      noLegs_0_1_0.set(LegContractMultiplierUnit_134);
      InstrumentLeg_134.insert(LegContractMultiplierUnit_134.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_134("MONTHYEAR_1723534399");
      noLegs_0_1_0.set(LegContractSettlMonth_134);
      InstrumentLeg_134.insert(LegContractSettlMonth_134.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_134("COUNTRY_1298349058");
      noLegs_0_1_0.set(LegCountryOfIssue_134);
      InstrumentLeg_134.insert(LegCountryOfIssue_134.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_134("LOCALMKTDATE_1756679544");
      noLegs_0_1_0.set(LegCouponPaymentDate_134);
      InstrumentLeg_134.insert(LegCouponPaymentDate_134.getString());
      FIX::LegCouponRate LegCouponRate_134;
      LegCouponRate_134.setString("88.240000");
      noLegs_0_1_0.set(LegCouponRate_134);
      InstrumentLeg_134.insert(LegCouponRate_134.getString());
      FIX::LegCreditRating LegCreditRating_134("STRING_1490141616");
      noLegs_0_1_0.set(LegCreditRating_134);
      InstrumentLeg_134.insert(LegCreditRating_134.getString());
      FIX::LegCurrency LegCurrency_134("CHF");
      noLegs_0_1_0.set(LegCurrency_134);
      InstrumentLeg_134.insert(LegCurrency_134.getString());
      FIX::LegDatedDate LegDatedDate_134("LOCALMKTDATE_1383554547");
      noLegs_0_1_0.set(LegDatedDate_134);
      InstrumentLeg_134.insert(LegDatedDate_134.getString());
      FIX::LegExerciseStyle LegExerciseStyle_134(244858747);
      noLegs_0_1_0.set(LegExerciseStyle_134);
      InstrumentLeg_134.insert(LegExerciseStyle_134.getString());
      FIX::LegFactor LegFactor_134;
      LegFactor_134.setString("15952641");
      noLegs_0_1_0.set(LegFactor_134);
      InstrumentLeg_134.insert(LegFactor_134.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_134(1941262591);
      noLegs_0_1_0.set(LegFlowScheduleType_134);
      InstrumentLeg_134.insert(LegFlowScheduleType_134.getString());
      FIX::LegInstrRegistry LegInstrRegistry_134("STRING_1915705402");
      noLegs_0_1_0.set(LegInstrRegistry_134);
      InstrumentLeg_134.insert(LegInstrRegistry_134.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_134("LOCALMKTDATE_2011189361");
      noLegs_0_1_0.set(LegInterestAccrualDate_134);
      InstrumentLeg_134.insert(LegInterestAccrualDate_134.getString());
      FIX::LegIssueDate LegIssueDate_134("LOCALMKTDATE_322085117");
      noLegs_0_1_0.set(LegIssueDate_134);
      InstrumentLeg_134.insert(LegIssueDate_134.getString());
      FIX::LegIssuer LegIssuer_134("STRING_52800492");
      noLegs_0_1_0.set(LegIssuer_134);
      InstrumentLeg_134.insert(LegIssuer_134.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_134("STRING_904977142");
      noLegs_0_1_0.set(LegLocaleOfIssue_134);
      InstrumentLeg_134.insert(LegLocaleOfIssue_134.getString());
      FIX::LegMaturityDate LegMaturityDate_134("LOCALMKTDATE_1319788482");
      noLegs_0_1_0.set(LegMaturityDate_134);
      InstrumentLeg_134.insert(LegMaturityDate_134.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_134("MONTHYEAR_576786703");
      noLegs_0_1_0.set(LegMaturityMonthYear_134);
      InstrumentLeg_134.insert(LegMaturityMonthYear_134.getString());
      FIX::LegMaturityTime LegMaturityTime_134("TZTIMEONLY_877802119");
      noLegs_0_1_0.set(LegMaturityTime_134);
      InstrumentLeg_134.insert(LegMaturityTime_134.getString());
      FIX::LegOptAttribute LegOptAttribute_134('1');
      noLegs_0_1_0.set(LegOptAttribute_134);
      InstrumentLeg_134.insert(LegOptAttribute_134.getString());
      FIX::LegOptionRatio LegOptionRatio_134;
      LegOptionRatio_134.setString("2852630");
      noLegs_0_1_0.set(LegOptionRatio_134);
      InstrumentLeg_134.insert(LegOptionRatio_134.getString());
      FIX::LegPool LegPool_134("STRING_70339294");
      noLegs_0_1_0.set(LegPool_134);
      InstrumentLeg_134.insert(LegPool_134.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_134("STRING_210453909");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_134);
      InstrumentLeg_134.insert(LegPriceUnitOfMeasure_134.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_134;
      LegPriceUnitOfMeasureQty_134.setString("15285281");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_134);
      InstrumentLeg_134.insert(LegPriceUnitOfMeasureQty_134.getString());
      FIX::LegProduct LegProduct_134(546569356);
      noLegs_0_1_0.set(LegProduct_134);
      InstrumentLeg_134.insert(LegProduct_134.getString());
      FIX::LegPutOrCall LegPutOrCall_134(1112033716);
      noLegs_0_1_0.set(LegPutOrCall_134);
      InstrumentLeg_134.insert(LegPutOrCall_134.getString());
      FIX::LegRatioQty LegRatioQty_134;
      LegRatioQty_134.setString("7277602");
      noLegs_0_1_0.set(LegRatioQty_134);
      InstrumentLeg_134.insert(LegRatioQty_134.getString());
      FIX::LegRedemptionDate LegRedemptionDate_134("LOCALMKTDATE_1313563174");
      noLegs_0_1_0.set(LegRedemptionDate_134);
      InstrumentLeg_134.insert(LegRedemptionDate_134.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_134("STRING_831897195");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_134);
      InstrumentLeg_134.insert(LegRepoCollateralSecurityType_134.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_134;
      LegRepurchaseRate_134.setString("88.430000");
      noLegs_0_1_0.set(LegRepurchaseRate_134);
      InstrumentLeg_134.insert(LegRepurchaseRate_134.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_134(320813822);
      noLegs_0_1_0.set(LegRepurchaseTerm_134);
      InstrumentLeg_134.insert(LegRepurchaseTerm_134.getString());
      FIX::LegSecurityDesc LegSecurityDesc_134("STRING_407947946");
      noLegs_0_1_0.set(LegSecurityDesc_134);
      InstrumentLeg_134.insert(LegSecurityDesc_134.getString());
      FIX::LegSecurityExchange LegSecurityExchange_134("EXCHANGE_1753207901");
      noLegs_0_1_0.set(LegSecurityExchange_134);
      InstrumentLeg_134.insert(LegSecurityExchange_134.getString());
      FIX::LegSecurityID LegSecurityID_134("STRING_2077493366");
      noLegs_0_1_0.set(LegSecurityID_134);
      InstrumentLeg_134.insert(LegSecurityID_134.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_134("STRING_1239786771");
      noLegs_0_1_0.set(LegSecurityIDSource_134);
      InstrumentLeg_134.insert(LegSecurityIDSource_134.getString());
      FIX::LegSecuritySubType LegSecuritySubType_134("STRING_1095865869");
      noLegs_0_1_0.set(LegSecuritySubType_134);
      InstrumentLeg_134.insert(LegSecuritySubType_134.getString());
      FIX::LegSecurityType LegSecurityType_134("STRING_1068628838");
      noLegs_0_1_0.set(LegSecurityType_134);
      InstrumentLeg_134.insert(LegSecurityType_134.getString());
      FIX::LegSide LegSide_134('2');
      noLegs_0_1_0.set(LegSide_134);
      InstrumentLeg_134.insert(LegSide_134.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_134("STRING_331936769");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_134);
      InstrumentLeg_134.insert(LegStateOrProvinceOfIssue_134.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_134("GBP");
      noLegs_0_1_0.set(LegStrikeCurrency_134);
      InstrumentLeg_134.insert(LegStrikeCurrency_134.getString());
      FIX::LegStrikePrice LegStrikePrice_134;
      LegStrikePrice_134.setString("1257157");
      noLegs_0_1_0.set(LegStrikePrice_134);
      InstrumentLeg_134.insert(LegStrikePrice_134.getString());
      FIX::LegSymbol LegSymbol_134("STRING_1081709339");
      noLegs_0_1_0.set(LegSymbol_134);
      InstrumentLeg_134.insert(LegSymbol_134.getString());
      FIX::LegSymbolSfx LegSymbolSfx_134("STRING_1479684203");
      noLegs_0_1_0.set(LegSymbolSfx_134);
      InstrumentLeg_134.insert(LegSymbolSfx_134.getString());
      FIX::LegTimeUnit LegTimeUnit_134("STRING_447800829");
      noLegs_0_1_0.set(LegTimeUnit_134);
      InstrumentLeg_134.insert(LegTimeUnit_134.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_134("STRING_1134509831");
      noLegs_0_1_0.set(LegUnitOfMeasure_134);
      InstrumentLeg_134.insert(LegUnitOfMeasure_134.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_134;
      LegUnitOfMeasureQty_134.setString("2371776");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_134);
      InstrumentLeg_134.insert(LegUnitOfMeasureQty_134.getString());
      all_values.push_back(InstrumentLeg_134);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_263;
        FIX::LegSecurityAltID LegSecurityAltID_263("STRING_1711296534");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_263);
        LegSecAltIDGrp_NoLegSecurityAltID_263.insert(LegSecurityAltID_263.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_263("STRING_1114979817");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_263);
        LegSecAltIDGrp_NoLegSecurityAltID_263.insert(LegSecurityAltIDSource_263.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_263);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_264;
        FIX::LegSecurityAltID LegSecurityAltID_264("STRING_1550831016");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_264);
        LegSecAltIDGrp_NoLegSecurityAltID_264.insert(LegSecurityAltID_264.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_264("STRING_1996559626");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_264);
        LegSecAltIDGrp_NoLegSecurityAltID_264.insert(LegSecurityAltIDSource_264.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_264);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_13;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_13("CHF");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurveCurrency_13.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_13("STRING_1377604126");
      noLegs_0_1_0.set(LegBenchmarkCurveName_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurveName_13.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_13("STRING_1731888467");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkCurvePoint_13.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_13;
      LegBenchmarkPrice_13.setString("7258349");
      noLegs_0_1_0.set(LegBenchmarkPrice_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkPrice_13.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_13(2105364391);
      noLegs_0_1_0.set(LegBenchmarkPriceType_13);
      LegBenchmarkCurveData_13.insert(LegBenchmarkPriceType_13.getString());
      all_values.push_back(LegBenchmarkCurveData_13);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_44;
        FIX::LegStipulationType LegStipulationType_44("STRING_1557732189");
        noLegStipulations_0_0_2_0.set(LegStipulationType_44);
        LegStipulations_NoLegStipulations_44.insert(LegStipulationType_44.getString());
        FIX::LegStipulationValue LegStipulationValue_44("STRING_412739587");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_44);
        LegStipulations_NoLegStipulations_44.insert(LegStipulationValue_44.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_44);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_45;
        FIX::LegStipulationType LegStipulationType_45("STRING_1218781816");
        noLegStipulations_0_0_2_1.set(LegStipulationType_45);
        LegStipulations_NoLegStipulations_45.insert(LegStipulationType_45.getString());
        FIX::LegStipulationValue LegStipulationValue_45("STRING_1965680135");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_45);
        LegStipulations_NoLegStipulations_45.insert(LegStipulationValue_45.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_45);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_46;
        FIX::LegStipulationType LegStipulationType_46("STRING_18463840");
        noLegStipulations_0_0_2_2.set(LegStipulationType_46);
        LegStipulations_NoLegStipulations_46.insert(LegStipulationType_46.getString());
        FIX::LegStipulationValue LegStipulationValue_46("STRING_1148791534");
        noLegStipulations_0_0_2_2.set(LegStipulationValue_46);
        LegStipulations_NoLegStipulations_46.insert(LegStipulationValue_46.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_46);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_1;
      FIX::LegSettlType LegSettlType_19('1');
      noLegs_0_1_1.set(LegSettlType_19);
      InstrmtLegSecListGrp_NoLegs_1.insert(LegSettlType_19.getString());
      FIX::LegSwapType LegSwapType_19(4);
      noLegs_0_1_1.set(LegSwapType_19);
      InstrmtLegSecListGrp_NoLegs_1.insert(LegSwapType_19.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_1);
      all_compo_names.insert("InstrmtLegSecListGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_135;
      FIX::EncodedLegIssuer EncodedLegIssuer_135("DATA_69936724");
      noLegs_0_1_1.set(EncodedLegIssuer_135);
      InstrumentLeg_135.insert(EncodedLegIssuer_135.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_135(1078697626);
      noLegs_0_1_1.set(EncodedLegIssuerLen_135);
      InstrumentLeg_135.insert(EncodedLegIssuerLen_135.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_135("DATA_1446266479");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_135);
      InstrumentLeg_135.insert(EncodedLegSecurityDesc_135.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_135(1383424309);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_135);
      InstrumentLeg_135.insert(EncodedLegSecurityDescLen_135.getString());
      FIX::LegCFICode LegCFICode_135("STRING_547192468");
      noLegs_0_1_1.set(LegCFICode_135);
      InstrumentLeg_135.insert(LegCFICode_135.getString());
      FIX::LegContractMultiplier LegContractMultiplier_135;
      LegContractMultiplier_135.setString("15719821");
      noLegs_0_1_1.set(LegContractMultiplier_135);
      InstrumentLeg_135.insert(LegContractMultiplier_135.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_135(317650000);
      noLegs_0_1_1.set(LegContractMultiplierUnit_135);
      InstrumentLeg_135.insert(LegContractMultiplierUnit_135.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_135("MONTHYEAR_2026876671");
      noLegs_0_1_1.set(LegContractSettlMonth_135);
      InstrumentLeg_135.insert(LegContractSettlMonth_135.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_135("COUNTRY_2019783021");
      noLegs_0_1_1.set(LegCountryOfIssue_135);
      InstrumentLeg_135.insert(LegCountryOfIssue_135.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_135("LOCALMKTDATE_1452159832");
      noLegs_0_1_1.set(LegCouponPaymentDate_135);
      InstrumentLeg_135.insert(LegCouponPaymentDate_135.getString());
      FIX::LegCouponRate LegCouponRate_135;
      LegCouponRate_135.setString("7.210000");
      noLegs_0_1_1.set(LegCouponRate_135);
      InstrumentLeg_135.insert(LegCouponRate_135.getString());
      FIX::LegCreditRating LegCreditRating_135("STRING_1639888685");
      noLegs_0_1_1.set(LegCreditRating_135);
      InstrumentLeg_135.insert(LegCreditRating_135.getString());
      FIX::LegCurrency LegCurrency_135("USD");
      noLegs_0_1_1.set(LegCurrency_135);
      InstrumentLeg_135.insert(LegCurrency_135.getString());
      FIX::LegDatedDate LegDatedDate_135("LOCALMKTDATE_1043236053");
      noLegs_0_1_1.set(LegDatedDate_135);
      InstrumentLeg_135.insert(LegDatedDate_135.getString());
      FIX::LegExerciseStyle LegExerciseStyle_135(865048697);
      noLegs_0_1_1.set(LegExerciseStyle_135);
      InstrumentLeg_135.insert(LegExerciseStyle_135.getString());
      FIX::LegFactor LegFactor_135;
      LegFactor_135.setString("2693860");
      noLegs_0_1_1.set(LegFactor_135);
      InstrumentLeg_135.insert(LegFactor_135.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_135(657037331);
      noLegs_0_1_1.set(LegFlowScheduleType_135);
      InstrumentLeg_135.insert(LegFlowScheduleType_135.getString());
      FIX::LegInstrRegistry LegInstrRegistry_135("STRING_95169175");
      noLegs_0_1_1.set(LegInstrRegistry_135);
      InstrumentLeg_135.insert(LegInstrRegistry_135.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_135("LOCALMKTDATE_2001274469");
      noLegs_0_1_1.set(LegInterestAccrualDate_135);
      InstrumentLeg_135.insert(LegInterestAccrualDate_135.getString());
      FIX::LegIssueDate LegIssueDate_135("LOCALMKTDATE_1382872325");
      noLegs_0_1_1.set(LegIssueDate_135);
      InstrumentLeg_135.insert(LegIssueDate_135.getString());
      FIX::LegIssuer LegIssuer_135("STRING_53049918");
      noLegs_0_1_1.set(LegIssuer_135);
      InstrumentLeg_135.insert(LegIssuer_135.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_135("STRING_751758815");
      noLegs_0_1_1.set(LegLocaleOfIssue_135);
      InstrumentLeg_135.insert(LegLocaleOfIssue_135.getString());
      FIX::LegMaturityDate LegMaturityDate_135("LOCALMKTDATE_793120866");
      noLegs_0_1_1.set(LegMaturityDate_135);
      InstrumentLeg_135.insert(LegMaturityDate_135.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_135("MONTHYEAR_465789505");
      noLegs_0_1_1.set(LegMaturityMonthYear_135);
      InstrumentLeg_135.insert(LegMaturityMonthYear_135.getString());
      FIX::LegMaturityTime LegMaturityTime_135("TZTIMEONLY_1970540631");
      noLegs_0_1_1.set(LegMaturityTime_135);
      InstrumentLeg_135.insert(LegMaturityTime_135.getString());
      FIX::LegOptAttribute LegOptAttribute_135('6');
      noLegs_0_1_1.set(LegOptAttribute_135);
      InstrumentLeg_135.insert(LegOptAttribute_135.getString());
      FIX::LegOptionRatio LegOptionRatio_135;
      LegOptionRatio_135.setString("4842533");
      noLegs_0_1_1.set(LegOptionRatio_135);
      InstrumentLeg_135.insert(LegOptionRatio_135.getString());
      FIX::LegPool LegPool_135("STRING_971848517");
      noLegs_0_1_1.set(LegPool_135);
      InstrumentLeg_135.insert(LegPool_135.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_135("STRING_1669300612");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_135);
      InstrumentLeg_135.insert(LegPriceUnitOfMeasure_135.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_135;
      LegPriceUnitOfMeasureQty_135.setString("15985830");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_135);
      InstrumentLeg_135.insert(LegPriceUnitOfMeasureQty_135.getString());
      FIX::LegProduct LegProduct_135(1041785242);
      noLegs_0_1_1.set(LegProduct_135);
      InstrumentLeg_135.insert(LegProduct_135.getString());
      FIX::LegPutOrCall LegPutOrCall_135(600514590);
      noLegs_0_1_1.set(LegPutOrCall_135);
      InstrumentLeg_135.insert(LegPutOrCall_135.getString());
      FIX::LegRatioQty LegRatioQty_135;
      LegRatioQty_135.setString("8973658");
      noLegs_0_1_1.set(LegRatioQty_135);
      InstrumentLeg_135.insert(LegRatioQty_135.getString());
      FIX::LegRedemptionDate LegRedemptionDate_135("LOCALMKTDATE_277725903");
      noLegs_0_1_1.set(LegRedemptionDate_135);
      InstrumentLeg_135.insert(LegRedemptionDate_135.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_135("STRING_1147707059");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_135);
      InstrumentLeg_135.insert(LegRepoCollateralSecurityType_135.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_135;
      LegRepurchaseRate_135.setString("44.300000");
      noLegs_0_1_1.set(LegRepurchaseRate_135);
      InstrumentLeg_135.insert(LegRepurchaseRate_135.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_135(595375904);
      noLegs_0_1_1.set(LegRepurchaseTerm_135);
      InstrumentLeg_135.insert(LegRepurchaseTerm_135.getString());
      FIX::LegSecurityDesc LegSecurityDesc_135("STRING_1027100082");
      noLegs_0_1_1.set(LegSecurityDesc_135);
      InstrumentLeg_135.insert(LegSecurityDesc_135.getString());
      FIX::LegSecurityExchange LegSecurityExchange_135("EXCHANGE_194163803");
      noLegs_0_1_1.set(LegSecurityExchange_135);
      InstrumentLeg_135.insert(LegSecurityExchange_135.getString());
      FIX::LegSecurityID LegSecurityID_135("STRING_2047535736");
      noLegs_0_1_1.set(LegSecurityID_135);
      InstrumentLeg_135.insert(LegSecurityID_135.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_135("STRING_1143670803");
      noLegs_0_1_1.set(LegSecurityIDSource_135);
      InstrumentLeg_135.insert(LegSecurityIDSource_135.getString());
      FIX::LegSecuritySubType LegSecuritySubType_135("STRING_1834052488");
      noLegs_0_1_1.set(LegSecuritySubType_135);
      InstrumentLeg_135.insert(LegSecuritySubType_135.getString());
      FIX::LegSecurityType LegSecurityType_135("STRING_916024806");
      noLegs_0_1_1.set(LegSecurityType_135);
      InstrumentLeg_135.insert(LegSecurityType_135.getString());
      FIX::LegSide LegSide_135('2');
      noLegs_0_1_1.set(LegSide_135);
      InstrumentLeg_135.insert(LegSide_135.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_135("STRING_729804894");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_135);
      InstrumentLeg_135.insert(LegStateOrProvinceOfIssue_135.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_135("EUR");
      noLegs_0_1_1.set(LegStrikeCurrency_135);
      InstrumentLeg_135.insert(LegStrikeCurrency_135.getString());
      FIX::LegStrikePrice LegStrikePrice_135;
      LegStrikePrice_135.setString("13868422");
      noLegs_0_1_1.set(LegStrikePrice_135);
      InstrumentLeg_135.insert(LegStrikePrice_135.getString());
      FIX::LegSymbol LegSymbol_135("STRING_1876242678");
      noLegs_0_1_1.set(LegSymbol_135);
      InstrumentLeg_135.insert(LegSymbol_135.getString());
      FIX::LegSymbolSfx LegSymbolSfx_135("STRING_350914516");
      noLegs_0_1_1.set(LegSymbolSfx_135);
      InstrumentLeg_135.insert(LegSymbolSfx_135.getString());
      FIX::LegTimeUnit LegTimeUnit_135("STRING_622230902");
      noLegs_0_1_1.set(LegTimeUnit_135);
      InstrumentLeg_135.insert(LegTimeUnit_135.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_135("STRING_1929292597");
      noLegs_0_1_1.set(LegUnitOfMeasure_135);
      InstrumentLeg_135.insert(LegUnitOfMeasure_135.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_135;
      LegUnitOfMeasureQty_135.setString("11026733");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_135);
      InstrumentLeg_135.insert(LegUnitOfMeasureQty_135.getString());
      all_values.push_back(InstrumentLeg_135);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_265;
        FIX::LegSecurityAltID LegSecurityAltID_265("STRING_247598454");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_265);
        LegSecAltIDGrp_NoLegSecurityAltID_265.insert(LegSecurityAltID_265.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_265("STRING_925730314");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_265);
        LegSecAltIDGrp_NoLegSecurityAltID_265.insert(LegSecurityAltIDSource_265.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_265);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_266;
        FIX::LegSecurityAltID LegSecurityAltID_266("STRING_2026669121");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_266);
        LegSecAltIDGrp_NoLegSecurityAltID_266.insert(LegSecurityAltID_266.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_266("STRING_731851800");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_266);
        LegSecAltIDGrp_NoLegSecurityAltID_266.insert(LegSecurityAltIDSource_266.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_266);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_267;
        FIX::LegSecurityAltID LegSecurityAltID_267("STRING_1897578831");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_267);
        LegSecAltIDGrp_NoLegSecurityAltID_267.insert(LegSecurityAltID_267.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_267("STRING_1548486085");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_267);
        LegSecAltIDGrp_NoLegSecurityAltID_267.insert(LegSecurityAltIDSource_267.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_267);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_14;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_14("CAN");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurveCurrency_14.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_14("STRING_1517028");
      noLegs_0_1_1.set(LegBenchmarkCurveName_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurveName_14.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_14("STRING_1080317095");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurvePoint_14.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_14;
      LegBenchmarkPrice_14.setString("10696063");
      noLegs_0_1_1.set(LegBenchmarkPrice_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkPrice_14.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_14(1149224087);
      noLegs_0_1_1.set(LegBenchmarkPriceType_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkPriceType_14.getString());
      all_values.push_back(LegBenchmarkCurveData_14);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_47;
        FIX::LegStipulationType LegStipulationType_47("STRING_1664982233");
        noLegStipulations_0_1_2_0.set(LegStipulationType_47);
        LegStipulations_NoLegStipulations_47.insert(LegStipulationType_47.getString());
        FIX::LegStipulationValue LegStipulationValue_47("STRING_28840521");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_47);
        LegStipulations_NoLegStipulations_47.insert(LegStipulationValue_47.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_47);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_2;
      FIX::LegSettlType LegSettlType_20('1');
      noLegs_0_1_2.set(LegSettlType_20);
      InstrmtLegSecListGrp_NoLegs_2.insert(LegSettlType_20.getString());
      FIX::LegSwapType LegSwapType_20(2);
      noLegs_0_1_2.set(LegSwapType_20);
      InstrmtLegSecListGrp_NoLegs_2.insert(LegSwapType_20.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_2);
      all_compo_names.insert("InstrmtLegSecListGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_136;
      FIX::EncodedLegIssuer EncodedLegIssuer_136("DATA_1172511325");
      noLegs_0_1_2.set(EncodedLegIssuer_136);
      InstrumentLeg_136.insert(EncodedLegIssuer_136.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_136(1282914170);
      noLegs_0_1_2.set(EncodedLegIssuerLen_136);
      InstrumentLeg_136.insert(EncodedLegIssuerLen_136.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_136("DATA_333575479");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_136);
      InstrumentLeg_136.insert(EncodedLegSecurityDesc_136.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_136(1400249018);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_136);
      InstrumentLeg_136.insert(EncodedLegSecurityDescLen_136.getString());
      FIX::LegCFICode LegCFICode_136("STRING_2012719064");
      noLegs_0_1_2.set(LegCFICode_136);
      InstrumentLeg_136.insert(LegCFICode_136.getString());
      FIX::LegContractMultiplier LegContractMultiplier_136;
      LegContractMultiplier_136.setString("21146489");
      noLegs_0_1_2.set(LegContractMultiplier_136);
      InstrumentLeg_136.insert(LegContractMultiplier_136.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_136(1897372713);
      noLegs_0_1_2.set(LegContractMultiplierUnit_136);
      InstrumentLeg_136.insert(LegContractMultiplierUnit_136.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_136("MONTHYEAR_1252077641");
      noLegs_0_1_2.set(LegContractSettlMonth_136);
      InstrumentLeg_136.insert(LegContractSettlMonth_136.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_136("COUNTRY_1843408013");
      noLegs_0_1_2.set(LegCountryOfIssue_136);
      InstrumentLeg_136.insert(LegCountryOfIssue_136.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_136("LOCALMKTDATE_100803581");
      noLegs_0_1_2.set(LegCouponPaymentDate_136);
      InstrumentLeg_136.insert(LegCouponPaymentDate_136.getString());
      FIX::LegCouponRate LegCouponRate_136;
      LegCouponRate_136.setString("85.430000");
      noLegs_0_1_2.set(LegCouponRate_136);
      InstrumentLeg_136.insert(LegCouponRate_136.getString());
      FIX::LegCreditRating LegCreditRating_136("STRING_1625216962");
      noLegs_0_1_2.set(LegCreditRating_136);
      InstrumentLeg_136.insert(LegCreditRating_136.getString());
      FIX::LegCurrency LegCurrency_136("EUR");
      noLegs_0_1_2.set(LegCurrency_136);
      InstrumentLeg_136.insert(LegCurrency_136.getString());
      FIX::LegDatedDate LegDatedDate_136("LOCALMKTDATE_1872815417");
      noLegs_0_1_2.set(LegDatedDate_136);
      InstrumentLeg_136.insert(LegDatedDate_136.getString());
      FIX::LegExerciseStyle LegExerciseStyle_136(2129207226);
      noLegs_0_1_2.set(LegExerciseStyle_136);
      InstrumentLeg_136.insert(LegExerciseStyle_136.getString());
      FIX::LegFactor LegFactor_136;
      LegFactor_136.setString("10213621");
      noLegs_0_1_2.set(LegFactor_136);
      InstrumentLeg_136.insert(LegFactor_136.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_136(457183569);
      noLegs_0_1_2.set(LegFlowScheduleType_136);
      InstrumentLeg_136.insert(LegFlowScheduleType_136.getString());
      FIX::LegInstrRegistry LegInstrRegistry_136("STRING_1879302410");
      noLegs_0_1_2.set(LegInstrRegistry_136);
      InstrumentLeg_136.insert(LegInstrRegistry_136.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_136("LOCALMKTDATE_422364574");
      noLegs_0_1_2.set(LegInterestAccrualDate_136);
      InstrumentLeg_136.insert(LegInterestAccrualDate_136.getString());
      FIX::LegIssueDate LegIssueDate_136("LOCALMKTDATE_640134778");
      noLegs_0_1_2.set(LegIssueDate_136);
      InstrumentLeg_136.insert(LegIssueDate_136.getString());
      FIX::LegIssuer LegIssuer_136("STRING_523699187");
      noLegs_0_1_2.set(LegIssuer_136);
      InstrumentLeg_136.insert(LegIssuer_136.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_136("STRING_423881602");
      noLegs_0_1_2.set(LegLocaleOfIssue_136);
      InstrumentLeg_136.insert(LegLocaleOfIssue_136.getString());
      FIX::LegMaturityDate LegMaturityDate_136("LOCALMKTDATE_1720451873");
      noLegs_0_1_2.set(LegMaturityDate_136);
      InstrumentLeg_136.insert(LegMaturityDate_136.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_136("MONTHYEAR_1593305516");
      noLegs_0_1_2.set(LegMaturityMonthYear_136);
      InstrumentLeg_136.insert(LegMaturityMonthYear_136.getString());
      FIX::LegMaturityTime LegMaturityTime_136("TZTIMEONLY_1573105689");
      noLegs_0_1_2.set(LegMaturityTime_136);
      InstrumentLeg_136.insert(LegMaturityTime_136.getString());
      FIX::LegOptAttribute LegOptAttribute_136('9');
      noLegs_0_1_2.set(LegOptAttribute_136);
      InstrumentLeg_136.insert(LegOptAttribute_136.getString());
      FIX::LegOptionRatio LegOptionRatio_136;
      LegOptionRatio_136.setString("11108041");
      noLegs_0_1_2.set(LegOptionRatio_136);
      InstrumentLeg_136.insert(LegOptionRatio_136.getString());
      FIX::LegPool LegPool_136("STRING_1601946210");
      noLegs_0_1_2.set(LegPool_136);
      InstrumentLeg_136.insert(LegPool_136.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_136("STRING_424011433");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_136);
      InstrumentLeg_136.insert(LegPriceUnitOfMeasure_136.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_136;
      LegPriceUnitOfMeasureQty_136.setString("5283547");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_136);
      InstrumentLeg_136.insert(LegPriceUnitOfMeasureQty_136.getString());
      FIX::LegProduct LegProduct_136(626973887);
      noLegs_0_1_2.set(LegProduct_136);
      InstrumentLeg_136.insert(LegProduct_136.getString());
      FIX::LegPutOrCall LegPutOrCall_136(1706925603);
      noLegs_0_1_2.set(LegPutOrCall_136);
      InstrumentLeg_136.insert(LegPutOrCall_136.getString());
      FIX::LegRatioQty LegRatioQty_136;
      LegRatioQty_136.setString("8619302");
      noLegs_0_1_2.set(LegRatioQty_136);
      InstrumentLeg_136.insert(LegRatioQty_136.getString());
      FIX::LegRedemptionDate LegRedemptionDate_136("LOCALMKTDATE_2027222906");
      noLegs_0_1_2.set(LegRedemptionDate_136);
      InstrumentLeg_136.insert(LegRedemptionDate_136.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_136("STRING_1572161019");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_136);
      InstrumentLeg_136.insert(LegRepoCollateralSecurityType_136.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_136;
      LegRepurchaseRate_136.setString("55.890000");
      noLegs_0_1_2.set(LegRepurchaseRate_136);
      InstrumentLeg_136.insert(LegRepurchaseRate_136.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_136(1777111971);
      noLegs_0_1_2.set(LegRepurchaseTerm_136);
      InstrumentLeg_136.insert(LegRepurchaseTerm_136.getString());
      FIX::LegSecurityDesc LegSecurityDesc_136("STRING_676755012");
      noLegs_0_1_2.set(LegSecurityDesc_136);
      InstrumentLeg_136.insert(LegSecurityDesc_136.getString());
      FIX::LegSecurityExchange LegSecurityExchange_136("EXCHANGE_525019954");
      noLegs_0_1_2.set(LegSecurityExchange_136);
      InstrumentLeg_136.insert(LegSecurityExchange_136.getString());
      FIX::LegSecurityID LegSecurityID_136("STRING_1877915553");
      noLegs_0_1_2.set(LegSecurityID_136);
      InstrumentLeg_136.insert(LegSecurityID_136.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_136("STRING_403579907");
      noLegs_0_1_2.set(LegSecurityIDSource_136);
      InstrumentLeg_136.insert(LegSecurityIDSource_136.getString());
      FIX::LegSecuritySubType LegSecuritySubType_136("STRING_2753269");
      noLegs_0_1_2.set(LegSecuritySubType_136);
      InstrumentLeg_136.insert(LegSecuritySubType_136.getString());
      FIX::LegSecurityType LegSecurityType_136("STRING_933908817");
      noLegs_0_1_2.set(LegSecurityType_136);
      InstrumentLeg_136.insert(LegSecurityType_136.getString());
      FIX::LegSide LegSide_136('1');
      noLegs_0_1_2.set(LegSide_136);
      InstrumentLeg_136.insert(LegSide_136.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_136("STRING_1875568686");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_136);
      InstrumentLeg_136.insert(LegStateOrProvinceOfIssue_136.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_136("GBP");
      noLegs_0_1_2.set(LegStrikeCurrency_136);
      InstrumentLeg_136.insert(LegStrikeCurrency_136.getString());
      FIX::LegStrikePrice LegStrikePrice_136;
      LegStrikePrice_136.setString("1852686");
      noLegs_0_1_2.set(LegStrikePrice_136);
      InstrumentLeg_136.insert(LegStrikePrice_136.getString());
      FIX::LegSymbol LegSymbol_136("STRING_647451158");
      noLegs_0_1_2.set(LegSymbol_136);
      InstrumentLeg_136.insert(LegSymbol_136.getString());
      FIX::LegSymbolSfx LegSymbolSfx_136("STRING_841999632");
      noLegs_0_1_2.set(LegSymbolSfx_136);
      InstrumentLeg_136.insert(LegSymbolSfx_136.getString());
      FIX::LegTimeUnit LegTimeUnit_136("STRING_825403385");
      noLegs_0_1_2.set(LegTimeUnit_136);
      InstrumentLeg_136.insert(LegTimeUnit_136.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_136("STRING_1171150345");
      noLegs_0_1_2.set(LegUnitOfMeasure_136);
      InstrumentLeg_136.insert(LegUnitOfMeasure_136.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_136;
      LegUnitOfMeasureQty_136.setString("12658812");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_136);
      InstrumentLeg_136.insert(LegUnitOfMeasureQty_136.getString());
      all_values.push_back(InstrumentLeg_136);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_268;
        FIX::LegSecurityAltID LegSecurityAltID_268("STRING_616972214");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_268);
        LegSecAltIDGrp_NoLegSecurityAltID_268.insert(LegSecurityAltID_268.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_268("STRING_691503275");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_268);
        LegSecAltIDGrp_NoLegSecurityAltID_268.insert(LegSecurityAltIDSource_268.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_268);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_15;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_15("EUR");
      noLegs_0_1_2.set(LegBenchmarkCurveCurrency_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurveCurrency_15.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_15("STRING_145965838");
      noLegs_0_1_2.set(LegBenchmarkCurveName_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurveName_15.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_15("STRING_1797532795");
      noLegs_0_1_2.set(LegBenchmarkCurvePoint_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurvePoint_15.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_15;
      LegBenchmarkPrice_15.setString("1086474");
      noLegs_0_1_2.set(LegBenchmarkPrice_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkPrice_15.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_15(772939725);
      noLegs_0_1_2.set(LegBenchmarkPriceType_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkPriceType_15.getString());
      all_values.push_back(LegBenchmarkCurveData_15);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_48;
        FIX::LegStipulationType LegStipulationType_48("STRING_970577696");
        noLegStipulations_0_2_2_0.set(LegStipulationType_48);
        LegStipulations_NoLegStipulations_48.insert(LegStipulationType_48.getString());
        FIX::LegStipulationValue LegStipulationValue_48("STRING_652678983");
        noLegStipulations_0_2_2_0.set(LegStipulationValue_48);
        LegStipulations_NoLegStipulations_48.insert(LegStipulationValue_48.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_48);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_49;
        FIX::LegStipulationType LegStipulationType_49("STRING_781652121");
        noLegStipulations_0_2_2_1.set(LegStipulationType_49);
        LegStipulations_NoLegStipulations_49.insert(LegStipulationType_49.getString());
        FIX::LegStipulationValue LegStipulationValue_49("STRING_1799673285");
        noLegStipulations_0_2_2_1.set(LegStipulationValue_49);
        LegStipulations_NoLegStipulations_49.insert(LegStipulationValue_49.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_49);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_50;
        FIX::LegStipulationType LegStipulationType_50("STRING_282307307");
        noLegStipulations_0_2_2_2.set(LegStipulationType_50);
        LegStipulations_NoLegStipulations_50.insert(LegStipulationType_50.getString());
        FIX::LegStipulationValue LegStipulationValue_50("STRING_1458407133");
        noLegStipulations_0_2_2_2.set(LegStipulationValue_50);
        LegStipulations_NoLegStipulations_50.insert(LegStipulationValue_50.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_50);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_83;
    FIX::AttachmentPoint AttachmentPoint_83;
    AttachmentPoint_83.setString("95.910000");
    noRelatedSym_0_0.set(AttachmentPoint_83);
    Instrument_83.insert(AttachmentPoint_83.getString());
    FIX::CFICode CFICode_83("STRING_12739212");
    noRelatedSym_0_0.set(CFICode_83);
    Instrument_83.insert(CFICode_83.getString());
    FIX::CPProgram CPProgram_83(99);
    noRelatedSym_0_0.set(CPProgram_83);
    Instrument_83.insert(CPProgram_83.getString());
    FIX::CPRegType CPRegType_83("STRING_179962860");
    noRelatedSym_0_0.set(CPRegType_83);
    Instrument_83.insert(CPRegType_83.getString());
    FIX::CapPrice CapPrice_83;
    CapPrice_83.setString("9466480");
    noRelatedSym_0_0.set(CapPrice_83);
    Instrument_83.insert(CapPrice_83.getString());
    FIX::ContractMultiplier ContractMultiplier_83;
    ContractMultiplier_83.setString("12602599");
    noRelatedSym_0_0.set(ContractMultiplier_83);
    Instrument_83.insert(ContractMultiplier_83.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_83(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_83);
    Instrument_83.insert(ContractMultiplierUnit_83.getString());
    FIX::ContractSettlMonth ContractSettlMonth_83("MONTHYEAR_1862280425");
    noRelatedSym_0_0.set(ContractSettlMonth_83);
    Instrument_83.insert(ContractSettlMonth_83.getString());
    FIX::CountryOfIssue CountryOfIssue_83("COUNTRY_1679895021");
    noRelatedSym_0_0.set(CountryOfIssue_83);
    Instrument_83.insert(CountryOfIssue_83.getString());
    FIX::CouponPaymentDate CouponPaymentDate_83("LOCALMKTDATE_93316506");
    noRelatedSym_0_0.set(CouponPaymentDate_83);
    Instrument_83.insert(CouponPaymentDate_83.getString());
    FIX::CouponRate CouponRate_83;
    CouponRate_83.setString("79.350000");
    noRelatedSym_0_0.set(CouponRate_83);
    Instrument_83.insert(CouponRate_83.getString());
    FIX::CreditRating CreditRating_83("STRING_374411005");
    noRelatedSym_0_0.set(CreditRating_83);
    Instrument_83.insert(CreditRating_83.getString());
    FIX::DatedDate DatedDate_83("LOCALMKTDATE_918719891");
    noRelatedSym_0_0.set(DatedDate_83);
    Instrument_83.insert(DatedDate_83.getString());
    FIX::DetachmentPoint DetachmentPoint_83;
    DetachmentPoint_83.setString("82.810000");
    noRelatedSym_0_0.set(DetachmentPoint_83);
    Instrument_83.insert(DetachmentPoint_83.getString());
    FIX::EncodedIssuer EncodedIssuer_83("DATA_1640292240");
    noRelatedSym_0_0.set(EncodedIssuer_83);
    Instrument_83.insert(EncodedIssuer_83.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_83(1317091502);
    noRelatedSym_0_0.set(EncodedIssuerLen_83);
    Instrument_83.insert(EncodedIssuerLen_83.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_83("DATA_2886847");
    noRelatedSym_0_0.set(EncodedSecurityDesc_83);
    Instrument_83.insert(EncodedSecurityDesc_83.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_83(184311867);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_83);
    Instrument_83.insert(EncodedSecurityDescLen_83.getString());
    FIX::ExerciseStyle ExerciseStyle_83(1);
    noRelatedSym_0_0.set(ExerciseStyle_83);
    Instrument_83.insert(ExerciseStyle_83.getString());
    FIX::Factor Factor_83;
    Factor_83.setString("17306631");
    noRelatedSym_0_0.set(Factor_83);
    Instrument_83.insert(Factor_83.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_83(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_83);
    Instrument_83.insert(FlexProductEligibilityIndicator_83.getString());
    FIX::FlexibleIndicator FlexibleIndicator_83(true);
    noRelatedSym_0_0.set(FlexibleIndicator_83);
    Instrument_83.insert(FlexibleIndicator_83.getString());
    FIX::FloorPrice FloorPrice_83;
    FloorPrice_83.setString("18393106");
    noRelatedSym_0_0.set(FloorPrice_83);
    Instrument_83.insert(FloorPrice_83.getString());
    FIX::FlowScheduleType FlowScheduleType_83(1);
    noRelatedSym_0_0.set(FlowScheduleType_83);
    Instrument_83.insert(FlowScheduleType_83.getString());
    FIX::InstrRegistry InstrRegistry_83("STRING_1550153115");
    noRelatedSym_0_0.set(InstrRegistry_83);
    Instrument_83.insert(InstrRegistry_83.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_83('6');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_83);
    Instrument_83.insert(InstrmtAssignmentMethod_83.getString());
    FIX::InterestAccrualDate InterestAccrualDate_83("LOCALMKTDATE_1755896414");
    noRelatedSym_0_0.set(InterestAccrualDate_83);
    Instrument_83.insert(InterestAccrualDate_83.getString());
    FIX::IssueDate IssueDate_83("LOCALMKTDATE_184321588");
    noRelatedSym_0_0.set(IssueDate_83);
    Instrument_83.insert(IssueDate_83.getString());
    FIX::Issuer Issuer_83("STRING_314594289");
    noRelatedSym_0_0.set(Issuer_83);
    Instrument_83.insert(Issuer_83.getString());
    FIX::ListMethod ListMethod_83(1);
    noRelatedSym_0_0.set(ListMethod_83);
    Instrument_83.insert(ListMethod_83.getString());
    FIX::LocaleOfIssue LocaleOfIssue_83("STRING_1642728722");
    noRelatedSym_0_0.set(LocaleOfIssue_83);
    Instrument_83.insert(LocaleOfIssue_83.getString());
    FIX::MaturityDate MaturityDate_83("LOCALMKTDATE_491803881");
    noRelatedSym_0_0.set(MaturityDate_83);
    Instrument_83.insert(MaturityDate_83.getString());
    FIX::MaturityMonthYear MaturityMonthYear_83("MONTHYEAR_2050942933");
    noRelatedSym_0_0.set(MaturityMonthYear_83);
    Instrument_83.insert(MaturityMonthYear_83.getString());
    FIX::MaturityTime MaturityTime_83("TZTIMEONLY_1357232114");
    noRelatedSym_0_0.set(MaturityTime_83);
    Instrument_83.insert(MaturityTime_83.getString());
    FIX::MinPriceIncrement MinPriceIncrement_83;
    MinPriceIncrement_83.setString("6717667");
    noRelatedSym_0_0.set(MinPriceIncrement_83);
    Instrument_83.insert(MinPriceIncrement_83.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_83;
    MinPriceIncrementAmount_83.setString("8501073");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_83);
    Instrument_83.insert(MinPriceIncrementAmount_83.getString());
    FIX::NTPositionLimit NTPositionLimit_83(470008429);
    noRelatedSym_0_0.set(NTPositionLimit_83);
    Instrument_83.insert(NTPositionLimit_83.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_83;
    NotionalPercentageOutstanding_83.setString("46.400000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_83);
    Instrument_83.insert(NotionalPercentageOutstanding_83.getString());
    FIX::OptAttribute OptAttribute_83('5');
    noRelatedSym_0_0.set(OptAttribute_83);
    Instrument_83.insert(OptAttribute_83.getString());
    FIX::OptPayoutAmount OptPayoutAmount_83;
    OptPayoutAmount_83.setString("24198");
    noRelatedSym_0_0.set(OptPayoutAmount_83);
    Instrument_83.insert(OptPayoutAmount_83.getString());
    FIX::OptPayoutType OptPayoutType_83(3);
    noRelatedSym_0_0.set(OptPayoutType_83);
    Instrument_83.insert(OptPayoutType_83.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_83;
    OriginalNotionalPercentageOutstanding_83.setString("20.280000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_83);
    Instrument_83.insert(OriginalNotionalPercentageOutstanding_83.getString());
    FIX::Pool Pool_83("STRING_376830807");
    noRelatedSym_0_0.set(Pool_83);
    Instrument_83.insert(Pool_83.getString());
    FIX::PositionLimit PositionLimit_83(1591851037);
    noRelatedSym_0_0.set(PositionLimit_83);
    Instrument_83.insert(PositionLimit_83.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_83("STRING_INX");
    noRelatedSym_0_0.set(PriceQuoteMethod_83);
    Instrument_83.insert(PriceQuoteMethod_83.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_83("STRING_2017123047");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_83);
    Instrument_83.insert(PriceUnitOfMeasure_83.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_83;
    PriceUnitOfMeasureQty_83.setString("7614588");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_83);
    Instrument_83.insert(PriceUnitOfMeasureQty_83.getString());
    FIX::Product Product_85(1);
    noRelatedSym_0_0.set(Product_85);
    Instrument_83.insert(Product_85.getString());
    FIX::ProductComplex ProductComplex_83("STRING_53951267");
    noRelatedSym_0_0.set(ProductComplex_83);
    Instrument_83.insert(ProductComplex_83.getString());
    FIX::PutOrCall PutOrCall_83(1);
    noRelatedSym_0_0.set(PutOrCall_83);
    Instrument_83.insert(PutOrCall_83.getString());
    FIX::RedemptionDate RedemptionDate_83("LOCALMKTDATE_2046616670");
    noRelatedSym_0_0.set(RedemptionDate_83);
    Instrument_83.insert(RedemptionDate_83.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_83("STRING_384228972");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_83);
    Instrument_83.insert(RepoCollateralSecurityType_83.getString());
    FIX::RepurchaseRate RepurchaseRate_83;
    RepurchaseRate_83.setString("64.730000");
    noRelatedSym_0_0.set(RepurchaseRate_83);
    Instrument_83.insert(RepurchaseRate_83.getString());
    FIX::RepurchaseTerm RepurchaseTerm_83(1738443627);
    noRelatedSym_0_0.set(RepurchaseTerm_83);
    Instrument_83.insert(RepurchaseTerm_83.getString());
    FIX::RestructuringType RestructuringType_83("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_83);
    Instrument_83.insert(RestructuringType_83.getString());
    FIX::SecurityDesc SecurityDesc_83("STRING_900435940");
    noRelatedSym_0_0.set(SecurityDesc_83);
    Instrument_83.insert(SecurityDesc_83.getString());
    FIX::SecurityExchange SecurityExchange_83("EXCHANGE_253364631");
    noRelatedSym_0_0.set(SecurityExchange_83);
    Instrument_83.insert(SecurityExchange_83.getString());
    FIX::SecurityGroup SecurityGroup_83("STRING_1095859170");
    noRelatedSym_0_0.set(SecurityGroup_83);
    Instrument_83.insert(SecurityGroup_83.getString());
    FIX::SecurityID SecurityID_83("STRING_1084757529");
    noRelatedSym_0_0.set(SecurityID_83);
    Instrument_83.insert(SecurityID_83.getString());
    FIX::SecurityIDSource SecurityIDSource_83("STRING_E");
    noRelatedSym_0_0.set(SecurityIDSource_83);
    Instrument_83.insert(SecurityIDSource_83.getString());
    FIX::SecurityStatus SecurityStatus_83("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_83);
    Instrument_83.insert(SecurityStatus_83.getString());
    FIX::SecuritySubType SecuritySubType_84("STRING_580002603");
    noRelatedSym_0_0.set(SecuritySubType_84);
    Instrument_83.insert(SecuritySubType_84.getString());
    FIX::SecurityType SecurityType_85("STRING_CMBS");
    noRelatedSym_0_0.set(SecurityType_85);
    Instrument_83.insert(SecurityType_85.getString());
    FIX::Seniority Seniority_83("STRING_SB");
    noRelatedSym_0_0.set(Seniority_83);
    Instrument_83.insert(Seniority_83.getString());
    FIX::SettlMethod SettlMethod_83('P');
    noRelatedSym_0_0.set(SettlMethod_83);
    Instrument_83.insert(SettlMethod_83.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_83("STRING_1731529543");
    noRelatedSym_0_0.set(SettleOnOpenFlag_83);
    Instrument_83.insert(SettleOnOpenFlag_83.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_83("STRING_1740145844");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_83);
    Instrument_83.insert(StateOrProvinceOfIssue_83.getString());
    FIX::StrikeCurrency StrikeCurrency_83("EUR");
    noRelatedSym_0_0.set(StrikeCurrency_83);
    Instrument_83.insert(StrikeCurrency_83.getString());
    FIX::StrikeMultiplier StrikeMultiplier_83;
    StrikeMultiplier_83.setString("1575662");
    noRelatedSym_0_0.set(StrikeMultiplier_83);
    Instrument_83.insert(StrikeMultiplier_83.getString());
    FIX::StrikePrice StrikePrice_83;
    StrikePrice_83.setString("2621793");
    noRelatedSym_0_0.set(StrikePrice_83);
    Instrument_83.insert(StrikePrice_83.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_83(2);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_83);
    Instrument_83.insert(StrikePriceBoundaryMethod_83.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_83;
    StrikePriceBoundaryPrecision_83.setString("83.160000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_83);
    Instrument_83.insert(StrikePriceBoundaryPrecision_83.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_83(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_83);
    Instrument_83.insert(StrikePriceDeterminationMethod_83.getString());
    FIX::StrikeValue StrikeValue_83;
    StrikeValue_83.setString("2813590");
    noRelatedSym_0_0.set(StrikeValue_83);
    Instrument_83.insert(StrikeValue_83.getString());
    FIX::Symbol Symbol_83("STRING_1397784977");
    noRelatedSym_0_0.set(Symbol_83);
    Instrument_83.insert(Symbol_83.getString());
    FIX::SymbolSfx SymbolSfx_83("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_83);
    Instrument_83.insert(SymbolSfx_83.getString());
    FIX::TimeUnit TimeUnit_83("STRING_Mo");
    noRelatedSym_0_0.set(TimeUnit_83);
    Instrument_83.insert(TimeUnit_83.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_83(2);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_83);
    Instrument_83.insert(UnderlyingPriceDeterminationMethod_83.getString());
    FIX::UnitOfMeasure UnitOfMeasure_83("STRING_oz_tr");
    noRelatedSym_0_0.set(UnitOfMeasure_83);
    Instrument_83.insert(UnitOfMeasure_83.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_83;
    UnitOfMeasureQty_83.setString("1999224");
    noRelatedSym_0_0.set(UnitOfMeasureQty_83);
    Instrument_83.insert(UnitOfMeasureQty_83.getString());
    FIX::ValuationMethod ValuationMethod_83("STRING_CDS");
    noRelatedSym_0_0.set(ValuationMethod_83);
    Instrument_83.insert(ValuationMethod_83.getString());
    all_values.push_back(Instrument_83);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_168;
      FIX::ComplexEventCondition ComplexEventCondition_168(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventCondition_168.getString());
      FIX::ComplexEventPrice ComplexEventPrice_168;
      ComplexEventPrice_168.setString("12038314");
      noComplexEvents_0_1_0.set(ComplexEventPrice_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventPrice_168.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_168(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceBoundaryMethod_168.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_168;
      ComplexEventPriceBoundaryPrecision_168.setString("11.900000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceBoundaryPrecision_168.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_168(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceTimeType_168.getString());
      FIX::ComplexEventType ComplexEventType_168(6);
      noComplexEvents_0_1_0.set(ComplexEventType_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventType_168.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_168;
      ComplexOptPayoutAmount_168.setString("15353987");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexOptPayoutAmount_168.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_168);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_339;
        FIX::ComplexEventEndDate ComplexEventEndDate_339(FIX::UTCTIMESTAMP(18, 13, 17, 23, 2, 2011));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_339);
        ComplexEventDates_NoComplexEventDates_339.insert(ComplexEventEndDate_339.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_339(FIX::UTCTIMESTAMP(8, 41, 42, 26, 7, 2016));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_339);
        ComplexEventDates_NoComplexEventDates_339.insert(ComplexEventStartDate_339.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_339);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_686;
          FIX::ComplexEventEndTime ComplexEventEndTime_686(FIX::UTCTIMEONLY(22, 12, 25));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_686);
          ComplexEventTimes_NoComplexEventTimes_686.insert(ComplexEventEndTime_686.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_686(FIX::UTCTIMEONLY(12, 5, 11));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_686);
          ComplexEventTimes_NoComplexEventTimes_686.insert(ComplexEventStartTime_686.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_686);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_340;
        FIX::ComplexEventEndDate ComplexEventEndDate_340(FIX::UTCTIMESTAMP(0, 14, 55, 26, 3, 2002));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_340);
        ComplexEventDates_NoComplexEventDates_340.insert(ComplexEventEndDate_340.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_340(FIX::UTCTIMESTAMP(2, 0, 7, 27, 9, 2008));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_340);
        ComplexEventDates_NoComplexEventDates_340.insert(ComplexEventStartDate_340.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_340);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_687;
          FIX::ComplexEventEndTime ComplexEventEndTime_687(FIX::UTCTIMEONLY(9, 10, 8));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_687);
          ComplexEventTimes_NoComplexEventTimes_687.insert(ComplexEventEndTime_687.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_687(FIX::UTCTIMEONLY(8, 19, 28));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_687);
          ComplexEventTimes_NoComplexEventTimes_687.insert(ComplexEventStartTime_687.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_687);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_688;
          FIX::ComplexEventEndTime ComplexEventEndTime_688(FIX::UTCTIMEONLY(21, 32, 4));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_688);
          ComplexEventTimes_NoComplexEventTimes_688.insert(ComplexEventEndTime_688.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_688(FIX::UTCTIMEONLY(20, 9, 45));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_688);
          ComplexEventTimes_NoComplexEventTimes_688.insert(ComplexEventStartTime_688.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_688);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_341;
        FIX::ComplexEventEndDate ComplexEventEndDate_341(FIX::UTCTIMESTAMP(13, 51, 21, 4, 6, 2011));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_341);
        ComplexEventDates_NoComplexEventDates_341.insert(ComplexEventEndDate_341.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_341(FIX::UTCTIMESTAMP(8, 48, 9, 3, 9, 2016));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_341);
        ComplexEventDates_NoComplexEventDates_341.insert(ComplexEventStartDate_341.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_341);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_689;
          FIX::ComplexEventEndTime ComplexEventEndTime_689(FIX::UTCTIMEONLY(19, 10, 6));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_689);
          ComplexEventTimes_NoComplexEventTimes_689.insert(ComplexEventEndTime_689.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_689(FIX::UTCTIMEONLY(10, 17, 22));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_689);
          ComplexEventTimes_NoComplexEventTimes_689.insert(ComplexEventStartTime_689.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_689);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_169;
      FIX::ComplexEventCondition ComplexEventCondition_169(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventCondition_169.getString());
      FIX::ComplexEventPrice ComplexEventPrice_169;
      ComplexEventPrice_169.setString("9350456");
      noComplexEvents_0_1_1.set(ComplexEventPrice_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventPrice_169.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_169(5);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceBoundaryMethod_169.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_169;
      ComplexEventPriceBoundaryPrecision_169.setString("40.460000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceBoundaryPrecision_169.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_169(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceTimeType_169.getString());
      FIX::ComplexEventType ComplexEventType_169(7);
      noComplexEvents_0_1_1.set(ComplexEventType_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventType_169.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_169;
      ComplexOptPayoutAmount_169.setString("18836949");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexOptPayoutAmount_169.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_169);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_342;
        FIX::ComplexEventEndDate ComplexEventEndDate_342(FIX::UTCTIMESTAMP(17, 28, 40, 5, 10, 2010));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_342);
        ComplexEventDates_NoComplexEventDates_342.insert(ComplexEventEndDate_342.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_342(FIX::UTCTIMESTAMP(5, 8, 48, 13, 5, 2010));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_342);
        ComplexEventDates_NoComplexEventDates_342.insert(ComplexEventStartDate_342.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_342);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_690;
          FIX::ComplexEventEndTime ComplexEventEndTime_690(FIX::UTCTIMEONLY(21, 19, 36));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_690);
          ComplexEventTimes_NoComplexEventTimes_690.insert(ComplexEventEndTime_690.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_690(FIX::UTCTIMEONLY(17, 54, 25));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_690);
          ComplexEventTimes_NoComplexEventTimes_690.insert(ComplexEventStartTime_690.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_690);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_691;
          FIX::ComplexEventEndTime ComplexEventEndTime_691(FIX::UTCTIMEONLY(0, 11, 48));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_691);
          ComplexEventTimes_NoComplexEventTimes_691.insert(ComplexEventEndTime_691.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_691(FIX::UTCTIMEONLY(5, 56, 41));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_691);
          ComplexEventTimes_NoComplexEventTimes_691.insert(ComplexEventStartTime_691.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_691);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_692;
          FIX::ComplexEventEndTime ComplexEventEndTime_692(FIX::UTCTIMEONLY(5, 9, 57));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_692);
          ComplexEventTimes_NoComplexEventTimes_692.insert(ComplexEventEndTime_692.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_692(FIX::UTCTIMEONLY(7, 25, 25));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_692);
          ComplexEventTimes_NoComplexEventTimes_692.insert(ComplexEventStartTime_692.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_692);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_343;
        FIX::ComplexEventEndDate ComplexEventEndDate_343(FIX::UTCTIMESTAMP(21, 13, 9, 21, 5, 2008));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_343);
        ComplexEventDates_NoComplexEventDates_343.insert(ComplexEventEndDate_343.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_343(FIX::UTCTIMESTAMP(17, 45, 4, 17, 3, 2014));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_343);
        ComplexEventDates_NoComplexEventDates_343.insert(ComplexEventStartDate_343.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_343);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_693;
          FIX::ComplexEventEndTime ComplexEventEndTime_693(FIX::UTCTIMEONLY(14, 18, 49));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_693);
          ComplexEventTimes_NoComplexEventTimes_693.insert(ComplexEventEndTime_693.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_693(FIX::UTCTIMEONLY(15, 37, 48));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_693);
          ComplexEventTimes_NoComplexEventTimes_693.insert(ComplexEventStartTime_693.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_693);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_694;
          FIX::ComplexEventEndTime ComplexEventEndTime_694(FIX::UTCTIMEONLY(10, 58, 30));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_694);
          ComplexEventTimes_NoComplexEventTimes_694.insert(ComplexEventEndTime_694.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_694(FIX::UTCTIMEONLY(17, 47, 57));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_694);
          ComplexEventTimes_NoComplexEventTimes_694.insert(ComplexEventStartTime_694.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_694);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_695;
          FIX::ComplexEventEndTime ComplexEventEndTime_695(FIX::UTCTIMEONLY(1, 3, 59));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventEndTime_695);
          ComplexEventTimes_NoComplexEventTimes_695.insert(ComplexEventEndTime_695.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_695(FIX::UTCTIMEONLY(19, 25, 46));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventStartTime_695);
          ComplexEventTimes_NoComplexEventTimes_695.insert(ComplexEventStartTime_695.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_695);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_170;
      FIX::ComplexEventCondition ComplexEventCondition_170(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventCondition_170.getString());
      FIX::ComplexEventPrice ComplexEventPrice_170;
      ComplexEventPrice_170.setString("7979706");
      noComplexEvents_0_1_2.set(ComplexEventPrice_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventPrice_170.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_170(1);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceBoundaryMethod_170.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_170;
      ComplexEventPriceBoundaryPrecision_170.setString("46.490000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceBoundaryPrecision_170.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_170(1);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceTimeType_170.getString());
      FIX::ComplexEventType ComplexEventType_170(5);
      noComplexEvents_0_1_2.set(ComplexEventType_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventType_170.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_170;
      ComplexOptPayoutAmount_170.setString("15649884");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexOptPayoutAmount_170.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_170);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_344;
        FIX::ComplexEventEndDate ComplexEventEndDate_344(FIX::UTCTIMESTAMP(6, 12, 49, 9, 6, 2014));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_344);
        ComplexEventDates_NoComplexEventDates_344.insert(ComplexEventEndDate_344.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_344(FIX::UTCTIMESTAMP(4, 28, 12, 4, 2, 2009));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_344);
        ComplexEventDates_NoComplexEventDates_344.insert(ComplexEventStartDate_344.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_344);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_696;
          FIX::ComplexEventEndTime ComplexEventEndTime_696(FIX::UTCTIMEONLY(4, 53, 13));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_696);
          ComplexEventTimes_NoComplexEventTimes_696.insert(ComplexEventEndTime_696.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_696(FIX::UTCTIMEONLY(16, 31, 1));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_696);
          ComplexEventTimes_NoComplexEventTimes_696.insert(ComplexEventStartTime_696.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_696);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_697;
          FIX::ComplexEventEndTime ComplexEventEndTime_697(FIX::UTCTIMEONLY(2, 51, 50));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_697);
          ComplexEventTimes_NoComplexEventTimes_697.insert(ComplexEventEndTime_697.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_697(FIX::UTCTIMEONLY(7, 26, 10));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_697);
          ComplexEventTimes_NoComplexEventTimes_697.insert(ComplexEventStartTime_697.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_697);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_698;
          FIX::ComplexEventEndTime ComplexEventEndTime_698(FIX::UTCTIMEONLY(8, 14, 47));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_698);
          ComplexEventTimes_NoComplexEventTimes_698.insert(ComplexEventEndTime_698.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_698(FIX::UTCTIMEONLY(19, 17, 11));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_698);
          ComplexEventTimes_NoComplexEventTimes_698.insert(ComplexEventStartTime_698.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_698);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_345;
        FIX::ComplexEventEndDate ComplexEventEndDate_345(FIX::UTCTIMESTAMP(9, 15, 8, 18, 8, 2010));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_345);
        ComplexEventDates_NoComplexEventDates_345.insert(ComplexEventEndDate_345.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_345(FIX::UTCTIMESTAMP(15, 51, 22, 14, 8, 2011));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_345);
        ComplexEventDates_NoComplexEventDates_345.insert(ComplexEventStartDate_345.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_345);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_699;
          FIX::ComplexEventEndTime ComplexEventEndTime_699(FIX::UTCTIMEONLY(19, 2, 33));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_699);
          ComplexEventTimes_NoComplexEventTimes_699.insert(ComplexEventEndTime_699.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_699(FIX::UTCTIMEONLY(9, 59, 8));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_699);
          ComplexEventTimes_NoComplexEventTimes_699.insert(ComplexEventStartTime_699.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_699);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_700;
          FIX::ComplexEventEndTime ComplexEventEndTime_700(FIX::UTCTIMEONLY(7, 22, 18));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventEndTime_700);
          ComplexEventTimes_NoComplexEventTimes_700.insert(ComplexEventEndTime_700.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_700(FIX::UTCTIMEONLY(18, 35, 52));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventStartTime_700);
          ComplexEventTimes_NoComplexEventTimes_700.insert(ComplexEventStartTime_700.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_700);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_167;
      FIX::EventDate EventDate_167("LOCALMKTDATE_1212512292");
      noEvents_0_1_0.set(EventDate_167);
      EvntGrp_NoEvents_167.insert(EventDate_167.getString());
      FIX::EventPx EventPx_167;
      EventPx_167.setString("15608730");
      noEvents_0_1_0.set(EventPx_167);
      EvntGrp_NoEvents_167.insert(EventPx_167.getString());
      FIX::EventText EventText_167("STRING_593909793");
      noEvents_0_1_0.set(EventText_167);
      EvntGrp_NoEvents_167.insert(EventText_167.getString());
      FIX::EventTime EventTime_167(FIX::UTCTIMESTAMP(23, 31, 30, 6, 3, 2016));
      noEvents_0_1_0.set(EventTime_167);
      EvntGrp_NoEvents_167.insert(EventTime_167.getString());
      FIX::EventType EventType_167(14);
      noEvents_0_1_0.set(EventType_167);
      EvntGrp_NoEvents_167.insert(EventType_167.getString());
      all_values.push_back(EvntGrp_NoEvents_167);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_168;
      FIX::EventDate EventDate_168("LOCALMKTDATE_1934089605");
      noEvents_0_1_1.set(EventDate_168);
      EvntGrp_NoEvents_168.insert(EventDate_168.getString());
      FIX::EventPx EventPx_168;
      EventPx_168.setString("6300834");
      noEvents_0_1_1.set(EventPx_168);
      EvntGrp_NoEvents_168.insert(EventPx_168.getString());
      FIX::EventText EventText_168("STRING_64694784");
      noEvents_0_1_1.set(EventText_168);
      EvntGrp_NoEvents_168.insert(EventText_168.getString());
      FIX::EventTime EventTime_168(FIX::UTCTIMESTAMP(0, 27, 54, 15, 5, 2006));
      noEvents_0_1_1.set(EventTime_168);
      EvntGrp_NoEvents_168.insert(EventTime_168.getString());
      FIX::EventType EventType_168(4);
      noEvents_0_1_1.set(EventType_168);
      EvntGrp_NoEvents_168.insert(EventType_168.getString());
      all_values.push_back(EvntGrp_NoEvents_168);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_173;
      FIX::InstrumentPartyID InstrumentPartyID_173("STRING_849567185");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_173);
      InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyID_173.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_173('3');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_173);
      InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyIDSource_173.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_173(788604693);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_173);
      InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyRole_173.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_173);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338;
        FIX::InstrumentPartySubID InstrumentPartySubID_338("STRING_102850588");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_338);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338.insert(InstrumentPartySubID_338.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_338(736691520);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_338);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338.insert(InstrumentPartySubIDType_338.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339;
        FIX::InstrumentPartySubID InstrumentPartySubID_339("STRING_740475331");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_339);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339.insert(InstrumentPartySubID_339.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_339(458583053);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_339);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339.insert(InstrumentPartySubIDType_339.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_174;
      FIX::InstrumentPartyID InstrumentPartyID_174("STRING_1949203812");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_174);
      InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyID_174.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_174('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_174);
      InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyIDSource_174.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_174(1052492847);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_174);
      InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyRole_174.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_174);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340;
        FIX::InstrumentPartySubID InstrumentPartySubID_340("STRING_1655847982");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_340);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340.insert(InstrumentPartySubID_340.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_340(160793870);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_340);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340.insert(InstrumentPartySubIDType_340.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_175;
      FIX::InstrumentPartyID InstrumentPartyID_175("STRING_1914751729");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_175);
      InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyID_175.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_175('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_175);
      InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyIDSource_175.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_175(563895785);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_175);
      InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyRole_175.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_175);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341;
        FIX::InstrumentPartySubID InstrumentPartySubID_341("STRING_523772181");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_341);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341.insert(InstrumentPartySubID_341.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_341(350501742);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_341);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341.insert(InstrumentPartySubIDType_341.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_155;
      FIX::SecurityAltID SecurityAltID_155("STRING_588466966");
      noSecurityAltID_0_1_0.set(SecurityAltID_155);
      SecAltIDGrp_NoSecurityAltID_155.insert(SecurityAltID_155.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_155("STRING_231694443");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_155);
      SecAltIDGrp_NoSecurityAltID_155.insert(SecurityAltIDSource_155.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_155);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_156;
      FIX::SecurityAltID SecurityAltID_156("STRING_1750249859");
      noSecurityAltID_0_1_1.set(SecurityAltID_156);
      SecAltIDGrp_NoSecurityAltID_156.insert(SecurityAltID_156.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_156("STRING_945394633");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_156);
      SecAltIDGrp_NoSecurityAltID_156.insert(SecurityAltIDSource_156.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_156);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_157;
      FIX::SecurityAltID SecurityAltID_157("STRING_948651238");
      noSecurityAltID_0_1_2.set(SecurityAltID_157);
      SecAltIDGrp_NoSecurityAltID_157.insert(SecurityAltID_157.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_157("STRING_1445293906");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_157);
      SecAltIDGrp_NoSecurityAltID_157.insert(SecurityAltIDSource_157.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_157);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_166;
    FIX::SecurityXML SecurityXML_167("XMLDATA_1294726325");
    noRelatedSym_0_0.set(SecurityXML_167);
    FIX::SecurityXMLLen SecurityXMLLen_83(512570624);
    noRelatedSym_0_0.set(SecurityXMLLen_83);
    FIX::SecurityXMLSchema SecurityXMLSchema_83("STRING_1275438822");
    noRelatedSym_0_0.set(SecurityXMLSchema_83);
    SecurityXML_166.insert(SecurityXMLSchema_83.getString());
    all_values.push_back(SecurityXML_166);
    all_compo_names.insert("SecurityXML");

    // InstrumentExtension
    multiset<string> InstrumentExtension_12;
    FIX::DeliveryForm DeliveryForm_12(2);
    noRelatedSym_0_0.set(DeliveryForm_12);
    InstrumentExtension_12.insert(DeliveryForm_12.getString());
    FIX::PctAtRisk PctAtRisk_12;
    PctAtRisk_12.setString("78.090000");
    noRelatedSym_0_0.set(PctAtRisk_12);
    InstrumentExtension_12.insert(PctAtRisk_12.getString());
    all_values.push_back(InstrumentExtension_12);
    all_compo_names.insert("InstrumentExtension");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_23;
      FIX::InstrAttribType InstrAttribType_23(25);
      noInstrAttrib_0_1_0.set(InstrAttribType_23);
      AttrbGrp_NoInstrAttrib_23.insert(InstrAttribType_23.getString());
      FIX::InstrAttribValue InstrAttribValue_23("STRING_114844768");
      noInstrAttrib_0_1_0.set(InstrAttribValue_23);
      AttrbGrp_NoInstrAttrib_23.insert(InstrAttribValue_23.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_23);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_12;
    FIX::ExpirationCycle ExpirationCycle_13(1);
    noRelatedSym_0_0.set(ExpirationCycle_13);
    BaseTradingRules_12.insert(ExpirationCycle_13.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_12(3);
    noRelatedSym_0_0.set(ImpliedMarketIndicator_12);
    BaseTradingRules_12.insert(ImpliedMarketIndicator_12.getString());
    FIX::MaxPriceVariation MaxPriceVariation_12;
    MaxPriceVariation_12.setString("8553200");
    noRelatedSym_0_0.set(MaxPriceVariation_12);
    BaseTradingRules_12.insert(MaxPriceVariation_12.getString());
    FIX::MaxTradeVol MaxTradeVol_12;
    MaxTradeVol_12.setString("343693");
    noRelatedSym_0_0.set(MaxTradeVol_12);
    BaseTradingRules_12.insert(MaxTradeVol_12.getString());
    FIX::MinTradeVol MinTradeVol_12;
    MinTradeVol_12.setString("18345465");
    noRelatedSym_0_0.set(MinTradeVol_12);
    BaseTradingRules_12.insert(MinTradeVol_12.getString());
    FIX::MultilegModel MultilegModel_14(1);
    noRelatedSym_0_0.set(MultilegModel_14);
    BaseTradingRules_12.insert(MultilegModel_14.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_14(4);
    noRelatedSym_0_0.set(MultilegPriceMethod_14);
    BaseTradingRules_12.insert(MultilegPriceMethod_14.getString());
    FIX::PriceType PriceType_46(18);
    noRelatedSym_0_0.set(PriceType_46);
    BaseTradingRules_12.insert(PriceType_46.getString());
    FIX::RoundLot RoundLot_12;
    RoundLot_12.setString("5175491");
    noRelatedSym_0_0.set(RoundLot_12);
    BaseTradingRules_12.insert(RoundLot_12.getString());
    FIX::TradingCurrency TradingCurrency_12("CHF");
    noRelatedSym_0_0.set(TradingCurrency_12);
    BaseTradingRules_12.insert(TradingCurrency_12.getString());
    all_values.push_back(BaseTradingRules_12);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_24;
      FIX::LotType LotType_28('1');
      noLotTypeRules_0_1_0.set(LotType_28);
      LotTypeRules_NoLotTypeRules_24.insert(LotType_28.getString());
      FIX::MinLotSize MinLotSize_24;
      MinLotSize_24.setString("11601717");
      noLotTypeRules_0_1_0.set(MinLotSize_24);
      LotTypeRules_NoLotTypeRules_24.insert(MinLotSize_24.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_24);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_25;
      FIX::LotType LotType_29('3');
      noLotTypeRules_0_1_1.set(LotType_29);
      LotTypeRules_NoLotTypeRules_25.insert(LotType_29.getString());
      FIX::MinLotSize MinLotSize_25;
      MinLotSize_25.setString("145699");
      noLotTypeRules_0_1_1.set(MinLotSize_25);
      LotTypeRules_NoLotTypeRules_25.insert(MinLotSize_25.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_25);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_26;
      FIX::LotType LotType_30('4');
      noLotTypeRules_0_1_2.set(LotType_30);
      LotTypeRules_NoLotTypeRules_26.insert(LotType_30.getString());
      FIX::MinLotSize MinLotSize_26;
      MinLotSize_26.setString("12306527");
      noLotTypeRules_0_1_2.set(MinLotSize_26);
      LotTypeRules_NoLotTypeRules_26.insert(MinLotSize_26.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_26);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_12;
    FIX::HighLimitPrice HighLimitPrice_12;
    HighLimitPrice_12.setString("2462644");
    noRelatedSym_0_0.set(HighLimitPrice_12);
    PriceLimits_12.insert(HighLimitPrice_12.getString());
    FIX::LowLimitPrice LowLimitPrice_12;
    LowLimitPrice_12.setString("3243074");
    noRelatedSym_0_0.set(LowLimitPrice_12);
    PriceLimits_12.insert(LowLimitPrice_12.getString());
    FIX::PriceLimitType PriceLimitType_12(0);
    noRelatedSym_0_0.set(PriceLimitType_12);
    PriceLimits_12.insert(PriceLimitType_12.getString());
    FIX::TradingReferencePrice TradingReferencePrice_12;
    TradingReferencePrice_12.setString("11949156");
    noRelatedSym_0_0.set(TradingReferencePrice_12);
    PriceLimits_12.insert(TradingReferencePrice_12.getString());
    all_values.push_back(PriceLimits_12);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_25;
      FIX::EndTickPriceRange EndTickPriceRange_25;
      EndTickPriceRange_25.setString("13232901");
      noTickRules_0_1_0.set(EndTickPriceRange_25);
      TickRules_NoTickRules_25.insert(EndTickPriceRange_25.getString());
      FIX::StartTickPriceRange StartTickPriceRange_25;
      StartTickPriceRange_25.setString("17074862");
      noTickRules_0_1_0.set(StartTickPriceRange_25);
      TickRules_NoTickRules_25.insert(StartTickPriceRange_25.getString());
      FIX::TickIncrement TickIncrement_25;
      TickIncrement_25.setString("8975565");
      noTickRules_0_1_0.set(TickIncrement_25);
      TickRules_NoTickRules_25.insert(TickIncrement_25.getString());
      FIX::TickRuleType TickRuleType_25(3);
      noTickRules_0_1_0.set(TickRuleType_25);
      TickRules_NoTickRules_25.insert(TickRuleType_25.getString());
      all_values.push_back(TickRules_NoTickRules_25);
      all_compo_names.insert("TickRules.NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_26;
      FIX::EndTickPriceRange EndTickPriceRange_26;
      EndTickPriceRange_26.setString("9221404");
      noTickRules_0_1_1.set(EndTickPriceRange_26);
      TickRules_NoTickRules_26.insert(EndTickPriceRange_26.getString());
      FIX::StartTickPriceRange StartTickPriceRange_26;
      StartTickPriceRange_26.setString("3704922");
      noTickRules_0_1_1.set(StartTickPriceRange_26);
      TickRules_NoTickRules_26.insert(StartTickPriceRange_26.getString());
      FIX::TickIncrement TickIncrement_26;
      TickIncrement_26.setString("9794715");
      noTickRules_0_1_1.set(TickIncrement_26);
      TickRules_NoTickRules_26.insert(TickIncrement_26.getString());
      FIX::TickRuleType TickRuleType_26(0);
      noTickRules_0_1_1.set(TickRuleType_26);
      TickRules_NoTickRules_26.insert(TickRuleType_26.getString());
      all_values.push_back(TickRules_NoTickRules_26);
      all_compo_names.insert("TickRules.NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_27;
      FIX::EndTickPriceRange EndTickPriceRange_27;
      EndTickPriceRange_27.setString("20937622");
      noTickRules_0_1_2.set(EndTickPriceRange_27);
      TickRules_NoTickRules_27.insert(EndTickPriceRange_27.getString());
      FIX::StartTickPriceRange StartTickPriceRange_27;
      StartTickPriceRange_27.setString("8648142");
      noTickRules_0_1_2.set(StartTickPriceRange_27);
      TickRules_NoTickRules_27.insert(StartTickPriceRange_27.getString());
      FIX::TickIncrement TickIncrement_27;
      TickIncrement_27.setString("18923053");
      noTickRules_0_1_2.set(TickIncrement_27);
      TickRules_NoTickRules_27.insert(TickIncrement_27.getString());
      FIX::TickRuleType TickRuleType_27(3);
      noTickRules_0_1_2.set(TickRuleType_27);
      TickRules_NoTickRules_27.insert(TickRuleType_27.getString());
      all_values.push_back(TickRules_NoTickRules_27);
      all_compo_names.insert("TickRules.NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_22;
      FIX::NestedInstrAttribType NestedInstrAttribType_22(754006518);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_22);
      NestedInstrumentAttribute_NoNestedInstrAttrib_22.insert(NestedInstrAttribType_22.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_22("STRING_1067510265");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_22);
      NestedInstrumentAttribute_NoNestedInstrAttrib_22.insert(NestedInstrAttribValue_22.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_22);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_20;
      FIX::TradingSessionID TradingSessionID_102("STRING_1");
      noTradingSessionRules_0_1_0.set(TradingSessionID_102);
      TradingSessionRulesGrp_NoTradingSessionRules_20.insert(TradingSessionID_102.getString());
      FIX::TradingSessionSubID TradingSessionSubID_102("STRING_4");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_102);
      TradingSessionRulesGrp_NoTradingSessionRules_20.insert(TradingSessionSubID_102.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_20);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_41;
        FIX::ExecInstValue ExecInstValue_41('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_41);
        ExecInstRules_NoExecInstRules_41.insert(ExecInstValue_41.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_41);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_42;
        FIX::ExecInstValue ExecInstValue_42('1');
        noExecInstRules_0_0_2_1.set(ExecInstValue_42);
        ExecInstRules_NoExecInstRules_42.insert(ExecInstValue_42.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_42);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_37;
        FIX::MDBookType MDBookType_39(1);
        noMDFeedTypes_0_0_2_0.set(MDBookType_39);
        MarketDataFeedTypes_NoMDFeedTypes_37.insert(MDBookType_39.getString());
        FIX::MDFeedType MDFeedType_39("STRING_1993804615");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_39);
        MarketDataFeedTypes_NoMDFeedTypes_37.insert(MDFeedType_39.getString());
        FIX::MarketDepth MarketDepth_40(681642393);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_40);
        MarketDataFeedTypes_NoMDFeedTypes_37.insert(MarketDepth_40.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_37);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_38;
        FIX::MDBookType MDBookType_40(3);
        noMDFeedTypes_0_0_2_1.set(MDBookType_40);
        MarketDataFeedTypes_NoMDFeedTypes_38.insert(MDBookType_40.getString());
        FIX::MDFeedType MDFeedType_40("STRING_92585401");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_40);
        MarketDataFeedTypes_NoMDFeedTypes_38.insert(MDFeedType_40.getString());
        FIX::MarketDepth MarketDepth_41(1005949852);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_41);
        MarketDataFeedTypes_NoMDFeedTypes_38.insert(MarketDepth_41.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_38);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_39;
        FIX::MDBookType MDBookType_41(3);
        noMDFeedTypes_0_0_2_2.set(MDBookType_41);
        MarketDataFeedTypes_NoMDFeedTypes_39.insert(MDBookType_41.getString());
        FIX::MDFeedType MDFeedType_41("STRING_1287501073");
        noMDFeedTypes_0_0_2_2.set(MDFeedType_41);
        MarketDataFeedTypes_NoMDFeedTypes_39.insert(MDFeedType_41.getString());
        FIX::MarketDepth MarketDepth_42(628067570);
        noMDFeedTypes_0_0_2_2.set(MarketDepth_42);
        MarketDataFeedTypes_NoMDFeedTypes_39.insert(MarketDepth_42.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_39);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_41;
        FIX::MatchAlgorithm MatchAlgorithm_41("STRING_847503721");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_41);
        MatchRules_NoMatchRules_41.insert(MatchAlgorithm_41.getString());
        FIX::MatchType MatchType_46("STRING_M4");
        noMatchRules_0_0_2_0.set(MatchType_46);
        MatchRules_NoMatchRules_41.insert(MatchType_46.getString());
        all_values.push_back(MatchRules_NoMatchRules_41);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_42;
        FIX::MatchAlgorithm MatchAlgorithm_42("STRING_3031176");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_42);
        MatchRules_NoMatchRules_42.insert(MatchAlgorithm_42.getString());
        FIX::MatchType MatchType_47("STRING_A5");
        noMatchRules_0_0_2_1.set(MatchType_47);
        MatchRules_NoMatchRules_42.insert(MatchType_47.getString());
        all_values.push_back(MatchRules_NoMatchRules_42);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_43;
        FIX::MatchAlgorithm MatchAlgorithm_43("STRING_1896116401");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_43);
        MatchRules_NoMatchRules_43.insert(MatchAlgorithm_43.getString());
        FIX::MatchType MatchType_48("STRING_S5");
        noMatchRules_0_0_2_2.set(MatchType_48);
        MatchRules_NoMatchRules_43.insert(MatchType_48.getString());
        all_values.push_back(MatchRules_NoMatchRules_43);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_41;
        FIX::OrdType OrdType_74('H');
        noOrdTypeRules_0_0_2_0.set(OrdType_74);
        OrdTypeRules_NoOrdTypeRules_41.insert(OrdType_74.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_41);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_42;
        FIX::TimeInForce TimeInForce_55('2');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_55);
        TimeInForceRules_NoTimeInForceRules_42.insert(TimeInForce_55.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_42);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_43;
        FIX::TimeInForce TimeInForce_56('7');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_56);
        TimeInForceRules_NoTimeInForceRules_43.insert(TimeInForce_56.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_43);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_21;
      FIX::TradingSessionID TradingSessionID_103("STRING_6");
      noTradingSessionRules_0_1_1.set(TradingSessionID_103);
      TradingSessionRulesGrp_NoTradingSessionRules_21.insert(TradingSessionID_103.getString());
      FIX::TradingSessionSubID TradingSessionSubID_103("STRING_2");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_103);
      TradingSessionRulesGrp_NoTradingSessionRules_21.insert(TradingSessionSubID_103.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_21);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_43;
        FIX::ExecInstValue ExecInstValue_43('1');
        noExecInstRules_0_1_2_0.set(ExecInstValue_43);
        ExecInstRules_NoExecInstRules_43.insert(ExecInstValue_43.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_43);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_44;
        FIX::ExecInstValue ExecInstValue_44('2');
        noExecInstRules_0_1_2_1.set(ExecInstValue_44);
        ExecInstRules_NoExecInstRules_44.insert(ExecInstValue_44.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_44);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_45;
        FIX::ExecInstValue ExecInstValue_45('9');
        noExecInstRules_0_1_2_2.set(ExecInstValue_45);
        ExecInstRules_NoExecInstRules_45.insert(ExecInstValue_45.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_45);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_40;
        FIX::MDBookType MDBookType_42(2);
        noMDFeedTypes_0_1_2_0.set(MDBookType_42);
        MarketDataFeedTypes_NoMDFeedTypes_40.insert(MDBookType_42.getString());
        FIX::MDFeedType MDFeedType_42("STRING_742503380");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_42);
        MarketDataFeedTypes_NoMDFeedTypes_40.insert(MDFeedType_42.getString());
        FIX::MarketDepth MarketDepth_43(2025235757);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_43);
        MarketDataFeedTypes_NoMDFeedTypes_40.insert(MarketDepth_43.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_40);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_41;
        FIX::MDBookType MDBookType_43(3);
        noMDFeedTypes_0_1_2_1.set(MDBookType_43);
        MarketDataFeedTypes_NoMDFeedTypes_41.insert(MDBookType_43.getString());
        FIX::MDFeedType MDFeedType_43("STRING_588824347");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_43);
        MarketDataFeedTypes_NoMDFeedTypes_41.insert(MDFeedType_43.getString());
        FIX::MarketDepth MarketDepth_44(559394503);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_44);
        MarketDataFeedTypes_NoMDFeedTypes_41.insert(MarketDepth_44.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_41);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_42;
        FIX::MDBookType MDBookType_44(3);
        noMDFeedTypes_0_1_2_2.set(MDBookType_44);
        MarketDataFeedTypes_NoMDFeedTypes_42.insert(MDBookType_44.getString());
        FIX::MDFeedType MDFeedType_44("STRING_681409748");
        noMDFeedTypes_0_1_2_2.set(MDFeedType_44);
        MarketDataFeedTypes_NoMDFeedTypes_42.insert(MDFeedType_44.getString());
        FIX::MarketDepth MarketDepth_45(1565344355);
        noMDFeedTypes_0_1_2_2.set(MarketDepth_45);
        MarketDataFeedTypes_NoMDFeedTypes_42.insert(MarketDepth_45.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_42);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_44;
        FIX::MatchAlgorithm MatchAlgorithm_44("STRING_1968910821");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_44);
        MatchRules_NoMatchRules_44.insert(MatchAlgorithm_44.getString());
        FIX::MatchType MatchType_49("STRING_6");
        noMatchRules_0_1_2_0.set(MatchType_49);
        MatchRules_NoMatchRules_44.insert(MatchType_49.getString());
        all_values.push_back(MatchRules_NoMatchRules_44);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_45;
        FIX::MatchAlgorithm MatchAlgorithm_45("STRING_1988110141");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_45);
        MatchRules_NoMatchRules_45.insert(MatchAlgorithm_45.getString());
        FIX::MatchType MatchType_50("STRING_M3");
        noMatchRules_0_1_2_1.set(MatchType_50);
        MatchRules_NoMatchRules_45.insert(MatchType_50.getString());
        all_values.push_back(MatchRules_NoMatchRules_45);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_42;
        FIX::OrdType OrdType_75('E');
        noOrdTypeRules_0_1_2_0.set(OrdType_75);
        OrdTypeRules_NoOrdTypeRules_42.insert(OrdType_75.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_42);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_43;
        FIX::OrdType OrdType_76('9');
        noOrdTypeRules_0_1_2_1.set(OrdType_76);
        OrdTypeRules_NoOrdTypeRules_43.insert(OrdType_76.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_43);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_44;
        FIX::OrdType OrdType_77('5');
        noOrdTypeRules_0_1_2_2.set(OrdType_77);
        OrdTypeRules_NoOrdTypeRules_44.insert(OrdType_77.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_44);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_44;
        FIX::TimeInForce TimeInForce_57('0');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_57);
        TimeInForceRules_NoTimeInForceRules_44.insert(TimeInForce_57.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_44);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_30;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_30("GBP");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurveCurrency_30.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_30("STRING_LIBOR");
    noRelatedSym_0_0.set(BenchmarkCurveName_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurveName_30.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_30("STRING_690655934");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkCurvePoint_30.getString());
    FIX::BenchmarkPrice BenchmarkPrice_30;
    BenchmarkPrice_30.setString("7777041");
    noRelatedSym_0_0.set(BenchmarkPrice_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkPrice_30.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_30(364694916);
    noRelatedSym_0_0.set(BenchmarkPriceType_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkPriceType_30.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_30("STRING_1433725609");
    noRelatedSym_0_0.set(BenchmarkSecurityID_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkSecurityID_30.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_30("STRING_1895425655");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_30);
    SpreadOrBenchmarkCurveData_30.insert(BenchmarkSecurityIDSource_30.getString());
    FIX::Spread Spread_30;
    Spread_30.setString("6467409");
    noRelatedSym_0_0.set(Spread_30);
    SpreadOrBenchmarkCurveData_30.insert(Spread_30.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_30);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_51;
      FIX::StipulationType StipulationType_51("STRING_BROKERCREDIT");
      noStipulations_0_1_0.set(StipulationType_51);
      Stipulations_NoStipulations_51.insert(StipulationType_51.getString());
      FIX::StipulationValue StipulationValue_51("STRING_171272602");
      noStipulations_0_1_0.set(StipulationValue_51);
      Stipulations_NoStipulations_51.insert(StipulationValue_51.getString());
      all_values.push_back(Stipulations_NoStipulations_51);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_18;
      FIX::EndStrikePxRange EndStrikePxRange_18;
      EndStrikePxRange_18.setString("16908287");
      noStrikeRules_0_1_0.set(EndStrikePxRange_18);
      StrikeRules_NoStrikeRules_18.insert(EndStrikePxRange_18.getString());
      FIX::StartStrikePxRange StartStrikePxRange_18;
      StartStrikePxRange_18.setString("17279594");
      noStrikeRules_0_1_0.set(StartStrikePxRange_18);
      StrikeRules_NoStrikeRules_18.insert(StartStrikePxRange_18.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_18(1528322091);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_18);
      StrikeRules_NoStrikeRules_18.insert(StrikeExerciseStyle_18.getString());
      FIX::StrikeIncrement StrikeIncrement_18;
      StrikeIncrement_18.setString("1027395");
      noStrikeRules_0_1_0.set(StrikeIncrement_18);
      StrikeRules_NoStrikeRules_18.insert(StrikeIncrement_18.getString());
      FIX::StrikeRuleID StrikeRuleID_18("STRING_105003322");
      noStrikeRules_0_1_0.set(StrikeRuleID_18);
      StrikeRules_NoStrikeRules_18.insert(StrikeRuleID_18.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_18);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_38;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_38("MONTHYEAR_1668083939");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_38);
        MaturityRules_NoMaturityRules_38.insert(EndMaturityMonthYear_38.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_38(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityMonthYearFormat_38.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_38(2031159012);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityMonthYearIncrement_38.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_38(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityMonthYearIncrementUnits_38.getString());
        FIX::MaturityRuleID MaturityRuleID_38("STRING_1614045415");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_38);
        MaturityRules_NoMaturityRules_38.insert(MaturityRuleID_38.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_38("MONTHYEAR_552606258");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_38);
        MaturityRules_NoMaturityRules_38.insert(StartMaturityMonthYear_38.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_38);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_19;
      FIX::EndStrikePxRange EndStrikePxRange_19;
      EndStrikePxRange_19.setString("11380809");
      noStrikeRules_0_1_1.set(EndStrikePxRange_19);
      StrikeRules_NoStrikeRules_19.insert(EndStrikePxRange_19.getString());
      FIX::StartStrikePxRange StartStrikePxRange_19;
      StartStrikePxRange_19.setString("14577030");
      noStrikeRules_0_1_1.set(StartStrikePxRange_19);
      StrikeRules_NoStrikeRules_19.insert(StartStrikePxRange_19.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_19(843697683);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_19);
      StrikeRules_NoStrikeRules_19.insert(StrikeExerciseStyle_19.getString());
      FIX::StrikeIncrement StrikeIncrement_19;
      StrikeIncrement_19.setString("3107824");
      noStrikeRules_0_1_1.set(StrikeIncrement_19);
      StrikeRules_NoStrikeRules_19.insert(StrikeIncrement_19.getString());
      FIX::StrikeRuleID StrikeRuleID_19("STRING_136379791");
      noStrikeRules_0_1_1.set(StrikeRuleID_19);
      StrikeRules_NoStrikeRules_19.insert(StrikeRuleID_19.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_19);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_39;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_39("MONTHYEAR_1325878972");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_39);
        MaturityRules_NoMaturityRules_39.insert(EndMaturityMonthYear_39.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_39(0);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityMonthYearFormat_39.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_39(1000655828);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityMonthYearIncrement_39.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_39(2);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityMonthYearIncrementUnits_39.getString());
        FIX::MaturityRuleID MaturityRuleID_39("STRING_1440077555");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_39);
        MaturityRules_NoMaturityRules_39.insert(MaturityRuleID_39.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_39("MONTHYEAR_1365350744");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_39);
        MaturityRules_NoMaturityRules_39.insert(StartMaturityMonthYear_39.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_39);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_40;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_40("MONTHYEAR_1302776867");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_40);
        MaturityRules_NoMaturityRules_40.insert(EndMaturityMonthYear_40.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_40(2);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityMonthYearFormat_40.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_40(2012091658);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityMonthYearIncrement_40.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_40(3);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityMonthYearIncrementUnits_40.getString());
        FIX::MaturityRuleID MaturityRuleID_40("STRING_853612533");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_40);
        MaturityRules_NoMaturityRules_40.insert(MaturityRuleID_40.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_40("MONTHYEAR_35880612");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_40);
        MaturityRules_NoMaturityRules_40.insert(StartMaturityMonthYear_40.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_40);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_41;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_41("MONTHYEAR_291785328");
        noMaturityRules_0_1_2_2.set(EndMaturityMonthYear_41);
        MaturityRules_NoMaturityRules_41.insert(EndMaturityMonthYear_41.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_41(2);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearFormat_41);
        MaturityRules_NoMaturityRules_41.insert(MaturityMonthYearFormat_41.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_41(1763840067);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrement_41);
        MaturityRules_NoMaturityRules_41.insert(MaturityMonthYearIncrement_41.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_41(3);
        noMaturityRules_0_1_2_2.set(MaturityMonthYearIncrementUnits_41);
        MaturityRules_NoMaturityRules_41.insert(MaturityMonthYearIncrementUnits_41.getString());
        FIX::MaturityRuleID MaturityRuleID_41("STRING_499697197");
        noMaturityRules_0_1_2_2.set(MaturityRuleID_41);
        MaturityRules_NoMaturityRules_41.insert(MaturityRuleID_41.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_41("MONTHYEAR_1868843389");
        noMaturityRules_0_1_2_2.set(StartMaturityMonthYear_41);
        MaturityRules_NoMaturityRules_41.insert(StartMaturityMonthYear_41.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_41);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_20;
      FIX::EndStrikePxRange EndStrikePxRange_20;
      EndStrikePxRange_20.setString("18823556");
      noStrikeRules_0_1_2.set(EndStrikePxRange_20);
      StrikeRules_NoStrikeRules_20.insert(EndStrikePxRange_20.getString());
      FIX::StartStrikePxRange StartStrikePxRange_20;
      StartStrikePxRange_20.setString("202974");
      noStrikeRules_0_1_2.set(StartStrikePxRange_20);
      StrikeRules_NoStrikeRules_20.insert(StartStrikePxRange_20.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_20(1494778664);
      noStrikeRules_0_1_2.set(StrikeExerciseStyle_20);
      StrikeRules_NoStrikeRules_20.insert(StrikeExerciseStyle_20.getString());
      FIX::StrikeIncrement StrikeIncrement_20;
      StrikeIncrement_20.setString("17660309");
      noStrikeRules_0_1_2.set(StrikeIncrement_20);
      StrikeRules_NoStrikeRules_20.insert(StrikeIncrement_20.getString());
      FIX::StrikeRuleID StrikeRuleID_20("STRING_1734309705");
      noStrikeRules_0_1_2.set(StrikeRuleID_20);
      StrikeRules_NoStrikeRules_20.insert(StrikeRuleID_20.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_20);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_42;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_42("MONTHYEAR_171153586");
        noMaturityRules_0_2_2_0.set(EndMaturityMonthYear_42);
        MaturityRules_NoMaturityRules_42.insert(EndMaturityMonthYear_42.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_42(2);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearFormat_42);
        MaturityRules_NoMaturityRules_42.insert(MaturityMonthYearFormat_42.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_42(271559868);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrement_42);
        MaturityRules_NoMaturityRules_42.insert(MaturityMonthYearIncrement_42.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_42(1);
        noMaturityRules_0_2_2_0.set(MaturityMonthYearIncrementUnits_42);
        MaturityRules_NoMaturityRules_42.insert(MaturityMonthYearIncrementUnits_42.getString());
        FIX::MaturityRuleID MaturityRuleID_42("STRING_1035689460");
        noMaturityRules_0_2_2_0.set(MaturityRuleID_42);
        MaturityRules_NoMaturityRules_42.insert(MaturityRuleID_42.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_42("MONTHYEAR_407939659");
        noMaturityRules_0_2_2_0.set(StartMaturityMonthYear_42);
        MaturityRules_NoMaturityRules_42.insert(StartMaturityMonthYear_42.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_42);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_43;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_43("MONTHYEAR_661302484");
        noMaturityRules_0_2_2_1.set(EndMaturityMonthYear_43);
        MaturityRules_NoMaturityRules_43.insert(EndMaturityMonthYear_43.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_43(2);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearFormat_43);
        MaturityRules_NoMaturityRules_43.insert(MaturityMonthYearFormat_43.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_43(1070313101);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrement_43);
        MaturityRules_NoMaturityRules_43.insert(MaturityMonthYearIncrement_43.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_43(1);
        noMaturityRules_0_2_2_1.set(MaturityMonthYearIncrementUnits_43);
        MaturityRules_NoMaturityRules_43.insert(MaturityMonthYearIncrementUnits_43.getString());
        FIX::MaturityRuleID MaturityRuleID_43("STRING_83136042");
        noMaturityRules_0_2_2_1.set(MaturityRuleID_43);
        MaturityRules_NoMaturityRules_43.insert(MaturityRuleID_43.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_43("MONTHYEAR_362907008");
        noMaturityRules_0_2_2_1.set(StartMaturityMonthYear_43);
        MaturityRules_NoMaturityRules_43.insert(StartMaturityMonthYear_43.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_43);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_2.addGroup(noMaturityRules_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_130;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_130("DATA_1385912909");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_130);
      UnderlyingInstrument_130.insert(EncodedUnderlyingIssuer_130.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_130(1550926570);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_130);
      UnderlyingInstrument_130.insert(EncodedUnderlyingIssuerLen_130.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_130("DATA_744433419");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_130);
      UnderlyingInstrument_130.insert(EncodedUnderlyingSecurityDesc_130.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_130(738200492);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_130);
      UnderlyingInstrument_130.insert(EncodedUnderlyingSecurityDescLen_130.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_130;
      UnderlyingAdjustedQuantity_130.setString("2570554");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_130);
      UnderlyingInstrument_130.insert(UnderlyingAdjustedQuantity_130.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_130;
      UnderlyingAllocationPercent_130.setString("40.310000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_130);
      UnderlyingInstrument_130.insert(UnderlyingAllocationPercent_130.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_130;
      UnderlyingAttachmentPoint_130.setString("58.200000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_130);
      UnderlyingInstrument_130.insert(UnderlyingAttachmentPoint_130.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_130("STRING_654013070");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_130);
      UnderlyingInstrument_130.insert(UnderlyingCFICode_130.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_130("STRING_396670451");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_130);
      UnderlyingInstrument_130.insert(UnderlyingCPProgram_130.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_130("STRING_702609592");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_130);
      UnderlyingInstrument_130.insert(UnderlyingCPRegType_130.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_130;
      UnderlyingCapValue_130.setString("11537102");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_130);
      UnderlyingInstrument_130.insert(UnderlyingCapValue_130.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_130;
      UnderlyingCashAmount_130.setString("1180301");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_130);
      UnderlyingInstrument_130.insert(UnderlyingCashAmount_130.getString());
      FIX::UnderlyingCashType UnderlyingCashType_130("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_130);
      UnderlyingInstrument_130.insert(UnderlyingCashType_130.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_130;
      UnderlyingContractMultiplier_130.setString("11740077");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_130);
      UnderlyingInstrument_130.insert(UnderlyingContractMultiplier_130.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_130(1612808856);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_130);
      UnderlyingInstrument_130.insert(UnderlyingContractMultiplierUnit_130.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_130("COUNTRY_56028882");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_130);
      UnderlyingInstrument_130.insert(UnderlyingCountryOfIssue_130.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_130("LOCALMKTDATE_760833813");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_130);
      UnderlyingInstrument_130.insert(UnderlyingCouponPaymentDate_130.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_130;
      UnderlyingCouponRate_130.setString("56.400000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_130);
      UnderlyingInstrument_130.insert(UnderlyingCouponRate_130.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_130("STRING_227182468");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_130);
      UnderlyingInstrument_130.insert(UnderlyingCreditRating_130.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_130("USD");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_130);
      UnderlyingInstrument_130.insert(UnderlyingCurrency_130.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_130;
      UnderlyingCurrentValue_130.setString("12420337");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_130);
      UnderlyingInstrument_130.insert(UnderlyingCurrentValue_130.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_130;
      UnderlyingDetachmentPoint_130.setString("66.370000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_130);
      UnderlyingInstrument_130.insert(UnderlyingDetachmentPoint_130.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_130;
      UnderlyingDirtyPrice_130.setString("11061651");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_130);
      UnderlyingInstrument_130.insert(UnderlyingDirtyPrice_130.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_130;
      UnderlyingEndPrice_130.setString("19033362");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_130);
      UnderlyingInstrument_130.insert(UnderlyingEndPrice_130.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_130;
      UnderlyingEndValue_130.setString("5880314");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_130);
      UnderlyingInstrument_130.insert(UnderlyingEndValue_130.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_130(28994620);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_130);
      UnderlyingInstrument_130.insert(UnderlyingExerciseStyle_130.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_130;
      UnderlyingFXRate_130.setString("14178108");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_130);
      UnderlyingInstrument_130.insert(UnderlyingFXRate_130.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_130('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_130);
      UnderlyingInstrument_130.insert(UnderlyingFXRateCalc_130.getString());
      FIX::UnderlyingFactor UnderlyingFactor_130;
      UnderlyingFactor_130.setString("3919016");
      noUnderlyings_0_1_0.set(UnderlyingFactor_130);
      UnderlyingInstrument_130.insert(UnderlyingFactor_130.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_130(150152648);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_130);
      UnderlyingInstrument_130.insert(UnderlyingFlowScheduleType_130.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_130("STRING_2057080372");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_130);
      UnderlyingInstrument_130.insert(UnderlyingInstrRegistry_130.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_130("LOCALMKTDATE_1942828199");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_130);
      UnderlyingInstrument_130.insert(UnderlyingIssueDate_130.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_130("STRING_894586068");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_130);
      UnderlyingInstrument_130.insert(UnderlyingIssuer_130.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_130("STRING_647797217");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_130);
      UnderlyingInstrument_130.insert(UnderlyingLocaleOfIssue_130.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_130("LOCALMKTDATE_52400007");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_130);
      UnderlyingInstrument_130.insert(UnderlyingMaturityDate_130.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_130("MONTHYEAR_1674900099");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_130);
      UnderlyingInstrument_130.insert(UnderlyingMaturityMonthYear_130.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_130("TZTIMEONLY_1677783037");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_130);
      UnderlyingInstrument_130.insert(UnderlyingMaturityTime_130.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_130;
      UnderlyingNotionalPercentageOutstanding_130.setString("30.770000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_130);
      UnderlyingInstrument_130.insert(UnderlyingNotionalPercentageOutstanding_130.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_130('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_130);
      UnderlyingInstrument_130.insert(UnderlyingOptAttribute_130.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_130;
      UnderlyingOriginalNotionalPercentageOutstanding_130.setString("89.810000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_130);
      UnderlyingInstrument_130.insert(UnderlyingOriginalNotionalPercentageOutstanding_130.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_130("STRING_1860123344");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_130);
      UnderlyingInstrument_130.insert(UnderlyingPriceUnitOfMeasure_130.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_130;
      UnderlyingPriceUnitOfMeasureQty_130.setString("421170");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_130);
      UnderlyingInstrument_130.insert(UnderlyingPriceUnitOfMeasureQty_130.getString());
      FIX::UnderlyingProduct UnderlyingProduct_130(670390536);
      noUnderlyings_0_1_0.set(UnderlyingProduct_130);
      UnderlyingInstrument_130.insert(UnderlyingProduct_130.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_130(886647452);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_130);
      UnderlyingInstrument_130.insert(UnderlyingPutOrCall_130.getString());
      FIX::UnderlyingPx UnderlyingPx_130;
      UnderlyingPx_130.setString("16549259");
      noUnderlyings_0_1_0.set(UnderlyingPx_130);
      UnderlyingInstrument_130.insert(UnderlyingPx_130.getString());
      FIX::UnderlyingQty UnderlyingQty_130;
      UnderlyingQty_130.setString("7264194");
      noUnderlyings_0_1_0.set(UnderlyingQty_130);
      UnderlyingInstrument_130.insert(UnderlyingQty_130.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_130("LOCALMKTDATE_1647481265");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_130);
      UnderlyingInstrument_130.insert(UnderlyingRedemptionDate_130.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_130("STRING_2081591591");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_130);
      UnderlyingInstrument_130.insert(UnderlyingRepoCollateralSecurityType_130.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_130;
      UnderlyingRepurchaseRate_130.setString("18.870000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_130);
      UnderlyingInstrument_130.insert(UnderlyingRepurchaseRate_130.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_130(985738443);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_130);
      UnderlyingInstrument_130.insert(UnderlyingRepurchaseTerm_130.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_130("STRING_632333451");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_130);
      UnderlyingInstrument_130.insert(UnderlyingRestructuringType_130.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_130("STRING_48151977");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_130);
      UnderlyingInstrument_130.insert(UnderlyingSecurityDesc_130.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_130("EXCHANGE_1359685080");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_130);
      UnderlyingInstrument_130.insert(UnderlyingSecurityExchange_130.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_130("STRING_1738498619");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_130);
      UnderlyingInstrument_130.insert(UnderlyingSecurityID_130.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_130("STRING_1951488199");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_130);
      UnderlyingInstrument_130.insert(UnderlyingSecurityIDSource_130.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_130("STRING_1947716502");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_130);
      UnderlyingInstrument_130.insert(UnderlyingSecuritySubType_130.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_130("STRING_1767493239");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_130);
      UnderlyingInstrument_130.insert(UnderlyingSecurityType_130.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_130("STRING_1221815438");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_130);
      UnderlyingInstrument_130.insert(UnderlyingSeniority_130.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_130("STRING_471400317");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_130);
      UnderlyingInstrument_130.insert(UnderlyingSettlMethod_130.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_130(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_130);
      UnderlyingInstrument_130.insert(UnderlyingSettlementType_130.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_130;
      UnderlyingStartValue_130.setString("13719680");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_130);
      UnderlyingInstrument_130.insert(UnderlyingStartValue_130.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_130("STRING_380997042");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_130);
      UnderlyingInstrument_130.insert(UnderlyingStateOrProvinceOfIssue_130.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_130("GBP");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_130);
      UnderlyingInstrument_130.insert(UnderlyingStrikeCurrency_130.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_130;
      UnderlyingStrikePrice_130.setString("10287942");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_130);
      UnderlyingInstrument_130.insert(UnderlyingStrikePrice_130.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_130("STRING_2007139426");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_130);
      UnderlyingInstrument_130.insert(UnderlyingSymbol_130.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_130("STRING_1793970606");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_130);
      UnderlyingInstrument_130.insert(UnderlyingSymbolSfx_130.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_130("STRING_559093648");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_130);
      UnderlyingInstrument_130.insert(UnderlyingTimeUnit_130.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_130("STRING_566068855");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_130);
      UnderlyingInstrument_130.insert(UnderlyingUnitOfMeasure_130.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_130;
      UnderlyingUnitOfMeasureQty_130.setString("17180575");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_130);
      UnderlyingInstrument_130.insert(UnderlyingUnitOfMeasureQty_130.getString());
      all_values.push_back(UnderlyingInstrument_130);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_259;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_259("STRING_278708551");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_259);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_259.insert(UnderlyingSecurityAltID_259.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_259("STRING_1760174603");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_259);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_259.insert(UnderlyingSecurityAltIDSource_259.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_259);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_260;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_260("STRING_1462393166");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_260);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_260.insert(UnderlyingSecurityAltID_260.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_260("STRING_1165356004");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_260);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_260.insert(UnderlyingSecurityAltIDSource_260.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_260);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_261;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_261("STRING_1267616907");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_261);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_261.insert(UnderlyingSecurityAltID_261.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_261("STRING_41328937");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_261);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_261.insert(UnderlyingSecurityAltIDSource_261.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_261);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_254;
        FIX::UnderlyingStipType UnderlyingStipType_254("STRING_1201724850");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_254);
        UnderlyingStipulations_NoUnderlyingStips_254.insert(UnderlyingStipType_254.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_254("STRING_994930825");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_254);
        UnderlyingStipulations_NoUnderlyingStips_254.insert(UnderlyingStipValue_254.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_254);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_255;
        FIX::UnderlyingStipType UnderlyingStipType_255("STRING_1651092064");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_255);
        UnderlyingStipulations_NoUnderlyingStips_255.insert(UnderlyingStipType_255.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_255("STRING_1834058302");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_255);
        UnderlyingStipulations_NoUnderlyingStips_255.insert(UnderlyingStipValue_255.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_255);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_250;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_250("STRING_863293497");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_250);
        UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyID_250.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_250('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_250);
        UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyIDSource_250.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_250(847087353);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_250);
        UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyRole_250.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_250);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_502("STRING_1045082864");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_502);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502.insert(UnderlyingInstrumentPartySubID_502.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_502(2068902791);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_502);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502.insert(UnderlyingInstrumentPartySubIDType_502.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_503("STRING_1134926668");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_503);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503.insert(UnderlyingInstrumentPartySubID_503.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_503(1056994084);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_503);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503.insert(UnderlyingInstrumentPartySubIDType_503.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_251;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_251("STRING_1293387229");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_251);
        UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyID_251.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_251('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_251);
        UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyIDSource_251.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_251(864249855);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_251);
        UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyRole_251.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_251);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_504("STRING_397234321");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_504);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504.insert(UnderlyingInstrumentPartySubID_504.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_504(723905633);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_504);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504.insert(UnderlyingInstrumentPartySubIDType_504.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_505("STRING_1058944694");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_505);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505.insert(UnderlyingInstrumentPartySubID_505.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_505(956327970);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_505);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505.insert(UnderlyingInstrumentPartySubIDType_505.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_131;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_131("DATA_1289974488");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_131);
      UnderlyingInstrument_131.insert(EncodedUnderlyingIssuer_131.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_131(629518554);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_131);
      UnderlyingInstrument_131.insert(EncodedUnderlyingIssuerLen_131.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_131("DATA_1748330600");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_131);
      UnderlyingInstrument_131.insert(EncodedUnderlyingSecurityDesc_131.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_131(1568683040);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_131);
      UnderlyingInstrument_131.insert(EncodedUnderlyingSecurityDescLen_131.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_131;
      UnderlyingAdjustedQuantity_131.setString("2422095");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_131);
      UnderlyingInstrument_131.insert(UnderlyingAdjustedQuantity_131.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_131;
      UnderlyingAllocationPercent_131.setString("1.180000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_131);
      UnderlyingInstrument_131.insert(UnderlyingAllocationPercent_131.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_131;
      UnderlyingAttachmentPoint_131.setString("53.960000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_131);
      UnderlyingInstrument_131.insert(UnderlyingAttachmentPoint_131.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_131("STRING_1509826417");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_131);
      UnderlyingInstrument_131.insert(UnderlyingCFICode_131.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_131("STRING_1104569056");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_131);
      UnderlyingInstrument_131.insert(UnderlyingCPProgram_131.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_131("STRING_1251909017");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_131);
      UnderlyingInstrument_131.insert(UnderlyingCPRegType_131.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_131;
      UnderlyingCapValue_131.setString("5640676");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_131);
      UnderlyingInstrument_131.insert(UnderlyingCapValue_131.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_131;
      UnderlyingCashAmount_131.setString("20994998");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_131);
      UnderlyingInstrument_131.insert(UnderlyingCashAmount_131.getString());
      FIX::UnderlyingCashType UnderlyingCashType_131("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_131);
      UnderlyingInstrument_131.insert(UnderlyingCashType_131.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_131;
      UnderlyingContractMultiplier_131.setString("2506422");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_131);
      UnderlyingInstrument_131.insert(UnderlyingContractMultiplier_131.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_131(995099035);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_131);
      UnderlyingInstrument_131.insert(UnderlyingContractMultiplierUnit_131.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_131("COUNTRY_1618810931");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_131);
      UnderlyingInstrument_131.insert(UnderlyingCountryOfIssue_131.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_131("LOCALMKTDATE_1675715546");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_131);
      UnderlyingInstrument_131.insert(UnderlyingCouponPaymentDate_131.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_131;
      UnderlyingCouponRate_131.setString("63.880000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_131);
      UnderlyingInstrument_131.insert(UnderlyingCouponRate_131.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_131("STRING_134853634");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_131);
      UnderlyingInstrument_131.insert(UnderlyingCreditRating_131.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_131("EUR");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_131);
      UnderlyingInstrument_131.insert(UnderlyingCurrency_131.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_131;
      UnderlyingCurrentValue_131.setString("12697803");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_131);
      UnderlyingInstrument_131.insert(UnderlyingCurrentValue_131.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_131;
      UnderlyingDetachmentPoint_131.setString("88.470000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_131);
      UnderlyingInstrument_131.insert(UnderlyingDetachmentPoint_131.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_131;
      UnderlyingDirtyPrice_131.setString("9095091");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_131);
      UnderlyingInstrument_131.insert(UnderlyingDirtyPrice_131.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_131;
      UnderlyingEndPrice_131.setString("6382203");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_131);
      UnderlyingInstrument_131.insert(UnderlyingEndPrice_131.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_131;
      UnderlyingEndValue_131.setString("3470750");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_131);
      UnderlyingInstrument_131.insert(UnderlyingEndValue_131.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_131(174483200);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_131);
      UnderlyingInstrument_131.insert(UnderlyingExerciseStyle_131.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_131;
      UnderlyingFXRate_131.setString("10354546");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_131);
      UnderlyingInstrument_131.insert(UnderlyingFXRate_131.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_131('D');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_131);
      UnderlyingInstrument_131.insert(UnderlyingFXRateCalc_131.getString());
      FIX::UnderlyingFactor UnderlyingFactor_131;
      UnderlyingFactor_131.setString("12334278");
      noUnderlyings_0_1_1.set(UnderlyingFactor_131);
      UnderlyingInstrument_131.insert(UnderlyingFactor_131.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_131(1991782656);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_131);
      UnderlyingInstrument_131.insert(UnderlyingFlowScheduleType_131.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_131("STRING_213471529");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_131);
      UnderlyingInstrument_131.insert(UnderlyingInstrRegistry_131.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_131("LOCALMKTDATE_1862946449");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_131);
      UnderlyingInstrument_131.insert(UnderlyingIssueDate_131.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_131("STRING_1592629608");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_131);
      UnderlyingInstrument_131.insert(UnderlyingIssuer_131.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_131("STRING_1782154569");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_131);
      UnderlyingInstrument_131.insert(UnderlyingLocaleOfIssue_131.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_131("LOCALMKTDATE_2105155959");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_131);
      UnderlyingInstrument_131.insert(UnderlyingMaturityDate_131.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_131("MONTHYEAR_508386079");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_131);
      UnderlyingInstrument_131.insert(UnderlyingMaturityMonthYear_131.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_131("TZTIMEONLY_221226317");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_131);
      UnderlyingInstrument_131.insert(UnderlyingMaturityTime_131.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_131;
      UnderlyingNotionalPercentageOutstanding_131.setString("87.280000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_131);
      UnderlyingInstrument_131.insert(UnderlyingNotionalPercentageOutstanding_131.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_131('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_131);
      UnderlyingInstrument_131.insert(UnderlyingOptAttribute_131.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_131;
      UnderlyingOriginalNotionalPercentageOutstanding_131.setString("53.340000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_131);
      UnderlyingInstrument_131.insert(UnderlyingOriginalNotionalPercentageOutstanding_131.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_131("STRING_2031566347");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_131);
      UnderlyingInstrument_131.insert(UnderlyingPriceUnitOfMeasure_131.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_131;
      UnderlyingPriceUnitOfMeasureQty_131.setString("15649713");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_131);
      UnderlyingInstrument_131.insert(UnderlyingPriceUnitOfMeasureQty_131.getString());
      FIX::UnderlyingProduct UnderlyingProduct_131(81169120);
      noUnderlyings_0_1_1.set(UnderlyingProduct_131);
      UnderlyingInstrument_131.insert(UnderlyingProduct_131.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_131(134724973);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_131);
      UnderlyingInstrument_131.insert(UnderlyingPutOrCall_131.getString());
      FIX::UnderlyingPx UnderlyingPx_131;
      UnderlyingPx_131.setString("4125867");
      noUnderlyings_0_1_1.set(UnderlyingPx_131);
      UnderlyingInstrument_131.insert(UnderlyingPx_131.getString());
      FIX::UnderlyingQty UnderlyingQty_131;
      UnderlyingQty_131.setString("16999800");
      noUnderlyings_0_1_1.set(UnderlyingQty_131);
      UnderlyingInstrument_131.insert(UnderlyingQty_131.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_131("LOCALMKTDATE_1810440519");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_131);
      UnderlyingInstrument_131.insert(UnderlyingRedemptionDate_131.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_131("STRING_107289495");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_131);
      UnderlyingInstrument_131.insert(UnderlyingRepoCollateralSecurityType_131.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_131;
      UnderlyingRepurchaseRate_131.setString("36.850000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_131);
      UnderlyingInstrument_131.insert(UnderlyingRepurchaseRate_131.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_131(236271634);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_131);
      UnderlyingInstrument_131.insert(UnderlyingRepurchaseTerm_131.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_131("STRING_1870895026");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_131);
      UnderlyingInstrument_131.insert(UnderlyingRestructuringType_131.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_131("STRING_957130340");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_131);
      UnderlyingInstrument_131.insert(UnderlyingSecurityDesc_131.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_131("EXCHANGE_1866580482");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_131);
      UnderlyingInstrument_131.insert(UnderlyingSecurityExchange_131.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_131("STRING_632920490");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_131);
      UnderlyingInstrument_131.insert(UnderlyingSecurityID_131.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_131("STRING_1595350705");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_131);
      UnderlyingInstrument_131.insert(UnderlyingSecurityIDSource_131.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_131("STRING_66171889");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_131);
      UnderlyingInstrument_131.insert(UnderlyingSecuritySubType_131.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_131("STRING_807403691");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_131);
      UnderlyingInstrument_131.insert(UnderlyingSecurityType_131.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_131("STRING_483321743");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_131);
      UnderlyingInstrument_131.insert(UnderlyingSeniority_131.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_131("STRING_1137152577");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_131);
      UnderlyingInstrument_131.insert(UnderlyingSettlMethod_131.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_131(2);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_131);
      UnderlyingInstrument_131.insert(UnderlyingSettlementType_131.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_131;
      UnderlyingStartValue_131.setString("3276207");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_131);
      UnderlyingInstrument_131.insert(UnderlyingStartValue_131.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_131("STRING_1350624106");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_131);
      UnderlyingInstrument_131.insert(UnderlyingStateOrProvinceOfIssue_131.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_131("JPY");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_131);
      UnderlyingInstrument_131.insert(UnderlyingStrikeCurrency_131.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_131;
      UnderlyingStrikePrice_131.setString("9852950");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_131);
      UnderlyingInstrument_131.insert(UnderlyingStrikePrice_131.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_131("STRING_1713966697");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_131);
      UnderlyingInstrument_131.insert(UnderlyingSymbol_131.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_131("STRING_281152791");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_131);
      UnderlyingInstrument_131.insert(UnderlyingSymbolSfx_131.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_131("STRING_1206521344");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_131);
      UnderlyingInstrument_131.insert(UnderlyingTimeUnit_131.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_131("STRING_1033981777");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_131);
      UnderlyingInstrument_131.insert(UnderlyingUnitOfMeasure_131.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_131;
      UnderlyingUnitOfMeasureQty_131.setString("18941079");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_131);
      UnderlyingInstrument_131.insert(UnderlyingUnitOfMeasureQty_131.getString());
      all_values.push_back(UnderlyingInstrument_131);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_262;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_262("STRING_918064477");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_262);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_262.insert(UnderlyingSecurityAltID_262.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_262("STRING_1311595646");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_262);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_262.insert(UnderlyingSecurityAltIDSource_262.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_262);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_263;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_263("STRING_613342151");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_263);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_263.insert(UnderlyingSecurityAltID_263.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_263("STRING_1052789450");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_263);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_263.insert(UnderlyingSecurityAltIDSource_263.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_263);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_256;
        FIX::UnderlyingStipType UnderlyingStipType_256("STRING_165838555");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_256);
        UnderlyingStipulations_NoUnderlyingStips_256.insert(UnderlyingStipType_256.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_256("STRING_715746321");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_256);
        UnderlyingStipulations_NoUnderlyingStips_256.insert(UnderlyingStipValue_256.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_256);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_252;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_252("STRING_2000672240");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_252);
        UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyID_252.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_252('9');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_252);
        UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyIDSource_252.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_252(1554883274);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_252);
        UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyRole_252.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_252);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_506("STRING_671114790");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_506);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506.insert(UnderlyingInstrumentPartySubID_506.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_506(40320117);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_506);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506.insert(UnderlyingInstrumentPartySubIDType_506.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_507("STRING_258185989");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_507);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507.insert(UnderlyingInstrumentPartySubID_507.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_507(737286679);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_507);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507.insert(UnderlyingInstrumentPartySubIDType_507.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_508("STRING_847723808");
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubID_508);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508.insert(UnderlyingInstrumentPartySubID_508.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_508(741507733);
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_508);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508.insert(UnderlyingInstrumentPartySubIDType_508.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_25;
    FIX::Yield Yield_25;
    Yield_25.setString("92.560000");
    noRelatedSym_0_0.set(Yield_25);
    YieldData_25.insert(Yield_25.getString());
    FIX::YieldCalcDate YieldCalcDate_25("LOCALMKTDATE_741071745");
    noRelatedSym_0_0.set(YieldCalcDate_25);
    YieldData_25.insert(YieldCalcDate_25.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_25("LOCALMKTDATE_1069128485");
    noRelatedSym_0_0.set(YieldRedemptionDate_25);
    YieldData_25.insert(YieldRedemptionDate_25.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_25;
    YieldRedemptionPrice_25.setString("10775797");
    noRelatedSym_0_0.set(YieldRedemptionPrice_25);
    YieldData_25.insert(YieldRedemptionPrice_25.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_25(349882484);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_25);
    YieldData_25.insert(YieldRedemptionPriceType_25.getString());
    FIX::YieldType YieldType_25("STRING_LASTMONTH");
    noRelatedSym_0_0.set(YieldType_25);
    YieldData_25.insert(YieldType_25.getString());
    all_values.push_back(YieldData_25);
    all_compo_names.insert("YieldData");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::SecurityList::NoRelatedSym noRelatedSym_0_1;
    // SecListGrp.NoRelatedSym
    multiset<string> SecListGrp_NoRelatedSym_1;
    FIX::Currency Currency_67("CHF");
    noRelatedSym_0_1.set(Currency_67);
    SecListGrp_NoRelatedSym_1.insert(Currency_67.getString());
    FIX::EncodedText EncodedText_86("DATA_1123047989");
    noRelatedSym_0_1.set(EncodedText_86);
    SecListGrp_NoRelatedSym_1.insert(EncodedText_86.getString());
    FIX::EncodedTextLen EncodedTextLen_86(1121912439);
    noRelatedSym_0_1.set(EncodedTextLen_86);
    SecListGrp_NoRelatedSym_1.insert(EncodedTextLen_86.getString());
    FIX::RelSymTransactTime RelSymTransactTime_6(FIX::UTCTIMESTAMP(11, 10, 28, 26, 2, 2010));
    noRelatedSym_0_1.set(RelSymTransactTime_6);
    SecListGrp_NoRelatedSym_1.insert(RelSymTransactTime_6.getString());
    FIX::Text Text_86("STRING_1757966667");
    noRelatedSym_0_1.set(Text_86);
    SecListGrp_NoRelatedSym_1.insert(Text_86.getString());
    all_values.push_back(SecListGrp_NoRelatedSym_1);
    all_compo_names.insert("SecListGrp.NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_26;
    FIX::AgreementCurrency AgreementCurrency_26("EUR");
    noRelatedSym_0_1.set(AgreementCurrency_26);
    FinancingDetails_26.insert(AgreementCurrency_26.getString());
    FIX::AgreementDate AgreementDate_26("LOCALMKTDATE_1441954916");
    noRelatedSym_0_1.set(AgreementDate_26);
    FinancingDetails_26.insert(AgreementDate_26.getString());
    FIX::AgreementDesc AgreementDesc_26("STRING_138971121");
    noRelatedSym_0_1.set(AgreementDesc_26);
    FinancingDetails_26.insert(AgreementDesc_26.getString());
    FIX::AgreementID AgreementID_26("STRING_293998219");
    noRelatedSym_0_1.set(AgreementID_26);
    FinancingDetails_26.insert(AgreementID_26.getString());
    FIX::DeliveryType DeliveryType_26(2);
    noRelatedSym_0_1.set(DeliveryType_26);
    FinancingDetails_26.insert(DeliveryType_26.getString());
    FIX::EndDate EndDate_26("LOCALMKTDATE_949290053");
    noRelatedSym_0_1.set(EndDate_26);
    FinancingDetails_26.insert(EndDate_26.getString());
    FIX::MarginRatio MarginRatio_26;
    MarginRatio_26.setString("30.090000");
    noRelatedSym_0_1.set(MarginRatio_26);
    FinancingDetails_26.insert(MarginRatio_26.getString());
    FIX::StartDate StartDate_26("LOCALMKTDATE_889674659");
    noRelatedSym_0_1.set(StartDate_26);
    FinancingDetails_26.insert(StartDate_26.getString());
    FIX::TerminationType TerminationType_26(4);
    noRelatedSym_0_1.set(TerminationType_26);
    FinancingDetails_26.insert(TerminationType_26.getString());
    all_values.push_back(FinancingDetails_26);
    all_compo_names.insert("FinancingDetails");

    // InstrmtLegSecListGrp
    // Group InstrmtLegSecListGrp.NoLegs
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_3;
      FIX::LegSettlType LegSettlType_21('1');
      noLegs_1_1_0.set(LegSettlType_21);
      InstrmtLegSecListGrp_NoLegs_3.insert(LegSettlType_21.getString());
      FIX::LegSwapType LegSwapType_21(1);
      noLegs_1_1_0.set(LegSwapType_21);
      InstrmtLegSecListGrp_NoLegs_3.insert(LegSwapType_21.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_3);
      all_compo_names.insert("InstrmtLegSecListGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_137;
      FIX::EncodedLegIssuer EncodedLegIssuer_137("DATA_1429355297");
      noLegs_1_1_0.set(EncodedLegIssuer_137);
      InstrumentLeg_137.insert(EncodedLegIssuer_137.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_137(330986565);
      noLegs_1_1_0.set(EncodedLegIssuerLen_137);
      InstrumentLeg_137.insert(EncodedLegIssuerLen_137.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_137("DATA_870628613");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_137);
      InstrumentLeg_137.insert(EncodedLegSecurityDesc_137.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_137(359451364);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_137);
      InstrumentLeg_137.insert(EncodedLegSecurityDescLen_137.getString());
      FIX::LegCFICode LegCFICode_137("STRING_680869049");
      noLegs_1_1_0.set(LegCFICode_137);
      InstrumentLeg_137.insert(LegCFICode_137.getString());
      FIX::LegContractMultiplier LegContractMultiplier_137;
      LegContractMultiplier_137.setString("17125238");
      noLegs_1_1_0.set(LegContractMultiplier_137);
      InstrumentLeg_137.insert(LegContractMultiplier_137.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_137(274842458);
      noLegs_1_1_0.set(LegContractMultiplierUnit_137);
      InstrumentLeg_137.insert(LegContractMultiplierUnit_137.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_137("MONTHYEAR_597234582");
      noLegs_1_1_0.set(LegContractSettlMonth_137);
      InstrumentLeg_137.insert(LegContractSettlMonth_137.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_137("COUNTRY_688088151");
      noLegs_1_1_0.set(LegCountryOfIssue_137);
      InstrumentLeg_137.insert(LegCountryOfIssue_137.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_137("LOCALMKTDATE_1396754897");
      noLegs_1_1_0.set(LegCouponPaymentDate_137);
      InstrumentLeg_137.insert(LegCouponPaymentDate_137.getString());
      FIX::LegCouponRate LegCouponRate_137;
      LegCouponRate_137.setString("18.930000");
      noLegs_1_1_0.set(LegCouponRate_137);
      InstrumentLeg_137.insert(LegCouponRate_137.getString());
      FIX::LegCreditRating LegCreditRating_137("STRING_1557760419");
      noLegs_1_1_0.set(LegCreditRating_137);
      InstrumentLeg_137.insert(LegCreditRating_137.getString());
      FIX::LegCurrency LegCurrency_137("CAN");
      noLegs_1_1_0.set(LegCurrency_137);
      InstrumentLeg_137.insert(LegCurrency_137.getString());
      FIX::LegDatedDate LegDatedDate_137("LOCALMKTDATE_1591544685");
      noLegs_1_1_0.set(LegDatedDate_137);
      InstrumentLeg_137.insert(LegDatedDate_137.getString());
      FIX::LegExerciseStyle LegExerciseStyle_137(1023300693);
      noLegs_1_1_0.set(LegExerciseStyle_137);
      InstrumentLeg_137.insert(LegExerciseStyle_137.getString());
      FIX::LegFactor LegFactor_137;
      LegFactor_137.setString("20422276");
      noLegs_1_1_0.set(LegFactor_137);
      InstrumentLeg_137.insert(LegFactor_137.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_137(1202027704);
      noLegs_1_1_0.set(LegFlowScheduleType_137);
      InstrumentLeg_137.insert(LegFlowScheduleType_137.getString());
      FIX::LegInstrRegistry LegInstrRegistry_137("STRING_1309083221");
      noLegs_1_1_0.set(LegInstrRegistry_137);
      InstrumentLeg_137.insert(LegInstrRegistry_137.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_137("LOCALMKTDATE_1384207887");
      noLegs_1_1_0.set(LegInterestAccrualDate_137);
      InstrumentLeg_137.insert(LegInterestAccrualDate_137.getString());
      FIX::LegIssueDate LegIssueDate_137("LOCALMKTDATE_496498972");
      noLegs_1_1_0.set(LegIssueDate_137);
      InstrumentLeg_137.insert(LegIssueDate_137.getString());
      FIX::LegIssuer LegIssuer_137("STRING_1448054342");
      noLegs_1_1_0.set(LegIssuer_137);
      InstrumentLeg_137.insert(LegIssuer_137.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_137("STRING_1678206106");
      noLegs_1_1_0.set(LegLocaleOfIssue_137);
      InstrumentLeg_137.insert(LegLocaleOfIssue_137.getString());
      FIX::LegMaturityDate LegMaturityDate_137("LOCALMKTDATE_1345853515");
      noLegs_1_1_0.set(LegMaturityDate_137);
      InstrumentLeg_137.insert(LegMaturityDate_137.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_137("MONTHYEAR_249860748");
      noLegs_1_1_0.set(LegMaturityMonthYear_137);
      InstrumentLeg_137.insert(LegMaturityMonthYear_137.getString());
      FIX::LegMaturityTime LegMaturityTime_137("TZTIMEONLY_495835468");
      noLegs_1_1_0.set(LegMaturityTime_137);
      InstrumentLeg_137.insert(LegMaturityTime_137.getString());
      FIX::LegOptAttribute LegOptAttribute_137('8');
      noLegs_1_1_0.set(LegOptAttribute_137);
      InstrumentLeg_137.insert(LegOptAttribute_137.getString());
      FIX::LegOptionRatio LegOptionRatio_137;
      LegOptionRatio_137.setString("14573367");
      noLegs_1_1_0.set(LegOptionRatio_137);
      InstrumentLeg_137.insert(LegOptionRatio_137.getString());
      FIX::LegPool LegPool_137("STRING_50751508");
      noLegs_1_1_0.set(LegPool_137);
      InstrumentLeg_137.insert(LegPool_137.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_137("STRING_1825442994");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_137);
      InstrumentLeg_137.insert(LegPriceUnitOfMeasure_137.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_137;
      LegPriceUnitOfMeasureQty_137.setString("12588369");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_137);
      InstrumentLeg_137.insert(LegPriceUnitOfMeasureQty_137.getString());
      FIX::LegProduct LegProduct_137(1480106805);
      noLegs_1_1_0.set(LegProduct_137);
      InstrumentLeg_137.insert(LegProduct_137.getString());
      FIX::LegPutOrCall LegPutOrCall_137(8945911);
      noLegs_1_1_0.set(LegPutOrCall_137);
      InstrumentLeg_137.insert(LegPutOrCall_137.getString());
      FIX::LegRatioQty LegRatioQty_137;
      LegRatioQty_137.setString("21294655");
      noLegs_1_1_0.set(LegRatioQty_137);
      InstrumentLeg_137.insert(LegRatioQty_137.getString());
      FIX::LegRedemptionDate LegRedemptionDate_137("LOCALMKTDATE_1839558169");
      noLegs_1_1_0.set(LegRedemptionDate_137);
      InstrumentLeg_137.insert(LegRedemptionDate_137.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_137("STRING_689814960");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_137);
      InstrumentLeg_137.insert(LegRepoCollateralSecurityType_137.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_137;
      LegRepurchaseRate_137.setString("56.940000");
      noLegs_1_1_0.set(LegRepurchaseRate_137);
      InstrumentLeg_137.insert(LegRepurchaseRate_137.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_137(2114400628);
      noLegs_1_1_0.set(LegRepurchaseTerm_137);
      InstrumentLeg_137.insert(LegRepurchaseTerm_137.getString());
      FIX::LegSecurityDesc LegSecurityDesc_137("STRING_1287049542");
      noLegs_1_1_0.set(LegSecurityDesc_137);
      InstrumentLeg_137.insert(LegSecurityDesc_137.getString());
      FIX::LegSecurityExchange LegSecurityExchange_137("EXCHANGE_235110198");
      noLegs_1_1_0.set(LegSecurityExchange_137);
      InstrumentLeg_137.insert(LegSecurityExchange_137.getString());
      FIX::LegSecurityID LegSecurityID_137("STRING_1363671877");
      noLegs_1_1_0.set(LegSecurityID_137);
      InstrumentLeg_137.insert(LegSecurityID_137.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_137("STRING_687147788");
      noLegs_1_1_0.set(LegSecurityIDSource_137);
      InstrumentLeg_137.insert(LegSecurityIDSource_137.getString());
      FIX::LegSecuritySubType LegSecuritySubType_137("STRING_1792870617");
      noLegs_1_1_0.set(LegSecuritySubType_137);
      InstrumentLeg_137.insert(LegSecuritySubType_137.getString());
      FIX::LegSecurityType LegSecurityType_137("STRING_119544949");
      noLegs_1_1_0.set(LegSecurityType_137);
      InstrumentLeg_137.insert(LegSecurityType_137.getString());
      FIX::LegSide LegSide_137('1');
      noLegs_1_1_0.set(LegSide_137);
      InstrumentLeg_137.insert(LegSide_137.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_137("STRING_1236931654");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_137);
      InstrumentLeg_137.insert(LegStateOrProvinceOfIssue_137.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_137("CHF");
      noLegs_1_1_0.set(LegStrikeCurrency_137);
      InstrumentLeg_137.insert(LegStrikeCurrency_137.getString());
      FIX::LegStrikePrice LegStrikePrice_137;
      LegStrikePrice_137.setString("2914757");
      noLegs_1_1_0.set(LegStrikePrice_137);
      InstrumentLeg_137.insert(LegStrikePrice_137.getString());
      FIX::LegSymbol LegSymbol_137("STRING_304445215");
      noLegs_1_1_0.set(LegSymbol_137);
      InstrumentLeg_137.insert(LegSymbol_137.getString());
      FIX::LegSymbolSfx LegSymbolSfx_137("STRING_1087126036");
      noLegs_1_1_0.set(LegSymbolSfx_137);
      InstrumentLeg_137.insert(LegSymbolSfx_137.getString());
      FIX::LegTimeUnit LegTimeUnit_137("STRING_787974683");
      noLegs_1_1_0.set(LegTimeUnit_137);
      InstrumentLeg_137.insert(LegTimeUnit_137.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_137("STRING_1752499558");
      noLegs_1_1_0.set(LegUnitOfMeasure_137);
      InstrumentLeg_137.insert(LegUnitOfMeasure_137.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_137;
      LegUnitOfMeasureQty_137.setString("6178484");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_137);
      InstrumentLeg_137.insert(LegUnitOfMeasureQty_137.getString());
      all_values.push_back(InstrumentLeg_137);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_269;
        FIX::LegSecurityAltID LegSecurityAltID_269("STRING_2002360306");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_269);
        LegSecAltIDGrp_NoLegSecurityAltID_269.insert(LegSecurityAltID_269.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_269("STRING_1113683962");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_269);
        LegSecAltIDGrp_NoLegSecurityAltID_269.insert(LegSecurityAltIDSource_269.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_269);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_16;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_16("CHF");
      noLegs_1_1_0.set(LegBenchmarkCurveCurrency_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurveCurrency_16.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_16("STRING_1164435471");
      noLegs_1_1_0.set(LegBenchmarkCurveName_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurveName_16.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_16("STRING_1899832070");
      noLegs_1_1_0.set(LegBenchmarkCurvePoint_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurvePoint_16.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_16;
      LegBenchmarkPrice_16.setString("4235667");
      noLegs_1_1_0.set(LegBenchmarkPrice_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkPrice_16.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_16(497058628);
      noLegs_1_1_0.set(LegBenchmarkPriceType_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkPriceType_16.getString());
      all_values.push_back(LegBenchmarkCurveData_16);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_51;
        FIX::LegStipulationType LegStipulationType_51("STRING_405548604");
        noLegStipulations_1_0_2_0.set(LegStipulationType_51);
        LegStipulations_NoLegStipulations_51.insert(LegStipulationType_51.getString());
        FIX::LegStipulationValue LegStipulationValue_51("STRING_189133150");
        noLegStipulations_1_0_2_0.set(LegStipulationValue_51);
        LegStipulations_NoLegStipulations_51.insert(LegStipulationValue_51.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_51);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_4;
      FIX::LegSettlType LegSettlType_22('4');
      noLegs_1_1_1.set(LegSettlType_22);
      InstrmtLegSecListGrp_NoLegs_4.insert(LegSettlType_22.getString());
      FIX::LegSwapType LegSwapType_22(4);
      noLegs_1_1_1.set(LegSwapType_22);
      InstrmtLegSecListGrp_NoLegs_4.insert(LegSwapType_22.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_4);
      all_compo_names.insert("InstrmtLegSecListGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_138;
      FIX::EncodedLegIssuer EncodedLegIssuer_138("DATA_156050130");
      noLegs_1_1_1.set(EncodedLegIssuer_138);
      InstrumentLeg_138.insert(EncodedLegIssuer_138.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_138(1738158836);
      noLegs_1_1_1.set(EncodedLegIssuerLen_138);
      InstrumentLeg_138.insert(EncodedLegIssuerLen_138.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_138("DATA_187680848");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_138);
      InstrumentLeg_138.insert(EncodedLegSecurityDesc_138.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_138(1519722007);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_138);
      InstrumentLeg_138.insert(EncodedLegSecurityDescLen_138.getString());
      FIX::LegCFICode LegCFICode_138("STRING_277822976");
      noLegs_1_1_1.set(LegCFICode_138);
      InstrumentLeg_138.insert(LegCFICode_138.getString());
      FIX::LegContractMultiplier LegContractMultiplier_138;
      LegContractMultiplier_138.setString("19805514");
      noLegs_1_1_1.set(LegContractMultiplier_138);
      InstrumentLeg_138.insert(LegContractMultiplier_138.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_138(1639266956);
      noLegs_1_1_1.set(LegContractMultiplierUnit_138);
      InstrumentLeg_138.insert(LegContractMultiplierUnit_138.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_138("MONTHYEAR_85997149");
      noLegs_1_1_1.set(LegContractSettlMonth_138);
      InstrumentLeg_138.insert(LegContractSettlMonth_138.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_138("COUNTRY_1069999471");
      noLegs_1_1_1.set(LegCountryOfIssue_138);
      InstrumentLeg_138.insert(LegCountryOfIssue_138.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_138("LOCALMKTDATE_634628950");
      noLegs_1_1_1.set(LegCouponPaymentDate_138);
      InstrumentLeg_138.insert(LegCouponPaymentDate_138.getString());
      FIX::LegCouponRate LegCouponRate_138;
      LegCouponRate_138.setString("89.460000");
      noLegs_1_1_1.set(LegCouponRate_138);
      InstrumentLeg_138.insert(LegCouponRate_138.getString());
      FIX::LegCreditRating LegCreditRating_138("STRING_1361475182");
      noLegs_1_1_1.set(LegCreditRating_138);
      InstrumentLeg_138.insert(LegCreditRating_138.getString());
      FIX::LegCurrency LegCurrency_138("USD");
      noLegs_1_1_1.set(LegCurrency_138);
      InstrumentLeg_138.insert(LegCurrency_138.getString());
      FIX::LegDatedDate LegDatedDate_138("LOCALMKTDATE_1966217");
      noLegs_1_1_1.set(LegDatedDate_138);
      InstrumentLeg_138.insert(LegDatedDate_138.getString());
      FIX::LegExerciseStyle LegExerciseStyle_138(544090076);
      noLegs_1_1_1.set(LegExerciseStyle_138);
      InstrumentLeg_138.insert(LegExerciseStyle_138.getString());
      FIX::LegFactor LegFactor_138;
      LegFactor_138.setString("14938898");
      noLegs_1_1_1.set(LegFactor_138);
      InstrumentLeg_138.insert(LegFactor_138.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_138(2135794415);
      noLegs_1_1_1.set(LegFlowScheduleType_138);
      InstrumentLeg_138.insert(LegFlowScheduleType_138.getString());
      FIX::LegInstrRegistry LegInstrRegistry_138("STRING_398966734");
      noLegs_1_1_1.set(LegInstrRegistry_138);
      InstrumentLeg_138.insert(LegInstrRegistry_138.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_138("LOCALMKTDATE_460090143");
      noLegs_1_1_1.set(LegInterestAccrualDate_138);
      InstrumentLeg_138.insert(LegInterestAccrualDate_138.getString());
      FIX::LegIssueDate LegIssueDate_138("LOCALMKTDATE_62699843");
      noLegs_1_1_1.set(LegIssueDate_138);
      InstrumentLeg_138.insert(LegIssueDate_138.getString());
      FIX::LegIssuer LegIssuer_138("STRING_1711180183");
      noLegs_1_1_1.set(LegIssuer_138);
      InstrumentLeg_138.insert(LegIssuer_138.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_138("STRING_1624525614");
      noLegs_1_1_1.set(LegLocaleOfIssue_138);
      InstrumentLeg_138.insert(LegLocaleOfIssue_138.getString());
      FIX::LegMaturityDate LegMaturityDate_138("LOCALMKTDATE_1962531914");
      noLegs_1_1_1.set(LegMaturityDate_138);
      InstrumentLeg_138.insert(LegMaturityDate_138.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_138("MONTHYEAR_2134746903");
      noLegs_1_1_1.set(LegMaturityMonthYear_138);
      InstrumentLeg_138.insert(LegMaturityMonthYear_138.getString());
      FIX::LegMaturityTime LegMaturityTime_138("TZTIMEONLY_2121584243");
      noLegs_1_1_1.set(LegMaturityTime_138);
      InstrumentLeg_138.insert(LegMaturityTime_138.getString());
      FIX::LegOptAttribute LegOptAttribute_138('1');
      noLegs_1_1_1.set(LegOptAttribute_138);
      InstrumentLeg_138.insert(LegOptAttribute_138.getString());
      FIX::LegOptionRatio LegOptionRatio_138;
      LegOptionRatio_138.setString("3928118");
      noLegs_1_1_1.set(LegOptionRatio_138);
      InstrumentLeg_138.insert(LegOptionRatio_138.getString());
      FIX::LegPool LegPool_138("STRING_163233745");
      noLegs_1_1_1.set(LegPool_138);
      InstrumentLeg_138.insert(LegPool_138.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_138("STRING_27451893");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_138);
      InstrumentLeg_138.insert(LegPriceUnitOfMeasure_138.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_138;
      LegPriceUnitOfMeasureQty_138.setString("3453825");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_138);
      InstrumentLeg_138.insert(LegPriceUnitOfMeasureQty_138.getString());
      FIX::LegProduct LegProduct_138(319283875);
      noLegs_1_1_1.set(LegProduct_138);
      InstrumentLeg_138.insert(LegProduct_138.getString());
      FIX::LegPutOrCall LegPutOrCall_138(1765610729);
      noLegs_1_1_1.set(LegPutOrCall_138);
      InstrumentLeg_138.insert(LegPutOrCall_138.getString());
      FIX::LegRatioQty LegRatioQty_138;
      LegRatioQty_138.setString("5330633");
      noLegs_1_1_1.set(LegRatioQty_138);
      InstrumentLeg_138.insert(LegRatioQty_138.getString());
      FIX::LegRedemptionDate LegRedemptionDate_138("LOCALMKTDATE_1839005882");
      noLegs_1_1_1.set(LegRedemptionDate_138);
      InstrumentLeg_138.insert(LegRedemptionDate_138.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_138("STRING_2043433705");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_138);
      InstrumentLeg_138.insert(LegRepoCollateralSecurityType_138.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_138;
      LegRepurchaseRate_138.setString("11.750000");
      noLegs_1_1_1.set(LegRepurchaseRate_138);
      InstrumentLeg_138.insert(LegRepurchaseRate_138.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_138(1330789191);
      noLegs_1_1_1.set(LegRepurchaseTerm_138);
      InstrumentLeg_138.insert(LegRepurchaseTerm_138.getString());
      FIX::LegSecurityDesc LegSecurityDesc_138("STRING_2129430854");
      noLegs_1_1_1.set(LegSecurityDesc_138);
      InstrumentLeg_138.insert(LegSecurityDesc_138.getString());
      FIX::LegSecurityExchange LegSecurityExchange_138("EXCHANGE_1436130647");
      noLegs_1_1_1.set(LegSecurityExchange_138);
      InstrumentLeg_138.insert(LegSecurityExchange_138.getString());
      FIX::LegSecurityID LegSecurityID_138("STRING_1965418141");
      noLegs_1_1_1.set(LegSecurityID_138);
      InstrumentLeg_138.insert(LegSecurityID_138.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_138("STRING_1918346153");
      noLegs_1_1_1.set(LegSecurityIDSource_138);
      InstrumentLeg_138.insert(LegSecurityIDSource_138.getString());
      FIX::LegSecuritySubType LegSecuritySubType_138("STRING_650122181");
      noLegs_1_1_1.set(LegSecuritySubType_138);
      InstrumentLeg_138.insert(LegSecuritySubType_138.getString());
      FIX::LegSecurityType LegSecurityType_138("STRING_757008659");
      noLegs_1_1_1.set(LegSecurityType_138);
      InstrumentLeg_138.insert(LegSecurityType_138.getString());
      FIX::LegSide LegSide_138('6');
      noLegs_1_1_1.set(LegSide_138);
      InstrumentLeg_138.insert(LegSide_138.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_138("STRING_652088398");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_138);
      InstrumentLeg_138.insert(LegStateOrProvinceOfIssue_138.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_138("JPY");
      noLegs_1_1_1.set(LegStrikeCurrency_138);
      InstrumentLeg_138.insert(LegStrikeCurrency_138.getString());
      FIX::LegStrikePrice LegStrikePrice_138;
      LegStrikePrice_138.setString("6403991");
      noLegs_1_1_1.set(LegStrikePrice_138);
      InstrumentLeg_138.insert(LegStrikePrice_138.getString());
      FIX::LegSymbol LegSymbol_138("STRING_1700065469");
      noLegs_1_1_1.set(LegSymbol_138);
      InstrumentLeg_138.insert(LegSymbol_138.getString());
      FIX::LegSymbolSfx LegSymbolSfx_138("STRING_453400164");
      noLegs_1_1_1.set(LegSymbolSfx_138);
      InstrumentLeg_138.insert(LegSymbolSfx_138.getString());
      FIX::LegTimeUnit LegTimeUnit_138("STRING_703099008");
      noLegs_1_1_1.set(LegTimeUnit_138);
      InstrumentLeg_138.insert(LegTimeUnit_138.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_138("STRING_1263762004");
      noLegs_1_1_1.set(LegUnitOfMeasure_138);
      InstrumentLeg_138.insert(LegUnitOfMeasure_138.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_138;
      LegUnitOfMeasureQty_138.setString("20779257");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_138);
      InstrumentLeg_138.insert(LegUnitOfMeasureQty_138.getString());
      all_values.push_back(InstrumentLeg_138);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_270;
        FIX::LegSecurityAltID LegSecurityAltID_270("STRING_1251025259");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_270);
        LegSecAltIDGrp_NoLegSecurityAltID_270.insert(LegSecurityAltID_270.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_270("STRING_2052026373");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_270);
        LegSecAltIDGrp_NoLegSecurityAltID_270.insert(LegSecurityAltIDSource_270.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_270);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_17;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_17("USD");
      noLegs_1_1_1.set(LegBenchmarkCurveCurrency_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurveCurrency_17.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_17("STRING_67776470");
      noLegs_1_1_1.set(LegBenchmarkCurveName_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurveName_17.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_17("STRING_121941767");
      noLegs_1_1_1.set(LegBenchmarkCurvePoint_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurvePoint_17.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_17;
      LegBenchmarkPrice_17.setString("19892196");
      noLegs_1_1_1.set(LegBenchmarkPrice_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkPrice_17.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_17(387060345);
      noLegs_1_1_1.set(LegBenchmarkPriceType_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkPriceType_17.getString());
      all_values.push_back(LegBenchmarkCurveData_17);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_52;
        FIX::LegStipulationType LegStipulationType_52("STRING_374799338");
        noLegStipulations_1_1_2_0.set(LegStipulationType_52);
        LegStipulations_NoLegStipulations_52.insert(LegStipulationType_52.getString());
        FIX::LegStipulationValue LegStipulationValue_52("STRING_78582580");
        noLegStipulations_1_1_2_0.set(LegStipulationValue_52);
        LegStipulations_NoLegStipulations_52.insert(LegStipulationValue_52.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_52);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_53;
        FIX::LegStipulationType LegStipulationType_53("STRING_1783502553");
        noLegStipulations_1_1_2_1.set(LegStipulationType_53);
        LegStipulations_NoLegStipulations_53.insert(LegStipulationType_53.getString());
        FIX::LegStipulationValue LegStipulationValue_53("STRING_740930513");
        noLegStipulations_1_1_2_1.set(LegStipulationValue_53);
        LegStipulations_NoLegStipulations_53.insert(LegStipulationValue_53.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_53);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_1_1_2;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_5;
      FIX::LegSettlType LegSettlType_23('1');
      noLegs_1_1_2.set(LegSettlType_23);
      InstrmtLegSecListGrp_NoLegs_5.insert(LegSettlType_23.getString());
      FIX::LegSwapType LegSwapType_23(5);
      noLegs_1_1_2.set(LegSwapType_23);
      InstrmtLegSecListGrp_NoLegs_5.insert(LegSwapType_23.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_5);
      all_compo_names.insert("InstrmtLegSecListGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_139;
      FIX::EncodedLegIssuer EncodedLegIssuer_139("DATA_29577512");
      noLegs_1_1_2.set(EncodedLegIssuer_139);
      InstrumentLeg_139.insert(EncodedLegIssuer_139.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_139(1227306264);
      noLegs_1_1_2.set(EncodedLegIssuerLen_139);
      InstrumentLeg_139.insert(EncodedLegIssuerLen_139.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_139("DATA_1536312264");
      noLegs_1_1_2.set(EncodedLegSecurityDesc_139);
      InstrumentLeg_139.insert(EncodedLegSecurityDesc_139.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_139(679699693);
      noLegs_1_1_2.set(EncodedLegSecurityDescLen_139);
      InstrumentLeg_139.insert(EncodedLegSecurityDescLen_139.getString());
      FIX::LegCFICode LegCFICode_139("STRING_1984314924");
      noLegs_1_1_2.set(LegCFICode_139);
      InstrumentLeg_139.insert(LegCFICode_139.getString());
      FIX::LegContractMultiplier LegContractMultiplier_139;
      LegContractMultiplier_139.setString("357324");
      noLegs_1_1_2.set(LegContractMultiplier_139);
      InstrumentLeg_139.insert(LegContractMultiplier_139.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_139(1331788091);
      noLegs_1_1_2.set(LegContractMultiplierUnit_139);
      InstrumentLeg_139.insert(LegContractMultiplierUnit_139.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_139("MONTHYEAR_1137930011");
      noLegs_1_1_2.set(LegContractSettlMonth_139);
      InstrumentLeg_139.insert(LegContractSettlMonth_139.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_139("COUNTRY_29042476");
      noLegs_1_1_2.set(LegCountryOfIssue_139);
      InstrumentLeg_139.insert(LegCountryOfIssue_139.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_139("LOCALMKTDATE_1972187256");
      noLegs_1_1_2.set(LegCouponPaymentDate_139);
      InstrumentLeg_139.insert(LegCouponPaymentDate_139.getString());
      FIX::LegCouponRate LegCouponRate_139;
      LegCouponRate_139.setString("18.330000");
      noLegs_1_1_2.set(LegCouponRate_139);
      InstrumentLeg_139.insert(LegCouponRate_139.getString());
      FIX::LegCreditRating LegCreditRating_139("STRING_482442640");
      noLegs_1_1_2.set(LegCreditRating_139);
      InstrumentLeg_139.insert(LegCreditRating_139.getString());
      FIX::LegCurrency LegCurrency_139("EUR");
      noLegs_1_1_2.set(LegCurrency_139);
      InstrumentLeg_139.insert(LegCurrency_139.getString());
      FIX::LegDatedDate LegDatedDate_139("LOCALMKTDATE_412884771");
      noLegs_1_1_2.set(LegDatedDate_139);
      InstrumentLeg_139.insert(LegDatedDate_139.getString());
      FIX::LegExerciseStyle LegExerciseStyle_139(1045949891);
      noLegs_1_1_2.set(LegExerciseStyle_139);
      InstrumentLeg_139.insert(LegExerciseStyle_139.getString());
      FIX::LegFactor LegFactor_139;
      LegFactor_139.setString("10578154");
      noLegs_1_1_2.set(LegFactor_139);
      InstrumentLeg_139.insert(LegFactor_139.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_139(317427496);
      noLegs_1_1_2.set(LegFlowScheduleType_139);
      InstrumentLeg_139.insert(LegFlowScheduleType_139.getString());
      FIX::LegInstrRegistry LegInstrRegistry_139("STRING_1140439765");
      noLegs_1_1_2.set(LegInstrRegistry_139);
      InstrumentLeg_139.insert(LegInstrRegistry_139.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_139("LOCALMKTDATE_554168919");
      noLegs_1_1_2.set(LegInterestAccrualDate_139);
      InstrumentLeg_139.insert(LegInterestAccrualDate_139.getString());
      FIX::LegIssueDate LegIssueDate_139("LOCALMKTDATE_385203967");
      noLegs_1_1_2.set(LegIssueDate_139);
      InstrumentLeg_139.insert(LegIssueDate_139.getString());
      FIX::LegIssuer LegIssuer_139("STRING_1262381532");
      noLegs_1_1_2.set(LegIssuer_139);
      InstrumentLeg_139.insert(LegIssuer_139.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_139("STRING_395904899");
      noLegs_1_1_2.set(LegLocaleOfIssue_139);
      InstrumentLeg_139.insert(LegLocaleOfIssue_139.getString());
      FIX::LegMaturityDate LegMaturityDate_139("LOCALMKTDATE_772264312");
      noLegs_1_1_2.set(LegMaturityDate_139);
      InstrumentLeg_139.insert(LegMaturityDate_139.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_139("MONTHYEAR_1002450380");
      noLegs_1_1_2.set(LegMaturityMonthYear_139);
      InstrumentLeg_139.insert(LegMaturityMonthYear_139.getString());
      FIX::LegMaturityTime LegMaturityTime_139("TZTIMEONLY_770704237");
      noLegs_1_1_2.set(LegMaturityTime_139);
      InstrumentLeg_139.insert(LegMaturityTime_139.getString());
      FIX::LegOptAttribute LegOptAttribute_139('8');
      noLegs_1_1_2.set(LegOptAttribute_139);
      InstrumentLeg_139.insert(LegOptAttribute_139.getString());
      FIX::LegOptionRatio LegOptionRatio_139;
      LegOptionRatio_139.setString("6384692");
      noLegs_1_1_2.set(LegOptionRatio_139);
      InstrumentLeg_139.insert(LegOptionRatio_139.getString());
      FIX::LegPool LegPool_139("STRING_1511634751");
      noLegs_1_1_2.set(LegPool_139);
      InstrumentLeg_139.insert(LegPool_139.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_139("STRING_112735015");
      noLegs_1_1_2.set(LegPriceUnitOfMeasure_139);
      InstrumentLeg_139.insert(LegPriceUnitOfMeasure_139.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_139;
      LegPriceUnitOfMeasureQty_139.setString("2564353");
      noLegs_1_1_2.set(LegPriceUnitOfMeasureQty_139);
      InstrumentLeg_139.insert(LegPriceUnitOfMeasureQty_139.getString());
      FIX::LegProduct LegProduct_139(1541212263);
      noLegs_1_1_2.set(LegProduct_139);
      InstrumentLeg_139.insert(LegProduct_139.getString());
      FIX::LegPutOrCall LegPutOrCall_139(1340041280);
      noLegs_1_1_2.set(LegPutOrCall_139);
      InstrumentLeg_139.insert(LegPutOrCall_139.getString());
      FIX::LegRatioQty LegRatioQty_139;
      LegRatioQty_139.setString("17927476");
      noLegs_1_1_2.set(LegRatioQty_139);
      InstrumentLeg_139.insert(LegRatioQty_139.getString());
      FIX::LegRedemptionDate LegRedemptionDate_139("LOCALMKTDATE_73428309");
      noLegs_1_1_2.set(LegRedemptionDate_139);
      InstrumentLeg_139.insert(LegRedemptionDate_139.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_139("STRING_1176872556");
      noLegs_1_1_2.set(LegRepoCollateralSecurityType_139);
      InstrumentLeg_139.insert(LegRepoCollateralSecurityType_139.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_139;
      LegRepurchaseRate_139.setString("1.170000");
      noLegs_1_1_2.set(LegRepurchaseRate_139);
      InstrumentLeg_139.insert(LegRepurchaseRate_139.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_139(1405216400);
      noLegs_1_1_2.set(LegRepurchaseTerm_139);
      InstrumentLeg_139.insert(LegRepurchaseTerm_139.getString());
      FIX::LegSecurityDesc LegSecurityDesc_139("STRING_167318919");
      noLegs_1_1_2.set(LegSecurityDesc_139);
      InstrumentLeg_139.insert(LegSecurityDesc_139.getString());
      FIX::LegSecurityExchange LegSecurityExchange_139("EXCHANGE_1857522594");
      noLegs_1_1_2.set(LegSecurityExchange_139);
      InstrumentLeg_139.insert(LegSecurityExchange_139.getString());
      FIX::LegSecurityID LegSecurityID_139("STRING_1229920009");
      noLegs_1_1_2.set(LegSecurityID_139);
      InstrumentLeg_139.insert(LegSecurityID_139.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_139("STRING_857830752");
      noLegs_1_1_2.set(LegSecurityIDSource_139);
      InstrumentLeg_139.insert(LegSecurityIDSource_139.getString());
      FIX::LegSecuritySubType LegSecuritySubType_139("STRING_192481586");
      noLegs_1_1_2.set(LegSecuritySubType_139);
      InstrumentLeg_139.insert(LegSecuritySubType_139.getString());
      FIX::LegSecurityType LegSecurityType_139("STRING_1757722626");
      noLegs_1_1_2.set(LegSecurityType_139);
      InstrumentLeg_139.insert(LegSecurityType_139.getString());
      FIX::LegSide LegSide_139('6');
      noLegs_1_1_2.set(LegSide_139);
      InstrumentLeg_139.insert(LegSide_139.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_139("STRING_605366357");
      noLegs_1_1_2.set(LegStateOrProvinceOfIssue_139);
      InstrumentLeg_139.insert(LegStateOrProvinceOfIssue_139.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_139("CAN");
      noLegs_1_1_2.set(LegStrikeCurrency_139);
      InstrumentLeg_139.insert(LegStrikeCurrency_139.getString());
      FIX::LegStrikePrice LegStrikePrice_139;
      LegStrikePrice_139.setString("9227938");
      noLegs_1_1_2.set(LegStrikePrice_139);
      InstrumentLeg_139.insert(LegStrikePrice_139.getString());
      FIX::LegSymbol LegSymbol_139("STRING_1796628635");
      noLegs_1_1_2.set(LegSymbol_139);
      InstrumentLeg_139.insert(LegSymbol_139.getString());
      FIX::LegSymbolSfx LegSymbolSfx_139("STRING_129121662");
      noLegs_1_1_2.set(LegSymbolSfx_139);
      InstrumentLeg_139.insert(LegSymbolSfx_139.getString());
      FIX::LegTimeUnit LegTimeUnit_139("STRING_1307997821");
      noLegs_1_1_2.set(LegTimeUnit_139);
      InstrumentLeg_139.insert(LegTimeUnit_139.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_139("STRING_911526519");
      noLegs_1_1_2.set(LegUnitOfMeasure_139);
      InstrumentLeg_139.insert(LegUnitOfMeasure_139.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_139;
      LegUnitOfMeasureQty_139.setString("5250265");
      noLegs_1_1_2.set(LegUnitOfMeasureQty_139);
      InstrumentLeg_139.insert(LegUnitOfMeasureQty_139.getString());
      all_values.push_back(InstrumentLeg_139);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_271;
        FIX::LegSecurityAltID LegSecurityAltID_271("STRING_1913976900");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltID_271);
        LegSecAltIDGrp_NoLegSecurityAltID_271.insert(LegSecurityAltID_271.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_271("STRING_1295730799");
        noLegSecurityAltID_1_2_2_0.set(LegSecurityAltIDSource_271);
        LegSecAltIDGrp_NoLegSecurityAltID_271.insert(LegSecurityAltIDSource_271.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_271);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_18;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_18("EUR");
      noLegs_1_1_2.set(LegBenchmarkCurveCurrency_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkCurveCurrency_18.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_18("STRING_659881902");
      noLegs_1_1_2.set(LegBenchmarkCurveName_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkCurveName_18.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_18("STRING_896360393");
      noLegs_1_1_2.set(LegBenchmarkCurvePoint_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkCurvePoint_18.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_18;
      LegBenchmarkPrice_18.setString("6613979");
      noLegs_1_1_2.set(LegBenchmarkPrice_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkPrice_18.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_18(53610518);
      noLegs_1_1_2.set(LegBenchmarkPriceType_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkPriceType_18.getString());
      all_values.push_back(LegBenchmarkCurveData_18);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_54;
        FIX::LegStipulationType LegStipulationType_54("STRING_306661948");
        noLegStipulations_1_2_2_0.set(LegStipulationType_54);
        LegStipulations_NoLegStipulations_54.insert(LegStipulationType_54.getString());
        FIX::LegStipulationValue LegStipulationValue_54("STRING_127038827");
        noLegStipulations_1_2_2_0.set(LegStipulationValue_54);
        LegStipulations_NoLegStipulations_54.insert(LegStipulationValue_54.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_54);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_55;
        FIX::LegStipulationType LegStipulationType_55("STRING_1265790581");
        noLegStipulations_1_2_2_1.set(LegStipulationType_55);
        LegStipulations_NoLegStipulations_55.insert(LegStipulationType_55.getString());
        FIX::LegStipulationValue LegStipulationValue_55("STRING_2135142065");
        noLegStipulations_1_2_2_1.set(LegStipulationValue_55);
        LegStipulations_NoLegStipulations_55.insert(LegStipulationValue_55.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_55);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_56;
        FIX::LegStipulationType LegStipulationType_56("STRING_1532255227");
        noLegStipulations_1_2_2_2.set(LegStipulationType_56);
        LegStipulations_NoLegStipulations_56.insert(LegStipulationType_56.getString());
        FIX::LegStipulationValue LegStipulationValue_56("STRING_1433109501");
        noLegStipulations_1_2_2_2.set(LegStipulationValue_56);
        LegStipulations_NoLegStipulations_56.insert(LegStipulationValue_56.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_56);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_2);
    }
    // Instrument
    multiset<string> Instrument_84;
    FIX::AttachmentPoint AttachmentPoint_84;
    AttachmentPoint_84.setString("10.110000");
    noRelatedSym_0_1.set(AttachmentPoint_84);
    Instrument_84.insert(AttachmentPoint_84.getString());
    FIX::CFICode CFICode_84("STRING_614691588");
    noRelatedSym_0_1.set(CFICode_84);
    Instrument_84.insert(CFICode_84.getString());
    FIX::CPProgram CPProgram_84(2);
    noRelatedSym_0_1.set(CPProgram_84);
    Instrument_84.insert(CPProgram_84.getString());
    FIX::CPRegType CPRegType_84("STRING_2037662598");
    noRelatedSym_0_1.set(CPRegType_84);
    Instrument_84.insert(CPRegType_84.getString());
    FIX::CapPrice CapPrice_84;
    CapPrice_84.setString("2249305");
    noRelatedSym_0_1.set(CapPrice_84);
    Instrument_84.insert(CapPrice_84.getString());
    FIX::ContractMultiplier ContractMultiplier_84;
    ContractMultiplier_84.setString("8080775");
    noRelatedSym_0_1.set(ContractMultiplier_84);
    Instrument_84.insert(ContractMultiplier_84.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_84(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_84);
    Instrument_84.insert(ContractMultiplierUnit_84.getString());
    FIX::ContractSettlMonth ContractSettlMonth_84("MONTHYEAR_881119436");
    noRelatedSym_0_1.set(ContractSettlMonth_84);
    Instrument_84.insert(ContractSettlMonth_84.getString());
    FIX::CountryOfIssue CountryOfIssue_84("COUNTRY_383030290");
    noRelatedSym_0_1.set(CountryOfIssue_84);
    Instrument_84.insert(CountryOfIssue_84.getString());
    FIX::CouponPaymentDate CouponPaymentDate_84("LOCALMKTDATE_1418339161");
    noRelatedSym_0_1.set(CouponPaymentDate_84);
    Instrument_84.insert(CouponPaymentDate_84.getString());
    FIX::CouponRate CouponRate_84;
    CouponRate_84.setString("44.230000");
    noRelatedSym_0_1.set(CouponRate_84);
    Instrument_84.insert(CouponRate_84.getString());
    FIX::CreditRating CreditRating_84("STRING_512151953");
    noRelatedSym_0_1.set(CreditRating_84);
    Instrument_84.insert(CreditRating_84.getString());
    FIX::DatedDate DatedDate_84("LOCALMKTDATE_578853334");
    noRelatedSym_0_1.set(DatedDate_84);
    Instrument_84.insert(DatedDate_84.getString());
    FIX::DetachmentPoint DetachmentPoint_84;
    DetachmentPoint_84.setString("9.420000");
    noRelatedSym_0_1.set(DetachmentPoint_84);
    Instrument_84.insert(DetachmentPoint_84.getString());
    FIX::EncodedIssuer EncodedIssuer_84("DATA_1037178515");
    noRelatedSym_0_1.set(EncodedIssuer_84);
    Instrument_84.insert(EncodedIssuer_84.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_84(511631820);
    noRelatedSym_0_1.set(EncodedIssuerLen_84);
    Instrument_84.insert(EncodedIssuerLen_84.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_84("DATA_1208284194");
    noRelatedSym_0_1.set(EncodedSecurityDesc_84);
    Instrument_84.insert(EncodedSecurityDesc_84.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_84(185425666);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_84);
    Instrument_84.insert(EncodedSecurityDescLen_84.getString());
    FIX::ExerciseStyle ExerciseStyle_84(1);
    noRelatedSym_0_1.set(ExerciseStyle_84);
    Instrument_84.insert(ExerciseStyle_84.getString());
    FIX::Factor Factor_84;
    Factor_84.setString("16132467");
    noRelatedSym_0_1.set(Factor_84);
    Instrument_84.insert(Factor_84.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_84(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_84);
    Instrument_84.insert(FlexProductEligibilityIndicator_84.getString());
    FIX::FlexibleIndicator FlexibleIndicator_84(false);
    noRelatedSym_0_1.set(FlexibleIndicator_84);
    Instrument_84.insert(FlexibleIndicator_84.getString());
    FIX::FloorPrice FloorPrice_84;
    FloorPrice_84.setString("1271610");
    noRelatedSym_0_1.set(FloorPrice_84);
    Instrument_84.insert(FloorPrice_84.getString());
    FIX::FlowScheduleType FlowScheduleType_84(2);
    noRelatedSym_0_1.set(FlowScheduleType_84);
    Instrument_84.insert(FlowScheduleType_84.getString());
    FIX::InstrRegistry InstrRegistry_84("STRING_133051969");
    noRelatedSym_0_1.set(InstrRegistry_84);
    Instrument_84.insert(InstrRegistry_84.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_84('4');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_84);
    Instrument_84.insert(InstrmtAssignmentMethod_84.getString());
    FIX::InterestAccrualDate InterestAccrualDate_84("LOCALMKTDATE_1025956914");
    noRelatedSym_0_1.set(InterestAccrualDate_84);
    Instrument_84.insert(InterestAccrualDate_84.getString());
    FIX::IssueDate IssueDate_84("LOCALMKTDATE_1398842550");
    noRelatedSym_0_1.set(IssueDate_84);
    Instrument_84.insert(IssueDate_84.getString());
    FIX::Issuer Issuer_84("STRING_421481384");
    noRelatedSym_0_1.set(Issuer_84);
    Instrument_84.insert(Issuer_84.getString());
    FIX::ListMethod ListMethod_84(1);
    noRelatedSym_0_1.set(ListMethod_84);
    Instrument_84.insert(ListMethod_84.getString());
    FIX::LocaleOfIssue LocaleOfIssue_84("STRING_684468403");
    noRelatedSym_0_1.set(LocaleOfIssue_84);
    Instrument_84.insert(LocaleOfIssue_84.getString());
    FIX::MaturityDate MaturityDate_84("LOCALMKTDATE_119178747");
    noRelatedSym_0_1.set(MaturityDate_84);
    Instrument_84.insert(MaturityDate_84.getString());
    FIX::MaturityMonthYear MaturityMonthYear_84("MONTHYEAR_1025420082");
    noRelatedSym_0_1.set(MaturityMonthYear_84);
    Instrument_84.insert(MaturityMonthYear_84.getString());
    FIX::MaturityTime MaturityTime_84("TZTIMEONLY_827925009");
    noRelatedSym_0_1.set(MaturityTime_84);
    Instrument_84.insert(MaturityTime_84.getString());
    FIX::MinPriceIncrement MinPriceIncrement_84;
    MinPriceIncrement_84.setString("93576");
    noRelatedSym_0_1.set(MinPriceIncrement_84);
    Instrument_84.insert(MinPriceIncrement_84.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_84;
    MinPriceIncrementAmount_84.setString("12503506");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_84);
    Instrument_84.insert(MinPriceIncrementAmount_84.getString());
    FIX::NTPositionLimit NTPositionLimit_84(1636002556);
    noRelatedSym_0_1.set(NTPositionLimit_84);
    Instrument_84.insert(NTPositionLimit_84.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_84;
    NotionalPercentageOutstanding_84.setString("30.050000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_84);
    Instrument_84.insert(NotionalPercentageOutstanding_84.getString());
    FIX::OptAttribute OptAttribute_84('2');
    noRelatedSym_0_1.set(OptAttribute_84);
    Instrument_84.insert(OptAttribute_84.getString());
    FIX::OptPayoutAmount OptPayoutAmount_84;
    OptPayoutAmount_84.setString("20190328");
    noRelatedSym_0_1.set(OptPayoutAmount_84);
    Instrument_84.insert(OptPayoutAmount_84.getString());
    FIX::OptPayoutType OptPayoutType_84(1);
    noRelatedSym_0_1.set(OptPayoutType_84);
    Instrument_84.insert(OptPayoutType_84.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_84;
    OriginalNotionalPercentageOutstanding_84.setString("8.590000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_84);
    Instrument_84.insert(OriginalNotionalPercentageOutstanding_84.getString());
    FIX::Pool Pool_84("STRING_383701152");
    noRelatedSym_0_1.set(Pool_84);
    Instrument_84.insert(Pool_84.getString());
    FIX::PositionLimit PositionLimit_84(354611853);
    noRelatedSym_0_1.set(PositionLimit_84);
    Instrument_84.insert(PositionLimit_84.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_84("STRING_INT");
    noRelatedSym_0_1.set(PriceQuoteMethod_84);
    Instrument_84.insert(PriceQuoteMethod_84.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_84("STRING_1420879667");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_84);
    Instrument_84.insert(PriceUnitOfMeasure_84.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_84;
    PriceUnitOfMeasureQty_84.setString("8662436");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_84);
    Instrument_84.insert(PriceUnitOfMeasureQty_84.getString());
    FIX::Product Product_86(3);
    noRelatedSym_0_1.set(Product_86);
    Instrument_84.insert(Product_86.getString());
    FIX::ProductComplex ProductComplex_84("STRING_1606305333");
    noRelatedSym_0_1.set(ProductComplex_84);
    Instrument_84.insert(ProductComplex_84.getString());
    FIX::PutOrCall PutOrCall_84(1);
    noRelatedSym_0_1.set(PutOrCall_84);
    Instrument_84.insert(PutOrCall_84.getString());
    FIX::RedemptionDate RedemptionDate_84("LOCALMKTDATE_482605432");
    noRelatedSym_0_1.set(RedemptionDate_84);
    Instrument_84.insert(RedemptionDate_84.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_84("STRING_304129254");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_84);
    Instrument_84.insert(RepoCollateralSecurityType_84.getString());
    FIX::RepurchaseRate RepurchaseRate_84;
    RepurchaseRate_84.setString("11.660000");
    noRelatedSym_0_1.set(RepurchaseRate_84);
    Instrument_84.insert(RepurchaseRate_84.getString());
    FIX::RepurchaseTerm RepurchaseTerm_84(609766451);
    noRelatedSym_0_1.set(RepurchaseTerm_84);
    Instrument_84.insert(RepurchaseTerm_84.getString());
    FIX::RestructuringType RestructuringType_84("STRING_MR");
    noRelatedSym_0_1.set(RestructuringType_84);
    Instrument_84.insert(RestructuringType_84.getString());
    FIX::SecurityDesc SecurityDesc_84("STRING_191203135");
    noRelatedSym_0_1.set(SecurityDesc_84);
    Instrument_84.insert(SecurityDesc_84.getString());
    FIX::SecurityExchange SecurityExchange_84("EXCHANGE_1043589417");
    noRelatedSym_0_1.set(SecurityExchange_84);
    Instrument_84.insert(SecurityExchange_84.getString());
    FIX::SecurityGroup SecurityGroup_84("STRING_81520607");
    noRelatedSym_0_1.set(SecurityGroup_84);
    Instrument_84.insert(SecurityGroup_84.getString());
    FIX::SecurityID SecurityID_84("STRING_1590045686");
    noRelatedSym_0_1.set(SecurityID_84);
    Instrument_84.insert(SecurityID_84.getString());
    FIX::SecurityIDSource SecurityIDSource_84("STRING_8");
    noRelatedSym_0_1.set(SecurityIDSource_84);
    Instrument_84.insert(SecurityIDSource_84.getString());
    FIX::SecurityStatus SecurityStatus_84("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_84);
    Instrument_84.insert(SecurityStatus_84.getString());
    FIX::SecuritySubType SecuritySubType_85("STRING_127030441");
    noRelatedSym_0_1.set(SecuritySubType_85);
    Instrument_84.insert(SecuritySubType_85.getString());
    FIX::SecurityType SecurityType_86("STRING_SLQN");
    noRelatedSym_0_1.set(SecurityType_86);
    Instrument_84.insert(SecurityType_86.getString());
    FIX::Seniority Seniority_84("STRING_SB");
    noRelatedSym_0_1.set(Seniority_84);
    Instrument_84.insert(Seniority_84.getString());
    FIX::SettlMethod SettlMethod_84('C');
    noRelatedSym_0_1.set(SettlMethod_84);
    Instrument_84.insert(SettlMethod_84.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_84("STRING_1593607246");
    noRelatedSym_0_1.set(SettleOnOpenFlag_84);
    Instrument_84.insert(SettleOnOpenFlag_84.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_84("STRING_620536183");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_84);
    Instrument_84.insert(StateOrProvinceOfIssue_84.getString());
    FIX::StrikeCurrency StrikeCurrency_84("CHF");
    noRelatedSym_0_1.set(StrikeCurrency_84);
    Instrument_84.insert(StrikeCurrency_84.getString());
    FIX::StrikeMultiplier StrikeMultiplier_84;
    StrikeMultiplier_84.setString("6045226");
    noRelatedSym_0_1.set(StrikeMultiplier_84);
    Instrument_84.insert(StrikeMultiplier_84.getString());
    FIX::StrikePrice StrikePrice_84;
    StrikePrice_84.setString("3150235");
    noRelatedSym_0_1.set(StrikePrice_84);
    Instrument_84.insert(StrikePrice_84.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_84(1);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_84);
    Instrument_84.insert(StrikePriceBoundaryMethod_84.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_84;
    StrikePriceBoundaryPrecision_84.setString("34.790000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_84);
    Instrument_84.insert(StrikePriceBoundaryPrecision_84.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_84(3);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_84);
    Instrument_84.insert(StrikePriceDeterminationMethod_84.getString());
    FIX::StrikeValue StrikeValue_84;
    StrikeValue_84.setString("813969");
    noRelatedSym_0_1.set(StrikeValue_84);
    Instrument_84.insert(StrikeValue_84.getString());
    FIX::Symbol Symbol_84("STRING_927331633");
    noRelatedSym_0_1.set(Symbol_84);
    Instrument_84.insert(Symbol_84.getString());
    FIX::SymbolSfx SymbolSfx_84("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_84);
    Instrument_84.insert(SymbolSfx_84.getString());
    FIX::TimeUnit TimeUnit_84("STRING_D");
    noRelatedSym_0_1.set(TimeUnit_84);
    Instrument_84.insert(TimeUnit_84.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_84(3);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_84);
    Instrument_84.insert(UnderlyingPriceDeterminationMethod_84.getString());
    FIX::UnitOfMeasure UnitOfMeasure_84("STRING_Bu");
    noRelatedSym_0_1.set(UnitOfMeasure_84);
    Instrument_84.insert(UnitOfMeasure_84.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_84;
    UnitOfMeasureQty_84.setString("9616578");
    noRelatedSym_0_1.set(UnitOfMeasureQty_84);
    Instrument_84.insert(UnitOfMeasureQty_84.getString());
    FIX::ValuationMethod ValuationMethod_84("STRING_FUT");
    noRelatedSym_0_1.set(ValuationMethod_84);
    Instrument_84.insert(ValuationMethod_84.getString());
    all_values.push_back(Instrument_84);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_171;
      FIX::ComplexEventCondition ComplexEventCondition_171(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventCondition_171.getString());
      FIX::ComplexEventPrice ComplexEventPrice_171;
      ComplexEventPrice_171.setString("8890622");
      noComplexEvents_1_1_0.set(ComplexEventPrice_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventPrice_171.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_171(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceBoundaryMethod_171.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_171;
      ComplexEventPriceBoundaryPrecision_171.setString("21.730000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceBoundaryPrecision_171.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_171(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceTimeType_171.getString());
      FIX::ComplexEventType ComplexEventType_171(9);
      noComplexEvents_1_1_0.set(ComplexEventType_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventType_171.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_171;
      ComplexOptPayoutAmount_171.setString("6535742");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexOptPayoutAmount_171.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_171);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_346;
        FIX::ComplexEventEndDate ComplexEventEndDate_346(FIX::UTCTIMESTAMP(20, 9, 34, 11, 1, 2011));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_346);
        ComplexEventDates_NoComplexEventDates_346.insert(ComplexEventEndDate_346.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_346(FIX::UTCTIMESTAMP(19, 17, 32, 5, 2, 2004));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_346);
        ComplexEventDates_NoComplexEventDates_346.insert(ComplexEventStartDate_346.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_346);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_701;
          FIX::ComplexEventEndTime ComplexEventEndTime_701(FIX::UTCTIMEONLY(3, 16, 36));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_701);
          ComplexEventTimes_NoComplexEventTimes_701.insert(ComplexEventEndTime_701.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_701(FIX::UTCTIMEONLY(3, 3, 34));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_701);
          ComplexEventTimes_NoComplexEventTimes_701.insert(ComplexEventStartTime_701.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_701);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_347;
        FIX::ComplexEventEndDate ComplexEventEndDate_347(FIX::UTCTIMESTAMP(8, 25, 50, 27, 4, 2007));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_347);
        ComplexEventDates_NoComplexEventDates_347.insert(ComplexEventEndDate_347.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_347(FIX::UTCTIMESTAMP(2, 45, 9, 0, 9, 2015));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_347);
        ComplexEventDates_NoComplexEventDates_347.insert(ComplexEventStartDate_347.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_347);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_702;
          FIX::ComplexEventEndTime ComplexEventEndTime_702(FIX::UTCTIMEONLY(5, 7, 46));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_702);
          ComplexEventTimes_NoComplexEventTimes_702.insert(ComplexEventEndTime_702.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_702(FIX::UTCTIMEONLY(0, 0, 11));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_702);
          ComplexEventTimes_NoComplexEventTimes_702.insert(ComplexEventStartTime_702.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_702);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_348;
        FIX::ComplexEventEndDate ComplexEventEndDate_348(FIX::UTCTIMESTAMP(3, 27, 11, 17, 12, 2006));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_348);
        ComplexEventDates_NoComplexEventDates_348.insert(ComplexEventEndDate_348.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_348(FIX::UTCTIMESTAMP(0, 38, 28, 10, 3, 2017));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_348);
        ComplexEventDates_NoComplexEventDates_348.insert(ComplexEventStartDate_348.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_348);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_703;
          FIX::ComplexEventEndTime ComplexEventEndTime_703(FIX::UTCTIMEONLY(17, 56, 47));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_703);
          ComplexEventTimes_NoComplexEventTimes_703.insert(ComplexEventEndTime_703.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_703(FIX::UTCTIMEONLY(17, 37, 7));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_703);
          ComplexEventTimes_NoComplexEventTimes_703.insert(ComplexEventStartTime_703.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_703);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_704;
          FIX::ComplexEventEndTime ComplexEventEndTime_704(FIX::UTCTIMEONLY(6, 6, 10));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventEndTime_704);
          ComplexEventTimes_NoComplexEventTimes_704.insert(ComplexEventEndTime_704.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_704(FIX::UTCTIMEONLY(22, 10, 59));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventStartTime_704);
          ComplexEventTimes_NoComplexEventTimes_704.insert(ComplexEventStartTime_704.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_704);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_169;
      FIX::EventDate EventDate_169("LOCALMKTDATE_122368734");
      noEvents_1_1_0.set(EventDate_169);
      EvntGrp_NoEvents_169.insert(EventDate_169.getString());
      FIX::EventPx EventPx_169;
      EventPx_169.setString("3781724");
      noEvents_1_1_0.set(EventPx_169);
      EvntGrp_NoEvents_169.insert(EventPx_169.getString());
      FIX::EventText EventText_169("STRING_672925779");
      noEvents_1_1_0.set(EventText_169);
      EvntGrp_NoEvents_169.insert(EventText_169.getString());
      FIX::EventTime EventTime_169(FIX::UTCTIMESTAMP(18, 45, 34, 26, 1, 2009));
      noEvents_1_1_0.set(EventTime_169);
      EvntGrp_NoEvents_169.insert(EventTime_169.getString());
      FIX::EventType EventType_169(9);
      noEvents_1_1_0.set(EventType_169);
      EvntGrp_NoEvents_169.insert(EventType_169.getString());
      all_values.push_back(EvntGrp_NoEvents_169);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_170;
      FIX::EventDate EventDate_170("LOCALMKTDATE_1023196734");
      noEvents_1_1_1.set(EventDate_170);
      EvntGrp_NoEvents_170.insert(EventDate_170.getString());
      FIX::EventPx EventPx_170;
      EventPx_170.setString("3254200");
      noEvents_1_1_1.set(EventPx_170);
      EvntGrp_NoEvents_170.insert(EventPx_170.getString());
      FIX::EventText EventText_170("STRING_1222877079");
      noEvents_1_1_1.set(EventText_170);
      EvntGrp_NoEvents_170.insert(EventText_170.getString());
      FIX::EventTime EventTime_170(FIX::UTCTIMESTAMP(12, 35, 11, 9, 9, 2012));
      noEvents_1_1_1.set(EventTime_170);
      EvntGrp_NoEvents_170.insert(EventTime_170.getString());
      FIX::EventType EventType_170(17);
      noEvents_1_1_1.set(EventType_170);
      EvntGrp_NoEvents_170.insert(EventType_170.getString());
      all_values.push_back(EvntGrp_NoEvents_170);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_176;
      FIX::InstrumentPartyID InstrumentPartyID_176("STRING_201984106");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_176);
      InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyID_176.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_176('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_176);
      InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyIDSource_176.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_176(191178850);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_176);
      InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyRole_176.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_176);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342;
        FIX::InstrumentPartySubID InstrumentPartySubID_342("STRING_2016884448");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_342);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342.insert(InstrumentPartySubID_342.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_342(1407926060);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_342);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342.insert(InstrumentPartySubIDType_342.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343;
        FIX::InstrumentPartySubID InstrumentPartySubID_343("STRING_469435826");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_343);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343.insert(InstrumentPartySubID_343.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_343(395707209);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_343);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343.insert(InstrumentPartySubIDType_343.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344;
        FIX::InstrumentPartySubID InstrumentPartySubID_344("STRING_1530294794");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_344);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344.insert(InstrumentPartySubID_344.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_344(847608285);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_344);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344.insert(InstrumentPartySubIDType_344.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_177;
      FIX::InstrumentPartyID InstrumentPartyID_177("STRING_1068632988");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_177);
      InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyID_177.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_177('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_177);
      InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyIDSource_177.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_177(2038717431);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_177);
      InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyRole_177.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_177);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345;
        FIX::InstrumentPartySubID InstrumentPartySubID_345("STRING_20417404");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_345);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345.insert(InstrumentPartySubID_345.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_345(421756865);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_345);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345.insert(InstrumentPartySubIDType_345.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346;
        FIX::InstrumentPartySubID InstrumentPartySubID_346("STRING_1332949130");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_346);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346.insert(InstrumentPartySubID_346.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_346(1840641727);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_346);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346.insert(InstrumentPartySubIDType_346.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_178;
      FIX::InstrumentPartyID InstrumentPartyID_178("STRING_29183305");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_178);
      InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyID_178.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_178('2');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_178);
      InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyIDSource_178.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_178(18578177);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_178);
      InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyRole_178.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_178);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347;
        FIX::InstrumentPartySubID InstrumentPartySubID_347("STRING_308300340");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_347);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347.insert(InstrumentPartySubID_347.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_347(354791645);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_347);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347.insert(InstrumentPartySubIDType_347.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348;
        FIX::InstrumentPartySubID InstrumentPartySubID_348("STRING_967089092");
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubID_348);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348.insert(InstrumentPartySubID_348.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_348(2030110511);
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubIDType_348);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348.insert(InstrumentPartySubIDType_348.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_158;
      FIX::SecurityAltID SecurityAltID_158("STRING_2081497816");
      noSecurityAltID_1_1_0.set(SecurityAltID_158);
      SecAltIDGrp_NoSecurityAltID_158.insert(SecurityAltID_158.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_158("STRING_1610500732");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_158);
      SecAltIDGrp_NoSecurityAltID_158.insert(SecurityAltIDSource_158.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_158);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_168;
    FIX::SecurityXML SecurityXML_169("XMLDATA_1375478279");
    noRelatedSym_0_1.set(SecurityXML_169);
    FIX::SecurityXMLLen SecurityXMLLen_84(1091614816);
    noRelatedSym_0_1.set(SecurityXMLLen_84);
    FIX::SecurityXMLSchema SecurityXMLSchema_84("STRING_1812484838");
    noRelatedSym_0_1.set(SecurityXMLSchema_84);
    SecurityXML_168.insert(SecurityXMLSchema_84.getString());
    all_values.push_back(SecurityXML_168);
    all_compo_names.insert("SecurityXML");

    // InstrumentExtension
    multiset<string> InstrumentExtension_13;
    FIX::DeliveryForm DeliveryForm_13(1);
    noRelatedSym_0_1.set(DeliveryForm_13);
    InstrumentExtension_13.insert(DeliveryForm_13.getString());
    FIX::PctAtRisk PctAtRisk_13;
    PctAtRisk_13.setString("36.660000");
    noRelatedSym_0_1.set(PctAtRisk_13);
    InstrumentExtension_13.insert(PctAtRisk_13.getString());
    all_values.push_back(InstrumentExtension_13);
    all_compo_names.insert("InstrumentExtension");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_24;
      FIX::InstrAttribType InstrAttribType_24(5);
      noInstrAttrib_1_1_0.set(InstrAttribType_24);
      AttrbGrp_NoInstrAttrib_24.insert(InstrAttribType_24.getString());
      FIX::InstrAttribValue InstrAttribValue_24("STRING_543236079");
      noInstrAttrib_1_1_0.set(InstrAttribValue_24);
      AttrbGrp_NoInstrAttrib_24.insert(InstrAttribValue_24.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_24);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_25;
      FIX::InstrAttribType InstrAttribType_25(3);
      noInstrAttrib_1_1_1.set(InstrAttribType_25);
      AttrbGrp_NoInstrAttrib_25.insert(InstrAttribType_25.getString());
      FIX::InstrAttribValue InstrAttribValue_25("STRING_1475338843");
      noInstrAttrib_1_1_1.set(InstrAttribValue_25);
      AttrbGrp_NoInstrAttrib_25.insert(InstrAttribValue_25.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_25);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_26;
      FIX::InstrAttribType InstrAttribType_26(24);
      noInstrAttrib_1_1_2.set(InstrAttribType_26);
      AttrbGrp_NoInstrAttrib_26.insert(InstrAttribType_26.getString());
      FIX::InstrAttribValue InstrAttribValue_26("STRING_84609849");
      noInstrAttrib_1_1_2.set(InstrAttribValue_26);
      AttrbGrp_NoInstrAttrib_26.insert(InstrAttribValue_26.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_26);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_2);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_13;
    FIX::ExpirationCycle ExpirationCycle_14(0);
    noRelatedSym_0_1.set(ExpirationCycle_14);
    BaseTradingRules_13.insert(ExpirationCycle_14.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_13(3);
    noRelatedSym_0_1.set(ImpliedMarketIndicator_13);
    BaseTradingRules_13.insert(ImpliedMarketIndicator_13.getString());
    FIX::MaxPriceVariation MaxPriceVariation_13;
    MaxPriceVariation_13.setString("21233272");
    noRelatedSym_0_1.set(MaxPriceVariation_13);
    BaseTradingRules_13.insert(MaxPriceVariation_13.getString());
    FIX::MaxTradeVol MaxTradeVol_13;
    MaxTradeVol_13.setString("714396");
    noRelatedSym_0_1.set(MaxTradeVol_13);
    BaseTradingRules_13.insert(MaxTradeVol_13.getString());
    FIX::MinTradeVol MinTradeVol_13;
    MinTradeVol_13.setString("9531119");
    noRelatedSym_0_1.set(MinTradeVol_13);
    BaseTradingRules_13.insert(MinTradeVol_13.getString());
    FIX::MultilegModel MultilegModel_15(1);
    noRelatedSym_0_1.set(MultilegModel_15);
    BaseTradingRules_13.insert(MultilegModel_15.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_15(4);
    noRelatedSym_0_1.set(MultilegPriceMethod_15);
    BaseTradingRules_13.insert(MultilegPriceMethod_15.getString());
    FIX::PriceType PriceType_47(3);
    noRelatedSym_0_1.set(PriceType_47);
    BaseTradingRules_13.insert(PriceType_47.getString());
    FIX::RoundLot RoundLot_13;
    RoundLot_13.setString("4267838");
    noRelatedSym_0_1.set(RoundLot_13);
    BaseTradingRules_13.insert(RoundLot_13.getString());
    FIX::TradingCurrency TradingCurrency_13("EUR");
    noRelatedSym_0_1.set(TradingCurrency_13);
    BaseTradingRules_13.insert(TradingCurrency_13.getString());
    all_values.push_back(BaseTradingRules_13);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_27;
      FIX::LotType LotType_31('1');
      noLotTypeRules_1_1_0.set(LotType_31);
      LotTypeRules_NoLotTypeRules_27.insert(LotType_31.getString());
      FIX::MinLotSize MinLotSize_27;
      MinLotSize_27.setString("10196398");
      noLotTypeRules_1_1_0.set(MinLotSize_27);
      LotTypeRules_NoLotTypeRules_27.insert(MinLotSize_27.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_27);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noRelatedSym_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_28;
      FIX::LotType LotType_32('1');
      noLotTypeRules_1_1_1.set(LotType_32);
      LotTypeRules_NoLotTypeRules_28.insert(LotType_32.getString());
      FIX::MinLotSize MinLotSize_28;
      MinLotSize_28.setString("18039781");
      noLotTypeRules_1_1_1.set(MinLotSize_28);
      LotTypeRules_NoLotTypeRules_28.insert(MinLotSize_28.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_28);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noRelatedSym_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_13;
    FIX::HighLimitPrice HighLimitPrice_13;
    HighLimitPrice_13.setString("19616264");
    noRelatedSym_0_1.set(HighLimitPrice_13);
    PriceLimits_13.insert(HighLimitPrice_13.getString());
    FIX::LowLimitPrice LowLimitPrice_13;
    LowLimitPrice_13.setString("4324638");
    noRelatedSym_0_1.set(LowLimitPrice_13);
    PriceLimits_13.insert(LowLimitPrice_13.getString());
    FIX::PriceLimitType PriceLimitType_13(0);
    noRelatedSym_0_1.set(PriceLimitType_13);
    PriceLimits_13.insert(PriceLimitType_13.getString());
    FIX::TradingReferencePrice TradingReferencePrice_13;
    TradingReferencePrice_13.setString("11896211");
    noRelatedSym_0_1.set(TradingReferencePrice_13);
    PriceLimits_13.insert(TradingReferencePrice_13.getString());
    all_values.push_back(PriceLimits_13);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_28;
      FIX::EndTickPriceRange EndTickPriceRange_28;
      EndTickPriceRange_28.setString("9319964");
      noTickRules_1_1_0.set(EndTickPriceRange_28);
      TickRules_NoTickRules_28.insert(EndTickPriceRange_28.getString());
      FIX::StartTickPriceRange StartTickPriceRange_28;
      StartTickPriceRange_28.setString("2523683");
      noTickRules_1_1_0.set(StartTickPriceRange_28);
      TickRules_NoTickRules_28.insert(StartTickPriceRange_28.getString());
      FIX::TickIncrement TickIncrement_28;
      TickIncrement_28.setString("6593886");
      noTickRules_1_1_0.set(TickIncrement_28);
      TickRules_NoTickRules_28.insert(TickIncrement_28.getString());
      FIX::TickRuleType TickRuleType_28(4);
      noTickRules_1_1_0.set(TickRuleType_28);
      TickRules_NoTickRules_28.insert(TickRuleType_28.getString());
      all_values.push_back(TickRules_NoTickRules_28);
      all_compo_names.insert("TickRules.NoTickRules");

      noRelatedSym_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_29;
      FIX::EndTickPriceRange EndTickPriceRange_29;
      EndTickPriceRange_29.setString("13319999");
      noTickRules_1_1_1.set(EndTickPriceRange_29);
      TickRules_NoTickRules_29.insert(EndTickPriceRange_29.getString());
      FIX::StartTickPriceRange StartTickPriceRange_29;
      StartTickPriceRange_29.setString("12026247");
      noTickRules_1_1_1.set(StartTickPriceRange_29);
      TickRules_NoTickRules_29.insert(StartTickPriceRange_29.getString());
      FIX::TickIncrement TickIncrement_29;
      TickIncrement_29.setString("10840474");
      noTickRules_1_1_1.set(TickIncrement_29);
      TickRules_NoTickRules_29.insert(TickIncrement_29.getString());
      FIX::TickRuleType TickRuleType_29(4);
      noTickRules_1_1_1.set(TickRuleType_29);
      TickRules_NoTickRules_29.insert(TickRuleType_29.getString());
      all_values.push_back(TickRules_NoTickRules_29);
      all_compo_names.insert("TickRules.NoTickRules");

      noRelatedSym_0_1.addGroup(noTickRules_1_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_1_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_30;
      FIX::EndTickPriceRange EndTickPriceRange_30;
      EndTickPriceRange_30.setString("11286719");
      noTickRules_1_1_2.set(EndTickPriceRange_30);
      TickRules_NoTickRules_30.insert(EndTickPriceRange_30.getString());
      FIX::StartTickPriceRange StartTickPriceRange_30;
      StartTickPriceRange_30.setString("11686572");
      noTickRules_1_1_2.set(StartTickPriceRange_30);
      TickRules_NoTickRules_30.insert(StartTickPriceRange_30.getString());
      FIX::TickIncrement TickIncrement_30;
      TickIncrement_30.setString("10563433");
      noTickRules_1_1_2.set(TickIncrement_30);
      TickRules_NoTickRules_30.insert(TickIncrement_30.getString());
      FIX::TickRuleType TickRuleType_30(3);
      noTickRules_1_1_2.set(TickRuleType_30);
      TickRules_NoTickRules_30.insert(TickRuleType_30.getString());
      all_values.push_back(TickRules_NoTickRules_30);
      all_compo_names.insert("TickRules.NoTickRules");

      noRelatedSym_0_1.addGroup(noTickRules_1_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_23;
      FIX::NestedInstrAttribType NestedInstrAttribType_23(1127782973);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_23);
      NestedInstrumentAttribute_NoNestedInstrAttrib_23.insert(NestedInstrAttribType_23.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_23("STRING_866994702");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_23);
      NestedInstrumentAttribute_NoNestedInstrAttrib_23.insert(NestedInstrAttribValue_23.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_23);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_22;
      FIX::TradingSessionID TradingSessionID_104("STRING_2");
      noTradingSessionRules_1_1_0.set(TradingSessionID_104);
      TradingSessionRulesGrp_NoTradingSessionRules_22.insert(TradingSessionID_104.getString());
      FIX::TradingSessionSubID TradingSessionSubID_104("STRING_6");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_104);
      TradingSessionRulesGrp_NoTradingSessionRules_22.insert(TradingSessionSubID_104.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_22);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_46;
        FIX::ExecInstValue ExecInstValue_46('1');
        noExecInstRules_1_0_2_0.set(ExecInstValue_46);
        ExecInstRules_NoExecInstRules_46.insert(ExecInstValue_46.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_46);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_47;
        FIX::ExecInstValue ExecInstValue_47('3');
        noExecInstRules_1_0_2_1.set(ExecInstValue_47);
        ExecInstRules_NoExecInstRules_47.insert(ExecInstValue_47.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_47);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_43;
        FIX::MDBookType MDBookType_45(2);
        noMDFeedTypes_1_0_2_0.set(MDBookType_45);
        MarketDataFeedTypes_NoMDFeedTypes_43.insert(MDBookType_45.getString());
        FIX::MDFeedType MDFeedType_45("STRING_1050269013");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_45);
        MarketDataFeedTypes_NoMDFeedTypes_43.insert(MDFeedType_45.getString());
        FIX::MarketDepth MarketDepth_46(1998695381);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_46);
        MarketDataFeedTypes_NoMDFeedTypes_43.insert(MarketDepth_46.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_43);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_44;
        FIX::MDBookType MDBookType_46(2);
        noMDFeedTypes_1_0_2_1.set(MDBookType_46);
        MarketDataFeedTypes_NoMDFeedTypes_44.insert(MDBookType_46.getString());
        FIX::MDFeedType MDFeedType_46("STRING_864411857");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_46);
        MarketDataFeedTypes_NoMDFeedTypes_44.insert(MDFeedType_46.getString());
        FIX::MarketDepth MarketDepth_47(283675534);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_47);
        MarketDataFeedTypes_NoMDFeedTypes_44.insert(MarketDepth_47.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_44);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_46;
        FIX::MatchAlgorithm MatchAlgorithm_46("STRING_2054032980");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_46);
        MatchRules_NoMatchRules_46.insert(MatchAlgorithm_46.getString());
        FIX::MatchType MatchType_51("STRING_S5");
        noMatchRules_1_0_2_0.set(MatchType_51);
        MatchRules_NoMatchRules_46.insert(MatchType_51.getString());
        all_values.push_back(MatchRules_NoMatchRules_46);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_47;
        FIX::MatchAlgorithm MatchAlgorithm_47("STRING_1479609450");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_47);
        MatchRules_NoMatchRules_47.insert(MatchAlgorithm_47.getString());
        FIX::MatchType MatchType_52("STRING_1");
        noMatchRules_1_0_2_1.set(MatchType_52);
        MatchRules_NoMatchRules_47.insert(MatchType_52.getString());
        all_values.push_back(MatchRules_NoMatchRules_47);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_48;
        FIX::MatchAlgorithm MatchAlgorithm_48("STRING_319659140");
        noMatchRules_1_0_2_2.set(MatchAlgorithm_48);
        MatchRules_NoMatchRules_48.insert(MatchAlgorithm_48.getString());
        FIX::MatchType MatchType_53("STRING_7");
        noMatchRules_1_0_2_2.set(MatchType_53);
        MatchRules_NoMatchRules_48.insert(MatchType_53.getString());
        all_values.push_back(MatchRules_NoMatchRules_48);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_45;
        FIX::OrdType OrdType_78('Q');
        noOrdTypeRules_1_0_2_0.set(OrdType_78);
        OrdTypeRules_NoOrdTypeRules_45.insert(OrdType_78.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_45);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_46;
        FIX::OrdType OrdType_79('M');
        noOrdTypeRules_1_0_2_1.set(OrdType_79);
        OrdTypeRules_NoOrdTypeRules_46.insert(OrdType_79.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_46);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_47;
        FIX::OrdType OrdType_80('M');
        noOrdTypeRules_1_0_2_2.set(OrdType_80);
        OrdTypeRules_NoOrdTypeRules_47.insert(OrdType_80.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_47);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_45;
        FIX::TimeInForce TimeInForce_58('0');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_58);
        TimeInForceRules_NoTimeInForceRules_45.insert(TimeInForce_58.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_45);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_23;
      FIX::TradingSessionID TradingSessionID_105("STRING_2");
      noTradingSessionRules_1_1_1.set(TradingSessionID_105);
      TradingSessionRulesGrp_NoTradingSessionRules_23.insert(TradingSessionID_105.getString());
      FIX::TradingSessionSubID TradingSessionSubID_105("STRING_6");
      noTradingSessionRules_1_1_1.set(TradingSessionSubID_105);
      TradingSessionRulesGrp_NoTradingSessionRules_23.insert(TradingSessionSubID_105.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_23);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_48;
        FIX::ExecInstValue ExecInstValue_48('3');
        noExecInstRules_1_1_2_0.set(ExecInstValue_48);
        ExecInstRules_NoExecInstRules_48.insert(ExecInstValue_48.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_48);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_49;
        FIX::ExecInstValue ExecInstValue_49('1');
        noExecInstRules_1_1_2_1.set(ExecInstValue_49);
        ExecInstRules_NoExecInstRules_49.insert(ExecInstValue_49.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_49);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_50;
        FIX::ExecInstValue ExecInstValue_50('1');
        noExecInstRules_1_1_2_2.set(ExecInstValue_50);
        ExecInstRules_NoExecInstRules_50.insert(ExecInstValue_50.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_50);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_45;
        FIX::MDBookType MDBookType_47(3);
        noMDFeedTypes_1_1_2_0.set(MDBookType_47);
        MarketDataFeedTypes_NoMDFeedTypes_45.insert(MDBookType_47.getString());
        FIX::MDFeedType MDFeedType_47("STRING_1644912933");
        noMDFeedTypes_1_1_2_0.set(MDFeedType_47);
        MarketDataFeedTypes_NoMDFeedTypes_45.insert(MDFeedType_47.getString());
        FIX::MarketDepth MarketDepth_48(274875285);
        noMDFeedTypes_1_1_2_0.set(MarketDepth_48);
        MarketDataFeedTypes_NoMDFeedTypes_45.insert(MarketDepth_48.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_45);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_49;
        FIX::MatchAlgorithm MatchAlgorithm_49("STRING_997675034");
        noMatchRules_1_1_2_0.set(MatchAlgorithm_49);
        MatchRules_NoMatchRules_49.insert(MatchAlgorithm_49.getString());
        FIX::MatchType MatchType_54("STRING_2");
        noMatchRules_1_1_2_0.set(MatchType_54);
        MatchRules_NoMatchRules_49.insert(MatchType_54.getString());
        all_values.push_back(MatchRules_NoMatchRules_49);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_50;
        FIX::MatchAlgorithm MatchAlgorithm_50("STRING_1731028903");
        noMatchRules_1_1_2_1.set(MatchAlgorithm_50);
        MatchRules_NoMatchRules_50.insert(MatchAlgorithm_50.getString());
        FIX::MatchType MatchType_55("STRING_3");
        noMatchRules_1_1_2_1.set(MatchType_55);
        MatchRules_NoMatchRules_50.insert(MatchType_55.getString());
        all_values.push_back(MatchRules_NoMatchRules_50);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_48;
        FIX::OrdType OrdType_81('H');
        noOrdTypeRules_1_1_2_0.set(OrdType_81);
        OrdTypeRules_NoOrdTypeRules_48.insert(OrdType_81.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_48);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_49;
        FIX::OrdType OrdType_82('P');
        noOrdTypeRules_1_1_2_1.set(OrdType_82);
        OrdTypeRules_NoOrdTypeRules_49.insert(OrdType_82.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_49);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_46;
        FIX::TimeInForce TimeInForce_59('4');
        noTimeInForceRules_1_1_2_0.set(TimeInForce_59);
        TimeInForceRules_NoTimeInForceRules_46.insert(TimeInForce_59.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_46);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_31;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_31("CAN");
    noRelatedSym_0_1.set(BenchmarkCurveCurrency_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurveCurrency_31.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_31("STRING_MuniAAA");
    noRelatedSym_0_1.set(BenchmarkCurveName_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurveName_31.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_31("STRING_1112491946");
    noRelatedSym_0_1.set(BenchmarkCurvePoint_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurvePoint_31.getString());
    FIX::BenchmarkPrice BenchmarkPrice_31;
    BenchmarkPrice_31.setString("2385265");
    noRelatedSym_0_1.set(BenchmarkPrice_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkPrice_31.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_31(2004341672);
    noRelatedSym_0_1.set(BenchmarkPriceType_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkPriceType_31.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_31("STRING_487292153");
    noRelatedSym_0_1.set(BenchmarkSecurityID_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkSecurityID_31.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_31("STRING_354261998");
    noRelatedSym_0_1.set(BenchmarkSecurityIDSource_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkSecurityIDSource_31.getString());
    FIX::Spread Spread_31;
    Spread_31.setString("20076307");
    noRelatedSym_0_1.set(Spread_31);
    SpreadOrBenchmarkCurveData_31.insert(Spread_31.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_31);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_52;
      FIX::StipulationType StipulationType_52("STRING_YTM");
      noStipulations_1_1_0.set(StipulationType_52);
      Stipulations_NoStipulations_52.insert(StipulationType_52.getString());
      FIX::StipulationValue StipulationValue_52("STRING_919779503");
      noStipulations_1_1_0.set(StipulationValue_52);
      Stipulations_NoStipulations_52.insert(StipulationValue_52.getString());
      all_values.push_back(Stipulations_NoStipulations_52);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_21;
      FIX::EndStrikePxRange EndStrikePxRange_21;
      EndStrikePxRange_21.setString("19200646");
      noStrikeRules_1_1_0.set(EndStrikePxRange_21);
      StrikeRules_NoStrikeRules_21.insert(EndStrikePxRange_21.getString());
      FIX::StartStrikePxRange StartStrikePxRange_21;
      StartStrikePxRange_21.setString("9597112");
      noStrikeRules_1_1_0.set(StartStrikePxRange_21);
      StrikeRules_NoStrikeRules_21.insert(StartStrikePxRange_21.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_21(544985241);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_21);
      StrikeRules_NoStrikeRules_21.insert(StrikeExerciseStyle_21.getString());
      FIX::StrikeIncrement StrikeIncrement_21;
      StrikeIncrement_21.setString("15960924");
      noStrikeRules_1_1_0.set(StrikeIncrement_21);
      StrikeRules_NoStrikeRules_21.insert(StrikeIncrement_21.getString());
      FIX::StrikeRuleID StrikeRuleID_21("STRING_1384331061");
      noStrikeRules_1_1_0.set(StrikeRuleID_21);
      StrikeRules_NoStrikeRules_21.insert(StrikeRuleID_21.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_21);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_44;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_44("MONTHYEAR_1093521688");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_44);
        MaturityRules_NoMaturityRules_44.insert(EndMaturityMonthYear_44.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_44(1);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_44);
        MaturityRules_NoMaturityRules_44.insert(MaturityMonthYearFormat_44.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_44(1875875817);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_44);
        MaturityRules_NoMaturityRules_44.insert(MaturityMonthYearIncrement_44.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_44(2);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_44);
        MaturityRules_NoMaturityRules_44.insert(MaturityMonthYearIncrementUnits_44.getString());
        FIX::MaturityRuleID MaturityRuleID_44("STRING_1558204774");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_44);
        MaturityRules_NoMaturityRules_44.insert(MaturityRuleID_44.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_44("MONTHYEAR_1459421072");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_44);
        MaturityRules_NoMaturityRules_44.insert(StartMaturityMonthYear_44.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_44);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_45;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_45("MONTHYEAR_792599842");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_45);
        MaturityRules_NoMaturityRules_45.insert(EndMaturityMonthYear_45.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_45(0);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_45);
        MaturityRules_NoMaturityRules_45.insert(MaturityMonthYearFormat_45.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_45(1907378184);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_45);
        MaturityRules_NoMaturityRules_45.insert(MaturityMonthYearIncrement_45.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_45(1);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_45);
        MaturityRules_NoMaturityRules_45.insert(MaturityMonthYearIncrementUnits_45.getString());
        FIX::MaturityRuleID MaturityRuleID_45("STRING_465049990");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_45);
        MaturityRules_NoMaturityRules_45.insert(MaturityRuleID_45.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_45("MONTHYEAR_114400981");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_45);
        MaturityRules_NoMaturityRules_45.insert(StartMaturityMonthYear_45.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_45);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_46;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_46("MONTHYEAR_570511303");
        noMaturityRules_1_0_2_2.set(EndMaturityMonthYear_46);
        MaturityRules_NoMaturityRules_46.insert(EndMaturityMonthYear_46.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_46(0);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearFormat_46);
        MaturityRules_NoMaturityRules_46.insert(MaturityMonthYearFormat_46.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_46(627825067);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrement_46);
        MaturityRules_NoMaturityRules_46.insert(MaturityMonthYearIncrement_46.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_46(2);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrementUnits_46);
        MaturityRules_NoMaturityRules_46.insert(MaturityMonthYearIncrementUnits_46.getString());
        FIX::MaturityRuleID MaturityRuleID_46("STRING_1910415098");
        noMaturityRules_1_0_2_2.set(MaturityRuleID_46);
        MaturityRules_NoMaturityRules_46.insert(MaturityRuleID_46.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_46("MONTHYEAR_484683092");
        noMaturityRules_1_0_2_2.set(StartMaturityMonthYear_46);
        MaturityRules_NoMaturityRules_46.insert(StartMaturityMonthYear_46.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_46);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noStrikeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_1_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_22;
      FIX::EndStrikePxRange EndStrikePxRange_22;
      EndStrikePxRange_22.setString("228117");
      noStrikeRules_1_1_1.set(EndStrikePxRange_22);
      StrikeRules_NoStrikeRules_22.insert(EndStrikePxRange_22.getString());
      FIX::StartStrikePxRange StartStrikePxRange_22;
      StartStrikePxRange_22.setString("1171934");
      noStrikeRules_1_1_1.set(StartStrikePxRange_22);
      StrikeRules_NoStrikeRules_22.insert(StartStrikePxRange_22.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_22(344830194);
      noStrikeRules_1_1_1.set(StrikeExerciseStyle_22);
      StrikeRules_NoStrikeRules_22.insert(StrikeExerciseStyle_22.getString());
      FIX::StrikeIncrement StrikeIncrement_22;
      StrikeIncrement_22.setString("10135760");
      noStrikeRules_1_1_1.set(StrikeIncrement_22);
      StrikeRules_NoStrikeRules_22.insert(StrikeIncrement_22.getString());
      FIX::StrikeRuleID StrikeRuleID_22("STRING_1755848158");
      noStrikeRules_1_1_1.set(StrikeRuleID_22);
      StrikeRules_NoStrikeRules_22.insert(StrikeRuleID_22.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_22);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_47;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_47("MONTHYEAR_274211652");
        noMaturityRules_1_1_2_0.set(EndMaturityMonthYear_47);
        MaturityRules_NoMaturityRules_47.insert(EndMaturityMonthYear_47.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_47(2);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearFormat_47);
        MaturityRules_NoMaturityRules_47.insert(MaturityMonthYearFormat_47.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_47(76837278);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearIncrement_47);
        MaturityRules_NoMaturityRules_47.insert(MaturityMonthYearIncrement_47.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_47(2);
        noMaturityRules_1_1_2_0.set(MaturityMonthYearIncrementUnits_47);
        MaturityRules_NoMaturityRules_47.insert(MaturityMonthYearIncrementUnits_47.getString());
        FIX::MaturityRuleID MaturityRuleID_47("STRING_977037942");
        noMaturityRules_1_1_2_0.set(MaturityRuleID_47);
        MaturityRules_NoMaturityRules_47.insert(MaturityRuleID_47.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_47("MONTHYEAR_1461168340");
        noMaturityRules_1_1_2_0.set(StartMaturityMonthYear_47);
        MaturityRules_NoMaturityRules_47.insert(StartMaturityMonthYear_47.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_47);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_48;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_48("MONTHYEAR_2014312821");
        noMaturityRules_1_1_2_1.set(EndMaturityMonthYear_48);
        MaturityRules_NoMaturityRules_48.insert(EndMaturityMonthYear_48.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_48(1);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearFormat_48);
        MaturityRules_NoMaturityRules_48.insert(MaturityMonthYearFormat_48.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_48(972891039);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearIncrement_48);
        MaturityRules_NoMaturityRules_48.insert(MaturityMonthYearIncrement_48.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_48(3);
        noMaturityRules_1_1_2_1.set(MaturityMonthYearIncrementUnits_48);
        MaturityRules_NoMaturityRules_48.insert(MaturityMonthYearIncrementUnits_48.getString());
        FIX::MaturityRuleID MaturityRuleID_48("STRING_2014272704");
        noMaturityRules_1_1_2_1.set(MaturityRuleID_48);
        MaturityRules_NoMaturityRules_48.insert(MaturityRuleID_48.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_48("MONTHYEAR_383612165");
        noMaturityRules_1_1_2_1.set(StartMaturityMonthYear_48);
        MaturityRules_NoMaturityRules_48.insert(StartMaturityMonthYear_48.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_48);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_49;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_49("MONTHYEAR_1054642415");
        noMaturityRules_1_1_2_2.set(EndMaturityMonthYear_49);
        MaturityRules_NoMaturityRules_49.insert(EndMaturityMonthYear_49.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_49(2);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearFormat_49);
        MaturityRules_NoMaturityRules_49.insert(MaturityMonthYearFormat_49.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_49(1121433059);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearIncrement_49);
        MaturityRules_NoMaturityRules_49.insert(MaturityMonthYearIncrement_49.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_49(0);
        noMaturityRules_1_1_2_2.set(MaturityMonthYearIncrementUnits_49);
        MaturityRules_NoMaturityRules_49.insert(MaturityMonthYearIncrementUnits_49.getString());
        FIX::MaturityRuleID MaturityRuleID_49("STRING_437067396");
        noMaturityRules_1_1_2_2.set(MaturityRuleID_49);
        MaturityRules_NoMaturityRules_49.insert(MaturityRuleID_49.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_49("MONTHYEAR_1586483049");
        noMaturityRules_1_1_2_2.set(StartMaturityMonthYear_49);
        MaturityRules_NoMaturityRules_49.insert(StartMaturityMonthYear_49.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_49);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noStrikeRules_1_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_132;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_132("DATA_1007578699");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_132);
      UnderlyingInstrument_132.insert(EncodedUnderlyingIssuer_132.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_132(1110887939);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_132);
      UnderlyingInstrument_132.insert(EncodedUnderlyingIssuerLen_132.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_132("DATA_1556763000");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_132);
      UnderlyingInstrument_132.insert(EncodedUnderlyingSecurityDesc_132.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_132(543098301);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_132);
      UnderlyingInstrument_132.insert(EncodedUnderlyingSecurityDescLen_132.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_132;
      UnderlyingAdjustedQuantity_132.setString("8738193");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_132);
      UnderlyingInstrument_132.insert(UnderlyingAdjustedQuantity_132.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_132;
      UnderlyingAllocationPercent_132.setString("60.920000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_132);
      UnderlyingInstrument_132.insert(UnderlyingAllocationPercent_132.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_132;
      UnderlyingAttachmentPoint_132.setString("0.570000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_132);
      UnderlyingInstrument_132.insert(UnderlyingAttachmentPoint_132.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_132("STRING_991012838");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_132);
      UnderlyingInstrument_132.insert(UnderlyingCFICode_132.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_132("STRING_238792638");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_132);
      UnderlyingInstrument_132.insert(UnderlyingCPProgram_132.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_132("STRING_1579486113");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_132);
      UnderlyingInstrument_132.insert(UnderlyingCPRegType_132.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_132;
      UnderlyingCapValue_132.setString("5993773");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_132);
      UnderlyingInstrument_132.insert(UnderlyingCapValue_132.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_132;
      UnderlyingCashAmount_132.setString("15034023");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_132);
      UnderlyingInstrument_132.insert(UnderlyingCashAmount_132.getString());
      FIX::UnderlyingCashType UnderlyingCashType_132("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_132);
      UnderlyingInstrument_132.insert(UnderlyingCashType_132.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_132;
      UnderlyingContractMultiplier_132.setString("21278065");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_132);
      UnderlyingInstrument_132.insert(UnderlyingContractMultiplier_132.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_132(1580239614);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_132);
      UnderlyingInstrument_132.insert(UnderlyingContractMultiplierUnit_132.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_132("COUNTRY_525411012");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_132);
      UnderlyingInstrument_132.insert(UnderlyingCountryOfIssue_132.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_132("LOCALMKTDATE_957360830");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_132);
      UnderlyingInstrument_132.insert(UnderlyingCouponPaymentDate_132.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_132;
      UnderlyingCouponRate_132.setString("43.060000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_132);
      UnderlyingInstrument_132.insert(UnderlyingCouponRate_132.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_132("STRING_392240185");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_132);
      UnderlyingInstrument_132.insert(UnderlyingCreditRating_132.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_132("CAN");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_132);
      UnderlyingInstrument_132.insert(UnderlyingCurrency_132.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_132;
      UnderlyingCurrentValue_132.setString("21349451");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_132);
      UnderlyingInstrument_132.insert(UnderlyingCurrentValue_132.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_132;
      UnderlyingDetachmentPoint_132.setString("58.680000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_132);
      UnderlyingInstrument_132.insert(UnderlyingDetachmentPoint_132.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_132;
      UnderlyingDirtyPrice_132.setString("1029438");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_132);
      UnderlyingInstrument_132.insert(UnderlyingDirtyPrice_132.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_132;
      UnderlyingEndPrice_132.setString("10421039");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_132);
      UnderlyingInstrument_132.insert(UnderlyingEndPrice_132.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_132;
      UnderlyingEndValue_132.setString("14066147");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_132);
      UnderlyingInstrument_132.insert(UnderlyingEndValue_132.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_132(1224376921);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_132);
      UnderlyingInstrument_132.insert(UnderlyingExerciseStyle_132.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_132;
      UnderlyingFXRate_132.setString("18566408");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_132);
      UnderlyingInstrument_132.insert(UnderlyingFXRate_132.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_132('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_132);
      UnderlyingInstrument_132.insert(UnderlyingFXRateCalc_132.getString());
      FIX::UnderlyingFactor UnderlyingFactor_132;
      UnderlyingFactor_132.setString("6633763");
      noUnderlyings_1_1_0.set(UnderlyingFactor_132);
      UnderlyingInstrument_132.insert(UnderlyingFactor_132.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_132(638095181);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_132);
      UnderlyingInstrument_132.insert(UnderlyingFlowScheduleType_132.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_132("STRING_703777215");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_132);
      UnderlyingInstrument_132.insert(UnderlyingInstrRegistry_132.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_132("LOCALMKTDATE_1774264261");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_132);
      UnderlyingInstrument_132.insert(UnderlyingIssueDate_132.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_132("STRING_47374533");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_132);
      UnderlyingInstrument_132.insert(UnderlyingIssuer_132.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_132("STRING_1246875516");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_132);
      UnderlyingInstrument_132.insert(UnderlyingLocaleOfIssue_132.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_132("LOCALMKTDATE_500600003");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_132);
      UnderlyingInstrument_132.insert(UnderlyingMaturityDate_132.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_132("MONTHYEAR_2088820626");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_132);
      UnderlyingInstrument_132.insert(UnderlyingMaturityMonthYear_132.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_132("TZTIMEONLY_1812785573");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_132);
      UnderlyingInstrument_132.insert(UnderlyingMaturityTime_132.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_132;
      UnderlyingNotionalPercentageOutstanding_132.setString("28.410000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_132);
      UnderlyingInstrument_132.insert(UnderlyingNotionalPercentageOutstanding_132.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_132('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_132);
      UnderlyingInstrument_132.insert(UnderlyingOptAttribute_132.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_132;
      UnderlyingOriginalNotionalPercentageOutstanding_132.setString("80.390000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_132);
      UnderlyingInstrument_132.insert(UnderlyingOriginalNotionalPercentageOutstanding_132.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_132("STRING_2090990190");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_132);
      UnderlyingInstrument_132.insert(UnderlyingPriceUnitOfMeasure_132.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_132;
      UnderlyingPriceUnitOfMeasureQty_132.setString("16835319");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_132);
      UnderlyingInstrument_132.insert(UnderlyingPriceUnitOfMeasureQty_132.getString());
      FIX::UnderlyingProduct UnderlyingProduct_132(951002157);
      noUnderlyings_1_1_0.set(UnderlyingProduct_132);
      UnderlyingInstrument_132.insert(UnderlyingProduct_132.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_132(2071313078);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_132);
      UnderlyingInstrument_132.insert(UnderlyingPutOrCall_132.getString());
      FIX::UnderlyingPx UnderlyingPx_132;
      UnderlyingPx_132.setString("11162879");
      noUnderlyings_1_1_0.set(UnderlyingPx_132);
      UnderlyingInstrument_132.insert(UnderlyingPx_132.getString());
      FIX::UnderlyingQty UnderlyingQty_132;
      UnderlyingQty_132.setString("14764131");
      noUnderlyings_1_1_0.set(UnderlyingQty_132);
      UnderlyingInstrument_132.insert(UnderlyingQty_132.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_132("LOCALMKTDATE_881190260");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_132);
      UnderlyingInstrument_132.insert(UnderlyingRedemptionDate_132.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_132("STRING_2010212224");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_132);
      UnderlyingInstrument_132.insert(UnderlyingRepoCollateralSecurityType_132.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_132;
      UnderlyingRepurchaseRate_132.setString("33.540000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_132);
      UnderlyingInstrument_132.insert(UnderlyingRepurchaseRate_132.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_132(1761627072);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_132);
      UnderlyingInstrument_132.insert(UnderlyingRepurchaseTerm_132.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_132("STRING_1729543921");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_132);
      UnderlyingInstrument_132.insert(UnderlyingRestructuringType_132.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_132("STRING_1856114883");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_132);
      UnderlyingInstrument_132.insert(UnderlyingSecurityDesc_132.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_132("EXCHANGE_361369292");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_132);
      UnderlyingInstrument_132.insert(UnderlyingSecurityExchange_132.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_132("STRING_1832487783");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_132);
      UnderlyingInstrument_132.insert(UnderlyingSecurityID_132.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_132("STRING_750735179");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_132);
      UnderlyingInstrument_132.insert(UnderlyingSecurityIDSource_132.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_132("STRING_1767984060");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_132);
      UnderlyingInstrument_132.insert(UnderlyingSecuritySubType_132.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_132("STRING_909381056");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_132);
      UnderlyingInstrument_132.insert(UnderlyingSecurityType_132.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_132("STRING_459892427");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_132);
      UnderlyingInstrument_132.insert(UnderlyingSeniority_132.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_132("STRING_1464182575");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_132);
      UnderlyingInstrument_132.insert(UnderlyingSettlMethod_132.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_132(4);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_132);
      UnderlyingInstrument_132.insert(UnderlyingSettlementType_132.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_132;
      UnderlyingStartValue_132.setString("10979876");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_132);
      UnderlyingInstrument_132.insert(UnderlyingStartValue_132.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_132("STRING_20476142");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_132);
      UnderlyingInstrument_132.insert(UnderlyingStateOrProvinceOfIssue_132.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_132("EUR");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_132);
      UnderlyingInstrument_132.insert(UnderlyingStrikeCurrency_132.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_132;
      UnderlyingStrikePrice_132.setString("12673516");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_132);
      UnderlyingInstrument_132.insert(UnderlyingStrikePrice_132.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_132("STRING_1700137995");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_132);
      UnderlyingInstrument_132.insert(UnderlyingSymbol_132.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_132("STRING_1086699119");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_132);
      UnderlyingInstrument_132.insert(UnderlyingSymbolSfx_132.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_132("STRING_932653584");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_132);
      UnderlyingInstrument_132.insert(UnderlyingTimeUnit_132.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_132("STRING_1044267188");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_132);
      UnderlyingInstrument_132.insert(UnderlyingUnitOfMeasure_132.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_132;
      UnderlyingUnitOfMeasureQty_132.setString("12668287");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_132);
      UnderlyingInstrument_132.insert(UnderlyingUnitOfMeasureQty_132.getString());
      all_values.push_back(UnderlyingInstrument_132);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_264;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_264("STRING_987773730");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_264);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_264.insert(UnderlyingSecurityAltID_264.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_264("STRING_802877040");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_264);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_264.insert(UnderlyingSecurityAltIDSource_264.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_264);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_265;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_265("STRING_980960132");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_265);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_265.insert(UnderlyingSecurityAltID_265.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_265("STRING_911603160");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_265);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_265.insert(UnderlyingSecurityAltIDSource_265.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_265);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_266;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_266("STRING_1919164958");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltID_266);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_266.insert(UnderlyingSecurityAltID_266.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_266("STRING_309889653");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltIDSource_266);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_266.insert(UnderlyingSecurityAltIDSource_266.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_266);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_257;
        FIX::UnderlyingStipType UnderlyingStipType_257("STRING_1781893534");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_257);
        UnderlyingStipulations_NoUnderlyingStips_257.insert(UnderlyingStipType_257.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_257("STRING_31059360");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_257);
        UnderlyingStipulations_NoUnderlyingStips_257.insert(UnderlyingStipValue_257.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_257);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_258;
        FIX::UnderlyingStipType UnderlyingStipType_258("STRING_1406936844");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_258);
        UnderlyingStipulations_NoUnderlyingStips_258.insert(UnderlyingStipType_258.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_258("STRING_1363953807");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_258);
        UnderlyingStipulations_NoUnderlyingStips_258.insert(UnderlyingStipValue_258.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_258);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_259;
        FIX::UnderlyingStipType UnderlyingStipType_259("STRING_1887174243");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipType_259);
        UnderlyingStipulations_NoUnderlyingStips_259.insert(UnderlyingStipType_259.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_259("STRING_1768306137");
        noUnderlyingStips_1_0_2_2.set(UnderlyingStipValue_259);
        UnderlyingStipulations_NoUnderlyingStips_259.insert(UnderlyingStipValue_259.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_259);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_253;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_253("STRING_490425774");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_253);
        UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyID_253.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_253('1');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_253);
        UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyIDSource_253.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_253(1958338998);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_253);
        UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyRole_253.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_253);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_509("STRING_705505476");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_509);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509.insert(UnderlyingInstrumentPartySubID_509.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_509(1383612728);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_509);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509.insert(UnderlyingInstrumentPartySubIDType_509.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_510("STRING_2048305809");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_510);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510.insert(UnderlyingInstrumentPartySubID_510.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_510(725981619);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_510);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510.insert(UnderlyingInstrumentPartySubIDType_510.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_511("STRING_435667072");
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubID_511);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511.insert(UnderlyingInstrumentPartySubID_511.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_511(1046184302);
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_511);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511.insert(UnderlyingInstrumentPartySubIDType_511.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_254;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_254("STRING_1993333278");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_254);
        UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyID_254.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_254('2');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_254);
        UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyIDSource_254.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_254(2132883422);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_254);
        UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyRole_254.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_254);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_512("STRING_1032588608");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_512);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512.insert(UnderlyingInstrumentPartySubID_512.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_512(1252228510);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_512);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512.insert(UnderlyingInstrumentPartySubIDType_512.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_513("STRING_808461190");
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubID_513);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513.insert(UnderlyingInstrumentPartySubID_513.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_513(2020362338);
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_513);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513.insert(UnderlyingInstrumentPartySubIDType_513.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_133;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_133("DATA_2055105550");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingIssuer_133.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_133(1789421322);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingIssuerLen_133.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_133("DATA_784481851");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingSecurityDesc_133.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_133(1826786860);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingSecurityDescLen_133.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_133;
      UnderlyingAdjustedQuantity_133.setString("20993109");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_133);
      UnderlyingInstrument_133.insert(UnderlyingAdjustedQuantity_133.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_133;
      UnderlyingAllocationPercent_133.setString("16.230000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_133);
      UnderlyingInstrument_133.insert(UnderlyingAllocationPercent_133.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_133;
      UnderlyingAttachmentPoint_133.setString("67.460000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_133);
      UnderlyingInstrument_133.insert(UnderlyingAttachmentPoint_133.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_133("STRING_2130370336");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_133);
      UnderlyingInstrument_133.insert(UnderlyingCFICode_133.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_133("STRING_1836728468");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_133);
      UnderlyingInstrument_133.insert(UnderlyingCPProgram_133.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_133("STRING_677666905");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_133);
      UnderlyingInstrument_133.insert(UnderlyingCPRegType_133.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_133;
      UnderlyingCapValue_133.setString("18700609");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_133);
      UnderlyingInstrument_133.insert(UnderlyingCapValue_133.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_133;
      UnderlyingCashAmount_133.setString("14575509");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_133);
      UnderlyingInstrument_133.insert(UnderlyingCashAmount_133.getString());
      FIX::UnderlyingCashType UnderlyingCashType_133("STRING_DIFF");
      noUnderlyings_1_1_1.set(UnderlyingCashType_133);
      UnderlyingInstrument_133.insert(UnderlyingCashType_133.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_133;
      UnderlyingContractMultiplier_133.setString("2130030");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_133);
      UnderlyingInstrument_133.insert(UnderlyingContractMultiplier_133.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_133(698873858);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_133);
      UnderlyingInstrument_133.insert(UnderlyingContractMultiplierUnit_133.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_133("COUNTRY_1537480197");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_133);
      UnderlyingInstrument_133.insert(UnderlyingCountryOfIssue_133.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_133("LOCALMKTDATE_1163321258");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_133);
      UnderlyingInstrument_133.insert(UnderlyingCouponPaymentDate_133.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_133;
      UnderlyingCouponRate_133.setString("93.340000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_133);
      UnderlyingInstrument_133.insert(UnderlyingCouponRate_133.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_133("STRING_773609277");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_133);
      UnderlyingInstrument_133.insert(UnderlyingCreditRating_133.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_133("CAN");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_133);
      UnderlyingInstrument_133.insert(UnderlyingCurrency_133.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_133;
      UnderlyingCurrentValue_133.setString("12092763");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_133);
      UnderlyingInstrument_133.insert(UnderlyingCurrentValue_133.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_133;
      UnderlyingDetachmentPoint_133.setString("77.210000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_133);
      UnderlyingInstrument_133.insert(UnderlyingDetachmentPoint_133.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_133;
      UnderlyingDirtyPrice_133.setString("19762105");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_133);
      UnderlyingInstrument_133.insert(UnderlyingDirtyPrice_133.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_133;
      UnderlyingEndPrice_133.setString("11975977");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_133);
      UnderlyingInstrument_133.insert(UnderlyingEndPrice_133.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_133;
      UnderlyingEndValue_133.setString("20957274");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_133);
      UnderlyingInstrument_133.insert(UnderlyingEndValue_133.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_133(607230150);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_133);
      UnderlyingInstrument_133.insert(UnderlyingExerciseStyle_133.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_133;
      UnderlyingFXRate_133.setString("827027");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_133);
      UnderlyingInstrument_133.insert(UnderlyingFXRate_133.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_133('M');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_133);
      UnderlyingInstrument_133.insert(UnderlyingFXRateCalc_133.getString());
      FIX::UnderlyingFactor UnderlyingFactor_133;
      UnderlyingFactor_133.setString("14156913");
      noUnderlyings_1_1_1.set(UnderlyingFactor_133);
      UnderlyingInstrument_133.insert(UnderlyingFactor_133.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_133(2103065068);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_133);
      UnderlyingInstrument_133.insert(UnderlyingFlowScheduleType_133.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_133("STRING_1108094259");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_133);
      UnderlyingInstrument_133.insert(UnderlyingInstrRegistry_133.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_133("LOCALMKTDATE_1057629014");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_133);
      UnderlyingInstrument_133.insert(UnderlyingIssueDate_133.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_133("STRING_740063271");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_133);
      UnderlyingInstrument_133.insert(UnderlyingIssuer_133.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_133("STRING_787397471");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_133);
      UnderlyingInstrument_133.insert(UnderlyingLocaleOfIssue_133.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_133("LOCALMKTDATE_1009456342");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_133);
      UnderlyingInstrument_133.insert(UnderlyingMaturityDate_133.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_133("MONTHYEAR_1169854894");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_133);
      UnderlyingInstrument_133.insert(UnderlyingMaturityMonthYear_133.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_133("TZTIMEONLY_101110569");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_133);
      UnderlyingInstrument_133.insert(UnderlyingMaturityTime_133.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_133;
      UnderlyingNotionalPercentageOutstanding_133.setString("30.300000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_133);
      UnderlyingInstrument_133.insert(UnderlyingNotionalPercentageOutstanding_133.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_133('8');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_133);
      UnderlyingInstrument_133.insert(UnderlyingOptAttribute_133.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_133;
      UnderlyingOriginalNotionalPercentageOutstanding_133.setString("74.740000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_133);
      UnderlyingInstrument_133.insert(UnderlyingOriginalNotionalPercentageOutstanding_133.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_133("STRING_714920313");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_133);
      UnderlyingInstrument_133.insert(UnderlyingPriceUnitOfMeasure_133.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_133;
      UnderlyingPriceUnitOfMeasureQty_133.setString("1691670");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_133);
      UnderlyingInstrument_133.insert(UnderlyingPriceUnitOfMeasureQty_133.getString());
      FIX::UnderlyingProduct UnderlyingProduct_133(357918673);
      noUnderlyings_1_1_1.set(UnderlyingProduct_133);
      UnderlyingInstrument_133.insert(UnderlyingProduct_133.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_133(927923370);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_133);
      UnderlyingInstrument_133.insert(UnderlyingPutOrCall_133.getString());
      FIX::UnderlyingPx UnderlyingPx_133;
      UnderlyingPx_133.setString("8680408");
      noUnderlyings_1_1_1.set(UnderlyingPx_133);
      UnderlyingInstrument_133.insert(UnderlyingPx_133.getString());
      FIX::UnderlyingQty UnderlyingQty_133;
      UnderlyingQty_133.setString("18953988");
      noUnderlyings_1_1_1.set(UnderlyingQty_133);
      UnderlyingInstrument_133.insert(UnderlyingQty_133.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_133("LOCALMKTDATE_2091244628");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_133);
      UnderlyingInstrument_133.insert(UnderlyingRedemptionDate_133.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_133("STRING_124936568");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_133);
      UnderlyingInstrument_133.insert(UnderlyingRepoCollateralSecurityType_133.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_133;
      UnderlyingRepurchaseRate_133.setString("45.000000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_133);
      UnderlyingInstrument_133.insert(UnderlyingRepurchaseRate_133.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_133(1007904399);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_133);
      UnderlyingInstrument_133.insert(UnderlyingRepurchaseTerm_133.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_133("STRING_107813873");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_133);
      UnderlyingInstrument_133.insert(UnderlyingRestructuringType_133.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_133("STRING_1730800850");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityDesc_133.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_133("EXCHANGE_970748473");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityExchange_133.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_133("STRING_2084024457");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityID_133.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_133("STRING_780914971");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityIDSource_133.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_133("STRING_918992320");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_133);
      UnderlyingInstrument_133.insert(UnderlyingSecuritySubType_133.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_133("STRING_543770959");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityType_133.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_133("STRING_863617701");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_133);
      UnderlyingInstrument_133.insert(UnderlyingSeniority_133.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_133("STRING_2119464678");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_133);
      UnderlyingInstrument_133.insert(UnderlyingSettlMethod_133.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_133(5);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_133);
      UnderlyingInstrument_133.insert(UnderlyingSettlementType_133.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_133;
      UnderlyingStartValue_133.setString("8191991");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_133);
      UnderlyingInstrument_133.insert(UnderlyingStartValue_133.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_133("STRING_1080075289");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_133);
      UnderlyingInstrument_133.insert(UnderlyingStateOrProvinceOfIssue_133.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_133("GBP");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_133);
      UnderlyingInstrument_133.insert(UnderlyingStrikeCurrency_133.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_133;
      UnderlyingStrikePrice_133.setString("18674727");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_133);
      UnderlyingInstrument_133.insert(UnderlyingStrikePrice_133.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_133("STRING_1879064008");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_133);
      UnderlyingInstrument_133.insert(UnderlyingSymbol_133.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_133("STRING_581633638");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_133);
      UnderlyingInstrument_133.insert(UnderlyingSymbolSfx_133.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_133("STRING_1968583330");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_133);
      UnderlyingInstrument_133.insert(UnderlyingTimeUnit_133.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_133("STRING_723923390");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_133);
      UnderlyingInstrument_133.insert(UnderlyingUnitOfMeasure_133.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_133;
      UnderlyingUnitOfMeasureQty_133.setString("14407333");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_133);
      UnderlyingInstrument_133.insert(UnderlyingUnitOfMeasureQty_133.getString());
      all_values.push_back(UnderlyingInstrument_133);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_267;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_267("STRING_1438843704");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_267);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_267.insert(UnderlyingSecurityAltID_267.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_267("STRING_1609900376");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_267);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_267.insert(UnderlyingSecurityAltIDSource_267.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_267);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_268;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_268("STRING_957795830");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltID_268);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_268.insert(UnderlyingSecurityAltID_268.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_268("STRING_219283426");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltIDSource_268);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_268.insert(UnderlyingSecurityAltIDSource_268.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_268);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_260;
        FIX::UnderlyingStipType UnderlyingStipType_260("STRING_705711053");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_260);
        UnderlyingStipulations_NoUnderlyingStips_260.insert(UnderlyingStipType_260.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_260("STRING_163044407");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_260);
        UnderlyingStipulations_NoUnderlyingStips_260.insert(UnderlyingStipValue_260.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_260);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_261;
        FIX::UnderlyingStipType UnderlyingStipType_261("STRING_455394178");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_261);
        UnderlyingStipulations_NoUnderlyingStips_261.insert(UnderlyingStipType_261.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_261("STRING_1227235553");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_261);
        UnderlyingStipulations_NoUnderlyingStips_261.insert(UnderlyingStipValue_261.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_261);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_262;
        FIX::UnderlyingStipType UnderlyingStipType_262("STRING_1170948806");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipType_262);
        UnderlyingStipulations_NoUnderlyingStips_262.insert(UnderlyingStipType_262.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_262("STRING_563208051");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipValue_262);
        UnderlyingStipulations_NoUnderlyingStips_262.insert(UnderlyingStipValue_262.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_262);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_255;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_255("STRING_2141697279");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_255);
        UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyID_255.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_255('4');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_255);
        UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyIDSource_255.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_255(1591467726);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_255);
        UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyRole_255.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_255);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_514("STRING_1043519819");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_514);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514.insert(UnderlyingInstrumentPartySubID_514.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_514(307601779);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_514);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514.insert(UnderlyingInstrumentPartySubIDType_514.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_256;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_256("STRING_885186982");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_256);
        UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyID_256.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_256('8');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_256);
        UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyIDSource_256.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_256(1126800900);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_256);
        UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyRole_256.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_256);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_515("STRING_1725106136");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_515);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515.insert(UnderlyingInstrumentPartySubID_515.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_515(538579644);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_515);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515.insert(UnderlyingInstrumentPartySubIDType_515.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_516("STRING_1685251384");
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubID_516);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516.insert(UnderlyingInstrumentPartySubID_516.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_516(1456686496);
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_516);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516.insert(UnderlyingInstrumentPartySubIDType_516.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_517("STRING_1120213283");
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubID_517);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517.insert(UnderlyingInstrumentPartySubID_517.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_517(1506351067);
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_517);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517.insert(UnderlyingInstrumentPartySubIDType_517.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_257;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_257("STRING_33126238");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_257);
        UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyID_257.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_257('4');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_257);
        UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyIDSource_257.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_257(2106228224);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_257);
        UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyRole_257.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_257);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_518("STRING_2023363364");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_518);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518.insert(UnderlyingInstrumentPartySubID_518.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_518(916540406);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_518);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518.insert(UnderlyingInstrumentPartySubIDType_518.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_519("STRING_1691253369");
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubID_519);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519.insert(UnderlyingInstrumentPartySubID_519.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_519(206337326);
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubIDType_519);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519.insert(UnderlyingInstrumentPartySubIDType_519.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_134;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_134("DATA_1622251459");
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuer_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingIssuer_134.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_134(1854297776);
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuerLen_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingIssuerLen_134.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_134("DATA_661731504");
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDesc_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingSecurityDesc_134.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_134(702003364);
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDescLen_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingSecurityDescLen_134.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_134;
      UnderlyingAdjustedQuantity_134.setString("8777629");
      noUnderlyings_1_1_2.set(UnderlyingAdjustedQuantity_134);
      UnderlyingInstrument_134.insert(UnderlyingAdjustedQuantity_134.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_134;
      UnderlyingAllocationPercent_134.setString("95.560000");
      noUnderlyings_1_1_2.set(UnderlyingAllocationPercent_134);
      UnderlyingInstrument_134.insert(UnderlyingAllocationPercent_134.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_134;
      UnderlyingAttachmentPoint_134.setString("61.190000");
      noUnderlyings_1_1_2.set(UnderlyingAttachmentPoint_134);
      UnderlyingInstrument_134.insert(UnderlyingAttachmentPoint_134.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_134("STRING_871976566");
      noUnderlyings_1_1_2.set(UnderlyingCFICode_134);
      UnderlyingInstrument_134.insert(UnderlyingCFICode_134.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_134("STRING_1724688416");
      noUnderlyings_1_1_2.set(UnderlyingCPProgram_134);
      UnderlyingInstrument_134.insert(UnderlyingCPProgram_134.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_134("STRING_956540198");
      noUnderlyings_1_1_2.set(UnderlyingCPRegType_134);
      UnderlyingInstrument_134.insert(UnderlyingCPRegType_134.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_134;
      UnderlyingCapValue_134.setString("17851825");
      noUnderlyings_1_1_2.set(UnderlyingCapValue_134);
      UnderlyingInstrument_134.insert(UnderlyingCapValue_134.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_134;
      UnderlyingCashAmount_134.setString("6207245");
      noUnderlyings_1_1_2.set(UnderlyingCashAmount_134);
      UnderlyingInstrument_134.insert(UnderlyingCashAmount_134.getString());
      FIX::UnderlyingCashType UnderlyingCashType_134("STRING_DIFF");
      noUnderlyings_1_1_2.set(UnderlyingCashType_134);
      UnderlyingInstrument_134.insert(UnderlyingCashType_134.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_134;
      UnderlyingContractMultiplier_134.setString("5228858");
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplier_134);
      UnderlyingInstrument_134.insert(UnderlyingContractMultiplier_134.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_134(1476223058);
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplierUnit_134);
      UnderlyingInstrument_134.insert(UnderlyingContractMultiplierUnit_134.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_134("COUNTRY_243459230");
      noUnderlyings_1_1_2.set(UnderlyingCountryOfIssue_134);
      UnderlyingInstrument_134.insert(UnderlyingCountryOfIssue_134.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_134("LOCALMKTDATE_340664475");
      noUnderlyings_1_1_2.set(UnderlyingCouponPaymentDate_134);
      UnderlyingInstrument_134.insert(UnderlyingCouponPaymentDate_134.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_134;
      UnderlyingCouponRate_134.setString("55.460000");
      noUnderlyings_1_1_2.set(UnderlyingCouponRate_134);
      UnderlyingInstrument_134.insert(UnderlyingCouponRate_134.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_134("STRING_782038874");
      noUnderlyings_1_1_2.set(UnderlyingCreditRating_134);
      UnderlyingInstrument_134.insert(UnderlyingCreditRating_134.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_134("JPY");
      noUnderlyings_1_1_2.set(UnderlyingCurrency_134);
      UnderlyingInstrument_134.insert(UnderlyingCurrency_134.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_134;
      UnderlyingCurrentValue_134.setString("19022521");
      noUnderlyings_1_1_2.set(UnderlyingCurrentValue_134);
      UnderlyingInstrument_134.insert(UnderlyingCurrentValue_134.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_134;
      UnderlyingDetachmentPoint_134.setString("32.790000");
      noUnderlyings_1_1_2.set(UnderlyingDetachmentPoint_134);
      UnderlyingInstrument_134.insert(UnderlyingDetachmentPoint_134.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_134;
      UnderlyingDirtyPrice_134.setString("3961746");
      noUnderlyings_1_1_2.set(UnderlyingDirtyPrice_134);
      UnderlyingInstrument_134.insert(UnderlyingDirtyPrice_134.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_134;
      UnderlyingEndPrice_134.setString("1682314");
      noUnderlyings_1_1_2.set(UnderlyingEndPrice_134);
      UnderlyingInstrument_134.insert(UnderlyingEndPrice_134.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_134;
      UnderlyingEndValue_134.setString("13435278");
      noUnderlyings_1_1_2.set(UnderlyingEndValue_134);
      UnderlyingInstrument_134.insert(UnderlyingEndValue_134.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_134(1868144575);
      noUnderlyings_1_1_2.set(UnderlyingExerciseStyle_134);
      UnderlyingInstrument_134.insert(UnderlyingExerciseStyle_134.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_134;
      UnderlyingFXRate_134.setString("441112");
      noUnderlyings_1_1_2.set(UnderlyingFXRate_134);
      UnderlyingInstrument_134.insert(UnderlyingFXRate_134.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_134('M');
      noUnderlyings_1_1_2.set(UnderlyingFXRateCalc_134);
      UnderlyingInstrument_134.insert(UnderlyingFXRateCalc_134.getString());
      FIX::UnderlyingFactor UnderlyingFactor_134;
      UnderlyingFactor_134.setString("14119142");
      noUnderlyings_1_1_2.set(UnderlyingFactor_134);
      UnderlyingInstrument_134.insert(UnderlyingFactor_134.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_134(250448540);
      noUnderlyings_1_1_2.set(UnderlyingFlowScheduleType_134);
      UnderlyingInstrument_134.insert(UnderlyingFlowScheduleType_134.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_134("STRING_1734836073");
      noUnderlyings_1_1_2.set(UnderlyingInstrRegistry_134);
      UnderlyingInstrument_134.insert(UnderlyingInstrRegistry_134.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_134("LOCALMKTDATE_1118728424");
      noUnderlyings_1_1_2.set(UnderlyingIssueDate_134);
      UnderlyingInstrument_134.insert(UnderlyingIssueDate_134.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_134("STRING_912180045");
      noUnderlyings_1_1_2.set(UnderlyingIssuer_134);
      UnderlyingInstrument_134.insert(UnderlyingIssuer_134.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_134("STRING_289355789");
      noUnderlyings_1_1_2.set(UnderlyingLocaleOfIssue_134);
      UnderlyingInstrument_134.insert(UnderlyingLocaleOfIssue_134.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_134("LOCALMKTDATE_1996491359");
      noUnderlyings_1_1_2.set(UnderlyingMaturityDate_134);
      UnderlyingInstrument_134.insert(UnderlyingMaturityDate_134.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_134("MONTHYEAR_2137119601");
      noUnderlyings_1_1_2.set(UnderlyingMaturityMonthYear_134);
      UnderlyingInstrument_134.insert(UnderlyingMaturityMonthYear_134.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_134("TZTIMEONLY_1801911909");
      noUnderlyings_1_1_2.set(UnderlyingMaturityTime_134);
      UnderlyingInstrument_134.insert(UnderlyingMaturityTime_134.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_134;
      UnderlyingNotionalPercentageOutstanding_134.setString("42.770000");
      noUnderlyings_1_1_2.set(UnderlyingNotionalPercentageOutstanding_134);
      UnderlyingInstrument_134.insert(UnderlyingNotionalPercentageOutstanding_134.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_134('1');
      noUnderlyings_1_1_2.set(UnderlyingOptAttribute_134);
      UnderlyingInstrument_134.insert(UnderlyingOptAttribute_134.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_134;
      UnderlyingOriginalNotionalPercentageOutstanding_134.setString("84.590000");
      noUnderlyings_1_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_134);
      UnderlyingInstrument_134.insert(UnderlyingOriginalNotionalPercentageOutstanding_134.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_134("STRING_358683147");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasure_134);
      UnderlyingInstrument_134.insert(UnderlyingPriceUnitOfMeasure_134.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_134;
      UnderlyingPriceUnitOfMeasureQty_134.setString("1875653");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasureQty_134);
      UnderlyingInstrument_134.insert(UnderlyingPriceUnitOfMeasureQty_134.getString());
      FIX::UnderlyingProduct UnderlyingProduct_134(1875110436);
      noUnderlyings_1_1_2.set(UnderlyingProduct_134);
      UnderlyingInstrument_134.insert(UnderlyingProduct_134.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_134(881568999);
      noUnderlyings_1_1_2.set(UnderlyingPutOrCall_134);
      UnderlyingInstrument_134.insert(UnderlyingPutOrCall_134.getString());
      FIX::UnderlyingPx UnderlyingPx_134;
      UnderlyingPx_134.setString("16637883");
      noUnderlyings_1_1_2.set(UnderlyingPx_134);
      UnderlyingInstrument_134.insert(UnderlyingPx_134.getString());
      FIX::UnderlyingQty UnderlyingQty_134;
      UnderlyingQty_134.setString("21185696");
      noUnderlyings_1_1_2.set(UnderlyingQty_134);
      UnderlyingInstrument_134.insert(UnderlyingQty_134.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_134("LOCALMKTDATE_1222233474");
      noUnderlyings_1_1_2.set(UnderlyingRedemptionDate_134);
      UnderlyingInstrument_134.insert(UnderlyingRedemptionDate_134.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_134("STRING_570150266");
      noUnderlyings_1_1_2.set(UnderlyingRepoCollateralSecurityType_134);
      UnderlyingInstrument_134.insert(UnderlyingRepoCollateralSecurityType_134.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_134;
      UnderlyingRepurchaseRate_134.setString("48.930000");
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseRate_134);
      UnderlyingInstrument_134.insert(UnderlyingRepurchaseRate_134.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_134(1100665686);
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseTerm_134);
      UnderlyingInstrument_134.insert(UnderlyingRepurchaseTerm_134.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_134("STRING_933198661");
      noUnderlyings_1_1_2.set(UnderlyingRestructuringType_134);
      UnderlyingInstrument_134.insert(UnderlyingRestructuringType_134.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_134("STRING_507893402");
      noUnderlyings_1_1_2.set(UnderlyingSecurityDesc_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityDesc_134.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_134("EXCHANGE_337965317");
      noUnderlyings_1_1_2.set(UnderlyingSecurityExchange_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityExchange_134.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_134("STRING_1329373294");
      noUnderlyings_1_1_2.set(UnderlyingSecurityID_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityID_134.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_134("STRING_676124900");
      noUnderlyings_1_1_2.set(UnderlyingSecurityIDSource_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityIDSource_134.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_134("STRING_1681493172");
      noUnderlyings_1_1_2.set(UnderlyingSecuritySubType_134);
      UnderlyingInstrument_134.insert(UnderlyingSecuritySubType_134.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_134("STRING_1050034221");
      noUnderlyings_1_1_2.set(UnderlyingSecurityType_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityType_134.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_134("STRING_720236114");
      noUnderlyings_1_1_2.set(UnderlyingSeniority_134);
      UnderlyingInstrument_134.insert(UnderlyingSeniority_134.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_134("STRING_1794077786");
      noUnderlyings_1_1_2.set(UnderlyingSettlMethod_134);
      UnderlyingInstrument_134.insert(UnderlyingSettlMethod_134.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_134(4);
      noUnderlyings_1_1_2.set(UnderlyingSettlementType_134);
      UnderlyingInstrument_134.insert(UnderlyingSettlementType_134.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_134;
      UnderlyingStartValue_134.setString("9706846");
      noUnderlyings_1_1_2.set(UnderlyingStartValue_134);
      UnderlyingInstrument_134.insert(UnderlyingStartValue_134.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_134("STRING_1381430211");
      noUnderlyings_1_1_2.set(UnderlyingStateOrProvinceOfIssue_134);
      UnderlyingInstrument_134.insert(UnderlyingStateOrProvinceOfIssue_134.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_134("EUR");
      noUnderlyings_1_1_2.set(UnderlyingStrikeCurrency_134);
      UnderlyingInstrument_134.insert(UnderlyingStrikeCurrency_134.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_134;
      UnderlyingStrikePrice_134.setString("16707860");
      noUnderlyings_1_1_2.set(UnderlyingStrikePrice_134);
      UnderlyingInstrument_134.insert(UnderlyingStrikePrice_134.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_134("STRING_1282201005");
      noUnderlyings_1_1_2.set(UnderlyingSymbol_134);
      UnderlyingInstrument_134.insert(UnderlyingSymbol_134.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_134("STRING_1872500652");
      noUnderlyings_1_1_2.set(UnderlyingSymbolSfx_134);
      UnderlyingInstrument_134.insert(UnderlyingSymbolSfx_134.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_134("STRING_1325214261");
      noUnderlyings_1_1_2.set(UnderlyingTimeUnit_134);
      UnderlyingInstrument_134.insert(UnderlyingTimeUnit_134.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_134("STRING_2003185282");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasure_134);
      UnderlyingInstrument_134.insert(UnderlyingUnitOfMeasure_134.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_134;
      UnderlyingUnitOfMeasureQty_134.setString("14393413");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasureQty_134);
      UnderlyingInstrument_134.insert(UnderlyingUnitOfMeasureQty_134.getString());
      all_values.push_back(UnderlyingInstrument_134);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_269;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_269("STRING_214384781");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltID_269);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_269.insert(UnderlyingSecurityAltID_269.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_269("STRING_1626906683");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltIDSource_269);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_269.insert(UnderlyingSecurityAltIDSource_269.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_269);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_263;
        FIX::UnderlyingStipType UnderlyingStipType_263("STRING_1095953780");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipType_263);
        UnderlyingStipulations_NoUnderlyingStips_263.insert(UnderlyingStipType_263.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_263("STRING_1143211403");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipValue_263);
        UnderlyingStipulations_NoUnderlyingStips_263.insert(UnderlyingStipValue_263.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_263);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_264;
        FIX::UnderlyingStipType UnderlyingStipType_264("STRING_1634895527");
        noUnderlyingStips_1_2_2_1.set(UnderlyingStipType_264);
        UnderlyingStipulations_NoUnderlyingStips_264.insert(UnderlyingStipType_264.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_264("STRING_170703607");
        noUnderlyingStips_1_2_2_1.set(UnderlyingStipValue_264);
        UnderlyingStipulations_NoUnderlyingStips_264.insert(UnderlyingStipValue_264.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_264);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_265;
        FIX::UnderlyingStipType UnderlyingStipType_265("STRING_1713361670");
        noUnderlyingStips_1_2_2_2.set(UnderlyingStipType_265);
        UnderlyingStipulations_NoUnderlyingStips_265.insert(UnderlyingStipType_265.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_265("STRING_240536772");
        noUnderlyingStips_1_2_2_2.set(UnderlyingStipValue_265);
        UnderlyingStipulations_NoUnderlyingStips_265.insert(UnderlyingStipValue_265.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_265);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_258;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_258("STRING_499076683");
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyID_258);
        UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyID_258.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_258('7');
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyIDSource_258);
        UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyIDSource_258.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_258(1609334611);
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyRole_258);
        UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyRole_258.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_258);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_520("STRING_1424555075");
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubID_520);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520.insert(UnderlyingInstrumentPartySubID_520.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_520(1143344135);
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_520);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520.insert(UnderlyingInstrumentPartySubIDType_520.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_521("STRING_731000550");
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubID_521);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521.insert(UnderlyingInstrumentPartySubID_521.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_521(2144791189);
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_521);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521.insert(UnderlyingInstrumentPartySubIDType_521.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_522("STRING_789938273");
          noUndlyInstrumentPartySubIDs_1_2_0_3_2.set(UnderlyingInstrumentPartySubID_522);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522.insert(UnderlyingInstrumentPartySubID_522.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_522(1045465420);
          noUndlyInstrumentPartySubIDs_1_2_0_3_2.set(UnderlyingInstrumentPartySubIDType_522);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522.insert(UnderlyingInstrumentPartySubIDType_522.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_259;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_259("STRING_967992195");
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyID_259);
        UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyID_259.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_259('2');
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyIDSource_259);
        UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyIDSource_259.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_259(331175067);
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyRole_259);
        UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyRole_259.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_259);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_523("STRING_1694670837");
          noUndlyInstrumentPartySubIDs_1_2_1_3_0.set(UnderlyingInstrumentPartySubID_523);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523.insert(UnderlyingInstrumentPartySubID_523.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_523(1613376072);
          noUndlyInstrumentPartySubIDs_1_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_523);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523.insert(UnderlyingInstrumentPartySubIDType_523.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
    // YieldData
    multiset<string> YieldData_26;
    FIX::Yield Yield_26;
    Yield_26.setString("2.510000");
    noRelatedSym_0_1.set(Yield_26);
    YieldData_26.insert(Yield_26.getString());
    FIX::YieldCalcDate YieldCalcDate_26("LOCALMKTDATE_872401450");
    noRelatedSym_0_1.set(YieldCalcDate_26);
    YieldData_26.insert(YieldCalcDate_26.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_26("LOCALMKTDATE_1469077707");
    noRelatedSym_0_1.set(YieldRedemptionDate_26);
    YieldData_26.insert(YieldRedemptionDate_26.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_26;
    YieldRedemptionPrice_26.setString("18677316");
    noRelatedSym_0_1.set(YieldRedemptionPrice_26);
    YieldData_26.insert(YieldRedemptionPrice_26.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_26(661100523);
    noRelatedSym_0_1.set(YieldRedemptionPriceType_26);
    YieldData_26.insert(YieldRedemptionPriceType_26.getString());
    FIX::YieldType YieldType_26("STRING_MATURITY");
    noRelatedSym_0_1.set(YieldType_26);
    YieldData_26.insert(YieldType_26.getString());
    all_values.push_back(YieldData_26);
    all_compo_names.insert("YieldData");

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::SecurityList::NoRelatedSym noRelatedSym_0_2;
    // SecListGrp.NoRelatedSym
    multiset<string> SecListGrp_NoRelatedSym_2;
    FIX::Currency Currency_68("USD");
    noRelatedSym_0_2.set(Currency_68);
    SecListGrp_NoRelatedSym_2.insert(Currency_68.getString());
    FIX::EncodedText EncodedText_87("DATA_631932621");
    noRelatedSym_0_2.set(EncodedText_87);
    SecListGrp_NoRelatedSym_2.insert(EncodedText_87.getString());
    FIX::EncodedTextLen EncodedTextLen_87(342882416);
    noRelatedSym_0_2.set(EncodedTextLen_87);
    SecListGrp_NoRelatedSym_2.insert(EncodedTextLen_87.getString());
    FIX::RelSymTransactTime RelSymTransactTime_7(FIX::UTCTIMESTAMP(4, 46, 24, 21, 10, 2013));
    noRelatedSym_0_2.set(RelSymTransactTime_7);
    SecListGrp_NoRelatedSym_2.insert(RelSymTransactTime_7.getString());
    FIX::Text Text_87("STRING_1535856484");
    noRelatedSym_0_2.set(Text_87);
    SecListGrp_NoRelatedSym_2.insert(Text_87.getString());
    all_values.push_back(SecListGrp_NoRelatedSym_2);
    all_compo_names.insert("SecListGrp.NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_27;
    FIX::AgreementCurrency AgreementCurrency_27("USD");
    noRelatedSym_0_2.set(AgreementCurrency_27);
    FinancingDetails_27.insert(AgreementCurrency_27.getString());
    FIX::AgreementDate AgreementDate_27("LOCALMKTDATE_531716972");
    noRelatedSym_0_2.set(AgreementDate_27);
    FinancingDetails_27.insert(AgreementDate_27.getString());
    FIX::AgreementDesc AgreementDesc_27("STRING_819804001");
    noRelatedSym_0_2.set(AgreementDesc_27);
    FinancingDetails_27.insert(AgreementDesc_27.getString());
    FIX::AgreementID AgreementID_27("STRING_2075667827");
    noRelatedSym_0_2.set(AgreementID_27);
    FinancingDetails_27.insert(AgreementID_27.getString());
    FIX::DeliveryType DeliveryType_27(1);
    noRelatedSym_0_2.set(DeliveryType_27);
    FinancingDetails_27.insert(DeliveryType_27.getString());
    FIX::EndDate EndDate_27("LOCALMKTDATE_1865269421");
    noRelatedSym_0_2.set(EndDate_27);
    FinancingDetails_27.insert(EndDate_27.getString());
    FIX::MarginRatio MarginRatio_27;
    MarginRatio_27.setString("63.740000");
    noRelatedSym_0_2.set(MarginRatio_27);
    FinancingDetails_27.insert(MarginRatio_27.getString());
    FIX::StartDate StartDate_27("LOCALMKTDATE_1345540082");
    noRelatedSym_0_2.set(StartDate_27);
    FinancingDetails_27.insert(StartDate_27.getString());
    FIX::TerminationType TerminationType_27(1);
    noRelatedSym_0_2.set(TerminationType_27);
    FinancingDetails_27.insert(TerminationType_27.getString());
    all_values.push_back(FinancingDetails_27);
    all_compo_names.insert("FinancingDetails");

    // InstrmtLegSecListGrp
    // Group InstrmtLegSecListGrp.NoLegs
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_2_1_0;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_6;
      FIX::LegSettlType LegSettlType_24('8');
      noLegs_2_1_0.set(LegSettlType_24);
      InstrmtLegSecListGrp_NoLegs_6.insert(LegSettlType_24.getString());
      FIX::LegSwapType LegSwapType_24(2);
      noLegs_2_1_0.set(LegSwapType_24);
      InstrmtLegSecListGrp_NoLegs_6.insert(LegSwapType_24.getString());
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_6);
      all_compo_names.insert("InstrmtLegSecListGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_140;
      FIX::EncodedLegIssuer EncodedLegIssuer_140("DATA_2027939873");
      noLegs_2_1_0.set(EncodedLegIssuer_140);
      InstrumentLeg_140.insert(EncodedLegIssuer_140.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_140(1765128721);
      noLegs_2_1_0.set(EncodedLegIssuerLen_140);
      InstrumentLeg_140.insert(EncodedLegIssuerLen_140.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_140("DATA_983930972");
      noLegs_2_1_0.set(EncodedLegSecurityDesc_140);
      InstrumentLeg_140.insert(EncodedLegSecurityDesc_140.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_140(1748187850);
      noLegs_2_1_0.set(EncodedLegSecurityDescLen_140);
      InstrumentLeg_140.insert(EncodedLegSecurityDescLen_140.getString());
      FIX::LegCFICode LegCFICode_140("STRING_278745596");
      noLegs_2_1_0.set(LegCFICode_140);
      InstrumentLeg_140.insert(LegCFICode_140.getString());
      FIX::LegContractMultiplier LegContractMultiplier_140;
      LegContractMultiplier_140.setString("5199098");
      noLegs_2_1_0.set(LegContractMultiplier_140);
      InstrumentLeg_140.insert(LegContractMultiplier_140.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_140(947858863);
      noLegs_2_1_0.set(LegContractMultiplierUnit_140);
      InstrumentLeg_140.insert(LegContractMultiplierUnit_140.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_140("MONTHYEAR_456171980");
      noLegs_2_1_0.set(LegContractSettlMonth_140);
      InstrumentLeg_140.insert(LegContractSettlMonth_140.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_140("COUNTRY_1151842433");
      noLegs_2_1_0.set(LegCountryOfIssue_140);
      InstrumentLeg_140.insert(LegCountryOfIssue_140.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_140("LOCALMKTDATE_1290741280");
      noLegs_2_1_0.set(LegCouponPaymentDate_140);
      InstrumentLeg_140.insert(LegCouponPaymentDate_140.getString());
      FIX::LegCouponRate LegCouponRate_140;
      LegCouponRate_140.setString("2.440000");
      noLegs_2_1_0.set(LegCouponRate_140);
      InstrumentLeg_140.insert(LegCouponRate_140.getString());
      FIX::LegCreditRating LegCreditRating_140("STRING_1954478661");
      noLegs_2_1_0.set(LegCreditRating_140);
      InstrumentLeg_140.insert(LegCreditRating_140.getString());
      FIX::LegCurrency LegCurrency_140("JPY");
      noLegs_2_1_0.set(LegCurrency_140);
      InstrumentLeg_140.insert(LegCurrency_140.getString());
      FIX::LegDatedDate LegDatedDate_140("LOCALMKTDATE_1881000535");
      noLegs_2_1_0.set(LegDatedDate_140);
      InstrumentLeg_140.insert(LegDatedDate_140.getString());
      FIX::LegExerciseStyle LegExerciseStyle_140(1607338840);
      noLegs_2_1_0.set(LegExerciseStyle_140);
      InstrumentLeg_140.insert(LegExerciseStyle_140.getString());
      FIX::LegFactor LegFactor_140;
      LegFactor_140.setString("6801904");
      noLegs_2_1_0.set(LegFactor_140);
      InstrumentLeg_140.insert(LegFactor_140.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_140(1269373371);
      noLegs_2_1_0.set(LegFlowScheduleType_140);
      InstrumentLeg_140.insert(LegFlowScheduleType_140.getString());
      FIX::LegInstrRegistry LegInstrRegistry_140("STRING_1696142290");
      noLegs_2_1_0.set(LegInstrRegistry_140);
      InstrumentLeg_140.insert(LegInstrRegistry_140.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_140("LOCALMKTDATE_611067129");
      noLegs_2_1_0.set(LegInterestAccrualDate_140);
      InstrumentLeg_140.insert(LegInterestAccrualDate_140.getString());
      FIX::LegIssueDate LegIssueDate_140("LOCALMKTDATE_1801090343");
      noLegs_2_1_0.set(LegIssueDate_140);
      InstrumentLeg_140.insert(LegIssueDate_140.getString());
      FIX::LegIssuer LegIssuer_140("STRING_368462643");
      noLegs_2_1_0.set(LegIssuer_140);
      InstrumentLeg_140.insert(LegIssuer_140.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_140("STRING_539251308");
      noLegs_2_1_0.set(LegLocaleOfIssue_140);
      InstrumentLeg_140.insert(LegLocaleOfIssue_140.getString());
      FIX::LegMaturityDate LegMaturityDate_140("LOCALMKTDATE_975261941");
      noLegs_2_1_0.set(LegMaturityDate_140);
      InstrumentLeg_140.insert(LegMaturityDate_140.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_140("MONTHYEAR_86248417");
      noLegs_2_1_0.set(LegMaturityMonthYear_140);
      InstrumentLeg_140.insert(LegMaturityMonthYear_140.getString());
      FIX::LegMaturityTime LegMaturityTime_140("TZTIMEONLY_1435427682");
      noLegs_2_1_0.set(LegMaturityTime_140);
      InstrumentLeg_140.insert(LegMaturityTime_140.getString());
      FIX::LegOptAttribute LegOptAttribute_140('1');
      noLegs_2_1_0.set(LegOptAttribute_140);
      InstrumentLeg_140.insert(LegOptAttribute_140.getString());
      FIX::LegOptionRatio LegOptionRatio_140;
      LegOptionRatio_140.setString("1352092");
      noLegs_2_1_0.set(LegOptionRatio_140);
      InstrumentLeg_140.insert(LegOptionRatio_140.getString());
      FIX::LegPool LegPool_140("STRING_887493656");
      noLegs_2_1_0.set(LegPool_140);
      InstrumentLeg_140.insert(LegPool_140.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_140("STRING_1066045646");
      noLegs_2_1_0.set(LegPriceUnitOfMeasure_140);
      InstrumentLeg_140.insert(LegPriceUnitOfMeasure_140.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_140;
      LegPriceUnitOfMeasureQty_140.setString("17975461");
      noLegs_2_1_0.set(LegPriceUnitOfMeasureQty_140);
      InstrumentLeg_140.insert(LegPriceUnitOfMeasureQty_140.getString());
      FIX::LegProduct LegProduct_140(767949881);
      noLegs_2_1_0.set(LegProduct_140);
      InstrumentLeg_140.insert(LegProduct_140.getString());
      FIX::LegPutOrCall LegPutOrCall_140(683690719);
      noLegs_2_1_0.set(LegPutOrCall_140);
      InstrumentLeg_140.insert(LegPutOrCall_140.getString());
      FIX::LegRatioQty LegRatioQty_140;
      LegRatioQty_140.setString("6339934");
      noLegs_2_1_0.set(LegRatioQty_140);
      InstrumentLeg_140.insert(LegRatioQty_140.getString());
      FIX::LegRedemptionDate LegRedemptionDate_140("LOCALMKTDATE_368654083");
      noLegs_2_1_0.set(LegRedemptionDate_140);
      InstrumentLeg_140.insert(LegRedemptionDate_140.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_140("STRING_962436316");
      noLegs_2_1_0.set(LegRepoCollateralSecurityType_140);
      InstrumentLeg_140.insert(LegRepoCollateralSecurityType_140.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_140;
      LegRepurchaseRate_140.setString("33.070000");
      noLegs_2_1_0.set(LegRepurchaseRate_140);
      InstrumentLeg_140.insert(LegRepurchaseRate_140.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_140(1316512947);
      noLegs_2_1_0.set(LegRepurchaseTerm_140);
      InstrumentLeg_140.insert(LegRepurchaseTerm_140.getString());
      FIX::LegSecurityDesc LegSecurityDesc_140("STRING_1418608296");
      noLegs_2_1_0.set(LegSecurityDesc_140);
      InstrumentLeg_140.insert(LegSecurityDesc_140.getString());
      FIX::LegSecurityExchange LegSecurityExchange_140("EXCHANGE_158262092");
      noLegs_2_1_0.set(LegSecurityExchange_140);
      InstrumentLeg_140.insert(LegSecurityExchange_140.getString());
      FIX::LegSecurityID LegSecurityID_140("STRING_459770579");
      noLegs_2_1_0.set(LegSecurityID_140);
      InstrumentLeg_140.insert(LegSecurityID_140.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_140("STRING_1539618540");
      noLegs_2_1_0.set(LegSecurityIDSource_140);
      InstrumentLeg_140.insert(LegSecurityIDSource_140.getString());
      FIX::LegSecuritySubType LegSecuritySubType_140("STRING_2112740754");
      noLegs_2_1_0.set(LegSecuritySubType_140);
      InstrumentLeg_140.insert(LegSecuritySubType_140.getString());
      FIX::LegSecurityType LegSecurityType_140("STRING_1659272297");
      noLegs_2_1_0.set(LegSecurityType_140);
      InstrumentLeg_140.insert(LegSecurityType_140.getString());
      FIX::LegSide LegSide_140('1');
      noLegs_2_1_0.set(LegSide_140);
      InstrumentLeg_140.insert(LegSide_140.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_140("STRING_1846257641");
      noLegs_2_1_0.set(LegStateOrProvinceOfIssue_140);
      InstrumentLeg_140.insert(LegStateOrProvinceOfIssue_140.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_140("EUR");
      noLegs_2_1_0.set(LegStrikeCurrency_140);
      InstrumentLeg_140.insert(LegStrikeCurrency_140.getString());
      FIX::LegStrikePrice LegStrikePrice_140;
      LegStrikePrice_140.setString("9681473");
      noLegs_2_1_0.set(LegStrikePrice_140);
      InstrumentLeg_140.insert(LegStrikePrice_140.getString());
      FIX::LegSymbol LegSymbol_140("STRING_667786132");
      noLegs_2_1_0.set(LegSymbol_140);
      InstrumentLeg_140.insert(LegSymbol_140.getString());
      FIX::LegSymbolSfx LegSymbolSfx_140("STRING_709777792");
      noLegs_2_1_0.set(LegSymbolSfx_140);
      InstrumentLeg_140.insert(LegSymbolSfx_140.getString());
      FIX::LegTimeUnit LegTimeUnit_140("STRING_621754060");
      noLegs_2_1_0.set(LegTimeUnit_140);
      InstrumentLeg_140.insert(LegTimeUnit_140.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_140("STRING_1036248775");
      noLegs_2_1_0.set(LegUnitOfMeasure_140);
      InstrumentLeg_140.insert(LegUnitOfMeasure_140.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_140;
      LegUnitOfMeasureQty_140.setString("12490291");
      noLegs_2_1_0.set(LegUnitOfMeasureQty_140);
      InstrumentLeg_140.insert(LegUnitOfMeasureQty_140.getString());
      all_values.push_back(InstrumentLeg_140);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_272;
        FIX::LegSecurityAltID LegSecurityAltID_272("STRING_1122497192");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltID_272);
        LegSecAltIDGrp_NoLegSecurityAltID_272.insert(LegSecurityAltID_272.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_272("STRING_536973135");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltIDSource_272);
        LegSecAltIDGrp_NoLegSecurityAltID_272.insert(LegSecurityAltIDSource_272.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_272);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_19;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_19("JPY");
      noLegs_2_1_0.set(LegBenchmarkCurveCurrency_19);
      LegBenchmarkCurveData_19.insert(LegBenchmarkCurveCurrency_19.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_19("STRING_1424466791");
      noLegs_2_1_0.set(LegBenchmarkCurveName_19);
      LegBenchmarkCurveData_19.insert(LegBenchmarkCurveName_19.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_19("STRING_688896374");
      noLegs_2_1_0.set(LegBenchmarkCurvePoint_19);
      LegBenchmarkCurveData_19.insert(LegBenchmarkCurvePoint_19.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_19;
      LegBenchmarkPrice_19.setString("9077689");
      noLegs_2_1_0.set(LegBenchmarkPrice_19);
      LegBenchmarkCurveData_19.insert(LegBenchmarkPrice_19.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_19(44933024);
      noLegs_2_1_0.set(LegBenchmarkPriceType_19);
      LegBenchmarkCurveData_19.insert(LegBenchmarkPriceType_19.getString());
      all_values.push_back(LegBenchmarkCurveData_19);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_57;
        FIX::LegStipulationType LegStipulationType_57("STRING_1541762467");
        noLegStipulations_2_0_2_0.set(LegStipulationType_57);
        LegStipulations_NoLegStipulations_57.insert(LegStipulationType_57.getString());
        FIX::LegStipulationValue LegStipulationValue_57("STRING_413587107");
        noLegStipulations_2_0_2_0.set(LegStipulationValue_57);
        LegStipulations_NoLegStipulations_57.insert(LegStipulationValue_57.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_57);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_2_1_0.addGroup(noLegStipulations_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    // Instrument
    multiset<string> Instrument_85;
    FIX::AttachmentPoint AttachmentPoint_85;
    AttachmentPoint_85.setString("97.610000");
    noRelatedSym_0_2.set(AttachmentPoint_85);
    Instrument_85.insert(AttachmentPoint_85.getString());
    FIX::CFICode CFICode_85("STRING_548182126");
    noRelatedSym_0_2.set(CFICode_85);
    Instrument_85.insert(CFICode_85.getString());
    FIX::CPProgram CPProgram_85(1);
    noRelatedSym_0_2.set(CPProgram_85);
    Instrument_85.insert(CPProgram_85.getString());
    FIX::CPRegType CPRegType_85("STRING_1606148058");
    noRelatedSym_0_2.set(CPRegType_85);
    Instrument_85.insert(CPRegType_85.getString());
    FIX::CapPrice CapPrice_85;
    CapPrice_85.setString("7064442");
    noRelatedSym_0_2.set(CapPrice_85);
    Instrument_85.insert(CapPrice_85.getString());
    FIX::ContractMultiplier ContractMultiplier_85;
    ContractMultiplier_85.setString("423869");
    noRelatedSym_0_2.set(ContractMultiplier_85);
    Instrument_85.insert(ContractMultiplier_85.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_85(1);
    noRelatedSym_0_2.set(ContractMultiplierUnit_85);
    Instrument_85.insert(ContractMultiplierUnit_85.getString());
    FIX::ContractSettlMonth ContractSettlMonth_85("MONTHYEAR_671701324");
    noRelatedSym_0_2.set(ContractSettlMonth_85);
    Instrument_85.insert(ContractSettlMonth_85.getString());
    FIX::CountryOfIssue CountryOfIssue_85("COUNTRY_1701659283");
    noRelatedSym_0_2.set(CountryOfIssue_85);
    Instrument_85.insert(CountryOfIssue_85.getString());
    FIX::CouponPaymentDate CouponPaymentDate_85("LOCALMKTDATE_416803123");
    noRelatedSym_0_2.set(CouponPaymentDate_85);
    Instrument_85.insert(CouponPaymentDate_85.getString());
    FIX::CouponRate CouponRate_85;
    CouponRate_85.setString("53.170000");
    noRelatedSym_0_2.set(CouponRate_85);
    Instrument_85.insert(CouponRate_85.getString());
    FIX::CreditRating CreditRating_85("STRING_673303124");
    noRelatedSym_0_2.set(CreditRating_85);
    Instrument_85.insert(CreditRating_85.getString());
    FIX::DatedDate DatedDate_85("LOCALMKTDATE_515513786");
    noRelatedSym_0_2.set(DatedDate_85);
    Instrument_85.insert(DatedDate_85.getString());
    FIX::DetachmentPoint DetachmentPoint_85;
    DetachmentPoint_85.setString("26.820000");
    noRelatedSym_0_2.set(DetachmentPoint_85);
    Instrument_85.insert(DetachmentPoint_85.getString());
    FIX::EncodedIssuer EncodedIssuer_85("DATA_1341089256");
    noRelatedSym_0_2.set(EncodedIssuer_85);
    Instrument_85.insert(EncodedIssuer_85.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_85(1225291579);
    noRelatedSym_0_2.set(EncodedIssuerLen_85);
    Instrument_85.insert(EncodedIssuerLen_85.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_85("DATA_1960376742");
    noRelatedSym_0_2.set(EncodedSecurityDesc_85);
    Instrument_85.insert(EncodedSecurityDesc_85.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_85(229854384);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_85);
    Instrument_85.insert(EncodedSecurityDescLen_85.getString());
    FIX::ExerciseStyle ExerciseStyle_85(0);
    noRelatedSym_0_2.set(ExerciseStyle_85);
    Instrument_85.insert(ExerciseStyle_85.getString());
    FIX::Factor Factor_85;
    Factor_85.setString("14099090");
    noRelatedSym_0_2.set(Factor_85);
    Instrument_85.insert(Factor_85.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_85(true);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_85);
    Instrument_85.insert(FlexProductEligibilityIndicator_85.getString());
    FIX::FlexibleIndicator FlexibleIndicator_85(true);
    noRelatedSym_0_2.set(FlexibleIndicator_85);
    Instrument_85.insert(FlexibleIndicator_85.getString());
    FIX::FloorPrice FloorPrice_85;
    FloorPrice_85.setString("10327598");
    noRelatedSym_0_2.set(FloorPrice_85);
    Instrument_85.insert(FloorPrice_85.getString());
    FIX::FlowScheduleType FlowScheduleType_85(3);
    noRelatedSym_0_2.set(FlowScheduleType_85);
    Instrument_85.insert(FlowScheduleType_85.getString());
    FIX::InstrRegistry InstrRegistry_85("STRING_140793309");
    noRelatedSym_0_2.set(InstrRegistry_85);
    Instrument_85.insert(InstrRegistry_85.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_85('1');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_85);
    Instrument_85.insert(InstrmtAssignmentMethod_85.getString());
    FIX::InterestAccrualDate InterestAccrualDate_85("LOCALMKTDATE_1370343351");
    noRelatedSym_0_2.set(InterestAccrualDate_85);
    Instrument_85.insert(InterestAccrualDate_85.getString());
    FIX::IssueDate IssueDate_85("LOCALMKTDATE_185726333");
    noRelatedSym_0_2.set(IssueDate_85);
    Instrument_85.insert(IssueDate_85.getString());
    FIX::Issuer Issuer_85("STRING_946759642");
    noRelatedSym_0_2.set(Issuer_85);
    Instrument_85.insert(Issuer_85.getString());
    FIX::ListMethod ListMethod_85(0);
    noRelatedSym_0_2.set(ListMethod_85);
    Instrument_85.insert(ListMethod_85.getString());
    FIX::LocaleOfIssue LocaleOfIssue_85("STRING_599313441");
    noRelatedSym_0_2.set(LocaleOfIssue_85);
    Instrument_85.insert(LocaleOfIssue_85.getString());
    FIX::MaturityDate MaturityDate_85("LOCALMKTDATE_1134299404");
    noRelatedSym_0_2.set(MaturityDate_85);
    Instrument_85.insert(MaturityDate_85.getString());
    FIX::MaturityMonthYear MaturityMonthYear_85("MONTHYEAR_1312804296");
    noRelatedSym_0_2.set(MaturityMonthYear_85);
    Instrument_85.insert(MaturityMonthYear_85.getString());
    FIX::MaturityTime MaturityTime_85("TZTIMEONLY_181929847");
    noRelatedSym_0_2.set(MaturityTime_85);
    Instrument_85.insert(MaturityTime_85.getString());
    FIX::MinPriceIncrement MinPriceIncrement_85;
    MinPriceIncrement_85.setString("5929638");
    noRelatedSym_0_2.set(MinPriceIncrement_85);
    Instrument_85.insert(MinPriceIncrement_85.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_85;
    MinPriceIncrementAmount_85.setString("20192485");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_85);
    Instrument_85.insert(MinPriceIncrementAmount_85.getString());
    FIX::NTPositionLimit NTPositionLimit_85(224316833);
    noRelatedSym_0_2.set(NTPositionLimit_85);
    Instrument_85.insert(NTPositionLimit_85.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_85;
    NotionalPercentageOutstanding_85.setString("67.640000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_85);
    Instrument_85.insert(NotionalPercentageOutstanding_85.getString());
    FIX::OptAttribute OptAttribute_85('5');
    noRelatedSym_0_2.set(OptAttribute_85);
    Instrument_85.insert(OptAttribute_85.getString());
    FIX::OptPayoutAmount OptPayoutAmount_85;
    OptPayoutAmount_85.setString("19259761");
    noRelatedSym_0_2.set(OptPayoutAmount_85);
    Instrument_85.insert(OptPayoutAmount_85.getString());
    FIX::OptPayoutType OptPayoutType_85(2);
    noRelatedSym_0_2.set(OptPayoutType_85);
    Instrument_85.insert(OptPayoutType_85.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_85;
    OriginalNotionalPercentageOutstanding_85.setString("15.080000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_85);
    Instrument_85.insert(OriginalNotionalPercentageOutstanding_85.getString());
    FIX::Pool Pool_85("STRING_451795592");
    noRelatedSym_0_2.set(Pool_85);
    Instrument_85.insert(Pool_85.getString());
    FIX::PositionLimit PositionLimit_85(376080026);
    noRelatedSym_0_2.set(PositionLimit_85);
    Instrument_85.insert(PositionLimit_85.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_85("STRING_INT");
    noRelatedSym_0_2.set(PriceQuoteMethod_85);
    Instrument_85.insert(PriceQuoteMethod_85.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_85("STRING_1792884849");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_85);
    Instrument_85.insert(PriceUnitOfMeasure_85.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_85;
    PriceUnitOfMeasureQty_85.setString("16013716");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_85);
    Instrument_85.insert(PriceUnitOfMeasureQty_85.getString());
    FIX::Product Product_87(8);
    noRelatedSym_0_2.set(Product_87);
    Instrument_85.insert(Product_87.getString());
    FIX::ProductComplex ProductComplex_85("STRING_2022739233");
    noRelatedSym_0_2.set(ProductComplex_85);
    Instrument_85.insert(ProductComplex_85.getString());
    FIX::PutOrCall PutOrCall_85(0);
    noRelatedSym_0_2.set(PutOrCall_85);
    Instrument_85.insert(PutOrCall_85.getString());
    FIX::RedemptionDate RedemptionDate_85("LOCALMKTDATE_1327882731");
    noRelatedSym_0_2.set(RedemptionDate_85);
    Instrument_85.insert(RedemptionDate_85.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_85("STRING_1227607161");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_85);
    Instrument_85.insert(RepoCollateralSecurityType_85.getString());
    FIX::RepurchaseRate RepurchaseRate_85;
    RepurchaseRate_85.setString("51.550000");
    noRelatedSym_0_2.set(RepurchaseRate_85);
    Instrument_85.insert(RepurchaseRate_85.getString());
    FIX::RepurchaseTerm RepurchaseTerm_85(213158906);
    noRelatedSym_0_2.set(RepurchaseTerm_85);
    Instrument_85.insert(RepurchaseTerm_85.getString());
    FIX::RestructuringType RestructuringType_85("STRING_FR");
    noRelatedSym_0_2.set(RestructuringType_85);
    Instrument_85.insert(RestructuringType_85.getString());
    FIX::SecurityDesc SecurityDesc_85("STRING_785328464");
    noRelatedSym_0_2.set(SecurityDesc_85);
    Instrument_85.insert(SecurityDesc_85.getString());
    FIX::SecurityExchange SecurityExchange_85("EXCHANGE_1934815103");
    noRelatedSym_0_2.set(SecurityExchange_85);
    Instrument_85.insert(SecurityExchange_85.getString());
    FIX::SecurityGroup SecurityGroup_85("STRING_913041243");
    noRelatedSym_0_2.set(SecurityGroup_85);
    Instrument_85.insert(SecurityGroup_85.getString());
    FIX::SecurityID SecurityID_85("STRING_971054798");
    noRelatedSym_0_2.set(SecurityID_85);
    Instrument_85.insert(SecurityID_85.getString());
    FIX::SecurityIDSource SecurityIDSource_85("STRING_5");
    noRelatedSym_0_2.set(SecurityIDSource_85);
    Instrument_85.insert(SecurityIDSource_85.getString());
    FIX::SecurityStatus SecurityStatus_85("STRING_2");
    noRelatedSym_0_2.set(SecurityStatus_85);
    Instrument_85.insert(SecurityStatus_85.getString());
    FIX::SecuritySubType SecuritySubType_86("STRING_1570368239");
    noRelatedSym_0_2.set(SecuritySubType_86);
    Instrument_85.insert(SecuritySubType_86.getString());
    FIX::SecurityType SecurityType_87("STRING_MT");
    noRelatedSym_0_2.set(SecurityType_87);
    Instrument_85.insert(SecurityType_87.getString());
    FIX::Seniority Seniority_85("STRING_SD");
    noRelatedSym_0_2.set(Seniority_85);
    Instrument_85.insert(Seniority_85.getString());
    FIX::SettlMethod SettlMethod_85('C');
    noRelatedSym_0_2.set(SettlMethod_85);
    Instrument_85.insert(SettlMethod_85.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_85("STRING_313870668");
    noRelatedSym_0_2.set(SettleOnOpenFlag_85);
    Instrument_85.insert(SettleOnOpenFlag_85.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_85("STRING_714748927");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_85);
    Instrument_85.insert(StateOrProvinceOfIssue_85.getString());
    FIX::StrikeCurrency StrikeCurrency_85("USD");
    noRelatedSym_0_2.set(StrikeCurrency_85);
    Instrument_85.insert(StrikeCurrency_85.getString());
    FIX::StrikeMultiplier StrikeMultiplier_85;
    StrikeMultiplier_85.setString("12582151");
    noRelatedSym_0_2.set(StrikeMultiplier_85);
    Instrument_85.insert(StrikeMultiplier_85.getString());
    FIX::StrikePrice StrikePrice_85;
    StrikePrice_85.setString("17551073");
    noRelatedSym_0_2.set(StrikePrice_85);
    Instrument_85.insert(StrikePrice_85.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_85(3);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_85);
    Instrument_85.insert(StrikePriceBoundaryMethod_85.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_85;
    StrikePriceBoundaryPrecision_85.setString("29.790000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_85);
    Instrument_85.insert(StrikePriceBoundaryPrecision_85.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_85(1);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_85);
    Instrument_85.insert(StrikePriceDeterminationMethod_85.getString());
    FIX::StrikeValue StrikeValue_85;
    StrikeValue_85.setString("21417636");
    noRelatedSym_0_2.set(StrikeValue_85);
    Instrument_85.insert(StrikeValue_85.getString());
    FIX::Symbol Symbol_85("STRING_129753521");
    noRelatedSym_0_2.set(Symbol_85);
    Instrument_85.insert(Symbol_85.getString());
    FIX::SymbolSfx SymbolSfx_85("STRING_WI");
    noRelatedSym_0_2.set(SymbolSfx_85);
    Instrument_85.insert(SymbolSfx_85.getString());
    FIX::TimeUnit TimeUnit_85("STRING_D");
    noRelatedSym_0_2.set(TimeUnit_85);
    Instrument_85.insert(TimeUnit_85.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_85(3);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_85);
    Instrument_85.insert(UnderlyingPriceDeterminationMethod_85.getString());
    FIX::UnitOfMeasure UnitOfMeasure_85("STRING_tn");
    noRelatedSym_0_2.set(UnitOfMeasure_85);
    Instrument_85.insert(UnitOfMeasure_85.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_85;
    UnitOfMeasureQty_85.setString("13763766");
    noRelatedSym_0_2.set(UnitOfMeasureQty_85);
    Instrument_85.insert(UnitOfMeasureQty_85.getString());
    FIX::ValuationMethod ValuationMethod_85("STRING_CDSD");
    noRelatedSym_0_2.set(ValuationMethod_85);
    Instrument_85.insert(ValuationMethod_85.getString());
    all_values.push_back(Instrument_85);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_172;
      FIX::ComplexEventCondition ComplexEventCondition_172(1);
      noComplexEvents_2_1_0.set(ComplexEventCondition_172);
      ComplexEvents_NoComplexEvents_172.insert(ComplexEventCondition_172.getString());
      FIX::ComplexEventPrice ComplexEventPrice_172;
      ComplexEventPrice_172.setString("15887687");
      noComplexEvents_2_1_0.set(ComplexEventPrice_172);
      ComplexEvents_NoComplexEvents_172.insert(ComplexEventPrice_172.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_172(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_172);
      ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceBoundaryMethod_172.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_172;
      ComplexEventPriceBoundaryPrecision_172.setString("66.150000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_172);
      ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceBoundaryPrecision_172.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_172(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_172);
      ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceTimeType_172.getString());
      FIX::ComplexEventType ComplexEventType_172(3);
      noComplexEvents_2_1_0.set(ComplexEventType_172);
      ComplexEvents_NoComplexEvents_172.insert(ComplexEventType_172.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_172;
      ComplexOptPayoutAmount_172.setString("16298114");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_172);
      ComplexEvents_NoComplexEvents_172.insert(ComplexOptPayoutAmount_172.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_172);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_349;
        FIX::ComplexEventEndDate ComplexEventEndDate_349(FIX::UTCTIMESTAMP(12, 23, 20, 22, 12, 2008));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_349);
        ComplexEventDates_NoComplexEventDates_349.insert(ComplexEventEndDate_349.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_349(FIX::UTCTIMESTAMP(16, 18, 53, 12, 2, 2011));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_349);
        ComplexEventDates_NoComplexEventDates_349.insert(ComplexEventStartDate_349.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_349);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_705;
          FIX::ComplexEventEndTime ComplexEventEndTime_705(FIX::UTCTIMEONLY(14, 57, 57));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_705);
          ComplexEventTimes_NoComplexEventTimes_705.insert(ComplexEventEndTime_705.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_705(FIX::UTCTIMEONLY(20, 18, 56));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_705);
          ComplexEventTimes_NoComplexEventTimes_705.insert(ComplexEventStartTime_705.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_705);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_706;
          FIX::ComplexEventEndTime ComplexEventEndTime_706(FIX::UTCTIMEONLY(6, 7, 38));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_706);
          ComplexEventTimes_NoComplexEventTimes_706.insert(ComplexEventEndTime_706.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_706(FIX::UTCTIMEONLY(22, 3, 59));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_706);
          ComplexEventTimes_NoComplexEventTimes_706.insert(ComplexEventStartTime_706.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_706);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_707;
          FIX::ComplexEventEndTime ComplexEventEndTime_707(FIX::UTCTIMEONLY(3, 15, 34));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventEndTime_707);
          ComplexEventTimes_NoComplexEventTimes_707.insert(ComplexEventEndTime_707.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_707(FIX::UTCTIMEONLY(18, 46, 55));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventStartTime_707);
          ComplexEventTimes_NoComplexEventTimes_707.insert(ComplexEventStartTime_707.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_707);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_350;
        FIX::ComplexEventEndDate ComplexEventEndDate_350(FIX::UTCTIMESTAMP(16, 49, 38, 6, 7, 2004));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_350);
        ComplexEventDates_NoComplexEventDates_350.insert(ComplexEventEndDate_350.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_350(FIX::UTCTIMESTAMP(13, 17, 42, 25, 3, 2010));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_350);
        ComplexEventDates_NoComplexEventDates_350.insert(ComplexEventStartDate_350.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_350);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_708;
          FIX::ComplexEventEndTime ComplexEventEndTime_708(FIX::UTCTIMEONLY(23, 13, 11));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_708);
          ComplexEventTimes_NoComplexEventTimes_708.insert(ComplexEventEndTime_708.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_708(FIX::UTCTIMEONLY(3, 14, 0));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_708);
          ComplexEventTimes_NoComplexEventTimes_708.insert(ComplexEventStartTime_708.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_708);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_709;
          FIX::ComplexEventEndTime ComplexEventEndTime_709(FIX::UTCTIMEONLY(9, 15, 6));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_709);
          ComplexEventTimes_NoComplexEventTimes_709.insert(ComplexEventEndTime_709.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_709(FIX::UTCTIMEONLY(14, 52, 10));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_709);
          ComplexEventTimes_NoComplexEventTimes_709.insert(ComplexEventStartTime_709.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_709);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_710;
          FIX::ComplexEventEndTime ComplexEventEndTime_710(FIX::UTCTIMEONLY(1, 59, 23));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventEndTime_710);
          ComplexEventTimes_NoComplexEventTimes_710.insert(ComplexEventEndTime_710.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_710(FIX::UTCTIMEONLY(17, 43, 8));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventStartTime_710);
          ComplexEventTimes_NoComplexEventTimes_710.insert(ComplexEventStartTime_710.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_710);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_173;
      FIX::ComplexEventCondition ComplexEventCondition_173(1);
      noComplexEvents_2_1_1.set(ComplexEventCondition_173);
      ComplexEvents_NoComplexEvents_173.insert(ComplexEventCondition_173.getString());
      FIX::ComplexEventPrice ComplexEventPrice_173;
      ComplexEventPrice_173.setString("9670582");
      noComplexEvents_2_1_1.set(ComplexEventPrice_173);
      ComplexEvents_NoComplexEvents_173.insert(ComplexEventPrice_173.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_173(3);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_173);
      ComplexEvents_NoComplexEvents_173.insert(ComplexEventPriceBoundaryMethod_173.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_173;
      ComplexEventPriceBoundaryPrecision_173.setString("38.080000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_173);
      ComplexEvents_NoComplexEvents_173.insert(ComplexEventPriceBoundaryPrecision_173.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_173(1);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_173);
      ComplexEvents_NoComplexEvents_173.insert(ComplexEventPriceTimeType_173.getString());
      FIX::ComplexEventType ComplexEventType_173(9);
      noComplexEvents_2_1_1.set(ComplexEventType_173);
      ComplexEvents_NoComplexEvents_173.insert(ComplexEventType_173.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_173;
      ComplexOptPayoutAmount_173.setString("564262");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_173);
      ComplexEvents_NoComplexEvents_173.insert(ComplexOptPayoutAmount_173.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_173);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_351;
        FIX::ComplexEventEndDate ComplexEventEndDate_351(FIX::UTCTIMESTAMP(2, 19, 26, 25, 2, 2009));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_351);
        ComplexEventDates_NoComplexEventDates_351.insert(ComplexEventEndDate_351.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_351(FIX::UTCTIMESTAMP(10, 34, 32, 4, 1, 2013));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_351);
        ComplexEventDates_NoComplexEventDates_351.insert(ComplexEventStartDate_351.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_351);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_711;
          FIX::ComplexEventEndTime ComplexEventEndTime_711(FIX::UTCTIMEONLY(18, 5, 8));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_711);
          ComplexEventTimes_NoComplexEventTimes_711.insert(ComplexEventEndTime_711.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_711(FIX::UTCTIMEONLY(3, 51, 29));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_711);
          ComplexEventTimes_NoComplexEventTimes_711.insert(ComplexEventStartTime_711.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_711);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_712;
          FIX::ComplexEventEndTime ComplexEventEndTime_712(FIX::UTCTIMEONLY(8, 3, 57));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventEndTime_712);
          ComplexEventTimes_NoComplexEventTimes_712.insert(ComplexEventEndTime_712.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_712(FIX::UTCTIMEONLY(9, 11, 43));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventStartTime_712);
          ComplexEventTimes_NoComplexEventTimes_712.insert(ComplexEventStartTime_712.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_712);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_713;
          FIX::ComplexEventEndTime ComplexEventEndTime_713(FIX::UTCTIMEONLY(1, 2, 5));
          noComplexEventTimes_2_1_0_3_2.set(ComplexEventEndTime_713);
          ComplexEventTimes_NoComplexEventTimes_713.insert(ComplexEventEndTime_713.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_713(FIX::UTCTIMEONLY(15, 32, 49));
          noComplexEventTimes_2_1_0_3_2.set(ComplexEventStartTime_713);
          ComplexEventTimes_NoComplexEventTimes_713.insert(ComplexEventStartTime_713.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_713);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_352;
        FIX::ComplexEventEndDate ComplexEventEndDate_352(FIX::UTCTIMESTAMP(7, 21, 22, 7, 3, 2004));
        noComplexEventDates_2_1_2_1.set(ComplexEventEndDate_352);
        ComplexEventDates_NoComplexEventDates_352.insert(ComplexEventEndDate_352.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_352(FIX::UTCTIMESTAMP(20, 34, 44, 17, 6, 2004));
        noComplexEventDates_2_1_2_1.set(ComplexEventStartDate_352);
        ComplexEventDates_NoComplexEventDates_352.insert(ComplexEventStartDate_352.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_352);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_714;
          FIX::ComplexEventEndTime ComplexEventEndTime_714(FIX::UTCTIMEONLY(0, 29, 4));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventEndTime_714);
          ComplexEventTimes_NoComplexEventTimes_714.insert(ComplexEventEndTime_714.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_714(FIX::UTCTIMEONLY(3, 7, 15));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventStartTime_714);
          ComplexEventTimes_NoComplexEventTimes_714.insert(ComplexEventStartTime_714.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_714);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_715;
          FIX::ComplexEventEndTime ComplexEventEndTime_715(FIX::UTCTIMEONLY(8, 18, 35));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventEndTime_715);
          ComplexEventTimes_NoComplexEventTimes_715.insert(ComplexEventEndTime_715.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_715(FIX::UTCTIMEONLY(1, 0, 48));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventStartTime_715);
          ComplexEventTimes_NoComplexEventTimes_715.insert(ComplexEventStartTime_715.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_715);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_1);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_174;
      FIX::ComplexEventCondition ComplexEventCondition_174(2);
      noComplexEvents_2_1_2.set(ComplexEventCondition_174);
      ComplexEvents_NoComplexEvents_174.insert(ComplexEventCondition_174.getString());
      FIX::ComplexEventPrice ComplexEventPrice_174;
      ComplexEventPrice_174.setString("2400646");
      noComplexEvents_2_1_2.set(ComplexEventPrice_174);
      ComplexEvents_NoComplexEvents_174.insert(ComplexEventPrice_174.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_174(1);
      noComplexEvents_2_1_2.set(ComplexEventPriceBoundaryMethod_174);
      ComplexEvents_NoComplexEvents_174.insert(ComplexEventPriceBoundaryMethod_174.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_174;
      ComplexEventPriceBoundaryPrecision_174.setString("55.010000");
      noComplexEvents_2_1_2.set(ComplexEventPriceBoundaryPrecision_174);
      ComplexEvents_NoComplexEvents_174.insert(ComplexEventPriceBoundaryPrecision_174.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_174(2);
      noComplexEvents_2_1_2.set(ComplexEventPriceTimeType_174);
      ComplexEvents_NoComplexEvents_174.insert(ComplexEventPriceTimeType_174.getString());
      FIX::ComplexEventType ComplexEventType_174(4);
      noComplexEvents_2_1_2.set(ComplexEventType_174);
      ComplexEvents_NoComplexEvents_174.insert(ComplexEventType_174.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_174;
      ComplexOptPayoutAmount_174.setString("12436851");
      noComplexEvents_2_1_2.set(ComplexOptPayoutAmount_174);
      ComplexEvents_NoComplexEvents_174.insert(ComplexOptPayoutAmount_174.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_174);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_353;
        FIX::ComplexEventEndDate ComplexEventEndDate_353(FIX::UTCTIMESTAMP(7, 11, 30, 12, 4, 2011));
        noComplexEventDates_2_2_2_0.set(ComplexEventEndDate_353);
        ComplexEventDates_NoComplexEventDates_353.insert(ComplexEventEndDate_353.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_353(FIX::UTCTIMESTAMP(16, 26, 15, 12, 6, 2010));
        noComplexEventDates_2_2_2_0.set(ComplexEventStartDate_353);
        ComplexEventDates_NoComplexEventDates_353.insert(ComplexEventStartDate_353.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_353);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_716;
          FIX::ComplexEventEndTime ComplexEventEndTime_716(FIX::UTCTIMEONLY(10, 49, 15));
          noComplexEventTimes_2_2_0_3_0.set(ComplexEventEndTime_716);
          ComplexEventTimes_NoComplexEventTimes_716.insert(ComplexEventEndTime_716.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_716(FIX::UTCTIMEONLY(7, 15, 46));
          noComplexEventTimes_2_2_0_3_0.set(ComplexEventStartTime_716);
          ComplexEventTimes_NoComplexEventTimes_716.insert(ComplexEventStartTime_716.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_716);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_0);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_354;
        FIX::ComplexEventEndDate ComplexEventEndDate_354(FIX::UTCTIMESTAMP(6, 48, 7, 16, 2, 2016));
        noComplexEventDates_2_2_2_1.set(ComplexEventEndDate_354);
        ComplexEventDates_NoComplexEventDates_354.insert(ComplexEventEndDate_354.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_354(FIX::UTCTIMESTAMP(2, 24, 43, 0, 1, 2010));
        noComplexEventDates_2_2_2_1.set(ComplexEventStartDate_354);
        ComplexEventDates_NoComplexEventDates_354.insert(ComplexEventStartDate_354.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_354);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_717;
          FIX::ComplexEventEndTime ComplexEventEndTime_717(FIX::UTCTIMEONLY(18, 56, 2));
          noComplexEventTimes_2_2_1_3_0.set(ComplexEventEndTime_717);
          ComplexEventTimes_NoComplexEventTimes_717.insert(ComplexEventEndTime_717.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_717(FIX::UTCTIMEONLY(5, 16, 2));
          noComplexEventTimes_2_2_1_3_0.set(ComplexEventStartTime_717);
          ComplexEventTimes_NoComplexEventTimes_717.insert(ComplexEventStartTime_717.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_717);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_1.addGroup(noComplexEventTimes_2_2_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_718;
          FIX::ComplexEventEndTime ComplexEventEndTime_718(FIX::UTCTIMEONLY(3, 51, 52));
          noComplexEventTimes_2_2_1_3_1.set(ComplexEventEndTime_718);
          ComplexEventTimes_NoComplexEventTimes_718.insert(ComplexEventEndTime_718.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_718(FIX::UTCTIMEONLY(10, 59, 43));
          noComplexEventTimes_2_2_1_3_1.set(ComplexEventStartTime_718);
          ComplexEventTimes_NoComplexEventTimes_718.insert(ComplexEventStartTime_718.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_718);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_1.addGroup(noComplexEventTimes_2_2_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_719;
          FIX::ComplexEventEndTime ComplexEventEndTime_719(FIX::UTCTIMEONLY(5, 32, 15));
          noComplexEventTimes_2_2_1_3_2.set(ComplexEventEndTime_719);
          ComplexEventTimes_NoComplexEventTimes_719.insert(ComplexEventEndTime_719.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_719(FIX::UTCTIMEONLY(13, 44, 33));
          noComplexEventTimes_2_2_1_3_2.set(ComplexEventStartTime_719);
          ComplexEventTimes_NoComplexEventTimes_719.insert(ComplexEventStartTime_719.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_719);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_1.addGroup(noComplexEventTimes_2_2_1_3_2);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_355;
        FIX::ComplexEventEndDate ComplexEventEndDate_355(FIX::UTCTIMESTAMP(12, 16, 19, 24, 3, 2005));
        noComplexEventDates_2_2_2_2.set(ComplexEventEndDate_355);
        ComplexEventDates_NoComplexEventDates_355.insert(ComplexEventEndDate_355.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_355(FIX::UTCTIMESTAMP(1, 37, 10, 11, 11, 2013));
        noComplexEventDates_2_2_2_2.set(ComplexEventStartDate_355);
        ComplexEventDates_NoComplexEventDates_355.insert(ComplexEventStartDate_355.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_355);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_720;
          FIX::ComplexEventEndTime ComplexEventEndTime_720(FIX::UTCTIMEONLY(2, 53, 3));
          noComplexEventTimes_2_2_2_3_0.set(ComplexEventEndTime_720);
          ComplexEventTimes_NoComplexEventTimes_720.insert(ComplexEventEndTime_720.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_720(FIX::UTCTIMEONLY(15, 2, 14));
          noComplexEventTimes_2_2_2_3_0.set(ComplexEventStartTime_720);
          ComplexEventTimes_NoComplexEventTimes_720.insert(ComplexEventStartTime_720.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_720);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_2.addGroup(noComplexEventTimes_2_2_2_3_0);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_2);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_171;
      FIX::EventDate EventDate_171("LOCALMKTDATE_724701419");
      noEvents_2_1_0.set(EventDate_171);
      EvntGrp_NoEvents_171.insert(EventDate_171.getString());
      FIX::EventPx EventPx_171;
      EventPx_171.setString("20958304");
      noEvents_2_1_0.set(EventPx_171);
      EvntGrp_NoEvents_171.insert(EventPx_171.getString());
      FIX::EventText EventText_171("STRING_1207044567");
      noEvents_2_1_0.set(EventText_171);
      EvntGrp_NoEvents_171.insert(EventText_171.getString());
      FIX::EventTime EventTime_171(FIX::UTCTIMESTAMP(15, 3, 34, 22, 4, 2008));
      noEvents_2_1_0.set(EventTime_171);
      EvntGrp_NoEvents_171.insert(EventTime_171.getString());
      FIX::EventType EventType_171(15);
      noEvents_2_1_0.set(EventType_171);
      EvntGrp_NoEvents_171.insert(EventType_171.getString());
      all_values.push_back(EvntGrp_NoEvents_171);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_179;
      FIX::InstrumentPartyID InstrumentPartyID_179("STRING_1172861660");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_179);
      InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyID_179.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_179('2');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_179);
      InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyIDSource_179.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_179(1338865248);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_179);
      InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyRole_179.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_179);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349;
        FIX::InstrumentPartySubID InstrumentPartySubID_349("STRING_1972398004");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_349);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349.insert(InstrumentPartySubID_349.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_349(173096150);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_349);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349.insert(InstrumentPartySubIDType_349.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_180;
      FIX::InstrumentPartyID InstrumentPartyID_180("STRING_448364697");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_180);
      InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyID_180.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_180('1');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_180);
      InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyIDSource_180.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_180(210351069);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_180);
      InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyRole_180.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_180);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350;
        FIX::InstrumentPartySubID InstrumentPartySubID_350("STRING_1482426102");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_350);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350.insert(InstrumentPartySubID_350.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_350(218198255);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_350);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350.insert(InstrumentPartySubIDType_350.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_181;
      FIX::InstrumentPartyID InstrumentPartyID_181("STRING_2098371239");
      noInstrumentParties_2_1_2.set(InstrumentPartyID_181);
      InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyID_181.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_181('5');
      noInstrumentParties_2_1_2.set(InstrumentPartyIDSource_181);
      InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyIDSource_181.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_181(1248095166);
      noInstrumentParties_2_1_2.set(InstrumentPartyRole_181);
      InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyRole_181.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_181);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351;
        FIX::InstrumentPartySubID InstrumentPartySubID_351("STRING_362163092");
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubID_351);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351.insert(InstrumentPartySubID_351.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_351(419748973);
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubIDType_351);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351.insert(InstrumentPartySubIDType_351.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352;
        FIX::InstrumentPartySubID InstrumentPartySubID_352("STRING_1165799227");
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubID_352);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352.insert(InstrumentPartySubID_352.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_352(1086864511);
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubIDType_352);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352.insert(InstrumentPartySubIDType_352.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_159;
      FIX::SecurityAltID SecurityAltID_159("STRING_225360146");
      noSecurityAltID_2_1_0.set(SecurityAltID_159);
      SecAltIDGrp_NoSecurityAltID_159.insert(SecurityAltID_159.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_159("STRING_1930823552");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_159);
      SecAltIDGrp_NoSecurityAltID_159.insert(SecurityAltIDSource_159.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_159);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_170;
    FIX::SecurityXML SecurityXML_171("XMLDATA_1050330511");
    noRelatedSym_0_2.set(SecurityXML_171);
    FIX::SecurityXMLLen SecurityXMLLen_85(523079970);
    noRelatedSym_0_2.set(SecurityXMLLen_85);
    FIX::SecurityXMLSchema SecurityXMLSchema_85("STRING_935825458");
    noRelatedSym_0_2.set(SecurityXMLSchema_85);
    SecurityXML_170.insert(SecurityXMLSchema_85.getString());
    all_values.push_back(SecurityXML_170);
    all_compo_names.insert("SecurityXML");

    // InstrumentExtension
    multiset<string> InstrumentExtension_14;
    FIX::DeliveryForm DeliveryForm_14(2);
    noRelatedSym_0_2.set(DeliveryForm_14);
    InstrumentExtension_14.insert(DeliveryForm_14.getString());
    FIX::PctAtRisk PctAtRisk_14;
    PctAtRisk_14.setString("44.530000");
    noRelatedSym_0_2.set(PctAtRisk_14);
    InstrumentExtension_14.insert(PctAtRisk_14.getString());
    all_values.push_back(InstrumentExtension_14);
    all_compo_names.insert("InstrumentExtension");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_27;
      FIX::InstrAttribType InstrAttribType_27(14);
      noInstrAttrib_2_1_0.set(InstrAttribType_27);
      AttrbGrp_NoInstrAttrib_27.insert(InstrAttribType_27.getString());
      FIX::InstrAttribValue InstrAttribValue_27("STRING_1333115285");
      noInstrAttrib_2_1_0.set(InstrAttribValue_27);
      AttrbGrp_NoInstrAttrib_27.insert(InstrAttribValue_27.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_27);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_28;
      FIX::InstrAttribType InstrAttribType_28(2);
      noInstrAttrib_2_1_1.set(InstrAttribType_28);
      AttrbGrp_NoInstrAttrib_28.insert(InstrAttribType_28.getString());
      FIX::InstrAttribValue InstrAttribValue_28("STRING_2122988898");
      noInstrAttrib_2_1_1.set(InstrAttribValue_28);
      AttrbGrp_NoInstrAttrib_28.insert(InstrAttribValue_28.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_28);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_1);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_14;
    FIX::ExpirationCycle ExpirationCycle_15(0);
    noRelatedSym_0_2.set(ExpirationCycle_15);
    BaseTradingRules_14.insert(ExpirationCycle_15.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_14(2);
    noRelatedSym_0_2.set(ImpliedMarketIndicator_14);
    BaseTradingRules_14.insert(ImpliedMarketIndicator_14.getString());
    FIX::MaxPriceVariation MaxPriceVariation_14;
    MaxPriceVariation_14.setString("19479032");
    noRelatedSym_0_2.set(MaxPriceVariation_14);
    BaseTradingRules_14.insert(MaxPriceVariation_14.getString());
    FIX::MaxTradeVol MaxTradeVol_14;
    MaxTradeVol_14.setString("6975930");
    noRelatedSym_0_2.set(MaxTradeVol_14);
    BaseTradingRules_14.insert(MaxTradeVol_14.getString());
    FIX::MinTradeVol MinTradeVol_14;
    MinTradeVol_14.setString("11954231");
    noRelatedSym_0_2.set(MinTradeVol_14);
    BaseTradingRules_14.insert(MinTradeVol_14.getString());
    FIX::MultilegModel MultilegModel_16(1);
    noRelatedSym_0_2.set(MultilegModel_16);
    BaseTradingRules_14.insert(MultilegModel_16.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_16(3);
    noRelatedSym_0_2.set(MultilegPriceMethod_16);
    BaseTradingRules_14.insert(MultilegPriceMethod_16.getString());
    FIX::PriceType PriceType_48(11);
    noRelatedSym_0_2.set(PriceType_48);
    BaseTradingRules_14.insert(PriceType_48.getString());
    FIX::RoundLot RoundLot_14;
    RoundLot_14.setString("1586370");
    noRelatedSym_0_2.set(RoundLot_14);
    BaseTradingRules_14.insert(RoundLot_14.getString());
    FIX::TradingCurrency TradingCurrency_14("EUR");
    noRelatedSym_0_2.set(TradingCurrency_14);
    BaseTradingRules_14.insert(TradingCurrency_14.getString());
    all_values.push_back(BaseTradingRules_14);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_29;
      FIX::LotType LotType_33('4');
      noLotTypeRules_2_1_0.set(LotType_33);
      LotTypeRules_NoLotTypeRules_29.insert(LotType_33.getString());
      FIX::MinLotSize MinLotSize_29;
      MinLotSize_29.setString("17911515");
      noLotTypeRules_2_1_0.set(MinLotSize_29);
      LotTypeRules_NoLotTypeRules_29.insert(MinLotSize_29.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_29);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noRelatedSym_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_14;
    FIX::HighLimitPrice HighLimitPrice_14;
    HighLimitPrice_14.setString("10809332");
    noRelatedSym_0_2.set(HighLimitPrice_14);
    PriceLimits_14.insert(HighLimitPrice_14.getString());
    FIX::LowLimitPrice LowLimitPrice_14;
    LowLimitPrice_14.setString("6465028");
    noRelatedSym_0_2.set(LowLimitPrice_14);
    PriceLimits_14.insert(LowLimitPrice_14.getString());
    FIX::PriceLimitType PriceLimitType_14(1);
    noRelatedSym_0_2.set(PriceLimitType_14);
    PriceLimits_14.insert(PriceLimitType_14.getString());
    FIX::TradingReferencePrice TradingReferencePrice_14;
    TradingReferencePrice_14.setString("203140");
    noRelatedSym_0_2.set(TradingReferencePrice_14);
    PriceLimits_14.insert(TradingReferencePrice_14.getString());
    all_values.push_back(PriceLimits_14);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_31;
      FIX::EndTickPriceRange EndTickPriceRange_31;
      EndTickPriceRange_31.setString("10348272");
      noTickRules_2_1_0.set(EndTickPriceRange_31);
      TickRules_NoTickRules_31.insert(EndTickPriceRange_31.getString());
      FIX::StartTickPriceRange StartTickPriceRange_31;
      StartTickPriceRange_31.setString("19511376");
      noTickRules_2_1_0.set(StartTickPriceRange_31);
      TickRules_NoTickRules_31.insert(StartTickPriceRange_31.getString());
      FIX::TickIncrement TickIncrement_31;
      TickIncrement_31.setString("20649291");
      noTickRules_2_1_0.set(TickIncrement_31);
      TickRules_NoTickRules_31.insert(TickIncrement_31.getString());
      FIX::TickRuleType TickRuleType_31(3);
      noTickRules_2_1_0.set(TickRuleType_31);
      TickRules_NoTickRules_31.insert(TickRuleType_31.getString());
      all_values.push_back(TickRules_NoTickRules_31);
      all_compo_names.insert("TickRules.NoTickRules");

      noRelatedSym_0_2.addGroup(noTickRules_2_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_24;
      FIX::NestedInstrAttribType NestedInstrAttribType_24(171130664);
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribType_24);
      NestedInstrumentAttribute_NoNestedInstrAttrib_24.insert(NestedInstrAttribType_24.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_24("STRING_416618033");
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribValue_24);
      NestedInstrumentAttribute_NoNestedInstrAttrib_24.insert(NestedInstrAttribValue_24.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_24);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noRelatedSym_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_2_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_25;
      FIX::NestedInstrAttribType NestedInstrAttribType_25(1263704147);
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribType_25);
      NestedInstrumentAttribute_NoNestedInstrAttrib_25.insert(NestedInstrAttribType_25.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_25("STRING_251476888");
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribValue_25);
      NestedInstrumentAttribute_NoNestedInstrAttrib_25.insert(NestedInstrAttribValue_25.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_25);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noRelatedSym_0_2.addGroup(noNestedInstrAttrib_2_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_24;
      FIX::TradingSessionID TradingSessionID_106("STRING_5");
      noTradingSessionRules_2_1_0.set(TradingSessionID_106);
      TradingSessionRulesGrp_NoTradingSessionRules_24.insert(TradingSessionID_106.getString());
      FIX::TradingSessionSubID TradingSessionSubID_106("STRING_6");
      noTradingSessionRules_2_1_0.set(TradingSessionSubID_106);
      TradingSessionRulesGrp_NoTradingSessionRules_24.insert(TradingSessionSubID_106.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_24);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_51;
        FIX::ExecInstValue ExecInstValue_51('1');
        noExecInstRules_2_0_2_0.set(ExecInstValue_51);
        ExecInstRules_NoExecInstRules_51.insert(ExecInstValue_51.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_51);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_46;
        FIX::MDBookType MDBookType_48(1);
        noMDFeedTypes_2_0_2_0.set(MDBookType_48);
        MarketDataFeedTypes_NoMDFeedTypes_46.insert(MDBookType_48.getString());
        FIX::MDFeedType MDFeedType_48("STRING_608304910");
        noMDFeedTypes_2_0_2_0.set(MDFeedType_48);
        MarketDataFeedTypes_NoMDFeedTypes_46.insert(MDFeedType_48.getString());
        FIX::MarketDepth MarketDepth_49(851096362);
        noMDFeedTypes_2_0_2_0.set(MarketDepth_49);
        MarketDataFeedTypes_NoMDFeedTypes_46.insert(MarketDepth_49.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_46);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_51;
        FIX::MatchAlgorithm MatchAlgorithm_51("STRING_1654530476");
        noMatchRules_2_0_2_0.set(MatchAlgorithm_51);
        MatchRules_NoMatchRules_51.insert(MatchAlgorithm_51.getString());
        FIX::MatchType MatchType_56("STRING_8");
        noMatchRules_2_0_2_0.set(MatchType_56);
        MatchRules_NoMatchRules_51.insert(MatchType_56.getString());
        all_values.push_back(MatchRules_NoMatchRules_51);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_52;
        FIX::MatchAlgorithm MatchAlgorithm_52("STRING_710942411");
        noMatchRules_2_0_2_1.set(MatchAlgorithm_52);
        MatchRules_NoMatchRules_52.insert(MatchAlgorithm_52.getString());
        FIX::MatchType MatchType_57("STRING_S1");
        noMatchRules_2_0_2_1.set(MatchType_57);
        MatchRules_NoMatchRules_52.insert(MatchType_57.getString());
        all_values.push_back(MatchRules_NoMatchRules_52);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_50;
        FIX::OrdType OrdType_83('J');
        noOrdTypeRules_2_0_2_0.set(OrdType_83);
        OrdTypeRules_NoOrdTypeRules_50.insert(OrdType_83.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_50);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_47;
        FIX::TimeInForce TimeInForce_60('4');
        noTimeInForceRules_2_0_2_0.set(TimeInForce_60);
        TimeInForceRules_NoTimeInForceRules_47.insert(TimeInForce_60.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_47);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_48;
        FIX::TimeInForce TimeInForce_61('3');
        noTimeInForceRules_2_0_2_1.set(TimeInForce_61);
        TimeInForceRules_NoTimeInForceRules_48.insert(TimeInForce_61.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_48);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_49;
        FIX::TimeInForce TimeInForce_62('2');
        noTimeInForceRules_2_0_2_2.set(TimeInForce_62);
        TimeInForceRules_NoTimeInForceRules_49.insert(TimeInForce_62.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_49);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_2_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_25;
      FIX::TradingSessionID TradingSessionID_107("STRING_1");
      noTradingSessionRules_2_1_1.set(TradingSessionID_107);
      TradingSessionRulesGrp_NoTradingSessionRules_25.insert(TradingSessionID_107.getString());
      FIX::TradingSessionSubID TradingSessionSubID_107("STRING_4");
      noTradingSessionRules_2_1_1.set(TradingSessionSubID_107);
      TradingSessionRulesGrp_NoTradingSessionRules_25.insert(TradingSessionSubID_107.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_25);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_52;
        FIX::ExecInstValue ExecInstValue_52('4');
        noExecInstRules_2_1_2_0.set(ExecInstValue_52);
        ExecInstRules_NoExecInstRules_52.insert(ExecInstValue_52.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_52);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_53;
        FIX::ExecInstValue ExecInstValue_53('3');
        noExecInstRules_2_1_2_1.set(ExecInstValue_53);
        ExecInstRules_NoExecInstRules_53.insert(ExecInstValue_53.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_53);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_54;
        FIX::ExecInstValue ExecInstValue_54('1');
        noExecInstRules_2_1_2_2.set(ExecInstValue_54);
        ExecInstRules_NoExecInstRules_54.insert(ExecInstValue_54.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_54);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_47;
        FIX::MDBookType MDBookType_49(3);
        noMDFeedTypes_2_1_2_0.set(MDBookType_49);
        MarketDataFeedTypes_NoMDFeedTypes_47.insert(MDBookType_49.getString());
        FIX::MDFeedType MDFeedType_49("STRING_1819163853");
        noMDFeedTypes_2_1_2_0.set(MDFeedType_49);
        MarketDataFeedTypes_NoMDFeedTypes_47.insert(MDFeedType_49.getString());
        FIX::MarketDepth MarketDepth_50(341621053);
        noMDFeedTypes_2_1_2_0.set(MarketDepth_50);
        MarketDataFeedTypes_NoMDFeedTypes_47.insert(MarketDepth_50.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_47);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_53;
        FIX::MatchAlgorithm MatchAlgorithm_53("STRING_1421413524");
        noMatchRules_2_1_2_0.set(MatchAlgorithm_53);
        MatchRules_NoMatchRules_53.insert(MatchAlgorithm_53.getString());
        FIX::MatchType MatchType_58("STRING_4");
        noMatchRules_2_1_2_0.set(MatchType_58);
        MatchRules_NoMatchRules_53.insert(MatchType_58.getString());
        all_values.push_back(MatchRules_NoMatchRules_53);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_51;
        FIX::OrdType OrdType_84('2');
        noOrdTypeRules_2_1_2_0.set(OrdType_84);
        OrdTypeRules_NoOrdTypeRules_51.insert(OrdType_84.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_51);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_50;
        FIX::TimeInForce TimeInForce_63('2');
        noTimeInForceRules_2_1_2_0.set(TimeInForce_63);
        TimeInForceRules_NoTimeInForceRules_50.insert(TimeInForce_63.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_50);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_51;
        FIX::TimeInForce TimeInForce_64('5');
        noTimeInForceRules_2_1_2_1.set(TimeInForce_64);
        TimeInForceRules_NoTimeInForceRules_51.insert(TimeInForce_64.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_51);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noTradingSessionRules_2_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_2_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_26;
      FIX::TradingSessionID TradingSessionID_108("STRING_4");
      noTradingSessionRules_2_1_2.set(TradingSessionID_108);
      TradingSessionRulesGrp_NoTradingSessionRules_26.insert(TradingSessionID_108.getString());
      FIX::TradingSessionSubID TradingSessionSubID_108("STRING_3");
      noTradingSessionRules_2_1_2.set(TradingSessionSubID_108);
      TradingSessionRulesGrp_NoTradingSessionRules_26.insert(TradingSessionSubID_108.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_26);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_55;
        FIX::ExecInstValue ExecInstValue_55('6');
        noExecInstRules_2_2_2_0.set(ExecInstValue_55);
        ExecInstRules_NoExecInstRules_55.insert(ExecInstValue_55.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_55);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_2.addGroup(noExecInstRules_2_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_48;
        FIX::MDBookType MDBookType_50(1);
        noMDFeedTypes_2_2_2_0.set(MDBookType_50);
        MarketDataFeedTypes_NoMDFeedTypes_48.insert(MDBookType_50.getString());
        FIX::MDFeedType MDFeedType_50("STRING_1187321381");
        noMDFeedTypes_2_2_2_0.set(MDFeedType_50);
        MarketDataFeedTypes_NoMDFeedTypes_48.insert(MDFeedType_50.getString());
        FIX::MarketDepth MarketDepth_51(340117122);
        noMDFeedTypes_2_2_2_0.set(MarketDepth_51);
        MarketDataFeedTypes_NoMDFeedTypes_48.insert(MarketDepth_51.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_48);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_2.addGroup(noMDFeedTypes_2_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_49;
        FIX::MDBookType MDBookType_51(2);
        noMDFeedTypes_2_2_2_1.set(MDBookType_51);
        MarketDataFeedTypes_NoMDFeedTypes_49.insert(MDBookType_51.getString());
        FIX::MDFeedType MDFeedType_51("STRING_1335149252");
        noMDFeedTypes_2_2_2_1.set(MDFeedType_51);
        MarketDataFeedTypes_NoMDFeedTypes_49.insert(MDFeedType_51.getString());
        FIX::MarketDepth MarketDepth_52(1002070216);
        noMDFeedTypes_2_2_2_1.set(MarketDepth_52);
        MarketDataFeedTypes_NoMDFeedTypes_49.insert(MarketDepth_52.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_49);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_2.addGroup(noMDFeedTypes_2_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_2_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_50;
        FIX::MDBookType MDBookType_52(3);
        noMDFeedTypes_2_2_2_2.set(MDBookType_52);
        MarketDataFeedTypes_NoMDFeedTypes_50.insert(MDBookType_52.getString());
        FIX::MDFeedType MDFeedType_52("STRING_144960586");
        noMDFeedTypes_2_2_2_2.set(MDFeedType_52);
        MarketDataFeedTypes_NoMDFeedTypes_50.insert(MDFeedType_52.getString());
        FIX::MarketDepth MarketDepth_53(1684337374);
        noMDFeedTypes_2_2_2_2.set(MarketDepth_53);
        MarketDataFeedTypes_NoMDFeedTypes_50.insert(MarketDepth_53.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_50);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_2.addGroup(noMDFeedTypes_2_2_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_54;
        FIX::MatchAlgorithm MatchAlgorithm_54("STRING_2137082826");
        noMatchRules_2_2_2_0.set(MatchAlgorithm_54);
        MatchRules_NoMatchRules_54.insert(MatchAlgorithm_54.getString());
        FIX::MatchType MatchType_59("STRING_M1");
        noMatchRules_2_2_2_0.set(MatchType_59);
        MatchRules_NoMatchRules_54.insert(MatchType_59.getString());
        all_values.push_back(MatchRules_NoMatchRules_54);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_2.addGroup(noMatchRules_2_2_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_52;
        FIX::OrdType OrdType_85('F');
        noOrdTypeRules_2_2_2_0.set(OrdType_85);
        OrdTypeRules_NoOrdTypeRules_52.insert(OrdType_85.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_52);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_2.addGroup(noOrdTypeRules_2_2_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_52;
        FIX::TimeInForce TimeInForce_65('9');
        noTimeInForceRules_2_2_2_0.set(TimeInForce_65);
        TimeInForceRules_NoTimeInForceRules_52.insert(TimeInForce_65.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_52);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_2.addGroup(noTimeInForceRules_2_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_53;
        FIX::TimeInForce TimeInForce_66('3');
        noTimeInForceRules_2_2_2_1.set(TimeInForce_66);
        TimeInForceRules_NoTimeInForceRules_53.insert(TimeInForce_66.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_53);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_2.addGroup(noTimeInForceRules_2_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_2_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_54;
        FIX::TimeInForce TimeInForce_67('9');
        noTimeInForceRules_2_2_2_2.set(TimeInForce_67);
        TimeInForceRules_NoTimeInForceRules_54.insert(TimeInForce_67.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_54);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_2.addGroup(noTimeInForceRules_2_2_2_2);
      }
      noRelatedSym_0_2.addGroup(noTradingSessionRules_2_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_32;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_32("GBP");
    noRelatedSym_0_2.set(BenchmarkCurveCurrency_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurveCurrency_32.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_32("STRING_EUREPO");
    noRelatedSym_0_2.set(BenchmarkCurveName_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurveName_32.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_32("STRING_1917367255");
    noRelatedSym_0_2.set(BenchmarkCurvePoint_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurvePoint_32.getString());
    FIX::BenchmarkPrice BenchmarkPrice_32;
    BenchmarkPrice_32.setString("18859151");
    noRelatedSym_0_2.set(BenchmarkPrice_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkPrice_32.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_32(1165050401);
    noRelatedSym_0_2.set(BenchmarkPriceType_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkPriceType_32.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_32("STRING_815634689");
    noRelatedSym_0_2.set(BenchmarkSecurityID_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkSecurityID_32.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_32("STRING_2110931186");
    noRelatedSym_0_2.set(BenchmarkSecurityIDSource_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkSecurityIDSource_32.getString());
    FIX::Spread Spread_32;
    Spread_32.setString("1936813");
    noRelatedSym_0_2.set(Spread_32);
    SpreadOrBenchmarkCurveData_32.insert(Spread_32.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_32);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_2_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_53;
      FIX::StipulationType StipulationType_53("STRING_LEAVEQTY");
      noStipulations_2_1_0.set(StipulationType_53);
      Stipulations_NoStipulations_53.insert(StipulationType_53.getString());
      FIX::StipulationValue StipulationValue_53("STRING_876842716");
      noStipulations_2_1_0.set(StipulationValue_53);
      Stipulations_NoStipulations_53.insert(StipulationValue_53.getString());
      all_values.push_back(Stipulations_NoStipulations_53);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_2.addGroup(noStipulations_2_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_2_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_54;
      FIX::StipulationType StipulationType_54("STRING_RATING");
      noStipulations_2_1_1.set(StipulationType_54);
      Stipulations_NoStipulations_54.insert(StipulationType_54.getString());
      FIX::StipulationValue StipulationValue_54("STRING_294022100");
      noStipulations_2_1_1.set(StipulationValue_54);
      Stipulations_NoStipulations_54.insert(StipulationValue_54.getString());
      all_values.push_back(Stipulations_NoStipulations_54);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_2.addGroup(noStipulations_2_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_23;
      FIX::EndStrikePxRange EndStrikePxRange_23;
      EndStrikePxRange_23.setString("16642128");
      noStrikeRules_2_1_0.set(EndStrikePxRange_23);
      StrikeRules_NoStrikeRules_23.insert(EndStrikePxRange_23.getString());
      FIX::StartStrikePxRange StartStrikePxRange_23;
      StartStrikePxRange_23.setString("17524768");
      noStrikeRules_2_1_0.set(StartStrikePxRange_23);
      StrikeRules_NoStrikeRules_23.insert(StartStrikePxRange_23.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_23(1251829701);
      noStrikeRules_2_1_0.set(StrikeExerciseStyle_23);
      StrikeRules_NoStrikeRules_23.insert(StrikeExerciseStyle_23.getString());
      FIX::StrikeIncrement StrikeIncrement_23;
      StrikeIncrement_23.setString("5187994");
      noStrikeRules_2_1_0.set(StrikeIncrement_23);
      StrikeRules_NoStrikeRules_23.insert(StrikeIncrement_23.getString());
      FIX::StrikeRuleID StrikeRuleID_23("STRING_500163501");
      noStrikeRules_2_1_0.set(StrikeRuleID_23);
      StrikeRules_NoStrikeRules_23.insert(StrikeRuleID_23.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_23);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_50;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_50("MONTHYEAR_55653131");
        noMaturityRules_2_0_2_0.set(EndMaturityMonthYear_50);
        MaturityRules_NoMaturityRules_50.insert(EndMaturityMonthYear_50.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_50(0);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearFormat_50);
        MaturityRules_NoMaturityRules_50.insert(MaturityMonthYearFormat_50.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_50(1386389465);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrement_50);
        MaturityRules_NoMaturityRules_50.insert(MaturityMonthYearIncrement_50.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_50(0);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrementUnits_50);
        MaturityRules_NoMaturityRules_50.insert(MaturityMonthYearIncrementUnits_50.getString());
        FIX::MaturityRuleID MaturityRuleID_50("STRING_1414408321");
        noMaturityRules_2_0_2_0.set(MaturityRuleID_50);
        MaturityRules_NoMaturityRules_50.insert(MaturityRuleID_50.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_50("MONTHYEAR_631050815");
        noMaturityRules_2_0_2_0.set(StartMaturityMonthYear_50);
        MaturityRules_NoMaturityRules_50.insert(StartMaturityMonthYear_50.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_50);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_51;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_51("MONTHYEAR_1326603391");
        noMaturityRules_2_0_2_1.set(EndMaturityMonthYear_51);
        MaturityRules_NoMaturityRules_51.insert(EndMaturityMonthYear_51.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_51(2);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearFormat_51);
        MaturityRules_NoMaturityRules_51.insert(MaturityMonthYearFormat_51.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_51(1694876019);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrement_51);
        MaturityRules_NoMaturityRules_51.insert(MaturityMonthYearIncrement_51.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_51(2);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrementUnits_51);
        MaturityRules_NoMaturityRules_51.insert(MaturityMonthYearIncrementUnits_51.getString());
        FIX::MaturityRuleID MaturityRuleID_51("STRING_273593311");
        noMaturityRules_2_0_2_1.set(MaturityRuleID_51);
        MaturityRules_NoMaturityRules_51.insert(MaturityRuleID_51.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_51("MONTHYEAR_2032631099");
        noMaturityRules_2_0_2_1.set(StartMaturityMonthYear_51);
        MaturityRules_NoMaturityRules_51.insert(StartMaturityMonthYear_51.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_51);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noStrikeRules_2_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_135;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_135("DATA_43476918");
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuer_135);
      UnderlyingInstrument_135.insert(EncodedUnderlyingIssuer_135.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_135(1771062612);
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuerLen_135);
      UnderlyingInstrument_135.insert(EncodedUnderlyingIssuerLen_135.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_135("DATA_383723701");
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDesc_135);
      UnderlyingInstrument_135.insert(EncodedUnderlyingSecurityDesc_135.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_135(859111607);
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDescLen_135);
      UnderlyingInstrument_135.insert(EncodedUnderlyingSecurityDescLen_135.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_135;
      UnderlyingAdjustedQuantity_135.setString("17345101");
      noUnderlyings_2_1_0.set(UnderlyingAdjustedQuantity_135);
      UnderlyingInstrument_135.insert(UnderlyingAdjustedQuantity_135.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_135;
      UnderlyingAllocationPercent_135.setString("50.210000");
      noUnderlyings_2_1_0.set(UnderlyingAllocationPercent_135);
      UnderlyingInstrument_135.insert(UnderlyingAllocationPercent_135.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_135;
      UnderlyingAttachmentPoint_135.setString("0.920000");
      noUnderlyings_2_1_0.set(UnderlyingAttachmentPoint_135);
      UnderlyingInstrument_135.insert(UnderlyingAttachmentPoint_135.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_135("STRING_1507773764");
      noUnderlyings_2_1_0.set(UnderlyingCFICode_135);
      UnderlyingInstrument_135.insert(UnderlyingCFICode_135.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_135("STRING_1454247737");
      noUnderlyings_2_1_0.set(UnderlyingCPProgram_135);
      UnderlyingInstrument_135.insert(UnderlyingCPProgram_135.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_135("STRING_600722158");
      noUnderlyings_2_1_0.set(UnderlyingCPRegType_135);
      UnderlyingInstrument_135.insert(UnderlyingCPRegType_135.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_135;
      UnderlyingCapValue_135.setString("18017958");
      noUnderlyings_2_1_0.set(UnderlyingCapValue_135);
      UnderlyingInstrument_135.insert(UnderlyingCapValue_135.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_135;
      UnderlyingCashAmount_135.setString("13709281");
      noUnderlyings_2_1_0.set(UnderlyingCashAmount_135);
      UnderlyingInstrument_135.insert(UnderlyingCashAmount_135.getString());
      FIX::UnderlyingCashType UnderlyingCashType_135("STRING_FIXED");
      noUnderlyings_2_1_0.set(UnderlyingCashType_135);
      UnderlyingInstrument_135.insert(UnderlyingCashType_135.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_135;
      UnderlyingContractMultiplier_135.setString("14067890");
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplier_135);
      UnderlyingInstrument_135.insert(UnderlyingContractMultiplier_135.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_135(475274240);
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplierUnit_135);
      UnderlyingInstrument_135.insert(UnderlyingContractMultiplierUnit_135.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_135("COUNTRY_636250751");
      noUnderlyings_2_1_0.set(UnderlyingCountryOfIssue_135);
      UnderlyingInstrument_135.insert(UnderlyingCountryOfIssue_135.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_135("LOCALMKTDATE_1906952596");
      noUnderlyings_2_1_0.set(UnderlyingCouponPaymentDate_135);
      UnderlyingInstrument_135.insert(UnderlyingCouponPaymentDate_135.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_135;
      UnderlyingCouponRate_135.setString("45.280000");
      noUnderlyings_2_1_0.set(UnderlyingCouponRate_135);
      UnderlyingInstrument_135.insert(UnderlyingCouponRate_135.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_135("STRING_691903883");
      noUnderlyings_2_1_0.set(UnderlyingCreditRating_135);
      UnderlyingInstrument_135.insert(UnderlyingCreditRating_135.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_135("EUR");
      noUnderlyings_2_1_0.set(UnderlyingCurrency_135);
      UnderlyingInstrument_135.insert(UnderlyingCurrency_135.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_135;
      UnderlyingCurrentValue_135.setString("7703318");
      noUnderlyings_2_1_0.set(UnderlyingCurrentValue_135);
      UnderlyingInstrument_135.insert(UnderlyingCurrentValue_135.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_135;
      UnderlyingDetachmentPoint_135.setString("15.340000");
      noUnderlyings_2_1_0.set(UnderlyingDetachmentPoint_135);
      UnderlyingInstrument_135.insert(UnderlyingDetachmentPoint_135.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_135;
      UnderlyingDirtyPrice_135.setString("17420211");
      noUnderlyings_2_1_0.set(UnderlyingDirtyPrice_135);
      UnderlyingInstrument_135.insert(UnderlyingDirtyPrice_135.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_135;
      UnderlyingEndPrice_135.setString("20969352");
      noUnderlyings_2_1_0.set(UnderlyingEndPrice_135);
      UnderlyingInstrument_135.insert(UnderlyingEndPrice_135.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_135;
      UnderlyingEndValue_135.setString("2476169");
      noUnderlyings_2_1_0.set(UnderlyingEndValue_135);
      UnderlyingInstrument_135.insert(UnderlyingEndValue_135.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_135(1289413532);
      noUnderlyings_2_1_0.set(UnderlyingExerciseStyle_135);
      UnderlyingInstrument_135.insert(UnderlyingExerciseStyle_135.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_135;
      UnderlyingFXRate_135.setString("7183678");
      noUnderlyings_2_1_0.set(UnderlyingFXRate_135);
      UnderlyingInstrument_135.insert(UnderlyingFXRate_135.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_135('D');
      noUnderlyings_2_1_0.set(UnderlyingFXRateCalc_135);
      UnderlyingInstrument_135.insert(UnderlyingFXRateCalc_135.getString());
      FIX::UnderlyingFactor UnderlyingFactor_135;
      UnderlyingFactor_135.setString("11745609");
      noUnderlyings_2_1_0.set(UnderlyingFactor_135);
      UnderlyingInstrument_135.insert(UnderlyingFactor_135.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_135(2084524760);
      noUnderlyings_2_1_0.set(UnderlyingFlowScheduleType_135);
      UnderlyingInstrument_135.insert(UnderlyingFlowScheduleType_135.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_135("STRING_564687156");
      noUnderlyings_2_1_0.set(UnderlyingInstrRegistry_135);
      UnderlyingInstrument_135.insert(UnderlyingInstrRegistry_135.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_135("LOCALMKTDATE_798139947");
      noUnderlyings_2_1_0.set(UnderlyingIssueDate_135);
      UnderlyingInstrument_135.insert(UnderlyingIssueDate_135.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_135("STRING_320764813");
      noUnderlyings_2_1_0.set(UnderlyingIssuer_135);
      UnderlyingInstrument_135.insert(UnderlyingIssuer_135.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_135("STRING_1423798763");
      noUnderlyings_2_1_0.set(UnderlyingLocaleOfIssue_135);
      UnderlyingInstrument_135.insert(UnderlyingLocaleOfIssue_135.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_135("LOCALMKTDATE_385166449");
      noUnderlyings_2_1_0.set(UnderlyingMaturityDate_135);
      UnderlyingInstrument_135.insert(UnderlyingMaturityDate_135.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_135("MONTHYEAR_898169835");
      noUnderlyings_2_1_0.set(UnderlyingMaturityMonthYear_135);
      UnderlyingInstrument_135.insert(UnderlyingMaturityMonthYear_135.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_135("TZTIMEONLY_700425207");
      noUnderlyings_2_1_0.set(UnderlyingMaturityTime_135);
      UnderlyingInstrument_135.insert(UnderlyingMaturityTime_135.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_135;
      UnderlyingNotionalPercentageOutstanding_135.setString("2.140000");
      noUnderlyings_2_1_0.set(UnderlyingNotionalPercentageOutstanding_135);
      UnderlyingInstrument_135.insert(UnderlyingNotionalPercentageOutstanding_135.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_135('2');
      noUnderlyings_2_1_0.set(UnderlyingOptAttribute_135);
      UnderlyingInstrument_135.insert(UnderlyingOptAttribute_135.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_135;
      UnderlyingOriginalNotionalPercentageOutstanding_135.setString("73.650000");
      noUnderlyings_2_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_135);
      UnderlyingInstrument_135.insert(UnderlyingOriginalNotionalPercentageOutstanding_135.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_135("STRING_1547252431");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasure_135);
      UnderlyingInstrument_135.insert(UnderlyingPriceUnitOfMeasure_135.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_135;
      UnderlyingPriceUnitOfMeasureQty_135.setString("15758621");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasureQty_135);
      UnderlyingInstrument_135.insert(UnderlyingPriceUnitOfMeasureQty_135.getString());
      FIX::UnderlyingProduct UnderlyingProduct_135(1418598711);
      noUnderlyings_2_1_0.set(UnderlyingProduct_135);
      UnderlyingInstrument_135.insert(UnderlyingProduct_135.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_135(806557877);
      noUnderlyings_2_1_0.set(UnderlyingPutOrCall_135);
      UnderlyingInstrument_135.insert(UnderlyingPutOrCall_135.getString());
      FIX::UnderlyingPx UnderlyingPx_135;
      UnderlyingPx_135.setString("20511363");
      noUnderlyings_2_1_0.set(UnderlyingPx_135);
      UnderlyingInstrument_135.insert(UnderlyingPx_135.getString());
      FIX::UnderlyingQty UnderlyingQty_135;
      UnderlyingQty_135.setString("20548494");
      noUnderlyings_2_1_0.set(UnderlyingQty_135);
      UnderlyingInstrument_135.insert(UnderlyingQty_135.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_135("LOCALMKTDATE_566026825");
      noUnderlyings_2_1_0.set(UnderlyingRedemptionDate_135);
      UnderlyingInstrument_135.insert(UnderlyingRedemptionDate_135.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_135("STRING_1775717232");
      noUnderlyings_2_1_0.set(UnderlyingRepoCollateralSecurityType_135);
      UnderlyingInstrument_135.insert(UnderlyingRepoCollateralSecurityType_135.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_135;
      UnderlyingRepurchaseRate_135.setString("96.980000");
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseRate_135);
      UnderlyingInstrument_135.insert(UnderlyingRepurchaseRate_135.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_135(24660038);
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseTerm_135);
      UnderlyingInstrument_135.insert(UnderlyingRepurchaseTerm_135.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_135("STRING_739203929");
      noUnderlyings_2_1_0.set(UnderlyingRestructuringType_135);
      UnderlyingInstrument_135.insert(UnderlyingRestructuringType_135.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_135("STRING_1369601565");
      noUnderlyings_2_1_0.set(UnderlyingSecurityDesc_135);
      UnderlyingInstrument_135.insert(UnderlyingSecurityDesc_135.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_135("EXCHANGE_897701572");
      noUnderlyings_2_1_0.set(UnderlyingSecurityExchange_135);
      UnderlyingInstrument_135.insert(UnderlyingSecurityExchange_135.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_135("STRING_333741442");
      noUnderlyings_2_1_0.set(UnderlyingSecurityID_135);
      UnderlyingInstrument_135.insert(UnderlyingSecurityID_135.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_135("STRING_1319053176");
      noUnderlyings_2_1_0.set(UnderlyingSecurityIDSource_135);
      UnderlyingInstrument_135.insert(UnderlyingSecurityIDSource_135.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_135("STRING_1145318499");
      noUnderlyings_2_1_0.set(UnderlyingSecuritySubType_135);
      UnderlyingInstrument_135.insert(UnderlyingSecuritySubType_135.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_135("STRING_1623154974");
      noUnderlyings_2_1_0.set(UnderlyingSecurityType_135);
      UnderlyingInstrument_135.insert(UnderlyingSecurityType_135.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_135("STRING_2037420989");
      noUnderlyings_2_1_0.set(UnderlyingSeniority_135);
      UnderlyingInstrument_135.insert(UnderlyingSeniority_135.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_135("STRING_1666528737");
      noUnderlyings_2_1_0.set(UnderlyingSettlMethod_135);
      UnderlyingInstrument_135.insert(UnderlyingSettlMethod_135.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_135(2);
      noUnderlyings_2_1_0.set(UnderlyingSettlementType_135);
      UnderlyingInstrument_135.insert(UnderlyingSettlementType_135.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_135;
      UnderlyingStartValue_135.setString("19744621");
      noUnderlyings_2_1_0.set(UnderlyingStartValue_135);
      UnderlyingInstrument_135.insert(UnderlyingStartValue_135.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_135("STRING_83732245");
      noUnderlyings_2_1_0.set(UnderlyingStateOrProvinceOfIssue_135);
      UnderlyingInstrument_135.insert(UnderlyingStateOrProvinceOfIssue_135.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_135("CAN");
      noUnderlyings_2_1_0.set(UnderlyingStrikeCurrency_135);
      UnderlyingInstrument_135.insert(UnderlyingStrikeCurrency_135.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_135;
      UnderlyingStrikePrice_135.setString("15075310");
      noUnderlyings_2_1_0.set(UnderlyingStrikePrice_135);
      UnderlyingInstrument_135.insert(UnderlyingStrikePrice_135.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_135("STRING_1833538706");
      noUnderlyings_2_1_0.set(UnderlyingSymbol_135);
      UnderlyingInstrument_135.insert(UnderlyingSymbol_135.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_135("STRING_1045913102");
      noUnderlyings_2_1_0.set(UnderlyingSymbolSfx_135);
      UnderlyingInstrument_135.insert(UnderlyingSymbolSfx_135.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_135("STRING_60472567");
      noUnderlyings_2_1_0.set(UnderlyingTimeUnit_135);
      UnderlyingInstrument_135.insert(UnderlyingTimeUnit_135.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_135("STRING_1578995272");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasure_135);
      UnderlyingInstrument_135.insert(UnderlyingUnitOfMeasure_135.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_135;
      UnderlyingUnitOfMeasureQty_135.setString("12508470");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasureQty_135);
      UnderlyingInstrument_135.insert(UnderlyingUnitOfMeasureQty_135.getString());
      all_values.push_back(UnderlyingInstrument_135);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_270;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_270("STRING_978764055");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltID_270);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_270.insert(UnderlyingSecurityAltID_270.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_270("STRING_679225490");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltIDSource_270);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_270.insert(UnderlyingSecurityAltIDSource_270.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_270);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_271;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_271("STRING_632734995");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltID_271);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_271.insert(UnderlyingSecurityAltID_271.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_271("STRING_1785321932");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltIDSource_271);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_271.insert(UnderlyingSecurityAltIDSource_271.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_271);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_272;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_272("STRING_582878194");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltID_272);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_272.insert(UnderlyingSecurityAltID_272.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_272("STRING_540100810");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltIDSource_272);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_272.insert(UnderlyingSecurityAltIDSource_272.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_272);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_266;
        FIX::UnderlyingStipType UnderlyingStipType_266("STRING_211111778");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipType_266);
        UnderlyingStipulations_NoUnderlyingStips_266.insert(UnderlyingStipType_266.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_266("STRING_1139370508");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipValue_266);
        UnderlyingStipulations_NoUnderlyingStips_266.insert(UnderlyingStipValue_266.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_266);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_267;
        FIX::UnderlyingStipType UnderlyingStipType_267("STRING_228525148");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipType_267);
        UnderlyingStipulations_NoUnderlyingStips_267.insert(UnderlyingStipType_267.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_267("STRING_950315707");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipValue_267);
        UnderlyingStipulations_NoUnderlyingStips_267.insert(UnderlyingStipValue_267.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_267);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_268;
        FIX::UnderlyingStipType UnderlyingStipType_268("STRING_361488426");
        noUnderlyingStips_2_0_2_2.set(UnderlyingStipType_268);
        UnderlyingStipulations_NoUnderlyingStips_268.insert(UnderlyingStipType_268.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_268("STRING_1126226720");
        noUnderlyingStips_2_0_2_2.set(UnderlyingStipValue_268);
        UnderlyingStipulations_NoUnderlyingStips_268.insert(UnderlyingStipValue_268.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_268);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_260;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_260("STRING_1680541602");
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyID_260);
        UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyID_260.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_260('1');
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyIDSource_260);
        UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyIDSource_260.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_260(759728476);
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyRole_260);
        UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyRole_260.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_260);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_524("STRING_1790590308");
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubID_524);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524.insert(UnderlyingInstrumentPartySubID_524.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_524(1409960786);
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_524);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524.insert(UnderlyingInstrumentPartySubIDType_524.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noUnderlyings_2_1_0);
    }
    // YieldData
    multiset<string> YieldData_27;
    FIX::Yield Yield_27;
    Yield_27.setString("73.960000");
    noRelatedSym_0_2.set(Yield_27);
    YieldData_27.insert(Yield_27.getString());
    FIX::YieldCalcDate YieldCalcDate_27("LOCALMKTDATE_1874322553");
    noRelatedSym_0_2.set(YieldCalcDate_27);
    YieldData_27.insert(YieldCalcDate_27.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_27("LOCALMKTDATE_710849394");
    noRelatedSym_0_2.set(YieldRedemptionDate_27);
    YieldData_27.insert(YieldRedemptionDate_27.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_27;
    YieldRedemptionPrice_27.setString("15452006");
    noRelatedSym_0_2.set(YieldRedemptionPrice_27);
    YieldData_27.insert(YieldRedemptionPrice_27.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_27(1234369913);
    noRelatedSym_0_2.set(YieldRedemptionPriceType_27);
    YieldData_27.insert(YieldRedemptionPriceType_27.getString());
    FIX::YieldType YieldType_27("STRING_INFLATION");
    noRelatedSym_0_2.set(YieldType_27);
    YieldData_27.insert(YieldType_27.getString());
    all_values.push_back(YieldData_27);
    all_compo_names.insert("YieldData");

    msg.addGroup(noRelatedSym_0_2);
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
