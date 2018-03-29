#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderMassActionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassActionReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassActionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionReport_0;
  FIX::ClOrdID ClOrdID_37("STRING_2021033272");
  msg.set(ClOrdID_37);
  OrderMassActionReport_0.insert(ClOrdID_37.getString());
  FIX::EncodedText EncodedText_68("DATA_327304671");
  msg.set(EncodedText_68);
  OrderMassActionReport_0.insert(EncodedText_68.getString());
  FIX::EncodedTextLen EncodedTextLen_68(319921910);
  msg.set(EncodedTextLen_68);
  OrderMassActionReport_0.insert(EncodedTextLen_68.getString());
  FIX::MarketID MarketID_11("EXCHANGE_485729436");
  msg.set(MarketID_11);
  OrderMassActionReport_0.insert(MarketID_11.getString());
  FIX::MarketSegmentID MarketSegmentID_11("STRING_35568263");
  msg.set(MarketSegmentID_11);
  OrderMassActionReport_0.insert(MarketSegmentID_11.getString());
  FIX::MassActionRejectReason MassActionRejectReason_0(0);
  msg.set(MassActionRejectReason_0);
  OrderMassActionReport_0.insert(MassActionRejectReason_0.getString());
  FIX::MassActionReportID MassActionReportID_0("STRING_1858506339");
  msg.set(MassActionReportID_0);
  OrderMassActionReport_0.insert(MassActionReportID_0.getString());
  FIX::MassActionResponse MassActionResponse_0(1);
  msg.set(MassActionResponse_0);
  OrderMassActionReport_0.insert(MassActionResponse_0.getString());
  FIX::MassActionScope MassActionScope_0(3);
  msg.set(MassActionScope_0);
  OrderMassActionReport_0.insert(MassActionScope_0.getString());
  FIX::MassActionType MassActionType_0(1);
  msg.set(MassActionType_0);
  OrderMassActionReport_0.insert(MassActionType_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_35("STRING_715421992");
  msg.set(SecondaryClOrdID_35);
  OrderMassActionReport_0.insert(SecondaryClOrdID_35.getString());
  FIX::Side Side_35('A');
  msg.set(Side_35);
  OrderMassActionReport_0.insert(Side_35.getString());
  FIX::Text Text_68("STRING_630210746");
  msg.set(Text_68);
  OrderMassActionReport_0.insert(Text_68.getString());
  FIX::TotalAffectedOrders TotalAffectedOrders_0(620261821);
  msg.set(TotalAffectedOrders_0);
  OrderMassActionReport_0.insert(TotalAffectedOrders_0.getString());
  FIX::TradingSessionID TradingSessionID_70("STRING_5");
  msg.set(TradingSessionID_70);
  OrderMassActionReport_0.insert(TradingSessionID_70.getString());
  FIX::TradingSessionSubID TradingSessionSubID_70("STRING_6");
  msg.set(TradingSessionSubID_70);
  OrderMassActionReport_0.insert(TradingSessionSubID_70.getString());
  FIX::TransactTime TransactTime_50(FIX::UTCTIMESTAMP(1, 40, 13, 12, 7, 2009));
  msg.set(TransactTime_50);
  OrderMassActionReport_0.insert(TransactTime_50.getString());
  all_values.push_back(OrderMassActionReport_0);

  all_compo_names.insert("OrderMassActionReport");

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_0;
    FIX::AffectedOrderID AffectedOrderID_0("STRING_740002546");
    noAffectedOrders_0_0.set(AffectedOrderID_0);
    AffectedOrdGrp_NoAffectedOrders_0.insert(AffectedOrderID_0.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_0("STRING_50493169");
    noAffectedOrders_0_0.set(AffectedSecondaryOrderID_0);
    AffectedOrdGrp_NoAffectedOrders_0.insert(AffectedSecondaryOrderID_0.getString());
    FIX::OrigClOrdID OrigClOrdID_12("STRING_2082693174");
    noAffectedOrders_0_0.set(OrigClOrdID_12);
    AffectedOrdGrp_NoAffectedOrders_0.insert(OrigClOrdID_12.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_0);
    all_compo_names.insert("AffectedOrdGrp.NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_0);
  }
  // Instrument
  multiset<string> Instrument_57;
  FIX::AttachmentPoint AttachmentPoint_57;
  AttachmentPoint_57.setString("42.360000");
  msg.set(AttachmentPoint_57);
  Instrument_57.insert(AttachmentPoint_57.getString());
  FIX::CFICode CFICode_57("STRING_371908930");
  msg.set(CFICode_57);
  Instrument_57.insert(CFICode_57.getString());
  FIX::CPProgram CPProgram_57(2);
  msg.set(CPProgram_57);
  Instrument_57.insert(CPProgram_57.getString());
  FIX::CPRegType CPRegType_57("STRING_11510569");
  msg.set(CPRegType_57);
  Instrument_57.insert(CPRegType_57.getString());
  FIX::CapPrice CapPrice_57;
  CapPrice_57.setString("2454585");
  msg.set(CapPrice_57);
  Instrument_57.insert(CapPrice_57.getString());
  FIX::ContractMultiplier ContractMultiplier_57;
  ContractMultiplier_57.setString("5536646");
  msg.set(ContractMultiplier_57);
  Instrument_57.insert(ContractMultiplier_57.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_57(0);
  msg.set(ContractMultiplierUnit_57);
  Instrument_57.insert(ContractMultiplierUnit_57.getString());
  FIX::ContractSettlMonth ContractSettlMonth_57("MONTHYEAR_731187990");
  msg.set(ContractSettlMonth_57);
  Instrument_57.insert(ContractSettlMonth_57.getString());
  FIX::CountryOfIssue CountryOfIssue_57("COUNTRY_589232928");
  msg.set(CountryOfIssue_57);
  Instrument_57.insert(CountryOfIssue_57.getString());
  FIX::CouponPaymentDate CouponPaymentDate_57("LOCALMKTDATE_1299975808");
  msg.set(CouponPaymentDate_57);
  Instrument_57.insert(CouponPaymentDate_57.getString());
  FIX::CouponRate CouponRate_57;
  CouponRate_57.setString("6.810000");
  msg.set(CouponRate_57);
  Instrument_57.insert(CouponRate_57.getString());
  FIX::CreditRating CreditRating_57("STRING_1561672977");
  msg.set(CreditRating_57);
  Instrument_57.insert(CreditRating_57.getString());
  FIX::DatedDate DatedDate_57("LOCALMKTDATE_516461603");
  msg.set(DatedDate_57);
  Instrument_57.insert(DatedDate_57.getString());
  FIX::DetachmentPoint DetachmentPoint_57;
  DetachmentPoint_57.setString("9.150000");
  msg.set(DetachmentPoint_57);
  Instrument_57.insert(DetachmentPoint_57.getString());
  FIX::EncodedIssuer EncodedIssuer_57("DATA_129611322");
  msg.set(EncodedIssuer_57);
  Instrument_57.insert(EncodedIssuer_57.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_57(471575196);
  msg.set(EncodedIssuerLen_57);
  Instrument_57.insert(EncodedIssuerLen_57.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_57("DATA_1870761661");
  msg.set(EncodedSecurityDesc_57);
  Instrument_57.insert(EncodedSecurityDesc_57.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_57(749873143);
  msg.set(EncodedSecurityDescLen_57);
  Instrument_57.insert(EncodedSecurityDescLen_57.getString());
  FIX::ExerciseStyle ExerciseStyle_57(1);
  msg.set(ExerciseStyle_57);
  Instrument_57.insert(ExerciseStyle_57.getString());
  FIX::Factor Factor_57;
  Factor_57.setString("20374542");
  msg.set(Factor_57);
  Instrument_57.insert(Factor_57.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_57(true);
  msg.set(FlexProductEligibilityIndicator_57);
  Instrument_57.insert(FlexProductEligibilityIndicator_57.getString());
  FIX::FlexibleIndicator FlexibleIndicator_57(false);
  msg.set(FlexibleIndicator_57);
  Instrument_57.insert(FlexibleIndicator_57.getString());
  FIX::FloorPrice FloorPrice_57;
  FloorPrice_57.setString("2711144");
  msg.set(FloorPrice_57);
  Instrument_57.insert(FloorPrice_57.getString());
  FIX::FlowScheduleType FlowScheduleType_57(0);
  msg.set(FlowScheduleType_57);
  Instrument_57.insert(FlowScheduleType_57.getString());
  FIX::InstrRegistry InstrRegistry_57("STRING_661067035");
  msg.set(InstrRegistry_57);
  Instrument_57.insert(InstrRegistry_57.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_57('1');
  msg.set(InstrmtAssignmentMethod_57);
  Instrument_57.insert(InstrmtAssignmentMethod_57.getString());
  FIX::InterestAccrualDate InterestAccrualDate_57("LOCALMKTDATE_401491226");
  msg.set(InterestAccrualDate_57);
  Instrument_57.insert(InterestAccrualDate_57.getString());
  FIX::IssueDate IssueDate_57("LOCALMKTDATE_1904480219");
  msg.set(IssueDate_57);
  Instrument_57.insert(IssueDate_57.getString());
  FIX::Issuer Issuer_57("STRING_192799849");
  msg.set(Issuer_57);
  Instrument_57.insert(Issuer_57.getString());
  FIX::ListMethod ListMethod_57(1);
  msg.set(ListMethod_57);
  Instrument_57.insert(ListMethod_57.getString());
  FIX::LocaleOfIssue LocaleOfIssue_57("STRING_1839689745");
  msg.set(LocaleOfIssue_57);
  Instrument_57.insert(LocaleOfIssue_57.getString());
  FIX::MaturityDate MaturityDate_57("LOCALMKTDATE_1152144086");
  msg.set(MaturityDate_57);
  Instrument_57.insert(MaturityDate_57.getString());
  FIX::MaturityMonthYear MaturityMonthYear_57("MONTHYEAR_823893325");
  msg.set(MaturityMonthYear_57);
  Instrument_57.insert(MaturityMonthYear_57.getString());
  FIX::MaturityTime MaturityTime_57("TZTIMEONLY_2066049739");
  msg.set(MaturityTime_57);
  Instrument_57.insert(MaturityTime_57.getString());
  FIX::MinPriceIncrement MinPriceIncrement_57;
  MinPriceIncrement_57.setString("11636546");
  msg.set(MinPriceIncrement_57);
  Instrument_57.insert(MinPriceIncrement_57.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_57;
  MinPriceIncrementAmount_57.setString("10693518");
  msg.set(MinPriceIncrementAmount_57);
  Instrument_57.insert(MinPriceIncrementAmount_57.getString());
  FIX::NTPositionLimit NTPositionLimit_57(472230756);
  msg.set(NTPositionLimit_57);
  Instrument_57.insert(NTPositionLimit_57.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_57;
  NotionalPercentageOutstanding_57.setString("71.350000");
  msg.set(NotionalPercentageOutstanding_57);
  Instrument_57.insert(NotionalPercentageOutstanding_57.getString());
  FIX::OptAttribute OptAttribute_57('1');
  msg.set(OptAttribute_57);
  Instrument_57.insert(OptAttribute_57.getString());
  FIX::OptPayoutAmount OptPayoutAmount_57;
  OptPayoutAmount_57.setString("10614636");
  msg.set(OptPayoutAmount_57);
  Instrument_57.insert(OptPayoutAmount_57.getString());
  FIX::OptPayoutType OptPayoutType_57(1);
  msg.set(OptPayoutType_57);
  Instrument_57.insert(OptPayoutType_57.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_57;
  OriginalNotionalPercentageOutstanding_57.setString("69.030000");
  msg.set(OriginalNotionalPercentageOutstanding_57);
  Instrument_57.insert(OriginalNotionalPercentageOutstanding_57.getString());
  FIX::Pool Pool_57("STRING_475653014");
  msg.set(Pool_57);
  Instrument_57.insert(Pool_57.getString());
  FIX::PositionLimit PositionLimit_57(1164040898);
  msg.set(PositionLimit_57);
  Instrument_57.insert(PositionLimit_57.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_57("STRING_INT");
  msg.set(PriceQuoteMethod_57);
  Instrument_57.insert(PriceQuoteMethod_57.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_57("STRING_605264336");
  msg.set(PriceUnitOfMeasure_57);
  Instrument_57.insert(PriceUnitOfMeasure_57.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_57;
  PriceUnitOfMeasureQty_57.setString("16356160");
  msg.set(PriceUnitOfMeasureQty_57);
  Instrument_57.insert(PriceUnitOfMeasureQty_57.getString());
  FIX::Product Product_59(3);
  msg.set(Product_59);
  Instrument_57.insert(Product_59.getString());
  FIX::ProductComplex ProductComplex_57("STRING_1355137479");
  msg.set(ProductComplex_57);
  Instrument_57.insert(ProductComplex_57.getString());
  FIX::PutOrCall PutOrCall_57(0);
  msg.set(PutOrCall_57);
  Instrument_57.insert(PutOrCall_57.getString());
  FIX::RedemptionDate RedemptionDate_57("LOCALMKTDATE_949066405");
  msg.set(RedemptionDate_57);
  Instrument_57.insert(RedemptionDate_57.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_57("STRING_26915683");
  msg.set(RepoCollateralSecurityType_57);
  Instrument_57.insert(RepoCollateralSecurityType_57.getString());
  FIX::RepurchaseRate RepurchaseRate_57;
  RepurchaseRate_57.setString("79.230000");
  msg.set(RepurchaseRate_57);
  Instrument_57.insert(RepurchaseRate_57.getString());
  FIX::RepurchaseTerm RepurchaseTerm_57(1220180838);
  msg.set(RepurchaseTerm_57);
  Instrument_57.insert(RepurchaseTerm_57.getString());
  FIX::RestructuringType RestructuringType_57("STRING_FR");
  msg.set(RestructuringType_57);
  Instrument_57.insert(RestructuringType_57.getString());
  FIX::SecurityDesc SecurityDesc_57("STRING_2112664959");
  msg.set(SecurityDesc_57);
  Instrument_57.insert(SecurityDesc_57.getString());
  FIX::SecurityExchange SecurityExchange_57("EXCHANGE_672978141");
  msg.set(SecurityExchange_57);
  Instrument_57.insert(SecurityExchange_57.getString());
  FIX::SecurityGroup SecurityGroup_57("STRING_1823061754");
  msg.set(SecurityGroup_57);
  Instrument_57.insert(SecurityGroup_57.getString());
  FIX::SecurityID SecurityID_57("STRING_1869661530");
  msg.set(SecurityID_57);
  Instrument_57.insert(SecurityID_57.getString());
  FIX::SecurityIDSource SecurityIDSource_57("STRING_1");
  msg.set(SecurityIDSource_57);
  Instrument_57.insert(SecurityIDSource_57.getString());
  FIX::SecurityStatus SecurityStatus_57("STRING_2");
  msg.set(SecurityStatus_57);
  Instrument_57.insert(SecurityStatus_57.getString());
  FIX::SecuritySubType SecuritySubType_58("STRING_1561867627");
  msg.set(SecuritySubType_58);
  Instrument_57.insert(SecuritySubType_58.getString());
  FIX::SecurityType SecurityType_59("STRING_CL");
  msg.set(SecurityType_59);
  Instrument_57.insert(SecurityType_59.getString());
  FIX::Seniority Seniority_57("STRING_SD");
  msg.set(Seniority_57);
  Instrument_57.insert(Seniority_57.getString());
  FIX::SettlMethod SettlMethod_57('P');
  msg.set(SettlMethod_57);
  Instrument_57.insert(SettlMethod_57.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_57("STRING_1034093084");
  msg.set(SettleOnOpenFlag_57);
  Instrument_57.insert(SettleOnOpenFlag_57.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_57("STRING_2020807706");
  msg.set(StateOrProvinceOfIssue_57);
  Instrument_57.insert(StateOrProvinceOfIssue_57.getString());
  FIX::StrikeCurrency StrikeCurrency_57("EUR");
  msg.set(StrikeCurrency_57);
  Instrument_57.insert(StrikeCurrency_57.getString());
  FIX::StrikeMultiplier StrikeMultiplier_57;
  StrikeMultiplier_57.setString("16738639");
  msg.set(StrikeMultiplier_57);
  Instrument_57.insert(StrikeMultiplier_57.getString());
  FIX::StrikePrice StrikePrice_57;
  StrikePrice_57.setString("8666445");
  msg.set(StrikePrice_57);
  Instrument_57.insert(StrikePrice_57.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_57(2);
  msg.set(StrikePriceBoundaryMethod_57);
  Instrument_57.insert(StrikePriceBoundaryMethod_57.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_57;
  StrikePriceBoundaryPrecision_57.setString("8.310000");
  msg.set(StrikePriceBoundaryPrecision_57);
  Instrument_57.insert(StrikePriceBoundaryPrecision_57.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_57(3);
  msg.set(StrikePriceDeterminationMethod_57);
  Instrument_57.insert(StrikePriceDeterminationMethod_57.getString());
  FIX::StrikeValue StrikeValue_57;
  StrikeValue_57.setString("458331");
  msg.set(StrikeValue_57);
  Instrument_57.insert(StrikeValue_57.getString());
  FIX::Symbol Symbol_57("STRING_957465002");
  msg.set(Symbol_57);
  Instrument_57.insert(Symbol_57.getString());
  FIX::SymbolSfx SymbolSfx_57("STRING_CD");
  msg.set(SymbolSfx_57);
  Instrument_57.insert(SymbolSfx_57.getString());
  FIX::TimeUnit TimeUnit_57("STRING_Min");
  msg.set(TimeUnit_57);
  Instrument_57.insert(TimeUnit_57.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_57(3);
  msg.set(UnderlyingPriceDeterminationMethod_57);
  Instrument_57.insert(UnderlyingPriceDeterminationMethod_57.getString());
  FIX::UnitOfMeasure UnitOfMeasure_57("STRING_oz_tr");
  msg.set(UnitOfMeasure_57);
  Instrument_57.insert(UnitOfMeasure_57.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_57;
  UnitOfMeasureQty_57.setString("10001971");
  msg.set(UnitOfMeasureQty_57);
  Instrument_57.insert(UnitOfMeasureQty_57.getString());
  FIX::ValuationMethod ValuationMethod_57("STRING_FUT");
  msg.set(ValuationMethod_57);
  Instrument_57.insert(ValuationMethod_57.getString());
  all_values.push_back(Instrument_57);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_115;
    FIX::ComplexEventCondition ComplexEventCondition_115(2);
    noComplexEvents_0_0.set(ComplexEventCondition_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventCondition_115.getString());
    FIX::ComplexEventPrice ComplexEventPrice_115;
    ComplexEventPrice_115.setString("20383244");
    noComplexEvents_0_0.set(ComplexEventPrice_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPrice_115.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_115(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceBoundaryMethod_115.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_115;
    ComplexEventPriceBoundaryPrecision_115.setString("26.980000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceBoundaryPrecision_115.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_115(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceTimeType_115.getString());
    FIX::ComplexEventType ComplexEventType_115(5);
    noComplexEvents_0_0.set(ComplexEventType_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventType_115.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_115;
    ComplexOptPayoutAmount_115.setString("21391542");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexOptPayoutAmount_115.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_115);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_233;
      FIX::ComplexEventEndDate ComplexEventEndDate_233(FIX::UTCTIMESTAMP(16, 41, 52, 19, 6, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_233);
      ComplexEventDates_NoComplexEventDates_233.insert(ComplexEventEndDate_233.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_233(FIX::UTCTIMESTAMP(12, 10, 38, 18, 6, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_233);
      ComplexEventDates_NoComplexEventDates_233.insert(ComplexEventStartDate_233.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_233);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_473;
        FIX::ComplexEventEndTime ComplexEventEndTime_473(FIX::UTCTIMEONLY(22, 15, 1));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_473);
        ComplexEventTimes_NoComplexEventTimes_473.insert(ComplexEventEndTime_473.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_473(FIX::UTCTIMEONLY(23, 32, 33));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_473);
        ComplexEventTimes_NoComplexEventTimes_473.insert(ComplexEventStartTime_473.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_473);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_116;
    FIX::ComplexEventCondition ComplexEventCondition_116(1);
    noComplexEvents_0_1.set(ComplexEventCondition_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventCondition_116.getString());
    FIX::ComplexEventPrice ComplexEventPrice_116;
    ComplexEventPrice_116.setString("17676927");
    noComplexEvents_0_1.set(ComplexEventPrice_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPrice_116.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_116(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceBoundaryMethod_116.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_116;
    ComplexEventPriceBoundaryPrecision_116.setString("34.450000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceBoundaryPrecision_116.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_116(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceTimeType_116.getString());
    FIX::ComplexEventType ComplexEventType_116(9);
    noComplexEvents_0_1.set(ComplexEventType_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventType_116.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_116;
    ComplexOptPayoutAmount_116.setString("5956040");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexOptPayoutAmount_116.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_116);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_234;
      FIX::ComplexEventEndDate ComplexEventEndDate_234(FIX::UTCTIMESTAMP(17, 53, 44, 24, 11, 2012));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_234);
      ComplexEventDates_NoComplexEventDates_234.insert(ComplexEventEndDate_234.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_234(FIX::UTCTIMESTAMP(10, 56, 41, 4, 2, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_234);
      ComplexEventDates_NoComplexEventDates_234.insert(ComplexEventStartDate_234.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_234);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_474;
        FIX::ComplexEventEndTime ComplexEventEndTime_474(FIX::UTCTIMEONLY(4, 23, 38));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_474);
        ComplexEventTimes_NoComplexEventTimes_474.insert(ComplexEventEndTime_474.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_474(FIX::UTCTIMEONLY(10, 3, 9));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_474);
        ComplexEventTimes_NoComplexEventTimes_474.insert(ComplexEventStartTime_474.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_474);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_475;
        FIX::ComplexEventEndTime ComplexEventEndTime_475(FIX::UTCTIMEONLY(16, 20, 5));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_475);
        ComplexEventTimes_NoComplexEventTimes_475.insert(ComplexEventEndTime_475.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_475(FIX::UTCTIMEONLY(14, 51, 36));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_475);
        ComplexEventTimes_NoComplexEventTimes_475.insert(ComplexEventStartTime_475.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_475);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_476;
        FIX::ComplexEventEndTime ComplexEventEndTime_476(FIX::UTCTIMEONLY(20, 21, 2));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_476);
        ComplexEventTimes_NoComplexEventTimes_476.insert(ComplexEventEndTime_476.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_476(FIX::UTCTIMEONLY(19, 48, 44));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_476);
        ComplexEventTimes_NoComplexEventTimes_476.insert(ComplexEventStartTime_476.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_476);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_235;
      FIX::ComplexEventEndDate ComplexEventEndDate_235(FIX::UTCTIMESTAMP(20, 17, 45, 22, 8, 2017));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_235);
      ComplexEventDates_NoComplexEventDates_235.insert(ComplexEventEndDate_235.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_235(FIX::UTCTIMESTAMP(0, 8, 49, 20, 11, 2010));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_235);
      ComplexEventDates_NoComplexEventDates_235.insert(ComplexEventStartDate_235.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_235);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_477;
        FIX::ComplexEventEndTime ComplexEventEndTime_477(FIX::UTCTIMEONLY(13, 34, 8));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_477);
        ComplexEventTimes_NoComplexEventTimes_477.insert(ComplexEventEndTime_477.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_477(FIX::UTCTIMEONLY(16, 51, 45));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_477);
        ComplexEventTimes_NoComplexEventTimes_477.insert(ComplexEventStartTime_477.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_477);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_478;
        FIX::ComplexEventEndTime ComplexEventEndTime_478(FIX::UTCTIMEONLY(12, 6, 13));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_478);
        ComplexEventTimes_NoComplexEventTimes_478.insert(ComplexEventEndTime_478.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_478(FIX::UTCTIMEONLY(5, 54, 57));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_478);
        ComplexEventTimes_NoComplexEventTimes_478.insert(ComplexEventStartTime_478.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_478);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_479;
        FIX::ComplexEventEndTime ComplexEventEndTime_479(FIX::UTCTIMEONLY(2, 14, 27));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_479);
        ComplexEventTimes_NoComplexEventTimes_479.insert(ComplexEventEndTime_479.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_479(FIX::UTCTIMEONLY(2, 13, 15));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_479);
        ComplexEventTimes_NoComplexEventTimes_479.insert(ComplexEventStartTime_479.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_479);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_236;
      FIX::ComplexEventEndDate ComplexEventEndDate_236(FIX::UTCTIMESTAMP(21, 5, 34, 12, 2, 2000));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_236);
      ComplexEventDates_NoComplexEventDates_236.insert(ComplexEventEndDate_236.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_236(FIX::UTCTIMESTAMP(18, 22, 39, 23, 8, 2001));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_236);
      ComplexEventDates_NoComplexEventDates_236.insert(ComplexEventStartDate_236.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_236);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_480;
        FIX::ComplexEventEndTime ComplexEventEndTime_480(FIX::UTCTIMEONLY(23, 42, 23));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_480);
        ComplexEventTimes_NoComplexEventTimes_480.insert(ComplexEventEndTime_480.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_480(FIX::UTCTIMEONLY(11, 17, 21));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_480);
        ComplexEventTimes_NoComplexEventTimes_480.insert(ComplexEventStartTime_480.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_480);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_112;
    FIX::EventDate EventDate_112("LOCALMKTDATE_1551971996");
    noEvents_0_0.set(EventDate_112);
    EvntGrp_NoEvents_112.insert(EventDate_112.getString());
    FIX::EventPx EventPx_112;
    EventPx_112.setString("7591016");
    noEvents_0_0.set(EventPx_112);
    EvntGrp_NoEvents_112.insert(EventPx_112.getString());
    FIX::EventText EventText_112("STRING_929567421");
    noEvents_0_0.set(EventText_112);
    EvntGrp_NoEvents_112.insert(EventText_112.getString());
    FIX::EventTime EventTime_112(FIX::UTCTIMESTAMP(1, 34, 16, 11, 12, 2013));
    noEvents_0_0.set(EventTime_112);
    EvntGrp_NoEvents_112.insert(EventTime_112.getString());
    FIX::EventType EventType_112(3);
    noEvents_0_0.set(EventType_112);
    EvntGrp_NoEvents_112.insert(EventType_112.getString());
    all_values.push_back(EvntGrp_NoEvents_112);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_113;
    FIX::EventDate EventDate_113("LOCALMKTDATE_1791024503");
    noEvents_0_1.set(EventDate_113);
    EvntGrp_NoEvents_113.insert(EventDate_113.getString());
    FIX::EventPx EventPx_113;
    EventPx_113.setString("21242506");
    noEvents_0_1.set(EventPx_113);
    EvntGrp_NoEvents_113.insert(EventPx_113.getString());
    FIX::EventText EventText_113("STRING_2109414630");
    noEvents_0_1.set(EventText_113);
    EvntGrp_NoEvents_113.insert(EventText_113.getString());
    FIX::EventTime EventTime_113(FIX::UTCTIMESTAMP(13, 45, 26, 20, 9, 2003));
    noEvents_0_1.set(EventTime_113);
    EvntGrp_NoEvents_113.insert(EventTime_113.getString());
    FIX::EventType EventType_113(14);
    noEvents_0_1.set(EventType_113);
    EvntGrp_NoEvents_113.insert(EventType_113.getString());
    all_values.push_back(EvntGrp_NoEvents_113);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_114;
    FIX::EventDate EventDate_114("LOCALMKTDATE_1423216202");
    noEvents_0_2.set(EventDate_114);
    EvntGrp_NoEvents_114.insert(EventDate_114.getString());
    FIX::EventPx EventPx_114;
    EventPx_114.setString("1430627");
    noEvents_0_2.set(EventPx_114);
    EvntGrp_NoEvents_114.insert(EventPx_114.getString());
    FIX::EventText EventText_114("STRING_922606847");
    noEvents_0_2.set(EventText_114);
    EvntGrp_NoEvents_114.insert(EventText_114.getString());
    FIX::EventTime EventTime_114(FIX::UTCTIMESTAMP(20, 51, 35, 9, 9, 2011));
    noEvents_0_2.set(EventTime_114);
    EvntGrp_NoEvents_114.insert(EventTime_114.getString());
    FIX::EventType EventType_114(1);
    noEvents_0_2.set(EventType_114);
    EvntGrp_NoEvents_114.insert(EventType_114.getString());
    all_values.push_back(EvntGrp_NoEvents_114);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_117;
    FIX::InstrumentPartyID InstrumentPartyID_117("STRING_1488649463");
    noInstrumentParties_0_0.set(InstrumentPartyID_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyID_117.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_117('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyIDSource_117.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_117(1067573011);
    noInstrumentParties_0_0.set(InstrumentPartyRole_117);
    InstrumentParties_NoInstrumentParties_117.insert(InstrumentPartyRole_117.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_117);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222;
      FIX::InstrumentPartySubID InstrumentPartySubID_222("STRING_1458756417");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_222);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222.insert(InstrumentPartySubID_222.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_222(2040241279);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_222);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222.insert(InstrumentPartySubIDType_222.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223;
      FIX::InstrumentPartySubID InstrumentPartySubID_223("STRING_221548296");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_223);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223.insert(InstrumentPartySubID_223.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_223(1146358471);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_223);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223.insert(InstrumentPartySubIDType_223.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_118;
    FIX::InstrumentPartyID InstrumentPartyID_118("STRING_1683782134");
    noInstrumentParties_0_1.set(InstrumentPartyID_118);
    InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyID_118.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_118('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_118);
    InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyIDSource_118.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_118(1108289454);
    noInstrumentParties_0_1.set(InstrumentPartyRole_118);
    InstrumentParties_NoInstrumentParties_118.insert(InstrumentPartyRole_118.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_118);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224;
      FIX::InstrumentPartySubID InstrumentPartySubID_224("STRING_224935208");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_224);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224.insert(InstrumentPartySubID_224.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_224(986179351);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_224);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224.insert(InstrumentPartySubIDType_224.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_119;
    FIX::InstrumentPartyID InstrumentPartyID_119("STRING_1254135167");
    noInstrumentParties_0_2.set(InstrumentPartyID_119);
    InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyID_119.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_119('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_119);
    InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyIDSource_119.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_119(1258048035);
    noInstrumentParties_0_2.set(InstrumentPartyRole_119);
    InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyRole_119.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_119);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225;
      FIX::InstrumentPartySubID InstrumentPartySubID_225("STRING_1191706669");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_225);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225.insert(InstrumentPartySubID_225.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_225(533780589);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_225);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225.insert(InstrumentPartySubIDType_225.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_106;
    FIX::SecurityAltID SecurityAltID_106("STRING_2114313517");
    noSecurityAltID_0_0.set(SecurityAltID_106);
    SecAltIDGrp_NoSecurityAltID_106.insert(SecurityAltID_106.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_106("STRING_503868266");
    noSecurityAltID_0_0.set(SecurityAltIDSource_106);
    SecAltIDGrp_NoSecurityAltID_106.insert(SecurityAltIDSource_106.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_106);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_114;
  FIX::SecurityXML SecurityXML_115("XMLDATA_733182540");
  msg.set(SecurityXML_115);
  FIX::SecurityXMLLen SecurityXMLLen_57(475714520);
  msg.set(SecurityXMLLen_57);
  FIX::SecurityXMLSchema SecurityXMLSchema_57("STRING_1234869961");
  msg.set(SecurityXMLSchema_57);
  SecurityXML_114.insert(SecurityXMLSchema_57.getString());
  all_values.push_back(SecurityXML_114);
  all_compo_names.insert("SecurityXML");

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_0;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_0("STRING_1517418424");
    noNotAffectedOrders_0_0.set(NotAffOrigClOrdID_0);
    NotAffectedOrdersGrp_NoNotAffectedOrders_0.insert(NotAffOrigClOrdID_0.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_0("STRING_1370360004");
    noNotAffectedOrders_0_0.set(NotAffectedOrderID_0);
    NotAffectedOrdersGrp_NoNotAffectedOrders_0.insert(NotAffectedOrderID_0.getString());
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_0);
    all_compo_names.insert("NotAffectedOrdersGrp.NoNotAffectedOrders");

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_83;
    FIX::PartyID PartyID_83("STRING_1341206102");
    noPartyIDs_0_0.set(PartyID_83);
    Parties_NoPartyIDs_83.insert(PartyID_83.getString());
    FIX::PartyIDSource PartyIDSource_83('A');
    noPartyIDs_0_0.set(PartyIDSource_83);
    Parties_NoPartyIDs_83.insert(PartyIDSource_83.getString());
    FIX::PartyRole PartyRole_83(8);
    noPartyIDs_0_0.set(PartyRole_83);
    Parties_NoPartyIDs_83.insert(PartyRole_83.getString());
    all_values.push_back(Parties_NoPartyIDs_83);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_182;
      FIX::PartySubID PartySubID_182("STRING_1839913151");
      noPartySubIDs_0_1_0.set(PartySubID_182);
      PtysSubGrp_NoPartySubIDs_182.insert(PartySubID_182.getString());
      FIX::PartySubIDType PartySubIDType_182(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_182);
      PtysSubGrp_NoPartySubIDs_182.insert(PartySubIDType_182.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_182);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_183;
      FIX::PartySubID PartySubID_183("STRING_154053096");
      noPartySubIDs_0_1_1.set(PartySubID_183);
      PtysSubGrp_NoPartySubIDs_183.insert(PartySubID_183.getString());
      FIX::PartySubIDType PartySubIDType_183(25);
      noPartySubIDs_0_1_1.set(PartySubIDType_183);
      PtysSubGrp_NoPartySubIDs_183.insert(PartySubIDType_183.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_183);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_84;
    FIX::PartyID PartyID_84("STRING_1527912796");
    noPartyIDs_0_1.set(PartyID_84);
    Parties_NoPartyIDs_84.insert(PartyID_84.getString());
    FIX::PartyIDSource PartyIDSource_84('1');
    noPartyIDs_0_1.set(PartyIDSource_84);
    Parties_NoPartyIDs_84.insert(PartyIDSource_84.getString());
    FIX::PartyRole PartyRole_84(85);
    noPartyIDs_0_1.set(PartyRole_84);
    Parties_NoPartyIDs_84.insert(PartyRole_84.getString());
    all_values.push_back(Parties_NoPartyIDs_84);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_184;
      FIX::PartySubID PartySubID_184("STRING_639785844");
      noPartySubIDs_1_1_0.set(PartySubID_184);
      PtysSubGrp_NoPartySubIDs_184.insert(PartySubID_184.getString());
      FIX::PartySubIDType PartySubIDType_184(20);
      noPartySubIDs_1_1_0.set(PartySubIDType_184);
      PtysSubGrp_NoPartySubIDs_184.insert(PartySubIDType_184.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_184);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_185;
      FIX::PartySubID PartySubID_185("STRING_1474897953");
      noPartySubIDs_1_1_1.set(PartySubID_185);
      PtysSubGrp_NoPartySubIDs_185.insert(PartySubID_185.getString());
      FIX::PartySubIDType PartySubIDType_185(27);
      noPartySubIDs_1_1_1.set(PartySubIDType_185);
      PtysSubGrp_NoPartySubIDs_185.insert(PartySubIDType_185.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_185);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_186;
      FIX::PartySubID PartySubID_186("STRING_2019942183");
      noPartySubIDs_1_1_2.set(PartySubID_186);
      PtysSubGrp_NoPartySubIDs_186.insert(PartySubID_186.getString());
      FIX::PartySubIDType PartySubIDType_186(2);
      noPartySubIDs_1_1_2.set(PartySubIDType_186);
      PtysSubGrp_NoPartySubIDs_186.insert(PartySubIDType_186.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_186);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_85;
    FIX::PartyID PartyID_85("STRING_527595279");
    noPartyIDs_0_2.set(PartyID_85);
    Parties_NoPartyIDs_85.insert(PartyID_85.getString());
    FIX::PartyIDSource PartyIDSource_85('9');
    noPartyIDs_0_2.set(PartyIDSource_85);
    Parties_NoPartyIDs_85.insert(PartyIDSource_85.getString());
    FIX::PartyRole PartyRole_85(51);
    noPartyIDs_0_2.set(PartyRole_85);
    Parties_NoPartyIDs_85.insert(PartyRole_85.getString());
    all_values.push_back(Parties_NoPartyIDs_85);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_187;
      FIX::PartySubID PartySubID_187("STRING_1030995074");
      noPartySubIDs_2_1_0.set(PartySubID_187);
      PtysSubGrp_NoPartySubIDs_187.insert(PartySubID_187.getString());
      FIX::PartySubIDType PartySubIDType_187(26);
      noPartySubIDs_2_1_0.set(PartySubIDType_187);
      PtysSubGrp_NoPartySubIDs_187.insert(PartySubIDType_187.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_187);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_3;
    FIX::TargetPartyID TargetPartyID_3("STRING_1506709594");
    noTargetPartyIDs_0_0.set(TargetPartyID_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyID_3.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_3('7');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyIDSource_3.getString());
    FIX::TargetPartyRole TargetPartyRole_3(678858172);
    noTargetPartyIDs_0_0.set(TargetPartyRole_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyRole_3.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_3);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_4;
    FIX::TargetPartyID TargetPartyID_4("STRING_876644370");
    noTargetPartyIDs_0_1.set(TargetPartyID_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyID_4.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_4('2');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyIDSource_4.getString());
    FIX::TargetPartyRole TargetPartyRole_4(1987463937);
    noTargetPartyIDs_0_1.set(TargetPartyRole_4);
    TargetParties_NoTargetPartyIDs_4.insert(TargetPartyRole_4.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_4);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_81;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_81("DATA_70366824");
  msg.set(EncodedUnderlyingIssuer_81);
  UnderlyingInstrument_81.insert(EncodedUnderlyingIssuer_81.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_81(644899686);
  msg.set(EncodedUnderlyingIssuerLen_81);
  UnderlyingInstrument_81.insert(EncodedUnderlyingIssuerLen_81.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_81("DATA_910261845");
  msg.set(EncodedUnderlyingSecurityDesc_81);
  UnderlyingInstrument_81.insert(EncodedUnderlyingSecurityDesc_81.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_81(331662290);
  msg.set(EncodedUnderlyingSecurityDescLen_81);
  UnderlyingInstrument_81.insert(EncodedUnderlyingSecurityDescLen_81.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_81;
  UnderlyingAdjustedQuantity_81.setString("3373291");
  msg.set(UnderlyingAdjustedQuantity_81);
  UnderlyingInstrument_81.insert(UnderlyingAdjustedQuantity_81.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_81;
  UnderlyingAllocationPercent_81.setString("61.700000");
  msg.set(UnderlyingAllocationPercent_81);
  UnderlyingInstrument_81.insert(UnderlyingAllocationPercent_81.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_81;
  UnderlyingAttachmentPoint_81.setString("53.860000");
  msg.set(UnderlyingAttachmentPoint_81);
  UnderlyingInstrument_81.insert(UnderlyingAttachmentPoint_81.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_81("STRING_251306989");
  msg.set(UnderlyingCFICode_81);
  UnderlyingInstrument_81.insert(UnderlyingCFICode_81.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_81("STRING_672245318");
  msg.set(UnderlyingCPProgram_81);
  UnderlyingInstrument_81.insert(UnderlyingCPProgram_81.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_81("STRING_176066969");
  msg.set(UnderlyingCPRegType_81);
  UnderlyingInstrument_81.insert(UnderlyingCPRegType_81.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_81;
  UnderlyingCapValue_81.setString("3636001");
  msg.set(UnderlyingCapValue_81);
  UnderlyingInstrument_81.insert(UnderlyingCapValue_81.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_81;
  UnderlyingCashAmount_81.setString("11609639");
  msg.set(UnderlyingCashAmount_81);
  UnderlyingInstrument_81.insert(UnderlyingCashAmount_81.getString());
  FIX::UnderlyingCashType UnderlyingCashType_81("STRING_DIFF");
  msg.set(UnderlyingCashType_81);
  UnderlyingInstrument_81.insert(UnderlyingCashType_81.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_81;
  UnderlyingContractMultiplier_81.setString("7008284");
  msg.set(UnderlyingContractMultiplier_81);
  UnderlyingInstrument_81.insert(UnderlyingContractMultiplier_81.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_81(488378226);
  msg.set(UnderlyingContractMultiplierUnit_81);
  UnderlyingInstrument_81.insert(UnderlyingContractMultiplierUnit_81.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_81("COUNTRY_562290176");
  msg.set(UnderlyingCountryOfIssue_81);
  UnderlyingInstrument_81.insert(UnderlyingCountryOfIssue_81.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_81("LOCALMKTDATE_573286995");
  msg.set(UnderlyingCouponPaymentDate_81);
  UnderlyingInstrument_81.insert(UnderlyingCouponPaymentDate_81.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_81;
  UnderlyingCouponRate_81.setString("5.670000");
  msg.set(UnderlyingCouponRate_81);
  UnderlyingInstrument_81.insert(UnderlyingCouponRate_81.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_81("STRING_1089885455");
  msg.set(UnderlyingCreditRating_81);
  UnderlyingInstrument_81.insert(UnderlyingCreditRating_81.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_81("JPY");
  msg.set(UnderlyingCurrency_81);
  UnderlyingInstrument_81.insert(UnderlyingCurrency_81.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_81;
  UnderlyingCurrentValue_81.setString("3942177");
  msg.set(UnderlyingCurrentValue_81);
  UnderlyingInstrument_81.insert(UnderlyingCurrentValue_81.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_81;
  UnderlyingDetachmentPoint_81.setString("36.260000");
  msg.set(UnderlyingDetachmentPoint_81);
  UnderlyingInstrument_81.insert(UnderlyingDetachmentPoint_81.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_81;
  UnderlyingDirtyPrice_81.setString("16687110");
  msg.set(UnderlyingDirtyPrice_81);
  UnderlyingInstrument_81.insert(UnderlyingDirtyPrice_81.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_81;
  UnderlyingEndPrice_81.setString("4317325");
  msg.set(UnderlyingEndPrice_81);
  UnderlyingInstrument_81.insert(UnderlyingEndPrice_81.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_81;
  UnderlyingEndValue_81.setString("20276732");
  msg.set(UnderlyingEndValue_81);
  UnderlyingInstrument_81.insert(UnderlyingEndValue_81.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_81(231724906);
  msg.set(UnderlyingExerciseStyle_81);
  UnderlyingInstrument_81.insert(UnderlyingExerciseStyle_81.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_81;
  UnderlyingFXRate_81.setString("11105907");
  msg.set(UnderlyingFXRate_81);
  UnderlyingInstrument_81.insert(UnderlyingFXRate_81.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_81('D');
  msg.set(UnderlyingFXRateCalc_81);
  UnderlyingInstrument_81.insert(UnderlyingFXRateCalc_81.getString());
  FIX::UnderlyingFactor UnderlyingFactor_81;
  UnderlyingFactor_81.setString("1650987");
  msg.set(UnderlyingFactor_81);
  UnderlyingInstrument_81.insert(UnderlyingFactor_81.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_81(950571031);
  msg.set(UnderlyingFlowScheduleType_81);
  UnderlyingInstrument_81.insert(UnderlyingFlowScheduleType_81.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_81("STRING_827200767");
  msg.set(UnderlyingInstrRegistry_81);
  UnderlyingInstrument_81.insert(UnderlyingInstrRegistry_81.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_81("LOCALMKTDATE_809998458");
  msg.set(UnderlyingIssueDate_81);
  UnderlyingInstrument_81.insert(UnderlyingIssueDate_81.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_81("STRING_1860832876");
  msg.set(UnderlyingIssuer_81);
  UnderlyingInstrument_81.insert(UnderlyingIssuer_81.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_81("STRING_1158863057");
  msg.set(UnderlyingLocaleOfIssue_81);
  UnderlyingInstrument_81.insert(UnderlyingLocaleOfIssue_81.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_81("LOCALMKTDATE_1147327647");
  msg.set(UnderlyingMaturityDate_81);
  UnderlyingInstrument_81.insert(UnderlyingMaturityDate_81.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_81("MONTHYEAR_1005165398");
  msg.set(UnderlyingMaturityMonthYear_81);
  UnderlyingInstrument_81.insert(UnderlyingMaturityMonthYear_81.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_81("TZTIMEONLY_1644578443");
  msg.set(UnderlyingMaturityTime_81);
  UnderlyingInstrument_81.insert(UnderlyingMaturityTime_81.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_81;
  UnderlyingNotionalPercentageOutstanding_81.setString("46.370000");
  msg.set(UnderlyingNotionalPercentageOutstanding_81);
  UnderlyingInstrument_81.insert(UnderlyingNotionalPercentageOutstanding_81.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_81('1');
  msg.set(UnderlyingOptAttribute_81);
  UnderlyingInstrument_81.insert(UnderlyingOptAttribute_81.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_81;
  UnderlyingOriginalNotionalPercentageOutstanding_81.setString("54.130000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_81);
  UnderlyingInstrument_81.insert(UnderlyingOriginalNotionalPercentageOutstanding_81.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_81("STRING_1762234757");
  msg.set(UnderlyingPriceUnitOfMeasure_81);
  UnderlyingInstrument_81.insert(UnderlyingPriceUnitOfMeasure_81.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_81;
  UnderlyingPriceUnitOfMeasureQty_81.setString("6908909");
  msg.set(UnderlyingPriceUnitOfMeasureQty_81);
  UnderlyingInstrument_81.insert(UnderlyingPriceUnitOfMeasureQty_81.getString());
  FIX::UnderlyingProduct UnderlyingProduct_81(489014578);
  msg.set(UnderlyingProduct_81);
  UnderlyingInstrument_81.insert(UnderlyingProduct_81.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_81(315579569);
  msg.set(UnderlyingPutOrCall_81);
  UnderlyingInstrument_81.insert(UnderlyingPutOrCall_81.getString());
  FIX::UnderlyingPx UnderlyingPx_81;
  UnderlyingPx_81.setString("11792692");
  msg.set(UnderlyingPx_81);
  UnderlyingInstrument_81.insert(UnderlyingPx_81.getString());
  FIX::UnderlyingQty UnderlyingQty_81;
  UnderlyingQty_81.setString("10513047");
  msg.set(UnderlyingQty_81);
  UnderlyingInstrument_81.insert(UnderlyingQty_81.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_81("LOCALMKTDATE_888866564");
  msg.set(UnderlyingRedemptionDate_81);
  UnderlyingInstrument_81.insert(UnderlyingRedemptionDate_81.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_81("STRING_105626135");
  msg.set(UnderlyingRepoCollateralSecurityType_81);
  UnderlyingInstrument_81.insert(UnderlyingRepoCollateralSecurityType_81.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_81;
  UnderlyingRepurchaseRate_81.setString("2.100000");
  msg.set(UnderlyingRepurchaseRate_81);
  UnderlyingInstrument_81.insert(UnderlyingRepurchaseRate_81.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_81(378835116);
  msg.set(UnderlyingRepurchaseTerm_81);
  UnderlyingInstrument_81.insert(UnderlyingRepurchaseTerm_81.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_81("STRING_151225983");
  msg.set(UnderlyingRestructuringType_81);
  UnderlyingInstrument_81.insert(UnderlyingRestructuringType_81.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_81("STRING_387924305");
  msg.set(UnderlyingSecurityDesc_81);
  UnderlyingInstrument_81.insert(UnderlyingSecurityDesc_81.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_81("EXCHANGE_899798742");
  msg.set(UnderlyingSecurityExchange_81);
  UnderlyingInstrument_81.insert(UnderlyingSecurityExchange_81.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_81("STRING_1819937028");
  msg.set(UnderlyingSecurityID_81);
  UnderlyingInstrument_81.insert(UnderlyingSecurityID_81.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_81("STRING_819656874");
  msg.set(UnderlyingSecurityIDSource_81);
  UnderlyingInstrument_81.insert(UnderlyingSecurityIDSource_81.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_81("STRING_779988314");
  msg.set(UnderlyingSecuritySubType_81);
  UnderlyingInstrument_81.insert(UnderlyingSecuritySubType_81.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_81("STRING_2051661934");
  msg.set(UnderlyingSecurityType_81);
  UnderlyingInstrument_81.insert(UnderlyingSecurityType_81.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_81("STRING_1930247616");
  msg.set(UnderlyingSeniority_81);
  UnderlyingInstrument_81.insert(UnderlyingSeniority_81.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_81("STRING_1536822256");
  msg.set(UnderlyingSettlMethod_81);
  UnderlyingInstrument_81.insert(UnderlyingSettlMethod_81.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_81(5);
  msg.set(UnderlyingSettlementType_81);
  UnderlyingInstrument_81.insert(UnderlyingSettlementType_81.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_81;
  UnderlyingStartValue_81.setString("7333349");
  msg.set(UnderlyingStartValue_81);
  UnderlyingInstrument_81.insert(UnderlyingStartValue_81.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_81("STRING_216539375");
  msg.set(UnderlyingStateOrProvinceOfIssue_81);
  UnderlyingInstrument_81.insert(UnderlyingStateOrProvinceOfIssue_81.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_81("EUR");
  msg.set(UnderlyingStrikeCurrency_81);
  UnderlyingInstrument_81.insert(UnderlyingStrikeCurrency_81.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_81;
  UnderlyingStrikePrice_81.setString("13754024");
  msg.set(UnderlyingStrikePrice_81);
  UnderlyingInstrument_81.insert(UnderlyingStrikePrice_81.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_81("STRING_2026603163");
  msg.set(UnderlyingSymbol_81);
  UnderlyingInstrument_81.insert(UnderlyingSymbol_81.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_81("STRING_1451849625");
  msg.set(UnderlyingSymbolSfx_81);
  UnderlyingInstrument_81.insert(UnderlyingSymbolSfx_81.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_81("STRING_872497228");
  msg.set(UnderlyingTimeUnit_81);
  UnderlyingInstrument_81.insert(UnderlyingTimeUnit_81.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_81("STRING_1277754152");
  msg.set(UnderlyingUnitOfMeasure_81);
  UnderlyingInstrument_81.insert(UnderlyingUnitOfMeasure_81.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_81;
  UnderlyingUnitOfMeasureQty_81.setString("9817766");
  msg.set(UnderlyingUnitOfMeasureQty_81);
  UnderlyingInstrument_81.insert(UnderlyingUnitOfMeasureQty_81.getString());
  all_values.push_back(UnderlyingInstrument_81);
  all_compo_names.insert("UnderlyingInstrument");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_165;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_165("STRING_892505262");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_165);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_165.insert(UnderlyingSecurityAltID_165.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_165("STRING_1672667683");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_165);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_165.insert(UnderlyingSecurityAltIDSource_165.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_165);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_165;
    FIX::UnderlyingStipType UnderlyingStipType_165("STRING_1208084831");
    noUnderlyingStips_0_0.set(UnderlyingStipType_165);
    UnderlyingStipulations_NoUnderlyingStips_165.insert(UnderlyingStipType_165.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_165("STRING_704453251");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_165);
    UnderlyingStipulations_NoUnderlyingStips_165.insert(UnderlyingStipValue_165.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_165);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_166;
    FIX::UnderlyingStipType UnderlyingStipType_166("STRING_2085978326");
    noUnderlyingStips_0_1.set(UnderlyingStipType_166);
    UnderlyingStipulations_NoUnderlyingStips_166.insert(UnderlyingStipType_166.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_166("STRING_2096951395");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_166);
    UnderlyingStipulations_NoUnderlyingStips_166.insert(UnderlyingStipValue_166.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_166);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_154;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_154("STRING_2079684889");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_154);
    UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyID_154.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_154('3');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_154);
    UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyIDSource_154.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_154(961305369);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_154);
    UndlyInstrumentParties_NoUndlyInstrumentParties_154.insert(UnderlyingInstrumentPartyRole_154.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_154);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_305("STRING_1228101605");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_305);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305.insert(UnderlyingInstrumentPartySubID_305.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_305(633758749);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_305);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305.insert(UnderlyingInstrumentPartySubIDType_305.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_306("STRING_1139782420");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_306);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306.insert(UnderlyingInstrumentPartySubID_306.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_306(2008089919);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_306);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306.insert(UnderlyingInstrumentPartySubIDType_306.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
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
