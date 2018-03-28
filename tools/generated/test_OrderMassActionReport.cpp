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
  FIX::ClOrdID ClOrdID_37("STRING_1492839733");
  msg.set(ClOrdID_37);
  OrderMassActionReport_0.insert(ClOrdID_37.getString());
  FIX::EncodedText EncodedText_72("DATA_343433897");
  msg.set(EncodedText_72);
  OrderMassActionReport_0.insert(EncodedText_72.getString());
  FIX::EncodedTextLen EncodedTextLen_72(29405220);
  msg.set(EncodedTextLen_72);
  OrderMassActionReport_0.insert(EncodedTextLen_72.getString());
  FIX::MarketID MarketID_10("EXCHANGE_1647629039");
  msg.set(MarketID_10);
  OrderMassActionReport_0.insert(MarketID_10.getString());
  FIX::MarketSegmentID MarketSegmentID_10("STRING_478703574");
  msg.set(MarketSegmentID_10);
  OrderMassActionReport_0.insert(MarketSegmentID_10.getString());
  FIX::MassActionRejectReason MassActionRejectReason_0(2);
  msg.set(MassActionRejectReason_0);
  OrderMassActionReport_0.insert(MassActionRejectReason_0.getString());
  FIX::MassActionReportID MassActionReportID_0("STRING_396830837");
  msg.set(MassActionReportID_0);
  OrderMassActionReport_0.insert(MassActionReportID_0.getString());
  FIX::MassActionResponse MassActionResponse_0(0);
  msg.set(MassActionResponse_0);
  OrderMassActionReport_0.insert(MassActionResponse_0.getString());
  FIX::MassActionScope MassActionScope_0(10);
  msg.set(MassActionScope_0);
  OrderMassActionReport_0.insert(MassActionScope_0.getString());
  FIX::MassActionType MassActionType_0(2);
  msg.set(MassActionType_0);
  OrderMassActionReport_0.insert(MassActionType_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_35("STRING_757933863");
  msg.set(SecondaryClOrdID_35);
  OrderMassActionReport_0.insert(SecondaryClOrdID_35.getString());
  FIX::Side Side_35('1');
  msg.set(Side_35);
  OrderMassActionReport_0.insert(Side_35.getString());
  FIX::Text Text_72("STRING_893579201");
  msg.set(Text_72);
  OrderMassActionReport_0.insert(Text_72.getString());
  FIX::TotalAffectedOrders TotalAffectedOrders_0(1436788473);
  msg.set(TotalAffectedOrders_0);
  OrderMassActionReport_0.insert(TotalAffectedOrders_0.getString());
  FIX::TradingSessionID TradingSessionID_55("STRING_4");
  msg.set(TradingSessionID_55);
  OrderMassActionReport_0.insert(TradingSessionID_55.getString());
  FIX::TradingSessionSubID TradingSessionSubID_55("STRING_4");
  msg.set(TradingSessionSubID_55);
  OrderMassActionReport_0.insert(TradingSessionSubID_55.getString());
  FIX::TransactTime TransactTime_42(FIX::UTCTIMESTAMP(0, 11, 47, 3, 12, 2005));
  msg.set(TransactTime_42);
  OrderMassActionReport_0.insert(TransactTime_42.getString());
  all_values.push_back(OrderMassActionReport_0);

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_0;
    FIX::AffectedOrderID AffectedOrderID_0("STRING_786043730");
    noAffectedOrders_0_0.set(AffectedOrderID_0);
    AffectedOrdGrp_NoAffectedOrders_0.insert(AffectedOrderID_0.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_0("STRING_509344889");
    noAffectedOrders_0_0.set(AffectedSecondaryOrderID_0);
    AffectedOrdGrp_NoAffectedOrders_0.insert(AffectedSecondaryOrderID_0.getString());
    FIX::OrigClOrdID OrigClOrdID_13("STRING_1743093110");
    noAffectedOrders_0_0.set(OrigClOrdID_13);
    AffectedOrdGrp_NoAffectedOrders_0.insert(OrigClOrdID_13.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_0);

    msg.addGroup(noAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_1;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_1;
    FIX::AffectedOrderID AffectedOrderID_1("STRING_346547479");
    noAffectedOrders_0_1.set(AffectedOrderID_1);
    AffectedOrdGrp_NoAffectedOrders_1.insert(AffectedOrderID_1.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_1("STRING_720388770");
    noAffectedOrders_0_1.set(AffectedSecondaryOrderID_1);
    AffectedOrdGrp_NoAffectedOrders_1.insert(AffectedSecondaryOrderID_1.getString());
    FIX::OrigClOrdID OrigClOrdID_14("STRING_1251012592");
    noAffectedOrders_0_1.set(OrigClOrdID_14);
    AffectedOrdGrp_NoAffectedOrders_1.insert(OrigClOrdID_14.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_1);

    msg.addGroup(noAffectedOrders_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_2;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_2;
    FIX::AffectedOrderID AffectedOrderID_2("STRING_344636874");
    noAffectedOrders_0_2.set(AffectedOrderID_2);
    AffectedOrdGrp_NoAffectedOrders_2.insert(AffectedOrderID_2.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_2("STRING_65744855");
    noAffectedOrders_0_2.set(AffectedSecondaryOrderID_2);
    AffectedOrdGrp_NoAffectedOrders_2.insert(AffectedSecondaryOrderID_2.getString());
    FIX::OrigClOrdID OrigClOrdID_15("STRING_1594446490");
    noAffectedOrders_0_2.set(OrigClOrdID_15);
    AffectedOrdGrp_NoAffectedOrders_2.insert(OrigClOrdID_15.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_2);

    msg.addGroup(noAffectedOrders_0_2);
  }
  // Instrument
  multiset<string> Instrument_51;
  FIX::AttachmentPoint AttachmentPoint_51;
  AttachmentPoint_51.setString("20.950000");
  msg.set(AttachmentPoint_51);
  Instrument_51.insert(AttachmentPoint_51.getString());
  FIX::CFICode CFICode_51("STRING_1713373895");
  msg.set(CFICode_51);
  Instrument_51.insert(CFICode_51.getString());
  FIX::CPProgram CPProgram_51(2);
  msg.set(CPProgram_51);
  Instrument_51.insert(CPProgram_51.getString());
  FIX::CPRegType CPRegType_51("STRING_409192030");
  msg.set(CPRegType_51);
  Instrument_51.insert(CPRegType_51.getString());
  FIX::CapPrice CapPrice_51;
  CapPrice_51.setString("21102047");
  msg.set(CapPrice_51);
  Instrument_51.insert(CapPrice_51.getString());
  FIX::ContractMultiplier ContractMultiplier_51;
  ContractMultiplier_51.setString("3539000");
  msg.set(ContractMultiplier_51);
  Instrument_51.insert(ContractMultiplier_51.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_51(1);
  msg.set(ContractMultiplierUnit_51);
  Instrument_51.insert(ContractMultiplierUnit_51.getString());
  FIX::ContractSettlMonth ContractSettlMonth_51("MONTHYEAR_818008191");
  msg.set(ContractSettlMonth_51);
  Instrument_51.insert(ContractSettlMonth_51.getString());
  FIX::CountryOfIssue CountryOfIssue_51("COUNTRY_1111833922");
  msg.set(CountryOfIssue_51);
  Instrument_51.insert(CountryOfIssue_51.getString());
  FIX::CouponPaymentDate CouponPaymentDate_51("LOCALMKTDATE_1181051579");
  msg.set(CouponPaymentDate_51);
  Instrument_51.insert(CouponPaymentDate_51.getString());
  FIX::CouponRate CouponRate_51;
  CouponRate_51.setString("73.930000");
  msg.set(CouponRate_51);
  Instrument_51.insert(CouponRate_51.getString());
  FIX::CreditRating CreditRating_51("STRING_401138747");
  msg.set(CreditRating_51);
  Instrument_51.insert(CreditRating_51.getString());
  FIX::DatedDate DatedDate_51("LOCALMKTDATE_310582021");
  msg.set(DatedDate_51);
  Instrument_51.insert(DatedDate_51.getString());
  FIX::DetachmentPoint DetachmentPoint_51;
  DetachmentPoint_51.setString("66.640000");
  msg.set(DetachmentPoint_51);
  Instrument_51.insert(DetachmentPoint_51.getString());
  FIX::EncodedIssuer EncodedIssuer_51("DATA_297785359");
  msg.set(EncodedIssuer_51);
  Instrument_51.insert(EncodedIssuer_51.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_51(1456407877);
  msg.set(EncodedIssuerLen_51);
  Instrument_51.insert(EncodedIssuerLen_51.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_51("DATA_997356516");
  msg.set(EncodedSecurityDesc_51);
  Instrument_51.insert(EncodedSecurityDesc_51.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_51(2087779087);
  msg.set(EncodedSecurityDescLen_51);
  Instrument_51.insert(EncodedSecurityDescLen_51.getString());
  FIX::ExerciseStyle ExerciseStyle_51(1);
  msg.set(ExerciseStyle_51);
  Instrument_51.insert(ExerciseStyle_51.getString());
  FIX::Factor Factor_51;
  Factor_51.setString("18943604");
  msg.set(Factor_51);
  Instrument_51.insert(Factor_51.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_51(true);
  msg.set(FlexProductEligibilityIndicator_51);
  Instrument_51.insert(FlexProductEligibilityIndicator_51.getString());
  FIX::FlexibleIndicator FlexibleIndicator_51(true);
  msg.set(FlexibleIndicator_51);
  Instrument_51.insert(FlexibleIndicator_51.getString());
  FIX::FloorPrice FloorPrice_51;
  FloorPrice_51.setString("5329205");
  msg.set(FloorPrice_51);
  Instrument_51.insert(FloorPrice_51.getString());
  FIX::FlowScheduleType FlowScheduleType_51(2);
  msg.set(FlowScheduleType_51);
  Instrument_51.insert(FlowScheduleType_51.getString());
  FIX::InstrRegistry InstrRegistry_51("STRING_1163317494");
  msg.set(InstrRegistry_51);
  Instrument_51.insert(InstrRegistry_51.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_51('8');
  msg.set(InstrmtAssignmentMethod_51);
  Instrument_51.insert(InstrmtAssignmentMethod_51.getString());
  FIX::InterestAccrualDate InterestAccrualDate_51("LOCALMKTDATE_1297428117");
  msg.set(InterestAccrualDate_51);
  Instrument_51.insert(InterestAccrualDate_51.getString());
  FIX::IssueDate IssueDate_51("LOCALMKTDATE_266846439");
  msg.set(IssueDate_51);
  Instrument_51.insert(IssueDate_51.getString());
  FIX::Issuer Issuer_51("STRING_1224104864");
  msg.set(Issuer_51);
  Instrument_51.insert(Issuer_51.getString());
  FIX::ListMethod ListMethod_51(1);
  msg.set(ListMethod_51);
  Instrument_51.insert(ListMethod_51.getString());
  FIX::LocaleOfIssue LocaleOfIssue_51("STRING_1861292929");
  msg.set(LocaleOfIssue_51);
  Instrument_51.insert(LocaleOfIssue_51.getString());
  FIX::MaturityDate MaturityDate_51("LOCALMKTDATE_1598146959");
  msg.set(MaturityDate_51);
  Instrument_51.insert(MaturityDate_51.getString());
  FIX::MaturityMonthYear MaturityMonthYear_51("MONTHYEAR_929063220");
  msg.set(MaturityMonthYear_51);
  Instrument_51.insert(MaturityMonthYear_51.getString());
  FIX::MaturityTime MaturityTime_51("TZTIMEONLY_1786959345");
  msg.set(MaturityTime_51);
  Instrument_51.insert(MaturityTime_51.getString());
  FIX::MinPriceIncrement MinPriceIncrement_51;
  MinPriceIncrement_51.setString("20073389");
  msg.set(MinPriceIncrement_51);
  Instrument_51.insert(MinPriceIncrement_51.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_51;
  MinPriceIncrementAmount_51.setString("8917843");
  msg.set(MinPriceIncrementAmount_51);
  Instrument_51.insert(MinPriceIncrementAmount_51.getString());
  FIX::NTPositionLimit NTPositionLimit_51(2140859404);
  msg.set(NTPositionLimit_51);
  Instrument_51.insert(NTPositionLimit_51.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_51;
  NotionalPercentageOutstanding_51.setString("99.930000");
  msg.set(NotionalPercentageOutstanding_51);
  Instrument_51.insert(NotionalPercentageOutstanding_51.getString());
  FIX::OptAttribute OptAttribute_51('1');
  msg.set(OptAttribute_51);
  Instrument_51.insert(OptAttribute_51.getString());
  FIX::OptPayoutAmount OptPayoutAmount_51;
  OptPayoutAmount_51.setString("11052096");
  msg.set(OptPayoutAmount_51);
  Instrument_51.insert(OptPayoutAmount_51.getString());
  FIX::OptPayoutType OptPayoutType_51(2);
  msg.set(OptPayoutType_51);
  Instrument_51.insert(OptPayoutType_51.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_51;
  OriginalNotionalPercentageOutstanding_51.setString("62.410000");
  msg.set(OriginalNotionalPercentageOutstanding_51);
  Instrument_51.insert(OriginalNotionalPercentageOutstanding_51.getString());
  FIX::Pool Pool_51("STRING_1506348426");
  msg.set(Pool_51);
  Instrument_51.insert(Pool_51.getString());
  FIX::PositionLimit PositionLimit_51(1013729945);
  msg.set(PositionLimit_51);
  Instrument_51.insert(PositionLimit_51.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_51("STRING_INX");
  msg.set(PriceQuoteMethod_51);
  Instrument_51.insert(PriceQuoteMethod_51.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_51("STRING_1804133785");
  msg.set(PriceUnitOfMeasure_51);
  Instrument_51.insert(PriceUnitOfMeasure_51.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_51;
  PriceUnitOfMeasureQty_51.setString("3226541");
  msg.set(PriceUnitOfMeasureQty_51);
  Instrument_51.insert(PriceUnitOfMeasureQty_51.getString());
  FIX::Product Product_53(10);
  msg.set(Product_53);
  Instrument_51.insert(Product_53.getString());
  FIX::ProductComplex ProductComplex_51("STRING_1744429224");
  msg.set(ProductComplex_51);
  Instrument_51.insert(ProductComplex_51.getString());
  FIX::PutOrCall PutOrCall_51(0);
  msg.set(PutOrCall_51);
  Instrument_51.insert(PutOrCall_51.getString());
  FIX::RedemptionDate RedemptionDate_51("LOCALMKTDATE_630692553");
  msg.set(RedemptionDate_51);
  Instrument_51.insert(RedemptionDate_51.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_51("STRING_1812123682");
  msg.set(RepoCollateralSecurityType_51);
  Instrument_51.insert(RepoCollateralSecurityType_51.getString());
  FIX::RepurchaseRate RepurchaseRate_51;
  RepurchaseRate_51.setString("28.360000");
  msg.set(RepurchaseRate_51);
  Instrument_51.insert(RepurchaseRate_51.getString());
  FIX::RepurchaseTerm RepurchaseTerm_51(1163613063);
  msg.set(RepurchaseTerm_51);
  Instrument_51.insert(RepurchaseTerm_51.getString());
  FIX::RestructuringType RestructuringType_51("STRING_MM");
  msg.set(RestructuringType_51);
  Instrument_51.insert(RestructuringType_51.getString());
  FIX::SecurityDesc SecurityDesc_51("STRING_1827460331");
  msg.set(SecurityDesc_51);
  Instrument_51.insert(SecurityDesc_51.getString());
  FIX::SecurityExchange SecurityExchange_51("EXCHANGE_2043081052");
  msg.set(SecurityExchange_51);
  Instrument_51.insert(SecurityExchange_51.getString());
  FIX::SecurityGroup SecurityGroup_51("STRING_1539107499");
  msg.set(SecurityGroup_51);
  Instrument_51.insert(SecurityGroup_51.getString());
  FIX::SecurityID SecurityID_51("STRING_2094306770");
  msg.set(SecurityID_51);
  Instrument_51.insert(SecurityID_51.getString());
  FIX::SecurityIDSource SecurityIDSource_51("STRING_F");
  msg.set(SecurityIDSource_51);
  Instrument_51.insert(SecurityIDSource_51.getString());
  FIX::SecurityStatus SecurityStatus_51("STRING_1");
  msg.set(SecurityStatus_51);
  Instrument_51.insert(SecurityStatus_51.getString());
  FIX::SecuritySubType SecuritySubType_52("STRING_1808116051");
  msg.set(SecuritySubType_52);
  Instrument_51.insert(SecuritySubType_52.getString());
  FIX::SecurityType SecurityType_53("STRING_ONITE");
  msg.set(SecurityType_53);
  Instrument_51.insert(SecurityType_53.getString());
  FIX::Seniority Seniority_51("STRING_SR");
  msg.set(Seniority_51);
  Instrument_51.insert(Seniority_51.getString());
  FIX::SettlMethod SettlMethod_51('C');
  msg.set(SettlMethod_51);
  Instrument_51.insert(SettlMethod_51.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_51("STRING_430220921");
  msg.set(SettleOnOpenFlag_51);
  Instrument_51.insert(SettleOnOpenFlag_51.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_51("STRING_428160701");
  msg.set(StateOrProvinceOfIssue_51);
  Instrument_51.insert(StateOrProvinceOfIssue_51.getString());
  FIX::StrikeCurrency StrikeCurrency_51("USD");
  msg.set(StrikeCurrency_51);
  Instrument_51.insert(StrikeCurrency_51.getString());
  FIX::StrikeMultiplier StrikeMultiplier_51;
  StrikeMultiplier_51.setString("21379531");
  msg.set(StrikeMultiplier_51);
  Instrument_51.insert(StrikeMultiplier_51.getString());
  FIX::StrikePrice StrikePrice_51;
  StrikePrice_51.setString("3986935");
  msg.set(StrikePrice_51);
  Instrument_51.insert(StrikePrice_51.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_51(1);
  msg.set(StrikePriceBoundaryMethod_51);
  Instrument_51.insert(StrikePriceBoundaryMethod_51.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_51;
  StrikePriceBoundaryPrecision_51.setString("57.900000");
  msg.set(StrikePriceBoundaryPrecision_51);
  Instrument_51.insert(StrikePriceBoundaryPrecision_51.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_51(2);
  msg.set(StrikePriceDeterminationMethod_51);
  Instrument_51.insert(StrikePriceDeterminationMethod_51.getString());
  FIX::StrikeValue StrikeValue_51;
  StrikeValue_51.setString("16691951");
  msg.set(StrikeValue_51);
  Instrument_51.insert(StrikeValue_51.getString());
  FIX::Symbol Symbol_51("STRING_1150825047");
  msg.set(Symbol_51);
  Instrument_51.insert(Symbol_51.getString());
  FIX::SymbolSfx SymbolSfx_51("STRING_WI");
  msg.set(SymbolSfx_51);
  Instrument_51.insert(SymbolSfx_51.getString());
  FIX::TimeUnit TimeUnit_51("STRING_Wk");
  msg.set(TimeUnit_51);
  Instrument_51.insert(TimeUnit_51.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_51(2);
  msg.set(UnderlyingPriceDeterminationMethod_51);
  Instrument_51.insert(UnderlyingPriceDeterminationMethod_51.getString());
  FIX::UnitOfMeasure UnitOfMeasure_51("STRING_Bcf");
  msg.set(UnitOfMeasure_51);
  Instrument_51.insert(UnitOfMeasure_51.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_51;
  UnitOfMeasureQty_51.setString("10882841");
  msg.set(UnitOfMeasureQty_51);
  Instrument_51.insert(UnitOfMeasureQty_51.getString());
  FIX::ValuationMethod ValuationMethod_51("STRING_FUT");
  msg.set(ValuationMethod_51);
  Instrument_51.insert(ValuationMethod_51.getString());
  all_values.push_back(Instrument_51);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_99;
    FIX::ComplexEventCondition ComplexEventCondition_99(2);
    noComplexEvents_0_0.set(ComplexEventCondition_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventCondition_99.getString());
    FIX::ComplexEventPrice ComplexEventPrice_99;
    ComplexEventPrice_99.setString("16814627");
    noComplexEvents_0_0.set(ComplexEventPrice_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventPrice_99.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_99(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceBoundaryMethod_99.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_99;
    ComplexEventPriceBoundaryPrecision_99.setString("36.340000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceBoundaryPrecision_99.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_99(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceTimeType_99.getString());
    FIX::ComplexEventType ComplexEventType_99(9);
    noComplexEvents_0_0.set(ComplexEventType_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventType_99.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_99;
    ComplexOptPayoutAmount_99.setString("13792267");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexOptPayoutAmount_99.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_99);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_204;
      FIX::ComplexEventEndDate ComplexEventEndDate_204(FIX::UTCTIMESTAMP(23, 53, 24, 24, 11, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_204);
      ComplexEventDates_NoComplexEventDates_204.insert(ComplexEventEndDate_204.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_204(FIX::UTCTIMESTAMP(20, 14, 12, 11, 5, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_204);
      ComplexEventDates_NoComplexEventDates_204.insert(ComplexEventStartDate_204.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_204);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_421;
        FIX::ComplexEventEndTime ComplexEventEndTime_421(FIX::UTCTIMEONLY(17, 22, 57));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_421);
        ComplexEventTimes_NoComplexEventTimes_421.insert(ComplexEventEndTime_421.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_421(FIX::UTCTIMEONLY(13, 43, 2));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_421);
        ComplexEventTimes_NoComplexEventTimes_421.insert(ComplexEventStartTime_421.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_421);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_422;
        FIX::ComplexEventEndTime ComplexEventEndTime_422(FIX::UTCTIMEONLY(12, 46, 27));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_422);
        ComplexEventTimes_NoComplexEventTimes_422.insert(ComplexEventEndTime_422.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_422(FIX::UTCTIMEONLY(22, 55, 43));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_422);
        ComplexEventTimes_NoComplexEventTimes_422.insert(ComplexEventStartTime_422.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_422);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_423;
        FIX::ComplexEventEndTime ComplexEventEndTime_423(FIX::UTCTIMEONLY(19, 29, 54));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_423);
        ComplexEventTimes_NoComplexEventTimes_423.insert(ComplexEventEndTime_423.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_423(FIX::UTCTIMEONLY(15, 0, 52));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_423);
        ComplexEventTimes_NoComplexEventTimes_423.insert(ComplexEventStartTime_423.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_423);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_100;
    FIX::ComplexEventCondition ComplexEventCondition_100(1);
    noComplexEvents_0_1.set(ComplexEventCondition_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventCondition_100.getString());
    FIX::ComplexEventPrice ComplexEventPrice_100;
    ComplexEventPrice_100.setString("5663451");
    noComplexEvents_0_1.set(ComplexEventPrice_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventPrice_100.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_100(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceBoundaryMethod_100.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_100;
    ComplexEventPriceBoundaryPrecision_100.setString("21.190000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceBoundaryPrecision_100.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_100(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceTimeType_100.getString());
    FIX::ComplexEventType ComplexEventType_100(1);
    noComplexEvents_0_1.set(ComplexEventType_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexEventType_100.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_100;
    ComplexOptPayoutAmount_100.setString("7706977");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_100);
    ComplexEvents_NoComplexEvents_100.insert(ComplexOptPayoutAmount_100.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_100);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_205;
      FIX::ComplexEventEndDate ComplexEventEndDate_205(FIX::UTCTIMESTAMP(12, 56, 20, 1, 8, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_205);
      ComplexEventDates_NoComplexEventDates_205.insert(ComplexEventEndDate_205.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_205(FIX::UTCTIMESTAMP(23, 1, 4, 8, 12, 2006));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_205);
      ComplexEventDates_NoComplexEventDates_205.insert(ComplexEventStartDate_205.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_205);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_424;
        FIX::ComplexEventEndTime ComplexEventEndTime_424(FIX::UTCTIMEONLY(11, 41, 35));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_424);
        ComplexEventTimes_NoComplexEventTimes_424.insert(ComplexEventEndTime_424.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_424(FIX::UTCTIMEONLY(12, 27, 26));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_424);
        ComplexEventTimes_NoComplexEventTimes_424.insert(ComplexEventStartTime_424.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_424);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_206;
      FIX::ComplexEventEndDate ComplexEventEndDate_206(FIX::UTCTIMESTAMP(10, 22, 3, 13, 10, 2001));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_206);
      ComplexEventDates_NoComplexEventDates_206.insert(ComplexEventEndDate_206.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_206(FIX::UTCTIMESTAMP(12, 37, 44, 0, 7, 2007));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_206);
      ComplexEventDates_NoComplexEventDates_206.insert(ComplexEventStartDate_206.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_206);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_425;
        FIX::ComplexEventEndTime ComplexEventEndTime_425(FIX::UTCTIMEONLY(18, 40, 32));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_425);
        ComplexEventTimes_NoComplexEventTimes_425.insert(ComplexEventEndTime_425.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_425(FIX::UTCTIMEONLY(7, 32, 42));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_425);
        ComplexEventTimes_NoComplexEventTimes_425.insert(ComplexEventStartTime_425.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_425);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_207;
      FIX::ComplexEventEndDate ComplexEventEndDate_207(FIX::UTCTIMESTAMP(19, 15, 59, 21, 5, 2009));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_207);
      ComplexEventDates_NoComplexEventDates_207.insert(ComplexEventEndDate_207.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_207(FIX::UTCTIMESTAMP(0, 53, 26, 8, 3, 2015));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_207);
      ComplexEventDates_NoComplexEventDates_207.insert(ComplexEventStartDate_207.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_207);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_426;
        FIX::ComplexEventEndTime ComplexEventEndTime_426(FIX::UTCTIMEONLY(19, 15, 14));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_426);
        ComplexEventTimes_NoComplexEventTimes_426.insert(ComplexEventEndTime_426.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_426(FIX::UTCTIMEONLY(21, 21, 3));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_426);
        ComplexEventTimes_NoComplexEventTimes_426.insert(ComplexEventStartTime_426.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_426);

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
    multiset<string> EvntGrp_NoEvents_94;
    FIX::EventDate EventDate_94("LOCALMKTDATE_1033447335");
    noEvents_0_0.set(EventDate_94);
    EvntGrp_NoEvents_94.insert(EventDate_94.getString());
    FIX::EventPx EventPx_94;
    EventPx_94.setString("19653094");
    noEvents_0_0.set(EventPx_94);
    EvntGrp_NoEvents_94.insert(EventPx_94.getString());
    FIX::EventText EventText_94("STRING_1983292618");
    noEvents_0_0.set(EventText_94);
    EvntGrp_NoEvents_94.insert(EventText_94.getString());
    FIX::EventTime EventTime_94(FIX::UTCTIMESTAMP(14, 22, 12, 14, 11, 2015));
    noEvents_0_0.set(EventTime_94);
    EvntGrp_NoEvents_94.insert(EventTime_94.getString());
    FIX::EventType EventType_94(2);
    noEvents_0_0.set(EventType_94);
    EvntGrp_NoEvents_94.insert(EventType_94.getString());
    all_values.push_back(EvntGrp_NoEvents_94);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_95;
    FIX::EventDate EventDate_95("LOCALMKTDATE_1549052179");
    noEvents_0_1.set(EventDate_95);
    EvntGrp_NoEvents_95.insert(EventDate_95.getString());
    FIX::EventPx EventPx_95;
    EventPx_95.setString("20239965");
    noEvents_0_1.set(EventPx_95);
    EvntGrp_NoEvents_95.insert(EventPx_95.getString());
    FIX::EventText EventText_95("STRING_1190259300");
    noEvents_0_1.set(EventText_95);
    EvntGrp_NoEvents_95.insert(EventText_95.getString());
    FIX::EventTime EventTime_95(FIX::UTCTIMESTAMP(0, 53, 41, 24, 12, 2006));
    noEvents_0_1.set(EventTime_95);
    EvntGrp_NoEvents_95.insert(EventTime_95.getString());
    FIX::EventType EventType_95(6);
    noEvents_0_1.set(EventType_95);
    EvntGrp_NoEvents_95.insert(EventType_95.getString());
    all_values.push_back(EvntGrp_NoEvents_95);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_95;
    FIX::InstrumentPartyID InstrumentPartyID_95("STRING_1035186523");
    noInstrumentParties_0_0.set(InstrumentPartyID_95);
    InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyID_95.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_95('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_95);
    InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyIDSource_95.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_95(1003035379);
    noInstrumentParties_0_0.set(InstrumentPartyRole_95);
    InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyRole_95.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_95);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208;
      FIX::InstrumentPartySubID InstrumentPartySubID_208("STRING_713092038");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_208);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208.insert(InstrumentPartySubID_208.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_208(1566053560);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_208);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208.insert(InstrumentPartySubIDType_208.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209;
      FIX::InstrumentPartySubID InstrumentPartySubID_209("STRING_1128604570");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_209);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209.insert(InstrumentPartySubID_209.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_209(1846165903);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_209);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209.insert(InstrumentPartySubIDType_209.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_96;
    FIX::InstrumentPartyID InstrumentPartyID_96("STRING_452017247");
    noInstrumentParties_0_1.set(InstrumentPartyID_96);
    InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyID_96.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_96('9');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_96);
    InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyIDSource_96.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_96(1681974873);
    noInstrumentParties_0_1.set(InstrumentPartyRole_96);
    InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyRole_96.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_96);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210;
      FIX::InstrumentPartySubID InstrumentPartySubID_210("STRING_824846703");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_210);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210.insert(InstrumentPartySubID_210.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_210(989456148);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_210);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210.insert(InstrumentPartySubIDType_210.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211;
      FIX::InstrumentPartySubID InstrumentPartySubID_211("STRING_1401523537");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_211);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211.insert(InstrumentPartySubID_211.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_211(1224354525);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_211);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211.insert(InstrumentPartySubIDType_211.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_97;
    FIX::InstrumentPartyID InstrumentPartyID_97("STRING_163537874");
    noInstrumentParties_0_2.set(InstrumentPartyID_97);
    InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyID_97.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_97('2');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_97);
    InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyIDSource_97.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_97(829500679);
    noInstrumentParties_0_2.set(InstrumentPartyRole_97);
    InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyRole_97.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_97);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212;
      FIX::InstrumentPartySubID InstrumentPartySubID_212("STRING_134267048");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_212);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212.insert(InstrumentPartySubID_212.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_212(2019759979);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_212);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212.insert(InstrumentPartySubIDType_212.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_111;
    FIX::SecurityAltID SecurityAltID_111("STRING_544586456");
    noSecurityAltID_0_0.set(SecurityAltID_111);
    SecAltIDGrp_NoSecurityAltID_111.insert(SecurityAltID_111.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_111("STRING_1298501405");
    noSecurityAltID_0_0.set(SecurityAltIDSource_111);
    SecAltIDGrp_NoSecurityAltID_111.insert(SecurityAltIDSource_111.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_111);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_102;
  FIX::SecurityXML SecurityXML_103("XMLDATA_670924221");
  msg.set(SecurityXML_103);
  FIX::SecurityXMLLen SecurityXMLLen_51(93575176);
  msg.set(SecurityXMLLen_51);
  FIX::SecurityXMLSchema SecurityXMLSchema_51("STRING_313672892");
  msg.set(SecurityXMLSchema_51);
  SecurityXML_102.insert(SecurityXMLSchema_51.getString());
  all_values.push_back(SecurityXML_102);

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_0;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_0("STRING_304277361");
    noNotAffectedOrders_0_0.set(NotAffOrigClOrdID_0);
    NotAffectedOrdersGrp_NoNotAffectedOrders_0.insert(NotAffOrigClOrdID_0.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_0("STRING_849441998");
    noNotAffectedOrders_0_0.set(NotAffectedOrderID_0);
    NotAffectedOrdersGrp_NoNotAffectedOrders_0.insert(NotAffectedOrderID_0.getString());
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_0);

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_87;
    FIX::PartyID PartyID_87("STRING_699192522");
    noPartyIDs_0_0.set(PartyID_87);
    Parties_NoPartyIDs_87.insert(PartyID_87.getString());
    FIX::PartyIDSource PartyIDSource_87('F');
    noPartyIDs_0_0.set(PartyIDSource_87);
    Parties_NoPartyIDs_87.insert(PartyIDSource_87.getString());
    FIX::PartyRole PartyRole_87(30);
    noPartyIDs_0_0.set(PartyRole_87);
    Parties_NoPartyIDs_87.insert(PartyRole_87.getString());
    all_values.push_back(Parties_NoPartyIDs_87);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_179;
      FIX::PartySubID PartySubID_179("STRING_1271047290");
      noPartySubIDs_0_1_0.set(PartySubID_179);
      PtysSubGrp_NoPartySubIDs_179.insert(PartySubID_179.getString());
      FIX::PartySubIDType PartySubIDType_179(1);
      noPartySubIDs_0_1_0.set(PartySubIDType_179);
      PtysSubGrp_NoPartySubIDs_179.insert(PartySubIDType_179.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_179);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_88;
    FIX::PartyID PartyID_88("STRING_1110966815");
    noPartyIDs_0_1.set(PartyID_88);
    Parties_NoPartyIDs_88.insert(PartyID_88.getString());
    FIX::PartyIDSource PartyIDSource_88('B');
    noPartyIDs_0_1.set(PartyIDSource_88);
    Parties_NoPartyIDs_88.insert(PartyIDSource_88.getString());
    FIX::PartyRole PartyRole_88(78);
    noPartyIDs_0_1.set(PartyRole_88);
    Parties_NoPartyIDs_88.insert(PartyRole_88.getString());
    all_values.push_back(Parties_NoPartyIDs_88);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_180;
      FIX::PartySubID PartySubID_180("STRING_561322414");
      noPartySubIDs_1_1_0.set(PartySubID_180);
      PtysSubGrp_NoPartySubIDs_180.insert(PartySubID_180.getString());
      FIX::PartySubIDType PartySubIDType_180(9);
      noPartySubIDs_1_1_0.set(PartySubIDType_180);
      PtysSubGrp_NoPartySubIDs_180.insert(PartySubIDType_180.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_180);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_181;
      FIX::PartySubID PartySubID_181("STRING_1634914189");
      noPartySubIDs_1_1_1.set(PartySubID_181);
      PtysSubGrp_NoPartySubIDs_181.insert(PartySubID_181.getString());
      FIX::PartySubIDType PartySubIDType_181(12);
      noPartySubIDs_1_1_1.set(PartySubIDType_181);
      PtysSubGrp_NoPartySubIDs_181.insert(PartySubIDType_181.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_181);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_89;
    FIX::PartyID PartyID_89("STRING_231745089");
    noPartyIDs_0_2.set(PartyID_89);
    Parties_NoPartyIDs_89.insert(PartyID_89.getString());
    FIX::PartyIDSource PartyIDSource_89('5');
    noPartyIDs_0_2.set(PartyIDSource_89);
    Parties_NoPartyIDs_89.insert(PartyIDSource_89.getString());
    FIX::PartyRole PartyRole_89(26);
    noPartyIDs_0_2.set(PartyRole_89);
    Parties_NoPartyIDs_89.insert(PartyRole_89.getString());
    all_values.push_back(Parties_NoPartyIDs_89);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_182;
      FIX::PartySubID PartySubID_182("STRING_1363558468");
      noPartySubIDs_2_1_0.set(PartySubID_182);
      PtysSubGrp_NoPartySubIDs_182.insert(PartySubID_182.getString());
      FIX::PartySubIDType PartySubIDType_182(12);
      noPartySubIDs_2_1_0.set(PartySubIDType_182);
      PtysSubGrp_NoPartySubIDs_182.insert(PartySubIDType_182.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_182);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_183;
      FIX::PartySubID PartySubID_183("STRING_933522100");
      noPartySubIDs_2_1_1.set(PartySubID_183);
      PtysSubGrp_NoPartySubIDs_183.insert(PartySubID_183.getString());
      FIX::PartySubIDType PartySubIDType_183(7);
      noPartySubIDs_2_1_1.set(PartySubIDType_183);
      PtysSubGrp_NoPartySubIDs_183.insert(PartySubIDType_183.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_183);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_2;
    FIX::TargetPartyID TargetPartyID_2("STRING_84539857");
    noTargetPartyIDs_0_0.set(TargetPartyID_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyID_2.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_2('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyIDSource_2.getString());
    FIX::TargetPartyRole TargetPartyRole_2(845545160);
    noTargetPartyIDs_0_0.set(TargetPartyRole_2);
    TargetParties_NoTargetPartyIDs_2.insert(TargetPartyRole_2.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_2);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_3;
    FIX::TargetPartyID TargetPartyID_3("STRING_398212749");
    noTargetPartyIDs_0_1.set(TargetPartyID_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyID_3.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_3('2');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyIDSource_3.getString());
    FIX::TargetPartyRole TargetPartyRole_3(1149822521);
    noTargetPartyIDs_0_1.set(TargetPartyRole_3);
    TargetParties_NoTargetPartyIDs_3.insert(TargetPartyRole_3.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_3);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_75;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_75("DATA_1247654747");
  msg.set(EncodedUnderlyingIssuer_75);
  UnderlyingInstrument_75.insert(EncodedUnderlyingIssuer_75.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_75(2036902501);
  msg.set(EncodedUnderlyingIssuerLen_75);
  UnderlyingInstrument_75.insert(EncodedUnderlyingIssuerLen_75.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_75("DATA_1849015043");
  msg.set(EncodedUnderlyingSecurityDesc_75);
  UnderlyingInstrument_75.insert(EncodedUnderlyingSecurityDesc_75.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_75(952648477);
  msg.set(EncodedUnderlyingSecurityDescLen_75);
  UnderlyingInstrument_75.insert(EncodedUnderlyingSecurityDescLen_75.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_75;
  UnderlyingAdjustedQuantity_75.setString("2918950");
  msg.set(UnderlyingAdjustedQuantity_75);
  UnderlyingInstrument_75.insert(UnderlyingAdjustedQuantity_75.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_75;
  UnderlyingAllocationPercent_75.setString("59.550000");
  msg.set(UnderlyingAllocationPercent_75);
  UnderlyingInstrument_75.insert(UnderlyingAllocationPercent_75.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_75;
  UnderlyingAttachmentPoint_75.setString("21.190000");
  msg.set(UnderlyingAttachmentPoint_75);
  UnderlyingInstrument_75.insert(UnderlyingAttachmentPoint_75.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_75("STRING_1822975824");
  msg.set(UnderlyingCFICode_75);
  UnderlyingInstrument_75.insert(UnderlyingCFICode_75.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_75("STRING_77299123");
  msg.set(UnderlyingCPProgram_75);
  UnderlyingInstrument_75.insert(UnderlyingCPProgram_75.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_75("STRING_1799276656");
  msg.set(UnderlyingCPRegType_75);
  UnderlyingInstrument_75.insert(UnderlyingCPRegType_75.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_75;
  UnderlyingCapValue_75.setString("55196");
  msg.set(UnderlyingCapValue_75);
  UnderlyingInstrument_75.insert(UnderlyingCapValue_75.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_75;
  UnderlyingCashAmount_75.setString("7227571");
  msg.set(UnderlyingCashAmount_75);
  UnderlyingInstrument_75.insert(UnderlyingCashAmount_75.getString());
  FIX::UnderlyingCashType UnderlyingCashType_75("STRING_DIFF");
  msg.set(UnderlyingCashType_75);
  UnderlyingInstrument_75.insert(UnderlyingCashType_75.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_75;
  UnderlyingContractMultiplier_75.setString("11603938");
  msg.set(UnderlyingContractMultiplier_75);
  UnderlyingInstrument_75.insert(UnderlyingContractMultiplier_75.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_75(210187705);
  msg.set(UnderlyingContractMultiplierUnit_75);
  UnderlyingInstrument_75.insert(UnderlyingContractMultiplierUnit_75.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_75("COUNTRY_28477726");
  msg.set(UnderlyingCountryOfIssue_75);
  UnderlyingInstrument_75.insert(UnderlyingCountryOfIssue_75.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_75("LOCALMKTDATE_1392138986");
  msg.set(UnderlyingCouponPaymentDate_75);
  UnderlyingInstrument_75.insert(UnderlyingCouponPaymentDate_75.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_75;
  UnderlyingCouponRate_75.setString("97.680000");
  msg.set(UnderlyingCouponRate_75);
  UnderlyingInstrument_75.insert(UnderlyingCouponRate_75.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_75("STRING_101594206");
  msg.set(UnderlyingCreditRating_75);
  UnderlyingInstrument_75.insert(UnderlyingCreditRating_75.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_75("USD");
  msg.set(UnderlyingCurrency_75);
  UnderlyingInstrument_75.insert(UnderlyingCurrency_75.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_75;
  UnderlyingCurrentValue_75.setString("3089777");
  msg.set(UnderlyingCurrentValue_75);
  UnderlyingInstrument_75.insert(UnderlyingCurrentValue_75.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_75;
  UnderlyingDetachmentPoint_75.setString("32.070000");
  msg.set(UnderlyingDetachmentPoint_75);
  UnderlyingInstrument_75.insert(UnderlyingDetachmentPoint_75.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_75;
  UnderlyingDirtyPrice_75.setString("17427304");
  msg.set(UnderlyingDirtyPrice_75);
  UnderlyingInstrument_75.insert(UnderlyingDirtyPrice_75.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_75;
  UnderlyingEndPrice_75.setString("10609477");
  msg.set(UnderlyingEndPrice_75);
  UnderlyingInstrument_75.insert(UnderlyingEndPrice_75.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_75;
  UnderlyingEndValue_75.setString("13239630");
  msg.set(UnderlyingEndValue_75);
  UnderlyingInstrument_75.insert(UnderlyingEndValue_75.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_75(784186940);
  msg.set(UnderlyingExerciseStyle_75);
  UnderlyingInstrument_75.insert(UnderlyingExerciseStyle_75.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_75;
  UnderlyingFXRate_75.setString("19064928");
  msg.set(UnderlyingFXRate_75);
  UnderlyingInstrument_75.insert(UnderlyingFXRate_75.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_75('M');
  msg.set(UnderlyingFXRateCalc_75);
  UnderlyingInstrument_75.insert(UnderlyingFXRateCalc_75.getString());
  FIX::UnderlyingFactor UnderlyingFactor_75;
  UnderlyingFactor_75.setString("8057731");
  msg.set(UnderlyingFactor_75);
  UnderlyingInstrument_75.insert(UnderlyingFactor_75.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_75(908831752);
  msg.set(UnderlyingFlowScheduleType_75);
  UnderlyingInstrument_75.insert(UnderlyingFlowScheduleType_75.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_75("STRING_822346913");
  msg.set(UnderlyingInstrRegistry_75);
  UnderlyingInstrument_75.insert(UnderlyingInstrRegistry_75.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_75("LOCALMKTDATE_695192013");
  msg.set(UnderlyingIssueDate_75);
  UnderlyingInstrument_75.insert(UnderlyingIssueDate_75.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_75("STRING_610363147");
  msg.set(UnderlyingIssuer_75);
  UnderlyingInstrument_75.insert(UnderlyingIssuer_75.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_75("STRING_1774995390");
  msg.set(UnderlyingLocaleOfIssue_75);
  UnderlyingInstrument_75.insert(UnderlyingLocaleOfIssue_75.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_75("LOCALMKTDATE_987087066");
  msg.set(UnderlyingMaturityDate_75);
  UnderlyingInstrument_75.insert(UnderlyingMaturityDate_75.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_75("MONTHYEAR_1724179103");
  msg.set(UnderlyingMaturityMonthYear_75);
  UnderlyingInstrument_75.insert(UnderlyingMaturityMonthYear_75.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_75("TZTIMEONLY_1851207509");
  msg.set(UnderlyingMaturityTime_75);
  UnderlyingInstrument_75.insert(UnderlyingMaturityTime_75.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_75;
  UnderlyingNotionalPercentageOutstanding_75.setString("92.430000");
  msg.set(UnderlyingNotionalPercentageOutstanding_75);
  UnderlyingInstrument_75.insert(UnderlyingNotionalPercentageOutstanding_75.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_75('1');
  msg.set(UnderlyingOptAttribute_75);
  UnderlyingInstrument_75.insert(UnderlyingOptAttribute_75.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_75;
  UnderlyingOriginalNotionalPercentageOutstanding_75.setString("5.170000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_75);
  UnderlyingInstrument_75.insert(UnderlyingOriginalNotionalPercentageOutstanding_75.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_75("STRING_668098928");
  msg.set(UnderlyingPriceUnitOfMeasure_75);
  UnderlyingInstrument_75.insert(UnderlyingPriceUnitOfMeasure_75.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_75;
  UnderlyingPriceUnitOfMeasureQty_75.setString("3767517");
  msg.set(UnderlyingPriceUnitOfMeasureQty_75);
  UnderlyingInstrument_75.insert(UnderlyingPriceUnitOfMeasureQty_75.getString());
  FIX::UnderlyingProduct UnderlyingProduct_75(1716115940);
  msg.set(UnderlyingProduct_75);
  UnderlyingInstrument_75.insert(UnderlyingProduct_75.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_75(1828492825);
  msg.set(UnderlyingPutOrCall_75);
  UnderlyingInstrument_75.insert(UnderlyingPutOrCall_75.getString());
  FIX::UnderlyingPx UnderlyingPx_75;
  UnderlyingPx_75.setString("5869394");
  msg.set(UnderlyingPx_75);
  UnderlyingInstrument_75.insert(UnderlyingPx_75.getString());
  FIX::UnderlyingQty UnderlyingQty_75;
  UnderlyingQty_75.setString("17445936");
  msg.set(UnderlyingQty_75);
  UnderlyingInstrument_75.insert(UnderlyingQty_75.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_75("LOCALMKTDATE_1073148163");
  msg.set(UnderlyingRedemptionDate_75);
  UnderlyingInstrument_75.insert(UnderlyingRedemptionDate_75.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_75("STRING_448095567");
  msg.set(UnderlyingRepoCollateralSecurityType_75);
  UnderlyingInstrument_75.insert(UnderlyingRepoCollateralSecurityType_75.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_75;
  UnderlyingRepurchaseRate_75.setString("78.730000");
  msg.set(UnderlyingRepurchaseRate_75);
  UnderlyingInstrument_75.insert(UnderlyingRepurchaseRate_75.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_75(1379049270);
  msg.set(UnderlyingRepurchaseTerm_75);
  UnderlyingInstrument_75.insert(UnderlyingRepurchaseTerm_75.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_75("STRING_1672810155");
  msg.set(UnderlyingRestructuringType_75);
  UnderlyingInstrument_75.insert(UnderlyingRestructuringType_75.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_75("STRING_7681960");
  msg.set(UnderlyingSecurityDesc_75);
  UnderlyingInstrument_75.insert(UnderlyingSecurityDesc_75.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_75("EXCHANGE_470988829");
  msg.set(UnderlyingSecurityExchange_75);
  UnderlyingInstrument_75.insert(UnderlyingSecurityExchange_75.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_75("STRING_1268056985");
  msg.set(UnderlyingSecurityID_75);
  UnderlyingInstrument_75.insert(UnderlyingSecurityID_75.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_75("STRING_1068629678");
  msg.set(UnderlyingSecurityIDSource_75);
  UnderlyingInstrument_75.insert(UnderlyingSecurityIDSource_75.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_75("STRING_1794951893");
  msg.set(UnderlyingSecuritySubType_75);
  UnderlyingInstrument_75.insert(UnderlyingSecuritySubType_75.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_75("STRING_2052243925");
  msg.set(UnderlyingSecurityType_75);
  UnderlyingInstrument_75.insert(UnderlyingSecurityType_75.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_75("STRING_827638909");
  msg.set(UnderlyingSeniority_75);
  UnderlyingInstrument_75.insert(UnderlyingSeniority_75.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_75("STRING_1369644059");
  msg.set(UnderlyingSettlMethod_75);
  UnderlyingInstrument_75.insert(UnderlyingSettlMethod_75.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_75(2);
  msg.set(UnderlyingSettlementType_75);
  UnderlyingInstrument_75.insert(UnderlyingSettlementType_75.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_75;
  UnderlyingStartValue_75.setString("17364706");
  msg.set(UnderlyingStartValue_75);
  UnderlyingInstrument_75.insert(UnderlyingStartValue_75.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_75("STRING_44507324");
  msg.set(UnderlyingStateOrProvinceOfIssue_75);
  UnderlyingInstrument_75.insert(UnderlyingStateOrProvinceOfIssue_75.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_75("JPY");
  msg.set(UnderlyingStrikeCurrency_75);
  UnderlyingInstrument_75.insert(UnderlyingStrikeCurrency_75.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_75;
  UnderlyingStrikePrice_75.setString("18195027");
  msg.set(UnderlyingStrikePrice_75);
  UnderlyingInstrument_75.insert(UnderlyingStrikePrice_75.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_75("STRING_245328868");
  msg.set(UnderlyingSymbol_75);
  UnderlyingInstrument_75.insert(UnderlyingSymbol_75.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_75("STRING_1923529263");
  msg.set(UnderlyingSymbolSfx_75);
  UnderlyingInstrument_75.insert(UnderlyingSymbolSfx_75.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_75("STRING_1523226575");
  msg.set(UnderlyingTimeUnit_75);
  UnderlyingInstrument_75.insert(UnderlyingTimeUnit_75.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_75("STRING_907908111");
  msg.set(UnderlyingUnitOfMeasure_75);
  UnderlyingInstrument_75.insert(UnderlyingUnitOfMeasure_75.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_75;
  UnderlyingUnitOfMeasureQty_75.setString("15775238");
  msg.set(UnderlyingUnitOfMeasureQty_75);
  UnderlyingInstrument_75.insert(UnderlyingUnitOfMeasureQty_75.getString());
  all_values.push_back(UnderlyingInstrument_75);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_159;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_159("STRING_1576007039");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_159);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_159.insert(UnderlyingSecurityAltID_159.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_159("STRING_1954275583");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_159);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_159.insert(UnderlyingSecurityAltIDSource_159.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_159);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_160;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_160("STRING_447375737");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_160);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_160.insert(UnderlyingSecurityAltID_160.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_160("STRING_1257016216");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_160);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_160.insert(UnderlyingSecurityAltIDSource_160.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_160);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_144;
    FIX::UnderlyingStipType UnderlyingStipType_144("STRING_44485756");
    noUnderlyingStips_0_0.set(UnderlyingStipType_144);
    UnderlyingStipulations_NoUnderlyingStips_144.insert(UnderlyingStipType_144.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_144("STRING_182680732");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_144);
    UnderlyingStipulations_NoUnderlyingStips_144.insert(UnderlyingStipValue_144.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_144);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_157;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_157("STRING_1890673629");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_157);
    UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyID_157.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_157('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_157);
    UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyIDSource_157.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_157(367153457);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_157);
    UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyRole_157.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_157);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_318("STRING_2032718832");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_318);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318.insert(UnderlyingInstrumentPartySubID_318.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_318(1635210442);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_318);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318.insert(UnderlyingInstrumentPartySubIDType_318.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_319("STRING_819501620");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_319);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319.insert(UnderlyingInstrumentPartySubID_319.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_319(1680187077);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_319);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319.insert(UnderlyingInstrumentPartySubIDType_319.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319);

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
