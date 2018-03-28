#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderMassCancelReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassCancelReport msg;

  list<multiset<string>> all_values;
  multiset<string> OrderMassCancelReport_0;
  FIX::ClOrdID ClOrdID_38("STRING_808657150");
  msg.set(ClOrdID_38);
  OrderMassCancelReport_0.insert(ClOrdID_38.getString());
  FIX::EncodedText EncodedText_63("DATA_267627070");
  msg.set(EncodedText_63);
  OrderMassCancelReport_0.insert(EncodedText_63.getString());
  FIX::EncodedTextLen EncodedTextLen_63(2062235552);
  msg.set(EncodedTextLen_63);
  OrderMassCancelReport_0.insert(EncodedTextLen_63.getString());
  FIX::MarketID MarketID_10("EXCHANGE_1396419017");
  msg.set(MarketID_10);
  OrderMassCancelReport_0.insert(MarketID_10.getString());
  FIX::MarketSegmentID MarketSegmentID_10("STRING_40253320");
  msg.set(MarketSegmentID_10);
  OrderMassCancelReport_0.insert(MarketSegmentID_10.getString());
  FIX::MassActionReportID MassActionReportID_1("STRING_438813163");
  msg.set(MassActionReportID_1);
  OrderMassCancelReport_0.insert(MassActionReportID_1.getString());
  FIX::MassCancelRejectReason MassCancelRejectReason_0(7);
  msg.set(MassCancelRejectReason_0);
  OrderMassCancelReport_0.insert(MassCancelRejectReason_0.getString());
  FIX::MassCancelRequestType MassCancelRequestType_0('B');
  msg.set(MassCancelRequestType_0);
  OrderMassCancelReport_0.insert(MassCancelRequestType_0.getString());
  FIX::MassCancelResponse MassCancelResponse_0('5');
  msg.set(MassCancelResponse_0);
  OrderMassCancelReport_0.insert(MassCancelResponse_0.getString());
  FIX::OrderID OrderID_31("STRING_1908078976");
  msg.set(OrderID_31);
  OrderMassCancelReport_0.insert(OrderID_31.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_36("STRING_723082080");
  msg.set(SecondaryClOrdID_36);
  OrderMassCancelReport_0.insert(SecondaryClOrdID_36.getString());
  FIX::SecondaryOrderID SecondaryOrderID_23("STRING_1291943541");
  msg.set(SecondaryOrderID_23);
  OrderMassCancelReport_0.insert(SecondaryOrderID_23.getString());
  FIX::Side Side_30('8');
  msg.set(Side_30);
  OrderMassCancelReport_0.insert(Side_30.getString());
  FIX::Text Text_63("STRING_2135865832");
  msg.set(Text_63);
  OrderMassCancelReport_0.insert(Text_63.getString());
  FIX::TotalAffectedOrders TotalAffectedOrders_1(592744375);
  msg.set(TotalAffectedOrders_1);
  OrderMassCancelReport_0.insert(TotalAffectedOrders_1.getString());
  FIX::TradingSessionID TradingSessionID_55("STRING_6");
  msg.set(TradingSessionID_55);
  OrderMassCancelReport_0.insert(TradingSessionID_55.getString());
  FIX::TradingSessionSubID TradingSessionSubID_55("STRING_3");
  msg.set(TradingSessionSubID_55);
  OrderMassCancelReport_0.insert(TradingSessionSubID_55.getString());
  FIX::TransactTime TransactTime_48(FIX::UTCTIMESTAMP(8, 7, 0, 18, 11, 2009));
  msg.set(TransactTime_48);
  OrderMassCancelReport_0.insert(TransactTime_48.getString());
  all_values.push_back(OrderMassCancelReport_0);

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_1;
    FIX::AffectedOrderID AffectedOrderID_1("STRING_196782702");
    noAffectedOrders_0_0.set(AffectedOrderID_1);
    AffectedOrdGrp_NoAffectedOrders_1.insert(AffectedOrderID_1.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_1("STRING_289526438");
    noAffectedOrders_0_0.set(AffectedSecondaryOrderID_1);
    AffectedOrdGrp_NoAffectedOrders_1.insert(AffectedSecondaryOrderID_1.getString());
    FIX::OrigClOrdID OrigClOrdID_11("STRING_1361675593");
    noAffectedOrders_0_0.set(OrigClOrdID_11);
    AffectedOrdGrp_NoAffectedOrders_1.insert(OrigClOrdID_11.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_1);

    msg.addGroup(noAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_1;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_2;
    FIX::AffectedOrderID AffectedOrderID_2("STRING_1250287147");
    noAffectedOrders_0_1.set(AffectedOrderID_2);
    AffectedOrdGrp_NoAffectedOrders_2.insert(AffectedOrderID_2.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_2("STRING_2045259607");
    noAffectedOrders_0_1.set(AffectedSecondaryOrderID_2);
    AffectedOrdGrp_NoAffectedOrders_2.insert(AffectedSecondaryOrderID_2.getString());
    FIX::OrigClOrdID OrigClOrdID_12("STRING_1160165085");
    noAffectedOrders_0_1.set(OrigClOrdID_12);
    AffectedOrdGrp_NoAffectedOrders_2.insert(OrigClOrdID_12.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_2);

    msg.addGroup(noAffectedOrders_0_1);
  }
  // Instrument
  multiset<string> Instrument_58;
  FIX::AttachmentPoint AttachmentPoint_58;
  AttachmentPoint_58.setString("42.970000");
  msg.set(AttachmentPoint_58);
  Instrument_58.insert(AttachmentPoint_58.getString());
  FIX::CFICode CFICode_58("STRING_165403029");
  msg.set(CFICode_58);
  Instrument_58.insert(CFICode_58.getString());
  FIX::CPProgram CPProgram_58(1);
  msg.set(CPProgram_58);
  Instrument_58.insert(CPProgram_58.getString());
  FIX::CPRegType CPRegType_58("STRING_1307879666");
  msg.set(CPRegType_58);
  Instrument_58.insert(CPRegType_58.getString());
  FIX::CapPrice CapPrice_58;
  CapPrice_58.setString("2056563");
  msg.set(CapPrice_58);
  Instrument_58.insert(CapPrice_58.getString());
  FIX::ContractMultiplier ContractMultiplier_58;
  ContractMultiplier_58.setString("15137301");
  msg.set(ContractMultiplier_58);
  Instrument_58.insert(ContractMultiplier_58.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_58(2);
  msg.set(ContractMultiplierUnit_58);
  Instrument_58.insert(ContractMultiplierUnit_58.getString());
  FIX::ContractSettlMonth ContractSettlMonth_58("MONTHYEAR_1943289096");
  msg.set(ContractSettlMonth_58);
  Instrument_58.insert(ContractSettlMonth_58.getString());
  FIX::CountryOfIssue CountryOfIssue_58("COUNTRY_1749823340");
  msg.set(CountryOfIssue_58);
  Instrument_58.insert(CountryOfIssue_58.getString());
  FIX::CouponPaymentDate CouponPaymentDate_58("LOCALMKTDATE_1253107345");
  msg.set(CouponPaymentDate_58);
  Instrument_58.insert(CouponPaymentDate_58.getString());
  FIX::CouponRate CouponRate_58;
  CouponRate_58.setString("75.280000");
  msg.set(CouponRate_58);
  Instrument_58.insert(CouponRate_58.getString());
  FIX::CreditRating CreditRating_58("STRING_894283233");
  msg.set(CreditRating_58);
  Instrument_58.insert(CreditRating_58.getString());
  FIX::DatedDate DatedDate_58("LOCALMKTDATE_1704679353");
  msg.set(DatedDate_58);
  Instrument_58.insert(DatedDate_58.getString());
  FIX::DetachmentPoint DetachmentPoint_58;
  DetachmentPoint_58.setString("97.120000");
  msg.set(DetachmentPoint_58);
  Instrument_58.insert(DetachmentPoint_58.getString());
  FIX::EncodedIssuer EncodedIssuer_58("DATA_1487027608");
  msg.set(EncodedIssuer_58);
  Instrument_58.insert(EncodedIssuer_58.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_58(125955114);
  msg.set(EncodedIssuerLen_58);
  Instrument_58.insert(EncodedIssuerLen_58.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_58("DATA_1018820062");
  msg.set(EncodedSecurityDesc_58);
  Instrument_58.insert(EncodedSecurityDesc_58.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_58(573630865);
  msg.set(EncodedSecurityDescLen_58);
  Instrument_58.insert(EncodedSecurityDescLen_58.getString());
  FIX::ExerciseStyle ExerciseStyle_58(2);
  msg.set(ExerciseStyle_58);
  Instrument_58.insert(ExerciseStyle_58.getString());
  FIX::Factor Factor_58;
  Factor_58.setString("1485528");
  msg.set(Factor_58);
  Instrument_58.insert(Factor_58.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_58(false);
  msg.set(FlexProductEligibilityIndicator_58);
  Instrument_58.insert(FlexProductEligibilityIndicator_58.getString());
  FIX::FlexibleIndicator FlexibleIndicator_58(true);
  msg.set(FlexibleIndicator_58);
  Instrument_58.insert(FlexibleIndicator_58.getString());
  FIX::FloorPrice FloorPrice_58;
  FloorPrice_58.setString("4089705");
  msg.set(FloorPrice_58);
  Instrument_58.insert(FloorPrice_58.getString());
  FIX::FlowScheduleType FlowScheduleType_58(0);
  msg.set(FlowScheduleType_58);
  Instrument_58.insert(FlowScheduleType_58.getString());
  FIX::InstrRegistry InstrRegistry_58("STRING_1773370042");
  msg.set(InstrRegistry_58);
  Instrument_58.insert(InstrRegistry_58.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_58('6');
  msg.set(InstrmtAssignmentMethod_58);
  Instrument_58.insert(InstrmtAssignmentMethod_58.getString());
  FIX::InterestAccrualDate InterestAccrualDate_58("LOCALMKTDATE_961624493");
  msg.set(InterestAccrualDate_58);
  Instrument_58.insert(InterestAccrualDate_58.getString());
  FIX::IssueDate IssueDate_58("LOCALMKTDATE_987561987");
  msg.set(IssueDate_58);
  Instrument_58.insert(IssueDate_58.getString());
  FIX::Issuer Issuer_58("STRING_1856040429");
  msg.set(Issuer_58);
  Instrument_58.insert(Issuer_58.getString());
  FIX::ListMethod ListMethod_58(1);
  msg.set(ListMethod_58);
  Instrument_58.insert(ListMethod_58.getString());
  FIX::LocaleOfIssue LocaleOfIssue_58("STRING_243425");
  msg.set(LocaleOfIssue_58);
  Instrument_58.insert(LocaleOfIssue_58.getString());
  FIX::MaturityDate MaturityDate_58("LOCALMKTDATE_1767501078");
  msg.set(MaturityDate_58);
  Instrument_58.insert(MaturityDate_58.getString());
  FIX::MaturityMonthYear MaturityMonthYear_58("MONTHYEAR_1024803482");
  msg.set(MaturityMonthYear_58);
  Instrument_58.insert(MaturityMonthYear_58.getString());
  FIX::MaturityTime MaturityTime_58("TZTIMEONLY_1075160414");
  msg.set(MaturityTime_58);
  Instrument_58.insert(MaturityTime_58.getString());
  FIX::MinPriceIncrement MinPriceIncrement_58;
  MinPriceIncrement_58.setString("9278970");
  msg.set(MinPriceIncrement_58);
  Instrument_58.insert(MinPriceIncrement_58.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_58;
  MinPriceIncrementAmount_58.setString("12304598");
  msg.set(MinPriceIncrementAmount_58);
  Instrument_58.insert(MinPriceIncrementAmount_58.getString());
  FIX::NTPositionLimit NTPositionLimit_58(441406919);
  msg.set(NTPositionLimit_58);
  Instrument_58.insert(NTPositionLimit_58.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_58;
  NotionalPercentageOutstanding_58.setString("54.660000");
  msg.set(NotionalPercentageOutstanding_58);
  Instrument_58.insert(NotionalPercentageOutstanding_58.getString());
  FIX::OptAttribute OptAttribute_58('1');
  msg.set(OptAttribute_58);
  Instrument_58.insert(OptAttribute_58.getString());
  FIX::OptPayoutAmount OptPayoutAmount_58;
  OptPayoutAmount_58.setString("437466");
  msg.set(OptPayoutAmount_58);
  Instrument_58.insert(OptPayoutAmount_58.getString());
  FIX::OptPayoutType OptPayoutType_58(1);
  msg.set(OptPayoutType_58);
  Instrument_58.insert(OptPayoutType_58.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_58;
  OriginalNotionalPercentageOutstanding_58.setString("28.080000");
  msg.set(OriginalNotionalPercentageOutstanding_58);
  Instrument_58.insert(OriginalNotionalPercentageOutstanding_58.getString());
  FIX::Pool Pool_58("STRING_938029845");
  msg.set(Pool_58);
  Instrument_58.insert(Pool_58.getString());
  FIX::PositionLimit PositionLimit_58(1083228517);
  msg.set(PositionLimit_58);
  Instrument_58.insert(PositionLimit_58.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_58("STRING_STD");
  msg.set(PriceQuoteMethod_58);
  Instrument_58.insert(PriceQuoteMethod_58.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_58("STRING_277573805");
  msg.set(PriceUnitOfMeasure_58);
  Instrument_58.insert(PriceUnitOfMeasure_58.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_58;
  PriceUnitOfMeasureQty_58.setString("12091836");
  msg.set(PriceUnitOfMeasureQty_58);
  Instrument_58.insert(PriceUnitOfMeasureQty_58.getString());
  FIX::Product Product_60(8);
  msg.set(Product_60);
  Instrument_58.insert(Product_60.getString());
  FIX::ProductComplex ProductComplex_58("STRING_851204671");
  msg.set(ProductComplex_58);
  Instrument_58.insert(ProductComplex_58.getString());
  FIX::PutOrCall PutOrCall_58(1);
  msg.set(PutOrCall_58);
  Instrument_58.insert(PutOrCall_58.getString());
  FIX::RedemptionDate RedemptionDate_58("LOCALMKTDATE_1072311815");
  msg.set(RedemptionDate_58);
  Instrument_58.insert(RedemptionDate_58.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_58("STRING_77920788");
  msg.set(RepoCollateralSecurityType_58);
  Instrument_58.insert(RepoCollateralSecurityType_58.getString());
  FIX::RepurchaseRate RepurchaseRate_58;
  RepurchaseRate_58.setString("94.300000");
  msg.set(RepurchaseRate_58);
  Instrument_58.insert(RepurchaseRate_58.getString());
  FIX::RepurchaseTerm RepurchaseTerm_58(1481282395);
  msg.set(RepurchaseTerm_58);
  Instrument_58.insert(RepurchaseTerm_58.getString());
  FIX::RestructuringType RestructuringType_58("STRING_XR");
  msg.set(RestructuringType_58);
  Instrument_58.insert(RestructuringType_58.getString());
  FIX::SecurityDesc SecurityDesc_58("STRING_649835824");
  msg.set(SecurityDesc_58);
  Instrument_58.insert(SecurityDesc_58.getString());
  FIX::SecurityExchange SecurityExchange_58("EXCHANGE_2087035677");
  msg.set(SecurityExchange_58);
  Instrument_58.insert(SecurityExchange_58.getString());
  FIX::SecurityGroup SecurityGroup_58("STRING_1711643337");
  msg.set(SecurityGroup_58);
  Instrument_58.insert(SecurityGroup_58.getString());
  FIX::SecurityID SecurityID_58("STRING_1637397812");
  msg.set(SecurityID_58);
  Instrument_58.insert(SecurityID_58.getString());
  FIX::SecurityIDSource SecurityIDSource_58("STRING_1");
  msg.set(SecurityIDSource_58);
  Instrument_58.insert(SecurityIDSource_58.getString());
  FIX::SecurityStatus SecurityStatus_58("STRING_1");
  msg.set(SecurityStatus_58);
  Instrument_58.insert(SecurityStatus_58.getString());
  FIX::SecuritySubType SecuritySubType_59("STRING_1637641237");
  msg.set(SecuritySubType_59);
  Instrument_58.insert(SecuritySubType_59.getString());
  FIX::SecurityType SecurityType_60("STRING_FXNDF");
  msg.set(SecurityType_60);
  Instrument_58.insert(SecurityType_60.getString());
  FIX::Seniority Seniority_58("STRING_SB");
  msg.set(Seniority_58);
  Instrument_58.insert(Seniority_58.getString());
  FIX::SettlMethod SettlMethod_58('P');
  msg.set(SettlMethod_58);
  Instrument_58.insert(SettlMethod_58.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_58("STRING_196023337");
  msg.set(SettleOnOpenFlag_58);
  Instrument_58.insert(SettleOnOpenFlag_58.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_58("STRING_531339808");
  msg.set(StateOrProvinceOfIssue_58);
  Instrument_58.insert(StateOrProvinceOfIssue_58.getString());
  FIX::StrikeCurrency StrikeCurrency_58("USD");
  msg.set(StrikeCurrency_58);
  Instrument_58.insert(StrikeCurrency_58.getString());
  FIX::StrikeMultiplier StrikeMultiplier_58;
  StrikeMultiplier_58.setString("15576050");
  msg.set(StrikeMultiplier_58);
  Instrument_58.insert(StrikeMultiplier_58.getString());
  FIX::StrikePrice StrikePrice_58;
  StrikePrice_58.setString("10504715");
  msg.set(StrikePrice_58);
  Instrument_58.insert(StrikePrice_58.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_58(2);
  msg.set(StrikePriceBoundaryMethod_58);
  Instrument_58.insert(StrikePriceBoundaryMethod_58.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_58;
  StrikePriceBoundaryPrecision_58.setString("42.480000");
  msg.set(StrikePriceBoundaryPrecision_58);
  Instrument_58.insert(StrikePriceBoundaryPrecision_58.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_58(4);
  msg.set(StrikePriceDeterminationMethod_58);
  Instrument_58.insert(StrikePriceDeterminationMethod_58.getString());
  FIX::StrikeValue StrikeValue_58;
  StrikeValue_58.setString("9307264");
  msg.set(StrikeValue_58);
  Instrument_58.insert(StrikeValue_58.getString());
  FIX::Symbol Symbol_58("STRING_860213121");
  msg.set(Symbol_58);
  Instrument_58.insert(Symbol_58.getString());
  FIX::SymbolSfx SymbolSfx_58("STRING_WI");
  msg.set(SymbolSfx_58);
  Instrument_58.insert(SymbolSfx_58.getString());
  FIX::TimeUnit TimeUnit_58("STRING_Min");
  msg.set(TimeUnit_58);
  Instrument_58.insert(TimeUnit_58.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_58(4);
  msg.set(UnderlyingPriceDeterminationMethod_58);
  Instrument_58.insert(UnderlyingPriceDeterminationMethod_58.getString());
  FIX::UnitOfMeasure UnitOfMeasure_58("STRING_Bbl");
  msg.set(UnitOfMeasure_58);
  Instrument_58.insert(UnitOfMeasure_58.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_58;
  UnitOfMeasureQty_58.setString("1791027");
  msg.set(UnitOfMeasureQty_58);
  Instrument_58.insert(UnitOfMeasureQty_58.getString());
  FIX::ValuationMethod ValuationMethod_58("STRING_CDS");
  msg.set(ValuationMethod_58);
  Instrument_58.insert(ValuationMethod_58.getString());
  all_values.push_back(Instrument_58);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_113;
    FIX::ComplexEventCondition ComplexEventCondition_113(2);
    noComplexEvents_0_0.set(ComplexEventCondition_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventCondition_113.getString());
    FIX::ComplexEventPrice ComplexEventPrice_113;
    ComplexEventPrice_113.setString("425989");
    noComplexEvents_0_0.set(ComplexEventPrice_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPrice_113.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_113(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceBoundaryMethod_113.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_113;
    ComplexEventPriceBoundaryPrecision_113.setString("79.960000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceBoundaryPrecision_113.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_113(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventPriceTimeType_113.getString());
    FIX::ComplexEventType ComplexEventType_113(5);
    noComplexEvents_0_0.set(ComplexEventType_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexEventType_113.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_113;
    ComplexOptPayoutAmount_113.setString("13428021");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_113);
    ComplexEvents_NoComplexEvents_113.insert(ComplexOptPayoutAmount_113.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_113);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_236;
      FIX::ComplexEventEndDate ComplexEventEndDate_236(FIX::UTCTIMESTAMP(5, 37, 7, 4, 4, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_236);
      ComplexEventDates_NoComplexEventDates_236.insert(ComplexEventEndDate_236.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_236(FIX::UTCTIMESTAMP(15, 16, 42, 3, 10, 2001));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_236);
      ComplexEventDates_NoComplexEventDates_236.insert(ComplexEventStartDate_236.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_236);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_472;
        FIX::ComplexEventEndTime ComplexEventEndTime_472(FIX::UTCTIMEONLY(14, 32, 25));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_472);
        ComplexEventTimes_NoComplexEventTimes_472.insert(ComplexEventEndTime_472.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_472(FIX::UTCTIMEONLY(13, 28, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_472);
        ComplexEventTimes_NoComplexEventTimes_472.insert(ComplexEventStartTime_472.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_472);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_473;
        FIX::ComplexEventEndTime ComplexEventEndTime_473(FIX::UTCTIMEONLY(18, 39, 13));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_473);
        ComplexEventTimes_NoComplexEventTimes_473.insert(ComplexEventEndTime_473.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_473(FIX::UTCTIMEONLY(20, 5, 26));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_473);
        ComplexEventTimes_NoComplexEventTimes_473.insert(ComplexEventStartTime_473.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_473);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_237;
      FIX::ComplexEventEndDate ComplexEventEndDate_237(FIX::UTCTIMESTAMP(10, 4, 50, 14, 12, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_237);
      ComplexEventDates_NoComplexEventDates_237.insert(ComplexEventEndDate_237.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_237(FIX::UTCTIMESTAMP(6, 35, 0, 17, 1, 2007));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_237);
      ComplexEventDates_NoComplexEventDates_237.insert(ComplexEventStartDate_237.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_237);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_474;
        FIX::ComplexEventEndTime ComplexEventEndTime_474(FIX::UTCTIMEONLY(20, 17, 35));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_474);
        ComplexEventTimes_NoComplexEventTimes_474.insert(ComplexEventEndTime_474.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_474(FIX::UTCTIMEONLY(6, 56, 33));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_474);
        ComplexEventTimes_NoComplexEventTimes_474.insert(ComplexEventStartTime_474.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_474);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_114;
    FIX::ComplexEventCondition ComplexEventCondition_114(2);
    noComplexEvents_0_1.set(ComplexEventCondition_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventCondition_114.getString());
    FIX::ComplexEventPrice ComplexEventPrice_114;
    ComplexEventPrice_114.setString("20655607");
    noComplexEvents_0_1.set(ComplexEventPrice_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPrice_114.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_114(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceBoundaryMethod_114.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_114;
    ComplexEventPriceBoundaryPrecision_114.setString("48.200000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceBoundaryPrecision_114.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_114(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventPriceTimeType_114.getString());
    FIX::ComplexEventType ComplexEventType_114(4);
    noComplexEvents_0_1.set(ComplexEventType_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexEventType_114.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_114;
    ComplexOptPayoutAmount_114.setString("4589480");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_114);
    ComplexEvents_NoComplexEvents_114.insert(ComplexOptPayoutAmount_114.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_114);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_238;
      FIX::ComplexEventEndDate ComplexEventEndDate_238(FIX::UTCTIMESTAMP(3, 26, 58, 26, 2, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_238);
      ComplexEventDates_NoComplexEventDates_238.insert(ComplexEventEndDate_238.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_238(FIX::UTCTIMESTAMP(23, 51, 48, 16, 8, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_238);
      ComplexEventDates_NoComplexEventDates_238.insert(ComplexEventStartDate_238.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_238);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_475;
        FIX::ComplexEventEndTime ComplexEventEndTime_475(FIX::UTCTIMEONLY(13, 54, 25));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_475);
        ComplexEventTimes_NoComplexEventTimes_475.insert(ComplexEventEndTime_475.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_475(FIX::UTCTIMEONLY(13, 21, 1));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_475);
        ComplexEventTimes_NoComplexEventTimes_475.insert(ComplexEventStartTime_475.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_475);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_476;
        FIX::ComplexEventEndTime ComplexEventEndTime_476(FIX::UTCTIMEONLY(3, 6, 37));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_476);
        ComplexEventTimes_NoComplexEventTimes_476.insert(ComplexEventEndTime_476.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_476(FIX::UTCTIMEONLY(18, 54, 54));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_476);
        ComplexEventTimes_NoComplexEventTimes_476.insert(ComplexEventStartTime_476.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_476);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_115;
    FIX::ComplexEventCondition ComplexEventCondition_115(1);
    noComplexEvents_0_2.set(ComplexEventCondition_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventCondition_115.getString());
    FIX::ComplexEventPrice ComplexEventPrice_115;
    ComplexEventPrice_115.setString("2941921");
    noComplexEvents_0_2.set(ComplexEventPrice_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPrice_115.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_115(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceBoundaryMethod_115.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_115;
    ComplexEventPriceBoundaryPrecision_115.setString("94.760000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceBoundaryPrecision_115.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_115(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventPriceTimeType_115.getString());
    FIX::ComplexEventType ComplexEventType_115(7);
    noComplexEvents_0_2.set(ComplexEventType_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexEventType_115.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_115;
    ComplexOptPayoutAmount_115.setString("7034497");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_115);
    ComplexEvents_NoComplexEvents_115.insert(ComplexOptPayoutAmount_115.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_115);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_239;
      FIX::ComplexEventEndDate ComplexEventEndDate_239(FIX::UTCTIMESTAMP(16, 28, 46, 19, 2, 2011));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_239);
      ComplexEventDates_NoComplexEventDates_239.insert(ComplexEventEndDate_239.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_239(FIX::UTCTIMESTAMP(3, 10, 38, 23, 4, 2017));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_239);
      ComplexEventDates_NoComplexEventDates_239.insert(ComplexEventStartDate_239.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_239);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_477;
        FIX::ComplexEventEndTime ComplexEventEndTime_477(FIX::UTCTIMEONLY(18, 30, 28));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_477);
        ComplexEventTimes_NoComplexEventTimes_477.insert(ComplexEventEndTime_477.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_477(FIX::UTCTIMEONLY(1, 23, 28));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_477);
        ComplexEventTimes_NoComplexEventTimes_477.insert(ComplexEventStartTime_477.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_477);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_478;
        FIX::ComplexEventEndTime ComplexEventEndTime_478(FIX::UTCTIMEONLY(13, 32, 59));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_478);
        ComplexEventTimes_NoComplexEventTimes_478.insert(ComplexEventEndTime_478.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_478(FIX::UTCTIMEONLY(2, 43, 41));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_478);
        ComplexEventTimes_NoComplexEventTimes_478.insert(ComplexEventStartTime_478.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_478);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_479;
        FIX::ComplexEventEndTime ComplexEventEndTime_479(FIX::UTCTIMEONLY(15, 1, 46));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_479);
        ComplexEventTimes_NoComplexEventTimes_479.insert(ComplexEventEndTime_479.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_479(FIX::UTCTIMEONLY(2, 1, 40));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_479);
        ComplexEventTimes_NoComplexEventTimes_479.insert(ComplexEventStartTime_479.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_479);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_240;
      FIX::ComplexEventEndDate ComplexEventEndDate_240(FIX::UTCTIMESTAMP(15, 10, 40, 2, 2, 2005));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_240);
      ComplexEventDates_NoComplexEventDates_240.insert(ComplexEventEndDate_240.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_240(FIX::UTCTIMESTAMP(7, 35, 50, 25, 5, 2011));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_240);
      ComplexEventDates_NoComplexEventDates_240.insert(ComplexEventStartDate_240.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_240);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_480;
        FIX::ComplexEventEndTime ComplexEventEndTime_480(FIX::UTCTIMEONLY(18, 54, 50));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_480);
        ComplexEventTimes_NoComplexEventTimes_480.insert(ComplexEventEndTime_480.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_480(FIX::UTCTIMEONLY(12, 26, 32));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_480);
        ComplexEventTimes_NoComplexEventTimes_480.insert(ComplexEventStartTime_480.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_480);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassCancelReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_119;
    FIX::EventDate EventDate_119("LOCALMKTDATE_1648151849");
    noEvents_0_0.set(EventDate_119);
    EvntGrp_NoEvents_119.insert(EventDate_119.getString());
    FIX::EventPx EventPx_119;
    EventPx_119.setString("8035447");
    noEvents_0_0.set(EventPx_119);
    EvntGrp_NoEvents_119.insert(EventPx_119.getString());
    FIX::EventText EventText_119("STRING_1383074258");
    noEvents_0_0.set(EventText_119);
    EvntGrp_NoEvents_119.insert(EventText_119.getString());
    FIX::EventTime EventTime_119(FIX::UTCTIMESTAMP(20, 32, 20, 9, 12, 2012));
    noEvents_0_0.set(EventTime_119);
    EvntGrp_NoEvents_119.insert(EventTime_119.getString());
    FIX::EventType EventType_119(3);
    noEvents_0_0.set(EventType_119);
    EvntGrp_NoEvents_119.insert(EventType_119.getString());
    all_values.push_back(EvntGrp_NoEvents_119);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_122;
    FIX::InstrumentPartyID InstrumentPartyID_122("STRING_1651793671");
    noInstrumentParties_0_0.set(InstrumentPartyID_122);
    InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyID_122.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_122('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_122);
    InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyIDSource_122.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_122(2047994488);
    noInstrumentParties_0_0.set(InstrumentPartyRole_122);
    InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyRole_122.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_122);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256;
      FIX::InstrumentPartySubID InstrumentPartySubID_256("STRING_1337024994");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_256);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256.insert(InstrumentPartySubID_256.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_256(1146233710);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_256);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256.insert(InstrumentPartySubIDType_256.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257;
      FIX::InstrumentPartySubID InstrumentPartySubID_257("STRING_1552170696");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_257);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257.insert(InstrumentPartySubID_257.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_257(191326635);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_257);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257.insert(InstrumentPartySubIDType_257.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_131;
    FIX::SecurityAltID SecurityAltID_131("STRING_1359364370");
    noSecurityAltID_0_0.set(SecurityAltID_131);
    SecAltIDGrp_NoSecurityAltID_131.insert(SecurityAltID_131.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_131("STRING_404223486");
    noSecurityAltID_0_0.set(SecurityAltIDSource_131);
    SecAltIDGrp_NoSecurityAltID_131.insert(SecurityAltIDSource_131.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_131);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_132;
    FIX::SecurityAltID SecurityAltID_132("STRING_624388214");
    noSecurityAltID_0_1.set(SecurityAltID_132);
    SecAltIDGrp_NoSecurityAltID_132.insert(SecurityAltID_132.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_132("STRING_1332779676");
    noSecurityAltID_0_1.set(SecurityAltIDSource_132);
    SecAltIDGrp_NoSecurityAltID_132.insert(SecurityAltIDSource_132.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_132);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_116;
  FIX::SecurityXML SecurityXML_117("XMLDATA_1857481377");
  msg.set(SecurityXML_117);
  FIX::SecurityXMLLen SecurityXMLLen_58(2054639594);
  msg.set(SecurityXMLLen_58);
  FIX::SecurityXMLSchema SecurityXMLSchema_58("STRING_339987568");
  msg.set(SecurityXMLSchema_58);
  SecurityXML_116.insert(SecurityXMLSchema_58.getString());
  all_values.push_back(SecurityXML_116);

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_2;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_2("STRING_1314020798");
    noNotAffectedOrders_0_0.set(NotAffOrigClOrdID_2);
    NotAffectedOrdersGrp_NoNotAffectedOrders_2.insert(NotAffOrigClOrdID_2.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_2("STRING_1906657529");
    noNotAffectedOrders_0_0.set(NotAffectedOrderID_2);
    NotAffectedOrdersGrp_NoNotAffectedOrders_2.insert(NotAffectedOrderID_2.getString());
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_2);

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_82;
    FIX::PartyID PartyID_82("STRING_2117565544");
    noPartyIDs_0_0.set(PartyID_82);
    Parties_NoPartyIDs_82.insert(PartyID_82.getString());
    FIX::PartyIDSource PartyIDSource_82('H');
    noPartyIDs_0_0.set(PartyIDSource_82);
    Parties_NoPartyIDs_82.insert(PartyIDSource_82.getString());
    FIX::PartyRole PartyRole_82(51);
    noPartyIDs_0_0.set(PartyRole_82);
    Parties_NoPartyIDs_82.insert(PartyRole_82.getString());
    all_values.push_back(Parties_NoPartyIDs_82);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_167;
      FIX::PartySubID PartySubID_167("STRING_2072051371");
      noPartySubIDs_0_1_0.set(PartySubID_167);
      PtysSubGrp_NoPartySubIDs_167.insert(PartySubID_167.getString());
      FIX::PartySubIDType PartySubIDType_167(8);
      noPartySubIDs_0_1_0.set(PartySubIDType_167);
      PtysSubGrp_NoPartySubIDs_167.insert(PartySubIDType_167.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_167);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_168;
      FIX::PartySubID PartySubID_168("STRING_1130115669");
      noPartySubIDs_0_1_1.set(PartySubID_168);
      PtysSubGrp_NoPartySubIDs_168.insert(PartySubID_168.getString());
      FIX::PartySubIDType PartySubIDType_168(33);
      noPartySubIDs_0_1_1.set(PartySubIDType_168);
      PtysSubGrp_NoPartySubIDs_168.insert(PartySubIDType_168.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_168);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_7;
    FIX::TargetPartyID TargetPartyID_7("STRING_967695023");
    noTargetPartyIDs_0_0.set(TargetPartyID_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyID_7.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_7('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyIDSource_7.getString());
    FIX::TargetPartyRole TargetPartyRole_7(2068260991);
    noTargetPartyIDs_0_0.set(TargetPartyRole_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyRole_7.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_7);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_79;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_79("DATA_1257171402");
  msg.set(EncodedUnderlyingIssuer_79);
  UnderlyingInstrument_79.insert(EncodedUnderlyingIssuer_79.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_79(10914497);
  msg.set(EncodedUnderlyingIssuerLen_79);
  UnderlyingInstrument_79.insert(EncodedUnderlyingIssuerLen_79.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_79("DATA_780316326");
  msg.set(EncodedUnderlyingSecurityDesc_79);
  UnderlyingInstrument_79.insert(EncodedUnderlyingSecurityDesc_79.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_79(446712749);
  msg.set(EncodedUnderlyingSecurityDescLen_79);
  UnderlyingInstrument_79.insert(EncodedUnderlyingSecurityDescLen_79.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_79;
  UnderlyingAdjustedQuantity_79.setString("11571482");
  msg.set(UnderlyingAdjustedQuantity_79);
  UnderlyingInstrument_79.insert(UnderlyingAdjustedQuantity_79.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_79;
  UnderlyingAllocationPercent_79.setString("33.750000");
  msg.set(UnderlyingAllocationPercent_79);
  UnderlyingInstrument_79.insert(UnderlyingAllocationPercent_79.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_79;
  UnderlyingAttachmentPoint_79.setString("93.840000");
  msg.set(UnderlyingAttachmentPoint_79);
  UnderlyingInstrument_79.insert(UnderlyingAttachmentPoint_79.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_79("STRING_299126675");
  msg.set(UnderlyingCFICode_79);
  UnderlyingInstrument_79.insert(UnderlyingCFICode_79.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_79("STRING_1544367745");
  msg.set(UnderlyingCPProgram_79);
  UnderlyingInstrument_79.insert(UnderlyingCPProgram_79.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_79("STRING_1042262870");
  msg.set(UnderlyingCPRegType_79);
  UnderlyingInstrument_79.insert(UnderlyingCPRegType_79.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_79;
  UnderlyingCapValue_79.setString("9235148");
  msg.set(UnderlyingCapValue_79);
  UnderlyingInstrument_79.insert(UnderlyingCapValue_79.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_79;
  UnderlyingCashAmount_79.setString("7296637");
  msg.set(UnderlyingCashAmount_79);
  UnderlyingInstrument_79.insert(UnderlyingCashAmount_79.getString());
  FIX::UnderlyingCashType UnderlyingCashType_79("STRING_DIFF");
  msg.set(UnderlyingCashType_79);
  UnderlyingInstrument_79.insert(UnderlyingCashType_79.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_79;
  UnderlyingContractMultiplier_79.setString("8306708");
  msg.set(UnderlyingContractMultiplier_79);
  UnderlyingInstrument_79.insert(UnderlyingContractMultiplier_79.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_79(1069651341);
  msg.set(UnderlyingContractMultiplierUnit_79);
  UnderlyingInstrument_79.insert(UnderlyingContractMultiplierUnit_79.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_79("COUNTRY_1711843314");
  msg.set(UnderlyingCountryOfIssue_79);
  UnderlyingInstrument_79.insert(UnderlyingCountryOfIssue_79.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_79("LOCALMKTDATE_2144691634");
  msg.set(UnderlyingCouponPaymentDate_79);
  UnderlyingInstrument_79.insert(UnderlyingCouponPaymentDate_79.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_79;
  UnderlyingCouponRate_79.setString("52.220000");
  msg.set(UnderlyingCouponRate_79);
  UnderlyingInstrument_79.insert(UnderlyingCouponRate_79.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_79("STRING_24610583");
  msg.set(UnderlyingCreditRating_79);
  UnderlyingInstrument_79.insert(UnderlyingCreditRating_79.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_79("USD");
  msg.set(UnderlyingCurrency_79);
  UnderlyingInstrument_79.insert(UnderlyingCurrency_79.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_79;
  UnderlyingCurrentValue_79.setString("19453037");
  msg.set(UnderlyingCurrentValue_79);
  UnderlyingInstrument_79.insert(UnderlyingCurrentValue_79.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_79;
  UnderlyingDetachmentPoint_79.setString("23.900000");
  msg.set(UnderlyingDetachmentPoint_79);
  UnderlyingInstrument_79.insert(UnderlyingDetachmentPoint_79.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_79;
  UnderlyingDirtyPrice_79.setString("18956410");
  msg.set(UnderlyingDirtyPrice_79);
  UnderlyingInstrument_79.insert(UnderlyingDirtyPrice_79.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_79;
  UnderlyingEndPrice_79.setString("8249473");
  msg.set(UnderlyingEndPrice_79);
  UnderlyingInstrument_79.insert(UnderlyingEndPrice_79.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_79;
  UnderlyingEndValue_79.setString("13467480");
  msg.set(UnderlyingEndValue_79);
  UnderlyingInstrument_79.insert(UnderlyingEndValue_79.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_79(691665056);
  msg.set(UnderlyingExerciseStyle_79);
  UnderlyingInstrument_79.insert(UnderlyingExerciseStyle_79.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_79;
  UnderlyingFXRate_79.setString("12414147");
  msg.set(UnderlyingFXRate_79);
  UnderlyingInstrument_79.insert(UnderlyingFXRate_79.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_79('M');
  msg.set(UnderlyingFXRateCalc_79);
  UnderlyingInstrument_79.insert(UnderlyingFXRateCalc_79.getString());
  FIX::UnderlyingFactor UnderlyingFactor_79;
  UnderlyingFactor_79.setString("8020687");
  msg.set(UnderlyingFactor_79);
  UnderlyingInstrument_79.insert(UnderlyingFactor_79.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_79(1162192061);
  msg.set(UnderlyingFlowScheduleType_79);
  UnderlyingInstrument_79.insert(UnderlyingFlowScheduleType_79.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_79("STRING_1424130838");
  msg.set(UnderlyingInstrRegistry_79);
  UnderlyingInstrument_79.insert(UnderlyingInstrRegistry_79.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_79("LOCALMKTDATE_812983210");
  msg.set(UnderlyingIssueDate_79);
  UnderlyingInstrument_79.insert(UnderlyingIssueDate_79.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_79("STRING_1942508387");
  msg.set(UnderlyingIssuer_79);
  UnderlyingInstrument_79.insert(UnderlyingIssuer_79.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_79("STRING_1870843587");
  msg.set(UnderlyingLocaleOfIssue_79);
  UnderlyingInstrument_79.insert(UnderlyingLocaleOfIssue_79.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_79("LOCALMKTDATE_1970131418");
  msg.set(UnderlyingMaturityDate_79);
  UnderlyingInstrument_79.insert(UnderlyingMaturityDate_79.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_79("MONTHYEAR_2127511762");
  msg.set(UnderlyingMaturityMonthYear_79);
  UnderlyingInstrument_79.insert(UnderlyingMaturityMonthYear_79.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_79("TZTIMEONLY_361399323");
  msg.set(UnderlyingMaturityTime_79);
  UnderlyingInstrument_79.insert(UnderlyingMaturityTime_79.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_79;
  UnderlyingNotionalPercentageOutstanding_79.setString("44.450000");
  msg.set(UnderlyingNotionalPercentageOutstanding_79);
  UnderlyingInstrument_79.insert(UnderlyingNotionalPercentageOutstanding_79.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_79('1');
  msg.set(UnderlyingOptAttribute_79);
  UnderlyingInstrument_79.insert(UnderlyingOptAttribute_79.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_79;
  UnderlyingOriginalNotionalPercentageOutstanding_79.setString("21.930000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_79);
  UnderlyingInstrument_79.insert(UnderlyingOriginalNotionalPercentageOutstanding_79.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_79("STRING_1045289335");
  msg.set(UnderlyingPriceUnitOfMeasure_79);
  UnderlyingInstrument_79.insert(UnderlyingPriceUnitOfMeasure_79.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_79;
  UnderlyingPriceUnitOfMeasureQty_79.setString("1065759");
  msg.set(UnderlyingPriceUnitOfMeasureQty_79);
  UnderlyingInstrument_79.insert(UnderlyingPriceUnitOfMeasureQty_79.getString());
  FIX::UnderlyingProduct UnderlyingProduct_79(8439145);
  msg.set(UnderlyingProduct_79);
  UnderlyingInstrument_79.insert(UnderlyingProduct_79.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_79(1875960171);
  msg.set(UnderlyingPutOrCall_79);
  UnderlyingInstrument_79.insert(UnderlyingPutOrCall_79.getString());
  FIX::UnderlyingPx UnderlyingPx_79;
  UnderlyingPx_79.setString("11762273");
  msg.set(UnderlyingPx_79);
  UnderlyingInstrument_79.insert(UnderlyingPx_79.getString());
  FIX::UnderlyingQty UnderlyingQty_79;
  UnderlyingQty_79.setString("17202824");
  msg.set(UnderlyingQty_79);
  UnderlyingInstrument_79.insert(UnderlyingQty_79.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_79("LOCALMKTDATE_1873168158");
  msg.set(UnderlyingRedemptionDate_79);
  UnderlyingInstrument_79.insert(UnderlyingRedemptionDate_79.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_79("STRING_2005052548");
  msg.set(UnderlyingRepoCollateralSecurityType_79);
  UnderlyingInstrument_79.insert(UnderlyingRepoCollateralSecurityType_79.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_79;
  UnderlyingRepurchaseRate_79.setString("30.420000");
  msg.set(UnderlyingRepurchaseRate_79);
  UnderlyingInstrument_79.insert(UnderlyingRepurchaseRate_79.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_79(1840458040);
  msg.set(UnderlyingRepurchaseTerm_79);
  UnderlyingInstrument_79.insert(UnderlyingRepurchaseTerm_79.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_79("STRING_1828642262");
  msg.set(UnderlyingRestructuringType_79);
  UnderlyingInstrument_79.insert(UnderlyingRestructuringType_79.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_79("STRING_1542713122");
  msg.set(UnderlyingSecurityDesc_79);
  UnderlyingInstrument_79.insert(UnderlyingSecurityDesc_79.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_79("EXCHANGE_2057090431");
  msg.set(UnderlyingSecurityExchange_79);
  UnderlyingInstrument_79.insert(UnderlyingSecurityExchange_79.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_79("STRING_1576799700");
  msg.set(UnderlyingSecurityID_79);
  UnderlyingInstrument_79.insert(UnderlyingSecurityID_79.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_79("STRING_220176872");
  msg.set(UnderlyingSecurityIDSource_79);
  UnderlyingInstrument_79.insert(UnderlyingSecurityIDSource_79.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_79("STRING_1256354843");
  msg.set(UnderlyingSecuritySubType_79);
  UnderlyingInstrument_79.insert(UnderlyingSecuritySubType_79.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_79("STRING_120981108");
  msg.set(UnderlyingSecurityType_79);
  UnderlyingInstrument_79.insert(UnderlyingSecurityType_79.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_79("STRING_1461591589");
  msg.set(UnderlyingSeniority_79);
  UnderlyingInstrument_79.insert(UnderlyingSeniority_79.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_79("STRING_1423314278");
  msg.set(UnderlyingSettlMethod_79);
  UnderlyingInstrument_79.insert(UnderlyingSettlMethod_79.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_79(2);
  msg.set(UnderlyingSettlementType_79);
  UnderlyingInstrument_79.insert(UnderlyingSettlementType_79.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_79;
  UnderlyingStartValue_79.setString("4763000");
  msg.set(UnderlyingStartValue_79);
  UnderlyingInstrument_79.insert(UnderlyingStartValue_79.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_79("STRING_699961468");
  msg.set(UnderlyingStateOrProvinceOfIssue_79);
  UnderlyingInstrument_79.insert(UnderlyingStateOrProvinceOfIssue_79.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_79("GBP");
  msg.set(UnderlyingStrikeCurrency_79);
  UnderlyingInstrument_79.insert(UnderlyingStrikeCurrency_79.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_79;
  UnderlyingStrikePrice_79.setString("4233214");
  msg.set(UnderlyingStrikePrice_79);
  UnderlyingInstrument_79.insert(UnderlyingStrikePrice_79.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_79("STRING_1558680802");
  msg.set(UnderlyingSymbol_79);
  UnderlyingInstrument_79.insert(UnderlyingSymbol_79.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_79("STRING_251352856");
  msg.set(UnderlyingSymbolSfx_79);
  UnderlyingInstrument_79.insert(UnderlyingSymbolSfx_79.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_79("STRING_784720730");
  msg.set(UnderlyingTimeUnit_79);
  UnderlyingInstrument_79.insert(UnderlyingTimeUnit_79.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_79("STRING_1680455248");
  msg.set(UnderlyingUnitOfMeasure_79);
  UnderlyingInstrument_79.insert(UnderlyingUnitOfMeasure_79.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_79;
  UnderlyingUnitOfMeasureQty_79.setString("17757487");
  msg.set(UnderlyingUnitOfMeasureQty_79);
  UnderlyingInstrument_79.insert(UnderlyingUnitOfMeasureQty_79.getString());
  all_values.push_back(UnderlyingInstrument_79);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_154;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_154("STRING_578260935");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_154);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_154.insert(UnderlyingSecurityAltID_154.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_154("STRING_1882324700");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_154);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_154.insert(UnderlyingSecurityAltIDSource_154.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_154);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_137;
    FIX::UnderlyingStipType UnderlyingStipType_137("STRING_306737459");
    noUnderlyingStips_0_0.set(UnderlyingStipType_137);
    UnderlyingStipulations_NoUnderlyingStips_137.insert(UnderlyingStipType_137.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_137("STRING_911068378");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_137);
    UnderlyingStipulations_NoUnderlyingStips_137.insert(UnderlyingStipValue_137.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_137);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_138;
    FIX::UnderlyingStipType UnderlyingStipType_138("STRING_1769620880");
    noUnderlyingStips_0_1.set(UnderlyingStipType_138);
    UnderlyingStipulations_NoUnderlyingStips_138.insert(UnderlyingStipType_138.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_138("STRING_32421969");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_138);
    UnderlyingStipulations_NoUnderlyingStips_138.insert(UnderlyingStipValue_138.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_138);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_170;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_170("STRING_1367030275");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_170);
    UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyID_170.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_170('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_170);
    UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyIDSource_170.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_170(449795893);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_170);
    UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyRole_170.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_170);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_330("STRING_1782486792");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_330);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330.insert(UnderlyingInstrumentPartySubID_330.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_330(2026595593);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_330);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330.insert(UnderlyingInstrumentPartySubIDType_330.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_171;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_171("STRING_982436621");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_171);
    UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyID_171.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_171('8');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_171);
    UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyIDSource_171.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_171(93054);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_171);
    UndlyInstrumentParties_NoUndlyInstrumentParties_171.insert(UnderlyingInstrumentPartyRole_171.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_171);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_331("STRING_167188618");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_331);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331.insert(UnderlyingInstrumentPartySubID_331.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_331(923142876);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_331);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331.insert(UnderlyingInstrumentPartySubIDType_331.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_332("STRING_772844565");
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubID_332);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332.insert(UnderlyingInstrumentPartySubID_332.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_332(867150086);
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubIDType_332);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332.insert(UnderlyingInstrumentPartySubIDType_332.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_333("STRING_511692260");
      noUndlyInstrumentPartySubIDs_1_1_2.set(UnderlyingInstrumentPartySubID_333);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333.insert(UnderlyingInstrumentPartySubID_333.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_333(1044169307);
      noUndlyInstrumentPartySubIDs_1_1_2.set(UnderlyingInstrumentPartySubIDType_333);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333.insert(UnderlyingInstrumentPartySubIDType_333.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
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
