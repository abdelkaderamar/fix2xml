#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/AdjustedPositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AdjustedPositionReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AdjustedPositionReport msg;

  list<multiset<string>> all_values;
  multiset<string> AdjustedPositionReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_0("LOCALMKTDATE_357384547");
  msg.set(ClearingBusinessDate_0);
  AdjustedPositionReport_0.insert(ClearingBusinessDate_0.getString());
  FIX::PosMaintRptID PosMaintRptID_0("STRING_1923875636");
  msg.set(PosMaintRptID_0);
  AdjustedPositionReport_0.insert(PosMaintRptID_0.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_0("STRING_941141776");
  msg.set(PosMaintRptRefID_0);
  AdjustedPositionReport_0.insert(PosMaintRptRefID_0.getString());
  FIX::PosReqType PosReqType_0(2);
  msg.set(PosReqType_0);
  AdjustedPositionReport_0.insert(PosReqType_0.getString());
  FIX::PriorSettlPrice PriorSettlPrice_0;
  PriorSettlPrice_0.setString("5048924");
  msg.set(PriorSettlPrice_0);
  AdjustedPositionReport_0.insert(PriorSettlPrice_0.getString());
  FIX::SettlPrice SettlPrice_0;
  SettlPrice_0.setString("14697797");
  msg.set(SettlPrice_0);
  AdjustedPositionReport_0.insert(SettlPrice_0.getString());
  FIX::SettlSessID SettlSessID_0("STRING_ETH");
  msg.set(SettlSessID_0);
  AdjustedPositionReport_0.insert(SettlSessID_0.getString());
  all_values.push_back(AdjustedPositionReport_0);

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::AdjustedPositionReport::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_0;
    FIX::AttachmentPoint AttachmentPoint_0;
    AttachmentPoint_0.setString("96.560000");
    noRelatedSym_0_0.set(AttachmentPoint_0);
    Instrument_0.insert(AttachmentPoint_0.getString());
    FIX::CFICode CFICode_0("STRING_795503003");
    noRelatedSym_0_0.set(CFICode_0);
    Instrument_0.insert(CFICode_0.getString());
    FIX::CPProgram CPProgram_0(99);
    noRelatedSym_0_0.set(CPProgram_0);
    Instrument_0.insert(CPProgram_0.getString());
    FIX::CPRegType CPRegType_0("STRING_799111003");
    noRelatedSym_0_0.set(CPRegType_0);
    Instrument_0.insert(CPRegType_0.getString());
    FIX::CapPrice CapPrice_0;
    CapPrice_0.setString("1172045");
    noRelatedSym_0_0.set(CapPrice_0);
    Instrument_0.insert(CapPrice_0.getString());
    FIX::ContractMultiplier ContractMultiplier_0;
    ContractMultiplier_0.setString("17587843");
    noRelatedSym_0_0.set(ContractMultiplier_0);
    Instrument_0.insert(ContractMultiplier_0.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_0(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_0);
    Instrument_0.insert(ContractMultiplierUnit_0.getString());
    FIX::ContractSettlMonth ContractSettlMonth_0("MONTHYEAR_1217957382");
    noRelatedSym_0_0.set(ContractSettlMonth_0);
    Instrument_0.insert(ContractSettlMonth_0.getString());
    FIX::CountryOfIssue CountryOfIssue_0("COUNTRY_1607159957");
    noRelatedSym_0_0.set(CountryOfIssue_0);
    Instrument_0.insert(CountryOfIssue_0.getString());
    FIX::CouponPaymentDate CouponPaymentDate_0("LOCALMKTDATE_2141662287");
    noRelatedSym_0_0.set(CouponPaymentDate_0);
    Instrument_0.insert(CouponPaymentDate_0.getString());
    FIX::CouponRate CouponRate_0;
    CouponRate_0.setString("42.680000");
    noRelatedSym_0_0.set(CouponRate_0);
    Instrument_0.insert(CouponRate_0.getString());
    FIX::CreditRating CreditRating_0("STRING_304002630");
    noRelatedSym_0_0.set(CreditRating_0);
    Instrument_0.insert(CreditRating_0.getString());
    FIX::DatedDate DatedDate_0("LOCALMKTDATE_566755954");
    noRelatedSym_0_0.set(DatedDate_0);
    Instrument_0.insert(DatedDate_0.getString());
    FIX::DetachmentPoint DetachmentPoint_0;
    DetachmentPoint_0.setString("47.060000");
    noRelatedSym_0_0.set(DetachmentPoint_0);
    Instrument_0.insert(DetachmentPoint_0.getString());
    FIX::EncodedIssuer EncodedIssuer_0("DATA_1080828374");
    noRelatedSym_0_0.set(EncodedIssuer_0);
    Instrument_0.insert(EncodedIssuer_0.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_0(1330469813);
    noRelatedSym_0_0.set(EncodedIssuerLen_0);
    Instrument_0.insert(EncodedIssuerLen_0.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_0("DATA_1350351005");
    noRelatedSym_0_0.set(EncodedSecurityDesc_0);
    Instrument_0.insert(EncodedSecurityDesc_0.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_0(1392395762);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_0);
    Instrument_0.insert(EncodedSecurityDescLen_0.getString());
    FIX::ExerciseStyle ExerciseStyle_0(2);
    noRelatedSym_0_0.set(ExerciseStyle_0);
    Instrument_0.insert(ExerciseStyle_0.getString());
    FIX::Factor Factor_0;
    Factor_0.setString("4951818");
    noRelatedSym_0_0.set(Factor_0);
    Instrument_0.insert(Factor_0.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_0(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_0);
    Instrument_0.insert(FlexProductEligibilityIndicator_0.getString());
    FIX::FlexibleIndicator FlexibleIndicator_0(false);
    noRelatedSym_0_0.set(FlexibleIndicator_0);
    Instrument_0.insert(FlexibleIndicator_0.getString());
    FIX::FloorPrice FloorPrice_0;
    FloorPrice_0.setString("9026852");
    noRelatedSym_0_0.set(FloorPrice_0);
    Instrument_0.insert(FloorPrice_0.getString());
    FIX::FlowScheduleType FlowScheduleType_0(3);
    noRelatedSym_0_0.set(FlowScheduleType_0);
    Instrument_0.insert(FlowScheduleType_0.getString());
    FIX::InstrRegistry InstrRegistry_0("STRING_1277584039");
    noRelatedSym_0_0.set(InstrRegistry_0);
    Instrument_0.insert(InstrRegistry_0.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_0('1');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_0);
    Instrument_0.insert(InstrmtAssignmentMethod_0.getString());
    FIX::InterestAccrualDate InterestAccrualDate_0("LOCALMKTDATE_1484096656");
    noRelatedSym_0_0.set(InterestAccrualDate_0);
    Instrument_0.insert(InterestAccrualDate_0.getString());
    FIX::IssueDate IssueDate_0("LOCALMKTDATE_1782476478");
    noRelatedSym_0_0.set(IssueDate_0);
    Instrument_0.insert(IssueDate_0.getString());
    FIX::Issuer Issuer_0("STRING_1166123078");
    noRelatedSym_0_0.set(Issuer_0);
    Instrument_0.insert(Issuer_0.getString());
    FIX::ListMethod ListMethod_0(0);
    noRelatedSym_0_0.set(ListMethod_0);
    Instrument_0.insert(ListMethod_0.getString());
    FIX::LocaleOfIssue LocaleOfIssue_0("STRING_1866924898");
    noRelatedSym_0_0.set(LocaleOfIssue_0);
    Instrument_0.insert(LocaleOfIssue_0.getString());
    FIX::MaturityDate MaturityDate_0("LOCALMKTDATE_813989086");
    noRelatedSym_0_0.set(MaturityDate_0);
    Instrument_0.insert(MaturityDate_0.getString());
    FIX::MaturityMonthYear MaturityMonthYear_0("MONTHYEAR_1690231318");
    noRelatedSym_0_0.set(MaturityMonthYear_0);
    Instrument_0.insert(MaturityMonthYear_0.getString());
    FIX::MaturityTime MaturityTime_0("TZTIMEONLY_857692046");
    noRelatedSym_0_0.set(MaturityTime_0);
    Instrument_0.insert(MaturityTime_0.getString());
    FIX::MinPriceIncrement MinPriceIncrement_0;
    MinPriceIncrement_0.setString("16131000");
    noRelatedSym_0_0.set(MinPriceIncrement_0);
    Instrument_0.insert(MinPriceIncrement_0.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_0;
    MinPriceIncrementAmount_0.setString("18074359");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_0);
    Instrument_0.insert(MinPriceIncrementAmount_0.getString());
    FIX::NTPositionLimit NTPositionLimit_0(468992734);
    noRelatedSym_0_0.set(NTPositionLimit_0);
    Instrument_0.insert(NTPositionLimit_0.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_0;
    NotionalPercentageOutstanding_0.setString("9.620000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_0);
    Instrument_0.insert(NotionalPercentageOutstanding_0.getString());
    FIX::OptAttribute OptAttribute_0('8');
    noRelatedSym_0_0.set(OptAttribute_0);
    Instrument_0.insert(OptAttribute_0.getString());
    FIX::OptPayoutAmount OptPayoutAmount_0;
    OptPayoutAmount_0.setString("20761526");
    noRelatedSym_0_0.set(OptPayoutAmount_0);
    Instrument_0.insert(OptPayoutAmount_0.getString());
    FIX::OptPayoutType OptPayoutType_0(2);
    noRelatedSym_0_0.set(OptPayoutType_0);
    Instrument_0.insert(OptPayoutType_0.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_0;
    OriginalNotionalPercentageOutstanding_0.setString("39.130000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_0);
    Instrument_0.insert(OriginalNotionalPercentageOutstanding_0.getString());
    FIX::Pool Pool_0("STRING_232671674");
    noRelatedSym_0_0.set(Pool_0);
    Instrument_0.insert(Pool_0.getString());
    FIX::PositionLimit PositionLimit_0(1383685556);
    noRelatedSym_0_0.set(PositionLimit_0);
    Instrument_0.insert(PositionLimit_0.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_0("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_0);
    Instrument_0.insert(PriceQuoteMethod_0.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_0("STRING_1313500048");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_0);
    Instrument_0.insert(PriceUnitOfMeasure_0.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_0;
    PriceUnitOfMeasureQty_0.setString("5666717");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_0);
    Instrument_0.insert(PriceUnitOfMeasureQty_0.getString());
    FIX::Product Product_0(1);
    noRelatedSym_0_0.set(Product_0);
    Instrument_0.insert(Product_0.getString());
    FIX::ProductComplex ProductComplex_0("STRING_558412162");
    noRelatedSym_0_0.set(ProductComplex_0);
    Instrument_0.insert(ProductComplex_0.getString());
    FIX::PutOrCall PutOrCall_0(1);
    noRelatedSym_0_0.set(PutOrCall_0);
    Instrument_0.insert(PutOrCall_0.getString());
    FIX::RedemptionDate RedemptionDate_0("LOCALMKTDATE_746384170");
    noRelatedSym_0_0.set(RedemptionDate_0);
    Instrument_0.insert(RedemptionDate_0.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_0("STRING_1517937858");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_0);
    Instrument_0.insert(RepoCollateralSecurityType_0.getString());
    FIX::RepurchaseRate RepurchaseRate_0;
    RepurchaseRate_0.setString("61.160000");
    noRelatedSym_0_0.set(RepurchaseRate_0);
    Instrument_0.insert(RepurchaseRate_0.getString());
    FIX::RepurchaseTerm RepurchaseTerm_0(1649069403);
    noRelatedSym_0_0.set(RepurchaseTerm_0);
    Instrument_0.insert(RepurchaseTerm_0.getString());
    FIX::RestructuringType RestructuringType_0("STRING_MR");
    noRelatedSym_0_0.set(RestructuringType_0);
    Instrument_0.insert(RestructuringType_0.getString());
    FIX::SecurityDesc SecurityDesc_0("STRING_1485440155");
    noRelatedSym_0_0.set(SecurityDesc_0);
    Instrument_0.insert(SecurityDesc_0.getString());
    FIX::SecurityExchange SecurityExchange_0("EXCHANGE_1345412763");
    noRelatedSym_0_0.set(SecurityExchange_0);
    Instrument_0.insert(SecurityExchange_0.getString());
    FIX::SecurityGroup SecurityGroup_0("STRING_23977461");
    noRelatedSym_0_0.set(SecurityGroup_0);
    Instrument_0.insert(SecurityGroup_0.getString());
    FIX::SecurityID SecurityID_0("STRING_1120432985");
    noRelatedSym_0_0.set(SecurityID_0);
    Instrument_0.insert(SecurityID_0.getString());
    FIX::SecurityIDSource SecurityIDSource_0("STRING_M");
    noRelatedSym_0_0.set(SecurityIDSource_0);
    Instrument_0.insert(SecurityIDSource_0.getString());
    FIX::SecurityStatus SecurityStatus_0("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_0);
    Instrument_0.insert(SecurityStatus_0.getString());
    FIX::SecuritySubType SecuritySubType_0("STRING_839874236");
    noRelatedSym_0_0.set(SecuritySubType_0);
    Instrument_0.insert(SecuritySubType_0.getString());
    FIX::SecurityType SecurityType_0("STRING_ABS");
    noRelatedSym_0_0.set(SecurityType_0);
    Instrument_0.insert(SecurityType_0.getString());
    FIX::Seniority Seniority_0("STRING_SR");
    noRelatedSym_0_0.set(Seniority_0);
    Instrument_0.insert(Seniority_0.getString());
    FIX::SettlMethod SettlMethod_0('C');
    noRelatedSym_0_0.set(SettlMethod_0);
    Instrument_0.insert(SettlMethod_0.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_0("STRING_643657722");
    noRelatedSym_0_0.set(SettleOnOpenFlag_0);
    Instrument_0.insert(SettleOnOpenFlag_0.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_0("STRING_121405709");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_0);
    Instrument_0.insert(StateOrProvinceOfIssue_0.getString());
    FIX::StrikeCurrency StrikeCurrency_0("GBP");
    noRelatedSym_0_0.set(StrikeCurrency_0);
    Instrument_0.insert(StrikeCurrency_0.getString());
    FIX::StrikeMultiplier StrikeMultiplier_0;
    StrikeMultiplier_0.setString("9993153");
    noRelatedSym_0_0.set(StrikeMultiplier_0);
    Instrument_0.insert(StrikeMultiplier_0.getString());
    FIX::StrikePrice StrikePrice_0;
    StrikePrice_0.setString("20952280");
    noRelatedSym_0_0.set(StrikePrice_0);
    Instrument_0.insert(StrikePrice_0.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_0(4);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_0);
    Instrument_0.insert(StrikePriceBoundaryMethod_0.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_0;
    StrikePriceBoundaryPrecision_0.setString("56.200000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_0);
    Instrument_0.insert(StrikePriceBoundaryPrecision_0.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_0(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_0);
    Instrument_0.insert(StrikePriceDeterminationMethod_0.getString());
    FIX::StrikeValue StrikeValue_0;
    StrikeValue_0.setString("15195401");
    noRelatedSym_0_0.set(StrikeValue_0);
    Instrument_0.insert(StrikeValue_0.getString());
    FIX::Symbol Symbol_0("STRING_1067160591");
    noRelatedSym_0_0.set(Symbol_0);
    Instrument_0.insert(Symbol_0.getString());
    FIX::SymbolSfx SymbolSfx_0("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_0);
    Instrument_0.insert(SymbolSfx_0.getString());
    FIX::TimeUnit TimeUnit_0("STRING_Wk");
    noRelatedSym_0_0.set(TimeUnit_0);
    Instrument_0.insert(TimeUnit_0.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_0(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_0);
    Instrument_0.insert(UnderlyingPriceDeterminationMethod_0.getString());
    FIX::UnitOfMeasure UnitOfMeasure_0("STRING_Bu");
    noRelatedSym_0_0.set(UnitOfMeasure_0);
    Instrument_0.insert(UnitOfMeasure_0.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_0;
    UnitOfMeasureQty_0.setString("7928759");
    noRelatedSym_0_0.set(UnitOfMeasureQty_0);
    Instrument_0.insert(UnitOfMeasureQty_0.getString());
    FIX::ValuationMethod ValuationMethod_0("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_0);
    Instrument_0.insert(ValuationMethod_0.getString());
    all_values.push_back(Instrument_0);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_0;
      FIX::ComplexEventCondition ComplexEventCondition_0(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventCondition_0.getString());
      FIX::ComplexEventPrice ComplexEventPrice_0;
      ComplexEventPrice_0.setString("15663328");
      noComplexEvents_0_1_0.set(ComplexEventPrice_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPrice_0.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_0(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceBoundaryMethod_0.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_0;
      ComplexEventPriceBoundaryPrecision_0.setString("86.030000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceBoundaryPrecision_0.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_0(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceTimeType_0.getString());
      FIX::ComplexEventType ComplexEventType_0(8);
      noComplexEvents_0_1_0.set(ComplexEventType_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventType_0.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_0;
      ComplexOptPayoutAmount_0.setString("14591215");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexOptPayoutAmount_0.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_0);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_0;
        FIX::ComplexEventEndDate ComplexEventEndDate_0(FIX::UTCTIMESTAMP(9, 6, 56, 11, 1, 2013));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_0);
        ComplexEventDates_NoComplexEventDates_0.insert(ComplexEventEndDate_0.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_0(FIX::UTCTIMESTAMP(1, 11, 38, 19, 8, 2006));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_0);
        ComplexEventDates_NoComplexEventDates_0.insert(ComplexEventStartDate_0.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_0);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_0;
          FIX::ComplexEventEndTime ComplexEventEndTime_0(FIX::UTCTIMEONLY(18, 45, 35));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_0);
          ComplexEventTimes_NoComplexEventTimes_0.insert(ComplexEventEndTime_0.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_0(FIX::UTCTIMEONLY(18, 57, 37));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_0);
          ComplexEventTimes_NoComplexEventTimes_0.insert(ComplexEventStartTime_0.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_0);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_1;
      FIX::ComplexEventCondition ComplexEventCondition_1(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventCondition_1.getString());
      FIX::ComplexEventPrice ComplexEventPrice_1;
      ComplexEventPrice_1.setString("20804991");
      noComplexEvents_0_1_1.set(ComplexEventPrice_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPrice_1.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_1(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceBoundaryMethod_1.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_1;
      ComplexEventPriceBoundaryPrecision_1.setString("6.780000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceBoundaryPrecision_1.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_1(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceTimeType_1.getString());
      FIX::ComplexEventType ComplexEventType_1(9);
      noComplexEvents_0_1_1.set(ComplexEventType_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventType_1.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_1;
      ComplexOptPayoutAmount_1.setString("10120286");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexOptPayoutAmount_1.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_1);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_1;
        FIX::ComplexEventEndDate ComplexEventEndDate_1(FIX::UTCTIMESTAMP(12, 37, 42, 7, 6, 2013));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_1);
        ComplexEventDates_NoComplexEventDates_1.insert(ComplexEventEndDate_1.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_1(FIX::UTCTIMESTAMP(18, 10, 16, 22, 7, 2008));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_1);
        ComplexEventDates_NoComplexEventDates_1.insert(ComplexEventStartDate_1.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_1);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_1;
          FIX::ComplexEventEndTime ComplexEventEndTime_1(FIX::UTCTIMEONLY(14, 53, 32));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_1);
          ComplexEventTimes_NoComplexEventTimes_1.insert(ComplexEventEndTime_1.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_1(FIX::UTCTIMEONLY(11, 29, 30));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_1);
          ComplexEventTimes_NoComplexEventTimes_1.insert(ComplexEventStartTime_1.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_1);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_2;
          FIX::ComplexEventEndTime ComplexEventEndTime_2(FIX::UTCTIMEONLY(8, 0, 16));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_2);
          ComplexEventTimes_NoComplexEventTimes_2.insert(ComplexEventEndTime_2.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_2(FIX::UTCTIMEONLY(8, 47, 43));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_2);
          ComplexEventTimes_NoComplexEventTimes_2.insert(ComplexEventStartTime_2.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_2);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_2;
      FIX::ComplexEventCondition ComplexEventCondition_2(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventCondition_2.getString());
      FIX::ComplexEventPrice ComplexEventPrice_2;
      ComplexEventPrice_2.setString("15193976");
      noComplexEvents_0_1_2.set(ComplexEventPrice_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPrice_2.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_2(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceBoundaryMethod_2.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_2;
      ComplexEventPriceBoundaryPrecision_2.setString("86.320000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceBoundaryPrecision_2.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_2(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceTimeType_2.getString());
      FIX::ComplexEventType ComplexEventType_2(3);
      noComplexEvents_0_1_2.set(ComplexEventType_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventType_2.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_2;
      ComplexOptPayoutAmount_2.setString("17910379");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexOptPayoutAmount_2.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_2);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_2;
        FIX::ComplexEventEndDate ComplexEventEndDate_2(FIX::UTCTIMESTAMP(10, 4, 10, 4, 2, 2002));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_2);
        ComplexEventDates_NoComplexEventDates_2.insert(ComplexEventEndDate_2.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_2(FIX::UTCTIMESTAMP(7, 11, 25, 12, 12, 2006));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_2);
        ComplexEventDates_NoComplexEventDates_2.insert(ComplexEventStartDate_2.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_2);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_3;
          FIX::ComplexEventEndTime ComplexEventEndTime_3(FIX::UTCTIMEONLY(7, 47, 17));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_3);
          ComplexEventTimes_NoComplexEventTimes_3.insert(ComplexEventEndTime_3.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_3(FIX::UTCTIMEONLY(12, 56, 26));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_3);
          ComplexEventTimes_NoComplexEventTimes_3.insert(ComplexEventStartTime_3.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_3);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_4;
          FIX::ComplexEventEndTime ComplexEventEndTime_4(FIX::UTCTIMEONLY(19, 30, 51));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_4);
          ComplexEventTimes_NoComplexEventTimes_4.insert(ComplexEventEndTime_4.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_4(FIX::UTCTIMEONLY(4, 2, 1));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_4);
          ComplexEventTimes_NoComplexEventTimes_4.insert(ComplexEventStartTime_4.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_4);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_0;
      FIX::EventDate EventDate_0("LOCALMKTDATE_1906370776");
      noEvents_0_1_0.set(EventDate_0);
      EvntGrp_NoEvents_0.insert(EventDate_0.getString());
      FIX::EventPx EventPx_0;
      EventPx_0.setString("17348236");
      noEvents_0_1_0.set(EventPx_0);
      EvntGrp_NoEvents_0.insert(EventPx_0.getString());
      FIX::EventText EventText_0("STRING_72881398");
      noEvents_0_1_0.set(EventText_0);
      EvntGrp_NoEvents_0.insert(EventText_0.getString());
      FIX::EventTime EventTime_0(FIX::UTCTIMESTAMP(22, 16, 57, 10, 4, 2004));
      noEvents_0_1_0.set(EventTime_0);
      EvntGrp_NoEvents_0.insert(EventTime_0.getString());
      FIX::EventType EventType_0(3);
      noEvents_0_1_0.set(EventType_0);
      EvntGrp_NoEvents_0.insert(EventType_0.getString());
      all_values.push_back(EvntGrp_NoEvents_0);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_1;
      FIX::EventDate EventDate_1("LOCALMKTDATE_909712010");
      noEvents_0_1_1.set(EventDate_1);
      EvntGrp_NoEvents_1.insert(EventDate_1.getString());
      FIX::EventPx EventPx_1;
      EventPx_1.setString("16370008");
      noEvents_0_1_1.set(EventPx_1);
      EvntGrp_NoEvents_1.insert(EventPx_1.getString());
      FIX::EventText EventText_1("STRING_68429829");
      noEvents_0_1_1.set(EventText_1);
      EvntGrp_NoEvents_1.insert(EventText_1.getString());
      FIX::EventTime EventTime_1(FIX::UTCTIMESTAMP(20, 57, 0, 15, 2, 2014));
      noEvents_0_1_1.set(EventTime_1);
      EvntGrp_NoEvents_1.insert(EventTime_1.getString());
      FIX::EventType EventType_1(15);
      noEvents_0_1_1.set(EventType_1);
      EvntGrp_NoEvents_1.insert(EventType_1.getString());
      all_values.push_back(EvntGrp_NoEvents_1);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_2;
      FIX::EventDate EventDate_2("LOCALMKTDATE_1288210499");
      noEvents_0_1_2.set(EventDate_2);
      EvntGrp_NoEvents_2.insert(EventDate_2.getString());
      FIX::EventPx EventPx_2;
      EventPx_2.setString("11298005");
      noEvents_0_1_2.set(EventPx_2);
      EvntGrp_NoEvents_2.insert(EventPx_2.getString());
      FIX::EventText EventText_2("STRING_850908064");
      noEvents_0_1_2.set(EventText_2);
      EvntGrp_NoEvents_2.insert(EventText_2.getString());
      FIX::EventTime EventTime_2(FIX::UTCTIMESTAMP(8, 56, 45, 21, 5, 2017));
      noEvents_0_1_2.set(EventTime_2);
      EvntGrp_NoEvents_2.insert(EventTime_2.getString());
      FIX::EventType EventType_2(99);
      noEvents_0_1_2.set(EventType_2);
      EvntGrp_NoEvents_2.insert(EventType_2.getString());
      all_values.push_back(EvntGrp_NoEvents_2);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_0;
      FIX::InstrumentPartyID InstrumentPartyID_0("STRING_1395513358");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyID_0.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_0('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyIDSource_0.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_0(2070364386);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyRole_0.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_0);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0;
        FIX::InstrumentPartySubID InstrumentPartySubID_0("STRING_1075672131");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_0);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0.insert(InstrumentPartySubID_0.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_0(97269806);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_0);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0.insert(InstrumentPartySubIDType_0.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1;
        FIX::InstrumentPartySubID InstrumentPartySubID_1("STRING_1811040550");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_1);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1.insert(InstrumentPartySubID_1.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_1(1198442954);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_1);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1.insert(InstrumentPartySubIDType_1.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2;
        FIX::InstrumentPartySubID InstrumentPartySubID_2("STRING_1006981816");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_2);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2.insert(InstrumentPartySubID_2.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_2(1300557731);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_2);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2.insert(InstrumentPartySubIDType_2.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_1;
      FIX::InstrumentPartyID InstrumentPartyID_1("STRING_1266872783");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyID_1.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_1('2');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyIDSource_1.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_1(1612378183);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyRole_1.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_1);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3;
        FIX::InstrumentPartySubID InstrumentPartySubID_3("STRING_1601482680");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_3);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3.insert(InstrumentPartySubID_3.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_3(107916650);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_3);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3.insert(InstrumentPartySubIDType_3.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_2;
      FIX::InstrumentPartyID InstrumentPartyID_2("STRING_1487851405");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_2);
      InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyID_2.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_2('9');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_2);
      InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyIDSource_2.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_2(269146824);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_2);
      InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyRole_2.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_2);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4;
        FIX::InstrumentPartySubID InstrumentPartySubID_4("STRING_2115757076");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_4);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4.insert(InstrumentPartySubID_4.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_4(1120054889);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_4);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4.insert(InstrumentPartySubIDType_4.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5;
        FIX::InstrumentPartySubID InstrumentPartySubID_5("STRING_2110950427");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_5);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5.insert(InstrumentPartySubID_5.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_5(932966589);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_5);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5.insert(InstrumentPartySubIDType_5.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6;
        FIX::InstrumentPartySubID InstrumentPartySubID_6("STRING_176652677");
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubID_6);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6.insert(InstrumentPartySubID_6.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_6(1283554964);
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubIDType_6);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6.insert(InstrumentPartySubIDType_6.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_0;
      FIX::SecurityAltID SecurityAltID_0("STRING_10883162");
      noSecurityAltID_0_1_0.set(SecurityAltID_0);
      SecAltIDGrp_NoSecurityAltID_0.insert(SecurityAltID_0.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_0("STRING_215046630");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_0);
      SecAltIDGrp_NoSecurityAltID_0.insert(SecurityAltIDSource_0.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_0);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_1;
      FIX::SecurityAltID SecurityAltID_1("STRING_1617705221");
      noSecurityAltID_0_1_1.set(SecurityAltID_1);
      SecAltIDGrp_NoSecurityAltID_1.insert(SecurityAltID_1.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_1("STRING_2065478692");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_1);
      SecAltIDGrp_NoSecurityAltID_1.insert(SecurityAltIDSource_1.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_1);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_0;
    FIX::SecurityXML SecurityXML_1("XMLDATA_1610559988");
    noRelatedSym_0_0.set(SecurityXML_1);
    FIX::SecurityXMLLen SecurityXMLLen_0(1447469547);
    noRelatedSym_0_0.set(SecurityXMLLen_0);
    FIX::SecurityXMLSchema SecurityXMLSchema_0("STRING_1988359431");
    noRelatedSym_0_0.set(SecurityXMLSchema_0);
    SecurityXML_0.insert(SecurityXMLSchema_0.getString());
    all_values.push_back(SecurityXML_0);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_1;
    FIX::AttachmentPoint AttachmentPoint_1;
    AttachmentPoint_1.setString("84.350000");
    noRelatedSym_0_1.set(AttachmentPoint_1);
    Instrument_1.insert(AttachmentPoint_1.getString());
    FIX::CFICode CFICode_1("STRING_375658030");
    noRelatedSym_0_1.set(CFICode_1);
    Instrument_1.insert(CFICode_1.getString());
    FIX::CPProgram CPProgram_1(99);
    noRelatedSym_0_1.set(CPProgram_1);
    Instrument_1.insert(CPProgram_1.getString());
    FIX::CPRegType CPRegType_1("STRING_1311355337");
    noRelatedSym_0_1.set(CPRegType_1);
    Instrument_1.insert(CPRegType_1.getString());
    FIX::CapPrice CapPrice_1;
    CapPrice_1.setString("15741009");
    noRelatedSym_0_1.set(CapPrice_1);
    Instrument_1.insert(CapPrice_1.getString());
    FIX::ContractMultiplier ContractMultiplier_1;
    ContractMultiplier_1.setString("9451274");
    noRelatedSym_0_1.set(ContractMultiplier_1);
    Instrument_1.insert(ContractMultiplier_1.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_1(2);
    noRelatedSym_0_1.set(ContractMultiplierUnit_1);
    Instrument_1.insert(ContractMultiplierUnit_1.getString());
    FIX::ContractSettlMonth ContractSettlMonth_1("MONTHYEAR_693490120");
    noRelatedSym_0_1.set(ContractSettlMonth_1);
    Instrument_1.insert(ContractSettlMonth_1.getString());
    FIX::CountryOfIssue CountryOfIssue_1("COUNTRY_1240581685");
    noRelatedSym_0_1.set(CountryOfIssue_1);
    Instrument_1.insert(CountryOfIssue_1.getString());
    FIX::CouponPaymentDate CouponPaymentDate_1("LOCALMKTDATE_2076807603");
    noRelatedSym_0_1.set(CouponPaymentDate_1);
    Instrument_1.insert(CouponPaymentDate_1.getString());
    FIX::CouponRate CouponRate_1;
    CouponRate_1.setString("77.120000");
    noRelatedSym_0_1.set(CouponRate_1);
    Instrument_1.insert(CouponRate_1.getString());
    FIX::CreditRating CreditRating_1("STRING_694580718");
    noRelatedSym_0_1.set(CreditRating_1);
    Instrument_1.insert(CreditRating_1.getString());
    FIX::DatedDate DatedDate_1("LOCALMKTDATE_37240606");
    noRelatedSym_0_1.set(DatedDate_1);
    Instrument_1.insert(DatedDate_1.getString());
    FIX::DetachmentPoint DetachmentPoint_1;
    DetachmentPoint_1.setString("54.700000");
    noRelatedSym_0_1.set(DetachmentPoint_1);
    Instrument_1.insert(DetachmentPoint_1.getString());
    FIX::EncodedIssuer EncodedIssuer_1("DATA_1680537247");
    noRelatedSym_0_1.set(EncodedIssuer_1);
    Instrument_1.insert(EncodedIssuer_1.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_1(306387430);
    noRelatedSym_0_1.set(EncodedIssuerLen_1);
    Instrument_1.insert(EncodedIssuerLen_1.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_1("DATA_1350263727");
    noRelatedSym_0_1.set(EncodedSecurityDesc_1);
    Instrument_1.insert(EncodedSecurityDesc_1.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_1(1648810675);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_1);
    Instrument_1.insert(EncodedSecurityDescLen_1.getString());
    FIX::ExerciseStyle ExerciseStyle_1(0);
    noRelatedSym_0_1.set(ExerciseStyle_1);
    Instrument_1.insert(ExerciseStyle_1.getString());
    FIX::Factor Factor_1;
    Factor_1.setString("13137305");
    noRelatedSym_0_1.set(Factor_1);
    Instrument_1.insert(Factor_1.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_1(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_1);
    Instrument_1.insert(FlexProductEligibilityIndicator_1.getString());
    FIX::FlexibleIndicator FlexibleIndicator_1(false);
    noRelatedSym_0_1.set(FlexibleIndicator_1);
    Instrument_1.insert(FlexibleIndicator_1.getString());
    FIX::FloorPrice FloorPrice_1;
    FloorPrice_1.setString("4498018");
    noRelatedSym_0_1.set(FloorPrice_1);
    Instrument_1.insert(FloorPrice_1.getString());
    FIX::FlowScheduleType FlowScheduleType_1(4);
    noRelatedSym_0_1.set(FlowScheduleType_1);
    Instrument_1.insert(FlowScheduleType_1.getString());
    FIX::InstrRegistry InstrRegistry_1("STRING_1613978159");
    noRelatedSym_0_1.set(InstrRegistry_1);
    Instrument_1.insert(InstrRegistry_1.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_1('6');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_1);
    Instrument_1.insert(InstrmtAssignmentMethod_1.getString());
    FIX::InterestAccrualDate InterestAccrualDate_1("LOCALMKTDATE_312439252");
    noRelatedSym_0_1.set(InterestAccrualDate_1);
    Instrument_1.insert(InterestAccrualDate_1.getString());
    FIX::IssueDate IssueDate_1("LOCALMKTDATE_1531973203");
    noRelatedSym_0_1.set(IssueDate_1);
    Instrument_1.insert(IssueDate_1.getString());
    FIX::Issuer Issuer_1("STRING_127924793");
    noRelatedSym_0_1.set(Issuer_1);
    Instrument_1.insert(Issuer_1.getString());
    FIX::ListMethod ListMethod_1(1);
    noRelatedSym_0_1.set(ListMethod_1);
    Instrument_1.insert(ListMethod_1.getString());
    FIX::LocaleOfIssue LocaleOfIssue_1("STRING_1372848986");
    noRelatedSym_0_1.set(LocaleOfIssue_1);
    Instrument_1.insert(LocaleOfIssue_1.getString());
    FIX::MaturityDate MaturityDate_1("LOCALMKTDATE_1775723228");
    noRelatedSym_0_1.set(MaturityDate_1);
    Instrument_1.insert(MaturityDate_1.getString());
    FIX::MaturityMonthYear MaturityMonthYear_1("MONTHYEAR_2135566830");
    noRelatedSym_0_1.set(MaturityMonthYear_1);
    Instrument_1.insert(MaturityMonthYear_1.getString());
    FIX::MaturityTime MaturityTime_1("TZTIMEONLY_1310994575");
    noRelatedSym_0_1.set(MaturityTime_1);
    Instrument_1.insert(MaturityTime_1.getString());
    FIX::MinPriceIncrement MinPriceIncrement_1;
    MinPriceIncrement_1.setString("9395949");
    noRelatedSym_0_1.set(MinPriceIncrement_1);
    Instrument_1.insert(MinPriceIncrement_1.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_1;
    MinPriceIncrementAmount_1.setString("15621841");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_1);
    Instrument_1.insert(MinPriceIncrementAmount_1.getString());
    FIX::NTPositionLimit NTPositionLimit_1(108638333);
    noRelatedSym_0_1.set(NTPositionLimit_1);
    Instrument_1.insert(NTPositionLimit_1.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_1;
    NotionalPercentageOutstanding_1.setString("43.380000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_1);
    Instrument_1.insert(NotionalPercentageOutstanding_1.getString());
    FIX::OptAttribute OptAttribute_1('1');
    noRelatedSym_0_1.set(OptAttribute_1);
    Instrument_1.insert(OptAttribute_1.getString());
    FIX::OptPayoutAmount OptPayoutAmount_1;
    OptPayoutAmount_1.setString("13492200");
    noRelatedSym_0_1.set(OptPayoutAmount_1);
    Instrument_1.insert(OptPayoutAmount_1.getString());
    FIX::OptPayoutType OptPayoutType_1(2);
    noRelatedSym_0_1.set(OptPayoutType_1);
    Instrument_1.insert(OptPayoutType_1.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_1;
    OriginalNotionalPercentageOutstanding_1.setString("83.510000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_1);
    Instrument_1.insert(OriginalNotionalPercentageOutstanding_1.getString());
    FIX::Pool Pool_1("STRING_2043800736");
    noRelatedSym_0_1.set(Pool_1);
    Instrument_1.insert(Pool_1.getString());
    FIX::PositionLimit PositionLimit_1(1370588900);
    noRelatedSym_0_1.set(PositionLimit_1);
    Instrument_1.insert(PositionLimit_1.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_1("STRING_INX");
    noRelatedSym_0_1.set(PriceQuoteMethod_1);
    Instrument_1.insert(PriceQuoteMethod_1.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_1("STRING_1576854335");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_1);
    Instrument_1.insert(PriceUnitOfMeasure_1.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_1;
    PriceUnitOfMeasureQty_1.setString("16769763");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_1);
    Instrument_1.insert(PriceUnitOfMeasureQty_1.getString());
    FIX::Product Product_1(2);
    noRelatedSym_0_1.set(Product_1);
    Instrument_1.insert(Product_1.getString());
    FIX::ProductComplex ProductComplex_1("STRING_1078181363");
    noRelatedSym_0_1.set(ProductComplex_1);
    Instrument_1.insert(ProductComplex_1.getString());
    FIX::PutOrCall PutOrCall_1(0);
    noRelatedSym_0_1.set(PutOrCall_1);
    Instrument_1.insert(PutOrCall_1.getString());
    FIX::RedemptionDate RedemptionDate_1("LOCALMKTDATE_580220758");
    noRelatedSym_0_1.set(RedemptionDate_1);
    Instrument_1.insert(RedemptionDate_1.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_1("STRING_1512474979");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_1);
    Instrument_1.insert(RepoCollateralSecurityType_1.getString());
    FIX::RepurchaseRate RepurchaseRate_1;
    RepurchaseRate_1.setString("63.510000");
    noRelatedSym_0_1.set(RepurchaseRate_1);
    Instrument_1.insert(RepurchaseRate_1.getString());
    FIX::RepurchaseTerm RepurchaseTerm_1(1030022581);
    noRelatedSym_0_1.set(RepurchaseTerm_1);
    Instrument_1.insert(RepurchaseTerm_1.getString());
    FIX::RestructuringType RestructuringType_1("STRING_MM");
    noRelatedSym_0_1.set(RestructuringType_1);
    Instrument_1.insert(RestructuringType_1.getString());
    FIX::SecurityDesc SecurityDesc_1("STRING_2025524510");
    noRelatedSym_0_1.set(SecurityDesc_1);
    Instrument_1.insert(SecurityDesc_1.getString());
    FIX::SecurityExchange SecurityExchange_1("EXCHANGE_1694871034");
    noRelatedSym_0_1.set(SecurityExchange_1);
    Instrument_1.insert(SecurityExchange_1.getString());
    FIX::SecurityGroup SecurityGroup_1("STRING_519648263");
    noRelatedSym_0_1.set(SecurityGroup_1);
    Instrument_1.insert(SecurityGroup_1.getString());
    FIX::SecurityID SecurityID_1("STRING_1410014065");
    noRelatedSym_0_1.set(SecurityID_1);
    Instrument_1.insert(SecurityID_1.getString());
    FIX::SecurityIDSource SecurityIDSource_1("STRING_I");
    noRelatedSym_0_1.set(SecurityIDSource_1);
    Instrument_1.insert(SecurityIDSource_1.getString());
    FIX::SecurityStatus SecurityStatus_1("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_1);
    Instrument_1.insert(SecurityStatus_1.getString());
    FIX::SecuritySubType SecuritySubType_1("STRING_635379404");
    noRelatedSym_0_1.set(SecuritySubType_1);
    Instrument_1.insert(SecuritySubType_1.getString());
    FIX::SecurityType SecurityType_1("STRING_FORWARD");
    noRelatedSym_0_1.set(SecurityType_1);
    Instrument_1.insert(SecurityType_1.getString());
    FIX::Seniority Seniority_1("STRING_SB");
    noRelatedSym_0_1.set(Seniority_1);
    Instrument_1.insert(Seniority_1.getString());
    FIX::SettlMethod SettlMethod_1('P');
    noRelatedSym_0_1.set(SettlMethod_1);
    Instrument_1.insert(SettlMethod_1.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_1("STRING_243146678");
    noRelatedSym_0_1.set(SettleOnOpenFlag_1);
    Instrument_1.insert(SettleOnOpenFlag_1.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_1("STRING_1682340763");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_1);
    Instrument_1.insert(StateOrProvinceOfIssue_1.getString());
    FIX::StrikeCurrency StrikeCurrency_1("JPY");
    noRelatedSym_0_1.set(StrikeCurrency_1);
    Instrument_1.insert(StrikeCurrency_1.getString());
    FIX::StrikeMultiplier StrikeMultiplier_1;
    StrikeMultiplier_1.setString("17905314");
    noRelatedSym_0_1.set(StrikeMultiplier_1);
    Instrument_1.insert(StrikeMultiplier_1.getString());
    FIX::StrikePrice StrikePrice_1;
    StrikePrice_1.setString("12567486");
    noRelatedSym_0_1.set(StrikePrice_1);
    Instrument_1.insert(StrikePrice_1.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_1(3);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_1);
    Instrument_1.insert(StrikePriceBoundaryMethod_1.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_1;
    StrikePriceBoundaryPrecision_1.setString("61.040000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_1);
    Instrument_1.insert(StrikePriceBoundaryPrecision_1.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_1(4);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_1);
    Instrument_1.insert(StrikePriceDeterminationMethod_1.getString());
    FIX::StrikeValue StrikeValue_1;
    StrikeValue_1.setString("561409");
    noRelatedSym_0_1.set(StrikeValue_1);
    Instrument_1.insert(StrikeValue_1.getString());
    FIX::Symbol Symbol_1("STRING_1196266277");
    noRelatedSym_0_1.set(Symbol_1);
    Instrument_1.insert(Symbol_1.getString());
    FIX::SymbolSfx SymbolSfx_1("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_1);
    Instrument_1.insert(SymbolSfx_1.getString());
    FIX::TimeUnit TimeUnit_1("STRING_Yr");
    noRelatedSym_0_1.set(TimeUnit_1);
    Instrument_1.insert(TimeUnit_1.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_1(2);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_1);
    Instrument_1.insert(UnderlyingPriceDeterminationMethod_1.getString());
    FIX::UnitOfMeasure UnitOfMeasure_1("STRING_lbs");
    noRelatedSym_0_1.set(UnitOfMeasure_1);
    Instrument_1.insert(UnitOfMeasure_1.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_1;
    UnitOfMeasureQty_1.setString("5415685");
    noRelatedSym_0_1.set(UnitOfMeasureQty_1);
    Instrument_1.insert(UnitOfMeasureQty_1.getString());
    FIX::ValuationMethod ValuationMethod_1("STRING_CDS");
    noRelatedSym_0_1.set(ValuationMethod_1);
    Instrument_1.insert(ValuationMethod_1.getString());
    all_values.push_back(Instrument_1);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_3;
      FIX::ComplexEventCondition ComplexEventCondition_3(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventCondition_3.getString());
      FIX::ComplexEventPrice ComplexEventPrice_3;
      ComplexEventPrice_3.setString("20729998");
      noComplexEvents_1_1_0.set(ComplexEventPrice_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPrice_3.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_3(5);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceBoundaryMethod_3.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_3;
      ComplexEventPriceBoundaryPrecision_3.setString("58.120000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceBoundaryPrecision_3.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_3(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceTimeType_3.getString());
      FIX::ComplexEventType ComplexEventType_3(9);
      noComplexEvents_1_1_0.set(ComplexEventType_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventType_3.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_3;
      ComplexOptPayoutAmount_3.setString("936862");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexOptPayoutAmount_3.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_3);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_3;
        FIX::ComplexEventEndDate ComplexEventEndDate_3(FIX::UTCTIMESTAMP(17, 55, 18, 5, 10, 2017));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_3);
        ComplexEventDates_NoComplexEventDates_3.insert(ComplexEventEndDate_3.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_3(FIX::UTCTIMESTAMP(18, 46, 32, 20, 8, 2004));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_3);
        ComplexEventDates_NoComplexEventDates_3.insert(ComplexEventStartDate_3.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_3);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_5;
          FIX::ComplexEventEndTime ComplexEventEndTime_5(FIX::UTCTIMEONLY(23, 36, 50));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_5);
          ComplexEventTimes_NoComplexEventTimes_5.insert(ComplexEventEndTime_5.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_5(FIX::UTCTIMEONLY(7, 30, 2));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_5);
          ComplexEventTimes_NoComplexEventTimes_5.insert(ComplexEventStartTime_5.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_5);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_6;
          FIX::ComplexEventEndTime ComplexEventEndTime_6(FIX::UTCTIMEONLY(23, 18, 49));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_6);
          ComplexEventTimes_NoComplexEventTimes_6.insert(ComplexEventEndTime_6.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_6(FIX::UTCTIMEONLY(21, 58, 55));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_6);
          ComplexEventTimes_NoComplexEventTimes_6.insert(ComplexEventStartTime_6.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_6);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_4;
        FIX::ComplexEventEndDate ComplexEventEndDate_4(FIX::UTCTIMESTAMP(16, 50, 21, 25, 5, 2014));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_4);
        ComplexEventDates_NoComplexEventDates_4.insert(ComplexEventEndDate_4.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_4(FIX::UTCTIMESTAMP(10, 52, 23, 18, 12, 2009));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_4);
        ComplexEventDates_NoComplexEventDates_4.insert(ComplexEventStartDate_4.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_4);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_7;
          FIX::ComplexEventEndTime ComplexEventEndTime_7(FIX::UTCTIMEONLY(6, 9, 18));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_7);
          ComplexEventTimes_NoComplexEventTimes_7.insert(ComplexEventEndTime_7.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_7(FIX::UTCTIMEONLY(20, 40, 9));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_7);
          ComplexEventTimes_NoComplexEventTimes_7.insert(ComplexEventStartTime_7.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_7);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_5;
        FIX::ComplexEventEndDate ComplexEventEndDate_5(FIX::UTCTIMESTAMP(15, 28, 34, 19, 2, 2009));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_5);
        ComplexEventDates_NoComplexEventDates_5.insert(ComplexEventEndDate_5.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_5(FIX::UTCTIMESTAMP(0, 17, 40, 1, 7, 2002));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_5);
        ComplexEventDates_NoComplexEventDates_5.insert(ComplexEventStartDate_5.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_5);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_8;
          FIX::ComplexEventEndTime ComplexEventEndTime_8(FIX::UTCTIMEONLY(18, 48, 27));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_8);
          ComplexEventTimes_NoComplexEventTimes_8.insert(ComplexEventEndTime_8.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_8(FIX::UTCTIMEONLY(23, 58, 34));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_8);
          ComplexEventTimes_NoComplexEventTimes_8.insert(ComplexEventStartTime_8.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_8);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_4;
      FIX::ComplexEventCondition ComplexEventCondition_4(2);
      noComplexEvents_1_1_1.set(ComplexEventCondition_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventCondition_4.getString());
      FIX::ComplexEventPrice ComplexEventPrice_4;
      ComplexEventPrice_4.setString("8601340");
      noComplexEvents_1_1_1.set(ComplexEventPrice_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventPrice_4.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_4(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceBoundaryMethod_4.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_4;
      ComplexEventPriceBoundaryPrecision_4.setString("90.010000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceBoundaryPrecision_4.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_4(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceTimeType_4.getString());
      FIX::ComplexEventType ComplexEventType_4(4);
      noComplexEvents_1_1_1.set(ComplexEventType_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventType_4.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_4;
      ComplexOptPayoutAmount_4.setString("13778950");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexOptPayoutAmount_4.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_4);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_6;
        FIX::ComplexEventEndDate ComplexEventEndDate_6(FIX::UTCTIMESTAMP(1, 49, 44, 4, 7, 2017));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_6);
        ComplexEventDates_NoComplexEventDates_6.insert(ComplexEventEndDate_6.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_6(FIX::UTCTIMESTAMP(11, 26, 6, 24, 9, 2009));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_6);
        ComplexEventDates_NoComplexEventDates_6.insert(ComplexEventStartDate_6.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_6);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_9;
          FIX::ComplexEventEndTime ComplexEventEndTime_9(FIX::UTCTIMEONLY(13, 8, 48));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_9);
          ComplexEventTimes_NoComplexEventTimes_9.insert(ComplexEventEndTime_9.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_9(FIX::UTCTIMEONLY(7, 39, 17));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_9);
          ComplexEventTimes_NoComplexEventTimes_9.insert(ComplexEventStartTime_9.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_9);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_10;
          FIX::ComplexEventEndTime ComplexEventEndTime_10(FIX::UTCTIMEONLY(7, 53, 16));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_10);
          ComplexEventTimes_NoComplexEventTimes_10.insert(ComplexEventEndTime_10.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_10(FIX::UTCTIMEONLY(9, 50, 16));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_10);
          ComplexEventTimes_NoComplexEventTimes_10.insert(ComplexEventStartTime_10.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_10);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_11;
          FIX::ComplexEventEndTime ComplexEventEndTime_11(FIX::UTCTIMEONLY(15, 57, 4));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventEndTime_11);
          ComplexEventTimes_NoComplexEventTimes_11.insert(ComplexEventEndTime_11.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_11(FIX::UTCTIMEONLY(3, 13, 9));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventStartTime_11);
          ComplexEventTimes_NoComplexEventTimes_11.insert(ComplexEventStartTime_11.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_11);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_7;
        FIX::ComplexEventEndDate ComplexEventEndDate_7(FIX::UTCTIMESTAMP(4, 15, 55, 0, 11, 2009));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_7);
        ComplexEventDates_NoComplexEventDates_7.insert(ComplexEventEndDate_7.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_7(FIX::UTCTIMESTAMP(12, 15, 14, 10, 3, 2009));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_7);
        ComplexEventDates_NoComplexEventDates_7.insert(ComplexEventStartDate_7.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_7);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_12;
          FIX::ComplexEventEndTime ComplexEventEndTime_12(FIX::UTCTIMEONLY(16, 44, 2));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_12);
          ComplexEventTimes_NoComplexEventTimes_12.insert(ComplexEventEndTime_12.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_12(FIX::UTCTIMEONLY(18, 44, 31));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_12);
          ComplexEventTimes_NoComplexEventTimes_12.insert(ComplexEventStartTime_12.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_12);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_13;
          FIX::ComplexEventEndTime ComplexEventEndTime_13(FIX::UTCTIMEONLY(15, 28, 9));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_13);
          ComplexEventTimes_NoComplexEventTimes_13.insert(ComplexEventEndTime_13.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_13(FIX::UTCTIMEONLY(0, 23, 35));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_13);
          ComplexEventTimes_NoComplexEventTimes_13.insert(ComplexEventStartTime_13.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_13);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_14;
          FIX::ComplexEventEndTime ComplexEventEndTime_14(FIX::UTCTIMEONLY(15, 50, 49));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventEndTime_14);
          ComplexEventTimes_NoComplexEventTimes_14.insert(ComplexEventEndTime_14.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_14(FIX::UTCTIMEONLY(17, 56, 25));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventStartTime_14);
          ComplexEventTimes_NoComplexEventTimes_14.insert(ComplexEventStartTime_14.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_14);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_8;
        FIX::ComplexEventEndDate ComplexEventEndDate_8(FIX::UTCTIMESTAMP(3, 31, 27, 26, 5, 2007));
        noComplexEventDates_1_1_2_2.set(ComplexEventEndDate_8);
        ComplexEventDates_NoComplexEventDates_8.insert(ComplexEventEndDate_8.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_8(FIX::UTCTIMESTAMP(20, 55, 21, 20, 6, 2017));
        noComplexEventDates_1_1_2_2.set(ComplexEventStartDate_8);
        ComplexEventDates_NoComplexEventDates_8.insert(ComplexEventStartDate_8.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_8);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_15;
          FIX::ComplexEventEndTime ComplexEventEndTime_15(FIX::UTCTIMEONLY(12, 44, 56));
          noComplexEventTimes_1_1_2_3_0.set(ComplexEventEndTime_15);
          ComplexEventTimes_NoComplexEventTimes_15.insert(ComplexEventEndTime_15.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_15(FIX::UTCTIMEONLY(8, 11, 49));
          noComplexEventTimes_1_1_2_3_0.set(ComplexEventStartTime_15);
          ComplexEventTimes_NoComplexEventTimes_15.insert(ComplexEventStartTime_15.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_15);

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_16;
          FIX::ComplexEventEndTime ComplexEventEndTime_16(FIX::UTCTIMEONLY(6, 32, 52));
          noComplexEventTimes_1_1_2_3_1.set(ComplexEventEndTime_16);
          ComplexEventTimes_NoComplexEventTimes_16.insert(ComplexEventEndTime_16.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_16(FIX::UTCTIMEONLY(13, 40, 31));
          noComplexEventTimes_1_1_2_3_1.set(ComplexEventStartTime_16);
          ComplexEventTimes_NoComplexEventTimes_16.insert(ComplexEventStartTime_16.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_16);

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_17;
          FIX::ComplexEventEndTime ComplexEventEndTime_17(FIX::UTCTIMEONLY(8, 2, 29));
          noComplexEventTimes_1_1_2_3_2.set(ComplexEventEndTime_17);
          ComplexEventTimes_NoComplexEventTimes_17.insert(ComplexEventEndTime_17.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_17(FIX::UTCTIMEONLY(18, 48, 45));
          noComplexEventTimes_1_1_2_3_2.set(ComplexEventStartTime_17);
          ComplexEventTimes_NoComplexEventTimes_17.insert(ComplexEventStartTime_17.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_17);

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_5;
      FIX::ComplexEventCondition ComplexEventCondition_5(1);
      noComplexEvents_1_1_2.set(ComplexEventCondition_5);
      ComplexEvents_NoComplexEvents_5.insert(ComplexEventCondition_5.getString());
      FIX::ComplexEventPrice ComplexEventPrice_5;
      ComplexEventPrice_5.setString("17820950");
      noComplexEvents_1_1_2.set(ComplexEventPrice_5);
      ComplexEvents_NoComplexEvents_5.insert(ComplexEventPrice_5.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_5(3);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_5);
      ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceBoundaryMethod_5.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_5;
      ComplexEventPriceBoundaryPrecision_5.setString("76.460000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_5);
      ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceBoundaryPrecision_5.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_5(3);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_5);
      ComplexEvents_NoComplexEvents_5.insert(ComplexEventPriceTimeType_5.getString());
      FIX::ComplexEventType ComplexEventType_5(2);
      noComplexEvents_1_1_2.set(ComplexEventType_5);
      ComplexEvents_NoComplexEvents_5.insert(ComplexEventType_5.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_5;
      ComplexOptPayoutAmount_5.setString("3805540");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_5);
      ComplexEvents_NoComplexEvents_5.insert(ComplexOptPayoutAmount_5.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_5);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_9;
        FIX::ComplexEventEndDate ComplexEventEndDate_9(FIX::UTCTIMESTAMP(10, 53, 59, 2, 5, 2013));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_9);
        ComplexEventDates_NoComplexEventDates_9.insert(ComplexEventEndDate_9.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_9(FIX::UTCTIMESTAMP(11, 21, 40, 25, 3, 2015));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_9);
        ComplexEventDates_NoComplexEventDates_9.insert(ComplexEventStartDate_9.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_9);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_18;
          FIX::ComplexEventEndTime ComplexEventEndTime_18(FIX::UTCTIMEONLY(17, 42, 9));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_18);
          ComplexEventTimes_NoComplexEventTimes_18.insert(ComplexEventEndTime_18.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_18(FIX::UTCTIMEONLY(0, 58, 0));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_18);
          ComplexEventTimes_NoComplexEventTimes_18.insert(ComplexEventStartTime_18.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_18);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_10;
        FIX::ComplexEventEndDate ComplexEventEndDate_10(FIX::UTCTIMESTAMP(22, 7, 33, 23, 5, 2009));
        noComplexEventDates_1_2_2_1.set(ComplexEventEndDate_10);
        ComplexEventDates_NoComplexEventDates_10.insert(ComplexEventEndDate_10.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_10(FIX::UTCTIMESTAMP(13, 13, 49, 8, 8, 2003));
        noComplexEventDates_1_2_2_1.set(ComplexEventStartDate_10);
        ComplexEventDates_NoComplexEventDates_10.insert(ComplexEventStartDate_10.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_10);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_19;
          FIX::ComplexEventEndTime ComplexEventEndTime_19(FIX::UTCTIMEONLY(8, 50, 36));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventEndTime_19);
          ComplexEventTimes_NoComplexEventTimes_19.insert(ComplexEventEndTime_19.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_19(FIX::UTCTIMEONLY(4, 57, 53));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventStartTime_19);
          ComplexEventTimes_NoComplexEventTimes_19.insert(ComplexEventStartTime_19.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_19);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_20;
          FIX::ComplexEventEndTime ComplexEventEndTime_20(FIX::UTCTIMEONLY(18, 35, 18));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventEndTime_20);
          ComplexEventTimes_NoComplexEventTimes_20.insert(ComplexEventEndTime_20.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_20(FIX::UTCTIMEONLY(3, 8, 9));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventStartTime_20);
          ComplexEventTimes_NoComplexEventTimes_20.insert(ComplexEventStartTime_20.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_20);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_3;
      FIX::EventDate EventDate_3("LOCALMKTDATE_1617174522");
      noEvents_1_1_0.set(EventDate_3);
      EvntGrp_NoEvents_3.insert(EventDate_3.getString());
      FIX::EventPx EventPx_3;
      EventPx_3.setString("21173973");
      noEvents_1_1_0.set(EventPx_3);
      EvntGrp_NoEvents_3.insert(EventPx_3.getString());
      FIX::EventText EventText_3("STRING_2078888559");
      noEvents_1_1_0.set(EventText_3);
      EvntGrp_NoEvents_3.insert(EventText_3.getString());
      FIX::EventTime EventTime_3(FIX::UTCTIMESTAMP(13, 58, 13, 6, 12, 2006));
      noEvents_1_1_0.set(EventTime_3);
      EvntGrp_NoEvents_3.insert(EventTime_3.getString());
      FIX::EventType EventType_3(11);
      noEvents_1_1_0.set(EventType_3);
      EvntGrp_NoEvents_3.insert(EventType_3.getString());
      all_values.push_back(EvntGrp_NoEvents_3);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_4;
      FIX::EventDate EventDate_4("LOCALMKTDATE_288158170");
      noEvents_1_1_1.set(EventDate_4);
      EvntGrp_NoEvents_4.insert(EventDate_4.getString());
      FIX::EventPx EventPx_4;
      EventPx_4.setString("7697616");
      noEvents_1_1_1.set(EventPx_4);
      EvntGrp_NoEvents_4.insert(EventPx_4.getString());
      FIX::EventText EventText_4("STRING_1576457240");
      noEvents_1_1_1.set(EventText_4);
      EvntGrp_NoEvents_4.insert(EventText_4.getString());
      FIX::EventTime EventTime_4(FIX::UTCTIMESTAMP(0, 2, 41, 10, 12, 2002));
      noEvents_1_1_1.set(EventTime_4);
      EvntGrp_NoEvents_4.insert(EventTime_4.getString());
      FIX::EventType EventType_4(8);
      noEvents_1_1_1.set(EventType_4);
      EvntGrp_NoEvents_4.insert(EventType_4.getString());
      all_values.push_back(EvntGrp_NoEvents_4);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_5;
      FIX::EventDate EventDate_5("LOCALMKTDATE_1945917031");
      noEvents_1_1_2.set(EventDate_5);
      EvntGrp_NoEvents_5.insert(EventDate_5.getString());
      FIX::EventPx EventPx_5;
      EventPx_5.setString("6683522");
      noEvents_1_1_2.set(EventPx_5);
      EvntGrp_NoEvents_5.insert(EventPx_5.getString());
      FIX::EventText EventText_5("STRING_1307503255");
      noEvents_1_1_2.set(EventText_5);
      EvntGrp_NoEvents_5.insert(EventText_5.getString());
      FIX::EventTime EventTime_5(FIX::UTCTIMESTAMP(9, 14, 49, 7, 9, 2005));
      noEvents_1_1_2.set(EventTime_5);
      EvntGrp_NoEvents_5.insert(EventTime_5.getString());
      FIX::EventType EventType_5(13);
      noEvents_1_1_2.set(EventType_5);
      EvntGrp_NoEvents_5.insert(EventType_5.getString());
      all_values.push_back(EvntGrp_NoEvents_5);

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_3;
      FIX::InstrumentPartyID InstrumentPartyID_3("STRING_2014979029");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_3);
      InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyID_3.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_3('2');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_3);
      InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyIDSource_3.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_3(686688169);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_3);
      InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyRole_3.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_3);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7;
        FIX::InstrumentPartySubID InstrumentPartySubID_7("STRING_1636810259");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_7);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7.insert(InstrumentPartySubID_7.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_7(1777647240);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_7);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7.insert(InstrumentPartySubIDType_7.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_2;
      FIX::SecurityAltID SecurityAltID_2("STRING_1546029581");
      noSecurityAltID_1_1_0.set(SecurityAltID_2);
      SecAltIDGrp_NoSecurityAltID_2.insert(SecurityAltID_2.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_2("STRING_2065805410");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_2);
      SecAltIDGrp_NoSecurityAltID_2.insert(SecurityAltIDSource_2.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_2);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_3;
      FIX::SecurityAltID SecurityAltID_3("STRING_953241209");
      noSecurityAltID_1_1_1.set(SecurityAltID_3);
      SecAltIDGrp_NoSecurityAltID_3.insert(SecurityAltID_3.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_3("STRING_975003173");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_3);
      SecAltIDGrp_NoSecurityAltID_3.insert(SecurityAltIDSource_3.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_3);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_2;
    FIX::SecurityXML SecurityXML_3("XMLDATA_183414008");
    noRelatedSym_0_1.set(SecurityXML_3);
    FIX::SecurityXMLLen SecurityXMLLen_1(886715337);
    noRelatedSym_0_1.set(SecurityXMLLen_1);
    FIX::SecurityXMLSchema SecurityXMLSchema_1("STRING_1633340876");
    noRelatedSym_0_1.set(SecurityXMLSchema_1);
    SecurityXML_2.insert(SecurityXMLSchema_1.getString());
    all_values.push_back(SecurityXML_2);

    msg.addGroup(noRelatedSym_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_0;
    FIX::PartyID PartyID_0("STRING_879618031");
    noPartyIDs_0_0.set(PartyID_0);
    Parties_NoPartyIDs_0.insert(PartyID_0.getString());
    FIX::PartyIDSource PartyIDSource_0('7');
    noPartyIDs_0_0.set(PartyIDSource_0);
    Parties_NoPartyIDs_0.insert(PartyIDSource_0.getString());
    FIX::PartyRole PartyRole_0(82);
    noPartyIDs_0_0.set(PartyRole_0);
    Parties_NoPartyIDs_0.insert(PartyRole_0.getString());
    all_values.push_back(Parties_NoPartyIDs_0);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_0;
      FIX::PartySubID PartySubID_0("STRING_1817382702");
      noPartySubIDs_0_1_0.set(PartySubID_0);
      PtysSubGrp_NoPartySubIDs_0.insert(PartySubID_0.getString());
      FIX::PartySubIDType PartySubIDType_0(18);
      noPartySubIDs_0_1_0.set(PartySubIDType_0);
      PtysSubGrp_NoPartySubIDs_0.insert(PartySubIDType_0.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_0);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_1;
    FIX::PartyID PartyID_1("STRING_1629533866");
    noPartyIDs_0_1.set(PartyID_1);
    Parties_NoPartyIDs_1.insert(PartyID_1.getString());
    FIX::PartyIDSource PartyIDSource_1('I');
    noPartyIDs_0_1.set(PartyIDSource_1);
    Parties_NoPartyIDs_1.insert(PartyIDSource_1.getString());
    FIX::PartyRole PartyRole_1(56);
    noPartyIDs_0_1.set(PartyRole_1);
    Parties_NoPartyIDs_1.insert(PartyRole_1.getString());
    all_values.push_back(Parties_NoPartyIDs_1);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_1;
      FIX::PartySubID PartySubID_1("STRING_948565437");
      noPartySubIDs_1_1_0.set(PartySubID_1);
      PtysSubGrp_NoPartySubIDs_1.insert(PartySubID_1.getString());
      FIX::PartySubIDType PartySubIDType_1(27);
      noPartySubIDs_1_1_0.set(PartySubIDType_1);
      PtysSubGrp_NoPartySubIDs_1.insert(PartySubIDType_1.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_1);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::AdjustedPositionReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_0;
    FIX::LongQty LongQty_0;
    LongQty_0.setString("3337918");
    noPositions_0_0.set(LongQty_0);
    PositionQty_NoPositions_0.insert(LongQty_0.getString());
    FIX::PosQtyStatus PosQtyStatus_0(1);
    noPositions_0_0.set(PosQtyStatus_0);
    PositionQty_NoPositions_0.insert(PosQtyStatus_0.getString());
    FIX::PosType PosType_0("STRING_PIT");
    noPositions_0_0.set(PosType_0);
    PositionQty_NoPositions_0.insert(PosType_0.getString());
    FIX::QuantityDate QuantityDate_0("LOCALMKTDATE_201287274");
    noPositions_0_0.set(QuantityDate_0);
    PositionQty_NoPositions_0.insert(QuantityDate_0.getString());
    FIX::ShortQty ShortQty_0;
    ShortQty_0.setString("14453033");
    noPositions_0_0.set(ShortQty_0);
    PositionQty_NoPositions_0.insert(ShortQty_0.getString());
    all_values.push_back(PositionQty_NoPositions_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_0;
      FIX::NestedPartyID NestedPartyID_0("STRING_246385248");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyID_0.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_0('9');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyIDSource_0.getString());
      FIX::NestedPartyRole NestedPartyRole_0(1170181966);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyRole_0.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_0);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_0;
        FIX::NestedPartySubID NestedPartySubID_0("STRING_333175918");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_0);
        NstdPtysSubGrp_NoNestedPartySubIDs_0.insert(NestedPartySubID_0.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_0(1088503729);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_0);
        NstdPtysSubGrp_NoNestedPartySubIDs_0.insert(NestedPartySubIDType_0.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_0);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_1;
        FIX::NestedPartySubID NestedPartySubID_1("STRING_1383106026");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_1);
        NstdPtysSubGrp_NoNestedPartySubIDs_1.insert(NestedPartySubID_1.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_1(1308179092);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_1);
        NstdPtysSubGrp_NoNestedPartySubIDs_1.insert(NestedPartySubIDType_1.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_1);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_1;
    FIX::LongQty LongQty_1;
    LongQty_1.setString("12719177");
    noPositions_0_1.set(LongQty_1);
    PositionQty_NoPositions_1.insert(LongQty_1.getString());
    FIX::PosQtyStatus PosQtyStatus_1(2);
    noPositions_0_1.set(PosQtyStatus_1);
    PositionQty_NoPositions_1.insert(PosQtyStatus_1.getString());
    FIX::PosType PosType_1("STRING_TRF");
    noPositions_0_1.set(PosType_1);
    PositionQty_NoPositions_1.insert(PosType_1.getString());
    FIX::QuantityDate QuantityDate_1("LOCALMKTDATE_1962507406");
    noPositions_0_1.set(QuantityDate_1);
    PositionQty_NoPositions_1.insert(QuantityDate_1.getString());
    FIX::ShortQty ShortQty_1;
    ShortQty_1.setString("10019557");
    noPositions_0_1.set(ShortQty_1);
    PositionQty_NoPositions_1.insert(ShortQty_1.getString());
    all_values.push_back(PositionQty_NoPositions_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_1;
      FIX::NestedPartyID NestedPartyID_1("STRING_148783138");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyID_1.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_1('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyIDSource_1.getString());
      FIX::NestedPartyRole NestedPartyRole_1(335401045);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyRole_1.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_1);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_2;
        FIX::NestedPartySubID NestedPartySubID_2("STRING_806036576");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_2);
        NstdPtysSubGrp_NoNestedPartySubIDs_2.insert(NestedPartySubID_2.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_2(1368430901);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_2);
        NstdPtysSubGrp_NoNestedPartySubIDs_2.insert(NestedPartySubIDType_2.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_2);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_3;
        FIX::NestedPartySubID NestedPartySubID_3("STRING_1139035253");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_3);
        NstdPtysSubGrp_NoNestedPartySubIDs_3.insert(NestedPartySubID_3.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_3(800006149);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_3);
        NstdPtysSubGrp_NoNestedPartySubIDs_3.insert(NestedPartySubIDType_3.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_3);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noPositions_0_1);
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
