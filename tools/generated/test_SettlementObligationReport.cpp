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
  multiset<string> all_compo_names;
  multiset<string> SettlementObligationReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_24("LOCALMKTDATE_1326392172");
  msg.set(ClearingBusinessDate_24);
  SettlementObligationReport_0.insert(ClearingBusinessDate_24.getString());
  FIX::EncodedText EncodedText_94("DATA_1671285597");
  msg.set(EncodedText_94);
  SettlementObligationReport_0.insert(EncodedText_94.getString());
  FIX::EncodedTextLen EncodedTextLen_94(680692993);
  msg.set(EncodedTextLen_94);
  SettlementObligationReport_0.insert(EncodedTextLen_94.getString());
  FIX::SettlObligMode SettlObligMode_0(1);
  msg.set(SettlObligMode_0);
  SettlementObligationReport_0.insert(SettlObligMode_0.getString());
  FIX::SettlObligMsgID SettlObligMsgID_0("STRING_180898383");
  msg.set(SettlObligMsgID_0);
  SettlementObligationReport_0.insert(SettlObligMsgID_0.getString());
  FIX::SettlementCycleNo SettlementCycleNo_0(1878910136);
  msg.set(SettlementCycleNo_0);
  SettlementObligationReport_0.insert(SettlementCycleNo_0.getString());
  FIX::Text Text_94("STRING_797518755");
  msg.set(Text_94);
  SettlementObligationReport_0.insert(Text_94.getString());
  FIX::TransactTime TransactTime_72(FIX::UTCTIMESTAMP(20, 8, 6, 23, 3, 2014));
  msg.set(TransactTime_72);
  SettlementObligationReport_0.insert(TransactTime_72.getString());
  all_values.push_back(SettlementObligationReport_0);

  all_compo_names.insert("SettlementObligationReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_18;
  FIX::ApplID ApplID_18("STRING_1411318823");
  msg.set(ApplID_18);
  ApplicationSequenceControl_18.insert(ApplID_18.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_18(246704157);
  msg.set(ApplLastSeqNum_18);
  ApplicationSequenceControl_18.insert(ApplLastSeqNum_18.getString());
  FIX::ApplResendFlag ApplResendFlag_18(true);
  msg.set(ApplResendFlag_18);
  ApplicationSequenceControl_18.insert(ApplResendFlag_18.getString());
  FIX::ApplSeqNum ApplSeqNum_18(713834355);
  msg.set(ApplSeqNum_18);
  ApplicationSequenceControl_18.insert(ApplSeqNum_18.getString());
  all_values.push_back(ApplicationSequenceControl_18);
  all_compo_names.insert("ApplicationSequenceControl");

  // SettlObligationInstructions
  // Group SettlObligationInstructions.NoSettlOblig
  {
    FIX50SP2::SettlementObligationReport::NoSettlOblig noSettlOblig_0_0;
    // SettlObligationInstructions.NoSettlOblig
    multiset<string> SettlObligationInstructions_NoSettlOblig_0;
    FIX::CcyAmt CcyAmt_0;
    CcyAmt_0.setString("12383558");
    noSettlOblig_0_0.set(CcyAmt_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(CcyAmt_0.getString());
    FIX::Currency Currency_73("CAN");
    noSettlOblig_0_0.set(Currency_73);
    SettlObligationInstructions_NoSettlOblig_0.insert(Currency_73.getString());
    FIX::EffectiveTime EffectiveTime_13(FIX::UTCTIMESTAMP(9, 20, 51, 26, 6, 2007));
    noSettlOblig_0_0.set(EffectiveTime_13);
    SettlObligationInstructions_NoSettlOblig_0.insert(EffectiveTime_13.getString());
    FIX::ExpireTime ExpireTime_22(FIX::UTCTIMESTAMP(5, 19, 1, 26, 6, 2004));
    noSettlOblig_0_0.set(ExpireTime_22);
    SettlObligationInstructions_NoSettlOblig_0.insert(ExpireTime_22.getString());
    FIX::LastUpdateTime LastUpdateTime_3(FIX::UTCTIMESTAMP(12, 20, 14, 8, 7, 2011));
    noSettlOblig_0_0.set(LastUpdateTime_3);
    SettlObligationInstructions_NoSettlOblig_0.insert(LastUpdateTime_3.getString());
    FIX::NetGrossInd NetGrossInd_6(1);
    noSettlOblig_0_0.set(NetGrossInd_6);
    SettlObligationInstructions_NoSettlOblig_0.insert(NetGrossInd_6.getString());
    FIX::SettlCurrAmt SettlCurrAmt_6;
    SettlCurrAmt_6.setString("4343605");
    noSettlOblig_0_0.set(SettlCurrAmt_6);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrAmt_6.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_6;
    SettlCurrFxRate_6.setString("8116248");
    noSettlOblig_0_0.set(SettlCurrFxRate_6);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrFxRate_6.getString());
    FIX::SettlCurrency SettlCurrency_33("JPY");
    noSettlOblig_0_0.set(SettlCurrency_33);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrency_33.getString());
    FIX::SettlDate SettlDate_51("LOCALMKTDATE_1525459176");
    noSettlOblig_0_0.set(SettlDate_51);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlDate_51.getString());
    FIX::SettlObligID SettlObligID_0("STRING_604896500");
    noSettlOblig_0_0.set(SettlObligID_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligID_0.getString());
    FIX::SettlObligRefID SettlObligRefID_0("STRING_1174941169");
    noSettlOblig_0_0.set(SettlObligRefID_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligRefID_0.getString());
    FIX::SettlObligTransType SettlObligTransType_0('T');
    noSettlOblig_0_0.set(SettlObligTransType_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligTransType_0.getString());
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_0);
    all_compo_names.insert("SettlObligationInstructions.NoSettlOblig");

    // Instrument
    multiset<string> Instrument_90;
    FIX::AttachmentPoint AttachmentPoint_90;
    AttachmentPoint_90.setString("96.180000");
    noSettlOblig_0_0.set(AttachmentPoint_90);
    Instrument_90.insert(AttachmentPoint_90.getString());
    FIX::CFICode CFICode_95("STRING_2060658158");
    noSettlOblig_0_0.set(CFICode_95);
    Instrument_90.insert(CFICode_95.getString());
    FIX::CPProgram CPProgram_90(1);
    noSettlOblig_0_0.set(CPProgram_90);
    Instrument_90.insert(CPProgram_90.getString());
    FIX::CPRegType CPRegType_90("STRING_695336738");
    noSettlOblig_0_0.set(CPRegType_90);
    Instrument_90.insert(CPRegType_90.getString());
    FIX::CapPrice CapPrice_90;
    CapPrice_90.setString("16338193");
    noSettlOblig_0_0.set(CapPrice_90);
    Instrument_90.insert(CapPrice_90.getString());
    FIX::ContractMultiplier ContractMultiplier_90;
    ContractMultiplier_90.setString("16571723");
    noSettlOblig_0_0.set(ContractMultiplier_90);
    Instrument_90.insert(ContractMultiplier_90.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_90(1);
    noSettlOblig_0_0.set(ContractMultiplierUnit_90);
    Instrument_90.insert(ContractMultiplierUnit_90.getString());
    FIX::ContractSettlMonth ContractSettlMonth_90("MONTHYEAR_273543920");
    noSettlOblig_0_0.set(ContractSettlMonth_90);
    Instrument_90.insert(ContractSettlMonth_90.getString());
    FIX::CountryOfIssue CountryOfIssue_90("COUNTRY_882457182");
    noSettlOblig_0_0.set(CountryOfIssue_90);
    Instrument_90.insert(CountryOfIssue_90.getString());
    FIX::CouponPaymentDate CouponPaymentDate_90("LOCALMKTDATE_412602220");
    noSettlOblig_0_0.set(CouponPaymentDate_90);
    Instrument_90.insert(CouponPaymentDate_90.getString());
    FIX::CouponRate CouponRate_90;
    CouponRate_90.setString("6.710000");
    noSettlOblig_0_0.set(CouponRate_90);
    Instrument_90.insert(CouponRate_90.getString());
    FIX::CreditRating CreditRating_90("STRING_1779027643");
    noSettlOblig_0_0.set(CreditRating_90);
    Instrument_90.insert(CreditRating_90.getString());
    FIX::DatedDate DatedDate_90("LOCALMKTDATE_1881072635");
    noSettlOblig_0_0.set(DatedDate_90);
    Instrument_90.insert(DatedDate_90.getString());
    FIX::DetachmentPoint DetachmentPoint_90;
    DetachmentPoint_90.setString("47.760000");
    noSettlOblig_0_0.set(DetachmentPoint_90);
    Instrument_90.insert(DetachmentPoint_90.getString());
    FIX::EncodedIssuer EncodedIssuer_90("DATA_709012839");
    noSettlOblig_0_0.set(EncodedIssuer_90);
    Instrument_90.insert(EncodedIssuer_90.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_90(933485889);
    noSettlOblig_0_0.set(EncodedIssuerLen_90);
    Instrument_90.insert(EncodedIssuerLen_90.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_90("DATA_1833263988");
    noSettlOblig_0_0.set(EncodedSecurityDesc_90);
    Instrument_90.insert(EncodedSecurityDesc_90.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_90(50631471);
    noSettlOblig_0_0.set(EncodedSecurityDescLen_90);
    Instrument_90.insert(EncodedSecurityDescLen_90.getString());
    FIX::ExerciseStyle ExerciseStyle_90(1);
    noSettlOblig_0_0.set(ExerciseStyle_90);
    Instrument_90.insert(ExerciseStyle_90.getString());
    FIX::Factor Factor_90;
    Factor_90.setString("7366609");
    noSettlOblig_0_0.set(Factor_90);
    Instrument_90.insert(Factor_90.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_90(false);
    noSettlOblig_0_0.set(FlexProductEligibilityIndicator_90);
    Instrument_90.insert(FlexProductEligibilityIndicator_90.getString());
    FIX::FlexibleIndicator FlexibleIndicator_90(false);
    noSettlOblig_0_0.set(FlexibleIndicator_90);
    Instrument_90.insert(FlexibleIndicator_90.getString());
    FIX::FloorPrice FloorPrice_90;
    FloorPrice_90.setString("14214253");
    noSettlOblig_0_0.set(FloorPrice_90);
    Instrument_90.insert(FloorPrice_90.getString());
    FIX::FlowScheduleType FlowScheduleType_90(2);
    noSettlOblig_0_0.set(FlowScheduleType_90);
    Instrument_90.insert(FlowScheduleType_90.getString());
    FIX::InstrRegistry InstrRegistry_90("STRING_837769894");
    noSettlOblig_0_0.set(InstrRegistry_90);
    Instrument_90.insert(InstrRegistry_90.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_90('2');
    noSettlOblig_0_0.set(InstrmtAssignmentMethod_90);
    Instrument_90.insert(InstrmtAssignmentMethod_90.getString());
    FIX::InterestAccrualDate InterestAccrualDate_90("LOCALMKTDATE_1497199140");
    noSettlOblig_0_0.set(InterestAccrualDate_90);
    Instrument_90.insert(InterestAccrualDate_90.getString());
    FIX::IssueDate IssueDate_90("LOCALMKTDATE_215745422");
    noSettlOblig_0_0.set(IssueDate_90);
    Instrument_90.insert(IssueDate_90.getString());
    FIX::Issuer Issuer_90("STRING_810306711");
    noSettlOblig_0_0.set(Issuer_90);
    Instrument_90.insert(Issuer_90.getString());
    FIX::ListMethod ListMethod_90(1);
    noSettlOblig_0_0.set(ListMethod_90);
    Instrument_90.insert(ListMethod_90.getString());
    FIX::LocaleOfIssue LocaleOfIssue_90("STRING_178646573");
    noSettlOblig_0_0.set(LocaleOfIssue_90);
    Instrument_90.insert(LocaleOfIssue_90.getString());
    FIX::MaturityDate MaturityDate_90("LOCALMKTDATE_1012216329");
    noSettlOblig_0_0.set(MaturityDate_90);
    Instrument_90.insert(MaturityDate_90.getString());
    FIX::MaturityMonthYear MaturityMonthYear_90("MONTHYEAR_437831171");
    noSettlOblig_0_0.set(MaturityMonthYear_90);
    Instrument_90.insert(MaturityMonthYear_90.getString());
    FIX::MaturityTime MaturityTime_90("TZTIMEONLY_316892477");
    noSettlOblig_0_0.set(MaturityTime_90);
    Instrument_90.insert(MaturityTime_90.getString());
    FIX::MinPriceIncrement MinPriceIncrement_90;
    MinPriceIncrement_90.setString("17075530");
    noSettlOblig_0_0.set(MinPriceIncrement_90);
    Instrument_90.insert(MinPriceIncrement_90.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_90;
    MinPriceIncrementAmount_90.setString("20716505");
    noSettlOblig_0_0.set(MinPriceIncrementAmount_90);
    Instrument_90.insert(MinPriceIncrementAmount_90.getString());
    FIX::NTPositionLimit NTPositionLimit_90(1974064796);
    noSettlOblig_0_0.set(NTPositionLimit_90);
    Instrument_90.insert(NTPositionLimit_90.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_90;
    NotionalPercentageOutstanding_90.setString("78.660000");
    noSettlOblig_0_0.set(NotionalPercentageOutstanding_90);
    Instrument_90.insert(NotionalPercentageOutstanding_90.getString());
    FIX::OptAttribute OptAttribute_90('1');
    noSettlOblig_0_0.set(OptAttribute_90);
    Instrument_90.insert(OptAttribute_90.getString());
    FIX::OptPayoutAmount OptPayoutAmount_90;
    OptPayoutAmount_90.setString("7090383");
    noSettlOblig_0_0.set(OptPayoutAmount_90);
    Instrument_90.insert(OptPayoutAmount_90.getString());
    FIX::OptPayoutType OptPayoutType_90(1);
    noSettlOblig_0_0.set(OptPayoutType_90);
    Instrument_90.insert(OptPayoutType_90.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_90;
    OriginalNotionalPercentageOutstanding_90.setString("14.550000");
    noSettlOblig_0_0.set(OriginalNotionalPercentageOutstanding_90);
    Instrument_90.insert(OriginalNotionalPercentageOutstanding_90.getString());
    FIX::Pool Pool_90("STRING_340582326");
    noSettlOblig_0_0.set(Pool_90);
    Instrument_90.insert(Pool_90.getString());
    FIX::PositionLimit PositionLimit_90(1478569074);
    noSettlOblig_0_0.set(PositionLimit_90);
    Instrument_90.insert(PositionLimit_90.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_90("STRING_PCTPAR");
    noSettlOblig_0_0.set(PriceQuoteMethod_90);
    Instrument_90.insert(PriceQuoteMethod_90.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_90("STRING_1049595165");
    noSettlOblig_0_0.set(PriceUnitOfMeasure_90);
    Instrument_90.insert(PriceUnitOfMeasure_90.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_90;
    PriceUnitOfMeasureQty_90.setString("2645713");
    noSettlOblig_0_0.set(PriceUnitOfMeasureQty_90);
    Instrument_90.insert(PriceUnitOfMeasureQty_90.getString());
    FIX::Product Product_98(3);
    noSettlOblig_0_0.set(Product_98);
    Instrument_90.insert(Product_98.getString());
    FIX::ProductComplex ProductComplex_90("STRING_1100226637");
    noSettlOblig_0_0.set(ProductComplex_90);
    Instrument_90.insert(ProductComplex_90.getString());
    FIX::PutOrCall PutOrCall_90(1);
    noSettlOblig_0_0.set(PutOrCall_90);
    Instrument_90.insert(PutOrCall_90.getString());
    FIX::RedemptionDate RedemptionDate_90("LOCALMKTDATE_423773844");
    noSettlOblig_0_0.set(RedemptionDate_90);
    Instrument_90.insert(RedemptionDate_90.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_90("STRING_78996278");
    noSettlOblig_0_0.set(RepoCollateralSecurityType_90);
    Instrument_90.insert(RepoCollateralSecurityType_90.getString());
    FIX::RepurchaseRate RepurchaseRate_90;
    RepurchaseRate_90.setString("54.650000");
    noSettlOblig_0_0.set(RepurchaseRate_90);
    Instrument_90.insert(RepurchaseRate_90.getString());
    FIX::RepurchaseTerm RepurchaseTerm_90(1845199155);
    noSettlOblig_0_0.set(RepurchaseTerm_90);
    Instrument_90.insert(RepurchaseTerm_90.getString());
    FIX::RestructuringType RestructuringType_90("STRING_MM");
    noSettlOblig_0_0.set(RestructuringType_90);
    Instrument_90.insert(RestructuringType_90.getString());
    FIX::SecurityDesc SecurityDesc_90("STRING_1754325359");
    noSettlOblig_0_0.set(SecurityDesc_90);
    Instrument_90.insert(SecurityDesc_90.getString());
    FIX::SecurityExchange SecurityExchange_90("EXCHANGE_2050609365");
    noSettlOblig_0_0.set(SecurityExchange_90);
    Instrument_90.insert(SecurityExchange_90.getString());
    FIX::SecurityGroup SecurityGroup_90("STRING_989325623");
    noSettlOblig_0_0.set(SecurityGroup_90);
    Instrument_90.insert(SecurityGroup_90.getString());
    FIX::SecurityID SecurityID_90("STRING_1970070781");
    noSettlOblig_0_0.set(SecurityID_90);
    Instrument_90.insert(SecurityID_90.getString());
    FIX::SecurityIDSource SecurityIDSource_90("STRING_H");
    noSettlOblig_0_0.set(SecurityIDSource_90);
    Instrument_90.insert(SecurityIDSource_90.getString());
    FIX::SecurityStatus SecurityStatus_91("STRING_1");
    noSettlOblig_0_0.set(SecurityStatus_91);
    Instrument_90.insert(SecurityStatus_91.getString());
    FIX::SecuritySubType SecuritySubType_94("STRING_1233706");
    noSettlOblig_0_0.set(SecuritySubType_94);
    Instrument_90.insert(SecuritySubType_94.getString());
    FIX::SecurityType SecurityType_98("STRING_USTB");
    noSettlOblig_0_0.set(SecurityType_98);
    Instrument_90.insert(SecurityType_98.getString());
    FIX::Seniority Seniority_90("STRING_SR");
    noSettlOblig_0_0.set(Seniority_90);
    Instrument_90.insert(Seniority_90.getString());
    FIX::SettlMethod SettlMethod_90('P');
    noSettlOblig_0_0.set(SettlMethod_90);
    Instrument_90.insert(SettlMethod_90.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_90("STRING_1285718176");
    noSettlOblig_0_0.set(SettleOnOpenFlag_90);
    Instrument_90.insert(SettleOnOpenFlag_90.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_90("STRING_1875980320");
    noSettlOblig_0_0.set(StateOrProvinceOfIssue_90);
    Instrument_90.insert(StateOrProvinceOfIssue_90.getString());
    FIX::StrikeCurrency StrikeCurrency_90("EUR");
    noSettlOblig_0_0.set(StrikeCurrency_90);
    Instrument_90.insert(StrikeCurrency_90.getString());
    FIX::StrikeMultiplier StrikeMultiplier_90;
    StrikeMultiplier_90.setString("20736911");
    noSettlOblig_0_0.set(StrikeMultiplier_90);
    Instrument_90.insert(StrikeMultiplier_90.getString());
    FIX::StrikePrice StrikePrice_90;
    StrikePrice_90.setString("8537456");
    noSettlOblig_0_0.set(StrikePrice_90);
    Instrument_90.insert(StrikePrice_90.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_90(5);
    noSettlOblig_0_0.set(StrikePriceBoundaryMethod_90);
    Instrument_90.insert(StrikePriceBoundaryMethod_90.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_90;
    StrikePriceBoundaryPrecision_90.setString("89.120000");
    noSettlOblig_0_0.set(StrikePriceBoundaryPrecision_90);
    Instrument_90.insert(StrikePriceBoundaryPrecision_90.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_90(1);
    noSettlOblig_0_0.set(StrikePriceDeterminationMethod_90);
    Instrument_90.insert(StrikePriceDeterminationMethod_90.getString());
    FIX::StrikeValue StrikeValue_90;
    StrikeValue_90.setString("15466779");
    noSettlOblig_0_0.set(StrikeValue_90);
    Instrument_90.insert(StrikeValue_90.getString());
    FIX::Symbol Symbol_90("STRING_364911496");
    noSettlOblig_0_0.set(Symbol_90);
    Instrument_90.insert(Symbol_90.getString());
    FIX::SymbolSfx SymbolSfx_90("STRING_WI");
    noSettlOblig_0_0.set(SymbolSfx_90);
    Instrument_90.insert(SymbolSfx_90.getString());
    FIX::TimeUnit TimeUnit_90("STRING_H");
    noSettlOblig_0_0.set(TimeUnit_90);
    Instrument_90.insert(TimeUnit_90.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_90(4);
    noSettlOblig_0_0.set(UnderlyingPriceDeterminationMethod_90);
    Instrument_90.insert(UnderlyingPriceDeterminationMethod_90.getString());
    FIX::UnitOfMeasure UnitOfMeasure_90("STRING_t");
    noSettlOblig_0_0.set(UnitOfMeasure_90);
    Instrument_90.insert(UnitOfMeasure_90.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_90;
    UnitOfMeasureQty_90.setString("5541759");
    noSettlOblig_0_0.set(UnitOfMeasureQty_90);
    Instrument_90.insert(UnitOfMeasureQty_90.getString());
    FIX::ValuationMethod ValuationMethod_90("STRING_CDS");
    noSettlOblig_0_0.set(ValuationMethod_90);
    Instrument_90.insert(ValuationMethod_90.getString());
    all_values.push_back(Instrument_90);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_184;
      FIX::ComplexEventCondition ComplexEventCondition_184(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_184);
      ComplexEvents_NoComplexEvents_184.insert(ComplexEventCondition_184.getString());
      FIX::ComplexEventPrice ComplexEventPrice_184;
      ComplexEventPrice_184.setString("1735137");
      noComplexEvents_0_1_0.set(ComplexEventPrice_184);
      ComplexEvents_NoComplexEvents_184.insert(ComplexEventPrice_184.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_184(4);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_184);
      ComplexEvents_NoComplexEvents_184.insert(ComplexEventPriceBoundaryMethod_184.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_184;
      ComplexEventPriceBoundaryPrecision_184.setString("31.430000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_184);
      ComplexEvents_NoComplexEvents_184.insert(ComplexEventPriceBoundaryPrecision_184.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_184(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_184);
      ComplexEvents_NoComplexEvents_184.insert(ComplexEventPriceTimeType_184.getString());
      FIX::ComplexEventType ComplexEventType_184(4);
      noComplexEvents_0_1_0.set(ComplexEventType_184);
      ComplexEvents_NoComplexEvents_184.insert(ComplexEventType_184.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_184;
      ComplexOptPayoutAmount_184.setString("9001602");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_184);
      ComplexEvents_NoComplexEvents_184.insert(ComplexOptPayoutAmount_184.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_184);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_372;
        FIX::ComplexEventEndDate ComplexEventEndDate_372(FIX::UTCTIMESTAMP(14, 46, 11, 17, 3, 2001));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_372);
        ComplexEventDates_NoComplexEventDates_372.insert(ComplexEventEndDate_372.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_372(FIX::UTCTIMESTAMP(21, 0, 11, 27, 10, 2015));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_372);
        ComplexEventDates_NoComplexEventDates_372.insert(ComplexEventStartDate_372.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_372);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_755;
          FIX::ComplexEventEndTime ComplexEventEndTime_755(FIX::UTCTIMEONLY(20, 7, 28));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_755);
          ComplexEventTimes_NoComplexEventTimes_755.insert(ComplexEventEndTime_755.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_755(FIX::UTCTIMEONLY(2, 32, 40));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_755);
          ComplexEventTimes_NoComplexEventTimes_755.insert(ComplexEventStartTime_755.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_755);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_756;
          FIX::ComplexEventEndTime ComplexEventEndTime_756(FIX::UTCTIMEONLY(18, 15, 53));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_756);
          ComplexEventTimes_NoComplexEventTimes_756.insert(ComplexEventEndTime_756.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_756(FIX::UTCTIMEONLY(22, 9, 39));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_756);
          ComplexEventTimes_NoComplexEventTimes_756.insert(ComplexEventStartTime_756.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_756);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_757;
          FIX::ComplexEventEndTime ComplexEventEndTime_757(FIX::UTCTIMEONLY(11, 25, 28));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_757);
          ComplexEventTimes_NoComplexEventTimes_757.insert(ComplexEventEndTime_757.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_757(FIX::UTCTIMEONLY(19, 3, 57));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_757);
          ComplexEventTimes_NoComplexEventTimes_757.insert(ComplexEventStartTime_757.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_757);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_373;
        FIX::ComplexEventEndDate ComplexEventEndDate_373(FIX::UTCTIMESTAMP(4, 8, 12, 17, 12, 2016));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_373);
        ComplexEventDates_NoComplexEventDates_373.insert(ComplexEventEndDate_373.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_373(FIX::UTCTIMESTAMP(0, 23, 38, 27, 6, 2002));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_373);
        ComplexEventDates_NoComplexEventDates_373.insert(ComplexEventStartDate_373.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_373);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_758;
          FIX::ComplexEventEndTime ComplexEventEndTime_758(FIX::UTCTIMEONLY(9, 30, 52));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_758);
          ComplexEventTimes_NoComplexEventTimes_758.insert(ComplexEventEndTime_758.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_758(FIX::UTCTIMEONLY(8, 1, 38));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_758);
          ComplexEventTimes_NoComplexEventTimes_758.insert(ComplexEventStartTime_758.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_758);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
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
      multiset<string> EvntGrp_NoEvents_180;
      FIX::EventDate EventDate_180("LOCALMKTDATE_720294724");
      noEvents_0_1_0.set(EventDate_180);
      EvntGrp_NoEvents_180.insert(EventDate_180.getString());
      FIX::EventPx EventPx_180;
      EventPx_180.setString("17144925");
      noEvents_0_1_0.set(EventPx_180);
      EvntGrp_NoEvents_180.insert(EventPx_180.getString());
      FIX::EventText EventText_180("STRING_1733829261");
      noEvents_0_1_0.set(EventText_180);
      EvntGrp_NoEvents_180.insert(EventText_180.getString());
      FIX::EventTime EventTime_180(FIX::UTCTIMESTAMP(15, 17, 10, 20, 10, 2012));
      noEvents_0_1_0.set(EventTime_180);
      EvntGrp_NoEvents_180.insert(EventTime_180.getString());
      FIX::EventType EventType_180(17);
      noEvents_0_1_0.set(EventType_180);
      EvntGrp_NoEvents_180.insert(EventType_180.getString());
      all_values.push_back(EvntGrp_NoEvents_180);
      all_compo_names.insert("EvntGrp.NoEvents");

      noSettlOblig_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_181;
      FIX::EventDate EventDate_181("LOCALMKTDATE_980032730");
      noEvents_0_1_1.set(EventDate_181);
      EvntGrp_NoEvents_181.insert(EventDate_181.getString());
      FIX::EventPx EventPx_181;
      EventPx_181.setString("13758002");
      noEvents_0_1_1.set(EventPx_181);
      EvntGrp_NoEvents_181.insert(EventPx_181.getString());
      FIX::EventText EventText_181("STRING_1458674572");
      noEvents_0_1_1.set(EventText_181);
      EvntGrp_NoEvents_181.insert(EventText_181.getString());
      FIX::EventTime EventTime_181(FIX::UTCTIMESTAMP(10, 7, 38, 21, 1, 2017));
      noEvents_0_1_1.set(EventTime_181);
      EvntGrp_NoEvents_181.insert(EventTime_181.getString());
      FIX::EventType EventType_181(13);
      noEvents_0_1_1.set(EventType_181);
      EvntGrp_NoEvents_181.insert(EventType_181.getString());
      all_values.push_back(EvntGrp_NoEvents_181);
      all_compo_names.insert("EvntGrp.NoEvents");

      noSettlOblig_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_188;
      FIX::InstrumentPartyID InstrumentPartyID_188("STRING_403835958");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_188);
      InstrumentParties_NoInstrumentParties_188.insert(InstrumentPartyID_188.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_188('5');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_188);
      InstrumentParties_NoInstrumentParties_188.insert(InstrumentPartyIDSource_188.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_188(1647320307);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_188);
      InstrumentParties_NoInstrumentParties_188.insert(InstrumentPartyRole_188.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_188);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366;
        FIX::InstrumentPartySubID InstrumentPartySubID_366("STRING_1380120739");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_366);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366.insert(InstrumentPartySubID_366.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_366(502911260);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_366);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366.insert(InstrumentPartySubIDType_366.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367;
        FIX::InstrumentPartySubID InstrumentPartySubID_367("STRING_901241876");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_367);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367.insert(InstrumentPartySubID_367.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_367(1146355812);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_367);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367.insert(InstrumentPartySubIDType_367.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368;
        FIX::InstrumentPartySubID InstrumentPartySubID_368("STRING_1223205984");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_368);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368.insert(InstrumentPartySubID_368.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_368(468250791);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_368);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368.insert(InstrumentPartySubIDType_368.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noSettlOblig_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_189;
      FIX::InstrumentPartyID InstrumentPartyID_189("STRING_732701426");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_189);
      InstrumentParties_NoInstrumentParties_189.insert(InstrumentPartyID_189.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_189('7');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_189);
      InstrumentParties_NoInstrumentParties_189.insert(InstrumentPartyIDSource_189.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_189(641670006);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_189);
      InstrumentParties_NoInstrumentParties_189.insert(InstrumentPartyRole_189.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_189);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369;
        FIX::InstrumentPartySubID InstrumentPartySubID_369("STRING_395792851");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_369);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369.insert(InstrumentPartySubID_369.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_369(1398583470);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_369);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369.insert(InstrumentPartySubIDType_369.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370;
        FIX::InstrumentPartySubID InstrumentPartySubID_370("STRING_1917690304");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_370);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370.insert(InstrumentPartySubID_370.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_370(282802001);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_370);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370.insert(InstrumentPartySubIDType_370.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noSettlOblig_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_190;
      FIX::InstrumentPartyID InstrumentPartyID_190("STRING_636700319");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_190);
      InstrumentParties_NoInstrumentParties_190.insert(InstrumentPartyID_190.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_190('7');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_190);
      InstrumentParties_NoInstrumentParties_190.insert(InstrumentPartyIDSource_190.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_190(1658602299);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_190);
      InstrumentParties_NoInstrumentParties_190.insert(InstrumentPartyRole_190.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_190);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371;
        FIX::InstrumentPartySubID InstrumentPartySubID_371("STRING_751865626");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_371);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371.insert(InstrumentPartySubID_371.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_371(1589483453);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_371);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371.insert(InstrumentPartySubIDType_371.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      noSettlOblig_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_167;
      FIX::SecurityAltID SecurityAltID_167("STRING_1138247304");
      noSecurityAltID_0_1_0.set(SecurityAltID_167);
      SecAltIDGrp_NoSecurityAltID_167.insert(SecurityAltID_167.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_167("STRING_485884962");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_167);
      SecAltIDGrp_NoSecurityAltID_167.insert(SecurityAltIDSource_167.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_167);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_180;
    FIX::SecurityXML SecurityXML_181("XMLDATA_71249059");
    noSettlOblig_0_0.set(SecurityXML_181);
    FIX::SecurityXMLLen SecurityXMLLen_90(1600860965);
    noSettlOblig_0_0.set(SecurityXMLLen_90);
    FIX::SecurityXMLSchema SecurityXMLSchema_90("STRING_33908746");
    noSettlOblig_0_0.set(SecurityXMLSchema_90);
    SecurityXML_180.insert(SecurityXMLSchema_90.getString());
    all_values.push_back(SecurityXML_180);
    all_compo_names.insert("SecurityXML");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_138;
      FIX::PartyID PartyID_138("STRING_2004696923");
      noPartyIDs_0_1_0.set(PartyID_138);
      Parties_NoPartyIDs_138.insert(PartyID_138.getString());
      FIX::PartyIDSource PartyIDSource_138('F');
      noPartyIDs_0_1_0.set(PartyIDSource_138);
      Parties_NoPartyIDs_138.insert(PartyIDSource_138.getString());
      FIX::PartyRole PartyRole_138(3);
      noPartyIDs_0_1_0.set(PartyRole_138);
      Parties_NoPartyIDs_138.insert(PartyRole_138.getString());
      all_values.push_back(Parties_NoPartyIDs_138);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_299;
        FIX::PartySubID PartySubID_299("STRING_1920082720");
        noPartySubIDs_0_0_2_0.set(PartySubID_299);
        PtysSubGrp_NoPartySubIDs_299.insert(PartySubID_299.getString());
        FIX::PartySubIDType PartySubIDType_299(21);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_299);
        PtysSubGrp_NoPartySubIDs_299.insert(PartySubIDType_299.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_299);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSettlOblig_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_139;
      FIX::PartyID PartyID_139("STRING_1045143209");
      noPartyIDs_0_1_1.set(PartyID_139);
      Parties_NoPartyIDs_139.insert(PartyID_139.getString());
      FIX::PartyIDSource PartyIDSource_139('8');
      noPartyIDs_0_1_1.set(PartyIDSource_139);
      Parties_NoPartyIDs_139.insert(PartyIDSource_139.getString());
      FIX::PartyRole PartyRole_139(29);
      noPartyIDs_0_1_1.set(PartyRole_139);
      Parties_NoPartyIDs_139.insert(PartyRole_139.getString());
      all_values.push_back(Parties_NoPartyIDs_139);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_300;
        FIX::PartySubID PartySubID_300("STRING_1651656310");
        noPartySubIDs_0_1_2_0.set(PartySubID_300);
        PtysSubGrp_NoPartySubIDs_300.insert(PartySubID_300.getString());
        FIX::PartySubIDType PartySubIDType_300(24);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_300);
        PtysSubGrp_NoPartySubIDs_300.insert(PartySubIDType_300.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_300);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_301;
        FIX::PartySubID PartySubID_301("STRING_7580359");
        noPartySubIDs_0_1_2_1.set(PartySubID_301);
        PtysSubGrp_NoPartySubIDs_301.insert(PartySubID_301.getString());
        FIX::PartySubIDType PartySubIDType_301(31);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_301);
        PtysSubGrp_NoPartySubIDs_301.insert(PartySubIDType_301.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_301);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_302;
        FIX::PartySubID PartySubID_302("STRING_1885825011");
        noPartySubIDs_0_1_2_2.set(PartySubID_302);
        PtysSubGrp_NoPartySubIDs_302.insert(PartySubID_302.getString());
        FIX::PartySubIDType PartySubIDType_302(5);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_302);
        PtysSubGrp_NoPartySubIDs_302.insert(PartySubIDType_302.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_302);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noSettlOblig_0_0.addGroup(noPartyIDs_0_1_1);
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
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_29;
        FIX::SettlPartyID SettlPartyID_29("STRING_820215927");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_29);
        SettlParties_NoSettlPartyIDs_29.insert(SettlPartyID_29.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_29('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_29);
        SettlParties_NoSettlPartyIDs_29.insert(SettlPartyIDSource_29.getString());
        FIX::SettlPartyRole SettlPartyRole_29(1990755392);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_29);
        SettlParties_NoSettlPartyIDs_29.insert(SettlPartyRole_29.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_29);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_56;
          FIX::SettlPartySubID SettlPartySubID_56("STRING_1121745470");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_56);
          SettlPtysSubGrp_NoSettlPartySubIDs_56.insert(SettlPartySubID_56.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_56(431064255);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_56);
          SettlPtysSubGrp_NoSettlPartySubIDs_56.insert(SettlPartySubIDType_56.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_56);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_57;
          FIX::SettlPartySubID SettlPartySubID_57("STRING_562845210");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_57);
          SettlPtysSubGrp_NoSettlPartySubIDs_57.insert(SettlPartySubID_57.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_57(1607630432);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_57);
          SettlPtysSubGrp_NoSettlPartySubIDs_57.insert(SettlPartySubIDType_57.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_57);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noSettlOblig_0_0.addGroup(noSettlDetails_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_0_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_1;
      FIX::SettlObligSource SettlObligSource_1('2');
      noSettlDetails_0_1_1.set(SettlObligSource_1);
      SettlDetails_NoSettlDetails_1.insert(SettlObligSource_1.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_1);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_30;
        FIX::SettlPartyID SettlPartyID_30("STRING_1641539179");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_30);
        SettlParties_NoSettlPartyIDs_30.insert(SettlPartyID_30.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_30('3');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_30);
        SettlParties_NoSettlPartyIDs_30.insert(SettlPartyIDSource_30.getString());
        FIX::SettlPartyRole SettlPartyRole_30(2020919451);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_30);
        SettlParties_NoSettlPartyIDs_30.insert(SettlPartyRole_30.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_30);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_58;
          FIX::SettlPartySubID SettlPartySubID_58("STRING_1212275436");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_58);
          SettlPtysSubGrp_NoSettlPartySubIDs_58.insert(SettlPartySubID_58.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_58(17337136);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_58);
          SettlPtysSubGrp_NoSettlPartySubIDs_58.insert(SettlPartySubIDType_58.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_58);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_59;
          FIX::SettlPartySubID SettlPartySubID_59("STRING_1954100232");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_59);
          SettlPtysSubGrp_NoSettlPartySubIDs_59.insert(SettlPartySubID_59.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_59(746344263);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_59);
          SettlPtysSubGrp_NoSettlPartySubIDs_59.insert(SettlPartySubIDType_59.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_59);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_60;
          FIX::SettlPartySubID SettlPartySubID_60("STRING_1062480345");
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubID_60);
          SettlPtysSubGrp_NoSettlPartySubIDs_60.insert(SettlPartySubID_60.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_60(725571468);
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubIDType_60);
          SettlPtysSubGrp_NoSettlPartySubIDs_60.insert(SettlPartySubIDType_60.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_60);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_2);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      noSettlOblig_0_0.addGroup(noSettlDetails_0_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_0_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_2;
      FIX::SettlObligSource SettlObligSource_2('1');
      noSettlDetails_0_1_2.set(SettlObligSource_2);
      SettlDetails_NoSettlDetails_2.insert(SettlObligSource_2.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_2);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_31;
        FIX::SettlPartyID SettlPartyID_31("STRING_229744131");
        noSettlPartyIDs_0_2_2_0.set(SettlPartyID_31);
        SettlParties_NoSettlPartyIDs_31.insert(SettlPartyID_31.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_31('8');
        noSettlPartyIDs_0_2_2_0.set(SettlPartyIDSource_31);
        SettlParties_NoSettlPartyIDs_31.insert(SettlPartyIDSource_31.getString());
        FIX::SettlPartyRole SettlPartyRole_31(435971056);
        noSettlPartyIDs_0_2_2_0.set(SettlPartyRole_31);
        SettlParties_NoSettlPartyIDs_31.insert(SettlPartyRole_31.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_31);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_61;
          FIX::SettlPartySubID SettlPartySubID_61("STRING_584508950");
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubID_61);
          SettlPtysSubGrp_NoSettlPartySubIDs_61.insert(SettlPartySubID_61.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_61(1842134886);
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubIDType_61);
          SettlPtysSubGrp_NoSettlPartySubIDs_61.insert(SettlPartySubIDType_61.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_61);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        noSettlDetails_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
      }
      noSettlOblig_0_0.addGroup(noSettlDetails_0_1_2);
    }
    msg.addGroup(noSettlOblig_0_0);
  }
  {
    FIX50SP2::SettlementObligationReport::NoSettlOblig noSettlOblig_0_1;
    // SettlObligationInstructions.NoSettlOblig
    multiset<string> SettlObligationInstructions_NoSettlOblig_1;
    FIX::CcyAmt CcyAmt_1;
    CcyAmt_1.setString("5994905");
    noSettlOblig_0_1.set(CcyAmt_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(CcyAmt_1.getString());
    FIX::Currency Currency_74("JPY");
    noSettlOblig_0_1.set(Currency_74);
    SettlObligationInstructions_NoSettlOblig_1.insert(Currency_74.getString());
    FIX::EffectiveTime EffectiveTime_14(FIX::UTCTIMESTAMP(12, 10, 51, 2, 2, 2015));
    noSettlOblig_0_1.set(EffectiveTime_14);
    SettlObligationInstructions_NoSettlOblig_1.insert(EffectiveTime_14.getString());
    FIX::ExpireTime ExpireTime_23(FIX::UTCTIMESTAMP(4, 48, 37, 1, 8, 2009));
    noSettlOblig_0_1.set(ExpireTime_23);
    SettlObligationInstructions_NoSettlOblig_1.insert(ExpireTime_23.getString());
    FIX::LastUpdateTime LastUpdateTime_4(FIX::UTCTIMESTAMP(11, 13, 44, 12, 3, 2015));
    noSettlOblig_0_1.set(LastUpdateTime_4);
    SettlObligationInstructions_NoSettlOblig_1.insert(LastUpdateTime_4.getString());
    FIX::NetGrossInd NetGrossInd_7(1);
    noSettlOblig_0_1.set(NetGrossInd_7);
    SettlObligationInstructions_NoSettlOblig_1.insert(NetGrossInd_7.getString());
    FIX::SettlCurrAmt SettlCurrAmt_7;
    SettlCurrAmt_7.setString("10098118");
    noSettlOblig_0_1.set(SettlCurrAmt_7);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlCurrAmt_7.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_7;
    SettlCurrFxRate_7.setString("4137543");
    noSettlOblig_0_1.set(SettlCurrFxRate_7);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlCurrFxRate_7.getString());
    FIX::SettlCurrency SettlCurrency_34("CAN");
    noSettlOblig_0_1.set(SettlCurrency_34);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlCurrency_34.getString());
    FIX::SettlDate SettlDate_52("LOCALMKTDATE_998263288");
    noSettlOblig_0_1.set(SettlDate_52);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlDate_52.getString());
    FIX::SettlObligID SettlObligID_1("STRING_788154756");
    noSettlOblig_0_1.set(SettlObligID_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlObligID_1.getString());
    FIX::SettlObligRefID SettlObligRefID_1("STRING_2138816387");
    noSettlOblig_0_1.set(SettlObligRefID_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlObligRefID_1.getString());
    FIX::SettlObligTransType SettlObligTransType_1('C');
    noSettlOblig_0_1.set(SettlObligTransType_1);
    SettlObligationInstructions_NoSettlOblig_1.insert(SettlObligTransType_1.getString());
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_1);
    all_compo_names.insert("SettlObligationInstructions.NoSettlOblig");

    // Instrument
    multiset<string> Instrument_91;
    FIX::AttachmentPoint AttachmentPoint_91;
    AttachmentPoint_91.setString("64.950000");
    noSettlOblig_0_1.set(AttachmentPoint_91);
    Instrument_91.insert(AttachmentPoint_91.getString());
    FIX::CFICode CFICode_96("STRING_1411039225");
    noSettlOblig_0_1.set(CFICode_96);
    Instrument_91.insert(CFICode_96.getString());
    FIX::CPProgram CPProgram_91(99);
    noSettlOblig_0_1.set(CPProgram_91);
    Instrument_91.insert(CPProgram_91.getString());
    FIX::CPRegType CPRegType_91("STRING_1958973625");
    noSettlOblig_0_1.set(CPRegType_91);
    Instrument_91.insert(CPRegType_91.getString());
    FIX::CapPrice CapPrice_91;
    CapPrice_91.setString("1078599");
    noSettlOblig_0_1.set(CapPrice_91);
    Instrument_91.insert(CapPrice_91.getString());
    FIX::ContractMultiplier ContractMultiplier_91;
    ContractMultiplier_91.setString("8540060");
    noSettlOblig_0_1.set(ContractMultiplier_91);
    Instrument_91.insert(ContractMultiplier_91.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_91(1);
    noSettlOblig_0_1.set(ContractMultiplierUnit_91);
    Instrument_91.insert(ContractMultiplierUnit_91.getString());
    FIX::ContractSettlMonth ContractSettlMonth_91("MONTHYEAR_1515009569");
    noSettlOblig_0_1.set(ContractSettlMonth_91);
    Instrument_91.insert(ContractSettlMonth_91.getString());
    FIX::CountryOfIssue CountryOfIssue_91("COUNTRY_1573812676");
    noSettlOblig_0_1.set(CountryOfIssue_91);
    Instrument_91.insert(CountryOfIssue_91.getString());
    FIX::CouponPaymentDate CouponPaymentDate_91("LOCALMKTDATE_42538767");
    noSettlOblig_0_1.set(CouponPaymentDate_91);
    Instrument_91.insert(CouponPaymentDate_91.getString());
    FIX::CouponRate CouponRate_91;
    CouponRate_91.setString("80.490000");
    noSettlOblig_0_1.set(CouponRate_91);
    Instrument_91.insert(CouponRate_91.getString());
    FIX::CreditRating CreditRating_91("STRING_1787674794");
    noSettlOblig_0_1.set(CreditRating_91);
    Instrument_91.insert(CreditRating_91.getString());
    FIX::DatedDate DatedDate_91("LOCALMKTDATE_442854040");
    noSettlOblig_0_1.set(DatedDate_91);
    Instrument_91.insert(DatedDate_91.getString());
    FIX::DetachmentPoint DetachmentPoint_91;
    DetachmentPoint_91.setString("59.810000");
    noSettlOblig_0_1.set(DetachmentPoint_91);
    Instrument_91.insert(DetachmentPoint_91.getString());
    FIX::EncodedIssuer EncodedIssuer_91("DATA_2035554423");
    noSettlOblig_0_1.set(EncodedIssuer_91);
    Instrument_91.insert(EncodedIssuer_91.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_91(2055444750);
    noSettlOblig_0_1.set(EncodedIssuerLen_91);
    Instrument_91.insert(EncodedIssuerLen_91.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_91("DATA_1254367400");
    noSettlOblig_0_1.set(EncodedSecurityDesc_91);
    Instrument_91.insert(EncodedSecurityDesc_91.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_91(2090050637);
    noSettlOblig_0_1.set(EncodedSecurityDescLen_91);
    Instrument_91.insert(EncodedSecurityDescLen_91.getString());
    FIX::ExerciseStyle ExerciseStyle_91(0);
    noSettlOblig_0_1.set(ExerciseStyle_91);
    Instrument_91.insert(ExerciseStyle_91.getString());
    FIX::Factor Factor_91;
    Factor_91.setString("14835091");
    noSettlOblig_0_1.set(Factor_91);
    Instrument_91.insert(Factor_91.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_91(false);
    noSettlOblig_0_1.set(FlexProductEligibilityIndicator_91);
    Instrument_91.insert(FlexProductEligibilityIndicator_91.getString());
    FIX::FlexibleIndicator FlexibleIndicator_91(false);
    noSettlOblig_0_1.set(FlexibleIndicator_91);
    Instrument_91.insert(FlexibleIndicator_91.getString());
    FIX::FloorPrice FloorPrice_91;
    FloorPrice_91.setString("21410416");
    noSettlOblig_0_1.set(FloorPrice_91);
    Instrument_91.insert(FloorPrice_91.getString());
    FIX::FlowScheduleType FlowScheduleType_91(4);
    noSettlOblig_0_1.set(FlowScheduleType_91);
    Instrument_91.insert(FlowScheduleType_91.getString());
    FIX::InstrRegistry InstrRegistry_91("STRING_100753515");
    noSettlOblig_0_1.set(InstrRegistry_91);
    Instrument_91.insert(InstrRegistry_91.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_91('1');
    noSettlOblig_0_1.set(InstrmtAssignmentMethod_91);
    Instrument_91.insert(InstrmtAssignmentMethod_91.getString());
    FIX::InterestAccrualDate InterestAccrualDate_91("LOCALMKTDATE_1124288665");
    noSettlOblig_0_1.set(InterestAccrualDate_91);
    Instrument_91.insert(InterestAccrualDate_91.getString());
    FIX::IssueDate IssueDate_91("LOCALMKTDATE_1099016804");
    noSettlOblig_0_1.set(IssueDate_91);
    Instrument_91.insert(IssueDate_91.getString());
    FIX::Issuer Issuer_91("STRING_1875216254");
    noSettlOblig_0_1.set(Issuer_91);
    Instrument_91.insert(Issuer_91.getString());
    FIX::ListMethod ListMethod_91(1);
    noSettlOblig_0_1.set(ListMethod_91);
    Instrument_91.insert(ListMethod_91.getString());
    FIX::LocaleOfIssue LocaleOfIssue_91("STRING_555448760");
    noSettlOblig_0_1.set(LocaleOfIssue_91);
    Instrument_91.insert(LocaleOfIssue_91.getString());
    FIX::MaturityDate MaturityDate_91("LOCALMKTDATE_105919101");
    noSettlOblig_0_1.set(MaturityDate_91);
    Instrument_91.insert(MaturityDate_91.getString());
    FIX::MaturityMonthYear MaturityMonthYear_91("MONTHYEAR_379176982");
    noSettlOblig_0_1.set(MaturityMonthYear_91);
    Instrument_91.insert(MaturityMonthYear_91.getString());
    FIX::MaturityTime MaturityTime_91("TZTIMEONLY_149795048");
    noSettlOblig_0_1.set(MaturityTime_91);
    Instrument_91.insert(MaturityTime_91.getString());
    FIX::MinPriceIncrement MinPriceIncrement_91;
    MinPriceIncrement_91.setString("20648927");
    noSettlOblig_0_1.set(MinPriceIncrement_91);
    Instrument_91.insert(MinPriceIncrement_91.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_91;
    MinPriceIncrementAmount_91.setString("4870369");
    noSettlOblig_0_1.set(MinPriceIncrementAmount_91);
    Instrument_91.insert(MinPriceIncrementAmount_91.getString());
    FIX::NTPositionLimit NTPositionLimit_91(1003801138);
    noSettlOblig_0_1.set(NTPositionLimit_91);
    Instrument_91.insert(NTPositionLimit_91.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_91;
    NotionalPercentageOutstanding_91.setString("4.410000");
    noSettlOblig_0_1.set(NotionalPercentageOutstanding_91);
    Instrument_91.insert(NotionalPercentageOutstanding_91.getString());
    FIX::OptAttribute OptAttribute_91('2');
    noSettlOblig_0_1.set(OptAttribute_91);
    Instrument_91.insert(OptAttribute_91.getString());
    FIX::OptPayoutAmount OptPayoutAmount_91;
    OptPayoutAmount_91.setString("4301301");
    noSettlOblig_0_1.set(OptPayoutAmount_91);
    Instrument_91.insert(OptPayoutAmount_91.getString());
    FIX::OptPayoutType OptPayoutType_91(1);
    noSettlOblig_0_1.set(OptPayoutType_91);
    Instrument_91.insert(OptPayoutType_91.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_91;
    OriginalNotionalPercentageOutstanding_91.setString("9.200000");
    noSettlOblig_0_1.set(OriginalNotionalPercentageOutstanding_91);
    Instrument_91.insert(OriginalNotionalPercentageOutstanding_91.getString());
    FIX::Pool Pool_91("STRING_70321312");
    noSettlOblig_0_1.set(Pool_91);
    Instrument_91.insert(Pool_91.getString());
    FIX::PositionLimit PositionLimit_91(78659601);
    noSettlOblig_0_1.set(PositionLimit_91);
    Instrument_91.insert(PositionLimit_91.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_91("STRING_INX");
    noSettlOblig_0_1.set(PriceQuoteMethod_91);
    Instrument_91.insert(PriceQuoteMethod_91.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_91("STRING_2105875736");
    noSettlOblig_0_1.set(PriceUnitOfMeasure_91);
    Instrument_91.insert(PriceUnitOfMeasure_91.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_91;
    PriceUnitOfMeasureQty_91.setString("21341043");
    noSettlOblig_0_1.set(PriceUnitOfMeasureQty_91);
    Instrument_91.insert(PriceUnitOfMeasureQty_91.getString());
    FIX::Product Product_99(1);
    noSettlOblig_0_1.set(Product_99);
    Instrument_91.insert(Product_99.getString());
    FIX::ProductComplex ProductComplex_91("STRING_2048442725");
    noSettlOblig_0_1.set(ProductComplex_91);
    Instrument_91.insert(ProductComplex_91.getString());
    FIX::PutOrCall PutOrCall_91(1);
    noSettlOblig_0_1.set(PutOrCall_91);
    Instrument_91.insert(PutOrCall_91.getString());
    FIX::RedemptionDate RedemptionDate_91("LOCALMKTDATE_1176076171");
    noSettlOblig_0_1.set(RedemptionDate_91);
    Instrument_91.insert(RedemptionDate_91.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_91("STRING_623593748");
    noSettlOblig_0_1.set(RepoCollateralSecurityType_91);
    Instrument_91.insert(RepoCollateralSecurityType_91.getString());
    FIX::RepurchaseRate RepurchaseRate_91;
    RepurchaseRate_91.setString("59.550000");
    noSettlOblig_0_1.set(RepurchaseRate_91);
    Instrument_91.insert(RepurchaseRate_91.getString());
    FIX::RepurchaseTerm RepurchaseTerm_91(1169634150);
    noSettlOblig_0_1.set(RepurchaseTerm_91);
    Instrument_91.insert(RepurchaseTerm_91.getString());
    FIX::RestructuringType RestructuringType_91("STRING_FR");
    noSettlOblig_0_1.set(RestructuringType_91);
    Instrument_91.insert(RestructuringType_91.getString());
    FIX::SecurityDesc SecurityDesc_91("STRING_2041269470");
    noSettlOblig_0_1.set(SecurityDesc_91);
    Instrument_91.insert(SecurityDesc_91.getString());
    FIX::SecurityExchange SecurityExchange_91("EXCHANGE_109211999");
    noSettlOblig_0_1.set(SecurityExchange_91);
    Instrument_91.insert(SecurityExchange_91.getString());
    FIX::SecurityGroup SecurityGroup_91("STRING_1332845249");
    noSettlOblig_0_1.set(SecurityGroup_91);
    Instrument_91.insert(SecurityGroup_91.getString());
    FIX::SecurityID SecurityID_91("STRING_992802626");
    noSettlOblig_0_1.set(SecurityID_91);
    Instrument_91.insert(SecurityID_91.getString());
    FIX::SecurityIDSource SecurityIDSource_91("STRING_6");
    noSettlOblig_0_1.set(SecurityIDSource_91);
    Instrument_91.insert(SecurityIDSource_91.getString());
    FIX::SecurityStatus SecurityStatus_92("STRING_1");
    noSettlOblig_0_1.set(SecurityStatus_92);
    Instrument_91.insert(SecurityStatus_92.getString());
    FIX::SecuritySubType SecuritySubType_95("STRING_1548251386");
    noSettlOblig_0_1.set(SecuritySubType_95);
    Instrument_91.insert(SecuritySubType_95.getString());
    FIX::SecurityType SecurityType_99("STRING_DUAL");
    noSettlOblig_0_1.set(SecurityType_99);
    Instrument_91.insert(SecurityType_99.getString());
    FIX::Seniority Seniority_91("STRING_SD");
    noSettlOblig_0_1.set(Seniority_91);
    Instrument_91.insert(Seniority_91.getString());
    FIX::SettlMethod SettlMethod_91('C');
    noSettlOblig_0_1.set(SettlMethod_91);
    Instrument_91.insert(SettlMethod_91.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_91("STRING_2007756433");
    noSettlOblig_0_1.set(SettleOnOpenFlag_91);
    Instrument_91.insert(SettleOnOpenFlag_91.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_91("STRING_1167196938");
    noSettlOblig_0_1.set(StateOrProvinceOfIssue_91);
    Instrument_91.insert(StateOrProvinceOfIssue_91.getString());
    FIX::StrikeCurrency StrikeCurrency_91("GBP");
    noSettlOblig_0_1.set(StrikeCurrency_91);
    Instrument_91.insert(StrikeCurrency_91.getString());
    FIX::StrikeMultiplier StrikeMultiplier_91;
    StrikeMultiplier_91.setString("10217598");
    noSettlOblig_0_1.set(StrikeMultiplier_91);
    Instrument_91.insert(StrikeMultiplier_91.getString());
    FIX::StrikePrice StrikePrice_91;
    StrikePrice_91.setString("9844940");
    noSettlOblig_0_1.set(StrikePrice_91);
    Instrument_91.insert(StrikePrice_91.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_91(3);
    noSettlOblig_0_1.set(StrikePriceBoundaryMethod_91);
    Instrument_91.insert(StrikePriceBoundaryMethod_91.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_91;
    StrikePriceBoundaryPrecision_91.setString("7.300000");
    noSettlOblig_0_1.set(StrikePriceBoundaryPrecision_91);
    Instrument_91.insert(StrikePriceBoundaryPrecision_91.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_91(4);
    noSettlOblig_0_1.set(StrikePriceDeterminationMethod_91);
    Instrument_91.insert(StrikePriceDeterminationMethod_91.getString());
    FIX::StrikeValue StrikeValue_91;
    StrikeValue_91.setString("13154883");
    noSettlOblig_0_1.set(StrikeValue_91);
    Instrument_91.insert(StrikeValue_91.getString());
    FIX::Symbol Symbol_91("STRING_105420335");
    noSettlOblig_0_1.set(Symbol_91);
    Instrument_91.insert(Symbol_91.getString());
    FIX::SymbolSfx SymbolSfx_91("STRING_WI");
    noSettlOblig_0_1.set(SymbolSfx_91);
    Instrument_91.insert(SymbolSfx_91.getString());
    FIX::TimeUnit TimeUnit_91("STRING_D");
    noSettlOblig_0_1.set(TimeUnit_91);
    Instrument_91.insert(TimeUnit_91.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_91(2);
    noSettlOblig_0_1.set(UnderlyingPriceDeterminationMethod_91);
    Instrument_91.insert(UnderlyingPriceDeterminationMethod_91.getString());
    FIX::UnitOfMeasure UnitOfMeasure_91("STRING_MWh");
    noSettlOblig_0_1.set(UnitOfMeasure_91);
    Instrument_91.insert(UnitOfMeasure_91.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_91;
    UnitOfMeasureQty_91.setString("14081422");
    noSettlOblig_0_1.set(UnitOfMeasureQty_91);
    Instrument_91.insert(UnitOfMeasureQty_91.getString());
    FIX::ValuationMethod ValuationMethod_91("STRING_FUTDA");
    noSettlOblig_0_1.set(ValuationMethod_91);
    Instrument_91.insert(ValuationMethod_91.getString());
    all_values.push_back(Instrument_91);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_185;
      FIX::ComplexEventCondition ComplexEventCondition_185(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_185);
      ComplexEvents_NoComplexEvents_185.insert(ComplexEventCondition_185.getString());
      FIX::ComplexEventPrice ComplexEventPrice_185;
      ComplexEventPrice_185.setString("21436976");
      noComplexEvents_1_1_0.set(ComplexEventPrice_185);
      ComplexEvents_NoComplexEvents_185.insert(ComplexEventPrice_185.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_185(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_185);
      ComplexEvents_NoComplexEvents_185.insert(ComplexEventPriceBoundaryMethod_185.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_185;
      ComplexEventPriceBoundaryPrecision_185.setString("3.500000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_185);
      ComplexEvents_NoComplexEvents_185.insert(ComplexEventPriceBoundaryPrecision_185.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_185(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_185);
      ComplexEvents_NoComplexEvents_185.insert(ComplexEventPriceTimeType_185.getString());
      FIX::ComplexEventType ComplexEventType_185(6);
      noComplexEvents_1_1_0.set(ComplexEventType_185);
      ComplexEvents_NoComplexEvents_185.insert(ComplexEventType_185.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_185;
      ComplexOptPayoutAmount_185.setString("20877629");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_185);
      ComplexEvents_NoComplexEvents_185.insert(ComplexOptPayoutAmount_185.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_185);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_374;
        FIX::ComplexEventEndDate ComplexEventEndDate_374(FIX::UTCTIMESTAMP(3, 54, 17, 5, 12, 2003));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_374);
        ComplexEventDates_NoComplexEventDates_374.insert(ComplexEventEndDate_374.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_374(FIX::UTCTIMESTAMP(17, 37, 29, 8, 4, 2006));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_374);
        ComplexEventDates_NoComplexEventDates_374.insert(ComplexEventStartDate_374.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_374);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_759;
          FIX::ComplexEventEndTime ComplexEventEndTime_759(FIX::UTCTIMEONLY(12, 47, 36));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_759);
          ComplexEventTimes_NoComplexEventTimes_759.insert(ComplexEventEndTime_759.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_759(FIX::UTCTIMEONLY(16, 20, 33));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_759);
          ComplexEventTimes_NoComplexEventTimes_759.insert(ComplexEventStartTime_759.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_759);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_760;
          FIX::ComplexEventEndTime ComplexEventEndTime_760(FIX::UTCTIMEONLY(11, 5, 9));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_760);
          ComplexEventTimes_NoComplexEventTimes_760.insert(ComplexEventEndTime_760.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_760(FIX::UTCTIMEONLY(19, 38, 8));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_760);
          ComplexEventTimes_NoComplexEventTimes_760.insert(ComplexEventStartTime_760.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_760);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_761;
          FIX::ComplexEventEndTime ComplexEventEndTime_761(FIX::UTCTIMEONLY(17, 54, 37));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_761);
          ComplexEventTimes_NoComplexEventTimes_761.insert(ComplexEventEndTime_761.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_761(FIX::UTCTIMEONLY(17, 4, 24));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_761);
          ComplexEventTimes_NoComplexEventTimes_761.insert(ComplexEventStartTime_761.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_761);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_182;
      FIX::EventDate EventDate_182("LOCALMKTDATE_775823553");
      noEvents_1_1_0.set(EventDate_182);
      EvntGrp_NoEvents_182.insert(EventDate_182.getString());
      FIX::EventPx EventPx_182;
      EventPx_182.setString("5121606");
      noEvents_1_1_0.set(EventPx_182);
      EvntGrp_NoEvents_182.insert(EventPx_182.getString());
      FIX::EventText EventText_182("STRING_1661177119");
      noEvents_1_1_0.set(EventText_182);
      EvntGrp_NoEvents_182.insert(EventText_182.getString());
      FIX::EventTime EventTime_182(FIX::UTCTIMESTAMP(6, 56, 19, 26, 12, 2017));
      noEvents_1_1_0.set(EventTime_182);
      EvntGrp_NoEvents_182.insert(EventTime_182.getString());
      FIX::EventType EventType_182(19);
      noEvents_1_1_0.set(EventType_182);
      EvntGrp_NoEvents_182.insert(EventType_182.getString());
      all_values.push_back(EvntGrp_NoEvents_182);
      all_compo_names.insert("EvntGrp.NoEvents");

      noSettlOblig_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_191;
      FIX::InstrumentPartyID InstrumentPartyID_191("STRING_1115798527");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_191);
      InstrumentParties_NoInstrumentParties_191.insert(InstrumentPartyID_191.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_191('2');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_191);
      InstrumentParties_NoInstrumentParties_191.insert(InstrumentPartyIDSource_191.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_191(1558033283);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_191);
      InstrumentParties_NoInstrumentParties_191.insert(InstrumentPartyRole_191.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_191);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372;
        FIX::InstrumentPartySubID InstrumentPartySubID_372("STRING_228391389");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_372);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372.insert(InstrumentPartySubID_372.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_372(1873332392);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_372);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372.insert(InstrumentPartySubIDType_372.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noSettlOblig_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_168;
      FIX::SecurityAltID SecurityAltID_168("STRING_1414353496");
      noSecurityAltID_1_1_0.set(SecurityAltID_168);
      SecAltIDGrp_NoSecurityAltID_168.insert(SecurityAltID_168.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_168("STRING_2128910830");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_168);
      SecAltIDGrp_NoSecurityAltID_168.insert(SecurityAltIDSource_168.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_168);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_169;
      FIX::SecurityAltID SecurityAltID_169("STRING_1869720880");
      noSecurityAltID_1_1_1.set(SecurityAltID_169);
      SecAltIDGrp_NoSecurityAltID_169.insert(SecurityAltID_169.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_169("STRING_1685493464");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_169);
      SecAltIDGrp_NoSecurityAltID_169.insert(SecurityAltIDSource_169.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_169);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_182;
    FIX::SecurityXML SecurityXML_183("XMLDATA_1725536335");
    noSettlOblig_0_1.set(SecurityXML_183);
    FIX::SecurityXMLLen SecurityXMLLen_91(2002985074);
    noSettlOblig_0_1.set(SecurityXMLLen_91);
    FIX::SecurityXMLSchema SecurityXMLSchema_91("STRING_1721971281");
    noSettlOblig_0_1.set(SecurityXMLSchema_91);
    SecurityXML_182.insert(SecurityXMLSchema_91.getString());
    all_values.push_back(SecurityXML_182);
    all_compo_names.insert("SecurityXML");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_140;
      FIX::PartyID PartyID_140("STRING_1881756380");
      noPartyIDs_1_1_0.set(PartyID_140);
      Parties_NoPartyIDs_140.insert(PartyID_140.getString());
      FIX::PartyIDSource PartyIDSource_140('C');
      noPartyIDs_1_1_0.set(PartyIDSource_140);
      Parties_NoPartyIDs_140.insert(PartyIDSource_140.getString());
      FIX::PartyRole PartyRole_140(24);
      noPartyIDs_1_1_0.set(PartyRole_140);
      Parties_NoPartyIDs_140.insert(PartyRole_140.getString());
      all_values.push_back(Parties_NoPartyIDs_140);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_303;
        FIX::PartySubID PartySubID_303("STRING_1319323791");
        noPartySubIDs_1_0_2_0.set(PartySubID_303);
        PtysSubGrp_NoPartySubIDs_303.insert(PartySubID_303.getString());
        FIX::PartySubIDType PartySubIDType_303(29);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_303);
        PtysSubGrp_NoPartySubIDs_303.insert(PartySubIDType_303.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_303);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noSettlOblig_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_141;
      FIX::PartyID PartyID_141("STRING_473267846");
      noPartyIDs_1_1_1.set(PartyID_141);
      Parties_NoPartyIDs_141.insert(PartyID_141.getString());
      FIX::PartyIDSource PartyIDSource_141('4');
      noPartyIDs_1_1_1.set(PartyIDSource_141);
      Parties_NoPartyIDs_141.insert(PartyIDSource_141.getString());
      FIX::PartyRole PartyRole_141(64);
      noPartyIDs_1_1_1.set(PartyRole_141);
      Parties_NoPartyIDs_141.insert(PartyRole_141.getString());
      all_values.push_back(Parties_NoPartyIDs_141);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_304;
        FIX::PartySubID PartySubID_304("STRING_956035327");
        noPartySubIDs_1_1_2_0.set(PartySubID_304);
        PtysSubGrp_NoPartySubIDs_304.insert(PartySubID_304.getString());
        FIX::PartySubIDType PartySubIDType_304(22);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_304);
        PtysSubGrp_NoPartySubIDs_304.insert(PartySubIDType_304.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_304);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_305;
        FIX::PartySubID PartySubID_305("STRING_1761888178");
        noPartySubIDs_1_1_2_1.set(PartySubID_305);
        PtysSubGrp_NoPartySubIDs_305.insert(PartySubID_305.getString());
        FIX::PartySubIDType PartySubIDType_305(16);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_305);
        PtysSubGrp_NoPartySubIDs_305.insert(PartySubIDType_305.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_305);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noSettlOblig_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_1_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_3;
      FIX::SettlObligSource SettlObligSource_3('2');
      noSettlDetails_1_1_0.set(SettlObligSource_3);
      SettlDetails_NoSettlDetails_3.insert(SettlObligSource_3.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_3);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_32;
        FIX::SettlPartyID SettlPartyID_32("STRING_151318018");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_32);
        SettlParties_NoSettlPartyIDs_32.insert(SettlPartyID_32.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_32('1');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_32);
        SettlParties_NoSettlPartyIDs_32.insert(SettlPartyIDSource_32.getString());
        FIX::SettlPartyRole SettlPartyRole_32(4677628);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_32);
        SettlParties_NoSettlPartyIDs_32.insert(SettlPartyRole_32.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_32);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_62;
          FIX::SettlPartySubID SettlPartySubID_62("STRING_1088497433");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_62);
          SettlPtysSubGrp_NoSettlPartySubIDs_62.insert(SettlPartySubID_62.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_62(1626368639);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_62);
          SettlPtysSubGrp_NoSettlPartySubIDs_62.insert(SettlPartySubIDType_62.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_62);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_63;
          FIX::SettlPartySubID SettlPartySubID_63("STRING_1794062903");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_63);
          SettlPtysSubGrp_NoSettlPartySubIDs_63.insert(SettlPartySubID_63.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_63(1069924615);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_63);
          SettlPtysSubGrp_NoSettlPartySubIDs_63.insert(SettlPartySubIDType_63.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_63);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_33;
        FIX::SettlPartyID SettlPartyID_33("STRING_1348605871");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_33);
        SettlParties_NoSettlPartyIDs_33.insert(SettlPartyID_33.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_33('1');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_33);
        SettlParties_NoSettlPartyIDs_33.insert(SettlPartyIDSource_33.getString());
        FIX::SettlPartyRole SettlPartyRole_33(647977303);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_33);
        SettlParties_NoSettlPartyIDs_33.insert(SettlPartyRole_33.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_33);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_64;
          FIX::SettlPartySubID SettlPartySubID_64("STRING_906560353");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_64);
          SettlPtysSubGrp_NoSettlPartySubIDs_64.insert(SettlPartySubID_64.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_64(861748997);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_64);
          SettlPtysSubGrp_NoSettlPartySubIDs_64.insert(SettlPartySubIDType_64.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_64);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_65;
          FIX::SettlPartySubID SettlPartySubID_65("STRING_938380030");
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubID_65);
          SettlPtysSubGrp_NoSettlPartySubIDs_65.insert(SettlPartySubID_65.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_65(1450060591);
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubIDType_65);
          SettlPtysSubGrp_NoSettlPartySubIDs_65.insert(SettlPartySubIDType_65.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_65);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_34;
        FIX::SettlPartyID SettlPartyID_34("STRING_1157213475");
        noSettlPartyIDs_1_0_2_2.set(SettlPartyID_34);
        SettlParties_NoSettlPartyIDs_34.insert(SettlPartyID_34.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_34('1');
        noSettlPartyIDs_1_0_2_2.set(SettlPartyIDSource_34);
        SettlParties_NoSettlPartyIDs_34.insert(SettlPartyIDSource_34.getString());
        FIX::SettlPartyRole SettlPartyRole_34(621900735);
        noSettlPartyIDs_1_0_2_2.set(SettlPartyRole_34);
        SettlParties_NoSettlPartyIDs_34.insert(SettlPartyRole_34.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_34);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_66;
          FIX::SettlPartySubID SettlPartySubID_66("STRING_223738603");
          noSettlPartySubIDs_1_0_2_3_0.set(SettlPartySubID_66);
          SettlPtysSubGrp_NoSettlPartySubIDs_66.insert(SettlPartySubID_66.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_66(2043596111);
          noSettlPartySubIDs_1_0_2_3_0.set(SettlPartySubIDType_66);
          SettlPtysSubGrp_NoSettlPartySubIDs_66.insert(SettlPartySubIDType_66.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_66);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_67;
          FIX::SettlPartySubID SettlPartySubID_67("STRING_474940369");
          noSettlPartySubIDs_1_0_2_3_1.set(SettlPartySubID_67);
          SettlPtysSubGrp_NoSettlPartySubIDs_67.insert(SettlPartySubID_67.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_67(1962063786);
          noSettlPartySubIDs_1_0_2_3_1.set(SettlPartySubIDType_67);
          SettlPtysSubGrp_NoSettlPartySubIDs_67.insert(SettlPartySubIDType_67.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_67);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_2);
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
    CcyAmt_2.setString("8521477");
    noSettlOblig_0_2.set(CcyAmt_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(CcyAmt_2.getString());
    FIX::Currency Currency_75("GBP");
    noSettlOblig_0_2.set(Currency_75);
    SettlObligationInstructions_NoSettlOblig_2.insert(Currency_75.getString());
    FIX::EffectiveTime EffectiveTime_15(FIX::UTCTIMESTAMP(8, 1, 49, 2, 11, 2005));
    noSettlOblig_0_2.set(EffectiveTime_15);
    SettlObligationInstructions_NoSettlOblig_2.insert(EffectiveTime_15.getString());
    FIX::ExpireTime ExpireTime_24(FIX::UTCTIMESTAMP(3, 9, 28, 22, 9, 2014));
    noSettlOblig_0_2.set(ExpireTime_24);
    SettlObligationInstructions_NoSettlOblig_2.insert(ExpireTime_24.getString());
    FIX::LastUpdateTime LastUpdateTime_5(FIX::UTCTIMESTAMP(6, 34, 2, 16, 10, 2016));
    noSettlOblig_0_2.set(LastUpdateTime_5);
    SettlObligationInstructions_NoSettlOblig_2.insert(LastUpdateTime_5.getString());
    FIX::NetGrossInd NetGrossInd_8(2);
    noSettlOblig_0_2.set(NetGrossInd_8);
    SettlObligationInstructions_NoSettlOblig_2.insert(NetGrossInd_8.getString());
    FIX::SettlCurrAmt SettlCurrAmt_8;
    SettlCurrAmt_8.setString("17039371");
    noSettlOblig_0_2.set(SettlCurrAmt_8);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlCurrAmt_8.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_8;
    SettlCurrFxRate_8.setString("9439982");
    noSettlOblig_0_2.set(SettlCurrFxRate_8);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlCurrFxRate_8.getString());
    FIX::SettlCurrency SettlCurrency_35("CHF");
    noSettlOblig_0_2.set(SettlCurrency_35);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlCurrency_35.getString());
    FIX::SettlDate SettlDate_53("LOCALMKTDATE_1418938619");
    noSettlOblig_0_2.set(SettlDate_53);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlDate_53.getString());
    FIX::SettlObligID SettlObligID_2("STRING_2024569959");
    noSettlOblig_0_2.set(SettlObligID_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlObligID_2.getString());
    FIX::SettlObligRefID SettlObligRefID_2("STRING_304713797");
    noSettlOblig_0_2.set(SettlObligRefID_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlObligRefID_2.getString());
    FIX::SettlObligTransType SettlObligTransType_2('C');
    noSettlOblig_0_2.set(SettlObligTransType_2);
    SettlObligationInstructions_NoSettlOblig_2.insert(SettlObligTransType_2.getString());
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_2);
    all_compo_names.insert("SettlObligationInstructions.NoSettlOblig");

    // Instrument
    multiset<string> Instrument_92;
    FIX::AttachmentPoint AttachmentPoint_92;
    AttachmentPoint_92.setString("46.270000");
    noSettlOblig_0_2.set(AttachmentPoint_92);
    Instrument_92.insert(AttachmentPoint_92.getString());
    FIX::CFICode CFICode_97("STRING_877192573");
    noSettlOblig_0_2.set(CFICode_97);
    Instrument_92.insert(CFICode_97.getString());
    FIX::CPProgram CPProgram_92(1);
    noSettlOblig_0_2.set(CPProgram_92);
    Instrument_92.insert(CPProgram_92.getString());
    FIX::CPRegType CPRegType_92("STRING_687154700");
    noSettlOblig_0_2.set(CPRegType_92);
    Instrument_92.insert(CPRegType_92.getString());
    FIX::CapPrice CapPrice_92;
    CapPrice_92.setString("1383172");
    noSettlOblig_0_2.set(CapPrice_92);
    Instrument_92.insert(CapPrice_92.getString());
    FIX::ContractMultiplier ContractMultiplier_92;
    ContractMultiplier_92.setString("16301893");
    noSettlOblig_0_2.set(ContractMultiplier_92);
    Instrument_92.insert(ContractMultiplier_92.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_92(0);
    noSettlOblig_0_2.set(ContractMultiplierUnit_92);
    Instrument_92.insert(ContractMultiplierUnit_92.getString());
    FIX::ContractSettlMonth ContractSettlMonth_92("MONTHYEAR_1551603132");
    noSettlOblig_0_2.set(ContractSettlMonth_92);
    Instrument_92.insert(ContractSettlMonth_92.getString());
    FIX::CountryOfIssue CountryOfIssue_92("COUNTRY_1524436515");
    noSettlOblig_0_2.set(CountryOfIssue_92);
    Instrument_92.insert(CountryOfIssue_92.getString());
    FIX::CouponPaymentDate CouponPaymentDate_92("LOCALMKTDATE_820666009");
    noSettlOblig_0_2.set(CouponPaymentDate_92);
    Instrument_92.insert(CouponPaymentDate_92.getString());
    FIX::CouponRate CouponRate_92;
    CouponRate_92.setString("3.930000");
    noSettlOblig_0_2.set(CouponRate_92);
    Instrument_92.insert(CouponRate_92.getString());
    FIX::CreditRating CreditRating_92("STRING_1065262956");
    noSettlOblig_0_2.set(CreditRating_92);
    Instrument_92.insert(CreditRating_92.getString());
    FIX::DatedDate DatedDate_92("LOCALMKTDATE_1427853172");
    noSettlOblig_0_2.set(DatedDate_92);
    Instrument_92.insert(DatedDate_92.getString());
    FIX::DetachmentPoint DetachmentPoint_92;
    DetachmentPoint_92.setString("35.260000");
    noSettlOblig_0_2.set(DetachmentPoint_92);
    Instrument_92.insert(DetachmentPoint_92.getString());
    FIX::EncodedIssuer EncodedIssuer_92("DATA_1938162116");
    noSettlOblig_0_2.set(EncodedIssuer_92);
    Instrument_92.insert(EncodedIssuer_92.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_92(535533989);
    noSettlOblig_0_2.set(EncodedIssuerLen_92);
    Instrument_92.insert(EncodedIssuerLen_92.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_92("DATA_1686983956");
    noSettlOblig_0_2.set(EncodedSecurityDesc_92);
    Instrument_92.insert(EncodedSecurityDesc_92.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_92(1570137982);
    noSettlOblig_0_2.set(EncodedSecurityDescLen_92);
    Instrument_92.insert(EncodedSecurityDescLen_92.getString());
    FIX::ExerciseStyle ExerciseStyle_92(0);
    noSettlOblig_0_2.set(ExerciseStyle_92);
    Instrument_92.insert(ExerciseStyle_92.getString());
    FIX::Factor Factor_92;
    Factor_92.setString("17752807");
    noSettlOblig_0_2.set(Factor_92);
    Instrument_92.insert(Factor_92.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_92(true);
    noSettlOblig_0_2.set(FlexProductEligibilityIndicator_92);
    Instrument_92.insert(FlexProductEligibilityIndicator_92.getString());
    FIX::FlexibleIndicator FlexibleIndicator_92(true);
    noSettlOblig_0_2.set(FlexibleIndicator_92);
    Instrument_92.insert(FlexibleIndicator_92.getString());
    FIX::FloorPrice FloorPrice_92;
    FloorPrice_92.setString("16140483");
    noSettlOblig_0_2.set(FloorPrice_92);
    Instrument_92.insert(FloorPrice_92.getString());
    FIX::FlowScheduleType FlowScheduleType_92(1);
    noSettlOblig_0_2.set(FlowScheduleType_92);
    Instrument_92.insert(FlowScheduleType_92.getString());
    FIX::InstrRegistry InstrRegistry_92("STRING_428121695");
    noSettlOblig_0_2.set(InstrRegistry_92);
    Instrument_92.insert(InstrRegistry_92.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_92('1');
    noSettlOblig_0_2.set(InstrmtAssignmentMethod_92);
    Instrument_92.insert(InstrmtAssignmentMethod_92.getString());
    FIX::InterestAccrualDate InterestAccrualDate_92("LOCALMKTDATE_1661193992");
    noSettlOblig_0_2.set(InterestAccrualDate_92);
    Instrument_92.insert(InterestAccrualDate_92.getString());
    FIX::IssueDate IssueDate_92("LOCALMKTDATE_1847060314");
    noSettlOblig_0_2.set(IssueDate_92);
    Instrument_92.insert(IssueDate_92.getString());
    FIX::Issuer Issuer_92("STRING_1553640822");
    noSettlOblig_0_2.set(Issuer_92);
    Instrument_92.insert(Issuer_92.getString());
    FIX::ListMethod ListMethod_92(1);
    noSettlOblig_0_2.set(ListMethod_92);
    Instrument_92.insert(ListMethod_92.getString());
    FIX::LocaleOfIssue LocaleOfIssue_92("STRING_304524811");
    noSettlOblig_0_2.set(LocaleOfIssue_92);
    Instrument_92.insert(LocaleOfIssue_92.getString());
    FIX::MaturityDate MaturityDate_92("LOCALMKTDATE_859711801");
    noSettlOblig_0_2.set(MaturityDate_92);
    Instrument_92.insert(MaturityDate_92.getString());
    FIX::MaturityMonthYear MaturityMonthYear_92("MONTHYEAR_695616715");
    noSettlOblig_0_2.set(MaturityMonthYear_92);
    Instrument_92.insert(MaturityMonthYear_92.getString());
    FIX::MaturityTime MaturityTime_92("TZTIMEONLY_272692715");
    noSettlOblig_0_2.set(MaturityTime_92);
    Instrument_92.insert(MaturityTime_92.getString());
    FIX::MinPriceIncrement MinPriceIncrement_92;
    MinPriceIncrement_92.setString("15468665");
    noSettlOblig_0_2.set(MinPriceIncrement_92);
    Instrument_92.insert(MinPriceIncrement_92.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_92;
    MinPriceIncrementAmount_92.setString("8339339");
    noSettlOblig_0_2.set(MinPriceIncrementAmount_92);
    Instrument_92.insert(MinPriceIncrementAmount_92.getString());
    FIX::NTPositionLimit NTPositionLimit_92(1902882046);
    noSettlOblig_0_2.set(NTPositionLimit_92);
    Instrument_92.insert(NTPositionLimit_92.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_92;
    NotionalPercentageOutstanding_92.setString("63.160000");
    noSettlOblig_0_2.set(NotionalPercentageOutstanding_92);
    Instrument_92.insert(NotionalPercentageOutstanding_92.getString());
    FIX::OptAttribute OptAttribute_92('2');
    noSettlOblig_0_2.set(OptAttribute_92);
    Instrument_92.insert(OptAttribute_92.getString());
    FIX::OptPayoutAmount OptPayoutAmount_92;
    OptPayoutAmount_92.setString("12798349");
    noSettlOblig_0_2.set(OptPayoutAmount_92);
    Instrument_92.insert(OptPayoutAmount_92.getString());
    FIX::OptPayoutType OptPayoutType_92(2);
    noSettlOblig_0_2.set(OptPayoutType_92);
    Instrument_92.insert(OptPayoutType_92.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_92;
    OriginalNotionalPercentageOutstanding_92.setString("38.080000");
    noSettlOblig_0_2.set(OriginalNotionalPercentageOutstanding_92);
    Instrument_92.insert(OriginalNotionalPercentageOutstanding_92.getString());
    FIX::Pool Pool_92("STRING_197614221");
    noSettlOblig_0_2.set(Pool_92);
    Instrument_92.insert(Pool_92.getString());
    FIX::PositionLimit PositionLimit_92(783821850);
    noSettlOblig_0_2.set(PositionLimit_92);
    Instrument_92.insert(PositionLimit_92.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_92("STRING_INT");
    noSettlOblig_0_2.set(PriceQuoteMethod_92);
    Instrument_92.insert(PriceQuoteMethod_92.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_92("STRING_2135776338");
    noSettlOblig_0_2.set(PriceUnitOfMeasure_92);
    Instrument_92.insert(PriceUnitOfMeasure_92.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_92;
    PriceUnitOfMeasureQty_92.setString("13193558");
    noSettlOblig_0_2.set(PriceUnitOfMeasureQty_92);
    Instrument_92.insert(PriceUnitOfMeasureQty_92.getString());
    FIX::Product Product_100(3);
    noSettlOblig_0_2.set(Product_100);
    Instrument_92.insert(Product_100.getString());
    FIX::ProductComplex ProductComplex_92("STRING_1558430672");
    noSettlOblig_0_2.set(ProductComplex_92);
    Instrument_92.insert(ProductComplex_92.getString());
    FIX::PutOrCall PutOrCall_92(1);
    noSettlOblig_0_2.set(PutOrCall_92);
    Instrument_92.insert(PutOrCall_92.getString());
    FIX::RedemptionDate RedemptionDate_92("LOCALMKTDATE_91224763");
    noSettlOblig_0_2.set(RedemptionDate_92);
    Instrument_92.insert(RedemptionDate_92.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_92("STRING_2063121464");
    noSettlOblig_0_2.set(RepoCollateralSecurityType_92);
    Instrument_92.insert(RepoCollateralSecurityType_92.getString());
    FIX::RepurchaseRate RepurchaseRate_92;
    RepurchaseRate_92.setString("30.890000");
    noSettlOblig_0_2.set(RepurchaseRate_92);
    Instrument_92.insert(RepurchaseRate_92.getString());
    FIX::RepurchaseTerm RepurchaseTerm_92(1705273102);
    noSettlOblig_0_2.set(RepurchaseTerm_92);
    Instrument_92.insert(RepurchaseTerm_92.getString());
    FIX::RestructuringType RestructuringType_92("STRING_MR");
    noSettlOblig_0_2.set(RestructuringType_92);
    Instrument_92.insert(RestructuringType_92.getString());
    FIX::SecurityDesc SecurityDesc_92("STRING_1736564785");
    noSettlOblig_0_2.set(SecurityDesc_92);
    Instrument_92.insert(SecurityDesc_92.getString());
    FIX::SecurityExchange SecurityExchange_92("EXCHANGE_1234343965");
    noSettlOblig_0_2.set(SecurityExchange_92);
    Instrument_92.insert(SecurityExchange_92.getString());
    FIX::SecurityGroup SecurityGroup_92("STRING_1637976145");
    noSettlOblig_0_2.set(SecurityGroup_92);
    Instrument_92.insert(SecurityGroup_92.getString());
    FIX::SecurityID SecurityID_92("STRING_1436141451");
    noSettlOblig_0_2.set(SecurityID_92);
    Instrument_92.insert(SecurityID_92.getString());
    FIX::SecurityIDSource SecurityIDSource_92("STRING_5");
    noSettlOblig_0_2.set(SecurityIDSource_92);
    Instrument_92.insert(SecurityIDSource_92.getString());
    FIX::SecurityStatus SecurityStatus_93("STRING_1");
    noSettlOblig_0_2.set(SecurityStatus_93);
    Instrument_92.insert(SecurityStatus_93.getString());
    FIX::SecuritySubType SecuritySubType_96("STRING_1740666262");
    noSettlOblig_0_2.set(SecuritySubType_96);
    Instrument_92.insert(SecuritySubType_96.getString());
    FIX::SecurityType SecurityType_100("STRING_FXSWAP");
    noSettlOblig_0_2.set(SecurityType_100);
    Instrument_92.insert(SecurityType_100.getString());
    FIX::Seniority Seniority_92("STRING_SB");
    noSettlOblig_0_2.set(Seniority_92);
    Instrument_92.insert(Seniority_92.getString());
    FIX::SettlMethod SettlMethod_92('C');
    noSettlOblig_0_2.set(SettlMethod_92);
    Instrument_92.insert(SettlMethod_92.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_92("STRING_899595795");
    noSettlOblig_0_2.set(SettleOnOpenFlag_92);
    Instrument_92.insert(SettleOnOpenFlag_92.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_92("STRING_838467283");
    noSettlOblig_0_2.set(StateOrProvinceOfIssue_92);
    Instrument_92.insert(StateOrProvinceOfIssue_92.getString());
    FIX::StrikeCurrency StrikeCurrency_92("USD");
    noSettlOblig_0_2.set(StrikeCurrency_92);
    Instrument_92.insert(StrikeCurrency_92.getString());
    FIX::StrikeMultiplier StrikeMultiplier_92;
    StrikeMultiplier_92.setString("10765206");
    noSettlOblig_0_2.set(StrikeMultiplier_92);
    Instrument_92.insert(StrikeMultiplier_92.getString());
    FIX::StrikePrice StrikePrice_92;
    StrikePrice_92.setString("9011086");
    noSettlOblig_0_2.set(StrikePrice_92);
    Instrument_92.insert(StrikePrice_92.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_92(1);
    noSettlOblig_0_2.set(StrikePriceBoundaryMethod_92);
    Instrument_92.insert(StrikePriceBoundaryMethod_92.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_92;
    StrikePriceBoundaryPrecision_92.setString("45.060000");
    noSettlOblig_0_2.set(StrikePriceBoundaryPrecision_92);
    Instrument_92.insert(StrikePriceBoundaryPrecision_92.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_92(4);
    noSettlOblig_0_2.set(StrikePriceDeterminationMethod_92);
    Instrument_92.insert(StrikePriceDeterminationMethod_92.getString());
    FIX::StrikeValue StrikeValue_92;
    StrikeValue_92.setString("17221726");
    noSettlOblig_0_2.set(StrikeValue_92);
    Instrument_92.insert(StrikeValue_92.getString());
    FIX::Symbol Symbol_92("STRING_387308192");
    noSettlOblig_0_2.set(Symbol_92);
    Instrument_92.insert(Symbol_92.getString());
    FIX::SymbolSfx SymbolSfx_92("STRING_WI");
    noSettlOblig_0_2.set(SymbolSfx_92);
    Instrument_92.insert(SymbolSfx_92.getString());
    FIX::TimeUnit TimeUnit_92("STRING_Min");
    noSettlOblig_0_2.set(TimeUnit_92);
    Instrument_92.insert(TimeUnit_92.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_92(3);
    noSettlOblig_0_2.set(UnderlyingPriceDeterminationMethod_92);
    Instrument_92.insert(UnderlyingPriceDeterminationMethod_92.getString());
    FIX::UnitOfMeasure UnitOfMeasure_92("STRING_oz_tr");
    noSettlOblig_0_2.set(UnitOfMeasure_92);
    Instrument_92.insert(UnitOfMeasure_92.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_92;
    UnitOfMeasureQty_92.setString("5708808");
    noSettlOblig_0_2.set(UnitOfMeasureQty_92);
    Instrument_92.insert(UnitOfMeasureQty_92.getString());
    FIX::ValuationMethod ValuationMethod_92("STRING_CDS");
    noSettlOblig_0_2.set(ValuationMethod_92);
    Instrument_92.insert(ValuationMethod_92.getString());
    all_values.push_back(Instrument_92);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_186;
      FIX::ComplexEventCondition ComplexEventCondition_186(1);
      noComplexEvents_2_1_0.set(ComplexEventCondition_186);
      ComplexEvents_NoComplexEvents_186.insert(ComplexEventCondition_186.getString());
      FIX::ComplexEventPrice ComplexEventPrice_186;
      ComplexEventPrice_186.setString("4997500");
      noComplexEvents_2_1_0.set(ComplexEventPrice_186);
      ComplexEvents_NoComplexEvents_186.insert(ComplexEventPrice_186.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_186(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_186);
      ComplexEvents_NoComplexEvents_186.insert(ComplexEventPriceBoundaryMethod_186.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_186;
      ComplexEventPriceBoundaryPrecision_186.setString("50.530000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_186);
      ComplexEvents_NoComplexEvents_186.insert(ComplexEventPriceBoundaryPrecision_186.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_186(1);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_186);
      ComplexEvents_NoComplexEvents_186.insert(ComplexEventPriceTimeType_186.getString());
      FIX::ComplexEventType ComplexEventType_186(1);
      noComplexEvents_2_1_0.set(ComplexEventType_186);
      ComplexEvents_NoComplexEvents_186.insert(ComplexEventType_186.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_186;
      ComplexOptPayoutAmount_186.setString("7570628");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_186);
      ComplexEvents_NoComplexEvents_186.insert(ComplexOptPayoutAmount_186.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_186);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_375;
        FIX::ComplexEventEndDate ComplexEventEndDate_375(FIX::UTCTIMESTAMP(7, 51, 4, 1, 11, 2009));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_375);
        ComplexEventDates_NoComplexEventDates_375.insert(ComplexEventEndDate_375.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_375(FIX::UTCTIMESTAMP(22, 17, 11, 4, 8, 2000));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_375);
        ComplexEventDates_NoComplexEventDates_375.insert(ComplexEventStartDate_375.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_375);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_762;
          FIX::ComplexEventEndTime ComplexEventEndTime_762(FIX::UTCTIMEONLY(3, 16, 2));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_762);
          ComplexEventTimes_NoComplexEventTimes_762.insert(ComplexEventEndTime_762.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_762(FIX::UTCTIMEONLY(7, 12, 50));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_762);
          ComplexEventTimes_NoComplexEventTimes_762.insert(ComplexEventStartTime_762.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_762);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_763;
          FIX::ComplexEventEndTime ComplexEventEndTime_763(FIX::UTCTIMEONLY(8, 37, 17));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_763);
          ComplexEventTimes_NoComplexEventTimes_763.insert(ComplexEventEndTime_763.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_763(FIX::UTCTIMEONLY(5, 34, 23));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_763);
          ComplexEventTimes_NoComplexEventTimes_763.insert(ComplexEventStartTime_763.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_763);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_376;
        FIX::ComplexEventEndDate ComplexEventEndDate_376(FIX::UTCTIMESTAMP(17, 6, 40, 3, 5, 2007));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_376);
        ComplexEventDates_NoComplexEventDates_376.insert(ComplexEventEndDate_376.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_376(FIX::UTCTIMESTAMP(7, 37, 19, 11, 9, 2005));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_376);
        ComplexEventDates_NoComplexEventDates_376.insert(ComplexEventStartDate_376.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_376);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_764;
          FIX::ComplexEventEndTime ComplexEventEndTime_764(FIX::UTCTIMEONLY(20, 12, 46));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_764);
          ComplexEventTimes_NoComplexEventTimes_764.insert(ComplexEventEndTime_764.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_764(FIX::UTCTIMEONLY(11, 58, 23));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_764);
          ComplexEventTimes_NoComplexEventTimes_764.insert(ComplexEventStartTime_764.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_764);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_765;
          FIX::ComplexEventEndTime ComplexEventEndTime_765(FIX::UTCTIMEONLY(22, 53, 47));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_765);
          ComplexEventTimes_NoComplexEventTimes_765.insert(ComplexEventEndTime_765.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_765(FIX::UTCTIMEONLY(14, 13, 30));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_765);
          ComplexEventTimes_NoComplexEventTimes_765.insert(ComplexEventStartTime_765.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_765);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_766;
          FIX::ComplexEventEndTime ComplexEventEndTime_766(FIX::UTCTIMEONLY(11, 28, 42));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventEndTime_766);
          ComplexEventTimes_NoComplexEventTimes_766.insert(ComplexEventEndTime_766.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_766(FIX::UTCTIMEONLY(9, 2, 38));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventStartTime_766);
          ComplexEventTimes_NoComplexEventTimes_766.insert(ComplexEventStartTime_766.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_766);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noSettlOblig_0_2.addGroup(noComplexEvents_2_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_183;
      FIX::EventDate EventDate_183("LOCALMKTDATE_782664331");
      noEvents_2_1_0.set(EventDate_183);
      EvntGrp_NoEvents_183.insert(EventDate_183.getString());
      FIX::EventPx EventPx_183;
      EventPx_183.setString("17486755");
      noEvents_2_1_0.set(EventPx_183);
      EvntGrp_NoEvents_183.insert(EventPx_183.getString());
      FIX::EventText EventText_183("STRING_1526034091");
      noEvents_2_1_0.set(EventText_183);
      EvntGrp_NoEvents_183.insert(EventText_183.getString());
      FIX::EventTime EventTime_183(FIX::UTCTIMESTAMP(3, 27, 47, 20, 8, 2003));
      noEvents_2_1_0.set(EventTime_183);
      EvntGrp_NoEvents_183.insert(EventTime_183.getString());
      FIX::EventType EventType_183(14);
      noEvents_2_1_0.set(EventType_183);
      EvntGrp_NoEvents_183.insert(EventType_183.getString());
      all_values.push_back(EvntGrp_NoEvents_183);
      all_compo_names.insert("EvntGrp.NoEvents");

      noSettlOblig_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_184;
      FIX::EventDate EventDate_184("LOCALMKTDATE_1840835538");
      noEvents_2_1_1.set(EventDate_184);
      EvntGrp_NoEvents_184.insert(EventDate_184.getString());
      FIX::EventPx EventPx_184;
      EventPx_184.setString("10909533");
      noEvents_2_1_1.set(EventPx_184);
      EvntGrp_NoEvents_184.insert(EventPx_184.getString());
      FIX::EventText EventText_184("STRING_1273367728");
      noEvents_2_1_1.set(EventText_184);
      EvntGrp_NoEvents_184.insert(EventText_184.getString());
      FIX::EventTime EventTime_184(FIX::UTCTIMESTAMP(21, 13, 28, 17, 9, 2004));
      noEvents_2_1_1.set(EventTime_184);
      EvntGrp_NoEvents_184.insert(EventTime_184.getString());
      FIX::EventType EventType_184(8);
      noEvents_2_1_1.set(EventType_184);
      EvntGrp_NoEvents_184.insert(EventType_184.getString());
      all_values.push_back(EvntGrp_NoEvents_184);
      all_compo_names.insert("EvntGrp.NoEvents");

      noSettlOblig_0_2.addGroup(noEvents_2_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_192;
      FIX::InstrumentPartyID InstrumentPartyID_192("STRING_1666304205");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_192);
      InstrumentParties_NoInstrumentParties_192.insert(InstrumentPartyID_192.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_192('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_192);
      InstrumentParties_NoInstrumentParties_192.insert(InstrumentPartyIDSource_192.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_192(255402729);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_192);
      InstrumentParties_NoInstrumentParties_192.insert(InstrumentPartyRole_192.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_192);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373;
        FIX::InstrumentPartySubID InstrumentPartySubID_373("STRING_483215661");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_373);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373.insert(InstrumentPartySubID_373.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_373(1699750151);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_373);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373.insert(InstrumentPartySubIDType_373.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374;
        FIX::InstrumentPartySubID InstrumentPartySubID_374("STRING_1663958805");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_374);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374.insert(InstrumentPartySubID_374.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_374(264264653);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_374);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374.insert(InstrumentPartySubIDType_374.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      noSettlOblig_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_193;
      FIX::InstrumentPartyID InstrumentPartyID_193("STRING_334930834");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_193);
      InstrumentParties_NoInstrumentParties_193.insert(InstrumentPartyID_193.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_193('1');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_193);
      InstrumentParties_NoInstrumentParties_193.insert(InstrumentPartyIDSource_193.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_193(1790298744);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_193);
      InstrumentParties_NoInstrumentParties_193.insert(InstrumentPartyRole_193.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_193);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375;
        FIX::InstrumentPartySubID InstrumentPartySubID_375("STRING_1252990411");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_375);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375.insert(InstrumentPartySubID_375.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_375(1193725484);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_375);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375.insert(InstrumentPartySubIDType_375.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376;
        FIX::InstrumentPartySubID InstrumentPartySubID_376("STRING_445810269");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_376);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376.insert(InstrumentPartySubID_376.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_376(256752123);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_376);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376.insert(InstrumentPartySubIDType_376.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377;
        FIX::InstrumentPartySubID InstrumentPartySubID_377("STRING_1943448195");
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubID_377);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377.insert(InstrumentPartySubID_377.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_377(397281694);
        noInstrumentPartySubIDs_2_1_2_2.set(InstrumentPartySubIDType_377);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377.insert(InstrumentPartySubIDType_377.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_2);
      }
      noSettlOblig_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_170;
      FIX::SecurityAltID SecurityAltID_170("STRING_1636800086");
      noSecurityAltID_2_1_0.set(SecurityAltID_170);
      SecAltIDGrp_NoSecurityAltID_170.insert(SecurityAltID_170.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_170("STRING_1488235078");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_170);
      SecAltIDGrp_NoSecurityAltID_170.insert(SecurityAltIDSource_170.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_170);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noSettlOblig_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_171;
      FIX::SecurityAltID SecurityAltID_171("STRING_824524116");
      noSecurityAltID_2_1_1.set(SecurityAltID_171);
      SecAltIDGrp_NoSecurityAltID_171.insert(SecurityAltID_171.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_171("STRING_1897921927");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_171);
      SecAltIDGrp_NoSecurityAltID_171.insert(SecurityAltIDSource_171.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_171);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noSettlOblig_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_184;
    FIX::SecurityXML SecurityXML_185("XMLDATA_528668027");
    noSettlOblig_0_2.set(SecurityXML_185);
    FIX::SecurityXMLLen SecurityXMLLen_92(1860591470);
    noSettlOblig_0_2.set(SecurityXMLLen_92);
    FIX::SecurityXMLSchema SecurityXMLSchema_92("STRING_1524392247");
    noSettlOblig_0_2.set(SecurityXMLSchema_92);
    SecurityXML_184.insert(SecurityXMLSchema_92.getString());
    all_values.push_back(SecurityXML_184);
    all_compo_names.insert("SecurityXML");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_142;
      FIX::PartyID PartyID_142("STRING_323969654");
      noPartyIDs_2_1_0.set(PartyID_142);
      Parties_NoPartyIDs_142.insert(PartyID_142.getString());
      FIX::PartyIDSource PartyIDSource_142('1');
      noPartyIDs_2_1_0.set(PartyIDSource_142);
      Parties_NoPartyIDs_142.insert(PartyIDSource_142.getString());
      FIX::PartyRole PartyRole_142(62);
      noPartyIDs_2_1_0.set(PartyRole_142);
      Parties_NoPartyIDs_142.insert(PartyRole_142.getString());
      all_values.push_back(Parties_NoPartyIDs_142);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_306;
        FIX::PartySubID PartySubID_306("STRING_1737156638");
        noPartySubIDs_2_0_2_0.set(PartySubID_306);
        PtysSubGrp_NoPartySubIDs_306.insert(PartySubID_306.getString());
        FIX::PartySubIDType PartySubIDType_306(28);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_306);
        PtysSubGrp_NoPartySubIDs_306.insert(PartySubIDType_306.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_306);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      noSettlOblig_0_2.addGroup(noPartyIDs_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_2_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_143;
      FIX::PartyID PartyID_143("STRING_1914398877");
      noPartyIDs_2_1_1.set(PartyID_143);
      Parties_NoPartyIDs_143.insert(PartyID_143.getString());
      FIX::PartyIDSource PartyIDSource_143('7');
      noPartyIDs_2_1_1.set(PartyIDSource_143);
      Parties_NoPartyIDs_143.insert(PartyIDSource_143.getString());
      FIX::PartyRole PartyRole_143(59);
      noPartyIDs_2_1_1.set(PartyRole_143);
      Parties_NoPartyIDs_143.insert(PartyRole_143.getString());
      all_values.push_back(Parties_NoPartyIDs_143);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_307;
        FIX::PartySubID PartySubID_307("STRING_1865820383");
        noPartySubIDs_2_1_2_0.set(PartySubID_307);
        PtysSubGrp_NoPartySubIDs_307.insert(PartySubID_307.getString());
        FIX::PartySubIDType PartySubIDType_307(15);
        noPartySubIDs_2_1_2_0.set(PartySubIDType_307);
        PtysSubGrp_NoPartySubIDs_307.insert(PartySubIDType_307.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_307);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_0);
      }
      noSettlOblig_0_2.addGroup(noPartyIDs_2_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_2_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_144;
      FIX::PartyID PartyID_144("STRING_1801596214");
      noPartyIDs_2_1_2.set(PartyID_144);
      Parties_NoPartyIDs_144.insert(PartyID_144.getString());
      FIX::PartyIDSource PartyIDSource_144('E');
      noPartyIDs_2_1_2.set(PartyIDSource_144);
      Parties_NoPartyIDs_144.insert(PartyIDSource_144.getString());
      FIX::PartyRole PartyRole_144(19);
      noPartyIDs_2_1_2.set(PartyRole_144);
      Parties_NoPartyIDs_144.insert(PartyRole_144.getString());
      all_values.push_back(Parties_NoPartyIDs_144);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_308;
        FIX::PartySubID PartySubID_308("STRING_88994233");
        noPartySubIDs_2_2_2_0.set(PartySubID_308);
        PtysSubGrp_NoPartySubIDs_308.insert(PartySubID_308.getString());
        FIX::PartySubIDType PartySubIDType_308(31);
        noPartySubIDs_2_2_2_0.set(PartySubIDType_308);
        PtysSubGrp_NoPartySubIDs_308.insert(PartySubIDType_308.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_308);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_2.addGroup(noPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_309;
        FIX::PartySubID PartySubID_309("STRING_1128528785");
        noPartySubIDs_2_2_2_1.set(PartySubID_309);
        PtysSubGrp_NoPartySubIDs_309.insert(PartySubID_309.getString());
        FIX::PartySubIDType PartySubIDType_309(11);
        noPartySubIDs_2_2_2_1.set(PartySubIDType_309);
        PtysSubGrp_NoPartySubIDs_309.insert(PartySubIDType_309.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_309);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_2.addGroup(noPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_2_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_310;
        FIX::PartySubID PartySubID_310("STRING_573320234");
        noPartySubIDs_2_2_2_2.set(PartySubID_310);
        PtysSubGrp_NoPartySubIDs_310.insert(PartySubID_310.getString());
        FIX::PartySubIDType PartySubIDType_310(7);
        noPartySubIDs_2_2_2_2.set(PartySubIDType_310);
        PtysSubGrp_NoPartySubIDs_310.insert(PartySubIDType_310.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_310);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_2.addGroup(noPartySubIDs_2_2_2_2);
      }
      noSettlOblig_0_2.addGroup(noPartyIDs_2_1_2);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_4;
      FIX::SettlObligSource SettlObligSource_4('3');
      noSettlDetails_2_1_0.set(SettlObligSource_4);
      SettlDetails_NoSettlDetails_4.insert(SettlObligSource_4.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_4);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_35;
        FIX::SettlPartyID SettlPartyID_35("STRING_721426861");
        noSettlPartyIDs_2_0_2_0.set(SettlPartyID_35);
        SettlParties_NoSettlPartyIDs_35.insert(SettlPartyID_35.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_35('1');
        noSettlPartyIDs_2_0_2_0.set(SettlPartyIDSource_35);
        SettlParties_NoSettlPartyIDs_35.insert(SettlPartyIDSource_35.getString());
        FIX::SettlPartyRole SettlPartyRole_35(1395229937);
        noSettlPartyIDs_2_0_2_0.set(SettlPartyRole_35);
        SettlParties_NoSettlPartyIDs_35.insert(SettlPartyRole_35.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_35);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_68;
          FIX::SettlPartySubID SettlPartySubID_68("STRING_1337467198");
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubID_68);
          SettlPtysSubGrp_NoSettlPartySubIDs_68.insert(SettlPartySubID_68.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_68(1752869401);
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubIDType_68);
          SettlPtysSubGrp_NoSettlPartySubIDs_68.insert(SettlPartySubIDType_68.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_68);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_69;
          FIX::SettlPartySubID SettlPartySubID_69("STRING_758504337");
          noSettlPartySubIDs_2_0_0_3_1.set(SettlPartySubID_69);
          SettlPtysSubGrp_NoSettlPartySubIDs_69.insert(SettlPartySubID_69.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_69(1408319632);
          noSettlPartySubIDs_2_0_0_3_1.set(SettlPartySubIDType_69);
          SettlPtysSubGrp_NoSettlPartySubIDs_69.insert(SettlPartySubIDType_69.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_69);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_1);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_36;
        FIX::SettlPartyID SettlPartyID_36("STRING_1499221925");
        noSettlPartyIDs_2_0_2_1.set(SettlPartyID_36);
        SettlParties_NoSettlPartyIDs_36.insert(SettlPartyID_36.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_36('2');
        noSettlPartyIDs_2_0_2_1.set(SettlPartyIDSource_36);
        SettlParties_NoSettlPartyIDs_36.insert(SettlPartyIDSource_36.getString());
        FIX::SettlPartyRole SettlPartyRole_36(997992622);
        noSettlPartyIDs_2_0_2_1.set(SettlPartyRole_36);
        SettlParties_NoSettlPartyIDs_36.insert(SettlPartyRole_36.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_36);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_70;
          FIX::SettlPartySubID SettlPartySubID_70("STRING_36932067");
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubID_70);
          SettlPtysSubGrp_NoSettlPartySubIDs_70.insert(SettlPartySubID_70.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_70(1199854200);
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubIDType_70);
          SettlPtysSubGrp_NoSettlPartySubIDs_70.insert(SettlPartySubIDType_70.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_70);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_0);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_37;
        FIX::SettlPartyID SettlPartyID_37("STRING_369107170");
        noSettlPartyIDs_2_0_2_2.set(SettlPartyID_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyID_37.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_37('1');
        noSettlPartyIDs_2_0_2_2.set(SettlPartyIDSource_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyIDSource_37.getString());
        FIX::SettlPartyRole SettlPartyRole_37(918190935);
        noSettlPartyIDs_2_0_2_2.set(SettlPartyRole_37);
        SettlParties_NoSettlPartyIDs_37.insert(SettlPartyRole_37.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_37);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_71;
          FIX::SettlPartySubID SettlPartySubID_71("STRING_1157710014");
          noSettlPartySubIDs_2_0_2_3_0.set(SettlPartySubID_71);
          SettlPtysSubGrp_NoSettlPartySubIDs_71.insert(SettlPartySubID_71.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_71(1901678405);
          noSettlPartySubIDs_2_0_2_3_0.set(SettlPartySubIDType_71);
          SettlPtysSubGrp_NoSettlPartySubIDs_71.insert(SettlPartySubIDType_71.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_71);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_2.addGroup(noSettlPartySubIDs_2_0_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_72;
          FIX::SettlPartySubID SettlPartySubID_72("STRING_2041036127");
          noSettlPartySubIDs_2_0_2_3_1.set(SettlPartySubID_72);
          SettlPtysSubGrp_NoSettlPartySubIDs_72.insert(SettlPartySubID_72.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_72(1840428530);
          noSettlPartySubIDs_2_0_2_3_1.set(SettlPartySubIDType_72);
          SettlPtysSubGrp_NoSettlPartySubIDs_72.insert(SettlPartySubIDType_72.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_72);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_2.addGroup(noSettlPartySubIDs_2_0_2_3_1);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_2);
      }
      noSettlOblig_0_2.addGroup(noSettlDetails_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_5;
      FIX::SettlObligSource SettlObligSource_5('2');
      noSettlDetails_2_1_1.set(SettlObligSource_5);
      SettlDetails_NoSettlDetails_5.insert(SettlObligSource_5.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_5);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_38;
        FIX::SettlPartyID SettlPartyID_38("STRING_821473667");
        noSettlPartyIDs_2_1_2_0.set(SettlPartyID_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyID_38.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_38('1');
        noSettlPartyIDs_2_1_2_0.set(SettlPartyIDSource_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyIDSource_38.getString());
        FIX::SettlPartyRole SettlPartyRole_38(1244228399);
        noSettlPartyIDs_2_1_2_0.set(SettlPartyRole_38);
        SettlParties_NoSettlPartyIDs_38.insert(SettlPartyRole_38.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_38);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_73;
          FIX::SettlPartySubID SettlPartySubID_73("STRING_85838092");
          noSettlPartySubIDs_2_1_0_3_0.set(SettlPartySubID_73);
          SettlPtysSubGrp_NoSettlPartySubIDs_73.insert(SettlPartySubID_73.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_73(1306865071);
          noSettlPartySubIDs_2_1_0_3_0.set(SettlPartySubIDType_73);
          SettlPtysSubGrp_NoSettlPartySubIDs_73.insert(SettlPartySubIDType_73.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_73);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_0);
        }
        noSettlDetails_2_1_1.addGroup(noSettlPartyIDs_2_1_2_0);
      }
      noSettlOblig_0_2.addGroup(noSettlDetails_2_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_6;
      FIX::SettlObligSource SettlObligSource_6('1');
      noSettlDetails_2_1_2.set(SettlObligSource_6);
      SettlDetails_NoSettlDetails_6.insert(SettlObligSource_6.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_6);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_39;
        FIX::SettlPartyID SettlPartyID_39("STRING_1119940022");
        noSettlPartyIDs_2_2_2_0.set(SettlPartyID_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyID_39.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_39('3');
        noSettlPartyIDs_2_2_2_0.set(SettlPartyIDSource_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyIDSource_39.getString());
        FIX::SettlPartyRole SettlPartyRole_39(1241799636);
        noSettlPartyIDs_2_2_2_0.set(SettlPartyRole_39);
        SettlParties_NoSettlPartyIDs_39.insert(SettlPartyRole_39.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_39);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_74;
          FIX::SettlPartySubID SettlPartySubID_74("STRING_2066978098");
          noSettlPartySubIDs_2_2_0_3_0.set(SettlPartySubID_74);
          SettlPtysSubGrp_NoSettlPartySubIDs_74.insert(SettlPartySubID_74.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_74(2000303973);
          noSettlPartySubIDs_2_2_0_3_0.set(SettlPartySubIDType_74);
          SettlPtysSubGrp_NoSettlPartySubIDs_74.insert(SettlPartySubIDType_74.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_74);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_75;
          FIX::SettlPartySubID SettlPartySubID_75("STRING_1718243205");
          noSettlPartySubIDs_2_2_0_3_1.set(SettlPartySubID_75);
          SettlPtysSubGrp_NoSettlPartySubIDs_75.insert(SettlPartySubID_75.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_75(1418716376);
          noSettlPartySubIDs_2_2_0_3_1.set(SettlPartySubIDType_75);
          SettlPtysSubGrp_NoSettlPartySubIDs_75.insert(SettlPartySubIDType_75.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_75);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_76;
          FIX::SettlPartySubID SettlPartySubID_76("STRING_122837162");
          noSettlPartySubIDs_2_2_0_3_2.set(SettlPartySubID_76);
          SettlPtysSubGrp_NoSettlPartySubIDs_76.insert(SettlPartySubID_76.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_76(568752179);
          noSettlPartySubIDs_2_2_0_3_2.set(SettlPartySubIDType_76);
          SettlPtysSubGrp_NoSettlPartySubIDs_76.insert(SettlPartySubIDType_76.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_76);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_2);
        }
        noSettlDetails_2_1_2.addGroup(noSettlPartyIDs_2_2_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_40;
        FIX::SettlPartyID SettlPartyID_40("STRING_2111273093");
        noSettlPartyIDs_2_2_2_1.set(SettlPartyID_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyID_40.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_40('1');
        noSettlPartyIDs_2_2_2_1.set(SettlPartyIDSource_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyIDSource_40.getString());
        FIX::SettlPartyRole SettlPartyRole_40(1768606379);
        noSettlPartyIDs_2_2_2_1.set(SettlPartyRole_40);
        SettlParties_NoSettlPartyIDs_40.insert(SettlPartyRole_40.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_40);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_77;
          FIX::SettlPartySubID SettlPartySubID_77("STRING_1663366677");
          noSettlPartySubIDs_2_2_1_3_0.set(SettlPartySubID_77);
          SettlPtysSubGrp_NoSettlPartySubIDs_77.insert(SettlPartySubID_77.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_77(539313666);
          noSettlPartySubIDs_2_2_1_3_0.set(SettlPartySubIDType_77);
          SettlPtysSubGrp_NoSettlPartySubIDs_77.insert(SettlPartySubIDType_77.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_77);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_78;
          FIX::SettlPartySubID SettlPartySubID_78("STRING_642818892");
          noSettlPartySubIDs_2_2_1_3_1.set(SettlPartySubID_78);
          SettlPtysSubGrp_NoSettlPartySubIDs_78.insert(SettlPartySubID_78.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_78(673593043);
          noSettlPartySubIDs_2_2_1_3_1.set(SettlPartySubIDType_78);
          SettlPtysSubGrp_NoSettlPartySubIDs_78.insert(SettlPartySubIDType_78.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_78);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_79;
          FIX::SettlPartySubID SettlPartySubID_79("STRING_293508424");
          noSettlPartySubIDs_2_2_1_3_2.set(SettlPartySubID_79);
          SettlPtysSubGrp_NoSettlPartySubIDs_79.insert(SettlPartySubID_79.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_79(536371371);
          noSettlPartySubIDs_2_2_1_3_2.set(SettlPartySubIDType_79);
          SettlPtysSubGrp_NoSettlPartySubIDs_79.insert(SettlPartySubIDType_79.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_79);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_2);
        }
        noSettlDetails_2_1_2.addGroup(noSettlPartyIDs_2_2_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_2_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_41;
        FIX::SettlPartyID SettlPartyID_41("STRING_366537925");
        noSettlPartyIDs_2_2_2_2.set(SettlPartyID_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyID_41.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_41('1');
        noSettlPartyIDs_2_2_2_2.set(SettlPartyIDSource_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyIDSource_41.getString());
        FIX::SettlPartyRole SettlPartyRole_41(1207279537);
        noSettlPartyIDs_2_2_2_2.set(SettlPartyRole_41);
        SettlParties_NoSettlPartyIDs_41.insert(SettlPartyRole_41.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_41);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_80;
          FIX::SettlPartySubID SettlPartySubID_80("STRING_325632762");
          noSettlPartySubIDs_2_2_2_3_0.set(SettlPartySubID_80);
          SettlPtysSubGrp_NoSettlPartySubIDs_80.insert(SettlPartySubID_80.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_80(304024288);
          noSettlPartySubIDs_2_2_2_3_0.set(SettlPartySubIDType_80);
          SettlPtysSubGrp_NoSettlPartySubIDs_80.insert(SettlPartySubIDType_80.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_80);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_2.addGroup(noSettlPartySubIDs_2_2_2_3_0);
        }
        noSettlDetails_2_1_2.addGroup(noSettlPartyIDs_2_2_2_2);
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
