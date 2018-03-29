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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListStrikePrice msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStrikePrice_0;
  FIX::LastFragment LastFragment_7(true);
  msg.set(LastFragment_7);
  ListStrikePrice_0.insert(LastFragment_7.getString());
  FIX::ListID ListID_21("STRING_145326234");
  msg.set(ListID_21);
  ListStrikePrice_0.insert(ListID_21.getString());
  FIX::TotNoStrikes TotNoStrikes_0(1336297821);
  msg.set(TotNoStrikes_0);
  ListStrikePrice_0.insert(TotNoStrikes_0.getString());
  all_values.push_back(ListStrikePrice_0);

  all_compo_names.insert("ListStrikePrice");

  // InstrmtStrkPxGrp
  // Group InstrmtStrkPxGrp.NoStrikes
  {
    FIX50SP2::ListStrikePrice::NoStrikes noStrikes_0_0;
    // InstrmtStrkPxGrp.NoStrikes
    multiset<string> InstrmtStrkPxGrp_NoStrikes_0;
    FIX::ClOrdID ClOrdID_24("STRING_1105641478");
    noStrikes_0_0.set(ClOrdID_24);
    InstrmtStrkPxGrp_NoStrikes_0.insert(ClOrdID_24.getString());
    FIX::Currency Currency_22("USD");
    noStrikes_0_0.set(Currency_22);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Currency_22.getString());
    FIX::EncodedText EncodedText_45("DATA_376332116");
    noStrikes_0_0.set(EncodedText_45);
    InstrmtStrkPxGrp_NoStrikes_0.insert(EncodedText_45.getString());
    FIX::EncodedTextLen EncodedTextLen_45(1754417357);
    noStrikes_0_0.set(EncodedTextLen_45);
    InstrmtStrkPxGrp_NoStrikes_0.insert(EncodedTextLen_45.getString());
    FIX::PrevClosePx PrevClosePx_1;
    PrevClosePx_1.setString("7584725");
    noStrikes_0_0.set(PrevClosePx_1);
    InstrmtStrkPxGrp_NoStrikes_0.insert(PrevClosePx_1.getString());
    FIX::Price Price_12;
    Price_12.setString("16283880");
    noStrikes_0_0.set(Price_12);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Price_12.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_22("STRING_1226332016");
    noStrikes_0_0.set(SecondaryClOrdID_22);
    InstrmtStrkPxGrp_NoStrikes_0.insert(SecondaryClOrdID_22.getString());
    FIX::Side Side_23('A');
    noStrikes_0_0.set(Side_23);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Side_23.getString());
    FIX::Text Text_45("STRING_821628142");
    noStrikes_0_0.set(Text_45);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Text_45.getString());
    all_values.push_back(InstrmtStrkPxGrp_NoStrikes_0);
    all_compo_names.insert("InstrmtStrkPxGrp.NoStrikes");

    // Instrument
    multiset<string> Instrument_27;
    FIX::AttachmentPoint AttachmentPoint_27;
    AttachmentPoint_27.setString("17.970000");
    noStrikes_0_0.set(AttachmentPoint_27);
    Instrument_27.insert(AttachmentPoint_27.getString());
    FIX::CFICode CFICode_27("STRING_2002161633");
    noStrikes_0_0.set(CFICode_27);
    Instrument_27.insert(CFICode_27.getString());
    FIX::CPProgram CPProgram_27(1);
    noStrikes_0_0.set(CPProgram_27);
    Instrument_27.insert(CPProgram_27.getString());
    FIX::CPRegType CPRegType_27("STRING_1906484973");
    noStrikes_0_0.set(CPRegType_27);
    Instrument_27.insert(CPRegType_27.getString());
    FIX::CapPrice CapPrice_27;
    CapPrice_27.setString("1761087");
    noStrikes_0_0.set(CapPrice_27);
    Instrument_27.insert(CapPrice_27.getString());
    FIX::ContractMultiplier ContractMultiplier_27;
    ContractMultiplier_27.setString("5314997");
    noStrikes_0_0.set(ContractMultiplier_27);
    Instrument_27.insert(ContractMultiplier_27.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_27(1);
    noStrikes_0_0.set(ContractMultiplierUnit_27);
    Instrument_27.insert(ContractMultiplierUnit_27.getString());
    FIX::ContractSettlMonth ContractSettlMonth_27("MONTHYEAR_406355696");
    noStrikes_0_0.set(ContractSettlMonth_27);
    Instrument_27.insert(ContractSettlMonth_27.getString());
    FIX::CountryOfIssue CountryOfIssue_27("COUNTRY_1818802386");
    noStrikes_0_0.set(CountryOfIssue_27);
    Instrument_27.insert(CountryOfIssue_27.getString());
    FIX::CouponPaymentDate CouponPaymentDate_27("LOCALMKTDATE_2119426606");
    noStrikes_0_0.set(CouponPaymentDate_27);
    Instrument_27.insert(CouponPaymentDate_27.getString());
    FIX::CouponRate CouponRate_27;
    CouponRate_27.setString("5.940000");
    noStrikes_0_0.set(CouponRate_27);
    Instrument_27.insert(CouponRate_27.getString());
    FIX::CreditRating CreditRating_27("STRING_726937729");
    noStrikes_0_0.set(CreditRating_27);
    Instrument_27.insert(CreditRating_27.getString());
    FIX::DatedDate DatedDate_27("LOCALMKTDATE_37362780");
    noStrikes_0_0.set(DatedDate_27);
    Instrument_27.insert(DatedDate_27.getString());
    FIX::DetachmentPoint DetachmentPoint_27;
    DetachmentPoint_27.setString("49.090000");
    noStrikes_0_0.set(DetachmentPoint_27);
    Instrument_27.insert(DetachmentPoint_27.getString());
    FIX::EncodedIssuer EncodedIssuer_27("DATA_601783767");
    noStrikes_0_0.set(EncodedIssuer_27);
    Instrument_27.insert(EncodedIssuer_27.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_27(456788295);
    noStrikes_0_0.set(EncodedIssuerLen_27);
    Instrument_27.insert(EncodedIssuerLen_27.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_27("DATA_1490255090");
    noStrikes_0_0.set(EncodedSecurityDesc_27);
    Instrument_27.insert(EncodedSecurityDesc_27.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_27(963804832);
    noStrikes_0_0.set(EncodedSecurityDescLen_27);
    Instrument_27.insert(EncodedSecurityDescLen_27.getString());
    FIX::ExerciseStyle ExerciseStyle_27(1);
    noStrikes_0_0.set(ExerciseStyle_27);
    Instrument_27.insert(ExerciseStyle_27.getString());
    FIX::Factor Factor_27;
    Factor_27.setString("6790692");
    noStrikes_0_0.set(Factor_27);
    Instrument_27.insert(Factor_27.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_27(true);
    noStrikes_0_0.set(FlexProductEligibilityIndicator_27);
    Instrument_27.insert(FlexProductEligibilityIndicator_27.getString());
    FIX::FlexibleIndicator FlexibleIndicator_27(true);
    noStrikes_0_0.set(FlexibleIndicator_27);
    Instrument_27.insert(FlexibleIndicator_27.getString());
    FIX::FloorPrice FloorPrice_27;
    FloorPrice_27.setString("2925684");
    noStrikes_0_0.set(FloorPrice_27);
    Instrument_27.insert(FloorPrice_27.getString());
    FIX::FlowScheduleType FlowScheduleType_27(4);
    noStrikes_0_0.set(FlowScheduleType_27);
    Instrument_27.insert(FlowScheduleType_27.getString());
    FIX::InstrRegistry InstrRegistry_27("STRING_2084088124");
    noStrikes_0_0.set(InstrRegistry_27);
    Instrument_27.insert(InstrRegistry_27.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_27('2');
    noStrikes_0_0.set(InstrmtAssignmentMethod_27);
    Instrument_27.insert(InstrmtAssignmentMethod_27.getString());
    FIX::InterestAccrualDate InterestAccrualDate_27("LOCALMKTDATE_126362342");
    noStrikes_0_0.set(InterestAccrualDate_27);
    Instrument_27.insert(InterestAccrualDate_27.getString());
    FIX::IssueDate IssueDate_27("LOCALMKTDATE_1564992488");
    noStrikes_0_0.set(IssueDate_27);
    Instrument_27.insert(IssueDate_27.getString());
    FIX::Issuer Issuer_27("STRING_1125834129");
    noStrikes_0_0.set(Issuer_27);
    Instrument_27.insert(Issuer_27.getString());
    FIX::ListMethod ListMethod_27(1);
    noStrikes_0_0.set(ListMethod_27);
    Instrument_27.insert(ListMethod_27.getString());
    FIX::LocaleOfIssue LocaleOfIssue_27("STRING_239136982");
    noStrikes_0_0.set(LocaleOfIssue_27);
    Instrument_27.insert(LocaleOfIssue_27.getString());
    FIX::MaturityDate MaturityDate_27("LOCALMKTDATE_604932278");
    noStrikes_0_0.set(MaturityDate_27);
    Instrument_27.insert(MaturityDate_27.getString());
    FIX::MaturityMonthYear MaturityMonthYear_27("MONTHYEAR_727400881");
    noStrikes_0_0.set(MaturityMonthYear_27);
    Instrument_27.insert(MaturityMonthYear_27.getString());
    FIX::MaturityTime MaturityTime_27("TZTIMEONLY_589244734");
    noStrikes_0_0.set(MaturityTime_27);
    Instrument_27.insert(MaturityTime_27.getString());
    FIX::MinPriceIncrement MinPriceIncrement_27;
    MinPriceIncrement_27.setString("3639336");
    noStrikes_0_0.set(MinPriceIncrement_27);
    Instrument_27.insert(MinPriceIncrement_27.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_27;
    MinPriceIncrementAmount_27.setString("9035096");
    noStrikes_0_0.set(MinPriceIncrementAmount_27);
    Instrument_27.insert(MinPriceIncrementAmount_27.getString());
    FIX::NTPositionLimit NTPositionLimit_27(1120744475);
    noStrikes_0_0.set(NTPositionLimit_27);
    Instrument_27.insert(NTPositionLimit_27.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_27;
    NotionalPercentageOutstanding_27.setString("93.700000");
    noStrikes_0_0.set(NotionalPercentageOutstanding_27);
    Instrument_27.insert(NotionalPercentageOutstanding_27.getString());
    FIX::OptAttribute OptAttribute_27('1');
    noStrikes_0_0.set(OptAttribute_27);
    Instrument_27.insert(OptAttribute_27.getString());
    FIX::OptPayoutAmount OptPayoutAmount_27;
    OptPayoutAmount_27.setString("7920632");
    noStrikes_0_0.set(OptPayoutAmount_27);
    Instrument_27.insert(OptPayoutAmount_27.getString());
    FIX::OptPayoutType OptPayoutType_27(3);
    noStrikes_0_0.set(OptPayoutType_27);
    Instrument_27.insert(OptPayoutType_27.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_27;
    OriginalNotionalPercentageOutstanding_27.setString("59.420000");
    noStrikes_0_0.set(OriginalNotionalPercentageOutstanding_27);
    Instrument_27.insert(OriginalNotionalPercentageOutstanding_27.getString());
    FIX::Pool Pool_27("STRING_1519000943");
    noStrikes_0_0.set(Pool_27);
    Instrument_27.insert(Pool_27.getString());
    FIX::PositionLimit PositionLimit_27(2030215109);
    noStrikes_0_0.set(PositionLimit_27);
    Instrument_27.insert(PositionLimit_27.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_27("STRING_STD");
    noStrikes_0_0.set(PriceQuoteMethod_27);
    Instrument_27.insert(PriceQuoteMethod_27.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_27("STRING_2120784711");
    noStrikes_0_0.set(PriceUnitOfMeasure_27);
    Instrument_27.insert(PriceUnitOfMeasure_27.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_27;
    PriceUnitOfMeasureQty_27.setString("3395197");
    noStrikes_0_0.set(PriceUnitOfMeasureQty_27);
    Instrument_27.insert(PriceUnitOfMeasureQty_27.getString());
    FIX::Product Product_29(7);
    noStrikes_0_0.set(Product_29);
    Instrument_27.insert(Product_29.getString());
    FIX::ProductComplex ProductComplex_27("STRING_937105895");
    noStrikes_0_0.set(ProductComplex_27);
    Instrument_27.insert(ProductComplex_27.getString());
    FIX::PutOrCall PutOrCall_27(0);
    noStrikes_0_0.set(PutOrCall_27);
    Instrument_27.insert(PutOrCall_27.getString());
    FIX::RedemptionDate RedemptionDate_27("LOCALMKTDATE_486787909");
    noStrikes_0_0.set(RedemptionDate_27);
    Instrument_27.insert(RedemptionDate_27.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_27("STRING_832236487");
    noStrikes_0_0.set(RepoCollateralSecurityType_27);
    Instrument_27.insert(RepoCollateralSecurityType_27.getString());
    FIX::RepurchaseRate RepurchaseRate_27;
    RepurchaseRate_27.setString("66.470000");
    noStrikes_0_0.set(RepurchaseRate_27);
    Instrument_27.insert(RepurchaseRate_27.getString());
    FIX::RepurchaseTerm RepurchaseTerm_27(779356313);
    noStrikes_0_0.set(RepurchaseTerm_27);
    Instrument_27.insert(RepurchaseTerm_27.getString());
    FIX::RestructuringType RestructuringType_27("STRING_XR");
    noStrikes_0_0.set(RestructuringType_27);
    Instrument_27.insert(RestructuringType_27.getString());
    FIX::SecurityDesc SecurityDesc_27("STRING_438511123");
    noStrikes_0_0.set(SecurityDesc_27);
    Instrument_27.insert(SecurityDesc_27.getString());
    FIX::SecurityExchange SecurityExchange_27("EXCHANGE_678858425");
    noStrikes_0_0.set(SecurityExchange_27);
    Instrument_27.insert(SecurityExchange_27.getString());
    FIX::SecurityGroup SecurityGroup_27("STRING_326488666");
    noStrikes_0_0.set(SecurityGroup_27);
    Instrument_27.insert(SecurityGroup_27.getString());
    FIX::SecurityID SecurityID_27("STRING_2003503612");
    noStrikes_0_0.set(SecurityID_27);
    Instrument_27.insert(SecurityID_27.getString());
    FIX::SecurityIDSource SecurityIDSource_27("STRING_H");
    noStrikes_0_0.set(SecurityIDSource_27);
    Instrument_27.insert(SecurityIDSource_27.getString());
    FIX::SecurityStatus SecurityStatus_27("STRING_2");
    noStrikes_0_0.set(SecurityStatus_27);
    Instrument_27.insert(SecurityStatus_27.getString());
    FIX::SecuritySubType SecuritySubType_28("STRING_95156946");
    noStrikes_0_0.set(SecuritySubType_28);
    Instrument_27.insert(SecuritySubType_28.getString());
    FIX::SecurityType SecurityType_29("STRING_MATURED");
    noStrikes_0_0.set(SecurityType_29);
    Instrument_27.insert(SecurityType_29.getString());
    FIX::Seniority Seniority_27("STRING_SR");
    noStrikes_0_0.set(Seniority_27);
    Instrument_27.insert(Seniority_27.getString());
    FIX::SettlMethod SettlMethod_27('P');
    noStrikes_0_0.set(SettlMethod_27);
    Instrument_27.insert(SettlMethod_27.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_27("STRING_626074789");
    noStrikes_0_0.set(SettleOnOpenFlag_27);
    Instrument_27.insert(SettleOnOpenFlag_27.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_27("STRING_682638446");
    noStrikes_0_0.set(StateOrProvinceOfIssue_27);
    Instrument_27.insert(StateOrProvinceOfIssue_27.getString());
    FIX::StrikeCurrency StrikeCurrency_27("EUR");
    noStrikes_0_0.set(StrikeCurrency_27);
    Instrument_27.insert(StrikeCurrency_27.getString());
    FIX::StrikeMultiplier StrikeMultiplier_27;
    StrikeMultiplier_27.setString("19925037");
    noStrikes_0_0.set(StrikeMultiplier_27);
    Instrument_27.insert(StrikeMultiplier_27.getString());
    FIX::StrikePrice StrikePrice_27;
    StrikePrice_27.setString("4497257");
    noStrikes_0_0.set(StrikePrice_27);
    Instrument_27.insert(StrikePrice_27.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_27(3);
    noStrikes_0_0.set(StrikePriceBoundaryMethod_27);
    Instrument_27.insert(StrikePriceBoundaryMethod_27.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_27;
    StrikePriceBoundaryPrecision_27.setString("60.890000");
    noStrikes_0_0.set(StrikePriceBoundaryPrecision_27);
    Instrument_27.insert(StrikePriceBoundaryPrecision_27.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_27(3);
    noStrikes_0_0.set(StrikePriceDeterminationMethod_27);
    Instrument_27.insert(StrikePriceDeterminationMethod_27.getString());
    FIX::StrikeValue StrikeValue_27;
    StrikeValue_27.setString("2276006");
    noStrikes_0_0.set(StrikeValue_27);
    Instrument_27.insert(StrikeValue_27.getString());
    FIX::Symbol Symbol_27("STRING_278309645");
    noStrikes_0_0.set(Symbol_27);
    Instrument_27.insert(Symbol_27.getString());
    FIX::SymbolSfx SymbolSfx_27("STRING_WI");
    noStrikes_0_0.set(SymbolSfx_27);
    Instrument_27.insert(SymbolSfx_27.getString());
    FIX::TimeUnit TimeUnit_27("STRING_D");
    noStrikes_0_0.set(TimeUnit_27);
    Instrument_27.insert(TimeUnit_27.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_27(4);
    noStrikes_0_0.set(UnderlyingPriceDeterminationMethod_27);
    Instrument_27.insert(UnderlyingPriceDeterminationMethod_27.getString());
    FIX::UnitOfMeasure UnitOfMeasure_27("STRING_Bu");
    noStrikes_0_0.set(UnitOfMeasure_27);
    Instrument_27.insert(UnitOfMeasure_27.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_27;
    UnitOfMeasureQty_27.setString("15087546");
    noStrikes_0_0.set(UnitOfMeasureQty_27);
    Instrument_27.insert(UnitOfMeasureQty_27.getString());
    FIX::ValuationMethod ValuationMethod_27("STRING_EQTY");
    noStrikes_0_0.set(ValuationMethod_27);
    Instrument_27.insert(ValuationMethod_27.getString());
    all_values.push_back(Instrument_27);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_54;
      FIX::ComplexEventCondition ComplexEventCondition_54(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventCondition_54.getString());
      FIX::ComplexEventPrice ComplexEventPrice_54;
      ComplexEventPrice_54.setString("13521725");
      noComplexEvents_0_1_0.set(ComplexEventPrice_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPrice_54.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_54(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceBoundaryMethod_54.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_54;
      ComplexEventPriceBoundaryPrecision_54.setString("88.190000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceBoundaryPrecision_54.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_54(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceTimeType_54.getString());
      FIX::ComplexEventType ComplexEventType_54(2);
      noComplexEvents_0_1_0.set(ComplexEventType_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventType_54.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_54;
      ComplexOptPayoutAmount_54.setString("1577087");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexOptPayoutAmount_54.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_54);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_109;
        FIX::ComplexEventEndDate ComplexEventEndDate_109(FIX::UTCTIMESTAMP(1, 30, 20, 2, 12, 2011));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_109);
        ComplexEventDates_NoComplexEventDates_109.insert(ComplexEventEndDate_109.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_109(FIX::UTCTIMESTAMP(19, 13, 21, 15, 3, 2001));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_109);
        ComplexEventDates_NoComplexEventDates_109.insert(ComplexEventStartDate_109.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_109);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_224;
          FIX::ComplexEventEndTime ComplexEventEndTime_224(FIX::UTCTIMEONLY(12, 39, 10));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_224);
          ComplexEventTimes_NoComplexEventTimes_224.insert(ComplexEventEndTime_224.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_224(FIX::UTCTIMEONLY(19, 43, 31));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_224);
          ComplexEventTimes_NoComplexEventTimes_224.insert(ComplexEventStartTime_224.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_224);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_225;
          FIX::ComplexEventEndTime ComplexEventEndTime_225(FIX::UTCTIMEONLY(4, 30, 22));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_225);
          ComplexEventTimes_NoComplexEventTimes_225.insert(ComplexEventEndTime_225.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_225(FIX::UTCTIMEONLY(2, 5, 25));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_225);
          ComplexEventTimes_NoComplexEventTimes_225.insert(ComplexEventStartTime_225.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_225);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noStrikes_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_55;
      FIX::ComplexEventCondition ComplexEventCondition_55(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventCondition_55.getString());
      FIX::ComplexEventPrice ComplexEventPrice_55;
      ComplexEventPrice_55.setString("20047750");
      noComplexEvents_0_1_1.set(ComplexEventPrice_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPrice_55.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_55(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceBoundaryMethod_55.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_55;
      ComplexEventPriceBoundaryPrecision_55.setString("63.530000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceBoundaryPrecision_55.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_55(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceTimeType_55.getString());
      FIX::ComplexEventType ComplexEventType_55(3);
      noComplexEvents_0_1_1.set(ComplexEventType_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventType_55.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_55;
      ComplexOptPayoutAmount_55.setString("18881429");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexOptPayoutAmount_55.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_55);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_110;
        FIX::ComplexEventEndDate ComplexEventEndDate_110(FIX::UTCTIMESTAMP(1, 9, 9, 16, 6, 2008));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_110);
        ComplexEventDates_NoComplexEventDates_110.insert(ComplexEventEndDate_110.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_110(FIX::UTCTIMESTAMP(17, 21, 54, 2, 6, 2007));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_110);
        ComplexEventDates_NoComplexEventDates_110.insert(ComplexEventStartDate_110.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_110);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_226;
          FIX::ComplexEventEndTime ComplexEventEndTime_226(FIX::UTCTIMEONLY(21, 31, 58));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_226);
          ComplexEventTimes_NoComplexEventTimes_226.insert(ComplexEventEndTime_226.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_226(FIX::UTCTIMEONLY(10, 55, 50));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_226);
          ComplexEventTimes_NoComplexEventTimes_226.insert(ComplexEventStartTime_226.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_226);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_111;
        FIX::ComplexEventEndDate ComplexEventEndDate_111(FIX::UTCTIMESTAMP(1, 37, 31, 14, 5, 2003));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_111);
        ComplexEventDates_NoComplexEventDates_111.insert(ComplexEventEndDate_111.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_111(FIX::UTCTIMESTAMP(22, 9, 56, 20, 6, 2001));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_111);
        ComplexEventDates_NoComplexEventDates_111.insert(ComplexEventStartDate_111.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_111);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_227;
          FIX::ComplexEventEndTime ComplexEventEndTime_227(FIX::UTCTIMEONLY(10, 24, 10));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_227);
          ComplexEventTimes_NoComplexEventTimes_227.insert(ComplexEventEndTime_227.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_227(FIX::UTCTIMEONLY(9, 47, 26));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_227);
          ComplexEventTimes_NoComplexEventTimes_227.insert(ComplexEventStartTime_227.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_227);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_228;
          FIX::ComplexEventEndTime ComplexEventEndTime_228(FIX::UTCTIMEONLY(1, 57, 19));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_228);
          ComplexEventTimes_NoComplexEventTimes_228.insert(ComplexEventEndTime_228.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_228(FIX::UTCTIMEONLY(11, 14, 40));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_228);
          ComplexEventTimes_NoComplexEventTimes_228.insert(ComplexEventStartTime_228.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_228);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_229;
          FIX::ComplexEventEndTime ComplexEventEndTime_229(FIX::UTCTIMEONLY(19, 17, 5));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventEndTime_229);
          ComplexEventTimes_NoComplexEventTimes_229.insert(ComplexEventEndTime_229.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_229(FIX::UTCTIMEONLY(10, 49, 40));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventStartTime_229);
          ComplexEventTimes_NoComplexEventTimes_229.insert(ComplexEventStartTime_229.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_229);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_112;
        FIX::ComplexEventEndDate ComplexEventEndDate_112(FIX::UTCTIMESTAMP(10, 36, 52, 19, 6, 2005));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_112);
        ComplexEventDates_NoComplexEventDates_112.insert(ComplexEventEndDate_112.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_112(FIX::UTCTIMESTAMP(16, 3, 6, 16, 1, 2009));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_112);
        ComplexEventDates_NoComplexEventDates_112.insert(ComplexEventStartDate_112.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_112);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_230;
          FIX::ComplexEventEndTime ComplexEventEndTime_230(FIX::UTCTIMEONLY(22, 4, 20));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_230);
          ComplexEventTimes_NoComplexEventTimes_230.insert(ComplexEventEndTime_230.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_230(FIX::UTCTIMEONLY(15, 34, 40));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_230);
          ComplexEventTimes_NoComplexEventTimes_230.insert(ComplexEventStartTime_230.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_230);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_231;
          FIX::ComplexEventEndTime ComplexEventEndTime_231(FIX::UTCTIMEONLY(9, 50, 19));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_231);
          ComplexEventTimes_NoComplexEventTimes_231.insert(ComplexEventEndTime_231.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_231(FIX::UTCTIMEONLY(4, 8, 48));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_231);
          ComplexEventTimes_NoComplexEventTimes_231.insert(ComplexEventStartTime_231.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_231);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_232;
          FIX::ComplexEventEndTime ComplexEventEndTime_232(FIX::UTCTIMEONLY(22, 16, 1));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventEndTime_232);
          ComplexEventTimes_NoComplexEventTimes_232.insert(ComplexEventEndTime_232.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_232(FIX::UTCTIMEONLY(10, 48, 16));
          noComplexEventTimes_0_1_2_3_2.set(ComplexEventStartTime_232);
          ComplexEventTimes_NoComplexEventTimes_232.insert(ComplexEventStartTime_232.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_232);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noStrikes_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_56;
      FIX::ComplexEventCondition ComplexEventCondition_56(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventCondition_56.getString());
      FIX::ComplexEventPrice ComplexEventPrice_56;
      ComplexEventPrice_56.setString("187091");
      noComplexEvents_0_1_2.set(ComplexEventPrice_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPrice_56.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_56(5);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceBoundaryMethod_56.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_56;
      ComplexEventPriceBoundaryPrecision_56.setString("58.500000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceBoundaryPrecision_56.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_56(2);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceTimeType_56.getString());
      FIX::ComplexEventType ComplexEventType_56(8);
      noComplexEvents_0_1_2.set(ComplexEventType_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventType_56.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_56;
      ComplexOptPayoutAmount_56.setString("13232372");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexOptPayoutAmount_56.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_56);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_113;
        FIX::ComplexEventEndDate ComplexEventEndDate_113(FIX::UTCTIMESTAMP(17, 44, 55, 16, 7, 2003));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_113);
        ComplexEventDates_NoComplexEventDates_113.insert(ComplexEventEndDate_113.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_113(FIX::UTCTIMESTAMP(7, 9, 37, 23, 2, 2001));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_113);
        ComplexEventDates_NoComplexEventDates_113.insert(ComplexEventStartDate_113.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_113);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_233;
          FIX::ComplexEventEndTime ComplexEventEndTime_233(FIX::UTCTIMEONLY(23, 43, 31));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_233);
          ComplexEventTimes_NoComplexEventTimes_233.insert(ComplexEventEndTime_233.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_233(FIX::UTCTIMEONLY(5, 11, 4));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_233);
          ComplexEventTimes_NoComplexEventTimes_233.insert(ComplexEventStartTime_233.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_233);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_114;
        FIX::ComplexEventEndDate ComplexEventEndDate_114(FIX::UTCTIMESTAMP(6, 19, 58, 9, 4, 2001));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_114);
        ComplexEventDates_NoComplexEventDates_114.insert(ComplexEventEndDate_114.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_114(FIX::UTCTIMESTAMP(9, 24, 33, 0, 1, 2013));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_114);
        ComplexEventDates_NoComplexEventDates_114.insert(ComplexEventStartDate_114.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_114);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_234;
          FIX::ComplexEventEndTime ComplexEventEndTime_234(FIX::UTCTIMEONLY(6, 21, 31));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_234);
          ComplexEventTimes_NoComplexEventTimes_234.insert(ComplexEventEndTime_234.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_234(FIX::UTCTIMEONLY(3, 8, 12));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_234);
          ComplexEventTimes_NoComplexEventTimes_234.insert(ComplexEventStartTime_234.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_234);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_115;
        FIX::ComplexEventEndDate ComplexEventEndDate_115(FIX::UTCTIMESTAMP(11, 56, 0, 19, 6, 2017));
        noComplexEventDates_0_2_2_2.set(ComplexEventEndDate_115);
        ComplexEventDates_NoComplexEventDates_115.insert(ComplexEventEndDate_115.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_115(FIX::UTCTIMESTAMP(21, 5, 39, 23, 11, 2006));
        noComplexEventDates_0_2_2_2.set(ComplexEventStartDate_115);
        ComplexEventDates_NoComplexEventDates_115.insert(ComplexEventStartDate_115.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_115);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_235;
          FIX::ComplexEventEndTime ComplexEventEndTime_235(FIX::UTCTIMEONLY(3, 58, 28));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventEndTime_235);
          ComplexEventTimes_NoComplexEventTimes_235.insert(ComplexEventEndTime_235.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_235(FIX::UTCTIMEONLY(14, 3, 36));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventStartTime_235);
          ComplexEventTimes_NoComplexEventTimes_235.insert(ComplexEventStartTime_235.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_235);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noStrikes_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_52;
      FIX::EventDate EventDate_52("LOCALMKTDATE_1027625589");
      noEvents_0_1_0.set(EventDate_52);
      EvntGrp_NoEvents_52.insert(EventDate_52.getString());
      FIX::EventPx EventPx_52;
      EventPx_52.setString("19148398");
      noEvents_0_1_0.set(EventPx_52);
      EvntGrp_NoEvents_52.insert(EventPx_52.getString());
      FIX::EventText EventText_52("STRING_114394424");
      noEvents_0_1_0.set(EventText_52);
      EvntGrp_NoEvents_52.insert(EventText_52.getString());
      FIX::EventTime EventTime_52(FIX::UTCTIMESTAMP(4, 53, 7, 21, 9, 2013));
      noEvents_0_1_0.set(EventTime_52);
      EvntGrp_NoEvents_52.insert(EventTime_52.getString());
      FIX::EventType EventType_52(2);
      noEvents_0_1_0.set(EventType_52);
      EvntGrp_NoEvents_52.insert(EventType_52.getString());
      all_values.push_back(EvntGrp_NoEvents_52);
      all_compo_names.insert("EvntGrp.NoEvents");

      noStrikes_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_51;
      FIX::InstrumentPartyID InstrumentPartyID_51("STRING_713126549");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_51);
      InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyID_51.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_51('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_51);
      InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyIDSource_51.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_51(1999918264);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_51);
      InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyRole_51.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_51);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102;
        FIX::InstrumentPartySubID InstrumentPartySubID_102("STRING_1475612949");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_102);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102.insert(InstrumentPartySubID_102.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_102(1557367295);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_102);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102.insert(InstrumentPartySubIDType_102.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_46;
      FIX::SecurityAltID SecurityAltID_46("STRING_1116943163");
      noSecurityAltID_0_1_0.set(SecurityAltID_46);
      SecAltIDGrp_NoSecurityAltID_46.insert(SecurityAltID_46.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_46("STRING_1329210729");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_46);
      SecAltIDGrp_NoSecurityAltID_46.insert(SecurityAltIDSource_46.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_46);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_47;
      FIX::SecurityAltID SecurityAltID_47("STRING_287792223");
      noSecurityAltID_0_1_1.set(SecurityAltID_47);
      SecAltIDGrp_NoSecurityAltID_47.insert(SecurityAltID_47.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_47("STRING_201734778");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_47);
      SecAltIDGrp_NoSecurityAltID_47.insert(SecurityAltIDSource_47.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_47);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_48;
      FIX::SecurityAltID SecurityAltID_48("STRING_1114473700");
      noSecurityAltID_0_1_2.set(SecurityAltID_48);
      SecAltIDGrp_NoSecurityAltID_48.insert(SecurityAltID_48.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_48("STRING_1941171541");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_48);
      SecAltIDGrp_NoSecurityAltID_48.insert(SecurityAltIDSource_48.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_48);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_54;
    FIX::SecurityXML SecurityXML_55("XMLDATA_1284257986");
    noStrikes_0_0.set(SecurityXML_55);
    FIX::SecurityXMLLen SecurityXMLLen_27(20939996);
    noStrikes_0_0.set(SecurityXMLLen_27);
    FIX::SecurityXMLSchema SecurityXMLSchema_27("STRING_729207979");
    noStrikes_0_0.set(SecurityXMLSchema_27);
    SecurityXML_54.insert(SecurityXMLSchema_27.getString());
    all_values.push_back(SecurityXML_54);
    all_compo_names.insert("SecurityXML");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_45;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_45("DATA_1266441992");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingIssuer_45.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_45(1959566680);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingIssuerLen_45.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_45("DATA_1074664911");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingSecurityDesc_45.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_45(1033798162);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingSecurityDescLen_45.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_45;
      UnderlyingAdjustedQuantity_45.setString("20739611");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_45);
      UnderlyingInstrument_45.insert(UnderlyingAdjustedQuantity_45.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_45;
      UnderlyingAllocationPercent_45.setString("79.860000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_45);
      UnderlyingInstrument_45.insert(UnderlyingAllocationPercent_45.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_45;
      UnderlyingAttachmentPoint_45.setString("90.620000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_45);
      UnderlyingInstrument_45.insert(UnderlyingAttachmentPoint_45.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_45("STRING_1762393030");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_45);
      UnderlyingInstrument_45.insert(UnderlyingCFICode_45.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_45("STRING_1669540545");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_45);
      UnderlyingInstrument_45.insert(UnderlyingCPProgram_45.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_45("STRING_2092853112");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_45);
      UnderlyingInstrument_45.insert(UnderlyingCPRegType_45.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_45;
      UnderlyingCapValue_45.setString("8389998");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_45);
      UnderlyingInstrument_45.insert(UnderlyingCapValue_45.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_45;
      UnderlyingCashAmount_45.setString("8393787");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_45);
      UnderlyingInstrument_45.insert(UnderlyingCashAmount_45.getString());
      FIX::UnderlyingCashType UnderlyingCashType_45("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_45);
      UnderlyingInstrument_45.insert(UnderlyingCashType_45.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_45;
      UnderlyingContractMultiplier_45.setString("9538843");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_45);
      UnderlyingInstrument_45.insert(UnderlyingContractMultiplier_45.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_45(1552505342);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_45);
      UnderlyingInstrument_45.insert(UnderlyingContractMultiplierUnit_45.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_45("COUNTRY_1799445798");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_45);
      UnderlyingInstrument_45.insert(UnderlyingCountryOfIssue_45.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_45("LOCALMKTDATE_806318994");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_45);
      UnderlyingInstrument_45.insert(UnderlyingCouponPaymentDate_45.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_45;
      UnderlyingCouponRate_45.setString("66.320000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_45);
      UnderlyingInstrument_45.insert(UnderlyingCouponRate_45.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_45("STRING_1127575099");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_45);
      UnderlyingInstrument_45.insert(UnderlyingCreditRating_45.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_45("CAN");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_45);
      UnderlyingInstrument_45.insert(UnderlyingCurrency_45.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_45;
      UnderlyingCurrentValue_45.setString("970346");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_45);
      UnderlyingInstrument_45.insert(UnderlyingCurrentValue_45.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_45;
      UnderlyingDetachmentPoint_45.setString("33.700000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_45);
      UnderlyingInstrument_45.insert(UnderlyingDetachmentPoint_45.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_45;
      UnderlyingDirtyPrice_45.setString("7453471");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_45);
      UnderlyingInstrument_45.insert(UnderlyingDirtyPrice_45.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_45;
      UnderlyingEndPrice_45.setString("2987693");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_45);
      UnderlyingInstrument_45.insert(UnderlyingEndPrice_45.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_45;
      UnderlyingEndValue_45.setString("5124034");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_45);
      UnderlyingInstrument_45.insert(UnderlyingEndValue_45.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_45(539035069);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_45);
      UnderlyingInstrument_45.insert(UnderlyingExerciseStyle_45.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_45;
      UnderlyingFXRate_45.setString("15830273");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_45);
      UnderlyingInstrument_45.insert(UnderlyingFXRate_45.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_45('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_45);
      UnderlyingInstrument_45.insert(UnderlyingFXRateCalc_45.getString());
      FIX::UnderlyingFactor UnderlyingFactor_45;
      UnderlyingFactor_45.setString("12682430");
      noUnderlyings_0_1_0.set(UnderlyingFactor_45);
      UnderlyingInstrument_45.insert(UnderlyingFactor_45.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_45(1630066701);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_45);
      UnderlyingInstrument_45.insert(UnderlyingFlowScheduleType_45.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_45("STRING_1799785412");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_45);
      UnderlyingInstrument_45.insert(UnderlyingInstrRegistry_45.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_45("LOCALMKTDATE_1080326081");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_45);
      UnderlyingInstrument_45.insert(UnderlyingIssueDate_45.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_45("STRING_557247964");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_45);
      UnderlyingInstrument_45.insert(UnderlyingIssuer_45.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_45("STRING_686099926");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_45);
      UnderlyingInstrument_45.insert(UnderlyingLocaleOfIssue_45.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_45("LOCALMKTDATE_1006803538");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_45);
      UnderlyingInstrument_45.insert(UnderlyingMaturityDate_45.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_45("MONTHYEAR_491212302");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_45);
      UnderlyingInstrument_45.insert(UnderlyingMaturityMonthYear_45.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_45("TZTIMEONLY_1780598988");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_45);
      UnderlyingInstrument_45.insert(UnderlyingMaturityTime_45.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_45;
      UnderlyingNotionalPercentageOutstanding_45.setString("29.200000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_45);
      UnderlyingInstrument_45.insert(UnderlyingNotionalPercentageOutstanding_45.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_45('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_45);
      UnderlyingInstrument_45.insert(UnderlyingOptAttribute_45.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_45;
      UnderlyingOriginalNotionalPercentageOutstanding_45.setString("84.520000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_45);
      UnderlyingInstrument_45.insert(UnderlyingOriginalNotionalPercentageOutstanding_45.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_45("STRING_1460712742");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_45);
      UnderlyingInstrument_45.insert(UnderlyingPriceUnitOfMeasure_45.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_45;
      UnderlyingPriceUnitOfMeasureQty_45.setString("8526479");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_45);
      UnderlyingInstrument_45.insert(UnderlyingPriceUnitOfMeasureQty_45.getString());
      FIX::UnderlyingProduct UnderlyingProduct_45(1806123238);
      noUnderlyings_0_1_0.set(UnderlyingProduct_45);
      UnderlyingInstrument_45.insert(UnderlyingProduct_45.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_45(267113473);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_45);
      UnderlyingInstrument_45.insert(UnderlyingPutOrCall_45.getString());
      FIX::UnderlyingPx UnderlyingPx_45;
      UnderlyingPx_45.setString("2576696");
      noUnderlyings_0_1_0.set(UnderlyingPx_45);
      UnderlyingInstrument_45.insert(UnderlyingPx_45.getString());
      FIX::UnderlyingQty UnderlyingQty_45;
      UnderlyingQty_45.setString("14580853");
      noUnderlyings_0_1_0.set(UnderlyingQty_45);
      UnderlyingInstrument_45.insert(UnderlyingQty_45.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_45("LOCALMKTDATE_1073432467");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_45);
      UnderlyingInstrument_45.insert(UnderlyingRedemptionDate_45.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_45("STRING_122472671");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_45);
      UnderlyingInstrument_45.insert(UnderlyingRepoCollateralSecurityType_45.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_45;
      UnderlyingRepurchaseRate_45.setString("68.390000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_45);
      UnderlyingInstrument_45.insert(UnderlyingRepurchaseRate_45.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_45(1289635109);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_45);
      UnderlyingInstrument_45.insert(UnderlyingRepurchaseTerm_45.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_45("STRING_580027624");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_45);
      UnderlyingInstrument_45.insert(UnderlyingRestructuringType_45.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_45("STRING_535211454");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityDesc_45.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_45("EXCHANGE_687564831");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityExchange_45.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_45("STRING_1325374800");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityID_45.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_45("STRING_833980848");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityIDSource_45.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_45("STRING_1199968254");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_45);
      UnderlyingInstrument_45.insert(UnderlyingSecuritySubType_45.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_45("STRING_1864409869");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityType_45.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_45("STRING_269524580");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_45);
      UnderlyingInstrument_45.insert(UnderlyingSeniority_45.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_45("STRING_1733311674");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_45);
      UnderlyingInstrument_45.insert(UnderlyingSettlMethod_45.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_45(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_45);
      UnderlyingInstrument_45.insert(UnderlyingSettlementType_45.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_45;
      UnderlyingStartValue_45.setString("18995912");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_45);
      UnderlyingInstrument_45.insert(UnderlyingStartValue_45.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_45("STRING_1385613438");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_45);
      UnderlyingInstrument_45.insert(UnderlyingStateOrProvinceOfIssue_45.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_45("GBP");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_45);
      UnderlyingInstrument_45.insert(UnderlyingStrikeCurrency_45.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_45;
      UnderlyingStrikePrice_45.setString("20717133");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_45);
      UnderlyingInstrument_45.insert(UnderlyingStrikePrice_45.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_45("STRING_924815240");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_45);
      UnderlyingInstrument_45.insert(UnderlyingSymbol_45.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_45("STRING_800567900");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_45);
      UnderlyingInstrument_45.insert(UnderlyingSymbolSfx_45.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_45("STRING_1704828704");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_45);
      UnderlyingInstrument_45.insert(UnderlyingTimeUnit_45.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_45("STRING_1546528160");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_45);
      UnderlyingInstrument_45.insert(UnderlyingUnitOfMeasure_45.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_45;
      UnderlyingUnitOfMeasureQty_45.setString("8138371");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_45);
      UnderlyingInstrument_45.insert(UnderlyingUnitOfMeasureQty_45.getString());
      all_values.push_back(UnderlyingInstrument_45);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_96;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_96("STRING_859757255");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_96);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_96.insert(UnderlyingSecurityAltID_96.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_96("STRING_1666485093");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_96);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_96.insert(UnderlyingSecurityAltIDSource_96.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_96);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_97;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_97("STRING_941953099");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_97);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_97.insert(UnderlyingSecurityAltID_97.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_97("STRING_1126870728");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_97);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_97.insert(UnderlyingSecurityAltIDSource_97.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_97);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_98;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_98("STRING_1924154780");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_98);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_98.insert(UnderlyingSecurityAltID_98.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_98("STRING_252554839");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_98);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_98.insert(UnderlyingSecurityAltIDSource_98.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_98);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_90;
        FIX::UnderlyingStipType UnderlyingStipType_90("STRING_2046627451");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_90);
        UnderlyingStipulations_NoUnderlyingStips_90.insert(UnderlyingStipType_90.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_90("STRING_690731678");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_90);
        UnderlyingStipulations_NoUnderlyingStips_90.insert(UnderlyingStipValue_90.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_90);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_91;
        FIX::UnderlyingStipType UnderlyingStipType_91("STRING_1342454656");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_91);
        UnderlyingStipulations_NoUnderlyingStips_91.insert(UnderlyingStipType_91.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_91("STRING_479171427");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_91);
        UnderlyingStipulations_NoUnderlyingStips_91.insert(UnderlyingStipValue_91.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_91);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_92;
        FIX::UnderlyingStipType UnderlyingStipType_92("STRING_1225943133");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_92);
        UnderlyingStipulations_NoUnderlyingStips_92.insert(UnderlyingStipType_92.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_92("STRING_2030019488");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_92);
        UnderlyingStipulations_NoUnderlyingStips_92.insert(UnderlyingStipValue_92.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_92);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_86;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_86("STRING_2059923981");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_86);
        UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyID_86.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_86('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_86);
        UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyIDSource_86.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_86(1521472448);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_86);
        UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyRole_86.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_86);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_170("STRING_668332120");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_170);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170.insert(UnderlyingInstrumentPartySubID_170.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_170(359158070);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_170);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170.insert(UnderlyingInstrumentPartySubIDType_170.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_46;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_46("DATA_2081556194");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingIssuer_46.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_46(2053945558);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingIssuerLen_46.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_46("DATA_277169772");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingSecurityDesc_46.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_46(243428144);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingSecurityDescLen_46.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_46;
      UnderlyingAdjustedQuantity_46.setString("19781752");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_46);
      UnderlyingInstrument_46.insert(UnderlyingAdjustedQuantity_46.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_46;
      UnderlyingAllocationPercent_46.setString("50.130000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_46);
      UnderlyingInstrument_46.insert(UnderlyingAllocationPercent_46.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_46;
      UnderlyingAttachmentPoint_46.setString("60.450000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_46);
      UnderlyingInstrument_46.insert(UnderlyingAttachmentPoint_46.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_46("STRING_1535520331");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_46);
      UnderlyingInstrument_46.insert(UnderlyingCFICode_46.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_46("STRING_601029525");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_46);
      UnderlyingInstrument_46.insert(UnderlyingCPProgram_46.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_46("STRING_1857833145");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_46);
      UnderlyingInstrument_46.insert(UnderlyingCPRegType_46.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_46;
      UnderlyingCapValue_46.setString("6713501");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_46);
      UnderlyingInstrument_46.insert(UnderlyingCapValue_46.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_46;
      UnderlyingCashAmount_46.setString("14607867");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_46);
      UnderlyingInstrument_46.insert(UnderlyingCashAmount_46.getString());
      FIX::UnderlyingCashType UnderlyingCashType_46("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_46);
      UnderlyingInstrument_46.insert(UnderlyingCashType_46.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_46;
      UnderlyingContractMultiplier_46.setString("16133032");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_46);
      UnderlyingInstrument_46.insert(UnderlyingContractMultiplier_46.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_46(440173860);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_46);
      UnderlyingInstrument_46.insert(UnderlyingContractMultiplierUnit_46.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_46("COUNTRY_1153505723");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_46);
      UnderlyingInstrument_46.insert(UnderlyingCountryOfIssue_46.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_46("LOCALMKTDATE_1865858130");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_46);
      UnderlyingInstrument_46.insert(UnderlyingCouponPaymentDate_46.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_46;
      UnderlyingCouponRate_46.setString("34.080000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_46);
      UnderlyingInstrument_46.insert(UnderlyingCouponRate_46.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_46("STRING_1052649527");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_46);
      UnderlyingInstrument_46.insert(UnderlyingCreditRating_46.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_46("JPY");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_46);
      UnderlyingInstrument_46.insert(UnderlyingCurrency_46.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_46;
      UnderlyingCurrentValue_46.setString("15318209");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_46);
      UnderlyingInstrument_46.insert(UnderlyingCurrentValue_46.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_46;
      UnderlyingDetachmentPoint_46.setString("92.930000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_46);
      UnderlyingInstrument_46.insert(UnderlyingDetachmentPoint_46.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_46;
      UnderlyingDirtyPrice_46.setString("17179839");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_46);
      UnderlyingInstrument_46.insert(UnderlyingDirtyPrice_46.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_46;
      UnderlyingEndPrice_46.setString("11888835");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_46);
      UnderlyingInstrument_46.insert(UnderlyingEndPrice_46.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_46;
      UnderlyingEndValue_46.setString("15474896");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_46);
      UnderlyingInstrument_46.insert(UnderlyingEndValue_46.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_46(653004351);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_46);
      UnderlyingInstrument_46.insert(UnderlyingExerciseStyle_46.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_46;
      UnderlyingFXRate_46.setString("5628723");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_46);
      UnderlyingInstrument_46.insert(UnderlyingFXRate_46.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_46('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_46);
      UnderlyingInstrument_46.insert(UnderlyingFXRateCalc_46.getString());
      FIX::UnderlyingFactor UnderlyingFactor_46;
      UnderlyingFactor_46.setString("13213364");
      noUnderlyings_0_1_1.set(UnderlyingFactor_46);
      UnderlyingInstrument_46.insert(UnderlyingFactor_46.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_46(922030404);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_46);
      UnderlyingInstrument_46.insert(UnderlyingFlowScheduleType_46.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_46("STRING_1663527086");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_46);
      UnderlyingInstrument_46.insert(UnderlyingInstrRegistry_46.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_46("LOCALMKTDATE_1227798382");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_46);
      UnderlyingInstrument_46.insert(UnderlyingIssueDate_46.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_46("STRING_1199200177");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_46);
      UnderlyingInstrument_46.insert(UnderlyingIssuer_46.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_46("STRING_1906955230");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_46);
      UnderlyingInstrument_46.insert(UnderlyingLocaleOfIssue_46.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_46("LOCALMKTDATE_1058490008");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_46);
      UnderlyingInstrument_46.insert(UnderlyingMaturityDate_46.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_46("MONTHYEAR_253701542");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_46);
      UnderlyingInstrument_46.insert(UnderlyingMaturityMonthYear_46.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_46("TZTIMEONLY_803467627");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_46);
      UnderlyingInstrument_46.insert(UnderlyingMaturityTime_46.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_46;
      UnderlyingNotionalPercentageOutstanding_46.setString("66.910000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_46);
      UnderlyingInstrument_46.insert(UnderlyingNotionalPercentageOutstanding_46.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_46('8');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_46);
      UnderlyingInstrument_46.insert(UnderlyingOptAttribute_46.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_46;
      UnderlyingOriginalNotionalPercentageOutstanding_46.setString("71.250000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_46);
      UnderlyingInstrument_46.insert(UnderlyingOriginalNotionalPercentageOutstanding_46.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_46("STRING_1117876883");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_46);
      UnderlyingInstrument_46.insert(UnderlyingPriceUnitOfMeasure_46.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_46;
      UnderlyingPriceUnitOfMeasureQty_46.setString("1680342");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_46);
      UnderlyingInstrument_46.insert(UnderlyingPriceUnitOfMeasureQty_46.getString());
      FIX::UnderlyingProduct UnderlyingProduct_46(1890651716);
      noUnderlyings_0_1_1.set(UnderlyingProduct_46);
      UnderlyingInstrument_46.insert(UnderlyingProduct_46.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_46(583696526);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_46);
      UnderlyingInstrument_46.insert(UnderlyingPutOrCall_46.getString());
      FIX::UnderlyingPx UnderlyingPx_46;
      UnderlyingPx_46.setString("6082080");
      noUnderlyings_0_1_1.set(UnderlyingPx_46);
      UnderlyingInstrument_46.insert(UnderlyingPx_46.getString());
      FIX::UnderlyingQty UnderlyingQty_46;
      UnderlyingQty_46.setString("8966737");
      noUnderlyings_0_1_1.set(UnderlyingQty_46);
      UnderlyingInstrument_46.insert(UnderlyingQty_46.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_46("LOCALMKTDATE_302071008");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_46);
      UnderlyingInstrument_46.insert(UnderlyingRedemptionDate_46.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_46("STRING_1101201468");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_46);
      UnderlyingInstrument_46.insert(UnderlyingRepoCollateralSecurityType_46.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_46;
      UnderlyingRepurchaseRate_46.setString("33.180000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_46);
      UnderlyingInstrument_46.insert(UnderlyingRepurchaseRate_46.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_46(711177169);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_46);
      UnderlyingInstrument_46.insert(UnderlyingRepurchaseTerm_46.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_46("STRING_789165885");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_46);
      UnderlyingInstrument_46.insert(UnderlyingRestructuringType_46.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_46("STRING_1333660625");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityDesc_46.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_46("EXCHANGE_198742814");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityExchange_46.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_46("STRING_359666141");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityID_46.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_46("STRING_375060511");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityIDSource_46.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_46("STRING_1746232441");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_46);
      UnderlyingInstrument_46.insert(UnderlyingSecuritySubType_46.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_46("STRING_1012670492");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityType_46.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_46("STRING_937932845");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_46);
      UnderlyingInstrument_46.insert(UnderlyingSeniority_46.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_46("STRING_1328203332");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_46);
      UnderlyingInstrument_46.insert(UnderlyingSettlMethod_46.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_46(5);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_46);
      UnderlyingInstrument_46.insert(UnderlyingSettlementType_46.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_46;
      UnderlyingStartValue_46.setString("18599632");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_46);
      UnderlyingInstrument_46.insert(UnderlyingStartValue_46.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_46("STRING_844246770");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_46);
      UnderlyingInstrument_46.insert(UnderlyingStateOrProvinceOfIssue_46.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_46("CAN");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_46);
      UnderlyingInstrument_46.insert(UnderlyingStrikeCurrency_46.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_46;
      UnderlyingStrikePrice_46.setString("6037183");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_46);
      UnderlyingInstrument_46.insert(UnderlyingStrikePrice_46.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_46("STRING_325328058");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_46);
      UnderlyingInstrument_46.insert(UnderlyingSymbol_46.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_46("STRING_1165381321");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_46);
      UnderlyingInstrument_46.insert(UnderlyingSymbolSfx_46.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_46("STRING_1407185980");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_46);
      UnderlyingInstrument_46.insert(UnderlyingTimeUnit_46.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_46("STRING_771854750");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_46);
      UnderlyingInstrument_46.insert(UnderlyingUnitOfMeasure_46.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_46;
      UnderlyingUnitOfMeasureQty_46.setString("20201123");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_46);
      UnderlyingInstrument_46.insert(UnderlyingUnitOfMeasureQty_46.getString());
      all_values.push_back(UnderlyingInstrument_46);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_99;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_99("STRING_1889731633");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_99);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_99.insert(UnderlyingSecurityAltID_99.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_99("STRING_40662940");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_99);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_99.insert(UnderlyingSecurityAltIDSource_99.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_99);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_100;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_100("STRING_1664171173");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_100);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_100.insert(UnderlyingSecurityAltID_100.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_100("STRING_325944512");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_100);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_100.insert(UnderlyingSecurityAltIDSource_100.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_100);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_93;
        FIX::UnderlyingStipType UnderlyingStipType_93("STRING_413361317");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_93);
        UnderlyingStipulations_NoUnderlyingStips_93.insert(UnderlyingStipType_93.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_93("STRING_628015520");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_93);
        UnderlyingStipulations_NoUnderlyingStips_93.insert(UnderlyingStipValue_93.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_93);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_94;
        FIX::UnderlyingStipType UnderlyingStipType_94("STRING_1750072469");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_94);
        UnderlyingStipulations_NoUnderlyingStips_94.insert(UnderlyingStipType_94.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_94("STRING_215200987");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_94);
        UnderlyingStipulations_NoUnderlyingStips_94.insert(UnderlyingStipValue_94.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_94);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_95;
        FIX::UnderlyingStipType UnderlyingStipType_95("STRING_1339192689");
        noUnderlyingStips_0_1_2_2.set(UnderlyingStipType_95);
        UnderlyingStipulations_NoUnderlyingStips_95.insert(UnderlyingStipType_95.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_95("STRING_391754706");
        noUnderlyingStips_0_1_2_2.set(UnderlyingStipValue_95);
        UnderlyingStipulations_NoUnderlyingStips_95.insert(UnderlyingStipValue_95.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_95);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_87;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_87("STRING_1537935504");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_87);
        UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyID_87.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_87('7');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_87);
        UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyIDSource_87.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_87(1923922123);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_87);
        UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyRole_87.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_87);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_171("STRING_1764091340");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_171);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171.insert(UnderlyingInstrumentPartySubID_171.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_171(714371321);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_171);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171.insert(UnderlyingInstrumentPartySubIDType_171.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_172("STRING_317403981");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_172);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172.insert(UnderlyingInstrumentPartySubID_172.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_172(1950614656);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_172);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172.insert(UnderlyingInstrumentPartySubIDType_172.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_173("STRING_426850923");
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubID_173);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173.insert(UnderlyingInstrumentPartySubID_173.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_173(1161650752);
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_173);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173.insert(UnderlyingInstrumentPartySubIDType_173.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_47;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_47("DATA_1217452706");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingIssuer_47.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_47(1338530702);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingIssuerLen_47.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_47("DATA_1765369105");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingSecurityDesc_47.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_47(1542780765);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_47);
      UnderlyingInstrument_47.insert(EncodedUnderlyingSecurityDescLen_47.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_47;
      UnderlyingAdjustedQuantity_47.setString("3564283");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_47);
      UnderlyingInstrument_47.insert(UnderlyingAdjustedQuantity_47.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_47;
      UnderlyingAllocationPercent_47.setString("14.370000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_47);
      UnderlyingInstrument_47.insert(UnderlyingAllocationPercent_47.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_47;
      UnderlyingAttachmentPoint_47.setString("18.670000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_47);
      UnderlyingInstrument_47.insert(UnderlyingAttachmentPoint_47.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_47("STRING_229057115");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_47);
      UnderlyingInstrument_47.insert(UnderlyingCFICode_47.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_47("STRING_798590895");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_47);
      UnderlyingInstrument_47.insert(UnderlyingCPProgram_47.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_47("STRING_2056883500");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_47);
      UnderlyingInstrument_47.insert(UnderlyingCPRegType_47.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_47;
      UnderlyingCapValue_47.setString("2697200");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_47);
      UnderlyingInstrument_47.insert(UnderlyingCapValue_47.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_47;
      UnderlyingCashAmount_47.setString("3152784");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_47);
      UnderlyingInstrument_47.insert(UnderlyingCashAmount_47.getString());
      FIX::UnderlyingCashType UnderlyingCashType_47("STRING_FIXED");
      noUnderlyings_0_1_2.set(UnderlyingCashType_47);
      UnderlyingInstrument_47.insert(UnderlyingCashType_47.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_47;
      UnderlyingContractMultiplier_47.setString("9185910");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_47);
      UnderlyingInstrument_47.insert(UnderlyingContractMultiplier_47.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_47(728639737);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_47);
      UnderlyingInstrument_47.insert(UnderlyingContractMultiplierUnit_47.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_47("COUNTRY_863359885");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_47);
      UnderlyingInstrument_47.insert(UnderlyingCountryOfIssue_47.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_47("LOCALMKTDATE_521179878");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_47);
      UnderlyingInstrument_47.insert(UnderlyingCouponPaymentDate_47.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_47;
      UnderlyingCouponRate_47.setString("7.250000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_47);
      UnderlyingInstrument_47.insert(UnderlyingCouponRate_47.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_47("STRING_55068926");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_47);
      UnderlyingInstrument_47.insert(UnderlyingCreditRating_47.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_47("EUR");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_47);
      UnderlyingInstrument_47.insert(UnderlyingCurrency_47.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_47;
      UnderlyingCurrentValue_47.setString("15930044");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_47);
      UnderlyingInstrument_47.insert(UnderlyingCurrentValue_47.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_47;
      UnderlyingDetachmentPoint_47.setString("54.330000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_47);
      UnderlyingInstrument_47.insert(UnderlyingDetachmentPoint_47.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_47;
      UnderlyingDirtyPrice_47.setString("1216571");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_47);
      UnderlyingInstrument_47.insert(UnderlyingDirtyPrice_47.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_47;
      UnderlyingEndPrice_47.setString("5822050");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_47);
      UnderlyingInstrument_47.insert(UnderlyingEndPrice_47.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_47;
      UnderlyingEndValue_47.setString("12809631");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_47);
      UnderlyingInstrument_47.insert(UnderlyingEndValue_47.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_47(836028486);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_47);
      UnderlyingInstrument_47.insert(UnderlyingExerciseStyle_47.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_47;
      UnderlyingFXRate_47.setString("8996090");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_47);
      UnderlyingInstrument_47.insert(UnderlyingFXRate_47.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_47('D');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_47);
      UnderlyingInstrument_47.insert(UnderlyingFXRateCalc_47.getString());
      FIX::UnderlyingFactor UnderlyingFactor_47;
      UnderlyingFactor_47.setString("12628794");
      noUnderlyings_0_1_2.set(UnderlyingFactor_47);
      UnderlyingInstrument_47.insert(UnderlyingFactor_47.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_47(2061259813);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_47);
      UnderlyingInstrument_47.insert(UnderlyingFlowScheduleType_47.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_47("STRING_154063192");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_47);
      UnderlyingInstrument_47.insert(UnderlyingInstrRegistry_47.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_47("LOCALMKTDATE_453926463");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_47);
      UnderlyingInstrument_47.insert(UnderlyingIssueDate_47.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_47("STRING_1679145270");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_47);
      UnderlyingInstrument_47.insert(UnderlyingIssuer_47.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_47("STRING_1696843957");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_47);
      UnderlyingInstrument_47.insert(UnderlyingLocaleOfIssue_47.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_47("LOCALMKTDATE_810354838");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_47);
      UnderlyingInstrument_47.insert(UnderlyingMaturityDate_47.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_47("MONTHYEAR_556733059");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_47);
      UnderlyingInstrument_47.insert(UnderlyingMaturityMonthYear_47.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_47("TZTIMEONLY_1863995824");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_47);
      UnderlyingInstrument_47.insert(UnderlyingMaturityTime_47.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_47;
      UnderlyingNotionalPercentageOutstanding_47.setString("19.530000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_47);
      UnderlyingInstrument_47.insert(UnderlyingNotionalPercentageOutstanding_47.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_47('1');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_47);
      UnderlyingInstrument_47.insert(UnderlyingOptAttribute_47.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_47;
      UnderlyingOriginalNotionalPercentageOutstanding_47.setString("56.770000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_47);
      UnderlyingInstrument_47.insert(UnderlyingOriginalNotionalPercentageOutstanding_47.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_47("STRING_1309132009");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_47);
      UnderlyingInstrument_47.insert(UnderlyingPriceUnitOfMeasure_47.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_47;
      UnderlyingPriceUnitOfMeasureQty_47.setString("16706023");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_47);
      UnderlyingInstrument_47.insert(UnderlyingPriceUnitOfMeasureQty_47.getString());
      FIX::UnderlyingProduct UnderlyingProduct_47(2008740041);
      noUnderlyings_0_1_2.set(UnderlyingProduct_47);
      UnderlyingInstrument_47.insert(UnderlyingProduct_47.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_47(80239418);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_47);
      UnderlyingInstrument_47.insert(UnderlyingPutOrCall_47.getString());
      FIX::UnderlyingPx UnderlyingPx_47;
      UnderlyingPx_47.setString("2517584");
      noUnderlyings_0_1_2.set(UnderlyingPx_47);
      UnderlyingInstrument_47.insert(UnderlyingPx_47.getString());
      FIX::UnderlyingQty UnderlyingQty_47;
      UnderlyingQty_47.setString("7246162");
      noUnderlyings_0_1_2.set(UnderlyingQty_47);
      UnderlyingInstrument_47.insert(UnderlyingQty_47.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_47("LOCALMKTDATE_601419297");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_47);
      UnderlyingInstrument_47.insert(UnderlyingRedemptionDate_47.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_47("STRING_1195599189");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_47);
      UnderlyingInstrument_47.insert(UnderlyingRepoCollateralSecurityType_47.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_47;
      UnderlyingRepurchaseRate_47.setString("52.050000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_47);
      UnderlyingInstrument_47.insert(UnderlyingRepurchaseRate_47.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_47(1514353882);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_47);
      UnderlyingInstrument_47.insert(UnderlyingRepurchaseTerm_47.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_47("STRING_1540817879");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_47);
      UnderlyingInstrument_47.insert(UnderlyingRestructuringType_47.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_47("STRING_225205987");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityDesc_47.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_47("EXCHANGE_1031225667");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityExchange_47.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_47("STRING_1662475044");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityID_47.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_47("STRING_807411067");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityIDSource_47.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_47("STRING_164705144");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_47);
      UnderlyingInstrument_47.insert(UnderlyingSecuritySubType_47.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_47("STRING_351019882");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_47);
      UnderlyingInstrument_47.insert(UnderlyingSecurityType_47.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_47("STRING_1707020128");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_47);
      UnderlyingInstrument_47.insert(UnderlyingSeniority_47.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_47("STRING_1248799278");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_47);
      UnderlyingInstrument_47.insert(UnderlyingSettlMethod_47.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_47(4);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_47);
      UnderlyingInstrument_47.insert(UnderlyingSettlementType_47.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_47;
      UnderlyingStartValue_47.setString("16207962");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_47);
      UnderlyingInstrument_47.insert(UnderlyingStartValue_47.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_47("STRING_1402862471");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_47);
      UnderlyingInstrument_47.insert(UnderlyingStateOrProvinceOfIssue_47.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_47("EUR");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_47);
      UnderlyingInstrument_47.insert(UnderlyingStrikeCurrency_47.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_47;
      UnderlyingStrikePrice_47.setString("9522227");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_47);
      UnderlyingInstrument_47.insert(UnderlyingStrikePrice_47.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_47("STRING_730696944");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_47);
      UnderlyingInstrument_47.insert(UnderlyingSymbol_47.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_47("STRING_1709190974");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_47);
      UnderlyingInstrument_47.insert(UnderlyingSymbolSfx_47.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_47("STRING_668734957");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_47);
      UnderlyingInstrument_47.insert(UnderlyingTimeUnit_47.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_47("STRING_1770108897");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_47);
      UnderlyingInstrument_47.insert(UnderlyingUnitOfMeasure_47.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_47;
      UnderlyingUnitOfMeasureQty_47.setString("9170312");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_47);
      UnderlyingInstrument_47.insert(UnderlyingUnitOfMeasureQty_47.getString());
      all_values.push_back(UnderlyingInstrument_47);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_101;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_101("STRING_931757259");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_101);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_101.insert(UnderlyingSecurityAltID_101.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_101("STRING_440150008");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_101);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_101.insert(UnderlyingSecurityAltIDSource_101.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_101);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_96;
        FIX::UnderlyingStipType UnderlyingStipType_96("STRING_1011996677");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_96);
        UnderlyingStipulations_NoUnderlyingStips_96.insert(UnderlyingStipType_96.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_96("STRING_691908472");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_96);
        UnderlyingStipulations_NoUnderlyingStips_96.insert(UnderlyingStipValue_96.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_96);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_88;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_88("STRING_1613415974");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_88);
        UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyID_88.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_88('1');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_88);
        UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyIDSource_88.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_88(1660204863);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_88);
        UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyRole_88.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_88);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_174("STRING_1280841893");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_174);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174.insert(UnderlyingInstrumentPartySubID_174.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_174(1885410850);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_174);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174.insert(UnderlyingInstrumentPartySubIDType_174.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_175("STRING_2011511875");
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubID_175);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175.insert(UnderlyingInstrumentPartySubID_175.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_175(795833289);
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_175);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175.insert(UnderlyingInstrumentPartySubIDType_175.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_89;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_89("STRING_545338269");
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyID_89);
        UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyID_89.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_89('2');
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyIDSource_89);
        UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyIDSource_89.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_89(1146853171);
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyRole_89);
        UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyRole_89.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_89);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_176("STRING_1277532650");
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubID_176);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176.insert(UnderlyingInstrumentPartySubID_176.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_176(613268814);
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_176);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176.insert(UnderlyingInstrumentPartySubIDType_176.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_177("STRING_1725671042");
          noUndlyInstrumentPartySubIDs_0_2_1_3_1.set(UnderlyingInstrumentPartySubID_177);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177.insert(UnderlyingInstrumentPartySubID_177.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_177(532911473);
          noUndlyInstrumentPartySubIDs_0_2_1_3_1.set(UnderlyingInstrumentPartySubIDType_177);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177.insert(UnderlyingInstrumentPartySubIDType_177.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_178("STRING_533610920");
          noUndlyInstrumentPartySubIDs_0_2_1_3_2.set(UnderlyingInstrumentPartySubID_178);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178.insert(UnderlyingInstrumentPartySubID_178.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_178(730645309);
          noUndlyInstrumentPartySubIDs_0_2_1_3_2.set(UnderlyingInstrumentPartySubIDType_178);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178.insert(UnderlyingInstrumentPartySubIDType_178.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_2);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_90;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_90("STRING_1485134254");
        noUndlyInstrumentParties_0_2_2_2.set(UnderlyingInstrumentPartyID_90);
        UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyID_90.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_90('1');
        noUndlyInstrumentParties_0_2_2_2.set(UnderlyingInstrumentPartyIDSource_90);
        UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyIDSource_90.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_90(292352636);
        noUndlyInstrumentParties_0_2_2_2.set(UnderlyingInstrumentPartyRole_90);
        UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyRole_90.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_90);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_179("STRING_886933113");
          noUndlyInstrumentPartySubIDs_0_2_2_3_0.set(UnderlyingInstrumentPartySubID_179);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179.insert(UnderlyingInstrumentPartySubID_179.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_179(1209383917);
          noUndlyInstrumentPartySubIDs_0_2_2_3_0.set(UnderlyingInstrumentPartySubIDType_179);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179.insert(UnderlyingInstrumentPartySubIDType_179.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_2);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_2);
    }
    msg.addGroup(noStrikes_0_0);
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
