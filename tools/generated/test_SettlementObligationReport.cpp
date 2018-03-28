#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SettlementObligationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementObligationReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SettlementObligationReport msg;

  list<multiset<string>> all_values;
  multiset<string> SettlementObligationReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_24("LOCALMKTDATE_693678608");
  msg.set(ClearingBusinessDate_24);
  SettlementObligationReport_0.insert(ClearingBusinessDate_24.getString());
  FIX::EncodedText EncodedText_96("DATA_1561107020");
  msg.set(EncodedText_96);
  SettlementObligationReport_0.insert(EncodedText_96.getString());
  FIX::EncodedTextLen EncodedTextLen_96(1832074933);
  msg.set(EncodedTextLen_96);
  SettlementObligationReport_0.insert(EncodedTextLen_96.getString());
  FIX::SettlObligMode SettlObligMode_0(1);
  msg.set(SettlObligMode_0);
  SettlementObligationReport_0.insert(SettlObligMode_0.getString());
  FIX::SettlObligMsgID SettlObligMsgID_0("STRING_1580088568");
  msg.set(SettlObligMsgID_0);
  SettlementObligationReport_0.insert(SettlObligMsgID_0.getString());
  FIX::SettlementCycleNo SettlementCycleNo_0(160834688);
  msg.set(SettlementCycleNo_0);
  SettlementObligationReport_0.insert(SettlementCycleNo_0.getString());
  FIX::Text Text_96("STRING_343708793");
  msg.set(Text_96);
  SettlementObligationReport_0.insert(Text_96.getString());
  FIX::TransactTime TransactTime_64(FIX::UTCTIMESTAMP(23, 10, 24, 14, 3, 2014));
  msg.set(TransactTime_64);
  SettlementObligationReport_0.insert(TransactTime_64.getString());
  all_values.push_back(SettlementObligationReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_18;
  FIX::ApplID ApplID_18("STRING_1639665282");
  msg.set(ApplID_18);
  ApplicationSequenceControl_18.insert(ApplID_18.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_18(106014643);
  msg.set(ApplLastSeqNum_18);
  ApplicationSequenceControl_18.insert(ApplLastSeqNum_18.getString());
  FIX::ApplResendFlag ApplResendFlag_18(true);
  msg.set(ApplResendFlag_18);
  ApplicationSequenceControl_18.insert(ApplResendFlag_18.getString());
  FIX::ApplSeqNum ApplSeqNum_18(1574874911);
  msg.set(ApplSeqNum_18);
  ApplicationSequenceControl_18.insert(ApplSeqNum_18.getString());
  all_values.push_back(ApplicationSequenceControl_18);

  // SettlObligationInstructions
  // Group SettlObligationInstructions.NoSettlOblig
  {
    FIX50SP2::SettlementObligationReport::NoSettlOblig noSettlOblig_0_0;
    // SettlObligationInstructions.NoSettlOblig
    multiset<string> SettlObligationInstructions_NoSettlOblig_0;
    FIX::CcyAmt CcyAmt_0;
    CcyAmt_0.setString("9192106");
    noSettlOblig_0_0.set(CcyAmt_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(CcyAmt_0.getString());
    FIX::Currency Currency_65("GBP");
    noSettlOblig_0_0.set(Currency_65);
    SettlObligationInstructions_NoSettlOblig_0.insert(Currency_65.getString());
    FIX::EffectiveTime EffectiveTime_11(FIX::UTCTIMESTAMP(12, 28, 28, 15, 11, 2017));
    noSettlOblig_0_0.set(EffectiveTime_11);
    SettlObligationInstructions_NoSettlOblig_0.insert(EffectiveTime_11.getString());
    FIX::ExpireTime ExpireTime_22(FIX::UTCTIMESTAMP(22, 7, 58, 27, 2, 2000));
    noSettlOblig_0_0.set(ExpireTime_22);
    SettlObligationInstructions_NoSettlOblig_0.insert(ExpireTime_22.getString());
    FIX::LastUpdateTime LastUpdateTime_3(FIX::UTCTIMESTAMP(19, 16, 39, 13, 5, 2005));
    noSettlOblig_0_0.set(LastUpdateTime_3);
    SettlObligationInstructions_NoSettlOblig_0.insert(LastUpdateTime_3.getString());
    FIX::NetGrossInd NetGrossInd_6(2);
    noSettlOblig_0_0.set(NetGrossInd_6);
    SettlObligationInstructions_NoSettlOblig_0.insert(NetGrossInd_6.getString());
    FIX::SettlCurrAmt SettlCurrAmt_7;
    SettlCurrAmt_7.setString("7667229");
    noSettlOblig_0_0.set(SettlCurrAmt_7);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrAmt_7.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_7;
    SettlCurrFxRate_7.setString("9520127");
    noSettlOblig_0_0.set(SettlCurrFxRate_7);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrFxRate_7.getString());
    FIX::SettlCurrency SettlCurrency_33("CAN");
    noSettlOblig_0_0.set(SettlCurrency_33);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrency_33.getString());
    FIX::SettlDate SettlDate_44("LOCALMKTDATE_379404043");
    noSettlOblig_0_0.set(SettlDate_44);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlDate_44.getString());
    FIX::SettlObligID SettlObligID_0("STRING_2031112773");
    noSettlOblig_0_0.set(SettlObligID_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligID_0.getString());
    FIX::SettlObligRefID SettlObligRefID_0("STRING_1555365930");
    noSettlOblig_0_0.set(SettlObligRefID_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligRefID_0.getString());
    FIX::SettlObligTransType SettlObligTransType_0('C');
    noSettlOblig_0_0.set(SettlObligTransType_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligTransType_0.getString());
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_0);

    // Instrument
    multiset<string> Instrument_81;
    FIX::AttachmentPoint AttachmentPoint_81;
    AttachmentPoint_81.setString("91.450000");
    noSettlOblig_0_0.set(AttachmentPoint_81);
    Instrument_81.insert(AttachmentPoint_81.getString());
    FIX::CFICode CFICode_86("STRING_2130426506");
    noSettlOblig_0_0.set(CFICode_86);
    Instrument_81.insert(CFICode_86.getString());
    FIX::CPProgram CPProgram_81(1);
    noSettlOblig_0_0.set(CPProgram_81);
    Instrument_81.insert(CPProgram_81.getString());
    FIX::CPRegType CPRegType_81("STRING_1043214905");
    noSettlOblig_0_0.set(CPRegType_81);
    Instrument_81.insert(CPRegType_81.getString());
    FIX::CapPrice CapPrice_81;
    CapPrice_81.setString("18974035");
    noSettlOblig_0_0.set(CapPrice_81);
    Instrument_81.insert(CapPrice_81.getString());
    FIX::ContractMultiplier ContractMultiplier_81;
    ContractMultiplier_81.setString("20518196");
    noSettlOblig_0_0.set(ContractMultiplier_81);
    Instrument_81.insert(ContractMultiplier_81.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_81(2);
    noSettlOblig_0_0.set(ContractMultiplierUnit_81);
    Instrument_81.insert(ContractMultiplierUnit_81.getString());
    FIX::ContractSettlMonth ContractSettlMonth_81("MONTHYEAR_58414118");
    noSettlOblig_0_0.set(ContractSettlMonth_81);
    Instrument_81.insert(ContractSettlMonth_81.getString());
    FIX::CountryOfIssue CountryOfIssue_81("COUNTRY_157946685");
    noSettlOblig_0_0.set(CountryOfIssue_81);
    Instrument_81.insert(CountryOfIssue_81.getString());
    FIX::CouponPaymentDate CouponPaymentDate_81("LOCALMKTDATE_2061298482");
    noSettlOblig_0_0.set(CouponPaymentDate_81);
    Instrument_81.insert(CouponPaymentDate_81.getString());
    FIX::CouponRate CouponRate_81;
    CouponRate_81.setString("69.860000");
    noSettlOblig_0_0.set(CouponRate_81);
    Instrument_81.insert(CouponRate_81.getString());
    FIX::CreditRating CreditRating_81("STRING_1972664383");
    noSettlOblig_0_0.set(CreditRating_81);
    Instrument_81.insert(CreditRating_81.getString());
    FIX::DatedDate DatedDate_81("LOCALMKTDATE_1530341773");
    noSettlOblig_0_0.set(DatedDate_81);
    Instrument_81.insert(DatedDate_81.getString());
    FIX::DetachmentPoint DetachmentPoint_81;
    DetachmentPoint_81.setString("25.950000");
    noSettlOblig_0_0.set(DetachmentPoint_81);
    Instrument_81.insert(DetachmentPoint_81.getString());
    FIX::EncodedIssuer EncodedIssuer_81("DATA_1072503353");
    noSettlOblig_0_0.set(EncodedIssuer_81);
    Instrument_81.insert(EncodedIssuer_81.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_81(1160219753);
    noSettlOblig_0_0.set(EncodedIssuerLen_81);
    Instrument_81.insert(EncodedIssuerLen_81.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_81("DATA_1913910646");
    noSettlOblig_0_0.set(EncodedSecurityDesc_81);
    Instrument_81.insert(EncodedSecurityDesc_81.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_81(364857122);
    noSettlOblig_0_0.set(EncodedSecurityDescLen_81);
    Instrument_81.insert(EncodedSecurityDescLen_81.getString());
    FIX::ExerciseStyle ExerciseStyle_81(2);
    noSettlOblig_0_0.set(ExerciseStyle_81);
    Instrument_81.insert(ExerciseStyle_81.getString());
    FIX::Factor Factor_81;
    Factor_81.setString("12474521");
    noSettlOblig_0_0.set(Factor_81);
    Instrument_81.insert(Factor_81.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_81(true);
    noSettlOblig_0_0.set(FlexProductEligibilityIndicator_81);
    Instrument_81.insert(FlexProductEligibilityIndicator_81.getString());
    FIX::FlexibleIndicator FlexibleIndicator_81(true);
    noSettlOblig_0_0.set(FlexibleIndicator_81);
    Instrument_81.insert(FlexibleIndicator_81.getString());
    FIX::FloorPrice FloorPrice_81;
    FloorPrice_81.setString("21227650");
    noSettlOblig_0_0.set(FloorPrice_81);
    Instrument_81.insert(FloorPrice_81.getString());
    FIX::FlowScheduleType FlowScheduleType_81(4);
    noSettlOblig_0_0.set(FlowScheduleType_81);
    Instrument_81.insert(FlowScheduleType_81.getString());
    FIX::InstrRegistry InstrRegistry_81("STRING_195162961");
    noSettlOblig_0_0.set(InstrRegistry_81);
    Instrument_81.insert(InstrRegistry_81.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_81('9');
    noSettlOblig_0_0.set(InstrmtAssignmentMethod_81);
    Instrument_81.insert(InstrmtAssignmentMethod_81.getString());
    FIX::InterestAccrualDate InterestAccrualDate_81("LOCALMKTDATE_1415473754");
    noSettlOblig_0_0.set(InterestAccrualDate_81);
    Instrument_81.insert(InterestAccrualDate_81.getString());
    FIX::IssueDate IssueDate_81("LOCALMKTDATE_574567004");
    noSettlOblig_0_0.set(IssueDate_81);
    Instrument_81.insert(IssueDate_81.getString());
    FIX::Issuer Issuer_81("STRING_840238133");
    noSettlOblig_0_0.set(Issuer_81);
    Instrument_81.insert(Issuer_81.getString());
    FIX::ListMethod ListMethod_81(1);
    noSettlOblig_0_0.set(ListMethod_81);
    Instrument_81.insert(ListMethod_81.getString());
    FIX::LocaleOfIssue LocaleOfIssue_81("STRING_262536045");
    noSettlOblig_0_0.set(LocaleOfIssue_81);
    Instrument_81.insert(LocaleOfIssue_81.getString());
    FIX::MaturityDate MaturityDate_81("LOCALMKTDATE_696633631");
    noSettlOblig_0_0.set(MaturityDate_81);
    Instrument_81.insert(MaturityDate_81.getString());
    FIX::MaturityMonthYear MaturityMonthYear_81("MONTHYEAR_806298895");
    noSettlOblig_0_0.set(MaturityMonthYear_81);
    Instrument_81.insert(MaturityMonthYear_81.getString());
    FIX::MaturityTime MaturityTime_81("TZTIMEONLY_630191889");
    noSettlOblig_0_0.set(MaturityTime_81);
    Instrument_81.insert(MaturityTime_81.getString());
    FIX::MinPriceIncrement MinPriceIncrement_81;
    MinPriceIncrement_81.setString("17398485");
    noSettlOblig_0_0.set(MinPriceIncrement_81);
    Instrument_81.insert(MinPriceIncrement_81.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_81;
    MinPriceIncrementAmount_81.setString("5562187");
    noSettlOblig_0_0.set(MinPriceIncrementAmount_81);
    Instrument_81.insert(MinPriceIncrementAmount_81.getString());
    FIX::NTPositionLimit NTPositionLimit_81(534527897);
    noSettlOblig_0_0.set(NTPositionLimit_81);
    Instrument_81.insert(NTPositionLimit_81.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_81;
    NotionalPercentageOutstanding_81.setString("13.640000");
    noSettlOblig_0_0.set(NotionalPercentageOutstanding_81);
    Instrument_81.insert(NotionalPercentageOutstanding_81.getString());
    FIX::OptAttribute OptAttribute_81('6');
    noSettlOblig_0_0.set(OptAttribute_81);
    Instrument_81.insert(OptAttribute_81.getString());
    FIX::OptPayoutAmount OptPayoutAmount_81;
    OptPayoutAmount_81.setString("6924745");
    noSettlOblig_0_0.set(OptPayoutAmount_81);
    Instrument_81.insert(OptPayoutAmount_81.getString());
    FIX::OptPayoutType OptPayoutType_81(1);
    noSettlOblig_0_0.set(OptPayoutType_81);
    Instrument_81.insert(OptPayoutType_81.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_81;
    OriginalNotionalPercentageOutstanding_81.setString("98.590000");
    noSettlOblig_0_0.set(OriginalNotionalPercentageOutstanding_81);
    Instrument_81.insert(OriginalNotionalPercentageOutstanding_81.getString());
    FIX::Pool Pool_81("STRING_517655317");
    noSettlOblig_0_0.set(Pool_81);
    Instrument_81.insert(Pool_81.getString());
    FIX::PositionLimit PositionLimit_81(1165884324);
    noSettlOblig_0_0.set(PositionLimit_81);
    Instrument_81.insert(PositionLimit_81.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_81("STRING_INT");
    noSettlOblig_0_0.set(PriceQuoteMethod_81);
    Instrument_81.insert(PriceQuoteMethod_81.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_81("STRING_1590158670");
    noSettlOblig_0_0.set(PriceUnitOfMeasure_81);
    Instrument_81.insert(PriceUnitOfMeasure_81.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_81;
    PriceUnitOfMeasureQty_81.setString("1786204");
    noSettlOblig_0_0.set(PriceUnitOfMeasureQty_81);
    Instrument_81.insert(PriceUnitOfMeasureQty_81.getString());
    FIX::Product Product_89(5);
    noSettlOblig_0_0.set(Product_89);
    Instrument_81.insert(Product_89.getString());
    FIX::ProductComplex ProductComplex_81("STRING_1955015792");
    noSettlOblig_0_0.set(ProductComplex_81);
    Instrument_81.insert(ProductComplex_81.getString());
    FIX::PutOrCall PutOrCall_81(0);
    noSettlOblig_0_0.set(PutOrCall_81);
    Instrument_81.insert(PutOrCall_81.getString());
    FIX::RedemptionDate RedemptionDate_81("LOCALMKTDATE_783267956");
    noSettlOblig_0_0.set(RedemptionDate_81);
    Instrument_81.insert(RedemptionDate_81.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_81("STRING_1967611267");
    noSettlOblig_0_0.set(RepoCollateralSecurityType_81);
    Instrument_81.insert(RepoCollateralSecurityType_81.getString());
    FIX::RepurchaseRate RepurchaseRate_81;
    RepurchaseRate_81.setString("69.440000");
    noSettlOblig_0_0.set(RepurchaseRate_81);
    Instrument_81.insert(RepurchaseRate_81.getString());
    FIX::RepurchaseTerm RepurchaseTerm_81(758549391);
    noSettlOblig_0_0.set(RepurchaseTerm_81);
    Instrument_81.insert(RepurchaseTerm_81.getString());
    FIX::RestructuringType RestructuringType_81("STRING_MM");
    noSettlOblig_0_0.set(RestructuringType_81);
    Instrument_81.insert(RestructuringType_81.getString());
    FIX::SecurityDesc SecurityDesc_81("STRING_1695219905");
    noSettlOblig_0_0.set(SecurityDesc_81);
    Instrument_81.insert(SecurityDesc_81.getString());
    FIX::SecurityExchange SecurityExchange_81("EXCHANGE_1715158399");
    noSettlOblig_0_0.set(SecurityExchange_81);
    Instrument_81.insert(SecurityExchange_81.getString());
    FIX::SecurityGroup SecurityGroup_81("STRING_2014919813");
    noSettlOblig_0_0.set(SecurityGroup_81);
    Instrument_81.insert(SecurityGroup_81.getString());
    FIX::SecurityID SecurityID_81("STRING_122303262");
    noSettlOblig_0_0.set(SecurityID_81);
    Instrument_81.insert(SecurityID_81.getString());
    FIX::SecurityIDSource SecurityIDSource_81("STRING_I");
    noSettlOblig_0_0.set(SecurityIDSource_81);
    Instrument_81.insert(SecurityIDSource_81.getString());
    FIX::SecurityStatus SecurityStatus_82("STRING_1");
    noSettlOblig_0_0.set(SecurityStatus_82);
    Instrument_81.insert(SecurityStatus_82.getString());
    FIX::SecuritySubType SecuritySubType_85("STRING_384839307");
    noSettlOblig_0_0.set(SecuritySubType_85);
    Instrument_81.insert(SecuritySubType_85.getString());
    FIX::SecurityType SecurityType_89("STRING_CMBS");
    noSettlOblig_0_0.set(SecurityType_89);
    Instrument_81.insert(SecurityType_89.getString());
    FIX::Seniority Seniority_81("STRING_SB");
    noSettlOblig_0_0.set(Seniority_81);
    Instrument_81.insert(Seniority_81.getString());
    FIX::SettlMethod SettlMethod_81('C');
    noSettlOblig_0_0.set(SettlMethod_81);
    Instrument_81.insert(SettlMethod_81.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_81("STRING_696911404");
    noSettlOblig_0_0.set(SettleOnOpenFlag_81);
    Instrument_81.insert(SettleOnOpenFlag_81.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_81("STRING_2053309852");
    noSettlOblig_0_0.set(StateOrProvinceOfIssue_81);
    Instrument_81.insert(StateOrProvinceOfIssue_81.getString());
    FIX::StrikeCurrency StrikeCurrency_81("CAN");
    noSettlOblig_0_0.set(StrikeCurrency_81);
    Instrument_81.insert(StrikeCurrency_81.getString());
    FIX::StrikeMultiplier StrikeMultiplier_81;
    StrikeMultiplier_81.setString("5204590");
    noSettlOblig_0_0.set(StrikeMultiplier_81);
    Instrument_81.insert(StrikeMultiplier_81.getString());
    FIX::StrikePrice StrikePrice_81;
    StrikePrice_81.setString("945500");
    noSettlOblig_0_0.set(StrikePrice_81);
    Instrument_81.insert(StrikePrice_81.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_81(2);
    noSettlOblig_0_0.set(StrikePriceBoundaryMethod_81);
    Instrument_81.insert(StrikePriceBoundaryMethod_81.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_81;
    StrikePriceBoundaryPrecision_81.setString("52.880000");
    noSettlOblig_0_0.set(StrikePriceBoundaryPrecision_81);
    Instrument_81.insert(StrikePriceBoundaryPrecision_81.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_81(1);
    noSettlOblig_0_0.set(StrikePriceDeterminationMethod_81);
    Instrument_81.insert(StrikePriceDeterminationMethod_81.getString());
    FIX::StrikeValue StrikeValue_81;
    StrikeValue_81.setString("12200659");
    noSettlOblig_0_0.set(StrikeValue_81);
    Instrument_81.insert(StrikeValue_81.getString());
    FIX::Symbol Symbol_81("STRING_1965067742");
    noSettlOblig_0_0.set(Symbol_81);
    Instrument_81.insert(Symbol_81.getString());
    FIX::SymbolSfx SymbolSfx_81("STRING_WI");
    noSettlOblig_0_0.set(SymbolSfx_81);
    Instrument_81.insert(SymbolSfx_81.getString());
    FIX::TimeUnit TimeUnit_81("STRING_D");
    noSettlOblig_0_0.set(TimeUnit_81);
    Instrument_81.insert(TimeUnit_81.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_81(4);
    noSettlOblig_0_0.set(UnderlyingPriceDeterminationMethod_81);
    Instrument_81.insert(UnderlyingPriceDeterminationMethod_81.getString());
    FIX::UnitOfMeasure UnitOfMeasure_81("STRING_USD");
    noSettlOblig_0_0.set(UnitOfMeasure_81);
    Instrument_81.insert(UnitOfMeasure_81.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_81;
    UnitOfMeasureQty_81.setString("15081095");
    noSettlOblig_0_0.set(UnitOfMeasureQty_81);
    Instrument_81.insert(UnitOfMeasureQty_81.getString());
    FIX::ValuationMethod ValuationMethod_81("STRING_FUT");
    noSettlOblig_0_0.set(ValuationMethod_81);
    Instrument_81.insert(ValuationMethod_81.getString());
    all_values.push_back(Instrument_81);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_153;
      FIX::ComplexEventCondition ComplexEventCondition_153(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_153);
      ComplexEvents_NoComplexEvents_153.insert(ComplexEventCondition_153.getString());
      FIX::ComplexEventPrice ComplexEventPrice_153;
      ComplexEventPrice_153.setString("8952172");
      noComplexEvents_0_1_0.set(ComplexEventPrice_153);
      ComplexEvents_NoComplexEvents_153.insert(ComplexEventPrice_153.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_153(5);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_153);
      ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceBoundaryMethod_153.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_153;
      ComplexEventPriceBoundaryPrecision_153.setString("90.920000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_153);
      ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceBoundaryPrecision_153.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_153(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_153);
      ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceTimeType_153.getString());
      FIX::ComplexEventType ComplexEventType_153(8);
      noComplexEvents_0_1_0.set(ComplexEventType_153);
      ComplexEvents_NoComplexEvents_153.insert(ComplexEventType_153.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_153;
      ComplexOptPayoutAmount_153.setString("5307223");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_153);
      ComplexEvents_NoComplexEvents_153.insert(ComplexOptPayoutAmount_153.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_153);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_314;
        FIX::ComplexEventEndDate ComplexEventEndDate_314(FIX::UTCTIMESTAMP(13, 19, 5, 26, 5, 2007));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_314);
        ComplexEventDates_NoComplexEventDates_314.insert(ComplexEventEndDate_314.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_314(FIX::UTCTIMESTAMP(21, 46, 11, 16, 11, 2005));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_314);
        ComplexEventDates_NoComplexEventDates_314.insert(ComplexEventStartDate_314.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_314);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_640;
          FIX::ComplexEventEndTime ComplexEventEndTime_640(FIX::UTCTIMEONLY(10, 21, 16));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_640);
          ComplexEventTimes_NoComplexEventTimes_640.insert(ComplexEventEndTime_640.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_640(FIX::UTCTIMEONLY(12, 52, 44));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_640);
          ComplexEventTimes_NoComplexEventTimes_640.insert(ComplexEventStartTime_640.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_640);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_641;
          FIX::ComplexEventEndTime ComplexEventEndTime_641(FIX::UTCTIMEONLY(23, 33, 59));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_641);
          ComplexEventTimes_NoComplexEventTimes_641.insert(ComplexEventEndTime_641.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_641(FIX::UTCTIMEONLY(19, 26, 25));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_641);
          ComplexEventTimes_NoComplexEventTimes_641.insert(ComplexEventStartTime_641.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_641);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_642;
          FIX::ComplexEventEndTime ComplexEventEndTime_642(FIX::UTCTIMEONLY(3, 45, 1));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_642);
          ComplexEventTimes_NoComplexEventTimes_642.insert(ComplexEventEndTime_642.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_642(FIX::UTCTIMEONLY(5, 50, 13));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_642);
          ComplexEventTimes_NoComplexEventTimes_642.insert(ComplexEventStartTime_642.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_642);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_315;
        FIX::ComplexEventEndDate ComplexEventEndDate_315(FIX::UTCTIMESTAMP(13, 24, 30, 15, 4, 2002));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_315);
        ComplexEventDates_NoComplexEventDates_315.insert(ComplexEventEndDate_315.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_315(FIX::UTCTIMESTAMP(6, 47, 41, 4, 4, 2013));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_315);
        ComplexEventDates_NoComplexEventDates_315.insert(ComplexEventStartDate_315.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_315);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_643;
          FIX::ComplexEventEndTime ComplexEventEndTime_643(FIX::UTCTIMEONLY(1, 34, 50));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_643);
          ComplexEventTimes_NoComplexEventTimes_643.insert(ComplexEventEndTime_643.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_643(FIX::UTCTIMEONLY(9, 8, 44));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_643);
          ComplexEventTimes_NoComplexEventTimes_643.insert(ComplexEventStartTime_643.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_643);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_644;
          FIX::ComplexEventEndTime ComplexEventEndTime_644(FIX::UTCTIMEONLY(23, 21, 22));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_644);
          ComplexEventTimes_NoComplexEventTimes_644.insert(ComplexEventEndTime_644.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_644(FIX::UTCTIMEONLY(14, 12, 38));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_644);
          ComplexEventTimes_NoComplexEventTimes_644.insert(ComplexEventStartTime_644.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_644);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_645;
          FIX::ComplexEventEndTime ComplexEventEndTime_645(FIX::UTCTIMEONLY(17, 54, 27));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_645);
          ComplexEventTimes_NoComplexEventTimes_645.insert(ComplexEventEndTime_645.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_645(FIX::UTCTIMEONLY(13, 53, 17));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_645);
          ComplexEventTimes_NoComplexEventTimes_645.insert(ComplexEventStartTime_645.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_645);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noSettlOblig_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_159;
      FIX::EventDate EventDate_159("LOCALMKTDATE_123756573");
      noEvents_0_1_0.set(EventDate_159);
      EvntGrp_NoEvents_159.insert(EventDate_159.getString());
      FIX::EventPx EventPx_159;
      EventPx_159.setString("21095408");
      noEvents_0_1_0.set(EventPx_159);
      EvntGrp_NoEvents_159.insert(EventPx_159.getString());
      FIX::EventText EventText_159("STRING_1300259707");
      noEvents_0_1_0.set(EventText_159);
      EvntGrp_NoEvents_159.insert(EventText_159.getString());
      FIX::EventTime EventTime_159(FIX::UTCTIMESTAMP(16, 8, 15, 13, 7, 2003));
      noEvents_0_1_0.set(EventTime_159);
      EvntGrp_NoEvents_159.insert(EventTime_159.getString());
      FIX::EventType EventType_159(5);
      noEvents_0_1_0.set(EventType_159);
      EvntGrp_NoEvents_159.insert(EventType_159.getString());
      all_values.push_back(EvntGrp_NoEvents_159);

      noSettlOblig_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_160;
      FIX::EventDate EventDate_160("LOCALMKTDATE_1421502495");
      noEvents_0_1_1.set(EventDate_160);
      EvntGrp_NoEvents_160.insert(EventDate_160.getString());
      FIX::EventPx EventPx_160;
      EventPx_160.setString("8184124");
      noEvents_0_1_1.set(EventPx_160);
      EvntGrp_NoEvents_160.insert(EventPx_160.getString());
      FIX::EventText EventText_160("STRING_718314408");
      noEvents_0_1_1.set(EventText_160);
      EvntGrp_NoEvents_160.insert(EventText_160.getString());
      FIX::EventTime EventTime_160(FIX::UTCTIMESTAMP(20, 10, 58, 21, 1, 2017));
      noEvents_0_1_1.set(EventTime_160);
      EvntGrp_NoEvents_160.insert(EventTime_160.getString());
      FIX::EventType EventType_160(8);
      noEvents_0_1_1.set(EventType_160);
      EvntGrp_NoEvents_160.insert(EventType_160.getString());
      all_values.push_back(EvntGrp_NoEvents_160);

      noSettlOblig_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_157;
      FIX::InstrumentPartyID InstrumentPartyID_157("STRING_731011004");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyID_157.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_157('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyIDSource_157.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_157(213663400);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyRole_157.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_157);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320;
        FIX::InstrumentPartySubID InstrumentPartySubID_320("STRING_1549159859");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_320);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320.insert(InstrumentPartySubID_320.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_320(746286213);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_320);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320.insert(InstrumentPartySubIDType_320.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321;
        FIX::InstrumentPartySubID InstrumentPartySubID_321("STRING_1140998199");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_321);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321.insert(InstrumentPartySubID_321.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_321(1408517134);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_321);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321.insert(InstrumentPartySubIDType_321.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322;
        FIX::InstrumentPartySubID InstrumentPartySubID_322("STRING_870042786");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_322);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322.insert(InstrumentPartySubID_322.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_322(1103055389);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_322);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322.insert(InstrumentPartySubIDType_322.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noSettlOblig_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_173;
      FIX::SecurityAltID SecurityAltID_173("STRING_1414427731");
      noSecurityAltID_0_1_0.set(SecurityAltID_173);
      SecAltIDGrp_NoSecurityAltID_173.insert(SecurityAltID_173.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_173("STRING_1536032805");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_173);
      SecAltIDGrp_NoSecurityAltID_173.insert(SecurityAltIDSource_173.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_173);

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_174;
      FIX::SecurityAltID SecurityAltID_174("STRING_646744722");
      noSecurityAltID_0_1_1.set(SecurityAltID_174);
      SecAltIDGrp_NoSecurityAltID_174.insert(SecurityAltID_174.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_174("STRING_1922134846");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_174);
      SecAltIDGrp_NoSecurityAltID_174.insert(SecurityAltIDSource_174.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_174);

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_162;
    FIX::SecurityXML SecurityXML_163("XMLDATA_1159618470");
    noSettlOblig_0_0.set(SecurityXML_163);
    FIX::SecurityXMLLen SecurityXMLLen_81(1438630944);
    noSettlOblig_0_0.set(SecurityXMLLen_81);
    FIX::SecurityXMLSchema SecurityXMLSchema_81("STRING_196793375");
    noSettlOblig_0_0.set(SecurityXMLSchema_81);
    SecurityXML_162.insert(SecurityXMLSchema_81.getString());
    all_values.push_back(SecurityXML_162);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_136;
      FIX::PartyID PartyID_136("STRING_712649791");
      noPartyIDs_0_1_0.set(PartyID_136);
      Parties_NoPartyIDs_136.insert(PartyID_136.getString());
      FIX::PartyIDSource PartyIDSource_136('I');
      noPartyIDs_0_1_0.set(PartyIDSource_136);
      Parties_NoPartyIDs_136.insert(PartyIDSource_136.getString());
      FIX::PartyRole PartyRole_136(85);
      noPartyIDs_0_1_0.set(PartyRole_136);
      Parties_NoPartyIDs_136.insert(PartyRole_136.getString());
      all_values.push_back(Parties_NoPartyIDs_136);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_274;
        FIX::PartySubID PartySubID_274("STRING_1479801912");
        noPartySubIDs_0_0_2_0.set(PartySubID_274);
        PtysSubGrp_NoPartySubIDs_274.insert(PartySubID_274.getString());
        FIX::PartySubIDType PartySubIDType_274(5);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_274);
        PtysSubGrp_NoPartySubIDs_274.insert(PartySubIDType_274.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_274);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_275;
        FIX::PartySubID PartySubID_275("STRING_97975558");
        noPartySubIDs_0_0_2_1.set(PartySubID_275);
        PtysSubGrp_NoPartySubIDs_275.insert(PartySubID_275.getString());
        FIX::PartySubIDType PartySubIDType_275(33);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_275);
        PtysSubGrp_NoPartySubIDs_275.insert(PartySubIDType_275.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_275);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_276;
        FIX::PartySubID PartySubID_276("STRING_935812241");
        noPartySubIDs_0_0_2_2.set(PartySubID_276);
        PtysSubGrp_NoPartySubIDs_276.insert(PartySubID_276.getString());
        FIX::PartySubIDType PartySubIDType_276(8);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_276);
        PtysSubGrp_NoPartySubIDs_276.insert(PartySubIDType_276.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_276);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSettlOblig_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_137;
      FIX::PartyID PartyID_137("STRING_959786549");
      noPartyIDs_0_1_1.set(PartyID_137);
      Parties_NoPartyIDs_137.insert(PartyID_137.getString());
      FIX::PartyIDSource PartyIDSource_137('C');
      noPartyIDs_0_1_1.set(PartyIDSource_137);
      Parties_NoPartyIDs_137.insert(PartyIDSource_137.getString());
      FIX::PartyRole PartyRole_137(60);
      noPartyIDs_0_1_1.set(PartyRole_137);
      Parties_NoPartyIDs_137.insert(PartyRole_137.getString());
      all_values.push_back(Parties_NoPartyIDs_137);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_277;
        FIX::PartySubID PartySubID_277("STRING_1100264914");
        noPartySubIDs_0_1_2_0.set(PartySubID_277);
        PtysSubGrp_NoPartySubIDs_277.insert(PartySubID_277.getString());
        FIX::PartySubIDType PartySubIDType_277(23);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_277);
        PtysSubGrp_NoPartySubIDs_277.insert(PartySubIDType_277.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_277);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSettlOblig_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_0;
      FIX::SettlObligSource SettlObligSource_0('3');
      noSettlDetails_0_1_0.set(SettlObligSource_0);
      SettlDetails_NoSettlDetails_0.insert(SettlObligSource_0.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_0);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_39;
        FIX::SettlPartyID SettlPartyID_39("STRING_796484708");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyID_39.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_39('5');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyIDSource_39.getString());
        FIX::SettlPartyRole SettlPartyRole_39(421887428);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyRole_39.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_39);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_88;
          FIX::SettlPartySubID SettlPartySubID_88("STRING_1983537997");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_88);
          SettlPtysSubGrp_NoSettlPartySubIDs_88.insert(SettlPartySubID_88.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_88(1957920233);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_88);
          SettlPtysSubGrp_NoSettlPartySubIDs_88.insert(SettlPartySubIDType_88.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_88);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_40;
        FIX::SettlPartyID SettlPartyID_40("STRING_2004522624");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyID_40.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_40('1');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyIDSource_40.getString());
        FIX::SettlPartyRole SettlPartyRole_40(970055056);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyRole_40.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_40);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_89;
          FIX::SettlPartySubID SettlPartySubID_89("STRING_1954982570");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_89);
          SettlPtysSubGrp_NoSettlPartySubIDs_89.insert(SettlPartySubID_89.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_89(126447462);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_89);
          SettlPtysSubGrp_NoSettlPartySubIDs_89.insert(SettlPartySubIDType_89.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_89);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_90;
          FIX::SettlPartySubID SettlPartySubID_90("STRING_2008319712");
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubID_90);
          SettlPtysSubGrp_NoSettlPartySubIDs_90.insert(SettlPartySubID_90.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_90(822704782);
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubIDType_90);
          SettlPtysSubGrp_NoSettlPartySubIDs_90.insert(SettlPartySubIDType_90.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_90);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noSettlOblig_0_0.addGroup(noSettlDetails_0_1_0);
    }
    msg.addGroup(noSettlOblig_0_0);
  }
  {
    FIX50SP2::SettlementObligationReport::NoSettlOblig noSettlOblig_0_1;
    // SettlObligationInstructions.NoSettlOblig
    multiset<string> SettlObligationInstructions_NoSettlOblig_1;
    FIX::CcyAmt CcyAmt_1;
    CcyAmt_1.setString("11542");
    noSettlOblig_0_1.set(CcyAmt_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(CcyAmt_1.getString());
    FIX::Currency Currency_66("CHF");
    noSettlOblig_0_1.set(Currency_66);
    SettlObligationInstructions_NoSettlOblig_1.insert(Currency_66.getString());
    FIX::EffectiveTime EffectiveTime_12(FIX::UTCTIMESTAMP(22, 29, 4, 24, 11, 2014));
    noSettlOblig_0_1.set(EffectiveTime_12);
    SettlObligationInstructions_NoSettlOblig_1.insert(EffectiveTime_12.getString());
    FIX::ExpireTime ExpireTime_23(FIX::UTCTIMESTAMP(17, 25, 57, 23, 2, 2008));
    noSettlOblig_0_1.set(ExpireTime_23);
    SettlObligationInstructions_NoSettlOblig_1.insert(ExpireTime_23.getString());
    FIX::LastUpdateTime LastUpdateTime_4(FIX::UTCTIMESTAMP(7, 44, 58, 25, 2, 2015));
    noSettlOblig_0_1.set(LastUpdateTime_4);
    SettlObligationInstructions_NoSettlOblig_1.insert(LastUpdateTime_4.getString());
    FIX::NetGrossInd NetGrossInd_7(1);
    noSettlOblig_0_1.set(NetGrossInd_7);
    SettlObligationInstructions_NoSettlOblig_1.insert(NetGrossInd_7.getString());
    FIX::SettlCurrAmt SettlCurrAmt_8;
    SettlCurrAmt_8.setString("8963152");
    noSettlOblig_0_1.set(SettlCurrAmt_8);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlCurrAmt_8.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_8;
    SettlCurrFxRate_8.setString("1246767");
    noSettlOblig_0_1.set(SettlCurrFxRate_8);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlCurrFxRate_8.getString());
    FIX::SettlCurrency SettlCurrency_34("JPY");
    noSettlOblig_0_1.set(SettlCurrency_34);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlCurrency_34.getString());
    FIX::SettlDate SettlDate_45("LOCALMKTDATE_2132996459");
    noSettlOblig_0_1.set(SettlDate_45);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlDate_45.getString());
    FIX::SettlObligID SettlObligID_1("STRING_22337705");
    noSettlOblig_0_1.set(SettlObligID_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlObligID_1.getString());
    FIX::SettlObligRefID SettlObligRefID_1("STRING_1023917005");
    noSettlOblig_0_1.set(SettlObligRefID_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlObligRefID_1.getString());
    FIX::SettlObligTransType SettlObligTransType_1('T');
    noSettlOblig_0_1.set(SettlObligTransType_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlObligTransType_1.getString());
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_1);

    // Instrument
    multiset<string> Instrument_82;
    FIX::AttachmentPoint AttachmentPoint_82;
    AttachmentPoint_82.setString("7.520000");
    noSettlOblig_0_1.set(AttachmentPoint_82);
    Instrument_82.insert(AttachmentPoint_82.getString());
    FIX::CFICode CFICode_87("STRING_2073401988");
    noSettlOblig_0_1.set(CFICode_87);
    Instrument_82.insert(CFICode_87.getString());
    FIX::CPProgram CPProgram_82(1);
    noSettlOblig_0_1.set(CPProgram_82);
    Instrument_82.insert(CPProgram_82.getString());
    FIX::CPRegType CPRegType_82("STRING_955987801");
    noSettlOblig_0_1.set(CPRegType_82);
    Instrument_82.insert(CPRegType_82.getString());
    FIX::CapPrice CapPrice_82;
    CapPrice_82.setString("19112155");
    noSettlOblig_0_1.set(CapPrice_82);
    Instrument_82.insert(CapPrice_82.getString());
    FIX::ContractMultiplier ContractMultiplier_82;
    ContractMultiplier_82.setString("18194149");
    noSettlOblig_0_1.set(ContractMultiplier_82);
    Instrument_82.insert(ContractMultiplier_82.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_82(1);
    noSettlOblig_0_1.set(ContractMultiplierUnit_82);
    Instrument_82.insert(ContractMultiplierUnit_82.getString());
    FIX::ContractSettlMonth ContractSettlMonth_82("MONTHYEAR_488147006");
    noSettlOblig_0_1.set(ContractSettlMonth_82);
    Instrument_82.insert(ContractSettlMonth_82.getString());
    FIX::CountryOfIssue CountryOfIssue_82("COUNTRY_1869201608");
    noSettlOblig_0_1.set(CountryOfIssue_82);
    Instrument_82.insert(CountryOfIssue_82.getString());
    FIX::CouponPaymentDate CouponPaymentDate_82("LOCALMKTDATE_124139065");
    noSettlOblig_0_1.set(CouponPaymentDate_82);
    Instrument_82.insert(CouponPaymentDate_82.getString());
    FIX::CouponRate CouponRate_82;
    CouponRate_82.setString("33.630000");
    noSettlOblig_0_1.set(CouponRate_82);
    Instrument_82.insert(CouponRate_82.getString());
    FIX::CreditRating CreditRating_82("STRING_96822117");
    noSettlOblig_0_1.set(CreditRating_82);
    Instrument_82.insert(CreditRating_82.getString());
    FIX::DatedDate DatedDate_82("LOCALMKTDATE_1236811601");
    noSettlOblig_0_1.set(DatedDate_82);
    Instrument_82.insert(DatedDate_82.getString());
    FIX::DetachmentPoint DetachmentPoint_82;
    DetachmentPoint_82.setString("8.480000");
    noSettlOblig_0_1.set(DetachmentPoint_82);
    Instrument_82.insert(DetachmentPoint_82.getString());
    FIX::EncodedIssuer EncodedIssuer_82("DATA_1938241961");
    noSettlOblig_0_1.set(EncodedIssuer_82);
    Instrument_82.insert(EncodedIssuer_82.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_82(998485197);
    noSettlOblig_0_1.set(EncodedIssuerLen_82);
    Instrument_82.insert(EncodedIssuerLen_82.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_82("DATA_1634464952");
    noSettlOblig_0_1.set(EncodedSecurityDesc_82);
    Instrument_82.insert(EncodedSecurityDesc_82.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_82(2054065585);
    noSettlOblig_0_1.set(EncodedSecurityDescLen_82);
    Instrument_82.insert(EncodedSecurityDescLen_82.getString());
    FIX::ExerciseStyle ExerciseStyle_82(1);
    noSettlOblig_0_1.set(ExerciseStyle_82);
    Instrument_82.insert(ExerciseStyle_82.getString());
    FIX::Factor Factor_82;
    Factor_82.setString("14158934");
    noSettlOblig_0_1.set(Factor_82);
    Instrument_82.insert(Factor_82.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_82(false);
    noSettlOblig_0_1.set(FlexProductEligibilityIndicator_82);
    Instrument_82.insert(FlexProductEligibilityIndicator_82.getString());
    FIX::FlexibleIndicator FlexibleIndicator_82(true);
    noSettlOblig_0_1.set(FlexibleIndicator_82);
    Instrument_82.insert(FlexibleIndicator_82.getString());
    FIX::FloorPrice FloorPrice_82;
    FloorPrice_82.setString("8080274");
    noSettlOblig_0_1.set(FloorPrice_82);
    Instrument_82.insert(FloorPrice_82.getString());
    FIX::FlowScheduleType FlowScheduleType_82(2);
    noSettlOblig_0_1.set(FlowScheduleType_82);
    Instrument_82.insert(FlowScheduleType_82.getString());
    FIX::InstrRegistry InstrRegistry_82("STRING_1071620270");
    noSettlOblig_0_1.set(InstrRegistry_82);
    Instrument_82.insert(InstrRegistry_82.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_82('7');
    noSettlOblig_0_1.set(InstrmtAssignmentMethod_82);
    Instrument_82.insert(InstrmtAssignmentMethod_82.getString());
    FIX::InterestAccrualDate InterestAccrualDate_82("LOCALMKTDATE_1751920140");
    noSettlOblig_0_1.set(InterestAccrualDate_82);
    Instrument_82.insert(InterestAccrualDate_82.getString());
    FIX::IssueDate IssueDate_82("LOCALMKTDATE_1057133081");
    noSettlOblig_0_1.set(IssueDate_82);
    Instrument_82.insert(IssueDate_82.getString());
    FIX::Issuer Issuer_82("STRING_29998034");
    noSettlOblig_0_1.set(Issuer_82);
    Instrument_82.insert(Issuer_82.getString());
    FIX::ListMethod ListMethod_82(0);
    noSettlOblig_0_1.set(ListMethod_82);
    Instrument_82.insert(ListMethod_82.getString());
    FIX::LocaleOfIssue LocaleOfIssue_82("STRING_135679357");
    noSettlOblig_0_1.set(LocaleOfIssue_82);
    Instrument_82.insert(LocaleOfIssue_82.getString());
    FIX::MaturityDate MaturityDate_82("LOCALMKTDATE_207358786");
    noSettlOblig_0_1.set(MaturityDate_82);
    Instrument_82.insert(MaturityDate_82.getString());
    FIX::MaturityMonthYear MaturityMonthYear_82("MONTHYEAR_554271838");
    noSettlOblig_0_1.set(MaturityMonthYear_82);
    Instrument_82.insert(MaturityMonthYear_82.getString());
    FIX::MaturityTime MaturityTime_82("TZTIMEONLY_552718303");
    noSettlOblig_0_1.set(MaturityTime_82);
    Instrument_82.insert(MaturityTime_82.getString());
    FIX::MinPriceIncrement MinPriceIncrement_82;
    MinPriceIncrement_82.setString("11633465");
    noSettlOblig_0_1.set(MinPriceIncrement_82);
    Instrument_82.insert(MinPriceIncrement_82.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_82;
    MinPriceIncrementAmount_82.setString("3180037");
    noSettlOblig_0_1.set(MinPriceIncrementAmount_82);
    Instrument_82.insert(MinPriceIncrementAmount_82.getString());
    FIX::NTPositionLimit NTPositionLimit_82(224649593);
    noSettlOblig_0_1.set(NTPositionLimit_82);
    Instrument_82.insert(NTPositionLimit_82.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_82;
    NotionalPercentageOutstanding_82.setString("43.400000");
    noSettlOblig_0_1.set(NotionalPercentageOutstanding_82);
    Instrument_82.insert(NotionalPercentageOutstanding_82.getString());
    FIX::OptAttribute OptAttribute_82('8');
    noSettlOblig_0_1.set(OptAttribute_82);
    Instrument_82.insert(OptAttribute_82.getString());
    FIX::OptPayoutAmount OptPayoutAmount_82;
    OptPayoutAmount_82.setString("20938512");
    noSettlOblig_0_1.set(OptPayoutAmount_82);
    Instrument_82.insert(OptPayoutAmount_82.getString());
    FIX::OptPayoutType OptPayoutType_82(3);
    noSettlOblig_0_1.set(OptPayoutType_82);
    Instrument_82.insert(OptPayoutType_82.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_82;
    OriginalNotionalPercentageOutstanding_82.setString("41.240000");
    noSettlOblig_0_1.set(OriginalNotionalPercentageOutstanding_82);
    Instrument_82.insert(OriginalNotionalPercentageOutstanding_82.getString());
    FIX::Pool Pool_82("STRING_43189670");
    noSettlOblig_0_1.set(Pool_82);
    Instrument_82.insert(Pool_82.getString());
    FIX::PositionLimit PositionLimit_82(923731358);
    noSettlOblig_0_1.set(PositionLimit_82);
    Instrument_82.insert(PositionLimit_82.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_82("STRING_STD");
    noSettlOblig_0_1.set(PriceQuoteMethod_82);
    Instrument_82.insert(PriceQuoteMethod_82.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_82("STRING_1981431632");
    noSettlOblig_0_1.set(PriceUnitOfMeasure_82);
    Instrument_82.insert(PriceUnitOfMeasure_82.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_82;
    PriceUnitOfMeasureQty_82.setString("19222165");
    noSettlOblig_0_1.set(PriceUnitOfMeasureQty_82);
    Instrument_82.insert(PriceUnitOfMeasureQty_82.getString());
    FIX::Product Product_90(1);
    noSettlOblig_0_1.set(Product_90);
    Instrument_82.insert(Product_90.getString());
    FIX::ProductComplex ProductComplex_82("STRING_1888013569");
    noSettlOblig_0_1.set(ProductComplex_82);
    Instrument_82.insert(ProductComplex_82.getString());
    FIX::PutOrCall PutOrCall_82(1);
    noSettlOblig_0_1.set(PutOrCall_82);
    Instrument_82.insert(PutOrCall_82.getString());
    FIX::RedemptionDate RedemptionDate_82("LOCALMKTDATE_1415976033");
    noSettlOblig_0_1.set(RedemptionDate_82);
    Instrument_82.insert(RedemptionDate_82.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_82("STRING_1720855716");
    noSettlOblig_0_1.set(RepoCollateralSecurityType_82);
    Instrument_82.insert(RepoCollateralSecurityType_82.getString());
    FIX::RepurchaseRate RepurchaseRate_82;
    RepurchaseRate_82.setString("94.770000");
    noSettlOblig_0_1.set(RepurchaseRate_82);
    Instrument_82.insert(RepurchaseRate_82.getString());
    FIX::RepurchaseTerm RepurchaseTerm_82(76519791);
    noSettlOblig_0_1.set(RepurchaseTerm_82);
    Instrument_82.insert(RepurchaseTerm_82.getString());
    FIX::RestructuringType RestructuringType_82("STRING_MR");
    noSettlOblig_0_1.set(RestructuringType_82);
    Instrument_82.insert(RestructuringType_82.getString());
    FIX::SecurityDesc SecurityDesc_82("STRING_1763749747");
    noSettlOblig_0_1.set(SecurityDesc_82);
    Instrument_82.insert(SecurityDesc_82.getString());
    FIX::SecurityExchange SecurityExchange_82("EXCHANGE_84180119");
    noSettlOblig_0_1.set(SecurityExchange_82);
    Instrument_82.insert(SecurityExchange_82.getString());
    FIX::SecurityGroup SecurityGroup_82("STRING_2054449621");
    noSettlOblig_0_1.set(SecurityGroup_82);
    Instrument_82.insert(SecurityGroup_82.getString());
    FIX::SecurityID SecurityID_82("STRING_673399181");
    noSettlOblig_0_1.set(SecurityID_82);
    Instrument_82.insert(SecurityID_82.getString());
    FIX::SecurityIDSource SecurityIDSource_82("STRING_2");
    noSettlOblig_0_1.set(SecurityIDSource_82);
    Instrument_82.insert(SecurityIDSource_82.getString());
    FIX::SecurityStatus SecurityStatus_83("STRING_2");
    noSettlOblig_0_1.set(SecurityStatus_83);
    Instrument_82.insert(SecurityStatus_83.getString());
    FIX::SecuritySubType SecuritySubType_86("STRING_809078538");
    noSettlOblig_0_1.set(SecuritySubType_86);
    Instrument_82.insert(SecuritySubType_86.getString());
    FIX::SecurityType SecurityType_90("STRING_TBOND");
    noSettlOblig_0_1.set(SecurityType_90);
    Instrument_82.insert(SecurityType_90.getString());
    FIX::Seniority Seniority_82("STRING_SD");
    noSettlOblig_0_1.set(Seniority_82);
    Instrument_82.insert(Seniority_82.getString());
    FIX::SettlMethod SettlMethod_82('P');
    noSettlOblig_0_1.set(SettlMethod_82);
    Instrument_82.insert(SettlMethod_82.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_82("STRING_1484883528");
    noSettlOblig_0_1.set(SettleOnOpenFlag_82);
    Instrument_82.insert(SettleOnOpenFlag_82.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_82("STRING_1407595063");
    noSettlOblig_0_1.set(StateOrProvinceOfIssue_82);
    Instrument_82.insert(StateOrProvinceOfIssue_82.getString());
    FIX::StrikeCurrency StrikeCurrency_82("GBP");
    noSettlOblig_0_1.set(StrikeCurrency_82);
    Instrument_82.insert(StrikeCurrency_82.getString());
    FIX::StrikeMultiplier StrikeMultiplier_82;
    StrikeMultiplier_82.setString("662621");
    noSettlOblig_0_1.set(StrikeMultiplier_82);
    Instrument_82.insert(StrikeMultiplier_82.getString());
    FIX::StrikePrice StrikePrice_82;
    StrikePrice_82.setString("15328139");
    noSettlOblig_0_1.set(StrikePrice_82);
    Instrument_82.insert(StrikePrice_82.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_82(3);
    noSettlOblig_0_1.set(StrikePriceBoundaryMethod_82);
    Instrument_82.insert(StrikePriceBoundaryMethod_82.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_82;
    StrikePriceBoundaryPrecision_82.setString("63.000000");
    noSettlOblig_0_1.set(StrikePriceBoundaryPrecision_82);
    Instrument_82.insert(StrikePriceBoundaryPrecision_82.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_82(2);
    noSettlOblig_0_1.set(StrikePriceDeterminationMethod_82);
    Instrument_82.insert(StrikePriceDeterminationMethod_82.getString());
    FIX::StrikeValue StrikeValue_82;
    StrikeValue_82.setString("16583153");
    noSettlOblig_0_1.set(StrikeValue_82);
    Instrument_82.insert(StrikeValue_82.getString());
    FIX::Symbol Symbol_82("STRING_1550857624");
    noSettlOblig_0_1.set(Symbol_82);
    Instrument_82.insert(Symbol_82.getString());
    FIX::SymbolSfx SymbolSfx_82("STRING_WI");
    noSettlOblig_0_1.set(SymbolSfx_82);
    Instrument_82.insert(SymbolSfx_82.getString());
    FIX::TimeUnit TimeUnit_82("STRING_Wk");
    noSettlOblig_0_1.set(TimeUnit_82);
    Instrument_82.insert(TimeUnit_82.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_82(2);
    noSettlOblig_0_1.set(UnderlyingPriceDeterminationMethod_82);
    Instrument_82.insert(UnderlyingPriceDeterminationMethod_82.getString());
    FIX::UnitOfMeasure UnitOfMeasure_82("STRING_tn");
    noSettlOblig_0_1.set(UnitOfMeasure_82);
    Instrument_82.insert(UnitOfMeasure_82.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_82;
    UnitOfMeasureQty_82.setString("11782341");
    noSettlOblig_0_1.set(UnitOfMeasureQty_82);
    Instrument_82.insert(UnitOfMeasureQty_82.getString());
    FIX::ValuationMethod ValuationMethod_82("STRING_CDS");
    noSettlOblig_0_1.set(ValuationMethod_82);
    Instrument_82.insert(ValuationMethod_82.getString());
    all_values.push_back(Instrument_82);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_154;
      FIX::ComplexEventCondition ComplexEventCondition_154(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventCondition_154.getString());
      FIX::ComplexEventPrice ComplexEventPrice_154;
      ComplexEventPrice_154.setString("8959524");
      noComplexEvents_1_1_0.set(ComplexEventPrice_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventPrice_154.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_154(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceBoundaryMethod_154.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_154;
      ComplexEventPriceBoundaryPrecision_154.setString("97.750000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceBoundaryPrecision_154.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_154(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceTimeType_154.getString());
      FIX::ComplexEventType ComplexEventType_154(1);
      noComplexEvents_1_1_0.set(ComplexEventType_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexEventType_154.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_154;
      ComplexOptPayoutAmount_154.setString("125453");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_154);
      ComplexEvents_NoComplexEvents_154.insert(ComplexOptPayoutAmount_154.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_154);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_316;
        FIX::ComplexEventEndDate ComplexEventEndDate_316(FIX::UTCTIMESTAMP(22, 42, 19, 19, 11, 2014));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_316);
        ComplexEventDates_NoComplexEventDates_316.insert(ComplexEventEndDate_316.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_316(FIX::UTCTIMESTAMP(6, 38, 12, 0, 3, 2006));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_316);
        ComplexEventDates_NoComplexEventDates_316.insert(ComplexEventStartDate_316.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_316);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_646;
          FIX::ComplexEventEndTime ComplexEventEndTime_646(FIX::UTCTIMEONLY(7, 3, 0));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_646);
          ComplexEventTimes_NoComplexEventTimes_646.insert(ComplexEventEndTime_646.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_646(FIX::UTCTIMEONLY(10, 30, 30));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_646);
          ComplexEventTimes_NoComplexEventTimes_646.insert(ComplexEventStartTime_646.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_646);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_155;
      FIX::ComplexEventCondition ComplexEventCondition_155(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventCondition_155.getString());
      FIX::ComplexEventPrice ComplexEventPrice_155;
      ComplexEventPrice_155.setString("12971217");
      noComplexEvents_1_1_1.set(ComplexEventPrice_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventPrice_155.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_155(5);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceBoundaryMethod_155.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_155;
      ComplexEventPriceBoundaryPrecision_155.setString("23.570000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceBoundaryPrecision_155.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_155(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceTimeType_155.getString());
      FIX::ComplexEventType ComplexEventType_155(8);
      noComplexEvents_1_1_1.set(ComplexEventType_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexEventType_155.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_155;
      ComplexOptPayoutAmount_155.setString("15846976");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_155);
      ComplexEvents_NoComplexEvents_155.insert(ComplexOptPayoutAmount_155.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_155);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_317;
        FIX::ComplexEventEndDate ComplexEventEndDate_317(FIX::UTCTIMESTAMP(0, 38, 9, 4, 1, 2003));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_317);
        ComplexEventDates_NoComplexEventDates_317.insert(ComplexEventEndDate_317.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_317(FIX::UTCTIMESTAMP(23, 34, 42, 11, 1, 2012));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_317);
        ComplexEventDates_NoComplexEventDates_317.insert(ComplexEventStartDate_317.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_317);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_647;
          FIX::ComplexEventEndTime ComplexEventEndTime_647(FIX::UTCTIMEONLY(11, 2, 3));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_647);
          ComplexEventTimes_NoComplexEventTimes_647.insert(ComplexEventEndTime_647.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_647(FIX::UTCTIMEONLY(12, 34, 40));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_647);
          ComplexEventTimes_NoComplexEventTimes_647.insert(ComplexEventStartTime_647.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_647);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_648;
          FIX::ComplexEventEndTime ComplexEventEndTime_648(FIX::UTCTIMEONLY(2, 14, 8));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_648);
          ComplexEventTimes_NoComplexEventTimes_648.insert(ComplexEventEndTime_648.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_648(FIX::UTCTIMEONLY(11, 54, 50));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_648);
          ComplexEventTimes_NoComplexEventTimes_648.insert(ComplexEventStartTime_648.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_648);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_156;
      FIX::ComplexEventCondition ComplexEventCondition_156(2);
      noComplexEvents_1_1_2.set(ComplexEventCondition_156);
      ComplexEvents_NoComplexEvents_156.insert(ComplexEventCondition_156.getString());
      FIX::ComplexEventPrice ComplexEventPrice_156;
      ComplexEventPrice_156.setString("20867545");
      noComplexEvents_1_1_2.set(ComplexEventPrice_156);
      ComplexEvents_NoComplexEvents_156.insert(ComplexEventPrice_156.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_156(1);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_156);
      ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceBoundaryMethod_156.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_156;
      ComplexEventPriceBoundaryPrecision_156.setString("28.180000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_156);
      ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceBoundaryPrecision_156.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_156(3);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_156);
      ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceTimeType_156.getString());
      FIX::ComplexEventType ComplexEventType_156(7);
      noComplexEvents_1_1_2.set(ComplexEventType_156);
      ComplexEvents_NoComplexEvents_156.insert(ComplexEventType_156.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_156;
      ComplexOptPayoutAmount_156.setString("13411671");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_156);
      ComplexEvents_NoComplexEvents_156.insert(ComplexOptPayoutAmount_156.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_156);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_318;
        FIX::ComplexEventEndDate ComplexEventEndDate_318(FIX::UTCTIMESTAMP(3, 26, 15, 12, 3, 2014));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_318);
        ComplexEventDates_NoComplexEventDates_318.insert(ComplexEventEndDate_318.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_318(FIX::UTCTIMESTAMP(17, 16, 39, 19, 6, 2011));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_318);
        ComplexEventDates_NoComplexEventDates_318.insert(ComplexEventStartDate_318.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_318);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_649;
          FIX::ComplexEventEndTime ComplexEventEndTime_649(FIX::UTCTIMEONLY(7, 38, 51));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_649);
          ComplexEventTimes_NoComplexEventTimes_649.insert(ComplexEventEndTime_649.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_649(FIX::UTCTIMEONLY(13, 37, 0));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_649);
          ComplexEventTimes_NoComplexEventTimes_649.insert(ComplexEventStartTime_649.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_649);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_650;
          FIX::ComplexEventEndTime ComplexEventEndTime_650(FIX::UTCTIMEONLY(12, 13, 32));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventEndTime_650);
          ComplexEventTimes_NoComplexEventTimes_650.insert(ComplexEventEndTime_650.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_650(FIX::UTCTIMEONLY(10, 5, 46));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventStartTime_650);
          ComplexEventTimes_NoComplexEventTimes_650.insert(ComplexEventStartTime_650.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_650);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_319;
        FIX::ComplexEventEndDate ComplexEventEndDate_319(FIX::UTCTIMESTAMP(1, 12, 29, 21, 7, 2001));
        noComplexEventDates_1_2_2_1.set(ComplexEventEndDate_319);
        ComplexEventDates_NoComplexEventDates_319.insert(ComplexEventEndDate_319.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_319(FIX::UTCTIMESTAMP(12, 51, 51, 15, 1, 2012));
        noComplexEventDates_1_2_2_1.set(ComplexEventStartDate_319);
        ComplexEventDates_NoComplexEventDates_319.insert(ComplexEventStartDate_319.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_319);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_651;
          FIX::ComplexEventEndTime ComplexEventEndTime_651(FIX::UTCTIMEONLY(19, 21, 11));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventEndTime_651);
          ComplexEventTimes_NoComplexEventTimes_651.insert(ComplexEventEndTime_651.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_651(FIX::UTCTIMEONLY(2, 49, 22));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventStartTime_651);
          ComplexEventTimes_NoComplexEventTimes_651.insert(ComplexEventStartTime_651.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_651);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_320;
        FIX::ComplexEventEndDate ComplexEventEndDate_320(FIX::UTCTIMESTAMP(1, 35, 56, 11, 2, 2017));
        noComplexEventDates_1_2_2_2.set(ComplexEventEndDate_320);
        ComplexEventDates_NoComplexEventDates_320.insert(ComplexEventEndDate_320.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_320(FIX::UTCTIMESTAMP(15, 6, 22, 4, 8, 2017));
        noComplexEventDates_1_2_2_2.set(ComplexEventStartDate_320);
        ComplexEventDates_NoComplexEventDates_320.insert(ComplexEventStartDate_320.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_320);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_652;
          FIX::ComplexEventEndTime ComplexEventEndTime_652(FIX::UTCTIMEONLY(21, 2, 39));
          noComplexEventTimes_1_2_2_3_0.set(ComplexEventEndTime_652);
          ComplexEventTimes_NoComplexEventTimes_652.insert(ComplexEventEndTime_652.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_652(FIX::UTCTIMEONLY(3, 28, 47));
          noComplexEventTimes_1_2_2_3_0.set(ComplexEventStartTime_652);
          ComplexEventTimes_NoComplexEventTimes_652.insert(ComplexEventStartTime_652.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_652);

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_653;
          FIX::ComplexEventEndTime ComplexEventEndTime_653(FIX::UTCTIMEONLY(11, 8, 2));
          noComplexEventTimes_1_2_2_3_1.set(ComplexEventEndTime_653);
          ComplexEventTimes_NoComplexEventTimes_653.insert(ComplexEventEndTime_653.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_653(FIX::UTCTIMEONLY(10, 43, 31));
          noComplexEventTimes_1_2_2_3_1.set(ComplexEventStartTime_653);
          ComplexEventTimes_NoComplexEventTimes_653.insert(ComplexEventStartTime_653.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_653);

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_2);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_161;
      FIX::EventDate EventDate_161("LOCALMKTDATE_544034112");
      noEvents_1_1_0.set(EventDate_161);
      EvntGrp_NoEvents_161.insert(EventDate_161.getString());
      FIX::EventPx EventPx_161;
      EventPx_161.setString("9440737");
      noEvents_1_1_0.set(EventPx_161);
      EvntGrp_NoEvents_161.insert(EventPx_161.getString());
      FIX::EventText EventText_161("STRING_548106658");
      noEvents_1_1_0.set(EventText_161);
      EvntGrp_NoEvents_161.insert(EventText_161.getString());
      FIX::EventTime EventTime_161(FIX::UTCTIMESTAMP(23, 52, 2, 18, 3, 2006));
      noEvents_1_1_0.set(EventTime_161);
      EvntGrp_NoEvents_161.insert(EventTime_161.getString());
      FIX::EventType EventType_161(11);
      noEvents_1_1_0.set(EventType_161);
      EvntGrp_NoEvents_161.insert(EventType_161.getString());
      all_values.push_back(EvntGrp_NoEvents_161);

      noSettlOblig_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_162;
      FIX::EventDate EventDate_162("LOCALMKTDATE_1167239134");
      noEvents_1_1_1.set(EventDate_162);
      EvntGrp_NoEvents_162.insert(EventDate_162.getString());
      FIX::EventPx EventPx_162;
      EventPx_162.setString("11720501");
      noEvents_1_1_1.set(EventPx_162);
      EvntGrp_NoEvents_162.insert(EventPx_162.getString());
      FIX::EventText EventText_162("STRING_817936261");
      noEvents_1_1_1.set(EventText_162);
      EvntGrp_NoEvents_162.insert(EventText_162.getString());
      FIX::EventTime EventTime_162(FIX::UTCTIMESTAMP(22, 3, 1, 27, 7, 2011));
      noEvents_1_1_1.set(EventTime_162);
      EvntGrp_NoEvents_162.insert(EventTime_162.getString());
      FIX::EventType EventType_162(3);
      noEvents_1_1_1.set(EventType_162);
      EvntGrp_NoEvents_162.insert(EventType_162.getString());
      all_values.push_back(EvntGrp_NoEvents_162);

      noSettlOblig_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_158;
      FIX::InstrumentPartyID InstrumentPartyID_158("STRING_481770369");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_158);
      InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyID_158.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_158('8');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_158);
      InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyIDSource_158.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_158(2096878776);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_158);
      InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyRole_158.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_158);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323;
        FIX::InstrumentPartySubID InstrumentPartySubID_323("STRING_327999461");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_323);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323.insert(InstrumentPartySubID_323.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_323(539619191);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_323);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323.insert(InstrumentPartySubIDType_323.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noSettlOblig_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_175;
      FIX::SecurityAltID SecurityAltID_175("STRING_1519704352");
      noSecurityAltID_1_1_0.set(SecurityAltID_175);
      SecAltIDGrp_NoSecurityAltID_175.insert(SecurityAltID_175.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_175("STRING_1083653304");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_175);
      SecAltIDGrp_NoSecurityAltID_175.insert(SecurityAltIDSource_175.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_175);

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_176;
      FIX::SecurityAltID SecurityAltID_176("STRING_55050271");
      noSecurityAltID_1_1_1.set(SecurityAltID_176);
      SecAltIDGrp_NoSecurityAltID_176.insert(SecurityAltID_176.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_176("STRING_2067811010");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_176);
      SecAltIDGrp_NoSecurityAltID_176.insert(SecurityAltIDSource_176.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_176);

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_177;
      FIX::SecurityAltID SecurityAltID_177("STRING_2085730328");
      noSecurityAltID_1_1_2.set(SecurityAltID_177);
      SecAltIDGrp_NoSecurityAltID_177.insert(SecurityAltID_177.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_177("STRING_1567836990");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_177);
      SecAltIDGrp_NoSecurityAltID_177.insert(SecurityAltIDSource_177.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_177);

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_164;
    FIX::SecurityXML SecurityXML_165("XMLDATA_936308074");
    noSettlOblig_0_1.set(SecurityXML_165);
    FIX::SecurityXMLLen SecurityXMLLen_82(1906320002);
    noSettlOblig_0_1.set(SecurityXMLLen_82);
    FIX::SecurityXMLSchema SecurityXMLSchema_82("STRING_1272820116");
    noSettlOblig_0_1.set(SecurityXMLSchema_82);
    SecurityXML_164.insert(SecurityXMLSchema_82.getString());
    all_values.push_back(SecurityXML_164);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_138;
      FIX::PartyID PartyID_138("STRING_1834484778");
      noPartyIDs_1_1_0.set(PartyID_138);
      Parties_NoPartyIDs_138.insert(PartyID_138.getString());
      FIX::PartyIDSource PartyIDSource_138('C');
      noPartyIDs_1_1_0.set(PartyIDSource_138);
      Parties_NoPartyIDs_138.insert(PartyIDSource_138.getString());
      FIX::PartyRole PartyRole_138(65);
      noPartyIDs_1_1_0.set(PartyRole_138);
      Parties_NoPartyIDs_138.insert(PartyRole_138.getString());
      all_values.push_back(Parties_NoPartyIDs_138);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_278;
        FIX::PartySubID PartySubID_278("STRING_1353194479");
        noPartySubIDs_1_0_2_0.set(PartySubID_278);
        PtysSubGrp_NoPartySubIDs_278.insert(PartySubID_278.getString());
        FIX::PartySubIDType PartySubIDType_278(5);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_278);
        PtysSubGrp_NoPartySubIDs_278.insert(PartySubIDType_278.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_278);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_279;
        FIX::PartySubID PartySubID_279("STRING_875901594");
        noPartySubIDs_1_0_2_1.set(PartySubID_279);
        PtysSubGrp_NoPartySubIDs_279.insert(PartySubID_279.getString());
        FIX::PartySubIDType PartySubIDType_279(18);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_279);
        PtysSubGrp_NoPartySubIDs_279.insert(PartySubIDType_279.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_279);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_280;
        FIX::PartySubID PartySubID_280("STRING_635572574");
        noPartySubIDs_1_0_2_2.set(PartySubID_280);
        PtysSubGrp_NoPartySubIDs_280.insert(PartySubID_280.getString());
        FIX::PartySubIDType PartySubIDType_280(16);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_280);
        PtysSubGrp_NoPartySubIDs_280.insert(PartySubIDType_280.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_280);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSettlOblig_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_139;
      FIX::PartyID PartyID_139("STRING_2069257977");
      noPartyIDs_1_1_1.set(PartyID_139);
      Parties_NoPartyIDs_139.insert(PartyID_139.getString());
      FIX::PartyIDSource PartyIDSource_139('8');
      noPartyIDs_1_1_1.set(PartyIDSource_139);
      Parties_NoPartyIDs_139.insert(PartyIDSource_139.getString());
      FIX::PartyRole PartyRole_139(42);
      noPartyIDs_1_1_1.set(PartyRole_139);
      Parties_NoPartyIDs_139.insert(PartyRole_139.getString());
      all_values.push_back(Parties_NoPartyIDs_139);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_281;
        FIX::PartySubID PartySubID_281("STRING_1964782973");
        noPartySubIDs_1_1_2_0.set(PartySubID_281);
        PtysSubGrp_NoPartySubIDs_281.insert(PartySubID_281.getString());
        FIX::PartySubIDType PartySubIDType_281(27);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_281);
        PtysSubGrp_NoPartySubIDs_281.insert(PartySubIDType_281.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_281);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_282;
        FIX::PartySubID PartySubID_282("STRING_1061447150");
        noPartySubIDs_1_1_2_1.set(PartySubID_282);
        PtysSubGrp_NoPartySubIDs_282.insert(PartySubID_282.getString());
        FIX::PartySubIDType PartySubIDType_282(31);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_282);
        PtysSubGrp_NoPartySubIDs_282.insert(PartySubIDType_282.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_282);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noSettlOblig_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_1_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_1;
      FIX::SettlObligSource SettlObligSource_1('3');
      noSettlDetails_1_1_0.set(SettlObligSource_1);
      SettlDetails_NoSettlDetails_1.insert(SettlObligSource_1.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_1);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_41;
        FIX::SettlPartyID SettlPartyID_41("STRING_62732484");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyID_41.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_41('5');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyIDSource_41.getString());
        FIX::SettlPartyRole SettlPartyRole_41(402616687);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyRole_41.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_41);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_91;
          FIX::SettlPartySubID SettlPartySubID_91("STRING_475482678");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_91);
          SettlPtysSubGrp_NoSettlPartySubIDs_91.insert(SettlPartySubID_91.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_91(1970453677);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_91);
          SettlPtysSubGrp_NoSettlPartySubIDs_91.insert(SettlPartySubIDType_91.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_91);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      noSettlOblig_0_1.addGroup(noSettlDetails_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_1_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_2;
      FIX::SettlObligSource SettlObligSource_2('3');
      noSettlDetails_1_1_1.set(SettlObligSource_2);
      SettlDetails_NoSettlDetails_2.insert(SettlObligSource_2.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_2);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_42;
        FIX::SettlPartyID SettlPartyID_42("STRING_1095790145");
        noSettlPartyIDs_1_1_2_0.set(SettlPartyID_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyID_42.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_42('2');
        noSettlPartyIDs_1_1_2_0.set(SettlPartyIDSource_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyIDSource_42.getString());
        FIX::SettlPartyRole SettlPartyRole_42(2068803810);
        noSettlPartyIDs_1_1_2_0.set(SettlPartyRole_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyRole_42.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_42);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_92;
          FIX::SettlPartySubID SettlPartySubID_92("STRING_2145361617");
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubID_92);
          SettlPtysSubGrp_NoSettlPartySubIDs_92.insert(SettlPartySubID_92.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_92(780371406);
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubIDType_92);
          SettlPtysSubGrp_NoSettlPartySubIDs_92.insert(SettlPartySubIDType_92.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_92);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_93;
          FIX::SettlPartySubID SettlPartySubID_93("STRING_836759194");
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubID_93);
          SettlPtysSubGrp_NoSettlPartySubIDs_93.insert(SettlPartySubID_93.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_93(193194842);
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubIDType_93);
          SettlPtysSubGrp_NoSettlPartySubIDs_93.insert(SettlPartySubIDType_93.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_93);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_94;
          FIX::SettlPartySubID SettlPartySubID_94("STRING_1656273001");
          noSettlPartySubIDs_1_1_0_3_2.set(SettlPartySubID_94);
          SettlPtysSubGrp_NoSettlPartySubIDs_94.insert(SettlPartySubID_94.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_94(1122150108);
          noSettlPartySubIDs_1_1_0_3_2.set(SettlPartySubIDType_94);
          SettlPtysSubGrp_NoSettlPartySubIDs_94.insert(SettlPartySubIDType_94.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_94);

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_2);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      noSettlOblig_0_1.addGroup(noSettlDetails_1_1_1);
    }
    msg.addGroup(noSettlOblig_0_1);
  }
  {
    FIX50SP2::SettlementObligationReport::NoSettlOblig noSettlOblig_0_2;
    // SettlObligationInstructions.NoSettlOblig
    multiset<string> SettlObligationInstructions_NoSettlOblig_2;
    FIX::CcyAmt CcyAmt_2;
    CcyAmt_2.setString("8287674");
    noSettlOblig_0_2.set(CcyAmt_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(CcyAmt_2.getString());
    FIX::Currency Currency_67("EUR");
    noSettlOblig_0_2.set(Currency_67);
    SettlObligationInstructions_NoSettlOblig_2.insert(Currency_67.getString());
    FIX::EffectiveTime EffectiveTime_13(FIX::UTCTIMESTAMP(22, 52, 46, 21, 7, 2017));
    noSettlOblig_0_2.set(EffectiveTime_13);
    SettlObligationInstructions_NoSettlOblig_2.insert(EffectiveTime_13.getString());
    FIX::ExpireTime ExpireTime_24(FIX::UTCTIMESTAMP(0, 17, 2, 18, 1, 2009));
    noSettlOblig_0_2.set(ExpireTime_24);
    SettlObligationInstructions_NoSettlOblig_2.insert(ExpireTime_24.getString());
    FIX::LastUpdateTime LastUpdateTime_5(FIX::UTCTIMESTAMP(17, 43, 24, 22, 6, 2011));
    noSettlOblig_0_2.set(LastUpdateTime_5);
    SettlObligationInstructions_NoSettlOblig_2.insert(LastUpdateTime_5.getString());
    FIX::NetGrossInd NetGrossInd_8(2);
    noSettlOblig_0_2.set(NetGrossInd_8);
    SettlObligationInstructions_NoSettlOblig_2.insert(NetGrossInd_8.getString());
    FIX::SettlCurrAmt SettlCurrAmt_9;
    SettlCurrAmt_9.setString("7520391");
    noSettlOblig_0_2.set(SettlCurrAmt_9);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlCurrAmt_9.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_9;
    SettlCurrFxRate_9.setString("3247682");
    noSettlOblig_0_2.set(SettlCurrFxRate_9);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlCurrFxRate_9.getString());
    FIX::SettlCurrency SettlCurrency_35("CHF");
    noSettlOblig_0_2.set(SettlCurrency_35);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlCurrency_35.getString());
    FIX::SettlDate SettlDate_46("LOCALMKTDATE_1981041286");
    noSettlOblig_0_2.set(SettlDate_46);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlDate_46.getString());
    FIX::SettlObligID SettlObligID_2("STRING_34635619");
    noSettlOblig_0_2.set(SettlObligID_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlObligID_2.getString());
    FIX::SettlObligRefID SettlObligRefID_2("STRING_1774001390");
    noSettlOblig_0_2.set(SettlObligRefID_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlObligRefID_2.getString());
    FIX::SettlObligTransType SettlObligTransType_2('N');
    noSettlOblig_0_2.set(SettlObligTransType_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlObligTransType_2.getString());
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_2);

    // Instrument
    multiset<string> Instrument_83;
    FIX::AttachmentPoint AttachmentPoint_83;
    AttachmentPoint_83.setString("0.570000");
    noSettlOblig_0_2.set(AttachmentPoint_83);
    Instrument_83.insert(AttachmentPoint_83.getString());
    FIX::CFICode CFICode_88("STRING_1938297763");
    noSettlOblig_0_2.set(CFICode_88);
    Instrument_83.insert(CFICode_88.getString());
    FIX::CPProgram CPProgram_83(2);
    noSettlOblig_0_2.set(CPProgram_83);
    Instrument_83.insert(CPProgram_83.getString());
    FIX::CPRegType CPRegType_83("STRING_1087052869");
    noSettlOblig_0_2.set(CPRegType_83);
    Instrument_83.insert(CPRegType_83.getString());
    FIX::CapPrice CapPrice_83;
    CapPrice_83.setString("19198934");
    noSettlOblig_0_2.set(CapPrice_83);
    Instrument_83.insert(CapPrice_83.getString());
    FIX::ContractMultiplier ContractMultiplier_83;
    ContractMultiplier_83.setString("15813200");
    noSettlOblig_0_2.set(ContractMultiplier_83);
    Instrument_83.insert(ContractMultiplier_83.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_83(2);
    noSettlOblig_0_2.set(ContractMultiplierUnit_83);
    Instrument_83.insert(ContractMultiplierUnit_83.getString());
    FIX::ContractSettlMonth ContractSettlMonth_83("MONTHYEAR_990595434");
    noSettlOblig_0_2.set(ContractSettlMonth_83);
    Instrument_83.insert(ContractSettlMonth_83.getString());
    FIX::CountryOfIssue CountryOfIssue_83("COUNTRY_1495317599");
    noSettlOblig_0_2.set(CountryOfIssue_83);
    Instrument_83.insert(CountryOfIssue_83.getString());
    FIX::CouponPaymentDate CouponPaymentDate_83("LOCALMKTDATE_533031840");
    noSettlOblig_0_2.set(CouponPaymentDate_83);
    Instrument_83.insert(CouponPaymentDate_83.getString());
    FIX::CouponRate CouponRate_83;
    CouponRate_83.setString("38.230000");
    noSettlOblig_0_2.set(CouponRate_83);
    Instrument_83.insert(CouponRate_83.getString());
    FIX::CreditRating CreditRating_83("STRING_1472047613");
    noSettlOblig_0_2.set(CreditRating_83);
    Instrument_83.insert(CreditRating_83.getString());
    FIX::DatedDate DatedDate_83("LOCALMKTDATE_1593790494");
    noSettlOblig_0_2.set(DatedDate_83);
    Instrument_83.insert(DatedDate_83.getString());
    FIX::DetachmentPoint DetachmentPoint_83;
    DetachmentPoint_83.setString("88.990000");
    noSettlOblig_0_2.set(DetachmentPoint_83);
    Instrument_83.insert(DetachmentPoint_83.getString());
    FIX::EncodedIssuer EncodedIssuer_83("DATA_1431837475");
    noSettlOblig_0_2.set(EncodedIssuer_83);
    Instrument_83.insert(EncodedIssuer_83.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_83(982548179);
    noSettlOblig_0_2.set(EncodedIssuerLen_83);
    Instrument_83.insert(EncodedIssuerLen_83.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_83("DATA_2021087652");
    noSettlOblig_0_2.set(EncodedSecurityDesc_83);
    Instrument_83.insert(EncodedSecurityDesc_83.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_83(163511610);
    noSettlOblig_0_2.set(EncodedSecurityDescLen_83);
    Instrument_83.insert(EncodedSecurityDescLen_83.getString());
    FIX::ExerciseStyle ExerciseStyle_83(0);
    noSettlOblig_0_2.set(ExerciseStyle_83);
    Instrument_83.insert(ExerciseStyle_83.getString());
    FIX::Factor Factor_83;
    Factor_83.setString("6132492");
    noSettlOblig_0_2.set(Factor_83);
    Instrument_83.insert(Factor_83.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_83(false);
    noSettlOblig_0_2.set(FlexProductEligibilityIndicator_83);
    Instrument_83.insert(FlexProductEligibilityIndicator_83.getString());
    FIX::FlexibleIndicator FlexibleIndicator_83(true);
    noSettlOblig_0_2.set(FlexibleIndicator_83);
    Instrument_83.insert(FlexibleIndicator_83.getString());
    FIX::FloorPrice FloorPrice_83;
    FloorPrice_83.setString("8364592");
    noSettlOblig_0_2.set(FloorPrice_83);
    Instrument_83.insert(FloorPrice_83.getString());
    FIX::FlowScheduleType FlowScheduleType_83(2);
    noSettlOblig_0_2.set(FlowScheduleType_83);
    Instrument_83.insert(FlowScheduleType_83.getString());
    FIX::InstrRegistry InstrRegistry_83("STRING_474790060");
    noSettlOblig_0_2.set(InstrRegistry_83);
    Instrument_83.insert(InstrRegistry_83.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_83('1');
    noSettlOblig_0_2.set(InstrmtAssignmentMethod_83);
    Instrument_83.insert(InstrmtAssignmentMethod_83.getString());
    FIX::InterestAccrualDate InterestAccrualDate_83("LOCALMKTDATE_467462228");
    noSettlOblig_0_2.set(InterestAccrualDate_83);
    Instrument_83.insert(InterestAccrualDate_83.getString());
    FIX::IssueDate IssueDate_83("LOCALMKTDATE_308347698");
    noSettlOblig_0_2.set(IssueDate_83);
    Instrument_83.insert(IssueDate_83.getString());
    FIX::Issuer Issuer_83("STRING_1931063998");
    noSettlOblig_0_2.set(Issuer_83);
    Instrument_83.insert(Issuer_83.getString());
    FIX::ListMethod ListMethod_83(0);
    noSettlOblig_0_2.set(ListMethod_83);
    Instrument_83.insert(ListMethod_83.getString());
    FIX::LocaleOfIssue LocaleOfIssue_83("STRING_1657724939");
    noSettlOblig_0_2.set(LocaleOfIssue_83);
    Instrument_83.insert(LocaleOfIssue_83.getString());
    FIX::MaturityDate MaturityDate_83("LOCALMKTDATE_862140407");
    noSettlOblig_0_2.set(MaturityDate_83);
    Instrument_83.insert(MaturityDate_83.getString());
    FIX::MaturityMonthYear MaturityMonthYear_83("MONTHYEAR_2032277734");
    noSettlOblig_0_2.set(MaturityMonthYear_83);
    Instrument_83.insert(MaturityMonthYear_83.getString());
    FIX::MaturityTime MaturityTime_83("TZTIMEONLY_1868075611");
    noSettlOblig_0_2.set(MaturityTime_83);
    Instrument_83.insert(MaturityTime_83.getString());
    FIX::MinPriceIncrement MinPriceIncrement_83;
    MinPriceIncrement_83.setString("19491932");
    noSettlOblig_0_2.set(MinPriceIncrement_83);
    Instrument_83.insert(MinPriceIncrement_83.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_83;
    MinPriceIncrementAmount_83.setString("18046875");
    noSettlOblig_0_2.set(MinPriceIncrementAmount_83);
    Instrument_83.insert(MinPriceIncrementAmount_83.getString());
    FIX::NTPositionLimit NTPositionLimit_83(1301912032);
    noSettlOblig_0_2.set(NTPositionLimit_83);
    Instrument_83.insert(NTPositionLimit_83.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_83;
    NotionalPercentageOutstanding_83.setString("24.590000");
    noSettlOblig_0_2.set(NotionalPercentageOutstanding_83);
    Instrument_83.insert(NotionalPercentageOutstanding_83.getString());
    FIX::OptAttribute OptAttribute_83('6');
    noSettlOblig_0_2.set(OptAttribute_83);
    Instrument_83.insert(OptAttribute_83.getString());
    FIX::OptPayoutAmount OptPayoutAmount_83;
    OptPayoutAmount_83.setString("6497459");
    noSettlOblig_0_2.set(OptPayoutAmount_83);
    Instrument_83.insert(OptPayoutAmount_83.getString());
    FIX::OptPayoutType OptPayoutType_83(1);
    noSettlOblig_0_2.set(OptPayoutType_83);
    Instrument_83.insert(OptPayoutType_83.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_83;
    OriginalNotionalPercentageOutstanding_83.setString("31.570000");
    noSettlOblig_0_2.set(OriginalNotionalPercentageOutstanding_83);
    Instrument_83.insert(OriginalNotionalPercentageOutstanding_83.getString());
    FIX::Pool Pool_83("STRING_2121793596");
    noSettlOblig_0_2.set(Pool_83);
    Instrument_83.insert(Pool_83.getString());
    FIX::PositionLimit PositionLimit_83(1938041146);
    noSettlOblig_0_2.set(PositionLimit_83);
    Instrument_83.insert(PositionLimit_83.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_83("STRING_INX");
    noSettlOblig_0_2.set(PriceQuoteMethod_83);
    Instrument_83.insert(PriceQuoteMethod_83.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_83("STRING_1406147423");
    noSettlOblig_0_2.set(PriceUnitOfMeasure_83);
    Instrument_83.insert(PriceUnitOfMeasure_83.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_83;
    PriceUnitOfMeasureQty_83.setString("7731056");
    noSettlOblig_0_2.set(PriceUnitOfMeasureQty_83);
    Instrument_83.insert(PriceUnitOfMeasureQty_83.getString());
    FIX::Product Product_91(10);
    noSettlOblig_0_2.set(Product_91);
    Instrument_83.insert(Product_91.getString());
    FIX::ProductComplex ProductComplex_83("STRING_1569659033");
    noSettlOblig_0_2.set(ProductComplex_83);
    Instrument_83.insert(ProductComplex_83.getString());
    FIX::PutOrCall PutOrCall_83(0);
    noSettlOblig_0_2.set(PutOrCall_83);
    Instrument_83.insert(PutOrCall_83.getString());
    FIX::RedemptionDate RedemptionDate_83("LOCALMKTDATE_1773265316");
    noSettlOblig_0_2.set(RedemptionDate_83);
    Instrument_83.insert(RedemptionDate_83.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_83("STRING_339848157");
    noSettlOblig_0_2.set(RepoCollateralSecurityType_83);
    Instrument_83.insert(RepoCollateralSecurityType_83.getString());
    FIX::RepurchaseRate RepurchaseRate_83;
    RepurchaseRate_83.setString("23.470000");
    noSettlOblig_0_2.set(RepurchaseRate_83);
    Instrument_83.insert(RepurchaseRate_83.getString());
    FIX::RepurchaseTerm RepurchaseTerm_83(462240887);
    noSettlOblig_0_2.set(RepurchaseTerm_83);
    Instrument_83.insert(RepurchaseTerm_83.getString());
    FIX::RestructuringType RestructuringType_83("STRING_XR");
    noSettlOblig_0_2.set(RestructuringType_83);
    Instrument_83.insert(RestructuringType_83.getString());
    FIX::SecurityDesc SecurityDesc_83("STRING_2003542407");
    noSettlOblig_0_2.set(SecurityDesc_83);
    Instrument_83.insert(SecurityDesc_83.getString());
    FIX::SecurityExchange SecurityExchange_83("EXCHANGE_211185618");
    noSettlOblig_0_2.set(SecurityExchange_83);
    Instrument_83.insert(SecurityExchange_83.getString());
    FIX::SecurityGroup SecurityGroup_83("STRING_329538639");
    noSettlOblig_0_2.set(SecurityGroup_83);
    Instrument_83.insert(SecurityGroup_83.getString());
    FIX::SecurityID SecurityID_83("STRING_164406457");
    noSettlOblig_0_2.set(SecurityID_83);
    Instrument_83.insert(SecurityID_83.getString());
    FIX::SecurityIDSource SecurityIDSource_83("STRING_D");
    noSettlOblig_0_2.set(SecurityIDSource_83);
    Instrument_83.insert(SecurityIDSource_83.getString());
    FIX::SecurityStatus SecurityStatus_84("STRING_1");
    noSettlOblig_0_2.set(SecurityStatus_84);
    Instrument_83.insert(SecurityStatus_84.getString());
    FIX::SecuritySubType SecuritySubType_87("STRING_1822131397");
    noSettlOblig_0_2.set(SecuritySubType_87);
    Instrument_83.insert(SecuritySubType_87.getString());
    FIX::SecurityType SecurityType_91("STRING_DINP");
    noSettlOblig_0_2.set(SecurityType_91);
    Instrument_83.insert(SecurityType_91.getString());
    FIX::Seniority Seniority_83("STRING_SB");
    noSettlOblig_0_2.set(Seniority_83);
    Instrument_83.insert(Seniority_83.getString());
    FIX::SettlMethod SettlMethod_83('C');
    noSettlOblig_0_2.set(SettlMethod_83);
    Instrument_83.insert(SettlMethod_83.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_83("STRING_658616003");
    noSettlOblig_0_2.set(SettleOnOpenFlag_83);
    Instrument_83.insert(SettleOnOpenFlag_83.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_83("STRING_2113000243");
    noSettlOblig_0_2.set(StateOrProvinceOfIssue_83);
    Instrument_83.insert(StateOrProvinceOfIssue_83.getString());
    FIX::StrikeCurrency StrikeCurrency_83("GBP");
    noSettlOblig_0_2.set(StrikeCurrency_83);
    Instrument_83.insert(StrikeCurrency_83.getString());
    FIX::StrikeMultiplier StrikeMultiplier_83;
    StrikeMultiplier_83.setString("6133159");
    noSettlOblig_0_2.set(StrikeMultiplier_83);
    Instrument_83.insert(StrikeMultiplier_83.getString());
    FIX::StrikePrice StrikePrice_83;
    StrikePrice_83.setString("13468977");
    noSettlOblig_0_2.set(StrikePrice_83);
    Instrument_83.insert(StrikePrice_83.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_83(2);
    noSettlOblig_0_2.set(StrikePriceBoundaryMethod_83);
    Instrument_83.insert(StrikePriceBoundaryMethod_83.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_83;
    StrikePriceBoundaryPrecision_83.setString("90.870000");
    noSettlOblig_0_2.set(StrikePriceBoundaryPrecision_83);
    Instrument_83.insert(StrikePriceBoundaryPrecision_83.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_83(4);
    noSettlOblig_0_2.set(StrikePriceDeterminationMethod_83);
    Instrument_83.insert(StrikePriceDeterminationMethod_83.getString());
    FIX::StrikeValue StrikeValue_83;
    StrikeValue_83.setString("6046429");
    noSettlOblig_0_2.set(StrikeValue_83);
    Instrument_83.insert(StrikeValue_83.getString());
    FIX::Symbol Symbol_83("STRING_808907496");
    noSettlOblig_0_2.set(Symbol_83);
    Instrument_83.insert(Symbol_83.getString());
    FIX::SymbolSfx SymbolSfx_83("STRING_WI");
    noSettlOblig_0_2.set(SymbolSfx_83);
    Instrument_83.insert(SymbolSfx_83.getString());
    FIX::TimeUnit TimeUnit_83("STRING_D");
    noSettlOblig_0_2.set(TimeUnit_83);
    Instrument_83.insert(TimeUnit_83.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_83(2);
    noSettlOblig_0_2.set(UnderlyingPriceDeterminationMethod_83);
    Instrument_83.insert(UnderlyingPriceDeterminationMethod_83.getString());
    FIX::UnitOfMeasure UnitOfMeasure_83("STRING_Alw");
    noSettlOblig_0_2.set(UnitOfMeasure_83);
    Instrument_83.insert(UnitOfMeasure_83.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_83;
    UnitOfMeasureQty_83.setString("6089955");
    noSettlOblig_0_2.set(UnitOfMeasureQty_83);
    Instrument_83.insert(UnitOfMeasureQty_83.getString());
    FIX::ValuationMethod ValuationMethod_83("STRING_EQTY");
    noSettlOblig_0_2.set(ValuationMethod_83);
    Instrument_83.insert(ValuationMethod_83.getString());
    all_values.push_back(Instrument_83);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_157;
      FIX::ComplexEventCondition ComplexEventCondition_157(1);
      noComplexEvents_2_1_0.set(ComplexEventCondition_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventCondition_157.getString());
      FIX::ComplexEventPrice ComplexEventPrice_157;
      ComplexEventPrice_157.setString("20569461");
      noComplexEvents_2_1_0.set(ComplexEventPrice_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventPrice_157.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_157(1);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceBoundaryMethod_157.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_157;
      ComplexEventPriceBoundaryPrecision_157.setString("66.710000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceBoundaryPrecision_157.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_157(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceTimeType_157.getString());
      FIX::ComplexEventType ComplexEventType_157(8);
      noComplexEvents_2_1_0.set(ComplexEventType_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexEventType_157.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_157;
      ComplexOptPayoutAmount_157.setString("107294");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_157);
      ComplexEvents_NoComplexEvents_157.insert(ComplexOptPayoutAmount_157.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_157);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_321;
        FIX::ComplexEventEndDate ComplexEventEndDate_321(FIX::UTCTIMESTAMP(6, 26, 30, 10, 2, 2000));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_321);
        ComplexEventDates_NoComplexEventDates_321.insert(ComplexEventEndDate_321.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_321(FIX::UTCTIMESTAMP(3, 15, 13, 21, 7, 2012));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_321);
        ComplexEventDates_NoComplexEventDates_321.insert(ComplexEventStartDate_321.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_321);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_654;
          FIX::ComplexEventEndTime ComplexEventEndTime_654(FIX::UTCTIMEONLY(11, 58, 0));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_654);
          ComplexEventTimes_NoComplexEventTimes_654.insert(ComplexEventEndTime_654.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_654(FIX::UTCTIMEONLY(16, 17, 1));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_654);
          ComplexEventTimes_NoComplexEventTimes_654.insert(ComplexEventStartTime_654.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_654);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_322;
        FIX::ComplexEventEndDate ComplexEventEndDate_322(FIX::UTCTIMESTAMP(10, 26, 52, 25, 8, 2015));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_322);
        ComplexEventDates_NoComplexEventDates_322.insert(ComplexEventEndDate_322.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_322(FIX::UTCTIMESTAMP(9, 43, 34, 24, 6, 2011));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_322);
        ComplexEventDates_NoComplexEventDates_322.insert(ComplexEventStartDate_322.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_322);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_655;
          FIX::ComplexEventEndTime ComplexEventEndTime_655(FIX::UTCTIMEONLY(19, 33, 44));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_655);
          ComplexEventTimes_NoComplexEventTimes_655.insert(ComplexEventEndTime_655.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_655(FIX::UTCTIMEONLY(8, 44, 58));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_655);
          ComplexEventTimes_NoComplexEventTimes_655.insert(ComplexEventStartTime_655.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_655);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_656;
          FIX::ComplexEventEndTime ComplexEventEndTime_656(FIX::UTCTIMEONLY(20, 48, 42));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_656);
          ComplexEventTimes_NoComplexEventTimes_656.insert(ComplexEventEndTime_656.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_656(FIX::UTCTIMEONLY(4, 52, 57));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_656);
          ComplexEventTimes_NoComplexEventTimes_656.insert(ComplexEventStartTime_656.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_656);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_657;
          FIX::ComplexEventEndTime ComplexEventEndTime_657(FIX::UTCTIMEONLY(6, 16, 25));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventEndTime_657);
          ComplexEventTimes_NoComplexEventTimes_657.insert(ComplexEventEndTime_657.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_657(FIX::UTCTIMEONLY(15, 50, 0));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventStartTime_657);
          ComplexEventTimes_NoComplexEventTimes_657.insert(ComplexEventStartTime_657.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_657);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noSettlOblig_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_158;
      FIX::ComplexEventCondition ComplexEventCondition_158(1);
      noComplexEvents_2_1_1.set(ComplexEventCondition_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventCondition_158.getString());
      FIX::ComplexEventPrice ComplexEventPrice_158;
      ComplexEventPrice_158.setString("14138044");
      noComplexEvents_2_1_1.set(ComplexEventPrice_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPrice_158.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_158(1);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceBoundaryMethod_158.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_158;
      ComplexEventPriceBoundaryPrecision_158.setString("48.160000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceBoundaryPrecision_158.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_158(1);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceTimeType_158.getString());
      FIX::ComplexEventType ComplexEventType_158(9);
      noComplexEvents_2_1_1.set(ComplexEventType_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexEventType_158.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_158;
      ComplexOptPayoutAmount_158.setString("5763769");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_158);
      ComplexEvents_NoComplexEvents_158.insert(ComplexOptPayoutAmount_158.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_158);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_323;
        FIX::ComplexEventEndDate ComplexEventEndDate_323(FIX::UTCTIMESTAMP(0, 33, 6, 0, 10, 2004));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_323);
        ComplexEventDates_NoComplexEventDates_323.insert(ComplexEventEndDate_323.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_323(FIX::UTCTIMESTAMP(9, 44, 25, 5, 2, 2009));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_323);
        ComplexEventDates_NoComplexEventDates_323.insert(ComplexEventStartDate_323.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_323);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_658;
          FIX::ComplexEventEndTime ComplexEventEndTime_658(FIX::UTCTIMEONLY(15, 59, 19));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_658);
          ComplexEventTimes_NoComplexEventTimes_658.insert(ComplexEventEndTime_658.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_658(FIX::UTCTIMEONLY(6, 9, 52));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_658);
          ComplexEventTimes_NoComplexEventTimes_658.insert(ComplexEventStartTime_658.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_658);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_659;
          FIX::ComplexEventEndTime ComplexEventEndTime_659(FIX::UTCTIMEONLY(10, 19, 55));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventEndTime_659);
          ComplexEventTimes_NoComplexEventTimes_659.insert(ComplexEventEndTime_659.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_659(FIX::UTCTIMEONLY(21, 1, 33));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventStartTime_659);
          ComplexEventTimes_NoComplexEventTimes_659.insert(ComplexEventStartTime_659.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_659);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_1);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_324;
        FIX::ComplexEventEndDate ComplexEventEndDate_324(FIX::UTCTIMESTAMP(1, 6, 9, 21, 4, 2005));
        noComplexEventDates_2_1_2_1.set(ComplexEventEndDate_324);
        ComplexEventDates_NoComplexEventDates_324.insert(ComplexEventEndDate_324.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_324(FIX::UTCTIMESTAMP(5, 49, 57, 10, 7, 2012));
        noComplexEventDates_2_1_2_1.set(ComplexEventStartDate_324);
        ComplexEventDates_NoComplexEventDates_324.insert(ComplexEventStartDate_324.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_324);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_660;
          FIX::ComplexEventEndTime ComplexEventEndTime_660(FIX::UTCTIMEONLY(1, 32, 31));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventEndTime_660);
          ComplexEventTimes_NoComplexEventTimes_660.insert(ComplexEventEndTime_660.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_660(FIX::UTCTIMEONLY(2, 40, 57));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventStartTime_660);
          ComplexEventTimes_NoComplexEventTimes_660.insert(ComplexEventStartTime_660.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_660);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_661;
          FIX::ComplexEventEndTime ComplexEventEndTime_661(FIX::UTCTIMEONLY(2, 16, 48));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventEndTime_661);
          ComplexEventTimes_NoComplexEventTimes_661.insert(ComplexEventEndTime_661.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_661(FIX::UTCTIMEONLY(17, 49, 31));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventStartTime_661);
          ComplexEventTimes_NoComplexEventTimes_661.insert(ComplexEventStartTime_661.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_661);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_662;
          FIX::ComplexEventEndTime ComplexEventEndTime_662(FIX::UTCTIMEONLY(19, 29, 21));
          noComplexEventTimes_2_1_1_3_2.set(ComplexEventEndTime_662);
          ComplexEventTimes_NoComplexEventTimes_662.insert(ComplexEventEndTime_662.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_662(FIX::UTCTIMEONLY(1, 18, 52));
          noComplexEventTimes_2_1_1_3_2.set(ComplexEventStartTime_662);
          ComplexEventTimes_NoComplexEventTimes_662.insert(ComplexEventStartTime_662.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_662);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      noSettlOblig_0_2.addGroup(noComplexEvents_2_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_2_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_159;
      FIX::ComplexEventCondition ComplexEventCondition_159(1);
      noComplexEvents_2_1_2.set(ComplexEventCondition_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventCondition_159.getString());
      FIX::ComplexEventPrice ComplexEventPrice_159;
      ComplexEventPrice_159.setString("2325574");
      noComplexEvents_2_1_2.set(ComplexEventPrice_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPrice_159.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_159(2);
      noComplexEvents_2_1_2.set(ComplexEventPriceBoundaryMethod_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceBoundaryMethod_159.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_159;
      ComplexEventPriceBoundaryPrecision_159.setString("33.200000");
      noComplexEvents_2_1_2.set(ComplexEventPriceBoundaryPrecision_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceBoundaryPrecision_159.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_159(1);
      noComplexEvents_2_1_2.set(ComplexEventPriceTimeType_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceTimeType_159.getString());
      FIX::ComplexEventType ComplexEventType_159(7);
      noComplexEvents_2_1_2.set(ComplexEventType_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexEventType_159.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_159;
      ComplexOptPayoutAmount_159.setString("10285284");
      noComplexEvents_2_1_2.set(ComplexOptPayoutAmount_159);
      ComplexEvents_NoComplexEvents_159.insert(ComplexOptPayoutAmount_159.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_159);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_325;
        FIX::ComplexEventEndDate ComplexEventEndDate_325(FIX::UTCTIMESTAMP(10, 54, 58, 21, 12, 2005));
        noComplexEventDates_2_2_2_0.set(ComplexEventEndDate_325);
        ComplexEventDates_NoComplexEventDates_325.insert(ComplexEventEndDate_325.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_325(FIX::UTCTIMESTAMP(17, 3, 14, 16, 9, 2009));
        noComplexEventDates_2_2_2_0.set(ComplexEventStartDate_325);
        ComplexEventDates_NoComplexEventDates_325.insert(ComplexEventStartDate_325.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_325);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_663;
          FIX::ComplexEventEndTime ComplexEventEndTime_663(FIX::UTCTIMEONLY(10, 33, 54));
          noComplexEventTimes_2_2_0_3_0.set(ComplexEventEndTime_663);
          ComplexEventTimes_NoComplexEventTimes_663.insert(ComplexEventEndTime_663.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_663(FIX::UTCTIMEONLY(22, 5, 31));
          noComplexEventTimes_2_2_0_3_0.set(ComplexEventStartTime_663);
          ComplexEventTimes_NoComplexEventTimes_663.insert(ComplexEventStartTime_663.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_663);

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_0);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_326;
        FIX::ComplexEventEndDate ComplexEventEndDate_326(FIX::UTCTIMESTAMP(17, 13, 16, 11, 5, 2012));
        noComplexEventDates_2_2_2_1.set(ComplexEventEndDate_326);
        ComplexEventDates_NoComplexEventDates_326.insert(ComplexEventEndDate_326.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_326(FIX::UTCTIMESTAMP(1, 9, 33, 19, 7, 2000));
        noComplexEventDates_2_2_2_1.set(ComplexEventStartDate_326);
        ComplexEventDates_NoComplexEventDates_326.insert(ComplexEventStartDate_326.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_326);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_664;
          FIX::ComplexEventEndTime ComplexEventEndTime_664(FIX::UTCTIMEONLY(9, 9, 30));
          noComplexEventTimes_2_2_1_3_0.set(ComplexEventEndTime_664);
          ComplexEventTimes_NoComplexEventTimes_664.insert(ComplexEventEndTime_664.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_664(FIX::UTCTIMEONLY(18, 25, 9));
          noComplexEventTimes_2_2_1_3_0.set(ComplexEventStartTime_664);
          ComplexEventTimes_NoComplexEventTimes_664.insert(ComplexEventStartTime_664.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_664);

          noComplexEventDates_2_2_2_1.addGroup(noComplexEventTimes_2_2_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_665;
          FIX::ComplexEventEndTime ComplexEventEndTime_665(FIX::UTCTIMEONLY(16, 34, 49));
          noComplexEventTimes_2_2_1_3_1.set(ComplexEventEndTime_665);
          ComplexEventTimes_NoComplexEventTimes_665.insert(ComplexEventEndTime_665.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_665(FIX::UTCTIMEONLY(12, 46, 2));
          noComplexEventTimes_2_2_1_3_1.set(ComplexEventStartTime_665);
          ComplexEventTimes_NoComplexEventTimes_665.insert(ComplexEventStartTime_665.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_665);

          noComplexEventDates_2_2_2_1.addGroup(noComplexEventTimes_2_2_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_666;
          FIX::ComplexEventEndTime ComplexEventEndTime_666(FIX::UTCTIMEONLY(3, 15, 36));
          noComplexEventTimes_2_2_1_3_2.set(ComplexEventEndTime_666);
          ComplexEventTimes_NoComplexEventTimes_666.insert(ComplexEventEndTime_666.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_666(FIX::UTCTIMEONLY(12, 59, 45));
          noComplexEventTimes_2_2_1_3_2.set(ComplexEventStartTime_666);
          ComplexEventTimes_NoComplexEventTimes_666.insert(ComplexEventStartTime_666.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_666);

          noComplexEventDates_2_2_2_1.addGroup(noComplexEventTimes_2_2_1_3_2);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_327;
        FIX::ComplexEventEndDate ComplexEventEndDate_327(FIX::UTCTIMESTAMP(20, 10, 49, 18, 11, 2013));
        noComplexEventDates_2_2_2_2.set(ComplexEventEndDate_327);
        ComplexEventDates_NoComplexEventDates_327.insert(ComplexEventEndDate_327.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_327(FIX::UTCTIMESTAMP(0, 5, 20, 9, 4, 2013));
        noComplexEventDates_2_2_2_2.set(ComplexEventStartDate_327);
        ComplexEventDates_NoComplexEventDates_327.insert(ComplexEventStartDate_327.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_327);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_667;
          FIX::ComplexEventEndTime ComplexEventEndTime_667(FIX::UTCTIMEONLY(17, 8, 3));
          noComplexEventTimes_2_2_2_3_0.set(ComplexEventEndTime_667);
          ComplexEventTimes_NoComplexEventTimes_667.insert(ComplexEventEndTime_667.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_667(FIX::UTCTIMEONLY(20, 50, 3));
          noComplexEventTimes_2_2_2_3_0.set(ComplexEventStartTime_667);
          ComplexEventTimes_NoComplexEventTimes_667.insert(ComplexEventStartTime_667.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_667);

          noComplexEventDates_2_2_2_2.addGroup(noComplexEventTimes_2_2_2_3_0);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_2);
      }
      noSettlOblig_0_2.addGroup(noComplexEvents_2_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_163;
      FIX::EventDate EventDate_163("LOCALMKTDATE_1052367341");
      noEvents_2_1_0.set(EventDate_163);
      EvntGrp_NoEvents_163.insert(EventDate_163.getString());
      FIX::EventPx EventPx_163;
      EventPx_163.setString("17348715");
      noEvents_2_1_0.set(EventPx_163);
      EvntGrp_NoEvents_163.insert(EventPx_163.getString());
      FIX::EventText EventText_163("STRING_1312686265");
      noEvents_2_1_0.set(EventText_163);
      EvntGrp_NoEvents_163.insert(EventText_163.getString());
      FIX::EventTime EventTime_163(FIX::UTCTIMESTAMP(10, 16, 26, 20, 5, 2006));
      noEvents_2_1_0.set(EventTime_163);
      EvntGrp_NoEvents_163.insert(EventTime_163.getString());
      FIX::EventType EventType_163(2);
      noEvents_2_1_0.set(EventType_163);
      EvntGrp_NoEvents_163.insert(EventType_163.getString());
      all_values.push_back(EvntGrp_NoEvents_163);

      noSettlOblig_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_164;
      FIX::EventDate EventDate_164("LOCALMKTDATE_467930218");
      noEvents_2_1_1.set(EventDate_164);
      EvntGrp_NoEvents_164.insert(EventDate_164.getString());
      FIX::EventPx EventPx_164;
      EventPx_164.setString("12344280");
      noEvents_2_1_1.set(EventPx_164);
      EvntGrp_NoEvents_164.insert(EventPx_164.getString());
      FIX::EventText EventText_164("STRING_472728556");
      noEvents_2_1_1.set(EventText_164);
      EvntGrp_NoEvents_164.insert(EventText_164.getString());
      FIX::EventTime EventTime_164(FIX::UTCTIMESTAMP(3, 21, 8, 16, 1, 2015));
      noEvents_2_1_1.set(EventTime_164);
      EvntGrp_NoEvents_164.insert(EventTime_164.getString());
      FIX::EventType EventType_164(12);
      noEvents_2_1_1.set(EventType_164);
      EvntGrp_NoEvents_164.insert(EventType_164.getString());
      all_values.push_back(EvntGrp_NoEvents_164);

      noSettlOblig_0_2.addGroup(noEvents_2_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_2_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_165;
      FIX::EventDate EventDate_165("LOCALMKTDATE_1744629490");
      noEvents_2_1_2.set(EventDate_165);
      EvntGrp_NoEvents_165.insert(EventDate_165.getString());
      FIX::EventPx EventPx_165;
      EventPx_165.setString("1388323");
      noEvents_2_1_2.set(EventPx_165);
      EvntGrp_NoEvents_165.insert(EventPx_165.getString());
      FIX::EventText EventText_165("STRING_591004839");
      noEvents_2_1_2.set(EventText_165);
      EvntGrp_NoEvents_165.insert(EventText_165.getString());
      FIX::EventTime EventTime_165(FIX::UTCTIMESTAMP(7, 24, 56, 2, 1, 2001));
      noEvents_2_1_2.set(EventTime_165);
      EvntGrp_NoEvents_165.insert(EventTime_165.getString());
      FIX::EventType EventType_165(2);
      noEvents_2_1_2.set(EventType_165);
      EvntGrp_NoEvents_165.insert(EventType_165.getString());
      all_values.push_back(EvntGrp_NoEvents_165);

      noSettlOblig_0_2.addGroup(noEvents_2_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_159;
      FIX::InstrumentPartyID InstrumentPartyID_159("STRING_1258585338");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_159);
      InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyID_159.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_159('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_159);
      InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyIDSource_159.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_159(639298425);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_159);
      InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyRole_159.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_159);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324;
        FIX::InstrumentPartySubID InstrumentPartySubID_324("STRING_998688543");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_324);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324.insert(InstrumentPartySubID_324.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_324(727174741);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_324);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324.insert(InstrumentPartySubIDType_324.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      noSettlOblig_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_160;
      FIX::InstrumentPartyID InstrumentPartyID_160("STRING_2134550892");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_160);
      InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyID_160.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_160('1');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_160);
      InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyIDSource_160.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_160(1195104959);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_160);
      InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyRole_160.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_160);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325;
        FIX::InstrumentPartySubID InstrumentPartySubID_325("STRING_1733960381");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_325);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325.insert(InstrumentPartySubID_325.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_325(1426663607);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_325);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325.insert(InstrumentPartySubIDType_325.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326;
        FIX::InstrumentPartySubID InstrumentPartySubID_326("STRING_334087610");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_326);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326.insert(InstrumentPartySubID_326.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_326(767254674);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_326);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326.insert(InstrumentPartySubIDType_326.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      noSettlOblig_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_2_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_161;
      FIX::InstrumentPartyID InstrumentPartyID_161("STRING_887331947");
      noInstrumentParties_2_1_2.set(InstrumentPartyID_161);
      InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyID_161.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_161('2');
      noInstrumentParties_2_1_2.set(InstrumentPartyIDSource_161);
      InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyIDSource_161.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_161(2128172803);
      noInstrumentParties_2_1_2.set(InstrumentPartyRole_161);
      InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyRole_161.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_161);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327;
        FIX::InstrumentPartySubID InstrumentPartySubID_327("STRING_840794230");
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubID_327);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327.insert(InstrumentPartySubID_327.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_327(1725318645);
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubIDType_327);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327.insert(InstrumentPartySubIDType_327.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328;
        FIX::InstrumentPartySubID InstrumentPartySubID_328("STRING_524241632");
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubID_328);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328.insert(InstrumentPartySubID_328.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_328(1431799069);
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubIDType_328);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328.insert(InstrumentPartySubIDType_328.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_1);
      }
      noSettlOblig_0_2.addGroup(noInstrumentParties_2_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_178;
      FIX::SecurityAltID SecurityAltID_178("STRING_918085719");
      noSecurityAltID_2_1_0.set(SecurityAltID_178);
      SecAltIDGrp_NoSecurityAltID_178.insert(SecurityAltID_178.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_178("STRING_1355910305");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_178);
      SecAltIDGrp_NoSecurityAltID_178.insert(SecurityAltIDSource_178.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_178);

      noSettlOblig_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_166;
    FIX::SecurityXML SecurityXML_167("XMLDATA_2009356787");
    noSettlOblig_0_2.set(SecurityXML_167);
    FIX::SecurityXMLLen SecurityXMLLen_83(1658358710);
    noSettlOblig_0_2.set(SecurityXMLLen_83);
    FIX::SecurityXMLSchema SecurityXMLSchema_83("STRING_507392410");
    noSettlOblig_0_2.set(SecurityXMLSchema_83);
    SecurityXML_166.insert(SecurityXMLSchema_83.getString());
    all_values.push_back(SecurityXML_166);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_140;
      FIX::PartyID PartyID_140("STRING_1986019571");
      noPartyIDs_2_1_0.set(PartyID_140);
      Parties_NoPartyIDs_140.insert(PartyID_140.getString());
      FIX::PartyIDSource PartyIDSource_140('F');
      noPartyIDs_2_1_0.set(PartyIDSource_140);
      Parties_NoPartyIDs_140.insert(PartyIDSource_140.getString());
      FIX::PartyRole PartyRole_140(4);
      noPartyIDs_2_1_0.set(PartyRole_140);
      Parties_NoPartyIDs_140.insert(PartyRole_140.getString());
      all_values.push_back(Parties_NoPartyIDs_140);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_283;
        FIX::PartySubID PartySubID_283("STRING_1610859205");
        noPartySubIDs_2_0_2_0.set(PartySubID_283);
        PtysSubGrp_NoPartySubIDs_283.insert(PartySubID_283.getString());
        FIX::PartySubIDType PartySubIDType_283(16);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_283);
        PtysSubGrp_NoPartySubIDs_283.insert(PartySubIDType_283.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_283);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_284;
        FIX::PartySubID PartySubID_284("STRING_2070138578");
        noPartySubIDs_2_0_2_1.set(PartySubID_284);
        PtysSubGrp_NoPartySubIDs_284.insert(PartySubID_284.getString());
        FIX::PartySubIDType PartySubIDType_284(16);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_284);
        PtysSubGrp_NoPartySubIDs_284.insert(PartySubIDType_284.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_284);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      noSettlOblig_0_2.addGroup(noPartyIDs_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_2_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_141;
      FIX::PartyID PartyID_141("STRING_766511947");
      noPartyIDs_2_1_1.set(PartyID_141);
      Parties_NoPartyIDs_141.insert(PartyID_141.getString());
      FIX::PartyIDSource PartyIDSource_141('2');
      noPartyIDs_2_1_1.set(PartyIDSource_141);
      Parties_NoPartyIDs_141.insert(PartyIDSource_141.getString());
      FIX::PartyRole PartyRole_141(80);
      noPartyIDs_2_1_1.set(PartyRole_141);
      Parties_NoPartyIDs_141.insert(PartyRole_141.getString());
      all_values.push_back(Parties_NoPartyIDs_141);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_285;
        FIX::PartySubID PartySubID_285("STRING_770363487");
        noPartySubIDs_2_1_2_0.set(PartySubID_285);
        PtysSubGrp_NoPartySubIDs_285.insert(PartySubID_285.getString());
        FIX::PartySubIDType PartySubIDType_285(25);
        noPartySubIDs_2_1_2_0.set(PartySubIDType_285);
        PtysSubGrp_NoPartySubIDs_285.insert(PartySubIDType_285.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_285);

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_0);
      }
      noSettlOblig_0_2.addGroup(noPartyIDs_2_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_2_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_142;
      FIX::PartyID PartyID_142("STRING_174611253");
      noPartyIDs_2_1_2.set(PartyID_142);
      Parties_NoPartyIDs_142.insert(PartyID_142.getString());
      FIX::PartyIDSource PartyIDSource_142('A');
      noPartyIDs_2_1_2.set(PartyIDSource_142);
      Parties_NoPartyIDs_142.insert(PartyIDSource_142.getString());
      FIX::PartyRole PartyRole_142(47);
      noPartyIDs_2_1_2.set(PartyRole_142);
      Parties_NoPartyIDs_142.insert(PartyRole_142.getString());
      all_values.push_back(Parties_NoPartyIDs_142);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_286;
        FIX::PartySubID PartySubID_286("STRING_1518307317");
        noPartySubIDs_2_2_2_0.set(PartySubID_286);
        PtysSubGrp_NoPartySubIDs_286.insert(PartySubID_286.getString());
        FIX::PartySubIDType PartySubIDType_286(17);
        noPartySubIDs_2_2_2_0.set(PartySubIDType_286);
        PtysSubGrp_NoPartySubIDs_286.insert(PartySubIDType_286.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_286);

        noPartyIDs_2_1_2.addGroup(noPartySubIDs_2_2_2_0);
      }
      noSettlOblig_0_2.addGroup(noPartyIDs_2_1_2);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_3;
      FIX::SettlObligSource SettlObligSource_3('2');
      noSettlDetails_2_1_0.set(SettlObligSource_3);
      SettlDetails_NoSettlDetails_3.insert(SettlObligSource_3.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_3);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_43;
        FIX::SettlPartyID SettlPartyID_43("STRING_561029824");
        noSettlPartyIDs_2_0_2_0.set(SettlPartyID_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyID_43.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_43('5');
        noSettlPartyIDs_2_0_2_0.set(SettlPartyIDSource_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyIDSource_43.getString());
        FIX::SettlPartyRole SettlPartyRole_43(1232420173);
        noSettlPartyIDs_2_0_2_0.set(SettlPartyRole_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyRole_43.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_43);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_95;
          FIX::SettlPartySubID SettlPartySubID_95("STRING_447789717");
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubID_95);
          SettlPtysSubGrp_NoSettlPartySubIDs_95.insert(SettlPartySubID_95.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_95(743295235);
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubIDType_95);
          SettlPtysSubGrp_NoSettlPartySubIDs_95.insert(SettlPartySubIDType_95.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_95);

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_44;
        FIX::SettlPartyID SettlPartyID_44("STRING_276848891");
        noSettlPartyIDs_2_0_2_1.set(SettlPartyID_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyID_44.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_44('1');
        noSettlPartyIDs_2_0_2_1.set(SettlPartyIDSource_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyIDSource_44.getString());
        FIX::SettlPartyRole SettlPartyRole_44(581831158);
        noSettlPartyIDs_2_0_2_1.set(SettlPartyRole_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyRole_44.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_44);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_96;
          FIX::SettlPartySubID SettlPartySubID_96("STRING_2131570121");
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubID_96);
          SettlPtysSubGrp_NoSettlPartySubIDs_96.insert(SettlPartySubID_96.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_96(1653281193);
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubIDType_96);
          SettlPtysSubGrp_NoSettlPartySubIDs_96.insert(SettlPartySubIDType_96.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_96);

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_0);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_1);
      }
      noSettlOblig_0_2.addGroup(noSettlDetails_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_4;
      FIX::SettlObligSource SettlObligSource_4('3');
      noSettlDetails_2_1_1.set(SettlObligSource_4);
      SettlDetails_NoSettlDetails_4.insert(SettlObligSource_4.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_4);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_45;
        FIX::SettlPartyID SettlPartyID_45("STRING_1575936123");
        noSettlPartyIDs_2_1_2_0.set(SettlPartyID_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyID_45.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_45('9');
        noSettlPartyIDs_2_1_2_0.set(SettlPartyIDSource_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyIDSource_45.getString());
        FIX::SettlPartyRole SettlPartyRole_45(1530043124);
        noSettlPartyIDs_2_1_2_0.set(SettlPartyRole_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyRole_45.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_45);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_97;
          FIX::SettlPartySubID SettlPartySubID_97("STRING_140507136");
          noSettlPartySubIDs_2_1_0_3_0.set(SettlPartySubID_97);
          SettlPtysSubGrp_NoSettlPartySubIDs_97.insert(SettlPartySubID_97.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_97(1370566767);
          noSettlPartySubIDs_2_1_0_3_0.set(SettlPartySubIDType_97);
          SettlPtysSubGrp_NoSettlPartySubIDs_97.insert(SettlPartySubIDType_97.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_97);

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_98;
          FIX::SettlPartySubID SettlPartySubID_98("STRING_1382702717");
          noSettlPartySubIDs_2_1_0_3_1.set(SettlPartySubID_98);
          SettlPtysSubGrp_NoSettlPartySubIDs_98.insert(SettlPartySubID_98.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_98(805342354);
          noSettlPartySubIDs_2_1_0_3_1.set(SettlPartySubIDType_98);
          SettlPtysSubGrp_NoSettlPartySubIDs_98.insert(SettlPartySubIDType_98.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_98);

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_1);
        }
        noSettlDetails_2_1_1.addGroup(noSettlPartyIDs_2_1_2_0);
      }
      noSettlOblig_0_2.addGroup(noSettlDetails_2_1_1);
    }
    msg.addGroup(noSettlOblig_0_2);
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
