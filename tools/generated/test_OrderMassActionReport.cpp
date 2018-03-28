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
  multiset<string> OrderMassActionReport_0;
  FIX::ClOrdID ClOrdID_36("STRING_400717367");
  msg.set(ClOrdID_36);
  OrderMassActionReport_0.insert(ClOrdID_36.getString());
  FIX::EncodedText EncodedText_61("DATA_363257167");
  msg.set(EncodedText_61);
  OrderMassActionReport_0.insert(EncodedText_61.getString());
  FIX::EncodedTextLen EncodedTextLen_61(1954685209);
  msg.set(EncodedTextLen_61);
  OrderMassActionReport_0.insert(EncodedTextLen_61.getString());
  FIX::MarketID MarketID_8("EXCHANGE_1527034093");
  msg.set(MarketID_8);
  OrderMassActionReport_0.insert(MarketID_8.getString());
  FIX::MarketSegmentID MarketSegmentID_8("STRING_768460350");
  msg.set(MarketSegmentID_8);
  OrderMassActionReport_0.insert(MarketSegmentID_8.getString());
  FIX::MassActionRejectReason MassActionRejectReason_0(9);
  msg.set(MassActionRejectReason_0);
  OrderMassActionReport_0.insert(MassActionRejectReason_0.getString());
  FIX::MassActionReportID MassActionReportID_0("STRING_625837920");
  msg.set(MassActionReportID_0);
  OrderMassActionReport_0.insert(MassActionReportID_0.getString());
  FIX::MassActionResponse MassActionResponse_0(0);
  msg.set(MassActionResponse_0);
  OrderMassActionReport_0.insert(MassActionResponse_0.getString());
  FIX::MassActionScope MassActionScope_0(2);
  msg.set(MassActionScope_0);
  OrderMassActionReport_0.insert(MassActionScope_0.getString());
  FIX::MassActionType MassActionType_0(2);
  msg.set(MassActionType_0);
  OrderMassActionReport_0.insert(MassActionType_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_34("STRING_372920496");
  msg.set(SecondaryClOrdID_34);
  OrderMassActionReport_0.insert(SecondaryClOrdID_34.getString());
  FIX::Side Side_28('D');
  msg.set(Side_28);
  OrderMassActionReport_0.insert(Side_28.getString());
  FIX::Text Text_61("STRING_1498925929");
  msg.set(Text_61);
  OrderMassActionReport_0.insert(Text_61.getString());
  FIX::TotalAffectedOrders TotalAffectedOrders_0(1690612904);
  msg.set(TotalAffectedOrders_0);
  OrderMassActionReport_0.insert(TotalAffectedOrders_0.getString());
  FIX::TradingSessionID TradingSessionID_53("STRING_5");
  msg.set(TradingSessionID_53);
  OrderMassActionReport_0.insert(TradingSessionID_53.getString());
  FIX::TradingSessionSubID TradingSessionSubID_53("STRING_6");
  msg.set(TradingSessionSubID_53);
  OrderMassActionReport_0.insert(TradingSessionSubID_53.getString());
  FIX::TransactTime TransactTime_46(FIX::UTCTIMESTAMP(10, 36, 14, 25, 4, 2012));
  msg.set(TransactTime_46);
  OrderMassActionReport_0.insert(TransactTime_46.getString());
  all_values.push_back(OrderMassActionReport_0);

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_0;
    FIX::AffectedOrderID AffectedOrderID_0("STRING_1773019485");
    noAffectedOrders_0_0.set(AffectedOrderID_0);
    AffectedOrdGrp_NoAffectedOrders_0.insert(AffectedOrderID_0.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_0("STRING_1196038236");
    noAffectedOrders_0_0.set(AffectedSecondaryOrderID_0);
    AffectedOrdGrp_NoAffectedOrders_0.insert(AffectedSecondaryOrderID_0.getString());
    FIX::OrigClOrdID OrigClOrdID_10("STRING_802459129");
    noAffectedOrders_0_0.set(OrigClOrdID_10);
    AffectedOrdGrp_NoAffectedOrders_0.insert(OrigClOrdID_10.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_0);

    msg.addGroup(noAffectedOrders_0_0);
  }
  // Instrument
  multiset<string> Instrument_56;
  FIX::AttachmentPoint AttachmentPoint_56;
  AttachmentPoint_56.setString("86.200000");
  msg.set(AttachmentPoint_56);
  Instrument_56.insert(AttachmentPoint_56.getString());
  FIX::CFICode CFICode_56("STRING_1146219645");
  msg.set(CFICode_56);
  Instrument_56.insert(CFICode_56.getString());
  FIX::CPProgram CPProgram_56(99);
  msg.set(CPProgram_56);
  Instrument_56.insert(CPProgram_56.getString());
  FIX::CPRegType CPRegType_56("STRING_1899117393");
  msg.set(CPRegType_56);
  Instrument_56.insert(CPRegType_56.getString());
  FIX::CapPrice CapPrice_56;
  CapPrice_56.setString("15469370");
  msg.set(CapPrice_56);
  Instrument_56.insert(CapPrice_56.getString());
  FIX::ContractMultiplier ContractMultiplier_56;
  ContractMultiplier_56.setString("10644862");
  msg.set(ContractMultiplier_56);
  Instrument_56.insert(ContractMultiplier_56.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_56(2);
  msg.set(ContractMultiplierUnit_56);
  Instrument_56.insert(ContractMultiplierUnit_56.getString());
  FIX::ContractSettlMonth ContractSettlMonth_56("MONTHYEAR_926487457");
  msg.set(ContractSettlMonth_56);
  Instrument_56.insert(ContractSettlMonth_56.getString());
  FIX::CountryOfIssue CountryOfIssue_56("COUNTRY_1832946630");
  msg.set(CountryOfIssue_56);
  Instrument_56.insert(CountryOfIssue_56.getString());
  FIX::CouponPaymentDate CouponPaymentDate_56("LOCALMKTDATE_1196918138");
  msg.set(CouponPaymentDate_56);
  Instrument_56.insert(CouponPaymentDate_56.getString());
  FIX::CouponRate CouponRate_56;
  CouponRate_56.setString("53.780000");
  msg.set(CouponRate_56);
  Instrument_56.insert(CouponRate_56.getString());
  FIX::CreditRating CreditRating_56("STRING_222134159");
  msg.set(CreditRating_56);
  Instrument_56.insert(CreditRating_56.getString());
  FIX::DatedDate DatedDate_56("LOCALMKTDATE_1501103572");
  msg.set(DatedDate_56);
  Instrument_56.insert(DatedDate_56.getString());
  FIX::DetachmentPoint DetachmentPoint_56;
  DetachmentPoint_56.setString("63.190000");
  msg.set(DetachmentPoint_56);
  Instrument_56.insert(DetachmentPoint_56.getString());
  FIX::EncodedIssuer EncodedIssuer_56("DATA_595054655");
  msg.set(EncodedIssuer_56);
  Instrument_56.insert(EncodedIssuer_56.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_56(355917728);
  msg.set(EncodedIssuerLen_56);
  Instrument_56.insert(EncodedIssuerLen_56.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_56("DATA_18618600");
  msg.set(EncodedSecurityDesc_56);
  Instrument_56.insert(EncodedSecurityDesc_56.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_56(138183911);
  msg.set(EncodedSecurityDescLen_56);
  Instrument_56.insert(EncodedSecurityDescLen_56.getString());
  FIX::ExerciseStyle ExerciseStyle_56(0);
  msg.set(ExerciseStyle_56);
  Instrument_56.insert(ExerciseStyle_56.getString());
  FIX::Factor Factor_56;
  Factor_56.setString("93891");
  msg.set(Factor_56);
  Instrument_56.insert(Factor_56.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_56(false);
  msg.set(FlexProductEligibilityIndicator_56);
  Instrument_56.insert(FlexProductEligibilityIndicator_56.getString());
  FIX::FlexibleIndicator FlexibleIndicator_56(true);
  msg.set(FlexibleIndicator_56);
  Instrument_56.insert(FlexibleIndicator_56.getString());
  FIX::FloorPrice FloorPrice_56;
  FloorPrice_56.setString("4231076");
  msg.set(FloorPrice_56);
  Instrument_56.insert(FloorPrice_56.getString());
  FIX::FlowScheduleType FlowScheduleType_56(0);
  msg.set(FlowScheduleType_56);
  Instrument_56.insert(FlowScheduleType_56.getString());
  FIX::InstrRegistry InstrRegistry_56("STRING_425040253");
  msg.set(InstrRegistry_56);
  Instrument_56.insert(InstrRegistry_56.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_56('6');
  msg.set(InstrmtAssignmentMethod_56);
  Instrument_56.insert(InstrmtAssignmentMethod_56.getString());
  FIX::InterestAccrualDate InterestAccrualDate_56("LOCALMKTDATE_570064793");
  msg.set(InterestAccrualDate_56);
  Instrument_56.insert(InterestAccrualDate_56.getString());
  FIX::IssueDate IssueDate_56("LOCALMKTDATE_617527099");
  msg.set(IssueDate_56);
  Instrument_56.insert(IssueDate_56.getString());
  FIX::Issuer Issuer_56("STRING_303243453");
  msg.set(Issuer_56);
  Instrument_56.insert(Issuer_56.getString());
  FIX::ListMethod ListMethod_56(1);
  msg.set(ListMethod_56);
  Instrument_56.insert(ListMethod_56.getString());
  FIX::LocaleOfIssue LocaleOfIssue_56("STRING_1419986228");
  msg.set(LocaleOfIssue_56);
  Instrument_56.insert(LocaleOfIssue_56.getString());
  FIX::MaturityDate MaturityDate_56("LOCALMKTDATE_653522073");
  msg.set(MaturityDate_56);
  Instrument_56.insert(MaturityDate_56.getString());
  FIX::MaturityMonthYear MaturityMonthYear_56("MONTHYEAR_764839026");
  msg.set(MaturityMonthYear_56);
  Instrument_56.insert(MaturityMonthYear_56.getString());
  FIX::MaturityTime MaturityTime_56("TZTIMEONLY_2121215342");
  msg.set(MaturityTime_56);
  Instrument_56.insert(MaturityTime_56.getString());
  FIX::MinPriceIncrement MinPriceIncrement_56;
  MinPriceIncrement_56.setString("4051558");
  msg.set(MinPriceIncrement_56);
  Instrument_56.insert(MinPriceIncrement_56.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_56;
  MinPriceIncrementAmount_56.setString("1642923");
  msg.set(MinPriceIncrementAmount_56);
  Instrument_56.insert(MinPriceIncrementAmount_56.getString());
  FIX::NTPositionLimit NTPositionLimit_56(1038217974);
  msg.set(NTPositionLimit_56);
  Instrument_56.insert(NTPositionLimit_56.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_56;
  NotionalPercentageOutstanding_56.setString("47.720000");
  msg.set(NotionalPercentageOutstanding_56);
  Instrument_56.insert(NotionalPercentageOutstanding_56.getString());
  FIX::OptAttribute OptAttribute_56('1');
  msg.set(OptAttribute_56);
  Instrument_56.insert(OptAttribute_56.getString());
  FIX::OptPayoutAmount OptPayoutAmount_56;
  OptPayoutAmount_56.setString("7236809");
  msg.set(OptPayoutAmount_56);
  Instrument_56.insert(OptPayoutAmount_56.getString());
  FIX::OptPayoutType OptPayoutType_56(2);
  msg.set(OptPayoutType_56);
  Instrument_56.insert(OptPayoutType_56.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_56;
  OriginalNotionalPercentageOutstanding_56.setString("15.780000");
  msg.set(OriginalNotionalPercentageOutstanding_56);
  Instrument_56.insert(OriginalNotionalPercentageOutstanding_56.getString());
  FIX::Pool Pool_56("STRING_945815116");
  msg.set(Pool_56);
  Instrument_56.insert(Pool_56.getString());
  FIX::PositionLimit PositionLimit_56(514529187);
  msg.set(PositionLimit_56);
  Instrument_56.insert(PositionLimit_56.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_56("STRING_INT");
  msg.set(PriceQuoteMethod_56);
  Instrument_56.insert(PriceQuoteMethod_56.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_56("STRING_1540869771");
  msg.set(PriceUnitOfMeasure_56);
  Instrument_56.insert(PriceUnitOfMeasure_56.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_56;
  PriceUnitOfMeasureQty_56.setString("8704469");
  msg.set(PriceUnitOfMeasureQty_56);
  Instrument_56.insert(PriceUnitOfMeasureQty_56.getString());
  FIX::Product Product_58(3);
  msg.set(Product_58);
  Instrument_56.insert(Product_58.getString());
  FIX::ProductComplex ProductComplex_56("STRING_1679053682");
  msg.set(ProductComplex_56);
  Instrument_56.insert(ProductComplex_56.getString());
  FIX::PutOrCall PutOrCall_56(1);
  msg.set(PutOrCall_56);
  Instrument_56.insert(PutOrCall_56.getString());
  FIX::RedemptionDate RedemptionDate_56("LOCALMKTDATE_1190805602");
  msg.set(RedemptionDate_56);
  Instrument_56.insert(RedemptionDate_56.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_56("STRING_2061160103");
  msg.set(RepoCollateralSecurityType_56);
  Instrument_56.insert(RepoCollateralSecurityType_56.getString());
  FIX::RepurchaseRate RepurchaseRate_56;
  RepurchaseRate_56.setString("71.460000");
  msg.set(RepurchaseRate_56);
  Instrument_56.insert(RepurchaseRate_56.getString());
  FIX::RepurchaseTerm RepurchaseTerm_56(1613913282);
  msg.set(RepurchaseTerm_56);
  Instrument_56.insert(RepurchaseTerm_56.getString());
  FIX::RestructuringType RestructuringType_56("STRING_MM");
  msg.set(RestructuringType_56);
  Instrument_56.insert(RestructuringType_56.getString());
  FIX::SecurityDesc SecurityDesc_56("STRING_1385707399");
  msg.set(SecurityDesc_56);
  Instrument_56.insert(SecurityDesc_56.getString());
  FIX::SecurityExchange SecurityExchange_56("EXCHANGE_144137249");
  msg.set(SecurityExchange_56);
  Instrument_56.insert(SecurityExchange_56.getString());
  FIX::SecurityGroup SecurityGroup_56("STRING_1004046163");
  msg.set(SecurityGroup_56);
  Instrument_56.insert(SecurityGroup_56.getString());
  FIX::SecurityID SecurityID_56("STRING_2003234499");
  msg.set(SecurityID_56);
  Instrument_56.insert(SecurityID_56.getString());
  FIX::SecurityIDSource SecurityIDSource_56("STRING_B");
  msg.set(SecurityIDSource_56);
  Instrument_56.insert(SecurityIDSource_56.getString());
  FIX::SecurityStatus SecurityStatus_56("STRING_1");
  msg.set(SecurityStatus_56);
  Instrument_56.insert(SecurityStatus_56.getString());
  FIX::SecuritySubType SecuritySubType_57("STRING_1275737079");
  msg.set(SecuritySubType_57);
  Instrument_56.insert(SecuritySubType_57.getString());
  FIX::SecurityType SecurityType_58("STRING_CD");
  msg.set(SecurityType_58);
  Instrument_56.insert(SecurityType_58.getString());
  FIX::Seniority Seniority_56("STRING_SR");
  msg.set(Seniority_56);
  Instrument_56.insert(Seniority_56.getString());
  FIX::SettlMethod SettlMethod_56('P');
  msg.set(SettlMethod_56);
  Instrument_56.insert(SettlMethod_56.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_56("STRING_1506058593");
  msg.set(SettleOnOpenFlag_56);
  Instrument_56.insert(SettleOnOpenFlag_56.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_56("STRING_1551796961");
  msg.set(StateOrProvinceOfIssue_56);
  Instrument_56.insert(StateOrProvinceOfIssue_56.getString());
  FIX::StrikeCurrency StrikeCurrency_56("GBP");
  msg.set(StrikeCurrency_56);
  Instrument_56.insert(StrikeCurrency_56.getString());
  FIX::StrikeMultiplier StrikeMultiplier_56;
  StrikeMultiplier_56.setString("4950931");
  msg.set(StrikeMultiplier_56);
  Instrument_56.insert(StrikeMultiplier_56.getString());
  FIX::StrikePrice StrikePrice_56;
  StrikePrice_56.setString("8638840");
  msg.set(StrikePrice_56);
  Instrument_56.insert(StrikePrice_56.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_56(4);
  msg.set(StrikePriceBoundaryMethod_56);
  Instrument_56.insert(StrikePriceBoundaryMethod_56.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_56;
  StrikePriceBoundaryPrecision_56.setString("47.400000");
  msg.set(StrikePriceBoundaryPrecision_56);
  Instrument_56.insert(StrikePriceBoundaryPrecision_56.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_56(2);
  msg.set(StrikePriceDeterminationMethod_56);
  Instrument_56.insert(StrikePriceDeterminationMethod_56.getString());
  FIX::StrikeValue StrikeValue_56;
  StrikeValue_56.setString("9980045");
  msg.set(StrikeValue_56);
  Instrument_56.insert(StrikeValue_56.getString());
  FIX::Symbol Symbol_56("STRING_6028990");
  msg.set(Symbol_56);
  Instrument_56.insert(Symbol_56.getString());
  FIX::SymbolSfx SymbolSfx_56("STRING_CD");
  msg.set(SymbolSfx_56);
  Instrument_56.insert(SymbolSfx_56.getString());
  FIX::TimeUnit TimeUnit_56("STRING_Wk");
  msg.set(TimeUnit_56);
  Instrument_56.insert(TimeUnit_56.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_56(2);
  msg.set(UnderlyingPriceDeterminationMethod_56);
  Instrument_56.insert(UnderlyingPriceDeterminationMethod_56.getString());
  FIX::UnitOfMeasure UnitOfMeasure_56("STRING_lbs");
  msg.set(UnitOfMeasure_56);
  Instrument_56.insert(UnitOfMeasure_56.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_56;
  UnitOfMeasureQty_56.setString("4959356");
  msg.set(UnitOfMeasureQty_56);
  Instrument_56.insert(UnitOfMeasureQty_56.getString());
  FIX::ValuationMethod ValuationMethod_56("STRING_CDS");
  msg.set(ValuationMethod_56);
  Instrument_56.insert(ValuationMethod_56.getString());
  all_values.push_back(Instrument_56);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_109;
    FIX::ComplexEventCondition ComplexEventCondition_109(1);
    noComplexEvents_0_0.set(ComplexEventCondition_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventCondition_109.getString());
    FIX::ComplexEventPrice ComplexEventPrice_109;
    ComplexEventPrice_109.setString("18446807");
    noComplexEvents_0_0.set(ComplexEventPrice_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventPrice_109.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_109(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceBoundaryMethod_109.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_109;
    ComplexEventPriceBoundaryPrecision_109.setString("65.780000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceBoundaryPrecision_109.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_109(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventPriceTimeType_109.getString());
    FIX::ComplexEventType ComplexEventType_109(1);
    noComplexEvents_0_0.set(ComplexEventType_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexEventType_109.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_109;
    ComplexOptPayoutAmount_109.setString("5505774");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_109);
    ComplexEvents_NoComplexEvents_109.insert(ComplexOptPayoutAmount_109.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_109);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_228;
      FIX::ComplexEventEndDate ComplexEventEndDate_228(FIX::UTCTIMESTAMP(20, 44, 24, 10, 11, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_228);
      ComplexEventDates_NoComplexEventDates_228.insert(ComplexEventEndDate_228.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_228(FIX::UTCTIMESTAMP(4, 40, 31, 25, 5, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_228);
      ComplexEventDates_NoComplexEventDates_228.insert(ComplexEventStartDate_228.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_228);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_459;
        FIX::ComplexEventEndTime ComplexEventEndTime_459(FIX::UTCTIMEONLY(20, 40, 12));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_459);
        ComplexEventTimes_NoComplexEventTimes_459.insert(ComplexEventEndTime_459.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_459(FIX::UTCTIMEONLY(20, 15, 59));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_459);
        ComplexEventTimes_NoComplexEventTimes_459.insert(ComplexEventStartTime_459.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_459);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_114;
    FIX::EventDate EventDate_114("LOCALMKTDATE_1813122352");
    noEvents_0_0.set(EventDate_114);
    EvntGrp_NoEvents_114.insert(EventDate_114.getString());
    FIX::EventPx EventPx_114;
    EventPx_114.setString("9680205");
    noEvents_0_0.set(EventPx_114);
    EvntGrp_NoEvents_114.insert(EventPx_114.getString());
    FIX::EventText EventText_114("STRING_1773087897");
    noEvents_0_0.set(EventText_114);
    EvntGrp_NoEvents_114.insert(EventText_114.getString());
    FIX::EventTime EventTime_114(FIX::UTCTIMESTAMP(0, 18, 7, 10, 3, 2014));
    noEvents_0_0.set(EventTime_114);
    EvntGrp_NoEvents_114.insert(EventTime_114.getString());
    FIX::EventType EventType_114(7);
    noEvents_0_0.set(EventType_114);
    EvntGrp_NoEvents_114.insert(EventType_114.getString());
    all_values.push_back(EvntGrp_NoEvents_114);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_115;
    FIX::EventDate EventDate_115("LOCALMKTDATE_783312172");
    noEvents_0_1.set(EventDate_115);
    EvntGrp_NoEvents_115.insert(EventDate_115.getString());
    FIX::EventPx EventPx_115;
    EventPx_115.setString("19334986");
    noEvents_0_1.set(EventPx_115);
    EvntGrp_NoEvents_115.insert(EventPx_115.getString());
    FIX::EventText EventText_115("STRING_475875056");
    noEvents_0_1.set(EventText_115);
    EvntGrp_NoEvents_115.insert(EventText_115.getString());
    FIX::EventTime EventTime_115(FIX::UTCTIMESTAMP(10, 28, 9, 27, 10, 2017));
    noEvents_0_1.set(EventTime_115);
    EvntGrp_NoEvents_115.insert(EventTime_115.getString());
    FIX::EventType EventType_115(13);
    noEvents_0_1.set(EventType_115);
    EvntGrp_NoEvents_115.insert(EventType_115.getString());
    all_values.push_back(EvntGrp_NoEvents_115);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_116;
    FIX::EventDate EventDate_116("LOCALMKTDATE_1566239364");
    noEvents_0_2.set(EventDate_116);
    EvntGrp_NoEvents_116.insert(EventDate_116.getString());
    FIX::EventPx EventPx_116;
    EventPx_116.setString("17340406");
    noEvents_0_2.set(EventPx_116);
    EvntGrp_NoEvents_116.insert(EventPx_116.getString());
    FIX::EventText EventText_116("STRING_1088969424");
    noEvents_0_2.set(EventText_116);
    EvntGrp_NoEvents_116.insert(EventText_116.getString());
    FIX::EventTime EventTime_116(FIX::UTCTIMESTAMP(7, 36, 35, 22, 12, 2001));
    noEvents_0_2.set(EventTime_116);
    EvntGrp_NoEvents_116.insert(EventTime_116.getString());
    FIX::EventType EventType_116(5);
    noEvents_0_2.set(EventType_116);
    EvntGrp_NoEvents_116.insert(EventType_116.getString());
    all_values.push_back(EvntGrp_NoEvents_116);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_119;
    FIX::InstrumentPartyID InstrumentPartyID_119("STRING_444966909");
    noInstrumentParties_0_0.set(InstrumentPartyID_119);
    InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyID_119.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_119('5');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_119);
    InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyIDSource_119.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_119(1590675162);
    noInstrumentParties_0_0.set(InstrumentPartyRole_119);
    InstrumentParties_NoInstrumentParties_119.insert(InstrumentPartyRole_119.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_119);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251;
      FIX::InstrumentPartySubID InstrumentPartySubID_251("STRING_2052994422");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_251);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251.insert(InstrumentPartySubID_251.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_251(1445687701);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_251);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251.insert(InstrumentPartySubIDType_251.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_251);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_125;
    FIX::SecurityAltID SecurityAltID_125("STRING_1175510381");
    noSecurityAltID_0_0.set(SecurityAltID_125);
    SecAltIDGrp_NoSecurityAltID_125.insert(SecurityAltID_125.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_125("STRING_81516225");
    noSecurityAltID_0_0.set(SecurityAltIDSource_125);
    SecAltIDGrp_NoSecurityAltID_125.insert(SecurityAltIDSource_125.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_125);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_126;
    FIX::SecurityAltID SecurityAltID_126("STRING_1211975799");
    noSecurityAltID_0_1.set(SecurityAltID_126);
    SecAltIDGrp_NoSecurityAltID_126.insert(SecurityAltID_126.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_126("STRING_1651385437");
    noSecurityAltID_0_1.set(SecurityAltIDSource_126);
    SecAltIDGrp_NoSecurityAltID_126.insert(SecurityAltIDSource_126.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_126);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_127;
    FIX::SecurityAltID SecurityAltID_127("STRING_1933331132");
    noSecurityAltID_0_2.set(SecurityAltID_127);
    SecAltIDGrp_NoSecurityAltID_127.insert(SecurityAltID_127.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_127("STRING_1068749585");
    noSecurityAltID_0_2.set(SecurityAltIDSource_127);
    SecAltIDGrp_NoSecurityAltID_127.insert(SecurityAltIDSource_127.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_127);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_112;
  FIX::SecurityXML SecurityXML_113("XMLDATA_1828229106");
  msg.set(SecurityXML_113);
  FIX::SecurityXMLLen SecurityXMLLen_56(1422565533);
  msg.set(SecurityXMLLen_56);
  FIX::SecurityXMLSchema SecurityXMLSchema_56("STRING_1479757524");
  msg.set(SecurityXMLSchema_56);
  SecurityXML_112.insert(SecurityXMLSchema_56.getString());
  all_values.push_back(SecurityXML_112);

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_0;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_0("STRING_358918603");
    noNotAffectedOrders_0_0.set(NotAffOrigClOrdID_0);
    NotAffectedOrdersGrp_NoNotAffectedOrders_0.insert(NotAffOrigClOrdID_0.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_0("STRING_1295520488");
    noNotAffectedOrders_0_0.set(NotAffectedOrderID_0);
    NotAffectedOrdersGrp_NoNotAffectedOrders_0.insert(NotAffectedOrderID_0.getString());
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_0);

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoNotAffectedOrders noNotAffectedOrders_0_1;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_1;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_1("STRING_2115511843");
    noNotAffectedOrders_0_1.set(NotAffOrigClOrdID_1);
    NotAffectedOrdersGrp_NoNotAffectedOrders_1.insert(NotAffOrigClOrdID_1.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_1("STRING_2092959284");
    noNotAffectedOrders_0_1.set(NotAffectedOrderID_1);
    NotAffectedOrdersGrp_NoNotAffectedOrders_1.insert(NotAffectedOrderID_1.getString());
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_1);

    msg.addGroup(noNotAffectedOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_78;
    FIX::PartyID PartyID_78("STRING_1271941743");
    noPartyIDs_0_0.set(PartyID_78);
    Parties_NoPartyIDs_78.insert(PartyID_78.getString());
    FIX::PartyIDSource PartyIDSource_78('4');
    noPartyIDs_0_0.set(PartyIDSource_78);
    Parties_NoPartyIDs_78.insert(PartyIDSource_78.getString());
    FIX::PartyRole PartyRole_78(26);
    noPartyIDs_0_0.set(PartyRole_78);
    Parties_NoPartyIDs_78.insert(PartyRole_78.getString());
    all_values.push_back(Parties_NoPartyIDs_78);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_160;
      FIX::PartySubID PartySubID_160("STRING_1774015722");
      noPartySubIDs_0_1_0.set(PartySubID_160);
      PtysSubGrp_NoPartySubIDs_160.insert(PartySubID_160.getString());
      FIX::PartySubIDType PartySubIDType_160(32);
      noPartySubIDs_0_1_0.set(PartySubIDType_160);
      PtysSubGrp_NoPartySubIDs_160.insert(PartySubIDType_160.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_160);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_2;
    FIX::TargetPartyID TargetPartyID_2("STRING_1451676419");
    noTargetPartyIDs_0_0.set(TargetPartyID_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyID_2.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_2('2');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyIDSource_2.getString());
    FIX::TargetPartyRole TargetPartyRole_2(1779774058);
    noTargetPartyIDs_0_0.set(TargetPartyRole_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyRole_2.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_2);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_3;
    FIX::TargetPartyID TargetPartyID_3("STRING_2036233371");
    noTargetPartyIDs_0_1.set(TargetPartyID_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyID_3.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_3('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyIDSource_3.getString());
    FIX::TargetPartyRole TargetPartyRole_3(2020429027);
    noTargetPartyIDs_0_1.set(TargetPartyRole_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyRole_3.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_3);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_77;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_77("DATA_1941744146");
  msg.set(EncodedUnderlyingIssuer_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingIssuer_77.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_77(744928820);
  msg.set(EncodedUnderlyingIssuerLen_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingIssuerLen_77.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_77("DATA_1298906212");
  msg.set(EncodedUnderlyingSecurityDesc_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingSecurityDesc_77.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_77(969770879);
  msg.set(EncodedUnderlyingSecurityDescLen_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingSecurityDescLen_77.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_77;
  UnderlyingAdjustedQuantity_77.setString("8264450");
  msg.set(UnderlyingAdjustedQuantity_77);
  UnderlyingInstrument_77.insert(UnderlyingAdjustedQuantity_77.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_77;
  UnderlyingAllocationPercent_77.setString("83.630000");
  msg.set(UnderlyingAllocationPercent_77);
  UnderlyingInstrument_77.insert(UnderlyingAllocationPercent_77.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_77;
  UnderlyingAttachmentPoint_77.setString("26.680000");
  msg.set(UnderlyingAttachmentPoint_77);
  UnderlyingInstrument_77.insert(UnderlyingAttachmentPoint_77.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_77("STRING_612292529");
  msg.set(UnderlyingCFICode_77);
  UnderlyingInstrument_77.insert(UnderlyingCFICode_77.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_77("STRING_1432147948");
  msg.set(UnderlyingCPProgram_77);
  UnderlyingInstrument_77.insert(UnderlyingCPProgram_77.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_77("STRING_154418126");
  msg.set(UnderlyingCPRegType_77);
  UnderlyingInstrument_77.insert(UnderlyingCPRegType_77.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_77;
  UnderlyingCapValue_77.setString("20348580");
  msg.set(UnderlyingCapValue_77);
  UnderlyingInstrument_77.insert(UnderlyingCapValue_77.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_77;
  UnderlyingCashAmount_77.setString("7644218");
  msg.set(UnderlyingCashAmount_77);
  UnderlyingInstrument_77.insert(UnderlyingCashAmount_77.getString());
  FIX::UnderlyingCashType UnderlyingCashType_77("STRING_DIFF");
  msg.set(UnderlyingCashType_77);
  UnderlyingInstrument_77.insert(UnderlyingCashType_77.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_77;
  UnderlyingContractMultiplier_77.setString("2462930");
  msg.set(UnderlyingContractMultiplier_77);
  UnderlyingInstrument_77.insert(UnderlyingContractMultiplier_77.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_77(2059942312);
  msg.set(UnderlyingContractMultiplierUnit_77);
  UnderlyingInstrument_77.insert(UnderlyingContractMultiplierUnit_77.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_77("COUNTRY_671718800");
  msg.set(UnderlyingCountryOfIssue_77);
  UnderlyingInstrument_77.insert(UnderlyingCountryOfIssue_77.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_77("LOCALMKTDATE_191768654");
  msg.set(UnderlyingCouponPaymentDate_77);
  UnderlyingInstrument_77.insert(UnderlyingCouponPaymentDate_77.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_77;
  UnderlyingCouponRate_77.setString("49.280000");
  msg.set(UnderlyingCouponRate_77);
  UnderlyingInstrument_77.insert(UnderlyingCouponRate_77.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_77("STRING_1943660543");
  msg.set(UnderlyingCreditRating_77);
  UnderlyingInstrument_77.insert(UnderlyingCreditRating_77.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_77("CHF");
  msg.set(UnderlyingCurrency_77);
  UnderlyingInstrument_77.insert(UnderlyingCurrency_77.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_77;
  UnderlyingCurrentValue_77.setString("1929901");
  msg.set(UnderlyingCurrentValue_77);
  UnderlyingInstrument_77.insert(UnderlyingCurrentValue_77.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_77;
  UnderlyingDetachmentPoint_77.setString("26.930000");
  msg.set(UnderlyingDetachmentPoint_77);
  UnderlyingInstrument_77.insert(UnderlyingDetachmentPoint_77.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_77;
  UnderlyingDirtyPrice_77.setString("16861388");
  msg.set(UnderlyingDirtyPrice_77);
  UnderlyingInstrument_77.insert(UnderlyingDirtyPrice_77.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_77;
  UnderlyingEndPrice_77.setString("15277973");
  msg.set(UnderlyingEndPrice_77);
  UnderlyingInstrument_77.insert(UnderlyingEndPrice_77.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_77;
  UnderlyingEndValue_77.setString("393854");
  msg.set(UnderlyingEndValue_77);
  UnderlyingInstrument_77.insert(UnderlyingEndValue_77.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_77(1542188481);
  msg.set(UnderlyingExerciseStyle_77);
  UnderlyingInstrument_77.insert(UnderlyingExerciseStyle_77.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_77;
  UnderlyingFXRate_77.setString("11600877");
  msg.set(UnderlyingFXRate_77);
  UnderlyingInstrument_77.insert(UnderlyingFXRate_77.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_77('M');
  msg.set(UnderlyingFXRateCalc_77);
  UnderlyingInstrument_77.insert(UnderlyingFXRateCalc_77.getString());
  FIX::UnderlyingFactor UnderlyingFactor_77;
  UnderlyingFactor_77.setString("8414296");
  msg.set(UnderlyingFactor_77);
  UnderlyingInstrument_77.insert(UnderlyingFactor_77.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_77(1033033104);
  msg.set(UnderlyingFlowScheduleType_77);
  UnderlyingInstrument_77.insert(UnderlyingFlowScheduleType_77.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_77("STRING_1869879333");
  msg.set(UnderlyingInstrRegistry_77);
  UnderlyingInstrument_77.insert(UnderlyingInstrRegistry_77.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_77("LOCALMKTDATE_1586358420");
  msg.set(UnderlyingIssueDate_77);
  UnderlyingInstrument_77.insert(UnderlyingIssueDate_77.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_77("STRING_184455669");
  msg.set(UnderlyingIssuer_77);
  UnderlyingInstrument_77.insert(UnderlyingIssuer_77.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_77("STRING_692166564");
  msg.set(UnderlyingLocaleOfIssue_77);
  UnderlyingInstrument_77.insert(UnderlyingLocaleOfIssue_77.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_77("LOCALMKTDATE_265319818");
  msg.set(UnderlyingMaturityDate_77);
  UnderlyingInstrument_77.insert(UnderlyingMaturityDate_77.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_77("MONTHYEAR_547854032");
  msg.set(UnderlyingMaturityMonthYear_77);
  UnderlyingInstrument_77.insert(UnderlyingMaturityMonthYear_77.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_77("TZTIMEONLY_1165839233");
  msg.set(UnderlyingMaturityTime_77);
  UnderlyingInstrument_77.insert(UnderlyingMaturityTime_77.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_77;
  UnderlyingNotionalPercentageOutstanding_77.setString("23.470000");
  msg.set(UnderlyingNotionalPercentageOutstanding_77);
  UnderlyingInstrument_77.insert(UnderlyingNotionalPercentageOutstanding_77.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_77('1');
  msg.set(UnderlyingOptAttribute_77);
  UnderlyingInstrument_77.insert(UnderlyingOptAttribute_77.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_77;
  UnderlyingOriginalNotionalPercentageOutstanding_77.setString("73.590000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_77);
  UnderlyingInstrument_77.insert(UnderlyingOriginalNotionalPercentageOutstanding_77.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_77("STRING_764986762");
  msg.set(UnderlyingPriceUnitOfMeasure_77);
  UnderlyingInstrument_77.insert(UnderlyingPriceUnitOfMeasure_77.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_77;
  UnderlyingPriceUnitOfMeasureQty_77.setString("5969401");
  msg.set(UnderlyingPriceUnitOfMeasureQty_77);
  UnderlyingInstrument_77.insert(UnderlyingPriceUnitOfMeasureQty_77.getString());
  FIX::UnderlyingProduct UnderlyingProduct_77(2023947965);
  msg.set(UnderlyingProduct_77);
  UnderlyingInstrument_77.insert(UnderlyingProduct_77.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_77(1011279780);
  msg.set(UnderlyingPutOrCall_77);
  UnderlyingInstrument_77.insert(UnderlyingPutOrCall_77.getString());
  FIX::UnderlyingPx UnderlyingPx_77;
  UnderlyingPx_77.setString("5093988");
  msg.set(UnderlyingPx_77);
  UnderlyingInstrument_77.insert(UnderlyingPx_77.getString());
  FIX::UnderlyingQty UnderlyingQty_77;
  UnderlyingQty_77.setString("5481831");
  msg.set(UnderlyingQty_77);
  UnderlyingInstrument_77.insert(UnderlyingQty_77.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_77("LOCALMKTDATE_1203048435");
  msg.set(UnderlyingRedemptionDate_77);
  UnderlyingInstrument_77.insert(UnderlyingRedemptionDate_77.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_77("STRING_658863750");
  msg.set(UnderlyingRepoCollateralSecurityType_77);
  UnderlyingInstrument_77.insert(UnderlyingRepoCollateralSecurityType_77.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_77;
  UnderlyingRepurchaseRate_77.setString("0.130000");
  msg.set(UnderlyingRepurchaseRate_77);
  UnderlyingInstrument_77.insert(UnderlyingRepurchaseRate_77.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_77(164225405);
  msg.set(UnderlyingRepurchaseTerm_77);
  UnderlyingInstrument_77.insert(UnderlyingRepurchaseTerm_77.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_77("STRING_1755962859");
  msg.set(UnderlyingRestructuringType_77);
  UnderlyingInstrument_77.insert(UnderlyingRestructuringType_77.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_77("STRING_537350178");
  msg.set(UnderlyingSecurityDesc_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityDesc_77.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_77("EXCHANGE_899418098");
  msg.set(UnderlyingSecurityExchange_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityExchange_77.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_77("STRING_1294618088");
  msg.set(UnderlyingSecurityID_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityID_77.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_77("STRING_2065147493");
  msg.set(UnderlyingSecurityIDSource_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityIDSource_77.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_77("STRING_938803562");
  msg.set(UnderlyingSecuritySubType_77);
  UnderlyingInstrument_77.insert(UnderlyingSecuritySubType_77.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_77("STRING_689322922");
  msg.set(UnderlyingSecurityType_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityType_77.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_77("STRING_1077751570");
  msg.set(UnderlyingSeniority_77);
  UnderlyingInstrument_77.insert(UnderlyingSeniority_77.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_77("STRING_866938750");
  msg.set(UnderlyingSettlMethod_77);
  UnderlyingInstrument_77.insert(UnderlyingSettlMethod_77.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_77(5);
  msg.set(UnderlyingSettlementType_77);
  UnderlyingInstrument_77.insert(UnderlyingSettlementType_77.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_77;
  UnderlyingStartValue_77.setString("21107846");
  msg.set(UnderlyingStartValue_77);
  UnderlyingInstrument_77.insert(UnderlyingStartValue_77.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_77("STRING_589334435");
  msg.set(UnderlyingStateOrProvinceOfIssue_77);
  UnderlyingInstrument_77.insert(UnderlyingStateOrProvinceOfIssue_77.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_77("CAN");
  msg.set(UnderlyingStrikeCurrency_77);
  UnderlyingInstrument_77.insert(UnderlyingStrikeCurrency_77.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_77;
  UnderlyingStrikePrice_77.setString("12815010");
  msg.set(UnderlyingStrikePrice_77);
  UnderlyingInstrument_77.insert(UnderlyingStrikePrice_77.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_77("STRING_1234947113");
  msg.set(UnderlyingSymbol_77);
  UnderlyingInstrument_77.insert(UnderlyingSymbol_77.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_77("STRING_695610728");
  msg.set(UnderlyingSymbolSfx_77);
  UnderlyingInstrument_77.insert(UnderlyingSymbolSfx_77.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_77("STRING_299856585");
  msg.set(UnderlyingTimeUnit_77);
  UnderlyingInstrument_77.insert(UnderlyingTimeUnit_77.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_77("STRING_2112559460");
  msg.set(UnderlyingUnitOfMeasure_77);
  UnderlyingInstrument_77.insert(UnderlyingUnitOfMeasure_77.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_77;
  UnderlyingUnitOfMeasureQty_77.setString("5281290");
  msg.set(UnderlyingUnitOfMeasureQty_77);
  UnderlyingInstrument_77.insert(UnderlyingUnitOfMeasureQty_77.getString());
  all_values.push_back(UnderlyingInstrument_77);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_149;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_149("STRING_730062575");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_149);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_149.insert(UnderlyingSecurityAltID_149.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_149("STRING_1125069218");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_149);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_149.insert(UnderlyingSecurityAltIDSource_149.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_149);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_150;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_150("STRING_1496578261");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_150);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_150.insert(UnderlyingSecurityAltID_150.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_150("STRING_1741342355");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_150);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_150.insert(UnderlyingSecurityAltIDSource_150.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_150);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_135;
    FIX::UnderlyingStipType UnderlyingStipType_135("STRING_2044761379");
    noUnderlyingStips_0_0.set(UnderlyingStipType_135);
    UnderlyingStipulations_NoUnderlyingStips_135.insert(UnderlyingStipType_135.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_135("STRING_796907142");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_135);
    UnderlyingStipulations_NoUnderlyingStips_135.insert(UnderlyingStipValue_135.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_135);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_166;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_166("STRING_241637744");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_166);
    UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyID_166.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_166('9');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_166);
    UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyIDSource_166.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_166(1901811002);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_166);
    UndlyInstrumentParties_NoUndlyInstrumentParties_166.insert(UnderlyingInstrumentPartyRole_166.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_166);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_323("STRING_1860550646");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_323);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323.insert(UnderlyingInstrumentPartySubID_323.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_323(1048945443);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_323);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323.insert(UnderlyingInstrumentPartySubIDType_323.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_324("STRING_696651767");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_324);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324.insert(UnderlyingInstrumentPartySubID_324.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_324(651870561);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_324);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324.insert(UnderlyingInstrumentPartySubIDType_324.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_325("STRING_1738268365");
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubID_325);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325.insert(UnderlyingInstrumentPartySubID_325.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_325(1774403337);
      noUndlyInstrumentPartySubIDs_0_1_2.set(UnderlyingInstrumentPartySubIDType_325);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325.insert(UnderlyingInstrumentPartySubIDType_325.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_167;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_167("STRING_1518809311");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_167);
    UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyID_167.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_167('1');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_167);
    UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyIDSource_167.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_167(1737704364);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_167);
    UndlyInstrumentParties_NoUndlyInstrumentParties_167.insert(UnderlyingInstrumentPartyRole_167.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_167);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_326("STRING_2091164534");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_326);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326.insert(UnderlyingInstrumentPartySubID_326.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_326(1885461059);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_326);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326.insert(UnderlyingInstrumentPartySubIDType_326.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_168;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_168("STRING_1242161098");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_168);
    UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyID_168.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_168('1');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_168);
    UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyIDSource_168.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_168(433588139);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_168);
    UndlyInstrumentParties_NoUndlyInstrumentParties_168.insert(UnderlyingInstrumentPartyRole_168.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_168);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_327("STRING_1143703812");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_327);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327.insert(UnderlyingInstrumentPartySubID_327.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_327(961717200);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_327);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327.insert(UnderlyingInstrumentPartySubIDType_327.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_328("STRING_1014647980");
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubID_328);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328.insert(UnderlyingInstrumentPartySubID_328.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_328(1873766387);
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubIDType_328);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328.insert(UnderlyingInstrumentPartySubIDType_328.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
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
