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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinitionUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityDefinitionUpdateReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_21("LOCALMKTDATE_1520390459");
  msg.set(ClearingBusinessDate_21);
  SecurityDefinitionUpdateReport_0.insert(ClearingBusinessDate_21.getString());
  FIX::CorporateAction CorporateAction_8("MULTIPLECHARVALUE_A");
  msg.set(CorporateAction_8);
  SecurityDefinitionUpdateReport_0.insert(CorporateAction_8.getString());
  FIX::Currency Currency_61("CHF");
  msg.set(Currency_61);
  SecurityDefinitionUpdateReport_0.insert(Currency_61.getString());
  FIX::EncodedText EncodedText_77("DATA_234269282");
  msg.set(EncodedText_77);
  SecurityDefinitionUpdateReport_0.insert(EncodedText_77.getString());
  FIX::EncodedTextLen EncodedTextLen_77(677740957);
  msg.set(EncodedTextLen_77);
  SecurityDefinitionUpdateReport_0.insert(EncodedTextLen_77.getString());
  FIX::SecurityReportID SecurityReportID_2(1755503816);
  msg.set(SecurityReportID_2);
  SecurityDefinitionUpdateReport_0.insert(SecurityReportID_2.getString());
  FIX::SecurityReqID SecurityReqID_5("STRING_1408676565");
  msg.set(SecurityReqID_5);
  SecurityDefinitionUpdateReport_0.insert(SecurityReqID_5.getString());
  FIX::SecurityResponseID SecurityResponseID_3("STRING_409407080");
  msg.set(SecurityResponseID_3);
  SecurityDefinitionUpdateReport_0.insert(SecurityResponseID_3.getString());
  FIX::SecurityResponseType SecurityResponseType_1(5);
  msg.set(SecurityResponseType_1);
  SecurityDefinitionUpdateReport_0.insert(SecurityResponseType_1.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_1('M');
  msg.set(SecurityUpdateAction_1);
  SecurityDefinitionUpdateReport_0.insert(SecurityUpdateAction_1.getString());
  FIX::Text Text_77("STRING_1052128624");
  msg.set(Text_77);
  SecurityDefinitionUpdateReport_0.insert(Text_77.getString());
  FIX::TransactTime TransactTime_61(FIX::UTCTIMESTAMP(10, 47, 2, 11, 3, 2010));
  msg.set(TransactTime_61);
  SecurityDefinitionUpdateReport_0.insert(TransactTime_61.getString());
  all_values.push_back(SecurityDefinitionUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_13;
  FIX::ApplID ApplID_13("STRING_674503342");
  msg.set(ApplID_13);
  ApplicationSequenceControl_13.insert(ApplID_13.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_13(1036425637);
  msg.set(ApplLastSeqNum_13);
  ApplicationSequenceControl_13.insert(ApplLastSeqNum_13.getString());
  FIX::ApplResendFlag ApplResendFlag_13(true);
  msg.set(ApplResendFlag_13);
  ApplicationSequenceControl_13.insert(ApplResendFlag_13.getString());
  FIX::ApplSeqNum ApplSeqNum_13(879101757);
  msg.set(ApplSeqNum_13);
  ApplicationSequenceControl_13.insert(ApplSeqNum_13.getString());
  all_values.push_back(ApplicationSequenceControl_13);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_128;
    FIX::EncodedLegIssuer EncodedLegIssuer_128("DATA_822749086");
    noLegs_0_0.set(EncodedLegIssuer_128);
    InstrumentLeg_128.insert(EncodedLegIssuer_128.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_128(330760074);
    noLegs_0_0.set(EncodedLegIssuerLen_128);
    InstrumentLeg_128.insert(EncodedLegIssuerLen_128.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_128("DATA_1073591594");
    noLegs_0_0.set(EncodedLegSecurityDesc_128);
    InstrumentLeg_128.insert(EncodedLegSecurityDesc_128.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_128(1803711954);
    noLegs_0_0.set(EncodedLegSecurityDescLen_128);
    InstrumentLeg_128.insert(EncodedLegSecurityDescLen_128.getString());
    FIX::LegCFICode LegCFICode_128("STRING_1403972259");
    noLegs_0_0.set(LegCFICode_128);
    InstrumentLeg_128.insert(LegCFICode_128.getString());
    FIX::LegContractMultiplier LegContractMultiplier_128;
    LegContractMultiplier_128.setString("4852797");
    noLegs_0_0.set(LegContractMultiplier_128);
    InstrumentLeg_128.insert(LegContractMultiplier_128.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_128(657097702);
    noLegs_0_0.set(LegContractMultiplierUnit_128);
    InstrumentLeg_128.insert(LegContractMultiplierUnit_128.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_128("MONTHYEAR_776879070");
    noLegs_0_0.set(LegContractSettlMonth_128);
    InstrumentLeg_128.insert(LegContractSettlMonth_128.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_128("COUNTRY_650481298");
    noLegs_0_0.set(LegCountryOfIssue_128);
    InstrumentLeg_128.insert(LegCountryOfIssue_128.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_128("LOCALMKTDATE_107495977");
    noLegs_0_0.set(LegCouponPaymentDate_128);
    InstrumentLeg_128.insert(LegCouponPaymentDate_128.getString());
    FIX::LegCouponRate LegCouponRate_128;
    LegCouponRate_128.setString("80.210000");
    noLegs_0_0.set(LegCouponRate_128);
    InstrumentLeg_128.insert(LegCouponRate_128.getString());
    FIX::LegCreditRating LegCreditRating_128("STRING_884750581");
    noLegs_0_0.set(LegCreditRating_128);
    InstrumentLeg_128.insert(LegCreditRating_128.getString());
    FIX::LegCurrency LegCurrency_128("JPY");
    noLegs_0_0.set(LegCurrency_128);
    InstrumentLeg_128.insert(LegCurrency_128.getString());
    FIX::LegDatedDate LegDatedDate_128("LOCALMKTDATE_145943498");
    noLegs_0_0.set(LegDatedDate_128);
    InstrumentLeg_128.insert(LegDatedDate_128.getString());
    FIX::LegExerciseStyle LegExerciseStyle_128(1194644014);
    noLegs_0_0.set(LegExerciseStyle_128);
    InstrumentLeg_128.insert(LegExerciseStyle_128.getString());
    FIX::LegFactor LegFactor_128;
    LegFactor_128.setString("8302501");
    noLegs_0_0.set(LegFactor_128);
    InstrumentLeg_128.insert(LegFactor_128.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_128(1668058508);
    noLegs_0_0.set(LegFlowScheduleType_128);
    InstrumentLeg_128.insert(LegFlowScheduleType_128.getString());
    FIX::LegInstrRegistry LegInstrRegistry_128("STRING_99288990");
    noLegs_0_0.set(LegInstrRegistry_128);
    InstrumentLeg_128.insert(LegInstrRegistry_128.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_128("LOCALMKTDATE_1681097249");
    noLegs_0_0.set(LegInterestAccrualDate_128);
    InstrumentLeg_128.insert(LegInterestAccrualDate_128.getString());
    FIX::LegIssueDate LegIssueDate_128("LOCALMKTDATE_1115243782");
    noLegs_0_0.set(LegIssueDate_128);
    InstrumentLeg_128.insert(LegIssueDate_128.getString());
    FIX::LegIssuer LegIssuer_128("STRING_979305678");
    noLegs_0_0.set(LegIssuer_128);
    InstrumentLeg_128.insert(LegIssuer_128.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_128("STRING_393222263");
    noLegs_0_0.set(LegLocaleOfIssue_128);
    InstrumentLeg_128.insert(LegLocaleOfIssue_128.getString());
    FIX::LegMaturityDate LegMaturityDate_128("LOCALMKTDATE_1733360734");
    noLegs_0_0.set(LegMaturityDate_128);
    InstrumentLeg_128.insert(LegMaturityDate_128.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_128("MONTHYEAR_852002844");
    noLegs_0_0.set(LegMaturityMonthYear_128);
    InstrumentLeg_128.insert(LegMaturityMonthYear_128.getString());
    FIX::LegMaturityTime LegMaturityTime_128("TZTIMEONLY_1606159923");
    noLegs_0_0.set(LegMaturityTime_128);
    InstrumentLeg_128.insert(LegMaturityTime_128.getString());
    FIX::LegOptAttribute LegOptAttribute_128('2');
    noLegs_0_0.set(LegOptAttribute_128);
    InstrumentLeg_128.insert(LegOptAttribute_128.getString());
    FIX::LegOptionRatio LegOptionRatio_128;
    LegOptionRatio_128.setString("18884284");
    noLegs_0_0.set(LegOptionRatio_128);
    InstrumentLeg_128.insert(LegOptionRatio_128.getString());
    FIX::LegPool LegPool_128("STRING_251551645");
    noLegs_0_0.set(LegPool_128);
    InstrumentLeg_128.insert(LegPool_128.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_128("STRING_1139482185");
    noLegs_0_0.set(LegPriceUnitOfMeasure_128);
    InstrumentLeg_128.insert(LegPriceUnitOfMeasure_128.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_128;
    LegPriceUnitOfMeasureQty_128.setString("1499353");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_128);
    InstrumentLeg_128.insert(LegPriceUnitOfMeasureQty_128.getString());
    FIX::LegProduct LegProduct_128(1074300731);
    noLegs_0_0.set(LegProduct_128);
    InstrumentLeg_128.insert(LegProduct_128.getString());
    FIX::LegPutOrCall LegPutOrCall_128(1470242260);
    noLegs_0_0.set(LegPutOrCall_128);
    InstrumentLeg_128.insert(LegPutOrCall_128.getString());
    FIX::LegRatioQty LegRatioQty_128;
    LegRatioQty_128.setString("12235269");
    noLegs_0_0.set(LegRatioQty_128);
    InstrumentLeg_128.insert(LegRatioQty_128.getString());
    FIX::LegRedemptionDate LegRedemptionDate_128("LOCALMKTDATE_730529038");
    noLegs_0_0.set(LegRedemptionDate_128);
    InstrumentLeg_128.insert(LegRedemptionDate_128.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_128("STRING_726730871");
    noLegs_0_0.set(LegRepoCollateralSecurityType_128);
    InstrumentLeg_128.insert(LegRepoCollateralSecurityType_128.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_128;
    LegRepurchaseRate_128.setString("66.500000");
    noLegs_0_0.set(LegRepurchaseRate_128);
    InstrumentLeg_128.insert(LegRepurchaseRate_128.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_128(1387626740);
    noLegs_0_0.set(LegRepurchaseTerm_128);
    InstrumentLeg_128.insert(LegRepurchaseTerm_128.getString());
    FIX::LegSecurityDesc LegSecurityDesc_128("STRING_1503609942");
    noLegs_0_0.set(LegSecurityDesc_128);
    InstrumentLeg_128.insert(LegSecurityDesc_128.getString());
    FIX::LegSecurityExchange LegSecurityExchange_128("EXCHANGE_211804301");
    noLegs_0_0.set(LegSecurityExchange_128);
    InstrumentLeg_128.insert(LegSecurityExchange_128.getString());
    FIX::LegSecurityID LegSecurityID_128("STRING_1495122717");
    noLegs_0_0.set(LegSecurityID_128);
    InstrumentLeg_128.insert(LegSecurityID_128.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_128("STRING_924484315");
    noLegs_0_0.set(LegSecurityIDSource_128);
    InstrumentLeg_128.insert(LegSecurityIDSource_128.getString());
    FIX::LegSecuritySubType LegSecuritySubType_128("STRING_1096554882");
    noLegs_0_0.set(LegSecuritySubType_128);
    InstrumentLeg_128.insert(LegSecuritySubType_128.getString());
    FIX::LegSecurityType LegSecurityType_128("STRING_132876003");
    noLegs_0_0.set(LegSecurityType_128);
    InstrumentLeg_128.insert(LegSecurityType_128.getString());
    FIX::LegSide LegSide_128('2');
    noLegs_0_0.set(LegSide_128);
    InstrumentLeg_128.insert(LegSide_128.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_128("STRING_1242498380");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_128);
    InstrumentLeg_128.insert(LegStateOrProvinceOfIssue_128.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_128("JPY");
    noLegs_0_0.set(LegStrikeCurrency_128);
    InstrumentLeg_128.insert(LegStrikeCurrency_128.getString());
    FIX::LegStrikePrice LegStrikePrice_128;
    LegStrikePrice_128.setString("7630732");
    noLegs_0_0.set(LegStrikePrice_128);
    InstrumentLeg_128.insert(LegStrikePrice_128.getString());
    FIX::LegSymbol LegSymbol_128("STRING_1426809008");
    noLegs_0_0.set(LegSymbol_128);
    InstrumentLeg_128.insert(LegSymbol_128.getString());
    FIX::LegSymbolSfx LegSymbolSfx_128("STRING_317242645");
    noLegs_0_0.set(LegSymbolSfx_128);
    InstrumentLeg_128.insert(LegSymbolSfx_128.getString());
    FIX::LegTimeUnit LegTimeUnit_128("STRING_1878317023");
    noLegs_0_0.set(LegTimeUnit_128);
    InstrumentLeg_128.insert(LegTimeUnit_128.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_128("STRING_258631038");
    noLegs_0_0.set(LegUnitOfMeasure_128);
    InstrumentLeg_128.insert(LegUnitOfMeasure_128.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_128;
    LegUnitOfMeasureQty_128.setString("7104649");
    noLegs_0_0.set(LegUnitOfMeasureQty_128);
    InstrumentLeg_128.insert(LegUnitOfMeasureQty_128.getString());
    all_values.push_back(InstrumentLeg_128);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_245;
      FIX::LegSecurityAltID LegSecurityAltID_245("STRING_1110633882");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_245);
      LegSecAltIDGrp_NoLegSecurityAltID_245.insert(LegSecurityAltID_245.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_245("STRING_169141184");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_245);
      LegSecAltIDGrp_NoLegSecurityAltID_245.insert(LegSecurityAltIDSource_245.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_245);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_81;
  FIX::AttachmentPoint AttachmentPoint_81;
  AttachmentPoint_81.setString("45.370000");
  msg.set(AttachmentPoint_81);
  Instrument_81.insert(AttachmentPoint_81.getString());
  FIX::CFICode CFICode_81("STRING_851578716");
  msg.set(CFICode_81);
  Instrument_81.insert(CFICode_81.getString());
  FIX::CPProgram CPProgram_81(1);
  msg.set(CPProgram_81);
  Instrument_81.insert(CPProgram_81.getString());
  FIX::CPRegType CPRegType_81("STRING_716573075");
  msg.set(CPRegType_81);
  Instrument_81.insert(CPRegType_81.getString());
  FIX::CapPrice CapPrice_81;
  CapPrice_81.setString("10015140");
  msg.set(CapPrice_81);
  Instrument_81.insert(CapPrice_81.getString());
  FIX::ContractMultiplier ContractMultiplier_81;
  ContractMultiplier_81.setString("14949935");
  msg.set(ContractMultiplier_81);
  Instrument_81.insert(ContractMultiplier_81.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_81(1);
  msg.set(ContractMultiplierUnit_81);
  Instrument_81.insert(ContractMultiplierUnit_81.getString());
  FIX::ContractSettlMonth ContractSettlMonth_81("MONTHYEAR_77557367");
  msg.set(ContractSettlMonth_81);
  Instrument_81.insert(ContractSettlMonth_81.getString());
  FIX::CountryOfIssue CountryOfIssue_81("COUNTRY_78038951");
  msg.set(CountryOfIssue_81);
  Instrument_81.insert(CountryOfIssue_81.getString());
  FIX::CouponPaymentDate CouponPaymentDate_81("LOCALMKTDATE_766062558");
  msg.set(CouponPaymentDate_81);
  Instrument_81.insert(CouponPaymentDate_81.getString());
  FIX::CouponRate CouponRate_81;
  CouponRate_81.setString("40.170000");
  msg.set(CouponRate_81);
  Instrument_81.insert(CouponRate_81.getString());
  FIX::CreditRating CreditRating_81("STRING_1465665691");
  msg.set(CreditRating_81);
  Instrument_81.insert(CreditRating_81.getString());
  FIX::DatedDate DatedDate_81("LOCALMKTDATE_122188852");
  msg.set(DatedDate_81);
  Instrument_81.insert(DatedDate_81.getString());
  FIX::DetachmentPoint DetachmentPoint_81;
  DetachmentPoint_81.setString("83.180000");
  msg.set(DetachmentPoint_81);
  Instrument_81.insert(DetachmentPoint_81.getString());
  FIX::EncodedIssuer EncodedIssuer_81("DATA_813304761");
  msg.set(EncodedIssuer_81);
  Instrument_81.insert(EncodedIssuer_81.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_81(1046673168);
  msg.set(EncodedIssuerLen_81);
  Instrument_81.insert(EncodedIssuerLen_81.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_81("DATA_947239552");
  msg.set(EncodedSecurityDesc_81);
  Instrument_81.insert(EncodedSecurityDesc_81.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_81(946180764);
  msg.set(EncodedSecurityDescLen_81);
  Instrument_81.insert(EncodedSecurityDescLen_81.getString());
  FIX::ExerciseStyle ExerciseStyle_81(0);
  msg.set(ExerciseStyle_81);
  Instrument_81.insert(ExerciseStyle_81.getString());
  FIX::Factor Factor_81;
  Factor_81.setString("422542");
  msg.set(Factor_81);
  Instrument_81.insert(Factor_81.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_81(true);
  msg.set(FlexProductEligibilityIndicator_81);
  Instrument_81.insert(FlexProductEligibilityIndicator_81.getString());
  FIX::FlexibleIndicator FlexibleIndicator_81(false);
  msg.set(FlexibleIndicator_81);
  Instrument_81.insert(FlexibleIndicator_81.getString());
  FIX::FloorPrice FloorPrice_81;
  FloorPrice_81.setString("8053275");
  msg.set(FloorPrice_81);
  Instrument_81.insert(FloorPrice_81.getString());
  FIX::FlowScheduleType FlowScheduleType_81(3);
  msg.set(FlowScheduleType_81);
  Instrument_81.insert(FlowScheduleType_81.getString());
  FIX::InstrRegistry InstrRegistry_81("STRING_2100923714");
  msg.set(InstrRegistry_81);
  Instrument_81.insert(InstrRegistry_81.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_81('5');
  msg.set(InstrmtAssignmentMethod_81);
  Instrument_81.insert(InstrmtAssignmentMethod_81.getString());
  FIX::InterestAccrualDate InterestAccrualDate_81("LOCALMKTDATE_1811657181");
  msg.set(InterestAccrualDate_81);
  Instrument_81.insert(InterestAccrualDate_81.getString());
  FIX::IssueDate IssueDate_81("LOCALMKTDATE_663904975");
  msg.set(IssueDate_81);
  Instrument_81.insert(IssueDate_81.getString());
  FIX::Issuer Issuer_81("STRING_2000355009");
  msg.set(Issuer_81);
  Instrument_81.insert(Issuer_81.getString());
  FIX::ListMethod ListMethod_81(0);
  msg.set(ListMethod_81);
  Instrument_81.insert(ListMethod_81.getString());
  FIX::LocaleOfIssue LocaleOfIssue_81("STRING_833046159");
  msg.set(LocaleOfIssue_81);
  Instrument_81.insert(LocaleOfIssue_81.getString());
  FIX::MaturityDate MaturityDate_81("LOCALMKTDATE_1577445899");
  msg.set(MaturityDate_81);
  Instrument_81.insert(MaturityDate_81.getString());
  FIX::MaturityMonthYear MaturityMonthYear_81("MONTHYEAR_1626386132");
  msg.set(MaturityMonthYear_81);
  Instrument_81.insert(MaturityMonthYear_81.getString());
  FIX::MaturityTime MaturityTime_81("TZTIMEONLY_1253738988");
  msg.set(MaturityTime_81);
  Instrument_81.insert(MaturityTime_81.getString());
  FIX::MinPriceIncrement MinPriceIncrement_81;
  MinPriceIncrement_81.setString("1465353");
  msg.set(MinPriceIncrement_81);
  Instrument_81.insert(MinPriceIncrement_81.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_81;
  MinPriceIncrementAmount_81.setString("4804165");
  msg.set(MinPriceIncrementAmount_81);
  Instrument_81.insert(MinPriceIncrementAmount_81.getString());
  FIX::NTPositionLimit NTPositionLimit_81(601248901);
  msg.set(NTPositionLimit_81);
  Instrument_81.insert(NTPositionLimit_81.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_81;
  NotionalPercentageOutstanding_81.setString("70.130000");
  msg.set(NotionalPercentageOutstanding_81);
  Instrument_81.insert(NotionalPercentageOutstanding_81.getString());
  FIX::OptAttribute OptAttribute_81('5');
  msg.set(OptAttribute_81);
  Instrument_81.insert(OptAttribute_81.getString());
  FIX::OptPayoutAmount OptPayoutAmount_81;
  OptPayoutAmount_81.setString("6792878");
  msg.set(OptPayoutAmount_81);
  Instrument_81.insert(OptPayoutAmount_81.getString());
  FIX::OptPayoutType OptPayoutType_81(1);
  msg.set(OptPayoutType_81);
  Instrument_81.insert(OptPayoutType_81.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_81;
  OriginalNotionalPercentageOutstanding_81.setString("42.890000");
  msg.set(OriginalNotionalPercentageOutstanding_81);
  Instrument_81.insert(OriginalNotionalPercentageOutstanding_81.getString());
  FIX::Pool Pool_81("STRING_2144953544");
  msg.set(Pool_81);
  Instrument_81.insert(Pool_81.getString());
  FIX::PositionLimit PositionLimit_81(1074118424);
  msg.set(PositionLimit_81);
  Instrument_81.insert(PositionLimit_81.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_81("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_81);
  Instrument_81.insert(PriceQuoteMethod_81.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_81("STRING_810774657");
  msg.set(PriceUnitOfMeasure_81);
  Instrument_81.insert(PriceUnitOfMeasure_81.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_81;
  PriceUnitOfMeasureQty_81.setString("21207915");
  msg.set(PriceUnitOfMeasureQty_81);
  Instrument_81.insert(PriceUnitOfMeasureQty_81.getString());
  FIX::Product Product_83(1);
  msg.set(Product_83);
  Instrument_81.insert(Product_83.getString());
  FIX::ProductComplex ProductComplex_81("STRING_1756955421");
  msg.set(ProductComplex_81);
  Instrument_81.insert(ProductComplex_81.getString());
  FIX::PutOrCall PutOrCall_81(1);
  msg.set(PutOrCall_81);
  Instrument_81.insert(PutOrCall_81.getString());
  FIX::RedemptionDate RedemptionDate_81("LOCALMKTDATE_1037032797");
  msg.set(RedemptionDate_81);
  Instrument_81.insert(RedemptionDate_81.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_81("STRING_1883172556");
  msg.set(RepoCollateralSecurityType_81);
  Instrument_81.insert(RepoCollateralSecurityType_81.getString());
  FIX::RepurchaseRate RepurchaseRate_81;
  RepurchaseRate_81.setString("73.910000");
  msg.set(RepurchaseRate_81);
  Instrument_81.insert(RepurchaseRate_81.getString());
  FIX::RepurchaseTerm RepurchaseTerm_81(1842360322);
  msg.set(RepurchaseTerm_81);
  Instrument_81.insert(RepurchaseTerm_81.getString());
  FIX::RestructuringType RestructuringType_81("STRING_XR");
  msg.set(RestructuringType_81);
  Instrument_81.insert(RestructuringType_81.getString());
  FIX::SecurityDesc SecurityDesc_81("STRING_562997457");
  msg.set(SecurityDesc_81);
  Instrument_81.insert(SecurityDesc_81.getString());
  FIX::SecurityExchange SecurityExchange_81("EXCHANGE_231037575");
  msg.set(SecurityExchange_81);
  Instrument_81.insert(SecurityExchange_81.getString());
  FIX::SecurityGroup SecurityGroup_81("STRING_952888584");
  msg.set(SecurityGroup_81);
  Instrument_81.insert(SecurityGroup_81.getString());
  FIX::SecurityID SecurityID_81("STRING_1226902432");
  msg.set(SecurityID_81);
  Instrument_81.insert(SecurityID_81.getString());
  FIX::SecurityIDSource SecurityIDSource_81("STRING_D");
  msg.set(SecurityIDSource_81);
  Instrument_81.insert(SecurityIDSource_81.getString());
  FIX::SecurityStatus SecurityStatus_81("STRING_1");
  msg.set(SecurityStatus_81);
  Instrument_81.insert(SecurityStatus_81.getString());
  FIX::SecuritySubType SecuritySubType_82("STRING_2059948591");
  msg.set(SecuritySubType_82);
  Instrument_81.insert(SecuritySubType_82.getString());
  FIX::SecurityType SecurityType_83("STRING_SECPLEDGE");
  msg.set(SecurityType_83);
  Instrument_81.insert(SecurityType_83.getString());
  FIX::Seniority Seniority_81("STRING_SB");
  msg.set(Seniority_81);
  Instrument_81.insert(Seniority_81.getString());
  FIX::SettlMethod SettlMethod_81('C');
  msg.set(SettlMethod_81);
  Instrument_81.insert(SettlMethod_81.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_81("STRING_1807890161");
  msg.set(SettleOnOpenFlag_81);
  Instrument_81.insert(SettleOnOpenFlag_81.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_81("STRING_1687015037");
  msg.set(StateOrProvinceOfIssue_81);
  Instrument_81.insert(StateOrProvinceOfIssue_81.getString());
  FIX::StrikeCurrency StrikeCurrency_81("GBP");
  msg.set(StrikeCurrency_81);
  Instrument_81.insert(StrikeCurrency_81.getString());
  FIX::StrikeMultiplier StrikeMultiplier_81;
  StrikeMultiplier_81.setString("975053");
  msg.set(StrikeMultiplier_81);
  Instrument_81.insert(StrikeMultiplier_81.getString());
  FIX::StrikePrice StrikePrice_81;
  StrikePrice_81.setString("2992570");
  msg.set(StrikePrice_81);
  Instrument_81.insert(StrikePrice_81.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_81(4);
  msg.set(StrikePriceBoundaryMethod_81);
  Instrument_81.insert(StrikePriceBoundaryMethod_81.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_81;
  StrikePriceBoundaryPrecision_81.setString("95.970000");
  msg.set(StrikePriceBoundaryPrecision_81);
  Instrument_81.insert(StrikePriceBoundaryPrecision_81.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_81(3);
  msg.set(StrikePriceDeterminationMethod_81);
  Instrument_81.insert(StrikePriceDeterminationMethod_81.getString());
  FIX::StrikeValue StrikeValue_81;
  StrikeValue_81.setString("18723215");
  msg.set(StrikeValue_81);
  Instrument_81.insert(StrikeValue_81.getString());
  FIX::Symbol Symbol_81("STRING_341898557");
  msg.set(Symbol_81);
  Instrument_81.insert(Symbol_81.getString());
  FIX::SymbolSfx SymbolSfx_81("STRING_WI");
  msg.set(SymbolSfx_81);
  Instrument_81.insert(SymbolSfx_81.getString());
  FIX::TimeUnit TimeUnit_81("STRING_S");
  msg.set(TimeUnit_81);
  Instrument_81.insert(TimeUnit_81.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_81(2);
  msg.set(UnderlyingPriceDeterminationMethod_81);
  Instrument_81.insert(UnderlyingPriceDeterminationMethod_81.getString());
  FIX::UnitOfMeasure UnitOfMeasure_81("STRING_MWh");
  msg.set(UnitOfMeasure_81);
  Instrument_81.insert(UnitOfMeasure_81.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_81;
  UnitOfMeasureQty_81.setString("6715057");
  msg.set(UnitOfMeasureQty_81);
  Instrument_81.insert(UnitOfMeasureQty_81.getString());
  FIX::ValuationMethod ValuationMethod_81("STRING_CDS");
  msg.set(ValuationMethod_81);
  Instrument_81.insert(ValuationMethod_81.getString());
  all_values.push_back(Instrument_81);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_153;
    FIX::ComplexEventCondition ComplexEventCondition_153(1);
    noComplexEvents_0_0.set(ComplexEventCondition_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventCondition_153.getString());
    FIX::ComplexEventPrice ComplexEventPrice_153;
    ComplexEventPrice_153.setString("20685865");
    noComplexEvents_0_0.set(ComplexEventPrice_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventPrice_153.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_153(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceBoundaryMethod_153.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_153;
    ComplexEventPriceBoundaryPrecision_153.setString("6.360000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceBoundaryPrecision_153.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_153(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceTimeType_153.getString());
    FIX::ComplexEventType ComplexEventType_153(5);
    noComplexEvents_0_0.set(ComplexEventType_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexEventType_153.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_153;
    ComplexOptPayoutAmount_153.setString("9234794");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_153);
    ComplexEvents_NoComplexEvents_153.insert(ComplexOptPayoutAmount_153.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_153);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_313;
      FIX::ComplexEventEndDate ComplexEventEndDate_313(FIX::UTCTIMESTAMP(4, 59, 37, 8, 10, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_313);
      ComplexEventDates_NoComplexEventDates_313.insert(ComplexEventEndDate_313.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_313(FIX::UTCTIMESTAMP(15, 14, 39, 1, 9, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_313);
      ComplexEventDates_NoComplexEventDates_313.insert(ComplexEventStartDate_313.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_313);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_629;
        FIX::ComplexEventEndTime ComplexEventEndTime_629(FIX::UTCTIMEONLY(4, 9, 50));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_629);
        ComplexEventTimes_NoComplexEventTimes_629.insert(ComplexEventEndTime_629.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_629(FIX::UTCTIMEONLY(9, 48, 25));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_629);
        ComplexEventTimes_NoComplexEventTimes_629.insert(ComplexEventStartTime_629.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_629);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_630;
        FIX::ComplexEventEndTime ComplexEventEndTime_630(FIX::UTCTIMEONLY(0, 49, 55));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_630);
        ComplexEventTimes_NoComplexEventTimes_630.insert(ComplexEventEndTime_630.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_630(FIX::UTCTIMEONLY(9, 36, 12));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_630);
        ComplexEventTimes_NoComplexEventTimes_630.insert(ComplexEventStartTime_630.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_630);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_631;
        FIX::ComplexEventEndTime ComplexEventEndTime_631(FIX::UTCTIMEONLY(8, 3, 50));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_631);
        ComplexEventTimes_NoComplexEventTimes_631.insert(ComplexEventEndTime_631.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_631(FIX::UTCTIMEONLY(16, 28, 53));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_631);
        ComplexEventTimes_NoComplexEventTimes_631.insert(ComplexEventStartTime_631.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_631);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_314;
      FIX::ComplexEventEndDate ComplexEventEndDate_314(FIX::UTCTIMESTAMP(7, 33, 37, 11, 11, 2005));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_314);
      ComplexEventDates_NoComplexEventDates_314.insert(ComplexEventEndDate_314.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_314(FIX::UTCTIMESTAMP(19, 42, 38, 0, 4, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_314);
      ComplexEventDates_NoComplexEventDates_314.insert(ComplexEventStartDate_314.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_314);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_632;
        FIX::ComplexEventEndTime ComplexEventEndTime_632(FIX::UTCTIMEONLY(18, 26, 46));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_632);
        ComplexEventTimes_NoComplexEventTimes_632.insert(ComplexEventEndTime_632.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_632(FIX::UTCTIMEONLY(11, 14, 50));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_632);
        ComplexEventTimes_NoComplexEventTimes_632.insert(ComplexEventStartTime_632.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_632);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_315;
      FIX::ComplexEventEndDate ComplexEventEndDate_315(FIX::UTCTIMESTAMP(2, 54, 43, 10, 3, 2000));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_315);
      ComplexEventDates_NoComplexEventDates_315.insert(ComplexEventEndDate_315.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_315(FIX::UTCTIMESTAMP(14, 47, 37, 16, 7, 2003));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_315);
      ComplexEventDates_NoComplexEventDates_315.insert(ComplexEventStartDate_315.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_315);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_633;
        FIX::ComplexEventEndTime ComplexEventEndTime_633(FIX::UTCTIMEONLY(22, 59, 12));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_633);
        ComplexEventTimes_NoComplexEventTimes_633.insert(ComplexEventEndTime_633.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_633(FIX::UTCTIMEONLY(3, 30, 32));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_633);
        ComplexEventTimes_NoComplexEventTimes_633.insert(ComplexEventStartTime_633.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_633);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_634;
        FIX::ComplexEventEndTime ComplexEventEndTime_634(FIX::UTCTIMEONLY(0, 50, 12));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_634);
        ComplexEventTimes_NoComplexEventTimes_634.insert(ComplexEventEndTime_634.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_634(FIX::UTCTIMEONLY(14, 27, 17));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_634);
        ComplexEventTimes_NoComplexEventTimes_634.insert(ComplexEventStartTime_634.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_634);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
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
    multiset<string> EvntGrp_NoEvents_162;
    FIX::EventDate EventDate_162("LOCALMKTDATE_2139208085");
    noEvents_0_0.set(EventDate_162);
    EvntGrp_NoEvents_162.insert(EventDate_162.getString());
    FIX::EventPx EventPx_162;
    EventPx_162.setString("15298116");
    noEvents_0_0.set(EventPx_162);
    EvntGrp_NoEvents_162.insert(EventPx_162.getString());
    FIX::EventText EventText_162("STRING_152046");
    noEvents_0_0.set(EventText_162);
    EvntGrp_NoEvents_162.insert(EventText_162.getString());
    FIX::EventTime EventTime_162(FIX::UTCTIMESTAMP(18, 18, 28, 20, 10, 2003));
    noEvents_0_0.set(EventTime_162);
    EvntGrp_NoEvents_162.insert(EventTime_162.getString());
    FIX::EventType EventType_162(17);
    noEvents_0_0.set(EventType_162);
    EvntGrp_NoEvents_162.insert(EventType_162.getString());
    all_values.push_back(EvntGrp_NoEvents_162);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_163;
    FIX::EventDate EventDate_163("LOCALMKTDATE_490026583");
    noEvents_0_1.set(EventDate_163);
    EvntGrp_NoEvents_163.insert(EventDate_163.getString());
    FIX::EventPx EventPx_163;
    EventPx_163.setString("10660494");
    noEvents_0_1.set(EventPx_163);
    EvntGrp_NoEvents_163.insert(EventPx_163.getString());
    FIX::EventText EventText_163("STRING_1542894453");
    noEvents_0_1.set(EventText_163);
    EvntGrp_NoEvents_163.insert(EventText_163.getString());
    FIX::EventTime EventTime_163(FIX::UTCTIMESTAMP(3, 25, 29, 5, 9, 2017));
    noEvents_0_1.set(EventTime_163);
    EvntGrp_NoEvents_163.insert(EventTime_163.getString());
    FIX::EventType EventType_163(2);
    noEvents_0_1.set(EventType_163);
    EvntGrp_NoEvents_163.insert(EventType_163.getString());
    all_values.push_back(EvntGrp_NoEvents_163);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_166;
    FIX::InstrumentPartyID InstrumentPartyID_166("STRING_2146001808");
    noInstrumentParties_0_0.set(InstrumentPartyID_166);
    InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyID_166.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_166('6');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_166);
    InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyIDSource_166.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_166(875156274);
    noInstrumentParties_0_0.set(InstrumentPartyRole_166);
    InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyRole_166.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_166);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349;
      FIX::InstrumentPartySubID InstrumentPartySubID_349("STRING_2039528790");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_349);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349.insert(InstrumentPartySubID_349.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_349(605297293);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_349);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349.insert(InstrumentPartySubIDType_349.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350;
      FIX::InstrumentPartySubID InstrumentPartySubID_350("STRING_136485676");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_350);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350.insert(InstrumentPartySubID_350.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_350(743894573);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_350);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350.insert(InstrumentPartySubIDType_350.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_180;
    FIX::SecurityAltID SecurityAltID_180("STRING_1666297280");
    noSecurityAltID_0_0.set(SecurityAltID_180);
    SecAltIDGrp_NoSecurityAltID_180.insert(SecurityAltID_180.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_180("STRING_744046619");
    noSecurityAltID_0_0.set(SecurityAltIDSource_180);
    SecAltIDGrp_NoSecurityAltID_180.insert(SecurityAltIDSource_180.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_180);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_181;
    FIX::SecurityAltID SecurityAltID_181("STRING_1443867747");
    noSecurityAltID_0_1.set(SecurityAltID_181);
    SecAltIDGrp_NoSecurityAltID_181.insert(SecurityAltID_181.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_181("STRING_1443209730");
    noSecurityAltID_0_1.set(SecurityAltIDSource_181);
    SecAltIDGrp_NoSecurityAltID_181.insert(SecurityAltIDSource_181.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_181);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_182;
    FIX::SecurityAltID SecurityAltID_182("STRING_419677150");
    noSecurityAltID_0_2.set(SecurityAltID_182);
    SecAltIDGrp_NoSecurityAltID_182.insert(SecurityAltID_182.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_182("STRING_1066523687");
    noSecurityAltID_0_2.set(SecurityAltIDSource_182);
    SecAltIDGrp_NoSecurityAltID_182.insert(SecurityAltIDSource_182.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_182);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_162;
  FIX::SecurityXML SecurityXML_163("XMLDATA_1363155354");
  msg.set(SecurityXML_163);
  FIX::SecurityXMLLen SecurityXMLLen_81(1268591827);
  msg.set(SecurityXMLLen_81);
  FIX::SecurityXMLSchema SecurityXMLSchema_81("STRING_1454536064");
  msg.set(SecurityXMLSchema_81);
  SecurityXML_162.insert(SecurityXMLSchema_81.getString());
  all_values.push_back(SecurityXML_162);

  // InstrumentExtension
  multiset<string> InstrumentExtension_11;
  FIX::DeliveryForm DeliveryForm_11(2);
  msg.set(DeliveryForm_11);
  InstrumentExtension_11.insert(DeliveryForm_11.getString());
  FIX::PctAtRisk PctAtRisk_11;
  PctAtRisk_11.setString("84.110000");
  msg.set(PctAtRisk_11);
  InstrumentExtension_11.insert(PctAtRisk_11.getString());
  all_values.push_back(InstrumentExtension_11);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_24;
    FIX::InstrAttribType InstrAttribType_24(29);
    noInstrAttrib_0_0.set(InstrAttribType_24);
    AttrbGrp_NoInstrAttrib_24.insert(InstrAttribType_24.getString());
    FIX::InstrAttribValue InstrAttribValue_24("STRING_1964472608");
    noInstrAttrib_0_0.set(InstrAttribValue_24);
    AttrbGrp_NoInstrAttrib_24.insert(InstrAttribValue_24.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_24);

    msg.addGroup(noInstrAttrib_0_0);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_5;
    FIX::MarketID MarketID_15("EXCHANGE_757552853");
    noMarketSegments_0_0.set(MarketID_15);
    MarketSegmentGrp_NoMarketSegments_5.insert(MarketID_15.getString());
    FIX::MarketSegmentID MarketSegmentID_15("STRING_609467850");
    noMarketSegments_0_0.set(MarketSegmentID_15);
    MarketSegmentGrp_NoMarketSegments_5.insert(MarketSegmentID_15.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_5);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_7;
    FIX::ExpirationCycle ExpirationCycle_8(0);
    noMarketSegments_0_0.set(ExpirationCycle_8);
    BaseTradingRules_7.insert(ExpirationCycle_8.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_7(1);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_7);
    BaseTradingRules_7.insert(ImpliedMarketIndicator_7.getString());
    FIX::MaxPriceVariation MaxPriceVariation_7;
    MaxPriceVariation_7.setString("17341924");
    noMarketSegments_0_0.set(MaxPriceVariation_7);
    BaseTradingRules_7.insert(MaxPriceVariation_7.getString());
    FIX::MaxTradeVol MaxTradeVol_7;
    MaxTradeVol_7.setString("5583123");
    noMarketSegments_0_0.set(MaxTradeVol_7);
    BaseTradingRules_7.insert(MaxTradeVol_7.getString());
    FIX::MinTradeVol MinTradeVol_7;
    MinTradeVol_7.setString("15053528");
    noMarketSegments_0_0.set(MinTradeVol_7);
    BaseTradingRules_7.insert(MinTradeVol_7.getString());
    FIX::MultilegModel MultilegModel_9(0);
    noMarketSegments_0_0.set(MultilegModel_9);
    BaseTradingRules_7.insert(MultilegModel_9.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_9(2);
    noMarketSegments_0_0.set(MultilegPriceMethod_9);
    BaseTradingRules_7.insert(MultilegPriceMethod_9.getString());
    FIX::PriceType PriceType_38(7);
    noMarketSegments_0_0.set(PriceType_38);
    BaseTradingRules_7.insert(PriceType_38.getString());
    FIX::RoundLot RoundLot_7;
    RoundLot_7.setString("2421211");
    noMarketSegments_0_0.set(RoundLot_7);
    BaseTradingRules_7.insert(RoundLot_7.getString());
    FIX::TradingCurrency TradingCurrency_7("EUR");
    noMarketSegments_0_0.set(TradingCurrency_7);
    BaseTradingRules_7.insert(TradingCurrency_7.getString());
    all_values.push_back(BaseTradingRules_7);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_13;
      FIX::LotType LotType_16('2');
      noLotTypeRules_0_1_0.set(LotType_16);
      LotTypeRules_NoLotTypeRules_13.insert(LotType_16.getString());
      FIX::MinLotSize MinLotSize_13;
      MinLotSize_13.setString("14353444");
      noLotTypeRules_0_1_0.set(MinLotSize_13);
      LotTypeRules_NoLotTypeRules_13.insert(MinLotSize_13.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_13);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_14;
      FIX::LotType LotType_17('2');
      noLotTypeRules_0_1_1.set(LotType_17);
      LotTypeRules_NoLotTypeRules_14.insert(LotType_17.getString());
      FIX::MinLotSize MinLotSize_14;
      MinLotSize_14.setString("4727456");
      noLotTypeRules_0_1_1.set(MinLotSize_14);
      LotTypeRules_NoLotTypeRules_14.insert(MinLotSize_14.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_14);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_7;
    FIX::HighLimitPrice HighLimitPrice_7;
    HighLimitPrice_7.setString("7317285");
    noMarketSegments_0_0.set(HighLimitPrice_7);
    PriceLimits_7.insert(HighLimitPrice_7.getString());
    FIX::LowLimitPrice LowLimitPrice_7;
    LowLimitPrice_7.setString("13406301");
    noMarketSegments_0_0.set(LowLimitPrice_7);
    PriceLimits_7.insert(LowLimitPrice_7.getString());
    FIX::PriceLimitType PriceLimitType_7(1);
    noMarketSegments_0_0.set(PriceLimitType_7);
    PriceLimits_7.insert(PriceLimitType_7.getString());
    FIX::TradingReferencePrice TradingReferencePrice_7;
    TradingReferencePrice_7.setString("17982522");
    noMarketSegments_0_0.set(TradingReferencePrice_7);
    PriceLimits_7.insert(TradingReferencePrice_7.getString());
    all_values.push_back(PriceLimits_7);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_11;
      FIX::EndTickPriceRange EndTickPriceRange_11;
      EndTickPriceRange_11.setString("135309");
      noTickRules_0_1_0.set(EndTickPriceRange_11);
      TickRules_NoTickRules_11.insert(EndTickPriceRange_11.getString());
      FIX::StartTickPriceRange StartTickPriceRange_11;
      StartTickPriceRange_11.setString("11053046");
      noTickRules_0_1_0.set(StartTickPriceRange_11);
      TickRules_NoTickRules_11.insert(StartTickPriceRange_11.getString());
      FIX::TickIncrement TickIncrement_11;
      TickIncrement_11.setString("17856884");
      noTickRules_0_1_0.set(TickIncrement_11);
      TickRules_NoTickRules_11.insert(TickIncrement_11.getString());
      FIX::TickRuleType TickRuleType_11(1);
      noTickRules_0_1_0.set(TickRuleType_11);
      TickRules_NoTickRules_11.insert(TickRuleType_11.getString());
      all_values.push_back(TickRules_NoTickRules_11);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_12;
      FIX::EndTickPriceRange EndTickPriceRange_12;
      EndTickPriceRange_12.setString("14784065");
      noTickRules_0_1_1.set(EndTickPriceRange_12);
      TickRules_NoTickRules_12.insert(EndTickPriceRange_12.getString());
      FIX::StartTickPriceRange StartTickPriceRange_12;
      StartTickPriceRange_12.setString("2630021");
      noTickRules_0_1_1.set(StartTickPriceRange_12);
      TickRules_NoTickRules_12.insert(StartTickPriceRange_12.getString());
      FIX::TickIncrement TickIncrement_12;
      TickIncrement_12.setString("15891383");
      noTickRules_0_1_1.set(TickIncrement_12);
      TickRules_NoTickRules_12.insert(TickIncrement_12.getString());
      FIX::TickRuleType TickRuleType_12(0);
      noTickRules_0_1_1.set(TickRuleType_12);
      TickRules_NoTickRules_12.insert(TickRuleType_12.getString());
      all_values.push_back(TickRules_NoTickRules_12);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_13;
      FIX::EndTickPriceRange EndTickPriceRange_13;
      EndTickPriceRange_13.setString("10205550");
      noTickRules_0_1_2.set(EndTickPriceRange_13);
      TickRules_NoTickRules_13.insert(EndTickPriceRange_13.getString());
      FIX::StartTickPriceRange StartTickPriceRange_13;
      StartTickPriceRange_13.setString("511225");
      noTickRules_0_1_2.set(StartTickPriceRange_13);
      TickRules_NoTickRules_13.insert(StartTickPriceRange_13.getString());
      FIX::TickIncrement TickIncrement_13;
      TickIncrement_13.setString("4516148");
      noTickRules_0_1_2.set(TickIncrement_13);
      TickRules_NoTickRules_13.insert(TickIncrement_13.getString());
      FIX::TickRuleType TickRuleType_13(2);
      noTickRules_0_1_2.set(TickRuleType_13);
      TickRules_NoTickRules_13.insert(TickRuleType_13.getString());
      all_values.push_back(TickRules_NoTickRules_13);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_9;
      FIX::NestedInstrAttribType NestedInstrAttribType_9(1009927144);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_9);
      NestedInstrumentAttribute_NoNestedInstrAttrib_9.insert(NestedInstrAttribType_9.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_9("STRING_1216051847");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_9);
      NestedInstrumentAttribute_NoNestedInstrAttrib_9.insert(NestedInstrAttribValue_9.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_9);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_10;
      FIX::NestedInstrAttribType NestedInstrAttribType_10(1370541915);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_10);
      NestedInstrumentAttribute_NoNestedInstrAttrib_10.insert(NestedInstrAttribType_10.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_10("STRING_102686410");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_10);
      NestedInstrumentAttribute_NoNestedInstrAttrib_10.insert(NestedInstrAttribValue_10.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_10);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_9;
      FIX::TradingSessionID TradingSessionID_77("STRING_6");
      noTradingSessionRules_0_1_0.set(TradingSessionID_77);
      TradingSessionRulesGrp_NoTradingSessionRules_9.insert(TradingSessionID_77.getString());
      FIX::TradingSessionSubID TradingSessionSubID_77("STRING_7");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_77);
      TradingSessionRulesGrp_NoTradingSessionRules_9.insert(TradingSessionSubID_77.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_9);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_19;
        FIX::ExecInstValue ExecInstValue_19('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_19);
        ExecInstRules_NoExecInstRules_19.insert(ExecInstValue_19.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_19);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_20;
        FIX::ExecInstValue ExecInstValue_20('9');
        noExecInstRules_0_0_2_1.set(ExecInstValue_20);
        ExecInstRules_NoExecInstRules_20.insert(ExecInstValue_20.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_20);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_21;
        FIX::ExecInstValue ExecInstValue_21('1');
        noExecInstRules_0_0_2_2.set(ExecInstValue_21);
        ExecInstRules_NoExecInstRules_21.insert(ExecInstValue_21.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_21);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_21;
        FIX::MDBookType MDBookType_23(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_23);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MDBookType_23.getString());
        FIX::MDFeedType MDFeedType_23("STRING_159505793");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_23);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MDFeedType_23.getString());
        FIX::MarketDepth MarketDepth_24(1081836804);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_24);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MarketDepth_24.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_21);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_22;
        FIX::MDBookType MDBookType_24(2);
        noMDFeedTypes_0_0_2_1.set(MDBookType_24);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MDBookType_24.getString());
        FIX::MDFeedType MDFeedType_24("STRING_1957758053");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_24);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MDFeedType_24.getString());
        FIX::MarketDepth MarketDepth_25(1638138678);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_25);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MarketDepth_25.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_22);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_21;
        FIX::MatchAlgorithm MatchAlgorithm_21("STRING_915579082");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_21);
        MatchRules_NoMatchRules_21.insert(MatchAlgorithm_21.getString());
        FIX::MatchType MatchType_26("STRING_M3");
        noMatchRules_0_0_2_0.set(MatchType_26);
        MatchRules_NoMatchRules_21.insert(MatchType_26.getString());
        all_values.push_back(MatchRules_NoMatchRules_21);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_22;
        FIX::MatchAlgorithm MatchAlgorithm_22("STRING_1967038424");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_22);
        MatchRules_NoMatchRules_22.insert(MatchAlgorithm_22.getString());
        FIX::MatchType MatchType_27("STRING_A4");
        noMatchRules_0_0_2_1.set(MatchType_27);
        MatchRules_NoMatchRules_22.insert(MatchType_27.getString());
        all_values.push_back(MatchRules_NoMatchRules_22);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_23;
        FIX::MatchAlgorithm MatchAlgorithm_23("STRING_1539345623");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_23);
        MatchRules_NoMatchRules_23.insert(MatchAlgorithm_23.getString());
        FIX::MatchType MatchType_28("STRING_1");
        noMatchRules_0_0_2_2.set(MatchType_28);
        MatchRules_NoMatchRules_23.insert(MatchType_28.getString());
        all_values.push_back(MatchRules_NoMatchRules_23);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_25;
        FIX::OrdType OrdType_54('3');
        noOrdTypeRules_0_0_2_0.set(OrdType_54);
        OrdTypeRules_NoOrdTypeRules_25.insert(OrdType_54.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_25);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_26;
        FIX::OrdType OrdType_55('7');
        noOrdTypeRules_0_0_2_1.set(OrdType_55);
        OrdTypeRules_NoOrdTypeRules_26.insert(OrdType_55.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_26);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_27;
        FIX::OrdType OrdType_56('I');
        noOrdTypeRules_0_0_2_2.set(OrdType_56);
        OrdTypeRules_NoOrdTypeRules_27.insert(OrdType_56.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_27);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_21;
        FIX::TimeInForce TimeInForce_32('8');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_32);
        TimeInForceRules_NoTimeInForceRules_21.insert(TimeInForce_32.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_21);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_10;
      FIX::TradingSessionID TradingSessionID_78("STRING_4");
      noTradingSessionRules_0_1_1.set(TradingSessionID_78);
      TradingSessionRulesGrp_NoTradingSessionRules_10.insert(TradingSessionID_78.getString());
      FIX::TradingSessionSubID TradingSessionSubID_78("STRING_7");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_78);
      TradingSessionRulesGrp_NoTradingSessionRules_10.insert(TradingSessionSubID_78.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_10);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_22;
        FIX::ExecInstValue ExecInstValue_22('5');
        noExecInstRules_0_1_2_0.set(ExecInstValue_22);
        ExecInstRules_NoExecInstRules_22.insert(ExecInstValue_22.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_22);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_23;
        FIX::ExecInstValue ExecInstValue_23('6');
        noExecInstRules_0_1_2_1.set(ExecInstValue_23);
        ExecInstRules_NoExecInstRules_23.insert(ExecInstValue_23.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_23);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_23;
        FIX::MDBookType MDBookType_25(2);
        noMDFeedTypes_0_1_2_0.set(MDBookType_25);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MDBookType_25.getString());
        FIX::MDFeedType MDFeedType_25("STRING_780677900");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_25);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MDFeedType_25.getString());
        FIX::MarketDepth MarketDepth_26(1777154399);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_26);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MarketDepth_26.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_23);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_24;
        FIX::MatchAlgorithm MatchAlgorithm_24("STRING_208455119");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_24);
        MatchRules_NoMatchRules_24.insert(MatchAlgorithm_24.getString());
        FIX::MatchType MatchType_29("STRING_M5");
        noMatchRules_0_1_2_0.set(MatchType_29);
        MatchRules_NoMatchRules_24.insert(MatchType_29.getString());
        all_values.push_back(MatchRules_NoMatchRules_24);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_25;
        FIX::MatchAlgorithm MatchAlgorithm_25("STRING_1542257896");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_25);
        MatchRules_NoMatchRules_25.insert(MatchAlgorithm_25.getString());
        FIX::MatchType MatchType_30("STRING_S3");
        noMatchRules_0_1_2_1.set(MatchType_30);
        MatchRules_NoMatchRules_25.insert(MatchType_30.getString());
        all_values.push_back(MatchRules_NoMatchRules_25);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_26;
        FIX::MatchAlgorithm MatchAlgorithm_26("STRING_452714193");
        noMatchRules_0_1_2_2.set(MatchAlgorithm_26);
        MatchRules_NoMatchRules_26.insert(MatchAlgorithm_26.getString());
        FIX::MatchType MatchType_31("STRING_MT");
        noMatchRules_0_1_2_2.set(MatchType_31);
        MatchRules_NoMatchRules_26.insert(MatchType_31.getString());
        all_values.push_back(MatchRules_NoMatchRules_26);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_28;
        FIX::OrdType OrdType_57('G');
        noOrdTypeRules_0_1_2_0.set(OrdType_57);
        OrdTypeRules_NoOrdTypeRules_28.insert(OrdType_57.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_28);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_29;
        FIX::OrdType OrdType_58('L');
        noOrdTypeRules_0_1_2_1.set(OrdType_58);
        OrdTypeRules_NoOrdTypeRules_29.insert(OrdType_58.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_29);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_30;
        FIX::OrdType OrdType_59('1');
        noOrdTypeRules_0_1_2_2.set(OrdType_59);
        OrdTypeRules_NoOrdTypeRules_30.insert(OrdType_59.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_30);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_22;
        FIX::TimeInForce TimeInForce_33('8');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_33);
        TimeInForceRules_NoTimeInForceRules_22.insert(TimeInForce_33.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_22);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_23;
        FIX::TimeInForce TimeInForce_34('1');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_34);
        TimeInForceRules_NoTimeInForceRules_23.insert(TimeInForce_34.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_23);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_11;
      FIX::TradingSessionID TradingSessionID_79("STRING_6");
      noTradingSessionRules_0_1_2.set(TradingSessionID_79);
      TradingSessionRulesGrp_NoTradingSessionRules_11.insert(TradingSessionID_79.getString());
      FIX::TradingSessionSubID TradingSessionSubID_79("STRING_6");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_79);
      TradingSessionRulesGrp_NoTradingSessionRules_11.insert(TradingSessionSubID_79.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_11);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_24;
        FIX::ExecInstValue ExecInstValue_24('1');
        noExecInstRules_0_2_2_0.set(ExecInstValue_24);
        ExecInstRules_NoExecInstRules_24.insert(ExecInstValue_24.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_24);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_25;
        FIX::ExecInstValue ExecInstValue_25('3');
        noExecInstRules_0_2_2_1.set(ExecInstValue_25);
        ExecInstRules_NoExecInstRules_25.insert(ExecInstValue_25.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_25);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_26;
        FIX::ExecInstValue ExecInstValue_26('9');
        noExecInstRules_0_2_2_2.set(ExecInstValue_26);
        ExecInstRules_NoExecInstRules_26.insert(ExecInstValue_26.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_26);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_24;
        FIX::MDBookType MDBookType_26(1);
        noMDFeedTypes_0_2_2_0.set(MDBookType_26);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MDBookType_26.getString());
        FIX::MDFeedType MDFeedType_26("STRING_872295456");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_26);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MDFeedType_26.getString());
        FIX::MarketDepth MarketDepth_27(338791870);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_27);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MarketDepth_27.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_24);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_25;
        FIX::MDBookType MDBookType_27(2);
        noMDFeedTypes_0_2_2_1.set(MDBookType_27);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MDBookType_27.getString());
        FIX::MDFeedType MDFeedType_27("STRING_926970036");
        noMDFeedTypes_0_2_2_1.set(MDFeedType_27);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MDFeedType_27.getString());
        FIX::MarketDepth MarketDepth_28(979553377);
        noMDFeedTypes_0_2_2_1.set(MarketDepth_28);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MarketDepth_28.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_25);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_27;
        FIX::MatchAlgorithm MatchAlgorithm_27("STRING_69135434");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_27);
        MatchRules_NoMatchRules_27.insert(MatchAlgorithm_27.getString());
        FIX::MatchType MatchType_32("STRING_MT");
        noMatchRules_0_2_2_0.set(MatchType_32);
        MatchRules_NoMatchRules_27.insert(MatchType_32.getString());
        all_values.push_back(MatchRules_NoMatchRules_27);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_31;
        FIX::OrdType OrdType_60('2');
        noOrdTypeRules_0_2_2_0.set(OrdType_60);
        OrdTypeRules_NoOrdTypeRules_31.insert(OrdType_60.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_31);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_24;
        FIX::TimeInForce TimeInForce_35('6');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_35);
        TimeInForceRules_NoTimeInForceRules_24.insert(TimeInForce_35.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_24);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_11;
      FIX::EndStrikePxRange EndStrikePxRange_11;
      EndStrikePxRange_11.setString("1891636");
      noStrikeRules_0_1_0.set(EndStrikePxRange_11);
      StrikeRules_NoStrikeRules_11.insert(EndStrikePxRange_11.getString());
      FIX::StartStrikePxRange StartStrikePxRange_11;
      StartStrikePxRange_11.setString("9691001");
      noStrikeRules_0_1_0.set(StartStrikePxRange_11);
      StrikeRules_NoStrikeRules_11.insert(StartStrikePxRange_11.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_11(1293364579);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeExerciseStyle_11.getString());
      FIX::StrikeIncrement StrikeIncrement_11;
      StrikeIncrement_11.setString("3673989");
      noStrikeRules_0_1_0.set(StrikeIncrement_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeIncrement_11.getString());
      FIX::StrikeRuleID StrikeRuleID_11("STRING_912469422");
      noStrikeRules_0_1_0.set(StrikeRuleID_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeRuleID_11.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_11);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_21;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_21("MONTHYEAR_1461213379");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_21);
        MaturityRules_NoMaturityRules_21.insert(EndMaturityMonthYear_21.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_21(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearFormat_21.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_21(654962323);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearIncrement_21.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_21(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearIncrementUnits_21.getString());
        FIX::MaturityRuleID MaturityRuleID_21("STRING_596273129");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityRuleID_21.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_21("MONTHYEAR_1654231662");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_21);
        MaturityRules_NoMaturityRules_21.insert(StartMaturityMonthYear_21.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_21);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_22;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_22("MONTHYEAR_484808757");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_22);
        MaturityRules_NoMaturityRules_22.insert(EndMaturityMonthYear_22.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_22(0);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearFormat_22.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_22(1965832936);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearIncrement_22.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_22(0);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearIncrementUnits_22.getString());
        FIX::MaturityRuleID MaturityRuleID_22("STRING_619888793");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityRuleID_22.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_22("MONTHYEAR_1227597449");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_22);
        MaturityRules_NoMaturityRules_22.insert(StartMaturityMonthYear_22.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_22);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_28;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_28("CHF");
  msg.set(BenchmarkCurveCurrency_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurveCurrency_28.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_28("STRING_Euribor");
  msg.set(BenchmarkCurveName_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurveName_28.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_28("STRING_1056897889");
  msg.set(BenchmarkCurvePoint_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurvePoint_28.getString());
  FIX::BenchmarkPrice BenchmarkPrice_28;
  BenchmarkPrice_28.setString("19382340");
  msg.set(BenchmarkPrice_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkPrice_28.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_28(178421337);
  msg.set(BenchmarkPriceType_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkPriceType_28.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_28("STRING_1126033323");
  msg.set(BenchmarkSecurityID_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkSecurityID_28.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_28("STRING_1550981670");
  msg.set(BenchmarkSecurityIDSource_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkSecurityIDSource_28.getString());
  FIX::Spread Spread_28;
  Spread_28.setString("13239299");
  msg.set(Spread_28);
  SpreadOrBenchmarkCurveData_28.insert(Spread_28.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_28);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_45;
    FIX::StipulationType StipulationType_45("STRING_MINDNOM");
    noStipulations_0_0.set(StipulationType_45);
    Stipulations_NoStipulations_45.insert(StipulationType_45.getString());
    FIX::StipulationValue StipulationValue_45("STRING_1840315961");
    noStipulations_0_0.set(StipulationValue_45);
    Stipulations_NoStipulations_45.insert(StipulationValue_45.getString());
    all_values.push_back(Stipulations_NoStipulations_45);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_46;
    FIX::StipulationType StipulationType_46("STRING_REFTRADE");
    noStipulations_0_1.set(StipulationType_46);
    Stipulations_NoStipulations_46.insert(StipulationType_46.getString());
    FIX::StipulationValue StipulationValue_46("STRING_1561348081");
    noStipulations_0_1.set(StipulationValue_46);
    Stipulations_NoStipulations_46.insert(StipulationValue_46.getString());
    all_values.push_back(Stipulations_NoStipulations_46);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_47;
    FIX::StipulationType StipulationType_47("STRING_PXSOURCE");
    noStipulations_0_2.set(StipulationType_47);
    Stipulations_NoStipulations_47.insert(StipulationType_47.getString());
    FIX::StipulationValue StipulationValue_47("STRING_16637066");
    noStipulations_0_2.set(StipulationValue_47);
    Stipulations_NoStipulations_47.insert(StipulationValue_47.getString());
    all_values.push_back(Stipulations_NoStipulations_47);

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_122;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_122("DATA_1574401935");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingIssuer_122.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_122(1081023129);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingIssuerLen_122.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_122("DATA_1242476792");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingSecurityDesc_122.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_122(1559100399);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_122);
    UnderlyingInstrument_122.insert(EncodedUnderlyingSecurityDescLen_122.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_122;
    UnderlyingAdjustedQuantity_122.setString("17359854");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_122);
    UnderlyingInstrument_122.insert(UnderlyingAdjustedQuantity_122.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_122;
    UnderlyingAllocationPercent_122.setString("29.340000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_122);
    UnderlyingInstrument_122.insert(UnderlyingAllocationPercent_122.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_122;
    UnderlyingAttachmentPoint_122.setString("98.800000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_122);
    UnderlyingInstrument_122.insert(UnderlyingAttachmentPoint_122.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_122("STRING_1242733467");
    noUnderlyings_0_0.set(UnderlyingCFICode_122);
    UnderlyingInstrument_122.insert(UnderlyingCFICode_122.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_122("STRING_233848043");
    noUnderlyings_0_0.set(UnderlyingCPProgram_122);
    UnderlyingInstrument_122.insert(UnderlyingCPProgram_122.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_122("STRING_1628154660");
    noUnderlyings_0_0.set(UnderlyingCPRegType_122);
    UnderlyingInstrument_122.insert(UnderlyingCPRegType_122.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_122;
    UnderlyingCapValue_122.setString("10610827");
    noUnderlyings_0_0.set(UnderlyingCapValue_122);
    UnderlyingInstrument_122.insert(UnderlyingCapValue_122.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_122;
    UnderlyingCashAmount_122.setString("16389640");
    noUnderlyings_0_0.set(UnderlyingCashAmount_122);
    UnderlyingInstrument_122.insert(UnderlyingCashAmount_122.getString());
    FIX::UnderlyingCashType UnderlyingCashType_122("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_122);
    UnderlyingInstrument_122.insert(UnderlyingCashType_122.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_122;
    UnderlyingContractMultiplier_122.setString("1411965");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_122);
    UnderlyingInstrument_122.insert(UnderlyingContractMultiplier_122.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_122(1768891941);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_122);
    UnderlyingInstrument_122.insert(UnderlyingContractMultiplierUnit_122.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_122("COUNTRY_1059240469");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_122);
    UnderlyingInstrument_122.insert(UnderlyingCountryOfIssue_122.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_122("LOCALMKTDATE_951263674");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_122);
    UnderlyingInstrument_122.insert(UnderlyingCouponPaymentDate_122.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_122;
    UnderlyingCouponRate_122.setString("61.820000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_122);
    UnderlyingInstrument_122.insert(UnderlyingCouponRate_122.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_122("STRING_849990862");
    noUnderlyings_0_0.set(UnderlyingCreditRating_122);
    UnderlyingInstrument_122.insert(UnderlyingCreditRating_122.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_122("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_122);
    UnderlyingInstrument_122.insert(UnderlyingCurrency_122.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_122;
    UnderlyingCurrentValue_122.setString("2534888");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_122);
    UnderlyingInstrument_122.insert(UnderlyingCurrentValue_122.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_122;
    UnderlyingDetachmentPoint_122.setString("13.180000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_122);
    UnderlyingInstrument_122.insert(UnderlyingDetachmentPoint_122.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_122;
    UnderlyingDirtyPrice_122.setString("9578634");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_122);
    UnderlyingInstrument_122.insert(UnderlyingDirtyPrice_122.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_122;
    UnderlyingEndPrice_122.setString("16256733");
    noUnderlyings_0_0.set(UnderlyingEndPrice_122);
    UnderlyingInstrument_122.insert(UnderlyingEndPrice_122.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_122;
    UnderlyingEndValue_122.setString("21464472");
    noUnderlyings_0_0.set(UnderlyingEndValue_122);
    UnderlyingInstrument_122.insert(UnderlyingEndValue_122.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_122(1828619597);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_122);
    UnderlyingInstrument_122.insert(UnderlyingExerciseStyle_122.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_122;
    UnderlyingFXRate_122.setString("10395377");
    noUnderlyings_0_0.set(UnderlyingFXRate_122);
    UnderlyingInstrument_122.insert(UnderlyingFXRate_122.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_122('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_122);
    UnderlyingInstrument_122.insert(UnderlyingFXRateCalc_122.getString());
    FIX::UnderlyingFactor UnderlyingFactor_122;
    UnderlyingFactor_122.setString("18452566");
    noUnderlyings_0_0.set(UnderlyingFactor_122);
    UnderlyingInstrument_122.insert(UnderlyingFactor_122.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_122(820801149);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_122);
    UnderlyingInstrument_122.insert(UnderlyingFlowScheduleType_122.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_122("STRING_87814432");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_122);
    UnderlyingInstrument_122.insert(UnderlyingInstrRegistry_122.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_122("LOCALMKTDATE_778796144");
    noUnderlyings_0_0.set(UnderlyingIssueDate_122);
    UnderlyingInstrument_122.insert(UnderlyingIssueDate_122.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_122("STRING_2063277941");
    noUnderlyings_0_0.set(UnderlyingIssuer_122);
    UnderlyingInstrument_122.insert(UnderlyingIssuer_122.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_122("STRING_1646914832");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_122);
    UnderlyingInstrument_122.insert(UnderlyingLocaleOfIssue_122.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_122("LOCALMKTDATE_367297949");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_122);
    UnderlyingInstrument_122.insert(UnderlyingMaturityDate_122.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_122("MONTHYEAR_1812317228");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_122);
    UnderlyingInstrument_122.insert(UnderlyingMaturityMonthYear_122.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_122("TZTIMEONLY_1654804712");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_122);
    UnderlyingInstrument_122.insert(UnderlyingMaturityTime_122.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_122;
    UnderlyingNotionalPercentageOutstanding_122.setString("14.160000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_122);
    UnderlyingInstrument_122.insert(UnderlyingNotionalPercentageOutstanding_122.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_122('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_122);
    UnderlyingInstrument_122.insert(UnderlyingOptAttribute_122.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_122;
    UnderlyingOriginalNotionalPercentageOutstanding_122.setString("57.250000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_122);
    UnderlyingInstrument_122.insert(UnderlyingOriginalNotionalPercentageOutstanding_122.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_122("STRING_523630523");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_122);
    UnderlyingInstrument_122.insert(UnderlyingPriceUnitOfMeasure_122.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_122;
    UnderlyingPriceUnitOfMeasureQty_122.setString("15376457");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_122);
    UnderlyingInstrument_122.insert(UnderlyingPriceUnitOfMeasureQty_122.getString());
    FIX::UnderlyingProduct UnderlyingProduct_122(1236035530);
    noUnderlyings_0_0.set(UnderlyingProduct_122);
    UnderlyingInstrument_122.insert(UnderlyingProduct_122.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_122(664827079);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_122);
    UnderlyingInstrument_122.insert(UnderlyingPutOrCall_122.getString());
    FIX::UnderlyingPx UnderlyingPx_122;
    UnderlyingPx_122.setString("11590540");
    noUnderlyings_0_0.set(UnderlyingPx_122);
    UnderlyingInstrument_122.insert(UnderlyingPx_122.getString());
    FIX::UnderlyingQty UnderlyingQty_122;
    UnderlyingQty_122.setString("1477923");
    noUnderlyings_0_0.set(UnderlyingQty_122);
    UnderlyingInstrument_122.insert(UnderlyingQty_122.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_122("LOCALMKTDATE_1616090754");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_122);
    UnderlyingInstrument_122.insert(UnderlyingRedemptionDate_122.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_122("STRING_1837360186");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_122);
    UnderlyingInstrument_122.insert(UnderlyingRepoCollateralSecurityType_122.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_122;
    UnderlyingRepurchaseRate_122.setString("32.130000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_122);
    UnderlyingInstrument_122.insert(UnderlyingRepurchaseRate_122.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_122(598292117);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_122);
    UnderlyingInstrument_122.insert(UnderlyingRepurchaseTerm_122.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_122("STRING_1494216044");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_122);
    UnderlyingInstrument_122.insert(UnderlyingRestructuringType_122.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_122("STRING_1251272098");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityDesc_122.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_122("EXCHANGE_904423436");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityExchange_122.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_122("STRING_304595858");
    noUnderlyings_0_0.set(UnderlyingSecurityID_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityID_122.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_122("STRING_729461754");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityIDSource_122.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_122("STRING_903387068");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_122);
    UnderlyingInstrument_122.insert(UnderlyingSecuritySubType_122.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_122("STRING_2133215456");
    noUnderlyings_0_0.set(UnderlyingSecurityType_122);
    UnderlyingInstrument_122.insert(UnderlyingSecurityType_122.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_122("STRING_1768999491");
    noUnderlyings_0_0.set(UnderlyingSeniority_122);
    UnderlyingInstrument_122.insert(UnderlyingSeniority_122.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_122("STRING_1564283213");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_122);
    UnderlyingInstrument_122.insert(UnderlyingSettlMethod_122.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_122(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_122);
    UnderlyingInstrument_122.insert(UnderlyingSettlementType_122.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_122;
    UnderlyingStartValue_122.setString("4423169");
    noUnderlyings_0_0.set(UnderlyingStartValue_122);
    UnderlyingInstrument_122.insert(UnderlyingStartValue_122.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_122("STRING_1652097645");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_122);
    UnderlyingInstrument_122.insert(UnderlyingStateOrProvinceOfIssue_122.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_122("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_122);
    UnderlyingInstrument_122.insert(UnderlyingStrikeCurrency_122.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_122;
    UnderlyingStrikePrice_122.setString("11515288");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_122);
    UnderlyingInstrument_122.insert(UnderlyingStrikePrice_122.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_122("STRING_829598917");
    noUnderlyings_0_0.set(UnderlyingSymbol_122);
    UnderlyingInstrument_122.insert(UnderlyingSymbol_122.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_122("STRING_22944866");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_122);
    UnderlyingInstrument_122.insert(UnderlyingSymbolSfx_122.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_122("STRING_658849894");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_122);
    UnderlyingInstrument_122.insert(UnderlyingTimeUnit_122.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_122("STRING_292146685");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_122);
    UnderlyingInstrument_122.insert(UnderlyingUnitOfMeasure_122.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_122;
    UnderlyingUnitOfMeasureQty_122.setString("20691101");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_122);
    UnderlyingInstrument_122.insert(UnderlyingUnitOfMeasureQty_122.getString());
    all_values.push_back(UnderlyingInstrument_122);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_244;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_244("STRING_815777208");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_244);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_244.insert(UnderlyingSecurityAltID_244.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_244("STRING_1459272201");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_244);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_244.insert(UnderlyingSecurityAltIDSource_244.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_244);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_245;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_245("STRING_882877501");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_245);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_245.insert(UnderlyingSecurityAltID_245.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_245("STRING_1480604287");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_245);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_245.insert(UnderlyingSecurityAltIDSource_245.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_245);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_246;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_246("STRING_470842557");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_246);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_246.insert(UnderlyingSecurityAltID_246.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_246("STRING_1030669853");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_246);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_246.insert(UnderlyingSecurityAltIDSource_246.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_246);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_230;
      FIX::UnderlyingStipType UnderlyingStipType_230("STRING_160719096");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_230);
      UnderlyingStipulations_NoUnderlyingStips_230.insert(UnderlyingStipType_230.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_230("STRING_2028453066");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_230);
      UnderlyingStipulations_NoUnderlyingStips_230.insert(UnderlyingStipValue_230.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_230);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_231;
      FIX::UnderlyingStipType UnderlyingStipType_231("STRING_1547503511");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_231);
      UnderlyingStipulations_NoUnderlyingStips_231.insert(UnderlyingStipType_231.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_231("STRING_1654935140");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_231);
      UnderlyingStipulations_NoUnderlyingStips_231.insert(UnderlyingStipValue_231.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_231);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_232;
      FIX::UnderlyingStipType UnderlyingStipType_232("STRING_1132241516");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_232);
      UnderlyingStipulations_NoUnderlyingStips_232.insert(UnderlyingStipType_232.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_232("STRING_304443299");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_232);
      UnderlyingStipulations_NoUnderlyingStips_232.insert(UnderlyingStipValue_232.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_232);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_249;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_249("STRING_1861703270");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyID_249.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_249('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyIDSource_249.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_249(1945262806);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyRole_249.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_249);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_466("STRING_624629932");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_466);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466.insert(UnderlyingInstrumentPartySubID_466.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_466(1628767630);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_466);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466.insert(UnderlyingInstrumentPartySubIDType_466.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_250;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_250("STRING_1925536106");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_250);
      UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyID_250.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_250('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_250);
      UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyIDSource_250.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_250(2091068598);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_250);
      UndlyInstrumentParties_NoUndlyInstrumentParties_250.insert(UnderlyingInstrumentPartyRole_250.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_250);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_467("STRING_1280772759");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_467);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467.insert(UnderlyingInstrumentPartySubID_467.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_467(773183867);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_467);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467.insert(UnderlyingInstrumentPartySubIDType_467.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_468("STRING_159108610");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_468);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468.insert(UnderlyingInstrumentPartySubID_468.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_468(1939622653);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_468);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468.insert(UnderlyingInstrumentPartySubIDType_468.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_469("STRING_1065330552");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_469);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469.insert(UnderlyingInstrumentPartySubID_469.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_469(80735099);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_469);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469.insert(UnderlyingInstrumentPartySubIDType_469.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_123;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_123("DATA_1586464624");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingIssuer_123.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_123(1881107760);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingIssuerLen_123.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_123("DATA_1540007300");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingSecurityDesc_123.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_123(321858477);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingSecurityDescLen_123.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_123;
    UnderlyingAdjustedQuantity_123.setString("12142283");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_123);
    UnderlyingInstrument_123.insert(UnderlyingAdjustedQuantity_123.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_123;
    UnderlyingAllocationPercent_123.setString("98.580000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_123);
    UnderlyingInstrument_123.insert(UnderlyingAllocationPercent_123.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_123;
    UnderlyingAttachmentPoint_123.setString("83.300000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_123);
    UnderlyingInstrument_123.insert(UnderlyingAttachmentPoint_123.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_123("STRING_15956145");
    noUnderlyings_0_1.set(UnderlyingCFICode_123);
    UnderlyingInstrument_123.insert(UnderlyingCFICode_123.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_123("STRING_24085306");
    noUnderlyings_0_1.set(UnderlyingCPProgram_123);
    UnderlyingInstrument_123.insert(UnderlyingCPProgram_123.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_123("STRING_1233497749");
    noUnderlyings_0_1.set(UnderlyingCPRegType_123);
    UnderlyingInstrument_123.insert(UnderlyingCPRegType_123.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_123;
    UnderlyingCapValue_123.setString("15634596");
    noUnderlyings_0_1.set(UnderlyingCapValue_123);
    UnderlyingInstrument_123.insert(UnderlyingCapValue_123.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_123;
    UnderlyingCashAmount_123.setString("16790204");
    noUnderlyings_0_1.set(UnderlyingCashAmount_123);
    UnderlyingInstrument_123.insert(UnderlyingCashAmount_123.getString());
    FIX::UnderlyingCashType UnderlyingCashType_123("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_123);
    UnderlyingInstrument_123.insert(UnderlyingCashType_123.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_123;
    UnderlyingContractMultiplier_123.setString("18679029");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_123);
    UnderlyingInstrument_123.insert(UnderlyingContractMultiplier_123.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_123(1491067796);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_123);
    UnderlyingInstrument_123.insert(UnderlyingContractMultiplierUnit_123.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_123("COUNTRY_2079958888");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_123);
    UnderlyingInstrument_123.insert(UnderlyingCountryOfIssue_123.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_123("LOCALMKTDATE_928249674");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_123);
    UnderlyingInstrument_123.insert(UnderlyingCouponPaymentDate_123.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_123;
    UnderlyingCouponRate_123.setString("69.550000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_123);
    UnderlyingInstrument_123.insert(UnderlyingCouponRate_123.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_123("STRING_1415694353");
    noUnderlyings_0_1.set(UnderlyingCreditRating_123);
    UnderlyingInstrument_123.insert(UnderlyingCreditRating_123.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_123("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_123);
    UnderlyingInstrument_123.insert(UnderlyingCurrency_123.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_123;
    UnderlyingCurrentValue_123.setString("11937468");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_123);
    UnderlyingInstrument_123.insert(UnderlyingCurrentValue_123.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_123;
    UnderlyingDetachmentPoint_123.setString("35.350000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_123);
    UnderlyingInstrument_123.insert(UnderlyingDetachmentPoint_123.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_123;
    UnderlyingDirtyPrice_123.setString("7137158");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_123);
    UnderlyingInstrument_123.insert(UnderlyingDirtyPrice_123.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_123;
    UnderlyingEndPrice_123.setString("13299105");
    noUnderlyings_0_1.set(UnderlyingEndPrice_123);
    UnderlyingInstrument_123.insert(UnderlyingEndPrice_123.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_123;
    UnderlyingEndValue_123.setString("8154126");
    noUnderlyings_0_1.set(UnderlyingEndValue_123);
    UnderlyingInstrument_123.insert(UnderlyingEndValue_123.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_123(1486899754);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_123);
    UnderlyingInstrument_123.insert(UnderlyingExerciseStyle_123.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_123;
    UnderlyingFXRate_123.setString("14890191");
    noUnderlyings_0_1.set(UnderlyingFXRate_123);
    UnderlyingInstrument_123.insert(UnderlyingFXRate_123.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_123('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_123);
    UnderlyingInstrument_123.insert(UnderlyingFXRateCalc_123.getString());
    FIX::UnderlyingFactor UnderlyingFactor_123;
    UnderlyingFactor_123.setString("4047466");
    noUnderlyings_0_1.set(UnderlyingFactor_123);
    UnderlyingInstrument_123.insert(UnderlyingFactor_123.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_123(1569754265);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_123);
    UnderlyingInstrument_123.insert(UnderlyingFlowScheduleType_123.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_123("STRING_46532627");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_123);
    UnderlyingInstrument_123.insert(UnderlyingInstrRegistry_123.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_123("LOCALMKTDATE_138370770");
    noUnderlyings_0_1.set(UnderlyingIssueDate_123);
    UnderlyingInstrument_123.insert(UnderlyingIssueDate_123.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_123("STRING_962277917");
    noUnderlyings_0_1.set(UnderlyingIssuer_123);
    UnderlyingInstrument_123.insert(UnderlyingIssuer_123.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_123("STRING_368391105");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_123);
    UnderlyingInstrument_123.insert(UnderlyingLocaleOfIssue_123.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_123("LOCALMKTDATE_1352599169");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_123);
    UnderlyingInstrument_123.insert(UnderlyingMaturityDate_123.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_123("MONTHYEAR_825644127");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_123);
    UnderlyingInstrument_123.insert(UnderlyingMaturityMonthYear_123.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_123("TZTIMEONLY_1720919435");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_123);
    UnderlyingInstrument_123.insert(UnderlyingMaturityTime_123.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_123;
    UnderlyingNotionalPercentageOutstanding_123.setString("53.140000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_123);
    UnderlyingInstrument_123.insert(UnderlyingNotionalPercentageOutstanding_123.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_123('8');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_123);
    UnderlyingInstrument_123.insert(UnderlyingOptAttribute_123.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_123;
    UnderlyingOriginalNotionalPercentageOutstanding_123.setString("35.360000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_123);
    UnderlyingInstrument_123.insert(UnderlyingOriginalNotionalPercentageOutstanding_123.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_123("STRING_784531322");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_123);
    UnderlyingInstrument_123.insert(UnderlyingPriceUnitOfMeasure_123.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_123;
    UnderlyingPriceUnitOfMeasureQty_123.setString("3812662");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_123);
    UnderlyingInstrument_123.insert(UnderlyingPriceUnitOfMeasureQty_123.getString());
    FIX::UnderlyingProduct UnderlyingProduct_123(1025189154);
    noUnderlyings_0_1.set(UnderlyingProduct_123);
    UnderlyingInstrument_123.insert(UnderlyingProduct_123.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_123(504950629);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_123);
    UnderlyingInstrument_123.insert(UnderlyingPutOrCall_123.getString());
    FIX::UnderlyingPx UnderlyingPx_123;
    UnderlyingPx_123.setString("18723340");
    noUnderlyings_0_1.set(UnderlyingPx_123);
    UnderlyingInstrument_123.insert(UnderlyingPx_123.getString());
    FIX::UnderlyingQty UnderlyingQty_123;
    UnderlyingQty_123.setString("9576643");
    noUnderlyings_0_1.set(UnderlyingQty_123);
    UnderlyingInstrument_123.insert(UnderlyingQty_123.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_123("LOCALMKTDATE_1433200303");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_123);
    UnderlyingInstrument_123.insert(UnderlyingRedemptionDate_123.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_123("STRING_1013697335");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_123);
    UnderlyingInstrument_123.insert(UnderlyingRepoCollateralSecurityType_123.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_123;
    UnderlyingRepurchaseRate_123.setString("50.990000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_123);
    UnderlyingInstrument_123.insert(UnderlyingRepurchaseRate_123.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_123(838596261);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_123);
    UnderlyingInstrument_123.insert(UnderlyingRepurchaseTerm_123.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_123("STRING_1783828272");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_123);
    UnderlyingInstrument_123.insert(UnderlyingRestructuringType_123.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_123("STRING_1419621911");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityDesc_123.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_123("EXCHANGE_373236149");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityExchange_123.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_123("STRING_350060511");
    noUnderlyings_0_1.set(UnderlyingSecurityID_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityID_123.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_123("STRING_602048818");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityIDSource_123.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_123("STRING_1188648795");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_123);
    UnderlyingInstrument_123.insert(UnderlyingSecuritySubType_123.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_123("STRING_1836960265");
    noUnderlyings_0_1.set(UnderlyingSecurityType_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityType_123.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_123("STRING_2091067984");
    noUnderlyings_0_1.set(UnderlyingSeniority_123);
    UnderlyingInstrument_123.insert(UnderlyingSeniority_123.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_123("STRING_1796200447");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_123);
    UnderlyingInstrument_123.insert(UnderlyingSettlMethod_123.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_123(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_123);
    UnderlyingInstrument_123.insert(UnderlyingSettlementType_123.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_123;
    UnderlyingStartValue_123.setString("15133386");
    noUnderlyings_0_1.set(UnderlyingStartValue_123);
    UnderlyingInstrument_123.insert(UnderlyingStartValue_123.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_123("STRING_1842733074");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_123);
    UnderlyingInstrument_123.insert(UnderlyingStateOrProvinceOfIssue_123.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_123("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_123);
    UnderlyingInstrument_123.insert(UnderlyingStrikeCurrency_123.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_123;
    UnderlyingStrikePrice_123.setString("636405");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_123);
    UnderlyingInstrument_123.insert(UnderlyingStrikePrice_123.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_123("STRING_1585193214");
    noUnderlyings_0_1.set(UnderlyingSymbol_123);
    UnderlyingInstrument_123.insert(UnderlyingSymbol_123.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_123("STRING_1153776998");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_123);
    UnderlyingInstrument_123.insert(UnderlyingSymbolSfx_123.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_123("STRING_1784559967");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_123);
    UnderlyingInstrument_123.insert(UnderlyingTimeUnit_123.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_123("STRING_806264881");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_123);
    UnderlyingInstrument_123.insert(UnderlyingUnitOfMeasure_123.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_123;
    UnderlyingUnitOfMeasureQty_123.setString("20035064");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_123);
    UnderlyingInstrument_123.insert(UnderlyingUnitOfMeasureQty_123.getString());
    all_values.push_back(UnderlyingInstrument_123);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_247;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_247("STRING_1590796203");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_247);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_247.insert(UnderlyingSecurityAltID_247.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_247("STRING_237289015");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_247);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_247.insert(UnderlyingSecurityAltIDSource_247.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_247);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_233;
      FIX::UnderlyingStipType UnderlyingStipType_233("STRING_2095746833");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_233);
      UnderlyingStipulations_NoUnderlyingStips_233.insert(UnderlyingStipType_233.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_233("STRING_2109623043");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_233);
      UnderlyingStipulations_NoUnderlyingStips_233.insert(UnderlyingStipValue_233.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_233);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_251;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_251("STRING_1381463488");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_251);
      UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyID_251.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_251('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_251);
      UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyIDSource_251.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_251(505254855);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_251);
      UndlyInstrumentParties_NoUndlyInstrumentParties_251.insert(UnderlyingInstrumentPartyRole_251.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_251);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_470("STRING_612181354");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_470);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470.insert(UnderlyingInstrumentPartySubID_470.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_470(1924876766);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_470);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470.insert(UnderlyingInstrumentPartySubIDType_470.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_124;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_124("DATA_445812251");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingIssuer_124.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_124(962241865);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingIssuerLen_124.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_124("DATA_379441936");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingSecurityDesc_124.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_124(1634461046);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_124);
    UnderlyingInstrument_124.insert(EncodedUnderlyingSecurityDescLen_124.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_124;
    UnderlyingAdjustedQuantity_124.setString("6517184");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_124);
    UnderlyingInstrument_124.insert(UnderlyingAdjustedQuantity_124.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_124;
    UnderlyingAllocationPercent_124.setString("62.720000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_124);
    UnderlyingInstrument_124.insert(UnderlyingAllocationPercent_124.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_124;
    UnderlyingAttachmentPoint_124.setString("78.450000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_124);
    UnderlyingInstrument_124.insert(UnderlyingAttachmentPoint_124.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_124("STRING_745941757");
    noUnderlyings_0_2.set(UnderlyingCFICode_124);
    UnderlyingInstrument_124.insert(UnderlyingCFICode_124.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_124("STRING_1836364873");
    noUnderlyings_0_2.set(UnderlyingCPProgram_124);
    UnderlyingInstrument_124.insert(UnderlyingCPProgram_124.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_124("STRING_978427272");
    noUnderlyings_0_2.set(UnderlyingCPRegType_124);
    UnderlyingInstrument_124.insert(UnderlyingCPRegType_124.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_124;
    UnderlyingCapValue_124.setString("9785358");
    noUnderlyings_0_2.set(UnderlyingCapValue_124);
    UnderlyingInstrument_124.insert(UnderlyingCapValue_124.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_124;
    UnderlyingCashAmount_124.setString("170140");
    noUnderlyings_0_2.set(UnderlyingCashAmount_124);
    UnderlyingInstrument_124.insert(UnderlyingCashAmount_124.getString());
    FIX::UnderlyingCashType UnderlyingCashType_124("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_124);
    UnderlyingInstrument_124.insert(UnderlyingCashType_124.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_124;
    UnderlyingContractMultiplier_124.setString("4162453");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_124);
    UnderlyingInstrument_124.insert(UnderlyingContractMultiplier_124.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_124(1170791094);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_124);
    UnderlyingInstrument_124.insert(UnderlyingContractMultiplierUnit_124.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_124("COUNTRY_679144122");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingCountryOfIssue_124.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_124("LOCALMKTDATE_1222510249");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_124);
    UnderlyingInstrument_124.insert(UnderlyingCouponPaymentDate_124.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_124;
    UnderlyingCouponRate_124.setString("38.770000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_124);
    UnderlyingInstrument_124.insert(UnderlyingCouponRate_124.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_124("STRING_1123153978");
    noUnderlyings_0_2.set(UnderlyingCreditRating_124);
    UnderlyingInstrument_124.insert(UnderlyingCreditRating_124.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_124("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_124);
    UnderlyingInstrument_124.insert(UnderlyingCurrency_124.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_124;
    UnderlyingCurrentValue_124.setString("4448693");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_124);
    UnderlyingInstrument_124.insert(UnderlyingCurrentValue_124.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_124;
    UnderlyingDetachmentPoint_124.setString("59.900000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_124);
    UnderlyingInstrument_124.insert(UnderlyingDetachmentPoint_124.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_124;
    UnderlyingDirtyPrice_124.setString("12262422");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_124);
    UnderlyingInstrument_124.insert(UnderlyingDirtyPrice_124.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_124;
    UnderlyingEndPrice_124.setString("7242490");
    noUnderlyings_0_2.set(UnderlyingEndPrice_124);
    UnderlyingInstrument_124.insert(UnderlyingEndPrice_124.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_124;
    UnderlyingEndValue_124.setString("19955494");
    noUnderlyings_0_2.set(UnderlyingEndValue_124);
    UnderlyingInstrument_124.insert(UnderlyingEndValue_124.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_124(54595369);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_124);
    UnderlyingInstrument_124.insert(UnderlyingExerciseStyle_124.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_124;
    UnderlyingFXRate_124.setString("12295039");
    noUnderlyings_0_2.set(UnderlyingFXRate_124);
    UnderlyingInstrument_124.insert(UnderlyingFXRate_124.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_124('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_124);
    UnderlyingInstrument_124.insert(UnderlyingFXRateCalc_124.getString());
    FIX::UnderlyingFactor UnderlyingFactor_124;
    UnderlyingFactor_124.setString("6667767");
    noUnderlyings_0_2.set(UnderlyingFactor_124);
    UnderlyingInstrument_124.insert(UnderlyingFactor_124.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_124(1006897068);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_124);
    UnderlyingInstrument_124.insert(UnderlyingFlowScheduleType_124.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_124("STRING_366454183");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_124);
    UnderlyingInstrument_124.insert(UnderlyingInstrRegistry_124.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_124("LOCALMKTDATE_1629018588");
    noUnderlyings_0_2.set(UnderlyingIssueDate_124);
    UnderlyingInstrument_124.insert(UnderlyingIssueDate_124.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_124("STRING_1386339004");
    noUnderlyings_0_2.set(UnderlyingIssuer_124);
    UnderlyingInstrument_124.insert(UnderlyingIssuer_124.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_124("STRING_2000915230");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingLocaleOfIssue_124.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_124("LOCALMKTDATE_133253422");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityDate_124.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_124("MONTHYEAR_1709365277");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityMonthYear_124.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_124("TZTIMEONLY_1136609427");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_124);
    UnderlyingInstrument_124.insert(UnderlyingMaturityTime_124.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_124;
    UnderlyingNotionalPercentageOutstanding_124.setString("51.790000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_124);
    UnderlyingInstrument_124.insert(UnderlyingNotionalPercentageOutstanding_124.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_124('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_124);
    UnderlyingInstrument_124.insert(UnderlyingOptAttribute_124.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_124;
    UnderlyingOriginalNotionalPercentageOutstanding_124.setString("66.990000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_124);
    UnderlyingInstrument_124.insert(UnderlyingOriginalNotionalPercentageOutstanding_124.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_124("STRING_1857730981");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_124);
    UnderlyingInstrument_124.insert(UnderlyingPriceUnitOfMeasure_124.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_124;
    UnderlyingPriceUnitOfMeasureQty_124.setString("14152605");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_124);
    UnderlyingInstrument_124.insert(UnderlyingPriceUnitOfMeasureQty_124.getString());
    FIX::UnderlyingProduct UnderlyingProduct_124(1009620855);
    noUnderlyings_0_2.set(UnderlyingProduct_124);
    UnderlyingInstrument_124.insert(UnderlyingProduct_124.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_124(126492702);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_124);
    UnderlyingInstrument_124.insert(UnderlyingPutOrCall_124.getString());
    FIX::UnderlyingPx UnderlyingPx_124;
    UnderlyingPx_124.setString("4385680");
    noUnderlyings_0_2.set(UnderlyingPx_124);
    UnderlyingInstrument_124.insert(UnderlyingPx_124.getString());
    FIX::UnderlyingQty UnderlyingQty_124;
    UnderlyingQty_124.setString("16887649");
    noUnderlyings_0_2.set(UnderlyingQty_124);
    UnderlyingInstrument_124.insert(UnderlyingQty_124.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_124("LOCALMKTDATE_1349002951");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_124);
    UnderlyingInstrument_124.insert(UnderlyingRedemptionDate_124.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_124("STRING_1465381922");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_124);
    UnderlyingInstrument_124.insert(UnderlyingRepoCollateralSecurityType_124.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_124;
    UnderlyingRepurchaseRate_124.setString("53.070000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_124);
    UnderlyingInstrument_124.insert(UnderlyingRepurchaseRate_124.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_124(2014825756);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_124);
    UnderlyingInstrument_124.insert(UnderlyingRepurchaseTerm_124.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_124("STRING_582001166");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_124);
    UnderlyingInstrument_124.insert(UnderlyingRestructuringType_124.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_124("STRING_1109304647");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityDesc_124.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_124("EXCHANGE_481428098");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityExchange_124.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_124("STRING_1808243454");
    noUnderlyings_0_2.set(UnderlyingSecurityID_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityID_124.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_124("STRING_1833553742");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityIDSource_124.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_124("STRING_329493929");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_124);
    UnderlyingInstrument_124.insert(UnderlyingSecuritySubType_124.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_124("STRING_1862838823");
    noUnderlyings_0_2.set(UnderlyingSecurityType_124);
    UnderlyingInstrument_124.insert(UnderlyingSecurityType_124.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_124("STRING_915574044");
    noUnderlyings_0_2.set(UnderlyingSeniority_124);
    UnderlyingInstrument_124.insert(UnderlyingSeniority_124.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_124("STRING_250135861");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_124);
    UnderlyingInstrument_124.insert(UnderlyingSettlMethod_124.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_124(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_124);
    UnderlyingInstrument_124.insert(UnderlyingSettlementType_124.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_124;
    UnderlyingStartValue_124.setString("19224711");
    noUnderlyings_0_2.set(UnderlyingStartValue_124);
    UnderlyingInstrument_124.insert(UnderlyingStartValue_124.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_124("STRING_616590045");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_124);
    UnderlyingInstrument_124.insert(UnderlyingStateOrProvinceOfIssue_124.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_124("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_124);
    UnderlyingInstrument_124.insert(UnderlyingStrikeCurrency_124.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_124;
    UnderlyingStrikePrice_124.setString("4700216");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_124);
    UnderlyingInstrument_124.insert(UnderlyingStrikePrice_124.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_124("STRING_2144403910");
    noUnderlyings_0_2.set(UnderlyingSymbol_124);
    UnderlyingInstrument_124.insert(UnderlyingSymbol_124.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_124("STRING_723208097");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_124);
    UnderlyingInstrument_124.insert(UnderlyingSymbolSfx_124.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_124("STRING_1606631054");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_124);
    UnderlyingInstrument_124.insert(UnderlyingTimeUnit_124.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_124("STRING_876115441");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_124);
    UnderlyingInstrument_124.insert(UnderlyingUnitOfMeasure_124.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_124;
    UnderlyingUnitOfMeasureQty_124.setString("21214546");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_124);
    UnderlyingInstrument_124.insert(UnderlyingUnitOfMeasureQty_124.getString());
    all_values.push_back(UnderlyingInstrument_124);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_248;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_248("STRING_586362775");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_248);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_248.insert(UnderlyingSecurityAltID_248.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_248("STRING_1389231550");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_248);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_248.insert(UnderlyingSecurityAltIDSource_248.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_248);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_249;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_249("STRING_436321313");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_249);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_249.insert(UnderlyingSecurityAltID_249.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_249("STRING_712855477");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_249);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_249.insert(UnderlyingSecurityAltIDSource_249.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_249);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_234;
      FIX::UnderlyingStipType UnderlyingStipType_234("STRING_2125086290");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_234);
      UnderlyingStipulations_NoUnderlyingStips_234.insert(UnderlyingStipType_234.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_234("STRING_2061858428");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_234);
      UnderlyingStipulations_NoUnderlyingStips_234.insert(UnderlyingStipValue_234.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_234);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_235;
      FIX::UnderlyingStipType UnderlyingStipType_235("STRING_1145697869");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_235);
      UnderlyingStipulations_NoUnderlyingStips_235.insert(UnderlyingStipType_235.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_235("STRING_642037950");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_235);
      UnderlyingStipulations_NoUnderlyingStips_235.insert(UnderlyingStipValue_235.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_235);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_236;
      FIX::UnderlyingStipType UnderlyingStipType_236("STRING_1929200537");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_236);
      UnderlyingStipulations_NoUnderlyingStips_236.insert(UnderlyingStipType_236.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_236("STRING_1727699035");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_236);
      UnderlyingStipulations_NoUnderlyingStips_236.insert(UnderlyingStipValue_236.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_236);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_252;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_252("STRING_263144987");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_252);
      UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyID_252.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_252('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_252);
      UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyIDSource_252.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_252(1437412691);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_252);
      UndlyInstrumentParties_NoUndlyInstrumentParties_252.insert(UnderlyingInstrumentPartyRole_252.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_252);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_471("STRING_1103814017");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_471);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471.insert(UnderlyingInstrumentPartySubID_471.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_471(205503087);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_471);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471.insert(UnderlyingInstrumentPartySubIDType_471.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_472("STRING_842774778");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_472);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472.insert(UnderlyingInstrumentPartySubID_472.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_472(1485945916);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_472);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472.insert(UnderlyingInstrumentPartySubIDType_472.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_253;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_253("STRING_2127974199");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_253);
      UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyID_253.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_253('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_253);
      UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyIDSource_253.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_253(1349612755);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_253);
      UndlyInstrumentParties_NoUndlyInstrumentParties_253.insert(UnderlyingInstrumentPartyRole_253.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_253);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_473("STRING_1929386450");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_473);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473.insert(UnderlyingInstrumentPartySubID_473.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_473(1346533017);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_473);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473.insert(UnderlyingInstrumentPartySubIDType_473.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_254;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_254("STRING_1865025117");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_254);
      UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyID_254.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_254('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_254);
      UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyIDSource_254.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_254(75164811);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_254);
      UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyRole_254.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_254);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_474("STRING_815234314");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_474);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474.insert(UnderlyingInstrumentPartySubID_474.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_474(661527586);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_474);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474.insert(UnderlyingInstrumentPartySubIDType_474.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_475("STRING_1080743971");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_475);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475.insert(UnderlyingInstrumentPartySubID_475.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_475(1251555627);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_475);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475.insert(UnderlyingInstrumentPartySubIDType_475.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_476("STRING_1374383063");
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubID_476);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476.insert(UnderlyingInstrumentPartySubID_476.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_476(761059918);
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubIDType_476);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476.insert(UnderlyingInstrumentPartySubIDType_476.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_23;
  FIX::Yield Yield_23;
  Yield_23.setString("82.700000");
  msg.set(Yield_23);
  YieldData_23.insert(Yield_23.getString());
  FIX::YieldCalcDate YieldCalcDate_23("LOCALMKTDATE_1288757843");
  msg.set(YieldCalcDate_23);
  YieldData_23.insert(YieldCalcDate_23.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_23("LOCALMKTDATE_1906757787");
  msg.set(YieldRedemptionDate_23);
  YieldData_23.insert(YieldRedemptionDate_23.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_23;
  YieldRedemptionPrice_23.setString("18711962");
  msg.set(YieldRedemptionPrice_23);
  YieldData_23.insert(YieldRedemptionPrice_23.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_23(1070474732);
  msg.set(YieldRedemptionPriceType_23);
  YieldData_23.insert(YieldRedemptionPriceType_23.getString());
  FIX::YieldType YieldType_23("STRING_CALL");
  msg.set(YieldType_23);
  YieldData_23.insert(YieldType_23.getString());
  all_values.push_back(YieldData_23);


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
