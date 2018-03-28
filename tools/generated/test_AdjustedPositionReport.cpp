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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AdjustedPositionReport msg;

  list<multiset<string>> all_values;
  multiset<string> AdjustedPositionReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_0("LOCALMKTDATE_254955393");
  msg.set(ClearingBusinessDate_0);
  AdjustedPositionReport_0.insert(ClearingBusinessDate_0.getString());
  FIX::PosMaintRptID PosMaintRptID_0("STRING_645040433");
  msg.set(PosMaintRptID_0);
  AdjustedPositionReport_0.insert(PosMaintRptID_0.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_0("STRING_82397500");
  msg.set(PosMaintRptRefID_0);
  AdjustedPositionReport_0.insert(PosMaintRptRefID_0.getString());
  FIX::PosReqType PosReqType_0(4);
  msg.set(PosReqType_0);
  AdjustedPositionReport_0.insert(PosReqType_0.getString());
  FIX::PriorSettlPrice PriorSettlPrice_0;
  PriorSettlPrice_0.setString("14843623");
  msg.set(PriorSettlPrice_0);
  AdjustedPositionReport_0.insert(PriorSettlPrice_0.getString());
  FIX::SettlPrice SettlPrice_0;
  SettlPrice_0.setString("679446");
  msg.set(SettlPrice_0);
  AdjustedPositionReport_0.insert(SettlPrice_0.getString());
  FIX::SettlSessID SettlSessID_0("STRING_RTH");
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
    AttachmentPoint_0.setString("63.830000");
    noRelatedSym_0_0.set(AttachmentPoint_0);
    Instrument_0.insert(AttachmentPoint_0.getString());
    FIX::CFICode CFICode_0("STRING_2014595236");
    noRelatedSym_0_0.set(CFICode_0);
    Instrument_0.insert(CFICode_0.getString());
    FIX::CPProgram CPProgram_0(1);
    noRelatedSym_0_0.set(CPProgram_0);
    Instrument_0.insert(CPProgram_0.getString());
    FIX::CPRegType CPRegType_0("STRING_114689514");
    noRelatedSym_0_0.set(CPRegType_0);
    Instrument_0.insert(CPRegType_0.getString());
    FIX::CapPrice CapPrice_0;
    CapPrice_0.setString("17492725");
    noRelatedSym_0_0.set(CapPrice_0);
    Instrument_0.insert(CapPrice_0.getString());
    FIX::ContractMultiplier ContractMultiplier_0;
    ContractMultiplier_0.setString("18534615");
    noRelatedSym_0_0.set(ContractMultiplier_0);
    Instrument_0.insert(ContractMultiplier_0.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_0(1);
    noRelatedSym_0_0.set(ContractMultiplierUnit_0);
    Instrument_0.insert(ContractMultiplierUnit_0.getString());
    FIX::ContractSettlMonth ContractSettlMonth_0("MONTHYEAR_1998001100");
    noRelatedSym_0_0.set(ContractSettlMonth_0);
    Instrument_0.insert(ContractSettlMonth_0.getString());
    FIX::CountryOfIssue CountryOfIssue_0("COUNTRY_1237227508");
    noRelatedSym_0_0.set(CountryOfIssue_0);
    Instrument_0.insert(CountryOfIssue_0.getString());
    FIX::CouponPaymentDate CouponPaymentDate_0("LOCALMKTDATE_1384220046");
    noRelatedSym_0_0.set(CouponPaymentDate_0);
    Instrument_0.insert(CouponPaymentDate_0.getString());
    FIX::CouponRate CouponRate_0;
    CouponRate_0.setString("99.780000");
    noRelatedSym_0_0.set(CouponRate_0);
    Instrument_0.insert(CouponRate_0.getString());
    FIX::CreditRating CreditRating_0("STRING_547601688");
    noRelatedSym_0_0.set(CreditRating_0);
    Instrument_0.insert(CreditRating_0.getString());
    FIX::DatedDate DatedDate_0("LOCALMKTDATE_262700733");
    noRelatedSym_0_0.set(DatedDate_0);
    Instrument_0.insert(DatedDate_0.getString());
    FIX::DetachmentPoint DetachmentPoint_0;
    DetachmentPoint_0.setString("36.360000");
    noRelatedSym_0_0.set(DetachmentPoint_0);
    Instrument_0.insert(DetachmentPoint_0.getString());
    FIX::EncodedIssuer EncodedIssuer_0("DATA_1162624198");
    noRelatedSym_0_0.set(EncodedIssuer_0);
    Instrument_0.insert(EncodedIssuer_0.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_0(165410773);
    noRelatedSym_0_0.set(EncodedIssuerLen_0);
    Instrument_0.insert(EncodedIssuerLen_0.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_0("DATA_2252643");
    noRelatedSym_0_0.set(EncodedSecurityDesc_0);
    Instrument_0.insert(EncodedSecurityDesc_0.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_0(802733051);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_0);
    Instrument_0.insert(EncodedSecurityDescLen_0.getString());
    FIX::ExerciseStyle ExerciseStyle_0(0);
    noRelatedSym_0_0.set(ExerciseStyle_0);
    Instrument_0.insert(ExerciseStyle_0.getString());
    FIX::Factor Factor_0;
    Factor_0.setString("19954080");
    noRelatedSym_0_0.set(Factor_0);
    Instrument_0.insert(Factor_0.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_0(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_0);
    Instrument_0.insert(FlexProductEligibilityIndicator_0.getString());
    FIX::FlexibleIndicator FlexibleIndicator_0(false);
    noRelatedSym_0_0.set(FlexibleIndicator_0);
    Instrument_0.insert(FlexibleIndicator_0.getString());
    FIX::FloorPrice FloorPrice_0;
    FloorPrice_0.setString("19924929");
    noRelatedSym_0_0.set(FloorPrice_0);
    Instrument_0.insert(FloorPrice_0.getString());
    FIX::FlowScheduleType FlowScheduleType_0(4);
    noRelatedSym_0_0.set(FlowScheduleType_0);
    Instrument_0.insert(FlowScheduleType_0.getString());
    FIX::InstrRegistry InstrRegistry_0("STRING_1833614186");
    noRelatedSym_0_0.set(InstrRegistry_0);
    Instrument_0.insert(InstrRegistry_0.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_0('2');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_0);
    Instrument_0.insert(InstrmtAssignmentMethod_0.getString());
    FIX::InterestAccrualDate InterestAccrualDate_0("LOCALMKTDATE_151609555");
    noRelatedSym_0_0.set(InterestAccrualDate_0);
    Instrument_0.insert(InterestAccrualDate_0.getString());
    FIX::IssueDate IssueDate_0("LOCALMKTDATE_1170492936");
    noRelatedSym_0_0.set(IssueDate_0);
    Instrument_0.insert(IssueDate_0.getString());
    FIX::Issuer Issuer_0("STRING_2142835170");
    noRelatedSym_0_0.set(Issuer_0);
    Instrument_0.insert(Issuer_0.getString());
    FIX::ListMethod ListMethod_0(0);
    noRelatedSym_0_0.set(ListMethod_0);
    Instrument_0.insert(ListMethod_0.getString());
    FIX::LocaleOfIssue LocaleOfIssue_0("STRING_665227848");
    noRelatedSym_0_0.set(LocaleOfIssue_0);
    Instrument_0.insert(LocaleOfIssue_0.getString());
    FIX::MaturityDate MaturityDate_0("LOCALMKTDATE_318837905");
    noRelatedSym_0_0.set(MaturityDate_0);
    Instrument_0.insert(MaturityDate_0.getString());
    FIX::MaturityMonthYear MaturityMonthYear_0("MONTHYEAR_1116408452");
    noRelatedSym_0_0.set(MaturityMonthYear_0);
    Instrument_0.insert(MaturityMonthYear_0.getString());
    FIX::MaturityTime MaturityTime_0("TZTIMEONLY_793770129");
    noRelatedSym_0_0.set(MaturityTime_0);
    Instrument_0.insert(MaturityTime_0.getString());
    FIX::MinPriceIncrement MinPriceIncrement_0;
    MinPriceIncrement_0.setString("4335274");
    noRelatedSym_0_0.set(MinPriceIncrement_0);
    Instrument_0.insert(MinPriceIncrement_0.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_0;
    MinPriceIncrementAmount_0.setString("7181973");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_0);
    Instrument_0.insert(MinPriceIncrementAmount_0.getString());
    FIX::NTPositionLimit NTPositionLimit_0(499748032);
    noRelatedSym_0_0.set(NTPositionLimit_0);
    Instrument_0.insert(NTPositionLimit_0.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_0;
    NotionalPercentageOutstanding_0.setString("3.040000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_0);
    Instrument_0.insert(NotionalPercentageOutstanding_0.getString());
    FIX::OptAttribute OptAttribute_0('5');
    noRelatedSym_0_0.set(OptAttribute_0);
    Instrument_0.insert(OptAttribute_0.getString());
    FIX::OptPayoutAmount OptPayoutAmount_0;
    OptPayoutAmount_0.setString("17369755");
    noRelatedSym_0_0.set(OptPayoutAmount_0);
    Instrument_0.insert(OptPayoutAmount_0.getString());
    FIX::OptPayoutType OptPayoutType_0(3);
    noRelatedSym_0_0.set(OptPayoutType_0);
    Instrument_0.insert(OptPayoutType_0.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_0;
    OriginalNotionalPercentageOutstanding_0.setString("11.820000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_0);
    Instrument_0.insert(OriginalNotionalPercentageOutstanding_0.getString());
    FIX::Pool Pool_0("STRING_137093581");
    noRelatedSym_0_0.set(Pool_0);
    Instrument_0.insert(Pool_0.getString());
    FIX::PositionLimit PositionLimit_0(518617436);
    noRelatedSym_0_0.set(PositionLimit_0);
    Instrument_0.insert(PositionLimit_0.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_0("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_0);
    Instrument_0.insert(PriceQuoteMethod_0.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_0("STRING_1299717779");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_0);
    Instrument_0.insert(PriceUnitOfMeasure_0.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_0;
    PriceUnitOfMeasureQty_0.setString("6840282");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_0);
    Instrument_0.insert(PriceUnitOfMeasureQty_0.getString());
    FIX::Product Product_0(12);
    noRelatedSym_0_0.set(Product_0);
    Instrument_0.insert(Product_0.getString());
    FIX::ProductComplex ProductComplex_0("STRING_2102450830");
    noRelatedSym_0_0.set(ProductComplex_0);
    Instrument_0.insert(ProductComplex_0.getString());
    FIX::PutOrCall PutOrCall_0(1);
    noRelatedSym_0_0.set(PutOrCall_0);
    Instrument_0.insert(PutOrCall_0.getString());
    FIX::RedemptionDate RedemptionDate_0("LOCALMKTDATE_342751830");
    noRelatedSym_0_0.set(RedemptionDate_0);
    Instrument_0.insert(RedemptionDate_0.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_0("STRING_2119658086");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_0);
    Instrument_0.insert(RepoCollateralSecurityType_0.getString());
    FIX::RepurchaseRate RepurchaseRate_0;
    RepurchaseRate_0.setString("97.060000");
    noRelatedSym_0_0.set(RepurchaseRate_0);
    Instrument_0.insert(RepurchaseRate_0.getString());
    FIX::RepurchaseTerm RepurchaseTerm_0(187761156);
    noRelatedSym_0_0.set(RepurchaseTerm_0);
    Instrument_0.insert(RepurchaseTerm_0.getString());
    FIX::RestructuringType RestructuringType_0("STRING_FR");
    noRelatedSym_0_0.set(RestructuringType_0);
    Instrument_0.insert(RestructuringType_0.getString());
    FIX::SecurityDesc SecurityDesc_0("STRING_594610244");
    noRelatedSym_0_0.set(SecurityDesc_0);
    Instrument_0.insert(SecurityDesc_0.getString());
    FIX::SecurityExchange SecurityExchange_0("EXCHANGE_115167983");
    noRelatedSym_0_0.set(SecurityExchange_0);
    Instrument_0.insert(SecurityExchange_0.getString());
    FIX::SecurityGroup SecurityGroup_0("STRING_395946643");
    noRelatedSym_0_0.set(SecurityGroup_0);
    Instrument_0.insert(SecurityGroup_0.getString());
    FIX::SecurityID SecurityID_0("STRING_1765103180");
    noRelatedSym_0_0.set(SecurityID_0);
    Instrument_0.insert(SecurityID_0.getString());
    FIX::SecurityIDSource SecurityIDSource_0("STRING_K");
    noRelatedSym_0_0.set(SecurityIDSource_0);
    Instrument_0.insert(SecurityIDSource_0.getString());
    FIX::SecurityStatus SecurityStatus_0("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_0);
    Instrument_0.insert(SecurityStatus_0.getString());
    FIX::SecuritySubType SecuritySubType_0("STRING_282847380");
    noRelatedSym_0_0.set(SecuritySubType_0);
    Instrument_0.insert(SecuritySubType_0.getString());
    FIX::SecurityType SecurityType_0("STRING_XLINKD");
    noRelatedSym_0_0.set(SecurityType_0);
    Instrument_0.insert(SecurityType_0.getString());
    FIX::Seniority Seniority_0("STRING_SR");
    noRelatedSym_0_0.set(Seniority_0);
    Instrument_0.insert(Seniority_0.getString());
    FIX::SettlMethod SettlMethod_0('P');
    noRelatedSym_0_0.set(SettlMethod_0);
    Instrument_0.insert(SettlMethod_0.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_0("STRING_862884830");
    noRelatedSym_0_0.set(SettleOnOpenFlag_0);
    Instrument_0.insert(SettleOnOpenFlag_0.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_0("STRING_1332365710");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_0);
    Instrument_0.insert(StateOrProvinceOfIssue_0.getString());
    FIX::StrikeCurrency StrikeCurrency_0("GBP");
    noRelatedSym_0_0.set(StrikeCurrency_0);
    Instrument_0.insert(StrikeCurrency_0.getString());
    FIX::StrikeMultiplier StrikeMultiplier_0;
    StrikeMultiplier_0.setString("19010805");
    noRelatedSym_0_0.set(StrikeMultiplier_0);
    Instrument_0.insert(StrikeMultiplier_0.getString());
    FIX::StrikePrice StrikePrice_0;
    StrikePrice_0.setString("11658574");
    noRelatedSym_0_0.set(StrikePrice_0);
    Instrument_0.insert(StrikePrice_0.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_0(3);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_0);
    Instrument_0.insert(StrikePriceBoundaryMethod_0.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_0;
    StrikePriceBoundaryPrecision_0.setString("80.960000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_0);
    Instrument_0.insert(StrikePriceBoundaryPrecision_0.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_0(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_0);
    Instrument_0.insert(StrikePriceDeterminationMethod_0.getString());
    FIX::StrikeValue StrikeValue_0;
    StrikeValue_0.setString("5091156");
    noRelatedSym_0_0.set(StrikeValue_0);
    Instrument_0.insert(StrikeValue_0.getString());
    FIX::Symbol Symbol_0("STRING_674532914");
    noRelatedSym_0_0.set(Symbol_0);
    Instrument_0.insert(Symbol_0.getString());
    FIX::SymbolSfx SymbolSfx_0("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_0);
    Instrument_0.insert(SymbolSfx_0.getString());
    FIX::TimeUnit TimeUnit_0("STRING_S");
    noRelatedSym_0_0.set(TimeUnit_0);
    Instrument_0.insert(TimeUnit_0.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_0(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_0);
    Instrument_0.insert(UnderlyingPriceDeterminationMethod_0.getString());
    FIX::UnitOfMeasure UnitOfMeasure_0("STRING_MWh");
    noRelatedSym_0_0.set(UnitOfMeasure_0);
    Instrument_0.insert(UnitOfMeasure_0.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_0;
    UnitOfMeasureQty_0.setString("9130497");
    noRelatedSym_0_0.set(UnitOfMeasureQty_0);
    Instrument_0.insert(UnitOfMeasureQty_0.getString());
    FIX::ValuationMethod ValuationMethod_0("STRING_FUT");
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
      ComplexEventPrice_0.setString("16998733");
      noComplexEvents_0_1_0.set(ComplexEventPrice_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPrice_0.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_0(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceBoundaryMethod_0.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_0;
      ComplexEventPriceBoundaryPrecision_0.setString("60.910000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceBoundaryPrecision_0.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_0(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceTimeType_0.getString());
      FIX::ComplexEventType ComplexEventType_0(9);
      noComplexEvents_0_1_0.set(ComplexEventType_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventType_0.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_0;
      ComplexOptPayoutAmount_0.setString("20337592");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexOptPayoutAmount_0.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_0);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_0;
        FIX::ComplexEventEndDate ComplexEventEndDate_0(FIX::UTCTIMESTAMP(20, 33, 50, 17, 12, 2004));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_0);
        ComplexEventDates_NoComplexEventDates_0.insert(ComplexEventEndDate_0.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_0(FIX::UTCTIMESTAMP(18, 46, 2, 11, 7, 2011));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_0);
        ComplexEventDates_NoComplexEventDates_0.insert(ComplexEventStartDate_0.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_0);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_0;
          FIX::ComplexEventEndTime ComplexEventEndTime_0(FIX::UTCTIMEONLY(7, 53, 33));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_0);
          ComplexEventTimes_NoComplexEventTimes_0.insert(ComplexEventEndTime_0.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_0(FIX::UTCTIMEONLY(9, 31, 10));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_0);
          ComplexEventTimes_NoComplexEventTimes_0.insert(ComplexEventStartTime_0.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_0);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_1;
          FIX::ComplexEventEndTime ComplexEventEndTime_1(FIX::UTCTIMEONLY(18, 47, 39));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_1);
          ComplexEventTimes_NoComplexEventTimes_1.insert(ComplexEventEndTime_1.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_1(FIX::UTCTIMEONLY(7, 22, 47));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_1);
          ComplexEventTimes_NoComplexEventTimes_1.insert(ComplexEventStartTime_1.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_1);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
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
      ComplexEventPrice_1.setString("12613252");
      noComplexEvents_0_1_1.set(ComplexEventPrice_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPrice_1.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_1(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceBoundaryMethod_1.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_1;
      ComplexEventPriceBoundaryPrecision_1.setString("75.480000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceBoundaryPrecision_1.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_1(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceTimeType_1.getString());
      FIX::ComplexEventType ComplexEventType_1(3);
      noComplexEvents_0_1_1.set(ComplexEventType_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventType_1.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_1;
      ComplexOptPayoutAmount_1.setString("15722482");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexOptPayoutAmount_1.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_1);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_1;
        FIX::ComplexEventEndDate ComplexEventEndDate_1(FIX::UTCTIMESTAMP(23, 34, 6, 26, 10, 2011));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_1);
        ComplexEventDates_NoComplexEventDates_1.insert(ComplexEventEndDate_1.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_1(FIX::UTCTIMESTAMP(20, 16, 44, 13, 3, 2003));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_1);
        ComplexEventDates_NoComplexEventDates_1.insert(ComplexEventStartDate_1.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_1);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_2;
          FIX::ComplexEventEndTime ComplexEventEndTime_2(FIX::UTCTIMEONLY(2, 15, 17));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_2);
          ComplexEventTimes_NoComplexEventTimes_2.insert(ComplexEventEndTime_2.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_2(FIX::UTCTIMEONLY(3, 31, 6));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_2);
          ComplexEventTimes_NoComplexEventTimes_2.insert(ComplexEventStartTime_2.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_2);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_3;
          FIX::ComplexEventEndTime ComplexEventEndTime_3(FIX::UTCTIMEONLY(6, 19, 34));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_3);
          ComplexEventTimes_NoComplexEventTimes_3.insert(ComplexEventEndTime_3.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_3(FIX::UTCTIMEONLY(19, 35, 1));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_3);
          ComplexEventTimes_NoComplexEventTimes_3.insert(ComplexEventStartTime_3.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_3);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_0;
      FIX::EventDate EventDate_0("LOCALMKTDATE_1451099054");
      noEvents_0_1_0.set(EventDate_0);
      EvntGrp_NoEvents_0.insert(EventDate_0.getString());
      FIX::EventPx EventPx_0;
      EventPx_0.setString("21377847");
      noEvents_0_1_0.set(EventPx_0);
      EvntGrp_NoEvents_0.insert(EventPx_0.getString());
      FIX::EventText EventText_0("STRING_1812572528");
      noEvents_0_1_0.set(EventText_0);
      EvntGrp_NoEvents_0.insert(EventText_0.getString());
      FIX::EventTime EventTime_0(FIX::UTCTIMESTAMP(12, 23, 55, 8, 5, 2007));
      noEvents_0_1_0.set(EventTime_0);
      EvntGrp_NoEvents_0.insert(EventTime_0.getString());
      FIX::EventType EventType_0(19);
      noEvents_0_1_0.set(EventType_0);
      EvntGrp_NoEvents_0.insert(EventType_0.getString());
      all_values.push_back(EvntGrp_NoEvents_0);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_1;
      FIX::EventDate EventDate_1("LOCALMKTDATE_528551110");
      noEvents_0_1_1.set(EventDate_1);
      EvntGrp_NoEvents_1.insert(EventDate_1.getString());
      FIX::EventPx EventPx_1;
      EventPx_1.setString("3219581");
      noEvents_0_1_1.set(EventPx_1);
      EvntGrp_NoEvents_1.insert(EventPx_1.getString());
      FIX::EventText EventText_1("STRING_22601678");
      noEvents_0_1_1.set(EventText_1);
      EvntGrp_NoEvents_1.insert(EventText_1.getString());
      FIX::EventTime EventTime_1(FIX::UTCTIMESTAMP(5, 53, 57, 23, 1, 2004));
      noEvents_0_1_1.set(EventTime_1);
      EvntGrp_NoEvents_1.insert(EventTime_1.getString());
      FIX::EventType EventType_1(2);
      noEvents_0_1_1.set(EventType_1);
      EvntGrp_NoEvents_1.insert(EventType_1.getString());
      all_values.push_back(EvntGrp_NoEvents_1);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_2;
      FIX::EventDate EventDate_2("LOCALMKTDATE_1867795534");
      noEvents_0_1_2.set(EventDate_2);
      EvntGrp_NoEvents_2.insert(EventDate_2.getString());
      FIX::EventPx EventPx_2;
      EventPx_2.setString("20113676");
      noEvents_0_1_2.set(EventPx_2);
      EvntGrp_NoEvents_2.insert(EventPx_2.getString());
      FIX::EventText EventText_2("STRING_1384056740");
      noEvents_0_1_2.set(EventText_2);
      EvntGrp_NoEvents_2.insert(EventText_2.getString());
      FIX::EventTime EventTime_2(FIX::UTCTIMESTAMP(0, 16, 35, 18, 11, 2017));
      noEvents_0_1_2.set(EventTime_2);
      EvntGrp_NoEvents_2.insert(EventTime_2.getString());
      FIX::EventType EventType_2(2);
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
      FIX::InstrumentPartyID InstrumentPartyID_0("STRING_414685990");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyID_0.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_0('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyIDSource_0.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_0(1907624441);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyRole_0.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_0);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0;
        FIX::InstrumentPartySubID InstrumentPartySubID_0("STRING_1799876026");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_0);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0.insert(InstrumentPartySubID_0.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_0(473652133);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_0);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0.insert(InstrumentPartySubIDType_0.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_0;
      FIX::SecurityAltID SecurityAltID_0("STRING_985752176");
      noSecurityAltID_0_1_0.set(SecurityAltID_0);
      SecAltIDGrp_NoSecurityAltID_0.insert(SecurityAltID_0.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_0("STRING_1002203243");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_0);
      SecAltIDGrp_NoSecurityAltID_0.insert(SecurityAltIDSource_0.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_0);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_1;
      FIX::SecurityAltID SecurityAltID_1("STRING_847576448");
      noSecurityAltID_0_1_1.set(SecurityAltID_1);
      SecAltIDGrp_NoSecurityAltID_1.insert(SecurityAltID_1.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_1("STRING_1008353854");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_1);
      SecAltIDGrp_NoSecurityAltID_1.insert(SecurityAltIDSource_1.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_1);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_2;
      FIX::SecurityAltID SecurityAltID_2("STRING_135581043");
      noSecurityAltID_0_1_2.set(SecurityAltID_2);
      SecAltIDGrp_NoSecurityAltID_2.insert(SecurityAltID_2.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_2("STRING_2135087941");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_2);
      SecAltIDGrp_NoSecurityAltID_2.insert(SecurityAltIDSource_2.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_2);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_0;
    FIX::SecurityXML SecurityXML_1("XMLDATA_442989080");
    noRelatedSym_0_0.set(SecurityXML_1);
    FIX::SecurityXMLLen SecurityXMLLen_0(1227195840);
    noRelatedSym_0_0.set(SecurityXMLLen_0);
    FIX::SecurityXMLSchema SecurityXMLSchema_0("STRING_776630456");
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
    AttachmentPoint_1.setString("0.200000");
    noRelatedSym_0_1.set(AttachmentPoint_1);
    Instrument_1.insert(AttachmentPoint_1.getString());
    FIX::CFICode CFICode_1("STRING_1074282621");
    noRelatedSym_0_1.set(CFICode_1);
    Instrument_1.insert(CFICode_1.getString());
    FIX::CPProgram CPProgram_1(2);
    noRelatedSym_0_1.set(CPProgram_1);
    Instrument_1.insert(CPProgram_1.getString());
    FIX::CPRegType CPRegType_1("STRING_755371906");
    noRelatedSym_0_1.set(CPRegType_1);
    Instrument_1.insert(CPRegType_1.getString());
    FIX::CapPrice CapPrice_1;
    CapPrice_1.setString("9381666");
    noRelatedSym_0_1.set(CapPrice_1);
    Instrument_1.insert(CapPrice_1.getString());
    FIX::ContractMultiplier ContractMultiplier_1;
    ContractMultiplier_1.setString("7652665");
    noRelatedSym_0_1.set(ContractMultiplier_1);
    Instrument_1.insert(ContractMultiplier_1.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_1(1);
    noRelatedSym_0_1.set(ContractMultiplierUnit_1);
    Instrument_1.insert(ContractMultiplierUnit_1.getString());
    FIX::ContractSettlMonth ContractSettlMonth_1("MONTHYEAR_1178430144");
    noRelatedSym_0_1.set(ContractSettlMonth_1);
    Instrument_1.insert(ContractSettlMonth_1.getString());
    FIX::CountryOfIssue CountryOfIssue_1("COUNTRY_225625998");
    noRelatedSym_0_1.set(CountryOfIssue_1);
    Instrument_1.insert(CountryOfIssue_1.getString());
    FIX::CouponPaymentDate CouponPaymentDate_1("LOCALMKTDATE_763965793");
    noRelatedSym_0_1.set(CouponPaymentDate_1);
    Instrument_1.insert(CouponPaymentDate_1.getString());
    FIX::CouponRate CouponRate_1;
    CouponRate_1.setString("39.500000");
    noRelatedSym_0_1.set(CouponRate_1);
    Instrument_1.insert(CouponRate_1.getString());
    FIX::CreditRating CreditRating_1("STRING_306465268");
    noRelatedSym_0_1.set(CreditRating_1);
    Instrument_1.insert(CreditRating_1.getString());
    FIX::DatedDate DatedDate_1("LOCALMKTDATE_2122278355");
    noRelatedSym_0_1.set(DatedDate_1);
    Instrument_1.insert(DatedDate_1.getString());
    FIX::DetachmentPoint DetachmentPoint_1;
    DetachmentPoint_1.setString("88.430000");
    noRelatedSym_0_1.set(DetachmentPoint_1);
    Instrument_1.insert(DetachmentPoint_1.getString());
    FIX::EncodedIssuer EncodedIssuer_1("DATA_52393418");
    noRelatedSym_0_1.set(EncodedIssuer_1);
    Instrument_1.insert(EncodedIssuer_1.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_1(389480697);
    noRelatedSym_0_1.set(EncodedIssuerLen_1);
    Instrument_1.insert(EncodedIssuerLen_1.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_1("DATA_1382572789");
    noRelatedSym_0_1.set(EncodedSecurityDesc_1);
    Instrument_1.insert(EncodedSecurityDesc_1.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_1(1960017860);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_1);
    Instrument_1.insert(EncodedSecurityDescLen_1.getString());
    FIX::ExerciseStyle ExerciseStyle_1(0);
    noRelatedSym_0_1.set(ExerciseStyle_1);
    Instrument_1.insert(ExerciseStyle_1.getString());
    FIX::Factor Factor_1;
    Factor_1.setString("10349651");
    noRelatedSym_0_1.set(Factor_1);
    Instrument_1.insert(Factor_1.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_1(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_1);
    Instrument_1.insert(FlexProductEligibilityIndicator_1.getString());
    FIX::FlexibleIndicator FlexibleIndicator_1(false);
    noRelatedSym_0_1.set(FlexibleIndicator_1);
    Instrument_1.insert(FlexibleIndicator_1.getString());
    FIX::FloorPrice FloorPrice_1;
    FloorPrice_1.setString("20207173");
    noRelatedSym_0_1.set(FloorPrice_1);
    Instrument_1.insert(FloorPrice_1.getString());
    FIX::FlowScheduleType FlowScheduleType_1(4);
    noRelatedSym_0_1.set(FlowScheduleType_1);
    Instrument_1.insert(FlowScheduleType_1.getString());
    FIX::InstrRegistry InstrRegistry_1("STRING_1916001511");
    noRelatedSym_0_1.set(InstrRegistry_1);
    Instrument_1.insert(InstrRegistry_1.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_1('8');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_1);
    Instrument_1.insert(InstrmtAssignmentMethod_1.getString());
    FIX::InterestAccrualDate InterestAccrualDate_1("LOCALMKTDATE_1423970632");
    noRelatedSym_0_1.set(InterestAccrualDate_1);
    Instrument_1.insert(InterestAccrualDate_1.getString());
    FIX::IssueDate IssueDate_1("LOCALMKTDATE_1903605804");
    noRelatedSym_0_1.set(IssueDate_1);
    Instrument_1.insert(IssueDate_1.getString());
    FIX::Issuer Issuer_1("STRING_1324576631");
    noRelatedSym_0_1.set(Issuer_1);
    Instrument_1.insert(Issuer_1.getString());
    FIX::ListMethod ListMethod_1(1);
    noRelatedSym_0_1.set(ListMethod_1);
    Instrument_1.insert(ListMethod_1.getString());
    FIX::LocaleOfIssue LocaleOfIssue_1("STRING_532752613");
    noRelatedSym_0_1.set(LocaleOfIssue_1);
    Instrument_1.insert(LocaleOfIssue_1.getString());
    FIX::MaturityDate MaturityDate_1("LOCALMKTDATE_212153003");
    noRelatedSym_0_1.set(MaturityDate_1);
    Instrument_1.insert(MaturityDate_1.getString());
    FIX::MaturityMonthYear MaturityMonthYear_1("MONTHYEAR_1577965446");
    noRelatedSym_0_1.set(MaturityMonthYear_1);
    Instrument_1.insert(MaturityMonthYear_1.getString());
    FIX::MaturityTime MaturityTime_1("TZTIMEONLY_2061446111");
    noRelatedSym_0_1.set(MaturityTime_1);
    Instrument_1.insert(MaturityTime_1.getString());
    FIX::MinPriceIncrement MinPriceIncrement_1;
    MinPriceIncrement_1.setString("9675249");
    noRelatedSym_0_1.set(MinPriceIncrement_1);
    Instrument_1.insert(MinPriceIncrement_1.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_1;
    MinPriceIncrementAmount_1.setString("3686484");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_1);
    Instrument_1.insert(MinPriceIncrementAmount_1.getString());
    FIX::NTPositionLimit NTPositionLimit_1(679229053);
    noRelatedSym_0_1.set(NTPositionLimit_1);
    Instrument_1.insert(NTPositionLimit_1.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_1;
    NotionalPercentageOutstanding_1.setString("71.960000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_1);
    Instrument_1.insert(NotionalPercentageOutstanding_1.getString());
    FIX::OptAttribute OptAttribute_1('1');
    noRelatedSym_0_1.set(OptAttribute_1);
    Instrument_1.insert(OptAttribute_1.getString());
    FIX::OptPayoutAmount OptPayoutAmount_1;
    OptPayoutAmount_1.setString("9048550");
    noRelatedSym_0_1.set(OptPayoutAmount_1);
    Instrument_1.insert(OptPayoutAmount_1.getString());
    FIX::OptPayoutType OptPayoutType_1(3);
    noRelatedSym_0_1.set(OptPayoutType_1);
    Instrument_1.insert(OptPayoutType_1.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_1;
    OriginalNotionalPercentageOutstanding_1.setString("89.150000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_1);
    Instrument_1.insert(OriginalNotionalPercentageOutstanding_1.getString());
    FIX::Pool Pool_1("STRING_1211320320");
    noRelatedSym_0_1.set(Pool_1);
    Instrument_1.insert(Pool_1.getString());
    FIX::PositionLimit PositionLimit_1(415554049);
    noRelatedSym_0_1.set(PositionLimit_1);
    Instrument_1.insert(PositionLimit_1.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_1("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_1);
    Instrument_1.insert(PriceQuoteMethod_1.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_1("STRING_1263713739");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_1);
    Instrument_1.insert(PriceUnitOfMeasure_1.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_1;
    PriceUnitOfMeasureQty_1.setString("8050347");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_1);
    Instrument_1.insert(PriceUnitOfMeasureQty_1.getString());
    FIX::Product Product_1(13);
    noRelatedSym_0_1.set(Product_1);
    Instrument_1.insert(Product_1.getString());
    FIX::ProductComplex ProductComplex_1("STRING_1076247951");
    noRelatedSym_0_1.set(ProductComplex_1);
    Instrument_1.insert(ProductComplex_1.getString());
    FIX::PutOrCall PutOrCall_1(0);
    noRelatedSym_0_1.set(PutOrCall_1);
    Instrument_1.insert(PutOrCall_1.getString());
    FIX::RedemptionDate RedemptionDate_1("LOCALMKTDATE_526902068");
    noRelatedSym_0_1.set(RedemptionDate_1);
    Instrument_1.insert(RedemptionDate_1.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_1("STRING_1362434296");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_1);
    Instrument_1.insert(RepoCollateralSecurityType_1.getString());
    FIX::RepurchaseRate RepurchaseRate_1;
    RepurchaseRate_1.setString("29.560000");
    noRelatedSym_0_1.set(RepurchaseRate_1);
    Instrument_1.insert(RepurchaseRate_1.getString());
    FIX::RepurchaseTerm RepurchaseTerm_1(400135765);
    noRelatedSym_0_1.set(RepurchaseTerm_1);
    Instrument_1.insert(RepurchaseTerm_1.getString());
    FIX::RestructuringType RestructuringType_1("STRING_MR");
    noRelatedSym_0_1.set(RestructuringType_1);
    Instrument_1.insert(RestructuringType_1.getString());
    FIX::SecurityDesc SecurityDesc_1("STRING_37300819");
    noRelatedSym_0_1.set(SecurityDesc_1);
    Instrument_1.insert(SecurityDesc_1.getString());
    FIX::SecurityExchange SecurityExchange_1("EXCHANGE_1281723316");
    noRelatedSym_0_1.set(SecurityExchange_1);
    Instrument_1.insert(SecurityExchange_1.getString());
    FIX::SecurityGroup SecurityGroup_1("STRING_1927310870");
    noRelatedSym_0_1.set(SecurityGroup_1);
    Instrument_1.insert(SecurityGroup_1.getString());
    FIX::SecurityID SecurityID_1("STRING_1940906624");
    noRelatedSym_0_1.set(SecurityID_1);
    Instrument_1.insert(SecurityID_1.getString());
    FIX::SecurityIDSource SecurityIDSource_1("STRING_8");
    noRelatedSym_0_1.set(SecurityIDSource_1);
    Instrument_1.insert(SecurityIDSource_1.getString());
    FIX::SecurityStatus SecurityStatus_1("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_1);
    Instrument_1.insert(SecurityStatus_1.getString());
    FIX::SecuritySubType SecuritySubType_1("STRING_326175589");
    noRelatedSym_0_1.set(SecuritySubType_1);
    Instrument_1.insert(SecuritySubType_1.getString());
    FIX::SecurityType SecurityType_1("STRING_CAMM");
    noRelatedSym_0_1.set(SecurityType_1);
    Instrument_1.insert(SecurityType_1.getString());
    FIX::Seniority Seniority_1("STRING_SD");
    noRelatedSym_0_1.set(Seniority_1);
    Instrument_1.insert(Seniority_1.getString());
    FIX::SettlMethod SettlMethod_1('C');
    noRelatedSym_0_1.set(SettlMethod_1);
    Instrument_1.insert(SettlMethod_1.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_1("STRING_1638494212");
    noRelatedSym_0_1.set(SettleOnOpenFlag_1);
    Instrument_1.insert(SettleOnOpenFlag_1.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_1("STRING_82640314");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_1);
    Instrument_1.insert(StateOrProvinceOfIssue_1.getString());
    FIX::StrikeCurrency StrikeCurrency_1("CAN");
    noRelatedSym_0_1.set(StrikeCurrency_1);
    Instrument_1.insert(StrikeCurrency_1.getString());
    FIX::StrikeMultiplier StrikeMultiplier_1;
    StrikeMultiplier_1.setString("16297189");
    noRelatedSym_0_1.set(StrikeMultiplier_1);
    Instrument_1.insert(StrikeMultiplier_1.getString());
    FIX::StrikePrice StrikePrice_1;
    StrikePrice_1.setString("18242221");
    noRelatedSym_0_1.set(StrikePrice_1);
    Instrument_1.insert(StrikePrice_1.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_1(4);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_1);
    Instrument_1.insert(StrikePriceBoundaryMethod_1.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_1;
    StrikePriceBoundaryPrecision_1.setString("78.430000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_1);
    Instrument_1.insert(StrikePriceBoundaryPrecision_1.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_1(3);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_1);
    Instrument_1.insert(StrikePriceDeterminationMethod_1.getString());
    FIX::StrikeValue StrikeValue_1;
    StrikeValue_1.setString("241175");
    noRelatedSym_0_1.set(StrikeValue_1);
    Instrument_1.insert(StrikeValue_1.getString());
    FIX::Symbol Symbol_1("STRING_1967955602");
    noRelatedSym_0_1.set(Symbol_1);
    Instrument_1.insert(Symbol_1.getString());
    FIX::SymbolSfx SymbolSfx_1("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_1);
    Instrument_1.insert(SymbolSfx_1.getString());
    FIX::TimeUnit TimeUnit_1("STRING_D");
    noRelatedSym_0_1.set(TimeUnit_1);
    Instrument_1.insert(TimeUnit_1.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_1(4);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_1);
    Instrument_1.insert(UnderlyingPriceDeterminationMethod_1.getString());
    FIX::UnitOfMeasure UnitOfMeasure_1("STRING_Alw");
    noRelatedSym_0_1.set(UnitOfMeasure_1);
    Instrument_1.insert(UnitOfMeasure_1.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_1;
    UnitOfMeasureQty_1.setString("295101");
    noRelatedSym_0_1.set(UnitOfMeasureQty_1);
    Instrument_1.insert(UnitOfMeasureQty_1.getString());
    FIX::ValuationMethod ValuationMethod_1("STRING_FUT");
    noRelatedSym_0_1.set(ValuationMethod_1);
    Instrument_1.insert(ValuationMethod_1.getString());
    all_values.push_back(Instrument_1);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_2;
      FIX::ComplexEventCondition ComplexEventCondition_2(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventCondition_2.getString());
      FIX::ComplexEventPrice ComplexEventPrice_2;
      ComplexEventPrice_2.setString("2394466");
      noComplexEvents_1_1_0.set(ComplexEventPrice_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPrice_2.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_2(4);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceBoundaryMethod_2.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_2;
      ComplexEventPriceBoundaryPrecision_2.setString("39.180000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceBoundaryPrecision_2.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_2(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceTimeType_2.getString());
      FIX::ComplexEventType ComplexEventType_2(8);
      noComplexEvents_1_1_0.set(ComplexEventType_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventType_2.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_2;
      ComplexOptPayoutAmount_2.setString("1290168");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexOptPayoutAmount_2.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_2);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_2;
        FIX::ComplexEventEndDate ComplexEventEndDate_2(FIX::UTCTIMESTAMP(11, 18, 32, 11, 11, 2012));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_2);
        ComplexEventDates_NoComplexEventDates_2.insert(ComplexEventEndDate_2.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_2(FIX::UTCTIMESTAMP(19, 6, 50, 14, 11, 2006));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_2);
        ComplexEventDates_NoComplexEventDates_2.insert(ComplexEventStartDate_2.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_2);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_4;
          FIX::ComplexEventEndTime ComplexEventEndTime_4(FIX::UTCTIMEONLY(13, 52, 39));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_4);
          ComplexEventTimes_NoComplexEventTimes_4.insert(ComplexEventEndTime_4.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_4(FIX::UTCTIMEONLY(11, 23, 5));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_4);
          ComplexEventTimes_NoComplexEventTimes_4.insert(ComplexEventStartTime_4.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_4);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_3;
        FIX::ComplexEventEndDate ComplexEventEndDate_3(FIX::UTCTIMESTAMP(19, 55, 3, 4, 12, 2001));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_3);
        ComplexEventDates_NoComplexEventDates_3.insert(ComplexEventEndDate_3.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_3(FIX::UTCTIMESTAMP(18, 0, 41, 18, 4, 2014));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_3);
        ComplexEventDates_NoComplexEventDates_3.insert(ComplexEventStartDate_3.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_3);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_5;
          FIX::ComplexEventEndTime ComplexEventEndTime_5(FIX::UTCTIMEONLY(3, 19, 10));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_5);
          ComplexEventTimes_NoComplexEventTimes_5.insert(ComplexEventEndTime_5.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_5(FIX::UTCTIMEONLY(21, 22, 20));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_5);
          ComplexEventTimes_NoComplexEventTimes_5.insert(ComplexEventStartTime_5.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_5);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_6;
          FIX::ComplexEventEndTime ComplexEventEndTime_6(FIX::UTCTIMEONLY(11, 5, 57));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_6);
          ComplexEventTimes_NoComplexEventTimes_6.insert(ComplexEventEndTime_6.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_6(FIX::UTCTIMEONLY(8, 20, 37));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_6);
          ComplexEventTimes_NoComplexEventTimes_6.insert(ComplexEventStartTime_6.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_6);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_3;
      FIX::EventDate EventDate_3("LOCALMKTDATE_688425164");
      noEvents_1_1_0.set(EventDate_3);
      EvntGrp_NoEvents_3.insert(EventDate_3.getString());
      FIX::EventPx EventPx_3;
      EventPx_3.setString("6918818");
      noEvents_1_1_0.set(EventPx_3);
      EvntGrp_NoEvents_3.insert(EventPx_3.getString());
      FIX::EventText EventText_3("STRING_1308183761");
      noEvents_1_1_0.set(EventText_3);
      EvntGrp_NoEvents_3.insert(EventText_3.getString());
      FIX::EventTime EventTime_3(FIX::UTCTIMESTAMP(8, 18, 55, 7, 12, 2011));
      noEvents_1_1_0.set(EventTime_3);
      EvntGrp_NoEvents_3.insert(EventTime_3.getString());
      FIX::EventType EventType_3(10);
      noEvents_1_1_0.set(EventType_3);
      EvntGrp_NoEvents_3.insert(EventType_3.getString());
      all_values.push_back(EvntGrp_NoEvents_3);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_4;
      FIX::EventDate EventDate_4("LOCALMKTDATE_2016017306");
      noEvents_1_1_1.set(EventDate_4);
      EvntGrp_NoEvents_4.insert(EventDate_4.getString());
      FIX::EventPx EventPx_4;
      EventPx_4.setString("7897362");
      noEvents_1_1_1.set(EventPx_4);
      EvntGrp_NoEvents_4.insert(EventPx_4.getString());
      FIX::EventText EventText_4("STRING_1216331882");
      noEvents_1_1_1.set(EventText_4);
      EvntGrp_NoEvents_4.insert(EventText_4.getString());
      FIX::EventTime EventTime_4(FIX::UTCTIMESTAMP(20, 22, 56, 26, 12, 2012));
      noEvents_1_1_1.set(EventTime_4);
      EvntGrp_NoEvents_4.insert(EventTime_4.getString());
      FIX::EventType EventType_4(4);
      noEvents_1_1_1.set(EventType_4);
      EvntGrp_NoEvents_4.insert(EventType_4.getString());
      all_values.push_back(EvntGrp_NoEvents_4);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_1;
      FIX::InstrumentPartyID InstrumentPartyID_1("STRING_1537797713");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyID_1.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_1('4');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyIDSource_1.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_1(1150063131);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyRole_1.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_1);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1;
        FIX::InstrumentPartySubID InstrumentPartySubID_1("STRING_1548371632");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_1);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1.insert(InstrumentPartySubID_1.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_1(774709563);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_1);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1.insert(InstrumentPartySubIDType_1.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2;
        FIX::InstrumentPartySubID InstrumentPartySubID_2("STRING_1381899303");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_2);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2.insert(InstrumentPartySubID_2.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_2(421554741);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_2);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2.insert(InstrumentPartySubIDType_2.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_2;
      FIX::InstrumentPartyID InstrumentPartyID_2("STRING_1463134727");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_2);
      InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyID_2.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_2('2');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_2);
      InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyIDSource_2.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_2(1729738502);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_2);
      InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyRole_2.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_2);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3;
        FIX::InstrumentPartySubID InstrumentPartySubID_3("STRING_1260503136");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_3);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3.insert(InstrumentPartySubID_3.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_3(1306972513);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_3);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3.insert(InstrumentPartySubIDType_3.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4;
        FIX::InstrumentPartySubID InstrumentPartySubID_4("STRING_1837399327");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_4);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4.insert(InstrumentPartySubID_4.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_4(1951713859);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_4);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4.insert(InstrumentPartySubIDType_4.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5;
        FIX::InstrumentPartySubID InstrumentPartySubID_5("STRING_1755932904");
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubID_5);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5.insert(InstrumentPartySubID_5.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_5(1859213376);
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubIDType_5);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5.insert(InstrumentPartySubIDType_5.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_3;
      FIX::InstrumentPartyID InstrumentPartyID_3("STRING_428602921");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_3);
      InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyID_3.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_3('1');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_3);
      InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyIDSource_3.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_3(501466001);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_3);
      InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyRole_3.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_3);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6;
        FIX::InstrumentPartySubID InstrumentPartySubID_6("STRING_379787481");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_6);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6.insert(InstrumentPartySubID_6.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_6(1221411133);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_6);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6.insert(InstrumentPartySubIDType_6.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6);

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_3;
      FIX::SecurityAltID SecurityAltID_3("STRING_1460815457");
      noSecurityAltID_1_1_0.set(SecurityAltID_3);
      SecAltIDGrp_NoSecurityAltID_3.insert(SecurityAltID_3.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_3("STRING_642415216");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_3);
      SecAltIDGrp_NoSecurityAltID_3.insert(SecurityAltIDSource_3.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_3);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_4;
      FIX::SecurityAltID SecurityAltID_4("STRING_1686262853");
      noSecurityAltID_1_1_1.set(SecurityAltID_4);
      SecAltIDGrp_NoSecurityAltID_4.insert(SecurityAltID_4.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_4("STRING_604594528");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_4);
      SecAltIDGrp_NoSecurityAltID_4.insert(SecurityAltIDSource_4.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_4);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_5;
      FIX::SecurityAltID SecurityAltID_5("STRING_1854413139");
      noSecurityAltID_1_1_2.set(SecurityAltID_5);
      SecAltIDGrp_NoSecurityAltID_5.insert(SecurityAltID_5.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_5("STRING_1888527946");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_5);
      SecAltIDGrp_NoSecurityAltID_5.insert(SecurityAltIDSource_5.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_5);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_2;
    FIX::SecurityXML SecurityXML_3("XMLDATA_2142392241");
    noRelatedSym_0_1.set(SecurityXML_3);
    FIX::SecurityXMLLen SecurityXMLLen_1(186557451);
    noRelatedSym_0_1.set(SecurityXMLLen_1);
    FIX::SecurityXMLSchema SecurityXMLSchema_1("STRING_891107429");
    noRelatedSym_0_1.set(SecurityXMLSchema_1);
    SecurityXML_2.insert(SecurityXMLSchema_1.getString());
    all_values.push_back(SecurityXML_2);

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoRelatedSym noRelatedSym_0_2;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_2;
    FIX::AttachmentPoint AttachmentPoint_2;
    AttachmentPoint_2.setString("47.790000");
    noRelatedSym_0_2.set(AttachmentPoint_2);
    Instrument_2.insert(AttachmentPoint_2.getString());
    FIX::CFICode CFICode_2("STRING_1734929083");
    noRelatedSym_0_2.set(CFICode_2);
    Instrument_2.insert(CFICode_2.getString());
    FIX::CPProgram CPProgram_2(1);
    noRelatedSym_0_2.set(CPProgram_2);
    Instrument_2.insert(CPProgram_2.getString());
    FIX::CPRegType CPRegType_2("STRING_2130494082");
    noRelatedSym_0_2.set(CPRegType_2);
    Instrument_2.insert(CPRegType_2.getString());
    FIX::CapPrice CapPrice_2;
    CapPrice_2.setString("90001");
    noRelatedSym_0_2.set(CapPrice_2);
    Instrument_2.insert(CapPrice_2.getString());
    FIX::ContractMultiplier ContractMultiplier_2;
    ContractMultiplier_2.setString("9814680");
    noRelatedSym_0_2.set(ContractMultiplier_2);
    Instrument_2.insert(ContractMultiplier_2.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_2(1);
    noRelatedSym_0_2.set(ContractMultiplierUnit_2);
    Instrument_2.insert(ContractMultiplierUnit_2.getString());
    FIX::ContractSettlMonth ContractSettlMonth_2("MONTHYEAR_1738738679");
    noRelatedSym_0_2.set(ContractSettlMonth_2);
    Instrument_2.insert(ContractSettlMonth_2.getString());
    FIX::CountryOfIssue CountryOfIssue_2("COUNTRY_1423009404");
    noRelatedSym_0_2.set(CountryOfIssue_2);
    Instrument_2.insert(CountryOfIssue_2.getString());
    FIX::CouponPaymentDate CouponPaymentDate_2("LOCALMKTDATE_1169811098");
    noRelatedSym_0_2.set(CouponPaymentDate_2);
    Instrument_2.insert(CouponPaymentDate_2.getString());
    FIX::CouponRate CouponRate_2;
    CouponRate_2.setString("75.440000");
    noRelatedSym_0_2.set(CouponRate_2);
    Instrument_2.insert(CouponRate_2.getString());
    FIX::CreditRating CreditRating_2("STRING_1112925083");
    noRelatedSym_0_2.set(CreditRating_2);
    Instrument_2.insert(CreditRating_2.getString());
    FIX::DatedDate DatedDate_2("LOCALMKTDATE_974041310");
    noRelatedSym_0_2.set(DatedDate_2);
    Instrument_2.insert(DatedDate_2.getString());
    FIX::DetachmentPoint DetachmentPoint_2;
    DetachmentPoint_2.setString("68.000000");
    noRelatedSym_0_2.set(DetachmentPoint_2);
    Instrument_2.insert(DetachmentPoint_2.getString());
    FIX::EncodedIssuer EncodedIssuer_2("DATA_824654811");
    noRelatedSym_0_2.set(EncodedIssuer_2);
    Instrument_2.insert(EncodedIssuer_2.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_2(1402644231);
    noRelatedSym_0_2.set(EncodedIssuerLen_2);
    Instrument_2.insert(EncodedIssuerLen_2.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_2("DATA_2131143362");
    noRelatedSym_0_2.set(EncodedSecurityDesc_2);
    Instrument_2.insert(EncodedSecurityDesc_2.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_2(1326120812);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_2);
    Instrument_2.insert(EncodedSecurityDescLen_2.getString());
    FIX::ExerciseStyle ExerciseStyle_2(1);
    noRelatedSym_0_2.set(ExerciseStyle_2);
    Instrument_2.insert(ExerciseStyle_2.getString());
    FIX::Factor Factor_2;
    Factor_2.setString("3634471");
    noRelatedSym_0_2.set(Factor_2);
    Instrument_2.insert(Factor_2.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_2(false);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_2);
    Instrument_2.insert(FlexProductEligibilityIndicator_2.getString());
    FIX::FlexibleIndicator FlexibleIndicator_2(true);
    noRelatedSym_0_2.set(FlexibleIndicator_2);
    Instrument_2.insert(FlexibleIndicator_2.getString());
    FIX::FloorPrice FloorPrice_2;
    FloorPrice_2.setString("18242626");
    noRelatedSym_0_2.set(FloorPrice_2);
    Instrument_2.insert(FloorPrice_2.getString());
    FIX::FlowScheduleType FlowScheduleType_2(3);
    noRelatedSym_0_2.set(FlowScheduleType_2);
    Instrument_2.insert(FlowScheduleType_2.getString());
    FIX::InstrRegistry InstrRegistry_2("STRING_1885649269");
    noRelatedSym_0_2.set(InstrRegistry_2);
    Instrument_2.insert(InstrRegistry_2.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_2('2');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_2);
    Instrument_2.insert(InstrmtAssignmentMethod_2.getString());
    FIX::InterestAccrualDate InterestAccrualDate_2("LOCALMKTDATE_749393004");
    noRelatedSym_0_2.set(InterestAccrualDate_2);
    Instrument_2.insert(InterestAccrualDate_2.getString());
    FIX::IssueDate IssueDate_2("LOCALMKTDATE_1626693567");
    noRelatedSym_0_2.set(IssueDate_2);
    Instrument_2.insert(IssueDate_2.getString());
    FIX::Issuer Issuer_2("STRING_276282126");
    noRelatedSym_0_2.set(Issuer_2);
    Instrument_2.insert(Issuer_2.getString());
    FIX::ListMethod ListMethod_2(1);
    noRelatedSym_0_2.set(ListMethod_2);
    Instrument_2.insert(ListMethod_2.getString());
    FIX::LocaleOfIssue LocaleOfIssue_2("STRING_370317349");
    noRelatedSym_0_2.set(LocaleOfIssue_2);
    Instrument_2.insert(LocaleOfIssue_2.getString());
    FIX::MaturityDate MaturityDate_2("LOCALMKTDATE_1024876905");
    noRelatedSym_0_2.set(MaturityDate_2);
    Instrument_2.insert(MaturityDate_2.getString());
    FIX::MaturityMonthYear MaturityMonthYear_2("MONTHYEAR_523395890");
    noRelatedSym_0_2.set(MaturityMonthYear_2);
    Instrument_2.insert(MaturityMonthYear_2.getString());
    FIX::MaturityTime MaturityTime_2("TZTIMEONLY_2036134342");
    noRelatedSym_0_2.set(MaturityTime_2);
    Instrument_2.insert(MaturityTime_2.getString());
    FIX::MinPriceIncrement MinPriceIncrement_2;
    MinPriceIncrement_2.setString("10078873");
    noRelatedSym_0_2.set(MinPriceIncrement_2);
    Instrument_2.insert(MinPriceIncrement_2.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_2;
    MinPriceIncrementAmount_2.setString("5323960");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_2);
    Instrument_2.insert(MinPriceIncrementAmount_2.getString());
    FIX::NTPositionLimit NTPositionLimit_2(870118766);
    noRelatedSym_0_2.set(NTPositionLimit_2);
    Instrument_2.insert(NTPositionLimit_2.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_2;
    NotionalPercentageOutstanding_2.setString("53.010000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_2);
    Instrument_2.insert(NotionalPercentageOutstanding_2.getString());
    FIX::OptAttribute OptAttribute_2('1');
    noRelatedSym_0_2.set(OptAttribute_2);
    Instrument_2.insert(OptAttribute_2.getString());
    FIX::OptPayoutAmount OptPayoutAmount_2;
    OptPayoutAmount_2.setString("1456445");
    noRelatedSym_0_2.set(OptPayoutAmount_2);
    Instrument_2.insert(OptPayoutAmount_2.getString());
    FIX::OptPayoutType OptPayoutType_2(1);
    noRelatedSym_0_2.set(OptPayoutType_2);
    Instrument_2.insert(OptPayoutType_2.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_2;
    OriginalNotionalPercentageOutstanding_2.setString("86.420000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_2);
    Instrument_2.insert(OriginalNotionalPercentageOutstanding_2.getString());
    FIX::Pool Pool_2("STRING_1258569605");
    noRelatedSym_0_2.set(Pool_2);
    Instrument_2.insert(Pool_2.getString());
    FIX::PositionLimit PositionLimit_2(913564062);
    noRelatedSym_0_2.set(PositionLimit_2);
    Instrument_2.insert(PositionLimit_2.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_2("STRING_INT");
    noRelatedSym_0_2.set(PriceQuoteMethod_2);
    Instrument_2.insert(PriceQuoteMethod_2.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_2("STRING_2083224416");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_2);
    Instrument_2.insert(PriceUnitOfMeasure_2.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_2;
    PriceUnitOfMeasureQty_2.setString("1687246");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_2);
    Instrument_2.insert(PriceUnitOfMeasureQty_2.getString());
    FIX::Product Product_2(11);
    noRelatedSym_0_2.set(Product_2);
    Instrument_2.insert(Product_2.getString());
    FIX::ProductComplex ProductComplex_2("STRING_1261861580");
    noRelatedSym_0_2.set(ProductComplex_2);
    Instrument_2.insert(ProductComplex_2.getString());
    FIX::PutOrCall PutOrCall_2(1);
    noRelatedSym_0_2.set(PutOrCall_2);
    Instrument_2.insert(PutOrCall_2.getString());
    FIX::RedemptionDate RedemptionDate_2("LOCALMKTDATE_1875662352");
    noRelatedSym_0_2.set(RedemptionDate_2);
    Instrument_2.insert(RedemptionDate_2.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_2("STRING_1661909878");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_2);
    Instrument_2.insert(RepoCollateralSecurityType_2.getString());
    FIX::RepurchaseRate RepurchaseRate_2;
    RepurchaseRate_2.setString("64.470000");
    noRelatedSym_0_2.set(RepurchaseRate_2);
    Instrument_2.insert(RepurchaseRate_2.getString());
    FIX::RepurchaseTerm RepurchaseTerm_2(1552441357);
    noRelatedSym_0_2.set(RepurchaseTerm_2);
    Instrument_2.insert(RepurchaseTerm_2.getString());
    FIX::RestructuringType RestructuringType_2("STRING_XR");
    noRelatedSym_0_2.set(RestructuringType_2);
    Instrument_2.insert(RestructuringType_2.getString());
    FIX::SecurityDesc SecurityDesc_2("STRING_1006372068");
    noRelatedSym_0_2.set(SecurityDesc_2);
    Instrument_2.insert(SecurityDesc_2.getString());
    FIX::SecurityExchange SecurityExchange_2("EXCHANGE_1833814890");
    noRelatedSym_0_2.set(SecurityExchange_2);
    Instrument_2.insert(SecurityExchange_2.getString());
    FIX::SecurityGroup SecurityGroup_2("STRING_1306282748");
    noRelatedSym_0_2.set(SecurityGroup_2);
    Instrument_2.insert(SecurityGroup_2.getString());
    FIX::SecurityID SecurityID_2("STRING_485581988");
    noRelatedSym_0_2.set(SecurityID_2);
    Instrument_2.insert(SecurityID_2.getString());
    FIX::SecurityIDSource SecurityIDSource_2("STRING_H");
    noRelatedSym_0_2.set(SecurityIDSource_2);
    Instrument_2.insert(SecurityIDSource_2.getString());
    FIX::SecurityStatus SecurityStatus_2("STRING_2");
    noRelatedSym_0_2.set(SecurityStatus_2);
    Instrument_2.insert(SecurityStatus_2.getString());
    FIX::SecuritySubType SecuritySubType_2("STRING_855899337");
    noRelatedSym_0_2.set(SecuritySubType_2);
    Instrument_2.insert(SecuritySubType_2.getString());
    FIX::SecurityType SecurityType_2("STRING_TD");
    noRelatedSym_0_2.set(SecurityType_2);
    Instrument_2.insert(SecurityType_2.getString());
    FIX::Seniority Seniority_2("STRING_SD");
    noRelatedSym_0_2.set(Seniority_2);
    Instrument_2.insert(Seniority_2.getString());
    FIX::SettlMethod SettlMethod_2('P');
    noRelatedSym_0_2.set(SettlMethod_2);
    Instrument_2.insert(SettlMethod_2.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_2("STRING_1995377613");
    noRelatedSym_0_2.set(SettleOnOpenFlag_2);
    Instrument_2.insert(SettleOnOpenFlag_2.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_2("STRING_1150541513");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_2);
    Instrument_2.insert(StateOrProvinceOfIssue_2.getString());
    FIX::StrikeCurrency StrikeCurrency_2("CAN");
    noRelatedSym_0_2.set(StrikeCurrency_2);
    Instrument_2.insert(StrikeCurrency_2.getString());
    FIX::StrikeMultiplier StrikeMultiplier_2;
    StrikeMultiplier_2.setString("12741926");
    noRelatedSym_0_2.set(StrikeMultiplier_2);
    Instrument_2.insert(StrikeMultiplier_2.getString());
    FIX::StrikePrice StrikePrice_2;
    StrikePrice_2.setString("17603133");
    noRelatedSym_0_2.set(StrikePrice_2);
    Instrument_2.insert(StrikePrice_2.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_2(5);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_2);
    Instrument_2.insert(StrikePriceBoundaryMethod_2.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_2;
    StrikePriceBoundaryPrecision_2.setString("76.050000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_2);
    Instrument_2.insert(StrikePriceBoundaryPrecision_2.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_2(2);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_2);
    Instrument_2.insert(StrikePriceDeterminationMethod_2.getString());
    FIX::StrikeValue StrikeValue_2;
    StrikeValue_2.setString("16181760");
    noRelatedSym_0_2.set(StrikeValue_2);
    Instrument_2.insert(StrikeValue_2.getString());
    FIX::Symbol Symbol_2("STRING_1677143047");
    noRelatedSym_0_2.set(Symbol_2);
    Instrument_2.insert(Symbol_2.getString());
    FIX::SymbolSfx SymbolSfx_2("STRING_CD");
    noRelatedSym_0_2.set(SymbolSfx_2);
    Instrument_2.insert(SymbolSfx_2.getString());
    FIX::TimeUnit TimeUnit_2("STRING_S");
    noRelatedSym_0_2.set(TimeUnit_2);
    Instrument_2.insert(TimeUnit_2.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_2(4);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_2);
    Instrument_2.insert(UnderlyingPriceDeterminationMethod_2.getString());
    FIX::UnitOfMeasure UnitOfMeasure_2("STRING_MWh");
    noRelatedSym_0_2.set(UnitOfMeasure_2);
    Instrument_2.insert(UnitOfMeasure_2.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_2;
    UnitOfMeasureQty_2.setString("7082371");
    noRelatedSym_0_2.set(UnitOfMeasureQty_2);
    Instrument_2.insert(UnitOfMeasureQty_2.getString());
    FIX::ValuationMethod ValuationMethod_2("STRING_CDSD");
    noRelatedSym_0_2.set(ValuationMethod_2);
    Instrument_2.insert(ValuationMethod_2.getString());
    all_values.push_back(Instrument_2);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_3;
      FIX::ComplexEventCondition ComplexEventCondition_3(2);
      noComplexEvents_2_1_0.set(ComplexEventCondition_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventCondition_3.getString());
      FIX::ComplexEventPrice ComplexEventPrice_3;
      ComplexEventPrice_3.setString("1750109");
      noComplexEvents_2_1_0.set(ComplexEventPrice_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPrice_3.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_3(1);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceBoundaryMethod_3.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_3;
      ComplexEventPriceBoundaryPrecision_3.setString("19.770000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceBoundaryPrecision_3.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_3(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceTimeType_3.getString());
      FIX::ComplexEventType ComplexEventType_3(1);
      noComplexEvents_2_1_0.set(ComplexEventType_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventType_3.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_3;
      ComplexOptPayoutAmount_3.setString("13209139");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexOptPayoutAmount_3.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_3);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_4;
        FIX::ComplexEventEndDate ComplexEventEndDate_4(FIX::UTCTIMESTAMP(22, 33, 21, 5, 11, 2012));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_4);
        ComplexEventDates_NoComplexEventDates_4.insert(ComplexEventEndDate_4.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_4(FIX::UTCTIMESTAMP(21, 29, 35, 8, 11, 2002));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_4);
        ComplexEventDates_NoComplexEventDates_4.insert(ComplexEventStartDate_4.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_4);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_7;
          FIX::ComplexEventEndTime ComplexEventEndTime_7(FIX::UTCTIMEONLY(14, 15, 29));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_7);
          ComplexEventTimes_NoComplexEventTimes_7.insert(ComplexEventEndTime_7.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_7(FIX::UTCTIMEONLY(5, 28, 17));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_7);
          ComplexEventTimes_NoComplexEventTimes_7.insert(ComplexEventStartTime_7.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_7);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_8;
          FIX::ComplexEventEndTime ComplexEventEndTime_8(FIX::UTCTIMEONLY(21, 9, 23));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_8);
          ComplexEventTimes_NoComplexEventTimes_8.insert(ComplexEventEndTime_8.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_8(FIX::UTCTIMEONLY(13, 9, 6));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_8);
          ComplexEventTimes_NoComplexEventTimes_8.insert(ComplexEventStartTime_8.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_8);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_4;
      FIX::ComplexEventCondition ComplexEventCondition_4(2);
      noComplexEvents_2_1_1.set(ComplexEventCondition_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventCondition_4.getString());
      FIX::ComplexEventPrice ComplexEventPrice_4;
      ComplexEventPrice_4.setString("18144395");
      noComplexEvents_2_1_1.set(ComplexEventPrice_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventPrice_4.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_4(2);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceBoundaryMethod_4.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_4;
      ComplexEventPriceBoundaryPrecision_4.setString("73.300000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceBoundaryPrecision_4.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_4(1);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventPriceTimeType_4.getString());
      FIX::ComplexEventType ComplexEventType_4(7);
      noComplexEvents_2_1_1.set(ComplexEventType_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexEventType_4.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_4;
      ComplexOptPayoutAmount_4.setString("1603432");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_4);
      ComplexEvents_NoComplexEvents_4.insert(ComplexOptPayoutAmount_4.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_4);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_5;
        FIX::ComplexEventEndDate ComplexEventEndDate_5(FIX::UTCTIMESTAMP(10, 3, 24, 17, 12, 2001));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_5);
        ComplexEventDates_NoComplexEventDates_5.insert(ComplexEventEndDate_5.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_5(FIX::UTCTIMESTAMP(18, 9, 35, 7, 7, 2014));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_5);
        ComplexEventDates_NoComplexEventDates_5.insert(ComplexEventStartDate_5.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_5);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_9;
          FIX::ComplexEventEndTime ComplexEventEndTime_9(FIX::UTCTIMEONLY(9, 58, 15));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_9);
          ComplexEventTimes_NoComplexEventTimes_9.insert(ComplexEventEndTime_9.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_9(FIX::UTCTIMEONLY(11, 16, 31));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_9);
          ComplexEventTimes_NoComplexEventTimes_9.insert(ComplexEventStartTime_9.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_9);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_5;
      FIX::EventDate EventDate_5("LOCALMKTDATE_2110497420");
      noEvents_2_1_0.set(EventDate_5);
      EvntGrp_NoEvents_5.insert(EventDate_5.getString());
      FIX::EventPx EventPx_5;
      EventPx_5.setString("15876732");
      noEvents_2_1_0.set(EventPx_5);
      EvntGrp_NoEvents_5.insert(EventPx_5.getString());
      FIX::EventText EventText_5("STRING_185515411");
      noEvents_2_1_0.set(EventText_5);
      EvntGrp_NoEvents_5.insert(EventText_5.getString());
      FIX::EventTime EventTime_5(FIX::UTCTIMESTAMP(12, 0, 49, 8, 11, 2016));
      noEvents_2_1_0.set(EventTime_5);
      EvntGrp_NoEvents_5.insert(EventTime_5.getString());
      FIX::EventType EventType_5(17);
      noEvents_2_1_0.set(EventType_5);
      EvntGrp_NoEvents_5.insert(EventType_5.getString());
      all_values.push_back(EvntGrp_NoEvents_5);

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_6;
      FIX::EventDate EventDate_6("LOCALMKTDATE_1240468351");
      noEvents_2_1_1.set(EventDate_6);
      EvntGrp_NoEvents_6.insert(EventDate_6.getString());
      FIX::EventPx EventPx_6;
      EventPx_6.setString("7351499");
      noEvents_2_1_1.set(EventPx_6);
      EvntGrp_NoEvents_6.insert(EventPx_6.getString());
      FIX::EventText EventText_6("STRING_2096130837");
      noEvents_2_1_1.set(EventText_6);
      EvntGrp_NoEvents_6.insert(EventText_6.getString());
      FIX::EventTime EventTime_6(FIX::UTCTIMESTAMP(1, 58, 5, 16, 5, 2013));
      noEvents_2_1_1.set(EventTime_6);
      EvntGrp_NoEvents_6.insert(EventTime_6.getString());
      FIX::EventType EventType_6(14);
      noEvents_2_1_1.set(EventType_6);
      EvntGrp_NoEvents_6.insert(EventType_6.getString());
      all_values.push_back(EvntGrp_NoEvents_6);

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_2_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_7;
      FIX::EventDate EventDate_7("LOCALMKTDATE_1473721916");
      noEvents_2_1_2.set(EventDate_7);
      EvntGrp_NoEvents_7.insert(EventDate_7.getString());
      FIX::EventPx EventPx_7;
      EventPx_7.setString("19571588");
      noEvents_2_1_2.set(EventPx_7);
      EvntGrp_NoEvents_7.insert(EventPx_7.getString());
      FIX::EventText EventText_7("STRING_1753748471");
      noEvents_2_1_2.set(EventText_7);
      EvntGrp_NoEvents_7.insert(EventText_7.getString());
      FIX::EventTime EventTime_7(FIX::UTCTIMESTAMP(11, 2, 20, 2, 4, 2012));
      noEvents_2_1_2.set(EventTime_7);
      EvntGrp_NoEvents_7.insert(EventTime_7.getString());
      FIX::EventType EventType_7(9);
      noEvents_2_1_2.set(EventType_7);
      EvntGrp_NoEvents_7.insert(EventType_7.getString());
      all_values.push_back(EvntGrp_NoEvents_7);

      noRelatedSym_0_2.addGroup(noEvents_2_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_4;
      FIX::InstrumentPartyID InstrumentPartyID_4("STRING_647590825");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_4);
      InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyID_4.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_4('8');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_4);
      InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyIDSource_4.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_4(789893074);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_4);
      InstrumentParties_NoInstrumentParties_4.insert(InstrumentPartyRole_4.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_4);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7;
        FIX::InstrumentPartySubID InstrumentPartySubID_7("STRING_1224517345");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_7);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7.insert(InstrumentPartySubID_7.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_7(1437873512);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_7);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7.insert(InstrumentPartySubIDType_7.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8;
        FIX::InstrumentPartySubID InstrumentPartySubID_8("STRING_1207401838");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_8);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8.insert(InstrumentPartySubID_8.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_8(1646847621);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_8);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8.insert(InstrumentPartySubIDType_8.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9;
        FIX::InstrumentPartySubID InstrumentPartySubID_9("STRING_530858216");
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubID_9);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9.insert(InstrumentPartySubID_9.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_9(1942551750);
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubIDType_9);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9.insert(InstrumentPartySubIDType_9.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_5;
      FIX::InstrumentPartyID InstrumentPartyID_5("STRING_1595494810");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_5);
      InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyID_5.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_5('3');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_5);
      InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyIDSource_5.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_5(1176256943);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_5);
      InstrumentParties_NoInstrumentParties_5.insert(InstrumentPartyRole_5.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_5);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10;
        FIX::InstrumentPartySubID InstrumentPartySubID_10("STRING_816268051");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_10);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10.insert(InstrumentPartySubID_10.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_10(362469228);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_10);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10.insert(InstrumentPartySubIDType_10.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11;
        FIX::InstrumentPartySubID InstrumentPartySubID_11("STRING_1441612205");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_11);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11.insert(InstrumentPartySubID_11.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_11(207579325);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_11);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11.insert(InstrumentPartySubIDType_11.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_6;
      FIX::SecurityAltID SecurityAltID_6("STRING_767850474");
      noSecurityAltID_2_1_0.set(SecurityAltID_6);
      SecAltIDGrp_NoSecurityAltID_6.insert(SecurityAltID_6.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_6("STRING_17254503");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_6);
      SecAltIDGrp_NoSecurityAltID_6.insert(SecurityAltIDSource_6.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_6);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_7;
      FIX::SecurityAltID SecurityAltID_7("STRING_2144833092");
      noSecurityAltID_2_1_1.set(SecurityAltID_7);
      SecAltIDGrp_NoSecurityAltID_7.insert(SecurityAltID_7.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_7("STRING_752520298");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_7);
      SecAltIDGrp_NoSecurityAltID_7.insert(SecurityAltIDSource_7.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_7);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_4;
    FIX::SecurityXML SecurityXML_5("XMLDATA_1913600114");
    noRelatedSym_0_2.set(SecurityXML_5);
    FIX::SecurityXMLLen SecurityXMLLen_2(1363110366);
    noRelatedSym_0_2.set(SecurityXMLLen_2);
    FIX::SecurityXMLSchema SecurityXMLSchema_2("STRING_1033247958");
    noRelatedSym_0_2.set(SecurityXMLSchema_2);
    SecurityXML_4.insert(SecurityXMLSchema_2.getString());
    all_values.push_back(SecurityXML_4);

    msg.addGroup(noRelatedSym_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_0;
    FIX::PartyID PartyID_0("STRING_1621629369");
    noPartyIDs_0_0.set(PartyID_0);
    Parties_NoPartyIDs_0.insert(PartyID_0.getString());
    FIX::PartyIDSource PartyIDSource_0('7');
    noPartyIDs_0_0.set(PartyIDSource_0);
    Parties_NoPartyIDs_0.insert(PartyIDSource_0.getString());
    FIX::PartyRole PartyRole_0(47);
    noPartyIDs_0_0.set(PartyRole_0);
    Parties_NoPartyIDs_0.insert(PartyRole_0.getString());
    all_values.push_back(Parties_NoPartyIDs_0);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_0;
      FIX::PartySubID PartySubID_0("STRING_1924580216");
      noPartySubIDs_0_1_0.set(PartySubID_0);
      PtysSubGrp_NoPartySubIDs_0.insert(PartySubID_0.getString());
      FIX::PartySubIDType PartySubIDType_0(25);
      noPartySubIDs_0_1_0.set(PartySubIDType_0);
      PtysSubGrp_NoPartySubIDs_0.insert(PartySubIDType_0.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_0);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_1;
      FIX::PartySubID PartySubID_1("STRING_708073209");
      noPartySubIDs_0_1_1.set(PartySubID_1);
      PtysSubGrp_NoPartySubIDs_1.insert(PartySubID_1.getString());
      FIX::PartySubIDType PartySubIDType_1(19);
      noPartySubIDs_0_1_1.set(PartySubIDType_1);
      PtysSubGrp_NoPartySubIDs_1.insert(PartySubIDType_1.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_1);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_1;
    FIX::PartyID PartyID_1("STRING_1520215519");
    noPartyIDs_0_1.set(PartyID_1);
    Parties_NoPartyIDs_1.insert(PartyID_1.getString());
    FIX::PartyIDSource PartyIDSource_1('2');
    noPartyIDs_0_1.set(PartyIDSource_1);
    Parties_NoPartyIDs_1.insert(PartyIDSource_1.getString());
    FIX::PartyRole PartyRole_1(55);
    noPartyIDs_0_1.set(PartyRole_1);
    Parties_NoPartyIDs_1.insert(PartyRole_1.getString());
    all_values.push_back(Parties_NoPartyIDs_1);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_2;
      FIX::PartySubID PartySubID_2("STRING_529321290");
      noPartySubIDs_1_1_0.set(PartySubID_2);
      PtysSubGrp_NoPartySubIDs_2.insert(PartySubID_2.getString());
      FIX::PartySubIDType PartySubIDType_2(16);
      noPartySubIDs_1_1_0.set(PartySubIDType_2);
      PtysSubGrp_NoPartySubIDs_2.insert(PartySubIDType_2.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_2);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_3;
      FIX::PartySubID PartySubID_3("STRING_467590654");
      noPartySubIDs_1_1_1.set(PartySubID_3);
      PtysSubGrp_NoPartySubIDs_3.insert(PartySubID_3.getString());
      FIX::PartySubIDType PartySubIDType_3(6);
      noPartySubIDs_1_1_1.set(PartySubIDType_3);
      PtysSubGrp_NoPartySubIDs_3.insert(PartySubIDType_3.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_3);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_4;
      FIX::PartySubID PartySubID_4("STRING_1541680479");
      noPartySubIDs_1_1_2.set(PartySubID_4);
      PtysSubGrp_NoPartySubIDs_4.insert(PartySubID_4.getString());
      FIX::PartySubIDType PartySubIDType_4(9);
      noPartySubIDs_1_1_2.set(PartySubIDType_4);
      PtysSubGrp_NoPartySubIDs_4.insert(PartySubIDType_4.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_4);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
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
    LongQty_0.setString("19041497");
    noPositions_0_0.set(LongQty_0);
    PositionQty_NoPositions_0.insert(LongQty_0.getString());
    FIX::PosQtyStatus PosQtyStatus_0(2);
    noPositions_0_0.set(PosQtyStatus_0);
    PositionQty_NoPositions_0.insert(PosQtyStatus_0.getString());
    FIX::PosType PosType_0("STRING_TA");
    noPositions_0_0.set(PosType_0);
    PositionQty_NoPositions_0.insert(PosType_0.getString());
    FIX::QuantityDate QuantityDate_0("LOCALMKTDATE_147750680");
    noPositions_0_0.set(QuantityDate_0);
    PositionQty_NoPositions_0.insert(QuantityDate_0.getString());
    FIX::ShortQty ShortQty_0;
    ShortQty_0.setString("6916955");
    noPositions_0_0.set(ShortQty_0);
    PositionQty_NoPositions_0.insert(ShortQty_0.getString());
    all_values.push_back(PositionQty_NoPositions_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_0;
      FIX::NestedPartyID NestedPartyID_0("STRING_145100124");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyID_0.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_0('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyIDSource_0.getString());
      FIX::NestedPartyRole NestedPartyRole_0(1372896002);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyRole_0.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_0);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_0;
        FIX::NestedPartySubID NestedPartySubID_0("STRING_329980175");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_0);
        NstdPtysSubGrp_NoNestedPartySubIDs_0.insert(NestedPartySubID_0.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_0(171839675);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_0);
        NstdPtysSubGrp_NoNestedPartySubIDs_0.insert(NestedPartySubIDType_0.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_0);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_1;
      FIX::NestedPartyID NestedPartyID_1("STRING_982356212");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyID_1.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_1('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyIDSource_1.getString());
      FIX::NestedPartyRole NestedPartyRole_1(1738767404);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyRole_1.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_1);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_1;
        FIX::NestedPartySubID NestedPartySubID_1("STRING_1384066135");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_1);
        NstdPtysSubGrp_NoNestedPartySubIDs_1.insert(NestedPartySubID_1.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_1(2034465578);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_1);
        NstdPtysSubGrp_NoNestedPartySubIDs_1.insert(NestedPartySubIDType_1.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_1);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_2;
        FIX::NestedPartySubID NestedPartySubID_2("STRING_1608609557");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_2);
        NstdPtysSubGrp_NoNestedPartySubIDs_2.insert(NestedPartySubID_2.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_2(747019730);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_2);
        NstdPtysSubGrp_NoNestedPartySubIDs_2.insert(NestedPartySubIDType_2.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_2);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_2;
      FIX::NestedPartyID NestedPartyID_2("STRING_1407197449");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyID_2.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_2('1');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyIDSource_2.getString());
      FIX::NestedPartyRole NestedPartyRole_2(1317375163);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_2);
      NestedParties_NoNestedPartyIDs_2.insert(NestedPartyRole_2.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_2);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_3;
        FIX::NestedPartySubID NestedPartySubID_3("STRING_2136393921");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_3);
        NstdPtysSubGrp_NoNestedPartySubIDs_3.insert(NestedPartySubID_3.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_3(1682798699);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_3);
        NstdPtysSubGrp_NoNestedPartySubIDs_3.insert(NestedPartySubIDType_3.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_3);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_4;
        FIX::NestedPartySubID NestedPartySubID_4("STRING_746883947");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_4);
        NstdPtysSubGrp_NoNestedPartySubIDs_4.insert(NestedPartySubID_4.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_4(554587929);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_4);
        NstdPtysSubGrp_NoNestedPartySubIDs_4.insert(NestedPartySubIDType_4.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_4);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noPositions_0_0);
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
