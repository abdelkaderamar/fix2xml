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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SettlementObligationReport msg;

  list<multiset<string>> all_values;
  multiset<string> SettlementObligationReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_24("LOCALMKTDATE_939949477");
  msg.set(ClearingBusinessDate_24);
  SettlementObligationReport_0.insert(ClearingBusinessDate_24.getString());
  FIX::EncodedText EncodedText_86("DATA_216364461");
  msg.set(EncodedText_86);
  SettlementObligationReport_0.insert(EncodedText_86.getString());
  FIX::EncodedTextLen EncodedTextLen_86(67779972);
  msg.set(EncodedTextLen_86);
  SettlementObligationReport_0.insert(EncodedTextLen_86.getString());
  FIX::SettlObligMode SettlObligMode_0(1);
  msg.set(SettlObligMode_0);
  SettlementObligationReport_0.insert(SettlObligMode_0.getString());
  FIX::SettlObligMsgID SettlObligMsgID_0("STRING_1180730415");
  msg.set(SettlObligMsgID_0);
  SettlementObligationReport_0.insert(SettlObligMsgID_0.getString());
  FIX::SettlementCycleNo SettlementCycleNo_0(1148920698);
  msg.set(SettlementCycleNo_0);
  SettlementObligationReport_0.insert(SettlementCycleNo_0.getString());
  FIX::Text Text_86("STRING_858193265");
  msg.set(Text_86);
  SettlementObligationReport_0.insert(Text_86.getString());
  FIX::TransactTime TransactTime_69(FIX::UTCTIMESTAMP(8, 30, 20, 14, 1, 2001));
  msg.set(TransactTime_69);
  SettlementObligationReport_0.insert(TransactTime_69.getString());
  all_values.push_back(SettlementObligationReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_18;
  FIX::ApplID ApplID_18("STRING_638385527");
  msg.set(ApplID_18);
  ApplicationSequenceControl_18.insert(ApplID_18.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_18(225848906);
  msg.set(ApplLastSeqNum_18);
  ApplicationSequenceControl_18.insert(ApplLastSeqNum_18.getString());
  FIX::ApplResendFlag ApplResendFlag_18(true);
  msg.set(ApplResendFlag_18);
  ApplicationSequenceControl_18.insert(ApplResendFlag_18.getString());
  FIX::ApplSeqNum ApplSeqNum_18(904039136);
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
    CcyAmt_0.setString("2939858");
    noSettlOblig_0_0.set(CcyAmt_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(CcyAmt_0.getString());
    FIX::Currency Currency_68("USD");
    noSettlOblig_0_0.set(Currency_68);
    SettlObligationInstructions_NoSettlOblig_0.insert(Currency_68.getString());
    FIX::EffectiveTime EffectiveTime_12(FIX::UTCTIMESTAMP(16, 48, 9, 27, 6, 2006));
    noSettlOblig_0_0.set(EffectiveTime_12);
    SettlObligationInstructions_NoSettlOblig_0.insert(EffectiveTime_12.getString());
    FIX::ExpireTime ExpireTime_21(FIX::UTCTIMESTAMP(21, 23, 31, 13, 3, 2015));
    noSettlOblig_0_0.set(ExpireTime_21);
    SettlObligationInstructions_NoSettlOblig_0.insert(ExpireTime_21.getString());
    FIX::LastUpdateTime LastUpdateTime_3(FIX::UTCTIMESTAMP(7, 21, 40, 13, 6, 2012));
    noSettlOblig_0_0.set(LastUpdateTime_3);
    SettlObligationInstructions_NoSettlOblig_0.insert(LastUpdateTime_3.getString());
    FIX::NetGrossInd NetGrossInd_2(2);
    noSettlOblig_0_0.set(NetGrossInd_2);
    SettlObligationInstructions_NoSettlOblig_0.insert(NetGrossInd_2.getString());
    FIX::SettlCurrAmt SettlCurrAmt_8;
    SettlCurrAmt_8.setString("14607829");
    noSettlOblig_0_0.set(SettlCurrAmt_8);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrAmt_8.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_8;
    SettlCurrFxRate_8.setString("5551086");
    noSettlOblig_0_0.set(SettlCurrFxRate_8);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrFxRate_8.getString());
    FIX::SettlCurrency SettlCurrency_29("GBP");
    noSettlOblig_0_0.set(SettlCurrency_29);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrency_29.getString());
    FIX::SettlDate SettlDate_43("LOCALMKTDATE_1459147818");
    noSettlOblig_0_0.set(SettlDate_43);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlDate_43.getString());
    FIX::SettlObligID SettlObligID_0("STRING_409489690");
    noSettlOblig_0_0.set(SettlObligID_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligID_0.getString());
    FIX::SettlObligRefID SettlObligRefID_0("STRING_193008965");
    noSettlOblig_0_0.set(SettlObligRefID_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligRefID_0.getString());
    FIX::SettlObligTransType SettlObligTransType_0('C');
    noSettlOblig_0_0.set(SettlObligTransType_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligTransType_0.getString());
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_0);

    // Instrument
    multiset<string> Instrument_88;
    FIX::AttachmentPoint AttachmentPoint_88;
    AttachmentPoint_88.setString("27.670000");
    noSettlOblig_0_0.set(AttachmentPoint_88);
    Instrument_88.insert(AttachmentPoint_88.getString());
    FIX::CFICode CFICode_93("STRING_140691588");
    noSettlOblig_0_0.set(CFICode_93);
    Instrument_88.insert(CFICode_93.getString());
    FIX::CPProgram CPProgram_88(2);
    noSettlOblig_0_0.set(CPProgram_88);
    Instrument_88.insert(CPProgram_88.getString());
    FIX::CPRegType CPRegType_88("STRING_1813198115");
    noSettlOblig_0_0.set(CPRegType_88);
    Instrument_88.insert(CPRegType_88.getString());
    FIX::CapPrice CapPrice_88;
    CapPrice_88.setString("9195643");
    noSettlOblig_0_0.set(CapPrice_88);
    Instrument_88.insert(CapPrice_88.getString());
    FIX::ContractMultiplier ContractMultiplier_88;
    ContractMultiplier_88.setString("1551385");
    noSettlOblig_0_0.set(ContractMultiplier_88);
    Instrument_88.insert(ContractMultiplier_88.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_88(2);
    noSettlOblig_0_0.set(ContractMultiplierUnit_88);
    Instrument_88.insert(ContractMultiplierUnit_88.getString());
    FIX::ContractSettlMonth ContractSettlMonth_88("MONTHYEAR_189203324");
    noSettlOblig_0_0.set(ContractSettlMonth_88);
    Instrument_88.insert(ContractSettlMonth_88.getString());
    FIX::CountryOfIssue CountryOfIssue_88("COUNTRY_1388200894");
    noSettlOblig_0_0.set(CountryOfIssue_88);
    Instrument_88.insert(CountryOfIssue_88.getString());
    FIX::CouponPaymentDate CouponPaymentDate_88("LOCALMKTDATE_1085366393");
    noSettlOblig_0_0.set(CouponPaymentDate_88);
    Instrument_88.insert(CouponPaymentDate_88.getString());
    FIX::CouponRate CouponRate_88;
    CouponRate_88.setString("18.080000");
    noSettlOblig_0_0.set(CouponRate_88);
    Instrument_88.insert(CouponRate_88.getString());
    FIX::CreditRating CreditRating_88("STRING_690144057");
    noSettlOblig_0_0.set(CreditRating_88);
    Instrument_88.insert(CreditRating_88.getString());
    FIX::DatedDate DatedDate_88("LOCALMKTDATE_1514611251");
    noSettlOblig_0_0.set(DatedDate_88);
    Instrument_88.insert(DatedDate_88.getString());
    FIX::DetachmentPoint DetachmentPoint_88;
    DetachmentPoint_88.setString("12.540000");
    noSettlOblig_0_0.set(DetachmentPoint_88);
    Instrument_88.insert(DetachmentPoint_88.getString());
    FIX::EncodedIssuer EncodedIssuer_88("DATA_1172817636");
    noSettlOblig_0_0.set(EncodedIssuer_88);
    Instrument_88.insert(EncodedIssuer_88.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_88(945293159);
    noSettlOblig_0_0.set(EncodedIssuerLen_88);
    Instrument_88.insert(EncodedIssuerLen_88.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_88("DATA_1565463965");
    noSettlOblig_0_0.set(EncodedSecurityDesc_88);
    Instrument_88.insert(EncodedSecurityDesc_88.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_88(129394849);
    noSettlOblig_0_0.set(EncodedSecurityDescLen_88);
    Instrument_88.insert(EncodedSecurityDescLen_88.getString());
    FIX::ExerciseStyle ExerciseStyle_88(0);
    noSettlOblig_0_0.set(ExerciseStyle_88);
    Instrument_88.insert(ExerciseStyle_88.getString());
    FIX::Factor Factor_88;
    Factor_88.setString("640955");
    noSettlOblig_0_0.set(Factor_88);
    Instrument_88.insert(Factor_88.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_88(true);
    noSettlOblig_0_0.set(FlexProductEligibilityIndicator_88);
    Instrument_88.insert(FlexProductEligibilityIndicator_88.getString());
    FIX::FlexibleIndicator FlexibleIndicator_88(true);
    noSettlOblig_0_0.set(FlexibleIndicator_88);
    Instrument_88.insert(FlexibleIndicator_88.getString());
    FIX::FloorPrice FloorPrice_88;
    FloorPrice_88.setString("13747451");
    noSettlOblig_0_0.set(FloorPrice_88);
    Instrument_88.insert(FloorPrice_88.getString());
    FIX::FlowScheduleType FlowScheduleType_88(2);
    noSettlOblig_0_0.set(FlowScheduleType_88);
    Instrument_88.insert(FlowScheduleType_88.getString());
    FIX::InstrRegistry InstrRegistry_88("STRING_465785248");
    noSettlOblig_0_0.set(InstrRegistry_88);
    Instrument_88.insert(InstrRegistry_88.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_88('7');
    noSettlOblig_0_0.set(InstrmtAssignmentMethod_88);
    Instrument_88.insert(InstrmtAssignmentMethod_88.getString());
    FIX::InterestAccrualDate InterestAccrualDate_88("LOCALMKTDATE_1451859861");
    noSettlOblig_0_0.set(InterestAccrualDate_88);
    Instrument_88.insert(InterestAccrualDate_88.getString());
    FIX::IssueDate IssueDate_88("LOCALMKTDATE_1924933066");
    noSettlOblig_0_0.set(IssueDate_88);
    Instrument_88.insert(IssueDate_88.getString());
    FIX::Issuer Issuer_88("STRING_1173249582");
    noSettlOblig_0_0.set(Issuer_88);
    Instrument_88.insert(Issuer_88.getString());
    FIX::ListMethod ListMethod_88(0);
    noSettlOblig_0_0.set(ListMethod_88);
    Instrument_88.insert(ListMethod_88.getString());
    FIX::LocaleOfIssue LocaleOfIssue_88("STRING_1675828547");
    noSettlOblig_0_0.set(LocaleOfIssue_88);
    Instrument_88.insert(LocaleOfIssue_88.getString());
    FIX::MaturityDate MaturityDate_88("LOCALMKTDATE_1735282349");
    noSettlOblig_0_0.set(MaturityDate_88);
    Instrument_88.insert(MaturityDate_88.getString());
    FIX::MaturityMonthYear MaturityMonthYear_88("MONTHYEAR_1785560415");
    noSettlOblig_0_0.set(MaturityMonthYear_88);
    Instrument_88.insert(MaturityMonthYear_88.getString());
    FIX::MaturityTime MaturityTime_88("TZTIMEONLY_1991046243");
    noSettlOblig_0_0.set(MaturityTime_88);
    Instrument_88.insert(MaturityTime_88.getString());
    FIX::MinPriceIncrement MinPriceIncrement_88;
    MinPriceIncrement_88.setString("14009968");
    noSettlOblig_0_0.set(MinPriceIncrement_88);
    Instrument_88.insert(MinPriceIncrement_88.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_88;
    MinPriceIncrementAmount_88.setString("5576410");
    noSettlOblig_0_0.set(MinPriceIncrementAmount_88);
    Instrument_88.insert(MinPriceIncrementAmount_88.getString());
    FIX::NTPositionLimit NTPositionLimit_88(2146184787);
    noSettlOblig_0_0.set(NTPositionLimit_88);
    Instrument_88.insert(NTPositionLimit_88.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_88;
    NotionalPercentageOutstanding_88.setString("83.240000");
    noSettlOblig_0_0.set(NotionalPercentageOutstanding_88);
    Instrument_88.insert(NotionalPercentageOutstanding_88.getString());
    FIX::OptAttribute OptAttribute_88('7');
    noSettlOblig_0_0.set(OptAttribute_88);
    Instrument_88.insert(OptAttribute_88.getString());
    FIX::OptPayoutAmount OptPayoutAmount_88;
    OptPayoutAmount_88.setString("13869020");
    noSettlOblig_0_0.set(OptPayoutAmount_88);
    Instrument_88.insert(OptPayoutAmount_88.getString());
    FIX::OptPayoutType OptPayoutType_88(2);
    noSettlOblig_0_0.set(OptPayoutType_88);
    Instrument_88.insert(OptPayoutType_88.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_88;
    OriginalNotionalPercentageOutstanding_88.setString("62.170000");
    noSettlOblig_0_0.set(OriginalNotionalPercentageOutstanding_88);
    Instrument_88.insert(OriginalNotionalPercentageOutstanding_88.getString());
    FIX::Pool Pool_88("STRING_2077046091");
    noSettlOblig_0_0.set(Pool_88);
    Instrument_88.insert(Pool_88.getString());
    FIX::PositionLimit PositionLimit_88(429908672);
    noSettlOblig_0_0.set(PositionLimit_88);
    Instrument_88.insert(PositionLimit_88.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_88("STRING_PCTPAR");
    noSettlOblig_0_0.set(PriceQuoteMethod_88);
    Instrument_88.insert(PriceQuoteMethod_88.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_88("STRING_1102380079");
    noSettlOblig_0_0.set(PriceUnitOfMeasure_88);
    Instrument_88.insert(PriceUnitOfMeasure_88.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_88;
    PriceUnitOfMeasureQty_88.setString("13752018");
    noSettlOblig_0_0.set(PriceUnitOfMeasureQty_88);
    Instrument_88.insert(PriceUnitOfMeasureQty_88.getString());
    FIX::Product Product_96(10);
    noSettlOblig_0_0.set(Product_96);
    Instrument_88.insert(Product_96.getString());
    FIX::ProductComplex ProductComplex_88("STRING_1231774929");
    noSettlOblig_0_0.set(ProductComplex_88);
    Instrument_88.insert(ProductComplex_88.getString());
    FIX::PutOrCall PutOrCall_88(1);
    noSettlOblig_0_0.set(PutOrCall_88);
    Instrument_88.insert(PutOrCall_88.getString());
    FIX::RedemptionDate RedemptionDate_88("LOCALMKTDATE_1180743379");
    noSettlOblig_0_0.set(RedemptionDate_88);
    Instrument_88.insert(RedemptionDate_88.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_88("STRING_1323828751");
    noSettlOblig_0_0.set(RepoCollateralSecurityType_88);
    Instrument_88.insert(RepoCollateralSecurityType_88.getString());
    FIX::RepurchaseRate RepurchaseRate_88;
    RepurchaseRate_88.setString("18.090000");
    noSettlOblig_0_0.set(RepurchaseRate_88);
    Instrument_88.insert(RepurchaseRate_88.getString());
    FIX::RepurchaseTerm RepurchaseTerm_88(408004843);
    noSettlOblig_0_0.set(RepurchaseTerm_88);
    Instrument_88.insert(RepurchaseTerm_88.getString());
    FIX::RestructuringType RestructuringType_88("STRING_MM");
    noSettlOblig_0_0.set(RestructuringType_88);
    Instrument_88.insert(RestructuringType_88.getString());
    FIX::SecurityDesc SecurityDesc_88("STRING_1745617057");
    noSettlOblig_0_0.set(SecurityDesc_88);
    Instrument_88.insert(SecurityDesc_88.getString());
    FIX::SecurityExchange SecurityExchange_88("EXCHANGE_1171764734");
    noSettlOblig_0_0.set(SecurityExchange_88);
    Instrument_88.insert(SecurityExchange_88.getString());
    FIX::SecurityGroup SecurityGroup_88("STRING_33558039");
    noSettlOblig_0_0.set(SecurityGroup_88);
    Instrument_88.insert(SecurityGroup_88.getString());
    FIX::SecurityID SecurityID_88("STRING_1523066475");
    noSettlOblig_0_0.set(SecurityID_88);
    Instrument_88.insert(SecurityID_88.getString());
    FIX::SecurityIDSource SecurityIDSource_88("STRING_H");
    noSettlOblig_0_0.set(SecurityIDSource_88);
    Instrument_88.insert(SecurityIDSource_88.getString());
    FIX::SecurityStatus SecurityStatus_89("STRING_2");
    noSettlOblig_0_0.set(SecurityStatus_89);
    Instrument_88.insert(SecurityStatus_89.getString());
    FIX::SecuritySubType SecuritySubType_92("STRING_1051411374");
    noSettlOblig_0_0.set(SecuritySubType_92);
    Instrument_88.insert(SecuritySubType_92.getString());
    FIX::SecurityType SecurityType_96("STRING_TINT");
    noSettlOblig_0_0.set(SecurityType_96);
    Instrument_88.insert(SecurityType_96.getString());
    FIX::Seniority Seniority_88("STRING_SD");
    noSettlOblig_0_0.set(Seniority_88);
    Instrument_88.insert(Seniority_88.getString());
    FIX::SettlMethod SettlMethod_88('C');
    noSettlOblig_0_0.set(SettlMethod_88);
    Instrument_88.insert(SettlMethod_88.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_88("STRING_1186326185");
    noSettlOblig_0_0.set(SettleOnOpenFlag_88);
    Instrument_88.insert(SettleOnOpenFlag_88.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_88("STRING_1874144717");
    noSettlOblig_0_0.set(StateOrProvinceOfIssue_88);
    Instrument_88.insert(StateOrProvinceOfIssue_88.getString());
    FIX::StrikeCurrency StrikeCurrency_88("EUR");
    noSettlOblig_0_0.set(StrikeCurrency_88);
    Instrument_88.insert(StrikeCurrency_88.getString());
    FIX::StrikeMultiplier StrikeMultiplier_88;
    StrikeMultiplier_88.setString("4735054");
    noSettlOblig_0_0.set(StrikeMultiplier_88);
    Instrument_88.insert(StrikeMultiplier_88.getString());
    FIX::StrikePrice StrikePrice_88;
    StrikePrice_88.setString("1330934");
    noSettlOblig_0_0.set(StrikePrice_88);
    Instrument_88.insert(StrikePrice_88.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_88(4);
    noSettlOblig_0_0.set(StrikePriceBoundaryMethod_88);
    Instrument_88.insert(StrikePriceBoundaryMethod_88.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_88;
    StrikePriceBoundaryPrecision_88.setString("16.960000");
    noSettlOblig_0_0.set(StrikePriceBoundaryPrecision_88);
    Instrument_88.insert(StrikePriceBoundaryPrecision_88.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_88(3);
    noSettlOblig_0_0.set(StrikePriceDeterminationMethod_88);
    Instrument_88.insert(StrikePriceDeterminationMethod_88.getString());
    FIX::StrikeValue StrikeValue_88;
    StrikeValue_88.setString("5089469");
    noSettlOblig_0_0.set(StrikeValue_88);
    Instrument_88.insert(StrikeValue_88.getString());
    FIX::Symbol Symbol_88("STRING_1170325520");
    noSettlOblig_0_0.set(Symbol_88);
    Instrument_88.insert(Symbol_88.getString());
    FIX::SymbolSfx SymbolSfx_88("STRING_WI");
    noSettlOblig_0_0.set(SymbolSfx_88);
    Instrument_88.insert(SymbolSfx_88.getString());
    FIX::TimeUnit TimeUnit_88("STRING_D");
    noSettlOblig_0_0.set(TimeUnit_88);
    Instrument_88.insert(TimeUnit_88.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_88(1);
    noSettlOblig_0_0.set(UnderlyingPriceDeterminationMethod_88);
    Instrument_88.insert(UnderlyingPriceDeterminationMethod_88.getString());
    FIX::UnitOfMeasure UnitOfMeasure_88("STRING_Alw");
    noSettlOblig_0_0.set(UnitOfMeasure_88);
    Instrument_88.insert(UnitOfMeasure_88.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_88;
    UnitOfMeasureQty_88.setString("11058203");
    noSettlOblig_0_0.set(UnitOfMeasureQty_88);
    Instrument_88.insert(UnitOfMeasureQty_88.getString());
    FIX::ValuationMethod ValuationMethod_88("STRING_CDSD");
    noSettlOblig_0_0.set(ValuationMethod_88);
    Instrument_88.insert(ValuationMethod_88.getString());
    all_values.push_back(Instrument_88);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_166;
      FIX::ComplexEventCondition ComplexEventCondition_166(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_166);
      ComplexEvents_NoComplexEvents_166.insert(ComplexEventCondition_166.getString());
      FIX::ComplexEventPrice ComplexEventPrice_166;
      ComplexEventPrice_166.setString("17282378");
      noComplexEvents_0_1_0.set(ComplexEventPrice_166);
      ComplexEvents_NoComplexEvents_166.insert(ComplexEventPrice_166.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_166(4);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_166);
      ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceBoundaryMethod_166.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_166;
      ComplexEventPriceBoundaryPrecision_166.setString("56.000000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_166);
      ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceBoundaryPrecision_166.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_166(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_166);
      ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceTimeType_166.getString());
      FIX::ComplexEventType ComplexEventType_166(4);
      noComplexEvents_0_1_0.set(ComplexEventType_166);
      ComplexEvents_NoComplexEvents_166.insert(ComplexEventType_166.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_166;
      ComplexOptPayoutAmount_166.setString("13593684");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_166);
      ComplexEvents_NoComplexEvents_166.insert(ComplexOptPayoutAmount_166.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_166);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_333;
        FIX::ComplexEventEndDate ComplexEventEndDate_333(FIX::UTCTIMESTAMP(2, 47, 37, 4, 5, 2010));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_333);
        ComplexEventDates_NoComplexEventDates_333.insert(ComplexEventEndDate_333.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_333(FIX::UTCTIMESTAMP(22, 45, 0, 5, 11, 2014));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_333);
        ComplexEventDates_NoComplexEventDates_333.insert(ComplexEventStartDate_333.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_333);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_667;
          FIX::ComplexEventEndTime ComplexEventEndTime_667(FIX::UTCTIMEONLY(12, 23, 34));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_667);
          ComplexEventTimes_NoComplexEventTimes_667.insert(ComplexEventEndTime_667.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_667(FIX::UTCTIMEONLY(21, 26, 56));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_667);
          ComplexEventTimes_NoComplexEventTimes_667.insert(ComplexEventStartTime_667.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_667);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_668;
          FIX::ComplexEventEndTime ComplexEventEndTime_668(FIX::UTCTIMEONLY(0, 44, 52));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_668);
          ComplexEventTimes_NoComplexEventTimes_668.insert(ComplexEventEndTime_668.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_668(FIX::UTCTIMEONLY(23, 20, 19));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_668);
          ComplexEventTimes_NoComplexEventTimes_668.insert(ComplexEventStartTime_668.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_668);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_669;
          FIX::ComplexEventEndTime ComplexEventEndTime_669(FIX::UTCTIMEONLY(10, 6, 13));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_669);
          ComplexEventTimes_NoComplexEventTimes_669.insert(ComplexEventEndTime_669.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_669(FIX::UTCTIMEONLY(14, 51, 35));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_669);
          ComplexEventTimes_NoComplexEventTimes_669.insert(ComplexEventStartTime_669.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_669);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_334;
        FIX::ComplexEventEndDate ComplexEventEndDate_334(FIX::UTCTIMESTAMP(13, 36, 57, 3, 3, 2010));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_334);
        ComplexEventDates_NoComplexEventDates_334.insert(ComplexEventEndDate_334.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_334(FIX::UTCTIMESTAMP(6, 57, 15, 13, 8, 2017));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_334);
        ComplexEventDates_NoComplexEventDates_334.insert(ComplexEventStartDate_334.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_334);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_670;
          FIX::ComplexEventEndTime ComplexEventEndTime_670(FIX::UTCTIMEONLY(6, 50, 20));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_670);
          ComplexEventTimes_NoComplexEventTimes_670.insert(ComplexEventEndTime_670.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_670(FIX::UTCTIMEONLY(17, 40, 42));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_670);
          ComplexEventTimes_NoComplexEventTimes_670.insert(ComplexEventStartTime_670.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_670);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_671;
          FIX::ComplexEventEndTime ComplexEventEndTime_671(FIX::UTCTIMEONLY(18, 40, 34));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_671);
          ComplexEventTimes_NoComplexEventTimes_671.insert(ComplexEventEndTime_671.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_671(FIX::UTCTIMEONLY(19, 18, 3));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_671);
          ComplexEventTimes_NoComplexEventTimes_671.insert(ComplexEventStartTime_671.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_671);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_672;
          FIX::ComplexEventEndTime ComplexEventEndTime_672(FIX::UTCTIMEONLY(7, 39, 57));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_672);
          ComplexEventTimes_NoComplexEventTimes_672.insert(ComplexEventEndTime_672.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_672(FIX::UTCTIMEONLY(10, 31, 39));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_672);
          ComplexEventTimes_NoComplexEventTimes_672.insert(ComplexEventStartTime_672.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_672);

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
      multiset<string> EvntGrp_NoEvents_176;
      FIX::EventDate EventDate_176("LOCALMKTDATE_891304280");
      noEvents_0_1_0.set(EventDate_176);
      EvntGrp_NoEvents_176.insert(EventDate_176.getString());
      FIX::EventPx EventPx_176;
      EventPx_176.setString("4510668");
      noEvents_0_1_0.set(EventPx_176);
      EvntGrp_NoEvents_176.insert(EventPx_176.getString());
      FIX::EventText EventText_176("STRING_391675477");
      noEvents_0_1_0.set(EventText_176);
      EvntGrp_NoEvents_176.insert(EventText_176.getString());
      FIX::EventTime EventTime_176(FIX::UTCTIMESTAMP(12, 43, 35, 14, 2, 2001));
      noEvents_0_1_0.set(EventTime_176);
      EvntGrp_NoEvents_176.insert(EventTime_176.getString());
      FIX::EventType EventType_176(6);
      noEvents_0_1_0.set(EventType_176);
      EvntGrp_NoEvents_176.insert(EventType_176.getString());
      all_values.push_back(EvntGrp_NoEvents_176);

      noSettlOblig_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_177;
      FIX::EventDate EventDate_177("LOCALMKTDATE_759022038");
      noEvents_0_1_1.set(EventDate_177);
      EvntGrp_NoEvents_177.insert(EventDate_177.getString());
      FIX::EventPx EventPx_177;
      EventPx_177.setString("19451274");
      noEvents_0_1_1.set(EventPx_177);
      EvntGrp_NoEvents_177.insert(EventPx_177.getString());
      FIX::EventText EventText_177("STRING_362903520");
      noEvents_0_1_1.set(EventText_177);
      EvntGrp_NoEvents_177.insert(EventText_177.getString());
      FIX::EventTime EventTime_177(FIX::UTCTIMESTAMP(21, 40, 14, 21, 4, 2002));
      noEvents_0_1_1.set(EventTime_177);
      EvntGrp_NoEvents_177.insert(EventTime_177.getString());
      FIX::EventType EventType_177(17);
      noEvents_0_1_1.set(EventType_177);
      EvntGrp_NoEvents_177.insert(EventType_177.getString());
      all_values.push_back(EvntGrp_NoEvents_177);

      noSettlOblig_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_177;
      FIX::InstrumentPartyID InstrumentPartyID_177("STRING_1560934099");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_177);
      InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyID_177.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_177('5');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_177);
      InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyIDSource_177.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_177(982060972);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_177);
      InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyRole_177.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_177);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373;
        FIX::InstrumentPartySubID InstrumentPartySubID_373("STRING_1381802654");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_373);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373.insert(InstrumentPartySubID_373.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_373(589120995);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_373);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373.insert(InstrumentPartySubIDType_373.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noSettlOblig_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_197;
      FIX::SecurityAltID SecurityAltID_197("STRING_170041654");
      noSecurityAltID_0_1_0.set(SecurityAltID_197);
      SecAltIDGrp_NoSecurityAltID_197.insert(SecurityAltID_197.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_197("STRING_1480425275");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_197);
      SecAltIDGrp_NoSecurityAltID_197.insert(SecurityAltIDSource_197.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_197);

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_198;
      FIX::SecurityAltID SecurityAltID_198("STRING_485073455");
      noSecurityAltID_0_1_1.set(SecurityAltID_198);
      SecAltIDGrp_NoSecurityAltID_198.insert(SecurityAltID_198.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_198("STRING_561717132");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_198);
      SecAltIDGrp_NoSecurityAltID_198.insert(SecurityAltIDSource_198.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_198);

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_176;
    FIX::SecurityXML SecurityXML_177("XMLDATA_1729439683");
    noSettlOblig_0_0.set(SecurityXML_177);
    FIX::SecurityXMLLen SecurityXMLLen_88(29435883);
    noSettlOblig_0_0.set(SecurityXMLLen_88);
    FIX::SecurityXMLSchema SecurityXMLSchema_88("STRING_1349592175");
    noSettlOblig_0_0.set(SecurityXMLSchema_88);
    SecurityXML_176.insert(SecurityXMLSchema_88.getString());
    all_values.push_back(SecurityXML_176);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_132;
      FIX::PartyID PartyID_132("STRING_1585580053");
      noPartyIDs_0_1_0.set(PartyID_132);
      Parties_NoPartyIDs_132.insert(PartyID_132.getString());
      FIX::PartyIDSource PartyIDSource_132('8');
      noPartyIDs_0_1_0.set(PartyIDSource_132);
      Parties_NoPartyIDs_132.insert(PartyIDSource_132.getString());
      FIX::PartyRole PartyRole_132(51);
      noPartyIDs_0_1_0.set(PartyRole_132);
      Parties_NoPartyIDs_132.insert(PartyRole_132.getString());
      all_values.push_back(Parties_NoPartyIDs_132);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_268;
        FIX::PartySubID PartySubID_268("STRING_92822490");
        noPartySubIDs_0_0_2_0.set(PartySubID_268);
        PtysSubGrp_NoPartySubIDs_268.insert(PartySubID_268.getString());
        FIX::PartySubIDType PartySubIDType_268(20);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_268);
        PtysSubGrp_NoPartySubIDs_268.insert(PartySubIDType_268.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_268);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSettlOblig_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_0;
      FIX::SettlObligSource SettlObligSource_0('2');
      noSettlDetails_0_1_0.set(SettlObligSource_0);
      SettlDetails_NoSettlDetails_0.insert(SettlObligSource_0.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_0);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_46;
        FIX::SettlPartyID SettlPartyID_46("STRING_1588273451");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyID_46.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_46('2');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyIDSource_46.getString());
        FIX::SettlPartyRole SettlPartyRole_46(465637318);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyRole_46.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_46);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_102;
          FIX::SettlPartySubID SettlPartySubID_102("STRING_1741160269");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_102);
          SettlPtysSubGrp_NoSettlPartySubIDs_102.insert(SettlPartySubID_102.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_102(1124817714);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_102);
          SettlPtysSubGrp_NoSettlPartySubIDs_102.insert(SettlPartySubIDType_102.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_102);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_103;
          FIX::SettlPartySubID SettlPartySubID_103("STRING_1144309929");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_103);
          SettlPtysSubGrp_NoSettlPartySubIDs_103.insert(SettlPartySubID_103.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_103(1154610721);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_103);
          SettlPtysSubGrp_NoSettlPartySubIDs_103.insert(SettlPartySubIDType_103.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_103);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_104;
          FIX::SettlPartySubID SettlPartySubID_104("STRING_1659759862");
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubID_104);
          SettlPtysSubGrp_NoSettlPartySubIDs_104.insert(SettlPartySubID_104.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_104(2126370901);
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubIDType_104);
          SettlPtysSubGrp_NoSettlPartySubIDs_104.insert(SettlPartySubIDType_104.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_104);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_47;
        FIX::SettlPartyID SettlPartyID_47("STRING_788081402");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyID_47.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_47('8');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyIDSource_47.getString());
        FIX::SettlPartyRole SettlPartyRole_47(568008248);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyRole_47.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_47);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_105;
          FIX::SettlPartySubID SettlPartySubID_105("STRING_1064120523");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_105);
          SettlPtysSubGrp_NoSettlPartySubIDs_105.insert(SettlPartySubID_105.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_105(2048433524);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_105);
          SettlPtysSubGrp_NoSettlPartySubIDs_105.insert(SettlPartySubIDType_105.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_105);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_106;
          FIX::SettlPartySubID SettlPartySubID_106("STRING_1307161458");
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubID_106);
          SettlPtysSubGrp_NoSettlPartySubIDs_106.insert(SettlPartySubID_106.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_106(1625837655);
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubIDType_106);
          SettlPtysSubGrp_NoSettlPartySubIDs_106.insert(SettlPartySubIDType_106.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_106);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_48;
        FIX::SettlPartyID SettlPartyID_48("STRING_1630389559");
        noSettlPartyIDs_0_0_2_2.set(SettlPartyID_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyID_48.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_48('1');
        noSettlPartyIDs_0_0_2_2.set(SettlPartyIDSource_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyIDSource_48.getString());
        FIX::SettlPartyRole SettlPartyRole_48(827946182);
        noSettlPartyIDs_0_0_2_2.set(SettlPartyRole_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyRole_48.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_48);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_107;
          FIX::SettlPartySubID SettlPartySubID_107("STRING_774693746");
          noSettlPartySubIDs_0_0_2_3_0.set(SettlPartySubID_107);
          SettlPtysSubGrp_NoSettlPartySubIDs_107.insert(SettlPartySubID_107.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_107(161746634);
          noSettlPartySubIDs_0_0_2_3_0.set(SettlPartySubIDType_107);
          SettlPtysSubGrp_NoSettlPartySubIDs_107.insert(SettlPartySubIDType_107.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_107);

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_108;
          FIX::SettlPartySubID SettlPartySubID_108("STRING_1104077614");
          noSettlPartySubIDs_0_0_2_3_1.set(SettlPartySubID_108);
          SettlPtysSubGrp_NoSettlPartySubIDs_108.insert(SettlPartySubID_108.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_108(1009270256);
          noSettlPartySubIDs_0_0_2_3_1.set(SettlPartySubIDType_108);
          SettlPtysSubGrp_NoSettlPartySubIDs_108.insert(SettlPartySubIDType_108.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_108);

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_109;
          FIX::SettlPartySubID SettlPartySubID_109("STRING_254569124");
          noSettlPartySubIDs_0_0_2_3_2.set(SettlPartySubID_109);
          SettlPtysSubGrp_NoSettlPartySubIDs_109.insert(SettlPartySubID_109.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_109(727610826);
          noSettlPartySubIDs_0_0_2_3_2.set(SettlPartySubIDType_109);
          SettlPtysSubGrp_NoSettlPartySubIDs_109.insert(SettlPartySubIDType_109.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_109);

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_2);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_2);
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
    CcyAmt_1.setString("16067502");
    noSettlOblig_0_1.set(CcyAmt_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(CcyAmt_1.getString());
    FIX::Currency Currency_69("CAN");
    noSettlOblig_0_1.set(Currency_69);
    SettlObligationInstructions_NoSettlOblig_1.insert(Currency_69.getString());
    FIX::EffectiveTime EffectiveTime_13(FIX::UTCTIMESTAMP(12, 1, 36, 13, 8, 2004));
    noSettlOblig_0_1.set(EffectiveTime_13);
    SettlObligationInstructions_NoSettlOblig_1.insert(EffectiveTime_13.getString());
    FIX::ExpireTime ExpireTime_22(FIX::UTCTIMESTAMP(10, 39, 57, 10, 5, 2008));
    noSettlOblig_0_1.set(ExpireTime_22);
    SettlObligationInstructions_NoSettlOblig_1.insert(ExpireTime_22.getString());
    FIX::LastUpdateTime LastUpdateTime_4(FIX::UTCTIMESTAMP(16, 50, 48, 27, 4, 2012));
    noSettlOblig_0_1.set(LastUpdateTime_4);
    SettlObligationInstructions_NoSettlOblig_1.insert(LastUpdateTime_4.getString());
    FIX::NetGrossInd NetGrossInd_3(1);
    noSettlOblig_0_1.set(NetGrossInd_3);
    SettlObligationInstructions_NoSettlOblig_1.insert(NetGrossInd_3.getString());
    FIX::SettlCurrAmt SettlCurrAmt_9;
    SettlCurrAmt_9.setString("20213271");
    noSettlOblig_0_1.set(SettlCurrAmt_9);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlCurrAmt_9.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_9;
    SettlCurrFxRate_9.setString("9204355");
    noSettlOblig_0_1.set(SettlCurrFxRate_9);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlCurrFxRate_9.getString());
    FIX::SettlCurrency SettlCurrency_30("CAN");
    noSettlOblig_0_1.set(SettlCurrency_30);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlCurrency_30.getString());
    FIX::SettlDate SettlDate_44("LOCALMKTDATE_1175004701");
    noSettlOblig_0_1.set(SettlDate_44);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlDate_44.getString());
    FIX::SettlObligID SettlObligID_1("STRING_685188148");
    noSettlOblig_0_1.set(SettlObligID_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlObligID_1.getString());
    FIX::SettlObligRefID SettlObligRefID_1("STRING_342380376");
    noSettlOblig_0_1.set(SettlObligRefID_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlObligRefID_1.getString());
    FIX::SettlObligTransType SettlObligTransType_1('C');
    noSettlOblig_0_1.set(SettlObligTransType_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlObligTransType_1.getString());
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_1);

    // Instrument
    multiset<string> Instrument_89;
    FIX::AttachmentPoint AttachmentPoint_89;
    AttachmentPoint_89.setString("99.110000");
    noSettlOblig_0_1.set(AttachmentPoint_89);
    Instrument_89.insert(AttachmentPoint_89.getString());
    FIX::CFICode CFICode_94("STRING_1389920466");
    noSettlOblig_0_1.set(CFICode_94);
    Instrument_89.insert(CFICode_94.getString());
    FIX::CPProgram CPProgram_89(2);
    noSettlOblig_0_1.set(CPProgram_89);
    Instrument_89.insert(CPProgram_89.getString());
    FIX::CPRegType CPRegType_89("STRING_228708992");
    noSettlOblig_0_1.set(CPRegType_89);
    Instrument_89.insert(CPRegType_89.getString());
    FIX::CapPrice CapPrice_89;
    CapPrice_89.setString("376544");
    noSettlOblig_0_1.set(CapPrice_89);
    Instrument_89.insert(CapPrice_89.getString());
    FIX::ContractMultiplier ContractMultiplier_89;
    ContractMultiplier_89.setString("2890967");
    noSettlOblig_0_1.set(ContractMultiplier_89);
    Instrument_89.insert(ContractMultiplier_89.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_89(0);
    noSettlOblig_0_1.set(ContractMultiplierUnit_89);
    Instrument_89.insert(ContractMultiplierUnit_89.getString());
    FIX::ContractSettlMonth ContractSettlMonth_89("MONTHYEAR_1977181941");
    noSettlOblig_0_1.set(ContractSettlMonth_89);
    Instrument_89.insert(ContractSettlMonth_89.getString());
    FIX::CountryOfIssue CountryOfIssue_89("COUNTRY_1576769248");
    noSettlOblig_0_1.set(CountryOfIssue_89);
    Instrument_89.insert(CountryOfIssue_89.getString());
    FIX::CouponPaymentDate CouponPaymentDate_89("LOCALMKTDATE_1999778797");
    noSettlOblig_0_1.set(CouponPaymentDate_89);
    Instrument_89.insert(CouponPaymentDate_89.getString());
    FIX::CouponRate CouponRate_89;
    CouponRate_89.setString("30.720000");
    noSettlOblig_0_1.set(CouponRate_89);
    Instrument_89.insert(CouponRate_89.getString());
    FIX::CreditRating CreditRating_89("STRING_1505039477");
    noSettlOblig_0_1.set(CreditRating_89);
    Instrument_89.insert(CreditRating_89.getString());
    FIX::DatedDate DatedDate_89("LOCALMKTDATE_1388047028");
    noSettlOblig_0_1.set(DatedDate_89);
    Instrument_89.insert(DatedDate_89.getString());
    FIX::DetachmentPoint DetachmentPoint_89;
    DetachmentPoint_89.setString("24.520000");
    noSettlOblig_0_1.set(DetachmentPoint_89);
    Instrument_89.insert(DetachmentPoint_89.getString());
    FIX::EncodedIssuer EncodedIssuer_89("DATA_107914061");
    noSettlOblig_0_1.set(EncodedIssuer_89);
    Instrument_89.insert(EncodedIssuer_89.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_89(1840435781);
    noSettlOblig_0_1.set(EncodedIssuerLen_89);
    Instrument_89.insert(EncodedIssuerLen_89.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_89("DATA_179458060");
    noSettlOblig_0_1.set(EncodedSecurityDesc_89);
    Instrument_89.insert(EncodedSecurityDesc_89.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_89(17950103);
    noSettlOblig_0_1.set(EncodedSecurityDescLen_89);
    Instrument_89.insert(EncodedSecurityDescLen_89.getString());
    FIX::ExerciseStyle ExerciseStyle_89(1);
    noSettlOblig_0_1.set(ExerciseStyle_89);
    Instrument_89.insert(ExerciseStyle_89.getString());
    FIX::Factor Factor_89;
    Factor_89.setString("20497368");
    noSettlOblig_0_1.set(Factor_89);
    Instrument_89.insert(Factor_89.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_89(true);
    noSettlOblig_0_1.set(FlexProductEligibilityIndicator_89);
    Instrument_89.insert(FlexProductEligibilityIndicator_89.getString());
    FIX::FlexibleIndicator FlexibleIndicator_89(true);
    noSettlOblig_0_1.set(FlexibleIndicator_89);
    Instrument_89.insert(FlexibleIndicator_89.getString());
    FIX::FloorPrice FloorPrice_89;
    FloorPrice_89.setString("9032365");
    noSettlOblig_0_1.set(FloorPrice_89);
    Instrument_89.insert(FloorPrice_89.getString());
    FIX::FlowScheduleType FlowScheduleType_89(2);
    noSettlOblig_0_1.set(FlowScheduleType_89);
    Instrument_89.insert(FlowScheduleType_89.getString());
    FIX::InstrRegistry InstrRegistry_89("STRING_1302819413");
    noSettlOblig_0_1.set(InstrRegistry_89);
    Instrument_89.insert(InstrRegistry_89.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_89('8');
    noSettlOblig_0_1.set(InstrmtAssignmentMethod_89);
    Instrument_89.insert(InstrmtAssignmentMethod_89.getString());
    FIX::InterestAccrualDate InterestAccrualDate_89("LOCALMKTDATE_2021540704");
    noSettlOblig_0_1.set(InterestAccrualDate_89);
    Instrument_89.insert(InterestAccrualDate_89.getString());
    FIX::IssueDate IssueDate_89("LOCALMKTDATE_330340466");
    noSettlOblig_0_1.set(IssueDate_89);
    Instrument_89.insert(IssueDate_89.getString());
    FIX::Issuer Issuer_89("STRING_1546002053");
    noSettlOblig_0_1.set(Issuer_89);
    Instrument_89.insert(Issuer_89.getString());
    FIX::ListMethod ListMethod_89(1);
    noSettlOblig_0_1.set(ListMethod_89);
    Instrument_89.insert(ListMethod_89.getString());
    FIX::LocaleOfIssue LocaleOfIssue_89("STRING_2094474002");
    noSettlOblig_0_1.set(LocaleOfIssue_89);
    Instrument_89.insert(LocaleOfIssue_89.getString());
    FIX::MaturityDate MaturityDate_89("LOCALMKTDATE_1770131964");
    noSettlOblig_0_1.set(MaturityDate_89);
    Instrument_89.insert(MaturityDate_89.getString());
    FIX::MaturityMonthYear MaturityMonthYear_89("MONTHYEAR_1606357899");
    noSettlOblig_0_1.set(MaturityMonthYear_89);
    Instrument_89.insert(MaturityMonthYear_89.getString());
    FIX::MaturityTime MaturityTime_89("TZTIMEONLY_103025374");
    noSettlOblig_0_1.set(MaturityTime_89);
    Instrument_89.insert(MaturityTime_89.getString());
    FIX::MinPriceIncrement MinPriceIncrement_89;
    MinPriceIncrement_89.setString("19988409");
    noSettlOblig_0_1.set(MinPriceIncrement_89);
    Instrument_89.insert(MinPriceIncrement_89.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_89;
    MinPriceIncrementAmount_89.setString("16440123");
    noSettlOblig_0_1.set(MinPriceIncrementAmount_89);
    Instrument_89.insert(MinPriceIncrementAmount_89.getString());
    FIX::NTPositionLimit NTPositionLimit_89(392122147);
    noSettlOblig_0_1.set(NTPositionLimit_89);
    Instrument_89.insert(NTPositionLimit_89.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_89;
    NotionalPercentageOutstanding_89.setString("30.960000");
    noSettlOblig_0_1.set(NotionalPercentageOutstanding_89);
    Instrument_89.insert(NotionalPercentageOutstanding_89.getString());
    FIX::OptAttribute OptAttribute_89('1');
    noSettlOblig_0_1.set(OptAttribute_89);
    Instrument_89.insert(OptAttribute_89.getString());
    FIX::OptPayoutAmount OptPayoutAmount_89;
    OptPayoutAmount_89.setString("19688913");
    noSettlOblig_0_1.set(OptPayoutAmount_89);
    Instrument_89.insert(OptPayoutAmount_89.getString());
    FIX::OptPayoutType OptPayoutType_89(1);
    noSettlOblig_0_1.set(OptPayoutType_89);
    Instrument_89.insert(OptPayoutType_89.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_89;
    OriginalNotionalPercentageOutstanding_89.setString("0.320000");
    noSettlOblig_0_1.set(OriginalNotionalPercentageOutstanding_89);
    Instrument_89.insert(OriginalNotionalPercentageOutstanding_89.getString());
    FIX::Pool Pool_89("STRING_1326447224");
    noSettlOblig_0_1.set(Pool_89);
    Instrument_89.insert(Pool_89.getString());
    FIX::PositionLimit PositionLimit_89(302321625);
    noSettlOblig_0_1.set(PositionLimit_89);
    Instrument_89.insert(PositionLimit_89.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_89("STRING_STD");
    noSettlOblig_0_1.set(PriceQuoteMethod_89);
    Instrument_89.insert(PriceQuoteMethod_89.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_89("STRING_1434361285");
    noSettlOblig_0_1.set(PriceUnitOfMeasure_89);
    Instrument_89.insert(PriceUnitOfMeasure_89.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_89;
    PriceUnitOfMeasureQty_89.setString("21427574");
    noSettlOblig_0_1.set(PriceUnitOfMeasureQty_89);
    Instrument_89.insert(PriceUnitOfMeasureQty_89.getString());
    FIX::Product Product_97(9);
    noSettlOblig_0_1.set(Product_97);
    Instrument_89.insert(Product_97.getString());
    FIX::ProductComplex ProductComplex_89("STRING_1452311388");
    noSettlOblig_0_1.set(ProductComplex_89);
    Instrument_89.insert(ProductComplex_89.getString());
    FIX::PutOrCall PutOrCall_89(1);
    noSettlOblig_0_1.set(PutOrCall_89);
    Instrument_89.insert(PutOrCall_89.getString());
    FIX::RedemptionDate RedemptionDate_89("LOCALMKTDATE_1095620124");
    noSettlOblig_0_1.set(RedemptionDate_89);
    Instrument_89.insert(RedemptionDate_89.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_89("STRING_569411226");
    noSettlOblig_0_1.set(RepoCollateralSecurityType_89);
    Instrument_89.insert(RepoCollateralSecurityType_89.getString());
    FIX::RepurchaseRate RepurchaseRate_89;
    RepurchaseRate_89.setString("24.890000");
    noSettlOblig_0_1.set(RepurchaseRate_89);
    Instrument_89.insert(RepurchaseRate_89.getString());
    FIX::RepurchaseTerm RepurchaseTerm_89(1998856708);
    noSettlOblig_0_1.set(RepurchaseTerm_89);
    Instrument_89.insert(RepurchaseTerm_89.getString());
    FIX::RestructuringType RestructuringType_89("STRING_MR");
    noSettlOblig_0_1.set(RestructuringType_89);
    Instrument_89.insert(RestructuringType_89.getString());
    FIX::SecurityDesc SecurityDesc_89("STRING_1304171902");
    noSettlOblig_0_1.set(SecurityDesc_89);
    Instrument_89.insert(SecurityDesc_89.getString());
    FIX::SecurityExchange SecurityExchange_89("EXCHANGE_712186965");
    noSettlOblig_0_1.set(SecurityExchange_89);
    Instrument_89.insert(SecurityExchange_89.getString());
    FIX::SecurityGroup SecurityGroup_89("STRING_1581895250");
    noSettlOblig_0_1.set(SecurityGroup_89);
    Instrument_89.insert(SecurityGroup_89.getString());
    FIX::SecurityID SecurityID_89("STRING_1634512368");
    noSettlOblig_0_1.set(SecurityID_89);
    Instrument_89.insert(SecurityID_89.getString());
    FIX::SecurityIDSource SecurityIDSource_89("STRING_8");
    noSettlOblig_0_1.set(SecurityIDSource_89);
    Instrument_89.insert(SecurityIDSource_89.getString());
    FIX::SecurityStatus SecurityStatus_90("STRING_2");
    noSettlOblig_0_1.set(SecurityStatus_90);
    Instrument_89.insert(SecurityStatus_90.getString());
    FIX::SecuritySubType SecuritySubType_93("STRING_1581502722");
    noSettlOblig_0_1.set(SecuritySubType_93);
    Instrument_89.insert(SecuritySubType_93.getString());
    FIX::SecurityType SecurityType_97("STRING_WITHDRN");
    noSettlOblig_0_1.set(SecurityType_97);
    Instrument_89.insert(SecurityType_97.getString());
    FIX::Seniority Seniority_89("STRING_SD");
    noSettlOblig_0_1.set(Seniority_89);
    Instrument_89.insert(Seniority_89.getString());
    FIX::SettlMethod SettlMethod_89('C');
    noSettlOblig_0_1.set(SettlMethod_89);
    Instrument_89.insert(SettlMethod_89.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_89("STRING_1732194644");
    noSettlOblig_0_1.set(SettleOnOpenFlag_89);
    Instrument_89.insert(SettleOnOpenFlag_89.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_89("STRING_753735601");
    noSettlOblig_0_1.set(StateOrProvinceOfIssue_89);
    Instrument_89.insert(StateOrProvinceOfIssue_89.getString());
    FIX::StrikeCurrency StrikeCurrency_89("JPY");
    noSettlOblig_0_1.set(StrikeCurrency_89);
    Instrument_89.insert(StrikeCurrency_89.getString());
    FIX::StrikeMultiplier StrikeMultiplier_89;
    StrikeMultiplier_89.setString("799625");
    noSettlOblig_0_1.set(StrikeMultiplier_89);
    Instrument_89.insert(StrikeMultiplier_89.getString());
    FIX::StrikePrice StrikePrice_89;
    StrikePrice_89.setString("18980579");
    noSettlOblig_0_1.set(StrikePrice_89);
    Instrument_89.insert(StrikePrice_89.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_89(3);
    noSettlOblig_0_1.set(StrikePriceBoundaryMethod_89);
    Instrument_89.insert(StrikePriceBoundaryMethod_89.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_89;
    StrikePriceBoundaryPrecision_89.setString("25.920000");
    noSettlOblig_0_1.set(StrikePriceBoundaryPrecision_89);
    Instrument_89.insert(StrikePriceBoundaryPrecision_89.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_89(1);
    noSettlOblig_0_1.set(StrikePriceDeterminationMethod_89);
    Instrument_89.insert(StrikePriceDeterminationMethod_89.getString());
    FIX::StrikeValue StrikeValue_89;
    StrikeValue_89.setString("107703");
    noSettlOblig_0_1.set(StrikeValue_89);
    Instrument_89.insert(StrikeValue_89.getString());
    FIX::Symbol Symbol_89("STRING_20727781");
    noSettlOblig_0_1.set(Symbol_89);
    Instrument_89.insert(Symbol_89.getString());
    FIX::SymbolSfx SymbolSfx_89("STRING_WI");
    noSettlOblig_0_1.set(SymbolSfx_89);
    Instrument_89.insert(SymbolSfx_89.getString());
    FIX::TimeUnit TimeUnit_89("STRING_Min");
    noSettlOblig_0_1.set(TimeUnit_89);
    Instrument_89.insert(TimeUnit_89.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_89(3);
    noSettlOblig_0_1.set(UnderlyingPriceDeterminationMethod_89);
    Instrument_89.insert(UnderlyingPriceDeterminationMethod_89.getString());
    FIX::UnitOfMeasure UnitOfMeasure_89("STRING_MWh");
    noSettlOblig_0_1.set(UnitOfMeasure_89);
    Instrument_89.insert(UnitOfMeasure_89.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_89;
    UnitOfMeasureQty_89.setString("17724963");
    noSettlOblig_0_1.set(UnitOfMeasureQty_89);
    Instrument_89.insert(UnitOfMeasureQty_89.getString());
    FIX::ValuationMethod ValuationMethod_89("STRING_CDSD");
    noSettlOblig_0_1.set(ValuationMethod_89);
    Instrument_89.insert(ValuationMethod_89.getString());
    all_values.push_back(Instrument_89);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_167;
      FIX::ComplexEventCondition ComplexEventCondition_167(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_167);
      ComplexEvents_NoComplexEvents_167.insert(ComplexEventCondition_167.getString());
      FIX::ComplexEventPrice ComplexEventPrice_167;
      ComplexEventPrice_167.setString("136042");
      noComplexEvents_1_1_0.set(ComplexEventPrice_167);
      ComplexEvents_NoComplexEvents_167.insert(ComplexEventPrice_167.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_167(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_167);
      ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceBoundaryMethod_167.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_167;
      ComplexEventPriceBoundaryPrecision_167.setString("71.190000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_167);
      ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceBoundaryPrecision_167.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_167(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_167);
      ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceTimeType_167.getString());
      FIX::ComplexEventType ComplexEventType_167(9);
      noComplexEvents_1_1_0.set(ComplexEventType_167);
      ComplexEvents_NoComplexEvents_167.insert(ComplexEventType_167.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_167;
      ComplexOptPayoutAmount_167.setString("4175658");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_167);
      ComplexEvents_NoComplexEvents_167.insert(ComplexOptPayoutAmount_167.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_167);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_335;
        FIX::ComplexEventEndDate ComplexEventEndDate_335(FIX::UTCTIMESTAMP(10, 58, 9, 26, 11, 2004));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_335);
        ComplexEventDates_NoComplexEventDates_335.insert(ComplexEventEndDate_335.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_335(FIX::UTCTIMESTAMP(14, 31, 30, 20, 4, 2002));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_335);
        ComplexEventDates_NoComplexEventDates_335.insert(ComplexEventStartDate_335.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_335);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_673;
          FIX::ComplexEventEndTime ComplexEventEndTime_673(FIX::UTCTIMEONLY(11, 45, 14));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_673);
          ComplexEventTimes_NoComplexEventTimes_673.insert(ComplexEventEndTime_673.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_673(FIX::UTCTIMEONLY(4, 49, 34));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_673);
          ComplexEventTimes_NoComplexEventTimes_673.insert(ComplexEventStartTime_673.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_673);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_674;
          FIX::ComplexEventEndTime ComplexEventEndTime_674(FIX::UTCTIMEONLY(7, 52, 27));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_674);
          ComplexEventTimes_NoComplexEventTimes_674.insert(ComplexEventEndTime_674.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_674(FIX::UTCTIMEONLY(0, 7, 26));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_674);
          ComplexEventTimes_NoComplexEventTimes_674.insert(ComplexEventStartTime_674.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_674);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_675;
          FIX::ComplexEventEndTime ComplexEventEndTime_675(FIX::UTCTIMEONLY(21, 25, 24));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_675);
          ComplexEventTimes_NoComplexEventTimes_675.insert(ComplexEventEndTime_675.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_675(FIX::UTCTIMEONLY(11, 35, 30));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_675);
          ComplexEventTimes_NoComplexEventTimes_675.insert(ComplexEventStartTime_675.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_675);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_336;
        FIX::ComplexEventEndDate ComplexEventEndDate_336(FIX::UTCTIMESTAMP(10, 52, 14, 5, 7, 2007));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_336);
        ComplexEventDates_NoComplexEventDates_336.insert(ComplexEventEndDate_336.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_336(FIX::UTCTIMESTAMP(5, 2, 4, 27, 7, 2015));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_336);
        ComplexEventDates_NoComplexEventDates_336.insert(ComplexEventStartDate_336.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_336);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_676;
          FIX::ComplexEventEndTime ComplexEventEndTime_676(FIX::UTCTIMEONLY(21, 37, 50));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_676);
          ComplexEventTimes_NoComplexEventTimes_676.insert(ComplexEventEndTime_676.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_676(FIX::UTCTIMEONLY(13, 49, 3));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_676);
          ComplexEventTimes_NoComplexEventTimes_676.insert(ComplexEventStartTime_676.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_676);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_337;
        FIX::ComplexEventEndDate ComplexEventEndDate_337(FIX::UTCTIMESTAMP(22, 20, 8, 5, 8, 2005));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_337);
        ComplexEventDates_NoComplexEventDates_337.insert(ComplexEventEndDate_337.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_337(FIX::UTCTIMESTAMP(1, 33, 59, 23, 4, 2017));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_337);
        ComplexEventDates_NoComplexEventDates_337.insert(ComplexEventStartDate_337.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_337);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_677;
          FIX::ComplexEventEndTime ComplexEventEndTime_677(FIX::UTCTIMEONLY(15, 2, 13));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_677);
          ComplexEventTimes_NoComplexEventTimes_677.insert(ComplexEventEndTime_677.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_677(FIX::UTCTIMEONLY(8, 59, 47));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_677);
          ComplexEventTimes_NoComplexEventTimes_677.insert(ComplexEventStartTime_677.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_677);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_168;
      FIX::ComplexEventCondition ComplexEventCondition_168(2);
      noComplexEvents_1_1_1.set(ComplexEventCondition_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventCondition_168.getString());
      FIX::ComplexEventPrice ComplexEventPrice_168;
      ComplexEventPrice_168.setString("14505198");
      noComplexEvents_1_1_1.set(ComplexEventPrice_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventPrice_168.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_168(5);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceBoundaryMethod_168.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_168;
      ComplexEventPriceBoundaryPrecision_168.setString("19.210000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceBoundaryPrecision_168.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_168(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceTimeType_168.getString());
      FIX::ComplexEventType ComplexEventType_168(9);
      noComplexEvents_1_1_1.set(ComplexEventType_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexEventType_168.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_168;
      ComplexOptPayoutAmount_168.setString("8242940");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_168);
      ComplexEvents_NoComplexEvents_168.insert(ComplexOptPayoutAmount_168.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_168);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_338;
        FIX::ComplexEventEndDate ComplexEventEndDate_338(FIX::UTCTIMESTAMP(16, 11, 37, 13, 8, 2007));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_338);
        ComplexEventDates_NoComplexEventDates_338.insert(ComplexEventEndDate_338.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_338(FIX::UTCTIMESTAMP(0, 46, 44, 20, 6, 2006));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_338);
        ComplexEventDates_NoComplexEventDates_338.insert(ComplexEventStartDate_338.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_338);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_678;
          FIX::ComplexEventEndTime ComplexEventEndTime_678(FIX::UTCTIMEONLY(9, 39, 28));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_678);
          ComplexEventTimes_NoComplexEventTimes_678.insert(ComplexEventEndTime_678.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_678(FIX::UTCTIMEONLY(23, 27, 42));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_678);
          ComplexEventTimes_NoComplexEventTimes_678.insert(ComplexEventStartTime_678.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_678);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_169;
      FIX::ComplexEventCondition ComplexEventCondition_169(1);
      noComplexEvents_1_1_2.set(ComplexEventCondition_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventCondition_169.getString());
      FIX::ComplexEventPrice ComplexEventPrice_169;
      ComplexEventPrice_169.setString("8190939");
      noComplexEvents_1_1_2.set(ComplexEventPrice_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventPrice_169.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_169(2);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceBoundaryMethod_169.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_169;
      ComplexEventPriceBoundaryPrecision_169.setString("75.870000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceBoundaryPrecision_169.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_169(1);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceTimeType_169.getString());
      FIX::ComplexEventType ComplexEventType_169(1);
      noComplexEvents_1_1_2.set(ComplexEventType_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexEventType_169.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_169;
      ComplexOptPayoutAmount_169.setString("19885316");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_169);
      ComplexEvents_NoComplexEvents_169.insert(ComplexOptPayoutAmount_169.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_169);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_339;
        FIX::ComplexEventEndDate ComplexEventEndDate_339(FIX::UTCTIMESTAMP(21, 30, 57, 7, 2, 2008));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_339);
        ComplexEventDates_NoComplexEventDates_339.insert(ComplexEventEndDate_339.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_339(FIX::UTCTIMESTAMP(6, 49, 28, 2, 11, 2016));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_339);
        ComplexEventDates_NoComplexEventDates_339.insert(ComplexEventStartDate_339.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_339);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_679;
          FIX::ComplexEventEndTime ComplexEventEndTime_679(FIX::UTCTIMEONLY(23, 45, 37));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_679);
          ComplexEventTimes_NoComplexEventTimes_679.insert(ComplexEventEndTime_679.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_679(FIX::UTCTIMEONLY(13, 56, 32));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_679);
          ComplexEventTimes_NoComplexEventTimes_679.insert(ComplexEventStartTime_679.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_679);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_340;
        FIX::ComplexEventEndDate ComplexEventEndDate_340(FIX::UTCTIMESTAMP(23, 30, 39, 18, 2, 2002));
        noComplexEventDates_1_2_2_1.set(ComplexEventEndDate_340);
        ComplexEventDates_NoComplexEventDates_340.insert(ComplexEventEndDate_340.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_340(FIX::UTCTIMESTAMP(9, 30, 44, 7, 6, 2013));
        noComplexEventDates_1_2_2_1.set(ComplexEventStartDate_340);
        ComplexEventDates_NoComplexEventDates_340.insert(ComplexEventStartDate_340.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_340);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_680;
          FIX::ComplexEventEndTime ComplexEventEndTime_680(FIX::UTCTIMEONLY(19, 6, 41));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventEndTime_680);
          ComplexEventTimes_NoComplexEventTimes_680.insert(ComplexEventEndTime_680.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_680(FIX::UTCTIMEONLY(17, 20, 0));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventStartTime_680);
          ComplexEventTimes_NoComplexEventTimes_680.insert(ComplexEventStartTime_680.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_680);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_681;
          FIX::ComplexEventEndTime ComplexEventEndTime_681(FIX::UTCTIMEONLY(7, 37, 23));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventEndTime_681);
          ComplexEventTimes_NoComplexEventTimes_681.insert(ComplexEventEndTime_681.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_681(FIX::UTCTIMEONLY(6, 19, 22));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventStartTime_681);
          ComplexEventTimes_NoComplexEventTimes_681.insert(ComplexEventStartTime_681.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_681);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_178;
      FIX::EventDate EventDate_178("LOCALMKTDATE_1638153286");
      noEvents_1_1_0.set(EventDate_178);
      EvntGrp_NoEvents_178.insert(EventDate_178.getString());
      FIX::EventPx EventPx_178;
      EventPx_178.setString("10444402");
      noEvents_1_1_0.set(EventPx_178);
      EvntGrp_NoEvents_178.insert(EventPx_178.getString());
      FIX::EventText EventText_178("STRING_478143065");
      noEvents_1_1_0.set(EventText_178);
      EvntGrp_NoEvents_178.insert(EventText_178.getString());
      FIX::EventTime EventTime_178(FIX::UTCTIMESTAMP(10, 13, 54, 4, 12, 2014));
      noEvents_1_1_0.set(EventTime_178);
      EvntGrp_NoEvents_178.insert(EventTime_178.getString());
      FIX::EventType EventType_178(99);
      noEvents_1_1_0.set(EventType_178);
      EvntGrp_NoEvents_178.insert(EventType_178.getString());
      all_values.push_back(EvntGrp_NoEvents_178);

      noSettlOblig_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_179;
      FIX::EventDate EventDate_179("LOCALMKTDATE_1803314104");
      noEvents_1_1_1.set(EventDate_179);
      EvntGrp_NoEvents_179.insert(EventDate_179.getString());
      FIX::EventPx EventPx_179;
      EventPx_179.setString("1027926");
      noEvents_1_1_1.set(EventPx_179);
      EvntGrp_NoEvents_179.insert(EventPx_179.getString());
      FIX::EventText EventText_179("STRING_59716856");
      noEvents_1_1_1.set(EventText_179);
      EvntGrp_NoEvents_179.insert(EventText_179.getString());
      FIX::EventTime EventTime_179(FIX::UTCTIMESTAMP(3, 3, 43, 12, 1, 2015));
      noEvents_1_1_1.set(EventTime_179);
      EvntGrp_NoEvents_179.insert(EventTime_179.getString());
      FIX::EventType EventType_179(5);
      noEvents_1_1_1.set(EventType_179);
      EvntGrp_NoEvents_179.insert(EventType_179.getString());
      all_values.push_back(EvntGrp_NoEvents_179);

      noSettlOblig_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_178;
      FIX::InstrumentPartyID InstrumentPartyID_178("STRING_1194846070");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_178);
      InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyID_178.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_178('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_178);
      InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyIDSource_178.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_178(758506377);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_178);
      InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyRole_178.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_178);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374;
        FIX::InstrumentPartySubID InstrumentPartySubID_374("STRING_767813308");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_374);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374.insert(InstrumentPartySubID_374.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_374(460454528);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_374);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374.insert(InstrumentPartySubIDType_374.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noSettlOblig_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_179;
      FIX::InstrumentPartyID InstrumentPartyID_179("STRING_834848895");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_179);
      InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyID_179.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_179('2');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_179);
      InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyIDSource_179.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_179(2098607814);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_179);
      InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyRole_179.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_179);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375;
        FIX::InstrumentPartySubID InstrumentPartySubID_375("STRING_465821819");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_375);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375.insert(InstrumentPartySubID_375.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_375(1487874446);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_375);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375.insert(InstrumentPartySubIDType_375.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noSettlOblig_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_199;
      FIX::SecurityAltID SecurityAltID_199("STRING_2043290533");
      noSecurityAltID_1_1_0.set(SecurityAltID_199);
      SecAltIDGrp_NoSecurityAltID_199.insert(SecurityAltID_199.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_199("STRING_971079792");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_199);
      SecAltIDGrp_NoSecurityAltID_199.insert(SecurityAltIDSource_199.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_199);

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_200;
      FIX::SecurityAltID SecurityAltID_200("STRING_648961446");
      noSecurityAltID_1_1_1.set(SecurityAltID_200);
      SecAltIDGrp_NoSecurityAltID_200.insert(SecurityAltID_200.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_200("STRING_458592460");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_200);
      SecAltIDGrp_NoSecurityAltID_200.insert(SecurityAltIDSource_200.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_200);

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_201;
      FIX::SecurityAltID SecurityAltID_201("STRING_853022322");
      noSecurityAltID_1_1_2.set(SecurityAltID_201);
      SecAltIDGrp_NoSecurityAltID_201.insert(SecurityAltID_201.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_201("STRING_1131674385");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_201);
      SecAltIDGrp_NoSecurityAltID_201.insert(SecurityAltIDSource_201.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_201);

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_178;
    FIX::SecurityXML SecurityXML_179("XMLDATA_114422917");
    noSettlOblig_0_1.set(SecurityXML_179);
    FIX::SecurityXMLLen SecurityXMLLen_89(955814930);
    noSettlOblig_0_1.set(SecurityXMLLen_89);
    FIX::SecurityXMLSchema SecurityXMLSchema_89("STRING_1191391242");
    noSettlOblig_0_1.set(SecurityXMLSchema_89);
    SecurityXML_178.insert(SecurityXMLSchema_89.getString());
    all_values.push_back(SecurityXML_178);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_133;
      FIX::PartyID PartyID_133("STRING_359345061");
      noPartyIDs_1_1_0.set(PartyID_133);
      Parties_NoPartyIDs_133.insert(PartyID_133.getString());
      FIX::PartyIDSource PartyIDSource_133('D');
      noPartyIDs_1_1_0.set(PartyIDSource_133);
      Parties_NoPartyIDs_133.insert(PartyIDSource_133.getString());
      FIX::PartyRole PartyRole_133(67);
      noPartyIDs_1_1_0.set(PartyRole_133);
      Parties_NoPartyIDs_133.insert(PartyRole_133.getString());
      all_values.push_back(Parties_NoPartyIDs_133);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_269;
        FIX::PartySubID PartySubID_269("STRING_1663141825");
        noPartySubIDs_1_0_2_0.set(PartySubID_269);
        PtysSubGrp_NoPartySubIDs_269.insert(PartySubID_269.getString());
        FIX::PartySubIDType PartySubIDType_269(30);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_269);
        PtysSubGrp_NoPartySubIDs_269.insert(PartySubIDType_269.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_269);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noSettlOblig_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_134;
      FIX::PartyID PartyID_134("STRING_11228162");
      noPartyIDs_1_1_1.set(PartyID_134);
      Parties_NoPartyIDs_134.insert(PartyID_134.getString());
      FIX::PartyIDSource PartyIDSource_134('1');
      noPartyIDs_1_1_1.set(PartyIDSource_134);
      Parties_NoPartyIDs_134.insert(PartyIDSource_134.getString());
      FIX::PartyRole PartyRole_134(49);
      noPartyIDs_1_1_1.set(PartyRole_134);
      Parties_NoPartyIDs_134.insert(PartyRole_134.getString());
      all_values.push_back(Parties_NoPartyIDs_134);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_270;
        FIX::PartySubID PartySubID_270("STRING_300350328");
        noPartySubIDs_1_1_2_0.set(PartySubID_270);
        PtysSubGrp_NoPartySubIDs_270.insert(PartySubID_270.getString());
        FIX::PartySubIDType PartySubIDType_270(18);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_270);
        PtysSubGrp_NoPartySubIDs_270.insert(PartySubIDType_270.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_270);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_271;
        FIX::PartySubID PartySubID_271("STRING_273545716");
        noPartySubIDs_1_1_2_1.set(PartySubID_271);
        PtysSubGrp_NoPartySubIDs_271.insert(PartySubID_271.getString());
        FIX::PartySubIDType PartySubIDType_271(21);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_271);
        PtysSubGrp_NoPartySubIDs_271.insert(PartySubIDType_271.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_271);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_272;
        FIX::PartySubID PartySubID_272("STRING_573888342");
        noPartySubIDs_1_1_2_2.set(PartySubID_272);
        PtysSubGrp_NoPartySubIDs_272.insert(PartySubID_272.getString());
        FIX::PartySubIDType PartySubIDType_272(3);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_272);
        PtysSubGrp_NoPartySubIDs_272.insert(PartySubIDType_272.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_272);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noSettlOblig_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_1_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_1;
      FIX::SettlObligSource SettlObligSource_1('2');
      noSettlDetails_1_1_0.set(SettlObligSource_1);
      SettlDetails_NoSettlDetails_1.insert(SettlObligSource_1.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_1);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_49;
        FIX::SettlPartyID SettlPartyID_49("STRING_52319820");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyID_49.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_49('1');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyIDSource_49.getString());
        FIX::SettlPartyRole SettlPartyRole_49(622853175);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyRole_49.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_49);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_110;
          FIX::SettlPartySubID SettlPartySubID_110("STRING_267449183");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_110);
          SettlPtysSubGrp_NoSettlPartySubIDs_110.insert(SettlPartySubID_110.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_110(1081445636);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_110);
          SettlPtysSubGrp_NoSettlPartySubIDs_110.insert(SettlPartySubIDType_110.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_110);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_111;
          FIX::SettlPartySubID SettlPartySubID_111("STRING_1876421935");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_111);
          SettlPtysSubGrp_NoSettlPartySubIDs_111.insert(SettlPartySubID_111.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_111(1399123569);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_111);
          SettlPtysSubGrp_NoSettlPartySubIDs_111.insert(SettlPartySubIDType_111.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_111);

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_50;
        FIX::SettlPartyID SettlPartyID_50("STRING_1195868553");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyID_50.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_50('6');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyIDSource_50.getString());
        FIX::SettlPartyRole SettlPartyRole_50(443031163);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyRole_50.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_50);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_112;
          FIX::SettlPartySubID SettlPartySubID_112("STRING_1044098278");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_112);
          SettlPtysSubGrp_NoSettlPartySubIDs_112.insert(SettlPartySubID_112.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_112(1063770680);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_112);
          SettlPtysSubGrp_NoSettlPartySubIDs_112.insert(SettlPartySubIDType_112.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_112);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_113;
          FIX::SettlPartySubID SettlPartySubID_113("STRING_1084066181");
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubID_113);
          SettlPtysSubGrp_NoSettlPartySubIDs_113.insert(SettlPartySubID_113.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_113(1323103244);
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubIDType_113);
          SettlPtysSubGrp_NoSettlPartySubIDs_113.insert(SettlPartySubIDType_113.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_113);

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      noSettlOblig_0_1.addGroup(noSettlDetails_1_1_0);
    }
    msg.addGroup(noSettlOblig_0_1);
  }
  {
    FIX50SP2::SettlementObligationReport::NoSettlOblig noSettlOblig_0_2;
    // SettlObligationInstructions.NoSettlOblig
    multiset<string> SettlObligationInstructions_NoSettlOblig_2;
    FIX::CcyAmt CcyAmt_2;
    CcyAmt_2.setString("5794288");
    noSettlOblig_0_2.set(CcyAmt_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(CcyAmt_2.getString());
    FIX::Currency Currency_70("JPY");
    noSettlOblig_0_2.set(Currency_70);
    SettlObligationInstructions_NoSettlOblig_2.insert(Currency_70.getString());
    FIX::EffectiveTime EffectiveTime_14(FIX::UTCTIMESTAMP(4, 34, 16, 0, 3, 2000));
    noSettlOblig_0_2.set(EffectiveTime_14);
    SettlObligationInstructions_NoSettlOblig_2.insert(EffectiveTime_14.getString());
    FIX::ExpireTime ExpireTime_23(FIX::UTCTIMESTAMP(1, 54, 25, 8, 7, 2000));
    noSettlOblig_0_2.set(ExpireTime_23);
    SettlObligationInstructions_NoSettlOblig_2.insert(ExpireTime_23.getString());
    FIX::LastUpdateTime LastUpdateTime_5(FIX::UTCTIMESTAMP(23, 5, 15, 23, 7, 2004));
    noSettlOblig_0_2.set(LastUpdateTime_5);
    SettlObligationInstructions_NoSettlOblig_2.insert(LastUpdateTime_5.getString());
    FIX::NetGrossInd NetGrossInd_4(1);
    noSettlOblig_0_2.set(NetGrossInd_4);
    SettlObligationInstructions_NoSettlOblig_2.insert(NetGrossInd_4.getString());
    FIX::SettlCurrAmt SettlCurrAmt_10;
    SettlCurrAmt_10.setString("13484905");
    noSettlOblig_0_2.set(SettlCurrAmt_10);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlCurrAmt_10.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_10;
    SettlCurrFxRate_10.setString("6615442");
    noSettlOblig_0_2.set(SettlCurrFxRate_10);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlCurrFxRate_10.getString());
    FIX::SettlCurrency SettlCurrency_31("EUR");
    noSettlOblig_0_2.set(SettlCurrency_31);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlCurrency_31.getString());
    FIX::SettlDate SettlDate_45("LOCALMKTDATE_1745610393");
    noSettlOblig_0_2.set(SettlDate_45);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlDate_45.getString());
    FIX::SettlObligID SettlObligID_2("STRING_1456002179");
    noSettlOblig_0_2.set(SettlObligID_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlObligID_2.getString());
    FIX::SettlObligRefID SettlObligRefID_2("STRING_844206398");
    noSettlOblig_0_2.set(SettlObligRefID_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlObligRefID_2.getString());
    FIX::SettlObligTransType SettlObligTransType_2('R');
    noSettlOblig_0_2.set(SettlObligTransType_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlObligTransType_2.getString());
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_2);

    // Instrument
    multiset<string> Instrument_90;
    FIX::AttachmentPoint AttachmentPoint_90;
    AttachmentPoint_90.setString("99.370000");
    noSettlOblig_0_2.set(AttachmentPoint_90);
    Instrument_90.insert(AttachmentPoint_90.getString());
    FIX::CFICode CFICode_95("STRING_965479206");
    noSettlOblig_0_2.set(CFICode_95);
    Instrument_90.insert(CFICode_95.getString());
    FIX::CPProgram CPProgram_90(99);
    noSettlOblig_0_2.set(CPProgram_90);
    Instrument_90.insert(CPProgram_90.getString());
    FIX::CPRegType CPRegType_90("STRING_1482913751");
    noSettlOblig_0_2.set(CPRegType_90);
    Instrument_90.insert(CPRegType_90.getString());
    FIX::CapPrice CapPrice_90;
    CapPrice_90.setString("13871023");
    noSettlOblig_0_2.set(CapPrice_90);
    Instrument_90.insert(CapPrice_90.getString());
    FIX::ContractMultiplier ContractMultiplier_90;
    ContractMultiplier_90.setString("74447");
    noSettlOblig_0_2.set(ContractMultiplier_90);
    Instrument_90.insert(ContractMultiplier_90.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_90(2);
    noSettlOblig_0_2.set(ContractMultiplierUnit_90);
    Instrument_90.insert(ContractMultiplierUnit_90.getString());
    FIX::ContractSettlMonth ContractSettlMonth_90("MONTHYEAR_422046686");
    noSettlOblig_0_2.set(ContractSettlMonth_90);
    Instrument_90.insert(ContractSettlMonth_90.getString());
    FIX::CountryOfIssue CountryOfIssue_90("COUNTRY_1469633401");
    noSettlOblig_0_2.set(CountryOfIssue_90);
    Instrument_90.insert(CountryOfIssue_90.getString());
    FIX::CouponPaymentDate CouponPaymentDate_90("LOCALMKTDATE_1823873635");
    noSettlOblig_0_2.set(CouponPaymentDate_90);
    Instrument_90.insert(CouponPaymentDate_90.getString());
    FIX::CouponRate CouponRate_90;
    CouponRate_90.setString("0.520000");
    noSettlOblig_0_2.set(CouponRate_90);
    Instrument_90.insert(CouponRate_90.getString());
    FIX::CreditRating CreditRating_90("STRING_1090032258");
    noSettlOblig_0_2.set(CreditRating_90);
    Instrument_90.insert(CreditRating_90.getString());
    FIX::DatedDate DatedDate_90("LOCALMKTDATE_1778270279");
    noSettlOblig_0_2.set(DatedDate_90);
    Instrument_90.insert(DatedDate_90.getString());
    FIX::DetachmentPoint DetachmentPoint_90;
    DetachmentPoint_90.setString("68.870000");
    noSettlOblig_0_2.set(DetachmentPoint_90);
    Instrument_90.insert(DetachmentPoint_90.getString());
    FIX::EncodedIssuer EncodedIssuer_90("DATA_328918852");
    noSettlOblig_0_2.set(EncodedIssuer_90);
    Instrument_90.insert(EncodedIssuer_90.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_90(208036450);
    noSettlOblig_0_2.set(EncodedIssuerLen_90);
    Instrument_90.insert(EncodedIssuerLen_90.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_90("DATA_790706038");
    noSettlOblig_0_2.set(EncodedSecurityDesc_90);
    Instrument_90.insert(EncodedSecurityDesc_90.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_90(1982738278);
    noSettlOblig_0_2.set(EncodedSecurityDescLen_90);
    Instrument_90.insert(EncodedSecurityDescLen_90.getString());
    FIX::ExerciseStyle ExerciseStyle_90(2);
    noSettlOblig_0_2.set(ExerciseStyle_90);
    Instrument_90.insert(ExerciseStyle_90.getString());
    FIX::Factor Factor_90;
    Factor_90.setString("13422371");
    noSettlOblig_0_2.set(Factor_90);
    Instrument_90.insert(Factor_90.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_90(true);
    noSettlOblig_0_2.set(FlexProductEligibilityIndicator_90);
    Instrument_90.insert(FlexProductEligibilityIndicator_90.getString());
    FIX::FlexibleIndicator FlexibleIndicator_90(true);
    noSettlOblig_0_2.set(FlexibleIndicator_90);
    Instrument_90.insert(FlexibleIndicator_90.getString());
    FIX::FloorPrice FloorPrice_90;
    FloorPrice_90.setString("4310377");
    noSettlOblig_0_2.set(FloorPrice_90);
    Instrument_90.insert(FloorPrice_90.getString());
    FIX::FlowScheduleType FlowScheduleType_90(1);
    noSettlOblig_0_2.set(FlowScheduleType_90);
    Instrument_90.insert(FlowScheduleType_90.getString());
    FIX::InstrRegistry InstrRegistry_90("STRING_1087872830");
    noSettlOblig_0_2.set(InstrRegistry_90);
    Instrument_90.insert(InstrRegistry_90.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_90('5');
    noSettlOblig_0_2.set(InstrmtAssignmentMethod_90);
    Instrument_90.insert(InstrmtAssignmentMethod_90.getString());
    FIX::InterestAccrualDate InterestAccrualDate_90("LOCALMKTDATE_206498379");
    noSettlOblig_0_2.set(InterestAccrualDate_90);
    Instrument_90.insert(InterestAccrualDate_90.getString());
    FIX::IssueDate IssueDate_90("LOCALMKTDATE_685999575");
    noSettlOblig_0_2.set(IssueDate_90);
    Instrument_90.insert(IssueDate_90.getString());
    FIX::Issuer Issuer_90("STRING_2019938896");
    noSettlOblig_0_2.set(Issuer_90);
    Instrument_90.insert(Issuer_90.getString());
    FIX::ListMethod ListMethod_90(0);
    noSettlOblig_0_2.set(ListMethod_90);
    Instrument_90.insert(ListMethod_90.getString());
    FIX::LocaleOfIssue LocaleOfIssue_90("STRING_803366806");
    noSettlOblig_0_2.set(LocaleOfIssue_90);
    Instrument_90.insert(LocaleOfIssue_90.getString());
    FIX::MaturityDate MaturityDate_90("LOCALMKTDATE_515305185");
    noSettlOblig_0_2.set(MaturityDate_90);
    Instrument_90.insert(MaturityDate_90.getString());
    FIX::MaturityMonthYear MaturityMonthYear_90("MONTHYEAR_2016183984");
    noSettlOblig_0_2.set(MaturityMonthYear_90);
    Instrument_90.insert(MaturityMonthYear_90.getString());
    FIX::MaturityTime MaturityTime_90("TZTIMEONLY_2069994897");
    noSettlOblig_0_2.set(MaturityTime_90);
    Instrument_90.insert(MaturityTime_90.getString());
    FIX::MinPriceIncrement MinPriceIncrement_90;
    MinPriceIncrement_90.setString("19982189");
    noSettlOblig_0_2.set(MinPriceIncrement_90);
    Instrument_90.insert(MinPriceIncrement_90.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_90;
    MinPriceIncrementAmount_90.setString("12558026");
    noSettlOblig_0_2.set(MinPriceIncrementAmount_90);
    Instrument_90.insert(MinPriceIncrementAmount_90.getString());
    FIX::NTPositionLimit NTPositionLimit_90(2077439648);
    noSettlOblig_0_2.set(NTPositionLimit_90);
    Instrument_90.insert(NTPositionLimit_90.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_90;
    NotionalPercentageOutstanding_90.setString("49.210000");
    noSettlOblig_0_2.set(NotionalPercentageOutstanding_90);
    Instrument_90.insert(NotionalPercentageOutstanding_90.getString());
    FIX::OptAttribute OptAttribute_90('1');
    noSettlOblig_0_2.set(OptAttribute_90);
    Instrument_90.insert(OptAttribute_90.getString());
    FIX::OptPayoutAmount OptPayoutAmount_90;
    OptPayoutAmount_90.setString("13995894");
    noSettlOblig_0_2.set(OptPayoutAmount_90);
    Instrument_90.insert(OptPayoutAmount_90.getString());
    FIX::OptPayoutType OptPayoutType_90(1);
    noSettlOblig_0_2.set(OptPayoutType_90);
    Instrument_90.insert(OptPayoutType_90.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_90;
    OriginalNotionalPercentageOutstanding_90.setString("94.180000");
    noSettlOblig_0_2.set(OriginalNotionalPercentageOutstanding_90);
    Instrument_90.insert(OriginalNotionalPercentageOutstanding_90.getString());
    FIX::Pool Pool_90("STRING_342138012");
    noSettlOblig_0_2.set(Pool_90);
    Instrument_90.insert(Pool_90.getString());
    FIX::PositionLimit PositionLimit_90(1754435187);
    noSettlOblig_0_2.set(PositionLimit_90);
    Instrument_90.insert(PositionLimit_90.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_90("STRING_INX");
    noSettlOblig_0_2.set(PriceQuoteMethod_90);
    Instrument_90.insert(PriceQuoteMethod_90.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_90("STRING_671056864");
    noSettlOblig_0_2.set(PriceUnitOfMeasure_90);
    Instrument_90.insert(PriceUnitOfMeasure_90.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_90;
    PriceUnitOfMeasureQty_90.setString("19624716");
    noSettlOblig_0_2.set(PriceUnitOfMeasureQty_90);
    Instrument_90.insert(PriceUnitOfMeasureQty_90.getString());
    FIX::Product Product_98(11);
    noSettlOblig_0_2.set(Product_98);
    Instrument_90.insert(Product_98.getString());
    FIX::ProductComplex ProductComplex_90("STRING_506311494");
    noSettlOblig_0_2.set(ProductComplex_90);
    Instrument_90.insert(ProductComplex_90.getString());
    FIX::PutOrCall PutOrCall_90(0);
    noSettlOblig_0_2.set(PutOrCall_90);
    Instrument_90.insert(PutOrCall_90.getString());
    FIX::RedemptionDate RedemptionDate_90("LOCALMKTDATE_1800342173");
    noSettlOblig_0_2.set(RedemptionDate_90);
    Instrument_90.insert(RedemptionDate_90.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_90("STRING_1247025471");
    noSettlOblig_0_2.set(RepoCollateralSecurityType_90);
    Instrument_90.insert(RepoCollateralSecurityType_90.getString());
    FIX::RepurchaseRate RepurchaseRate_90;
    RepurchaseRate_90.setString("85.140000");
    noSettlOblig_0_2.set(RepurchaseRate_90);
    Instrument_90.insert(RepurchaseRate_90.getString());
    FIX::RepurchaseTerm RepurchaseTerm_90(83896307);
    noSettlOblig_0_2.set(RepurchaseTerm_90);
    Instrument_90.insert(RepurchaseTerm_90.getString());
    FIX::RestructuringType RestructuringType_90("STRING_MR");
    noSettlOblig_0_2.set(RestructuringType_90);
    Instrument_90.insert(RestructuringType_90.getString());
    FIX::SecurityDesc SecurityDesc_90("STRING_1048437697");
    noSettlOblig_0_2.set(SecurityDesc_90);
    Instrument_90.insert(SecurityDesc_90.getString());
    FIX::SecurityExchange SecurityExchange_90("EXCHANGE_647833024");
    noSettlOblig_0_2.set(SecurityExchange_90);
    Instrument_90.insert(SecurityExchange_90.getString());
    FIX::SecurityGroup SecurityGroup_90("STRING_1395244688");
    noSettlOblig_0_2.set(SecurityGroup_90);
    Instrument_90.insert(SecurityGroup_90.getString());
    FIX::SecurityID SecurityID_90("STRING_1734437272");
    noSettlOblig_0_2.set(SecurityID_90);
    Instrument_90.insert(SecurityID_90.getString());
    FIX::SecurityIDSource SecurityIDSource_90("STRING_L");
    noSettlOblig_0_2.set(SecurityIDSource_90);
    Instrument_90.insert(SecurityIDSource_90.getString());
    FIX::SecurityStatus SecurityStatus_91("STRING_1");
    noSettlOblig_0_2.set(SecurityStatus_91);
    Instrument_90.insert(SecurityStatus_91.getString());
    FIX::SecuritySubType SecuritySubType_94("STRING_390320430");
    noSettlOblig_0_2.set(SecuritySubType_94);
    Instrument_90.insert(SecuritySubType_94.getString());
    FIX::SecurityType SecurityType_98("STRING_MPO");
    noSettlOblig_0_2.set(SecurityType_98);
    Instrument_90.insert(SecurityType_98.getString());
    FIX::Seniority Seniority_90("STRING_SB");
    noSettlOblig_0_2.set(Seniority_90);
    Instrument_90.insert(Seniority_90.getString());
    FIX::SettlMethod SettlMethod_90('P');
    noSettlOblig_0_2.set(SettlMethod_90);
    Instrument_90.insert(SettlMethod_90.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_90("STRING_886328745");
    noSettlOblig_0_2.set(SettleOnOpenFlag_90);
    Instrument_90.insert(SettleOnOpenFlag_90.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_90("STRING_1422968834");
    noSettlOblig_0_2.set(StateOrProvinceOfIssue_90);
    Instrument_90.insert(StateOrProvinceOfIssue_90.getString());
    FIX::StrikeCurrency StrikeCurrency_90("GBP");
    noSettlOblig_0_2.set(StrikeCurrency_90);
    Instrument_90.insert(StrikeCurrency_90.getString());
    FIX::StrikeMultiplier StrikeMultiplier_90;
    StrikeMultiplier_90.setString("9533345");
    noSettlOblig_0_2.set(StrikeMultiplier_90);
    Instrument_90.insert(StrikeMultiplier_90.getString());
    FIX::StrikePrice StrikePrice_90;
    StrikePrice_90.setString("16423770");
    noSettlOblig_0_2.set(StrikePrice_90);
    Instrument_90.insert(StrikePrice_90.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_90(1);
    noSettlOblig_0_2.set(StrikePriceBoundaryMethod_90);
    Instrument_90.insert(StrikePriceBoundaryMethod_90.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_90;
    StrikePriceBoundaryPrecision_90.setString("3.210000");
    noSettlOblig_0_2.set(StrikePriceBoundaryPrecision_90);
    Instrument_90.insert(StrikePriceBoundaryPrecision_90.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_90(2);
    noSettlOblig_0_2.set(StrikePriceDeterminationMethod_90);
    Instrument_90.insert(StrikePriceDeterminationMethod_90.getString());
    FIX::StrikeValue StrikeValue_90;
    StrikeValue_90.setString("7692201");
    noSettlOblig_0_2.set(StrikeValue_90);
    Instrument_90.insert(StrikeValue_90.getString());
    FIX::Symbol Symbol_90("STRING_320019330");
    noSettlOblig_0_2.set(Symbol_90);
    Instrument_90.insert(Symbol_90.getString());
    FIX::SymbolSfx SymbolSfx_90("STRING_WI");
    noSettlOblig_0_2.set(SymbolSfx_90);
    Instrument_90.insert(SymbolSfx_90.getString());
    FIX::TimeUnit TimeUnit_90("STRING_Wk");
    noSettlOblig_0_2.set(TimeUnit_90);
    Instrument_90.insert(TimeUnit_90.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_90(3);
    noSettlOblig_0_2.set(UnderlyingPriceDeterminationMethod_90);
    Instrument_90.insert(UnderlyingPriceDeterminationMethod_90.getString());
    FIX::UnitOfMeasure UnitOfMeasure_90("STRING_MMBtu");
    noSettlOblig_0_2.set(UnitOfMeasure_90);
    Instrument_90.insert(UnitOfMeasure_90.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_90;
    UnitOfMeasureQty_90.setString("1184443");
    noSettlOblig_0_2.set(UnitOfMeasureQty_90);
    Instrument_90.insert(UnitOfMeasureQty_90.getString());
    FIX::ValuationMethod ValuationMethod_90("STRING_CDS");
    noSettlOblig_0_2.set(ValuationMethod_90);
    Instrument_90.insert(ValuationMethod_90.getString());
    all_values.push_back(Instrument_90);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_170;
      FIX::ComplexEventCondition ComplexEventCondition_170(2);
      noComplexEvents_2_1_0.set(ComplexEventCondition_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventCondition_170.getString());
      FIX::ComplexEventPrice ComplexEventPrice_170;
      ComplexEventPrice_170.setString("5148792");
      noComplexEvents_2_1_0.set(ComplexEventPrice_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventPrice_170.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_170(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceBoundaryMethod_170.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_170;
      ComplexEventPriceBoundaryPrecision_170.setString("69.160000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceBoundaryPrecision_170.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_170(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceTimeType_170.getString());
      FIX::ComplexEventType ComplexEventType_170(4);
      noComplexEvents_2_1_0.set(ComplexEventType_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexEventType_170.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_170;
      ComplexOptPayoutAmount_170.setString("7144005");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_170);
      ComplexEvents_NoComplexEvents_170.insert(ComplexOptPayoutAmount_170.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_170);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_341;
        FIX::ComplexEventEndDate ComplexEventEndDate_341(FIX::UTCTIMESTAMP(11, 15, 30, 10, 1, 2012));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_341);
        ComplexEventDates_NoComplexEventDates_341.insert(ComplexEventEndDate_341.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_341(FIX::UTCTIMESTAMP(6, 47, 3, 17, 10, 2016));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_341);
        ComplexEventDates_NoComplexEventDates_341.insert(ComplexEventStartDate_341.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_341);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_682;
          FIX::ComplexEventEndTime ComplexEventEndTime_682(FIX::UTCTIMEONLY(21, 4, 9));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_682);
          ComplexEventTimes_NoComplexEventTimes_682.insert(ComplexEventEndTime_682.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_682(FIX::UTCTIMEONLY(1, 32, 20));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_682);
          ComplexEventTimes_NoComplexEventTimes_682.insert(ComplexEventStartTime_682.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_682);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_683;
          FIX::ComplexEventEndTime ComplexEventEndTime_683(FIX::UTCTIMEONLY(6, 56, 44));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_683);
          ComplexEventTimes_NoComplexEventTimes_683.insert(ComplexEventEndTime_683.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_683(FIX::UTCTIMEONLY(13, 24, 6));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_683);
          ComplexEventTimes_NoComplexEventTimes_683.insert(ComplexEventStartTime_683.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_683);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_684;
          FIX::ComplexEventEndTime ComplexEventEndTime_684(FIX::UTCTIMEONLY(23, 21, 50));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventEndTime_684);
          ComplexEventTimes_NoComplexEventTimes_684.insert(ComplexEventEndTime_684.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_684(FIX::UTCTIMEONLY(1, 18, 40));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventStartTime_684);
          ComplexEventTimes_NoComplexEventTimes_684.insert(ComplexEventStartTime_684.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_684);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_342;
        FIX::ComplexEventEndDate ComplexEventEndDate_342(FIX::UTCTIMESTAMP(5, 43, 37, 22, 4, 2009));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_342);
        ComplexEventDates_NoComplexEventDates_342.insert(ComplexEventEndDate_342.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_342(FIX::UTCTIMESTAMP(12, 2, 47, 18, 8, 2000));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_342);
        ComplexEventDates_NoComplexEventDates_342.insert(ComplexEventStartDate_342.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_342);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_685;
          FIX::ComplexEventEndTime ComplexEventEndTime_685(FIX::UTCTIMEONLY(10, 15, 11));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_685);
          ComplexEventTimes_NoComplexEventTimes_685.insert(ComplexEventEndTime_685.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_685(FIX::UTCTIMEONLY(4, 35, 41));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_685);
          ComplexEventTimes_NoComplexEventTimes_685.insert(ComplexEventStartTime_685.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_685);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_686;
          FIX::ComplexEventEndTime ComplexEventEndTime_686(FIX::UTCTIMEONLY(15, 55, 42));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_686);
          ComplexEventTimes_NoComplexEventTimes_686.insert(ComplexEventEndTime_686.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_686(FIX::UTCTIMEONLY(20, 0, 33));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_686);
          ComplexEventTimes_NoComplexEventTimes_686.insert(ComplexEventStartTime_686.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_686);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_687;
          FIX::ComplexEventEndTime ComplexEventEndTime_687(FIX::UTCTIMEONLY(21, 8, 18));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventEndTime_687);
          ComplexEventTimes_NoComplexEventTimes_687.insert(ComplexEventEndTime_687.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_687(FIX::UTCTIMEONLY(11, 7, 34));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventStartTime_687);
          ComplexEventTimes_NoComplexEventTimes_687.insert(ComplexEventStartTime_687.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_687);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_343;
        FIX::ComplexEventEndDate ComplexEventEndDate_343(FIX::UTCTIMESTAMP(21, 13, 9, 4, 6, 2016));
        noComplexEventDates_2_0_2_2.set(ComplexEventEndDate_343);
        ComplexEventDates_NoComplexEventDates_343.insert(ComplexEventEndDate_343.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_343(FIX::UTCTIMESTAMP(4, 43, 2, 15, 12, 2006));
        noComplexEventDates_2_0_2_2.set(ComplexEventStartDate_343);
        ComplexEventDates_NoComplexEventDates_343.insert(ComplexEventStartDate_343.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_343);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_688;
          FIX::ComplexEventEndTime ComplexEventEndTime_688(FIX::UTCTIMEONLY(9, 59, 49));
          noComplexEventTimes_2_0_2_3_0.set(ComplexEventEndTime_688);
          ComplexEventTimes_NoComplexEventTimes_688.insert(ComplexEventEndTime_688.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_688(FIX::UTCTIMEONLY(12, 41, 51));
          noComplexEventTimes_2_0_2_3_0.set(ComplexEventStartTime_688);
          ComplexEventTimes_NoComplexEventTimes_688.insert(ComplexEventStartTime_688.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_688);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_689;
          FIX::ComplexEventEndTime ComplexEventEndTime_689(FIX::UTCTIMEONLY(14, 51, 50));
          noComplexEventTimes_2_0_2_3_1.set(ComplexEventEndTime_689);
          ComplexEventTimes_NoComplexEventTimes_689.insert(ComplexEventEndTime_689.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_689(FIX::UTCTIMEONLY(6, 50, 0));
          noComplexEventTimes_2_0_2_3_1.set(ComplexEventStartTime_689);
          ComplexEventTimes_NoComplexEventTimes_689.insert(ComplexEventStartTime_689.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_689);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_2);
      }
      noSettlOblig_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_171;
      FIX::ComplexEventCondition ComplexEventCondition_171(2);
      noComplexEvents_2_1_1.set(ComplexEventCondition_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventCondition_171.getString());
      FIX::ComplexEventPrice ComplexEventPrice_171;
      ComplexEventPrice_171.setString("20270878");
      noComplexEvents_2_1_1.set(ComplexEventPrice_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventPrice_171.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_171(2);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceBoundaryMethod_171.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_171;
      ComplexEventPriceBoundaryPrecision_171.setString("53.790000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceBoundaryPrecision_171.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_171(3);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceTimeType_171.getString());
      FIX::ComplexEventType ComplexEventType_171(6);
      noComplexEvents_2_1_1.set(ComplexEventType_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexEventType_171.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_171;
      ComplexOptPayoutAmount_171.setString("7020313");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_171);
      ComplexEvents_NoComplexEvents_171.insert(ComplexOptPayoutAmount_171.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_171);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_344;
        FIX::ComplexEventEndDate ComplexEventEndDate_344(FIX::UTCTIMESTAMP(2, 26, 50, 17, 9, 2001));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_344);
        ComplexEventDates_NoComplexEventDates_344.insert(ComplexEventEndDate_344.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_344(FIX::UTCTIMESTAMP(9, 46, 13, 11, 11, 2016));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_344);
        ComplexEventDates_NoComplexEventDates_344.insert(ComplexEventStartDate_344.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_344);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_690;
          FIX::ComplexEventEndTime ComplexEventEndTime_690(FIX::UTCTIMEONLY(12, 5, 1));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_690);
          ComplexEventTimes_NoComplexEventTimes_690.insert(ComplexEventEndTime_690.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_690(FIX::UTCTIMEONLY(11, 51, 43));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_690);
          ComplexEventTimes_NoComplexEventTimes_690.insert(ComplexEventStartTime_690.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_690);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_691;
          FIX::ComplexEventEndTime ComplexEventEndTime_691(FIX::UTCTIMEONLY(7, 49, 39));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventEndTime_691);
          ComplexEventTimes_NoComplexEventTimes_691.insert(ComplexEventEndTime_691.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_691(FIX::UTCTIMEONLY(13, 58, 22));
          noComplexEventTimes_2_1_0_3_1.set(ComplexEventStartTime_691);
          ComplexEventTimes_NoComplexEventTimes_691.insert(ComplexEventStartTime_691.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_691);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_1);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_345;
        FIX::ComplexEventEndDate ComplexEventEndDate_345(FIX::UTCTIMESTAMP(16, 48, 15, 5, 1, 2010));
        noComplexEventDates_2_1_2_1.set(ComplexEventEndDate_345);
        ComplexEventDates_NoComplexEventDates_345.insert(ComplexEventEndDate_345.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_345(FIX::UTCTIMESTAMP(21, 48, 30, 0, 4, 2016));
        noComplexEventDates_2_1_2_1.set(ComplexEventStartDate_345);
        ComplexEventDates_NoComplexEventDates_345.insert(ComplexEventStartDate_345.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_345);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_692;
          FIX::ComplexEventEndTime ComplexEventEndTime_692(FIX::UTCTIMEONLY(9, 55, 39));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventEndTime_692);
          ComplexEventTimes_NoComplexEventTimes_692.insert(ComplexEventEndTime_692.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_692(FIX::UTCTIMEONLY(10, 23, 51));
          noComplexEventTimes_2_1_1_3_0.set(ComplexEventStartTime_692);
          ComplexEventTimes_NoComplexEventTimes_692.insert(ComplexEventStartTime_692.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_692);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_693;
          FIX::ComplexEventEndTime ComplexEventEndTime_693(FIX::UTCTIMEONLY(10, 41, 14));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventEndTime_693);
          ComplexEventTimes_NoComplexEventTimes_693.insert(ComplexEventEndTime_693.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_693(FIX::UTCTIMEONLY(10, 5, 19));
          noComplexEventTimes_2_1_1_3_1.set(ComplexEventStartTime_693);
          ComplexEventTimes_NoComplexEventTimes_693.insert(ComplexEventStartTime_693.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_693);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_694;
          FIX::ComplexEventEndTime ComplexEventEndTime_694(FIX::UTCTIMEONLY(21, 8, 25));
          noComplexEventTimes_2_1_1_3_2.set(ComplexEventEndTime_694);
          ComplexEventTimes_NoComplexEventTimes_694.insert(ComplexEventEndTime_694.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_694(FIX::UTCTIMEONLY(20, 27, 16));
          noComplexEventTimes_2_1_1_3_2.set(ComplexEventStartTime_694);
          ComplexEventTimes_NoComplexEventTimes_694.insert(ComplexEventStartTime_694.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_694);

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_346;
        FIX::ComplexEventEndDate ComplexEventEndDate_346(FIX::UTCTIMESTAMP(16, 39, 2, 15, 12, 2003));
        noComplexEventDates_2_1_2_2.set(ComplexEventEndDate_346);
        ComplexEventDates_NoComplexEventDates_346.insert(ComplexEventEndDate_346.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_346(FIX::UTCTIMESTAMP(0, 40, 52, 4, 8, 2007));
        noComplexEventDates_2_1_2_2.set(ComplexEventStartDate_346);
        ComplexEventDates_NoComplexEventDates_346.insert(ComplexEventStartDate_346.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_346);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_695;
          FIX::ComplexEventEndTime ComplexEventEndTime_695(FIX::UTCTIMEONLY(17, 53, 0));
          noComplexEventTimes_2_1_2_3_0.set(ComplexEventEndTime_695);
          ComplexEventTimes_NoComplexEventTimes_695.insert(ComplexEventEndTime_695.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_695(FIX::UTCTIMEONLY(15, 5, 14));
          noComplexEventTimes_2_1_2_3_0.set(ComplexEventStartTime_695);
          ComplexEventTimes_NoComplexEventTimes_695.insert(ComplexEventStartTime_695.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_695);

          noComplexEventDates_2_1_2_2.addGroup(noComplexEventTimes_2_1_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_696;
          FIX::ComplexEventEndTime ComplexEventEndTime_696(FIX::UTCTIMEONLY(19, 22, 7));
          noComplexEventTimes_2_1_2_3_1.set(ComplexEventEndTime_696);
          ComplexEventTimes_NoComplexEventTimes_696.insert(ComplexEventEndTime_696.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_696(FIX::UTCTIMEONLY(22, 34, 2));
          noComplexEventTimes_2_1_2_3_1.set(ComplexEventStartTime_696);
          ComplexEventTimes_NoComplexEventTimes_696.insert(ComplexEventStartTime_696.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_696);

          noComplexEventDates_2_1_2_2.addGroup(noComplexEventTimes_2_1_2_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_697;
          FIX::ComplexEventEndTime ComplexEventEndTime_697(FIX::UTCTIMEONLY(6, 33, 35));
          noComplexEventTimes_2_1_2_3_2.set(ComplexEventEndTime_697);
          ComplexEventTimes_NoComplexEventTimes_697.insert(ComplexEventEndTime_697.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_697(FIX::UTCTIMEONLY(21, 20, 30));
          noComplexEventTimes_2_1_2_3_2.set(ComplexEventStartTime_697);
          ComplexEventTimes_NoComplexEventTimes_697.insert(ComplexEventStartTime_697.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_697);

          noComplexEventDates_2_1_2_2.addGroup(noComplexEventTimes_2_1_2_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_2);
      }
      noSettlOblig_0_2.addGroup(noComplexEvents_2_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_180;
      FIX::EventDate EventDate_180("LOCALMKTDATE_1801742812");
      noEvents_2_1_0.set(EventDate_180);
      EvntGrp_NoEvents_180.insert(EventDate_180.getString());
      FIX::EventPx EventPx_180;
      EventPx_180.setString("20843555");
      noEvents_2_1_0.set(EventPx_180);
      EvntGrp_NoEvents_180.insert(EventPx_180.getString());
      FIX::EventText EventText_180("STRING_1184455614");
      noEvents_2_1_0.set(EventText_180);
      EvntGrp_NoEvents_180.insert(EventText_180.getString());
      FIX::EventTime EventTime_180(FIX::UTCTIMESTAMP(22, 6, 57, 24, 12, 2010));
      noEvents_2_1_0.set(EventTime_180);
      EvntGrp_NoEvents_180.insert(EventTime_180.getString());
      FIX::EventType EventType_180(3);
      noEvents_2_1_0.set(EventType_180);
      EvntGrp_NoEvents_180.insert(EventType_180.getString());
      all_values.push_back(EvntGrp_NoEvents_180);

      noSettlOblig_0_2.addGroup(noEvents_2_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_180;
      FIX::InstrumentPartyID InstrumentPartyID_180("STRING_104665075");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_180);
      InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyID_180.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_180('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_180);
      InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyIDSource_180.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_180(891013211);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_180);
      InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyRole_180.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_180);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376;
        FIX::InstrumentPartySubID InstrumentPartySubID_376("STRING_1154969450");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_376);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376.insert(InstrumentPartySubID_376.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_376(1361246658);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_376);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376.insert(InstrumentPartySubIDType_376.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377;
        FIX::InstrumentPartySubID InstrumentPartySubID_377("STRING_457256196");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_377);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377.insert(InstrumentPartySubID_377.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_377(1798794289);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_377);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377.insert(InstrumentPartySubIDType_377.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378;
        FIX::InstrumentPartySubID InstrumentPartySubID_378("STRING_360113025");
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubID_378);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378.insert(InstrumentPartySubID_378.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_378(52816351);
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubIDType_378);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378.insert(InstrumentPartySubIDType_378.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_2);
      }
      noSettlOblig_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_202;
      FIX::SecurityAltID SecurityAltID_202("STRING_1046791167");
      noSecurityAltID_2_1_0.set(SecurityAltID_202);
      SecAltIDGrp_NoSecurityAltID_202.insert(SecurityAltID_202.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_202("STRING_559281724");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_202);
      SecAltIDGrp_NoSecurityAltID_202.insert(SecurityAltIDSource_202.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_202);

      noSettlOblig_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_203;
      FIX::SecurityAltID SecurityAltID_203("STRING_2141653428");
      noSecurityAltID_2_1_1.set(SecurityAltID_203);
      SecAltIDGrp_NoSecurityAltID_203.insert(SecurityAltID_203.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_203("STRING_1709246985");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_203);
      SecAltIDGrp_NoSecurityAltID_203.insert(SecurityAltIDSource_203.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_203);

      noSettlOblig_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_180;
    FIX::SecurityXML SecurityXML_181("XMLDATA_1714690105");
    noSettlOblig_0_2.set(SecurityXML_181);
    FIX::SecurityXMLLen SecurityXMLLen_90(1826146020);
    noSettlOblig_0_2.set(SecurityXMLLen_90);
    FIX::SecurityXMLSchema SecurityXMLSchema_90("STRING_154924507");
    noSettlOblig_0_2.set(SecurityXMLSchema_90);
    SecurityXML_180.insert(SecurityXMLSchema_90.getString());
    all_values.push_back(SecurityXML_180);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_135;
      FIX::PartyID PartyID_135("STRING_1480405185");
      noPartyIDs_2_1_0.set(PartyID_135);
      Parties_NoPartyIDs_135.insert(PartyID_135.getString());
      FIX::PartyIDSource PartyIDSource_135('G');
      noPartyIDs_2_1_0.set(PartyIDSource_135);
      Parties_NoPartyIDs_135.insert(PartyIDSource_135.getString());
      FIX::PartyRole PartyRole_135(2);
      noPartyIDs_2_1_0.set(PartyRole_135);
      Parties_NoPartyIDs_135.insert(PartyRole_135.getString());
      all_values.push_back(Parties_NoPartyIDs_135);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_273;
        FIX::PartySubID PartySubID_273("STRING_685242345");
        noPartySubIDs_2_0_2_0.set(PartySubID_273);
        PtysSubGrp_NoPartySubIDs_273.insert(PartySubID_273.getString());
        FIX::PartySubIDType PartySubIDType_273(32);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_273);
        PtysSubGrp_NoPartySubIDs_273.insert(PartySubIDType_273.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_273);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      noSettlOblig_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_2;
      FIX::SettlObligSource SettlObligSource_2('3');
      noSettlDetails_2_1_0.set(SettlObligSource_2);
      SettlDetails_NoSettlDetails_2.insert(SettlObligSource_2.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_2);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_51;
        FIX::SettlPartyID SettlPartyID_51("STRING_1679146056");
        noSettlPartyIDs_2_0_2_0.set(SettlPartyID_51);
        SettlParties_NoSettlPartyIDs_51.insert(SettlPartyID_51.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_51('4');
        noSettlPartyIDs_2_0_2_0.set(SettlPartyIDSource_51);
        SettlParties_NoSettlPartyIDs_51.insert(SettlPartyIDSource_51.getString());
        FIX::SettlPartyRole SettlPartyRole_51(1821562504);
        noSettlPartyIDs_2_0_2_0.set(SettlPartyRole_51);
        SettlParties_NoSettlPartyIDs_51.insert(SettlPartyRole_51.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_51);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_114;
          FIX::SettlPartySubID SettlPartySubID_114("STRING_263554848");
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubID_114);
          SettlPtysSubGrp_NoSettlPartySubIDs_114.insert(SettlPartySubID_114.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_114(565092067);
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubIDType_114);
          SettlPtysSubGrp_NoSettlPartySubIDs_114.insert(SettlPartySubIDType_114.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_114);

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_115;
          FIX::SettlPartySubID SettlPartySubID_115("STRING_2089032322");
          noSettlPartySubIDs_2_0_0_3_1.set(SettlPartySubID_115);
          SettlPtysSubGrp_NoSettlPartySubIDs_115.insert(SettlPartySubID_115.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_115(1418524298);
          noSettlPartySubIDs_2_0_0_3_1.set(SettlPartySubIDType_115);
          SettlPtysSubGrp_NoSettlPartySubIDs_115.insert(SettlPartySubIDType_115.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_115);

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_1);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_52;
        FIX::SettlPartyID SettlPartyID_52("STRING_1926338726");
        noSettlPartyIDs_2_0_2_1.set(SettlPartyID_52);
        SettlParties_NoSettlPartyIDs_52.insert(SettlPartyID_52.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_52('3');
        noSettlPartyIDs_2_0_2_1.set(SettlPartyIDSource_52);
        SettlParties_NoSettlPartyIDs_52.insert(SettlPartyIDSource_52.getString());
        FIX::SettlPartyRole SettlPartyRole_52(1069834939);
        noSettlPartyIDs_2_0_2_1.set(SettlPartyRole_52);
        SettlParties_NoSettlPartyIDs_52.insert(SettlPartyRole_52.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_52);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_116;
          FIX::SettlPartySubID SettlPartySubID_116("STRING_451621221");
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubID_116);
          SettlPtysSubGrp_NoSettlPartySubIDs_116.insert(SettlPartySubID_116.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_116(1637207133);
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubIDType_116);
          SettlPtysSubGrp_NoSettlPartySubIDs_116.insert(SettlPartySubIDType_116.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_116);

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_0);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_1);
      }
      noSettlOblig_0_2.addGroup(noSettlDetails_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_3;
      FIX::SettlObligSource SettlObligSource_3('1');
      noSettlDetails_2_1_1.set(SettlObligSource_3);
      SettlDetails_NoSettlDetails_3.insert(SettlObligSource_3.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_3);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_53;
        FIX::SettlPartyID SettlPartyID_53("STRING_1631376913");
        noSettlPartyIDs_2_1_2_0.set(SettlPartyID_53);
        SettlParties_NoSettlPartyIDs_53.insert(SettlPartyID_53.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_53('7');
        noSettlPartyIDs_2_1_2_0.set(SettlPartyIDSource_53);
        SettlParties_NoSettlPartyIDs_53.insert(SettlPartyIDSource_53.getString());
        FIX::SettlPartyRole SettlPartyRole_53(578109403);
        noSettlPartyIDs_2_1_2_0.set(SettlPartyRole_53);
        SettlParties_NoSettlPartyIDs_53.insert(SettlPartyRole_53.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_53);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_117;
          FIX::SettlPartySubID SettlPartySubID_117("STRING_902447115");
          noSettlPartySubIDs_2_1_0_3_0.set(SettlPartySubID_117);
          SettlPtysSubGrp_NoSettlPartySubIDs_117.insert(SettlPartySubID_117.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_117(1646495194);
          noSettlPartySubIDs_2_1_0_3_0.set(SettlPartySubIDType_117);
          SettlPtysSubGrp_NoSettlPartySubIDs_117.insert(SettlPartySubIDType_117.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_117);

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_0);
        }
        noSettlDetails_2_1_1.addGroup(noSettlPartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_54;
        FIX::SettlPartyID SettlPartyID_54("STRING_642960823");
        noSettlPartyIDs_2_1_2_1.set(SettlPartyID_54);
        SettlParties_NoSettlPartyIDs_54.insert(SettlPartyID_54.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_54('9');
        noSettlPartyIDs_2_1_2_1.set(SettlPartyIDSource_54);
        SettlParties_NoSettlPartyIDs_54.insert(SettlPartyIDSource_54.getString());
        FIX::SettlPartyRole SettlPartyRole_54(1751852951);
        noSettlPartyIDs_2_1_2_1.set(SettlPartyRole_54);
        SettlParties_NoSettlPartyIDs_54.insert(SettlPartyRole_54.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_54);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_118;
          FIX::SettlPartySubID SettlPartySubID_118("STRING_1679485822");
          noSettlPartySubIDs_2_1_1_3_0.set(SettlPartySubID_118);
          SettlPtysSubGrp_NoSettlPartySubIDs_118.insert(SettlPartySubID_118.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_118(639704866);
          noSettlPartySubIDs_2_1_1_3_0.set(SettlPartySubIDType_118);
          SettlPtysSubGrp_NoSettlPartySubIDs_118.insert(SettlPartySubIDType_118.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_118);

          noSettlPartyIDs_2_1_2_1.addGroup(noSettlPartySubIDs_2_1_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_119;
          FIX::SettlPartySubID SettlPartySubID_119("STRING_157288501");
          noSettlPartySubIDs_2_1_1_3_1.set(SettlPartySubID_119);
          SettlPtysSubGrp_NoSettlPartySubIDs_119.insert(SettlPartySubID_119.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_119(264623119);
          noSettlPartySubIDs_2_1_1_3_1.set(SettlPartySubIDType_119);
          SettlPtysSubGrp_NoSettlPartySubIDs_119.insert(SettlPartySubIDType_119.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_119);

          noSettlPartyIDs_2_1_2_1.addGroup(noSettlPartySubIDs_2_1_1_3_1);
        }
        noSettlDetails_2_1_1.addGroup(noSettlPartyIDs_2_1_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_55;
        FIX::SettlPartyID SettlPartyID_55("STRING_1290433760");
        noSettlPartyIDs_2_1_2_2.set(SettlPartyID_55);
        SettlParties_NoSettlPartyIDs_55.insert(SettlPartyID_55.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_55('1');
        noSettlPartyIDs_2_1_2_2.set(SettlPartyIDSource_55);
        SettlParties_NoSettlPartyIDs_55.insert(SettlPartyIDSource_55.getString());
        FIX::SettlPartyRole SettlPartyRole_55(752614479);
        noSettlPartyIDs_2_1_2_2.set(SettlPartyRole_55);
        SettlParties_NoSettlPartyIDs_55.insert(SettlPartyRole_55.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_55);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_120;
          FIX::SettlPartySubID SettlPartySubID_120("STRING_1472762041");
          noSettlPartySubIDs_2_1_2_3_0.set(SettlPartySubID_120);
          SettlPtysSubGrp_NoSettlPartySubIDs_120.insert(SettlPartySubID_120.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_120(1016169327);
          noSettlPartySubIDs_2_1_2_3_0.set(SettlPartySubIDType_120);
          SettlPtysSubGrp_NoSettlPartySubIDs_120.insert(SettlPartySubIDType_120.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_120);

          noSettlPartyIDs_2_1_2_2.addGroup(noSettlPartySubIDs_2_1_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_121;
          FIX::SettlPartySubID SettlPartySubID_121("STRING_1529604684");
          noSettlPartySubIDs_2_1_2_3_1.set(SettlPartySubID_121);
          SettlPtysSubGrp_NoSettlPartySubIDs_121.insert(SettlPartySubID_121.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_121(1414310715);
          noSettlPartySubIDs_2_1_2_3_1.set(SettlPartySubIDType_121);
          SettlPtysSubGrp_NoSettlPartySubIDs_121.insert(SettlPartySubIDType_121.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_121);

          noSettlPartyIDs_2_1_2_2.addGroup(noSettlPartySubIDs_2_1_2_3_1);
        }
        noSettlDetails_2_1_1.addGroup(noSettlPartyIDs_2_1_2_2);
      }
      noSettlOblig_0_2.addGroup(noSettlDetails_2_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_4;
      FIX::SettlObligSource SettlObligSource_4('1');
      noSettlDetails_2_1_2.set(SettlObligSource_4);
      SettlDetails_NoSettlDetails_4.insert(SettlObligSource_4.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_4);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_56;
        FIX::SettlPartyID SettlPartyID_56("STRING_1813115585");
        noSettlPartyIDs_2_2_2_0.set(SettlPartyID_56);
        SettlParties_NoSettlPartyIDs_56.insert(SettlPartyID_56.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_56('1');
        noSettlPartyIDs_2_2_2_0.set(SettlPartyIDSource_56);
        SettlParties_NoSettlPartyIDs_56.insert(SettlPartyIDSource_56.getString());
        FIX::SettlPartyRole SettlPartyRole_56(1447427865);
        noSettlPartyIDs_2_2_2_0.set(SettlPartyRole_56);
        SettlParties_NoSettlPartyIDs_56.insert(SettlPartyRole_56.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_56);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_122;
          FIX::SettlPartySubID SettlPartySubID_122("STRING_846768402");
          noSettlPartySubIDs_2_2_0_3_0.set(SettlPartySubID_122);
          SettlPtysSubGrp_NoSettlPartySubIDs_122.insert(SettlPartySubID_122.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_122(485703487);
          noSettlPartySubIDs_2_2_0_3_0.set(SettlPartySubIDType_122);
          SettlPtysSubGrp_NoSettlPartySubIDs_122.insert(SettlPartySubIDType_122.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_122);

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_123;
          FIX::SettlPartySubID SettlPartySubID_123("STRING_1128156105");
          noSettlPartySubIDs_2_2_0_3_1.set(SettlPartySubID_123);
          SettlPtysSubGrp_NoSettlPartySubIDs_123.insert(SettlPartySubID_123.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_123(330661667);
          noSettlPartySubIDs_2_2_0_3_1.set(SettlPartySubIDType_123);
          SettlPtysSubGrp_NoSettlPartySubIDs_123.insert(SettlPartySubIDType_123.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_123);

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_1);
        }
        noSettlDetails_2_1_2.addGroup(noSettlPartyIDs_2_2_2_0);
      }
      noSettlOblig_0_2.addGroup(noSettlDetails_2_1_2);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
