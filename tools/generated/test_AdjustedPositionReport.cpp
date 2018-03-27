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
  FIX::ClearingBusinessDate ClearingBusinessDate_0("LOCALMKTDATE_1242338066");
  msg.set(ClearingBusinessDate_0);
  AdjustedPositionReport_0.insert(ClearingBusinessDate_0.getString());
  FIX::PosMaintRptID PosMaintRptID_0("STRING_1984565449");
  msg.set(PosMaintRptID_0);
  AdjustedPositionReport_0.insert(PosMaintRptID_0.getString());
  FIX::PosMaintRptRefID PosMaintRptRefID_0("STRING_1544782682");
  msg.set(PosMaintRptRefID_0);
  AdjustedPositionReport_0.insert(PosMaintRptRefID_0.getString());
  FIX::PosReqType PosReqType_0(4);
  msg.set(PosReqType_0);
  AdjustedPositionReport_0.insert(PosReqType_0.getString());
  FIX::PriorSettlPrice PriorSettlPrice_0;
  PriorSettlPrice_0.setString("8816145");
  msg.set(PriorSettlPrice_0);
  AdjustedPositionReport_0.insert(PriorSettlPrice_0.getString());
  FIX::SettlPrice SettlPrice_0;
  SettlPrice_0.setString("4953878");
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
    AttachmentPoint_0.setString("23.060000");
    noRelatedSym_0_0.set(AttachmentPoint_0);
    Instrument_0.insert(AttachmentPoint_0.getString());
    FIX::CFICode CFICode_0("STRING_914631110");
    noRelatedSym_0_0.set(CFICode_0);
    Instrument_0.insert(CFICode_0.getString());
    FIX::CPProgram CPProgram_0(1);
    noRelatedSym_0_0.set(CPProgram_0);
    Instrument_0.insert(CPProgram_0.getString());
    FIX::CPRegType CPRegType_0("STRING_834634133");
    noRelatedSym_0_0.set(CPRegType_0);
    Instrument_0.insert(CPRegType_0.getString());
    FIX::CapPrice CapPrice_0;
    CapPrice_0.setString("9298932");
    noRelatedSym_0_0.set(CapPrice_0);
    Instrument_0.insert(CapPrice_0.getString());
    FIX::ContractMultiplier ContractMultiplier_0;
    ContractMultiplier_0.setString("6250423");
    noRelatedSym_0_0.set(ContractMultiplier_0);
    Instrument_0.insert(ContractMultiplier_0.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_0(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_0);
    Instrument_0.insert(ContractMultiplierUnit_0.getString());
    FIX::ContractSettlMonth ContractSettlMonth_0("MONTHYEAR_914698831");
    noRelatedSym_0_0.set(ContractSettlMonth_0);
    Instrument_0.insert(ContractSettlMonth_0.getString());
    FIX::CountryOfIssue CountryOfIssue_0("COUNTRY_1468657782");
    noRelatedSym_0_0.set(CountryOfIssue_0);
    Instrument_0.insert(CountryOfIssue_0.getString());
    FIX::CouponPaymentDate CouponPaymentDate_0("LOCALMKTDATE_1729439935");
    noRelatedSym_0_0.set(CouponPaymentDate_0);
    Instrument_0.insert(CouponPaymentDate_0.getString());
    FIX::CouponRate CouponRate_0;
    CouponRate_0.setString("76.900000");
    noRelatedSym_0_0.set(CouponRate_0);
    Instrument_0.insert(CouponRate_0.getString());
    FIX::CreditRating CreditRating_0("STRING_136038744");
    noRelatedSym_0_0.set(CreditRating_0);
    Instrument_0.insert(CreditRating_0.getString());
    FIX::DatedDate DatedDate_0("LOCALMKTDATE_15485610");
    noRelatedSym_0_0.set(DatedDate_0);
    Instrument_0.insert(DatedDate_0.getString());
    FIX::DetachmentPoint DetachmentPoint_0;
    DetachmentPoint_0.setString("50.230000");
    noRelatedSym_0_0.set(DetachmentPoint_0);
    Instrument_0.insert(DetachmentPoint_0.getString());
    FIX::EncodedIssuer EncodedIssuer_0("DATA_1683678930");
    noRelatedSym_0_0.set(EncodedIssuer_0);
    Instrument_0.insert(EncodedIssuer_0.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_0(1340883644);
    noRelatedSym_0_0.set(EncodedIssuerLen_0);
    Instrument_0.insert(EncodedIssuerLen_0.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_0("DATA_1889257213");
    noRelatedSym_0_0.set(EncodedSecurityDesc_0);
    Instrument_0.insert(EncodedSecurityDesc_0.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_0(1911855640);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_0);
    Instrument_0.insert(EncodedSecurityDescLen_0.getString());
    FIX::ExerciseStyle ExerciseStyle_0(2);
    noRelatedSym_0_0.set(ExerciseStyle_0);
    Instrument_0.insert(ExerciseStyle_0.getString());
    FIX::Factor Factor_0;
    Factor_0.setString("7003566");
    noRelatedSym_0_0.set(Factor_0);
    Instrument_0.insert(Factor_0.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_0(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_0);
    Instrument_0.insert(FlexProductEligibilityIndicator_0.getString());
    FIX::FlexibleIndicator FlexibleIndicator_0(true);
    noRelatedSym_0_0.set(FlexibleIndicator_0);
    Instrument_0.insert(FlexibleIndicator_0.getString());
    FIX::FloorPrice FloorPrice_0;
    FloorPrice_0.setString("8890454");
    noRelatedSym_0_0.set(FloorPrice_0);
    Instrument_0.insert(FloorPrice_0.getString());
    FIX::FlowScheduleType FlowScheduleType_0(1);
    noRelatedSym_0_0.set(FlowScheduleType_0);
    Instrument_0.insert(FlowScheduleType_0.getString());
    FIX::InstrRegistry InstrRegistry_0("STRING_466723619");
    noRelatedSym_0_0.set(InstrRegistry_0);
    Instrument_0.insert(InstrRegistry_0.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_0('2');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_0);
    Instrument_0.insert(InstrmtAssignmentMethod_0.getString());
    FIX::InterestAccrualDate InterestAccrualDate_0("LOCALMKTDATE_213399293");
    noRelatedSym_0_0.set(InterestAccrualDate_0);
    Instrument_0.insert(InterestAccrualDate_0.getString());
    FIX::IssueDate IssueDate_0("LOCALMKTDATE_1348338136");
    noRelatedSym_0_0.set(IssueDate_0);
    Instrument_0.insert(IssueDate_0.getString());
    FIX::Issuer Issuer_0("STRING_781732354");
    noRelatedSym_0_0.set(Issuer_0);
    Instrument_0.insert(Issuer_0.getString());
    FIX::ListMethod ListMethod_0(1);
    noRelatedSym_0_0.set(ListMethod_0);
    Instrument_0.insert(ListMethod_0.getString());
    FIX::LocaleOfIssue LocaleOfIssue_0("STRING_1363219586");
    noRelatedSym_0_0.set(LocaleOfIssue_0);
    Instrument_0.insert(LocaleOfIssue_0.getString());
    FIX::MaturityDate MaturityDate_0("LOCALMKTDATE_1921274661");
    noRelatedSym_0_0.set(MaturityDate_0);
    Instrument_0.insert(MaturityDate_0.getString());
    FIX::MaturityMonthYear MaturityMonthYear_0("MONTHYEAR_1450424021");
    noRelatedSym_0_0.set(MaturityMonthYear_0);
    Instrument_0.insert(MaturityMonthYear_0.getString());
    FIX::MaturityTime MaturityTime_0("TZTIMEONLY_519991686");
    noRelatedSym_0_0.set(MaturityTime_0);
    Instrument_0.insert(MaturityTime_0.getString());
    FIX::MinPriceIncrement MinPriceIncrement_0;
    MinPriceIncrement_0.setString("6084251");
    noRelatedSym_0_0.set(MinPriceIncrement_0);
    Instrument_0.insert(MinPriceIncrement_0.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_0;
    MinPriceIncrementAmount_0.setString("2328335");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_0);
    Instrument_0.insert(MinPriceIncrementAmount_0.getString());
    FIX::NTPositionLimit NTPositionLimit_0(1145033992);
    noRelatedSym_0_0.set(NTPositionLimit_0);
    Instrument_0.insert(NTPositionLimit_0.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_0;
    NotionalPercentageOutstanding_0.setString("60.650000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_0);
    Instrument_0.insert(NotionalPercentageOutstanding_0.getString());
    FIX::OptAttribute OptAttribute_0('1');
    noRelatedSym_0_0.set(OptAttribute_0);
    Instrument_0.insert(OptAttribute_0.getString());
    FIX::OptPayoutAmount OptPayoutAmount_0;
    OptPayoutAmount_0.setString("4662081");
    noRelatedSym_0_0.set(OptPayoutAmount_0);
    Instrument_0.insert(OptPayoutAmount_0.getString());
    FIX::OptPayoutType OptPayoutType_0(3);
    noRelatedSym_0_0.set(OptPayoutType_0);
    Instrument_0.insert(OptPayoutType_0.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_0;
    OriginalNotionalPercentageOutstanding_0.setString("64.470000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_0);
    Instrument_0.insert(OriginalNotionalPercentageOutstanding_0.getString());
    FIX::Pool Pool_0("STRING_602246870");
    noRelatedSym_0_0.set(Pool_0);
    Instrument_0.insert(Pool_0.getString());
    FIX::PositionLimit PositionLimit_0(465477962);
    noRelatedSym_0_0.set(PositionLimit_0);
    Instrument_0.insert(PositionLimit_0.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_0("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_0);
    Instrument_0.insert(PriceQuoteMethod_0.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_0("STRING_138442153");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_0);
    Instrument_0.insert(PriceUnitOfMeasure_0.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_0;
    PriceUnitOfMeasureQty_0.setString("18063616");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_0);
    Instrument_0.insert(PriceUnitOfMeasureQty_0.getString());
    FIX::Product Product_0(12);
    noRelatedSym_0_0.set(Product_0);
    Instrument_0.insert(Product_0.getString());
    FIX::ProductComplex ProductComplex_0("STRING_2050297793");
    noRelatedSym_0_0.set(ProductComplex_0);
    Instrument_0.insert(ProductComplex_0.getString());
    FIX::PutOrCall PutOrCall_0(0);
    noRelatedSym_0_0.set(PutOrCall_0);
    Instrument_0.insert(PutOrCall_0.getString());
    FIX::RedemptionDate RedemptionDate_0("LOCALMKTDATE_399417989");
    noRelatedSym_0_0.set(RedemptionDate_0);
    Instrument_0.insert(RedemptionDate_0.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_0("STRING_648156025");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_0);
    Instrument_0.insert(RepoCollateralSecurityType_0.getString());
    FIX::RepurchaseRate RepurchaseRate_0;
    RepurchaseRate_0.setString("10.500000");
    noRelatedSym_0_0.set(RepurchaseRate_0);
    Instrument_0.insert(RepurchaseRate_0.getString());
    FIX::RepurchaseTerm RepurchaseTerm_0(1288463463);
    noRelatedSym_0_0.set(RepurchaseTerm_0);
    Instrument_0.insert(RepurchaseTerm_0.getString());
    FIX::RestructuringType RestructuringType_0("STRING_FR");
    noRelatedSym_0_0.set(RestructuringType_0);
    Instrument_0.insert(RestructuringType_0.getString());
    FIX::SecurityDesc SecurityDesc_0("STRING_1677034670");
    noRelatedSym_0_0.set(SecurityDesc_0);
    Instrument_0.insert(SecurityDesc_0.getString());
    FIX::SecurityExchange SecurityExchange_0("EXCHANGE_1574807971");
    noRelatedSym_0_0.set(SecurityExchange_0);
    Instrument_0.insert(SecurityExchange_0.getString());
    FIX::SecurityGroup SecurityGroup_0("STRING_701751617");
    noRelatedSym_0_0.set(SecurityGroup_0);
    Instrument_0.insert(SecurityGroup_0.getString());
    FIX::SecurityID SecurityID_0("STRING_877889158");
    noRelatedSym_0_0.set(SecurityID_0);
    Instrument_0.insert(SecurityID_0.getString());
    FIX::SecurityIDSource SecurityIDSource_0("STRING_6");
    noRelatedSym_0_0.set(SecurityIDSource_0);
    Instrument_0.insert(SecurityIDSource_0.getString());
    FIX::SecurityStatus SecurityStatus_0("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_0);
    Instrument_0.insert(SecurityStatus_0.getString());
    FIX::SecuritySubType SecuritySubType_0("STRING_93625096");
    noRelatedSym_0_0.set(SecuritySubType_0);
    Instrument_0.insert(SecuritySubType_0.getString());
    FIX::SecurityType SecurityType_0("STRING_BRIDGE");
    noRelatedSym_0_0.set(SecurityType_0);
    Instrument_0.insert(SecurityType_0.getString());
    FIX::Seniority Seniority_0("STRING_SD");
    noRelatedSym_0_0.set(Seniority_0);
    Instrument_0.insert(Seniority_0.getString());
    FIX::SettlMethod SettlMethod_0('P');
    noRelatedSym_0_0.set(SettlMethod_0);
    Instrument_0.insert(SettlMethod_0.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_0("STRING_591272837");
    noRelatedSym_0_0.set(SettleOnOpenFlag_0);
    Instrument_0.insert(SettleOnOpenFlag_0.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_0("STRING_773318476");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_0);
    Instrument_0.insert(StateOrProvinceOfIssue_0.getString());
    FIX::StrikeCurrency StrikeCurrency_0("GBP");
    noRelatedSym_0_0.set(StrikeCurrency_0);
    Instrument_0.insert(StrikeCurrency_0.getString());
    FIX::StrikeMultiplier StrikeMultiplier_0;
    StrikeMultiplier_0.setString("19208508");
    noRelatedSym_0_0.set(StrikeMultiplier_0);
    Instrument_0.insert(StrikeMultiplier_0.getString());
    FIX::StrikePrice StrikePrice_0;
    StrikePrice_0.setString("773752");
    noRelatedSym_0_0.set(StrikePrice_0);
    Instrument_0.insert(StrikePrice_0.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_0(1);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_0);
    Instrument_0.insert(StrikePriceBoundaryMethod_0.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_0;
    StrikePriceBoundaryPrecision_0.setString("36.800000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_0);
    Instrument_0.insert(StrikePriceBoundaryPrecision_0.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_0(4);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_0);
    Instrument_0.insert(StrikePriceDeterminationMethod_0.getString());
    FIX::StrikeValue StrikeValue_0;
    StrikeValue_0.setString("2272955");
    noRelatedSym_0_0.set(StrikeValue_0);
    Instrument_0.insert(StrikeValue_0.getString());
    FIX::Symbol Symbol_0("STRING_317131503");
    noRelatedSym_0_0.set(Symbol_0);
    Instrument_0.insert(Symbol_0.getString());
    FIX::SymbolSfx SymbolSfx_0("STRING_CD");
    noRelatedSym_0_0.set(SymbolSfx_0);
    Instrument_0.insert(SymbolSfx_0.getString());
    FIX::TimeUnit TimeUnit_0("STRING_Mo");
    noRelatedSym_0_0.set(TimeUnit_0);
    Instrument_0.insert(TimeUnit_0.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_0(1);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_0);
    Instrument_0.insert(UnderlyingPriceDeterminationMethod_0.getString());
    FIX::UnitOfMeasure UnitOfMeasure_0("STRING_Bbl");
    noRelatedSym_0_0.set(UnitOfMeasure_0);
    Instrument_0.insert(UnitOfMeasure_0.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_0;
    UnitOfMeasureQty_0.setString("4668427");
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
      ComplexEventPrice_0.setString("17040743");
      noComplexEvents_0_1_0.set(ComplexEventPrice_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPrice_0.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_0(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceBoundaryMethod_0.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_0;
      ComplexEventPriceBoundaryPrecision_0.setString("48.320000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceBoundaryPrecision_0.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_0(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventPriceTimeType_0.getString());
      FIX::ComplexEventType ComplexEventType_0(7);
      noComplexEvents_0_1_0.set(ComplexEventType_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexEventType_0.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_0;
      ComplexOptPayoutAmount_0.setString("20845939");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_0);
      ComplexEvents_NoComplexEvents_0.insert(ComplexOptPayoutAmount_0.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_0);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_0;
        FIX::ComplexEventEndDate ComplexEventEndDate_0(FIX::UTCTIMESTAMP(7, 35, 3, 10, 52001));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_0);
        ComplexEventDates_NoComplexEventDates_0.insert(ComplexEventEndDate_0.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_0(FIX::UTCTIMESTAMP(22, 32, 22, 5, 22003));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_0);
        ComplexEventDates_NoComplexEventDates_0.insert(ComplexEventStartDate_0.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_0);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_0;
          FIX::ComplexEventEndTime ComplexEventEndTime_0(FIX::UTCTIMEONLY(10, 51, 48));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_0);
          ComplexEventTimes_NoComplexEventTimes_0.insert(ComplexEventEndTime_0.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_0(FIX::UTCTIMEONLY(7, 49, 23));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_0);
          ComplexEventTimes_NoComplexEventTimes_0.insert(ComplexEventStartTime_0.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_0);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_1;
          FIX::ComplexEventEndTime ComplexEventEndTime_1(FIX::UTCTIMEONLY(21, 27, 58));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_1);
          ComplexEventTimes_NoComplexEventTimes_1.insert(ComplexEventEndTime_1.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_1(FIX::UTCTIMEONLY(0, 0, 29));
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
      FIX::ComplexEventCondition ComplexEventCondition_1(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventCondition_1.getString());
      FIX::ComplexEventPrice ComplexEventPrice_1;
      ComplexEventPrice_1.setString("1252677");
      noComplexEvents_0_1_1.set(ComplexEventPrice_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPrice_1.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_1(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceBoundaryMethod_1.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_1;
      ComplexEventPriceBoundaryPrecision_1.setString("42.330000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceBoundaryPrecision_1.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_1(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventPriceTimeType_1.getString());
      FIX::ComplexEventType ComplexEventType_1(2);
      noComplexEvents_0_1_1.set(ComplexEventType_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexEventType_1.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_1;
      ComplexOptPayoutAmount_1.setString("1065195");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_1);
      ComplexEvents_NoComplexEvents_1.insert(ComplexOptPayoutAmount_1.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_1);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_1;
        FIX::ComplexEventEndDate ComplexEventEndDate_1(FIX::UTCTIMESTAMP(9, 12, 32, 6, 32009));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_1);
        ComplexEventDates_NoComplexEventDates_1.insert(ComplexEventEndDate_1.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_1(FIX::UTCTIMESTAMP(12, 58, 7, 4, 102000));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_1);
        ComplexEventDates_NoComplexEventDates_1.insert(ComplexEventStartDate_1.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_1);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_2;
          FIX::ComplexEventEndTime ComplexEventEndTime_2(FIX::UTCTIMEONLY(2, 22, 12));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_2);
          ComplexEventTimes_NoComplexEventTimes_2.insert(ComplexEventEndTime_2.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_2(FIX::UTCTIMEONLY(14, 13, 51));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_2);
          ComplexEventTimes_NoComplexEventTimes_2.insert(ComplexEventStartTime_2.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_2);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_2;
        FIX::ComplexEventEndDate ComplexEventEndDate_2(FIX::UTCTIMESTAMP(8, 47, 17, 2, 42005));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_2);
        ComplexEventDates_NoComplexEventDates_2.insert(ComplexEventEndDate_2.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_2(FIX::UTCTIMESTAMP(22, 30, 21, 10, 92005));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_2);
        ComplexEventDates_NoComplexEventDates_2.insert(ComplexEventStartDate_2.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_2);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_3;
          FIX::ComplexEventEndTime ComplexEventEndTime_3(FIX::UTCTIMEONLY(3, 15, 50));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_3);
          ComplexEventTimes_NoComplexEventTimes_3.insert(ComplexEventEndTime_3.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_3(FIX::UTCTIMEONLY(0, 30, 50));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_3);
          ComplexEventTimes_NoComplexEventTimes_3.insert(ComplexEventStartTime_3.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_3);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_4;
          FIX::ComplexEventEndTime ComplexEventEndTime_4(FIX::UTCTIMEONLY(8, 5, 55));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_4);
          ComplexEventTimes_NoComplexEventTimes_4.insert(ComplexEventEndTime_4.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_4(FIX::UTCTIMEONLY(7, 0, 18));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_4);
          ComplexEventTimes_NoComplexEventTimes_4.insert(ComplexEventStartTime_4.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_4);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_3;
        FIX::ComplexEventEndDate ComplexEventEndDate_3(FIX::UTCTIMESTAMP(8, 58, 20, 6, 62012));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_3);
        ComplexEventDates_NoComplexEventDates_3.insert(ComplexEventEndDate_3.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_3(FIX::UTCTIMESTAMP(15, 24, 28, 17, 102001));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_3);
        ComplexEventDates_NoComplexEventDates_3.insert(ComplexEventStartDate_3.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_3);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_5;
          FIX::ComplexEventEndTime ComplexEventEndTime_5(FIX::UTCTIMEONLY(22, 45, 30));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_5);
          ComplexEventTimes_NoComplexEventTimes_5.insert(ComplexEventEndTime_5.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_5(FIX::UTCTIMEONLY(21, 0, 23));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_5);
          ComplexEventTimes_NoComplexEventTimes_5.insert(ComplexEventStartTime_5.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_5);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
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
      ComplexEventPrice_2.setString("19738805");
      noComplexEvents_0_1_2.set(ComplexEventPrice_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPrice_2.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_2(4);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceBoundaryMethod_2.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_2;
      ComplexEventPriceBoundaryPrecision_2.setString("49.390000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceBoundaryPrecision_2.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_2(2);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventPriceTimeType_2.getString());
      FIX::ComplexEventType ComplexEventType_2(5);
      noComplexEvents_0_1_2.set(ComplexEventType_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexEventType_2.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_2;
      ComplexOptPayoutAmount_2.setString("17592656");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_2);
      ComplexEvents_NoComplexEvents_2.insert(ComplexOptPayoutAmount_2.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_2);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_4;
        FIX::ComplexEventEndDate ComplexEventEndDate_4(FIX::UTCTIMESTAMP(11, 16, 52, 6, 112002));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_4);
        ComplexEventDates_NoComplexEventDates_4.insert(ComplexEventEndDate_4.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_4(FIX::UTCTIMESTAMP(17, 2, 33, 27, 42004));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_4);
        ComplexEventDates_NoComplexEventDates_4.insert(ComplexEventStartDate_4.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_4);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_6;
          FIX::ComplexEventEndTime ComplexEventEndTime_6(FIX::UTCTIMEONLY(14, 51, 53));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_6);
          ComplexEventTimes_NoComplexEventTimes_6.insert(ComplexEventEndTime_6.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_6(FIX::UTCTIMEONLY(4, 54, 38));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_6);
          ComplexEventTimes_NoComplexEventTimes_6.insert(ComplexEventStartTime_6.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_6);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_7;
          FIX::ComplexEventEndTime ComplexEventEndTime_7(FIX::UTCTIMEONLY(7, 7, 59));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_7);
          ComplexEventTimes_NoComplexEventTimes_7.insert(ComplexEventEndTime_7.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_7(FIX::UTCTIMEONLY(11, 50, 9));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_7);
          ComplexEventTimes_NoComplexEventTimes_7.insert(ComplexEventStartTime_7.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_7);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_8;
          FIX::ComplexEventEndTime ComplexEventEndTime_8(FIX::UTCTIMEONLY(18, 26, 58));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_8);
          ComplexEventTimes_NoComplexEventTimes_8.insert(ComplexEventEndTime_8.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_8(FIX::UTCTIMEONLY(16, 28, 25));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_8);
          ComplexEventTimes_NoComplexEventTimes_8.insert(ComplexEventStartTime_8.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_8);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_5;
        FIX::ComplexEventEndDate ComplexEventEndDate_5(FIX::UTCTIMESTAMP(11, 58, 56, 22, 32000));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_5);
        ComplexEventDates_NoComplexEventDates_5.insert(ComplexEventEndDate_5.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_5(FIX::UTCTIMESTAMP(8, 37, 23, 11, 62003));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_5);
        ComplexEventDates_NoComplexEventDates_5.insert(ComplexEventStartDate_5.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_5);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_9;
          FIX::ComplexEventEndTime ComplexEventEndTime_9(FIX::UTCTIMEONLY(4, 36, 33));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_9);
          ComplexEventTimes_NoComplexEventTimes_9.insert(ComplexEventEndTime_9.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_9(FIX::UTCTIMEONLY(11, 24, 45));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_9);
          ComplexEventTimes_NoComplexEventTimes_9.insert(ComplexEventStartTime_9.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_9);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_10;
          FIX::ComplexEventEndTime ComplexEventEndTime_10(FIX::UTCTIMEONLY(18, 3, 0));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventEndTime_10);
          ComplexEventTimes_NoComplexEventTimes_10.insert(ComplexEventEndTime_10.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_10(FIX::UTCTIMEONLY(19, 29, 7));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventStartTime_10);
          ComplexEventTimes_NoComplexEventTimes_10.insert(ComplexEventStartTime_10.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_10);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_6;
        FIX::ComplexEventEndDate ComplexEventEndDate_6(FIX::UTCTIMESTAMP(4, 5, 5, 10, 122011));
        noComplexEventDates_0_2_2_2.set(ComplexEventEndDate_6);
        ComplexEventDates_NoComplexEventDates_6.insert(ComplexEventEndDate_6.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_6(FIX::UTCTIMESTAMP(7, 36, 0, 22, 102009));
        noComplexEventDates_0_2_2_2.set(ComplexEventStartDate_6);
        ComplexEventDates_NoComplexEventDates_6.insert(ComplexEventStartDate_6.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_6);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_11;
          FIX::ComplexEventEndTime ComplexEventEndTime_11(FIX::UTCTIMEONLY(6, 48, 25));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventEndTime_11);
          ComplexEventTimes_NoComplexEventTimes_11.insert(ComplexEventEndTime_11.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_11(FIX::UTCTIMEONLY(3, 41, 58));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventStartTime_11);
          ComplexEventTimes_NoComplexEventTimes_11.insert(ComplexEventStartTime_11.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_11);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_12;
          FIX::ComplexEventEndTime ComplexEventEndTime_12(FIX::UTCTIMEONLY(23, 1, 2));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventEndTime_12);
          ComplexEventTimes_NoComplexEventTimes_12.insert(ComplexEventEndTime_12.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_12(FIX::UTCTIMEONLY(0, 31, 52));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventStartTime_12);
          ComplexEventTimes_NoComplexEventTimes_12.insert(ComplexEventStartTime_12.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_12);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_13;
          FIX::ComplexEventEndTime ComplexEventEndTime_13(FIX::UTCTIMEONLY(23, 49, 54));
          noComplexEventTimes_0_2_2_3_2.set(ComplexEventEndTime_13);
          ComplexEventTimes_NoComplexEventTimes_13.insert(ComplexEventEndTime_13.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_13(FIX::UTCTIMEONLY(12, 53, 50));
          noComplexEventTimes_0_2_2_3_2.set(ComplexEventStartTime_13);
          ComplexEventTimes_NoComplexEventTimes_13.insert(ComplexEventStartTime_13.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_13);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_0;
      FIX::EventDate EventDate_0("LOCALMKTDATE_1289190081");
      noEvents_0_1_0.set(EventDate_0);
      EvntGrp_NoEvents_0.insert(EventDate_0.getString());
      FIX::EventPx EventPx_0;
      EventPx_0.setString("2597269");
      noEvents_0_1_0.set(EventPx_0);
      EvntGrp_NoEvents_0.insert(EventPx_0.getString());
      FIX::EventText EventText_0("STRING_1084286277");
      noEvents_0_1_0.set(EventText_0);
      EvntGrp_NoEvents_0.insert(EventText_0.getString());
      FIX::EventTime EventTime_0(FIX::UTCTIMESTAMP(19, 0, 14, 1, 12007));
      noEvents_0_1_0.set(EventTime_0);
      EvntGrp_NoEvents_0.insert(EventTime_0.getString());
      FIX::EventType EventType_0(12);
      noEvents_0_1_0.set(EventType_0);
      EvntGrp_NoEvents_0.insert(EventType_0.getString());
      all_values.push_back(EvntGrp_NoEvents_0);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_1;
      FIX::EventDate EventDate_1("LOCALMKTDATE_2113488520");
      noEvents_0_1_1.set(EventDate_1);
      EvntGrp_NoEvents_1.insert(EventDate_1.getString());
      FIX::EventPx EventPx_1;
      EventPx_1.setString("10714780");
      noEvents_0_1_1.set(EventPx_1);
      EvntGrp_NoEvents_1.insert(EventPx_1.getString());
      FIX::EventText EventText_1("STRING_1462459489");
      noEvents_0_1_1.set(EventText_1);
      EvntGrp_NoEvents_1.insert(EventText_1.getString());
      FIX::EventTime EventTime_1(FIX::UTCTIMESTAMP(3, 43, 35, 12, 122004));
      noEvents_0_1_1.set(EventTime_1);
      EvntGrp_NoEvents_1.insert(EventTime_1.getString());
      FIX::EventType EventType_1(13);
      noEvents_0_1_1.set(EventType_1);
      EvntGrp_NoEvents_1.insert(EventType_1.getString());
      all_values.push_back(EvntGrp_NoEvents_1);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_2;
      FIX::EventDate EventDate_2("LOCALMKTDATE_1344464180");
      noEvents_0_1_2.set(EventDate_2);
      EvntGrp_NoEvents_2.insert(EventDate_2.getString());
      FIX::EventPx EventPx_2;
      EventPx_2.setString("20889892");
      noEvents_0_1_2.set(EventPx_2);
      EvntGrp_NoEvents_2.insert(EventPx_2.getString());
      FIX::EventText EventText_2("STRING_1391364941");
      noEvents_0_1_2.set(EventText_2);
      EvntGrp_NoEvents_2.insert(EventText_2.getString());
      FIX::EventTime EventTime_2(FIX::UTCTIMESTAMP(11, 21, 59, 13, 92000));
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
      FIX::InstrumentPartyID InstrumentPartyID_0("STRING_414000695");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyID_0.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_0('2');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyIDSource_0.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_0(168391773);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_0);
      InstrumentParties_NoInstrumentParties_0.insert(InstrumentPartyRole_0.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_0);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0;
        FIX::InstrumentPartySubID InstrumentPartySubID_0("STRING_2058482840");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_0);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0.insert(InstrumentPartySubID_0.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_0(1755786442);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_0);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0.insert(InstrumentPartySubIDType_0.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1;
        FIX::InstrumentPartySubID InstrumentPartySubID_1("STRING_309522312");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_1);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1.insert(InstrumentPartySubID_1.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_1(558927663);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_1);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1.insert(InstrumentPartySubIDType_1.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_1;
      FIX::InstrumentPartyID InstrumentPartyID_1("STRING_1721791314");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyID_1.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_1('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyIDSource_1.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_1(2021387152);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_1);
      InstrumentParties_NoInstrumentParties_1.insert(InstrumentPartyRole_1.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_1);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2;
        FIX::InstrumentPartySubID InstrumentPartySubID_2("STRING_1731436479");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_2);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2.insert(InstrumentPartySubID_2.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_2(1098663927);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_2);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2.insert(InstrumentPartySubIDType_2.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3;
        FIX::InstrumentPartySubID InstrumentPartySubID_3("STRING_1747988335");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_3);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3.insert(InstrumentPartySubID_3.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_3(2025657159);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_3);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3.insert(InstrumentPartySubIDType_3.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_2;
      FIX::InstrumentPartyID InstrumentPartyID_2("STRING_1232766951");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_2);
      InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyID_2.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_2('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_2);
      InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyIDSource_2.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_2(1030876463);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_2);
      InstrumentParties_NoInstrumentParties_2.insert(InstrumentPartyRole_2.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_2);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4;
        FIX::InstrumentPartySubID InstrumentPartySubID_4("STRING_75898259");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_4);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4.insert(InstrumentPartySubID_4.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_4(274757756);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_4);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4.insert(InstrumentPartySubIDType_4.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_0;
      FIX::SecurityAltID SecurityAltID_0("STRING_1467571414");
      noSecurityAltID_0_1_0.set(SecurityAltID_0);
      SecAltIDGrp_NoSecurityAltID_0.insert(SecurityAltID_0.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_0("STRING_531346037");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_0);
      SecAltIDGrp_NoSecurityAltID_0.insert(SecurityAltIDSource_0.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_0);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_1;
      FIX::SecurityAltID SecurityAltID_1("STRING_1565837289");
      noSecurityAltID_0_1_1.set(SecurityAltID_1);
      SecAltIDGrp_NoSecurityAltID_1.insert(SecurityAltID_1.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_1("STRING_1427881551");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_1);
      SecAltIDGrp_NoSecurityAltID_1.insert(SecurityAltIDSource_1.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_1);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_0;
    FIX::SecurityXML SecurityXML_1("XMLDATA_1514208121");
    noRelatedSym_0_0.set(SecurityXML_1);
    FIX::SecurityXMLLen SecurityXMLLen_0(80700434);
    noRelatedSym_0_0.set(SecurityXMLLen_0);
    FIX::SecurityXMLSchema SecurityXMLSchema_0("STRING_1647918650");
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
    AttachmentPoint_1.setString("28.340000");
    noRelatedSym_0_1.set(AttachmentPoint_1);
    Instrument_1.insert(AttachmentPoint_1.getString());
    FIX::CFICode CFICode_1("STRING_494701129");
    noRelatedSym_0_1.set(CFICode_1);
    Instrument_1.insert(CFICode_1.getString());
    FIX::CPProgram CPProgram_1(99);
    noRelatedSym_0_1.set(CPProgram_1);
    Instrument_1.insert(CPProgram_1.getString());
    FIX::CPRegType CPRegType_1("STRING_1602264607");
    noRelatedSym_0_1.set(CPRegType_1);
    Instrument_1.insert(CPRegType_1.getString());
    FIX::CapPrice CapPrice_1;
    CapPrice_1.setString("631866");
    noRelatedSym_0_1.set(CapPrice_1);
    Instrument_1.insert(CapPrice_1.getString());
    FIX::ContractMultiplier ContractMultiplier_1;
    ContractMultiplier_1.setString("17806773");
    noRelatedSym_0_1.set(ContractMultiplier_1);
    Instrument_1.insert(ContractMultiplier_1.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_1(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_1);
    Instrument_1.insert(ContractMultiplierUnit_1.getString());
    FIX::ContractSettlMonth ContractSettlMonth_1("MONTHYEAR_372709002");
    noRelatedSym_0_1.set(ContractSettlMonth_1);
    Instrument_1.insert(ContractSettlMonth_1.getString());
    FIX::CountryOfIssue CountryOfIssue_1("COUNTRY_192121359");
    noRelatedSym_0_1.set(CountryOfIssue_1);
    Instrument_1.insert(CountryOfIssue_1.getString());
    FIX::CouponPaymentDate CouponPaymentDate_1("LOCALMKTDATE_784875067");
    noRelatedSym_0_1.set(CouponPaymentDate_1);
    Instrument_1.insert(CouponPaymentDate_1.getString());
    FIX::CouponRate CouponRate_1;
    CouponRate_1.setString("94.060000");
    noRelatedSym_0_1.set(CouponRate_1);
    Instrument_1.insert(CouponRate_1.getString());
    FIX::CreditRating CreditRating_1("STRING_66024864");
    noRelatedSym_0_1.set(CreditRating_1);
    Instrument_1.insert(CreditRating_1.getString());
    FIX::DatedDate DatedDate_1("LOCALMKTDATE_1026194067");
    noRelatedSym_0_1.set(DatedDate_1);
    Instrument_1.insert(DatedDate_1.getString());
    FIX::DetachmentPoint DetachmentPoint_1;
    DetachmentPoint_1.setString("22.370000");
    noRelatedSym_0_1.set(DetachmentPoint_1);
    Instrument_1.insert(DetachmentPoint_1.getString());
    FIX::EncodedIssuer EncodedIssuer_1("DATA_1164688791");
    noRelatedSym_0_1.set(EncodedIssuer_1);
    Instrument_1.insert(EncodedIssuer_1.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_1(626698754);
    noRelatedSym_0_1.set(EncodedIssuerLen_1);
    Instrument_1.insert(EncodedIssuerLen_1.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_1("DATA_1215835748");
    noRelatedSym_0_1.set(EncodedSecurityDesc_1);
    Instrument_1.insert(EncodedSecurityDesc_1.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_1(249972094);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_1);
    Instrument_1.insert(EncodedSecurityDescLen_1.getString());
    FIX::ExerciseStyle ExerciseStyle_1(2);
    noRelatedSym_0_1.set(ExerciseStyle_1);
    Instrument_1.insert(ExerciseStyle_1.getString());
    FIX::Factor Factor_1;
    Factor_1.setString("992285");
    noRelatedSym_0_1.set(Factor_1);
    Instrument_1.insert(Factor_1.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_1(true);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_1);
    Instrument_1.insert(FlexProductEligibilityIndicator_1.getString());
    FIX::FlexibleIndicator FlexibleIndicator_1(true);
    noRelatedSym_0_1.set(FlexibleIndicator_1);
    Instrument_1.insert(FlexibleIndicator_1.getString());
    FIX::FloorPrice FloorPrice_1;
    FloorPrice_1.setString("3739863");
    noRelatedSym_0_1.set(FloorPrice_1);
    Instrument_1.insert(FloorPrice_1.getString());
    FIX::FlowScheduleType FlowScheduleType_1(3);
    noRelatedSym_0_1.set(FlowScheduleType_1);
    Instrument_1.insert(FlowScheduleType_1.getString());
    FIX::InstrRegistry InstrRegistry_1("STRING_157077444");
    noRelatedSym_0_1.set(InstrRegistry_1);
    Instrument_1.insert(InstrRegistry_1.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_1('9');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_1);
    Instrument_1.insert(InstrmtAssignmentMethod_1.getString());
    FIX::InterestAccrualDate InterestAccrualDate_1("LOCALMKTDATE_143270149");
    noRelatedSym_0_1.set(InterestAccrualDate_1);
    Instrument_1.insert(InterestAccrualDate_1.getString());
    FIX::IssueDate IssueDate_1("LOCALMKTDATE_1584958995");
    noRelatedSym_0_1.set(IssueDate_1);
    Instrument_1.insert(IssueDate_1.getString());
    FIX::Issuer Issuer_1("STRING_272056829");
    noRelatedSym_0_1.set(Issuer_1);
    Instrument_1.insert(Issuer_1.getString());
    FIX::ListMethod ListMethod_1(1);
    noRelatedSym_0_1.set(ListMethod_1);
    Instrument_1.insert(ListMethod_1.getString());
    FIX::LocaleOfIssue LocaleOfIssue_1("STRING_1085393997");
    noRelatedSym_0_1.set(LocaleOfIssue_1);
    Instrument_1.insert(LocaleOfIssue_1.getString());
    FIX::MaturityDate MaturityDate_1("LOCALMKTDATE_1705929663");
    noRelatedSym_0_1.set(MaturityDate_1);
    Instrument_1.insert(MaturityDate_1.getString());
    FIX::MaturityMonthYear MaturityMonthYear_1("MONTHYEAR_718671712");
    noRelatedSym_0_1.set(MaturityMonthYear_1);
    Instrument_1.insert(MaturityMonthYear_1.getString());
    FIX::MaturityTime MaturityTime_1("TZTIMEONLY_807588502");
    noRelatedSym_0_1.set(MaturityTime_1);
    Instrument_1.insert(MaturityTime_1.getString());
    FIX::MinPriceIncrement MinPriceIncrement_1;
    MinPriceIncrement_1.setString("11607106");
    noRelatedSym_0_1.set(MinPriceIncrement_1);
    Instrument_1.insert(MinPriceIncrement_1.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_1;
    MinPriceIncrementAmount_1.setString("7818584");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_1);
    Instrument_1.insert(MinPriceIncrementAmount_1.getString());
    FIX::NTPositionLimit NTPositionLimit_1(440782198);
    noRelatedSym_0_1.set(NTPositionLimit_1);
    Instrument_1.insert(NTPositionLimit_1.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_1;
    NotionalPercentageOutstanding_1.setString("43.760000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_1);
    Instrument_1.insert(NotionalPercentageOutstanding_1.getString());
    FIX::OptAttribute OptAttribute_1('1');
    noRelatedSym_0_1.set(OptAttribute_1);
    Instrument_1.insert(OptAttribute_1.getString());
    FIX::OptPayoutAmount OptPayoutAmount_1;
    OptPayoutAmount_1.setString("6329035");
    noRelatedSym_0_1.set(OptPayoutAmount_1);
    Instrument_1.insert(OptPayoutAmount_1.getString());
    FIX::OptPayoutType OptPayoutType_1(3);
    noRelatedSym_0_1.set(OptPayoutType_1);
    Instrument_1.insert(OptPayoutType_1.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_1;
    OriginalNotionalPercentageOutstanding_1.setString("31.620000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_1);
    Instrument_1.insert(OriginalNotionalPercentageOutstanding_1.getString());
    FIX::Pool Pool_1("STRING_698928422");
    noRelatedSym_0_1.set(Pool_1);
    Instrument_1.insert(Pool_1.getString());
    FIX::PositionLimit PositionLimit_1(2034863510);
    noRelatedSym_0_1.set(PositionLimit_1);
    Instrument_1.insert(PositionLimit_1.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_1("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_1);
    Instrument_1.insert(PriceQuoteMethod_1.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_1("STRING_1863617213");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_1);
    Instrument_1.insert(PriceUnitOfMeasure_1.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_1;
    PriceUnitOfMeasureQty_1.setString("5140786");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_1);
    Instrument_1.insert(PriceUnitOfMeasureQty_1.getString());
    FIX::Product Product_1(1);
    noRelatedSym_0_1.set(Product_1);
    Instrument_1.insert(Product_1.getString());
    FIX::ProductComplex ProductComplex_1("STRING_2113589308");
    noRelatedSym_0_1.set(ProductComplex_1);
    Instrument_1.insert(ProductComplex_1.getString());
    FIX::PutOrCall PutOrCall_1(0);
    noRelatedSym_0_1.set(PutOrCall_1);
    Instrument_1.insert(PutOrCall_1.getString());
    FIX::RedemptionDate RedemptionDate_1("LOCALMKTDATE_1266036062");
    noRelatedSym_0_1.set(RedemptionDate_1);
    Instrument_1.insert(RedemptionDate_1.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_1("STRING_645825238");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_1);
    Instrument_1.insert(RepoCollateralSecurityType_1.getString());
    FIX::RepurchaseRate RepurchaseRate_1;
    RepurchaseRate_1.setString("97.140000");
    noRelatedSym_0_1.set(RepurchaseRate_1);
    Instrument_1.insert(RepurchaseRate_1.getString());
    FIX::RepurchaseTerm RepurchaseTerm_1(1640022381);
    noRelatedSym_0_1.set(RepurchaseTerm_1);
    Instrument_1.insert(RepurchaseTerm_1.getString());
    FIX::RestructuringType RestructuringType_1("STRING_MM");
    noRelatedSym_0_1.set(RestructuringType_1);
    Instrument_1.insert(RestructuringType_1.getString());
    FIX::SecurityDesc SecurityDesc_1("STRING_121753511");
    noRelatedSym_0_1.set(SecurityDesc_1);
    Instrument_1.insert(SecurityDesc_1.getString());
    FIX::SecurityExchange SecurityExchange_1("EXCHANGE_397871089");
    noRelatedSym_0_1.set(SecurityExchange_1);
    Instrument_1.insert(SecurityExchange_1.getString());
    FIX::SecurityGroup SecurityGroup_1("STRING_1514011895");
    noRelatedSym_0_1.set(SecurityGroup_1);
    Instrument_1.insert(SecurityGroup_1.getString());
    FIX::SecurityID SecurityID_1("STRING_1706712506");
    noRelatedSym_0_1.set(SecurityID_1);
    Instrument_1.insert(SecurityID_1.getString());
    FIX::SecurityIDSource SecurityIDSource_1("STRING_1");
    noRelatedSym_0_1.set(SecurityIDSource_1);
    Instrument_1.insert(SecurityIDSource_1.getString());
    FIX::SecurityStatus SecurityStatus_1("STRING_2");
    noRelatedSym_0_1.set(SecurityStatus_1);
    Instrument_1.insert(SecurityStatus_1.getString());
    FIX::SecuritySubType SecuritySubType_1("STRING_644622856");
    noRelatedSym_0_1.set(SecuritySubType_1);
    Instrument_1.insert(SecuritySubType_1.getString());
    FIX::SecurityType SecurityType_1("STRING_TB");
    noRelatedSym_0_1.set(SecurityType_1);
    Instrument_1.insert(SecurityType_1.getString());
    FIX::Seniority Seniority_1("STRING_SB");
    noRelatedSym_0_1.set(Seniority_1);
    Instrument_1.insert(Seniority_1.getString());
    FIX::SettlMethod SettlMethod_1('C');
    noRelatedSym_0_1.set(SettlMethod_1);
    Instrument_1.insert(SettlMethod_1.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_1("STRING_1389084556");
    noRelatedSym_0_1.set(SettleOnOpenFlag_1);
    Instrument_1.insert(SettleOnOpenFlag_1.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_1("STRING_1091028946");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_1);
    Instrument_1.insert(StateOrProvinceOfIssue_1.getString());
    FIX::StrikeCurrency StrikeCurrency_1("GBP");
    noRelatedSym_0_1.set(StrikeCurrency_1);
    Instrument_1.insert(StrikeCurrency_1.getString());
    FIX::StrikeMultiplier StrikeMultiplier_1;
    StrikeMultiplier_1.setString("981127");
    noRelatedSym_0_1.set(StrikeMultiplier_1);
    Instrument_1.insert(StrikeMultiplier_1.getString());
    FIX::StrikePrice StrikePrice_1;
    StrikePrice_1.setString("3784134");
    noRelatedSym_0_1.set(StrikePrice_1);
    Instrument_1.insert(StrikePrice_1.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_1(3);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_1);
    Instrument_1.insert(StrikePriceBoundaryMethod_1.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_1;
    StrikePriceBoundaryPrecision_1.setString("58.650000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_1);
    Instrument_1.insert(StrikePriceBoundaryPrecision_1.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_1(1);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_1);
    Instrument_1.insert(StrikePriceDeterminationMethod_1.getString());
    FIX::StrikeValue StrikeValue_1;
    StrikeValue_1.setString("3614445");
    noRelatedSym_0_1.set(StrikeValue_1);
    Instrument_1.insert(StrikeValue_1.getString());
    FIX::Symbol Symbol_1("STRING_809877616");
    noRelatedSym_0_1.set(Symbol_1);
    Instrument_1.insert(Symbol_1.getString());
    FIX::SymbolSfx SymbolSfx_1("STRING_CD");
    noRelatedSym_0_1.set(SymbolSfx_1);
    Instrument_1.insert(SymbolSfx_1.getString());
    FIX::TimeUnit TimeUnit_1("STRING_Mo");
    noRelatedSym_0_1.set(TimeUnit_1);
    Instrument_1.insert(TimeUnit_1.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_1(1);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_1);
    Instrument_1.insert(UnderlyingPriceDeterminationMethod_1.getString());
    FIX::UnitOfMeasure UnitOfMeasure_1("STRING_lbs");
    noRelatedSym_0_1.set(UnitOfMeasure_1);
    Instrument_1.insert(UnitOfMeasure_1.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_1;
    UnitOfMeasureQty_1.setString("32095");
    noRelatedSym_0_1.set(UnitOfMeasureQty_1);
    Instrument_1.insert(UnitOfMeasureQty_1.getString());
    FIX::ValuationMethod ValuationMethod_1("STRING_EQTY");
    noRelatedSym_0_1.set(ValuationMethod_1);
    Instrument_1.insert(ValuationMethod_1.getString());
    all_values.push_back(Instrument_1);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_3;
      FIX::ComplexEventCondition ComplexEventCondition_3(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventCondition_3.getString());
      FIX::ComplexEventPrice ComplexEventPrice_3;
      ComplexEventPrice_3.setString("5877762");
      noComplexEvents_1_1_0.set(ComplexEventPrice_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPrice_3.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_3(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceBoundaryMethod_3.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_3;
      ComplexEventPriceBoundaryPrecision_3.setString("91.720000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceBoundaryPrecision_3.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_3(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventPriceTimeType_3.getString());
      FIX::ComplexEventType ComplexEventType_3(5);
      noComplexEvents_1_1_0.set(ComplexEventType_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexEventType_3.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_3;
      ComplexOptPayoutAmount_3.setString("17963516");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_3);
      ComplexEvents_NoComplexEvents_3.insert(ComplexOptPayoutAmount_3.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_3);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_7;
        FIX::ComplexEventEndDate ComplexEventEndDate_7(FIX::UTCTIMESTAMP(22, 25, 20, 20, 102004));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_7);
        ComplexEventDates_NoComplexEventDates_7.insert(ComplexEventEndDate_7.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_7(FIX::UTCTIMESTAMP(21, 40, 59, 25, 22000));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_7);
        ComplexEventDates_NoComplexEventDates_7.insert(ComplexEventStartDate_7.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_7);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_14;
          FIX::ComplexEventEndTime ComplexEventEndTime_14(FIX::UTCTIMEONLY(18, 33, 22));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_14);
          ComplexEventTimes_NoComplexEventTimes_14.insert(ComplexEventEndTime_14.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_14(FIX::UTCTIMEONLY(12, 12, 12));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_14);
          ComplexEventTimes_NoComplexEventTimes_14.insert(ComplexEventStartTime_14.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_14);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_3;
      FIX::EventDate EventDate_3("LOCALMKTDATE_2117518816");
      noEvents_1_1_0.set(EventDate_3);
      EvntGrp_NoEvents_3.insert(EventDate_3.getString());
      FIX::EventPx EventPx_3;
      EventPx_3.setString("916439");
      noEvents_1_1_0.set(EventPx_3);
      EvntGrp_NoEvents_3.insert(EventPx_3.getString());
      FIX::EventText EventText_3("STRING_215228701");
      noEvents_1_1_0.set(EventText_3);
      EvntGrp_NoEvents_3.insert(EventText_3.getString());
      FIX::EventTime EventTime_3(FIX::UTCTIMESTAMP(23, 39, 6, 20, 72017));
      noEvents_1_1_0.set(EventTime_3);
      EvntGrp_NoEvents_3.insert(EventTime_3.getString());
      FIX::EventType EventType_3(1);
      noEvents_1_1_0.set(EventType_3);
      EvntGrp_NoEvents_3.insert(EventType_3.getString());
      all_values.push_back(EvntGrp_NoEvents_3);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_4;
      FIX::EventDate EventDate_4("LOCALMKTDATE_1903289862");
      noEvents_1_1_1.set(EventDate_4);
      EvntGrp_NoEvents_4.insert(EventDate_4.getString());
      FIX::EventPx EventPx_4;
      EventPx_4.setString("13257898");
      noEvents_1_1_1.set(EventPx_4);
      EvntGrp_NoEvents_4.insert(EventPx_4.getString());
      FIX::EventText EventText_4("STRING_553281250");
      noEvents_1_1_1.set(EventText_4);
      EvntGrp_NoEvents_4.insert(EventText_4.getString());
      FIX::EventTime EventTime_4(FIX::UTCTIMESTAMP(6, 50, 19, 11, 92001));
      noEvents_1_1_1.set(EventTime_4);
      EvntGrp_NoEvents_4.insert(EventTime_4.getString());
      FIX::EventType EventType_4(19);
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
      multiset<string> InstrumentParties_NoInstrumentParties_3;
      FIX::InstrumentPartyID InstrumentPartyID_3("STRING_1214119865");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_3);
      InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyID_3.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_3('2');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_3);
      InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyIDSource_3.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_3(325035836);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_3);
      InstrumentParties_NoInstrumentParties_3.insert(InstrumentPartyRole_3.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_3);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5;
        FIX::InstrumentPartySubID InstrumentPartySubID_5("STRING_425430900");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_5);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5.insert(InstrumentPartySubID_5.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_5(1854778388);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_5);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5.insert(InstrumentPartySubIDType_5.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6;
        FIX::InstrumentPartySubID InstrumentPartySubID_6("STRING_882156129");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_6);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6.insert(InstrumentPartySubID_6.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_6(551020429);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_6);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6.insert(InstrumentPartySubIDType_6.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7;
        FIX::InstrumentPartySubID InstrumentPartySubID_7("STRING_1824813557");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_7);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7.insert(InstrumentPartySubID_7.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_7(973800063);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_7);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7.insert(InstrumentPartySubIDType_7.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_2;
      FIX::SecurityAltID SecurityAltID_2("STRING_633012431");
      noSecurityAltID_1_1_0.set(SecurityAltID_2);
      SecAltIDGrp_NoSecurityAltID_2.insert(SecurityAltID_2.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_2("STRING_1060636694");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_2);
      SecAltIDGrp_NoSecurityAltID_2.insert(SecurityAltIDSource_2.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_2);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_3;
      FIX::SecurityAltID SecurityAltID_3("STRING_630345861");
      noSecurityAltID_1_1_1.set(SecurityAltID_3);
      SecAltIDGrp_NoSecurityAltID_3.insert(SecurityAltID_3.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_3("STRING_1096786577");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_3);
      SecAltIDGrp_NoSecurityAltID_3.insert(SecurityAltIDSource_3.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_3);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_4;
      FIX::SecurityAltID SecurityAltID_4("STRING_733164854");
      noSecurityAltID_1_1_2.set(SecurityAltID_4);
      SecAltIDGrp_NoSecurityAltID_4.insert(SecurityAltID_4.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_4("STRING_787933479");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_4);
      SecAltIDGrp_NoSecurityAltID_4.insert(SecurityAltIDSource_4.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_4);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_2;
    FIX::SecurityXML SecurityXML_3("XMLDATA_1297026280");
    noRelatedSym_0_1.set(SecurityXML_3);
    FIX::SecurityXMLLen SecurityXMLLen_1(300555086);
    noRelatedSym_0_1.set(SecurityXMLLen_1);
    FIX::SecurityXMLSchema SecurityXMLSchema_1("STRING_543739694");
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
    FIX::PartyID PartyID_0("STRING_853836336");
    noPartyIDs_0_0.set(PartyID_0);
    Parties_NoPartyIDs_0.insert(PartyID_0.getString());
    FIX::PartyIDSource PartyIDSource_0('H');
    noPartyIDs_0_0.set(PartyIDSource_0);
    Parties_NoPartyIDs_0.insert(PartyIDSource_0.getString());
    FIX::PartyRole PartyRole_0(42);
    noPartyIDs_0_0.set(PartyRole_0);
    Parties_NoPartyIDs_0.insert(PartyRole_0.getString());
    all_values.push_back(Parties_NoPartyIDs_0);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_0;
      FIX::PartySubID PartySubID_0("STRING_612434752");
      noPartySubIDs_0_1_0.set(PartySubID_0);
      PtysSubGrp_NoPartySubIDs_0.insert(PartySubID_0.getString());
      FIX::PartySubIDType PartySubIDType_0(6);
      noPartySubIDs_0_1_0.set(PartySubIDType_0);
      PtysSubGrp_NoPartySubIDs_0.insert(PartySubIDType_0.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_0);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_1;
      FIX::PartySubID PartySubID_1("STRING_1776348567");
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
    FIX::PartyID PartyID_1("STRING_1192078466");
    noPartyIDs_0_1.set(PartyID_1);
    Parties_NoPartyIDs_1.insert(PartyID_1.getString());
    FIX::PartyIDSource PartyIDSource_1('7');
    noPartyIDs_0_1.set(PartyIDSource_1);
    Parties_NoPartyIDs_1.insert(PartyIDSource_1.getString());
    FIX::PartyRole PartyRole_1(34);
    noPartyIDs_0_1.set(PartyRole_1);
    Parties_NoPartyIDs_1.insert(PartyRole_1.getString());
    all_values.push_back(Parties_NoPartyIDs_1);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_2;
      FIX::PartySubID PartySubID_2("STRING_1991915217");
      noPartySubIDs_1_1_0.set(PartySubID_2);
      PtysSubGrp_NoPartySubIDs_2.insert(PartySubID_2.getString());
      FIX::PartySubIDType PartySubIDType_2(15);
      noPartySubIDs_1_1_0.set(PartySubIDType_2);
      PtysSubGrp_NoPartySubIDs_2.insert(PartySubIDType_2.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_2);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_3;
      FIX::PartySubID PartySubID_3("STRING_1885236398");
      noPartySubIDs_1_1_1.set(PartySubID_3);
      PtysSubGrp_NoPartySubIDs_3.insert(PartySubID_3.getString());
      FIX::PartySubIDType PartySubIDType_3(28);
      noPartySubIDs_1_1_1.set(PartySubIDType_3);
      PtysSubGrp_NoPartySubIDs_3.insert(PartySubIDType_3.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_3);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_4;
      FIX::PartySubID PartySubID_4("STRING_1601564294");
      noPartySubIDs_1_1_2.set(PartySubID_4);
      PtysSubGrp_NoPartySubIDs_4.insert(PartySubID_4.getString());
      FIX::PartySubIDType PartySubIDType_4(14);
      noPartySubIDs_1_1_2.set(PartySubIDType_4);
      PtysSubGrp_NoPartySubIDs_4.insert(PartySubIDType_4.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_4);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_2;
    FIX::PartyID PartyID_2("STRING_1376539866");
    noPartyIDs_0_2.set(PartyID_2);
    Parties_NoPartyIDs_2.insert(PartyID_2.getString());
    FIX::PartyIDSource PartyIDSource_2('5');
    noPartyIDs_0_2.set(PartyIDSource_2);
    Parties_NoPartyIDs_2.insert(PartyIDSource_2.getString());
    FIX::PartyRole PartyRole_2(35);
    noPartyIDs_0_2.set(PartyRole_2);
    Parties_NoPartyIDs_2.insert(PartyRole_2.getString());
    all_values.push_back(Parties_NoPartyIDs_2);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_5;
      FIX::PartySubID PartySubID_5("STRING_1488517404");
      noPartySubIDs_2_1_0.set(PartySubID_5);
      PtysSubGrp_NoPartySubIDs_5.insert(PartySubID_5.getString());
      FIX::PartySubIDType PartySubIDType_5(25);
      noPartySubIDs_2_1_0.set(PartySubIDType_5);
      PtysSubGrp_NoPartySubIDs_5.insert(PartySubIDType_5.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_5);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_6;
      FIX::PartySubID PartySubID_6("STRING_958855226");
      noPartySubIDs_2_1_1.set(PartySubID_6);
      PtysSubGrp_NoPartySubIDs_6.insert(PartySubID_6.getString());
      FIX::PartySubIDType PartySubIDType_6(25);
      noPartySubIDs_2_1_1.set(PartySubIDType_6);
      PtysSubGrp_NoPartySubIDs_6.insert(PartySubIDType_6.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_6);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_7;
      FIX::PartySubID PartySubID_7("STRING_325818002");
      noPartySubIDs_2_1_2.set(PartySubID_7);
      PtysSubGrp_NoPartySubIDs_7.insert(PartySubID_7.getString());
      FIX::PartySubIDType PartySubIDType_7(21);
      noPartySubIDs_2_1_2.set(PartySubIDType_7);
      PtysSubGrp_NoPartySubIDs_7.insert(PartySubIDType_7.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_7);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
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
    LongQty_0.setString("8695576");
    noPositions_0_0.set(LongQty_0);
    PositionQty_NoPositions_0.insert(LongQty_0.getString());
    FIX::PosQtyStatus PosQtyStatus_0(1);
    noPositions_0_0.set(PosQtyStatus_0);
    PositionQty_NoPositions_0.insert(PosQtyStatus_0.getString());
    FIX::PosType PosType_0("STRING_TQ");
    noPositions_0_0.set(PosType_0);
    PositionQty_NoPositions_0.insert(PosType_0.getString());
    FIX::QuantityDate QuantityDate_0("LOCALMKTDATE_512832109");
    noPositions_0_0.set(QuantityDate_0);
    PositionQty_NoPositions_0.insert(QuantityDate_0.getString());
    FIX::ShortQty ShortQty_0;
    ShortQty_0.setString("8283143");
    noPositions_0_0.set(ShortQty_0);
    PositionQty_NoPositions_0.insert(ShortQty_0.getString());
    all_values.push_back(PositionQty_NoPositions_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_0;
      FIX::NestedPartyID NestedPartyID_0("STRING_1125266862");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyID_0.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_0('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyIDSource_0.getString());
      FIX::NestedPartyRole NestedPartyRole_0(1201092611);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_0);
      NestedParties_NoNestedPartyIDs_0.insert(NestedPartyRole_0.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_0);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_0;
        FIX::NestedPartySubID NestedPartySubID_0("STRING_951754850");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_0);
        NstdPtysSubGrp_NoNestedPartySubIDs_0.insert(NestedPartySubID_0.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_0(720488344);
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
      FIX::NestedPartyID NestedPartyID_1("STRING_659093686");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyID_1.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_1('2');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyIDSource_1.getString());
      FIX::NestedPartyRole NestedPartyRole_1(564919913);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_1);
      NestedParties_NoNestedPartyIDs_1.insert(NestedPartyRole_1.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_1);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_1;
        FIX::NestedPartySubID NestedPartySubID_1("STRING_1829450");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_1);
        NstdPtysSubGrp_NoNestedPartySubIDs_1.insert(NestedPartySubID_1.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_1(116646223);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_1);
        NstdPtysSubGrp_NoNestedPartySubIDs_1.insert(NestedPartySubIDType_1.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_1);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
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
