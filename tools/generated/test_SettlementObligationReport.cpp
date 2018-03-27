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
  FIX::ClearingBusinessDate ClearingBusinessDate_24("LOCALMKTDATE_1623854308");
  msg.set(ClearingBusinessDate_24);
  SettlementObligationReport_0.insert(ClearingBusinessDate_24.getString());
  FIX::EncodedText EncodedText_89("DATA_1836763132");
  msg.set(EncodedText_89);
  SettlementObligationReport_0.insert(EncodedText_89.getString());
  FIX::EncodedTextLen EncodedTextLen_89(660283110);
  msg.set(EncodedTextLen_89);
  SettlementObligationReport_0.insert(EncodedTextLen_89.getString());
  FIX::SettlObligMode SettlObligMode_0(2);
  msg.set(SettlObligMode_0);
  SettlementObligationReport_0.insert(SettlObligMode_0.getString());
  FIX::SettlObligMsgID SettlObligMsgID_0("STRING_1531518129");
  msg.set(SettlObligMsgID_0);
  SettlementObligationReport_0.insert(SettlObligMsgID_0.getString());
  FIX::SettlementCycleNo SettlementCycleNo_0(1386833309);
  msg.set(SettlementCycleNo_0);
  SettlementObligationReport_0.insert(SettlementCycleNo_0.getString());
  FIX::Text Text_89("STRING_1249510860");
  msg.set(Text_89);
  SettlementObligationReport_0.insert(Text_89.getString());
  FIX::TransactTime TransactTime_63(FIX::UTCTIMESTAMP(20, 3, 41, 11, 52008));
  msg.set(TransactTime_63);
  SettlementObligationReport_0.insert(TransactTime_63.getString());
  all_values.push_back(SettlementObligationReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_18;
  FIX::ApplID ApplID_18("STRING_2110413127");
  msg.set(ApplID_18);
  ApplicationSequenceControl_18.insert(ApplID_18.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_18(55835001);
  msg.set(ApplLastSeqNum_18);
  ApplicationSequenceControl_18.insert(ApplLastSeqNum_18.getString());
  FIX::ApplResendFlag ApplResendFlag_18(true);
  msg.set(ApplResendFlag_18);
  ApplicationSequenceControl_18.insert(ApplResendFlag_18.getString());
  FIX::ApplSeqNum ApplSeqNum_18(1684452867);
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
    CcyAmt_0.setString("21210826");
    noSettlOblig_0_0.set(CcyAmt_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(CcyAmt_0.getString());
    FIX::Currency Currency_63("EUR");
    noSettlOblig_0_0.set(Currency_63);
    SettlObligationInstructions_NoSettlOblig_0.insert(Currency_63.getString());
    FIX::EffectiveTime EffectiveTime_14(FIX::UTCTIMESTAMP(12, 2, 12, 19, 82000));
    noSettlOblig_0_0.set(EffectiveTime_14);
    SettlObligationInstructions_NoSettlOblig_0.insert(EffectiveTime_14.getString());
    FIX::ExpireTime ExpireTime_24(FIX::UTCTIMESTAMP(8, 32, 59, 2, 32012));
    noSettlOblig_0_0.set(ExpireTime_24);
    SettlObligationInstructions_NoSettlOblig_0.insert(ExpireTime_24.getString());
    FIX::LastUpdateTime LastUpdateTime_4(FIX::UTCTIMESTAMP(18, 58, 35, 1, 82006));
    noSettlOblig_0_0.set(LastUpdateTime_4);
    SettlObligationInstructions_NoSettlOblig_0.insert(LastUpdateTime_4.getString());
    FIX::NetGrossInd NetGrossInd_3(2);
    noSettlOblig_0_0.set(NetGrossInd_3);
    SettlObligationInstructions_NoSettlOblig_0.insert(NetGrossInd_3.getString());
    FIX::SettlCurrAmt SettlCurrAmt_7;
    SettlCurrAmt_7.setString("11086619");
    noSettlOblig_0_0.set(SettlCurrAmt_7);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrAmt_7.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_7;
    SettlCurrFxRate_7.setString("7028514");
    noSettlOblig_0_0.set(SettlCurrFxRate_7);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrFxRate_7.getString());
    FIX::SettlCurrency SettlCurrency_34("JPY");
    noSettlOblig_0_0.set(SettlCurrency_34);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlCurrency_34.getString());
    FIX::SettlDate SettlDate_38("LOCALMKTDATE_239820672");
    noSettlOblig_0_0.set(SettlDate_38);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlDate_38.getString());
    FIX::SettlObligID SettlObligID_0("STRING_2067345746");
    noSettlOblig_0_0.set(SettlObligID_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligID_0.getString());
    FIX::SettlObligRefID SettlObligRefID_0("STRING_1103653338");
    noSettlOblig_0_0.set(SettlObligRefID_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligRefID_0.getString());
    FIX::SettlObligTransType SettlObligTransType_0('C');
    noSettlOblig_0_0.set(SettlObligTransType_0);
    SettlObligationInstructions_NoSettlOblig_0.insert(SettlObligTransType_0.getString());
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_0);

    // Instrument
    multiset<string> Instrument_81;
    FIX::AttachmentPoint AttachmentPoint_81;
    AttachmentPoint_81.setString("86.680000");
    noSettlOblig_0_0.set(AttachmentPoint_81);
    Instrument_81.insert(AttachmentPoint_81.getString());
    FIX::CFICode CFICode_88("STRING_623588487");
    noSettlOblig_0_0.set(CFICode_88);
    Instrument_81.insert(CFICode_88.getString());
    FIX::CPProgram CPProgram_81(2);
    noSettlOblig_0_0.set(CPProgram_81);
    Instrument_81.insert(CPProgram_81.getString());
    FIX::CPRegType CPRegType_81("STRING_1738003930");
    noSettlOblig_0_0.set(CPRegType_81);
    Instrument_81.insert(CPRegType_81.getString());
    FIX::CapPrice CapPrice_81;
    CapPrice_81.setString("17759451");
    noSettlOblig_0_0.set(CapPrice_81);
    Instrument_81.insert(CapPrice_81.getString());
    FIX::ContractMultiplier ContractMultiplier_81;
    ContractMultiplier_81.setString("13049854");
    noSettlOblig_0_0.set(ContractMultiplier_81);
    Instrument_81.insert(ContractMultiplier_81.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_81(0);
    noSettlOblig_0_0.set(ContractMultiplierUnit_81);
    Instrument_81.insert(ContractMultiplierUnit_81.getString());
    FIX::ContractSettlMonth ContractSettlMonth_81("MONTHYEAR_838229323");
    noSettlOblig_0_0.set(ContractSettlMonth_81);
    Instrument_81.insert(ContractSettlMonth_81.getString());
    FIX::CountryOfIssue CountryOfIssue_81("COUNTRY_1312876366");
    noSettlOblig_0_0.set(CountryOfIssue_81);
    Instrument_81.insert(CountryOfIssue_81.getString());
    FIX::CouponPaymentDate CouponPaymentDate_81("LOCALMKTDATE_838971777");
    noSettlOblig_0_0.set(CouponPaymentDate_81);
    Instrument_81.insert(CouponPaymentDate_81.getString());
    FIX::CouponRate CouponRate_81;
    CouponRate_81.setString("78.160000");
    noSettlOblig_0_0.set(CouponRate_81);
    Instrument_81.insert(CouponRate_81.getString());
    FIX::CreditRating CreditRating_81("STRING_1010046817");
    noSettlOblig_0_0.set(CreditRating_81);
    Instrument_81.insert(CreditRating_81.getString());
    FIX::DatedDate DatedDate_81("LOCALMKTDATE_662523855");
    noSettlOblig_0_0.set(DatedDate_81);
    Instrument_81.insert(DatedDate_81.getString());
    FIX::DetachmentPoint DetachmentPoint_81;
    DetachmentPoint_81.setString("48.940000");
    noSettlOblig_0_0.set(DetachmentPoint_81);
    Instrument_81.insert(DetachmentPoint_81.getString());
    FIX::EncodedIssuer EncodedIssuer_81("DATA_91251749");
    noSettlOblig_0_0.set(EncodedIssuer_81);
    Instrument_81.insert(EncodedIssuer_81.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_81(1872909242);
    noSettlOblig_0_0.set(EncodedIssuerLen_81);
    Instrument_81.insert(EncodedIssuerLen_81.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_81("DATA_1736652832");
    noSettlOblig_0_0.set(EncodedSecurityDesc_81);
    Instrument_81.insert(EncodedSecurityDesc_81.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_81(1378904247);
    noSettlOblig_0_0.set(EncodedSecurityDescLen_81);
    Instrument_81.insert(EncodedSecurityDescLen_81.getString());
    FIX::ExerciseStyle ExerciseStyle_81(0);
    noSettlOblig_0_0.set(ExerciseStyle_81);
    Instrument_81.insert(ExerciseStyle_81.getString());
    FIX::Factor Factor_81;
    Factor_81.setString("9205353");
    noSettlOblig_0_0.set(Factor_81);
    Instrument_81.insert(Factor_81.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_81(true);
    noSettlOblig_0_0.set(FlexProductEligibilityIndicator_81);
    Instrument_81.insert(FlexProductEligibilityIndicator_81.getString());
    FIX::FlexibleIndicator FlexibleIndicator_81(true);
    noSettlOblig_0_0.set(FlexibleIndicator_81);
    Instrument_81.insert(FlexibleIndicator_81.getString());
    FIX::FloorPrice FloorPrice_81;
    FloorPrice_81.setString("4998175");
    noSettlOblig_0_0.set(FloorPrice_81);
    Instrument_81.insert(FloorPrice_81.getString());
    FIX::FlowScheduleType FlowScheduleType_81(0);
    noSettlOblig_0_0.set(FlowScheduleType_81);
    Instrument_81.insert(FlowScheduleType_81.getString());
    FIX::InstrRegistry InstrRegistry_81("STRING_1450604598");
    noSettlOblig_0_0.set(InstrRegistry_81);
    Instrument_81.insert(InstrRegistry_81.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_81('1');
    noSettlOblig_0_0.set(InstrmtAssignmentMethod_81);
    Instrument_81.insert(InstrmtAssignmentMethod_81.getString());
    FIX::InterestAccrualDate InterestAccrualDate_81("LOCALMKTDATE_2108384806");
    noSettlOblig_0_0.set(InterestAccrualDate_81);
    Instrument_81.insert(InterestAccrualDate_81.getString());
    FIX::IssueDate IssueDate_81("LOCALMKTDATE_1690425270");
    noSettlOblig_0_0.set(IssueDate_81);
    Instrument_81.insert(IssueDate_81.getString());
    FIX::Issuer Issuer_81("STRING_54796880");
    noSettlOblig_0_0.set(Issuer_81);
    Instrument_81.insert(Issuer_81.getString());
    FIX::ListMethod ListMethod_81(0);
    noSettlOblig_0_0.set(ListMethod_81);
    Instrument_81.insert(ListMethod_81.getString());
    FIX::LocaleOfIssue LocaleOfIssue_81("STRING_1465838795");
    noSettlOblig_0_0.set(LocaleOfIssue_81);
    Instrument_81.insert(LocaleOfIssue_81.getString());
    FIX::MaturityDate MaturityDate_81("LOCALMKTDATE_369935548");
    noSettlOblig_0_0.set(MaturityDate_81);
    Instrument_81.insert(MaturityDate_81.getString());
    FIX::MaturityMonthYear MaturityMonthYear_81("MONTHYEAR_1688142983");
    noSettlOblig_0_0.set(MaturityMonthYear_81);
    Instrument_81.insert(MaturityMonthYear_81.getString());
    FIX::MaturityTime MaturityTime_81("TZTIMEONLY_235631107");
    noSettlOblig_0_0.set(MaturityTime_81);
    Instrument_81.insert(MaturityTime_81.getString());
    FIX::MinPriceIncrement MinPriceIncrement_81;
    MinPriceIncrement_81.setString("21079394");
    noSettlOblig_0_0.set(MinPriceIncrement_81);
    Instrument_81.insert(MinPriceIncrement_81.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_81;
    MinPriceIncrementAmount_81.setString("13166044");
    noSettlOblig_0_0.set(MinPriceIncrementAmount_81);
    Instrument_81.insert(MinPriceIncrementAmount_81.getString());
    FIX::NTPositionLimit NTPositionLimit_81(1540616507);
    noSettlOblig_0_0.set(NTPositionLimit_81);
    Instrument_81.insert(NTPositionLimit_81.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_81;
    NotionalPercentageOutstanding_81.setString("86.390000");
    noSettlOblig_0_0.set(NotionalPercentageOutstanding_81);
    Instrument_81.insert(NotionalPercentageOutstanding_81.getString());
    FIX::OptAttribute OptAttribute_81('7');
    noSettlOblig_0_0.set(OptAttribute_81);
    Instrument_81.insert(OptAttribute_81.getString());
    FIX::OptPayoutAmount OptPayoutAmount_81;
    OptPayoutAmount_81.setString("7060092");
    noSettlOblig_0_0.set(OptPayoutAmount_81);
    Instrument_81.insert(OptPayoutAmount_81.getString());
    FIX::OptPayoutType OptPayoutType_81(3);
    noSettlOblig_0_0.set(OptPayoutType_81);
    Instrument_81.insert(OptPayoutType_81.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_81;
    OriginalNotionalPercentageOutstanding_81.setString("79.660000");
    noSettlOblig_0_0.set(OriginalNotionalPercentageOutstanding_81);
    Instrument_81.insert(OriginalNotionalPercentageOutstanding_81.getString());
    FIX::Pool Pool_81("STRING_1716056043");
    noSettlOblig_0_0.set(Pool_81);
    Instrument_81.insert(Pool_81.getString());
    FIX::PositionLimit PositionLimit_81(990170624);
    noSettlOblig_0_0.set(PositionLimit_81);
    Instrument_81.insert(PositionLimit_81.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_81("STRING_STD");
    noSettlOblig_0_0.set(PriceQuoteMethod_81);
    Instrument_81.insert(PriceQuoteMethod_81.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_81("STRING_1807307793");
    noSettlOblig_0_0.set(PriceUnitOfMeasure_81);
    Instrument_81.insert(PriceUnitOfMeasure_81.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_81;
    PriceUnitOfMeasureQty_81.setString("7155962");
    noSettlOblig_0_0.set(PriceUnitOfMeasureQty_81);
    Instrument_81.insert(PriceUnitOfMeasureQty_81.getString());
    FIX::Product Product_91(8);
    noSettlOblig_0_0.set(Product_91);
    Instrument_81.insert(Product_91.getString());
    FIX::ProductComplex ProductComplex_81("STRING_1038728392");
    noSettlOblig_0_0.set(ProductComplex_81);
    Instrument_81.insert(ProductComplex_81.getString());
    FIX::PutOrCall PutOrCall_81(1);
    noSettlOblig_0_0.set(PutOrCall_81);
    Instrument_81.insert(PutOrCall_81.getString());
    FIX::RedemptionDate RedemptionDate_81("LOCALMKTDATE_899693701");
    noSettlOblig_0_0.set(RedemptionDate_81);
    Instrument_81.insert(RedemptionDate_81.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_81("STRING_908396863");
    noSettlOblig_0_0.set(RepoCollateralSecurityType_81);
    Instrument_81.insert(RepoCollateralSecurityType_81.getString());
    FIX::RepurchaseRate RepurchaseRate_81;
    RepurchaseRate_81.setString("5.330000");
    noSettlOblig_0_0.set(RepurchaseRate_81);
    Instrument_81.insert(RepurchaseRate_81.getString());
    FIX::RepurchaseTerm RepurchaseTerm_81(1399511244);
    noSettlOblig_0_0.set(RepurchaseTerm_81);
    Instrument_81.insert(RepurchaseTerm_81.getString());
    FIX::RestructuringType RestructuringType_81("STRING_XR");
    noSettlOblig_0_0.set(RestructuringType_81);
    Instrument_81.insert(RestructuringType_81.getString());
    FIX::SecurityDesc SecurityDesc_81("STRING_774301483");
    noSettlOblig_0_0.set(SecurityDesc_81);
    Instrument_81.insert(SecurityDesc_81.getString());
    FIX::SecurityExchange SecurityExchange_81("EXCHANGE_1534446025");
    noSettlOblig_0_0.set(SecurityExchange_81);
    Instrument_81.insert(SecurityExchange_81.getString());
    FIX::SecurityGroup SecurityGroup_81("STRING_1847628441");
    noSettlOblig_0_0.set(SecurityGroup_81);
    Instrument_81.insert(SecurityGroup_81.getString());
    FIX::SecurityID SecurityID_81("STRING_317243106");
    noSettlOblig_0_0.set(SecurityID_81);
    Instrument_81.insert(SecurityID_81.getString());
    FIX::SecurityIDSource SecurityIDSource_81("STRING_K");
    noSettlOblig_0_0.set(SecurityIDSource_81);
    Instrument_81.insert(SecurityIDSource_81.getString());
    FIX::SecurityStatus SecurityStatus_82("STRING_2");
    noSettlOblig_0_0.set(SecurityStatus_82);
    Instrument_81.insert(SecurityStatus_82.getString());
    FIX::SecuritySubType SecuritySubType_86("STRING_1783081901");
    noSettlOblig_0_0.set(SecuritySubType_86);
    Instrument_81.insert(SecuritySubType_86.getString());
    FIX::SecurityType SecurityType_91("STRING_REPO");
    noSettlOblig_0_0.set(SecurityType_91);
    Instrument_81.insert(SecurityType_91.getString());
    FIX::Seniority Seniority_81("STRING_SD");
    noSettlOblig_0_0.set(Seniority_81);
    Instrument_81.insert(Seniority_81.getString());
    FIX::SettlMethod SettlMethod_81('C');
    noSettlOblig_0_0.set(SettlMethod_81);
    Instrument_81.insert(SettlMethod_81.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_81("STRING_1919634283");
    noSettlOblig_0_0.set(SettleOnOpenFlag_81);
    Instrument_81.insert(SettleOnOpenFlag_81.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_81("STRING_1621963099");
    noSettlOblig_0_0.set(StateOrProvinceOfIssue_81);
    Instrument_81.insert(StateOrProvinceOfIssue_81.getString());
    FIX::StrikeCurrency StrikeCurrency_81("CHF");
    noSettlOblig_0_0.set(StrikeCurrency_81);
    Instrument_81.insert(StrikeCurrency_81.getString());
    FIX::StrikeMultiplier StrikeMultiplier_81;
    StrikeMultiplier_81.setString("16293132");
    noSettlOblig_0_0.set(StrikeMultiplier_81);
    Instrument_81.insert(StrikeMultiplier_81.getString());
    FIX::StrikePrice StrikePrice_81;
    StrikePrice_81.setString("21178550");
    noSettlOblig_0_0.set(StrikePrice_81);
    Instrument_81.insert(StrikePrice_81.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_81(5);
    noSettlOblig_0_0.set(StrikePriceBoundaryMethod_81);
    Instrument_81.insert(StrikePriceBoundaryMethod_81.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_81;
    StrikePriceBoundaryPrecision_81.setString("75.680000");
    noSettlOblig_0_0.set(StrikePriceBoundaryPrecision_81);
    Instrument_81.insert(StrikePriceBoundaryPrecision_81.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_81(2);
    noSettlOblig_0_0.set(StrikePriceDeterminationMethod_81);
    Instrument_81.insert(StrikePriceDeterminationMethod_81.getString());
    FIX::StrikeValue StrikeValue_81;
    StrikeValue_81.setString("5786430");
    noSettlOblig_0_0.set(StrikeValue_81);
    Instrument_81.insert(StrikeValue_81.getString());
    FIX::Symbol Symbol_81("STRING_1403536781");
    noSettlOblig_0_0.set(Symbol_81);
    Instrument_81.insert(Symbol_81.getString());
    FIX::SymbolSfx SymbolSfx_81("STRING_CD");
    noSettlOblig_0_0.set(SymbolSfx_81);
    Instrument_81.insert(SymbolSfx_81.getString());
    FIX::TimeUnit TimeUnit_81("STRING_Yr");
    noSettlOblig_0_0.set(TimeUnit_81);
    Instrument_81.insert(TimeUnit_81.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_81(2);
    noSettlOblig_0_0.set(UnderlyingPriceDeterminationMethod_81);
    Instrument_81.insert(UnderlyingPriceDeterminationMethod_81.getString());
    FIX::UnitOfMeasure UnitOfMeasure_81("STRING_MWh");
    noSettlOblig_0_0.set(UnitOfMeasure_81);
    Instrument_81.insert(UnitOfMeasure_81.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_81;
    UnitOfMeasureQty_81.setString("20176666");
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
      multiset<string> ComplexEvents_NoComplexEvents_151;
      FIX::ComplexEventCondition ComplexEventCondition_151(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_151);
      ComplexEvents_NoComplexEvents_151.insert(ComplexEventCondition_151.getString());
      FIX::ComplexEventPrice ComplexEventPrice_151;
      ComplexEventPrice_151.setString("15344164");
      noComplexEvents_0_1_0.set(ComplexEventPrice_151);
      ComplexEvents_NoComplexEvents_151.insert(ComplexEventPrice_151.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_151(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_151);
      ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceBoundaryMethod_151.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_151;
      ComplexEventPriceBoundaryPrecision_151.setString("49.970000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_151);
      ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceBoundaryPrecision_151.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_151(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_151);
      ComplexEvents_NoComplexEvents_151.insert(ComplexEventPriceTimeType_151.getString());
      FIX::ComplexEventType ComplexEventType_151(7);
      noComplexEvents_0_1_0.set(ComplexEventType_151);
      ComplexEvents_NoComplexEvents_151.insert(ComplexEventType_151.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_151;
      ComplexOptPayoutAmount_151.setString("2854244");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_151);
      ComplexEvents_NoComplexEvents_151.insert(ComplexOptPayoutAmount_151.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_151);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_320;
        FIX::ComplexEventEndDate ComplexEventEndDate_320(FIX::UTCTIMESTAMP(20, 55, 3, 17, 42003));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_320);
        ComplexEventDates_NoComplexEventDates_320.insert(ComplexEventEndDate_320.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_320(FIX::UTCTIMESTAMP(10, 57, 43, 22, 22000));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_320);
        ComplexEventDates_NoComplexEventDates_320.insert(ComplexEventStartDate_320.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_320);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_640;
          FIX::ComplexEventEndTime ComplexEventEndTime_640(FIX::UTCTIMEONLY(3, 34, 28));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_640);
          ComplexEventTimes_NoComplexEventTimes_640.insert(ComplexEventEndTime_640.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_640(FIX::UTCTIMEONLY(22, 59, 12));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_640);
          ComplexEventTimes_NoComplexEventTimes_640.insert(ComplexEventStartTime_640.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_640);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_321;
        FIX::ComplexEventEndDate ComplexEventEndDate_321(FIX::UTCTIMESTAMP(6, 21, 18, 2, 42009));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_321);
        ComplexEventDates_NoComplexEventDates_321.insert(ComplexEventEndDate_321.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_321(FIX::UTCTIMESTAMP(18, 22, 44, 9, 42015));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_321);
        ComplexEventDates_NoComplexEventDates_321.insert(ComplexEventStartDate_321.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_321);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_641;
          FIX::ComplexEventEndTime ComplexEventEndTime_641(FIX::UTCTIMEONLY(5, 29, 23));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_641);
          ComplexEventTimes_NoComplexEventTimes_641.insert(ComplexEventEndTime_641.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_641(FIX::UTCTIMEONLY(23, 39, 49));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_641);
          ComplexEventTimes_NoComplexEventTimes_641.insert(ComplexEventStartTime_641.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_641);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_642;
          FIX::ComplexEventEndTime ComplexEventEndTime_642(FIX::UTCTIMEONLY(10, 23, 13));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_642);
          ComplexEventTimes_NoComplexEventTimes_642.insert(ComplexEventEndTime_642.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_642(FIX::UTCTIMEONLY(22, 12, 52));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_642);
          ComplexEventTimes_NoComplexEventTimes_642.insert(ComplexEventStartTime_642.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_642);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_643;
          FIX::ComplexEventEndTime ComplexEventEndTime_643(FIX::UTCTIMEONLY(22, 13, 8));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_643);
          ComplexEventTimes_NoComplexEventTimes_643.insert(ComplexEventEndTime_643.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_643(FIX::UTCTIMEONLY(8, 34, 37));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_643);
          ComplexEventTimes_NoComplexEventTimes_643.insert(ComplexEventStartTime_643.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_643);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_322;
        FIX::ComplexEventEndDate ComplexEventEndDate_322(FIX::UTCTIMESTAMP(12, 21, 44, 3, 52002));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_322);
        ComplexEventDates_NoComplexEventDates_322.insert(ComplexEventEndDate_322.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_322(FIX::UTCTIMESTAMP(21, 38, 26, 8, 22009));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_322);
        ComplexEventDates_NoComplexEventDates_322.insert(ComplexEventStartDate_322.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_322);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_644;
          FIX::ComplexEventEndTime ComplexEventEndTime_644(FIX::UTCTIMEONLY(20, 41, 8));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_644);
          ComplexEventTimes_NoComplexEventTimes_644.insert(ComplexEventEndTime_644.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_644(FIX::UTCTIMEONLY(19, 12, 33));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_644);
          ComplexEventTimes_NoComplexEventTimes_644.insert(ComplexEventStartTime_644.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_644);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noSettlOblig_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_157;
      FIX::EventDate EventDate_157("LOCALMKTDATE_1498302791");
      noEvents_0_1_0.set(EventDate_157);
      EvntGrp_NoEvents_157.insert(EventDate_157.getString());
      FIX::EventPx EventPx_157;
      EventPx_157.setString("11471609");
      noEvents_0_1_0.set(EventPx_157);
      EvntGrp_NoEvents_157.insert(EventPx_157.getString());
      FIX::EventText EventText_157("STRING_2089633230");
      noEvents_0_1_0.set(EventText_157);
      EvntGrp_NoEvents_157.insert(EventText_157.getString());
      FIX::EventTime EventTime_157(FIX::UTCTIMESTAMP(11, 56, 37, 1, 12015));
      noEvents_0_1_0.set(EventTime_157);
      EvntGrp_NoEvents_157.insert(EventTime_157.getString());
      FIX::EventType EventType_157(10);
      noEvents_0_1_0.set(EventType_157);
      EvntGrp_NoEvents_157.insert(EventType_157.getString());
      all_values.push_back(EvntGrp_NoEvents_157);

      noSettlOblig_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_158;
      FIX::EventDate EventDate_158("LOCALMKTDATE_913811167");
      noEvents_0_1_1.set(EventDate_158);
      EvntGrp_NoEvents_158.insert(EventDate_158.getString());
      FIX::EventPx EventPx_158;
      EventPx_158.setString("4546637");
      noEvents_0_1_1.set(EventPx_158);
      EvntGrp_NoEvents_158.insert(EventPx_158.getString());
      FIX::EventText EventText_158("STRING_1751685818");
      noEvents_0_1_1.set(EventText_158);
      EvntGrp_NoEvents_158.insert(EventText_158.getString());
      FIX::EventTime EventTime_158(FIX::UTCTIMESTAMP(21, 8, 36, 13, 22002));
      noEvents_0_1_1.set(EventTime_158);
      EvntGrp_NoEvents_158.insert(EventTime_158.getString());
      FIX::EventType EventType_158(12);
      noEvents_0_1_1.set(EventType_158);
      EvntGrp_NoEvents_158.insert(EventType_158.getString());
      all_values.push_back(EvntGrp_NoEvents_158);

      noSettlOblig_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_157;
      FIX::InstrumentPartyID InstrumentPartyID_157("STRING_816550474");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyID_157.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_157('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyIDSource_157.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_157(1803298175);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_157);
      InstrumentParties_NoInstrumentParties_157.insert(InstrumentPartyRole_157.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_157);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312;
        FIX::InstrumentPartySubID InstrumentPartySubID_312("STRING_1269049156");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_312);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312.insert(InstrumentPartySubID_312.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_312(1866186528);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_312);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312.insert(InstrumentPartySubIDType_312.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313;
        FIX::InstrumentPartySubID InstrumentPartySubID_313("STRING_1333290227");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_313);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313.insert(InstrumentPartySubID_313.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_313(2144405678);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_313);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313.insert(InstrumentPartySubIDType_313.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314;
        FIX::InstrumentPartySubID InstrumentPartySubID_314("STRING_1217005671");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_314);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314.insert(InstrumentPartySubID_314.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_314(332967558);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_314);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314.insert(InstrumentPartySubIDType_314.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noSettlOblig_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_169;
      FIX::SecurityAltID SecurityAltID_169("STRING_415433383");
      noSecurityAltID_0_1_0.set(SecurityAltID_169);
      SecAltIDGrp_NoSecurityAltID_169.insert(SecurityAltID_169.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_169("STRING_1986408473");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_169);
      SecAltIDGrp_NoSecurityAltID_169.insert(SecurityAltIDSource_169.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_169);

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_170;
      FIX::SecurityAltID SecurityAltID_170("STRING_1082330389");
      noSecurityAltID_0_1_1.set(SecurityAltID_170);
      SecAltIDGrp_NoSecurityAltID_170.insert(SecurityAltID_170.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_170("STRING_384285552");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_170);
      SecAltIDGrp_NoSecurityAltID_170.insert(SecurityAltIDSource_170.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_170);

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_162;
    FIX::SecurityXML SecurityXML_163("XMLDATA_1819648718");
    noSettlOblig_0_0.set(SecurityXML_163);
    FIX::SecurityXMLLen SecurityXMLLen_81(1187069906);
    noSettlOblig_0_0.set(SecurityXMLLen_81);
    FIX::SecurityXMLSchema SecurityXMLSchema_81("STRING_73727335");
    noSettlOblig_0_0.set(SecurityXMLSchema_81);
    SecurityXML_162.insert(SecurityXMLSchema_81.getString());
    all_values.push_back(SecurityXML_162);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_142;
      FIX::PartyID PartyID_142("STRING_2100881073");
      noPartyIDs_0_1_0.set(PartyID_142);
      Parties_NoPartyIDs_142.insert(PartyID_142.getString());
      FIX::PartyIDSource PartyIDSource_142('3');
      noPartyIDs_0_1_0.set(PartyIDSource_142);
      Parties_NoPartyIDs_142.insert(PartyIDSource_142.getString());
      FIX::PartyRole PartyRole_142(44);
      noPartyIDs_0_1_0.set(PartyRole_142);
      Parties_NoPartyIDs_142.insert(PartyRole_142.getString());
      all_values.push_back(Parties_NoPartyIDs_142);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_282;
        FIX::PartySubID PartySubID_282("STRING_2000718340");
        noPartySubIDs_0_0_2_0.set(PartySubID_282);
        PtysSubGrp_NoPartySubIDs_282.insert(PartySubID_282.getString());
        FIX::PartySubIDType PartySubIDType_282(9);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_282);
        PtysSubGrp_NoPartySubIDs_282.insert(PartySubIDType_282.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_282);

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
      FIX::SettlObligSource SettlObligSource_0('1');
      noSettlDetails_0_1_0.set(SettlObligSource_0);
      SettlDetails_NoSettlDetails_0.insert(SettlObligSource_0.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_0);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_42;
        FIX::SettlPartyID SettlPartyID_42("STRING_527767110");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyID_42.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_42('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyIDSource_42.getString());
        FIX::SettlPartyRole SettlPartyRole_42(1320190882);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyRole_42.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_42);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_87;
          FIX::SettlPartySubID SettlPartySubID_87("STRING_1179774390");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_87);
          SettlPtysSubGrp_NoSettlPartySubIDs_87.insert(SettlPartySubID_87.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_87(976005410);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_87);
          SettlPtysSubGrp_NoSettlPartySubIDs_87.insert(SettlPartySubIDType_87.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_87);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_88;
          FIX::SettlPartySubID SettlPartySubID_88("STRING_1418221039");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_88);
          SettlPtysSubGrp_NoSettlPartySubIDs_88.insert(SettlPartySubID_88.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_88(301339898);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_88);
          SettlPtysSubGrp_NoSettlPartySubIDs_88.insert(SettlPartySubIDType_88.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_88);

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
      FIX::SettlObligSource SettlObligSource_1('1');
      noSettlDetails_0_1_1.set(SettlObligSource_1);
      SettlDetails_NoSettlDetails_1.insert(SettlObligSource_1.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_1);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_43;
        FIX::SettlPartyID SettlPartyID_43("STRING_298261929");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyID_43.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_43('1');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyIDSource_43.getString());
        FIX::SettlPartyRole SettlPartyRole_43(936995176);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyRole_43.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_43);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_89;
          FIX::SettlPartySubID SettlPartySubID_89("STRING_179663696");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_89);
          SettlPtysSubGrp_NoSettlPartySubIDs_89.insert(SettlPartySubID_89.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_89(775920001);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_89);
          SettlPtysSubGrp_NoSettlPartySubIDs_89.insert(SettlPartySubIDType_89.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_89);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_90;
          FIX::SettlPartySubID SettlPartySubID_90("STRING_1319663931");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_90);
          SettlPtysSubGrp_NoSettlPartySubIDs_90.insert(SettlPartySubID_90.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_90(563949248);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_90);
          SettlPtysSubGrp_NoSettlPartySubIDs_90.insert(SettlPartySubIDType_90.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_90);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_91;
          FIX::SettlPartySubID SettlPartySubID_91("STRING_448085072");
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubID_91);
          SettlPtysSubGrp_NoSettlPartySubIDs_91.insert(SettlPartySubID_91.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_91(359250189);
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubIDType_91);
          SettlPtysSubGrp_NoSettlPartySubIDs_91.insert(SettlPartySubIDType_91.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_91);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_2);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_44;
        FIX::SettlPartyID SettlPartyID_44("STRING_637676584");
        noSettlPartyIDs_0_1_2_1.set(SettlPartyID_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyID_44.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_44('1');
        noSettlPartyIDs_0_1_2_1.set(SettlPartyIDSource_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyIDSource_44.getString());
        FIX::SettlPartyRole SettlPartyRole_44(312647615);
        noSettlPartyIDs_0_1_2_1.set(SettlPartyRole_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyRole_44.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_44);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_92;
          FIX::SettlPartySubID SettlPartySubID_92("STRING_522865434");
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubID_92);
          SettlPtysSubGrp_NoSettlPartySubIDs_92.insert(SettlPartySubID_92.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_92(745649411);
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubIDType_92);
          SettlPtysSubGrp_NoSettlPartySubIDs_92.insert(SettlPartySubIDType_92.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_92);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_93;
          FIX::SettlPartySubID SettlPartySubID_93("STRING_1019302363");
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubID_93);
          SettlPtysSubGrp_NoSettlPartySubIDs_93.insert(SettlPartySubID_93.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_93(77963664);
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubIDType_93);
          SettlPtysSubGrp_NoSettlPartySubIDs_93.insert(SettlPartySubIDType_93.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_93);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_94;
          FIX::SettlPartySubID SettlPartySubID_94("STRING_1155239715");
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubID_94);
          SettlPtysSubGrp_NoSettlPartySubIDs_94.insert(SettlPartySubID_94.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_94(263767268);
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubIDType_94);
          SettlPtysSubGrp_NoSettlPartySubIDs_94.insert(SettlPartySubIDType_94.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_94);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_2);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      noSettlOblig_0_0.addGroup(noSettlDetails_0_1_1);
    }
    msg.addGroup(noSettlOblig_0_0);
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
