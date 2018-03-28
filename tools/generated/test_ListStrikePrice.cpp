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
  FIX::ListID ListID_19("STRING_1483401618");
  msg.set(ListID_19);
  ListStrikePrice_0.insert(ListID_19.getString());
  FIX::TotNoStrikes TotNoStrikes_0(956794889);
  msg.set(TotNoStrikes_0);
  ListStrikePrice_0.insert(TotNoStrikes_0.getString());
  all_values.push_back(ListStrikePrice_0);

  // InstrmtStrkPxGrp
  // Group InstrmtStrkPxGrp.NoStrikes
  {
    FIX50SP2::ListStrikePrice::NoStrikes noStrikes_0_0;
    // InstrmtStrkPxGrp.NoStrikes
    multiset<string> InstrmtStrkPxGrp_NoStrikes_0;
    FIX::ClOrdID ClOrdID_25("STRING_2084632831");
    noStrikes_0_0.set(ClOrdID_25);
    InstrmtStrkPxGrp_NoStrikes_0.insert(ClOrdID_25.getString());
    FIX::Currency Currency_22("CAN");
    noStrikes_0_0.set(Currency_22);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Currency_22.getString());
    FIX::EncodedText EncodedText_49("DATA_480076546");
    noStrikes_0_0.set(EncodedText_49);
    InstrmtStrkPxGrp_NoStrikes_0.insert(EncodedText_49.getString());
    FIX::EncodedTextLen EncodedTextLen_49(1940612972);
    noStrikes_0_0.set(EncodedTextLen_49);
    InstrmtStrkPxGrp_NoStrikes_0.insert(EncodedTextLen_49.getString());
    FIX::PrevClosePx PrevClosePx_1;
    PrevClosePx_1.setString("17564040");
    noStrikes_0_0.set(PrevClosePx_1);
    InstrmtStrkPxGrp_NoStrikes_0.insert(PrevClosePx_1.getString());
    FIX::Price Price_12;
    Price_12.setString("201838");
    noStrikes_0_0.set(Price_12);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Price_12.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_23("STRING_1672914589");
    noStrikes_0_0.set(SecondaryClOrdID_23);
    InstrmtStrkPxGrp_NoStrikes_0.insert(SecondaryClOrdID_23.getString());
    FIX::Side Side_24('2');
    noStrikes_0_0.set(Side_24);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Side_24.getString());
    FIX::Text Text_49("STRING_1615115340");
    noStrikes_0_0.set(Text_49);
    InstrmtStrkPxGrp_NoStrikes_0.insert(Text_49.getString());
    all_values.push_back(InstrmtStrkPxGrp_NoStrikes_0);

    // Instrument
    multiset<string> Instrument_29;
    FIX::AttachmentPoint AttachmentPoint_29;
    AttachmentPoint_29.setString("61.490000");
    noStrikes_0_0.set(AttachmentPoint_29);
    Instrument_29.insert(AttachmentPoint_29.getString());
    FIX::CFICode CFICode_29("STRING_1240014041");
    noStrikes_0_0.set(CFICode_29);
    Instrument_29.insert(CFICode_29.getString());
    FIX::CPProgram CPProgram_29(1);
    noStrikes_0_0.set(CPProgram_29);
    Instrument_29.insert(CPProgram_29.getString());
    FIX::CPRegType CPRegType_29("STRING_2142217485");
    noStrikes_0_0.set(CPRegType_29);
    Instrument_29.insert(CPRegType_29.getString());
    FIX::CapPrice CapPrice_29;
    CapPrice_29.setString("7164046");
    noStrikes_0_0.set(CapPrice_29);
    Instrument_29.insert(CapPrice_29.getString());
    FIX::ContractMultiplier ContractMultiplier_29;
    ContractMultiplier_29.setString("3756415");
    noStrikes_0_0.set(ContractMultiplier_29);
    Instrument_29.insert(ContractMultiplier_29.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_29(1);
    noStrikes_0_0.set(ContractMultiplierUnit_29);
    Instrument_29.insert(ContractMultiplierUnit_29.getString());
    FIX::ContractSettlMonth ContractSettlMonth_29("MONTHYEAR_1665248984");
    noStrikes_0_0.set(ContractSettlMonth_29);
    Instrument_29.insert(ContractSettlMonth_29.getString());
    FIX::CountryOfIssue CountryOfIssue_29("COUNTRY_2006158937");
    noStrikes_0_0.set(CountryOfIssue_29);
    Instrument_29.insert(CountryOfIssue_29.getString());
    FIX::CouponPaymentDate CouponPaymentDate_29("LOCALMKTDATE_877069232");
    noStrikes_0_0.set(CouponPaymentDate_29);
    Instrument_29.insert(CouponPaymentDate_29.getString());
    FIX::CouponRate CouponRate_29;
    CouponRate_29.setString("74.350000");
    noStrikes_0_0.set(CouponRate_29);
    Instrument_29.insert(CouponRate_29.getString());
    FIX::CreditRating CreditRating_29("STRING_159433013");
    noStrikes_0_0.set(CreditRating_29);
    Instrument_29.insert(CreditRating_29.getString());
    FIX::DatedDate DatedDate_29("LOCALMKTDATE_1224689662");
    noStrikes_0_0.set(DatedDate_29);
    Instrument_29.insert(DatedDate_29.getString());
    FIX::DetachmentPoint DetachmentPoint_29;
    DetachmentPoint_29.setString("15.660000");
    noStrikes_0_0.set(DetachmentPoint_29);
    Instrument_29.insert(DetachmentPoint_29.getString());
    FIX::EncodedIssuer EncodedIssuer_29("DATA_925537050");
    noStrikes_0_0.set(EncodedIssuer_29);
    Instrument_29.insert(EncodedIssuer_29.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_29(1081262064);
    noStrikes_0_0.set(EncodedIssuerLen_29);
    Instrument_29.insert(EncodedIssuerLen_29.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_29("DATA_1742350839");
    noStrikes_0_0.set(EncodedSecurityDesc_29);
    Instrument_29.insert(EncodedSecurityDesc_29.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_29(437105038);
    noStrikes_0_0.set(EncodedSecurityDescLen_29);
    Instrument_29.insert(EncodedSecurityDescLen_29.getString());
    FIX::ExerciseStyle ExerciseStyle_29(1);
    noStrikes_0_0.set(ExerciseStyle_29);
    Instrument_29.insert(ExerciseStyle_29.getString());
    FIX::Factor Factor_29;
    Factor_29.setString("5516620");
    noStrikes_0_0.set(Factor_29);
    Instrument_29.insert(Factor_29.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_29(false);
    noStrikes_0_0.set(FlexProductEligibilityIndicator_29);
    Instrument_29.insert(FlexProductEligibilityIndicator_29.getString());
    FIX::FlexibleIndicator FlexibleIndicator_29(false);
    noStrikes_0_0.set(FlexibleIndicator_29);
    Instrument_29.insert(FlexibleIndicator_29.getString());
    FIX::FloorPrice FloorPrice_29;
    FloorPrice_29.setString("21325135");
    noStrikes_0_0.set(FloorPrice_29);
    Instrument_29.insert(FloorPrice_29.getString());
    FIX::FlowScheduleType FlowScheduleType_29(2);
    noStrikes_0_0.set(FlowScheduleType_29);
    Instrument_29.insert(FlowScheduleType_29.getString());
    FIX::InstrRegistry InstrRegistry_29("STRING_834405763");
    noStrikes_0_0.set(InstrRegistry_29);
    Instrument_29.insert(InstrRegistry_29.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_29('1');
    noStrikes_0_0.set(InstrmtAssignmentMethod_29);
    Instrument_29.insert(InstrmtAssignmentMethod_29.getString());
    FIX::InterestAccrualDate InterestAccrualDate_29("LOCALMKTDATE_504678176");
    noStrikes_0_0.set(InterestAccrualDate_29);
    Instrument_29.insert(InterestAccrualDate_29.getString());
    FIX::IssueDate IssueDate_29("LOCALMKTDATE_854589571");
    noStrikes_0_0.set(IssueDate_29);
    Instrument_29.insert(IssueDate_29.getString());
    FIX::Issuer Issuer_29("STRING_1451073793");
    noStrikes_0_0.set(Issuer_29);
    Instrument_29.insert(Issuer_29.getString());
    FIX::ListMethod ListMethod_29(1);
    noStrikes_0_0.set(ListMethod_29);
    Instrument_29.insert(ListMethod_29.getString());
    FIX::LocaleOfIssue LocaleOfIssue_29("STRING_322221264");
    noStrikes_0_0.set(LocaleOfIssue_29);
    Instrument_29.insert(LocaleOfIssue_29.getString());
    FIX::MaturityDate MaturityDate_29("LOCALMKTDATE_1329566294");
    noStrikes_0_0.set(MaturityDate_29);
    Instrument_29.insert(MaturityDate_29.getString());
    FIX::MaturityMonthYear MaturityMonthYear_29("MONTHYEAR_1783443338");
    noStrikes_0_0.set(MaturityMonthYear_29);
    Instrument_29.insert(MaturityMonthYear_29.getString());
    FIX::MaturityTime MaturityTime_29("TZTIMEONLY_1904641593");
    noStrikes_0_0.set(MaturityTime_29);
    Instrument_29.insert(MaturityTime_29.getString());
    FIX::MinPriceIncrement MinPriceIncrement_29;
    MinPriceIncrement_29.setString("13243001");
    noStrikes_0_0.set(MinPriceIncrement_29);
    Instrument_29.insert(MinPriceIncrement_29.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_29;
    MinPriceIncrementAmount_29.setString("3523643");
    noStrikes_0_0.set(MinPriceIncrementAmount_29);
    Instrument_29.insert(MinPriceIncrementAmount_29.getString());
    FIX::NTPositionLimit NTPositionLimit_29(132799514);
    noStrikes_0_0.set(NTPositionLimit_29);
    Instrument_29.insert(NTPositionLimit_29.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_29;
    NotionalPercentageOutstanding_29.setString("3.940000");
    noStrikes_0_0.set(NotionalPercentageOutstanding_29);
    Instrument_29.insert(NotionalPercentageOutstanding_29.getString());
    FIX::OptAttribute OptAttribute_29('2');
    noStrikes_0_0.set(OptAttribute_29);
    Instrument_29.insert(OptAttribute_29.getString());
    FIX::OptPayoutAmount OptPayoutAmount_29;
    OptPayoutAmount_29.setString("21389584");
    noStrikes_0_0.set(OptPayoutAmount_29);
    Instrument_29.insert(OptPayoutAmount_29.getString());
    FIX::OptPayoutType OptPayoutType_29(3);
    noStrikes_0_0.set(OptPayoutType_29);
    Instrument_29.insert(OptPayoutType_29.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_29;
    OriginalNotionalPercentageOutstanding_29.setString("71.250000");
    noStrikes_0_0.set(OriginalNotionalPercentageOutstanding_29);
    Instrument_29.insert(OriginalNotionalPercentageOutstanding_29.getString());
    FIX::Pool Pool_29("STRING_150907817");
    noStrikes_0_0.set(Pool_29);
    Instrument_29.insert(Pool_29.getString());
    FIX::PositionLimit PositionLimit_29(1656875640);
    noStrikes_0_0.set(PositionLimit_29);
    Instrument_29.insert(PositionLimit_29.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_29("STRING_PCTPAR");
    noStrikes_0_0.set(PriceQuoteMethod_29);
    Instrument_29.insert(PriceQuoteMethod_29.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_29("STRING_1076444867");
    noStrikes_0_0.set(PriceUnitOfMeasure_29);
    Instrument_29.insert(PriceUnitOfMeasure_29.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_29;
    PriceUnitOfMeasureQty_29.setString("5906540");
    noStrikes_0_0.set(PriceUnitOfMeasureQty_29);
    Instrument_29.insert(PriceUnitOfMeasureQty_29.getString());
    FIX::Product Product_31(9);
    noStrikes_0_0.set(Product_31);
    Instrument_29.insert(Product_31.getString());
    FIX::ProductComplex ProductComplex_29("STRING_1513549906");
    noStrikes_0_0.set(ProductComplex_29);
    Instrument_29.insert(ProductComplex_29.getString());
    FIX::PutOrCall PutOrCall_29(0);
    noStrikes_0_0.set(PutOrCall_29);
    Instrument_29.insert(PutOrCall_29.getString());
    FIX::RedemptionDate RedemptionDate_29("LOCALMKTDATE_175484314");
    noStrikes_0_0.set(RedemptionDate_29);
    Instrument_29.insert(RedemptionDate_29.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_29("STRING_116752247");
    noStrikes_0_0.set(RepoCollateralSecurityType_29);
    Instrument_29.insert(RepoCollateralSecurityType_29.getString());
    FIX::RepurchaseRate RepurchaseRate_29;
    RepurchaseRate_29.setString("33.080000");
    noStrikes_0_0.set(RepurchaseRate_29);
    Instrument_29.insert(RepurchaseRate_29.getString());
    FIX::RepurchaseTerm RepurchaseTerm_29(160514194);
    noStrikes_0_0.set(RepurchaseTerm_29);
    Instrument_29.insert(RepurchaseTerm_29.getString());
    FIX::RestructuringType RestructuringType_29("STRING_MR");
    noStrikes_0_0.set(RestructuringType_29);
    Instrument_29.insert(RestructuringType_29.getString());
    FIX::SecurityDesc SecurityDesc_29("STRING_49085423");
    noStrikes_0_0.set(SecurityDesc_29);
    Instrument_29.insert(SecurityDesc_29.getString());
    FIX::SecurityExchange SecurityExchange_29("EXCHANGE_2086157047");
    noStrikes_0_0.set(SecurityExchange_29);
    Instrument_29.insert(SecurityExchange_29.getString());
    FIX::SecurityGroup SecurityGroup_29("STRING_1517188185");
    noStrikes_0_0.set(SecurityGroup_29);
    Instrument_29.insert(SecurityGroup_29.getString());
    FIX::SecurityID SecurityID_29("STRING_903674995");
    noStrikes_0_0.set(SecurityID_29);
    Instrument_29.insert(SecurityID_29.getString());
    FIX::SecurityIDSource SecurityIDSource_29("STRING_L");
    noStrikes_0_0.set(SecurityIDSource_29);
    Instrument_29.insert(SecurityIDSource_29.getString());
    FIX::SecurityStatus SecurityStatus_29("STRING_1");
    noStrikes_0_0.set(SecurityStatus_29);
    Instrument_29.insert(SecurityStatus_29.getString());
    FIX::SecuritySubType SecuritySubType_30("STRING_1225896259");
    noStrikes_0_0.set(SecuritySubType_30);
    Instrument_29.insert(SecuritySubType_30.getString());
    FIX::SecurityType SecurityType_31("STRING_LQN");
    noStrikes_0_0.set(SecurityType_31);
    Instrument_29.insert(SecurityType_31.getString());
    FIX::Seniority Seniority_29("STRING_SD");
    noStrikes_0_0.set(Seniority_29);
    Instrument_29.insert(Seniority_29.getString());
    FIX::SettlMethod SettlMethod_29('C');
    noStrikes_0_0.set(SettlMethod_29);
    Instrument_29.insert(SettlMethod_29.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_29("STRING_1896129970");
    noStrikes_0_0.set(SettleOnOpenFlag_29);
    Instrument_29.insert(SettleOnOpenFlag_29.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_29("STRING_2048941526");
    noStrikes_0_0.set(StateOrProvinceOfIssue_29);
    Instrument_29.insert(StateOrProvinceOfIssue_29.getString());
    FIX::StrikeCurrency StrikeCurrency_29("JPY");
    noStrikes_0_0.set(StrikeCurrency_29);
    Instrument_29.insert(StrikeCurrency_29.getString());
    FIX::StrikeMultiplier StrikeMultiplier_29;
    StrikeMultiplier_29.setString("19190712");
    noStrikes_0_0.set(StrikeMultiplier_29);
    Instrument_29.insert(StrikeMultiplier_29.getString());
    FIX::StrikePrice StrikePrice_29;
    StrikePrice_29.setString("11073285");
    noStrikes_0_0.set(StrikePrice_29);
    Instrument_29.insert(StrikePrice_29.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_29(5);
    noStrikes_0_0.set(StrikePriceBoundaryMethod_29);
    Instrument_29.insert(StrikePriceBoundaryMethod_29.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_29;
    StrikePriceBoundaryPrecision_29.setString("46.930000");
    noStrikes_0_0.set(StrikePriceBoundaryPrecision_29);
    Instrument_29.insert(StrikePriceBoundaryPrecision_29.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_29(3);
    noStrikes_0_0.set(StrikePriceDeterminationMethod_29);
    Instrument_29.insert(StrikePriceDeterminationMethod_29.getString());
    FIX::StrikeValue StrikeValue_29;
    StrikeValue_29.setString("13928246");
    noStrikes_0_0.set(StrikeValue_29);
    Instrument_29.insert(StrikeValue_29.getString());
    FIX::Symbol Symbol_29("STRING_566219736");
    noStrikes_0_0.set(Symbol_29);
    Instrument_29.insert(Symbol_29.getString());
    FIX::SymbolSfx SymbolSfx_29("STRING_CD");
    noStrikes_0_0.set(SymbolSfx_29);
    Instrument_29.insert(SymbolSfx_29.getString());
    FIX::TimeUnit TimeUnit_29("STRING_Min");
    noStrikes_0_0.set(TimeUnit_29);
    Instrument_29.insert(TimeUnit_29.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_29(4);
    noStrikes_0_0.set(UnderlyingPriceDeterminationMethod_29);
    Instrument_29.insert(UnderlyingPriceDeterminationMethod_29.getString());
    FIX::UnitOfMeasure UnitOfMeasure_29("STRING_Bcf");
    noStrikes_0_0.set(UnitOfMeasure_29);
    Instrument_29.insert(UnitOfMeasure_29.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_29;
    UnitOfMeasureQty_29.setString("8438291");
    noStrikes_0_0.set(UnitOfMeasureQty_29);
    Instrument_29.insert(UnitOfMeasureQty_29.getString());
    FIX::ValuationMethod ValuationMethod_29("STRING_EQTY");
    noStrikes_0_0.set(ValuationMethod_29);
    Instrument_29.insert(ValuationMethod_29.getString());
    all_values.push_back(Instrument_29);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_59;
      FIX::ComplexEventCondition ComplexEventCondition_59(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventCondition_59.getString());
      FIX::ComplexEventPrice ComplexEventPrice_59;
      ComplexEventPrice_59.setString("5260404");
      noComplexEvents_0_1_0.set(ComplexEventPrice_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPrice_59.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_59(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceBoundaryMethod_59.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_59;
      ComplexEventPriceBoundaryPrecision_59.setString("42.690000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceBoundaryPrecision_59.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_59(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceTimeType_59.getString());
      FIX::ComplexEventType ComplexEventType_59(1);
      noComplexEvents_0_1_0.set(ComplexEventType_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventType_59.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_59;
      ComplexOptPayoutAmount_59.setString("10112692");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexOptPayoutAmount_59.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_59);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_121;
        FIX::ComplexEventEndDate ComplexEventEndDate_121(FIX::UTCTIMESTAMP(19, 42, 55, 23, 10, 2007));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_121);
        ComplexEventDates_NoComplexEventDates_121.insert(ComplexEventEndDate_121.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_121(FIX::UTCTIMESTAMP(13, 21, 51, 24, 7, 2015));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_121);
        ComplexEventDates_NoComplexEventDates_121.insert(ComplexEventStartDate_121.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_121);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_257;
          FIX::ComplexEventEndTime ComplexEventEndTime_257(FIX::UTCTIMEONLY(15, 22, 34));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_257);
          ComplexEventTimes_NoComplexEventTimes_257.insert(ComplexEventEndTime_257.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_257(FIX::UTCTIMEONLY(20, 19, 26));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_257);
          ComplexEventTimes_NoComplexEventTimes_257.insert(ComplexEventStartTime_257.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_257);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_122;
        FIX::ComplexEventEndDate ComplexEventEndDate_122(FIX::UTCTIMESTAMP(3, 50, 24, 18, 12, 2012));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_122);
        ComplexEventDates_NoComplexEventDates_122.insert(ComplexEventEndDate_122.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_122(FIX::UTCTIMESTAMP(18, 56, 4, 22, 12, 2013));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_122);
        ComplexEventDates_NoComplexEventDates_122.insert(ComplexEventStartDate_122.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_122);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_258;
          FIX::ComplexEventEndTime ComplexEventEndTime_258(FIX::UTCTIMEONLY(7, 57, 48));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_258);
          ComplexEventTimes_NoComplexEventTimes_258.insert(ComplexEventEndTime_258.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_258(FIX::UTCTIMEONLY(7, 9, 50));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_258);
          ComplexEventTimes_NoComplexEventTimes_258.insert(ComplexEventStartTime_258.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_258);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_259;
          FIX::ComplexEventEndTime ComplexEventEndTime_259(FIX::UTCTIMEONLY(1, 12, 40));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_259);
          ComplexEventTimes_NoComplexEventTimes_259.insert(ComplexEventEndTime_259.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_259(FIX::UTCTIMEONLY(21, 0, 43));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_259);
          ComplexEventTimes_NoComplexEventTimes_259.insert(ComplexEventStartTime_259.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_259);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
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
      multiset<string> EvntGrp_NoEvents_53;
      FIX::EventDate EventDate_53("LOCALMKTDATE_1203601591");
      noEvents_0_1_0.set(EventDate_53);
      EvntGrp_NoEvents_53.insert(EventDate_53.getString());
      FIX::EventPx EventPx_53;
      EventPx_53.setString("11012552");
      noEvents_0_1_0.set(EventPx_53);
      EvntGrp_NoEvents_53.insert(EventPx_53.getString());
      FIX::EventText EventText_53("STRING_353995623");
      noEvents_0_1_0.set(EventText_53);
      EvntGrp_NoEvents_53.insert(EventText_53.getString());
      FIX::EventTime EventTime_53(FIX::UTCTIMESTAMP(21, 4, 36, 19, 1, 2016));
      noEvents_0_1_0.set(EventTime_53);
      EvntGrp_NoEvents_53.insert(EventTime_53.getString());
      FIX::EventType EventType_53(6);
      noEvents_0_1_0.set(EventType_53);
      EvntGrp_NoEvents_53.insert(EventType_53.getString());
      all_values.push_back(EvntGrp_NoEvents_53);

      noStrikes_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_54;
      FIX::EventDate EventDate_54("LOCALMKTDATE_2115205655");
      noEvents_0_1_1.set(EventDate_54);
      EvntGrp_NoEvents_54.insert(EventDate_54.getString());
      FIX::EventPx EventPx_54;
      EventPx_54.setString("18163928");
      noEvents_0_1_1.set(EventPx_54);
      EvntGrp_NoEvents_54.insert(EventPx_54.getString());
      FIX::EventText EventText_54("STRING_1059866241");
      noEvents_0_1_1.set(EventText_54);
      EvntGrp_NoEvents_54.insert(EventText_54.getString());
      FIX::EventTime EventTime_54(FIX::UTCTIMESTAMP(21, 18, 20, 12, 2, 2016));
      noEvents_0_1_1.set(EventTime_54);
      EvntGrp_NoEvents_54.insert(EventTime_54.getString());
      FIX::EventType EventType_54(11);
      noEvents_0_1_1.set(EventType_54);
      EvntGrp_NoEvents_54.insert(EventType_54.getString());
      all_values.push_back(EvntGrp_NoEvents_54);

      noStrikes_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_55;
      FIX::EventDate EventDate_55("LOCALMKTDATE_558347040");
      noEvents_0_1_2.set(EventDate_55);
      EvntGrp_NoEvents_55.insert(EventDate_55.getString());
      FIX::EventPx EventPx_55;
      EventPx_55.setString("12807610");
      noEvents_0_1_2.set(EventPx_55);
      EvntGrp_NoEvents_55.insert(EventPx_55.getString());
      FIX::EventText EventText_55("STRING_665950454");
      noEvents_0_1_2.set(EventText_55);
      EvntGrp_NoEvents_55.insert(EventText_55.getString());
      FIX::EventTime EventTime_55(FIX::UTCTIMESTAMP(3, 27, 32, 18, 4, 2014));
      noEvents_0_1_2.set(EventTime_55);
      EvntGrp_NoEvents_55.insert(EventTime_55.getString());
      FIX::EventType EventType_55(5);
      noEvents_0_1_2.set(EventType_55);
      EvntGrp_NoEvents_55.insert(EventType_55.getString());
      all_values.push_back(EvntGrp_NoEvents_55);

      noStrikes_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_54;
      FIX::InstrumentPartyID InstrumentPartyID_54("STRING_1470830958");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_54);
      InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyID_54.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_54('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_54);
      InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyIDSource_54.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_54(588960914);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_54);
      InstrumentParties_NoInstrumentParties_54.insert(InstrumentPartyRole_54.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_54);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117;
        FIX::InstrumentPartySubID InstrumentPartySubID_117("STRING_1149168556");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_117);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117.insert(InstrumentPartySubID_117.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_117(1372045214);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_117);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117.insert(InstrumentPartySubIDType_117.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_55;
      FIX::InstrumentPartyID InstrumentPartyID_55("STRING_1726907726");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_55);
      InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyID_55.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_55('7');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_55);
      InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyIDSource_55.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_55(1339767222);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_55);
      InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyRole_55.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_55);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118;
        FIX::InstrumentPartySubID InstrumentPartySubID_118("STRING_1821257655");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_118);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118.insert(InstrumentPartySubID_118.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_118(533233086);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_118);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118.insert(InstrumentPartySubIDType_118.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119;
        FIX::InstrumentPartySubID InstrumentPartySubID_119("STRING_99007889");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_119);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119.insert(InstrumentPartySubID_119.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_119(1368787045);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_119);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119.insert(InstrumentPartySubIDType_119.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_62;
      FIX::SecurityAltID SecurityAltID_62("STRING_1198613569");
      noSecurityAltID_0_1_0.set(SecurityAltID_62);
      SecAltIDGrp_NoSecurityAltID_62.insert(SecurityAltID_62.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_62("STRING_1276231338");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_62);
      SecAltIDGrp_NoSecurityAltID_62.insert(SecurityAltIDSource_62.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_62);

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_63;
      FIX::SecurityAltID SecurityAltID_63("STRING_301887761");
      noSecurityAltID_0_1_1.set(SecurityAltID_63);
      SecAltIDGrp_NoSecurityAltID_63.insert(SecurityAltID_63.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_63("STRING_859657071");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_63);
      SecAltIDGrp_NoSecurityAltID_63.insert(SecurityAltIDSource_63.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_63);

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_58;
    FIX::SecurityXML SecurityXML_59("XMLDATA_1834578378");
    noStrikes_0_0.set(SecurityXML_59);
    FIX::SecurityXMLLen SecurityXMLLen_29(1582648852);
    noStrikes_0_0.set(SecurityXMLLen_29);
    FIX::SecurityXMLSchema SecurityXMLSchema_29("STRING_1525607526");
    noStrikes_0_0.set(SecurityXMLSchema_29);
    SecurityXML_58.insert(SecurityXMLSchema_29.getString());
    all_values.push_back(SecurityXML_58);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_43;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_43("DATA_1795325839");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_43);
      UnderlyingInstrument_43.insert(EncodedUnderlyingIssuer_43.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_43(41312305);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_43);
      UnderlyingInstrument_43.insert(EncodedUnderlyingIssuerLen_43.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_43("DATA_751175295");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_43);
      UnderlyingInstrument_43.insert(EncodedUnderlyingSecurityDesc_43.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_43(609583522);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_43);
      UnderlyingInstrument_43.insert(EncodedUnderlyingSecurityDescLen_43.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_43;
      UnderlyingAdjustedQuantity_43.setString("19000622");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_43);
      UnderlyingInstrument_43.insert(UnderlyingAdjustedQuantity_43.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_43;
      UnderlyingAllocationPercent_43.setString("78.510000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_43);
      UnderlyingInstrument_43.insert(UnderlyingAllocationPercent_43.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_43;
      UnderlyingAttachmentPoint_43.setString("64.180000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_43);
      UnderlyingInstrument_43.insert(UnderlyingAttachmentPoint_43.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_43("STRING_1965324111");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_43);
      UnderlyingInstrument_43.insert(UnderlyingCFICode_43.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_43("STRING_651925161");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_43);
      UnderlyingInstrument_43.insert(UnderlyingCPProgram_43.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_43("STRING_1946286007");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_43);
      UnderlyingInstrument_43.insert(UnderlyingCPRegType_43.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_43;
      UnderlyingCapValue_43.setString("4068013");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_43);
      UnderlyingInstrument_43.insert(UnderlyingCapValue_43.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_43;
      UnderlyingCashAmount_43.setString("2655051");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_43);
      UnderlyingInstrument_43.insert(UnderlyingCashAmount_43.getString());
      FIX::UnderlyingCashType UnderlyingCashType_43("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_43);
      UnderlyingInstrument_43.insert(UnderlyingCashType_43.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_43;
      UnderlyingContractMultiplier_43.setString("17788465");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_43);
      UnderlyingInstrument_43.insert(UnderlyingContractMultiplier_43.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_43(1992412834);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_43);
      UnderlyingInstrument_43.insert(UnderlyingContractMultiplierUnit_43.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_43("COUNTRY_1709362329");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_43);
      UnderlyingInstrument_43.insert(UnderlyingCountryOfIssue_43.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_43("LOCALMKTDATE_971130166");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_43);
      UnderlyingInstrument_43.insert(UnderlyingCouponPaymentDate_43.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_43;
      UnderlyingCouponRate_43.setString("61.260000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_43);
      UnderlyingInstrument_43.insert(UnderlyingCouponRate_43.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_43("STRING_1383136336");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_43);
      UnderlyingInstrument_43.insert(UnderlyingCreditRating_43.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_43("USD");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_43);
      UnderlyingInstrument_43.insert(UnderlyingCurrency_43.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_43;
      UnderlyingCurrentValue_43.setString("6044397");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_43);
      UnderlyingInstrument_43.insert(UnderlyingCurrentValue_43.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_43;
      UnderlyingDetachmentPoint_43.setString("7.310000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_43);
      UnderlyingInstrument_43.insert(UnderlyingDetachmentPoint_43.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_43;
      UnderlyingDirtyPrice_43.setString("3908839");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_43);
      UnderlyingInstrument_43.insert(UnderlyingDirtyPrice_43.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_43;
      UnderlyingEndPrice_43.setString("18806710");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_43);
      UnderlyingInstrument_43.insert(UnderlyingEndPrice_43.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_43;
      UnderlyingEndValue_43.setString("19071284");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_43);
      UnderlyingInstrument_43.insert(UnderlyingEndValue_43.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_43(1250541009);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_43);
      UnderlyingInstrument_43.insert(UnderlyingExerciseStyle_43.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_43;
      UnderlyingFXRate_43.setString("15677658");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_43);
      UnderlyingInstrument_43.insert(UnderlyingFXRate_43.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_43('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_43);
      UnderlyingInstrument_43.insert(UnderlyingFXRateCalc_43.getString());
      FIX::UnderlyingFactor UnderlyingFactor_43;
      UnderlyingFactor_43.setString("6286648");
      noUnderlyings_0_1_0.set(UnderlyingFactor_43);
      UnderlyingInstrument_43.insert(UnderlyingFactor_43.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_43(797656485);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_43);
      UnderlyingInstrument_43.insert(UnderlyingFlowScheduleType_43.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_43("STRING_990135888");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_43);
      UnderlyingInstrument_43.insert(UnderlyingInstrRegistry_43.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_43("LOCALMKTDATE_669977192");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_43);
      UnderlyingInstrument_43.insert(UnderlyingIssueDate_43.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_43("STRING_1548831781");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_43);
      UnderlyingInstrument_43.insert(UnderlyingIssuer_43.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_43("STRING_1599719410");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_43);
      UnderlyingInstrument_43.insert(UnderlyingLocaleOfIssue_43.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_43("LOCALMKTDATE_422555765");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_43);
      UnderlyingInstrument_43.insert(UnderlyingMaturityDate_43.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_43("MONTHYEAR_729925984");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_43);
      UnderlyingInstrument_43.insert(UnderlyingMaturityMonthYear_43.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_43("TZTIMEONLY_2124815828");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_43);
      UnderlyingInstrument_43.insert(UnderlyingMaturityTime_43.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_43;
      UnderlyingNotionalPercentageOutstanding_43.setString("62.280000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_43);
      UnderlyingInstrument_43.insert(UnderlyingNotionalPercentageOutstanding_43.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_43('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_43);
      UnderlyingInstrument_43.insert(UnderlyingOptAttribute_43.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_43;
      UnderlyingOriginalNotionalPercentageOutstanding_43.setString("81.870000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_43);
      UnderlyingInstrument_43.insert(UnderlyingOriginalNotionalPercentageOutstanding_43.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_43("STRING_647197605");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_43);
      UnderlyingInstrument_43.insert(UnderlyingPriceUnitOfMeasure_43.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_43;
      UnderlyingPriceUnitOfMeasureQty_43.setString("16473562");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_43);
      UnderlyingInstrument_43.insert(UnderlyingPriceUnitOfMeasureQty_43.getString());
      FIX::UnderlyingProduct UnderlyingProduct_43(724105454);
      noUnderlyings_0_1_0.set(UnderlyingProduct_43);
      UnderlyingInstrument_43.insert(UnderlyingProduct_43.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_43(278560549);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_43);
      UnderlyingInstrument_43.insert(UnderlyingPutOrCall_43.getString());
      FIX::UnderlyingPx UnderlyingPx_43;
      UnderlyingPx_43.setString("14922854");
      noUnderlyings_0_1_0.set(UnderlyingPx_43);
      UnderlyingInstrument_43.insert(UnderlyingPx_43.getString());
      FIX::UnderlyingQty UnderlyingQty_43;
      UnderlyingQty_43.setString("2859841");
      noUnderlyings_0_1_0.set(UnderlyingQty_43);
      UnderlyingInstrument_43.insert(UnderlyingQty_43.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_43("LOCALMKTDATE_1249690715");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_43);
      UnderlyingInstrument_43.insert(UnderlyingRedemptionDate_43.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_43("STRING_585547918");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_43);
      UnderlyingInstrument_43.insert(UnderlyingRepoCollateralSecurityType_43.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_43;
      UnderlyingRepurchaseRate_43.setString("4.720000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_43);
      UnderlyingInstrument_43.insert(UnderlyingRepurchaseRate_43.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_43(606570320);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_43);
      UnderlyingInstrument_43.insert(UnderlyingRepurchaseTerm_43.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_43("STRING_1925301934");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_43);
      UnderlyingInstrument_43.insert(UnderlyingRestructuringType_43.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_43("STRING_126076558");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_43);
      UnderlyingInstrument_43.insert(UnderlyingSecurityDesc_43.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_43("EXCHANGE_64327403");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_43);
      UnderlyingInstrument_43.insert(UnderlyingSecurityExchange_43.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_43("STRING_168702223");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_43);
      UnderlyingInstrument_43.insert(UnderlyingSecurityID_43.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_43("STRING_2006747630");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_43);
      UnderlyingInstrument_43.insert(UnderlyingSecurityIDSource_43.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_43("STRING_1971455896");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_43);
      UnderlyingInstrument_43.insert(UnderlyingSecuritySubType_43.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_43("STRING_1419243232");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_43);
      UnderlyingInstrument_43.insert(UnderlyingSecurityType_43.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_43("STRING_1427029784");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_43);
      UnderlyingInstrument_43.insert(UnderlyingSeniority_43.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_43("STRING_1166265944");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_43);
      UnderlyingInstrument_43.insert(UnderlyingSettlMethod_43.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_43(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_43);
      UnderlyingInstrument_43.insert(UnderlyingSettlementType_43.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_43;
      UnderlyingStartValue_43.setString("772026");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_43);
      UnderlyingInstrument_43.insert(UnderlyingStartValue_43.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_43("STRING_8918184");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_43);
      UnderlyingInstrument_43.insert(UnderlyingStateOrProvinceOfIssue_43.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_43("CAN");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_43);
      UnderlyingInstrument_43.insert(UnderlyingStrikeCurrency_43.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_43;
      UnderlyingStrikePrice_43.setString("16086375");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_43);
      UnderlyingInstrument_43.insert(UnderlyingStrikePrice_43.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_43("STRING_992957429");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_43);
      UnderlyingInstrument_43.insert(UnderlyingSymbol_43.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_43("STRING_208476739");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_43);
      UnderlyingInstrument_43.insert(UnderlyingSymbolSfx_43.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_43("STRING_1585969774");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_43);
      UnderlyingInstrument_43.insert(UnderlyingTimeUnit_43.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_43("STRING_1233353657");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_43);
      UnderlyingInstrument_43.insert(UnderlyingUnitOfMeasure_43.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_43;
      UnderlyingUnitOfMeasureQty_43.setString("15903278");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_43);
      UnderlyingInstrument_43.insert(UnderlyingUnitOfMeasureQty_43.getString());
      all_values.push_back(UnderlyingInstrument_43);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_94;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_94("STRING_1880551262");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_94);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_94.insert(UnderlyingSecurityAltID_94.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_94("STRING_1090200491");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_94);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_94.insert(UnderlyingSecurityAltIDSource_94.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_94);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_82;
        FIX::UnderlyingStipType UnderlyingStipType_82("STRING_11628164");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_82);
        UnderlyingStipulations_NoUnderlyingStips_82.insert(UnderlyingStipType_82.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_82("STRING_435002282");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_82);
        UnderlyingStipulations_NoUnderlyingStips_82.insert(UnderlyingStipValue_82.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_82);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_89;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_89("STRING_1261318879");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_89);
        UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyID_89.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_89('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_89);
        UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyIDSource_89.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_89(1893830728);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_89);
        UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyRole_89.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_89);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_190("STRING_798368486");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_190);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190.insert(UnderlyingInstrumentPartySubID_190.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_190(2019907286);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_190);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190.insert(UnderlyingInstrumentPartySubIDType_190.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_190);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_90;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_90("STRING_1932216603");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_90);
        UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyID_90.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_90('9');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_90);
        UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyIDSource_90.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_90(1879171268);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_90);
        UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyRole_90.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_90);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_191("STRING_238830294");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_191);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191.insert(UnderlyingInstrumentPartySubID_191.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_191(1158717405);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_191);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191.insert(UnderlyingInstrumentPartySubIDType_191.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_191);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_192("STRING_774971147");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_192);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192.insert(UnderlyingInstrumentPartySubID_192.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_192(139254766);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_192);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192.insert(UnderlyingInstrumentPartySubIDType_192.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_192);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_193("STRING_1235920027");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_193);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193.insert(UnderlyingInstrumentPartySubID_193.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_193(783889332);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_193);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193.insert(UnderlyingInstrumentPartySubIDType_193.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_193);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_91;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_91("STRING_709656430");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_91);
        UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyID_91.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_91('7');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_91);
        UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyIDSource_91.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_91(245043278);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_91);
        UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyRole_91.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_91);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_194("STRING_922947521");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_194);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194.insert(UnderlyingInstrumentPartySubID_194.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_194(1831013053);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_194);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194.insert(UnderlyingInstrumentPartySubIDType_194.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_194);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_0);
    }
    msg.addGroup(noStrikes_0_0);
  }
  {
    FIX50SP2::ListStrikePrice::NoStrikes noStrikes_0_1;
    // InstrmtStrkPxGrp.NoStrikes
    multiset<string> InstrmtStrkPxGrp_NoStrikes_1;
    FIX::ClOrdID ClOrdID_26("STRING_788483868");
    noStrikes_0_1.set(ClOrdID_26);
    InstrmtStrkPxGrp_NoStrikes_1.insert(ClOrdID_26.getString());
    FIX::Currency Currency_23("GBP");
    noStrikes_0_1.set(Currency_23);
    InstrmtStrkPxGrp_NoStrikes_1.insert(Currency_23.getString());
    FIX::EncodedText EncodedText_50("DATA_521551482");
    noStrikes_0_1.set(EncodedText_50);
    InstrmtStrkPxGrp_NoStrikes_1.insert(EncodedText_50.getString());
    FIX::EncodedTextLen EncodedTextLen_50(1455992250);
    noStrikes_0_1.set(EncodedTextLen_50);
    InstrmtStrkPxGrp_NoStrikes_1.insert(EncodedTextLen_50.getString());
    FIX::PrevClosePx PrevClosePx_2;
    PrevClosePx_2.setString("9843598");
    noStrikes_0_1.set(PrevClosePx_2);
    InstrmtStrkPxGrp_NoStrikes_1.insert(PrevClosePx_2.getString());
    FIX::Price Price_13;
    Price_13.setString("5331796");
    noStrikes_0_1.set(Price_13);
    InstrmtStrkPxGrp_NoStrikes_1.insert(Price_13.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_24("STRING_1890994532");
    noStrikes_0_1.set(SecondaryClOrdID_24);
    InstrmtStrkPxGrp_NoStrikes_1.insert(SecondaryClOrdID_24.getString());
    FIX::Side Side_25('F');
    noStrikes_0_1.set(Side_25);
    InstrmtStrkPxGrp_NoStrikes_1.insert(Side_25.getString());
    FIX::Text Text_50("STRING_1794498526");
    noStrikes_0_1.set(Text_50);
    InstrmtStrkPxGrp_NoStrikes_1.insert(Text_50.getString());
    all_values.push_back(InstrmtStrkPxGrp_NoStrikes_1);

    // Instrument
    multiset<string> Instrument_30;
    FIX::AttachmentPoint AttachmentPoint_30;
    AttachmentPoint_30.setString("10.850000");
    noStrikes_0_1.set(AttachmentPoint_30);
    Instrument_30.insert(AttachmentPoint_30.getString());
    FIX::CFICode CFICode_30("STRING_955417175");
    noStrikes_0_1.set(CFICode_30);
    Instrument_30.insert(CFICode_30.getString());
    FIX::CPProgram CPProgram_30(99);
    noStrikes_0_1.set(CPProgram_30);
    Instrument_30.insert(CPProgram_30.getString());
    FIX::CPRegType CPRegType_30("STRING_1562429571");
    noStrikes_0_1.set(CPRegType_30);
    Instrument_30.insert(CPRegType_30.getString());
    FIX::CapPrice CapPrice_30;
    CapPrice_30.setString("8278408");
    noStrikes_0_1.set(CapPrice_30);
    Instrument_30.insert(CapPrice_30.getString());
    FIX::ContractMultiplier ContractMultiplier_30;
    ContractMultiplier_30.setString("12996370");
    noStrikes_0_1.set(ContractMultiplier_30);
    Instrument_30.insert(ContractMultiplier_30.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_30(2);
    noStrikes_0_1.set(ContractMultiplierUnit_30);
    Instrument_30.insert(ContractMultiplierUnit_30.getString());
    FIX::ContractSettlMonth ContractSettlMonth_30("MONTHYEAR_559528434");
    noStrikes_0_1.set(ContractSettlMonth_30);
    Instrument_30.insert(ContractSettlMonth_30.getString());
    FIX::CountryOfIssue CountryOfIssue_30("COUNTRY_908342235");
    noStrikes_0_1.set(CountryOfIssue_30);
    Instrument_30.insert(CountryOfIssue_30.getString());
    FIX::CouponPaymentDate CouponPaymentDate_30("LOCALMKTDATE_620846928");
    noStrikes_0_1.set(CouponPaymentDate_30);
    Instrument_30.insert(CouponPaymentDate_30.getString());
    FIX::CouponRate CouponRate_30;
    CouponRate_30.setString("58.390000");
    noStrikes_0_1.set(CouponRate_30);
    Instrument_30.insert(CouponRate_30.getString());
    FIX::CreditRating CreditRating_30("STRING_1683313383");
    noStrikes_0_1.set(CreditRating_30);
    Instrument_30.insert(CreditRating_30.getString());
    FIX::DatedDate DatedDate_30("LOCALMKTDATE_760101694");
    noStrikes_0_1.set(DatedDate_30);
    Instrument_30.insert(DatedDate_30.getString());
    FIX::DetachmentPoint DetachmentPoint_30;
    DetachmentPoint_30.setString("22.180000");
    noStrikes_0_1.set(DetachmentPoint_30);
    Instrument_30.insert(DetachmentPoint_30.getString());
    FIX::EncodedIssuer EncodedIssuer_30("DATA_319719067");
    noStrikes_0_1.set(EncodedIssuer_30);
    Instrument_30.insert(EncodedIssuer_30.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_30(1469758124);
    noStrikes_0_1.set(EncodedIssuerLen_30);
    Instrument_30.insert(EncodedIssuerLen_30.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_30("DATA_1521153000");
    noStrikes_0_1.set(EncodedSecurityDesc_30);
    Instrument_30.insert(EncodedSecurityDesc_30.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_30(564762345);
    noStrikes_0_1.set(EncodedSecurityDescLen_30);
    Instrument_30.insert(EncodedSecurityDescLen_30.getString());
    FIX::ExerciseStyle ExerciseStyle_30(0);
    noStrikes_0_1.set(ExerciseStyle_30);
    Instrument_30.insert(ExerciseStyle_30.getString());
    FIX::Factor Factor_30;
    Factor_30.setString("2966168");
    noStrikes_0_1.set(Factor_30);
    Instrument_30.insert(Factor_30.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_30(true);
    noStrikes_0_1.set(FlexProductEligibilityIndicator_30);
    Instrument_30.insert(FlexProductEligibilityIndicator_30.getString());
    FIX::FlexibleIndicator FlexibleIndicator_30(false);
    noStrikes_0_1.set(FlexibleIndicator_30);
    Instrument_30.insert(FlexibleIndicator_30.getString());
    FIX::FloorPrice FloorPrice_30;
    FloorPrice_30.setString("6624086");
    noStrikes_0_1.set(FloorPrice_30);
    Instrument_30.insert(FloorPrice_30.getString());
    FIX::FlowScheduleType FlowScheduleType_30(4);
    noStrikes_0_1.set(FlowScheduleType_30);
    Instrument_30.insert(FlowScheduleType_30.getString());
    FIX::InstrRegistry InstrRegistry_30("STRING_187440037");
    noStrikes_0_1.set(InstrRegistry_30);
    Instrument_30.insert(InstrRegistry_30.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_30('2');
    noStrikes_0_1.set(InstrmtAssignmentMethod_30);
    Instrument_30.insert(InstrmtAssignmentMethod_30.getString());
    FIX::InterestAccrualDate InterestAccrualDate_30("LOCALMKTDATE_130801659");
    noStrikes_0_1.set(InterestAccrualDate_30);
    Instrument_30.insert(InterestAccrualDate_30.getString());
    FIX::IssueDate IssueDate_30("LOCALMKTDATE_720619684");
    noStrikes_0_1.set(IssueDate_30);
    Instrument_30.insert(IssueDate_30.getString());
    FIX::Issuer Issuer_30("STRING_1861911767");
    noStrikes_0_1.set(Issuer_30);
    Instrument_30.insert(Issuer_30.getString());
    FIX::ListMethod ListMethod_30(0);
    noStrikes_0_1.set(ListMethod_30);
    Instrument_30.insert(ListMethod_30.getString());
    FIX::LocaleOfIssue LocaleOfIssue_30("STRING_367634562");
    noStrikes_0_1.set(LocaleOfIssue_30);
    Instrument_30.insert(LocaleOfIssue_30.getString());
    FIX::MaturityDate MaturityDate_30("LOCALMKTDATE_478489204");
    noStrikes_0_1.set(MaturityDate_30);
    Instrument_30.insert(MaturityDate_30.getString());
    FIX::MaturityMonthYear MaturityMonthYear_30("MONTHYEAR_147805281");
    noStrikes_0_1.set(MaturityMonthYear_30);
    Instrument_30.insert(MaturityMonthYear_30.getString());
    FIX::MaturityTime MaturityTime_30("TZTIMEONLY_1882538639");
    noStrikes_0_1.set(MaturityTime_30);
    Instrument_30.insert(MaturityTime_30.getString());
    FIX::MinPriceIncrement MinPriceIncrement_30;
    MinPriceIncrement_30.setString("20409187");
    noStrikes_0_1.set(MinPriceIncrement_30);
    Instrument_30.insert(MinPriceIncrement_30.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_30;
    MinPriceIncrementAmount_30.setString("9756460");
    noStrikes_0_1.set(MinPriceIncrementAmount_30);
    Instrument_30.insert(MinPriceIncrementAmount_30.getString());
    FIX::NTPositionLimit NTPositionLimit_30(1034692024);
    noStrikes_0_1.set(NTPositionLimit_30);
    Instrument_30.insert(NTPositionLimit_30.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_30;
    NotionalPercentageOutstanding_30.setString("17.610000");
    noStrikes_0_1.set(NotionalPercentageOutstanding_30);
    Instrument_30.insert(NotionalPercentageOutstanding_30.getString());
    FIX::OptAttribute OptAttribute_30('1');
    noStrikes_0_1.set(OptAttribute_30);
    Instrument_30.insert(OptAttribute_30.getString());
    FIX::OptPayoutAmount OptPayoutAmount_30;
    OptPayoutAmount_30.setString("19430342");
    noStrikes_0_1.set(OptPayoutAmount_30);
    Instrument_30.insert(OptPayoutAmount_30.getString());
    FIX::OptPayoutType OptPayoutType_30(3);
    noStrikes_0_1.set(OptPayoutType_30);
    Instrument_30.insert(OptPayoutType_30.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_30;
    OriginalNotionalPercentageOutstanding_30.setString("67.190000");
    noStrikes_0_1.set(OriginalNotionalPercentageOutstanding_30);
    Instrument_30.insert(OriginalNotionalPercentageOutstanding_30.getString());
    FIX::Pool Pool_30("STRING_1478863994");
    noStrikes_0_1.set(Pool_30);
    Instrument_30.insert(Pool_30.getString());
    FIX::PositionLimit PositionLimit_30(1656400383);
    noStrikes_0_1.set(PositionLimit_30);
    Instrument_30.insert(PositionLimit_30.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_30("STRING_INX");
    noStrikes_0_1.set(PriceQuoteMethod_30);
    Instrument_30.insert(PriceQuoteMethod_30.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_30("STRING_1798583061");
    noStrikes_0_1.set(PriceUnitOfMeasure_30);
    Instrument_30.insert(PriceUnitOfMeasure_30.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_30;
    PriceUnitOfMeasureQty_30.setString("9786748");
    noStrikes_0_1.set(PriceUnitOfMeasureQty_30);
    Instrument_30.insert(PriceUnitOfMeasureQty_30.getString());
    FIX::Product Product_32(1);
    noStrikes_0_1.set(Product_32);
    Instrument_30.insert(Product_32.getString());
    FIX::ProductComplex ProductComplex_30("STRING_215861759");
    noStrikes_0_1.set(ProductComplex_30);
    Instrument_30.insert(ProductComplex_30.getString());
    FIX::PutOrCall PutOrCall_30(0);
    noStrikes_0_1.set(PutOrCall_30);
    Instrument_30.insert(PutOrCall_30.getString());
    FIX::RedemptionDate RedemptionDate_30("LOCALMKTDATE_1582905163");
    noStrikes_0_1.set(RedemptionDate_30);
    Instrument_30.insert(RedemptionDate_30.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_30("STRING_464153509");
    noStrikes_0_1.set(RepoCollateralSecurityType_30);
    Instrument_30.insert(RepoCollateralSecurityType_30.getString());
    FIX::RepurchaseRate RepurchaseRate_30;
    RepurchaseRate_30.setString("17.490000");
    noStrikes_0_1.set(RepurchaseRate_30);
    Instrument_30.insert(RepurchaseRate_30.getString());
    FIX::RepurchaseTerm RepurchaseTerm_30(97830147);
    noStrikes_0_1.set(RepurchaseTerm_30);
    Instrument_30.insert(RepurchaseTerm_30.getString());
    FIX::RestructuringType RestructuringType_30("STRING_MM");
    noStrikes_0_1.set(RestructuringType_30);
    Instrument_30.insert(RestructuringType_30.getString());
    FIX::SecurityDesc SecurityDesc_30("STRING_1856891786");
    noStrikes_0_1.set(SecurityDesc_30);
    Instrument_30.insert(SecurityDesc_30.getString());
    FIX::SecurityExchange SecurityExchange_30("EXCHANGE_68747382");
    noStrikes_0_1.set(SecurityExchange_30);
    Instrument_30.insert(SecurityExchange_30.getString());
    FIX::SecurityGroup SecurityGroup_30("STRING_1888880638");
    noStrikes_0_1.set(SecurityGroup_30);
    Instrument_30.insert(SecurityGroup_30.getString());
    FIX::SecurityID SecurityID_30("STRING_430027822");
    noStrikes_0_1.set(SecurityID_30);
    Instrument_30.insert(SecurityID_30.getString());
    FIX::SecurityIDSource SecurityIDSource_30("STRING_2");
    noStrikes_0_1.set(SecurityIDSource_30);
    Instrument_30.insert(SecurityIDSource_30.getString());
    FIX::SecurityStatus SecurityStatus_30("STRING_1");
    noStrikes_0_1.set(SecurityStatus_30);
    Instrument_30.insert(SecurityStatus_30.getString());
    FIX::SecuritySubType SecuritySubType_31("STRING_797662384");
    noStrikes_0_1.set(SecuritySubType_31);
    Instrument_30.insert(SecuritySubType_31.getString());
    FIX::SecurityType SecurityType_32("STRING_BDN");
    noStrikes_0_1.set(SecurityType_32);
    Instrument_30.insert(SecurityType_32.getString());
    FIX::Seniority Seniority_30("STRING_SB");
    noStrikes_0_1.set(Seniority_30);
    Instrument_30.insert(Seniority_30.getString());
    FIX::SettlMethod SettlMethod_30('C');
    noStrikes_0_1.set(SettlMethod_30);
    Instrument_30.insert(SettlMethod_30.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_30("STRING_155099832");
    noStrikes_0_1.set(SettleOnOpenFlag_30);
    Instrument_30.insert(SettleOnOpenFlag_30.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_30("STRING_57236471");
    noStrikes_0_1.set(StateOrProvinceOfIssue_30);
    Instrument_30.insert(StateOrProvinceOfIssue_30.getString());
    FIX::StrikeCurrency StrikeCurrency_30("CAN");
    noStrikes_0_1.set(StrikeCurrency_30);
    Instrument_30.insert(StrikeCurrency_30.getString());
    FIX::StrikeMultiplier StrikeMultiplier_30;
    StrikeMultiplier_30.setString("15924110");
    noStrikes_0_1.set(StrikeMultiplier_30);
    Instrument_30.insert(StrikeMultiplier_30.getString());
    FIX::StrikePrice StrikePrice_30;
    StrikePrice_30.setString("13629600");
    noStrikes_0_1.set(StrikePrice_30);
    Instrument_30.insert(StrikePrice_30.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_30(3);
    noStrikes_0_1.set(StrikePriceBoundaryMethod_30);
    Instrument_30.insert(StrikePriceBoundaryMethod_30.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_30;
    StrikePriceBoundaryPrecision_30.setString("40.710000");
    noStrikes_0_1.set(StrikePriceBoundaryPrecision_30);
    Instrument_30.insert(StrikePriceBoundaryPrecision_30.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_30(3);
    noStrikes_0_1.set(StrikePriceDeterminationMethod_30);
    Instrument_30.insert(StrikePriceDeterminationMethod_30.getString());
    FIX::StrikeValue StrikeValue_30;
    StrikeValue_30.setString("8357670");
    noStrikes_0_1.set(StrikeValue_30);
    Instrument_30.insert(StrikeValue_30.getString());
    FIX::Symbol Symbol_30("STRING_315999361");
    noStrikes_0_1.set(Symbol_30);
    Instrument_30.insert(Symbol_30.getString());
    FIX::SymbolSfx SymbolSfx_30("STRING_WI");
    noStrikes_0_1.set(SymbolSfx_30);
    Instrument_30.insert(SymbolSfx_30.getString());
    FIX::TimeUnit TimeUnit_30("STRING_S");
    noStrikes_0_1.set(TimeUnit_30);
    Instrument_30.insert(TimeUnit_30.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_30(3);
    noStrikes_0_1.set(UnderlyingPriceDeterminationMethod_30);
    Instrument_30.insert(UnderlyingPriceDeterminationMethod_30.getString());
    FIX::UnitOfMeasure UnitOfMeasure_30("STRING_tn");
    noStrikes_0_1.set(UnitOfMeasure_30);
    Instrument_30.insert(UnitOfMeasure_30.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_30;
    UnitOfMeasureQty_30.setString("16705214");
    noStrikes_0_1.set(UnitOfMeasureQty_30);
    Instrument_30.insert(UnitOfMeasureQty_30.getString());
    FIX::ValuationMethod ValuationMethod_30("STRING_EQTY");
    noStrikes_0_1.set(ValuationMethod_30);
    Instrument_30.insert(ValuationMethod_30.getString());
    all_values.push_back(Instrument_30);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_60;
      FIX::ComplexEventCondition ComplexEventCondition_60(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventCondition_60.getString());
      FIX::ComplexEventPrice ComplexEventPrice_60;
      ComplexEventPrice_60.setString("11355393");
      noComplexEvents_1_1_0.set(ComplexEventPrice_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPrice_60.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_60(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceBoundaryMethod_60.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_60;
      ComplexEventPriceBoundaryPrecision_60.setString("76.620000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceBoundaryPrecision_60.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_60(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventPriceTimeType_60.getString());
      FIX::ComplexEventType ComplexEventType_60(6);
      noComplexEvents_1_1_0.set(ComplexEventType_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexEventType_60.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_60;
      ComplexOptPayoutAmount_60.setString("13319254");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_60);
      ComplexEvents_NoComplexEvents_60.insert(ComplexOptPayoutAmount_60.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_60);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_123;
        FIX::ComplexEventEndDate ComplexEventEndDate_123(FIX::UTCTIMESTAMP(21, 41, 1, 17, 6, 2013));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_123);
        ComplexEventDates_NoComplexEventDates_123.insert(ComplexEventEndDate_123.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_123(FIX::UTCTIMESTAMP(23, 25, 0, 25, 5, 2012));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_123);
        ComplexEventDates_NoComplexEventDates_123.insert(ComplexEventStartDate_123.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_123);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_260;
          FIX::ComplexEventEndTime ComplexEventEndTime_260(FIX::UTCTIMEONLY(18, 7, 20));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_260);
          ComplexEventTimes_NoComplexEventTimes_260.insert(ComplexEventEndTime_260.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_260(FIX::UTCTIMEONLY(6, 5, 32));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_260);
          ComplexEventTimes_NoComplexEventTimes_260.insert(ComplexEventStartTime_260.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_260);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_261;
          FIX::ComplexEventEndTime ComplexEventEndTime_261(FIX::UTCTIMEONLY(10, 55, 39));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_261);
          ComplexEventTimes_NoComplexEventTimes_261.insert(ComplexEventEndTime_261.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_261(FIX::UTCTIMEONLY(15, 36, 13));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_261);
          ComplexEventTimes_NoComplexEventTimes_261.insert(ComplexEventStartTime_261.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_261);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_124;
        FIX::ComplexEventEndDate ComplexEventEndDate_124(FIX::UTCTIMESTAMP(1, 54, 13, 26, 5, 2002));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_124);
        ComplexEventDates_NoComplexEventDates_124.insert(ComplexEventEndDate_124.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_124(FIX::UTCTIMESTAMP(7, 51, 23, 8, 9, 2016));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_124);
        ComplexEventDates_NoComplexEventDates_124.insert(ComplexEventStartDate_124.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_124);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_262;
          FIX::ComplexEventEndTime ComplexEventEndTime_262(FIX::UTCTIMEONLY(4, 31, 37));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_262);
          ComplexEventTimes_NoComplexEventTimes_262.insert(ComplexEventEndTime_262.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_262(FIX::UTCTIMEONLY(1, 35, 45));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_262);
          ComplexEventTimes_NoComplexEventTimes_262.insert(ComplexEventStartTime_262.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_262);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_263;
          FIX::ComplexEventEndTime ComplexEventEndTime_263(FIX::UTCTIMEONLY(21, 40, 42));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_263);
          ComplexEventTimes_NoComplexEventTimes_263.insert(ComplexEventEndTime_263.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_263(FIX::UTCTIMEONLY(19, 18, 56));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_263);
          ComplexEventTimes_NoComplexEventTimes_263.insert(ComplexEventStartTime_263.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_263);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noStrikes_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_61;
      FIX::ComplexEventCondition ComplexEventCondition_61(2);
      noComplexEvents_1_1_1.set(ComplexEventCondition_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventCondition_61.getString());
      FIX::ComplexEventPrice ComplexEventPrice_61;
      ComplexEventPrice_61.setString("10020529");
      noComplexEvents_1_1_1.set(ComplexEventPrice_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPrice_61.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_61(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceBoundaryMethod_61.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_61;
      ComplexEventPriceBoundaryPrecision_61.setString("23.010000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceBoundaryPrecision_61.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_61(3);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventPriceTimeType_61.getString());
      FIX::ComplexEventType ComplexEventType_61(3);
      noComplexEvents_1_1_1.set(ComplexEventType_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexEventType_61.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_61;
      ComplexOptPayoutAmount_61.setString("4690950");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_61);
      ComplexEvents_NoComplexEvents_61.insert(ComplexOptPayoutAmount_61.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_61);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_125;
        FIX::ComplexEventEndDate ComplexEventEndDate_125(FIX::UTCTIMESTAMP(19, 7, 54, 7, 10, 2012));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_125);
        ComplexEventDates_NoComplexEventDates_125.insert(ComplexEventEndDate_125.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_125(FIX::UTCTIMESTAMP(17, 49, 18, 10, 7, 2011));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_125);
        ComplexEventDates_NoComplexEventDates_125.insert(ComplexEventStartDate_125.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_125);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_264;
          FIX::ComplexEventEndTime ComplexEventEndTime_264(FIX::UTCTIMEONLY(14, 19, 38));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_264);
          ComplexEventTimes_NoComplexEventTimes_264.insert(ComplexEventEndTime_264.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_264(FIX::UTCTIMEONLY(14, 56, 18));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_264);
          ComplexEventTimes_NoComplexEventTimes_264.insert(ComplexEventStartTime_264.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_264);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_265;
          FIX::ComplexEventEndTime ComplexEventEndTime_265(FIX::UTCTIMEONLY(7, 1, 35));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_265);
          ComplexEventTimes_NoComplexEventTimes_265.insert(ComplexEventEndTime_265.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_265(FIX::UTCTIMEONLY(0, 6, 48));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_265);
          ComplexEventTimes_NoComplexEventTimes_265.insert(ComplexEventStartTime_265.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_265);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_266;
          FIX::ComplexEventEndTime ComplexEventEndTime_266(FIX::UTCTIMEONLY(1, 48, 44));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventEndTime_266);
          ComplexEventTimes_NoComplexEventTimes_266.insert(ComplexEventEndTime_266.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_266(FIX::UTCTIMEONLY(21, 2, 41));
          noComplexEventTimes_1_1_0_3_2.set(ComplexEventStartTime_266);
          ComplexEventTimes_NoComplexEventTimes_266.insert(ComplexEventStartTime_266.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_266);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_126;
        FIX::ComplexEventEndDate ComplexEventEndDate_126(FIX::UTCTIMESTAMP(3, 59, 49, 21, 5, 2010));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_126);
        ComplexEventDates_NoComplexEventDates_126.insert(ComplexEventEndDate_126.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_126(FIX::UTCTIMESTAMP(10, 47, 12, 4, 6, 2013));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_126);
        ComplexEventDates_NoComplexEventDates_126.insert(ComplexEventStartDate_126.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_126);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_267;
          FIX::ComplexEventEndTime ComplexEventEndTime_267(FIX::UTCTIMEONLY(20, 55, 34));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_267);
          ComplexEventTimes_NoComplexEventTimes_267.insert(ComplexEventEndTime_267.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_267(FIX::UTCTIMEONLY(11, 41, 37));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_267);
          ComplexEventTimes_NoComplexEventTimes_267.insert(ComplexEventStartTime_267.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_267);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_127;
        FIX::ComplexEventEndDate ComplexEventEndDate_127(FIX::UTCTIMESTAMP(10, 25, 45, 19, 4, 2000));
        noComplexEventDates_1_1_2_2.set(ComplexEventEndDate_127);
        ComplexEventDates_NoComplexEventDates_127.insert(ComplexEventEndDate_127.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_127(FIX::UTCTIMESTAMP(10, 31, 43, 23, 10, 2005));
        noComplexEventDates_1_1_2_2.set(ComplexEventStartDate_127);
        ComplexEventDates_NoComplexEventDates_127.insert(ComplexEventStartDate_127.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_127);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_268;
          FIX::ComplexEventEndTime ComplexEventEndTime_268(FIX::UTCTIMEONLY(9, 22, 55));
          noComplexEventTimes_1_1_2_3_0.set(ComplexEventEndTime_268);
          ComplexEventTimes_NoComplexEventTimes_268.insert(ComplexEventEndTime_268.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_268(FIX::UTCTIMEONLY(15, 56, 27));
          noComplexEventTimes_1_1_2_3_0.set(ComplexEventStartTime_268);
          ComplexEventTimes_NoComplexEventTimes_268.insert(ComplexEventStartTime_268.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_268);

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_269;
          FIX::ComplexEventEndTime ComplexEventEndTime_269(FIX::UTCTIMEONLY(17, 22, 57));
          noComplexEventTimes_1_1_2_3_1.set(ComplexEventEndTime_269);
          ComplexEventTimes_NoComplexEventTimes_269.insert(ComplexEventEndTime_269.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_269(FIX::UTCTIMEONLY(1, 30, 59));
          noComplexEventTimes_1_1_2_3_1.set(ComplexEventStartTime_269);
          ComplexEventTimes_NoComplexEventTimes_269.insert(ComplexEventStartTime_269.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_269);

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_2);
      }
      noStrikes_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_62;
      FIX::ComplexEventCondition ComplexEventCondition_62(1);
      noComplexEvents_1_1_2.set(ComplexEventCondition_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventCondition_62.getString());
      FIX::ComplexEventPrice ComplexEventPrice_62;
      ComplexEventPrice_62.setString("12239527");
      noComplexEvents_1_1_2.set(ComplexEventPrice_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPrice_62.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_62(3);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceBoundaryMethod_62.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_62;
      ComplexEventPriceBoundaryPrecision_62.setString("68.640000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceBoundaryPrecision_62.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_62(3);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceTimeType_62.getString());
      FIX::ComplexEventType ComplexEventType_62(3);
      noComplexEvents_1_1_2.set(ComplexEventType_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexEventType_62.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_62;
      ComplexOptPayoutAmount_62.setString("17557865");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_62);
      ComplexEvents_NoComplexEvents_62.insert(ComplexOptPayoutAmount_62.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_62);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_128;
        FIX::ComplexEventEndDate ComplexEventEndDate_128(FIX::UTCTIMESTAMP(3, 11, 37, 12, 11, 2000));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_128);
        ComplexEventDates_NoComplexEventDates_128.insert(ComplexEventEndDate_128.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_128(FIX::UTCTIMESTAMP(23, 34, 3, 5, 2, 2017));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_128);
        ComplexEventDates_NoComplexEventDates_128.insert(ComplexEventStartDate_128.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_128);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_270;
          FIX::ComplexEventEndTime ComplexEventEndTime_270(FIX::UTCTIMEONLY(20, 43, 54));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_270);
          ComplexEventTimes_NoComplexEventTimes_270.insert(ComplexEventEndTime_270.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_270(FIX::UTCTIMEONLY(20, 24, 46));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_270);
          ComplexEventTimes_NoComplexEventTimes_270.insert(ComplexEventStartTime_270.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_270);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_271;
          FIX::ComplexEventEndTime ComplexEventEndTime_271(FIX::UTCTIMEONLY(21, 3, 31));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventEndTime_271);
          ComplexEventTimes_NoComplexEventTimes_271.insert(ComplexEventEndTime_271.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_271(FIX::UTCTIMEONLY(11, 15, 9));
          noComplexEventTimes_1_2_0_3_1.set(ComplexEventStartTime_271);
          ComplexEventTimes_NoComplexEventTimes_271.insert(ComplexEventStartTime_271.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_271);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      noStrikes_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_56;
      FIX::EventDate EventDate_56("LOCALMKTDATE_1284538950");
      noEvents_1_1_0.set(EventDate_56);
      EvntGrp_NoEvents_56.insert(EventDate_56.getString());
      FIX::EventPx EventPx_56;
      EventPx_56.setString("6999324");
      noEvents_1_1_0.set(EventPx_56);
      EvntGrp_NoEvents_56.insert(EventPx_56.getString());
      FIX::EventText EventText_56("STRING_2019556010");
      noEvents_1_1_0.set(EventText_56);
      EvntGrp_NoEvents_56.insert(EventText_56.getString());
      FIX::EventTime EventTime_56(FIX::UTCTIMESTAMP(10, 54, 2, 6, 5, 2005));
      noEvents_1_1_0.set(EventTime_56);
      EvntGrp_NoEvents_56.insert(EventTime_56.getString());
      FIX::EventType EventType_56(16);
      noEvents_1_1_0.set(EventType_56);
      EvntGrp_NoEvents_56.insert(EventType_56.getString());
      all_values.push_back(EvntGrp_NoEvents_56);

      noStrikes_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_57;
      FIX::EventDate EventDate_57("LOCALMKTDATE_1378304117");
      noEvents_1_1_1.set(EventDate_57);
      EvntGrp_NoEvents_57.insert(EventDate_57.getString());
      FIX::EventPx EventPx_57;
      EventPx_57.setString("7760813");
      noEvents_1_1_1.set(EventPx_57);
      EvntGrp_NoEvents_57.insert(EventPx_57.getString());
      FIX::EventText EventText_57("STRING_1667056383");
      noEvents_1_1_1.set(EventText_57);
      EvntGrp_NoEvents_57.insert(EventText_57.getString());
      FIX::EventTime EventTime_57(FIX::UTCTIMESTAMP(17, 46, 16, 12, 12, 2014));
      noEvents_1_1_1.set(EventTime_57);
      EvntGrp_NoEvents_57.insert(EventTime_57.getString());
      FIX::EventType EventType_57(3);
      noEvents_1_1_1.set(EventType_57);
      EvntGrp_NoEvents_57.insert(EventType_57.getString());
      all_values.push_back(EvntGrp_NoEvents_57);

      noStrikes_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_56;
      FIX::InstrumentPartyID InstrumentPartyID_56("STRING_842267670");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_56);
      InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyID_56.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_56('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_56);
      InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyIDSource_56.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_56(1924643077);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_56);
      InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyRole_56.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_56);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120;
        FIX::InstrumentPartySubID InstrumentPartySubID_120("STRING_1493845676");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_120);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120.insert(InstrumentPartySubID_120.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_120(1058303624);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_120);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120.insert(InstrumentPartySubIDType_120.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121;
        FIX::InstrumentPartySubID InstrumentPartySubID_121("STRING_1744510821");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_121);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121.insert(InstrumentPartySubID_121.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_121(143899081);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_121);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121.insert(InstrumentPartySubIDType_121.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122;
        FIX::InstrumentPartySubID InstrumentPartySubID_122("STRING_195358926");
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubID_122);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122.insert(InstrumentPartySubID_122.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_122(296959593);
        noInstrumentPartySubIDs_1_0_2_2.set(InstrumentPartySubIDType_122);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122.insert(InstrumentPartySubIDType_122.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noStrikes_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_64;
      FIX::SecurityAltID SecurityAltID_64("STRING_1521171121");
      noSecurityAltID_1_1_0.set(SecurityAltID_64);
      SecAltIDGrp_NoSecurityAltID_64.insert(SecurityAltID_64.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_64("STRING_672165812");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_64);
      SecAltIDGrp_NoSecurityAltID_64.insert(SecurityAltIDSource_64.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_64);

      noStrikes_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_65;
      FIX::SecurityAltID SecurityAltID_65("STRING_88848637");
      noSecurityAltID_1_1_1.set(SecurityAltID_65);
      SecAltIDGrp_NoSecurityAltID_65.insert(SecurityAltID_65.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_65("STRING_603462956");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_65);
      SecAltIDGrp_NoSecurityAltID_65.insert(SecurityAltIDSource_65.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_65);

      noStrikes_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_60;
    FIX::SecurityXML SecurityXML_61("XMLDATA_208789798");
    noStrikes_0_1.set(SecurityXML_61);
    FIX::SecurityXMLLen SecurityXMLLen_30(499649645);
    noStrikes_0_1.set(SecurityXMLLen_30);
    FIX::SecurityXMLSchema SecurityXMLSchema_30("STRING_136686653");
    noStrikes_0_1.set(SecurityXMLSchema_30);
    SecurityXML_60.insert(SecurityXMLSchema_30.getString());
    all_values.push_back(SecurityXML_60);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_44;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_44("DATA_1877953762");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingIssuer_44.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_44(912768050);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingIssuerLen_44.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_44("DATA_1070170408");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingSecurityDesc_44.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_44(1415369376);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingSecurityDescLen_44.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_44;
      UnderlyingAdjustedQuantity_44.setString("2363546");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_44);
      UnderlyingInstrument_44.insert(UnderlyingAdjustedQuantity_44.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_44;
      UnderlyingAllocationPercent_44.setString("22.270000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_44);
      UnderlyingInstrument_44.insert(UnderlyingAllocationPercent_44.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_44;
      UnderlyingAttachmentPoint_44.setString("32.840000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_44);
      UnderlyingInstrument_44.insert(UnderlyingAttachmentPoint_44.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_44("STRING_600230428");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_44);
      UnderlyingInstrument_44.insert(UnderlyingCFICode_44.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_44("STRING_2068063194");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_44);
      UnderlyingInstrument_44.insert(UnderlyingCPProgram_44.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_44("STRING_1971079517");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_44);
      UnderlyingInstrument_44.insert(UnderlyingCPRegType_44.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_44;
      UnderlyingCapValue_44.setString("13065364");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_44);
      UnderlyingInstrument_44.insert(UnderlyingCapValue_44.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_44;
      UnderlyingCashAmount_44.setString("1723813");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_44);
      UnderlyingInstrument_44.insert(UnderlyingCashAmount_44.getString());
      FIX::UnderlyingCashType UnderlyingCashType_44("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_44);
      UnderlyingInstrument_44.insert(UnderlyingCashType_44.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_44;
      UnderlyingContractMultiplier_44.setString("7042350");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_44);
      UnderlyingInstrument_44.insert(UnderlyingContractMultiplier_44.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_44(2097024389);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_44);
      UnderlyingInstrument_44.insert(UnderlyingContractMultiplierUnit_44.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_44("COUNTRY_1979887490");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_44);
      UnderlyingInstrument_44.insert(UnderlyingCountryOfIssue_44.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_44("LOCALMKTDATE_50597055");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_44);
      UnderlyingInstrument_44.insert(UnderlyingCouponPaymentDate_44.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_44;
      UnderlyingCouponRate_44.setString("43.650000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_44);
      UnderlyingInstrument_44.insert(UnderlyingCouponRate_44.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_44("STRING_1576914663");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_44);
      UnderlyingInstrument_44.insert(UnderlyingCreditRating_44.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_44("CAN");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_44);
      UnderlyingInstrument_44.insert(UnderlyingCurrency_44.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_44;
      UnderlyingCurrentValue_44.setString("18738742");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_44);
      UnderlyingInstrument_44.insert(UnderlyingCurrentValue_44.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_44;
      UnderlyingDetachmentPoint_44.setString("75.790000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_44);
      UnderlyingInstrument_44.insert(UnderlyingDetachmentPoint_44.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_44;
      UnderlyingDirtyPrice_44.setString("5768907");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_44);
      UnderlyingInstrument_44.insert(UnderlyingDirtyPrice_44.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_44;
      UnderlyingEndPrice_44.setString("3985564");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_44);
      UnderlyingInstrument_44.insert(UnderlyingEndPrice_44.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_44;
      UnderlyingEndValue_44.setString("2993162");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_44);
      UnderlyingInstrument_44.insert(UnderlyingEndValue_44.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_44(1180353721);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_44);
      UnderlyingInstrument_44.insert(UnderlyingExerciseStyle_44.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_44;
      UnderlyingFXRate_44.setString("6073462");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_44);
      UnderlyingInstrument_44.insert(UnderlyingFXRate_44.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_44('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_44);
      UnderlyingInstrument_44.insert(UnderlyingFXRateCalc_44.getString());
      FIX::UnderlyingFactor UnderlyingFactor_44;
      UnderlyingFactor_44.setString("13170403");
      noUnderlyings_1_1_0.set(UnderlyingFactor_44);
      UnderlyingInstrument_44.insert(UnderlyingFactor_44.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_44(10460244);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_44);
      UnderlyingInstrument_44.insert(UnderlyingFlowScheduleType_44.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_44("STRING_529435975");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_44);
      UnderlyingInstrument_44.insert(UnderlyingInstrRegistry_44.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_44("LOCALMKTDATE_82324777");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_44);
      UnderlyingInstrument_44.insert(UnderlyingIssueDate_44.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_44("STRING_1080630652");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_44);
      UnderlyingInstrument_44.insert(UnderlyingIssuer_44.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_44("STRING_1944805352");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_44);
      UnderlyingInstrument_44.insert(UnderlyingLocaleOfIssue_44.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_44("LOCALMKTDATE_318679429");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_44);
      UnderlyingInstrument_44.insert(UnderlyingMaturityDate_44.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_44("MONTHYEAR_1910162879");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_44);
      UnderlyingInstrument_44.insert(UnderlyingMaturityMonthYear_44.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_44("TZTIMEONLY_994564988");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_44);
      UnderlyingInstrument_44.insert(UnderlyingMaturityTime_44.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_44;
      UnderlyingNotionalPercentageOutstanding_44.setString("98.570000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_44);
      UnderlyingInstrument_44.insert(UnderlyingNotionalPercentageOutstanding_44.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_44('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_44);
      UnderlyingInstrument_44.insert(UnderlyingOptAttribute_44.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_44;
      UnderlyingOriginalNotionalPercentageOutstanding_44.setString("8.570000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_44);
      UnderlyingInstrument_44.insert(UnderlyingOriginalNotionalPercentageOutstanding_44.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_44("STRING_77962659");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_44);
      UnderlyingInstrument_44.insert(UnderlyingPriceUnitOfMeasure_44.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_44;
      UnderlyingPriceUnitOfMeasureQty_44.setString("20031237");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_44);
      UnderlyingInstrument_44.insert(UnderlyingPriceUnitOfMeasureQty_44.getString());
      FIX::UnderlyingProduct UnderlyingProduct_44(1484024396);
      noUnderlyings_1_1_0.set(UnderlyingProduct_44);
      UnderlyingInstrument_44.insert(UnderlyingProduct_44.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_44(782197686);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_44);
      UnderlyingInstrument_44.insert(UnderlyingPutOrCall_44.getString());
      FIX::UnderlyingPx UnderlyingPx_44;
      UnderlyingPx_44.setString("19526644");
      noUnderlyings_1_1_0.set(UnderlyingPx_44);
      UnderlyingInstrument_44.insert(UnderlyingPx_44.getString());
      FIX::UnderlyingQty UnderlyingQty_44;
      UnderlyingQty_44.setString("13164282");
      noUnderlyings_1_1_0.set(UnderlyingQty_44);
      UnderlyingInstrument_44.insert(UnderlyingQty_44.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_44("LOCALMKTDATE_832794741");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_44);
      UnderlyingInstrument_44.insert(UnderlyingRedemptionDate_44.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_44("STRING_813025195");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_44);
      UnderlyingInstrument_44.insert(UnderlyingRepoCollateralSecurityType_44.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_44;
      UnderlyingRepurchaseRate_44.setString("92.540000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_44);
      UnderlyingInstrument_44.insert(UnderlyingRepurchaseRate_44.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_44(1027290877);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_44);
      UnderlyingInstrument_44.insert(UnderlyingRepurchaseTerm_44.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_44("STRING_2016228487");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_44);
      UnderlyingInstrument_44.insert(UnderlyingRestructuringType_44.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_44("STRING_472249863");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityDesc_44.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_44("EXCHANGE_1237758456");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityExchange_44.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_44("STRING_445635604");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityID_44.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_44("STRING_870806284");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityIDSource_44.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_44("STRING_1537074672");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_44);
      UnderlyingInstrument_44.insert(UnderlyingSecuritySubType_44.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_44("STRING_1625989325");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityType_44.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_44("STRING_1478152503");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_44);
      UnderlyingInstrument_44.insert(UnderlyingSeniority_44.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_44("STRING_188556885");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_44);
      UnderlyingInstrument_44.insert(UnderlyingSettlMethod_44.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_44(2);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_44);
      UnderlyingInstrument_44.insert(UnderlyingSettlementType_44.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_44;
      UnderlyingStartValue_44.setString("14886127");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_44);
      UnderlyingInstrument_44.insert(UnderlyingStartValue_44.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_44("STRING_717992860");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_44);
      UnderlyingInstrument_44.insert(UnderlyingStateOrProvinceOfIssue_44.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_44("USD");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_44);
      UnderlyingInstrument_44.insert(UnderlyingStrikeCurrency_44.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_44;
      UnderlyingStrikePrice_44.setString("5153145");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_44);
      UnderlyingInstrument_44.insert(UnderlyingStrikePrice_44.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_44("STRING_1196550257");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_44);
      UnderlyingInstrument_44.insert(UnderlyingSymbol_44.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_44("STRING_184438983");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_44);
      UnderlyingInstrument_44.insert(UnderlyingSymbolSfx_44.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_44("STRING_1509879553");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_44);
      UnderlyingInstrument_44.insert(UnderlyingTimeUnit_44.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_44("STRING_2115460114");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_44);
      UnderlyingInstrument_44.insert(UnderlyingUnitOfMeasure_44.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_44;
      UnderlyingUnitOfMeasureQty_44.setString("20151814");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_44);
      UnderlyingInstrument_44.insert(UnderlyingUnitOfMeasureQty_44.getString());
      all_values.push_back(UnderlyingInstrument_44);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_95;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_95("STRING_45939125");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_95);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_95.insert(UnderlyingSecurityAltID_95.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_95("STRING_1870821498");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_95);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_95.insert(UnderlyingSecurityAltIDSource_95.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_95);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_96;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_96("STRING_1664581159");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_96);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_96.insert(UnderlyingSecurityAltID_96.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_96("STRING_828136811");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_96);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_96.insert(UnderlyingSecurityAltIDSource_96.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_96);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_83;
        FIX::UnderlyingStipType UnderlyingStipType_83("STRING_833525750");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_83);
        UnderlyingStipulations_NoUnderlyingStips_83.insert(UnderlyingStipType_83.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_83("STRING_1660931552");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_83);
        UnderlyingStipulations_NoUnderlyingStips_83.insert(UnderlyingStipValue_83.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_83);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_92;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_92("STRING_1579385004");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_92);
        UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyID_92.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_92('5');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_92);
        UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyIDSource_92.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_92(210288715);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_92);
        UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyRole_92.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_92);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_195("STRING_1778497237");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_195);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195.insert(UnderlyingInstrumentPartySubID_195.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_195(655924319);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_195);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195.insert(UnderlyingInstrumentPartySubIDType_195.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_196("STRING_774957504");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_196);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196.insert(UnderlyingInstrumentPartySubID_196.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_196(1168088261);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_196);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196.insert(UnderlyingInstrumentPartySubIDType_196.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_93;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_93("STRING_134429996");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_93);
        UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyID_93.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_93('1');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_93);
        UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyIDSource_93.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_93(1356645146);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_93);
        UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyRole_93.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_93);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_197("STRING_1594239107");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_197);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197.insert(UnderlyingInstrumentPartySubID_197.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_197(2074638007);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_197);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197.insert(UnderlyingInstrumentPartySubIDType_197.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_94;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_94("STRING_1807846876");
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyID_94);
        UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyID_94.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_94('2');
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyIDSource_94);
        UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyIDSource_94.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_94(442468923);
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyRole_94);
        UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyRole_94.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_94);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_198("STRING_52954195");
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubID_198);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198.insert(UnderlyingInstrumentPartySubID_198.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_198(1952348476);
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_198);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198.insert(UnderlyingInstrumentPartySubIDType_198.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_198);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_199("STRING_824889952");
          noUndlyInstrumentPartySubIDs_1_0_2_3_1.set(UnderlyingInstrumentPartySubID_199);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199.insert(UnderlyingInstrumentPartySubID_199.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_199(2068135604);
          noUndlyInstrumentPartySubIDs_1_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_199);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199.insert(UnderlyingInstrumentPartySubIDType_199.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_199);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_200("STRING_2132905239");
          noUndlyInstrumentPartySubIDs_1_0_2_3_2.set(UnderlyingInstrumentPartySubID_200);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200.insert(UnderlyingInstrumentPartySubID_200.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_200(870829078);
          noUndlyInstrumentPartySubIDs_1_0_2_3_2.set(UnderlyingInstrumentPartySubIDType_200);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200.insert(UnderlyingInstrumentPartySubIDType_200.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_200);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_2);
      }
      noStrikes_0_1.addGroup(noUnderlyings_1_1_0);
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
