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
  multiset<string> all_compo_names;
  multiset<string> AdjustedPositionReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_0("LOCALMKTDATE_1964545035");
  msg.set(ClearingBusinessDate_0);
  AdjustedPositionReport_0.insert(ClearingBusinessDate_0.getString());
  FIX::PosMaintRptID PosMaintRptID_0("STRING_1714486675");
  msg.set(PosMaintRptID_0);
  AdjustedPositionReport_0.insert(PosMaintRptID_0.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_0("STRING_3258163");
  msg.set(PosMaintRptRefID_0);
  AdjustedPositionReport_0.insert(PosMaintRptRefID_0.getString());
  FIX::PosReqType PosReqType_0(5);
  msg.set(PosReqType_0);
  AdjustedPositionReport_0.insert(PosReqType_0.getString());
  FIX::PriorSettlPrice PriorSettlPrice_0;
  PriorSettlPrice_0.setString("16046842");
  msg.set(PriorSettlPrice_0);
  AdjustedPositionReport_0.insert(PriorSettlPrice_0.getString());
  FIX::SettlPrice SettlPrice_0;
  SettlPrice_0.setString("9445860");
  msg.set(SettlPrice_0);
  AdjustedPositionReport_0.insert(SettlPrice_0.getString());
  FIX::SettlSessID SettlSessID_0("STRING_EOD");
  msg.set(SettlSessID_0);
  AdjustedPositionReport_0.insert(SettlSessID_0.getString());
  all_values.push_back(AdjustedPositionReport_0);

  all_compo_names.insert("AdjustedPositionReport");

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::AdjustedPositionReport::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_0;
    FIX::AttachmentPoint AttachmentPoint_0;
    AttachmentPoint_0.setString("78.750000");
    noRelatedSym_0_0.set(AttachmentPoint_0);
    Instrument_0.insert(AttachmentPoint_0.getString());
    FIX::CFICode CFICode_0("STRING_746229521");
    noRelatedSym_0_0.set(CFICode_0);
    Instrument_0.insert(CFICode_0.getString());
    FIX::CPProgram CPProgram_0(99);
    noRelatedSym_0_0.set(CPProgram_0);
    Instrument_0.insert(CPProgram_0.getString());
    FIX::CPRegType CPRegType_0("STRING_225416213");
    noRelatedSym_0_0.set(CPRegType_0);
    Instrument_0.insert(CPRegType_0.getString());
    FIX::CapPrice CapPrice_0;
    CapPrice_0.setString("20554569");
    noRelatedSym_0_0.set(CapPrice_0);
    Instrument_0.insert(CapPrice_0.getString());
    FIX::ContractMultiplier ContractMultiplier_0;
    ContractMultiplier_0.setString("16649899");
    noRelatedSym_0_0.set(ContractMultiplier_0);
    Instrument_0.insert(ContractMultiplier_0.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_0(2);
    noRelatedSym_0_0.set(ContractMultiplierUnit_0);
    Instrument_0.insert(ContractMultiplierUnit_0.getString());
    FIX::ContractSettlMonth ContractSettlMonth_0("MONTHYEAR_1766380897");
    noRelatedSym_0_0.set(ContractSettlMonth_0);
    Instrument_0.insert(ContractSettlMonth_0.getString());
    FIX::CountryOfIssue CountryOfIssue_0("COUNTRY_1144211318");
    noRelatedSym_0_0.set(CountryOfIssue_0);
    Instrument_0.insert(CountryOfIssue_0.getString());
    FIX::CouponPaymentDate CouponPaymentDate_0("LOCALMKTDATE_1358202763");
    noRelatedSym_0_0.set(CouponPaymentDate_0);
    Instrument_0.insert(CouponPaymentDate_0.getString());
    FIX::CouponRate CouponRate_0;
    CouponRate_0.setString("71.650000");
    noRelatedSym_0_0.set(CouponRate_0);
    Instrument_0.insert(CouponRate_0.getString());
    FIX::CreditRating CreditRating_0("STRING_1210372591");
    noRelatedSym_0_0.set(CreditRating_0);
    Instrument_0.insert(CreditRating_0.getString());
    FIX::DatedDate DatedDate_0("LOCALMKTDATE_1897817818");
    noRelatedSym_0_0.set(DatedDate_0);
    Instrument_0.insert(DatedDate_0.getString());
    FIX::DetachmentPoint DetachmentPoint_0;
    DetachmentPoint_0.setString("17.450000");
    noRelatedSym_0_0.set(DetachmentPoint_0);
    Instrument_0.insert(DetachmentPoint_0.getString());
    FIX::EncodedIssuer EncodedIssuer_0("DATA_945821367");
    noRelatedSym_0_0.set(EncodedIssuer_0);
    Instrument_0.insert(EncodedIssuer_0.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_0(633116060);
    noRelatedSym_0_0.set(EncodedIssuerLen_0);
    Instrument_0.insert(EncodedIssuerLen_0.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_0("DATA_1059324124");
    noRelatedSym_0_0.set(EncodedSecurityDesc_0);
    Instrument_0.insert(EncodedSecurityDesc_0.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_0(1690302508);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_0);
    Instrument_0.insert(EncodedSecurityDescLen_0.getString());
    FIX::ExerciseStyle ExerciseStyle_0(2);
    noRelatedSym_0_0.set(ExerciseStyle_0);
    Instrument_0.insert(ExerciseStyle_0.getString());
    FIX::Factor Factor_0;
    Factor_0.setString("13289230");
    noRelatedSym_0_0.set(Factor_0);
    Instrument_0.insert(Factor_0.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_0(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_0);
    Instrument_0.insert(FlexProductEligibilityIndicator_0.getString());
    FIX::FlexibleIndicator FlexibleIndicator_0(false);
    noRelatedSym_0_0.set(FlexibleIndicator_0);
    Instrument_0.insert(FlexibleIndicator_0.getString());
    FIX::FloorPrice FloorPrice_0;
    FloorPrice_0.setString("9336808");
    noRelatedSym_0_0.set(FloorPrice_0);
    Instrument_0.insert(FloorPrice_0.getString());
    FIX::FlowScheduleType FlowScheduleType_0(3);
    noRelatedSym_0_0.set(FlowScheduleType_0);
    Instrument_0.insert(FlowScheduleType_0.getString());
    FIX::InstrRegistry InstrRegistry_0("STRING_732954532");
    noRelatedSym_0_0.set(InstrRegistry_0);
    Instrument_0.insert(InstrRegistry_0.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_0('9');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_0);
    Instrument_0.insert(InstrmtAssignmentMethod_0.getString());
    FIX::InterestAccrualDate InterestAccrualDate_0("LOCALMKTDATE_790905158");
    noRelatedSym_0_0.set(InterestAccrualDate_0);
    Instrument_0.insert(InterestAccrualDate_0.getString());
    FIX::IssueDate IssueDate_0("LOCALMKTDATE_190155124");
    noRelatedSym_0_0.set(IssueDate_0);
    Instrument_0.insert(IssueDate_0.getString());
    FIX::Issuer Issuer_0("STRING_1881525067");
    noRelatedSym_0_0.set(Issuer_0);
    Instrument_0.insert(Issuer_0.getString());
    FIX::ListMethod ListMethod_0(0);
    noRelatedSym_0_0.set(ListMethod_0);
    Instrument_0.insert(ListMethod_0.getString());
    FIX::LocaleOfIssue LocaleOfIssue_0("STRING_649201648");
    noRelatedSym_0_0.set(LocaleOfIssue_0);
    Instrument_0.insert(LocaleOfIssue_0.getString());
    FIX::MaturityDate MaturityDate_0("LOCALMKTDATE_222339294");
    noRelatedSym_0_0.set(MaturityDate_0);
    Instrument_0.insert(MaturityDate_0.getString());
    FIX::MaturityMonthYear MaturityMonthYear_0("MONTHYEAR_653900019");
    noRelatedSym_0_0.set(MaturityMonthYear_0);
    Instrument_0.insert(MaturityMonthYear_0.getString());
    FIX::MaturityTime MaturityTime_0("TZTIMEONLY_531826969");
    noRelatedSym_0_0.set(MaturityTime_0);
    Instrument_0.insert(MaturityTime_0.getString());
    FIX::MinPriceIncrement MinPriceIncrement_0;
    MinPriceIncrement_0.setString("4477555");
    noRelatedSym_0_0.set(MinPriceIncrement_0);
    Instrument_0.insert(MinPriceIncrement_0.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_0;
    MinPriceIncrementAmount_0.setString("5618733");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_0);
    Instrument_0.insert(MinPriceIncrementAmount_0.getString());
    FIX::NTPositionLimit NTPositionLimit_0(49333281);
    noRelatedSym_0_0.set(NTPositionLimit_0);
    Instrument_0.insert(NTPositionLimit_0.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_0;
    NotionalPercentageOutstanding_0.setString("54.390000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_0);
    Instrument_0.insert(NotionalPercentageOutstanding_0.getString());
    FIX::OptAttribute OptAttribute_0('1');
    noRelatedSym_0_0.set(OptAttribute_0);
    Instrument_0.insert(OptAttribute_0.getString());
    FIX::OptPayoutAmount OptPayoutAmount_0;
    OptPayoutAmount_0.setString("11935445");
    noRelatedSym_0_0.set(OptPayoutAmount_0);
    Instrument_0.insert(OptPayoutAmount_0.getString());
    FIX::OptPayoutType OptPayoutType_0(2);
    noRelatedSym_0_0.set(OptPayoutType_0);
    Instrument_0.insert(OptPayoutType_0.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_0;
    OriginalNotionalPercentageOutstanding_0.setString("77.810000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_0);
    Instrument_0.insert(OriginalNotionalPercentageOutstanding_0.getString());
    FIX::Pool Pool_0("STRING_256433542");
    noRelatedSym_0_0.set(Pool_0);
    Instrument_0.insert(Pool_0.getString());
    FIX::PositionLimit PositionLimit_0(356608725);
    noRelatedSym_0_0.set(PositionLimit_0);
    Instrument_0.insert(PositionLimit_0.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_0("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_0);
    Instrument_0.insert(PriceQuoteMethod_0.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_0("STRING_1202254910");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_0);
    Instrument_0.insert(PriceUnitOfMeasure_0.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_0;
    PriceUnitOfMeasureQty_0.setString("9897247");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_0);
    Instrument_0.insert(PriceUnitOfMeasureQty_0.getString());
    FIX::Product Product_0(7);
    noRelatedSym_0_0.set(Product_0);
    Instrument_0.insert(Product_0.getString());
    FIX::ProductComplex ProductComplex_0("STRING_745073770");
    noRelatedSym_0_0.set(ProductComplex_0);
    Instrument_0.insert(ProductComplex_0.getString());
    FIX::PutOrCall PutOrCall_0(0);
    noRelatedSym_0_0.set(PutOrCall_0);
    Instrument_0.insert(PutOrCall_0.getString());
    FIX::RedemptionDate RedemptionDate_0("LOCALMKTDATE_664489372");
    noRelatedSym_0_0.set(RedemptionDate_0);
    Instrument_0.insert(RedemptionDate_0.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_0("STRING_1942984871");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_0);
    Instrument_0.insert(RepoCollateralSecurityType_0.getString());
    FIX::RepurchaseRate RepurchaseRate_0;
    RepurchaseRate_0.setString("98.530000");
    noRelatedSym_0_0.set(RepurchaseRate_0);
    Instrument_0.insert(RepurchaseRate_0.getString());
    FIX::RepurchaseTerm RepurchaseTerm_0(1598170184);
    noRelatedSym_0_0.set(RepurchaseTerm_0);
    Instrument_0.insert(RepurchaseTerm_0.getString());
    FIX::RestructuringType RestructuringType_0("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_0);
    Instrument_0.insert(RestructuringType_0.getString());
    FIX::SecurityDesc SecurityDesc_0("STRING_608800737");
    noRelatedSym_0_0.set(SecurityDesc_0);
    Instrument_0.insert(SecurityDesc_0.getString());
    FIX::SecurityExchange SecurityExchange_0("EXCHANGE_387625512");
    noRelatedSym_0_0.set(SecurityExchange_0);
    Instrument_0.insert(SecurityExchange_0.getString());
    FIX::SecurityGroup SecurityGroup_0("STRING_1601378869");
    noRelatedSym_0_0.set(SecurityGroup_0);
    Instrument_0.insert(SecurityGroup_0.getString());
    FIX::SecurityID SecurityID_0("STRING_798955862");
    noRelatedSym_0_0.set(SecurityID_0);
    Instrument_0.insert(SecurityID_0.getString());
    FIX::SecurityIDSource SecurityIDSource_0("STRING_2");
    noRelatedSym_0_0.set(SecurityIDSource_0);
    Instrument_0.insert(SecurityIDSource_0.getString());
    FIX::SecurityStatus SecurityStatus_0("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_0);
    Instrument_0.insert(SecurityStatus_0.getString());
    FIX::SecuritySubType SecuritySubType_0("STRING_1448157510");
    noRelatedSym_0_0.set(SecuritySubType_0);
    Instrument_0.insert(SecuritySubType_0.getString());
    FIX::SecurityType SecurityType_0("STRING_FXSWAP");
    noRelatedSym_0_0.set(SecurityType_0);
    Instrument_0.insert(SecurityType_0.getString());
    FIX::Seniority Seniority_0("STRING_SD");
    noRelatedSym_0_0.set(Seniority_0);
    Instrument_0.insert(Seniority_0.getString());
    FIX::SettlMethod SettlMethod_0('C');
    noRelatedSym_0_0.set(SettlMethod_0);
    Instrument_0.insert(SettlMethod_0.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_0("STRING_791761732");
    noRelatedSym_0_0.set(SettleOnOpenFlag_0);
    Instrument_0.insert(SettleOnOpenFlag_0.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_0("STRING_577339106");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_0);
    Instrument_0.insert(StateOrProvinceOfIssue_0.getString());
    FIX::StrikeCurrency StrikeCurrency_0("JPY");
    noRelatedSym_0_0.set(StrikeCurrency_0);
    Instrument_0.insert(StrikeCurrency_0.getString());
    FIX::StrikeMultiplier StrikeMultiplier_0;
    StrikeMultiplier_0.setString("7581097");
    noRelatedSym_0_0.set(StrikeMultiplier_0);
    Instrument_0.insert(StrikeMultiplier_0.getString());
    FIX::StrikePrice StrikePrice_0;
    StrikePrice_0.setString("10753787");
    noRelatedSym_0_0.set(StrikePrice_0);
    Instrument_0.insert(StrikePrice_0.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_0(5);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_0);
    Instrument_0.insert(StrikePriceBoundaryMethod_0.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_0;
    StrikePriceBoundaryPrecision_0.setString("38.560000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_0);
    Instrument_0.insert(StrikePriceBoundaryPrecision_0.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_0(3);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_0);
    Instrument_0.insert(StrikePriceDeterminationMethod_0.getString());
    FIX::StrikeValue StrikeValue_0;
    StrikeValue_0.setString("10027168");
    noRelatedSym_0_0.set(StrikeValue_0);
    Instrument_0.insert(StrikeValue_0.getString());
    FIX::Symbol Symbol_0("STRING_1113319735");
    noRelatedSym_0_0.set(Symbol_0);
    Instrument_0.insert(Symbol_0.getString());
    FIX::SymbolSfx SymbolSfx_0("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_0);
    Instrument_0.insert(SymbolSfx_0.getString());
    FIX::TimeUnit TimeUnit_0("STRING_Yr");
    noRelatedSym_0_0.set(TimeUnit_0);
    Instrument_0.insert(TimeUnit_0.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_0(3);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_0);
    Instrument_0.insert(UnderlyingPriceDeterminationMethod_0.getString());
    FIX::UnitOfMeasure UnitOfMeasure_0("STRING_lbs");
    noRelatedSym_0_0.set(UnitOfMeasure_0);
    Instrument_0.insert(UnitOfMeasure_0.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_0;
    UnitOfMeasureQty_0.setString("7023362");
    noRelatedSym_0_0.set(UnitOfMeasureQty_0);
    Instrument_0.insert(UnitOfMeasureQty_0.getString());
    FIX::ValuationMethod ValuationMethod_0("STRING_FUTDA");
    noRelatedSym_0_0.set(ValuationMethod_0);
    Instrument_0.insert(ValuationMethod_0.getString());
    all_values.push_back(Instrument_0);
    all_compo_names.insert("Instrument");

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
      ComplexEventPrice_0.setString("5640619");
      noComplexEvents_0_1_0.set(ComplexEventPrice_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPrice_0.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_0(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceBoundaryMethod_0.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_0;
      ComplexEventPriceBoundaryPrecision_0.setString("32.330000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceBoundaryPrecision_0.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_0(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceTimeType_0.getString());
      FIX::ComplexEventType ComplexEventType_0(1);
      noComplexEvents_0_1_0.set(ComplexEventType_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventType_0.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_0;
      ComplexOptPayoutAmount_0.setString("19859390");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexOptPayoutAmount_0.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_0);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_0;
        FIX::ComplexEventEndDate ComplexEventEndDate_0(FIX::UTCTIMESTAMP(6, 46, 40, 18, 8, 2006));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_0);
        ComplexEventDates_NoComplexEventDates_0.insert(ComplexEventEndDate_0.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_0(FIX::UTCTIMESTAMP(11, 8, 35, 10, 9, 2003));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_0);
        ComplexEventDates_NoComplexEventDates_0.insert(ComplexEventStartDate_0.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_0);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_0;
          FIX::ComplexEventEndTime ComplexEventEndTime_0(FIX::UTCTIMEONLY(10, 0, 41));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_0);
          ComplexEventTimes_NoComplexEventTimes_0.insert(ComplexEventEndTime_0.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_0(FIX::UTCTIMEONLY(7, 15, 26));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_0);
          ComplexEventTimes_NoComplexEventTimes_0.insert(ComplexEventStartTime_0.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_0);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_1;
        FIX::ComplexEventEndDate ComplexEventEndDate_1(FIX::UTCTIMESTAMP(22, 18, 32, 24, 5, 2008));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_1);
        ComplexEventDates_NoComplexEventDates_1.insert(ComplexEventEndDate_1.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_1(FIX::UTCTIMESTAMP(14, 30, 16, 2, 1, 2017));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_1);
        ComplexEventDates_NoComplexEventDates_1.insert(ComplexEventStartDate_1.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_1);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_1;
          FIX::ComplexEventEndTime ComplexEventEndTime_1(FIX::UTCTIMEONLY(10, 52, 22));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_1);
          ComplexEventTimes_NoComplexEventTimes_1.insert(ComplexEventEndTime_1.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_1(FIX::UTCTIMEONLY(1, 43, 7));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_1);
          ComplexEventTimes_NoComplexEventTimes_1.insert(ComplexEventStartTime_1.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_1);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_2;
          FIX::ComplexEventEndTime ComplexEventEndTime_2(FIX::UTCTIMEONLY(9, 59, 14));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_2);
          ComplexEventTimes_NoComplexEventTimes_2.insert(ComplexEventEndTime_2.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_2(FIX::UTCTIMEONLY(6, 21, 28));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_2);
          ComplexEventTimes_NoComplexEventTimes_2.insert(ComplexEventStartTime_2.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_2);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_2;
        FIX::ComplexEventEndDate ComplexEventEndDate_2(FIX::UTCTIMESTAMP(23, 38, 46, 20, 8, 2010));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_2);
        ComplexEventDates_NoComplexEventDates_2.insert(ComplexEventEndDate_2.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_2(FIX::UTCTIMESTAMP(21, 28, 30, 3, 9, 2000));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_2);
        ComplexEventDates_NoComplexEventDates_2.insert(ComplexEventStartDate_2.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_2);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_3;
          FIX::ComplexEventEndTime ComplexEventEndTime_3(FIX::UTCTIMEONLY(4, 15, 29));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_3);
          ComplexEventTimes_NoComplexEventTimes_3.insert(ComplexEventEndTime_3.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_3(FIX::UTCTIMEONLY(16, 4, 28));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_3);
          ComplexEventTimes_NoComplexEventTimes_3.insert(ComplexEventStartTime_3.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_3);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_4;
          FIX::ComplexEventEndTime ComplexEventEndTime_4(FIX::UTCTIMEONLY(6, 27, 43));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_4);
          ComplexEventTimes_NoComplexEventTimes_4.insert(ComplexEventEndTime_4.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_4(FIX::UTCTIMEONLY(10, 4, 0));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_4);
          ComplexEventTimes_NoComplexEventTimes_4.insert(ComplexEventStartTime_4.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_4);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_5;
          FIX::ComplexEventEndTime ComplexEventEndTime_5(FIX::UTCTIMEONLY(20, 30, 1));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventEndTime_5);
          ComplexEventTimes_NoComplexEventTimes_5.insert(ComplexEventEndTime_5.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_5(FIX::UTCTIMEONLY(1, 59, 42));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventStartTime_5);
          ComplexEventTimes_NoComplexEventTimes_5.insert(ComplexEventStartTime_5.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_5);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
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
      ComplexEventPrice_1.setString("10585546");
      noComplexEvents_0_1_1.set(ComplexEventPrice_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPrice_1.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_1(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceBoundaryMethod_1.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_1;
      ComplexEventPriceBoundaryPrecision_1.setString("18.290000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceBoundaryPrecision_1.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_1(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceTimeType_1.getString());
      FIX::ComplexEventType ComplexEventType_1(7);
      noComplexEvents_0_1_1.set(ComplexEventType_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventType_1.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_1;
      ComplexOptPayoutAmount_1.setString("3244541");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexOptPayoutAmount_1.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_1);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_3;
        FIX::ComplexEventEndDate ComplexEventEndDate_3(FIX::UTCTIMESTAMP(4, 7, 24, 16, 5, 2016));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_3);
        ComplexEventDates_NoComplexEventDates_3.insert(ComplexEventEndDate_3.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_3(FIX::UTCTIMESTAMP(10, 11, 48, 10, 2, 2015));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_3);
        ComplexEventDates_NoComplexEventDates_3.insert(ComplexEventStartDate_3.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_3);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_6;
          FIX::ComplexEventEndTime ComplexEventEndTime_6(FIX::UTCTIMEONLY(17, 20, 30));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_6);
          ComplexEventTimes_NoComplexEventTimes_6.insert(ComplexEventEndTime_6.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_6(FIX::UTCTIMEONLY(22, 30, 31));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_6);
          ComplexEventTimes_NoComplexEventTimes_6.insert(ComplexEventStartTime_6.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_6);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_7;
          FIX::ComplexEventEndTime ComplexEventEndTime_7(FIX::UTCTIMEONLY(5, 43, 2));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_7);
          ComplexEventTimes_NoComplexEventTimes_7.insert(ComplexEventEndTime_7.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_7(FIX::UTCTIMEONLY(6, 18, 43));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_7);
          ComplexEventTimes_NoComplexEventTimes_7.insert(ComplexEventStartTime_7.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_7);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_4;
        FIX::ComplexEventEndDate ComplexEventEndDate_4(FIX::UTCTIMESTAMP(10, 43, 25, 15, 12, 2015));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_4);
        ComplexEventDates_NoComplexEventDates_4.insert(ComplexEventEndDate_4.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_4(FIX::UTCTIMESTAMP(13, 12, 21, 7, 3, 2016));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_4);
        ComplexEventDates_NoComplexEventDates_4.insert(ComplexEventStartDate_4.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_4);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_8;
          FIX::ComplexEventEndTime ComplexEventEndTime_8(FIX::UTCTIMEONLY(19, 21, 25));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_8);
          ComplexEventTimes_NoComplexEventTimes_8.insert(ComplexEventEndTime_8.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_8(FIX::UTCTIMEONLY(11, 47, 39));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_8);
          ComplexEventTimes_NoComplexEventTimes_8.insert(ComplexEventStartTime_8.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_8);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_9;
          FIX::ComplexEventEndTime ComplexEventEndTime_9(FIX::UTCTIMEONLY(17, 14, 22));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_9);
          ComplexEventTimes_NoComplexEventTimes_9.insert(ComplexEventEndTime_9.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_9(FIX::UTCTIMEONLY(20, 40, 17));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_9);
          ComplexEventTimes_NoComplexEventTimes_9.insert(ComplexEventStartTime_9.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_9);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_5;
        FIX::ComplexEventEndDate ComplexEventEndDate_5(FIX::UTCTIMESTAMP(3, 0, 38, 6, 12, 2003));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_5);
        ComplexEventDates_NoComplexEventDates_5.insert(ComplexEventEndDate_5.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_5(FIX::UTCTIMESTAMP(4, 52, 43, 23, 11, 2005));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_5);
        ComplexEventDates_NoComplexEventDates_5.insert(ComplexEventStartDate_5.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_5);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_10;
          FIX::ComplexEventEndTime ComplexEventEndTime_10(FIX::UTCTIMEONLY(16, 26, 22));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_10);
          ComplexEventTimes_NoComplexEventTimes_10.insert(ComplexEventEndTime_10.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_10(FIX::UTCTIMEONLY(13, 10, 39));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_10);
          ComplexEventTimes_NoComplexEventTimes_10.insert(ComplexEventStartTime_10.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_10);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_11;
          FIX::ComplexEventEndTime ComplexEventEndTime_11(FIX::UTCTIMEONLY(19, 46, 43));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_11);
          ComplexEventTimes_NoComplexEventTimes_11.insert(ComplexEventEndTime_11.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_11(FIX::UTCTIMEONLY(6, 24, 14));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_11);
          ComplexEventTimes_NoComplexEventTimes_11.insert(ComplexEventStartTime_11.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_11);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_0;
      FIX::EventDate EventDate_0("LOCALMKTDATE_1491552115");
      noEvents_0_1_0.set(EventDate_0);
      EvntGrp_NoEvents_0.insert(EventDate_0.getString());
      FIX::EventPx EventPx_0;
      EventPx_0.setString("15160877");
      noEvents_0_1_0.set(EventPx_0);
      EvntGrp_NoEvents_0.insert(EventPx_0.getString());
      FIX::EventText EventText_0("STRING_526074950");
      noEvents_0_1_0.set(EventText_0);
      EvntGrp_NoEvents_0.insert(EventText_0.getString());
      FIX::EventTime EventTime_0(FIX::UTCTIMESTAMP(18, 30, 23, 27, 3, 2007));
      noEvents_0_1_0.set(EventTime_0);
      EvntGrp_NoEvents_0.insert(EventTime_0.getString());
      FIX::EventType EventType_0(3);
      noEvents_0_1_0.set(EventType_0);
      EvntGrp_NoEvents_0.insert(EventType_0.getString());
      all_values.push_back(EvntGrp_NoEvents_0);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_1;
      FIX::EventDate EventDate_1("LOCALMKTDATE_1415052084");
      noEvents_0_1_1.set(EventDate_1);
      EvntGrp_NoEvents_1.insert(EventDate_1.getString());
      FIX::EventPx EventPx_1;
      EventPx_1.setString("14621782");
      noEvents_0_1_1.set(EventPx_1);
      EvntGrp_NoEvents_1.insert(EventPx_1.getString());
      FIX::EventText EventText_1("STRING_1670408927");
      noEvents_0_1_1.set(EventText_1);
      EvntGrp_NoEvents_1.insert(EventText_1.getString());
      FIX::EventTime EventTime_1(FIX::UTCTIMESTAMP(21, 5, 43, 9, 11, 2017));
      noEvents_0_1_1.set(EventTime_1);
      EvntGrp_NoEvents_1.insert(EventTime_1.getString());
      FIX::EventType EventType_1(18);
      noEvents_0_1_1.set(EventType_1);
      EvntGrp_NoEvents_1.insert(EventType_1.getString());
      all_values.push_back(EvntGrp_NoEvents_1);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_2;
      FIX::EventDate EventDate_2("LOCALMKTDATE_1955814740");
      noEvents_0_1_2.set(EventDate_2);
      EvntGrp_NoEvents_2.insert(EventDate_2.getString());
      FIX::EventPx EventPx_2;
      EventPx_2.setString("8360791");
      noEvents_0_1_2.set(EventPx_2);
      EvntGrp_NoEvents_2.insert(EventPx_2.getString());
      FIX::EventText EventText_2("STRING_370657543");
      noEvents_0_1_2.set(EventText_2);
      EvntGrp_NoEvents_2.insert(EventText_2.getString());
      FIX::EventTime EventTime_2(FIX::UTCTIMESTAMP(1, 49, 11, 20, 2, 2000));
      noEvents_0_1_2.set(EventTime_2);
      EvntGrp_NoEvents_2.insert(EventTime_2.getString());
      FIX::EventType EventType_2(16);
      noEvents_0_1_2.set(EventType_2);
      EvntGrp_NoEvents_2.insert(EventType_2.getString());
      all_values.push_back(EvntGrp_NoEvents_2);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_0;
      FIX::InstrumentPartyID InstrumentPartyID_0("STRING_1333409211");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyID_0.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_0('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyIDSource_0.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_0(479860454);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyRole_0.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_0);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0;
        FIX::InstrumentPartySubID InstrumentPartySubID_0("STRING_1526870468");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_0);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0.insert(InstrumentPartySubID_0.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_0(1560405868);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_0);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0.insert(InstrumentPartySubIDType_0.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1;
        FIX::InstrumentPartySubID InstrumentPartySubID_1("STRING_959358486");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_1);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1.insert(InstrumentPartySubID_1.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_1(2126347311);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_1);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1.insert(InstrumentPartySubIDType_1.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_1;
      FIX::InstrumentPartyID InstrumentPartyID_1("STRING_827974304");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyID_1.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_1('2');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyIDSource_1.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_1(1649272590);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyRole_1.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_1);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2;
        FIX::InstrumentPartySubID InstrumentPartySubID_2("STRING_1889130191");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_2);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2.insert(InstrumentPartySubID_2.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_2(785978247);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_2);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2.insert(InstrumentPartySubIDType_2.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3;
        FIX::InstrumentPartySubID InstrumentPartySubID_3("STRING_2126955648");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_3);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3.insert(InstrumentPartySubID_3.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_3(136790729);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_3);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3.insert(InstrumentPartySubIDType_3.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4;
        FIX::InstrumentPartySubID InstrumentPartySubID_4("STRING_2029758205");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_4);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4.insert(InstrumentPartySubID_4.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_4(2108489734);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_4);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4.insert(InstrumentPartySubIDType_4.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_0;
      FIX::SecurityAltID SecurityAltID_0("STRING_1838089297");
      noSecurityAltID_0_1_0.set(SecurityAltID_0);
      SecAltIDGrp_NoSecurityAltID_0.insert(SecurityAltID_0.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_0("STRING_797085222");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_0);
      SecAltIDGrp_NoSecurityAltID_0.insert(SecurityAltIDSource_0.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_0);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_1;
      FIX::SecurityAltID SecurityAltID_1("STRING_818217309");
      noSecurityAltID_0_1_1.set(SecurityAltID_1);
      SecAltIDGrp_NoSecurityAltID_1.insert(SecurityAltID_1.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_1("STRING_677697685");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_1);
      SecAltIDGrp_NoSecurityAltID_1.insert(SecurityAltIDSource_1.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_1);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_2;
      FIX::SecurityAltID SecurityAltID_2("STRING_1190831096");
      noSecurityAltID_0_1_2.set(SecurityAltID_2);
      SecAltIDGrp_NoSecurityAltID_2.insert(SecurityAltID_2.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_2("STRING_246706490");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_2);
      SecAltIDGrp_NoSecurityAltID_2.insert(SecurityAltIDSource_2.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_2);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_0;
    FIX::SecurityXML SecurityXML_1("XMLDATA_1201529376");
    noRelatedSym_0_0.set(SecurityXML_1);
    FIX::SecurityXMLLen SecurityXMLLen_0(2090559624);
    noRelatedSym_0_0.set(SecurityXMLLen_0);
    FIX::SecurityXMLSchema SecurityXMLSchema_0("STRING_623104612");
    noRelatedSym_0_0.set(SecurityXMLSchema_0);
    SecurityXML_0.insert(SecurityXMLSchema_0.getString());
    all_values.push_back(SecurityXML_0);
    all_compo_names.insert("SecurityXML");

    msg.addGroup(noRelatedSym_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_0;
    FIX::PartyID PartyID_0("STRING_211408611");
    noPartyIDs_0_0.set(PartyID_0);
    Parties_NoPartyIDs_0.insert(PartyID_0.getString());
    FIX::PartyIDSource PartyIDSource_0('E');
    noPartyIDs_0_0.set(PartyIDSource_0);
    Parties_NoPartyIDs_0.insert(PartyIDSource_0.getString());
    FIX::PartyRole PartyRole_0(56);
    noPartyIDs_0_0.set(PartyRole_0);
    Parties_NoPartyIDs_0.insert(PartyRole_0.getString());
    all_values.push_back(Parties_NoPartyIDs_0);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_0;
      FIX::PartySubID PartySubID_0("STRING_2005438138");
      noPartySubIDs_0_1_0.set(PartySubID_0);
      PtysSubGrp_NoPartySubIDs_0.insert(PartySubID_0.getString());
      FIX::PartySubIDType PartySubIDType_0(23);
      noPartySubIDs_0_1_0.set(PartySubIDType_0);
      PtysSubGrp_NoPartySubIDs_0.insert(PartySubIDType_0.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_0);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_1;
      FIX::PartySubID PartySubID_1("STRING_1340156661");
      noPartySubIDs_0_1_1.set(PartySubID_1);
      PtysSubGrp_NoPartySubIDs_1.insert(PartySubID_1.getString());
      FIX::PartySubIDType PartySubIDType_1(31);
      noPartySubIDs_0_1_1.set(PartySubIDType_1);
      PtysSubGrp_NoPartySubIDs_1.insert(PartySubIDType_1.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_1);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_2;
      FIX::PartySubID PartySubID_2("STRING_105584783");
      noPartySubIDs_0_1_2.set(PartySubID_2);
      PtysSubGrp_NoPartySubIDs_2.insert(PartySubID_2.getString());
      FIX::PartySubIDType PartySubIDType_2(29);
      noPartySubIDs_0_1_2.set(PartySubIDType_2);
      PtysSubGrp_NoPartySubIDs_2.insert(PartySubIDType_2.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_2);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_1;
    FIX::PartyID PartyID_1("STRING_98851014");
    noPartyIDs_0_1.set(PartyID_1);
    Parties_NoPartyIDs_1.insert(PartyID_1.getString());
    FIX::PartyIDSource PartyIDSource_1('4');
    noPartyIDs_0_1.set(PartyIDSource_1);
    Parties_NoPartyIDs_1.insert(PartyIDSource_1.getString());
    FIX::PartyRole PartyRole_1(76);
    noPartyIDs_0_1.set(PartyRole_1);
    Parties_NoPartyIDs_1.insert(PartyRole_1.getString());
    all_values.push_back(Parties_NoPartyIDs_1);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_3;
      FIX::PartySubID PartySubID_3("STRING_121284425");
      noPartySubIDs_1_1_0.set(PartySubID_3);
      PtysSubGrp_NoPartySubIDs_3.insert(PartySubID_3.getString());
      FIX::PartySubIDType PartySubIDType_3(24);
      noPartySubIDs_1_1_0.set(PartySubIDType_3);
      PtysSubGrp_NoPartySubIDs_3.insert(PartySubIDType_3.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_3);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_4;
      FIX::PartySubID PartySubID_4("STRING_1382833419");
      noPartySubIDs_1_1_1.set(PartySubID_4);
      PtysSubGrp_NoPartySubIDs_4.insert(PartySubID_4.getString());
      FIX::PartySubIDType PartySubIDType_4(8);
      noPartySubIDs_1_1_1.set(PartySubIDType_4);
      PtysSubGrp_NoPartySubIDs_4.insert(PartySubIDType_4.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_4);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_5;
      FIX::PartySubID PartySubID_5("STRING_1489062070");
      noPartySubIDs_1_1_2.set(PartySubID_5);
      PtysSubGrp_NoPartySubIDs_5.insert(PartySubID_5.getString());
      FIX::PartySubIDType PartySubIDType_5(9);
      noPartySubIDs_1_1_2.set(PartySubIDType_5);
      PtysSubGrp_NoPartySubIDs_5.insert(PartySubIDType_5.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_5);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_2;
    FIX::PartyID PartyID_2("STRING_705634920");
    noPartyIDs_0_2.set(PartyID_2);
    Parties_NoPartyIDs_2.insert(PartyID_2.getString());
    FIX::PartyIDSource PartyIDSource_2('I');
    noPartyIDs_0_2.set(PartyIDSource_2);
    Parties_NoPartyIDs_2.insert(PartyIDSource_2.getString());
    FIX::PartyRole PartyRole_2(13);
    noPartyIDs_0_2.set(PartyRole_2);
    Parties_NoPartyIDs_2.insert(PartyRole_2.getString());
    all_values.push_back(Parties_NoPartyIDs_2);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_6;
      FIX::PartySubID PartySubID_6("STRING_1857365405");
      noPartySubIDs_2_1_0.set(PartySubID_6);
      PtysSubGrp_NoPartySubIDs_6.insert(PartySubID_6.getString());
      FIX::PartySubIDType PartySubIDType_6(22);
      noPartySubIDs_2_1_0.set(PartySubIDType_6);
      PtysSubGrp_NoPartySubIDs_6.insert(PartySubIDType_6.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_6);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::AdjustedPositionReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_0;
    FIX::LongQty LongQty_0;
    LongQty_0.setString("9114111");
    noPositions_0_0.set(LongQty_0);
    PositionQty_NoPositions_0.insert(LongQty_0.getString());
    FIX::PosQtyStatus PosQtyStatus_0(1);
    noPositions_0_0.set(PosQtyStatus_0);
    PositionQty_NoPositions_0.insert(PosQtyStatus_0.getString());
    FIX::PosType PosType_0("STRING_ASF");
    noPositions_0_0.set(PosType_0);
    PositionQty_NoPositions_0.insert(PosType_0.getString());
    FIX::QuantityDate QuantityDate_0("LOCALMKTDATE_1980840668");
    noPositions_0_0.set(QuantityDate_0);
    PositionQty_NoPositions_0.insert(QuantityDate_0.getString());
    FIX::ShortQty ShortQty_0;
    ShortQty_0.setString("13387567");
    noPositions_0_0.set(ShortQty_0);
    PositionQty_NoPositions_0.insert(ShortQty_0.getString());
    all_values.push_back(PositionQty_NoPositions_0);
    all_compo_names.insert("PositionQty.NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_0;
      FIX::NestedPartyID NestedPartyID_0("STRING_88712119");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyID_0.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_0('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyIDSource_0.getString());
      FIX::NestedPartyRole NestedPartyRole_0(1629711858);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyRole_0.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_0);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_0;
        FIX::NestedPartySubID NestedPartySubID_0("STRING_344715968");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_0);
        NstdPtysSubGrp_NoNestedPartySubIDs_0.insert(NestedPartySubID_0.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_0(900588568);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_0);
        NstdPtysSubGrp_NoNestedPartySubIDs_0.insert(NestedPartySubIDType_0.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_0);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_1;
        FIX::NestedPartySubID NestedPartySubID_1("STRING_1488006848");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_1);
        NstdPtysSubGrp_NoNestedPartySubIDs_1.insert(NestedPartySubID_1.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_1(1663736292);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_1);
        NstdPtysSubGrp_NoNestedPartySubIDs_1.insert(NestedPartySubIDType_1.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_1);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_2;
        FIX::NestedPartySubID NestedPartySubID_2("STRING_999439582");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_2);
        NstdPtysSubGrp_NoNestedPartySubIDs_2.insert(NestedPartySubID_2.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_2(1867644730);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_2);
        NstdPtysSubGrp_NoNestedPartySubIDs_2.insert(NestedPartySubIDType_2.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_2);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_1;
      FIX::NestedPartyID NestedPartyID_1("STRING_337061910");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyID_1.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_1('2');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyIDSource_1.getString());
      FIX::NestedPartyRole NestedPartyRole_1(1988929155);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyRole_1.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_1);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_3;
        FIX::NestedPartySubID NestedPartySubID_3("STRING_1638150772");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_3);
        NstdPtysSubGrp_NoNestedPartySubIDs_3.insert(NestedPartySubID_3.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_3(99520662);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_3);
        NstdPtysSubGrp_NoNestedPartySubIDs_3.insert(NestedPartySubIDType_3.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_3);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_4;
        FIX::NestedPartySubID NestedPartySubID_4("STRING_1285427846");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_4);
        NstdPtysSubGrp_NoNestedPartySubIDs_4.insert(NestedPartySubID_4.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_4(834506630);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_4);
        NstdPtysSubGrp_NoNestedPartySubIDs_4.insert(NestedPartySubIDType_4.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_4);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_5;
        FIX::NestedPartySubID NestedPartySubID_5("STRING_805155582");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_5);
        NstdPtysSubGrp_NoNestedPartySubIDs_5.insert(NestedPartySubID_5.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_5(317611918);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_5);
        NstdPtysSubGrp_NoNestedPartySubIDs_5.insert(NestedPartySubIDType_5.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_5);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
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
