#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/PositionMaintenanceReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionMaintenanceReport msg;

  list<multiset<string>> all_values;
  multiset<string> PositionMaintenanceReport_0;
  FIX::Account Account_24("STRING_81073729");
  msg.set(Account_24);
  PositionMaintenanceReport_0.insert(Account_24.getString());
  FIX::AccountType AccountType_21(7);
  msg.set(AccountType_21);
  PositionMaintenanceReport_0.insert(AccountType_21.getString());
  FIX::AcctIDSource AcctIDSource_17(4);
  msg.set(AcctIDSource_17);
  PositionMaintenanceReport_0.insert(AcctIDSource_17.getString());
  FIX::AdjustmentType AdjustmentType_0(1);
  msg.set(AdjustmentType_0);
  PositionMaintenanceReport_0.insert(AdjustmentType_0.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_15("LOCALMKTDATE_1443696956");
  msg.set(ClearingBusinessDate_15);
  PositionMaintenanceReport_0.insert(ClearingBusinessDate_15.getString());
  FIX::ContraryInstructionIndicator ContraryInstructionIndicator_0(false);
  msg.set(ContraryInstructionIndicator_0);
  PositionMaintenanceReport_0.insert(ContraryInstructionIndicator_0.getString());
  FIX::Currency Currency_47("CHF");
  msg.set(Currency_47);
  PositionMaintenanceReport_0.insert(Currency_47.getString());
  FIX::EncodedText EncodedText_65("DATA_751572785");
  msg.set(EncodedText_65);
  PositionMaintenanceReport_0.insert(EncodedText_65.getString());
  FIX::EncodedTextLen EncodedTextLen_65(424993802);
  msg.set(EncodedTextLen_65);
  PositionMaintenanceReport_0.insert(EncodedTextLen_65.getString());
  FIX::OrigPosReqRefID OrigPosReqRefID_0("STRING_211477159");
  msg.set(OrigPosReqRefID_0);
  PositionMaintenanceReport_0.insert(OrigPosReqRefID_0.getString());
  FIX::PosMaintAction PosMaintAction_0(1);
  msg.set(PosMaintAction_0);
  PositionMaintenanceReport_0.insert(PosMaintAction_0.getString());
  FIX::PosMaintResult PosMaintResult_0(99);
  msg.set(PosMaintResult_0);
  PositionMaintenanceReport_0.insert(PosMaintResult_0.getString());
  FIX::PosMaintRptID PosMaintRptID_1("STRING_1136837592");
  msg.set(PosMaintRptID_1);
  PositionMaintenanceReport_0.insert(PosMaintRptID_1.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_1("STRING_1032242204");
  msg.set(PosMaintRptRefID_1);
  PositionMaintenanceReport_0.insert(PosMaintRptRefID_1.getString());
  FIX::PosMaintStatus PosMaintStatus_0(0);
  msg.set(PosMaintStatus_0);
  PositionMaintenanceReport_0.insert(PosMaintStatus_0.getString());
  FIX::PosReqID PosReqID_1("STRING_1824957873");
  msg.set(PosReqID_1);
  PositionMaintenanceReport_0.insert(PosReqID_1.getString());
  FIX::PosTransType PosTransType_0(3);
  msg.set(PosTransType_0);
  PositionMaintenanceReport_0.insert(PosTransType_0.getString());
  FIX::PriorSpreadIndicator PriorSpreadIndicator_0(false);
  msg.set(PriorSpreadIndicator_0);
  PositionMaintenanceReport_0.insert(PriorSpreadIndicator_0.getString());
  FIX::SettlCurrency SettlCurrency_19("CAN");
  msg.set(SettlCurrency_19);
  PositionMaintenanceReport_0.insert(SettlCurrency_19.getString());
  FIX::SettlSessID SettlSessID_7("STRING_RTH");
  msg.set(SettlSessID_7);
  PositionMaintenanceReport_0.insert(SettlSessID_7.getString());
  FIX::SettlSessSubID SettlSessSubID_6("STRING_1407741747");
  msg.set(SettlSessSubID_6);
  PositionMaintenanceReport_0.insert(SettlSessSubID_6.getString());
  FIX::Text Text_65("STRING_897312419");
  msg.set(Text_65);
  PositionMaintenanceReport_0.insert(Text_65.getString());
  FIX::ThresholdAmount ThresholdAmount_1;
  ThresholdAmount_1.setString("10419021");
  msg.set(ThresholdAmount_1);
  PositionMaintenanceReport_0.insert(ThresholdAmount_1.getString());
  FIX::TransactTime TransactTime_50(FIX::UTCTIMESTAMP(20, 55, 5, 12, 7, 2012));
  msg.set(TransactTime_50);
  PositionMaintenanceReport_0.insert(TransactTime_50.getString());
  all_values.push_back(PositionMaintenanceReport_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_91;
    FIX::EncodedLegIssuer EncodedLegIssuer_91("DATA_215557645");
    noLegs_0_0.set(EncodedLegIssuer_91);
    InstrumentLeg_91.insert(EncodedLegIssuer_91.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_91(239975768);
    noLegs_0_0.set(EncodedLegIssuerLen_91);
    InstrumentLeg_91.insert(EncodedLegIssuerLen_91.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_91("DATA_517615564");
    noLegs_0_0.set(EncodedLegSecurityDesc_91);
    InstrumentLeg_91.insert(EncodedLegSecurityDesc_91.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_91(1620223454);
    noLegs_0_0.set(EncodedLegSecurityDescLen_91);
    InstrumentLeg_91.insert(EncodedLegSecurityDescLen_91.getString());
    FIX::LegCFICode LegCFICode_91("STRING_490963526");
    noLegs_0_0.set(LegCFICode_91);
    InstrumentLeg_91.insert(LegCFICode_91.getString());
    FIX::LegContractMultiplier LegContractMultiplier_91;
    LegContractMultiplier_91.setString("4131621");
    noLegs_0_0.set(LegContractMultiplier_91);
    InstrumentLeg_91.insert(LegContractMultiplier_91.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_91(224312591);
    noLegs_0_0.set(LegContractMultiplierUnit_91);
    InstrumentLeg_91.insert(LegContractMultiplierUnit_91.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_91("MONTHYEAR_915957328");
    noLegs_0_0.set(LegContractSettlMonth_91);
    InstrumentLeg_91.insert(LegContractSettlMonth_91.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_91("COUNTRY_624639355");
    noLegs_0_0.set(LegCountryOfIssue_91);
    InstrumentLeg_91.insert(LegCountryOfIssue_91.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_91("LOCALMKTDATE_1842466699");
    noLegs_0_0.set(LegCouponPaymentDate_91);
    InstrumentLeg_91.insert(LegCouponPaymentDate_91.getString());
    FIX::LegCouponRate LegCouponRate_91;
    LegCouponRate_91.setString("21.380000");
    noLegs_0_0.set(LegCouponRate_91);
    InstrumentLeg_91.insert(LegCouponRate_91.getString());
    FIX::LegCreditRating LegCreditRating_91("STRING_1761476947");
    noLegs_0_0.set(LegCreditRating_91);
    InstrumentLeg_91.insert(LegCreditRating_91.getString());
    FIX::LegCurrency LegCurrency_91("GBP");
    noLegs_0_0.set(LegCurrency_91);
    InstrumentLeg_91.insert(LegCurrency_91.getString());
    FIX::LegDatedDate LegDatedDate_91("LOCALMKTDATE_1438951172");
    noLegs_0_0.set(LegDatedDate_91);
    InstrumentLeg_91.insert(LegDatedDate_91.getString());
    FIX::LegExerciseStyle LegExerciseStyle_91(271708640);
    noLegs_0_0.set(LegExerciseStyle_91);
    InstrumentLeg_91.insert(LegExerciseStyle_91.getString());
    FIX::LegFactor LegFactor_91;
    LegFactor_91.setString("11544443");
    noLegs_0_0.set(LegFactor_91);
    InstrumentLeg_91.insert(LegFactor_91.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_91(1586751800);
    noLegs_0_0.set(LegFlowScheduleType_91);
    InstrumentLeg_91.insert(LegFlowScheduleType_91.getString());
    FIX::LegInstrRegistry LegInstrRegistry_91("STRING_1051771471");
    noLegs_0_0.set(LegInstrRegistry_91);
    InstrumentLeg_91.insert(LegInstrRegistry_91.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_91("LOCALMKTDATE_129842209");
    noLegs_0_0.set(LegInterestAccrualDate_91);
    InstrumentLeg_91.insert(LegInterestAccrualDate_91.getString());
    FIX::LegIssueDate LegIssueDate_91("LOCALMKTDATE_847009899");
    noLegs_0_0.set(LegIssueDate_91);
    InstrumentLeg_91.insert(LegIssueDate_91.getString());
    FIX::LegIssuer LegIssuer_91("STRING_1949083890");
    noLegs_0_0.set(LegIssuer_91);
    InstrumentLeg_91.insert(LegIssuer_91.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_91("STRING_1171744336");
    noLegs_0_0.set(LegLocaleOfIssue_91);
    InstrumentLeg_91.insert(LegLocaleOfIssue_91.getString());
    FIX::LegMaturityDate LegMaturityDate_91("LOCALMKTDATE_521860361");
    noLegs_0_0.set(LegMaturityDate_91);
    InstrumentLeg_91.insert(LegMaturityDate_91.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_91("MONTHYEAR_2145721766");
    noLegs_0_0.set(LegMaturityMonthYear_91);
    InstrumentLeg_91.insert(LegMaturityMonthYear_91.getString());
    FIX::LegMaturityTime LegMaturityTime_91("TZTIMEONLY_1420567211");
    noLegs_0_0.set(LegMaturityTime_91);
    InstrumentLeg_91.insert(LegMaturityTime_91.getString());
    FIX::LegOptAttribute LegOptAttribute_91('1');
    noLegs_0_0.set(LegOptAttribute_91);
    InstrumentLeg_91.insert(LegOptAttribute_91.getString());
    FIX::LegOptionRatio LegOptionRatio_91;
    LegOptionRatio_91.setString("5999632");
    noLegs_0_0.set(LegOptionRatio_91);
    InstrumentLeg_91.insert(LegOptionRatio_91.getString());
    FIX::LegPool LegPool_91("STRING_952855749");
    noLegs_0_0.set(LegPool_91);
    InstrumentLeg_91.insert(LegPool_91.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_91("STRING_106494813");
    noLegs_0_0.set(LegPriceUnitOfMeasure_91);
    InstrumentLeg_91.insert(LegPriceUnitOfMeasure_91.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_91;
    LegPriceUnitOfMeasureQty_91.setString("18213655");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_91);
    InstrumentLeg_91.insert(LegPriceUnitOfMeasureQty_91.getString());
    FIX::LegProduct LegProduct_91(1168413394);
    noLegs_0_0.set(LegProduct_91);
    InstrumentLeg_91.insert(LegProduct_91.getString());
    FIX::LegPutOrCall LegPutOrCall_91(346470581);
    noLegs_0_0.set(LegPutOrCall_91);
    InstrumentLeg_91.insert(LegPutOrCall_91.getString());
    FIX::LegRatioQty LegRatioQty_91;
    LegRatioQty_91.setString("1914974");
    noLegs_0_0.set(LegRatioQty_91);
    InstrumentLeg_91.insert(LegRatioQty_91.getString());
    FIX::LegRedemptionDate LegRedemptionDate_91("LOCALMKTDATE_641153200");
    noLegs_0_0.set(LegRedemptionDate_91);
    InstrumentLeg_91.insert(LegRedemptionDate_91.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_91("STRING_837434107");
    noLegs_0_0.set(LegRepoCollateralSecurityType_91);
    InstrumentLeg_91.insert(LegRepoCollateralSecurityType_91.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_91;
    LegRepurchaseRate_91.setString("96.500000");
    noLegs_0_0.set(LegRepurchaseRate_91);
    InstrumentLeg_91.insert(LegRepurchaseRate_91.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_91(865465792);
    noLegs_0_0.set(LegRepurchaseTerm_91);
    InstrumentLeg_91.insert(LegRepurchaseTerm_91.getString());
    FIX::LegSecurityDesc LegSecurityDesc_91("STRING_1753391435");
    noLegs_0_0.set(LegSecurityDesc_91);
    InstrumentLeg_91.insert(LegSecurityDesc_91.getString());
    FIX::LegSecurityExchange LegSecurityExchange_91("EXCHANGE_1229299005");
    noLegs_0_0.set(LegSecurityExchange_91);
    InstrumentLeg_91.insert(LegSecurityExchange_91.getString());
    FIX::LegSecurityID LegSecurityID_91("STRING_560448843");
    noLegs_0_0.set(LegSecurityID_91);
    InstrumentLeg_91.insert(LegSecurityID_91.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_91("STRING_1964733574");
    noLegs_0_0.set(LegSecurityIDSource_91);
    InstrumentLeg_91.insert(LegSecurityIDSource_91.getString());
    FIX::LegSecuritySubType LegSecuritySubType_91("STRING_843292304");
    noLegs_0_0.set(LegSecuritySubType_91);
    InstrumentLeg_91.insert(LegSecuritySubType_91.getString());
    FIX::LegSecurityType LegSecurityType_91("STRING_1287674099");
    noLegs_0_0.set(LegSecurityType_91);
    InstrumentLeg_91.insert(LegSecurityType_91.getString());
    FIX::LegSide LegSide_91('4');
    noLegs_0_0.set(LegSide_91);
    InstrumentLeg_91.insert(LegSide_91.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_91("STRING_134759829");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_91);
    InstrumentLeg_91.insert(LegStateOrProvinceOfIssue_91.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_91("USD");
    noLegs_0_0.set(LegStrikeCurrency_91);
    InstrumentLeg_91.insert(LegStrikeCurrency_91.getString());
    FIX::LegStrikePrice LegStrikePrice_91;
    LegStrikePrice_91.setString("17215116");
    noLegs_0_0.set(LegStrikePrice_91);
    InstrumentLeg_91.insert(LegStrikePrice_91.getString());
    FIX::LegSymbol LegSymbol_91("STRING_463670562");
    noLegs_0_0.set(LegSymbol_91);
    InstrumentLeg_91.insert(LegSymbol_91.getString());
    FIX::LegSymbolSfx LegSymbolSfx_91("STRING_1723343816");
    noLegs_0_0.set(LegSymbolSfx_91);
    InstrumentLeg_91.insert(LegSymbolSfx_91.getString());
    FIX::LegTimeUnit LegTimeUnit_91("STRING_421037881");
    noLegs_0_0.set(LegTimeUnit_91);
    InstrumentLeg_91.insert(LegTimeUnit_91.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_91("STRING_265270804");
    noLegs_0_0.set(LegUnitOfMeasure_91);
    InstrumentLeg_91.insert(LegUnitOfMeasure_91.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_91;
    LegUnitOfMeasureQty_91.setString("7476045");
    noLegs_0_0.set(LegUnitOfMeasureQty_91);
    InstrumentLeg_91.insert(LegUnitOfMeasureQty_91.getString());
    all_values.push_back(InstrumentLeg_91);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_178;
      FIX::LegSecurityAltID LegSecurityAltID_178("STRING_263508922");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_178);
      LegSecAltIDGrp_NoLegSecurityAltID_178.insert(LegSecurityAltID_178.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_178("STRING_20688067");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_178);
      LegSecAltIDGrp_NoLegSecurityAltID_178.insert(LegSecurityAltIDSource_178.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_178);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_62;
  FIX::AttachmentPoint AttachmentPoint_62;
  AttachmentPoint_62.setString("71.410000");
  msg.set(AttachmentPoint_62);
  Instrument_62.insert(AttachmentPoint_62.getString());
  FIX::CFICode CFICode_62("STRING_863472205");
  msg.set(CFICode_62);
  Instrument_62.insert(CFICode_62.getString());
  FIX::CPProgram CPProgram_62(99);
  msg.set(CPProgram_62);
  Instrument_62.insert(CPProgram_62.getString());
  FIX::CPRegType CPRegType_62("STRING_249291955");
  msg.set(CPRegType_62);
  Instrument_62.insert(CPRegType_62.getString());
  FIX::CapPrice CapPrice_62;
  CapPrice_62.setString("5373540");
  msg.set(CapPrice_62);
  Instrument_62.insert(CapPrice_62.getString());
  FIX::ContractMultiplier ContractMultiplier_62;
  ContractMultiplier_62.setString("21419572");
  msg.set(ContractMultiplier_62);
  Instrument_62.insert(ContractMultiplier_62.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_62(0);
  msg.set(ContractMultiplierUnit_62);
  Instrument_62.insert(ContractMultiplierUnit_62.getString());
  FIX::ContractSettlMonth ContractSettlMonth_62("MONTHYEAR_728851550");
  msg.set(ContractSettlMonth_62);
  Instrument_62.insert(ContractSettlMonth_62.getString());
  FIX::CountryOfIssue CountryOfIssue_62("COUNTRY_635626764");
  msg.set(CountryOfIssue_62);
  Instrument_62.insert(CountryOfIssue_62.getString());
  FIX::CouponPaymentDate CouponPaymentDate_62("LOCALMKTDATE_1433196644");
  msg.set(CouponPaymentDate_62);
  Instrument_62.insert(CouponPaymentDate_62.getString());
  FIX::CouponRate CouponRate_62;
  CouponRate_62.setString("12.000000");
  msg.set(CouponRate_62);
  Instrument_62.insert(CouponRate_62.getString());
  FIX::CreditRating CreditRating_62("STRING_1501092556");
  msg.set(CreditRating_62);
  Instrument_62.insert(CreditRating_62.getString());
  FIX::DatedDate DatedDate_62("LOCALMKTDATE_1039104431");
  msg.set(DatedDate_62);
  Instrument_62.insert(DatedDate_62.getString());
  FIX::DetachmentPoint DetachmentPoint_62;
  DetachmentPoint_62.setString("65.570000");
  msg.set(DetachmentPoint_62);
  Instrument_62.insert(DetachmentPoint_62.getString());
  FIX::EncodedIssuer EncodedIssuer_62("DATA_2061541399");
  msg.set(EncodedIssuer_62);
  Instrument_62.insert(EncodedIssuer_62.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_62(856354357);
  msg.set(EncodedIssuerLen_62);
  Instrument_62.insert(EncodedIssuerLen_62.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_62("DATA_1258618862");
  msg.set(EncodedSecurityDesc_62);
  Instrument_62.insert(EncodedSecurityDesc_62.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_62(1201731850);
  msg.set(EncodedSecurityDescLen_62);
  Instrument_62.insert(EncodedSecurityDescLen_62.getString());
  FIX::ExerciseStyle ExerciseStyle_62(0);
  msg.set(ExerciseStyle_62);
  Instrument_62.insert(ExerciseStyle_62.getString());
  FIX::Factor Factor_62;
  Factor_62.setString("13933786");
  msg.set(Factor_62);
  Instrument_62.insert(Factor_62.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_62(false);
  msg.set(FlexProductEligibilityIndicator_62);
  Instrument_62.insert(FlexProductEligibilityIndicator_62.getString());
  FIX::FlexibleIndicator FlexibleIndicator_62(true);
  msg.set(FlexibleIndicator_62);
  Instrument_62.insert(FlexibleIndicator_62.getString());
  FIX::FloorPrice FloorPrice_62;
  FloorPrice_62.setString("9674066");
  msg.set(FloorPrice_62);
  Instrument_62.insert(FloorPrice_62.getString());
  FIX::FlowScheduleType FlowScheduleType_62(3);
  msg.set(FlowScheduleType_62);
  Instrument_62.insert(FlowScheduleType_62.getString());
  FIX::InstrRegistry InstrRegistry_62("STRING_317289778");
  msg.set(InstrRegistry_62);
  Instrument_62.insert(InstrRegistry_62.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_62('1');
  msg.set(InstrmtAssignmentMethod_62);
  Instrument_62.insert(InstrmtAssignmentMethod_62.getString());
  FIX::InterestAccrualDate InterestAccrualDate_62("LOCALMKTDATE_1342572307");
  msg.set(InterestAccrualDate_62);
  Instrument_62.insert(InterestAccrualDate_62.getString());
  FIX::IssueDate IssueDate_62("LOCALMKTDATE_1064894282");
  msg.set(IssueDate_62);
  Instrument_62.insert(IssueDate_62.getString());
  FIX::Issuer Issuer_62("STRING_183859148");
  msg.set(Issuer_62);
  Instrument_62.insert(Issuer_62.getString());
  FIX::ListMethod ListMethod_62(0);
  msg.set(ListMethod_62);
  Instrument_62.insert(ListMethod_62.getString());
  FIX::LocaleOfIssue LocaleOfIssue_62("STRING_1085582350");
  msg.set(LocaleOfIssue_62);
  Instrument_62.insert(LocaleOfIssue_62.getString());
  FIX::MaturityDate MaturityDate_62("LOCALMKTDATE_326656289");
  msg.set(MaturityDate_62);
  Instrument_62.insert(MaturityDate_62.getString());
  FIX::MaturityMonthYear MaturityMonthYear_62("MONTHYEAR_322069787");
  msg.set(MaturityMonthYear_62);
  Instrument_62.insert(MaturityMonthYear_62.getString());
  FIX::MaturityTime MaturityTime_62("TZTIMEONLY_2059126167");
  msg.set(MaturityTime_62);
  Instrument_62.insert(MaturityTime_62.getString());
  FIX::MinPriceIncrement MinPriceIncrement_62;
  MinPriceIncrement_62.setString("5759482");
  msg.set(MinPriceIncrement_62);
  Instrument_62.insert(MinPriceIncrement_62.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_62;
  MinPriceIncrementAmount_62.setString("8594238");
  msg.set(MinPriceIncrementAmount_62);
  Instrument_62.insert(MinPriceIncrementAmount_62.getString());
  FIX::NTPositionLimit NTPositionLimit_62(2053599730);
  msg.set(NTPositionLimit_62);
  Instrument_62.insert(NTPositionLimit_62.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_62;
  NotionalPercentageOutstanding_62.setString("7.810000");
  msg.set(NotionalPercentageOutstanding_62);
  Instrument_62.insert(NotionalPercentageOutstanding_62.getString());
  FIX::OptAttribute OptAttribute_62('1');
  msg.set(OptAttribute_62);
  Instrument_62.insert(OptAttribute_62.getString());
  FIX::OptPayoutAmount OptPayoutAmount_62;
  OptPayoutAmount_62.setString("5417428");
  msg.set(OptPayoutAmount_62);
  Instrument_62.insert(OptPayoutAmount_62.getString());
  FIX::OptPayoutType OptPayoutType_62(2);
  msg.set(OptPayoutType_62);
  Instrument_62.insert(OptPayoutType_62.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_62;
  OriginalNotionalPercentageOutstanding_62.setString("29.860000");
  msg.set(OriginalNotionalPercentageOutstanding_62);
  Instrument_62.insert(OriginalNotionalPercentageOutstanding_62.getString());
  FIX::Pool Pool_62("STRING_2042835402");
  msg.set(Pool_62);
  Instrument_62.insert(Pool_62.getString());
  FIX::PositionLimit PositionLimit_62(1496528208);
  msg.set(PositionLimit_62);
  Instrument_62.insert(PositionLimit_62.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_62("STRING_STD");
  msg.set(PriceQuoteMethod_62);
  Instrument_62.insert(PriceQuoteMethod_62.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_62("STRING_1956893154");
  msg.set(PriceUnitOfMeasure_62);
  Instrument_62.insert(PriceUnitOfMeasure_62.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_62;
  PriceUnitOfMeasureQty_62.setString("2053989");
  msg.set(PriceUnitOfMeasureQty_62);
  Instrument_62.insert(PriceUnitOfMeasureQty_62.getString());
  FIX::Product Product_64(9);
  msg.set(Product_64);
  Instrument_62.insert(Product_64.getString());
  FIX::ProductComplex ProductComplex_62("STRING_1011141356");
  msg.set(ProductComplex_62);
  Instrument_62.insert(ProductComplex_62.getString());
  FIX::PutOrCall PutOrCall_62(0);
  msg.set(PutOrCall_62);
  Instrument_62.insert(PutOrCall_62.getString());
  FIX::RedemptionDate RedemptionDate_62("LOCALMKTDATE_1694143449");
  msg.set(RedemptionDate_62);
  Instrument_62.insert(RedemptionDate_62.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_62("STRING_1624772298");
  msg.set(RepoCollateralSecurityType_62);
  Instrument_62.insert(RepoCollateralSecurityType_62.getString());
  FIX::RepurchaseRate RepurchaseRate_62;
  RepurchaseRate_62.setString("65.320000");
  msg.set(RepurchaseRate_62);
  Instrument_62.insert(RepurchaseRate_62.getString());
  FIX::RepurchaseTerm RepurchaseTerm_62(514066473);
  msg.set(RepurchaseTerm_62);
  Instrument_62.insert(RepurchaseTerm_62.getString());
  FIX::RestructuringType RestructuringType_62("STRING_MR");
  msg.set(RestructuringType_62);
  Instrument_62.insert(RestructuringType_62.getString());
  FIX::SecurityDesc SecurityDesc_62("STRING_412046311");
  msg.set(SecurityDesc_62);
  Instrument_62.insert(SecurityDesc_62.getString());
  FIX::SecurityExchange SecurityExchange_62("EXCHANGE_1902511027");
  msg.set(SecurityExchange_62);
  Instrument_62.insert(SecurityExchange_62.getString());
  FIX::SecurityGroup SecurityGroup_62("STRING_1897162461");
  msg.set(SecurityGroup_62);
  Instrument_62.insert(SecurityGroup_62.getString());
  FIX::SecurityID SecurityID_62("STRING_1476940593");
  msg.set(SecurityID_62);
  Instrument_62.insert(SecurityID_62.getString());
  FIX::SecurityIDSource SecurityIDSource_62("STRING_M");
  msg.set(SecurityIDSource_62);
  Instrument_62.insert(SecurityIDSource_62.getString());
  FIX::SecurityStatus SecurityStatus_62("STRING_2");
  msg.set(SecurityStatus_62);
  Instrument_62.insert(SecurityStatus_62.getString());
  FIX::SecuritySubType SecuritySubType_63("STRING_415039295");
  msg.set(SecuritySubType_63);
  Instrument_62.insert(SecuritySubType_63.getString());
  FIX::SecurityType SecurityType_64("STRING_SPCLO");
  msg.set(SecurityType_64);
  Instrument_62.insert(SecurityType_64.getString());
  FIX::Seniority Seniority_62("STRING_SD");
  msg.set(Seniority_62);
  Instrument_62.insert(Seniority_62.getString());
  FIX::SettlMethod SettlMethod_62('C');
  msg.set(SettlMethod_62);
  Instrument_62.insert(SettlMethod_62.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_62("STRING_841491061");
  msg.set(SettleOnOpenFlag_62);
  Instrument_62.insert(SettleOnOpenFlag_62.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_62("STRING_389770066");
  msg.set(StateOrProvinceOfIssue_62);
  Instrument_62.insert(StateOrProvinceOfIssue_62.getString());
  FIX::StrikeCurrency StrikeCurrency_62("GBP");
  msg.set(StrikeCurrency_62);
  Instrument_62.insert(StrikeCurrency_62.getString());
  FIX::StrikeMultiplier StrikeMultiplier_62;
  StrikeMultiplier_62.setString("19780455");
  msg.set(StrikeMultiplier_62);
  Instrument_62.insert(StrikeMultiplier_62.getString());
  FIX::StrikePrice StrikePrice_62;
  StrikePrice_62.setString("7745407");
  msg.set(StrikePrice_62);
  Instrument_62.insert(StrikePrice_62.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_62(2);
  msg.set(StrikePriceBoundaryMethod_62);
  Instrument_62.insert(StrikePriceBoundaryMethod_62.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_62;
  StrikePriceBoundaryPrecision_62.setString("48.380000");
  msg.set(StrikePriceBoundaryPrecision_62);
  Instrument_62.insert(StrikePriceBoundaryPrecision_62.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_62(3);
  msg.set(StrikePriceDeterminationMethod_62);
  Instrument_62.insert(StrikePriceDeterminationMethod_62.getString());
  FIX::StrikeValue StrikeValue_62;
  StrikeValue_62.setString("18196701");
  msg.set(StrikeValue_62);
  Instrument_62.insert(StrikeValue_62.getString());
  FIX::Symbol Symbol_62("STRING_1794494382");
  msg.set(Symbol_62);
  Instrument_62.insert(Symbol_62.getString());
  FIX::SymbolSfx SymbolSfx_62("STRING_CD");
  msg.set(SymbolSfx_62);
  Instrument_62.insert(SymbolSfx_62.getString());
  FIX::TimeUnit TimeUnit_62("STRING_S");
  msg.set(TimeUnit_62);
  Instrument_62.insert(TimeUnit_62.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_62(1);
  msg.set(UnderlyingPriceDeterminationMethod_62);
  Instrument_62.insert(UnderlyingPriceDeterminationMethod_62.getString());
  FIX::UnitOfMeasure UnitOfMeasure_62("STRING_MWh");
  msg.set(UnitOfMeasure_62);
  Instrument_62.insert(UnitOfMeasure_62.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_62;
  UnitOfMeasureQty_62.setString("13783960");
  msg.set(UnitOfMeasureQty_62);
  Instrument_62.insert(UnitOfMeasureQty_62.getString());
  FIX::ValuationMethod ValuationMethod_62("STRING_FUT");
  msg.set(ValuationMethod_62);
  Instrument_62.insert(ValuationMethod_62.getString());
  all_values.push_back(Instrument_62);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_121;
    FIX::ComplexEventCondition ComplexEventCondition_121(1);
    noComplexEvents_0_0.set(ComplexEventCondition_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventCondition_121.getString());
    FIX::ComplexEventPrice ComplexEventPrice_121;
    ComplexEventPrice_121.setString("85017");
    noComplexEvents_0_0.set(ComplexEventPrice_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPrice_121.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_121(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceBoundaryMethod_121.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_121;
    ComplexEventPriceBoundaryPrecision_121.setString("88.630000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceBoundaryPrecision_121.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_121(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceTimeType_121.getString());
    FIX::ComplexEventType ComplexEventType_121(9);
    noComplexEvents_0_0.set(ComplexEventType_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventType_121.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_121;
    ComplexOptPayoutAmount_121.setString("12146558");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexOptPayoutAmount_121.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_121);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_250;
      FIX::ComplexEventEndDate ComplexEventEndDate_250(FIX::UTCTIMESTAMP(16, 57, 14, 6, 3, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_250);
      ComplexEventDates_NoComplexEventDates_250.insert(ComplexEventEndDate_250.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_250(FIX::UTCTIMESTAMP(8, 52, 11, 11, 8, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_250);
      ComplexEventDates_NoComplexEventDates_250.insert(ComplexEventStartDate_250.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_250);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_501;
        FIX::ComplexEventEndTime ComplexEventEndTime_501(FIX::UTCTIMEONLY(5, 56, 38));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_501);
        ComplexEventTimes_NoComplexEventTimes_501.insert(ComplexEventEndTime_501.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_501(FIX::UTCTIMEONLY(20, 19, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_501);
        ComplexEventTimes_NoComplexEventTimes_501.insert(ComplexEventStartTime_501.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_501);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_122;
    FIX::ComplexEventCondition ComplexEventCondition_122(1);
    noComplexEvents_0_1.set(ComplexEventCondition_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventCondition_122.getString());
    FIX::ComplexEventPrice ComplexEventPrice_122;
    ComplexEventPrice_122.setString("20810272");
    noComplexEvents_0_1.set(ComplexEventPrice_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPrice_122.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_122(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceBoundaryMethod_122.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_122;
    ComplexEventPriceBoundaryPrecision_122.setString("18.350000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceBoundaryPrecision_122.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_122(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceTimeType_122.getString());
    FIX::ComplexEventType ComplexEventType_122(7);
    noComplexEvents_0_1.set(ComplexEventType_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventType_122.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_122;
    ComplexOptPayoutAmount_122.setString("570339");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexOptPayoutAmount_122.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_122);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_251;
      FIX::ComplexEventEndDate ComplexEventEndDate_251(FIX::UTCTIMESTAMP(3, 35, 27, 18, 6, 2010));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_251);
      ComplexEventDates_NoComplexEventDates_251.insert(ComplexEventEndDate_251.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_251(FIX::UTCTIMESTAMP(2, 20, 20, 21, 8, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_251);
      ComplexEventDates_NoComplexEventDates_251.insert(ComplexEventStartDate_251.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_251);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_502;
        FIX::ComplexEventEndTime ComplexEventEndTime_502(FIX::UTCTIMEONLY(14, 33, 27));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_502);
        ComplexEventTimes_NoComplexEventTimes_502.insert(ComplexEventEndTime_502.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_502(FIX::UTCTIMEONLY(9, 38, 40));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_502);
        ComplexEventTimes_NoComplexEventTimes_502.insert(ComplexEventStartTime_502.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_502);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_123;
    FIX::ComplexEventCondition ComplexEventCondition_123(2);
    noComplexEvents_0_2.set(ComplexEventCondition_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventCondition_123.getString());
    FIX::ComplexEventPrice ComplexEventPrice_123;
    ComplexEventPrice_123.setString("13580836");
    noComplexEvents_0_2.set(ComplexEventPrice_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPrice_123.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_123(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceBoundaryMethod_123.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_123;
    ComplexEventPriceBoundaryPrecision_123.setString("70.880000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceBoundaryPrecision_123.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_123(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceTimeType_123.getString());
    FIX::ComplexEventType ComplexEventType_123(6);
    noComplexEvents_0_2.set(ComplexEventType_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventType_123.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_123;
    ComplexOptPayoutAmount_123.setString("8520210");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexOptPayoutAmount_123.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_123);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_252;
      FIX::ComplexEventEndDate ComplexEventEndDate_252(FIX::UTCTIMESTAMP(7, 34, 37, 13, 4, 2003));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_252);
      ComplexEventDates_NoComplexEventDates_252.insert(ComplexEventEndDate_252.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_252(FIX::UTCTIMESTAMP(21, 10, 55, 27, 6, 2010));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_252);
      ComplexEventDates_NoComplexEventDates_252.insert(ComplexEventStartDate_252.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_252);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_503;
        FIX::ComplexEventEndTime ComplexEventEndTime_503(FIX::UTCTIMEONLY(11, 4, 1));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_503);
        ComplexEventTimes_NoComplexEventTimes_503.insert(ComplexEventEndTime_503.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_503(FIX::UTCTIMEONLY(5, 32, 35));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_503);
        ComplexEventTimes_NoComplexEventTimes_503.insert(ComplexEventStartTime_503.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_503);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_504;
        FIX::ComplexEventEndTime ComplexEventEndTime_504(FIX::UTCTIMEONLY(9, 11, 38));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_504);
        ComplexEventTimes_NoComplexEventTimes_504.insert(ComplexEventEndTime_504.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_504(FIX::UTCTIMEONLY(16, 2, 41));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_504);
        ComplexEventTimes_NoComplexEventTimes_504.insert(ComplexEventStartTime_504.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_504);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_253;
      FIX::ComplexEventEndDate ComplexEventEndDate_253(FIX::UTCTIMESTAMP(13, 7, 55, 26, 4, 2017));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_253);
      ComplexEventDates_NoComplexEventDates_253.insert(ComplexEventEndDate_253.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_253(FIX::UTCTIMESTAMP(16, 55, 27, 19, 1, 2002));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_253);
      ComplexEventDates_NoComplexEventDates_253.insert(ComplexEventStartDate_253.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_253);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_505;
        FIX::ComplexEventEndTime ComplexEventEndTime_505(FIX::UTCTIMEONLY(19, 51, 16));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_505);
        ComplexEventTimes_NoComplexEventTimes_505.insert(ComplexEventEndTime_505.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_505(FIX::UTCTIMEONLY(21, 40, 21));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_505);
        ComplexEventTimes_NoComplexEventTimes_505.insert(ComplexEventStartTime_505.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_505);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_506;
        FIX::ComplexEventEndTime ComplexEventEndTime_506(FIX::UTCTIMEONLY(13, 32, 30));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_506);
        ComplexEventTimes_NoComplexEventTimes_506.insert(ComplexEventEndTime_506.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_506(FIX::UTCTIMEONLY(0, 24, 17));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_506);
        ComplexEventTimes_NoComplexEventTimes_506.insert(ComplexEventStartTime_506.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_506);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_254;
      FIX::ComplexEventEndDate ComplexEventEndDate_254(FIX::UTCTIMESTAMP(13, 17, 1, 7, 9, 2010));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_254);
      ComplexEventDates_NoComplexEventDates_254.insert(ComplexEventEndDate_254.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_254(FIX::UTCTIMESTAMP(4, 41, 27, 8, 11, 2003));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_254);
      ComplexEventDates_NoComplexEventDates_254.insert(ComplexEventStartDate_254.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_254);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_507;
        FIX::ComplexEventEndTime ComplexEventEndTime_507(FIX::UTCTIMEONLY(2, 30, 53));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_507);
        ComplexEventTimes_NoComplexEventTimes_507.insert(ComplexEventEndTime_507.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_507(FIX::UTCTIMEONLY(7, 34, 9));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_507);
        ComplexEventTimes_NoComplexEventTimes_507.insert(ComplexEventStartTime_507.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_507);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_125;
    FIX::EventDate EventDate_125("LOCALMKTDATE_1406940155");
    noEvents_0_0.set(EventDate_125);
    EvntGrp_NoEvents_125.insert(EventDate_125.getString());
    FIX::EventPx EventPx_125;
    EventPx_125.setString("7869073");
    noEvents_0_0.set(EventPx_125);
    EvntGrp_NoEvents_125.insert(EventPx_125.getString());
    FIX::EventText EventText_125("STRING_400698705");
    noEvents_0_0.set(EventText_125);
    EvntGrp_NoEvents_125.insert(EventText_125.getString());
    FIX::EventTime EventTime_125(FIX::UTCTIMESTAMP(9, 9, 29, 3, 11, 2014));
    noEvents_0_0.set(EventTime_125);
    EvntGrp_NoEvents_125.insert(EventTime_125.getString());
    FIX::EventType EventType_125(1);
    noEvents_0_0.set(EventType_125);
    EvntGrp_NoEvents_125.insert(EventType_125.getString());
    all_values.push_back(EvntGrp_NoEvents_125);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_126;
    FIX::EventDate EventDate_126("LOCALMKTDATE_97540353");
    noEvents_0_1.set(EventDate_126);
    EvntGrp_NoEvents_126.insert(EventDate_126.getString());
    FIX::EventPx EventPx_126;
    EventPx_126.setString("4804652");
    noEvents_0_1.set(EventPx_126);
    EvntGrp_NoEvents_126.insert(EventPx_126.getString());
    FIX::EventText EventText_126("STRING_904984987");
    noEvents_0_1.set(EventText_126);
    EvntGrp_NoEvents_126.insert(EventText_126.getString());
    FIX::EventTime EventTime_126(FIX::UTCTIMESTAMP(18, 48, 51, 2, 11, 2004));
    noEvents_0_1.set(EventTime_126);
    EvntGrp_NoEvents_126.insert(EventTime_126.getString());
    FIX::EventType EventType_126(10);
    noEvents_0_1.set(EventType_126);
    EvntGrp_NoEvents_126.insert(EventType_126.getString());
    all_values.push_back(EvntGrp_NoEvents_126);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_127;
    FIX::EventDate EventDate_127("LOCALMKTDATE_1653892307");
    noEvents_0_2.set(EventDate_127);
    EvntGrp_NoEvents_127.insert(EventDate_127.getString());
    FIX::EventPx EventPx_127;
    EventPx_127.setString("21375962");
    noEvents_0_2.set(EventPx_127);
    EvntGrp_NoEvents_127.insert(EventPx_127.getString());
    FIX::EventText EventText_127("STRING_170276392");
    noEvents_0_2.set(EventText_127);
    EvntGrp_NoEvents_127.insert(EventText_127.getString());
    FIX::EventTime EventTime_127(FIX::UTCTIMESTAMP(0, 23, 7, 17, 3, 2010));
    noEvents_0_2.set(EventTime_127);
    EvntGrp_NoEvents_127.insert(EventTime_127.getString());
    FIX::EventType EventType_127(19);
    noEvents_0_2.set(EventType_127);
    EvntGrp_NoEvents_127.insert(EventType_127.getString());
    all_values.push_back(EvntGrp_NoEvents_127);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_128;
    FIX::InstrumentPartyID InstrumentPartyID_128("STRING_1661839006");
    noInstrumentParties_0_0.set(InstrumentPartyID_128);
    InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyID_128.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_128('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_128);
    InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyIDSource_128.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_128(686341704);
    noInstrumentParties_0_0.set(InstrumentPartyRole_128);
    InstrumentParties_NoInstrumentParties_128.insert(InstrumentPartyRole_128.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_128);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270;
      FIX::InstrumentPartySubID InstrumentPartySubID_270("STRING_2065936626");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_270);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270.insert(InstrumentPartySubID_270.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_270(245144438);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_270);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270.insert(InstrumentPartySubIDType_270.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271;
      FIX::InstrumentPartySubID InstrumentPartySubID_271("STRING_2057886345");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_271);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271.insert(InstrumentPartySubID_271.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_271(83078119);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_271);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271.insert(InstrumentPartySubIDType_271.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_129;
    FIX::InstrumentPartyID InstrumentPartyID_129("STRING_342684791");
    noInstrumentParties_0_1.set(InstrumentPartyID_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyID_129.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_129('3');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyIDSource_129.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_129(988063106);
    noInstrumentParties_0_1.set(InstrumentPartyRole_129);
    InstrumentParties_NoInstrumentParties_129.insert(InstrumentPartyRole_129.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_129);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272;
      FIX::InstrumentPartySubID InstrumentPartySubID_272("STRING_1111749081");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_272);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272.insert(InstrumentPartySubID_272.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_272(621508446);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_272);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272.insert(InstrumentPartySubIDType_272.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273;
      FIX::InstrumentPartySubID InstrumentPartySubID_273("STRING_1649573607");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_273);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273.insert(InstrumentPartySubID_273.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_273(731359212);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_273);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273.insert(InstrumentPartySubIDType_273.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274;
      FIX::InstrumentPartySubID InstrumentPartySubID_274("STRING_427839729");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_274);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274.insert(InstrumentPartySubID_274.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_274(489664626);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_274);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274.insert(InstrumentPartySubIDType_274.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_130;
    FIX::InstrumentPartyID InstrumentPartyID_130("STRING_982824401");
    noInstrumentParties_0_2.set(InstrumentPartyID_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyID_130.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_130('2');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyIDSource_130.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_130(479777206);
    noInstrumentParties_0_2.set(InstrumentPartyRole_130);
    InstrumentParties_NoInstrumentParties_130.insert(InstrumentPartyRole_130.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_130);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275;
      FIX::InstrumentPartySubID InstrumentPartySubID_275("STRING_397673601");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_275);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275.insert(InstrumentPartySubID_275.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_275(252828975);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_275);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275.insert(InstrumentPartySubIDType_275.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_139;
    FIX::SecurityAltID SecurityAltID_139("STRING_1934375068");
    noSecurityAltID_0_0.set(SecurityAltID_139);
    SecAltIDGrp_NoSecurityAltID_139.insert(SecurityAltID_139.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_139("STRING_302563432");
    noSecurityAltID_0_0.set(SecurityAltIDSource_139);
    SecAltIDGrp_NoSecurityAltID_139.insert(SecurityAltIDSource_139.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_139);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_140;
    FIX::SecurityAltID SecurityAltID_140("STRING_211917199");
    noSecurityAltID_0_1.set(SecurityAltID_140);
    SecAltIDGrp_NoSecurityAltID_140.insert(SecurityAltID_140.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_140("STRING_583049395");
    noSecurityAltID_0_1.set(SecurityAltIDSource_140);
    SecAltIDGrp_NoSecurityAltID_140.insert(SecurityAltIDSource_140.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_140);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_124;
  FIX::SecurityXML SecurityXML_125("XMLDATA_1139205251");
  msg.set(SecurityXML_125);
  FIX::SecurityXMLLen SecurityXMLLen_62(2041096183);
  msg.set(SecurityXMLLen_62);
  FIX::SecurityXMLSchema SecurityXMLSchema_62("STRING_97404753");
  msg.set(SecurityXMLSchema_62);
  SecurityXML_124.insert(SecurityXMLSchema_62.getString());
  all_values.push_back(SecurityXML_124);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_88;
    FIX::PartyID PartyID_88("STRING_579954239");
    noPartyIDs_0_0.set(PartyID_88);
    Parties_NoPartyIDs_88.insert(PartyID_88.getString());
    FIX::PartyIDSource PartyIDSource_88('I');
    noPartyIDs_0_0.set(PartyIDSource_88);
    Parties_NoPartyIDs_88.insert(PartyIDSource_88.getString());
    FIX::PartyRole PartyRole_88(2);
    noPartyIDs_0_0.set(PartyRole_88);
    Parties_NoPartyIDs_88.insert(PartyRole_88.getString());
    all_values.push_back(Parties_NoPartyIDs_88);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_182;
      FIX::PartySubID PartySubID_182("STRING_1573790177");
      noPartySubIDs_0_1_0.set(PartySubID_182);
      PtysSubGrp_NoPartySubIDs_182.insert(PartySubID_182.getString());
      FIX::PartySubIDType PartySubIDType_182(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_182);
      PtysSubGrp_NoPartySubIDs_182.insert(PartySubIDType_182.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_182);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_183;
      FIX::PartySubID PartySubID_183("STRING_1167783469");
      noPartySubIDs_0_1_1.set(PartySubID_183);
      PtysSubGrp_NoPartySubIDs_183.insert(PartySubID_183.getString());
      FIX::PartySubIDType PartySubIDType_183(18);
      noPartySubIDs_0_1_1.set(PartySubIDType_183);
      PtysSubGrp_NoPartySubIDs_183.insert(PartySubIDType_183.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_183);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_184;
      FIX::PartySubID PartySubID_184("STRING_1062700106");
      noPartySubIDs_0_1_2.set(PartySubID_184);
      PtysSubGrp_NoPartySubIDs_184.insert(PartySubID_184.getString());
      FIX::PartySubIDType PartySubIDType_184(8);
      noPartySubIDs_0_1_2.set(PartySubIDType_184);
      PtysSubGrp_NoPartySubIDs_184.insert(PartySubIDType_184.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_184);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_7;
    FIX::PosAmt PosAmt_7;
    PosAmt_7.setString("16842085");
    noPosAmt_0_0.set(PosAmt_7);
    PositionAmountData_NoPosAmt_7.insert(PosAmt_7.getString());
    FIX::PosAmtType PosAmtType_7("STRING_ICPN");
    noPosAmt_0_0.set(PosAmtType_7);
    PositionAmountData_NoPosAmt_7.insert(PosAmtType_7.getString());
    FIX::PositionCurrency PositionCurrency_7("STRING_1660282797");
    noPosAmt_0_0.set(PositionCurrency_7);
    PositionAmountData_NoPosAmt_7.insert(PositionCurrency_7.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_7);

    msg.addGroup(noPosAmt_0_0);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_2;
    FIX::LongQty LongQty_2;
    LongQty_2.setString("11048335");
    noPositions_0_0.set(LongQty_2);
    PositionQty_NoPositions_2.insert(LongQty_2.getString());
    FIX::PosQtyStatus PosQtyStatus_2(1);
    noPositions_0_0.set(PosQtyStatus_2);
    PositionQty_NoPositions_2.insert(PosQtyStatus_2.getString());
    FIX::PosType PosType_2("STRING_TQ");
    noPositions_0_0.set(PosType_2);
    PositionQty_NoPositions_2.insert(PosType_2.getString());
    FIX::QuantityDate QuantityDate_2("LOCALMKTDATE_1584610777");
    noPositions_0_0.set(QuantityDate_2);
    PositionQty_NoPositions_2.insert(QuantityDate_2.getString());
    FIX::ShortQty ShortQty_2;
    ShortQty_2.setString("16487243");
    noPositions_0_0.set(ShortQty_2);
    PositionQty_NoPositions_2.insert(ShortQty_2.getString());
    all_values.push_back(PositionQty_NoPositions_2);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_77;
      FIX::NestedPartyID NestedPartyID_77("STRING_1837439752");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyID_77.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_77('4');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyIDSource_77.getString());
      FIX::NestedPartyRole NestedPartyRole_77(83378044);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyRole_77.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_77);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_153;
        FIX::NestedPartySubID NestedPartySubID_153("STRING_644078465");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_153);
        NstdPtysSubGrp_NoNestedPartySubIDs_153.insert(NestedPartySubID_153.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_153(666427439);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_153);
        NstdPtysSubGrp_NoNestedPartySubIDs_153.insert(NestedPartySubIDType_153.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_153);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_78;
      FIX::NestedPartyID NestedPartyID_78("STRING_1131724788");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_78);
      NestedParties_NoNestedPartyIDs_78.insert(NestedPartyID_78.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_78('5');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_78);
      NestedParties_NoNestedPartyIDs_78.insert(NestedPartyIDSource_78.getString());
      FIX::NestedPartyRole NestedPartyRole_78(763832192);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_78);
      NestedParties_NoNestedPartyIDs_78.insert(NestedPartyRole_78.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_78);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_154;
        FIX::NestedPartySubID NestedPartySubID_154("STRING_1117645239");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_154);
        NstdPtysSubGrp_NoNestedPartySubIDs_154.insert(NestedPartySubID_154.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_154(279736024);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_154);
        NstdPtysSubGrp_NoNestedPartySubIDs_154.insert(NestedPartySubIDType_154.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_154);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_3;
    FIX::LongQty LongQty_3;
    LongQty_3.setString("11963895");
    noPositions_0_1.set(LongQty_3);
    PositionQty_NoPositions_3.insert(LongQty_3.getString());
    FIX::PosQtyStatus PosQtyStatus_3(2);
    noPositions_0_1.set(PosQtyStatus_3);
    PositionQty_NoPositions_3.insert(PosQtyStatus_3.getString());
    FIX::PosType PosType_3("STRING_TQ");
    noPositions_0_1.set(PosType_3);
    PositionQty_NoPositions_3.insert(PosType_3.getString());
    FIX::QuantityDate QuantityDate_3("LOCALMKTDATE_1271026571");
    noPositions_0_1.set(QuantityDate_3);
    PositionQty_NoPositions_3.insert(QuantityDate_3.getString());
    FIX::ShortQty ShortQty_3;
    ShortQty_3.setString("9630437");
    noPositions_0_1.set(ShortQty_3);
    PositionQty_NoPositions_3.insert(ShortQty_3.getString());
    all_values.push_back(PositionQty_NoPositions_3);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_79;
      FIX::NestedPartyID NestedPartyID_79("STRING_186243029");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_79);
      NestedParties_NoNestedPartyIDs_79.insert(NestedPartyID_79.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_79('2');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_79);
      NestedParties_NoNestedPartyIDs_79.insert(NestedPartyIDSource_79.getString());
      FIX::NestedPartyRole NestedPartyRole_79(452140642);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_79);
      NestedParties_NoNestedPartyIDs_79.insert(NestedPartyRole_79.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_79);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_155;
        FIX::NestedPartySubID NestedPartySubID_155("STRING_543808021");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_155);
        NstdPtysSubGrp_NoNestedPartySubIDs_155.insert(NestedPartySubID_155.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_155(2112423440);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_155);
        NstdPtysSubGrp_NoNestedPartySubIDs_155.insert(NestedPartySubIDType_155.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_155);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_156;
        FIX::NestedPartySubID NestedPartySubID_156("STRING_1835016215");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_156);
        NstdPtysSubGrp_NoNestedPartySubIDs_156.insert(NestedPartySubID_156.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_156(1648641592);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_156);
        NstdPtysSubGrp_NoNestedPartySubIDs_156.insert(NestedPartySubIDType_156.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_156);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_157;
        FIX::NestedPartySubID NestedPartySubID_157("STRING_460563343");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_157);
        NstdPtysSubGrp_NoNestedPartySubIDs_157.insert(NestedPartySubID_157.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_157(1733829237);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_157);
        NstdPtysSubGrp_NoNestedPartySubIDs_157.insert(NestedPartySubIDType_157.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_157);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_4;
    FIX::LongQty LongQty_4;
    LongQty_4.setString("10857687");
    noPositions_0_2.set(LongQty_4);
    PositionQty_NoPositions_4.insert(LongQty_4.getString());
    FIX::PosQtyStatus PosQtyStatus_4(2);
    noPositions_0_2.set(PosQtyStatus_4);
    PositionQty_NoPositions_4.insert(PosQtyStatus_4.getString());
    FIX::PosType PosType_4("STRING_CAA");
    noPositions_0_2.set(PosType_4);
    PositionQty_NoPositions_4.insert(PosType_4.getString());
    FIX::QuantityDate QuantityDate_4("LOCALMKTDATE_775724826");
    noPositions_0_2.set(QuantityDate_4);
    PositionQty_NoPositions_4.insert(QuantityDate_4.getString());
    FIX::ShortQty ShortQty_4;
    ShortQty_4.setString("3939653");
    noPositions_0_2.set(ShortQty_4);
    PositionQty_NoPositions_4.insert(ShortQty_4.getString());
    all_values.push_back(PositionQty_NoPositions_4);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_80;
      FIX::NestedPartyID NestedPartyID_80("STRING_768244363");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_80);
      NestedParties_NoNestedPartyIDs_80.insert(NestedPartyID_80.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_80('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_80);
      NestedParties_NoNestedPartyIDs_80.insert(NestedPartyIDSource_80.getString());
      FIX::NestedPartyRole NestedPartyRole_80(632637696);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_80);
      NestedParties_NoNestedPartyIDs_80.insert(NestedPartyRole_80.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_80);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_158;
        FIX::NestedPartySubID NestedPartySubID_158("STRING_1575734770");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_158);
        NstdPtysSubGrp_NoNestedPartySubIDs_158.insert(NestedPartySubID_158.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_158(1396469888);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_158);
        NstdPtysSubGrp_NoNestedPartySubIDs_158.insert(NestedPartySubIDType_158.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_158);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_159;
        FIX::NestedPartySubID NestedPartySubID_159("STRING_957316194");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_159);
        NstdPtysSubGrp_NoNestedPartySubIDs_159.insert(NestedPartySubID_159.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_159(545896361);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_159);
        NstdPtysSubGrp_NoNestedPartySubIDs_159.insert(NestedPartySubIDType_159.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_159);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noPositions_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceReport::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_22;
    FIX::TradingSessionID TradingSessionID_58("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_58);
    TrdgSesGrp_NoTradingSessions_22.insert(TradingSessionID_58.getString());
    FIX::TradingSessionSubID TradingSessionSubID_58("STRING_5");
    noTradingSessions_0_0.set(TradingSessionSubID_58);
    TrdgSesGrp_NoTradingSessions_22.insert(TradingSessionSubID_58.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_22);

    msg.addGroup(noTradingSessions_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_85;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_85("DATA_1277248689");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingIssuer_85.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_85(1304200370);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingIssuerLen_85.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_85("DATA_905465522");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingSecurityDesc_85.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_85(1463491718);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_85);
    UnderlyingInstrument_85.insert(EncodedUnderlyingSecurityDescLen_85.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_85;
    UnderlyingAdjustedQuantity_85.setString("12328394");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_85);
    UnderlyingInstrument_85.insert(UnderlyingAdjustedQuantity_85.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_85;
    UnderlyingAllocationPercent_85.setString("61.640000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_85);
    UnderlyingInstrument_85.insert(UnderlyingAllocationPercent_85.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_85;
    UnderlyingAttachmentPoint_85.setString("96.520000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_85);
    UnderlyingInstrument_85.insert(UnderlyingAttachmentPoint_85.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_85("STRING_1776647468");
    noUnderlyings_0_0.set(UnderlyingCFICode_85);
    UnderlyingInstrument_85.insert(UnderlyingCFICode_85.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_85("STRING_1322545956");
    noUnderlyings_0_0.set(UnderlyingCPProgram_85);
    UnderlyingInstrument_85.insert(UnderlyingCPProgram_85.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_85("STRING_873992220");
    noUnderlyings_0_0.set(UnderlyingCPRegType_85);
    UnderlyingInstrument_85.insert(UnderlyingCPRegType_85.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_85;
    UnderlyingCapValue_85.setString("12778054");
    noUnderlyings_0_0.set(UnderlyingCapValue_85);
    UnderlyingInstrument_85.insert(UnderlyingCapValue_85.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_85;
    UnderlyingCashAmount_85.setString("17831092");
    noUnderlyings_0_0.set(UnderlyingCashAmount_85);
    UnderlyingInstrument_85.insert(UnderlyingCashAmount_85.getString());
    FIX::UnderlyingCashType UnderlyingCashType_85("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_85);
    UnderlyingInstrument_85.insert(UnderlyingCashType_85.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_85;
    UnderlyingContractMultiplier_85.setString("2160904");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_85);
    UnderlyingInstrument_85.insert(UnderlyingContractMultiplier_85.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_85(1744913339);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_85);
    UnderlyingInstrument_85.insert(UnderlyingContractMultiplierUnit_85.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_85("COUNTRY_343170022");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_85);
    UnderlyingInstrument_85.insert(UnderlyingCountryOfIssue_85.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_85("LOCALMKTDATE_991815313");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_85);
    UnderlyingInstrument_85.insert(UnderlyingCouponPaymentDate_85.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_85;
    UnderlyingCouponRate_85.setString("86.440000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_85);
    UnderlyingInstrument_85.insert(UnderlyingCouponRate_85.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_85("STRING_309380279");
    noUnderlyings_0_0.set(UnderlyingCreditRating_85);
    UnderlyingInstrument_85.insert(UnderlyingCreditRating_85.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_85("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_85);
    UnderlyingInstrument_85.insert(UnderlyingCurrency_85.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_85;
    UnderlyingCurrentValue_85.setString("9420179");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_85);
    UnderlyingInstrument_85.insert(UnderlyingCurrentValue_85.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_85;
    UnderlyingDetachmentPoint_85.setString("51.800000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_85);
    UnderlyingInstrument_85.insert(UnderlyingDetachmentPoint_85.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_85;
    UnderlyingDirtyPrice_85.setString("4576898");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_85);
    UnderlyingInstrument_85.insert(UnderlyingDirtyPrice_85.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_85;
    UnderlyingEndPrice_85.setString("1910042");
    noUnderlyings_0_0.set(UnderlyingEndPrice_85);
    UnderlyingInstrument_85.insert(UnderlyingEndPrice_85.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_85;
    UnderlyingEndValue_85.setString("3223777");
    noUnderlyings_0_0.set(UnderlyingEndValue_85);
    UnderlyingInstrument_85.insert(UnderlyingEndValue_85.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_85(1003586249);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_85);
    UnderlyingInstrument_85.insert(UnderlyingExerciseStyle_85.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_85;
    UnderlyingFXRate_85.setString("18672101");
    noUnderlyings_0_0.set(UnderlyingFXRate_85);
    UnderlyingInstrument_85.insert(UnderlyingFXRate_85.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_85('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_85);
    UnderlyingInstrument_85.insert(UnderlyingFXRateCalc_85.getString());
    FIX::UnderlyingFactor UnderlyingFactor_85;
    UnderlyingFactor_85.setString("13447428");
    noUnderlyings_0_0.set(UnderlyingFactor_85);
    UnderlyingInstrument_85.insert(UnderlyingFactor_85.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_85(1101974944);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_85);
    UnderlyingInstrument_85.insert(UnderlyingFlowScheduleType_85.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_85("STRING_1605848532");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_85);
    UnderlyingInstrument_85.insert(UnderlyingInstrRegistry_85.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_85("LOCALMKTDATE_501459602");
    noUnderlyings_0_0.set(UnderlyingIssueDate_85);
    UnderlyingInstrument_85.insert(UnderlyingIssueDate_85.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_85("STRING_2007440466");
    noUnderlyings_0_0.set(UnderlyingIssuer_85);
    UnderlyingInstrument_85.insert(UnderlyingIssuer_85.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_85("STRING_921856603");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_85);
    UnderlyingInstrument_85.insert(UnderlyingLocaleOfIssue_85.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_85("LOCALMKTDATE_1734299049");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_85);
    UnderlyingInstrument_85.insert(UnderlyingMaturityDate_85.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_85("MONTHYEAR_1217562983");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_85);
    UnderlyingInstrument_85.insert(UnderlyingMaturityMonthYear_85.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_85("TZTIMEONLY_2108316255");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_85);
    UnderlyingInstrument_85.insert(UnderlyingMaturityTime_85.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_85;
    UnderlyingNotionalPercentageOutstanding_85.setString("28.690000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_85);
    UnderlyingInstrument_85.insert(UnderlyingNotionalPercentageOutstanding_85.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_85('3');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_85);
    UnderlyingInstrument_85.insert(UnderlyingOptAttribute_85.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_85;
    UnderlyingOriginalNotionalPercentageOutstanding_85.setString("48.270000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_85);
    UnderlyingInstrument_85.insert(UnderlyingOriginalNotionalPercentageOutstanding_85.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_85("STRING_493784633");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_85);
    UnderlyingInstrument_85.insert(UnderlyingPriceUnitOfMeasure_85.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_85;
    UnderlyingPriceUnitOfMeasureQty_85.setString("282509");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_85);
    UnderlyingInstrument_85.insert(UnderlyingPriceUnitOfMeasureQty_85.getString());
    FIX::UnderlyingProduct UnderlyingProduct_85(1295162637);
    noUnderlyings_0_0.set(UnderlyingProduct_85);
    UnderlyingInstrument_85.insert(UnderlyingProduct_85.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_85(709875120);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_85);
    UnderlyingInstrument_85.insert(UnderlyingPutOrCall_85.getString());
    FIX::UnderlyingPx UnderlyingPx_85;
    UnderlyingPx_85.setString("17731642");
    noUnderlyings_0_0.set(UnderlyingPx_85);
    UnderlyingInstrument_85.insert(UnderlyingPx_85.getString());
    FIX::UnderlyingQty UnderlyingQty_85;
    UnderlyingQty_85.setString("16383326");
    noUnderlyings_0_0.set(UnderlyingQty_85);
    UnderlyingInstrument_85.insert(UnderlyingQty_85.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_85("LOCALMKTDATE_1701690433");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_85);
    UnderlyingInstrument_85.insert(UnderlyingRedemptionDate_85.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_85("STRING_1764559278");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_85);
    UnderlyingInstrument_85.insert(UnderlyingRepoCollateralSecurityType_85.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_85;
    UnderlyingRepurchaseRate_85.setString("29.390000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_85);
    UnderlyingInstrument_85.insert(UnderlyingRepurchaseRate_85.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_85(1314266461);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_85);
    UnderlyingInstrument_85.insert(UnderlyingRepurchaseTerm_85.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_85("STRING_646514396");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_85);
    UnderlyingInstrument_85.insert(UnderlyingRestructuringType_85.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_85("STRING_742247266");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityDesc_85.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_85("EXCHANGE_679327993");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityExchange_85.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_85("STRING_1104204284");
    noUnderlyings_0_0.set(UnderlyingSecurityID_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityID_85.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_85("STRING_933251482");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityIDSource_85.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_85("STRING_1001705719");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_85);
    UnderlyingInstrument_85.insert(UnderlyingSecuritySubType_85.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_85("STRING_2107790533");
    noUnderlyings_0_0.set(UnderlyingSecurityType_85);
    UnderlyingInstrument_85.insert(UnderlyingSecurityType_85.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_85("STRING_652977961");
    noUnderlyings_0_0.set(UnderlyingSeniority_85);
    UnderlyingInstrument_85.insert(UnderlyingSeniority_85.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_85("STRING_1330305563");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_85);
    UnderlyingInstrument_85.insert(UnderlyingSettlMethod_85.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_85(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_85);
    UnderlyingInstrument_85.insert(UnderlyingSettlementType_85.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_85;
    UnderlyingStartValue_85.setString("17549529");
    noUnderlyings_0_0.set(UnderlyingStartValue_85);
    UnderlyingInstrument_85.insert(UnderlyingStartValue_85.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_85("STRING_788670447");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_85);
    UnderlyingInstrument_85.insert(UnderlyingStateOrProvinceOfIssue_85.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_85("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_85);
    UnderlyingInstrument_85.insert(UnderlyingStrikeCurrency_85.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_85;
    UnderlyingStrikePrice_85.setString("17105270");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_85);
    UnderlyingInstrument_85.insert(UnderlyingStrikePrice_85.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_85("STRING_1393324769");
    noUnderlyings_0_0.set(UnderlyingSymbol_85);
    UnderlyingInstrument_85.insert(UnderlyingSymbol_85.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_85("STRING_684989059");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_85);
    UnderlyingInstrument_85.insert(UnderlyingSymbolSfx_85.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_85("STRING_1671359658");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_85);
    UnderlyingInstrument_85.insert(UnderlyingTimeUnit_85.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_85("STRING_609303990");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_85);
    UnderlyingInstrument_85.insert(UnderlyingUnitOfMeasure_85.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_85;
    UnderlyingUnitOfMeasureQty_85.setString("10776143");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_85);
    UnderlyingInstrument_85.insert(UnderlyingUnitOfMeasureQty_85.getString());
    all_values.push_back(UnderlyingInstrument_85);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_168;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_168("STRING_1103088624");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_168);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_168.insert(UnderlyingSecurityAltID_168.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_168("STRING_1105865294");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_168);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_168.insert(UnderlyingSecurityAltIDSource_168.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_168);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_169;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_169("STRING_1653863474");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_169);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_169.insert(UnderlyingSecurityAltID_169.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_169("STRING_1812963744");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_169);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_169.insert(UnderlyingSecurityAltIDSource_169.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_169);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_170;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_170("STRING_731545928");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_170);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_170.insert(UnderlyingSecurityAltID_170.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_170("STRING_1144712486");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_170);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_170.insert(UnderlyingSecurityAltIDSource_170.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_170);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_151;
      FIX::UnderlyingStipType UnderlyingStipType_151("STRING_348621558");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_151);
      UnderlyingStipulations_NoUnderlyingStips_151.insert(UnderlyingStipType_151.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_151("STRING_944941777");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_151);
      UnderlyingStipulations_NoUnderlyingStips_151.insert(UnderlyingStipValue_151.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_151);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_152;
      FIX::UnderlyingStipType UnderlyingStipType_152("STRING_533953342");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_152);
      UnderlyingStipulations_NoUnderlyingStips_152.insert(UnderlyingStipType_152.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_152("STRING_995135954");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_152);
      UnderlyingStipulations_NoUnderlyingStips_152.insert(UnderlyingStipValue_152.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_152);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_153;
      FIX::UnderlyingStipType UnderlyingStipType_153("STRING_1687189043");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_153);
      UnderlyingStipulations_NoUnderlyingStips_153.insert(UnderlyingStipType_153.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_153("STRING_1213281336");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_153);
      UnderlyingStipulations_NoUnderlyingStips_153.insert(UnderlyingStipValue_153.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_153);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_181;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_181("STRING_472956877");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_181);
      UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyID_181.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_181('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_181);
      UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyIDSource_181.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_181(2059647123);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_181);
      UndlyInstrumentParties_NoUndlyInstrumentParties_181.insert(UnderlyingInstrumentPartyRole_181.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_181);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_348("STRING_1397808970");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_348);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348.insert(UnderlyingInstrumentPartySubID_348.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_348(1217213241);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_348);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348.insert(UnderlyingInstrumentPartySubIDType_348.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_182;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_182("STRING_733404097");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_182);
      UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyID_182.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_182('3');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_182);
      UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyIDSource_182.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_182(876238962);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_182);
      UndlyInstrumentParties_NoUndlyInstrumentParties_182.insert(UnderlyingInstrumentPartyRole_182.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_182);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_349("STRING_1749522820");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_349);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349.insert(UnderlyingInstrumentPartySubID_349.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_349(122080083);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_349);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349.insert(UnderlyingInstrumentPartySubIDType_349.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_86;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_86("DATA_885819233");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingIssuer_86.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_86(1273398830);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingIssuerLen_86.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_86("DATA_731384074");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingSecurityDesc_86.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_86(1963433584);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_86);
    UnderlyingInstrument_86.insert(EncodedUnderlyingSecurityDescLen_86.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_86;
    UnderlyingAdjustedQuantity_86.setString("16320996");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_86);
    UnderlyingInstrument_86.insert(UnderlyingAdjustedQuantity_86.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_86;
    UnderlyingAllocationPercent_86.setString("26.980000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_86);
    UnderlyingInstrument_86.insert(UnderlyingAllocationPercent_86.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_86;
    UnderlyingAttachmentPoint_86.setString("52.300000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_86);
    UnderlyingInstrument_86.insert(UnderlyingAttachmentPoint_86.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_86("STRING_1138479494");
    noUnderlyings_0_1.set(UnderlyingCFICode_86);
    UnderlyingInstrument_86.insert(UnderlyingCFICode_86.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_86("STRING_1499952794");
    noUnderlyings_0_1.set(UnderlyingCPProgram_86);
    UnderlyingInstrument_86.insert(UnderlyingCPProgram_86.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_86("STRING_1653361158");
    noUnderlyings_0_1.set(UnderlyingCPRegType_86);
    UnderlyingInstrument_86.insert(UnderlyingCPRegType_86.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_86;
    UnderlyingCapValue_86.setString("1357083");
    noUnderlyings_0_1.set(UnderlyingCapValue_86);
    UnderlyingInstrument_86.insert(UnderlyingCapValue_86.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_86;
    UnderlyingCashAmount_86.setString("7196396");
    noUnderlyings_0_1.set(UnderlyingCashAmount_86);
    UnderlyingInstrument_86.insert(UnderlyingCashAmount_86.getString());
    FIX::UnderlyingCashType UnderlyingCashType_86("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_86);
    UnderlyingInstrument_86.insert(UnderlyingCashType_86.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_86;
    UnderlyingContractMultiplier_86.setString("10806501");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_86);
    UnderlyingInstrument_86.insert(UnderlyingContractMultiplier_86.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_86(1253593017);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_86);
    UnderlyingInstrument_86.insert(UnderlyingContractMultiplierUnit_86.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_86("COUNTRY_849635022");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingCountryOfIssue_86.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_86("LOCALMKTDATE_620355505");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_86);
    UnderlyingInstrument_86.insert(UnderlyingCouponPaymentDate_86.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_86;
    UnderlyingCouponRate_86.setString("7.050000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_86);
    UnderlyingInstrument_86.insert(UnderlyingCouponRate_86.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_86("STRING_801491612");
    noUnderlyings_0_1.set(UnderlyingCreditRating_86);
    UnderlyingInstrument_86.insert(UnderlyingCreditRating_86.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_86("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_86);
    UnderlyingInstrument_86.insert(UnderlyingCurrency_86.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_86;
    UnderlyingCurrentValue_86.setString("7136550");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_86);
    UnderlyingInstrument_86.insert(UnderlyingCurrentValue_86.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_86;
    UnderlyingDetachmentPoint_86.setString("35.730000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_86);
    UnderlyingInstrument_86.insert(UnderlyingDetachmentPoint_86.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_86;
    UnderlyingDirtyPrice_86.setString("17847030");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_86);
    UnderlyingInstrument_86.insert(UnderlyingDirtyPrice_86.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_86;
    UnderlyingEndPrice_86.setString("19308683");
    noUnderlyings_0_1.set(UnderlyingEndPrice_86);
    UnderlyingInstrument_86.insert(UnderlyingEndPrice_86.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_86;
    UnderlyingEndValue_86.setString("8051676");
    noUnderlyings_0_1.set(UnderlyingEndValue_86);
    UnderlyingInstrument_86.insert(UnderlyingEndValue_86.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_86(1823698853);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_86);
    UnderlyingInstrument_86.insert(UnderlyingExerciseStyle_86.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_86;
    UnderlyingFXRate_86.setString("6596236");
    noUnderlyings_0_1.set(UnderlyingFXRate_86);
    UnderlyingInstrument_86.insert(UnderlyingFXRate_86.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_86('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_86);
    UnderlyingInstrument_86.insert(UnderlyingFXRateCalc_86.getString());
    FIX::UnderlyingFactor UnderlyingFactor_86;
    UnderlyingFactor_86.setString("14257380");
    noUnderlyings_0_1.set(UnderlyingFactor_86);
    UnderlyingInstrument_86.insert(UnderlyingFactor_86.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_86(781703726);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_86);
    UnderlyingInstrument_86.insert(UnderlyingFlowScheduleType_86.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_86("STRING_1891817077");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_86);
    UnderlyingInstrument_86.insert(UnderlyingInstrRegistry_86.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_86("LOCALMKTDATE_551653208");
    noUnderlyings_0_1.set(UnderlyingIssueDate_86);
    UnderlyingInstrument_86.insert(UnderlyingIssueDate_86.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_86("STRING_1513087800");
    noUnderlyings_0_1.set(UnderlyingIssuer_86);
    UnderlyingInstrument_86.insert(UnderlyingIssuer_86.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_86("STRING_1707767013");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingLocaleOfIssue_86.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_86("LOCALMKTDATE_36269228");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityDate_86.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_86("MONTHYEAR_1200076850");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityMonthYear_86.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_86("TZTIMEONLY_482098595");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_86);
    UnderlyingInstrument_86.insert(UnderlyingMaturityTime_86.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_86;
    UnderlyingNotionalPercentageOutstanding_86.setString("87.230000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_86);
    UnderlyingInstrument_86.insert(UnderlyingNotionalPercentageOutstanding_86.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_86('5');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_86);
    UnderlyingInstrument_86.insert(UnderlyingOptAttribute_86.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_86;
    UnderlyingOriginalNotionalPercentageOutstanding_86.setString("97.530000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_86);
    UnderlyingInstrument_86.insert(UnderlyingOriginalNotionalPercentageOutstanding_86.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_86("STRING_1310457055");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_86);
    UnderlyingInstrument_86.insert(UnderlyingPriceUnitOfMeasure_86.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_86;
    UnderlyingPriceUnitOfMeasureQty_86.setString("12721856");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_86);
    UnderlyingInstrument_86.insert(UnderlyingPriceUnitOfMeasureQty_86.getString());
    FIX::UnderlyingProduct UnderlyingProduct_86(1989958821);
    noUnderlyings_0_1.set(UnderlyingProduct_86);
    UnderlyingInstrument_86.insert(UnderlyingProduct_86.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_86(243623517);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_86);
    UnderlyingInstrument_86.insert(UnderlyingPutOrCall_86.getString());
    FIX::UnderlyingPx UnderlyingPx_86;
    UnderlyingPx_86.setString("3782950");
    noUnderlyings_0_1.set(UnderlyingPx_86);
    UnderlyingInstrument_86.insert(UnderlyingPx_86.getString());
    FIX::UnderlyingQty UnderlyingQty_86;
    UnderlyingQty_86.setString("6921101");
    noUnderlyings_0_1.set(UnderlyingQty_86);
    UnderlyingInstrument_86.insert(UnderlyingQty_86.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_86("LOCALMKTDATE_863979022");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_86);
    UnderlyingInstrument_86.insert(UnderlyingRedemptionDate_86.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_86("STRING_697685746");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_86);
    UnderlyingInstrument_86.insert(UnderlyingRepoCollateralSecurityType_86.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_86;
    UnderlyingRepurchaseRate_86.setString("18.070000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_86);
    UnderlyingInstrument_86.insert(UnderlyingRepurchaseRate_86.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_86(1957291404);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_86);
    UnderlyingInstrument_86.insert(UnderlyingRepurchaseTerm_86.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_86("STRING_1084579859");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_86);
    UnderlyingInstrument_86.insert(UnderlyingRestructuringType_86.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_86("STRING_59773246");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityDesc_86.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_86("EXCHANGE_2029054978");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityExchange_86.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_86("STRING_721799295");
    noUnderlyings_0_1.set(UnderlyingSecurityID_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityID_86.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_86("STRING_1990641575");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityIDSource_86.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_86("STRING_686739000");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_86);
    UnderlyingInstrument_86.insert(UnderlyingSecuritySubType_86.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_86("STRING_398014500");
    noUnderlyings_0_1.set(UnderlyingSecurityType_86);
    UnderlyingInstrument_86.insert(UnderlyingSecurityType_86.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_86("STRING_502781570");
    noUnderlyings_0_1.set(UnderlyingSeniority_86);
    UnderlyingInstrument_86.insert(UnderlyingSeniority_86.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_86("STRING_1692736844");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_86);
    UnderlyingInstrument_86.insert(UnderlyingSettlMethod_86.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_86(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_86);
    UnderlyingInstrument_86.insert(UnderlyingSettlementType_86.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_86;
    UnderlyingStartValue_86.setString("12844852");
    noUnderlyings_0_1.set(UnderlyingStartValue_86);
    UnderlyingInstrument_86.insert(UnderlyingStartValue_86.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_86("STRING_1437070273");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_86);
    UnderlyingInstrument_86.insert(UnderlyingStateOrProvinceOfIssue_86.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_86("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_86);
    UnderlyingInstrument_86.insert(UnderlyingStrikeCurrency_86.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_86;
    UnderlyingStrikePrice_86.setString("9973536");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_86);
    UnderlyingInstrument_86.insert(UnderlyingStrikePrice_86.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_86("STRING_264191315");
    noUnderlyings_0_1.set(UnderlyingSymbol_86);
    UnderlyingInstrument_86.insert(UnderlyingSymbol_86.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_86("STRING_1850166300");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_86);
    UnderlyingInstrument_86.insert(UnderlyingSymbolSfx_86.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_86("STRING_1479452233");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_86);
    UnderlyingInstrument_86.insert(UnderlyingTimeUnit_86.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_86("STRING_1438940038");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_86);
    UnderlyingInstrument_86.insert(UnderlyingUnitOfMeasure_86.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_86;
    UnderlyingUnitOfMeasureQty_86.setString("2552286");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_86);
    UnderlyingInstrument_86.insert(UnderlyingUnitOfMeasureQty_86.getString());
    all_values.push_back(UnderlyingInstrument_86);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_171;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_171("STRING_601913446");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_171);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_171.insert(UnderlyingSecurityAltID_171.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_171("STRING_1527414320");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_171);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_171.insert(UnderlyingSecurityAltIDSource_171.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_171);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_172;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_172("STRING_1309903511");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_172);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_172.insert(UnderlyingSecurityAltID_172.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_172("STRING_845536963");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_172);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_172.insert(UnderlyingSecurityAltIDSource_172.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_172);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_154;
      FIX::UnderlyingStipType UnderlyingStipType_154("STRING_2002013706");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_154);
      UnderlyingStipulations_NoUnderlyingStips_154.insert(UnderlyingStipType_154.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_154("STRING_1709515985");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_154);
      UnderlyingStipulations_NoUnderlyingStips_154.insert(UnderlyingStipValue_154.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_154);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_155;
      FIX::UnderlyingStipType UnderlyingStipType_155("STRING_455911459");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_155);
      UnderlyingStipulations_NoUnderlyingStips_155.insert(UnderlyingStipType_155.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_155("STRING_1348131865");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_155);
      UnderlyingStipulations_NoUnderlyingStips_155.insert(UnderlyingStipValue_155.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_155);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_156;
      FIX::UnderlyingStipType UnderlyingStipType_156("STRING_1519323741");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_156);
      UnderlyingStipulations_NoUnderlyingStips_156.insert(UnderlyingStipType_156.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_156("STRING_1540491319");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_156);
      UnderlyingStipulations_NoUnderlyingStips_156.insert(UnderlyingStipValue_156.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_156);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_183;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_183("STRING_1400895071");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_183);
      UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyID_183.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_183('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_183);
      UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyIDSource_183.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_183(1251063039);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_183);
      UndlyInstrumentParties_NoUndlyInstrumentParties_183.insert(UnderlyingInstrumentPartyRole_183.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_183);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_350("STRING_512821466");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_350);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350.insert(UnderlyingInstrumentPartySubID_350.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_350(1753844610);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_350);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350.insert(UnderlyingInstrumentPartySubIDType_350.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_350);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
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
