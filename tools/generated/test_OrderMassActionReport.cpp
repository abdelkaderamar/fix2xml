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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassActionReport msg;

  list<multiset<string>> all_values;
  multiset<string> OrderMassActionReport_0;
  FIX::ClOrdID ClOrdID_37("STRING_38602322");
  msg.set(ClOrdID_37);
  OrderMassActionReport_0.insert(ClOrdID_37.getString());
  FIX::EncodedText EncodedText_63("DATA_352335735");
  msg.set(EncodedText_63);
  OrderMassActionReport_0.insert(EncodedText_63.getString());
  FIX::EncodedTextLen EncodedTextLen_63(249640503);
  msg.set(EncodedTextLen_63);
  OrderMassActionReport_0.insert(EncodedTextLen_63.getString());
  FIX::MarketID MarketID_10("EXCHANGE_1230406588");
  msg.set(MarketID_10);
  OrderMassActionReport_0.insert(MarketID_10.getString());
  FIX::MarketSegmentID MarketSegmentID_10("STRING_1940488058");
  msg.set(MarketSegmentID_10);
  OrderMassActionReport_0.insert(MarketSegmentID_10.getString());
  FIX::MassActionRejectReason MassActionRejectReason_0(11);
  msg.set(MassActionRejectReason_0);
  OrderMassActionReport_0.insert(MassActionRejectReason_0.getString());
  FIX::MassActionReportID MassActionReportID_0("STRING_1014162476");
  msg.set(MassActionReportID_0);
  OrderMassActionReport_0.insert(MassActionReportID_0.getString());
  FIX::MassActionResponse MassActionResponse_0(1);
  msg.set(MassActionResponse_0);
  OrderMassActionReport_0.insert(MassActionResponse_0.getString());
  FIX::MassActionScope MassActionScope_0(9);
  msg.set(MassActionScope_0);
  OrderMassActionReport_0.insert(MassActionScope_0.getString());
  FIX::MassActionType MassActionType_0(2);
  msg.set(MassActionType_0);
  OrderMassActionReport_0.insert(MassActionType_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_35("STRING_1171715229");
  msg.set(SecondaryClOrdID_35);
  OrderMassActionReport_0.insert(SecondaryClOrdID_35.getString());
  FIX::Side Side_33('6');
  msg.set(Side_33);
  OrderMassActionReport_0.insert(Side_33.getString());
  FIX::Text Text_63("STRING_1790141503");
  msg.set(Text_63);
  OrderMassActionReport_0.insert(Text_63.getString());
  FIX::TotalAffectedOrders TotalAffectedOrders_0(1394123025);
  msg.set(TotalAffectedOrders_0);
  OrderMassActionReport_0.insert(TotalAffectedOrders_0.getString());
  FIX::TradingSessionID TradingSessionID_51("STRING_1");
  msg.set(TradingSessionID_51);
  OrderMassActionReport_0.insert(TradingSessionID_51.getString());
  FIX::TradingSessionSubID TradingSessionSubID_51("STRING_4");
  msg.set(TradingSessionSubID_51);
  OrderMassActionReport_0.insert(TradingSessionSubID_51.getString());
  FIX::TransactTime TransactTime_39(FIX::UTCTIMESTAMP(17, 24, 19, 20, 42001));
  msg.set(TransactTime_39);
  OrderMassActionReport_0.insert(TransactTime_39.getString());
  all_values.push_back(OrderMassActionReport_0);

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_0;
    FIX::AffectedOrderID AffectedOrderID_0("STRING_1765192177");
    noAffectedOrders_0_0.set(AffectedOrderID_0);
    AffectedOrdGrp_NoAffectedOrders_0.insert(AffectedOrderID_0.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_0("STRING_1053910583");
    noAffectedOrders_0_0.set(AffectedSecondaryOrderID_0);
    AffectedOrdGrp_NoAffectedOrders_0.insert(AffectedSecondaryOrderID_0.getString());
    FIX::OrigClOrdID OrigClOrdID_12("STRING_444332951");
    noAffectedOrders_0_0.set(OrigClOrdID_12);
    AffectedOrdGrp_NoAffectedOrders_0.insert(OrigClOrdID_12.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_0);

    msg.addGroup(noAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_1;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_1;
    FIX::AffectedOrderID AffectedOrderID_1("STRING_312955352");
    noAffectedOrders_0_1.set(AffectedOrderID_1);
    AffectedOrdGrp_NoAffectedOrders_1.insert(AffectedOrderID_1.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_1("STRING_428376483");
    noAffectedOrders_0_1.set(AffectedSecondaryOrderID_1);
    AffectedOrdGrp_NoAffectedOrders_1.insert(AffectedSecondaryOrderID_1.getString());
    FIX::OrigClOrdID OrigClOrdID_13("STRING_72248068");
    noAffectedOrders_0_1.set(OrigClOrdID_13);
    AffectedOrdGrp_NoAffectedOrders_1.insert(OrigClOrdID_13.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_1);

    msg.addGroup(noAffectedOrders_0_1);
  }
  // Instrument
  multiset<string> Instrument_47;
  FIX::AttachmentPoint AttachmentPoint_47;
  AttachmentPoint_47.setString("64.750000");
  msg.set(AttachmentPoint_47);
  Instrument_47.insert(AttachmentPoint_47.getString());
  FIX::CFICode CFICode_47("STRING_466978805");
  msg.set(CFICode_47);
  Instrument_47.insert(CFICode_47.getString());
  FIX::CPProgram CPProgram_47(2);
  msg.set(CPProgram_47);
  Instrument_47.insert(CPProgram_47.getString());
  FIX::CPRegType CPRegType_47("STRING_378646978");
  msg.set(CPRegType_47);
  Instrument_47.insert(CPRegType_47.getString());
  FIX::CapPrice CapPrice_47;
  CapPrice_47.setString("16973853");
  msg.set(CapPrice_47);
  Instrument_47.insert(CapPrice_47.getString());
  FIX::ContractMultiplier ContractMultiplier_47;
  ContractMultiplier_47.setString("2175882");
  msg.set(ContractMultiplier_47);
  Instrument_47.insert(ContractMultiplier_47.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_47(2);
  msg.set(ContractMultiplierUnit_47);
  Instrument_47.insert(ContractMultiplierUnit_47.getString());
  FIX::ContractSettlMonth ContractSettlMonth_47("MONTHYEAR_564064222");
  msg.set(ContractSettlMonth_47);
  Instrument_47.insert(ContractSettlMonth_47.getString());
  FIX::CountryOfIssue CountryOfIssue_47("COUNTRY_1512028109");
  msg.set(CountryOfIssue_47);
  Instrument_47.insert(CountryOfIssue_47.getString());
  FIX::CouponPaymentDate CouponPaymentDate_47("LOCALMKTDATE_510367550");
  msg.set(CouponPaymentDate_47);
  Instrument_47.insert(CouponPaymentDate_47.getString());
  FIX::CouponRate CouponRate_47;
  CouponRate_47.setString("25.560000");
  msg.set(CouponRate_47);
  Instrument_47.insert(CouponRate_47.getString());
  FIX::CreditRating CreditRating_47("STRING_536259690");
  msg.set(CreditRating_47);
  Instrument_47.insert(CreditRating_47.getString());
  FIX::DatedDate DatedDate_47("LOCALMKTDATE_1121431251");
  msg.set(DatedDate_47);
  Instrument_47.insert(DatedDate_47.getString());
  FIX::DetachmentPoint DetachmentPoint_47;
  DetachmentPoint_47.setString("4.110000");
  msg.set(DetachmentPoint_47);
  Instrument_47.insert(DetachmentPoint_47.getString());
  FIX::EncodedIssuer EncodedIssuer_47("DATA_1930382715");
  msg.set(EncodedIssuer_47);
  Instrument_47.insert(EncodedIssuer_47.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_47(1947480489);
  msg.set(EncodedIssuerLen_47);
  Instrument_47.insert(EncodedIssuerLen_47.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_47("DATA_1873563666");
  msg.set(EncodedSecurityDesc_47);
  Instrument_47.insert(EncodedSecurityDesc_47.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_47(797996204);
  msg.set(EncodedSecurityDescLen_47);
  Instrument_47.insert(EncodedSecurityDescLen_47.getString());
  FIX::ExerciseStyle ExerciseStyle_47(1);
  msg.set(ExerciseStyle_47);
  Instrument_47.insert(ExerciseStyle_47.getString());
  FIX::Factor Factor_47;
  Factor_47.setString("21434163");
  msg.set(Factor_47);
  Instrument_47.insert(Factor_47.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_47(false);
  msg.set(FlexProductEligibilityIndicator_47);
  Instrument_47.insert(FlexProductEligibilityIndicator_47.getString());
  FIX::FlexibleIndicator FlexibleIndicator_47(false);
  msg.set(FlexibleIndicator_47);
  Instrument_47.insert(FlexibleIndicator_47.getString());
  FIX::FloorPrice FloorPrice_47;
  FloorPrice_47.setString("16387635");
  msg.set(FloorPrice_47);
  Instrument_47.insert(FloorPrice_47.getString());
  FIX::FlowScheduleType FlowScheduleType_47(0);
  msg.set(FlowScheduleType_47);
  Instrument_47.insert(FlowScheduleType_47.getString());
  FIX::InstrRegistry InstrRegistry_47("STRING_431500953");
  msg.set(InstrRegistry_47);
  Instrument_47.insert(InstrRegistry_47.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_47('1');
  msg.set(InstrmtAssignmentMethod_47);
  Instrument_47.insert(InstrmtAssignmentMethod_47.getString());
  FIX::InterestAccrualDate InterestAccrualDate_47("LOCALMKTDATE_2005388774");
  msg.set(InterestAccrualDate_47);
  Instrument_47.insert(InterestAccrualDate_47.getString());
  FIX::IssueDate IssueDate_47("LOCALMKTDATE_875833904");
  msg.set(IssueDate_47);
  Instrument_47.insert(IssueDate_47.getString());
  FIX::Issuer Issuer_47("STRING_1569427455");
  msg.set(Issuer_47);
  Instrument_47.insert(Issuer_47.getString());
  FIX::ListMethod ListMethod_47(1);
  msg.set(ListMethod_47);
  Instrument_47.insert(ListMethod_47.getString());
  FIX::LocaleOfIssue LocaleOfIssue_47("STRING_948081972");
  msg.set(LocaleOfIssue_47);
  Instrument_47.insert(LocaleOfIssue_47.getString());
  FIX::MaturityDate MaturityDate_47("LOCALMKTDATE_1698433930");
  msg.set(MaturityDate_47);
  Instrument_47.insert(MaturityDate_47.getString());
  FIX::MaturityMonthYear MaturityMonthYear_47("MONTHYEAR_753260415");
  msg.set(MaturityMonthYear_47);
  Instrument_47.insert(MaturityMonthYear_47.getString());
  FIX::MaturityTime MaturityTime_47("TZTIMEONLY_1372665775");
  msg.set(MaturityTime_47);
  Instrument_47.insert(MaturityTime_47.getString());
  FIX::MinPriceIncrement MinPriceIncrement_47;
  MinPriceIncrement_47.setString("20770809");
  msg.set(MinPriceIncrement_47);
  Instrument_47.insert(MinPriceIncrement_47.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_47;
  MinPriceIncrementAmount_47.setString("3031621");
  msg.set(MinPriceIncrementAmount_47);
  Instrument_47.insert(MinPriceIncrementAmount_47.getString());
  FIX::NTPositionLimit NTPositionLimit_47(1590253989);
  msg.set(NTPositionLimit_47);
  Instrument_47.insert(NTPositionLimit_47.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_47;
  NotionalPercentageOutstanding_47.setString("99.300000");
  msg.set(NotionalPercentageOutstanding_47);
  Instrument_47.insert(NotionalPercentageOutstanding_47.getString());
  FIX::OptAttribute OptAttribute_47('8');
  msg.set(OptAttribute_47);
  Instrument_47.insert(OptAttribute_47.getString());
  FIX::OptPayoutAmount OptPayoutAmount_47;
  OptPayoutAmount_47.setString("9547984");
  msg.set(OptPayoutAmount_47);
  Instrument_47.insert(OptPayoutAmount_47.getString());
  FIX::OptPayoutType OptPayoutType_47(2);
  msg.set(OptPayoutType_47);
  Instrument_47.insert(OptPayoutType_47.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_47;
  OriginalNotionalPercentageOutstanding_47.setString("89.400000");
  msg.set(OriginalNotionalPercentageOutstanding_47);
  Instrument_47.insert(OriginalNotionalPercentageOutstanding_47.getString());
  FIX::Pool Pool_47("STRING_1491058140");
  msg.set(Pool_47);
  Instrument_47.insert(Pool_47.getString());
  FIX::PositionLimit PositionLimit_47(435375084);
  msg.set(PositionLimit_47);
  Instrument_47.insert(PositionLimit_47.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_47("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_47);
  Instrument_47.insert(PriceQuoteMethod_47.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_47("STRING_1273957208");
  msg.set(PriceUnitOfMeasure_47);
  Instrument_47.insert(PriceUnitOfMeasure_47.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_47;
  PriceUnitOfMeasureQty_47.setString("2353719");
  msg.set(PriceUnitOfMeasureQty_47);
  Instrument_47.insert(PriceUnitOfMeasureQty_47.getString());
  FIX::Product Product_49(4);
  msg.set(Product_49);
  Instrument_47.insert(Product_49.getString());
  FIX::ProductComplex ProductComplex_47("STRING_2071953412");
  msg.set(ProductComplex_47);
  Instrument_47.insert(ProductComplex_47.getString());
  FIX::PutOrCall PutOrCall_47(0);
  msg.set(PutOrCall_47);
  Instrument_47.insert(PutOrCall_47.getString());
  FIX::RedemptionDate RedemptionDate_47("LOCALMKTDATE_990722112");
  msg.set(RedemptionDate_47);
  Instrument_47.insert(RedemptionDate_47.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_47("STRING_611332779");
  msg.set(RepoCollateralSecurityType_47);
  Instrument_47.insert(RepoCollateralSecurityType_47.getString());
  FIX::RepurchaseRate RepurchaseRate_47;
  RepurchaseRate_47.setString("44.110000");
  msg.set(RepurchaseRate_47);
  Instrument_47.insert(RepurchaseRate_47.getString());
  FIX::RepurchaseTerm RepurchaseTerm_47(482002038);
  msg.set(RepurchaseTerm_47);
  Instrument_47.insert(RepurchaseTerm_47.getString());
  FIX::RestructuringType RestructuringType_47("STRING_MR");
  msg.set(RestructuringType_47);
  Instrument_47.insert(RestructuringType_47.getString());
  FIX::SecurityDesc SecurityDesc_47("STRING_1422105365");
  msg.set(SecurityDesc_47);
  Instrument_47.insert(SecurityDesc_47.getString());
  FIX::SecurityExchange SecurityExchange_47("EXCHANGE_1738474141");
  msg.set(SecurityExchange_47);
  Instrument_47.insert(SecurityExchange_47.getString());
  FIX::SecurityGroup SecurityGroup_47("STRING_1420716095");
  msg.set(SecurityGroup_47);
  Instrument_47.insert(SecurityGroup_47.getString());
  FIX::SecurityID SecurityID_47("STRING_150455621");
  msg.set(SecurityID_47);
  Instrument_47.insert(SecurityID_47.getString());
  FIX::SecurityIDSource SecurityIDSource_47("STRING_9");
  msg.set(SecurityIDSource_47);
  Instrument_47.insert(SecurityIDSource_47.getString());
  FIX::SecurityStatus SecurityStatus_47("STRING_2");
  msg.set(SecurityStatus_47);
  Instrument_47.insert(SecurityStatus_47.getString());
  FIX::SecuritySubType SecuritySubType_48("STRING_1098537594");
  msg.set(SecuritySubType_48);
  Instrument_47.insert(SecuritySubType_48.getString());
  FIX::SecurityType SecurityType_49("STRING_TBOND");
  msg.set(SecurityType_49);
  Instrument_47.insert(SecurityType_49.getString());
  FIX::Seniority Seniority_47("STRING_SR");
  msg.set(Seniority_47);
  Instrument_47.insert(Seniority_47.getString());
  FIX::SettlMethod SettlMethod_47('P');
  msg.set(SettlMethod_47);
  Instrument_47.insert(SettlMethod_47.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_47("STRING_640965490");
  msg.set(SettleOnOpenFlag_47);
  Instrument_47.insert(SettleOnOpenFlag_47.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_47("STRING_615936633");
  msg.set(StateOrProvinceOfIssue_47);
  Instrument_47.insert(StateOrProvinceOfIssue_47.getString());
  FIX::StrikeCurrency StrikeCurrency_47("USD");
  msg.set(StrikeCurrency_47);
  Instrument_47.insert(StrikeCurrency_47.getString());
  FIX::StrikeMultiplier StrikeMultiplier_47;
  StrikeMultiplier_47.setString("14831630");
  msg.set(StrikeMultiplier_47);
  Instrument_47.insert(StrikeMultiplier_47.getString());
  FIX::StrikePrice StrikePrice_47;
  StrikePrice_47.setString("7212885");
  msg.set(StrikePrice_47);
  Instrument_47.insert(StrikePrice_47.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_47(4);
  msg.set(StrikePriceBoundaryMethod_47);
  Instrument_47.insert(StrikePriceBoundaryMethod_47.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_47;
  StrikePriceBoundaryPrecision_47.setString("83.080000");
  msg.set(StrikePriceBoundaryPrecision_47);
  Instrument_47.insert(StrikePriceBoundaryPrecision_47.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_47(2);
  msg.set(StrikePriceDeterminationMethod_47);
  Instrument_47.insert(StrikePriceDeterminationMethod_47.getString());
  FIX::StrikeValue StrikeValue_47;
  StrikeValue_47.setString("13413443");
  msg.set(StrikeValue_47);
  Instrument_47.insert(StrikeValue_47.getString());
  FIX::Symbol Symbol_47("STRING_1851027660");
  msg.set(Symbol_47);
  Instrument_47.insert(Symbol_47.getString());
  FIX::SymbolSfx SymbolSfx_47("STRING_WI");
  msg.set(SymbolSfx_47);
  Instrument_47.insert(SymbolSfx_47.getString());
  FIX::TimeUnit TimeUnit_47("STRING_S");
  msg.set(TimeUnit_47);
  Instrument_47.insert(TimeUnit_47.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_47(3);
  msg.set(UnderlyingPriceDeterminationMethod_47);
  Instrument_47.insert(UnderlyingPriceDeterminationMethod_47.getString());
  FIX::UnitOfMeasure UnitOfMeasure_47("STRING_MMbbl");
  msg.set(UnitOfMeasure_47);
  Instrument_47.insert(UnitOfMeasure_47.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_47;
  UnitOfMeasureQty_47.setString("4182911");
  msg.set(UnitOfMeasureQty_47);
  Instrument_47.insert(UnitOfMeasureQty_47.getString());
  FIX::ValuationMethod ValuationMethod_47("STRING_CDSD");
  msg.set(ValuationMethod_47);
  Instrument_47.insert(ValuationMethod_47.getString());
  all_values.push_back(Instrument_47);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_92;
    FIX::ComplexEventCondition ComplexEventCondition_92(1);
    noComplexEvents_0_0.set(ComplexEventCondition_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventCondition_92.getString());
    FIX::ComplexEventPrice ComplexEventPrice_92;
    ComplexEventPrice_92.setString("235738");
    noComplexEvents_0_0.set(ComplexEventPrice_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPrice_92.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_92(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceBoundaryMethod_92.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_92;
    ComplexEventPriceBoundaryPrecision_92.setString("73.030000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceBoundaryPrecision_92.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_92(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceTimeType_92.getString());
    FIX::ComplexEventType ComplexEventType_92(2);
    noComplexEvents_0_0.set(ComplexEventType_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventType_92.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_92;
    ComplexOptPayoutAmount_92.setString("8339729");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexOptPayoutAmount_92.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_92);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_193;
      FIX::ComplexEventEndDate ComplexEventEndDate_193(FIX::UTCTIMESTAMP(15, 17, 54, 24, 52003));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_193);
      ComplexEventDates_NoComplexEventDates_193.insert(ComplexEventEndDate_193.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_193(FIX::UTCTIMESTAMP(20, 55, 7, 13, 52006));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_193);
      ComplexEventDates_NoComplexEventDates_193.insert(ComplexEventStartDate_193.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_193);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_381;
        FIX::ComplexEventEndTime ComplexEventEndTime_381(FIX::UTCTIMEONLY(1, 57, 38));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_381);
        ComplexEventTimes_NoComplexEventTimes_381.insert(ComplexEventEndTime_381.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_381(FIX::UTCTIMEONLY(8, 24, 42));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_381);
        ComplexEventTimes_NoComplexEventTimes_381.insert(ComplexEventStartTime_381.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_381);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_194;
      FIX::ComplexEventEndDate ComplexEventEndDate_194(FIX::UTCTIMESTAMP(17, 40, 34, 20, 102005));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_194);
      ComplexEventDates_NoComplexEventDates_194.insert(ComplexEventEndDate_194.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_194(FIX::UTCTIMESTAMP(23, 50, 44, 17, 72004));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_194);
      ComplexEventDates_NoComplexEventDates_194.insert(ComplexEventStartDate_194.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_194);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_382;
        FIX::ComplexEventEndTime ComplexEventEndTime_382(FIX::UTCTIMEONLY(5, 7, 57));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_382);
        ComplexEventTimes_NoComplexEventTimes_382.insert(ComplexEventEndTime_382.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_382(FIX::UTCTIMEONLY(23, 9, 45));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_382);
        ComplexEventTimes_NoComplexEventTimes_382.insert(ComplexEventStartTime_382.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_382);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_93;
    FIX::EventDate EventDate_93("LOCALMKTDATE_1030278267");
    noEvents_0_0.set(EventDate_93);
    EvntGrp_NoEvents_93.insert(EventDate_93.getString());
    FIX::EventPx EventPx_93;
    EventPx_93.setString("10245165");
    noEvents_0_0.set(EventPx_93);
    EvntGrp_NoEvents_93.insert(EventPx_93.getString());
    FIX::EventText EventText_93("STRING_1264135357");
    noEvents_0_0.set(EventText_93);
    EvntGrp_NoEvents_93.insert(EventText_93.getString());
    FIX::EventTime EventTime_93(FIX::UTCTIMESTAMP(10, 54, 16, 16, 122000));
    noEvents_0_0.set(EventTime_93);
    EvntGrp_NoEvents_93.insert(EventTime_93.getString());
    FIX::EventType EventType_93(15);
    noEvents_0_0.set(EventType_93);
    EvntGrp_NoEvents_93.insert(EventType_93.getString());
    all_values.push_back(EvntGrp_NoEvents_93);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_94;
    FIX::EventDate EventDate_94("LOCALMKTDATE_1516927671");
    noEvents_0_1.set(EventDate_94);
    EvntGrp_NoEvents_94.insert(EventDate_94.getString());
    FIX::EventPx EventPx_94;
    EventPx_94.setString("13763861");
    noEvents_0_1.set(EventPx_94);
    EvntGrp_NoEvents_94.insert(EventPx_94.getString());
    FIX::EventText EventText_94("STRING_644155205");
    noEvents_0_1.set(EventText_94);
    EvntGrp_NoEvents_94.insert(EventText_94.getString());
    FIX::EventTime EventTime_94(FIX::UTCTIMESTAMP(8, 47, 3, 13, 72013));
    noEvents_0_1.set(EventTime_94);
    EvntGrp_NoEvents_94.insert(EventTime_94.getString());
    FIX::EventType EventType_94(2);
    noEvents_0_1.set(EventType_94);
    EvntGrp_NoEvents_94.insert(EventType_94.getString());
    all_values.push_back(EvntGrp_NoEvents_94);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_85;
    FIX::InstrumentPartyID InstrumentPartyID_85("STRING_2073984504");
    noInstrumentParties_0_0.set(InstrumentPartyID_85);
    InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyID_85.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_85('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_85);
    InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyIDSource_85.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_85(1060021228);
    noInstrumentParties_0_0.set(InstrumentPartyRole_85);
    InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyRole_85.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_85);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169;
      FIX::InstrumentPartySubID InstrumentPartySubID_169("STRING_636151492");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_169);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169.insert(InstrumentPartySubID_169.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_169(90091110);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_169);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169.insert(InstrumentPartySubIDType_169.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170;
      FIX::InstrumentPartySubID InstrumentPartySubID_170("STRING_249489176");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_170);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170.insert(InstrumentPartySubID_170.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_170(529004091);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_170);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170.insert(InstrumentPartySubIDType_170.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_86;
    FIX::InstrumentPartyID InstrumentPartyID_86("STRING_1120369377");
    noInstrumentParties_0_1.set(InstrumentPartyID_86);
    InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyID_86.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_86('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_86);
    InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyIDSource_86.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_86(1793139449);
    noInstrumentParties_0_1.set(InstrumentPartyRole_86);
    InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyRole_86.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_86);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171;
      FIX::InstrumentPartySubID InstrumentPartySubID_171("STRING_1670250268");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_171);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171.insert(InstrumentPartySubID_171.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_171(1822645763);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_171);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171.insert(InstrumentPartySubIDType_171.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_91;
    FIX::SecurityAltID SecurityAltID_91("STRING_699634608");
    noSecurityAltID_0_0.set(SecurityAltID_91);
    SecAltIDGrp_NoSecurityAltID_91.insert(SecurityAltID_91.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_91("STRING_641096918");
    noSecurityAltID_0_0.set(SecurityAltIDSource_91);
    SecAltIDGrp_NoSecurityAltID_91.insert(SecurityAltIDSource_91.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_91);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_92;
    FIX::SecurityAltID SecurityAltID_92("STRING_641241626");
    noSecurityAltID_0_1.set(SecurityAltID_92);
    SecAltIDGrp_NoSecurityAltID_92.insert(SecurityAltID_92.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_92("STRING_1193159743");
    noSecurityAltID_0_1.set(SecurityAltIDSource_92);
    SecAltIDGrp_NoSecurityAltID_92.insert(SecurityAltIDSource_92.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_92);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_94;
  FIX::SecurityXML SecurityXML_95("XMLDATA_10540942");
  msg.set(SecurityXML_95);
  FIX::SecurityXMLLen SecurityXMLLen_47(2017627811);
  msg.set(SecurityXMLLen_47);
  FIX::SecurityXMLSchema SecurityXMLSchema_47("STRING_1837314948");
  msg.set(SecurityXMLSchema_47);
  SecurityXML_94.insert(SecurityXMLSchema_47.getString());
  all_values.push_back(SecurityXML_94);

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_0;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_0("STRING_1918029707");
    noNotAffectedOrders_0_0.set(NotAffOrigClOrdID_0);
    NotAffectedOrdersGrp_NoNotAffectedOrders_0.insert(NotAffOrigClOrdID_0.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_0("STRING_269643448");
    noNotAffectedOrders_0_0.set(NotAffectedOrderID_0);
    NotAffectedOrdersGrp_NoNotAffectedOrders_0.insert(NotAffectedOrderID_0.getString());
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_0);

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoNotAffectedOrders noNotAffectedOrders_0_1;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_1;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_1("STRING_2066221483");
    noNotAffectedOrders_0_1.set(NotAffOrigClOrdID_1);
    NotAffectedOrdersGrp_NoNotAffectedOrders_1.insert(NotAffOrigClOrdID_1.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_1("STRING_777918368");
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
    multiset<string> Parties_NoPartyIDs_85;
    FIX::PartyID PartyID_85("STRING_1923673663");
    noPartyIDs_0_0.set(PartyID_85);
    Parties_NoPartyIDs_85.insert(PartyID_85.getString());
    FIX::PartyIDSource PartyIDSource_85('D');
    noPartyIDs_0_0.set(PartyIDSource_85);
    Parties_NoPartyIDs_85.insert(PartyIDSource_85.getString());
    FIX::PartyRole PartyRole_85(67);
    noPartyIDs_0_0.set(PartyRole_85);
    Parties_NoPartyIDs_85.insert(PartyRole_85.getString());
    all_values.push_back(Parties_NoPartyIDs_85);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_165;
      FIX::PartySubID PartySubID_165("STRING_1064949750");
      noPartySubIDs_0_1_0.set(PartySubID_165);
      PtysSubGrp_NoPartySubIDs_165.insert(PartySubID_165.getString());
      FIX::PartySubIDType PartySubIDType_165(21);
      noPartySubIDs_0_1_0.set(PartySubIDType_165);
      PtysSubGrp_NoPartySubIDs_165.insert(PartySubIDType_165.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_165);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_166;
      FIX::PartySubID PartySubID_166("STRING_28583830");
      noPartySubIDs_0_1_1.set(PartySubID_166);
      PtysSubGrp_NoPartySubIDs_166.insert(PartySubID_166.getString());
      FIX::PartySubIDType PartySubIDType_166(17);
      noPartySubIDs_0_1_1.set(PartySubIDType_166);
      PtysSubGrp_NoPartySubIDs_166.insert(PartySubIDType_166.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_166);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_167;
      FIX::PartySubID PartySubID_167("STRING_440343692");
      noPartySubIDs_0_1_2.set(PartySubID_167);
      PtysSubGrp_NoPartySubIDs_167.insert(PartySubID_167.getString());
      FIX::PartySubIDType PartySubIDType_167(25);
      noPartySubIDs_0_1_2.set(PartySubIDType_167);
      PtysSubGrp_NoPartySubIDs_167.insert(PartySubIDType_167.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_167);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_86;
    FIX::PartyID PartyID_86("STRING_82621685");
    noPartyIDs_0_1.set(PartyID_86);
    Parties_NoPartyIDs_86.insert(PartyID_86.getString());
    FIX::PartyIDSource PartyIDSource_86('B');
    noPartyIDs_0_1.set(PartyIDSource_86);
    Parties_NoPartyIDs_86.insert(PartyIDSource_86.getString());
    FIX::PartyRole PartyRole_86(26);
    noPartyIDs_0_1.set(PartyRole_86);
    Parties_NoPartyIDs_86.insert(PartyRole_86.getString());
    all_values.push_back(Parties_NoPartyIDs_86);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_168;
      FIX::PartySubID PartySubID_168("STRING_532408131");
      noPartySubIDs_1_1_0.set(PartySubID_168);
      PtysSubGrp_NoPartySubIDs_168.insert(PartySubID_168.getString());
      FIX::PartySubIDType PartySubIDType_168(21);
      noPartySubIDs_1_1_0.set(PartySubIDType_168);
      PtysSubGrp_NoPartySubIDs_168.insert(PartySubIDType_168.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_168);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_169;
      FIX::PartySubID PartySubID_169("STRING_1550923249");
      noPartySubIDs_1_1_1.set(PartySubID_169);
      PtysSubGrp_NoPartySubIDs_169.insert(PartySubID_169.getString());
      FIX::PartySubIDType PartySubIDType_169(4);
      noPartySubIDs_1_1_1.set(PartySubIDType_169);
      PtysSubGrp_NoPartySubIDs_169.insert(PartySubIDType_169.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_169);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_3;
    FIX::TargetPartyID TargetPartyID_3("STRING_44536520");
    noTargetPartyIDs_0_0.set(TargetPartyID_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyID_3.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_3('9');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyIDSource_3.getString());
    FIX::TargetPartyRole TargetPartyRole_3(820156100);
    noTargetPartyIDs_0_0.set(TargetPartyRole_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyRole_3.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_3);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_74;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_74("DATA_55077462");
  msg.set(EncodedUnderlyingIssuer_74);
  UnderlyingInstrument_74.insert(EncodedUnderlyingIssuer_74.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_74(857452140);
  msg.set(EncodedUnderlyingIssuerLen_74);
  UnderlyingInstrument_74.insert(EncodedUnderlyingIssuerLen_74.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_74("DATA_509987400");
  msg.set(EncodedUnderlyingSecurityDesc_74);
  UnderlyingInstrument_74.insert(EncodedUnderlyingSecurityDesc_74.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_74(761037622);
  msg.set(EncodedUnderlyingSecurityDescLen_74);
  UnderlyingInstrument_74.insert(EncodedUnderlyingSecurityDescLen_74.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_74;
  UnderlyingAdjustedQuantity_74.setString("6279981");
  msg.set(UnderlyingAdjustedQuantity_74);
  UnderlyingInstrument_74.insert(UnderlyingAdjustedQuantity_74.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_74;
  UnderlyingAllocationPercent_74.setString("8.480000");
  msg.set(UnderlyingAllocationPercent_74);
  UnderlyingInstrument_74.insert(UnderlyingAllocationPercent_74.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_74;
  UnderlyingAttachmentPoint_74.setString("54.580000");
  msg.set(UnderlyingAttachmentPoint_74);
  UnderlyingInstrument_74.insert(UnderlyingAttachmentPoint_74.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_74("STRING_1405916568");
  msg.set(UnderlyingCFICode_74);
  UnderlyingInstrument_74.insert(UnderlyingCFICode_74.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_74("STRING_1673489978");
  msg.set(UnderlyingCPProgram_74);
  UnderlyingInstrument_74.insert(UnderlyingCPProgram_74.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_74("STRING_455965473");
  msg.set(UnderlyingCPRegType_74);
  UnderlyingInstrument_74.insert(UnderlyingCPRegType_74.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_74;
  UnderlyingCapValue_74.setString("10546180");
  msg.set(UnderlyingCapValue_74);
  UnderlyingInstrument_74.insert(UnderlyingCapValue_74.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_74;
  UnderlyingCashAmount_74.setString("9637213");
  msg.set(UnderlyingCashAmount_74);
  UnderlyingInstrument_74.insert(UnderlyingCashAmount_74.getString());
  FIX::UnderlyingCashType UnderlyingCashType_74("STRING_FIXED");
  msg.set(UnderlyingCashType_74);
  UnderlyingInstrument_74.insert(UnderlyingCashType_74.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_74;
  UnderlyingContractMultiplier_74.setString("21195677");
  msg.set(UnderlyingContractMultiplier_74);
  UnderlyingInstrument_74.insert(UnderlyingContractMultiplier_74.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_74(1313973914);
  msg.set(UnderlyingContractMultiplierUnit_74);
  UnderlyingInstrument_74.insert(UnderlyingContractMultiplierUnit_74.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_74("COUNTRY_187240175");
  msg.set(UnderlyingCountryOfIssue_74);
  UnderlyingInstrument_74.insert(UnderlyingCountryOfIssue_74.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_74("LOCALMKTDATE_1673185393");
  msg.set(UnderlyingCouponPaymentDate_74);
  UnderlyingInstrument_74.insert(UnderlyingCouponPaymentDate_74.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_74;
  UnderlyingCouponRate_74.setString("76.060000");
  msg.set(UnderlyingCouponRate_74);
  UnderlyingInstrument_74.insert(UnderlyingCouponRate_74.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_74("STRING_465313181");
  msg.set(UnderlyingCreditRating_74);
  UnderlyingInstrument_74.insert(UnderlyingCreditRating_74.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_74("EUR");
  msg.set(UnderlyingCurrency_74);
  UnderlyingInstrument_74.insert(UnderlyingCurrency_74.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_74;
  UnderlyingCurrentValue_74.setString("20173919");
  msg.set(UnderlyingCurrentValue_74);
  UnderlyingInstrument_74.insert(UnderlyingCurrentValue_74.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_74;
  UnderlyingDetachmentPoint_74.setString("45.650000");
  msg.set(UnderlyingDetachmentPoint_74);
  UnderlyingInstrument_74.insert(UnderlyingDetachmentPoint_74.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_74;
  UnderlyingDirtyPrice_74.setString("16999551");
  msg.set(UnderlyingDirtyPrice_74);
  UnderlyingInstrument_74.insert(UnderlyingDirtyPrice_74.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_74;
  UnderlyingEndPrice_74.setString("9447537");
  msg.set(UnderlyingEndPrice_74);
  UnderlyingInstrument_74.insert(UnderlyingEndPrice_74.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_74;
  UnderlyingEndValue_74.setString("8875241");
  msg.set(UnderlyingEndValue_74);
  UnderlyingInstrument_74.insert(UnderlyingEndValue_74.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_74(2046021508);
  msg.set(UnderlyingExerciseStyle_74);
  UnderlyingInstrument_74.insert(UnderlyingExerciseStyle_74.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_74;
  UnderlyingFXRate_74.setString("5717500");
  msg.set(UnderlyingFXRate_74);
  UnderlyingInstrument_74.insert(UnderlyingFXRate_74.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_74('M');
  msg.set(UnderlyingFXRateCalc_74);
  UnderlyingInstrument_74.insert(UnderlyingFXRateCalc_74.getString());
  FIX::UnderlyingFactor UnderlyingFactor_74;
  UnderlyingFactor_74.setString("8858458");
  msg.set(UnderlyingFactor_74);
  UnderlyingInstrument_74.insert(UnderlyingFactor_74.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_74(1391906163);
  msg.set(UnderlyingFlowScheduleType_74);
  UnderlyingInstrument_74.insert(UnderlyingFlowScheduleType_74.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_74("STRING_987138149");
  msg.set(UnderlyingInstrRegistry_74);
  UnderlyingInstrument_74.insert(UnderlyingInstrRegistry_74.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_74("LOCALMKTDATE_1743297977");
  msg.set(UnderlyingIssueDate_74);
  UnderlyingInstrument_74.insert(UnderlyingIssueDate_74.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_74("STRING_1901893564");
  msg.set(UnderlyingIssuer_74);
  UnderlyingInstrument_74.insert(UnderlyingIssuer_74.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_74("STRING_1748175771");
  msg.set(UnderlyingLocaleOfIssue_74);
  UnderlyingInstrument_74.insert(UnderlyingLocaleOfIssue_74.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_74("LOCALMKTDATE_223812528");
  msg.set(UnderlyingMaturityDate_74);
  UnderlyingInstrument_74.insert(UnderlyingMaturityDate_74.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_74("MONTHYEAR_534040764");
  msg.set(UnderlyingMaturityMonthYear_74);
  UnderlyingInstrument_74.insert(UnderlyingMaturityMonthYear_74.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_74("TZTIMEONLY_280467581");
  msg.set(UnderlyingMaturityTime_74);
  UnderlyingInstrument_74.insert(UnderlyingMaturityTime_74.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_74;
  UnderlyingNotionalPercentageOutstanding_74.setString("90.960000");
  msg.set(UnderlyingNotionalPercentageOutstanding_74);
  UnderlyingInstrument_74.insert(UnderlyingNotionalPercentageOutstanding_74.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_74('6');
  msg.set(UnderlyingOptAttribute_74);
  UnderlyingInstrument_74.insert(UnderlyingOptAttribute_74.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_74;
  UnderlyingOriginalNotionalPercentageOutstanding_74.setString("30.540000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_74);
  UnderlyingInstrument_74.insert(UnderlyingOriginalNotionalPercentageOutstanding_74.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_74("STRING_536863498");
  msg.set(UnderlyingPriceUnitOfMeasure_74);
  UnderlyingInstrument_74.insert(UnderlyingPriceUnitOfMeasure_74.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_74;
  UnderlyingPriceUnitOfMeasureQty_74.setString("10237684");
  msg.set(UnderlyingPriceUnitOfMeasureQty_74);
  UnderlyingInstrument_74.insert(UnderlyingPriceUnitOfMeasureQty_74.getString());
  FIX::UnderlyingProduct UnderlyingProduct_74(895089399);
  msg.set(UnderlyingProduct_74);
  UnderlyingInstrument_74.insert(UnderlyingProduct_74.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_74(508947649);
  msg.set(UnderlyingPutOrCall_74);
  UnderlyingInstrument_74.insert(UnderlyingPutOrCall_74.getString());
  FIX::UnderlyingPx UnderlyingPx_74;
  UnderlyingPx_74.setString("1902586");
  msg.set(UnderlyingPx_74);
  UnderlyingInstrument_74.insert(UnderlyingPx_74.getString());
  FIX::UnderlyingQty UnderlyingQty_74;
  UnderlyingQty_74.setString("10823295");
  msg.set(UnderlyingQty_74);
  UnderlyingInstrument_74.insert(UnderlyingQty_74.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_74("LOCALMKTDATE_34649395");
  msg.set(UnderlyingRedemptionDate_74);
  UnderlyingInstrument_74.insert(UnderlyingRedemptionDate_74.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_74("STRING_1944576299");
  msg.set(UnderlyingRepoCollateralSecurityType_74);
  UnderlyingInstrument_74.insert(UnderlyingRepoCollateralSecurityType_74.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_74;
  UnderlyingRepurchaseRate_74.setString("27.550000");
  msg.set(UnderlyingRepurchaseRate_74);
  UnderlyingInstrument_74.insert(UnderlyingRepurchaseRate_74.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_74(1790456474);
  msg.set(UnderlyingRepurchaseTerm_74);
  UnderlyingInstrument_74.insert(UnderlyingRepurchaseTerm_74.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_74("STRING_964639678");
  msg.set(UnderlyingRestructuringType_74);
  UnderlyingInstrument_74.insert(UnderlyingRestructuringType_74.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_74("STRING_1417551065");
  msg.set(UnderlyingSecurityDesc_74);
  UnderlyingInstrument_74.insert(UnderlyingSecurityDesc_74.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_74("EXCHANGE_1127057391");
  msg.set(UnderlyingSecurityExchange_74);
  UnderlyingInstrument_74.insert(UnderlyingSecurityExchange_74.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_74("STRING_517111188");
  msg.set(UnderlyingSecurityID_74);
  UnderlyingInstrument_74.insert(UnderlyingSecurityID_74.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_74("STRING_214821124");
  msg.set(UnderlyingSecurityIDSource_74);
  UnderlyingInstrument_74.insert(UnderlyingSecurityIDSource_74.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_74("STRING_2014581558");
  msg.set(UnderlyingSecuritySubType_74);
  UnderlyingInstrument_74.insert(UnderlyingSecuritySubType_74.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_74("STRING_415649049");
  msg.set(UnderlyingSecurityType_74);
  UnderlyingInstrument_74.insert(UnderlyingSecurityType_74.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_74("STRING_786571187");
  msg.set(UnderlyingSeniority_74);
  UnderlyingInstrument_74.insert(UnderlyingSeniority_74.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_74("STRING_799158597");
  msg.set(UnderlyingSettlMethod_74);
  UnderlyingInstrument_74.insert(UnderlyingSettlMethod_74.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_74(5);
  msg.set(UnderlyingSettlementType_74);
  UnderlyingInstrument_74.insert(UnderlyingSettlementType_74.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_74;
  UnderlyingStartValue_74.setString("309937");
  msg.set(UnderlyingStartValue_74);
  UnderlyingInstrument_74.insert(UnderlyingStartValue_74.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_74("STRING_1786296746");
  msg.set(UnderlyingStateOrProvinceOfIssue_74);
  UnderlyingInstrument_74.insert(UnderlyingStateOrProvinceOfIssue_74.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_74("CAN");
  msg.set(UnderlyingStrikeCurrency_74);
  UnderlyingInstrument_74.insert(UnderlyingStrikeCurrency_74.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_74;
  UnderlyingStrikePrice_74.setString("13869888");
  msg.set(UnderlyingStrikePrice_74);
  UnderlyingInstrument_74.insert(UnderlyingStrikePrice_74.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_74("STRING_1121121743");
  msg.set(UnderlyingSymbol_74);
  UnderlyingInstrument_74.insert(UnderlyingSymbol_74.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_74("STRING_319444383");
  msg.set(UnderlyingSymbolSfx_74);
  UnderlyingInstrument_74.insert(UnderlyingSymbolSfx_74.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_74("STRING_1667456451");
  msg.set(UnderlyingTimeUnit_74);
  UnderlyingInstrument_74.insert(UnderlyingTimeUnit_74.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_74("STRING_603367192");
  msg.set(UnderlyingUnitOfMeasure_74);
  UnderlyingInstrument_74.insert(UnderlyingUnitOfMeasure_74.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_74;
  UnderlyingUnitOfMeasureQty_74.setString("3794914");
  msg.set(UnderlyingUnitOfMeasureQty_74);
  UnderlyingInstrument_74.insert(UnderlyingUnitOfMeasureQty_74.getString());
  all_values.push_back(UnderlyingInstrument_74);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_146;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_146("STRING_1140230690");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_146);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_146.insert(UnderlyingSecurityAltID_146.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_146("STRING_1403259905");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_146);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_146.insert(UnderlyingSecurityAltIDSource_146.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_146);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_147;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_147("STRING_1151495257");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_147);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_147.insert(UnderlyingSecurityAltID_147.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_147("STRING_1649178339");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_147);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_147.insert(UnderlyingSecurityAltIDSource_147.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_147);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_140;
    FIX::UnderlyingStipType UnderlyingStipType_140("STRING_86341183");
    noUnderlyingStips_0_0.set(UnderlyingStipType_140);
    UnderlyingStipulations_NoUnderlyingStips_140.insert(UnderlyingStipType_140.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_140("STRING_1683827734");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_140);
    UnderlyingStipulations_NoUnderlyingStips_140.insert(UnderlyingStipValue_140.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_140);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_147;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_147("STRING_1633983938");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_147);
    UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyID_147.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_147('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_147);
    UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyIDSource_147.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_147(207767279);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_147);
    UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyRole_147.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_147);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_282("STRING_306374304");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_282);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282.insert(UnderlyingInstrumentPartySubID_282.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_282(724878468);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_282);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282.insert(UnderlyingInstrumentPartySubIDType_282.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
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
