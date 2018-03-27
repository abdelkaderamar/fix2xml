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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassCancelReport msg;

  list<multiset<string>> all_values;
  multiset<string> OrderMassCancelReport_0;
  FIX::ClOrdID ClOrdID_39("STRING_155689167");
  msg.set(ClOrdID_39);
  OrderMassCancelReport_0.insert(ClOrdID_39.getString());
  FIX::EncodedText EncodedText_65("DATA_1330092576");
  msg.set(EncodedText_65);
  OrderMassCancelReport_0.insert(EncodedText_65.getString());
  FIX::EncodedTextLen EncodedTextLen_65(2026391208);
  msg.set(EncodedTextLen_65);
  OrderMassCancelReport_0.insert(EncodedTextLen_65.getString());
  FIX::MarketID MarketID_12("EXCHANGE_74201771");
  msg.set(MarketID_12);
  OrderMassCancelReport_0.insert(MarketID_12.getString());
  FIX::MarketSegmentID MarketSegmentID_12("STRING_346822224");
  msg.set(MarketSegmentID_12);
  OrderMassCancelReport_0.insert(MarketSegmentID_12.getString());
  FIX::MassActionReportID MassActionReportID_1("STRING_2053172688");
  msg.set(MassActionReportID_1);
  OrderMassCancelReport_0.insert(MassActionReportID_1.getString());
  FIX::MassCancelRejectReason MassCancelRejectReason_0(10);
  msg.set(MassCancelRejectReason_0);
  OrderMassCancelReport_0.insert(MassCancelRejectReason_0.getString());
  FIX::MassCancelRequestType MassCancelRequestType_0('9');
  msg.set(MassCancelRequestType_0);
  OrderMassCancelReport_0.insert(MassCancelRequestType_0.getString());
  FIX::MassCancelResponse MassCancelResponse_0('2');
  msg.set(MassCancelResponse_0);
  OrderMassCancelReport_0.insert(MassCancelResponse_0.getString());
  FIX::OrderID OrderID_29("STRING_1364471469");
  msg.set(OrderID_29);
  OrderMassCancelReport_0.insert(OrderID_29.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_37("STRING_1435111723");
  msg.set(SecondaryClOrdID_37);
  OrderMassCancelReport_0.insert(SecondaryClOrdID_37.getString());
  FIX::SecondaryOrderID SecondaryOrderID_22("STRING_2085425572");
  msg.set(SecondaryOrderID_22);
  OrderMassCancelReport_0.insert(SecondaryOrderID_22.getString());
  FIX::Side Side_35('4');
  msg.set(Side_35);
  OrderMassCancelReport_0.insert(Side_35.getString());
  FIX::Text Text_65("STRING_1072205070");
  msg.set(Text_65);
  OrderMassCancelReport_0.insert(Text_65.getString());
  FIX::TotalAffectedOrders TotalAffectedOrders_1(119192131);
  msg.set(TotalAffectedOrders_1);
  OrderMassCancelReport_0.insert(TotalAffectedOrders_1.getString());
  FIX::TradingSessionID TradingSessionID_53("STRING_6");
  msg.set(TradingSessionID_53);
  OrderMassCancelReport_0.insert(TradingSessionID_53.getString());
  FIX::TradingSessionSubID TradingSessionSubID_53("STRING_5");
  msg.set(TradingSessionSubID_53);
  OrderMassCancelReport_0.insert(TradingSessionSubID_53.getString());
  FIX::TransactTime TransactTime_41(FIX::UTCTIMESTAMP(2, 7, 15, 23, 102011));
  msg.set(TransactTime_41);
  OrderMassCancelReport_0.insert(TransactTime_41.getString());
  all_values.push_back(OrderMassCancelReport_0);

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_2;
    FIX::AffectedOrderID AffectedOrderID_2("STRING_1922448939");
    noAffectedOrders_0_0.set(AffectedOrderID_2);
    AffectedOrdGrp_NoAffectedOrders_2.insert(AffectedOrderID_2.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_2("STRING_582382930");
    noAffectedOrders_0_0.set(AffectedSecondaryOrderID_2);
    AffectedOrdGrp_NoAffectedOrders_2.insert(AffectedSecondaryOrderID_2.getString());
    FIX::OrigClOrdID OrigClOrdID_14("STRING_1755786262");
    noAffectedOrders_0_0.set(OrigClOrdID_14);
    AffectedOrdGrp_NoAffectedOrders_2.insert(OrigClOrdID_14.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_2);

    msg.addGroup(noAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_1;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_3;
    FIX::AffectedOrderID AffectedOrderID_3("STRING_1907845707");
    noAffectedOrders_0_1.set(AffectedOrderID_3);
    AffectedOrdGrp_NoAffectedOrders_3.insert(AffectedOrderID_3.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_3("STRING_2093002595");
    noAffectedOrders_0_1.set(AffectedSecondaryOrderID_3);
    AffectedOrdGrp_NoAffectedOrders_3.insert(AffectedSecondaryOrderID_3.getString());
    FIX::OrigClOrdID OrigClOrdID_15("STRING_1894864366");
    noAffectedOrders_0_1.set(OrigClOrdID_15);
    AffectedOrdGrp_NoAffectedOrders_3.insert(OrigClOrdID_15.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_3);

    msg.addGroup(noAffectedOrders_0_1);
  }
  // Instrument
  multiset<string> Instrument_49;
  FIX::AttachmentPoint AttachmentPoint_49;
  AttachmentPoint_49.setString("48.750000");
  msg.set(AttachmentPoint_49);
  Instrument_49.insert(AttachmentPoint_49.getString());
  FIX::CFICode CFICode_49("STRING_1275611523");
  msg.set(CFICode_49);
  Instrument_49.insert(CFICode_49.getString());
  FIX::CPProgram CPProgram_49(99);
  msg.set(CPProgram_49);
  Instrument_49.insert(CPProgram_49.getString());
  FIX::CPRegType CPRegType_49("STRING_2137736646");
  msg.set(CPRegType_49);
  Instrument_49.insert(CPRegType_49.getString());
  FIX::CapPrice CapPrice_49;
  CapPrice_49.setString("16224337");
  msg.set(CapPrice_49);
  Instrument_49.insert(CapPrice_49.getString());
  FIX::ContractMultiplier ContractMultiplier_49;
  ContractMultiplier_49.setString("16794609");
  msg.set(ContractMultiplier_49);
  Instrument_49.insert(ContractMultiplier_49.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_49(0);
  msg.set(ContractMultiplierUnit_49);
  Instrument_49.insert(ContractMultiplierUnit_49.getString());
  FIX::ContractSettlMonth ContractSettlMonth_49("MONTHYEAR_539686372");
  msg.set(ContractSettlMonth_49);
  Instrument_49.insert(ContractSettlMonth_49.getString());
  FIX::CountryOfIssue CountryOfIssue_49("COUNTRY_683897453");
  msg.set(CountryOfIssue_49);
  Instrument_49.insert(CountryOfIssue_49.getString());
  FIX::CouponPaymentDate CouponPaymentDate_49("LOCALMKTDATE_677471527");
  msg.set(CouponPaymentDate_49);
  Instrument_49.insert(CouponPaymentDate_49.getString());
  FIX::CouponRate CouponRate_49;
  CouponRate_49.setString("80.950000");
  msg.set(CouponRate_49);
  Instrument_49.insert(CouponRate_49.getString());
  FIX::CreditRating CreditRating_49("STRING_621839378");
  msg.set(CreditRating_49);
  Instrument_49.insert(CreditRating_49.getString());
  FIX::DatedDate DatedDate_49("LOCALMKTDATE_335341003");
  msg.set(DatedDate_49);
  Instrument_49.insert(DatedDate_49.getString());
  FIX::DetachmentPoint DetachmentPoint_49;
  DetachmentPoint_49.setString("95.170000");
  msg.set(DetachmentPoint_49);
  Instrument_49.insert(DetachmentPoint_49.getString());
  FIX::EncodedIssuer EncodedIssuer_49("DATA_741031509");
  msg.set(EncodedIssuer_49);
  Instrument_49.insert(EncodedIssuer_49.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_49(1320055368);
  msg.set(EncodedIssuerLen_49);
  Instrument_49.insert(EncodedIssuerLen_49.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_49("DATA_2116125149");
  msg.set(EncodedSecurityDesc_49);
  Instrument_49.insert(EncodedSecurityDesc_49.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_49(176135604);
  msg.set(EncodedSecurityDescLen_49);
  Instrument_49.insert(EncodedSecurityDescLen_49.getString());
  FIX::ExerciseStyle ExerciseStyle_49(1);
  msg.set(ExerciseStyle_49);
  Instrument_49.insert(ExerciseStyle_49.getString());
  FIX::Factor Factor_49;
  Factor_49.setString("139130");
  msg.set(Factor_49);
  Instrument_49.insert(Factor_49.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_49(false);
  msg.set(FlexProductEligibilityIndicator_49);
  Instrument_49.insert(FlexProductEligibilityIndicator_49.getString());
  FIX::FlexibleIndicator FlexibleIndicator_49(true);
  msg.set(FlexibleIndicator_49);
  Instrument_49.insert(FlexibleIndicator_49.getString());
  FIX::FloorPrice FloorPrice_49;
  FloorPrice_49.setString("10719356");
  msg.set(FloorPrice_49);
  Instrument_49.insert(FloorPrice_49.getString());
  FIX::FlowScheduleType FlowScheduleType_49(1);
  msg.set(FlowScheduleType_49);
  Instrument_49.insert(FlowScheduleType_49.getString());
  FIX::InstrRegistry InstrRegistry_49("STRING_401321314");
  msg.set(InstrRegistry_49);
  Instrument_49.insert(InstrRegistry_49.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_49('8');
  msg.set(InstrmtAssignmentMethod_49);
  Instrument_49.insert(InstrmtAssignmentMethod_49.getString());
  FIX::InterestAccrualDate InterestAccrualDate_49("LOCALMKTDATE_351486023");
  msg.set(InterestAccrualDate_49);
  Instrument_49.insert(InterestAccrualDate_49.getString());
  FIX::IssueDate IssueDate_49("LOCALMKTDATE_9623928");
  msg.set(IssueDate_49);
  Instrument_49.insert(IssueDate_49.getString());
  FIX::Issuer Issuer_49("STRING_607262968");
  msg.set(Issuer_49);
  Instrument_49.insert(Issuer_49.getString());
  FIX::ListMethod ListMethod_49(1);
  msg.set(ListMethod_49);
  Instrument_49.insert(ListMethod_49.getString());
  FIX::LocaleOfIssue LocaleOfIssue_49("STRING_1904488294");
  msg.set(LocaleOfIssue_49);
  Instrument_49.insert(LocaleOfIssue_49.getString());
  FIX::MaturityDate MaturityDate_49("LOCALMKTDATE_523314195");
  msg.set(MaturityDate_49);
  Instrument_49.insert(MaturityDate_49.getString());
  FIX::MaturityMonthYear MaturityMonthYear_49("MONTHYEAR_1572616494");
  msg.set(MaturityMonthYear_49);
  Instrument_49.insert(MaturityMonthYear_49.getString());
  FIX::MaturityTime MaturityTime_49("TZTIMEONLY_1530776572");
  msg.set(MaturityTime_49);
  Instrument_49.insert(MaturityTime_49.getString());
  FIX::MinPriceIncrement MinPriceIncrement_49;
  MinPriceIncrement_49.setString("5135671");
  msg.set(MinPriceIncrement_49);
  Instrument_49.insert(MinPriceIncrement_49.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_49;
  MinPriceIncrementAmount_49.setString("10475665");
  msg.set(MinPriceIncrementAmount_49);
  Instrument_49.insert(MinPriceIncrementAmount_49.getString());
  FIX::NTPositionLimit NTPositionLimit_49(1062753890);
  msg.set(NTPositionLimit_49);
  Instrument_49.insert(NTPositionLimit_49.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_49;
  NotionalPercentageOutstanding_49.setString("9.000000");
  msg.set(NotionalPercentageOutstanding_49);
  Instrument_49.insert(NotionalPercentageOutstanding_49.getString());
  FIX::OptAttribute OptAttribute_49('1');
  msg.set(OptAttribute_49);
  Instrument_49.insert(OptAttribute_49.getString());
  FIX::OptPayoutAmount OptPayoutAmount_49;
  OptPayoutAmount_49.setString("17466513");
  msg.set(OptPayoutAmount_49);
  Instrument_49.insert(OptPayoutAmount_49.getString());
  FIX::OptPayoutType OptPayoutType_49(3);
  msg.set(OptPayoutType_49);
  Instrument_49.insert(OptPayoutType_49.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_49;
  OriginalNotionalPercentageOutstanding_49.setString("74.130000");
  msg.set(OriginalNotionalPercentageOutstanding_49);
  Instrument_49.insert(OriginalNotionalPercentageOutstanding_49.getString());
  FIX::Pool Pool_49("STRING_221007074");
  msg.set(Pool_49);
  Instrument_49.insert(Pool_49.getString());
  FIX::PositionLimit PositionLimit_49(839379783);
  msg.set(PositionLimit_49);
  Instrument_49.insert(PositionLimit_49.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_49("STRING_INT");
  msg.set(PriceQuoteMethod_49);
  Instrument_49.insert(PriceQuoteMethod_49.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_49("STRING_962038583");
  msg.set(PriceUnitOfMeasure_49);
  Instrument_49.insert(PriceUnitOfMeasure_49.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_49;
  PriceUnitOfMeasureQty_49.setString("119515");
  msg.set(PriceUnitOfMeasureQty_49);
  Instrument_49.insert(PriceUnitOfMeasureQty_49.getString());
  FIX::Product Product_51(12);
  msg.set(Product_51);
  Instrument_49.insert(Product_51.getString());
  FIX::ProductComplex ProductComplex_49("STRING_1138174188");
  msg.set(ProductComplex_49);
  Instrument_49.insert(ProductComplex_49.getString());
  FIX::PutOrCall PutOrCall_49(0);
  msg.set(PutOrCall_49);
  Instrument_49.insert(PutOrCall_49.getString());
  FIX::RedemptionDate RedemptionDate_49("LOCALMKTDATE_149157792");
  msg.set(RedemptionDate_49);
  Instrument_49.insert(RedemptionDate_49.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_49("STRING_1611575727");
  msg.set(RepoCollateralSecurityType_49);
  Instrument_49.insert(RepoCollateralSecurityType_49.getString());
  FIX::RepurchaseRate RepurchaseRate_49;
  RepurchaseRate_49.setString("64.520000");
  msg.set(RepurchaseRate_49);
  Instrument_49.insert(RepurchaseRate_49.getString());
  FIX::RepurchaseTerm RepurchaseTerm_49(1221093410);
  msg.set(RepurchaseTerm_49);
  Instrument_49.insert(RepurchaseTerm_49.getString());
  FIX::RestructuringType RestructuringType_49("STRING_FR");
  msg.set(RestructuringType_49);
  Instrument_49.insert(RestructuringType_49.getString());
  FIX::SecurityDesc SecurityDesc_49("STRING_1218197766");
  msg.set(SecurityDesc_49);
  Instrument_49.insert(SecurityDesc_49.getString());
  FIX::SecurityExchange SecurityExchange_49("EXCHANGE_2067994319");
  msg.set(SecurityExchange_49);
  Instrument_49.insert(SecurityExchange_49.getString());
  FIX::SecurityGroup SecurityGroup_49("STRING_1732164844");
  msg.set(SecurityGroup_49);
  Instrument_49.insert(SecurityGroup_49.getString());
  FIX::SecurityID SecurityID_49("STRING_1227821695");
  msg.set(SecurityID_49);
  Instrument_49.insert(SecurityID_49.getString());
  FIX::SecurityIDSource SecurityIDSource_49("STRING_K");
  msg.set(SecurityIDSource_49);
  Instrument_49.insert(SecurityIDSource_49.getString());
  FIX::SecurityStatus SecurityStatus_49("STRING_2");
  msg.set(SecurityStatus_49);
  Instrument_49.insert(SecurityStatus_49.getString());
  FIX::SecuritySubType SecuritySubType_50("STRING_984826341");
  msg.set(SecuritySubType_50);
  Instrument_49.insert(SecuritySubType_50.getString());
  FIX::SecurityType SecurityType_51("STRING_FAC");
  msg.set(SecurityType_51);
  Instrument_49.insert(SecurityType_51.getString());
  FIX::Seniority Seniority_49("STRING_SB");
  msg.set(Seniority_49);
  Instrument_49.insert(Seniority_49.getString());
  FIX::SettlMethod SettlMethod_49('C');
  msg.set(SettlMethod_49);
  Instrument_49.insert(SettlMethod_49.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_49("STRING_1564655029");
  msg.set(SettleOnOpenFlag_49);
  Instrument_49.insert(SettleOnOpenFlag_49.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_49("STRING_354385608");
  msg.set(StateOrProvinceOfIssue_49);
  Instrument_49.insert(StateOrProvinceOfIssue_49.getString());
  FIX::StrikeCurrency StrikeCurrency_49("EUR");
  msg.set(StrikeCurrency_49);
  Instrument_49.insert(StrikeCurrency_49.getString());
  FIX::StrikeMultiplier StrikeMultiplier_49;
  StrikeMultiplier_49.setString("19416385");
  msg.set(StrikeMultiplier_49);
  Instrument_49.insert(StrikeMultiplier_49.getString());
  FIX::StrikePrice StrikePrice_49;
  StrikePrice_49.setString("10300408");
  msg.set(StrikePrice_49);
  Instrument_49.insert(StrikePrice_49.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_49(2);
  msg.set(StrikePriceBoundaryMethod_49);
  Instrument_49.insert(StrikePriceBoundaryMethod_49.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_49;
  StrikePriceBoundaryPrecision_49.setString("23.400000");
  msg.set(StrikePriceBoundaryPrecision_49);
  Instrument_49.insert(StrikePriceBoundaryPrecision_49.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_49(3);
  msg.set(StrikePriceDeterminationMethod_49);
  Instrument_49.insert(StrikePriceDeterminationMethod_49.getString());
  FIX::StrikeValue StrikeValue_49;
  StrikeValue_49.setString("5871571");
  msg.set(StrikeValue_49);
  Instrument_49.insert(StrikeValue_49.getString());
  FIX::Symbol Symbol_49("STRING_1375325622");
  msg.set(Symbol_49);
  Instrument_49.insert(Symbol_49.getString());
  FIX::SymbolSfx SymbolSfx_49("STRING_CD");
  msg.set(SymbolSfx_49);
  Instrument_49.insert(SymbolSfx_49.getString());
  FIX::TimeUnit TimeUnit_49("STRING_Min");
  msg.set(TimeUnit_49);
  Instrument_49.insert(TimeUnit_49.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_49(3);
  msg.set(UnderlyingPriceDeterminationMethod_49);
  Instrument_49.insert(UnderlyingPriceDeterminationMethod_49.getString());
  FIX::UnitOfMeasure UnitOfMeasure_49("STRING_oz_tr");
  msg.set(UnitOfMeasure_49);
  Instrument_49.insert(UnitOfMeasure_49.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_49;
  UnitOfMeasureQty_49.setString("14565407");
  msg.set(UnitOfMeasureQty_49);
  Instrument_49.insert(UnitOfMeasureQty_49.getString());
  FIX::ValuationMethod ValuationMethod_49("STRING_CDS");
  msg.set(ValuationMethod_49);
  Instrument_49.insert(ValuationMethod_49.getString());
  all_values.push_back(Instrument_49);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_95;
    FIX::ComplexEventCondition ComplexEventCondition_95(2);
    noComplexEvents_0_0.set(ComplexEventCondition_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventCondition_95.getString());
    FIX::ComplexEventPrice ComplexEventPrice_95;
    ComplexEventPrice_95.setString("7333379");
    noComplexEvents_0_0.set(ComplexEventPrice_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPrice_95.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_95(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceBoundaryMethod_95.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_95;
    ComplexEventPriceBoundaryPrecision_95.setString("12.890000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceBoundaryPrecision_95.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_95(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceTimeType_95.getString());
    FIX::ComplexEventType ComplexEventType_95(2);
    noComplexEvents_0_0.set(ComplexEventType_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventType_95.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_95;
    ComplexOptPayoutAmount_95.setString("4244693");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexOptPayoutAmount_95.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_95);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_197;
      FIX::ComplexEventEndDate ComplexEventEndDate_197(FIX::UTCTIMESTAMP(6, 57, 6, 4, 112006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_197);
      ComplexEventDates_NoComplexEventDates_197.insert(ComplexEventEndDate_197.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_197(FIX::UTCTIMESTAMP(16, 41, 45, 21, 62017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_197);
      ComplexEventDates_NoComplexEventDates_197.insert(ComplexEventStartDate_197.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_197);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_385;
        FIX::ComplexEventEndTime ComplexEventEndTime_385(FIX::UTCTIMEONLY(13, 10, 53));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_385);
        ComplexEventTimes_NoComplexEventTimes_385.insert(ComplexEventEndTime_385.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_385(FIX::UTCTIMEONLY(4, 23, 17));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_385);
        ComplexEventTimes_NoComplexEventTimes_385.insert(ComplexEventStartTime_385.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_385);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_386;
        FIX::ComplexEventEndTime ComplexEventEndTime_386(FIX::UTCTIMEONLY(19, 59, 45));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_386);
        ComplexEventTimes_NoComplexEventTimes_386.insert(ComplexEventEndTime_386.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_386(FIX::UTCTIMEONLY(1, 41, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_386);
        ComplexEventTimes_NoComplexEventTimes_386.insert(ComplexEventStartTime_386.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_386);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassCancelReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_98;
    FIX::EventDate EventDate_98("LOCALMKTDATE_145583031");
    noEvents_0_0.set(EventDate_98);
    EvntGrp_NoEvents_98.insert(EventDate_98.getString());
    FIX::EventPx EventPx_98;
    EventPx_98.setString("7887221");
    noEvents_0_0.set(EventPx_98);
    EvntGrp_NoEvents_98.insert(EventPx_98.getString());
    FIX::EventText EventText_98("STRING_560150768");
    noEvents_0_0.set(EventText_98);
    EvntGrp_NoEvents_98.insert(EventText_98.getString());
    FIX::EventTime EventTime_98(FIX::UTCTIMESTAMP(17, 3, 20, 25, 12015));
    noEvents_0_0.set(EventTime_98);
    EvntGrp_NoEvents_98.insert(EventTime_98.getString());
    FIX::EventType EventType_98(7);
    noEvents_0_0.set(EventType_98);
    EvntGrp_NoEvents_98.insert(EventType_98.getString());
    all_values.push_back(EvntGrp_NoEvents_98);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_99;
    FIX::EventDate EventDate_99("LOCALMKTDATE_590575469");
    noEvents_0_1.set(EventDate_99);
    EvntGrp_NoEvents_99.insert(EventDate_99.getString());
    FIX::EventPx EventPx_99;
    EventPx_99.setString("19740900");
    noEvents_0_1.set(EventPx_99);
    EvntGrp_NoEvents_99.insert(EventPx_99.getString());
    FIX::EventText EventText_99("STRING_907208728");
    noEvents_0_1.set(EventText_99);
    EvntGrp_NoEvents_99.insert(EventText_99.getString());
    FIX::EventTime EventTime_99(FIX::UTCTIMESTAMP(2, 30, 50, 9, 122001));
    noEvents_0_1.set(EventTime_99);
    EvntGrp_NoEvents_99.insert(EventTime_99.getString());
    FIX::EventType EventType_99(15);
    noEvents_0_1.set(EventType_99);
    EvntGrp_NoEvents_99.insert(EventType_99.getString());
    all_values.push_back(EvntGrp_NoEvents_99);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_90;
    FIX::InstrumentPartyID InstrumentPartyID_90("STRING_1917535857");
    noInstrumentParties_0_0.set(InstrumentPartyID_90);
    InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyID_90.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_90('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_90);
    InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyIDSource_90.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_90(1298581051);
    noInstrumentParties_0_0.set(InstrumentPartyRole_90);
    InstrumentParties_NoInstrumentParties_90.insert(InstrumentPartyRole_90.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_90);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180;
      FIX::InstrumentPartySubID InstrumentPartySubID_180("STRING_1495840050");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_180);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180.insert(InstrumentPartySubID_180.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_180(34868405);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_180);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180.insert(InstrumentPartySubIDType_180.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181;
      FIX::InstrumentPartySubID InstrumentPartySubID_181("STRING_2142904980");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_181);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181.insert(InstrumentPartySubID_181.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_181(1234256492);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_181);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181.insert(InstrumentPartySubIDType_181.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_91;
    FIX::InstrumentPartyID InstrumentPartyID_91("STRING_180451436");
    noInstrumentParties_0_1.set(InstrumentPartyID_91);
    InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyID_91.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_91('7');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_91);
    InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyIDSource_91.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_91(1794407261);
    noInstrumentParties_0_1.set(InstrumentPartyRole_91);
    InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyRole_91.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_91);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182;
      FIX::InstrumentPartySubID InstrumentPartySubID_182("STRING_1075263480");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_182);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182.insert(InstrumentPartySubID_182.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_182(1383194316);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_182);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182.insert(InstrumentPartySubIDType_182.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_96;
    FIX::SecurityAltID SecurityAltID_96("STRING_112519945");
    noSecurityAltID_0_0.set(SecurityAltID_96);
    SecAltIDGrp_NoSecurityAltID_96.insert(SecurityAltID_96.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_96("STRING_1942256232");
    noSecurityAltID_0_0.set(SecurityAltIDSource_96);
    SecAltIDGrp_NoSecurityAltID_96.insert(SecurityAltIDSource_96.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_96);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_98;
  FIX::SecurityXML SecurityXML_99("XMLDATA_1571964981");
  msg.set(SecurityXML_99);
  FIX::SecurityXMLLen SecurityXMLLen_49(1938657591);
  msg.set(SecurityXMLLen_49);
  FIX::SecurityXMLSchema SecurityXMLSchema_49("STRING_385348053");
  msg.set(SecurityXMLSchema_49);
  SecurityXML_98.insert(SecurityXMLSchema_49.getString());
  all_values.push_back(SecurityXML_98);

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_2;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_2("STRING_698382672");
    noNotAffectedOrders_0_0.set(NotAffOrigClOrdID_2);
    NotAffectedOrdersGrp_NoNotAffectedOrders_2.insert(NotAffOrigClOrdID_2.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_2("STRING_235279049");
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
    multiset<string> Parties_NoPartyIDs_90;
    FIX::PartyID PartyID_90("STRING_1285771182");
    noPartyIDs_0_0.set(PartyID_90);
    Parties_NoPartyIDs_90.insert(PartyID_90.getString());
    FIX::PartyIDSource PartyIDSource_90('3');
    noPartyIDs_0_0.set(PartyIDSource_90);
    Parties_NoPartyIDs_90.insert(PartyIDSource_90.getString());
    FIX::PartyRole PartyRole_90(75);
    noPartyIDs_0_0.set(PartyRole_90);
    Parties_NoPartyIDs_90.insert(PartyRole_90.getString());
    all_values.push_back(Parties_NoPartyIDs_90);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_176;
      FIX::PartySubID PartySubID_176("STRING_1757163393");
      noPartySubIDs_0_1_0.set(PartySubID_176);
      PtysSubGrp_NoPartySubIDs_176.insert(PartySubID_176.getString());
      FIX::PartySubIDType PartySubIDType_176(14);
      noPartySubIDs_0_1_0.set(PartySubIDType_176);
      PtysSubGrp_NoPartySubIDs_176.insert(PartySubIDType_176.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_176);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_5;
    FIX::TargetPartyID TargetPartyID_5("STRING_1527215602");
    noTargetPartyIDs_0_0.set(TargetPartyID_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyID_5.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_5('9');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyIDSource_5.getString());
    FIX::TargetPartyRole TargetPartyRole_5(852773335);
    noTargetPartyIDs_0_0.set(TargetPartyRole_5);
    TargetParties_NoTargetPartyIDs_5.insert(TargetPartyRole_5.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_5);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_6;
    FIX::TargetPartyID TargetPartyID_6("STRING_819141237");
    noTargetPartyIDs_0_1.set(TargetPartyID_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyID_6.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_6('3');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyIDSource_6.getString());
    FIX::TargetPartyRole TargetPartyRole_6(887641740);
    noTargetPartyIDs_0_1.set(TargetPartyRole_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyRole_6.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_6);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_7;
    FIX::TargetPartyID TargetPartyID_7("STRING_814562570");
    noTargetPartyIDs_0_2.set(TargetPartyID_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyID_7.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_7('1');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyIDSource_7.getString());
    FIX::TargetPartyRole TargetPartyRole_7(1068093177);
    noTargetPartyIDs_0_2.set(TargetPartyRole_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyRole_7.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_7);

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_76;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_76("DATA_1598706057");
  msg.set(EncodedUnderlyingIssuer_76);
  UnderlyingInstrument_76.insert(EncodedUnderlyingIssuer_76.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_76(1187155317);
  msg.set(EncodedUnderlyingIssuerLen_76);
  UnderlyingInstrument_76.insert(EncodedUnderlyingIssuerLen_76.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_76("DATA_1024058941");
  msg.set(EncodedUnderlyingSecurityDesc_76);
  UnderlyingInstrument_76.insert(EncodedUnderlyingSecurityDesc_76.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_76(526485889);
  msg.set(EncodedUnderlyingSecurityDescLen_76);
  UnderlyingInstrument_76.insert(EncodedUnderlyingSecurityDescLen_76.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_76;
  UnderlyingAdjustedQuantity_76.setString("4228659");
  msg.set(UnderlyingAdjustedQuantity_76);
  UnderlyingInstrument_76.insert(UnderlyingAdjustedQuantity_76.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_76;
  UnderlyingAllocationPercent_76.setString("34.850000");
  msg.set(UnderlyingAllocationPercent_76);
  UnderlyingInstrument_76.insert(UnderlyingAllocationPercent_76.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_76;
  UnderlyingAttachmentPoint_76.setString("58.340000");
  msg.set(UnderlyingAttachmentPoint_76);
  UnderlyingInstrument_76.insert(UnderlyingAttachmentPoint_76.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_76("STRING_217638569");
  msg.set(UnderlyingCFICode_76);
  UnderlyingInstrument_76.insert(UnderlyingCFICode_76.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_76("STRING_1240824818");
  msg.set(UnderlyingCPProgram_76);
  UnderlyingInstrument_76.insert(UnderlyingCPProgram_76.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_76("STRING_430179777");
  msg.set(UnderlyingCPRegType_76);
  UnderlyingInstrument_76.insert(UnderlyingCPRegType_76.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_76;
  UnderlyingCapValue_76.setString("6029866");
  msg.set(UnderlyingCapValue_76);
  UnderlyingInstrument_76.insert(UnderlyingCapValue_76.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_76;
  UnderlyingCashAmount_76.setString("4919125");
  msg.set(UnderlyingCashAmount_76);
  UnderlyingInstrument_76.insert(UnderlyingCashAmount_76.getString());
  FIX::UnderlyingCashType UnderlyingCashType_76("STRING_DIFF");
  msg.set(UnderlyingCashType_76);
  UnderlyingInstrument_76.insert(UnderlyingCashType_76.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_76;
  UnderlyingContractMultiplier_76.setString("8382656");
  msg.set(UnderlyingContractMultiplier_76);
  UnderlyingInstrument_76.insert(UnderlyingContractMultiplier_76.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_76(829619047);
  msg.set(UnderlyingContractMultiplierUnit_76);
  UnderlyingInstrument_76.insert(UnderlyingContractMultiplierUnit_76.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_76("COUNTRY_266849984");
  msg.set(UnderlyingCountryOfIssue_76);
  UnderlyingInstrument_76.insert(UnderlyingCountryOfIssue_76.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_76("LOCALMKTDATE_1693401651");
  msg.set(UnderlyingCouponPaymentDate_76);
  UnderlyingInstrument_76.insert(UnderlyingCouponPaymentDate_76.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_76;
  UnderlyingCouponRate_76.setString("65.880000");
  msg.set(UnderlyingCouponRate_76);
  UnderlyingInstrument_76.insert(UnderlyingCouponRate_76.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_76("STRING_1129246529");
  msg.set(UnderlyingCreditRating_76);
  UnderlyingInstrument_76.insert(UnderlyingCreditRating_76.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_76("CAN");
  msg.set(UnderlyingCurrency_76);
  UnderlyingInstrument_76.insert(UnderlyingCurrency_76.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_76;
  UnderlyingCurrentValue_76.setString("6834388");
  msg.set(UnderlyingCurrentValue_76);
  UnderlyingInstrument_76.insert(UnderlyingCurrentValue_76.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_76;
  UnderlyingDetachmentPoint_76.setString("33.500000");
  msg.set(UnderlyingDetachmentPoint_76);
  UnderlyingInstrument_76.insert(UnderlyingDetachmentPoint_76.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_76;
  UnderlyingDirtyPrice_76.setString("12131489");
  msg.set(UnderlyingDirtyPrice_76);
  UnderlyingInstrument_76.insert(UnderlyingDirtyPrice_76.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_76;
  UnderlyingEndPrice_76.setString("15362121");
  msg.set(UnderlyingEndPrice_76);
  UnderlyingInstrument_76.insert(UnderlyingEndPrice_76.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_76;
  UnderlyingEndValue_76.setString("15019545");
  msg.set(UnderlyingEndValue_76);
  UnderlyingInstrument_76.insert(UnderlyingEndValue_76.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_76(1519124144);
  msg.set(UnderlyingExerciseStyle_76);
  UnderlyingInstrument_76.insert(UnderlyingExerciseStyle_76.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_76;
  UnderlyingFXRate_76.setString("2763702");
  msg.set(UnderlyingFXRate_76);
  UnderlyingInstrument_76.insert(UnderlyingFXRate_76.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_76('M');
  msg.set(UnderlyingFXRateCalc_76);
  UnderlyingInstrument_76.insert(UnderlyingFXRateCalc_76.getString());
  FIX::UnderlyingFactor UnderlyingFactor_76;
  UnderlyingFactor_76.setString("9118722");
  msg.set(UnderlyingFactor_76);
  UnderlyingInstrument_76.insert(UnderlyingFactor_76.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_76(1344463418);
  msg.set(UnderlyingFlowScheduleType_76);
  UnderlyingInstrument_76.insert(UnderlyingFlowScheduleType_76.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_76("STRING_1767739566");
  msg.set(UnderlyingInstrRegistry_76);
  UnderlyingInstrument_76.insert(UnderlyingInstrRegistry_76.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_76("LOCALMKTDATE_2099027517");
  msg.set(UnderlyingIssueDate_76);
  UnderlyingInstrument_76.insert(UnderlyingIssueDate_76.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_76("STRING_221038711");
  msg.set(UnderlyingIssuer_76);
  UnderlyingInstrument_76.insert(UnderlyingIssuer_76.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_76("STRING_146741807");
  msg.set(UnderlyingLocaleOfIssue_76);
  UnderlyingInstrument_76.insert(UnderlyingLocaleOfIssue_76.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_76("LOCALMKTDATE_374409854");
  msg.set(UnderlyingMaturityDate_76);
  UnderlyingInstrument_76.insert(UnderlyingMaturityDate_76.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_76("MONTHYEAR_2037382196");
  msg.set(UnderlyingMaturityMonthYear_76);
  UnderlyingInstrument_76.insert(UnderlyingMaturityMonthYear_76.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_76("TZTIMEONLY_785747641");
  msg.set(UnderlyingMaturityTime_76);
  UnderlyingInstrument_76.insert(UnderlyingMaturityTime_76.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_76;
  UnderlyingNotionalPercentageOutstanding_76.setString("84.230000");
  msg.set(UnderlyingNotionalPercentageOutstanding_76);
  UnderlyingInstrument_76.insert(UnderlyingNotionalPercentageOutstanding_76.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_76('1');
  msg.set(UnderlyingOptAttribute_76);
  UnderlyingInstrument_76.insert(UnderlyingOptAttribute_76.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_76;
  UnderlyingOriginalNotionalPercentageOutstanding_76.setString("74.190000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_76);
  UnderlyingInstrument_76.insert(UnderlyingOriginalNotionalPercentageOutstanding_76.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_76("STRING_1195035045");
  msg.set(UnderlyingPriceUnitOfMeasure_76);
  UnderlyingInstrument_76.insert(UnderlyingPriceUnitOfMeasure_76.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_76;
  UnderlyingPriceUnitOfMeasureQty_76.setString("16226358");
  msg.set(UnderlyingPriceUnitOfMeasureQty_76);
  UnderlyingInstrument_76.insert(UnderlyingPriceUnitOfMeasureQty_76.getString());
  FIX::UnderlyingProduct UnderlyingProduct_76(197006220);
  msg.set(UnderlyingProduct_76);
  UnderlyingInstrument_76.insert(UnderlyingProduct_76.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_76(2033300716);
  msg.set(UnderlyingPutOrCall_76);
  UnderlyingInstrument_76.insert(UnderlyingPutOrCall_76.getString());
  FIX::UnderlyingPx UnderlyingPx_76;
  UnderlyingPx_76.setString("3047712");
  msg.set(UnderlyingPx_76);
  UnderlyingInstrument_76.insert(UnderlyingPx_76.getString());
  FIX::UnderlyingQty UnderlyingQty_76;
  UnderlyingQty_76.setString("4638562");
  msg.set(UnderlyingQty_76);
  UnderlyingInstrument_76.insert(UnderlyingQty_76.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_76("LOCALMKTDATE_1579218719");
  msg.set(UnderlyingRedemptionDate_76);
  UnderlyingInstrument_76.insert(UnderlyingRedemptionDate_76.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_76("STRING_727537877");
  msg.set(UnderlyingRepoCollateralSecurityType_76);
  UnderlyingInstrument_76.insert(UnderlyingRepoCollateralSecurityType_76.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_76;
  UnderlyingRepurchaseRate_76.setString("27.340000");
  msg.set(UnderlyingRepurchaseRate_76);
  UnderlyingInstrument_76.insert(UnderlyingRepurchaseRate_76.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_76(734816467);
  msg.set(UnderlyingRepurchaseTerm_76);
  UnderlyingInstrument_76.insert(UnderlyingRepurchaseTerm_76.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_76("STRING_983068000");
  msg.set(UnderlyingRestructuringType_76);
  UnderlyingInstrument_76.insert(UnderlyingRestructuringType_76.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_76("STRING_129057899");
  msg.set(UnderlyingSecurityDesc_76);
  UnderlyingInstrument_76.insert(UnderlyingSecurityDesc_76.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_76("EXCHANGE_1417629817");
  msg.set(UnderlyingSecurityExchange_76);
  UnderlyingInstrument_76.insert(UnderlyingSecurityExchange_76.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_76("STRING_48733285");
  msg.set(UnderlyingSecurityID_76);
  UnderlyingInstrument_76.insert(UnderlyingSecurityID_76.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_76("STRING_1665270048");
  msg.set(UnderlyingSecurityIDSource_76);
  UnderlyingInstrument_76.insert(UnderlyingSecurityIDSource_76.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_76("STRING_772100757");
  msg.set(UnderlyingSecuritySubType_76);
  UnderlyingInstrument_76.insert(UnderlyingSecuritySubType_76.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_76("STRING_1567857429");
  msg.set(UnderlyingSecurityType_76);
  UnderlyingInstrument_76.insert(UnderlyingSecurityType_76.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_76("STRING_1941640290");
  msg.set(UnderlyingSeniority_76);
  UnderlyingInstrument_76.insert(UnderlyingSeniority_76.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_76("STRING_941134266");
  msg.set(UnderlyingSettlMethod_76);
  UnderlyingInstrument_76.insert(UnderlyingSettlMethod_76.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_76(4);
  msg.set(UnderlyingSettlementType_76);
  UnderlyingInstrument_76.insert(UnderlyingSettlementType_76.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_76;
  UnderlyingStartValue_76.setString("11386200");
  msg.set(UnderlyingStartValue_76);
  UnderlyingInstrument_76.insert(UnderlyingStartValue_76.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_76("STRING_561390185");
  msg.set(UnderlyingStateOrProvinceOfIssue_76);
  UnderlyingInstrument_76.insert(UnderlyingStateOrProvinceOfIssue_76.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_76("GBP");
  msg.set(UnderlyingStrikeCurrency_76);
  UnderlyingInstrument_76.insert(UnderlyingStrikeCurrency_76.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_76;
  UnderlyingStrikePrice_76.setString("7081319");
  msg.set(UnderlyingStrikePrice_76);
  UnderlyingInstrument_76.insert(UnderlyingStrikePrice_76.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_76("STRING_658199704");
  msg.set(UnderlyingSymbol_76);
  UnderlyingInstrument_76.insert(UnderlyingSymbol_76.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_76("STRING_1249557320");
  msg.set(UnderlyingSymbolSfx_76);
  UnderlyingInstrument_76.insert(UnderlyingSymbolSfx_76.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_76("STRING_1493879634");
  msg.set(UnderlyingTimeUnit_76);
  UnderlyingInstrument_76.insert(UnderlyingTimeUnit_76.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_76("STRING_1250248127");
  msg.set(UnderlyingUnitOfMeasure_76);
  UnderlyingInstrument_76.insert(UnderlyingUnitOfMeasure_76.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_76;
  UnderlyingUnitOfMeasureQty_76.setString("2327970");
  msg.set(UnderlyingUnitOfMeasureQty_76);
  UnderlyingInstrument_76.insert(UnderlyingUnitOfMeasureQty_76.getString());
  all_values.push_back(UnderlyingInstrument_76);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_151;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_151("STRING_297799524");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_151);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_151.insert(UnderlyingSecurityAltID_151.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_151("STRING_1855432929");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_151);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_151.insert(UnderlyingSecurityAltIDSource_151.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_151);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_143;
    FIX::UnderlyingStipType UnderlyingStipType_143("STRING_183616592");
    noUnderlyingStips_0_0.set(UnderlyingStipType_143);
    UnderlyingStipulations_NoUnderlyingStips_143.insert(UnderlyingStipType_143.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_143("STRING_12720570");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_143);
    UnderlyingStipulations_NoUnderlyingStips_143.insert(UnderlyingStipValue_143.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_143);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_151;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_151("STRING_1762835312");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_151);
    UndlyInstrumentParties_NoUndlyInstrumentParties_151.insert(UnderlyingInstrumentPartyID_151.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_151('7');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_151);
    UndlyInstrumentParties_NoUndlyInstrumentParties_151.insert(UnderlyingInstrumentPartyIDSource_151.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_151(668804916);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_151);
    UndlyInstrumentParties_NoUndlyInstrumentParties_151.insert(UnderlyingInstrumentPartyRole_151.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_151);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_290("STRING_1723326447");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_290);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290.insert(UnderlyingInstrumentPartySubID_290.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_290(797862815);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_290);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290.insert(UnderlyingInstrumentPartySubIDType_290.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_291("STRING_1767797949");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_291);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291.insert(UnderlyingInstrumentPartySubID_291.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_291(1772059732);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_291);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291.insert(UnderlyingInstrumentPartySubIDType_291.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291);

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
