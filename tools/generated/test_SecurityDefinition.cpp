#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityDefinition.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinition, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinition msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinition_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_20("LOCALMKTDATE_523080724");
  msg.set(ClearingBusinessDate_20);
  SecurityDefinition_0.insert(ClearingBusinessDate_20.getString());
  FIX::CorporateAction CorporateAction_7("MULTIPLECHARVALUE_U");
  msg.set(CorporateAction_7);
  SecurityDefinition_0.insert(CorporateAction_7.getString());
  FIX::Currency Currency_63("EUR");
  msg.set(Currency_63);
  SecurityDefinition_0.insert(Currency_63.getString());
  FIX::EncodedText EncodedText_82("DATA_1535094284");
  msg.set(EncodedText_82);
  SecurityDefinition_0.insert(EncodedText_82.getString());
  FIX::EncodedTextLen EncodedTextLen_82(1866424168);
  msg.set(EncodedTextLen_82);
  SecurityDefinition_0.insert(EncodedTextLen_82.getString());
  FIX::SecurityReportID SecurityReportID_1(608588287);
  msg.set(SecurityReportID_1);
  SecurityDefinition_0.insert(SecurityReportID_1.getString());
  FIX::SecurityReqID SecurityReqID_3("STRING_1481102454");
  msg.set(SecurityReqID_3);
  SecurityDefinition_0.insert(SecurityReqID_3.getString());
  FIX::SecurityResponseID SecurityResponseID_2("STRING_24878140");
  msg.set(SecurityResponseID_2);
  SecurityDefinition_0.insert(SecurityResponseID_2.getString());
  FIX::SecurityResponseType SecurityResponseType_0(4);
  msg.set(SecurityResponseType_0);
  SecurityDefinition_0.insert(SecurityResponseType_0.getString());
  FIX::Text Text_82("STRING_2005401372");
  msg.set(Text_82);
  SecurityDefinition_0.insert(Text_82.getString());
  FIX::TransactTime TransactTime_63(FIX::UTCTIMESTAMP(22, 54, 37, 21, 10, 2012));
  msg.set(TransactTime_63);
  SecurityDefinition_0.insert(TransactTime_63.getString());
  all_values.push_back(SecurityDefinition_0);

  all_compo_names.insert("SecurityDefinition");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_12;
  FIX::ApplID ApplID_12("STRING_1378546415");
  msg.set(ApplID_12);
  ApplicationSequenceControl_12.insert(ApplID_12.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_12(106136319);
  msg.set(ApplLastSeqNum_12);
  ApplicationSequenceControl_12.insert(ApplLastSeqNum_12.getString());
  FIX::ApplResendFlag ApplResendFlag_12(true);
  msg.set(ApplResendFlag_12);
  ApplicationSequenceControl_12.insert(ApplResendFlag_12.getString());
  FIX::ApplSeqNum ApplSeqNum_12(2076157137);
  msg.set(ApplSeqNum_12);
  ApplicationSequenceControl_12.insert(ApplSeqNum_12.getString());
  all_values.push_back(ApplicationSequenceControl_12);
  all_compo_names.insert("ApplicationSequenceControl");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinition::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_128;
    FIX::EncodedLegIssuer EncodedLegIssuer_128("DATA_1036531352");
    noLegs_0_0.set(EncodedLegIssuer_128);
    InstrumentLeg_128.insert(EncodedLegIssuer_128.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_128(646919050);
    noLegs_0_0.set(EncodedLegIssuerLen_128);
    InstrumentLeg_128.insert(EncodedLegIssuerLen_128.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_128("DATA_1045431869");
    noLegs_0_0.set(EncodedLegSecurityDesc_128);
    InstrumentLeg_128.insert(EncodedLegSecurityDesc_128.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_128(565403172);
    noLegs_0_0.set(EncodedLegSecurityDescLen_128);
    InstrumentLeg_128.insert(EncodedLegSecurityDescLen_128.getString());
    FIX::LegCFICode LegCFICode_128("STRING_1301626810");
    noLegs_0_0.set(LegCFICode_128);
    InstrumentLeg_128.insert(LegCFICode_128.getString());
    FIX::LegContractMultiplier LegContractMultiplier_128;
    LegContractMultiplier_128.setString("4745879");
    noLegs_0_0.set(LegContractMultiplier_128);
    InstrumentLeg_128.insert(LegContractMultiplier_128.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_128(768277411);
    noLegs_0_0.set(LegContractMultiplierUnit_128);
    InstrumentLeg_128.insert(LegContractMultiplierUnit_128.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_128("MONTHYEAR_1413355482");
    noLegs_0_0.set(LegContractSettlMonth_128);
    InstrumentLeg_128.insert(LegContractSettlMonth_128.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_128("COUNTRY_997668652");
    noLegs_0_0.set(LegCountryOfIssue_128);
    InstrumentLeg_128.insert(LegCountryOfIssue_128.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_128("LOCALMKTDATE_1309868022");
    noLegs_0_0.set(LegCouponPaymentDate_128);
    InstrumentLeg_128.insert(LegCouponPaymentDate_128.getString());
    FIX::LegCouponRate LegCouponRate_128;
    LegCouponRate_128.setString("70.370000");
    noLegs_0_0.set(LegCouponRate_128);
    InstrumentLeg_128.insert(LegCouponRate_128.getString());
    FIX::LegCreditRating LegCreditRating_128("STRING_1179703499");
    noLegs_0_0.set(LegCreditRating_128);
    InstrumentLeg_128.insert(LegCreditRating_128.getString());
    FIX::LegCurrency LegCurrency_128("CHF");
    noLegs_0_0.set(LegCurrency_128);
    InstrumentLeg_128.insert(LegCurrency_128.getString());
    FIX::LegDatedDate LegDatedDate_128("LOCALMKTDATE_1788291786");
    noLegs_0_0.set(LegDatedDate_128);
    InstrumentLeg_128.insert(LegDatedDate_128.getString());
    FIX::LegExerciseStyle LegExerciseStyle_128(31097465);
    noLegs_0_0.set(LegExerciseStyle_128);
    InstrumentLeg_128.insert(LegExerciseStyle_128.getString());
    FIX::LegFactor LegFactor_128;
    LegFactor_128.setString("7628856");
    noLegs_0_0.set(LegFactor_128);
    InstrumentLeg_128.insert(LegFactor_128.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_128(1905516148);
    noLegs_0_0.set(LegFlowScheduleType_128);
    InstrumentLeg_128.insert(LegFlowScheduleType_128.getString());
    FIX::LegInstrRegistry LegInstrRegistry_128("STRING_2036498837");
    noLegs_0_0.set(LegInstrRegistry_128);
    InstrumentLeg_128.insert(LegInstrRegistry_128.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_128("LOCALMKTDATE_1684342477");
    noLegs_0_0.set(LegInterestAccrualDate_128);
    InstrumentLeg_128.insert(LegInterestAccrualDate_128.getString());
    FIX::LegIssueDate LegIssueDate_128("LOCALMKTDATE_198017994");
    noLegs_0_0.set(LegIssueDate_128);
    InstrumentLeg_128.insert(LegIssueDate_128.getString());
    FIX::LegIssuer LegIssuer_128("STRING_1986541383");
    noLegs_0_0.set(LegIssuer_128);
    InstrumentLeg_128.insert(LegIssuer_128.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_128("STRING_1541882467");
    noLegs_0_0.set(LegLocaleOfIssue_128);
    InstrumentLeg_128.insert(LegLocaleOfIssue_128.getString());
    FIX::LegMaturityDate LegMaturityDate_128("LOCALMKTDATE_364584975");
    noLegs_0_0.set(LegMaturityDate_128);
    InstrumentLeg_128.insert(LegMaturityDate_128.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_128("MONTHYEAR_891838420");
    noLegs_0_0.set(LegMaturityMonthYear_128);
    InstrumentLeg_128.insert(LegMaturityMonthYear_128.getString());
    FIX::LegMaturityTime LegMaturityTime_128("TZTIMEONLY_647302781");
    noLegs_0_0.set(LegMaturityTime_128);
    InstrumentLeg_128.insert(LegMaturityTime_128.getString());
    FIX::LegOptAttribute LegOptAttribute_128('1');
    noLegs_0_0.set(LegOptAttribute_128);
    InstrumentLeg_128.insert(LegOptAttribute_128.getString());
    FIX::LegOptionRatio LegOptionRatio_128;
    LegOptionRatio_128.setString("9979747");
    noLegs_0_0.set(LegOptionRatio_128);
    InstrumentLeg_128.insert(LegOptionRatio_128.getString());
    FIX::LegPool LegPool_128("STRING_1324605915");
    noLegs_0_0.set(LegPool_128);
    InstrumentLeg_128.insert(LegPool_128.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_128("STRING_1671804880");
    noLegs_0_0.set(LegPriceUnitOfMeasure_128);
    InstrumentLeg_128.insert(LegPriceUnitOfMeasure_128.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_128;
    LegPriceUnitOfMeasureQty_128.setString("2551529");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_128);
    InstrumentLeg_128.insert(LegPriceUnitOfMeasureQty_128.getString());
    FIX::LegProduct LegProduct_128(213653619);
    noLegs_0_0.set(LegProduct_128);
    InstrumentLeg_128.insert(LegProduct_128.getString());
    FIX::LegPutOrCall LegPutOrCall_128(171240282);
    noLegs_0_0.set(LegPutOrCall_128);
    InstrumentLeg_128.insert(LegPutOrCall_128.getString());
    FIX::LegRatioQty LegRatioQty_128;
    LegRatioQty_128.setString("13005848");
    noLegs_0_0.set(LegRatioQty_128);
    InstrumentLeg_128.insert(LegRatioQty_128.getString());
    FIX::LegRedemptionDate LegRedemptionDate_128("LOCALMKTDATE_779056792");
    noLegs_0_0.set(LegRedemptionDate_128);
    InstrumentLeg_128.insert(LegRedemptionDate_128.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_128("STRING_1472867092");
    noLegs_0_0.set(LegRepoCollateralSecurityType_128);
    InstrumentLeg_128.insert(LegRepoCollateralSecurityType_128.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_128;
    LegRepurchaseRate_128.setString("27.580000");
    noLegs_0_0.set(LegRepurchaseRate_128);
    InstrumentLeg_128.insert(LegRepurchaseRate_128.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_128(1547334203);
    noLegs_0_0.set(LegRepurchaseTerm_128);
    InstrumentLeg_128.insert(LegRepurchaseTerm_128.getString());
    FIX::LegSecurityDesc LegSecurityDesc_128("STRING_738738926");
    noLegs_0_0.set(LegSecurityDesc_128);
    InstrumentLeg_128.insert(LegSecurityDesc_128.getString());
    FIX::LegSecurityExchange LegSecurityExchange_128("EXCHANGE_625357762");
    noLegs_0_0.set(LegSecurityExchange_128);
    InstrumentLeg_128.insert(LegSecurityExchange_128.getString());
    FIX::LegSecurityID LegSecurityID_128("STRING_709718577");
    noLegs_0_0.set(LegSecurityID_128);
    InstrumentLeg_128.insert(LegSecurityID_128.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_128("STRING_1757805963");
    noLegs_0_0.set(LegSecurityIDSource_128);
    InstrumentLeg_128.insert(LegSecurityIDSource_128.getString());
    FIX::LegSecuritySubType LegSecuritySubType_128("STRING_1805061261");
    noLegs_0_0.set(LegSecuritySubType_128);
    InstrumentLeg_128.insert(LegSecuritySubType_128.getString());
    FIX::LegSecurityType LegSecurityType_128("STRING_1407197235");
    noLegs_0_0.set(LegSecurityType_128);
    InstrumentLeg_128.insert(LegSecurityType_128.getString());
    FIX::LegSide LegSide_128('3');
    noLegs_0_0.set(LegSide_128);
    InstrumentLeg_128.insert(LegSide_128.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_128("STRING_1445869399");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_128);
    InstrumentLeg_128.insert(LegStateOrProvinceOfIssue_128.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_128("CAN");
    noLegs_0_0.set(LegStrikeCurrency_128);
    InstrumentLeg_128.insert(LegStrikeCurrency_128.getString());
    FIX::LegStrikePrice LegStrikePrice_128;
    LegStrikePrice_128.setString("12039018");
    noLegs_0_0.set(LegStrikePrice_128);
    InstrumentLeg_128.insert(LegStrikePrice_128.getString());
    FIX::LegSymbol LegSymbol_128("STRING_1327309889");
    noLegs_0_0.set(LegSymbol_128);
    InstrumentLeg_128.insert(LegSymbol_128.getString());
    FIX::LegSymbolSfx LegSymbolSfx_128("STRING_648074398");
    noLegs_0_0.set(LegSymbolSfx_128);
    InstrumentLeg_128.insert(LegSymbolSfx_128.getString());
    FIX::LegTimeUnit LegTimeUnit_128("STRING_1401919893");
    noLegs_0_0.set(LegTimeUnit_128);
    InstrumentLeg_128.insert(LegTimeUnit_128.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_128("STRING_1166367625");
    noLegs_0_0.set(LegUnitOfMeasure_128);
    InstrumentLeg_128.insert(LegUnitOfMeasure_128.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_128;
    LegUnitOfMeasureQty_128.setString("424732");
    noLegs_0_0.set(LegUnitOfMeasureQty_128);
    InstrumentLeg_128.insert(LegUnitOfMeasureQty_128.getString());
    all_values.push_back(InstrumentLeg_128);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_255;
      FIX::LegSecurityAltID LegSecurityAltID_255("STRING_2058206045");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_255);
      LegSecAltIDGrp_NoLegSecurityAltID_255.insert(LegSecurityAltID_255.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_255("STRING_689775999");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_255);
      LegSecAltIDGrp_NoLegSecurityAltID_255.insert(LegSecurityAltIDSource_255.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_255);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_80;
  FIX::AttachmentPoint AttachmentPoint_80;
  AttachmentPoint_80.setString("26.110000");
  msg.set(AttachmentPoint_80);
  Instrument_80.insert(AttachmentPoint_80.getString());
  FIX::CFICode CFICode_80("STRING_908697137");
  msg.set(CFICode_80);
  Instrument_80.insert(CFICode_80.getString());
  FIX::CPProgram CPProgram_80(1);
  msg.set(CPProgram_80);
  Instrument_80.insert(CPProgram_80.getString());
  FIX::CPRegType CPRegType_80("STRING_886473843");
  msg.set(CPRegType_80);
  Instrument_80.insert(CPRegType_80.getString());
  FIX::CapPrice CapPrice_80;
  CapPrice_80.setString("11638500");
  msg.set(CapPrice_80);
  Instrument_80.insert(CapPrice_80.getString());
  FIX::ContractMultiplier ContractMultiplier_80;
  ContractMultiplier_80.setString("805518");
  msg.set(ContractMultiplier_80);
  Instrument_80.insert(ContractMultiplier_80.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_80(0);
  msg.set(ContractMultiplierUnit_80);
  Instrument_80.insert(ContractMultiplierUnit_80.getString());
  FIX::ContractSettlMonth ContractSettlMonth_80("MONTHYEAR_316951280");
  msg.set(ContractSettlMonth_80);
  Instrument_80.insert(ContractSettlMonth_80.getString());
  FIX::CountryOfIssue CountryOfIssue_80("COUNTRY_859608678");
  msg.set(CountryOfIssue_80);
  Instrument_80.insert(CountryOfIssue_80.getString());
  FIX::CouponPaymentDate CouponPaymentDate_80("LOCALMKTDATE_383097569");
  msg.set(CouponPaymentDate_80);
  Instrument_80.insert(CouponPaymentDate_80.getString());
  FIX::CouponRate CouponRate_80;
  CouponRate_80.setString("40.380000");
  msg.set(CouponRate_80);
  Instrument_80.insert(CouponRate_80.getString());
  FIX::CreditRating CreditRating_80("STRING_259459233");
  msg.set(CreditRating_80);
  Instrument_80.insert(CreditRating_80.getString());
  FIX::DatedDate DatedDate_80("LOCALMKTDATE_1121836495");
  msg.set(DatedDate_80);
  Instrument_80.insert(DatedDate_80.getString());
  FIX::DetachmentPoint DetachmentPoint_80;
  DetachmentPoint_80.setString("81.520000");
  msg.set(DetachmentPoint_80);
  Instrument_80.insert(DetachmentPoint_80.getString());
  FIX::EncodedIssuer EncodedIssuer_80("DATA_969177810");
  msg.set(EncodedIssuer_80);
  Instrument_80.insert(EncodedIssuer_80.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_80(732158810);
  msg.set(EncodedIssuerLen_80);
  Instrument_80.insert(EncodedIssuerLen_80.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_80("DATA_227575765");
  msg.set(EncodedSecurityDesc_80);
  Instrument_80.insert(EncodedSecurityDesc_80.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_80(228891397);
  msg.set(EncodedSecurityDescLen_80);
  Instrument_80.insert(EncodedSecurityDescLen_80.getString());
  FIX::ExerciseStyle ExerciseStyle_80(0);
  msg.set(ExerciseStyle_80);
  Instrument_80.insert(ExerciseStyle_80.getString());
  FIX::Factor Factor_80;
  Factor_80.setString("16734451");
  msg.set(Factor_80);
  Instrument_80.insert(Factor_80.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_80(true);
  msg.set(FlexProductEligibilityIndicator_80);
  Instrument_80.insert(FlexProductEligibilityIndicator_80.getString());
  FIX::FlexibleIndicator FlexibleIndicator_80(false);
  msg.set(FlexibleIndicator_80);
  Instrument_80.insert(FlexibleIndicator_80.getString());
  FIX::FloorPrice FloorPrice_80;
  FloorPrice_80.setString("7298634");
  msg.set(FloorPrice_80);
  Instrument_80.insert(FloorPrice_80.getString());
  FIX::FlowScheduleType FlowScheduleType_80(4);
  msg.set(FlowScheduleType_80);
  Instrument_80.insert(FlowScheduleType_80.getString());
  FIX::InstrRegistry InstrRegistry_80("STRING_692295001");
  msg.set(InstrRegistry_80);
  Instrument_80.insert(InstrRegistry_80.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_80('2');
  msg.set(InstrmtAssignmentMethod_80);
  Instrument_80.insert(InstrmtAssignmentMethod_80.getString());
  FIX::InterestAccrualDate InterestAccrualDate_80("LOCALMKTDATE_2013379964");
  msg.set(InterestAccrualDate_80);
  Instrument_80.insert(InterestAccrualDate_80.getString());
  FIX::IssueDate IssueDate_80("LOCALMKTDATE_734768219");
  msg.set(IssueDate_80);
  Instrument_80.insert(IssueDate_80.getString());
  FIX::Issuer Issuer_80("STRING_1750804530");
  msg.set(Issuer_80);
  Instrument_80.insert(Issuer_80.getString());
  FIX::ListMethod ListMethod_80(0);
  msg.set(ListMethod_80);
  Instrument_80.insert(ListMethod_80.getString());
  FIX::LocaleOfIssue LocaleOfIssue_80("STRING_1424544218");
  msg.set(LocaleOfIssue_80);
  Instrument_80.insert(LocaleOfIssue_80.getString());
  FIX::MaturityDate MaturityDate_80("LOCALMKTDATE_965473493");
  msg.set(MaturityDate_80);
  Instrument_80.insert(MaturityDate_80.getString());
  FIX::MaturityMonthYear MaturityMonthYear_80("MONTHYEAR_685315851");
  msg.set(MaturityMonthYear_80);
  Instrument_80.insert(MaturityMonthYear_80.getString());
  FIX::MaturityTime MaturityTime_80("TZTIMEONLY_1291442484");
  msg.set(MaturityTime_80);
  Instrument_80.insert(MaturityTime_80.getString());
  FIX::MinPriceIncrement MinPriceIncrement_80;
  MinPriceIncrement_80.setString("18519473");
  msg.set(MinPriceIncrement_80);
  Instrument_80.insert(MinPriceIncrement_80.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_80;
  MinPriceIncrementAmount_80.setString("18491659");
  msg.set(MinPriceIncrementAmount_80);
  Instrument_80.insert(MinPriceIncrementAmount_80.getString());
  FIX::NTPositionLimit NTPositionLimit_80(1371994370);
  msg.set(NTPositionLimit_80);
  Instrument_80.insert(NTPositionLimit_80.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_80;
  NotionalPercentageOutstanding_80.setString("78.130000");
  msg.set(NotionalPercentageOutstanding_80);
  Instrument_80.insert(NotionalPercentageOutstanding_80.getString());
  FIX::OptAttribute OptAttribute_80('1');
  msg.set(OptAttribute_80);
  Instrument_80.insert(OptAttribute_80.getString());
  FIX::OptPayoutAmount OptPayoutAmount_80;
  OptPayoutAmount_80.setString("841194");
  msg.set(OptPayoutAmount_80);
  Instrument_80.insert(OptPayoutAmount_80.getString());
  FIX::OptPayoutType OptPayoutType_80(3);
  msg.set(OptPayoutType_80);
  Instrument_80.insert(OptPayoutType_80.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_80;
  OriginalNotionalPercentageOutstanding_80.setString("76.190000");
  msg.set(OriginalNotionalPercentageOutstanding_80);
  Instrument_80.insert(OriginalNotionalPercentageOutstanding_80.getString());
  FIX::Pool Pool_80("STRING_343578633");
  msg.set(Pool_80);
  Instrument_80.insert(Pool_80.getString());
  FIX::PositionLimit PositionLimit_80(119628229);
  msg.set(PositionLimit_80);
  Instrument_80.insert(PositionLimit_80.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_80("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_80);
  Instrument_80.insert(PriceQuoteMethod_80.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_80("STRING_1312756443");
  msg.set(PriceUnitOfMeasure_80);
  Instrument_80.insert(PriceUnitOfMeasure_80.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_80;
  PriceUnitOfMeasureQty_80.setString("8517870");
  msg.set(PriceUnitOfMeasureQty_80);
  Instrument_80.insert(PriceUnitOfMeasureQty_80.getString());
  FIX::Product Product_82(9);
  msg.set(Product_82);
  Instrument_80.insert(Product_82.getString());
  FIX::ProductComplex ProductComplex_80("STRING_1541647841");
  msg.set(ProductComplex_80);
  Instrument_80.insert(ProductComplex_80.getString());
  FIX::PutOrCall PutOrCall_80(1);
  msg.set(PutOrCall_80);
  Instrument_80.insert(PutOrCall_80.getString());
  FIX::RedemptionDate RedemptionDate_80("LOCALMKTDATE_286809404");
  msg.set(RedemptionDate_80);
  Instrument_80.insert(RedemptionDate_80.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_80("STRING_1061350291");
  msg.set(RepoCollateralSecurityType_80);
  Instrument_80.insert(RepoCollateralSecurityType_80.getString());
  FIX::RepurchaseRate RepurchaseRate_80;
  RepurchaseRate_80.setString("63.240000");
  msg.set(RepurchaseRate_80);
  Instrument_80.insert(RepurchaseRate_80.getString());
  FIX::RepurchaseTerm RepurchaseTerm_80(1016672820);
  msg.set(RepurchaseTerm_80);
  Instrument_80.insert(RepurchaseTerm_80.getString());
  FIX::RestructuringType RestructuringType_80("STRING_MM");
  msg.set(RestructuringType_80);
  Instrument_80.insert(RestructuringType_80.getString());
  FIX::SecurityDesc SecurityDesc_80("STRING_521307677");
  msg.set(SecurityDesc_80);
  Instrument_80.insert(SecurityDesc_80.getString());
  FIX::SecurityExchange SecurityExchange_80("EXCHANGE_1000972482");
  msg.set(SecurityExchange_80);
  Instrument_80.insert(SecurityExchange_80.getString());
  FIX::SecurityGroup SecurityGroup_80("STRING_1774258947");
  msg.set(SecurityGroup_80);
  Instrument_80.insert(SecurityGroup_80.getString());
  FIX::SecurityID SecurityID_80("STRING_1256075896");
  msg.set(SecurityID_80);
  Instrument_80.insert(SecurityID_80.getString());
  FIX::SecurityIDSource SecurityIDSource_80("STRING_5");
  msg.set(SecurityIDSource_80);
  Instrument_80.insert(SecurityIDSource_80.getString());
  FIX::SecurityStatus SecurityStatus_80("STRING_2");
  msg.set(SecurityStatus_80);
  Instrument_80.insert(SecurityStatus_80.getString());
  FIX::SecuritySubType SecuritySubType_81("STRING_533136466");
  msg.set(SecuritySubType_81);
  Instrument_80.insert(SecuritySubType_81.getString());
  FIX::SecurityType SecurityType_82("STRING_CASH");
  msg.set(SecurityType_82);
  Instrument_80.insert(SecurityType_82.getString());
  FIX::Seniority Seniority_80("STRING_SB");
  msg.set(Seniority_80);
  Instrument_80.insert(Seniority_80.getString());
  FIX::SettlMethod SettlMethod_80('P');
  msg.set(SettlMethod_80);
  Instrument_80.insert(SettlMethod_80.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_80("STRING_1274230545");
  msg.set(SettleOnOpenFlag_80);
  Instrument_80.insert(SettleOnOpenFlag_80.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_80("STRING_1937875813");
  msg.set(StateOrProvinceOfIssue_80);
  Instrument_80.insert(StateOrProvinceOfIssue_80.getString());
  FIX::StrikeCurrency StrikeCurrency_80("USD");
  msg.set(StrikeCurrency_80);
  Instrument_80.insert(StrikeCurrency_80.getString());
  FIX::StrikeMultiplier StrikeMultiplier_80;
  StrikeMultiplier_80.setString("19565093");
  msg.set(StrikeMultiplier_80);
  Instrument_80.insert(StrikeMultiplier_80.getString());
  FIX::StrikePrice StrikePrice_80;
  StrikePrice_80.setString("11332090");
  msg.set(StrikePrice_80);
  Instrument_80.insert(StrikePrice_80.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_80(3);
  msg.set(StrikePriceBoundaryMethod_80);
  Instrument_80.insert(StrikePriceBoundaryMethod_80.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_80;
  StrikePriceBoundaryPrecision_80.setString("33.650000");
  msg.set(StrikePriceBoundaryPrecision_80);
  Instrument_80.insert(StrikePriceBoundaryPrecision_80.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_80(4);
  msg.set(StrikePriceDeterminationMethod_80);
  Instrument_80.insert(StrikePriceDeterminationMethod_80.getString());
  FIX::StrikeValue StrikeValue_80;
  StrikeValue_80.setString("11538283");
  msg.set(StrikeValue_80);
  Instrument_80.insert(StrikeValue_80.getString());
  FIX::Symbol Symbol_80("STRING_305571840");
  msg.set(Symbol_80);
  Instrument_80.insert(Symbol_80.getString());
  FIX::SymbolSfx SymbolSfx_80("STRING_WI");
  msg.set(SymbolSfx_80);
  Instrument_80.insert(SymbolSfx_80.getString());
  FIX::TimeUnit TimeUnit_80("STRING_H");
  msg.set(TimeUnit_80);
  Instrument_80.insert(TimeUnit_80.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_80(1);
  msg.set(UnderlyingPriceDeterminationMethod_80);
  Instrument_80.insert(UnderlyingPriceDeterminationMethod_80.getString());
  FIX::UnitOfMeasure UnitOfMeasure_80("STRING_MMbbl");
  msg.set(UnitOfMeasure_80);
  Instrument_80.insert(UnitOfMeasure_80.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_80;
  UnitOfMeasureQty_80.setString("17904074");
  msg.set(UnitOfMeasureQty_80);
  Instrument_80.insert(UnitOfMeasureQty_80.getString());
  FIX::ValuationMethod ValuationMethod_80("STRING_FUTDA");
  msg.set(ValuationMethod_80);
  Instrument_80.insert(ValuationMethod_80.getString());
  all_values.push_back(Instrument_80);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinition::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_165;
    FIX::ComplexEventCondition ComplexEventCondition_165(2);
    noComplexEvents_0_0.set(ComplexEventCondition_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventCondition_165.getString());
    FIX::ComplexEventPrice ComplexEventPrice_165;
    ComplexEventPrice_165.setString("2224183");
    noComplexEvents_0_0.set(ComplexEventPrice_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventPrice_165.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_165(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceBoundaryMethod_165.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_165;
    ComplexEventPriceBoundaryPrecision_165.setString("77.860000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceBoundaryPrecision_165.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_165(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceTimeType_165.getString());
    FIX::ComplexEventType ComplexEventType_165(2);
    noComplexEvents_0_0.set(ComplexEventType_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexEventType_165.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_165;
    ComplexOptPayoutAmount_165.setString("12493200");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_165);
    ComplexEvents_NoComplexEvents_165.insert(ComplexOptPayoutAmount_165.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_165);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_334;
      FIX::ComplexEventEndDate ComplexEventEndDate_334(FIX::UTCTIMESTAMP(21, 20, 13, 4, 10, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_334);
      ComplexEventDates_NoComplexEventDates_334.insert(ComplexEventEndDate_334.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_334(FIX::UTCTIMESTAMP(7, 4, 4, 15, 10, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_334);
      ComplexEventDates_NoComplexEventDates_334.insert(ComplexEventStartDate_334.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_334);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_679;
        FIX::ComplexEventEndTime ComplexEventEndTime_679(FIX::UTCTIMEONLY(10, 44, 21));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_679);
        ComplexEventTimes_NoComplexEventTimes_679.insert(ComplexEventEndTime_679.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_679(FIX::UTCTIMEONLY(13, 14, 1));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_679);
        ComplexEventTimes_NoComplexEventTimes_679.insert(ComplexEventStartTime_679.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_679);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_335;
      FIX::ComplexEventEndDate ComplexEventEndDate_335(FIX::UTCTIMESTAMP(3, 11, 56, 14, 4, 2017));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_335);
      ComplexEventDates_NoComplexEventDates_335.insert(ComplexEventEndDate_335.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_335(FIX::UTCTIMESTAMP(13, 37, 53, 6, 2, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_335);
      ComplexEventDates_NoComplexEventDates_335.insert(ComplexEventStartDate_335.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_335);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_680;
        FIX::ComplexEventEndTime ComplexEventEndTime_680(FIX::UTCTIMEONLY(21, 13, 7));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_680);
        ComplexEventTimes_NoComplexEventTimes_680.insert(ComplexEventEndTime_680.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_680(FIX::UTCTIMEONLY(3, 23, 20));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_680);
        ComplexEventTimes_NoComplexEventTimes_680.insert(ComplexEventStartTime_680.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_680);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_681;
        FIX::ComplexEventEndTime ComplexEventEndTime_681(FIX::UTCTIMEONLY(21, 4, 2));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_681);
        ComplexEventTimes_NoComplexEventTimes_681.insert(ComplexEventEndTime_681.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_681(FIX::UTCTIMEONLY(21, 8, 45));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_681);
        ComplexEventTimes_NoComplexEventTimes_681.insert(ComplexEventStartTime_681.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_681);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_682;
        FIX::ComplexEventEndTime ComplexEventEndTime_682(FIX::UTCTIMEONLY(11, 48, 59));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_682);
        ComplexEventTimes_NoComplexEventTimes_682.insert(ComplexEventEndTime_682.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_682(FIX::UTCTIMEONLY(8, 23, 50));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_682);
        ComplexEventTimes_NoComplexEventTimes_682.insert(ComplexEventStartTime_682.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_682);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_163;
    FIX::EventDate EventDate_163("LOCALMKTDATE_1605259920");
    noEvents_0_0.set(EventDate_163);
    EvntGrp_NoEvents_163.insert(EventDate_163.getString());
    FIX::EventPx EventPx_163;
    EventPx_163.setString("12400650");
    noEvents_0_0.set(EventPx_163);
    EvntGrp_NoEvents_163.insert(EventPx_163.getString());
    FIX::EventText EventText_163("STRING_1282566859");
    noEvents_0_0.set(EventText_163);
    EvntGrp_NoEvents_163.insert(EventText_163.getString());
    FIX::EventTime EventTime_163(FIX::UTCTIMESTAMP(9, 28, 57, 10, 7, 2014));
    noEvents_0_0.set(EventTime_163);
    EvntGrp_NoEvents_163.insert(EventTime_163.getString());
    FIX::EventType EventType_163(11);
    noEvents_0_0.set(EventType_163);
    EvntGrp_NoEvents_163.insert(EventType_163.getString());
    all_values.push_back(EvntGrp_NoEvents_163);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_167;
    FIX::InstrumentPartyID InstrumentPartyID_167("STRING_81294379");
    noInstrumentParties_0_0.set(InstrumentPartyID_167);
    InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyID_167.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_167('6');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_167);
    InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyIDSource_167.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_167(1935710449);
    noInstrumentParties_0_0.set(InstrumentPartyRole_167);
    InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyRole_167.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_167);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325;
      FIX::InstrumentPartySubID InstrumentPartySubID_325("STRING_1048863354");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_325);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325.insert(InstrumentPartySubID_325.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_325(519106063);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_325);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325.insert(InstrumentPartySubIDType_325.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326;
      FIX::InstrumentPartySubID InstrumentPartySubID_326("STRING_220732025");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_326);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326.insert(InstrumentPartySubID_326.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_326(1276591527);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_326);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326.insert(InstrumentPartySubIDType_326.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327;
      FIX::InstrumentPartySubID InstrumentPartySubID_327("STRING_1176773151");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_327);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327.insert(InstrumentPartySubID_327.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_327(1493476430);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_327);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327.insert(InstrumentPartySubIDType_327.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinition::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_150;
    FIX::SecurityAltID SecurityAltID_150("STRING_1983646370");
    noSecurityAltID_0_0.set(SecurityAltID_150);
    SecAltIDGrp_NoSecurityAltID_150.insert(SecurityAltID_150.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_150("STRING_1929238659");
    noSecurityAltID_0_0.set(SecurityAltIDSource_150);
    SecAltIDGrp_NoSecurityAltID_150.insert(SecurityAltIDSource_150.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_150);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_160;
  FIX::SecurityXML SecurityXML_161("XMLDATA_1710302729");
  msg.set(SecurityXML_161);
  FIX::SecurityXMLLen SecurityXMLLen_80(2015632859);
  msg.set(SecurityXMLLen_80);
  FIX::SecurityXMLSchema SecurityXMLSchema_80("STRING_2013247979");
  msg.set(SecurityXMLSchema_80);
  SecurityXML_160.insert(SecurityXMLSchema_80.getString());
  all_values.push_back(SecurityXML_160);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_9;
  FIX::DeliveryForm DeliveryForm_9(1);
  msg.set(DeliveryForm_9);
  InstrumentExtension_9.insert(DeliveryForm_9.getString());
  FIX::PctAtRisk PctAtRisk_9;
  PctAtRisk_9.setString("31.210000");
  msg.set(PctAtRisk_9);
  InstrumentExtension_9.insert(PctAtRisk_9.getString());
  all_values.push_back(InstrumentExtension_9);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_17;
    FIX::InstrAttribType InstrAttribType_17(7);
    noInstrAttrib_0_0.set(InstrAttribType_17);
    AttrbGrp_NoInstrAttrib_17.insert(InstrAttribType_17.getString());
    FIX::InstrAttribValue InstrAttribValue_17("STRING_45514516");
    noInstrAttrib_0_0.set(InstrAttribValue_17);
    AttrbGrp_NoInstrAttrib_17.insert(InstrAttribValue_17.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_17);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_6;
    FIX::MarketID MarketID_15("EXCHANGE_1543183350");
    noMarketSegments_0_0.set(MarketID_15);
    MarketSegmentGrp_NoMarketSegments_6.insert(MarketID_15.getString());
    FIX::MarketSegmentID MarketSegmentID_15("STRING_1817574949");
    noMarketSegments_0_0.set(MarketSegmentID_15);
    MarketSegmentGrp_NoMarketSegments_6.insert(MarketSegmentID_15.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_6);
    all_compo_names.insert("MarketSegmentGrp.NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_8;
    FIX::ExpirationCycle ExpirationCycle_8(1);
    noMarketSegments_0_0.set(ExpirationCycle_8);
    BaseTradingRules_8.insert(ExpirationCycle_8.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_8(3);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_8);
    BaseTradingRules_8.insert(ImpliedMarketIndicator_8.getString());
    FIX::MaxPriceVariation MaxPriceVariation_8;
    MaxPriceVariation_8.setString("923024");
    noMarketSegments_0_0.set(MaxPriceVariation_8);
    BaseTradingRules_8.insert(MaxPriceVariation_8.getString());
    FIX::MaxTradeVol MaxTradeVol_8;
    MaxTradeVol_8.setString("7568821");
    noMarketSegments_0_0.set(MaxTradeVol_8);
    BaseTradingRules_8.insert(MaxTradeVol_8.getString());
    FIX::MinTradeVol MinTradeVol_8;
    MinTradeVol_8.setString("3804806");
    noMarketSegments_0_0.set(MinTradeVol_8);
    BaseTradingRules_8.insert(MinTradeVol_8.getString());
    FIX::MultilegModel MultilegModel_10(0);
    noMarketSegments_0_0.set(MultilegModel_10);
    BaseTradingRules_8.insert(MultilegModel_10.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_10(3);
    noMarketSegments_0_0.set(MultilegPriceMethod_10);
    BaseTradingRules_8.insert(MultilegPriceMethod_10.getString());
    FIX::PriceType PriceType_42(13);
    noMarketSegments_0_0.set(PriceType_42);
    BaseTradingRules_8.insert(PriceType_42.getString());
    FIX::RoundLot RoundLot_8;
    RoundLot_8.setString("10928777");
    noMarketSegments_0_0.set(RoundLot_8);
    BaseTradingRules_8.insert(RoundLot_8.getString());
    FIX::TradingCurrency TradingCurrency_8("JPY");
    noMarketSegments_0_0.set(TradingCurrency_8);
    BaseTradingRules_8.insert(TradingCurrency_8.getString());
    all_values.push_back(BaseTradingRules_8);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_14;
      FIX::LotType LotType_18('1');
      noLotTypeRules_0_1_0.set(LotType_18);
      LotTypeRules_NoLotTypeRules_14.insert(LotType_18.getString());
      FIX::MinLotSize MinLotSize_14;
      MinLotSize_14.setString("825421");
      noLotTypeRules_0_1_0.set(MinLotSize_14);
      LotTypeRules_NoLotTypeRules_14.insert(MinLotSize_14.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_14);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_15;
      FIX::LotType LotType_19('1');
      noLotTypeRules_0_1_1.set(LotType_19);
      LotTypeRules_NoLotTypeRules_15.insert(LotType_19.getString());
      FIX::MinLotSize MinLotSize_15;
      MinLotSize_15.setString("20193780");
      noLotTypeRules_0_1_1.set(MinLotSize_15);
      LotTypeRules_NoLotTypeRules_15.insert(MinLotSize_15.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_15);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_16;
      FIX::LotType LotType_20('4');
      noLotTypeRules_0_1_2.set(LotType_20);
      LotTypeRules_NoLotTypeRules_16.insert(LotType_20.getString());
      FIX::MinLotSize MinLotSize_16;
      MinLotSize_16.setString("20543443");
      noLotTypeRules_0_1_2.set(MinLotSize_16);
      LotTypeRules_NoLotTypeRules_16.insert(MinLotSize_16.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_16);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_8;
    FIX::HighLimitPrice HighLimitPrice_8;
    HighLimitPrice_8.setString("18555407");
    noMarketSegments_0_0.set(HighLimitPrice_8);
    PriceLimits_8.insert(HighLimitPrice_8.getString());
    FIX::LowLimitPrice LowLimitPrice_8;
    LowLimitPrice_8.setString("13577736");
    noMarketSegments_0_0.set(LowLimitPrice_8);
    PriceLimits_8.insert(LowLimitPrice_8.getString());
    FIX::PriceLimitType PriceLimitType_8(1);
    noMarketSegments_0_0.set(PriceLimitType_8);
    PriceLimits_8.insert(PriceLimitType_8.getString());
    FIX::TradingReferencePrice TradingReferencePrice_8;
    TradingReferencePrice_8.setString("17236899");
    noMarketSegments_0_0.set(TradingReferencePrice_8);
    PriceLimits_8.insert(TradingReferencePrice_8.getString());
    all_values.push_back(PriceLimits_8);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_19;
      FIX::EndTickPriceRange EndTickPriceRange_19;
      EndTickPriceRange_19.setString("4810461");
      noTickRules_0_1_0.set(EndTickPriceRange_19);
      TickRules_NoTickRules_19.insert(EndTickPriceRange_19.getString());
      FIX::StartTickPriceRange StartTickPriceRange_19;
      StartTickPriceRange_19.setString("5291394");
      noTickRules_0_1_0.set(StartTickPriceRange_19);
      TickRules_NoTickRules_19.insert(StartTickPriceRange_19.getString());
      FIX::TickIncrement TickIncrement_19;
      TickIncrement_19.setString("7101819");
      noTickRules_0_1_0.set(TickIncrement_19);
      TickRules_NoTickRules_19.insert(TickIncrement_19.getString());
      FIX::TickRuleType TickRuleType_19(1);
      noTickRules_0_1_0.set(TickRuleType_19);
      TickRules_NoTickRules_19.insert(TickRuleType_19.getString());
      all_values.push_back(TickRules_NoTickRules_19);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_20;
      FIX::EndTickPriceRange EndTickPriceRange_20;
      EndTickPriceRange_20.setString("5746539");
      noTickRules_0_1_1.set(EndTickPriceRange_20);
      TickRules_NoTickRules_20.insert(EndTickPriceRange_20.getString());
      FIX::StartTickPriceRange StartTickPriceRange_20;
      StartTickPriceRange_20.setString("14793928");
      noTickRules_0_1_1.set(StartTickPriceRange_20);
      TickRules_NoTickRules_20.insert(StartTickPriceRange_20.getString());
      FIX::TickIncrement TickIncrement_20;
      TickIncrement_20.setString("3458883");
      noTickRules_0_1_1.set(TickIncrement_20);
      TickRules_NoTickRules_20.insert(TickIncrement_20.getString());
      FIX::TickRuleType TickRuleType_20(4);
      noTickRules_0_1_1.set(TickRuleType_20);
      TickRules_NoTickRules_20.insert(TickRuleType_20.getString());
      all_values.push_back(TickRules_NoTickRules_20);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_13;
      FIX::NestedInstrAttribType NestedInstrAttribType_13(645567562);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_13);
      NestedInstrumentAttribute_NoNestedInstrAttrib_13.insert(NestedInstrAttribType_13.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_13("STRING_337047712");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_13);
      NestedInstrumentAttribute_NoNestedInstrAttrib_13.insert(NestedInstrAttribValue_13.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_13);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_14;
      FIX::NestedInstrAttribType NestedInstrAttribType_14(1422497931);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_14);
      NestedInstrumentAttribute_NoNestedInstrAttrib_14.insert(NestedInstrAttribType_14.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_14("STRING_1026048217");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_14);
      NestedInstrumentAttribute_NoNestedInstrAttrib_14.insert(NestedInstrAttribValue_14.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_14);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_13;
      FIX::TradingSessionID TradingSessionID_94("STRING_1");
      noTradingSessionRules_0_1_0.set(TradingSessionID_94);
      TradingSessionRulesGrp_NoTradingSessionRules_13.insert(TradingSessionID_94.getString());
      FIX::TradingSessionSubID TradingSessionSubID_94("STRING_7");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_94);
      TradingSessionRulesGrp_NoTradingSessionRules_13.insert(TradingSessionSubID_94.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_13);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_26;
        FIX::ExecInstValue ExecInstValue_26('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_26);
        ExecInstRules_NoExecInstRules_26.insert(ExecInstValue_26.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_26);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_27;
        FIX::ExecInstValue ExecInstValue_27('1');
        noExecInstRules_0_0_2_1.set(ExecInstValue_27);
        ExecInstRules_NoExecInstRules_27.insert(ExecInstValue_27.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_27);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_20;
        FIX::MDBookType MDBookType_22(2);
        noMDFeedTypes_0_0_2_0.set(MDBookType_22);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MDBookType_22.getString());
        FIX::MDFeedType MDFeedType_22("STRING_1432175589");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_22);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MDFeedType_22.getString());
        FIX::MarketDepth MarketDepth_23(1012051647);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_23);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MarketDepth_23.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_20);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_21;
        FIX::MDBookType MDBookType_23(2);
        noMDFeedTypes_0_0_2_1.set(MDBookType_23);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MDBookType_23.getString());
        FIX::MDFeedType MDFeedType_23("STRING_860710553");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_23);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MDFeedType_23.getString());
        FIX::MarketDepth MarketDepth_24(918912386);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_24);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MarketDepth_24.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_21);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_22;
        FIX::MDBookType MDBookType_24(2);
        noMDFeedTypes_0_0_2_2.set(MDBookType_24);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MDBookType_24.getString());
        FIX::MDFeedType MDFeedType_24("STRING_71000527");
        noMDFeedTypes_0_0_2_2.set(MDFeedType_24);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MDFeedType_24.getString());
        FIX::MarketDepth MarketDepth_25(388592206);
        noMDFeedTypes_0_0_2_2.set(MarketDepth_25);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MarketDepth_25.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_22);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_30;
        FIX::MatchAlgorithm MatchAlgorithm_30("STRING_1294538481");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_30);
        MatchRules_NoMatchRules_30.insert(MatchAlgorithm_30.getString());
        FIX::MatchType MatchType_35("STRING_M3");
        noMatchRules_0_0_2_0.set(MatchType_35);
        MatchRules_NoMatchRules_30.insert(MatchType_35.getString());
        all_values.push_back(MatchRules_NoMatchRules_30);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_31;
        FIX::MatchAlgorithm MatchAlgorithm_31("STRING_661687324");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_31);
        MatchRules_NoMatchRules_31.insert(MatchAlgorithm_31.getString());
        FIX::MatchType MatchType_36("STRING_1");
        noMatchRules_0_0_2_1.set(MatchType_36);
        MatchRules_NoMatchRules_31.insert(MatchType_36.getString());
        all_values.push_back(MatchRules_NoMatchRules_31);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_28;
        FIX::OrdType OrdType_61('D');
        noOrdTypeRules_0_0_2_0.set(OrdType_61);
        OrdTypeRules_NoOrdTypeRules_28.insert(OrdType_61.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_28);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_29;
        FIX::OrdType OrdType_62('Q');
        noOrdTypeRules_0_0_2_1.set(OrdType_62);
        OrdTypeRules_NoOrdTypeRules_29.insert(OrdType_62.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_29);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_26;
        FIX::TimeInForce TimeInForce_39('1');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_39);
        TimeInForceRules_NoTimeInForceRules_26.insert(TimeInForce_39.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_26);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_27;
        FIX::TimeInForce TimeInForce_40('6');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_40);
        TimeInForceRules_NoTimeInForceRules_27.insert(TimeInForce_40.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_27);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_28;
        FIX::TimeInForce TimeInForce_41('8');
        noTimeInForceRules_0_0_2_2.set(TimeInForce_41);
        TimeInForceRules_NoTimeInForceRules_28.insert(TimeInForce_41.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_28);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_14;
      FIX::TradingSessionID TradingSessionID_95("STRING_6");
      noTradingSessionRules_0_1_1.set(TradingSessionID_95);
      TradingSessionRulesGrp_NoTradingSessionRules_14.insert(TradingSessionID_95.getString());
      FIX::TradingSessionSubID TradingSessionSubID_95("STRING_1");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_95);
      TradingSessionRulesGrp_NoTradingSessionRules_14.insert(TradingSessionSubID_95.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_14);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_28;
        FIX::ExecInstValue ExecInstValue_28('4');
        noExecInstRules_0_1_2_0.set(ExecInstValue_28);
        ExecInstRules_NoExecInstRules_28.insert(ExecInstValue_28.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_28);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_29;
        FIX::ExecInstValue ExecInstValue_29('1');
        noExecInstRules_0_1_2_1.set(ExecInstValue_29);
        ExecInstRules_NoExecInstRules_29.insert(ExecInstValue_29.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_29);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_30;
        FIX::ExecInstValue ExecInstValue_30('1');
        noExecInstRules_0_1_2_2.set(ExecInstValue_30);
        ExecInstRules_NoExecInstRules_30.insert(ExecInstValue_30.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_30);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_23;
        FIX::MDBookType MDBookType_25(1);
        noMDFeedTypes_0_1_2_0.set(MDBookType_25);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MDBookType_25.getString());
        FIX::MDFeedType MDFeedType_25("STRING_232336831");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_25);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MDFeedType_25.getString());
        FIX::MarketDepth MarketDepth_26(2107833172);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_26);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MarketDepth_26.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_23);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_24;
        FIX::MDBookType MDBookType_26(3);
        noMDFeedTypes_0_1_2_1.set(MDBookType_26);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MDBookType_26.getString());
        FIX::MDFeedType MDFeedType_26("STRING_1664512420");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_26);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MDFeedType_26.getString());
        FIX::MarketDepth MarketDepth_27(972401171);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_27);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MarketDepth_27.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_24);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_25;
        FIX::MDBookType MDBookType_27(1);
        noMDFeedTypes_0_1_2_2.set(MDBookType_27);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MDBookType_27.getString());
        FIX::MDFeedType MDFeedType_27("STRING_377739325");
        noMDFeedTypes_0_1_2_2.set(MDFeedType_27);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MDFeedType_27.getString());
        FIX::MarketDepth MarketDepth_28(1891313557);
        noMDFeedTypes_0_1_2_2.set(MarketDepth_28);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MarketDepth_28.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_25);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_32;
        FIX::MatchAlgorithm MatchAlgorithm_32("STRING_448739853");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_32);
        MatchRules_NoMatchRules_32.insert(MatchAlgorithm_32.getString());
        FIX::MatchType MatchType_37("STRING_8");
        noMatchRules_0_1_2_0.set(MatchType_37);
        MatchRules_NoMatchRules_32.insert(MatchType_37.getString());
        all_values.push_back(MatchRules_NoMatchRules_32);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_33;
        FIX::MatchAlgorithm MatchAlgorithm_33("STRING_1587411414");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_33);
        MatchRules_NoMatchRules_33.insert(MatchAlgorithm_33.getString());
        FIX::MatchType MatchType_38("STRING_S1");
        noMatchRules_0_1_2_1.set(MatchType_38);
        MatchRules_NoMatchRules_33.insert(MatchType_38.getString());
        all_values.push_back(MatchRules_NoMatchRules_33);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_30;
        FIX::OrdType OrdType_63('3');
        noOrdTypeRules_0_1_2_0.set(OrdType_63);
        OrdTypeRules_NoOrdTypeRules_30.insert(OrdType_63.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_30);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_29;
        FIX::TimeInForce TimeInForce_42('9');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_42);
        TimeInForceRules_NoTimeInForceRules_29.insert(TimeInForce_42.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_29);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_15;
      FIX::TradingSessionID TradingSessionID_96("STRING_3");
      noTradingSessionRules_0_1_2.set(TradingSessionID_96);
      TradingSessionRulesGrp_NoTradingSessionRules_15.insert(TradingSessionID_96.getString());
      FIX::TradingSessionSubID TradingSessionSubID_96("STRING_3");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_96);
      TradingSessionRulesGrp_NoTradingSessionRules_15.insert(TradingSessionSubID_96.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_15);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_31;
        FIX::ExecInstValue ExecInstValue_31('6');
        noExecInstRules_0_2_2_0.set(ExecInstValue_31);
        ExecInstRules_NoExecInstRules_31.insert(ExecInstValue_31.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_31);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_32;
        FIX::ExecInstValue ExecInstValue_32('6');
        noExecInstRules_0_2_2_1.set(ExecInstValue_32);
        ExecInstRules_NoExecInstRules_32.insert(ExecInstValue_32.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_32);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_33;
        FIX::ExecInstValue ExecInstValue_33('1');
        noExecInstRules_0_2_2_2.set(ExecInstValue_33);
        ExecInstRules_NoExecInstRules_33.insert(ExecInstValue_33.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_33);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_26;
        FIX::MDBookType MDBookType_28(2);
        noMDFeedTypes_0_2_2_0.set(MDBookType_28);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MDBookType_28.getString());
        FIX::MDFeedType MDFeedType_28("STRING_898798502");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_28);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MDFeedType_28.getString());
        FIX::MarketDepth MarketDepth_29(814411612);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_29);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MarketDepth_29.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_26);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_27;
        FIX::MDBookType MDBookType_29(2);
        noMDFeedTypes_0_2_2_1.set(MDBookType_29);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MDBookType_29.getString());
        FIX::MDFeedType MDFeedType_29("STRING_1928985573");
        noMDFeedTypes_0_2_2_1.set(MDFeedType_29);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MDFeedType_29.getString());
        FIX::MarketDepth MarketDepth_30(1033558485);
        noMDFeedTypes_0_2_2_1.set(MarketDepth_30);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MarketDepth_30.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_27);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_28;
        FIX::MDBookType MDBookType_30(2);
        noMDFeedTypes_0_2_2_2.set(MDBookType_30);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MDBookType_30.getString());
        FIX::MDFeedType MDFeedType_30("STRING_13838756");
        noMDFeedTypes_0_2_2_2.set(MDFeedType_30);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MDFeedType_30.getString());
        FIX::MarketDepth MarketDepth_31(993908009);
        noMDFeedTypes_0_2_2_2.set(MarketDepth_31);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MarketDepth_31.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_28);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_34;
        FIX::MatchAlgorithm MatchAlgorithm_34("STRING_1678351176");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_34);
        MatchRules_NoMatchRules_34.insert(MatchAlgorithm_34.getString());
        FIX::MatchType MatchType_39("STRING_6");
        noMatchRules_0_2_2_0.set(MatchType_39);
        MatchRules_NoMatchRules_34.insert(MatchType_39.getString());
        all_values.push_back(MatchRules_NoMatchRules_34);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_35;
        FIX::MatchAlgorithm MatchAlgorithm_35("STRING_884352224");
        noMatchRules_0_2_2_1.set(MatchAlgorithm_35);
        MatchRules_NoMatchRules_35.insert(MatchAlgorithm_35.getString());
        FIX::MatchType MatchType_40("STRING_M2");
        noMatchRules_0_2_2_1.set(MatchType_40);
        MatchRules_NoMatchRules_35.insert(MatchType_40.getString());
        all_values.push_back(MatchRules_NoMatchRules_35);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_31;
        FIX::OrdType OrdType_64('6');
        noOrdTypeRules_0_2_2_0.set(OrdType_64);
        OrdTypeRules_NoOrdTypeRules_31.insert(OrdType_64.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_31);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_32;
        FIX::OrdType OrdType_65('4');
        noOrdTypeRules_0_2_2_1.set(OrdType_65);
        OrdTypeRules_NoOrdTypeRules_32.insert(OrdType_65.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_32);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_30;
        FIX::TimeInForce TimeInForce_43('1');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_43);
        TimeInForceRules_NoTimeInForceRules_30.insert(TimeInForce_43.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_30);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_31;
        FIX::TimeInForce TimeInForce_44('1');
        noTimeInForceRules_0_2_2_1.set(TimeInForce_44);
        TimeInForceRules_NoTimeInForceRules_31.insert(TimeInForce_44.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_31);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_32;
        FIX::TimeInForce TimeInForce_45('4');
        noTimeInForceRules_0_2_2_2.set(TimeInForce_45);
        TimeInForceRules_NoTimeInForceRules_32.insert(TimeInForce_45.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_32);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_10;
      FIX::EndStrikePxRange EndStrikePxRange_10;
      EndStrikePxRange_10.setString("15536565");
      noStrikeRules_0_1_0.set(EndStrikePxRange_10);
      StrikeRules_NoStrikeRules_10.insert(EndStrikePxRange_10.getString());
      FIX::StartStrikePxRange StartStrikePxRange_10;
      StartStrikePxRange_10.setString("13715417");
      noStrikeRules_0_1_0.set(StartStrikePxRange_10);
      StrikeRules_NoStrikeRules_10.insert(StartStrikePxRange_10.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_10(1071231356);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeExerciseStyle_10.getString());
      FIX::StrikeIncrement StrikeIncrement_10;
      StrikeIncrement_10.setString("1958340");
      noStrikeRules_0_1_0.set(StrikeIncrement_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeIncrement_10.getString());
      FIX::StrikeRuleID StrikeRuleID_10("STRING_2064177169");
      noStrikeRules_0_1_0.set(StrikeRuleID_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeRuleID_10.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_10);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_21;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_21("MONTHYEAR_840257034");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_21);
        MaturityRules_NoMaturityRules_21.insert(EndMaturityMonthYear_21.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_21(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearFormat_21.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_21(2085000572);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearIncrement_21.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_21(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityMonthYearIncrementUnits_21.getString());
        FIX::MaturityRuleID MaturityRuleID_21("STRING_24443060");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_21);
        MaturityRules_NoMaturityRules_21.insert(MaturityRuleID_21.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_21("MONTHYEAR_751928537");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_21);
        MaturityRules_NoMaturityRules_21.insert(StartMaturityMonthYear_21.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_21);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_11;
      FIX::EndStrikePxRange EndStrikePxRange_11;
      EndStrikePxRange_11.setString("14762012");
      noStrikeRules_0_1_1.set(EndStrikePxRange_11);
      StrikeRules_NoStrikeRules_11.insert(EndStrikePxRange_11.getString());
      FIX::StartStrikePxRange StartStrikePxRange_11;
      StartStrikePxRange_11.setString("19534286");
      noStrikeRules_0_1_1.set(StartStrikePxRange_11);
      StrikeRules_NoStrikeRules_11.insert(StartStrikePxRange_11.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_11(1785487022);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeExerciseStyle_11.getString());
      FIX::StrikeIncrement StrikeIncrement_11;
      StrikeIncrement_11.setString("14117938");
      noStrikeRules_0_1_1.set(StrikeIncrement_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeIncrement_11.getString());
      FIX::StrikeRuleID StrikeRuleID_11("STRING_1967267389");
      noStrikeRules_0_1_1.set(StrikeRuleID_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeRuleID_11.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_11);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_22;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_22("MONTHYEAR_1397624105");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_22);
        MaturityRules_NoMaturityRules_22.insert(EndMaturityMonthYear_22.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_22(0);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearFormat_22.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_22(450736917);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearIncrement_22.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_22(1);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearIncrementUnits_22.getString());
        FIX::MaturityRuleID MaturityRuleID_22("STRING_1406741772");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityRuleID_22.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_22("MONTHYEAR_13392359");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_22);
        MaturityRules_NoMaturityRules_22.insert(StartMaturityMonthYear_22.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_22);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_7;
    FIX::MarketID MarketID_16("EXCHANGE_326224798");
    noMarketSegments_0_1.set(MarketID_16);
    MarketSegmentGrp_NoMarketSegments_7.insert(MarketID_16.getString());
    FIX::MarketSegmentID MarketSegmentID_16("STRING_1764088479");
    noMarketSegments_0_1.set(MarketSegmentID_16);
    MarketSegmentGrp_NoMarketSegments_7.insert(MarketSegmentID_16.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_7);
    all_compo_names.insert("MarketSegmentGrp.NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_9;
    FIX::ExpirationCycle ExpirationCycle_9(1);
    noMarketSegments_0_1.set(ExpirationCycle_9);
    BaseTradingRules_9.insert(ExpirationCycle_9.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_9(1);
    noMarketSegments_0_1.set(ImpliedMarketIndicator_9);
    BaseTradingRules_9.insert(ImpliedMarketIndicator_9.getString());
    FIX::MaxPriceVariation MaxPriceVariation_9;
    MaxPriceVariation_9.setString("17172298");
    noMarketSegments_0_1.set(MaxPriceVariation_9);
    BaseTradingRules_9.insert(MaxPriceVariation_9.getString());
    FIX::MaxTradeVol MaxTradeVol_9;
    MaxTradeVol_9.setString("4056079");
    noMarketSegments_0_1.set(MaxTradeVol_9);
    BaseTradingRules_9.insert(MaxTradeVol_9.getString());
    FIX::MinTradeVol MinTradeVol_9;
    MinTradeVol_9.setString("18386433");
    noMarketSegments_0_1.set(MinTradeVol_9);
    BaseTradingRules_9.insert(MinTradeVol_9.getString());
    FIX::MultilegModel MultilegModel_11(0);
    noMarketSegments_0_1.set(MultilegModel_11);
    BaseTradingRules_9.insert(MultilegModel_11.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_11(5);
    noMarketSegments_0_1.set(MultilegPriceMethod_11);
    BaseTradingRules_9.insert(MultilegPriceMethod_11.getString());
    FIX::PriceType PriceType_43(4);
    noMarketSegments_0_1.set(PriceType_43);
    BaseTradingRules_9.insert(PriceType_43.getString());
    FIX::RoundLot RoundLot_9;
    RoundLot_9.setString("13192368");
    noMarketSegments_0_1.set(RoundLot_9);
    BaseTradingRules_9.insert(RoundLot_9.getString());
    FIX::TradingCurrency TradingCurrency_9("JPY");
    noMarketSegments_0_1.set(TradingCurrency_9);
    BaseTradingRules_9.insert(TradingCurrency_9.getString());
    all_values.push_back(BaseTradingRules_9);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_17;
      FIX::LotType LotType_21('3');
      noLotTypeRules_1_1_0.set(LotType_21);
      LotTypeRules_NoLotTypeRules_17.insert(LotType_21.getString());
      FIX::MinLotSize MinLotSize_17;
      MinLotSize_17.setString("2952149");
      noLotTypeRules_1_1_0.set(MinLotSize_17);
      LotTypeRules_NoLotTypeRules_17.insert(MinLotSize_17.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_17);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_18;
      FIX::LotType LotType_22('4');
      noLotTypeRules_1_1_1.set(LotType_22);
      LotTypeRules_NoLotTypeRules_18.insert(LotType_22.getString());
      FIX::MinLotSize MinLotSize_18;
      MinLotSize_18.setString("8439307");
      noLotTypeRules_1_1_1.set(MinLotSize_18);
      LotTypeRules_NoLotTypeRules_18.insert(MinLotSize_18.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_18);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_19;
      FIX::LotType LotType_23('1');
      noLotTypeRules_1_1_2.set(LotType_23);
      LotTypeRules_NoLotTypeRules_19.insert(LotType_23.getString());
      FIX::MinLotSize MinLotSize_19;
      MinLotSize_19.setString("21026675");
      noLotTypeRules_1_1_2.set(MinLotSize_19);
      LotTypeRules_NoLotTypeRules_19.insert(MinLotSize_19.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_19);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_9;
    FIX::HighLimitPrice HighLimitPrice_9;
    HighLimitPrice_9.setString("6498757");
    noMarketSegments_0_1.set(HighLimitPrice_9);
    PriceLimits_9.insert(HighLimitPrice_9.getString());
    FIX::LowLimitPrice LowLimitPrice_9;
    LowLimitPrice_9.setString("6851468");
    noMarketSegments_0_1.set(LowLimitPrice_9);
    PriceLimits_9.insert(LowLimitPrice_9.getString());
    FIX::PriceLimitType PriceLimitType_9(2);
    noMarketSegments_0_1.set(PriceLimitType_9);
    PriceLimits_9.insert(PriceLimitType_9.getString());
    FIX::TradingReferencePrice TradingReferencePrice_9;
    TradingReferencePrice_9.setString("4696595");
    noMarketSegments_0_1.set(TradingReferencePrice_9);
    PriceLimits_9.insert(TradingReferencePrice_9.getString());
    all_values.push_back(PriceLimits_9);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_21;
      FIX::EndTickPriceRange EndTickPriceRange_21;
      EndTickPriceRange_21.setString("6171182");
      noTickRules_1_1_0.set(EndTickPriceRange_21);
      TickRules_NoTickRules_21.insert(EndTickPriceRange_21.getString());
      FIX::StartTickPriceRange StartTickPriceRange_21;
      StartTickPriceRange_21.setString("19677944");
      noTickRules_1_1_0.set(StartTickPriceRange_21);
      TickRules_NoTickRules_21.insert(StartTickPriceRange_21.getString());
      FIX::TickIncrement TickIncrement_21;
      TickIncrement_21.setString("17677951");
      noTickRules_1_1_0.set(TickIncrement_21);
      TickRules_NoTickRules_21.insert(TickIncrement_21.getString());
      FIX::TickRuleType TickRuleType_21(4);
      noTickRules_1_1_0.set(TickRuleType_21);
      TickRules_NoTickRules_21.insert(TickRuleType_21.getString());
      all_values.push_back(TickRules_NoTickRules_21);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_22;
      FIX::EndTickPriceRange EndTickPriceRange_22;
      EndTickPriceRange_22.setString("12270525");
      noTickRules_1_1_1.set(EndTickPriceRange_22);
      TickRules_NoTickRules_22.insert(EndTickPriceRange_22.getString());
      FIX::StartTickPriceRange StartTickPriceRange_22;
      StartTickPriceRange_22.setString("17811875");
      noTickRules_1_1_1.set(StartTickPriceRange_22);
      TickRules_NoTickRules_22.insert(StartTickPriceRange_22.getString());
      FIX::TickIncrement TickIncrement_22;
      TickIncrement_22.setString("10778356");
      noTickRules_1_1_1.set(TickIncrement_22);
      TickRules_NoTickRules_22.insert(TickIncrement_22.getString());
      FIX::TickRuleType TickRuleType_22(0);
      noTickRules_1_1_1.set(TickRuleType_22);
      TickRules_NoTickRules_22.insert(TickRuleType_22.getString());
      all_values.push_back(TickRules_NoTickRules_22);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_15;
      FIX::NestedInstrAttribType NestedInstrAttribType_15(1035720374);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_15);
      NestedInstrumentAttribute_NoNestedInstrAttrib_15.insert(NestedInstrAttribType_15.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_15("STRING_413403599");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_15);
      NestedInstrumentAttribute_NoNestedInstrAttrib_15.insert(NestedInstrAttribValue_15.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_15);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_16;
      FIX::TradingSessionID TradingSessionID_97("STRING_4");
      noTradingSessionRules_1_1_0.set(TradingSessionID_97);
      TradingSessionRulesGrp_NoTradingSessionRules_16.insert(TradingSessionID_97.getString());
      FIX::TradingSessionSubID TradingSessionSubID_97("STRING_6");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_97);
      TradingSessionRulesGrp_NoTradingSessionRules_16.insert(TradingSessionSubID_97.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_16);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_34;
        FIX::ExecInstValue ExecInstValue_34('1');
        noExecInstRules_1_0_2_0.set(ExecInstValue_34);
        ExecInstRules_NoExecInstRules_34.insert(ExecInstValue_34.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_34);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_29;
        FIX::MDBookType MDBookType_31(3);
        noMDFeedTypes_1_0_2_0.set(MDBookType_31);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MDBookType_31.getString());
        FIX::MDFeedType MDFeedType_31("STRING_1846969054");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_31);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MDFeedType_31.getString());
        FIX::MarketDepth MarketDepth_32(720569736);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_32);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MarketDepth_32.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_29);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_30;
        FIX::MDBookType MDBookType_32(2);
        noMDFeedTypes_1_0_2_1.set(MDBookType_32);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MDBookType_32.getString());
        FIX::MDFeedType MDFeedType_32("STRING_2142183993");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_32);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MDFeedType_32.getString());
        FIX::MarketDepth MarketDepth_33(1347036043);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_33);
        MarketDataFeedTypes_NoMDFeedTypes_30.insert(MarketDepth_33.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_30);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_36;
        FIX::MatchAlgorithm MatchAlgorithm_36("STRING_1041843821");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_36);
        MatchRules_NoMatchRules_36.insert(MatchAlgorithm_36.getString());
        FIX::MatchType MatchType_41("STRING_A5");
        noMatchRules_1_0_2_0.set(MatchType_41);
        MatchRules_NoMatchRules_36.insert(MatchType_41.getString());
        all_values.push_back(MatchRules_NoMatchRules_36);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_33;
        FIX::OrdType OrdType_66('H');
        noOrdTypeRules_1_0_2_0.set(OrdType_66);
        OrdTypeRules_NoOrdTypeRules_33.insert(OrdType_66.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_33);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_34;
        FIX::OrdType OrdType_67('E');
        noOrdTypeRules_1_0_2_1.set(OrdType_67);
        OrdTypeRules_NoOrdTypeRules_34.insert(OrdType_67.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_34);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_33;
        FIX::TimeInForce TimeInForce_46('8');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_46);
        TimeInForceRules_NoTimeInForceRules_33.insert(TimeInForce_46.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_33);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_34;
        FIX::TimeInForce TimeInForce_47('2');
        noTimeInForceRules_1_0_2_1.set(TimeInForce_47);
        TimeInForceRules_NoTimeInForceRules_34.insert(TimeInForce_47.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_34);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_35;
        FIX::TimeInForce TimeInForce_48('1');
        noTimeInForceRules_1_0_2_2.set(TimeInForce_48);
        TimeInForceRules_NoTimeInForceRules_35.insert(TimeInForce_48.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_35);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_2);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_12;
      FIX::EndStrikePxRange EndStrikePxRange_12;
      EndStrikePxRange_12.setString("18904431");
      noStrikeRules_1_1_0.set(EndStrikePxRange_12);
      StrikeRules_NoStrikeRules_12.insert(EndStrikePxRange_12.getString());
      FIX::StartStrikePxRange StartStrikePxRange_12;
      StartStrikePxRange_12.setString("6066405");
      noStrikeRules_1_1_0.set(StartStrikePxRange_12);
      StrikeRules_NoStrikeRules_12.insert(StartStrikePxRange_12.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_12(150580625);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeExerciseStyle_12.getString());
      FIX::StrikeIncrement StrikeIncrement_12;
      StrikeIncrement_12.setString("8207951");
      noStrikeRules_1_1_0.set(StrikeIncrement_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeIncrement_12.getString());
      FIX::StrikeRuleID StrikeRuleID_12("STRING_1450297972");
      noStrikeRules_1_1_0.set(StrikeRuleID_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeRuleID_12.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_12);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_23;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_23("MONTHYEAR_1856515554");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_23);
        MaturityRules_NoMaturityRules_23.insert(EndMaturityMonthYear_23.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_23(0);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearFormat_23.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_23(1388019735);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearIncrement_23.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_23(3);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearIncrementUnits_23.getString());
        FIX::MaturityRuleID MaturityRuleID_23("STRING_1253024284");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityRuleID_23.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_23("MONTHYEAR_765467404");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_23);
        MaturityRules_NoMaturityRules_23.insert(StartMaturityMonthYear_23.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_23);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_24;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_24("MONTHYEAR_1925182975");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_24);
        MaturityRules_NoMaturityRules_24.insert(EndMaturityMonthYear_24.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_24(2);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearFormat_24.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_24(1836758230);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearIncrement_24.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_24(2);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearIncrementUnits_24.getString());
        FIX::MaturityRuleID MaturityRuleID_24("STRING_534669904");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityRuleID_24.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_24("MONTHYEAR_1580053122");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_24);
        MaturityRules_NoMaturityRules_24.insert(StartMaturityMonthYear_24.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_24);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_25;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_25("MONTHYEAR_1619368727");
        noMaturityRules_1_0_2_2.set(EndMaturityMonthYear_25);
        MaturityRules_NoMaturityRules_25.insert(EndMaturityMonthYear_25.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_25(2);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearFormat_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearFormat_25.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_25(19795141);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrement_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearIncrement_25.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_25(1);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrementUnits_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearIncrementUnits_25.getString());
        FIX::MaturityRuleID MaturityRuleID_25("STRING_1036442221");
        noMaturityRules_1_0_2_2.set(MaturityRuleID_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityRuleID_25.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_25("MONTHYEAR_1256896568");
        noMaturityRules_1_0_2_2.set(StartMaturityMonthYear_25);
        MaturityRules_NoMaturityRules_25.insert(StartMaturityMonthYear_25.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_25);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_2);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_2;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_8;
    FIX::MarketID MarketID_17("EXCHANGE_93235925");
    noMarketSegments_0_2.set(MarketID_17);
    MarketSegmentGrp_NoMarketSegments_8.insert(MarketID_17.getString());
    FIX::MarketSegmentID MarketSegmentID_17("STRING_1558156251");
    noMarketSegments_0_2.set(MarketSegmentID_17);
    MarketSegmentGrp_NoMarketSegments_8.insert(MarketSegmentID_17.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_8);
    all_compo_names.insert("MarketSegmentGrp.NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_10;
    FIX::ExpirationCycle ExpirationCycle_10(0);
    noMarketSegments_0_2.set(ExpirationCycle_10);
    BaseTradingRules_10.insert(ExpirationCycle_10.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_10(3);
    noMarketSegments_0_2.set(ImpliedMarketIndicator_10);
    BaseTradingRules_10.insert(ImpliedMarketIndicator_10.getString());
    FIX::MaxPriceVariation MaxPriceVariation_10;
    MaxPriceVariation_10.setString("5495048");
    noMarketSegments_0_2.set(MaxPriceVariation_10);
    BaseTradingRules_10.insert(MaxPriceVariation_10.getString());
    FIX::MaxTradeVol MaxTradeVol_10;
    MaxTradeVol_10.setString("1957619");
    noMarketSegments_0_2.set(MaxTradeVol_10);
    BaseTradingRules_10.insert(MaxTradeVol_10.getString());
    FIX::MinTradeVol MinTradeVol_10;
    MinTradeVol_10.setString("15066779");
    noMarketSegments_0_2.set(MinTradeVol_10);
    BaseTradingRules_10.insert(MinTradeVol_10.getString());
    FIX::MultilegModel MultilegModel_12(0);
    noMarketSegments_0_2.set(MultilegModel_12);
    BaseTradingRules_10.insert(MultilegModel_12.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_12(1);
    noMarketSegments_0_2.set(MultilegPriceMethod_12);
    BaseTradingRules_10.insert(MultilegPriceMethod_12.getString());
    FIX::PriceType PriceType_44(11);
    noMarketSegments_0_2.set(PriceType_44);
    BaseTradingRules_10.insert(PriceType_44.getString());
    FIX::RoundLot RoundLot_10;
    RoundLot_10.setString("11132595");
    noMarketSegments_0_2.set(RoundLot_10);
    BaseTradingRules_10.insert(RoundLot_10.getString());
    FIX::TradingCurrency TradingCurrency_10("GBP");
    noMarketSegments_0_2.set(TradingCurrency_10);
    BaseTradingRules_10.insert(TradingCurrency_10.getString());
    all_values.push_back(BaseTradingRules_10);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_20;
      FIX::LotType LotType_24('2');
      noLotTypeRules_2_1_0.set(LotType_24);
      LotTypeRules_NoLotTypeRules_20.insert(LotType_24.getString());
      FIX::MinLotSize MinLotSize_20;
      MinLotSize_20.setString("3905490");
      noLotTypeRules_2_1_0.set(MinLotSize_20);
      LotTypeRules_NoLotTypeRules_20.insert(MinLotSize_20.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_20);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_10;
    FIX::HighLimitPrice HighLimitPrice_10;
    HighLimitPrice_10.setString("12582033");
    noMarketSegments_0_2.set(HighLimitPrice_10);
    PriceLimits_10.insert(HighLimitPrice_10.getString());
    FIX::LowLimitPrice LowLimitPrice_10;
    LowLimitPrice_10.setString("10744590");
    noMarketSegments_0_2.set(LowLimitPrice_10);
    PriceLimits_10.insert(LowLimitPrice_10.getString());
    FIX::PriceLimitType PriceLimitType_10(2);
    noMarketSegments_0_2.set(PriceLimitType_10);
    PriceLimits_10.insert(PriceLimitType_10.getString());
    FIX::TradingReferencePrice TradingReferencePrice_10;
    TradingReferencePrice_10.setString("10359026");
    noMarketSegments_0_2.set(TradingReferencePrice_10);
    PriceLimits_10.insert(TradingReferencePrice_10.getString());
    all_values.push_back(PriceLimits_10);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_23;
      FIX::EndTickPriceRange EndTickPriceRange_23;
      EndTickPriceRange_23.setString("8452910");
      noTickRules_2_1_0.set(EndTickPriceRange_23);
      TickRules_NoTickRules_23.insert(EndTickPriceRange_23.getString());
      FIX::StartTickPriceRange StartTickPriceRange_23;
      StartTickPriceRange_23.setString("5130874");
      noTickRules_2_1_0.set(StartTickPriceRange_23);
      TickRules_NoTickRules_23.insert(StartTickPriceRange_23.getString());
      FIX::TickIncrement TickIncrement_23;
      TickIncrement_23.setString("14232291");
      noTickRules_2_1_0.set(TickIncrement_23);
      TickRules_NoTickRules_23.insert(TickIncrement_23.getString());
      FIX::TickRuleType TickRuleType_23(4);
      noTickRules_2_1_0.set(TickRuleType_23);
      TickRules_NoTickRules_23.insert(TickRuleType_23.getString());
      all_values.push_back(TickRules_NoTickRules_23);
      all_compo_names.insert("TickRules.NoTickRules");

      noMarketSegments_0_2.addGroup(noTickRules_2_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_16;
      FIX::NestedInstrAttribType NestedInstrAttribType_16(1157451404);
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribType_16);
      NestedInstrumentAttribute_NoNestedInstrAttrib_16.insert(NestedInstrAttribType_16.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_16("STRING_297655665");
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribValue_16);
      NestedInstrumentAttribute_NoNestedInstrAttrib_16.insert(NestedInstrAttribValue_16.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_16);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_17;
      FIX::NestedInstrAttribType NestedInstrAttribType_17(498701397);
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribType_17);
      NestedInstrumentAttribute_NoNestedInstrAttrib_17.insert(NestedInstrAttribType_17.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_17("STRING_46409977");
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribValue_17);
      NestedInstrumentAttribute_NoNestedInstrAttrib_17.insert(NestedInstrAttribValue_17.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_17);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_18;
      FIX::NestedInstrAttribType NestedInstrAttribType_18(1554552233);
      noNestedInstrAttrib_2_1_2.set(NestedInstrAttribType_18);
      NestedInstrumentAttribute_NoNestedInstrAttrib_18.insert(NestedInstrAttribType_18.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_18("STRING_591937322");
      noNestedInstrAttrib_2_1_2.set(NestedInstrAttribValue_18);
      NestedInstrumentAttribute_NoNestedInstrAttrib_18.insert(NestedInstrAttribValue_18.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_18);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_17;
      FIX::TradingSessionID TradingSessionID_98("STRING_4");
      noTradingSessionRules_2_1_0.set(TradingSessionID_98);
      TradingSessionRulesGrp_NoTradingSessionRules_17.insert(TradingSessionID_98.getString());
      FIX::TradingSessionSubID TradingSessionSubID_98("STRING_6");
      noTradingSessionRules_2_1_0.set(TradingSessionSubID_98);
      TradingSessionRulesGrp_NoTradingSessionRules_17.insert(TradingSessionSubID_98.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_17);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_35;
        FIX::ExecInstValue ExecInstValue_35('4');
        noExecInstRules_2_0_2_0.set(ExecInstValue_35);
        ExecInstRules_NoExecInstRules_35.insert(ExecInstValue_35.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_35);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_36;
        FIX::ExecInstValue ExecInstValue_36('9');
        noExecInstRules_2_0_2_1.set(ExecInstValue_36);
        ExecInstRules_NoExecInstRules_36.insert(ExecInstValue_36.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_36);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_31;
        FIX::MDBookType MDBookType_33(2);
        noMDFeedTypes_2_0_2_0.set(MDBookType_33);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MDBookType_33.getString());
        FIX::MDFeedType MDFeedType_33("STRING_450707726");
        noMDFeedTypes_2_0_2_0.set(MDFeedType_33);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MDFeedType_33.getString());
        FIX::MarketDepth MarketDepth_34(1412311272);
        noMDFeedTypes_2_0_2_0.set(MarketDepth_34);
        MarketDataFeedTypes_NoMDFeedTypes_31.insert(MarketDepth_34.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_31);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_32;
        FIX::MDBookType MDBookType_34(2);
        noMDFeedTypes_2_0_2_1.set(MDBookType_34);
        MarketDataFeedTypes_NoMDFeedTypes_32.insert(MDBookType_34.getString());
        FIX::MDFeedType MDFeedType_34("STRING_1600720702");
        noMDFeedTypes_2_0_2_1.set(MDFeedType_34);
        MarketDataFeedTypes_NoMDFeedTypes_32.insert(MDFeedType_34.getString());
        FIX::MarketDepth MarketDepth_35(87119044);
        noMDFeedTypes_2_0_2_1.set(MarketDepth_35);
        MarketDataFeedTypes_NoMDFeedTypes_32.insert(MarketDepth_35.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_32);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_37;
        FIX::MatchAlgorithm MatchAlgorithm_37("STRING_1991269765");
        noMatchRules_2_0_2_0.set(MatchAlgorithm_37);
        MatchRules_NoMatchRules_37.insert(MatchAlgorithm_37.getString());
        FIX::MatchType MatchType_42("STRING_6");
        noMatchRules_2_0_2_0.set(MatchType_42);
        MatchRules_NoMatchRules_37.insert(MatchType_42.getString());
        all_values.push_back(MatchRules_NoMatchRules_37);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_35;
        FIX::OrdType OrdType_68('2');
        noOrdTypeRules_2_0_2_0.set(OrdType_68);
        OrdTypeRules_NoOrdTypeRules_35.insert(OrdType_68.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_35);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_36;
        FIX::OrdType OrdType_69('B');
        noOrdTypeRules_2_0_2_1.set(OrdType_69);
        OrdTypeRules_NoOrdTypeRules_36.insert(OrdType_69.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_36);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_36;
        FIX::TimeInForce TimeInForce_49('5');
        noTimeInForceRules_2_0_2_0.set(TimeInForce_49);
        TimeInForceRules_NoTimeInForceRules_36.insert(TimeInForce_49.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_36);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_37;
        FIX::TimeInForce TimeInForce_50('1');
        noTimeInForceRules_2_0_2_1.set(TimeInForce_50);
        TimeInForceRules_NoTimeInForceRules_37.insert(TimeInForce_50.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_37);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_38;
        FIX::TimeInForce TimeInForce_51('6');
        noTimeInForceRules_2_0_2_2.set(TimeInForce_51);
        TimeInForceRules_NoTimeInForceRules_38.insert(TimeInForce_51.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_38);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_2);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_18;
      FIX::TradingSessionID TradingSessionID_99("STRING_2");
      noTradingSessionRules_2_1_1.set(TradingSessionID_99);
      TradingSessionRulesGrp_NoTradingSessionRules_18.insert(TradingSessionID_99.getString());
      FIX::TradingSessionSubID TradingSessionSubID_99("STRING_6");
      noTradingSessionRules_2_1_1.set(TradingSessionSubID_99);
      TradingSessionRulesGrp_NoTradingSessionRules_18.insert(TradingSessionSubID_99.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_18);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_37;
        FIX::ExecInstValue ExecInstValue_37('2');
        noExecInstRules_2_1_2_0.set(ExecInstValue_37);
        ExecInstRules_NoExecInstRules_37.insert(ExecInstValue_37.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_37);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_33;
        FIX::MDBookType MDBookType_35(3);
        noMDFeedTypes_2_1_2_0.set(MDBookType_35);
        MarketDataFeedTypes_NoMDFeedTypes_33.insert(MDBookType_35.getString());
        FIX::MDFeedType MDFeedType_35("STRING_1827678410");
        noMDFeedTypes_2_1_2_0.set(MDFeedType_35);
        MarketDataFeedTypes_NoMDFeedTypes_33.insert(MDFeedType_35.getString());
        FIX::MarketDepth MarketDepth_36(1822440068);
        noMDFeedTypes_2_1_2_0.set(MarketDepth_36);
        MarketDataFeedTypes_NoMDFeedTypes_33.insert(MarketDepth_36.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_33);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_34;
        FIX::MDBookType MDBookType_36(2);
        noMDFeedTypes_2_1_2_1.set(MDBookType_36);
        MarketDataFeedTypes_NoMDFeedTypes_34.insert(MDBookType_36.getString());
        FIX::MDFeedType MDFeedType_36("STRING_2050920845");
        noMDFeedTypes_2_1_2_1.set(MDFeedType_36);
        MarketDataFeedTypes_NoMDFeedTypes_34.insert(MDFeedType_36.getString());
        FIX::MarketDepth MarketDepth_37(1256694926);
        noMDFeedTypes_2_1_2_1.set(MarketDepth_37);
        MarketDataFeedTypes_NoMDFeedTypes_34.insert(MarketDepth_37.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_34);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_35;
        FIX::MDBookType MDBookType_37(1);
        noMDFeedTypes_2_1_2_2.set(MDBookType_37);
        MarketDataFeedTypes_NoMDFeedTypes_35.insert(MDBookType_37.getString());
        FIX::MDFeedType MDFeedType_37("STRING_322441536");
        noMDFeedTypes_2_1_2_2.set(MDFeedType_37);
        MarketDataFeedTypes_NoMDFeedTypes_35.insert(MDFeedType_37.getString());
        FIX::MarketDepth MarketDepth_38(50144081);
        noMDFeedTypes_2_1_2_2.set(MarketDepth_38);
        MarketDataFeedTypes_NoMDFeedTypes_35.insert(MarketDepth_38.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_35);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_38;
        FIX::MatchAlgorithm MatchAlgorithm_38("STRING_1543848376");
        noMatchRules_2_1_2_0.set(MatchAlgorithm_38);
        MatchRules_NoMatchRules_38.insert(MatchAlgorithm_38.getString());
        FIX::MatchType MatchType_43("STRING_2");
        noMatchRules_2_1_2_0.set(MatchType_43);
        MatchRules_NoMatchRules_38.insert(MatchType_43.getString());
        all_values.push_back(MatchRules_NoMatchRules_38);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_39;
        FIX::MatchAlgorithm MatchAlgorithm_39("STRING_470749226");
        noMatchRules_2_1_2_1.set(MatchAlgorithm_39);
        MatchRules_NoMatchRules_39.insert(MatchAlgorithm_39.getString());
        FIX::MatchType MatchType_44("STRING_M2");
        noMatchRules_2_1_2_1.set(MatchType_44);
        MatchRules_NoMatchRules_39.insert(MatchType_44.getString());
        all_values.push_back(MatchRules_NoMatchRules_39);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_37;
        FIX::OrdType OrdType_70('7');
        noOrdTypeRules_2_1_2_0.set(OrdType_70);
        OrdTypeRules_NoOrdTypeRules_37.insert(OrdType_70.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_37);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_38;
        FIX::OrdType OrdType_71('H');
        noOrdTypeRules_2_1_2_1.set(OrdType_71);
        OrdTypeRules_NoOrdTypeRules_38.insert(OrdType_71.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_38);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_39;
        FIX::OrdType OrdType_72('C');
        noOrdTypeRules_2_1_2_2.set(OrdType_72);
        OrdTypeRules_NoOrdTypeRules_39.insert(OrdType_72.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_39);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_39;
        FIX::TimeInForce TimeInForce_52('8');
        noTimeInForceRules_2_1_2_0.set(TimeInForce_52);
        TimeInForceRules_NoTimeInForceRules_39.insert(TimeInForce_52.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_39);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_0);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_13;
      FIX::EndStrikePxRange EndStrikePxRange_13;
      EndStrikePxRange_13.setString("21369321");
      noStrikeRules_2_1_0.set(EndStrikePxRange_13);
      StrikeRules_NoStrikeRules_13.insert(EndStrikePxRange_13.getString());
      FIX::StartStrikePxRange StartStrikePxRange_13;
      StartStrikePxRange_13.setString("7621899");
      noStrikeRules_2_1_0.set(StartStrikePxRange_13);
      StrikeRules_NoStrikeRules_13.insert(StartStrikePxRange_13.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_13(495287552);
      noStrikeRules_2_1_0.set(StrikeExerciseStyle_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeExerciseStyle_13.getString());
      FIX::StrikeIncrement StrikeIncrement_13;
      StrikeIncrement_13.setString("7362773");
      noStrikeRules_2_1_0.set(StrikeIncrement_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeIncrement_13.getString());
      FIX::StrikeRuleID StrikeRuleID_13("STRING_1001528416");
      noStrikeRules_2_1_0.set(StrikeRuleID_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeRuleID_13.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_13);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_26;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_26("MONTHYEAR_1468078656");
        noMaturityRules_2_0_2_0.set(EndMaturityMonthYear_26);
        MaturityRules_NoMaturityRules_26.insert(EndMaturityMonthYear_26.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_26(0);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearFormat_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearFormat_26.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_26(743884240);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrement_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearIncrement_26.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_26(1);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrementUnits_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearIncrementUnits_26.getString());
        FIX::MaturityRuleID MaturityRuleID_26("STRING_1694034467");
        noMaturityRules_2_0_2_0.set(MaturityRuleID_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityRuleID_26.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_26("MONTHYEAR_424079002");
        noMaturityRules_2_0_2_0.set(StartMaturityMonthYear_26);
        MaturityRules_NoMaturityRules_26.insert(StartMaturityMonthYear_26.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_26);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_27;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_27("MONTHYEAR_226054173");
        noMaturityRules_2_0_2_1.set(EndMaturityMonthYear_27);
        MaturityRules_NoMaturityRules_27.insert(EndMaturityMonthYear_27.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_27(1);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearFormat_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearFormat_27.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_27(327516199);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrement_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearIncrement_27.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_27(3);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrementUnits_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearIncrementUnits_27.getString());
        FIX::MaturityRuleID MaturityRuleID_27("STRING_1353703081");
        noMaturityRules_2_0_2_1.set(MaturityRuleID_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityRuleID_27.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_27("MONTHYEAR_649957736");
        noMaturityRules_2_0_2_1.set(StartMaturityMonthYear_27);
        MaturityRules_NoMaturityRules_27.insert(StartMaturityMonthYear_27.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_27);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_1);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_14;
      FIX::EndStrikePxRange EndStrikePxRange_14;
      EndStrikePxRange_14.setString("15328931");
      noStrikeRules_2_1_1.set(EndStrikePxRange_14);
      StrikeRules_NoStrikeRules_14.insert(EndStrikePxRange_14.getString());
      FIX::StartStrikePxRange StartStrikePxRange_14;
      StartStrikePxRange_14.setString("4121410");
      noStrikeRules_2_1_1.set(StartStrikePxRange_14);
      StrikeRules_NoStrikeRules_14.insert(StartStrikePxRange_14.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_14(46322464);
      noStrikeRules_2_1_1.set(StrikeExerciseStyle_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeExerciseStyle_14.getString());
      FIX::StrikeIncrement StrikeIncrement_14;
      StrikeIncrement_14.setString("20337449");
      noStrikeRules_2_1_1.set(StrikeIncrement_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeIncrement_14.getString());
      FIX::StrikeRuleID StrikeRuleID_14("STRING_882890262");
      noStrikeRules_2_1_1.set(StrikeRuleID_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeRuleID_14.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_14);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_28;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_28("MONTHYEAR_1987833850");
        noMaturityRules_2_1_2_0.set(EndMaturityMonthYear_28);
        MaturityRules_NoMaturityRules_28.insert(EndMaturityMonthYear_28.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_28(1);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearFormat_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearFormat_28.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_28(492874019);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrement_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearIncrement_28.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_28(1);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrementUnits_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearIncrementUnits_28.getString());
        FIX::MaturityRuleID MaturityRuleID_28("STRING_1196465555");
        noMaturityRules_2_1_2_0.set(MaturityRuleID_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityRuleID_28.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_28("MONTHYEAR_291470979");
        noMaturityRules_2_1_2_0.set(StartMaturityMonthYear_28);
        MaturityRules_NoMaturityRules_28.insert(StartMaturityMonthYear_28.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_28);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_29;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_29("MONTHYEAR_435902745");
        noMaturityRules_2_1_2_1.set(EndMaturityMonthYear_29);
        MaturityRules_NoMaturityRules_29.insert(EndMaturityMonthYear_29.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_29(1);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearFormat_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearFormat_29.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_29(1053660939);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearIncrement_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearIncrement_29.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_29(1);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearIncrementUnits_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityMonthYearIncrementUnits_29.getString());
        FIX::MaturityRuleID MaturityRuleID_29("STRING_1922191319");
        noMaturityRules_2_1_2_1.set(MaturityRuleID_29);
        MaturityRules_NoMaturityRules_29.insert(MaturityRuleID_29.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_29("MONTHYEAR_2055189355");
        noMaturityRules_2_1_2_1.set(StartMaturityMonthYear_29);
        MaturityRules_NoMaturityRules_29.insert(StartMaturityMonthYear_29.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_29);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_30;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_30("MONTHYEAR_1401948361");
        noMaturityRules_2_1_2_2.set(EndMaturityMonthYear_30);
        MaturityRules_NoMaturityRules_30.insert(EndMaturityMonthYear_30.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_30(0);
        noMaturityRules_2_1_2_2.set(MaturityMonthYearFormat_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearFormat_30.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_30(158540336);
        noMaturityRules_2_1_2_2.set(MaturityMonthYearIncrement_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearIncrement_30.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_30(1);
        noMaturityRules_2_1_2_2.set(MaturityMonthYearIncrementUnits_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearIncrementUnits_30.getString());
        FIX::MaturityRuleID MaturityRuleID_30("STRING_1793884081");
        noMaturityRules_2_1_2_2.set(MaturityRuleID_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityRuleID_30.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_30("MONTHYEAR_1852574803");
        noMaturityRules_2_1_2_2.set(StartMaturityMonthYear_30);
        MaturityRules_NoMaturityRules_30.insert(StartMaturityMonthYear_30.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_30);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_2);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_1);
    }
    msg.addGroup(noMarketSegments_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_27;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_27("JPY");
  msg.set(BenchmarkCurveCurrency_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurveCurrency_27.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_27("STRING_EUREPO");
  msg.set(BenchmarkCurveName_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurveName_27.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_27("STRING_749944154");
  msg.set(BenchmarkCurvePoint_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkCurvePoint_27.getString());
  FIX::BenchmarkPrice BenchmarkPrice_27;
  BenchmarkPrice_27.setString("13552037");
  msg.set(BenchmarkPrice_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkPrice_27.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_27(1505627474);
  msg.set(BenchmarkPriceType_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkPriceType_27.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_27("STRING_1399901890");
  msg.set(BenchmarkSecurityID_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkSecurityID_27.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_27("STRING_740613239");
  msg.set(BenchmarkSecurityIDSource_27);
  SpreadOrBenchmarkCurveData_27.insert(BenchmarkSecurityIDSource_27.getString());
  FIX::Spread Spread_27;
  Spread_27.setString("19177685");
  msg.set(Spread_27);
  SpreadOrBenchmarkCurveData_27.insert(Spread_27.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_27);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_46;
    FIX::StipulationType StipulationType_46("STRING_MINDNOM");
    noStipulations_0_0.set(StipulationType_46);
    Stipulations_NoStipulations_46.insert(StipulationType_46.getString());
    FIX::StipulationValue StipulationValue_46("STRING_653175125");
    noStipulations_0_0.set(StipulationValue_46);
    Stipulations_NoStipulations_46.insert(StipulationValue_46.getString());
    all_values.push_back(Stipulations_NoStipulations_46);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinition::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_123;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_123("DATA_467224781");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingIssuer_123.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_123(2093933658);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingIssuerLen_123.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_123("DATA_560925584");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingSecurityDesc_123.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_123(105449962);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingSecurityDescLen_123.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_123;
    UnderlyingAdjustedQuantity_123.setString("11429155");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_123);
    UnderlyingInstrument_123.insert(UnderlyingAdjustedQuantity_123.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_123;
    UnderlyingAllocationPercent_123.setString("65.630000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_123);
    UnderlyingInstrument_123.insert(UnderlyingAllocationPercent_123.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_123;
    UnderlyingAttachmentPoint_123.setString("27.080000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_123);
    UnderlyingInstrument_123.insert(UnderlyingAttachmentPoint_123.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_123("STRING_181345928");
    noUnderlyings_0_0.set(UnderlyingCFICode_123);
    UnderlyingInstrument_123.insert(UnderlyingCFICode_123.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_123("STRING_1906057502");
    noUnderlyings_0_0.set(UnderlyingCPProgram_123);
    UnderlyingInstrument_123.insert(UnderlyingCPProgram_123.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_123("STRING_1472543005");
    noUnderlyings_0_0.set(UnderlyingCPRegType_123);
    UnderlyingInstrument_123.insert(UnderlyingCPRegType_123.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_123;
    UnderlyingCapValue_123.setString("21035372");
    noUnderlyings_0_0.set(UnderlyingCapValue_123);
    UnderlyingInstrument_123.insert(UnderlyingCapValue_123.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_123;
    UnderlyingCashAmount_123.setString("18137632");
    noUnderlyings_0_0.set(UnderlyingCashAmount_123);
    UnderlyingInstrument_123.insert(UnderlyingCashAmount_123.getString());
    FIX::UnderlyingCashType UnderlyingCashType_123("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_123);
    UnderlyingInstrument_123.insert(UnderlyingCashType_123.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_123;
    UnderlyingContractMultiplier_123.setString("11988399");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_123);
    UnderlyingInstrument_123.insert(UnderlyingContractMultiplier_123.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_123(1972303546);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_123);
    UnderlyingInstrument_123.insert(UnderlyingContractMultiplierUnit_123.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_123("COUNTRY_725356671");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_123);
    UnderlyingInstrument_123.insert(UnderlyingCountryOfIssue_123.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_123("LOCALMKTDATE_845240360");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_123);
    UnderlyingInstrument_123.insert(UnderlyingCouponPaymentDate_123.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_123;
    UnderlyingCouponRate_123.setString("47.020000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_123);
    UnderlyingInstrument_123.insert(UnderlyingCouponRate_123.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_123("STRING_1147784626");
    noUnderlyings_0_0.set(UnderlyingCreditRating_123);
    UnderlyingInstrument_123.insert(UnderlyingCreditRating_123.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_123("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_123);
    UnderlyingInstrument_123.insert(UnderlyingCurrency_123.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_123;
    UnderlyingCurrentValue_123.setString("18977287");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_123);
    UnderlyingInstrument_123.insert(UnderlyingCurrentValue_123.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_123;
    UnderlyingDetachmentPoint_123.setString("86.730000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_123);
    UnderlyingInstrument_123.insert(UnderlyingDetachmentPoint_123.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_123;
    UnderlyingDirtyPrice_123.setString("11874629");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_123);
    UnderlyingInstrument_123.insert(UnderlyingDirtyPrice_123.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_123;
    UnderlyingEndPrice_123.setString("11501470");
    noUnderlyings_0_0.set(UnderlyingEndPrice_123);
    UnderlyingInstrument_123.insert(UnderlyingEndPrice_123.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_123;
    UnderlyingEndValue_123.setString("6660282");
    noUnderlyings_0_0.set(UnderlyingEndValue_123);
    UnderlyingInstrument_123.insert(UnderlyingEndValue_123.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_123(957747784);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_123);
    UnderlyingInstrument_123.insert(UnderlyingExerciseStyle_123.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_123;
    UnderlyingFXRate_123.setString("4488877");
    noUnderlyings_0_0.set(UnderlyingFXRate_123);
    UnderlyingInstrument_123.insert(UnderlyingFXRate_123.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_123('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_123);
    UnderlyingInstrument_123.insert(UnderlyingFXRateCalc_123.getString());
    FIX::UnderlyingFactor UnderlyingFactor_123;
    UnderlyingFactor_123.setString("16109229");
    noUnderlyings_0_0.set(UnderlyingFactor_123);
    UnderlyingInstrument_123.insert(UnderlyingFactor_123.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_123(516939296);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_123);
    UnderlyingInstrument_123.insert(UnderlyingFlowScheduleType_123.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_123("STRING_1760127625");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_123);
    UnderlyingInstrument_123.insert(UnderlyingInstrRegistry_123.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_123("LOCALMKTDATE_1557372919");
    noUnderlyings_0_0.set(UnderlyingIssueDate_123);
    UnderlyingInstrument_123.insert(UnderlyingIssueDate_123.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_123("STRING_1077864880");
    noUnderlyings_0_0.set(UnderlyingIssuer_123);
    UnderlyingInstrument_123.insert(UnderlyingIssuer_123.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_123("STRING_1865577587");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_123);
    UnderlyingInstrument_123.insert(UnderlyingLocaleOfIssue_123.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_123("LOCALMKTDATE_552804836");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_123);
    UnderlyingInstrument_123.insert(UnderlyingMaturityDate_123.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_123("MONTHYEAR_1930261444");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_123);
    UnderlyingInstrument_123.insert(UnderlyingMaturityMonthYear_123.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_123("TZTIMEONLY_259446647");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_123);
    UnderlyingInstrument_123.insert(UnderlyingMaturityTime_123.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_123;
    UnderlyingNotionalPercentageOutstanding_123.setString("7.640000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_123);
    UnderlyingInstrument_123.insert(UnderlyingNotionalPercentageOutstanding_123.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_123('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_123);
    UnderlyingInstrument_123.insert(UnderlyingOptAttribute_123.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_123;
    UnderlyingOriginalNotionalPercentageOutstanding_123.setString("96.530000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_123);
    UnderlyingInstrument_123.insert(UnderlyingOriginalNotionalPercentageOutstanding_123.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_123("STRING_690204364");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_123);
    UnderlyingInstrument_123.insert(UnderlyingPriceUnitOfMeasure_123.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_123;
    UnderlyingPriceUnitOfMeasureQty_123.setString("13551148");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_123);
    UnderlyingInstrument_123.insert(UnderlyingPriceUnitOfMeasureQty_123.getString());
    FIX::UnderlyingProduct UnderlyingProduct_123(311513723);
    noUnderlyings_0_0.set(UnderlyingProduct_123);
    UnderlyingInstrument_123.insert(UnderlyingProduct_123.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_123(1889044292);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_123);
    UnderlyingInstrument_123.insert(UnderlyingPutOrCall_123.getString());
    FIX::UnderlyingPx UnderlyingPx_123;
    UnderlyingPx_123.setString("11799347");
    noUnderlyings_0_0.set(UnderlyingPx_123);
    UnderlyingInstrument_123.insert(UnderlyingPx_123.getString());
    FIX::UnderlyingQty UnderlyingQty_123;
    UnderlyingQty_123.setString("10368703");
    noUnderlyings_0_0.set(UnderlyingQty_123);
    UnderlyingInstrument_123.insert(UnderlyingQty_123.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_123("LOCALMKTDATE_586801004");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_123);
    UnderlyingInstrument_123.insert(UnderlyingRedemptionDate_123.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_123("STRING_709845813");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_123);
    UnderlyingInstrument_123.insert(UnderlyingRepoCollateralSecurityType_123.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_123;
    UnderlyingRepurchaseRate_123.setString("13.730000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_123);
    UnderlyingInstrument_123.insert(UnderlyingRepurchaseRate_123.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_123(1304495971);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_123);
    UnderlyingInstrument_123.insert(UnderlyingRepurchaseTerm_123.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_123("STRING_391681260");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_123);
    UnderlyingInstrument_123.insert(UnderlyingRestructuringType_123.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_123("STRING_1934900154");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityDesc_123.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_123("EXCHANGE_1229910996");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityExchange_123.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_123("STRING_1579144181");
    noUnderlyings_0_0.set(UnderlyingSecurityID_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityID_123.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_123("STRING_937563530");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityIDSource_123.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_123("STRING_1895939260");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_123);
    UnderlyingInstrument_123.insert(UnderlyingSecuritySubType_123.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_123("STRING_389408317");
    noUnderlyings_0_0.set(UnderlyingSecurityType_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityType_123.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_123("STRING_1386451260");
    noUnderlyings_0_0.set(UnderlyingSeniority_123);
    UnderlyingInstrument_123.insert(UnderlyingSeniority_123.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_123("STRING_1041358456");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_123);
    UnderlyingInstrument_123.insert(UnderlyingSettlMethod_123.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_123(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_123);
    UnderlyingInstrument_123.insert(UnderlyingSettlementType_123.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_123;
    UnderlyingStartValue_123.setString("19033905");
    noUnderlyings_0_0.set(UnderlyingStartValue_123);
    UnderlyingInstrument_123.insert(UnderlyingStartValue_123.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_123("STRING_654002433");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_123);
    UnderlyingInstrument_123.insert(UnderlyingStateOrProvinceOfIssue_123.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_123("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_123);
    UnderlyingInstrument_123.insert(UnderlyingStrikeCurrency_123.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_123;
    UnderlyingStrikePrice_123.setString("3720963");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_123);
    UnderlyingInstrument_123.insert(UnderlyingStrikePrice_123.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_123("STRING_1963025333");
    noUnderlyings_0_0.set(UnderlyingSymbol_123);
    UnderlyingInstrument_123.insert(UnderlyingSymbol_123.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_123("STRING_616549585");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_123);
    UnderlyingInstrument_123.insert(UnderlyingSymbolSfx_123.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_123("STRING_631543020");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_123);
    UnderlyingInstrument_123.insert(UnderlyingTimeUnit_123.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_123("STRING_549692450");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_123);
    UnderlyingInstrument_123.insert(UnderlyingUnitOfMeasure_123.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_123;
    UnderlyingUnitOfMeasureQty_123.setString("1579012");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_123);
    UnderlyingInstrument_123.insert(UnderlyingUnitOfMeasureQty_123.getString());
    all_values.push_back(UnderlyingInstrument_123);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_244;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_244("STRING_1239896814");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_244);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_244.insert(UnderlyingSecurityAltID_244.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_244("STRING_1513016096");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_244);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_244.insert(UnderlyingSecurityAltIDSource_244.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_244);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_245;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_245("STRING_527562748");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_245);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_245.insert(UnderlyingSecurityAltID_245.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_245("STRING_981457458");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_245);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_245.insert(UnderlyingSecurityAltIDSource_245.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_245);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_246;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_246("STRING_545467207");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_246);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_246.insert(UnderlyingSecurityAltID_246.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_246("STRING_1564433143");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_246);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_246.insert(UnderlyingSecurityAltIDSource_246.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_246);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_243;
      FIX::UnderlyingStipType UnderlyingStipType_243("STRING_1255313020");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_243);
      UnderlyingStipulations_NoUnderlyingStips_243.insert(UnderlyingStipType_243.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_243("STRING_1601604517");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_243);
      UnderlyingStipulations_NoUnderlyingStips_243.insert(UnderlyingStipValue_243.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_243);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_236;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_236("STRING_1646994280");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_236);
      UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyID_236.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_236('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_236);
      UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyIDSource_236.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_236(1955181783);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_236);
      UndlyInstrumentParties_NoUndlyInstrumentParties_236.insert(UnderlyingInstrumentPartyRole_236.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_236);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_470("STRING_179100905");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_470);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470.insert(UnderlyingInstrumentPartySubID_470.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_470(1703637395);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_470);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470.insert(UnderlyingInstrumentPartySubIDType_470.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_471("STRING_1468063131");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_471);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471.insert(UnderlyingInstrumentPartySubID_471.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_471(1565552166);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_471);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471.insert(UnderlyingInstrumentPartySubIDType_471.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_471);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_237;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_237("STRING_597512203");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyID_237.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_237('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyIDSource_237.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_237(1321459074);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_237);
      UndlyInstrumentParties_NoUndlyInstrumentParties_237.insert(UnderlyingInstrumentPartyRole_237.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_237);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_472("STRING_583647559");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_472);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472.insert(UnderlyingInstrumentPartySubID_472.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_472(7747215);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_472);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472.insert(UnderlyingInstrumentPartySubIDType_472.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_472);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_473("STRING_1623611009");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_473);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473.insert(UnderlyingInstrumentPartySubID_473.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_473(399189244);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_473);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473.insert(UnderlyingInstrumentPartySubIDType_473.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_473);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_238;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_238("STRING_624296800");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyID_238.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_238('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyIDSource_238.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_238(948881694);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_238);
      UndlyInstrumentParties_NoUndlyInstrumentParties_238.insert(UnderlyingInstrumentPartyRole_238.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_238);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_474("STRING_323719406");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_474);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474.insert(UnderlyingInstrumentPartySubID_474.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_474(41294861);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_474);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474.insert(UnderlyingInstrumentPartySubIDType_474.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_474);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_475("STRING_147730484");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_475);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475.insert(UnderlyingInstrumentPartySubID_475.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_475(851282154);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_475);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475.insert(UnderlyingInstrumentPartySubIDType_475.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_475);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_476("STRING_1022752319");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_476);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476.insert(UnderlyingInstrumentPartySubID_476.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_476(693197691);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_476);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476.insert(UnderlyingInstrumentPartySubIDType_476.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_22;
  FIX::Yield Yield_22;
  Yield_22.setString("16.500000");
  msg.set(Yield_22);
  YieldData_22.insert(Yield_22.getString());
  FIX::YieldCalcDate YieldCalcDate_22("LOCALMKTDATE_443527134");
  msg.set(YieldCalcDate_22);
  YieldData_22.insert(YieldCalcDate_22.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_22("LOCALMKTDATE_1948510711");
  msg.set(YieldRedemptionDate_22);
  YieldData_22.insert(YieldRedemptionDate_22.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_22;
  YieldRedemptionPrice_22.setString("18698361");
  msg.set(YieldRedemptionPrice_22);
  YieldData_22.insert(YieldRedemptionPrice_22.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_22(1168797921);
  msg.set(YieldRedemptionPriceType_22);
  YieldData_22.insert(YieldRedemptionPriceType_22.getString());
  FIX::YieldType YieldType_22("STRING_ANNUAL");
  msg.set(YieldType_22);
  YieldData_22.insert(YieldType_22.getString());
  all_values.push_back(YieldData_22);
  all_compo_names.insert("YieldData");


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
