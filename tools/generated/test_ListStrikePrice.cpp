#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ListStrikePrice.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStrikePrice, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListStrikePrice msg;

  list<multiset<string>> all_values;
  multiset<string> ListStrikePrice_0;
  FIX::LastFragment LastFragment_7(true);
  msg.set(LastFragment_7);
  ListStrikePrice_0.insert(LastFragment_7.getString());
  FIX::ListID ListID_17("STRING_304594968");
  msg.set(ListID_17);
  ListStrikePrice_0.insert(ListID_17.getString());
  FIX::TotNoStrikes TotNoStrikes_0(2017563877);
  msg.set(TotNoStrikes_0);
  ListStrikePrice_0.insert(TotNoStrikes_0.getString());
  all_values.push_back(ListStrikePrice_0);

  // InstrmtStrkPxGrp
  // Group InstrmtStrkPxGrp.NoStrikes
  {
    FIX50SP2::ListStrikePrice::NoStrikes noStrikes_0_0;
    // InstrmtStrkPxGrp.NoStrikes
    multiset<string> InstrmtStrkPxGrp_NoStrikes_0;
    FIX::ClOrdID ClOrdID_24("STRING_721387308");
    noStrikes_0_0.set(ClOrdID_24);
    InstrmtStrkPxGrp_NoStrikes_0.insert(ClOrdID_24.getString());
    FIX::Currency Currency_21("CHF");
    noStrikes_0_0.set(Currency_21);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Currency_21.getString());
    FIX::EncodedText EncodedText_42("DATA_23198649");
    noStrikes_0_0.set(EncodedText_42);
    InstrmtStrkPxGrp_NoStrikes_0.insert(EncodedText_42.getString());
    FIX::EncodedTextLen EncodedTextLen_42(1646278279);
    noStrikes_0_0.set(EncodedTextLen_42);
    InstrmtStrkPxGrp_NoStrikes_0.insert(EncodedTextLen_42.getString());
    FIX::PrevClosePx PrevClosePx_1;
    PrevClosePx_1.setString("20081625");
    noStrikes_0_0.set(PrevClosePx_1);
    InstrmtStrkPxGrp_NoStrikes_0.insert(PrevClosePx_1.getString());
    FIX::Price Price_10;
    Price_10.setString("8798005");
    noStrikes_0_0.set(Price_10);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Price_10.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_22("STRING_1016767448");
    noStrikes_0_0.set(SecondaryClOrdID_22);
    InstrmtStrkPxGrp_NoStrikes_0.insert(SecondaryClOrdID_22.getString());
    FIX::Side Side_21('3');
    noStrikes_0_0.set(Side_21);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Side_21.getString());
    FIX::Text Text_42("STRING_776283654");
    noStrikes_0_0.set(Text_42);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Text_42.getString());
    all_values.push_back(InstrmtStrkPxGrp_NoStrikes_0);

    // Instrument
    multiset<string> Instrument_26;
    FIX::AttachmentPoint AttachmentPoint_26;
    AttachmentPoint_26.setString("69.700000");
    noStrikes_0_0.set(AttachmentPoint_26);
    Instrument_26.insert(AttachmentPoint_26.getString());
    FIX::CFICode CFICode_26("STRING_738433730");
    noStrikes_0_0.set(CFICode_26);
    Instrument_26.insert(CFICode_26.getString());
    FIX::CPProgram CPProgram_26(1);
    noStrikes_0_0.set(CPProgram_26);
    Instrument_26.insert(CPProgram_26.getString());
    FIX::CPRegType CPRegType_26("STRING_2071122672");
    noStrikes_0_0.set(CPRegType_26);
    Instrument_26.insert(CPRegType_26.getString());
    FIX::CapPrice CapPrice_26;
    CapPrice_26.setString("16803803");
    noStrikes_0_0.set(CapPrice_26);
    Instrument_26.insert(CapPrice_26.getString());
    FIX::ContractMultiplier ContractMultiplier_26;
    ContractMultiplier_26.setString("18259409");
    noStrikes_0_0.set(ContractMultiplier_26);
    Instrument_26.insert(ContractMultiplier_26.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_26(2);
    noStrikes_0_0.set(ContractMultiplierUnit_26);
    Instrument_26.insert(ContractMultiplierUnit_26.getString());
    FIX::ContractSettlMonth ContractSettlMonth_26("MONTHYEAR_1434810871");
    noStrikes_0_0.set(ContractSettlMonth_26);
    Instrument_26.insert(ContractSettlMonth_26.getString());
    FIX::CountryOfIssue CountryOfIssue_26("COUNTRY_2026571168");
    noStrikes_0_0.set(CountryOfIssue_26);
    Instrument_26.insert(CountryOfIssue_26.getString());
    FIX::CouponPaymentDate CouponPaymentDate_26("LOCALMKTDATE_1447064626");
    noStrikes_0_0.set(CouponPaymentDate_26);
    Instrument_26.insert(CouponPaymentDate_26.getString());
    FIX::CouponRate CouponRate_26;
    CouponRate_26.setString("81.650000");
    noStrikes_0_0.set(CouponRate_26);
    Instrument_26.insert(CouponRate_26.getString());
    FIX::CreditRating CreditRating_26("STRING_2080079941");
    noStrikes_0_0.set(CreditRating_26);
    Instrument_26.insert(CreditRating_26.getString());
    FIX::DatedDate DatedDate_26("LOCALMKTDATE_1185813032");
    noStrikes_0_0.set(DatedDate_26);
    Instrument_26.insert(DatedDate_26.getString());
    FIX::DetachmentPoint DetachmentPoint_26;
    DetachmentPoint_26.setString("54.720000");
    noStrikes_0_0.set(DetachmentPoint_26);
    Instrument_26.insert(DetachmentPoint_26.getString());
    FIX::EncodedIssuer EncodedIssuer_26("DATA_1387008191");
    noStrikes_0_0.set(EncodedIssuer_26);
    Instrument_26.insert(EncodedIssuer_26.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_26(470878205);
    noStrikes_0_0.set(EncodedIssuerLen_26);
    Instrument_26.insert(EncodedIssuerLen_26.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_26("DATA_756710270");
    noStrikes_0_0.set(EncodedSecurityDesc_26);
    Instrument_26.insert(EncodedSecurityDesc_26.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_26(1482960719);
    noStrikes_0_0.set(EncodedSecurityDescLen_26);
    Instrument_26.insert(EncodedSecurityDescLen_26.getString());
    FIX::ExerciseStyle ExerciseStyle_26(0);
    noStrikes_0_0.set(ExerciseStyle_26);
    Instrument_26.insert(ExerciseStyle_26.getString());
    FIX::Factor Factor_26;
    Factor_26.setString("6267904");
    noStrikes_0_0.set(Factor_26);
    Instrument_26.insert(Factor_26.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_26(true);
    noStrikes_0_0.set(FlexProductEligibilityIndicator_26);
    Instrument_26.insert(FlexProductEligibilityIndicator_26.getString());
    FIX::FlexibleIndicator FlexibleIndicator_26(true);
    noStrikes_0_0.set(FlexibleIndicator_26);
    Instrument_26.insert(FlexibleIndicator_26.getString());
    FIX::FloorPrice FloorPrice_26;
    FloorPrice_26.setString("8371036");
    noStrikes_0_0.set(FloorPrice_26);
    Instrument_26.insert(FloorPrice_26.getString());
    FIX::FlowScheduleType FlowScheduleType_26(1);
    noStrikes_0_0.set(FlowScheduleType_26);
    Instrument_26.insert(FlowScheduleType_26.getString());
    FIX::InstrRegistry InstrRegistry_26("STRING_1520059131");
    noStrikes_0_0.set(InstrRegistry_26);
    Instrument_26.insert(InstrRegistry_26.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_26('3');
    noStrikes_0_0.set(InstrmtAssignmentMethod_26);
    Instrument_26.insert(InstrmtAssignmentMethod_26.getString());
    FIX::InterestAccrualDate InterestAccrualDate_26("LOCALMKTDATE_1642293482");
    noStrikes_0_0.set(InterestAccrualDate_26);
    Instrument_26.insert(InterestAccrualDate_26.getString());
    FIX::IssueDate IssueDate_26("LOCALMKTDATE_252376074");
    noStrikes_0_0.set(IssueDate_26);
    Instrument_26.insert(IssueDate_26.getString());
    FIX::Issuer Issuer_26("STRING_1352665775");
    noStrikes_0_0.set(Issuer_26);
    Instrument_26.insert(Issuer_26.getString());
    FIX::ListMethod ListMethod_26(0);
    noStrikes_0_0.set(ListMethod_26);
    Instrument_26.insert(ListMethod_26.getString());
    FIX::LocaleOfIssue LocaleOfIssue_26("STRING_1028659729");
    noStrikes_0_0.set(LocaleOfIssue_26);
    Instrument_26.insert(LocaleOfIssue_26.getString());
    FIX::MaturityDate MaturityDate_26("LOCALMKTDATE_1817332745");
    noStrikes_0_0.set(MaturityDate_26);
    Instrument_26.insert(MaturityDate_26.getString());
    FIX::MaturityMonthYear MaturityMonthYear_26("MONTHYEAR_1740244046");
    noStrikes_0_0.set(MaturityMonthYear_26);
    Instrument_26.insert(MaturityMonthYear_26.getString());
    FIX::MaturityTime MaturityTime_26("TZTIMEONLY_1583499718");
    noStrikes_0_0.set(MaturityTime_26);
    Instrument_26.insert(MaturityTime_26.getString());
    FIX::MinPriceIncrement MinPriceIncrement_26;
    MinPriceIncrement_26.setString("17409717");
    noStrikes_0_0.set(MinPriceIncrement_26);
    Instrument_26.insert(MinPriceIncrement_26.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_26;
    MinPriceIncrementAmount_26.setString("12731407");
    noStrikes_0_0.set(MinPriceIncrementAmount_26);
    Instrument_26.insert(MinPriceIncrementAmount_26.getString());
    FIX::NTPositionLimit NTPositionLimit_26(1261957037);
    noStrikes_0_0.set(NTPositionLimit_26);
    Instrument_26.insert(NTPositionLimit_26.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_26;
    NotionalPercentageOutstanding_26.setString("25.610000");
    noStrikes_0_0.set(NotionalPercentageOutstanding_26);
    Instrument_26.insert(NotionalPercentageOutstanding_26.getString());
    FIX::OptAttribute OptAttribute_26('5');
    noStrikes_0_0.set(OptAttribute_26);
    Instrument_26.insert(OptAttribute_26.getString());
    FIX::OptPayoutAmount OptPayoutAmount_26;
    OptPayoutAmount_26.setString("11410445");
    noStrikes_0_0.set(OptPayoutAmount_26);
    Instrument_26.insert(OptPayoutAmount_26.getString());
    FIX::OptPayoutType OptPayoutType_26(2);
    noStrikes_0_0.set(OptPayoutType_26);
    Instrument_26.insert(OptPayoutType_26.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_26;
    OriginalNotionalPercentageOutstanding_26.setString("60.980000");
    noStrikes_0_0.set(OriginalNotionalPercentageOutstanding_26);
    Instrument_26.insert(OriginalNotionalPercentageOutstanding_26.getString());
    FIX::Pool Pool_26("STRING_1073640850");
    noStrikes_0_0.set(Pool_26);
    Instrument_26.insert(Pool_26.getString());
    FIX::PositionLimit PositionLimit_26(729276572);
    noStrikes_0_0.set(PositionLimit_26);
    Instrument_26.insert(PositionLimit_26.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_26("STRING_INT");
    noStrikes_0_0.set(PriceQuoteMethod_26);
    Instrument_26.insert(PriceQuoteMethod_26.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_26("STRING_313165394");
    noStrikes_0_0.set(PriceUnitOfMeasure_26);
    Instrument_26.insert(PriceUnitOfMeasure_26.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_26;
    PriceUnitOfMeasureQty_26.setString("12001547");
    noStrikes_0_0.set(PriceUnitOfMeasureQty_26);
    Instrument_26.insert(PriceUnitOfMeasureQty_26.getString());
    FIX::Product Product_28(1);
    noStrikes_0_0.set(Product_28);
    Instrument_26.insert(Product_28.getString());
    FIX::ProductComplex ProductComplex_26("STRING_1796126113");
    noStrikes_0_0.set(ProductComplex_26);
    Instrument_26.insert(ProductComplex_26.getString());
    FIX::PutOrCall PutOrCall_26(1);
    noStrikes_0_0.set(PutOrCall_26);
    Instrument_26.insert(PutOrCall_26.getString());
    FIX::RedemptionDate RedemptionDate_26("LOCALMKTDATE_1316788692");
    noStrikes_0_0.set(RedemptionDate_26);
    Instrument_26.insert(RedemptionDate_26.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_26("STRING_359347642");
    noStrikes_0_0.set(RepoCollateralSecurityType_26);
    Instrument_26.insert(RepoCollateralSecurityType_26.getString());
    FIX::RepurchaseRate RepurchaseRate_26;
    RepurchaseRate_26.setString("47.860000");
    noStrikes_0_0.set(RepurchaseRate_26);
    Instrument_26.insert(RepurchaseRate_26.getString());
    FIX::RepurchaseTerm RepurchaseTerm_26(6408739);
    noStrikes_0_0.set(RepurchaseTerm_26);
    Instrument_26.insert(RepurchaseTerm_26.getString());
    FIX::RestructuringType RestructuringType_26("STRING_XR");
    noStrikes_0_0.set(RestructuringType_26);
    Instrument_26.insert(RestructuringType_26.getString());
    FIX::SecurityDesc SecurityDesc_26("STRING_697580269");
    noStrikes_0_0.set(SecurityDesc_26);
    Instrument_26.insert(SecurityDesc_26.getString());
    FIX::SecurityExchange SecurityExchange_26("EXCHANGE_342307066");
    noStrikes_0_0.set(SecurityExchange_26);
    Instrument_26.insert(SecurityExchange_26.getString());
    FIX::SecurityGroup SecurityGroup_26("STRING_1635772037");
    noStrikes_0_0.set(SecurityGroup_26);
    Instrument_26.insert(SecurityGroup_26.getString());
    FIX::SecurityID SecurityID_26("STRING_949956344");
    noStrikes_0_0.set(SecurityID_26);
    Instrument_26.insert(SecurityID_26.getString());
    FIX::SecurityIDSource SecurityIDSource_26("STRING_2");
    noStrikes_0_0.set(SecurityIDSource_26);
    Instrument_26.insert(SecurityIDSource_26.getString());
    FIX::SecurityStatus SecurityStatus_26("STRING_2");
    noStrikes_0_0.set(SecurityStatus_26);
    Instrument_26.insert(SecurityStatus_26.getString());
    FIX::SecuritySubType SecuritySubType_27("STRING_1978616073");
    noStrikes_0_0.set(SecuritySubType_27);
    Instrument_26.insert(SecuritySubType_27.getString());
    FIX::SecurityType SecurityType_28("STRING_PN");
    noStrikes_0_0.set(SecurityType_28);
    Instrument_26.insert(SecurityType_28.getString());
    FIX::Seniority Seniority_26("STRING_SD");
    noStrikes_0_0.set(Seniority_26);
    Instrument_26.insert(Seniority_26.getString());
    FIX::SettlMethod SettlMethod_26('P');
    noStrikes_0_0.set(SettlMethod_26);
    Instrument_26.insert(SettlMethod_26.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_26("STRING_958310059");
    noStrikes_0_0.set(SettleOnOpenFlag_26);
    Instrument_26.insert(SettleOnOpenFlag_26.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_26("STRING_1355999813");
    noStrikes_0_0.set(StateOrProvinceOfIssue_26);
    Instrument_26.insert(StateOrProvinceOfIssue_26.getString());
    FIX::StrikeCurrency StrikeCurrency_26("JPY");
    noStrikes_0_0.set(StrikeCurrency_26);
    Instrument_26.insert(StrikeCurrency_26.getString());
    FIX::StrikeMultiplier StrikeMultiplier_26;
    StrikeMultiplier_26.setString("19164677");
    noStrikes_0_0.set(StrikeMultiplier_26);
    Instrument_26.insert(StrikeMultiplier_26.getString());
    FIX::StrikePrice StrikePrice_26;
    StrikePrice_26.setString("16701500");
    noStrikes_0_0.set(StrikePrice_26);
    Instrument_26.insert(StrikePrice_26.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_26(1);
    noStrikes_0_0.set(StrikePriceBoundaryMethod_26);
    Instrument_26.insert(StrikePriceBoundaryMethod_26.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_26;
    StrikePriceBoundaryPrecision_26.setString("1.970000");
    noStrikes_0_0.set(StrikePriceBoundaryPrecision_26);
    Instrument_26.insert(StrikePriceBoundaryPrecision_26.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_26(4);
    noStrikes_0_0.set(StrikePriceDeterminationMethod_26);
    Instrument_26.insert(StrikePriceDeterminationMethod_26.getString());
    FIX::StrikeValue StrikeValue_26;
    StrikeValue_26.setString("14749327");
    noStrikes_0_0.set(StrikeValue_26);
    Instrument_26.insert(StrikeValue_26.getString());
    FIX::Symbol Symbol_26("STRING_1571968119");
    noStrikes_0_0.set(Symbol_26);
    Instrument_26.insert(Symbol_26.getString());
    FIX::SymbolSfx SymbolSfx_26("STRING_WI");
    noStrikes_0_0.set(SymbolSfx_26);
    Instrument_26.insert(SymbolSfx_26.getString());
    FIX::TimeUnit TimeUnit_26("STRING_Min");
    noStrikes_0_0.set(TimeUnit_26);
    Instrument_26.insert(TimeUnit_26.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_26(1);
    noStrikes_0_0.set(UnderlyingPriceDeterminationMethod_26);
    Instrument_26.insert(UnderlyingPriceDeterminationMethod_26.getString());
    FIX::UnitOfMeasure UnitOfMeasure_26("STRING_t");
    noStrikes_0_0.set(UnitOfMeasure_26);
    Instrument_26.insert(UnitOfMeasure_26.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_26;
    UnitOfMeasureQty_26.setString("3557481");
    noStrikes_0_0.set(UnitOfMeasureQty_26);
    Instrument_26.insert(UnitOfMeasureQty_26.getString());
    FIX::ValuationMethod ValuationMethod_26("STRING_FUT");
    noStrikes_0_0.set(ValuationMethod_26);
    Instrument_26.insert(ValuationMethod_26.getString());
    all_values.push_back(Instrument_26);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_53;
      FIX::ComplexEventCondition ComplexEventCondition_53(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventCondition_53.getString());
      FIX::ComplexEventPrice ComplexEventPrice_53;
      ComplexEventPrice_53.setString("14376800");
      noComplexEvents_0_1_0.set(ComplexEventPrice_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPrice_53.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_53(4);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceBoundaryMethod_53.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_53;
      ComplexEventPriceBoundaryPrecision_53.setString("95.720000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceBoundaryPrecision_53.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_53(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventPriceTimeType_53.getString());
      FIX::ComplexEventType ComplexEventType_53(8);
      noComplexEvents_0_1_0.set(ComplexEventType_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexEventType_53.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_53;
      ComplexOptPayoutAmount_53.setString("11808059");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_53);
      ComplexEvents_NoComplexEvents_53.insert(ComplexOptPayoutAmount_53.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_53);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_113;
        FIX::ComplexEventEndDate ComplexEventEndDate_113(FIX::UTCTIMESTAMP(13, 6, 47, 0, 22002));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_113);
        ComplexEventDates_NoComplexEventDates_113.insert(ComplexEventEndDate_113.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_113(FIX::UTCTIMESTAMP(22, 39, 29, 14, 92015));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_113);
        ComplexEventDates_NoComplexEventDates_113.insert(ComplexEventStartDate_113.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_113);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_233;
          FIX::ComplexEventEndTime ComplexEventEndTime_233(FIX::UTCTIMEONLY(2, 23, 3));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_233);
          ComplexEventTimes_NoComplexEventTimes_233.insert(ComplexEventEndTime_233.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_233(FIX::UTCTIMEONLY(4, 31, 2));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_233);
          ComplexEventTimes_NoComplexEventTimes_233.insert(ComplexEventStartTime_233.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_233);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_114;
        FIX::ComplexEventEndDate ComplexEventEndDate_114(FIX::UTCTIMESTAMP(3, 51, 24, 5, 62010));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_114);
        ComplexEventDates_NoComplexEventDates_114.insert(ComplexEventEndDate_114.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_114(FIX::UTCTIMESTAMP(12, 54, 54, 11, 112000));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_114);
        ComplexEventDates_NoComplexEventDates_114.insert(ComplexEventStartDate_114.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_114);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_234;
          FIX::ComplexEventEndTime ComplexEventEndTime_234(FIX::UTCTIMEONLY(22, 7, 20));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_234);
          ComplexEventTimes_NoComplexEventTimes_234.insert(ComplexEventEndTime_234.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_234(FIX::UTCTIMEONLY(3, 41, 22));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_234);
          ComplexEventTimes_NoComplexEventTimes_234.insert(ComplexEventStartTime_234.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_234);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noStrikes_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_56;
      FIX::EventDate EventDate_56("LOCALMKTDATE_1210646040");
      noEvents_0_1_0.set(EventDate_56);
      EvntGrp_NoEvents_56.insert(EventDate_56.getString());
      FIX::EventPx EventPx_56;
      EventPx_56.setString("20650764");
      noEvents_0_1_0.set(EventPx_56);
      EvntGrp_NoEvents_56.insert(EventPx_56.getString());
      FIX::EventText EventText_56("STRING_1752916370");
      noEvents_0_1_0.set(EventText_56);
      EvntGrp_NoEvents_56.insert(EventText_56.getString());
      FIX::EventTime EventTime_56(FIX::UTCTIMESTAMP(18, 13, 24, 21, 52001));
      noEvents_0_1_0.set(EventTime_56);
      EvntGrp_NoEvents_56.insert(EventTime_56.getString());
      FIX::EventType EventType_56(14);
      noEvents_0_1_0.set(EventType_56);
      EvntGrp_NoEvents_56.insert(EventType_56.getString());
      all_values.push_back(EvntGrp_NoEvents_56);

      noStrikes_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_57;
      FIX::EventDate EventDate_57("LOCALMKTDATE_1199181333");
      noEvents_0_1_1.set(EventDate_57);
      EvntGrp_NoEvents_57.insert(EventDate_57.getString());
      FIX::EventPx EventPx_57;
      EventPx_57.setString("7307770");
      noEvents_0_1_1.set(EventPx_57);
      EvntGrp_NoEvents_57.insert(EventPx_57.getString());
      FIX::EventText EventText_57("STRING_1922102266");
      noEvents_0_1_1.set(EventText_57);
      EvntGrp_NoEvents_57.insert(EventText_57.getString());
      FIX::EventTime EventTime_57(FIX::UTCTIMESTAMP(0, 32, 8, 16, 112014));
      noEvents_0_1_1.set(EventTime_57);
      EvntGrp_NoEvents_57.insert(EventTime_57.getString());
      FIX::EventType EventType_57(5);
      noEvents_0_1_1.set(EventType_57);
      EvntGrp_NoEvents_57.insert(EventType_57.getString());
      all_values.push_back(EvntGrp_NoEvents_57);

      noStrikes_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_49;
      FIX::InstrumentPartyID InstrumentPartyID_49("STRING_452970442");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_49);
      InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyID_49.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_49('2');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_49);
      InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyIDSource_49.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_49(1411353466);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_49);
      InstrumentParties_NoInstrumentParties_49.insert(InstrumentPartyRole_49.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_49);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100;
        FIX::InstrumentPartySubID InstrumentPartySubID_100("STRING_1995708606");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_100);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100.insert(InstrumentPartySubID_100.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_100(785360719);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_100);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100.insert(InstrumentPartySubIDType_100.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101;
        FIX::InstrumentPartySubID InstrumentPartySubID_101("STRING_1635098844");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_101);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101.insert(InstrumentPartySubID_101.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_101(473806184);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_101);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101.insert(InstrumentPartySubIDType_101.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102;
        FIX::InstrumentPartySubID InstrumentPartySubID_102("STRING_1996006759");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_102);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102.insert(InstrumentPartySubID_102.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_102(1552691642);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_102);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102.insert(InstrumentPartySubIDType_102.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_50;
      FIX::InstrumentPartyID InstrumentPartyID_50("STRING_79238906");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_50);
      InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyID_50.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_50('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_50);
      InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyIDSource_50.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_50(837091740);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_50);
      InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyRole_50.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_50);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103;
        FIX::InstrumentPartySubID InstrumentPartySubID_103("STRING_1781605205");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_103);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103.insert(InstrumentPartySubID_103.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_103(1169052089);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_103);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103.insert(InstrumentPartySubIDType_103.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104;
        FIX::InstrumentPartySubID InstrumentPartySubID_104("STRING_1961153000");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_104);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104.insert(InstrumentPartySubID_104.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_104(37478104);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_104);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104.insert(InstrumentPartySubIDType_104.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_56;
      FIX::SecurityAltID SecurityAltID_56("STRING_1012850686");
      noSecurityAltID_0_1_0.set(SecurityAltID_56);
      SecAltIDGrp_NoSecurityAltID_56.insert(SecurityAltID_56.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_56("STRING_768255172");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_56);
      SecAltIDGrp_NoSecurityAltID_56.insert(SecurityAltIDSource_56.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_56);

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_52;
    FIX::SecurityXML SecurityXML_53("XMLDATA_406557233");
    noStrikes_0_0.set(SecurityXML_53);
    FIX::SecurityXMLLen SecurityXMLLen_26(725847540);
    noStrikes_0_0.set(SecurityXMLLen_26);
    FIX::SecurityXMLSchema SecurityXMLSchema_26("STRING_568297556");
    noStrikes_0_0.set(SecurityXMLSchema_26);
    SecurityXML_52.insert(SecurityXMLSchema_26.getString());
    all_values.push_back(SecurityXML_52);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_40;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_40("DATA_1644958208");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_40);
      UnderlyingInstrument_40.insert(EncodedUnderlyingIssuer_40.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_40(409792804);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_40);
      UnderlyingInstrument_40.insert(EncodedUnderlyingIssuerLen_40.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_40("DATA_2058408959");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_40);
      UnderlyingInstrument_40.insert(EncodedUnderlyingSecurityDesc_40.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_40(978340101);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_40);
      UnderlyingInstrument_40.insert(EncodedUnderlyingSecurityDescLen_40.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_40;
      UnderlyingAdjustedQuantity_40.setString("4734446");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_40);
      UnderlyingInstrument_40.insert(UnderlyingAdjustedQuantity_40.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_40;
      UnderlyingAllocationPercent_40.setString("39.770000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_40);
      UnderlyingInstrument_40.insert(UnderlyingAllocationPercent_40.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_40;
      UnderlyingAttachmentPoint_40.setString("5.430000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_40);
      UnderlyingInstrument_40.insert(UnderlyingAttachmentPoint_40.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_40("STRING_708940839");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_40);
      UnderlyingInstrument_40.insert(UnderlyingCFICode_40.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_40("STRING_2139307443");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_40);
      UnderlyingInstrument_40.insert(UnderlyingCPProgram_40.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_40("STRING_12392078");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_40);
      UnderlyingInstrument_40.insert(UnderlyingCPRegType_40.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_40;
      UnderlyingCapValue_40.setString("5571657");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_40);
      UnderlyingInstrument_40.insert(UnderlyingCapValue_40.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_40;
      UnderlyingCashAmount_40.setString("7771845");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_40);
      UnderlyingInstrument_40.insert(UnderlyingCashAmount_40.getString());
      FIX::UnderlyingCashType UnderlyingCashType_40("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_40);
      UnderlyingInstrument_40.insert(UnderlyingCashType_40.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_40;
      UnderlyingContractMultiplier_40.setString("10309719");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_40);
      UnderlyingInstrument_40.insert(UnderlyingContractMultiplier_40.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_40(625707626);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_40);
      UnderlyingInstrument_40.insert(UnderlyingContractMultiplierUnit_40.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_40("COUNTRY_1052698916");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_40);
      UnderlyingInstrument_40.insert(UnderlyingCountryOfIssue_40.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_40("LOCALMKTDATE_1110210888");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_40);
      UnderlyingInstrument_40.insert(UnderlyingCouponPaymentDate_40.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_40;
      UnderlyingCouponRate_40.setString("70.670000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_40);
      UnderlyingInstrument_40.insert(UnderlyingCouponRate_40.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_40("STRING_1889790656");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_40);
      UnderlyingInstrument_40.insert(UnderlyingCreditRating_40.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_40("JPY");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_40);
      UnderlyingInstrument_40.insert(UnderlyingCurrency_40.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_40;
      UnderlyingCurrentValue_40.setString("9113590");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_40);
      UnderlyingInstrument_40.insert(UnderlyingCurrentValue_40.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_40;
      UnderlyingDetachmentPoint_40.setString("47.210000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_40);
      UnderlyingInstrument_40.insert(UnderlyingDetachmentPoint_40.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_40;
      UnderlyingDirtyPrice_40.setString("16037467");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_40);
      UnderlyingInstrument_40.insert(UnderlyingDirtyPrice_40.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_40;
      UnderlyingEndPrice_40.setString("15432977");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_40);
      UnderlyingInstrument_40.insert(UnderlyingEndPrice_40.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_40;
      UnderlyingEndValue_40.setString("20325254");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_40);
      UnderlyingInstrument_40.insert(UnderlyingEndValue_40.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_40(224518252);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_40);
      UnderlyingInstrument_40.insert(UnderlyingExerciseStyle_40.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_40;
      UnderlyingFXRate_40.setString("19498549");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_40);
      UnderlyingInstrument_40.insert(UnderlyingFXRate_40.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_40('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_40);
      UnderlyingInstrument_40.insert(UnderlyingFXRateCalc_40.getString());
      FIX::UnderlyingFactor UnderlyingFactor_40;
      UnderlyingFactor_40.setString("7928158");
      noUnderlyings_0_1_0.set(UnderlyingFactor_40);
      UnderlyingInstrument_40.insert(UnderlyingFactor_40.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_40(1307217583);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_40);
      UnderlyingInstrument_40.insert(UnderlyingFlowScheduleType_40.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_40("STRING_108363859");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_40);
      UnderlyingInstrument_40.insert(UnderlyingInstrRegistry_40.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_40("LOCALMKTDATE_1202608613");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_40);
      UnderlyingInstrument_40.insert(UnderlyingIssueDate_40.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_40("STRING_1218142894");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_40);
      UnderlyingInstrument_40.insert(UnderlyingIssuer_40.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_40("STRING_1086703960");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_40);
      UnderlyingInstrument_40.insert(UnderlyingLocaleOfIssue_40.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_40("LOCALMKTDATE_1676053241");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_40);
      UnderlyingInstrument_40.insert(UnderlyingMaturityDate_40.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_40("MONTHYEAR_1946096871");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_40);
      UnderlyingInstrument_40.insert(UnderlyingMaturityMonthYear_40.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_40("TZTIMEONLY_370530856");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_40);
      UnderlyingInstrument_40.insert(UnderlyingMaturityTime_40.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_40;
      UnderlyingNotionalPercentageOutstanding_40.setString("4.330000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_40);
      UnderlyingInstrument_40.insert(UnderlyingNotionalPercentageOutstanding_40.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_40('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_40);
      UnderlyingInstrument_40.insert(UnderlyingOptAttribute_40.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_40;
      UnderlyingOriginalNotionalPercentageOutstanding_40.setString("29.340000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_40);
      UnderlyingInstrument_40.insert(UnderlyingOriginalNotionalPercentageOutstanding_40.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_40("STRING_794676230");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_40);
      UnderlyingInstrument_40.insert(UnderlyingPriceUnitOfMeasure_40.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_40;
      UnderlyingPriceUnitOfMeasureQty_40.setString("5676215");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_40);
      UnderlyingInstrument_40.insert(UnderlyingPriceUnitOfMeasureQty_40.getString());
      FIX::UnderlyingProduct UnderlyingProduct_40(2030413856);
      noUnderlyings_0_1_0.set(UnderlyingProduct_40);
      UnderlyingInstrument_40.insert(UnderlyingProduct_40.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_40(1825648212);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_40);
      UnderlyingInstrument_40.insert(UnderlyingPutOrCall_40.getString());
      FIX::UnderlyingPx UnderlyingPx_40;
      UnderlyingPx_40.setString("11933291");
      noUnderlyings_0_1_0.set(UnderlyingPx_40);
      UnderlyingInstrument_40.insert(UnderlyingPx_40.getString());
      FIX::UnderlyingQty UnderlyingQty_40;
      UnderlyingQty_40.setString("9356291");
      noUnderlyings_0_1_0.set(UnderlyingQty_40);
      UnderlyingInstrument_40.insert(UnderlyingQty_40.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_40("LOCALMKTDATE_788375453");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_40);
      UnderlyingInstrument_40.insert(UnderlyingRedemptionDate_40.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_40("STRING_977992578");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_40);
      UnderlyingInstrument_40.insert(UnderlyingRepoCollateralSecurityType_40.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_40;
      UnderlyingRepurchaseRate_40.setString("61.330000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_40);
      UnderlyingInstrument_40.insert(UnderlyingRepurchaseRate_40.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_40(1994380821);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_40);
      UnderlyingInstrument_40.insert(UnderlyingRepurchaseTerm_40.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_40("STRING_396777554");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_40);
      UnderlyingInstrument_40.insert(UnderlyingRestructuringType_40.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_40("STRING_1589295231");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_40);
      UnderlyingInstrument_40.insert(UnderlyingSecurityDesc_40.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_40("EXCHANGE_866571894");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_40);
      UnderlyingInstrument_40.insert(UnderlyingSecurityExchange_40.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_40("STRING_2000524282");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_40);
      UnderlyingInstrument_40.insert(UnderlyingSecurityID_40.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_40("STRING_985109296");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_40);
      UnderlyingInstrument_40.insert(UnderlyingSecurityIDSource_40.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_40("STRING_751613653");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_40);
      UnderlyingInstrument_40.insert(UnderlyingSecuritySubType_40.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_40("STRING_77558886");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_40);
      UnderlyingInstrument_40.insert(UnderlyingSecurityType_40.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_40("STRING_787480594");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_40);
      UnderlyingInstrument_40.insert(UnderlyingSeniority_40.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_40("STRING_1362502952");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_40);
      UnderlyingInstrument_40.insert(UnderlyingSettlMethod_40.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_40(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_40);
      UnderlyingInstrument_40.insert(UnderlyingSettlementType_40.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_40;
      UnderlyingStartValue_40.setString("20946981");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_40);
      UnderlyingInstrument_40.insert(UnderlyingStartValue_40.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_40("STRING_1470866812");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_40);
      UnderlyingInstrument_40.insert(UnderlyingStateOrProvinceOfIssue_40.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_40("GBP");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_40);
      UnderlyingInstrument_40.insert(UnderlyingStrikeCurrency_40.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_40;
      UnderlyingStrikePrice_40.setString("4100871");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_40);
      UnderlyingInstrument_40.insert(UnderlyingStrikePrice_40.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_40("STRING_1601552901");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_40);
      UnderlyingInstrument_40.insert(UnderlyingSymbol_40.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_40("STRING_963970647");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_40);
      UnderlyingInstrument_40.insert(UnderlyingSymbolSfx_40.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_40("STRING_780617980");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_40);
      UnderlyingInstrument_40.insert(UnderlyingTimeUnit_40.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_40("STRING_1839063334");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_40);
      UnderlyingInstrument_40.insert(UnderlyingUnitOfMeasure_40.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_40;
      UnderlyingUnitOfMeasureQty_40.setString("7544076");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_40);
      UnderlyingInstrument_40.insert(UnderlyingUnitOfMeasureQty_40.getString());
      all_values.push_back(UnderlyingInstrument_40);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_79;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_79("STRING_486255916");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_79);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_79.insert(UnderlyingSecurityAltID_79.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_79("STRING_1322029199");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_79);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_79.insert(UnderlyingSecurityAltIDSource_79.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_79);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_80;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_80("STRING_1046471123");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_80);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_80.insert(UnderlyingSecurityAltID_80.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_80("STRING_164420481");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_80);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_80.insert(UnderlyingSecurityAltIDSource_80.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_80);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_80;
        FIX::UnderlyingStipType UnderlyingStipType_80("STRING_1982100248");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_80);
        UnderlyingStipulations_NoUnderlyingStips_80.insert(UnderlyingStipType_80.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_80("STRING_952795934");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_80);
        UnderlyingStipulations_NoUnderlyingStips_80.insert(UnderlyingStipValue_80.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_80);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_81;
        FIX::UnderlyingStipType UnderlyingStipType_81("STRING_1345867288");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_81);
        UnderlyingStipulations_NoUnderlyingStips_81.insert(UnderlyingStipType_81.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_81("STRING_512552733");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_81);
        UnderlyingStipulations_NoUnderlyingStips_81.insert(UnderlyingStipValue_81.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_81);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_78;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_78("STRING_1742644842");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_78);
        UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyID_78.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_78('2');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_78);
        UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyIDSource_78.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_78(1666265002);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_78);
        UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyRole_78.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_78);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_151("STRING_939473613");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_151);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151.insert(UnderlyingInstrumentPartySubID_151.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_151(270395007);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_151);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151.insert(UnderlyingInstrumentPartySubIDType_151.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_152("STRING_1673244362");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_152);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152.insert(UnderlyingInstrumentPartySubID_152.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_152(1726954208);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_152);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152.insert(UnderlyingInstrumentPartySubIDType_152.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_153("STRING_1632897960");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_153);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153.insert(UnderlyingInstrumentPartySubID_153.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_153(396135408);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_153);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153.insert(UnderlyingInstrumentPartySubIDType_153.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_41;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_41("DATA_1674168737");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_41);
      UnderlyingInstrument_41.insert(EncodedUnderlyingIssuer_41.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_41(956281124);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_41);
      UnderlyingInstrument_41.insert(EncodedUnderlyingIssuerLen_41.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_41("DATA_321635068");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_41);
      UnderlyingInstrument_41.insert(EncodedUnderlyingSecurityDesc_41.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_41(692042513);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_41);
      UnderlyingInstrument_41.insert(EncodedUnderlyingSecurityDescLen_41.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_41;
      UnderlyingAdjustedQuantity_41.setString("13663682");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_41);
      UnderlyingInstrument_41.insert(UnderlyingAdjustedQuantity_41.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_41;
      UnderlyingAllocationPercent_41.setString("79.690000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_41);
      UnderlyingInstrument_41.insert(UnderlyingAllocationPercent_41.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_41;
      UnderlyingAttachmentPoint_41.setString("31.610000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_41);
      UnderlyingInstrument_41.insert(UnderlyingAttachmentPoint_41.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_41("STRING_2146986229");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_41);
      UnderlyingInstrument_41.insert(UnderlyingCFICode_41.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_41("STRING_1614767655");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_41);
      UnderlyingInstrument_41.insert(UnderlyingCPProgram_41.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_41("STRING_262937179");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_41);
      UnderlyingInstrument_41.insert(UnderlyingCPRegType_41.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_41;
      UnderlyingCapValue_41.setString("11630434");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_41);
      UnderlyingInstrument_41.insert(UnderlyingCapValue_41.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_41;
      UnderlyingCashAmount_41.setString("21010235");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_41);
      UnderlyingInstrument_41.insert(UnderlyingCashAmount_41.getString());
      FIX::UnderlyingCashType UnderlyingCashType_41("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_41);
      UnderlyingInstrument_41.insert(UnderlyingCashType_41.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_41;
      UnderlyingContractMultiplier_41.setString("620309");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_41);
      UnderlyingInstrument_41.insert(UnderlyingContractMultiplier_41.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_41(117960404);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_41);
      UnderlyingInstrument_41.insert(UnderlyingContractMultiplierUnit_41.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_41("COUNTRY_1952841088");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_41);
      UnderlyingInstrument_41.insert(UnderlyingCountryOfIssue_41.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_41("LOCALMKTDATE_2044131218");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_41);
      UnderlyingInstrument_41.insert(UnderlyingCouponPaymentDate_41.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_41;
      UnderlyingCouponRate_41.setString("63.380000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_41);
      UnderlyingInstrument_41.insert(UnderlyingCouponRate_41.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_41("STRING_1151224728");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_41);
      UnderlyingInstrument_41.insert(UnderlyingCreditRating_41.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_41("GBP");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_41);
      UnderlyingInstrument_41.insert(UnderlyingCurrency_41.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_41;
      UnderlyingCurrentValue_41.setString("7463859");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_41);
      UnderlyingInstrument_41.insert(UnderlyingCurrentValue_41.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_41;
      UnderlyingDetachmentPoint_41.setString("46.210000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_41);
      UnderlyingInstrument_41.insert(UnderlyingDetachmentPoint_41.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_41;
      UnderlyingDirtyPrice_41.setString("13892308");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_41);
      UnderlyingInstrument_41.insert(UnderlyingDirtyPrice_41.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_41;
      UnderlyingEndPrice_41.setString("1945877");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_41);
      UnderlyingInstrument_41.insert(UnderlyingEndPrice_41.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_41;
      UnderlyingEndValue_41.setString("13030382");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_41);
      UnderlyingInstrument_41.insert(UnderlyingEndValue_41.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_41(1659625807);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_41);
      UnderlyingInstrument_41.insert(UnderlyingExerciseStyle_41.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_41;
      UnderlyingFXRate_41.setString("18678321");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_41);
      UnderlyingInstrument_41.insert(UnderlyingFXRate_41.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_41('D');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_41);
      UnderlyingInstrument_41.insert(UnderlyingFXRateCalc_41.getString());
      FIX::UnderlyingFactor UnderlyingFactor_41;
      UnderlyingFactor_41.setString("11450401");
      noUnderlyings_0_1_1.set(UnderlyingFactor_41);
      UnderlyingInstrument_41.insert(UnderlyingFactor_41.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_41(116483872);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_41);
      UnderlyingInstrument_41.insert(UnderlyingFlowScheduleType_41.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_41("STRING_409193884");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_41);
      UnderlyingInstrument_41.insert(UnderlyingInstrRegistry_41.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_41("LOCALMKTDATE_2101321243");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_41);
      UnderlyingInstrument_41.insert(UnderlyingIssueDate_41.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_41("STRING_438118940");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_41);
      UnderlyingInstrument_41.insert(UnderlyingIssuer_41.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_41("STRING_1101236397");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_41);
      UnderlyingInstrument_41.insert(UnderlyingLocaleOfIssue_41.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_41("LOCALMKTDATE_1320205844");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_41);
      UnderlyingInstrument_41.insert(UnderlyingMaturityDate_41.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_41("MONTHYEAR_213823261");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_41);
      UnderlyingInstrument_41.insert(UnderlyingMaturityMonthYear_41.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_41("TZTIMEONLY_609765910");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_41);
      UnderlyingInstrument_41.insert(UnderlyingMaturityTime_41.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_41;
      UnderlyingNotionalPercentageOutstanding_41.setString("84.250000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_41);
      UnderlyingInstrument_41.insert(UnderlyingNotionalPercentageOutstanding_41.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_41('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_41);
      UnderlyingInstrument_41.insert(UnderlyingOptAttribute_41.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_41;
      UnderlyingOriginalNotionalPercentageOutstanding_41.setString("30.890000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_41);
      UnderlyingInstrument_41.insert(UnderlyingOriginalNotionalPercentageOutstanding_41.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_41("STRING_335268272");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_41);
      UnderlyingInstrument_41.insert(UnderlyingPriceUnitOfMeasure_41.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_41;
      UnderlyingPriceUnitOfMeasureQty_41.setString("17821308");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_41);
      UnderlyingInstrument_41.insert(UnderlyingPriceUnitOfMeasureQty_41.getString());
      FIX::UnderlyingProduct UnderlyingProduct_41(310185819);
      noUnderlyings_0_1_1.set(UnderlyingProduct_41);
      UnderlyingInstrument_41.insert(UnderlyingProduct_41.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_41(397299243);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_41);
      UnderlyingInstrument_41.insert(UnderlyingPutOrCall_41.getString());
      FIX::UnderlyingPx UnderlyingPx_41;
      UnderlyingPx_41.setString("19000912");
      noUnderlyings_0_1_1.set(UnderlyingPx_41);
      UnderlyingInstrument_41.insert(UnderlyingPx_41.getString());
      FIX::UnderlyingQty UnderlyingQty_41;
      UnderlyingQty_41.setString("1155432");
      noUnderlyings_0_1_1.set(UnderlyingQty_41);
      UnderlyingInstrument_41.insert(UnderlyingQty_41.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_41("LOCALMKTDATE_293946813");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_41);
      UnderlyingInstrument_41.insert(UnderlyingRedemptionDate_41.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_41("STRING_823363935");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_41);
      UnderlyingInstrument_41.insert(UnderlyingRepoCollateralSecurityType_41.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_41;
      UnderlyingRepurchaseRate_41.setString("79.870000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_41);
      UnderlyingInstrument_41.insert(UnderlyingRepurchaseRate_41.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_41(703147117);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_41);
      UnderlyingInstrument_41.insert(UnderlyingRepurchaseTerm_41.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_41("STRING_546329733");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_41);
      UnderlyingInstrument_41.insert(UnderlyingRestructuringType_41.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_41("STRING_2013153909");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_41);
      UnderlyingInstrument_41.insert(UnderlyingSecurityDesc_41.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_41("EXCHANGE_1066711738");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_41);
      UnderlyingInstrument_41.insert(UnderlyingSecurityExchange_41.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_41("STRING_1935560533");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_41);
      UnderlyingInstrument_41.insert(UnderlyingSecurityID_41.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_41("STRING_60258011");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_41);
      UnderlyingInstrument_41.insert(UnderlyingSecurityIDSource_41.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_41("STRING_222266325");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_41);
      UnderlyingInstrument_41.insert(UnderlyingSecuritySubType_41.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_41("STRING_1447702692");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_41);
      UnderlyingInstrument_41.insert(UnderlyingSecurityType_41.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_41("STRING_1928090123");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_41);
      UnderlyingInstrument_41.insert(UnderlyingSeniority_41.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_41("STRING_1104775119");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_41);
      UnderlyingInstrument_41.insert(UnderlyingSettlMethod_41.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_41(4);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_41);
      UnderlyingInstrument_41.insert(UnderlyingSettlementType_41.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_41;
      UnderlyingStartValue_41.setString("20445739");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_41);
      UnderlyingInstrument_41.insert(UnderlyingStartValue_41.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_41("STRING_1513969003");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_41);
      UnderlyingInstrument_41.insert(UnderlyingStateOrProvinceOfIssue_41.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_41("JPY");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_41);
      UnderlyingInstrument_41.insert(UnderlyingStrikeCurrency_41.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_41;
      UnderlyingStrikePrice_41.setString("4677217");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_41);
      UnderlyingInstrument_41.insert(UnderlyingStrikePrice_41.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_41("STRING_1719302603");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_41);
      UnderlyingInstrument_41.insert(UnderlyingSymbol_41.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_41("STRING_549032550");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_41);
      UnderlyingInstrument_41.insert(UnderlyingSymbolSfx_41.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_41("STRING_1077487663");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_41);
      UnderlyingInstrument_41.insert(UnderlyingTimeUnit_41.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_41("STRING_891527380");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_41);
      UnderlyingInstrument_41.insert(UnderlyingUnitOfMeasure_41.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_41;
      UnderlyingUnitOfMeasureQty_41.setString("2301398");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_41);
      UnderlyingInstrument_41.insert(UnderlyingUnitOfMeasureQty_41.getString());
      all_values.push_back(UnderlyingInstrument_41);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_81;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_81("STRING_1226795653");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_81);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_81.insert(UnderlyingSecurityAltID_81.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_81("STRING_2012270658");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_81);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_81.insert(UnderlyingSecurityAltIDSource_81.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_81);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_82;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_82("STRING_112892924");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_82);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_82.insert(UnderlyingSecurityAltID_82.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_82("STRING_1624094896");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_82);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_82.insert(UnderlyingSecurityAltIDSource_82.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_82);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_82;
        FIX::UnderlyingStipType UnderlyingStipType_82("STRING_228436184");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_82);
        UnderlyingStipulations_NoUnderlyingStips_82.insert(UnderlyingStipType_82.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_82("STRING_1918041709");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_82);
        UnderlyingStipulations_NoUnderlyingStips_82.insert(UnderlyingStipValue_82.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_82);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_83;
        FIX::UnderlyingStipType UnderlyingStipType_83("STRING_440758542");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_83);
        UnderlyingStipulations_NoUnderlyingStips_83.insert(UnderlyingStipType_83.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_83("STRING_1495204171");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_83);
        UnderlyingStipulations_NoUnderlyingStips_83.insert(UnderlyingStipValue_83.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_83);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_84;
        FIX::UnderlyingStipType UnderlyingStipType_84("STRING_473705179");
        noUnderlyingStips_0_1_2_2.set(UnderlyingStipType_84);
        UnderlyingStipulations_NoUnderlyingStips_84.insert(UnderlyingStipType_84.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_84("STRING_987088275");
        noUnderlyingStips_0_1_2_2.set(UnderlyingStipValue_84);
        UnderlyingStipulations_NoUnderlyingStips_84.insert(UnderlyingStipValue_84.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_84);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_79;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_79("STRING_1540416917");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_79);
        UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyID_79.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_79('7');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_79);
        UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyIDSource_79.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_79(1421132444);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_79);
        UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyRole_79.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_79);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_154("STRING_75384204");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_154);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154.insert(UnderlyingInstrumentPartySubID_154.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_154(1201738920);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_154);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154.insert(UnderlyingInstrumentPartySubIDType_154.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_155("STRING_719974714");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_155);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155.insert(UnderlyingInstrumentPartySubID_155.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_155(520643368);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_155);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155.insert(UnderlyingInstrumentPartySubIDType_155.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_156("STRING_1098829268");
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubID_156);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156.insert(UnderlyingInstrumentPartySubID_156.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_156(86460069);
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_156);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156.insert(UnderlyingInstrumentPartySubIDType_156.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_1);
    }
    msg.addGroup(noStrikes_0_0);
  }
  {
    FIX50SP2::ListStrikePrice::NoStrikes noStrikes_0_1;
    // InstrmtStrkPxGrp.NoStrikes
    multiset<string> InstrmtStrkPxGrp_NoStrikes_1;
    FIX::ClOrdID ClOrdID_25("STRING_919740128");
    noStrikes_0_1.set(ClOrdID_25);
    InstrmtStrkPxGrp_NoStrikes_1.insert(ClOrdID_25.getString());
    FIX::Currency Currency_22("USD");
    noStrikes_0_1.set(Currency_22);
    InstrmtStrkPxGrp_NoStrikes_1.insert(Currency_22.getString());
    FIX::EncodedText EncodedText_43("DATA_491559083");
    noStrikes_0_1.set(EncodedText_43);
    InstrmtStrkPxGrp_NoStrikes_1.insert(EncodedText_43.getString());
    FIX::EncodedTextLen EncodedTextLen_43(1983071106);
    noStrikes_0_1.set(EncodedTextLen_43);
    InstrmtStrkPxGrp_NoStrikes_1.insert(EncodedTextLen_43.getString());
    FIX::PrevClosePx PrevClosePx_2;
    PrevClosePx_2.setString("16316694");
    noStrikes_0_1.set(PrevClosePx_2);
    InstrmtStrkPxGrp_NoStrikes_1.insert(PrevClosePx_2.getString());
    FIX::Price Price_11;
    Price_11.setString("13830864");
    noStrikes_0_1.set(Price_11);
    InstrmtStrkPxGrp_NoStrikes_1.insert(Price_11.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_23("STRING_65727277");
    noStrikes_0_1.set(SecondaryClOrdID_23);
    InstrmtStrkPxGrp_NoStrikes_1.insert(SecondaryClOrdID_23.getString());
    FIX::Side Side_22('G');
    noStrikes_0_1.set(Side_22);
    InstrmtStrkPxGrp_NoStrikes_1.insert(Side_22.getString());
    FIX::Text Text_43("STRING_462398469");
    noStrikes_0_1.set(Text_43);
    InstrmtStrkPxGrp_NoStrikes_1.insert(Text_43.getString());
    all_values.push_back(InstrmtStrkPxGrp_NoStrikes_1);

    // Instrument
    multiset<string> Instrument_27;
    FIX::AttachmentPoint AttachmentPoint_27;
    AttachmentPoint_27.setString("79.350000");
    noStrikes_0_1.set(AttachmentPoint_27);
    Instrument_27.insert(AttachmentPoint_27.getString());
    FIX::CFICode CFICode_27("STRING_1547269515");
    noStrikes_0_1.set(CFICode_27);
    Instrument_27.insert(CFICode_27.getString());
    FIX::CPProgram CPProgram_27(2);
    noStrikes_0_1.set(CPProgram_27);
    Instrument_27.insert(CPProgram_27.getString());
    FIX::CPRegType CPRegType_27("STRING_1695392542");
    noStrikes_0_1.set(CPRegType_27);
    Instrument_27.insert(CPRegType_27.getString());
    FIX::CapPrice CapPrice_27;
    CapPrice_27.setString("17757056");
    noStrikes_0_1.set(CapPrice_27);
    Instrument_27.insert(CapPrice_27.getString());
    FIX::ContractMultiplier ContractMultiplier_27;
    ContractMultiplier_27.setString("18570514");
    noStrikes_0_1.set(ContractMultiplier_27);
    Instrument_27.insert(ContractMultiplier_27.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_27(1);
    noStrikes_0_1.set(ContractMultiplierUnit_27);
    Instrument_27.insert(ContractMultiplierUnit_27.getString());
    FIX::ContractSettlMonth ContractSettlMonth_27("MONTHYEAR_1123426223");
    noStrikes_0_1.set(ContractSettlMonth_27);
    Instrument_27.insert(ContractSettlMonth_27.getString());
    FIX::CountryOfIssue CountryOfIssue_27("COUNTRY_183272957");
    noStrikes_0_1.set(CountryOfIssue_27);
    Instrument_27.insert(CountryOfIssue_27.getString());
    FIX::CouponPaymentDate CouponPaymentDate_27("LOCALMKTDATE_975755711");
    noStrikes_0_1.set(CouponPaymentDate_27);
    Instrument_27.insert(CouponPaymentDate_27.getString());
    FIX::CouponRate CouponRate_27;
    CouponRate_27.setString("70.080000");
    noStrikes_0_1.set(CouponRate_27);
    Instrument_27.insert(CouponRate_27.getString());
    FIX::CreditRating CreditRating_27("STRING_1723689875");
    noStrikes_0_1.set(CreditRating_27);
    Instrument_27.insert(CreditRating_27.getString());
    FIX::DatedDate DatedDate_27("LOCALMKTDATE_1750920871");
    noStrikes_0_1.set(DatedDate_27);
    Instrument_27.insert(DatedDate_27.getString());
    FIX::DetachmentPoint DetachmentPoint_27;
    DetachmentPoint_27.setString("94.520000");
    noStrikes_0_1.set(DetachmentPoint_27);
    Instrument_27.insert(DetachmentPoint_27.getString());
    FIX::EncodedIssuer EncodedIssuer_27("DATA_1338889469");
    noStrikes_0_1.set(EncodedIssuer_27);
    Instrument_27.insert(EncodedIssuer_27.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_27(1826305076);
    noStrikes_0_1.set(EncodedIssuerLen_27);
    Instrument_27.insert(EncodedIssuerLen_27.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_27("DATA_812204724");
    noStrikes_0_1.set(EncodedSecurityDesc_27);
    Instrument_27.insert(EncodedSecurityDesc_27.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_27(2058864183);
    noStrikes_0_1.set(EncodedSecurityDescLen_27);
    Instrument_27.insert(EncodedSecurityDescLen_27.getString());
    FIX::ExerciseStyle ExerciseStyle_27(1);
    noStrikes_0_1.set(ExerciseStyle_27);
    Instrument_27.insert(ExerciseStyle_27.getString());
    FIX::Factor Factor_27;
    Factor_27.setString("19110339");
    noStrikes_0_1.set(Factor_27);
    Instrument_27.insert(Factor_27.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_27(false);
    noStrikes_0_1.set(FlexProductEligibilityIndicator_27);
    Instrument_27.insert(FlexProductEligibilityIndicator_27.getString());
    FIX::FlexibleIndicator FlexibleIndicator_27(true);
    noStrikes_0_1.set(FlexibleIndicator_27);
    Instrument_27.insert(FlexibleIndicator_27.getString());
    FIX::FloorPrice FloorPrice_27;
    FloorPrice_27.setString("11975889");
    noStrikes_0_1.set(FloorPrice_27);
    Instrument_27.insert(FloorPrice_27.getString());
    FIX::FlowScheduleType FlowScheduleType_27(2);
    noStrikes_0_1.set(FlowScheduleType_27);
    Instrument_27.insert(FlowScheduleType_27.getString());
    FIX::InstrRegistry InstrRegistry_27("STRING_1610764008");
    noStrikes_0_1.set(InstrRegistry_27);
    Instrument_27.insert(InstrRegistry_27.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_27('1');
    noStrikes_0_1.set(InstrmtAssignmentMethod_27);
    Instrument_27.insert(InstrmtAssignmentMethod_27.getString());
    FIX::InterestAccrualDate InterestAccrualDate_27("LOCALMKTDATE_36208265");
    noStrikes_0_1.set(InterestAccrualDate_27);
    Instrument_27.insert(InterestAccrualDate_27.getString());
    FIX::IssueDate IssueDate_27("LOCALMKTDATE_846366824");
    noStrikes_0_1.set(IssueDate_27);
    Instrument_27.insert(IssueDate_27.getString());
    FIX::Issuer Issuer_27("STRING_1098903636");
    noStrikes_0_1.set(Issuer_27);
    Instrument_27.insert(Issuer_27.getString());
    FIX::ListMethod ListMethod_27(0);
    noStrikes_0_1.set(ListMethod_27);
    Instrument_27.insert(ListMethod_27.getString());
    FIX::LocaleOfIssue LocaleOfIssue_27("STRING_1308765293");
    noStrikes_0_1.set(LocaleOfIssue_27);
    Instrument_27.insert(LocaleOfIssue_27.getString());
    FIX::MaturityDate MaturityDate_27("LOCALMKTDATE_1029417924");
    noStrikes_0_1.set(MaturityDate_27);
    Instrument_27.insert(MaturityDate_27.getString());
    FIX::MaturityMonthYear MaturityMonthYear_27("MONTHYEAR_870370724");
    noStrikes_0_1.set(MaturityMonthYear_27);
    Instrument_27.insert(MaturityMonthYear_27.getString());
    FIX::MaturityTime MaturityTime_27("TZTIMEONLY_1247775010");
    noStrikes_0_1.set(MaturityTime_27);
    Instrument_27.insert(MaturityTime_27.getString());
    FIX::MinPriceIncrement MinPriceIncrement_27;
    MinPriceIncrement_27.setString("5773268");
    noStrikes_0_1.set(MinPriceIncrement_27);
    Instrument_27.insert(MinPriceIncrement_27.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_27;
    MinPriceIncrementAmount_27.setString("4985927");
    noStrikes_0_1.set(MinPriceIncrementAmount_27);
    Instrument_27.insert(MinPriceIncrementAmount_27.getString());
    FIX::NTPositionLimit NTPositionLimit_27(957342788);
    noStrikes_0_1.set(NTPositionLimit_27);
    Instrument_27.insert(NTPositionLimit_27.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_27;
    NotionalPercentageOutstanding_27.setString("42.550000");
    noStrikes_0_1.set(NotionalPercentageOutstanding_27);
    Instrument_27.insert(NotionalPercentageOutstanding_27.getString());
    FIX::OptAttribute OptAttribute_27('1');
    noStrikes_0_1.set(OptAttribute_27);
    Instrument_27.insert(OptAttribute_27.getString());
    FIX::OptPayoutAmount OptPayoutAmount_27;
    OptPayoutAmount_27.setString("11406157");
    noStrikes_0_1.set(OptPayoutAmount_27);
    Instrument_27.insert(OptPayoutAmount_27.getString());
    FIX::OptPayoutType OptPayoutType_27(2);
    noStrikes_0_1.set(OptPayoutType_27);
    Instrument_27.insert(OptPayoutType_27.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_27;
    OriginalNotionalPercentageOutstanding_27.setString("60.060000");
    noStrikes_0_1.set(OriginalNotionalPercentageOutstanding_27);
    Instrument_27.insert(OriginalNotionalPercentageOutstanding_27.getString());
    FIX::Pool Pool_27("STRING_716821973");
    noStrikes_0_1.set(Pool_27);
    Instrument_27.insert(Pool_27.getString());
    FIX::PositionLimit PositionLimit_27(1145187190);
    noStrikes_0_1.set(PositionLimit_27);
    Instrument_27.insert(PositionLimit_27.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_27("STRING_PCTPAR");
    noStrikes_0_1.set(PriceQuoteMethod_27);
    Instrument_27.insert(PriceQuoteMethod_27.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_27("STRING_2055711442");
    noStrikes_0_1.set(PriceUnitOfMeasure_27);
    Instrument_27.insert(PriceUnitOfMeasure_27.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_27;
    PriceUnitOfMeasureQty_27.setString("8240086");
    noStrikes_0_1.set(PriceUnitOfMeasureQty_27);
    Instrument_27.insert(PriceUnitOfMeasureQty_27.getString());
    FIX::Product Product_29(8);
    noStrikes_0_1.set(Product_29);
    Instrument_27.insert(Product_29.getString());
    FIX::ProductComplex ProductComplex_27("STRING_1967091978");
    noStrikes_0_1.set(ProductComplex_27);
    Instrument_27.insert(ProductComplex_27.getString());
    FIX::PutOrCall PutOrCall_27(0);
    noStrikes_0_1.set(PutOrCall_27);
    Instrument_27.insert(PutOrCall_27.getString());
    FIX::RedemptionDate RedemptionDate_27("LOCALMKTDATE_2145056880");
    noStrikes_0_1.set(RedemptionDate_27);
    Instrument_27.insert(RedemptionDate_27.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_27("STRING_1964932583");
    noStrikes_0_1.set(RepoCollateralSecurityType_27);
    Instrument_27.insert(RepoCollateralSecurityType_27.getString());
    FIX::RepurchaseRate RepurchaseRate_27;
    RepurchaseRate_27.setString("83.390000");
    noStrikes_0_1.set(RepurchaseRate_27);
    Instrument_27.insert(RepurchaseRate_27.getString());
    FIX::RepurchaseTerm RepurchaseTerm_27(1195162133);
    noStrikes_0_1.set(RepurchaseTerm_27);
    Instrument_27.insert(RepurchaseTerm_27.getString());
    FIX::RestructuringType RestructuringType_27("STRING_MM");
    noStrikes_0_1.set(RestructuringType_27);
    Instrument_27.insert(RestructuringType_27.getString());
    FIX::SecurityDesc SecurityDesc_27("STRING_1605958699");
    noStrikes_0_1.set(SecurityDesc_27);
    Instrument_27.insert(SecurityDesc_27.getString());
    FIX::SecurityExchange SecurityExchange_27("EXCHANGE_80854844");
    noStrikes_0_1.set(SecurityExchange_27);
    Instrument_27.insert(SecurityExchange_27.getString());
    FIX::SecurityGroup SecurityGroup_27("STRING_405679628");
    noStrikes_0_1.set(SecurityGroup_27);
    Instrument_27.insert(SecurityGroup_27.getString());
    FIX::SecurityID SecurityID_27("STRING_304841875");
    noStrikes_0_1.set(SecurityID_27);
    Instrument_27.insert(SecurityID_27.getString());
    FIX::SecurityIDSource SecurityIDSource_27("STRING_C");
    noStrikes_0_1.set(SecurityIDSource_27);
    Instrument_27.insert(SecurityIDSource_27.getString());
    FIX::SecurityStatus SecurityStatus_27("STRING_1");
    noStrikes_0_1.set(SecurityStatus_27);
    Instrument_27.insert(SecurityStatus_27.getString());
    FIX::SecuritySubType SecuritySubType_28("STRING_1613607168");
    noStrikes_0_1.set(SecuritySubType_28);
    Instrument_27.insert(SecuritySubType_28.getString());
    FIX::SecurityType SecurityType_29("STRING_FXSPOT");
    noStrikes_0_1.set(SecurityType_29);
    Instrument_27.insert(SecurityType_29.getString());
    FIX::Seniority Seniority_27("STRING_SB");
    noStrikes_0_1.set(Seniority_27);
    Instrument_27.insert(Seniority_27.getString());
    FIX::SettlMethod SettlMethod_27('C');
    noStrikes_0_1.set(SettlMethod_27);
    Instrument_27.insert(SettlMethod_27.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_27("STRING_639019575");
    noStrikes_0_1.set(SettleOnOpenFlag_27);
    Instrument_27.insert(SettleOnOpenFlag_27.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_27("STRING_1097744336");
    noStrikes_0_1.set(StateOrProvinceOfIssue_27);
    Instrument_27.insert(StateOrProvinceOfIssue_27.getString());
    FIX::StrikeCurrency StrikeCurrency_27("GBP");
    noStrikes_0_1.set(StrikeCurrency_27);
    Instrument_27.insert(StrikeCurrency_27.getString());
    FIX::StrikeMultiplier StrikeMultiplier_27;
    StrikeMultiplier_27.setString("5722796");
    noStrikes_0_1.set(StrikeMultiplier_27);
    Instrument_27.insert(StrikeMultiplier_27.getString());
    FIX::StrikePrice StrikePrice_27;
    StrikePrice_27.setString("6643734");
    noStrikes_0_1.set(StrikePrice_27);
    Instrument_27.insert(StrikePrice_27.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_27(5);
    noStrikes_0_1.set(StrikePriceBoundaryMethod_27);
    Instrument_27.insert(StrikePriceBoundaryMethod_27.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_27;
    StrikePriceBoundaryPrecision_27.setString("20.450000");
    noStrikes_0_1.set(StrikePriceBoundaryPrecision_27);
    Instrument_27.insert(StrikePriceBoundaryPrecision_27.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_27(2);
    noStrikes_0_1.set(StrikePriceDeterminationMethod_27);
    Instrument_27.insert(StrikePriceDeterminationMethod_27.getString());
    FIX::StrikeValue StrikeValue_27;
    StrikeValue_27.setString("17444673");
    noStrikes_0_1.set(StrikeValue_27);
    Instrument_27.insert(StrikeValue_27.getString());
    FIX::Symbol Symbol_27("STRING_1952933856");
    noStrikes_0_1.set(Symbol_27);
    Instrument_27.insert(Symbol_27.getString());
    FIX::SymbolSfx SymbolSfx_27("STRING_CD");
    noStrikes_0_1.set(SymbolSfx_27);
    Instrument_27.insert(SymbolSfx_27.getString());
    FIX::TimeUnit TimeUnit_27("STRING_D");
    noStrikes_0_1.set(TimeUnit_27);
    Instrument_27.insert(TimeUnit_27.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_27(4);
    noStrikes_0_1.set(UnderlyingPriceDeterminationMethod_27);
    Instrument_27.insert(UnderlyingPriceDeterminationMethod_27.getString());
    FIX::UnitOfMeasure UnitOfMeasure_27("STRING_lbs");
    noStrikes_0_1.set(UnitOfMeasure_27);
    Instrument_27.insert(UnitOfMeasure_27.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_27;
    UnitOfMeasureQty_27.setString("14444657");
    noStrikes_0_1.set(UnitOfMeasureQty_27);
    Instrument_27.insert(UnitOfMeasureQty_27.getString());
    FIX::ValuationMethod ValuationMethod_27("STRING_FUTDA");
    noStrikes_0_1.set(ValuationMethod_27);
    Instrument_27.insert(ValuationMethod_27.getString());
    all_values.push_back(Instrument_27);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_54;
      FIX::ComplexEventCondition ComplexEventCondition_54(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventCondition_54.getString());
      FIX::ComplexEventPrice ComplexEventPrice_54;
      ComplexEventPrice_54.setString("12322084");
      noComplexEvents_1_1_0.set(ComplexEventPrice_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPrice_54.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_54(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceBoundaryMethod_54.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_54;
      ComplexEventPriceBoundaryPrecision_54.setString("54.650000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceBoundaryPrecision_54.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_54(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceTimeType_54.getString());
      FIX::ComplexEventType ComplexEventType_54(9);
      noComplexEvents_1_1_0.set(ComplexEventType_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventType_54.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_54;
      ComplexOptPayoutAmount_54.setString("12029773");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexOptPayoutAmount_54.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_54);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_115;
        FIX::ComplexEventEndDate ComplexEventEndDate_115(FIX::UTCTIMESTAMP(12, 15, 56, 10, 72014));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_115);
        ComplexEventDates_NoComplexEventDates_115.insert(ComplexEventEndDate_115.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_115(FIX::UTCTIMESTAMP(13, 31, 57, 14, 92011));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_115);
        ComplexEventDates_NoComplexEventDates_115.insert(ComplexEventStartDate_115.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_115);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_235;
          FIX::ComplexEventEndTime ComplexEventEndTime_235(FIX::UTCTIMEONLY(11, 42, 19));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_235);
          ComplexEventTimes_NoComplexEventTimes_235.insert(ComplexEventEndTime_235.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_235(FIX::UTCTIMEONLY(5, 7, 38));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_235);
          ComplexEventTimes_NoComplexEventTimes_235.insert(ComplexEventStartTime_235.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_235);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_236;
          FIX::ComplexEventEndTime ComplexEventEndTime_236(FIX::UTCTIMEONLY(3, 21, 49));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_236);
          ComplexEventTimes_NoComplexEventTimes_236.insert(ComplexEventEndTime_236.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_236(FIX::UTCTIMEONLY(1, 10, 34));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_236);
          ComplexEventTimes_NoComplexEventTimes_236.insert(ComplexEventStartTime_236.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_236);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_116;
        FIX::ComplexEventEndDate ComplexEventEndDate_116(FIX::UTCTIMESTAMP(22, 49, 37, 13, 92002));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_116);
        ComplexEventDates_NoComplexEventDates_116.insert(ComplexEventEndDate_116.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_116(FIX::UTCTIMESTAMP(9, 37, 23, 7, 22008));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_116);
        ComplexEventDates_NoComplexEventDates_116.insert(ComplexEventStartDate_116.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_116);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_237;
          FIX::ComplexEventEndTime ComplexEventEndTime_237(FIX::UTCTIMEONLY(5, 2, 0));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_237);
          ComplexEventTimes_NoComplexEventTimes_237.insert(ComplexEventEndTime_237.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_237(FIX::UTCTIMEONLY(7, 59, 48));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_237);
          ComplexEventTimes_NoComplexEventTimes_237.insert(ComplexEventStartTime_237.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_237);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_238;
          FIX::ComplexEventEndTime ComplexEventEndTime_238(FIX::UTCTIMEONLY(3, 2, 33));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_238);
          ComplexEventTimes_NoComplexEventTimes_238.insert(ComplexEventEndTime_238.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_238(FIX::UTCTIMEONLY(3, 35, 2));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_238);
          ComplexEventTimes_NoComplexEventTimes_238.insert(ComplexEventStartTime_238.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_238);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_239;
          FIX::ComplexEventEndTime ComplexEventEndTime_239(FIX::UTCTIMEONLY(1, 51, 25));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_239);
          ComplexEventTimes_NoComplexEventTimes_239.insert(ComplexEventEndTime_239.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_239(FIX::UTCTIMEONLY(15, 39, 56));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_239);
          ComplexEventTimes_NoComplexEventTimes_239.insert(ComplexEventStartTime_239.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_239);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_117;
        FIX::ComplexEventEndDate ComplexEventEndDate_117(FIX::UTCTIMESTAMP(16, 12, 35, 9, 32001));
        noComplexEventDates_1_0_2_2.set(ComplexEventEndDate_117);
        ComplexEventDates_NoComplexEventDates_117.insert(ComplexEventEndDate_117.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_117(FIX::UTCTIMESTAMP(8, 49, 15, 14, 22008));
        noComplexEventDates_1_0_2_2.set(ComplexEventStartDate_117);
        ComplexEventDates_NoComplexEventDates_117.insert(ComplexEventStartDate_117.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_117);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_240;
          FIX::ComplexEventEndTime ComplexEventEndTime_240(FIX::UTCTIMEONLY(21, 57, 9));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventEndTime_240);
          ComplexEventTimes_NoComplexEventTimes_240.insert(ComplexEventEndTime_240.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_240(FIX::UTCTIMEONLY(16, 44, 15));
          noComplexEventTimes_1_0_2_3_0.set(ComplexEventStartTime_240);
          ComplexEventTimes_NoComplexEventTimes_240.insert(ComplexEventStartTime_240.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_240);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_241;
          FIX::ComplexEventEndTime ComplexEventEndTime_241(FIX::UTCTIMEONLY(22, 58, 17));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventEndTime_241);
          ComplexEventTimes_NoComplexEventTimes_241.insert(ComplexEventEndTime_241.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_241(FIX::UTCTIMEONLY(14, 57, 33));
          noComplexEventTimes_1_0_2_3_1.set(ComplexEventStartTime_241);
          ComplexEventTimes_NoComplexEventTimes_241.insert(ComplexEventStartTime_241.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_241);

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noStrikes_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_55;
      FIX::ComplexEventCondition ComplexEventCondition_55(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventCondition_55.getString());
      FIX::ComplexEventPrice ComplexEventPrice_55;
      ComplexEventPrice_55.setString("10630629");
      noComplexEvents_1_1_1.set(ComplexEventPrice_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPrice_55.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_55(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceBoundaryMethod_55.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_55;
      ComplexEventPriceBoundaryPrecision_55.setString("46.580000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceBoundaryPrecision_55.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_55(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceTimeType_55.getString());
      FIX::ComplexEventType ComplexEventType_55(7);
      noComplexEvents_1_1_1.set(ComplexEventType_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventType_55.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_55;
      ComplexOptPayoutAmount_55.setString("10587400");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexOptPayoutAmount_55.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_55);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_118;
        FIX::ComplexEventEndDate ComplexEventEndDate_118(FIX::UTCTIMESTAMP(3, 8, 58, 24, 122009));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_118);
        ComplexEventDates_NoComplexEventDates_118.insert(ComplexEventEndDate_118.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_118(FIX::UTCTIMESTAMP(0, 34, 14, 5, 32002));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_118);
        ComplexEventDates_NoComplexEventDates_118.insert(ComplexEventStartDate_118.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_118);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_242;
          FIX::ComplexEventEndTime ComplexEventEndTime_242(FIX::UTCTIMEONLY(12, 11, 47));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_242);
          ComplexEventTimes_NoComplexEventTimes_242.insert(ComplexEventEndTime_242.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_242(FIX::UTCTIMEONLY(5, 36, 22));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_242);
          ComplexEventTimes_NoComplexEventTimes_242.insert(ComplexEventStartTime_242.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_242);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_119;
        FIX::ComplexEventEndDate ComplexEventEndDate_119(FIX::UTCTIMESTAMP(6, 7, 25, 5, 32003));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_119);
        ComplexEventDates_NoComplexEventDates_119.insert(ComplexEventEndDate_119.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_119(FIX::UTCTIMESTAMP(18, 30, 15, 24, 112000));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_119);
        ComplexEventDates_NoComplexEventDates_119.insert(ComplexEventStartDate_119.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_119);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_243;
          FIX::ComplexEventEndTime ComplexEventEndTime_243(FIX::UTCTIMEONLY(18, 3, 8));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_243);
          ComplexEventTimes_NoComplexEventTimes_243.insert(ComplexEventEndTime_243.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_243(FIX::UTCTIMEONLY(21, 59, 40));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_243);
          ComplexEventTimes_NoComplexEventTimes_243.insert(ComplexEventStartTime_243.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_243);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_244;
          FIX::ComplexEventEndTime ComplexEventEndTime_244(FIX::UTCTIMEONLY(3, 51, 42));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_244);
          ComplexEventTimes_NoComplexEventTimes_244.insert(ComplexEventEndTime_244.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_244(FIX::UTCTIMEONLY(20, 11, 14));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_244);
          ComplexEventTimes_NoComplexEventTimes_244.insert(ComplexEventStartTime_244.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_244);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_245;
          FIX::ComplexEventEndTime ComplexEventEndTime_245(FIX::UTCTIMEONLY(21, 13, 41));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventEndTime_245);
          ComplexEventTimes_NoComplexEventTimes_245.insert(ComplexEventEndTime_245.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_245(FIX::UTCTIMEONLY(16, 44, 4));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventStartTime_245);
          ComplexEventTimes_NoComplexEventTimes_245.insert(ComplexEventStartTime_245.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_245);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noStrikes_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_58;
      FIX::EventDate EventDate_58("LOCALMKTDATE_813105734");
      noEvents_1_1_0.set(EventDate_58);
      EvntGrp_NoEvents_58.insert(EventDate_58.getString());
      FIX::EventPx EventPx_58;
      EventPx_58.setString("9032197");
      noEvents_1_1_0.set(EventPx_58);
      EvntGrp_NoEvents_58.insert(EventPx_58.getString());
      FIX::EventText EventText_58("STRING_1120136454");
      noEvents_1_1_0.set(EventText_58);
      EvntGrp_NoEvents_58.insert(EventText_58.getString());
      FIX::EventTime EventTime_58(FIX::UTCTIMESTAMP(13, 23, 59, 12, 72013));
      noEvents_1_1_0.set(EventTime_58);
      EvntGrp_NoEvents_58.insert(EventTime_58.getString());
      FIX::EventType EventType_58(1);
      noEvents_1_1_0.set(EventType_58);
      EvntGrp_NoEvents_58.insert(EventType_58.getString());
      all_values.push_back(EvntGrp_NoEvents_58);

      noStrikes_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_59;
      FIX::EventDate EventDate_59("LOCALMKTDATE_432202663");
      noEvents_1_1_1.set(EventDate_59);
      EvntGrp_NoEvents_59.insert(EventDate_59.getString());
      FIX::EventPx EventPx_59;
      EventPx_59.setString("16825639");
      noEvents_1_1_1.set(EventPx_59);
      EvntGrp_NoEvents_59.insert(EventPx_59.getString());
      FIX::EventText EventText_59("STRING_1216492040");
      noEvents_1_1_1.set(EventText_59);
      EvntGrp_NoEvents_59.insert(EventText_59.getString());
      FIX::EventTime EventTime_59(FIX::UTCTIMESTAMP(6, 4, 12, 18, 12011));
      noEvents_1_1_1.set(EventTime_59);
      EvntGrp_NoEvents_59.insert(EventTime_59.getString());
      FIX::EventType EventType_59(14);
      noEvents_1_1_1.set(EventType_59);
      EvntGrp_NoEvents_59.insert(EventType_59.getString());
      all_values.push_back(EvntGrp_NoEvents_59);

      noStrikes_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_51;
      FIX::InstrumentPartyID InstrumentPartyID_51("STRING_1150011428");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_51);
      InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyID_51.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_51('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_51);
      InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyIDSource_51.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_51(125569618);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_51);
      InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyRole_51.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_51);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105;
        FIX::InstrumentPartySubID InstrumentPartySubID_105("STRING_577276154");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_105);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105.insert(InstrumentPartySubID_105.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_105(453903522);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_105);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105.insert(InstrumentPartySubIDType_105.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noStrikes_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_57;
      FIX::SecurityAltID SecurityAltID_57("STRING_2147157084");
      noSecurityAltID_1_1_0.set(SecurityAltID_57);
      SecAltIDGrp_NoSecurityAltID_57.insert(SecurityAltID_57.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_57("STRING_1267009257");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_57);
      SecAltIDGrp_NoSecurityAltID_57.insert(SecurityAltIDSource_57.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_57);

      noStrikes_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_58;
      FIX::SecurityAltID SecurityAltID_58("STRING_682376242");
      noSecurityAltID_1_1_1.set(SecurityAltID_58);
      SecAltIDGrp_NoSecurityAltID_58.insert(SecurityAltID_58.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_58("STRING_1119809890");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_58);
      SecAltIDGrp_NoSecurityAltID_58.insert(SecurityAltIDSource_58.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_58);

      noStrikes_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_59;
      FIX::SecurityAltID SecurityAltID_59("STRING_1574192341");
      noSecurityAltID_1_1_2.set(SecurityAltID_59);
      SecAltIDGrp_NoSecurityAltID_59.insert(SecurityAltID_59.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_59("STRING_1949169072");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_59);
      SecAltIDGrp_NoSecurityAltID_59.insert(SecurityAltIDSource_59.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_59);

      noStrikes_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_54;
    FIX::SecurityXML SecurityXML_55("XMLDATA_693383665");
    noStrikes_0_1.set(SecurityXML_55);
    FIX::SecurityXMLLen SecurityXMLLen_27(2089610280);
    noStrikes_0_1.set(SecurityXMLLen_27);
    FIX::SecurityXMLSchema SecurityXMLSchema_27("STRING_643290256");
    noStrikes_0_1.set(SecurityXMLSchema_27);
    SecurityXML_54.insert(SecurityXMLSchema_27.getString());
    all_values.push_back(SecurityXML_54);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_42;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_42("DATA_2019319860");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_42);
      UnderlyingInstrument_42.insert(EncodedUnderlyingIssuer_42.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_42(1629826856);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_42);
      UnderlyingInstrument_42.insert(EncodedUnderlyingIssuerLen_42.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_42("DATA_200932218");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_42);
      UnderlyingInstrument_42.insert(EncodedUnderlyingSecurityDesc_42.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_42(1554400190);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_42);
      UnderlyingInstrument_42.insert(EncodedUnderlyingSecurityDescLen_42.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_42;
      UnderlyingAdjustedQuantity_42.setString("6988352");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_42);
      UnderlyingInstrument_42.insert(UnderlyingAdjustedQuantity_42.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_42;
      UnderlyingAllocationPercent_42.setString("76.960000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_42);
      UnderlyingInstrument_42.insert(UnderlyingAllocationPercent_42.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_42;
      UnderlyingAttachmentPoint_42.setString("41.160000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_42);
      UnderlyingInstrument_42.insert(UnderlyingAttachmentPoint_42.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_42("STRING_721612752");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_42);
      UnderlyingInstrument_42.insert(UnderlyingCFICode_42.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_42("STRING_1774074369");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_42);
      UnderlyingInstrument_42.insert(UnderlyingCPProgram_42.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_42("STRING_1673565623");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_42);
      UnderlyingInstrument_42.insert(UnderlyingCPRegType_42.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_42;
      UnderlyingCapValue_42.setString("17561116");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_42);
      UnderlyingInstrument_42.insert(UnderlyingCapValue_42.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_42;
      UnderlyingCashAmount_42.setString("7007496");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_42);
      UnderlyingInstrument_42.insert(UnderlyingCashAmount_42.getString());
      FIX::UnderlyingCashType UnderlyingCashType_42("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_42);
      UnderlyingInstrument_42.insert(UnderlyingCashType_42.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_42;
      UnderlyingContractMultiplier_42.setString("17122985");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_42);
      UnderlyingInstrument_42.insert(UnderlyingContractMultiplier_42.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_42(1850761053);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_42);
      UnderlyingInstrument_42.insert(UnderlyingContractMultiplierUnit_42.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_42("COUNTRY_2051170334");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_42);
      UnderlyingInstrument_42.insert(UnderlyingCountryOfIssue_42.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_42("LOCALMKTDATE_1837868187");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_42);
      UnderlyingInstrument_42.insert(UnderlyingCouponPaymentDate_42.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_42;
      UnderlyingCouponRate_42.setString("9.910000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_42);
      UnderlyingInstrument_42.insert(UnderlyingCouponRate_42.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_42("STRING_480962841");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_42);
      UnderlyingInstrument_42.insert(UnderlyingCreditRating_42.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_42("JPY");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_42);
      UnderlyingInstrument_42.insert(UnderlyingCurrency_42.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_42;
      UnderlyingCurrentValue_42.setString("4806362");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_42);
      UnderlyingInstrument_42.insert(UnderlyingCurrentValue_42.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_42;
      UnderlyingDetachmentPoint_42.setString("73.190000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_42);
      UnderlyingInstrument_42.insert(UnderlyingDetachmentPoint_42.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_42;
      UnderlyingDirtyPrice_42.setString("16618037");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_42);
      UnderlyingInstrument_42.insert(UnderlyingDirtyPrice_42.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_42;
      UnderlyingEndPrice_42.setString("16004461");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_42);
      UnderlyingInstrument_42.insert(UnderlyingEndPrice_42.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_42;
      UnderlyingEndValue_42.setString("8380060");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_42);
      UnderlyingInstrument_42.insert(UnderlyingEndValue_42.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_42(1463489161);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_42);
      UnderlyingInstrument_42.insert(UnderlyingExerciseStyle_42.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_42;
      UnderlyingFXRate_42.setString("1463461");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_42);
      UnderlyingInstrument_42.insert(UnderlyingFXRate_42.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_42('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_42);
      UnderlyingInstrument_42.insert(UnderlyingFXRateCalc_42.getString());
      FIX::UnderlyingFactor UnderlyingFactor_42;
      UnderlyingFactor_42.setString("21067794");
      noUnderlyings_1_1_0.set(UnderlyingFactor_42);
      UnderlyingInstrument_42.insert(UnderlyingFactor_42.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_42(2062559389);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_42);
      UnderlyingInstrument_42.insert(UnderlyingFlowScheduleType_42.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_42("STRING_651968857");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_42);
      UnderlyingInstrument_42.insert(UnderlyingInstrRegistry_42.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_42("LOCALMKTDATE_1589122625");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_42);
      UnderlyingInstrument_42.insert(UnderlyingIssueDate_42.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_42("STRING_116007959");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_42);
      UnderlyingInstrument_42.insert(UnderlyingIssuer_42.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_42("STRING_58885399");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_42);
      UnderlyingInstrument_42.insert(UnderlyingLocaleOfIssue_42.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_42("LOCALMKTDATE_140474225");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_42);
      UnderlyingInstrument_42.insert(UnderlyingMaturityDate_42.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_42("MONTHYEAR_1249785656");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_42);
      UnderlyingInstrument_42.insert(UnderlyingMaturityMonthYear_42.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_42("TZTIMEONLY_60719516");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_42);
      UnderlyingInstrument_42.insert(UnderlyingMaturityTime_42.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_42;
      UnderlyingNotionalPercentageOutstanding_42.setString("69.780000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_42);
      UnderlyingInstrument_42.insert(UnderlyingNotionalPercentageOutstanding_42.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_42('8');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_42);
      UnderlyingInstrument_42.insert(UnderlyingOptAttribute_42.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_42;
      UnderlyingOriginalNotionalPercentageOutstanding_42.setString("51.390000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_42);
      UnderlyingInstrument_42.insert(UnderlyingOriginalNotionalPercentageOutstanding_42.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_42("STRING_470715023");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_42);
      UnderlyingInstrument_42.insert(UnderlyingPriceUnitOfMeasure_42.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_42;
      UnderlyingPriceUnitOfMeasureQty_42.setString("15771260");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_42);
      UnderlyingInstrument_42.insert(UnderlyingPriceUnitOfMeasureQty_42.getString());
      FIX::UnderlyingProduct UnderlyingProduct_42(2110004367);
      noUnderlyings_1_1_0.set(UnderlyingProduct_42);
      UnderlyingInstrument_42.insert(UnderlyingProduct_42.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_42(35529944);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_42);
      UnderlyingInstrument_42.insert(UnderlyingPutOrCall_42.getString());
      FIX::UnderlyingPx UnderlyingPx_42;
      UnderlyingPx_42.setString("12804034");
      noUnderlyings_1_1_0.set(UnderlyingPx_42);
      UnderlyingInstrument_42.insert(UnderlyingPx_42.getString());
      FIX::UnderlyingQty UnderlyingQty_42;
      UnderlyingQty_42.setString("20136910");
      noUnderlyings_1_1_0.set(UnderlyingQty_42);
      UnderlyingInstrument_42.insert(UnderlyingQty_42.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_42("LOCALMKTDATE_1873398132");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_42);
      UnderlyingInstrument_42.insert(UnderlyingRedemptionDate_42.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_42("STRING_333190750");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_42);
      UnderlyingInstrument_42.insert(UnderlyingRepoCollateralSecurityType_42.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_42;
      UnderlyingRepurchaseRate_42.setString("2.460000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_42);
      UnderlyingInstrument_42.insert(UnderlyingRepurchaseRate_42.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_42(2017686194);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_42);
      UnderlyingInstrument_42.insert(UnderlyingRepurchaseTerm_42.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_42("STRING_1312618244");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_42);
      UnderlyingInstrument_42.insert(UnderlyingRestructuringType_42.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_42("STRING_827806524");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_42);
      UnderlyingInstrument_42.insert(UnderlyingSecurityDesc_42.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_42("EXCHANGE_1281499865");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_42);
      UnderlyingInstrument_42.insert(UnderlyingSecurityExchange_42.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_42("STRING_826938333");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_42);
      UnderlyingInstrument_42.insert(UnderlyingSecurityID_42.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_42("STRING_280769044");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_42);
      UnderlyingInstrument_42.insert(UnderlyingSecurityIDSource_42.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_42("STRING_2119505877");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_42);
      UnderlyingInstrument_42.insert(UnderlyingSecuritySubType_42.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_42("STRING_142943846");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_42);
      UnderlyingInstrument_42.insert(UnderlyingSecurityType_42.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_42("STRING_427115229");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_42);
      UnderlyingInstrument_42.insert(UnderlyingSeniority_42.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_42("STRING_752154874");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_42);
      UnderlyingInstrument_42.insert(UnderlyingSettlMethod_42.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_42(5);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_42);
      UnderlyingInstrument_42.insert(UnderlyingSettlementType_42.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_42;
      UnderlyingStartValue_42.setString("3421909");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_42);
      UnderlyingInstrument_42.insert(UnderlyingStartValue_42.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_42("STRING_1404123731");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_42);
      UnderlyingInstrument_42.insert(UnderlyingStateOrProvinceOfIssue_42.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_42("GBP");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_42);
      UnderlyingInstrument_42.insert(UnderlyingStrikeCurrency_42.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_42;
      UnderlyingStrikePrice_42.setString("14630091");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_42);
      UnderlyingInstrument_42.insert(UnderlyingStrikePrice_42.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_42("STRING_1831836466");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_42);
      UnderlyingInstrument_42.insert(UnderlyingSymbol_42.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_42("STRING_1707984586");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_42);
      UnderlyingInstrument_42.insert(UnderlyingSymbolSfx_42.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_42("STRING_1523728647");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_42);
      UnderlyingInstrument_42.insert(UnderlyingTimeUnit_42.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_42("STRING_546439796");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_42);
      UnderlyingInstrument_42.insert(UnderlyingUnitOfMeasure_42.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_42;
      UnderlyingUnitOfMeasureQty_42.setString("4368773");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_42);
      UnderlyingInstrument_42.insert(UnderlyingUnitOfMeasureQty_42.getString());
      all_values.push_back(UnderlyingInstrument_42);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_83;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_83("STRING_1017154819");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_83);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_83.insert(UnderlyingSecurityAltID_83.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_83("STRING_2014003316");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_83);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_83.insert(UnderlyingSecurityAltIDSource_83.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_83);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_84;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_84("STRING_1073050857");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_84);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_84.insert(UnderlyingSecurityAltID_84.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_84("STRING_1052684763");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_84);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_84.insert(UnderlyingSecurityAltIDSource_84.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_84);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_85;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_85("STRING_1146923075");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltID_85);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_85.insert(UnderlyingSecurityAltID_85.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_85("STRING_939258262");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltIDSource_85);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_85.insert(UnderlyingSecurityAltIDSource_85.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_85);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_85;
        FIX::UnderlyingStipType UnderlyingStipType_85("STRING_1480113825");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_85);
        UnderlyingStipulations_NoUnderlyingStips_85.insert(UnderlyingStipType_85.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_85("STRING_1286428509");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_85);
        UnderlyingStipulations_NoUnderlyingStips_85.insert(UnderlyingStipValue_85.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_85);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_86;
        FIX::UnderlyingStipType UnderlyingStipType_86("STRING_648801793");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_86);
        UnderlyingStipulations_NoUnderlyingStips_86.insert(UnderlyingStipType_86.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_86("STRING_645248421");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_86);
        UnderlyingStipulations_NoUnderlyingStips_86.insert(UnderlyingStipValue_86.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_86);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_80;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_80("STRING_1930301658");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_80);
        UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyID_80.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_80('1');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_80);
        UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyIDSource_80.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_80(247520429);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_80);
        UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyRole_80.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_80);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_157("STRING_1615130601");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_157);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157.insert(UnderlyingInstrumentPartySubID_157.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_157(674635658);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_157);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157.insert(UnderlyingInstrumentPartySubIDType_157.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_158("STRING_506995114");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_158);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158.insert(UnderlyingInstrumentPartySubID_158.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_158(1717370217);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_158);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158.insert(UnderlyingInstrumentPartySubIDType_158.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_159("STRING_1016826629");
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubID_159);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159.insert(UnderlyingInstrumentPartySubID_159.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_159(1911118846);
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_159);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159.insert(UnderlyingInstrumentPartySubIDType_159.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noStrikes_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_43;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_43("DATA_1261248809");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_43);
      UnderlyingInstrument_43.insert(EncodedUnderlyingIssuer_43.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_43(1475025559);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_43);
      UnderlyingInstrument_43.insert(EncodedUnderlyingIssuerLen_43.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_43("DATA_1226644329");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_43);
      UnderlyingInstrument_43.insert(EncodedUnderlyingSecurityDesc_43.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_43(945601627);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_43);
      UnderlyingInstrument_43.insert(EncodedUnderlyingSecurityDescLen_43.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_43;
      UnderlyingAdjustedQuantity_43.setString("10355264");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_43);
      UnderlyingInstrument_43.insert(UnderlyingAdjustedQuantity_43.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_43;
      UnderlyingAllocationPercent_43.setString("93.280000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_43);
      UnderlyingInstrument_43.insert(UnderlyingAllocationPercent_43.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_43;
      UnderlyingAttachmentPoint_43.setString("14.230000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_43);
      UnderlyingInstrument_43.insert(UnderlyingAttachmentPoint_43.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_43("STRING_1472403812");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_43);
      UnderlyingInstrument_43.insert(UnderlyingCFICode_43.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_43("STRING_1713419466");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_43);
      UnderlyingInstrument_43.insert(UnderlyingCPProgram_43.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_43("STRING_361712594");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_43);
      UnderlyingInstrument_43.insert(UnderlyingCPRegType_43.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_43;
      UnderlyingCapValue_43.setString("13389234");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_43);
      UnderlyingInstrument_43.insert(UnderlyingCapValue_43.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_43;
      UnderlyingCashAmount_43.setString("6389866");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_43);
      UnderlyingInstrument_43.insert(UnderlyingCashAmount_43.getString());
      FIX::UnderlyingCashType UnderlyingCashType_43("STRING_FIXED");
      noUnderlyings_1_1_1.set(UnderlyingCashType_43);
      UnderlyingInstrument_43.insert(UnderlyingCashType_43.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_43;
      UnderlyingContractMultiplier_43.setString("3383629");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_43);
      UnderlyingInstrument_43.insert(UnderlyingContractMultiplier_43.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_43(1578244937);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_43);
      UnderlyingInstrument_43.insert(UnderlyingContractMultiplierUnit_43.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_43("COUNTRY_45512957");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_43);
      UnderlyingInstrument_43.insert(UnderlyingCountryOfIssue_43.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_43("LOCALMKTDATE_1818476732");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_43);
      UnderlyingInstrument_43.insert(UnderlyingCouponPaymentDate_43.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_43;
      UnderlyingCouponRate_43.setString("97.980000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_43);
      UnderlyingInstrument_43.insert(UnderlyingCouponRate_43.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_43("STRING_694314751");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_43);
      UnderlyingInstrument_43.insert(UnderlyingCreditRating_43.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_43("EUR");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_43);
      UnderlyingInstrument_43.insert(UnderlyingCurrency_43.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_43;
      UnderlyingCurrentValue_43.setString("4771327");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_43);
      UnderlyingInstrument_43.insert(UnderlyingCurrentValue_43.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_43;
      UnderlyingDetachmentPoint_43.setString("82.610000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_43);
      UnderlyingInstrument_43.insert(UnderlyingDetachmentPoint_43.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_43;
      UnderlyingDirtyPrice_43.setString("9314616");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_43);
      UnderlyingInstrument_43.insert(UnderlyingDirtyPrice_43.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_43;
      UnderlyingEndPrice_43.setString("2319730");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_43);
      UnderlyingInstrument_43.insert(UnderlyingEndPrice_43.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_43;
      UnderlyingEndValue_43.setString("12560752");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_43);
      UnderlyingInstrument_43.insert(UnderlyingEndValue_43.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_43(1606097271);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_43);
      UnderlyingInstrument_43.insert(UnderlyingExerciseStyle_43.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_43;
      UnderlyingFXRate_43.setString("7389681");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_43);
      UnderlyingInstrument_43.insert(UnderlyingFXRate_43.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_43('M');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_43);
      UnderlyingInstrument_43.insert(UnderlyingFXRateCalc_43.getString());
      FIX::UnderlyingFactor UnderlyingFactor_43;
      UnderlyingFactor_43.setString("4754402");
      noUnderlyings_1_1_1.set(UnderlyingFactor_43);
      UnderlyingInstrument_43.insert(UnderlyingFactor_43.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_43(502603314);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_43);
      UnderlyingInstrument_43.insert(UnderlyingFlowScheduleType_43.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_43("STRING_2087210593");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_43);
      UnderlyingInstrument_43.insert(UnderlyingInstrRegistry_43.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_43("LOCALMKTDATE_1950465811");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_43);
      UnderlyingInstrument_43.insert(UnderlyingIssueDate_43.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_43("STRING_1729247643");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_43);
      UnderlyingInstrument_43.insert(UnderlyingIssuer_43.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_43("STRING_885328572");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_43);
      UnderlyingInstrument_43.insert(UnderlyingLocaleOfIssue_43.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_43("LOCALMKTDATE_838508660");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_43);
      UnderlyingInstrument_43.insert(UnderlyingMaturityDate_43.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_43("MONTHYEAR_184653323");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_43);
      UnderlyingInstrument_43.insert(UnderlyingMaturityMonthYear_43.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_43("TZTIMEONLY_229886348");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_43);
      UnderlyingInstrument_43.insert(UnderlyingMaturityTime_43.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_43;
      UnderlyingNotionalPercentageOutstanding_43.setString("88.240000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_43);
      UnderlyingInstrument_43.insert(UnderlyingNotionalPercentageOutstanding_43.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_43('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_43);
      UnderlyingInstrument_43.insert(UnderlyingOptAttribute_43.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_43;
      UnderlyingOriginalNotionalPercentageOutstanding_43.setString("89.420000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_43);
      UnderlyingInstrument_43.insert(UnderlyingOriginalNotionalPercentageOutstanding_43.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_43("STRING_1502352304");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_43);
      UnderlyingInstrument_43.insert(UnderlyingPriceUnitOfMeasure_43.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_43;
      UnderlyingPriceUnitOfMeasureQty_43.setString("3895758");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_43);
      UnderlyingInstrument_43.insert(UnderlyingPriceUnitOfMeasureQty_43.getString());
      FIX::UnderlyingProduct UnderlyingProduct_43(2005996300);
      noUnderlyings_1_1_1.set(UnderlyingProduct_43);
      UnderlyingInstrument_43.insert(UnderlyingProduct_43.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_43(1840715212);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_43);
      UnderlyingInstrument_43.insert(UnderlyingPutOrCall_43.getString());
      FIX::UnderlyingPx UnderlyingPx_43;
      UnderlyingPx_43.setString("19678207");
      noUnderlyings_1_1_1.set(UnderlyingPx_43);
      UnderlyingInstrument_43.insert(UnderlyingPx_43.getString());
      FIX::UnderlyingQty UnderlyingQty_43;
      UnderlyingQty_43.setString("20515092");
      noUnderlyings_1_1_1.set(UnderlyingQty_43);
      UnderlyingInstrument_43.insert(UnderlyingQty_43.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_43("LOCALMKTDATE_1511708296");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_43);
      UnderlyingInstrument_43.insert(UnderlyingRedemptionDate_43.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_43("STRING_537526904");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_43);
      UnderlyingInstrument_43.insert(UnderlyingRepoCollateralSecurityType_43.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_43;
      UnderlyingRepurchaseRate_43.setString("3.610000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_43);
      UnderlyingInstrument_43.insert(UnderlyingRepurchaseRate_43.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_43(1827949802);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_43);
      UnderlyingInstrument_43.insert(UnderlyingRepurchaseTerm_43.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_43("STRING_1221468087");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_43);
      UnderlyingInstrument_43.insert(UnderlyingRestructuringType_43.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_43("STRING_1075473122");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_43);
      UnderlyingInstrument_43.insert(UnderlyingSecurityDesc_43.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_43("EXCHANGE_1468894415");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_43);
      UnderlyingInstrument_43.insert(UnderlyingSecurityExchange_43.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_43("STRING_5446052");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_43);
      UnderlyingInstrument_43.insert(UnderlyingSecurityID_43.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_43("STRING_1307446124");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_43);
      UnderlyingInstrument_43.insert(UnderlyingSecurityIDSource_43.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_43("STRING_577485982");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_43);
      UnderlyingInstrument_43.insert(UnderlyingSecuritySubType_43.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_43("STRING_1611543323");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_43);
      UnderlyingInstrument_43.insert(UnderlyingSecurityType_43.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_43("STRING_2046414240");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_43);
      UnderlyingInstrument_43.insert(UnderlyingSeniority_43.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_43("STRING_1403447765");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_43);
      UnderlyingInstrument_43.insert(UnderlyingSettlMethod_43.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_43(5);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_43);
      UnderlyingInstrument_43.insert(UnderlyingSettlementType_43.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_43;
      UnderlyingStartValue_43.setString("4015339");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_43);
      UnderlyingInstrument_43.insert(UnderlyingStartValue_43.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_43("STRING_1343174710");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_43);
      UnderlyingInstrument_43.insert(UnderlyingStateOrProvinceOfIssue_43.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_43("EUR");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_43);
      UnderlyingInstrument_43.insert(UnderlyingStrikeCurrency_43.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_43;
      UnderlyingStrikePrice_43.setString("810196");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_43);
      UnderlyingInstrument_43.insert(UnderlyingStrikePrice_43.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_43("STRING_580990750");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_43);
      UnderlyingInstrument_43.insert(UnderlyingSymbol_43.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_43("STRING_167951224");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_43);
      UnderlyingInstrument_43.insert(UnderlyingSymbolSfx_43.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_43("STRING_310905983");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_43);
      UnderlyingInstrument_43.insert(UnderlyingTimeUnit_43.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_43("STRING_744419574");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_43);
      UnderlyingInstrument_43.insert(UnderlyingUnitOfMeasure_43.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_43;
      UnderlyingUnitOfMeasureQty_43.setString("20660240");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_43);
      UnderlyingInstrument_43.insert(UnderlyingUnitOfMeasureQty_43.getString());
      all_values.push_back(UnderlyingInstrument_43);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_86;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_86("STRING_99288230");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_86);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_86.insert(UnderlyingSecurityAltID_86.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_86("STRING_308116181");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_86);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_86.insert(UnderlyingSecurityAltIDSource_86.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_86);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_87;
        FIX::UnderlyingStipType UnderlyingStipType_87("STRING_1940003442");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_87);
        UnderlyingStipulations_NoUnderlyingStips_87.insert(UnderlyingStipType_87.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_87("STRING_128453286");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_87);
        UnderlyingStipulations_NoUnderlyingStips_87.insert(UnderlyingStipValue_87.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_87);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_81;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_81("STRING_1304228091");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_81);
        UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyID_81.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_81('6');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_81);
        UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyIDSource_81.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_81(1263383549);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_81);
        UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyRole_81.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_81);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_160("STRING_1887448278");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_160);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160.insert(UnderlyingInstrumentPartySubID_160.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_160(191373023);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_160);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160.insert(UnderlyingInstrumentPartySubIDType_160.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_82;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_82("STRING_306105013");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_82);
        UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyID_82.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_82('1');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_82);
        UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyIDSource_82.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_82(1498819147);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_82);
        UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyRole_82.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_82);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_161("STRING_1356954005");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_161);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161.insert(UnderlyingInstrumentPartySubID_161.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_161(1397749739);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_161);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161.insert(UnderlyingInstrumentPartySubIDType_161.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_162("STRING_139555112");
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubID_162);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162.insert(UnderlyingInstrumentPartySubID_162.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_162(1296453932);
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_162);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162.insert(UnderlyingInstrumentPartySubIDType_162.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_163("STRING_1799283645");
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubID_163);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163.insert(UnderlyingInstrumentPartySubID_163.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_163(1482729823);
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_163);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163.insert(UnderlyingInstrumentPartySubIDType_163.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_83;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_83("STRING_1038936022");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_83);
        UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyID_83.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_83('1');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_83);
        UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyIDSource_83.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_83(1563749458);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_83);
        UndlyInstrumentParties_NoUndlyInstrumentParties_83.insert(UnderlyingInstrumentPartyRole_83.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_83);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_164("STRING_1950532770");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_164);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164.insert(UnderlyingInstrumentPartySubID_164.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_164(1874655441);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_164);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164.insert(UnderlyingInstrumentPartySubIDType_164.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_165("STRING_216862698");
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubID_165);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165.insert(UnderlyingInstrumentPartySubID_165.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_165(1869073135);
          noUndlyInstrumentPartySubIDs_1_1_2_3_1.set(UnderlyingInstrumentPartySubIDType_165);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165.insert(UnderlyingInstrumentPartySubIDType_165.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_166("STRING_629676718");
          noUndlyInstrumentPartySubIDs_1_1_2_3_2.set(UnderlyingInstrumentPartySubID_166);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166.insert(UnderlyingInstrumentPartySubID_166.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_166(316150928);
          noUndlyInstrumentPartySubIDs_1_1_2_3_2.set(UnderlyingInstrumentPartySubIDType_166);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166.insert(UnderlyingInstrumentPartySubIDType_166.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noStrikes_0_1.addGroup(noUnderlyings_1_1_1);
    }
    msg.addGroup(noStrikes_0_1);
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
