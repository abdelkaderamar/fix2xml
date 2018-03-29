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
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelReport_0;
  FIX::ClOrdID ClOrdID_39("STRING_57559782");
  msg.set(ClOrdID_39);
  OrderMassCancelReport_0.insert(ClOrdID_39.getString());
  FIX::EncodedText EncodedText_70("DATA_1435668772");
  msg.set(EncodedText_70);
  OrderMassCancelReport_0.insert(EncodedText_70.getString());
  FIX::EncodedTextLen EncodedTextLen_70(1873324266);
  msg.set(EncodedTextLen_70);
  OrderMassCancelReport_0.insert(EncodedTextLen_70.getString());
  FIX::MarketID MarketID_13("EXCHANGE_1930390570");
  msg.set(MarketID_13);
  OrderMassCancelReport_0.insert(MarketID_13.getString());
  FIX::MarketSegmentID MarketSegmentID_13("STRING_861626840");
  msg.set(MarketSegmentID_13);
  OrderMassCancelReport_0.insert(MarketSegmentID_13.getString());
  FIX::MassActionReportID MassActionReportID_1("STRING_1929348768");
  msg.set(MassActionReportID_1);
  OrderMassCancelReport_0.insert(MassActionReportID_1.getString());
  FIX::MassCancelRejectReason MassCancelRejectReason_0(8);
  msg.set(MassCancelRejectReason_0);
  OrderMassCancelReport_0.insert(MassCancelRejectReason_0.getString());
  FIX::MassCancelRequestType MassCancelRequestType_0('5');
  msg.set(MassCancelRequestType_0);
  OrderMassCancelReport_0.insert(MassCancelRequestType_0.getString());
  FIX::MassCancelResponse MassCancelResponse_0('A');
  msg.set(MassCancelResponse_0);
  OrderMassCancelReport_0.insert(MassCancelResponse_0.getString());
  FIX::OrderID OrderID_30("STRING_1439748221");
  msg.set(OrderID_30);
  OrderMassCancelReport_0.insert(OrderID_30.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_37("STRING_409303762");
  msg.set(SecondaryClOrdID_37);
  OrderMassCancelReport_0.insert(SecondaryClOrdID_37.getString());
  FIX::SecondaryOrderID SecondaryOrderID_23("STRING_1248918802");
  msg.set(SecondaryOrderID_23);
  OrderMassCancelReport_0.insert(SecondaryOrderID_23.getString());
  FIX::Side Side_37('C');
  msg.set(Side_37);
  OrderMassCancelReport_0.insert(Side_37.getString());
  FIX::Text Text_70("STRING_1491700245");
  msg.set(Text_70);
  OrderMassCancelReport_0.insert(Text_70.getString());
  FIX::TotalAffectedOrders TotalAffectedOrders_1(802547036);
  msg.set(TotalAffectedOrders_1);
  OrderMassCancelReport_0.insert(TotalAffectedOrders_1.getString());
  FIX::TradingSessionID TradingSessionID_72("STRING_4");
  msg.set(TradingSessionID_72);
  OrderMassCancelReport_0.insert(TradingSessionID_72.getString());
  FIX::TradingSessionSubID TradingSessionSubID_72("STRING_2");
  msg.set(TradingSessionSubID_72);
  OrderMassCancelReport_0.insert(TradingSessionSubID_72.getString());
  FIX::TransactTime TransactTime_52(FIX::UTCTIMESTAMP(10, 55, 34, 26, 9, 2015));
  msg.set(TransactTime_52);
  OrderMassCancelReport_0.insert(TransactTime_52.getString());
  all_values.push_back(OrderMassCancelReport_0);

  all_compo_names.insert("OrderMassCancelReport");

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_1;
    FIX::AffectedOrderID AffectedOrderID_1("STRING_966763402");
    noAffectedOrders_0_0.set(AffectedOrderID_1);
    AffectedOrdGrp_NoAffectedOrders_1.insert(AffectedOrderID_1.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_1("STRING_43593146");
    noAffectedOrders_0_0.set(AffectedSecondaryOrderID_1);
    AffectedOrdGrp_NoAffectedOrders_1.insert(AffectedSecondaryOrderID_1.getString());
    FIX::OrigClOrdID OrigClOrdID_13("STRING_764110357");
    noAffectedOrders_0_0.set(OrigClOrdID_13);
    AffectedOrdGrp_NoAffectedOrders_1.insert(OrigClOrdID_13.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_1);
    all_compo_names.insert("AffectedOrdGrp.NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_1;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_2;
    FIX::AffectedOrderID AffectedOrderID_2("STRING_1934845197");
    noAffectedOrders_0_1.set(AffectedOrderID_2);
    AffectedOrdGrp_NoAffectedOrders_2.insert(AffectedOrderID_2.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_2("STRING_583766118");
    noAffectedOrders_0_1.set(AffectedSecondaryOrderID_2);
    AffectedOrdGrp_NoAffectedOrders_2.insert(AffectedSecondaryOrderID_2.getString());
    FIX::OrigClOrdID OrigClOrdID_14("STRING_511007211");
    noAffectedOrders_0_1.set(OrigClOrdID_14);
    AffectedOrdGrp_NoAffectedOrders_2.insert(OrigClOrdID_14.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_2);
    all_compo_names.insert("AffectedOrdGrp.NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_2;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_3;
    FIX::AffectedOrderID AffectedOrderID_3("STRING_1992404979");
    noAffectedOrders_0_2.set(AffectedOrderID_3);
    AffectedOrdGrp_NoAffectedOrders_3.insert(AffectedOrderID_3.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_3("STRING_2019434891");
    noAffectedOrders_0_2.set(AffectedSecondaryOrderID_3);
    AffectedOrdGrp_NoAffectedOrders_3.insert(AffectedSecondaryOrderID_3.getString());
    FIX::OrigClOrdID OrigClOrdID_15("STRING_236847830");
    noAffectedOrders_0_2.set(OrigClOrdID_15);
    AffectedOrdGrp_NoAffectedOrders_3.insert(OrigClOrdID_15.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_3);
    all_compo_names.insert("AffectedOrdGrp.NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_2);
  }
  // Instrument
  multiset<string> Instrument_59;
  FIX::AttachmentPoint AttachmentPoint_59;
  AttachmentPoint_59.setString("19.010000");
  msg.set(AttachmentPoint_59);
  Instrument_59.insert(AttachmentPoint_59.getString());
  FIX::CFICode CFICode_59("STRING_733578083");
  msg.set(CFICode_59);
  Instrument_59.insert(CFICode_59.getString());
  FIX::CPProgram CPProgram_59(1);
  msg.set(CPProgram_59);
  Instrument_59.insert(CPProgram_59.getString());
  FIX::CPRegType CPRegType_59("STRING_1235077294");
  msg.set(CPRegType_59);
  Instrument_59.insert(CPRegType_59.getString());
  FIX::CapPrice CapPrice_59;
  CapPrice_59.setString("20660066");
  msg.set(CapPrice_59);
  Instrument_59.insert(CapPrice_59.getString());
  FIX::ContractMultiplier ContractMultiplier_59;
  ContractMultiplier_59.setString("3641314");
  msg.set(ContractMultiplier_59);
  Instrument_59.insert(ContractMultiplier_59.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_59(1);
  msg.set(ContractMultiplierUnit_59);
  Instrument_59.insert(ContractMultiplierUnit_59.getString());
  FIX::ContractSettlMonth ContractSettlMonth_59("MONTHYEAR_327826733");
  msg.set(ContractSettlMonth_59);
  Instrument_59.insert(ContractSettlMonth_59.getString());
  FIX::CountryOfIssue CountryOfIssue_59("COUNTRY_1613050239");
  msg.set(CountryOfIssue_59);
  Instrument_59.insert(CountryOfIssue_59.getString());
  FIX::CouponPaymentDate CouponPaymentDate_59("LOCALMKTDATE_1969044375");
  msg.set(CouponPaymentDate_59);
  Instrument_59.insert(CouponPaymentDate_59.getString());
  FIX::CouponRate CouponRate_59;
  CouponRate_59.setString("69.780000");
  msg.set(CouponRate_59);
  Instrument_59.insert(CouponRate_59.getString());
  FIX::CreditRating CreditRating_59("STRING_268113627");
  msg.set(CreditRating_59);
  Instrument_59.insert(CreditRating_59.getString());
  FIX::DatedDate DatedDate_59("LOCALMKTDATE_1432268518");
  msg.set(DatedDate_59);
  Instrument_59.insert(DatedDate_59.getString());
  FIX::DetachmentPoint DetachmentPoint_59;
  DetachmentPoint_59.setString("92.670000");
  msg.set(DetachmentPoint_59);
  Instrument_59.insert(DetachmentPoint_59.getString());
  FIX::EncodedIssuer EncodedIssuer_59("DATA_2040235348");
  msg.set(EncodedIssuer_59);
  Instrument_59.insert(EncodedIssuer_59.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_59(1565364656);
  msg.set(EncodedIssuerLen_59);
  Instrument_59.insert(EncodedIssuerLen_59.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_59("DATA_1998914643");
  msg.set(EncodedSecurityDesc_59);
  Instrument_59.insert(EncodedSecurityDesc_59.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_59(887884734);
  msg.set(EncodedSecurityDescLen_59);
  Instrument_59.insert(EncodedSecurityDescLen_59.getString());
  FIX::ExerciseStyle ExerciseStyle_59(2);
  msg.set(ExerciseStyle_59);
  Instrument_59.insert(ExerciseStyle_59.getString());
  FIX::Factor Factor_59;
  Factor_59.setString("10806191");
  msg.set(Factor_59);
  Instrument_59.insert(Factor_59.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_59(false);
  msg.set(FlexProductEligibilityIndicator_59);
  Instrument_59.insert(FlexProductEligibilityIndicator_59.getString());
  FIX::FlexibleIndicator FlexibleIndicator_59(false);
  msg.set(FlexibleIndicator_59);
  Instrument_59.insert(FlexibleIndicator_59.getString());
  FIX::FloorPrice FloorPrice_59;
  FloorPrice_59.setString("20473825");
  msg.set(FloorPrice_59);
  Instrument_59.insert(FloorPrice_59.getString());
  FIX::FlowScheduleType FlowScheduleType_59(1);
  msg.set(FlowScheduleType_59);
  Instrument_59.insert(FlowScheduleType_59.getString());
  FIX::InstrRegistry InstrRegistry_59("STRING_1967833770");
  msg.set(InstrRegistry_59);
  Instrument_59.insert(InstrRegistry_59.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_59('1');
  msg.set(InstrmtAssignmentMethod_59);
  Instrument_59.insert(InstrmtAssignmentMethod_59.getString());
  FIX::InterestAccrualDate InterestAccrualDate_59("LOCALMKTDATE_1305316924");
  msg.set(InterestAccrualDate_59);
  Instrument_59.insert(InterestAccrualDate_59.getString());
  FIX::IssueDate IssueDate_59("LOCALMKTDATE_331357334");
  msg.set(IssueDate_59);
  Instrument_59.insert(IssueDate_59.getString());
  FIX::Issuer Issuer_59("STRING_1679665461");
  msg.set(Issuer_59);
  Instrument_59.insert(Issuer_59.getString());
  FIX::ListMethod ListMethod_59(1);
  msg.set(ListMethod_59);
  Instrument_59.insert(ListMethod_59.getString());
  FIX::LocaleOfIssue LocaleOfIssue_59("STRING_568205164");
  msg.set(LocaleOfIssue_59);
  Instrument_59.insert(LocaleOfIssue_59.getString());
  FIX::MaturityDate MaturityDate_59("LOCALMKTDATE_1307493714");
  msg.set(MaturityDate_59);
  Instrument_59.insert(MaturityDate_59.getString());
  FIX::MaturityMonthYear MaturityMonthYear_59("MONTHYEAR_1910846250");
  msg.set(MaturityMonthYear_59);
  Instrument_59.insert(MaturityMonthYear_59.getString());
  FIX::MaturityTime MaturityTime_59("TZTIMEONLY_586918114");
  msg.set(MaturityTime_59);
  Instrument_59.insert(MaturityTime_59.getString());
  FIX::MinPriceIncrement MinPriceIncrement_59;
  MinPriceIncrement_59.setString("3950873");
  msg.set(MinPriceIncrement_59);
  Instrument_59.insert(MinPriceIncrement_59.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_59;
  MinPriceIncrementAmount_59.setString("18293692");
  msg.set(MinPriceIncrementAmount_59);
  Instrument_59.insert(MinPriceIncrementAmount_59.getString());
  FIX::NTPositionLimit NTPositionLimit_59(951049551);
  msg.set(NTPositionLimit_59);
  Instrument_59.insert(NTPositionLimit_59.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_59;
  NotionalPercentageOutstanding_59.setString("92.280000");
  msg.set(NotionalPercentageOutstanding_59);
  Instrument_59.insert(NotionalPercentageOutstanding_59.getString());
  FIX::OptAttribute OptAttribute_59('9');
  msg.set(OptAttribute_59);
  Instrument_59.insert(OptAttribute_59.getString());
  FIX::OptPayoutAmount OptPayoutAmount_59;
  OptPayoutAmount_59.setString("4166161");
  msg.set(OptPayoutAmount_59);
  Instrument_59.insert(OptPayoutAmount_59.getString());
  FIX::OptPayoutType OptPayoutType_59(3);
  msg.set(OptPayoutType_59);
  Instrument_59.insert(OptPayoutType_59.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_59;
  OriginalNotionalPercentageOutstanding_59.setString("92.850000");
  msg.set(OriginalNotionalPercentageOutstanding_59);
  Instrument_59.insert(OriginalNotionalPercentageOutstanding_59.getString());
  FIX::Pool Pool_59("STRING_684729769");
  msg.set(Pool_59);
  Instrument_59.insert(Pool_59.getString());
  FIX::PositionLimit PositionLimit_59(28774826);
  msg.set(PositionLimit_59);
  Instrument_59.insert(PositionLimit_59.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_59("STRING_INX");
  msg.set(PriceQuoteMethod_59);
  Instrument_59.insert(PriceQuoteMethod_59.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_59("STRING_577481470");
  msg.set(PriceUnitOfMeasure_59);
  Instrument_59.insert(PriceUnitOfMeasure_59.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_59;
  PriceUnitOfMeasureQty_59.setString("15941394");
  msg.set(PriceUnitOfMeasureQty_59);
  Instrument_59.insert(PriceUnitOfMeasureQty_59.getString());
  FIX::Product Product_61(5);
  msg.set(Product_61);
  Instrument_59.insert(Product_61.getString());
  FIX::ProductComplex ProductComplex_59("STRING_1465366204");
  msg.set(ProductComplex_59);
  Instrument_59.insert(ProductComplex_59.getString());
  FIX::PutOrCall PutOrCall_59(1);
  msg.set(PutOrCall_59);
  Instrument_59.insert(PutOrCall_59.getString());
  FIX::RedemptionDate RedemptionDate_59("LOCALMKTDATE_714745079");
  msg.set(RedemptionDate_59);
  Instrument_59.insert(RedemptionDate_59.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_59("STRING_2143323864");
  msg.set(RepoCollateralSecurityType_59);
  Instrument_59.insert(RepoCollateralSecurityType_59.getString());
  FIX::RepurchaseRate RepurchaseRate_59;
  RepurchaseRate_59.setString("45.340000");
  msg.set(RepurchaseRate_59);
  Instrument_59.insert(RepurchaseRate_59.getString());
  FIX::RepurchaseTerm RepurchaseTerm_59(614644013);
  msg.set(RepurchaseTerm_59);
  Instrument_59.insert(RepurchaseTerm_59.getString());
  FIX::RestructuringType RestructuringType_59("STRING_MM");
  msg.set(RestructuringType_59);
  Instrument_59.insert(RestructuringType_59.getString());
  FIX::SecurityDesc SecurityDesc_59("STRING_1058394656");
  msg.set(SecurityDesc_59);
  Instrument_59.insert(SecurityDesc_59.getString());
  FIX::SecurityExchange SecurityExchange_59("EXCHANGE_301904495");
  msg.set(SecurityExchange_59);
  Instrument_59.insert(SecurityExchange_59.getString());
  FIX::SecurityGroup SecurityGroup_59("STRING_2022707946");
  msg.set(SecurityGroup_59);
  Instrument_59.insert(SecurityGroup_59.getString());
  FIX::SecurityID SecurityID_59("STRING_1389751990");
  msg.set(SecurityID_59);
  Instrument_59.insert(SecurityID_59.getString());
  FIX::SecurityIDSource SecurityIDSource_59("STRING_G");
  msg.set(SecurityIDSource_59);
  Instrument_59.insert(SecurityIDSource_59.getString());
  FIX::SecurityStatus SecurityStatus_59("STRING_1");
  msg.set(SecurityStatus_59);
  Instrument_59.insert(SecurityStatus_59.getString());
  FIX::SecuritySubType SecuritySubType_60("STRING_1957957154");
  msg.set(SecuritySubType_60);
  Instrument_59.insert(SecuritySubType_60.getString());
  FIX::SecurityType SecurityType_61("STRING_FXSPOT");
  msg.set(SecurityType_61);
  Instrument_59.insert(SecurityType_61.getString());
  FIX::Seniority Seniority_59("STRING_SR");
  msg.set(Seniority_59);
  Instrument_59.insert(Seniority_59.getString());
  FIX::SettlMethod SettlMethod_59('P');
  msg.set(SettlMethod_59);
  Instrument_59.insert(SettlMethod_59.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_59("STRING_1536667384");
  msg.set(SettleOnOpenFlag_59);
  Instrument_59.insert(SettleOnOpenFlag_59.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_59("STRING_497740642");
  msg.set(StateOrProvinceOfIssue_59);
  Instrument_59.insert(StateOrProvinceOfIssue_59.getString());
  FIX::StrikeCurrency StrikeCurrency_59("EUR");
  msg.set(StrikeCurrency_59);
  Instrument_59.insert(StrikeCurrency_59.getString());
  FIX::StrikeMultiplier StrikeMultiplier_59;
  StrikeMultiplier_59.setString("5074529");
  msg.set(StrikeMultiplier_59);
  Instrument_59.insert(StrikeMultiplier_59.getString());
  FIX::StrikePrice StrikePrice_59;
  StrikePrice_59.setString("17650573");
  msg.set(StrikePrice_59);
  Instrument_59.insert(StrikePrice_59.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_59(1);
  msg.set(StrikePriceBoundaryMethod_59);
  Instrument_59.insert(StrikePriceBoundaryMethod_59.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_59;
  StrikePriceBoundaryPrecision_59.setString("85.860000");
  msg.set(StrikePriceBoundaryPrecision_59);
  Instrument_59.insert(StrikePriceBoundaryPrecision_59.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_59(1);
  msg.set(StrikePriceDeterminationMethod_59);
  Instrument_59.insert(StrikePriceDeterminationMethod_59.getString());
  FIX::StrikeValue StrikeValue_59;
  StrikeValue_59.setString("10843777");
  msg.set(StrikeValue_59);
  Instrument_59.insert(StrikeValue_59.getString());
  FIX::Symbol Symbol_59("STRING_2119387139");
  msg.set(Symbol_59);
  Instrument_59.insert(Symbol_59.getString());
  FIX::SymbolSfx SymbolSfx_59("STRING_CD");
  msg.set(SymbolSfx_59);
  Instrument_59.insert(SymbolSfx_59.getString());
  FIX::TimeUnit TimeUnit_59("STRING_Min");
  msg.set(TimeUnit_59);
  Instrument_59.insert(TimeUnit_59.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_59(4);
  msg.set(UnderlyingPriceDeterminationMethod_59);
  Instrument_59.insert(UnderlyingPriceDeterminationMethod_59.getString());
  FIX::UnitOfMeasure UnitOfMeasure_59("STRING_lbs");
  msg.set(UnitOfMeasure_59);
  Instrument_59.insert(UnitOfMeasure_59.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_59;
  UnitOfMeasureQty_59.setString("5653547");
  msg.set(UnitOfMeasureQty_59);
  Instrument_59.insert(UnitOfMeasureQty_59.getString());
  FIX::ValuationMethod ValuationMethod_59("STRING_FUT");
  msg.set(ValuationMethod_59);
  Instrument_59.insert(ValuationMethod_59.getString());
  all_values.push_back(Instrument_59);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_118;
    FIX::ComplexEventCondition ComplexEventCondition_118(1);
    noComplexEvents_0_0.set(ComplexEventCondition_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventCondition_118.getString());
    FIX::ComplexEventPrice ComplexEventPrice_118;
    ComplexEventPrice_118.setString("9354184");
    noComplexEvents_0_0.set(ComplexEventPrice_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPrice_118.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_118(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceBoundaryMethod_118.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_118;
    ComplexEventPriceBoundaryPrecision_118.setString("2.440000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceBoundaryPrecision_118.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_118(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventPriceTimeType_118.getString());
    FIX::ComplexEventType ComplexEventType_118(9);
    noComplexEvents_0_0.set(ComplexEventType_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexEventType_118.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_118;
    ComplexOptPayoutAmount_118.setString("21040622");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_118);
    ComplexEvents_NoComplexEvents_118.insert(ComplexOptPayoutAmount_118.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_118);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_238;
      FIX::ComplexEventEndDate ComplexEventEndDate_238(FIX::UTCTIMESTAMP(13, 4, 26, 22, 9, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_238);
      ComplexEventDates_NoComplexEventDates_238.insert(ComplexEventEndDate_238.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_238(FIX::UTCTIMESTAMP(21, 57, 54, 6, 12, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_238);
      ComplexEventDates_NoComplexEventDates_238.insert(ComplexEventStartDate_238.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_238);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_484;
        FIX::ComplexEventEndTime ComplexEventEndTime_484(FIX::UTCTIMEONLY(9, 25, 26));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_484);
        ComplexEventTimes_NoComplexEventTimes_484.insert(ComplexEventEndTime_484.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_484(FIX::UTCTIMEONLY(11, 37, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_484);
        ComplexEventTimes_NoComplexEventTimes_484.insert(ComplexEventStartTime_484.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_484);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_485;
        FIX::ComplexEventEndTime ComplexEventEndTime_485(FIX::UTCTIMEONLY(21, 52, 20));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_485);
        ComplexEventTimes_NoComplexEventTimes_485.insert(ComplexEventEndTime_485.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_485(FIX::UTCTIMEONLY(19, 7, 33));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_485);
        ComplexEventTimes_NoComplexEventTimes_485.insert(ComplexEventStartTime_485.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_485);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_239;
      FIX::ComplexEventEndDate ComplexEventEndDate_239(FIX::UTCTIMESTAMP(12, 37, 7, 23, 3, 2013));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_239);
      ComplexEventDates_NoComplexEventDates_239.insert(ComplexEventEndDate_239.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_239(FIX::UTCTIMESTAMP(23, 44, 28, 25, 12, 2002));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_239);
      ComplexEventDates_NoComplexEventDates_239.insert(ComplexEventStartDate_239.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_239);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_486;
        FIX::ComplexEventEndTime ComplexEventEndTime_486(FIX::UTCTIMEONLY(23, 39, 33));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_486);
        ComplexEventTimes_NoComplexEventTimes_486.insert(ComplexEventEndTime_486.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_486(FIX::UTCTIMEONLY(15, 2, 42));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_486);
        ComplexEventTimes_NoComplexEventTimes_486.insert(ComplexEventStartTime_486.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_486);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_487;
        FIX::ComplexEventEndTime ComplexEventEndTime_487(FIX::UTCTIMEONLY(12, 26, 14));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_487);
        ComplexEventTimes_NoComplexEventTimes_487.insert(ComplexEventEndTime_487.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_487(FIX::UTCTIMEONLY(22, 13, 14));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_487);
        ComplexEventTimes_NoComplexEventTimes_487.insert(ComplexEventStartTime_487.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_487);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_488;
        FIX::ComplexEventEndTime ComplexEventEndTime_488(FIX::UTCTIMEONLY(14, 52, 58));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_488);
        ComplexEventTimes_NoComplexEventTimes_488.insert(ComplexEventEndTime_488.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_488(FIX::UTCTIMEONLY(18, 45, 15));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_488);
        ComplexEventTimes_NoComplexEventTimes_488.insert(ComplexEventStartTime_488.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_488);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_119;
    FIX::ComplexEventCondition ComplexEventCondition_119(2);
    noComplexEvents_0_1.set(ComplexEventCondition_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventCondition_119.getString());
    FIX::ComplexEventPrice ComplexEventPrice_119;
    ComplexEventPrice_119.setString("13393502");
    noComplexEvents_0_1.set(ComplexEventPrice_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPrice_119.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_119(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceBoundaryMethod_119.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_119;
    ComplexEventPriceBoundaryPrecision_119.setString("6.230000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceBoundaryPrecision_119.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_119(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventPriceTimeType_119.getString());
    FIX::ComplexEventType ComplexEventType_119(5);
    noComplexEvents_0_1.set(ComplexEventType_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexEventType_119.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_119;
    ComplexOptPayoutAmount_119.setString("3468689");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_119);
    ComplexEvents_NoComplexEvents_119.insert(ComplexOptPayoutAmount_119.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_119);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_240;
      FIX::ComplexEventEndDate ComplexEventEndDate_240(FIX::UTCTIMESTAMP(0, 0, 8, 27, 3, 2013));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_240);
      ComplexEventDates_NoComplexEventDates_240.insert(ComplexEventEndDate_240.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_240(FIX::UTCTIMESTAMP(2, 1, 16, 27, 12, 2006));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_240);
      ComplexEventDates_NoComplexEventDates_240.insert(ComplexEventStartDate_240.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_240);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_489;
        FIX::ComplexEventEndTime ComplexEventEndTime_489(FIX::UTCTIMEONLY(0, 10, 44));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_489);
        ComplexEventTimes_NoComplexEventTimes_489.insert(ComplexEventEndTime_489.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_489(FIX::UTCTIMEONLY(16, 29, 32));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_489);
        ComplexEventTimes_NoComplexEventTimes_489.insert(ComplexEventStartTime_489.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_489);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_490;
        FIX::ComplexEventEndTime ComplexEventEndTime_490(FIX::UTCTIMEONLY(10, 7, 0));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_490);
        ComplexEventTimes_NoComplexEventTimes_490.insert(ComplexEventEndTime_490.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_490(FIX::UTCTIMEONLY(12, 9, 46));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_490);
        ComplexEventTimes_NoComplexEventTimes_490.insert(ComplexEventStartTime_490.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_490);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_491;
        FIX::ComplexEventEndTime ComplexEventEndTime_491(FIX::UTCTIMEONLY(14, 46, 50));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_491);
        ComplexEventTimes_NoComplexEventTimes_491.insert(ComplexEventEndTime_491.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_491(FIX::UTCTIMEONLY(12, 25, 59));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_491);
        ComplexEventTimes_NoComplexEventTimes_491.insert(ComplexEventStartTime_491.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_491);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_241;
      FIX::ComplexEventEndDate ComplexEventEndDate_241(FIX::UTCTIMESTAMP(14, 8, 30, 22, 3, 2014));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_241);
      ComplexEventDates_NoComplexEventDates_241.insert(ComplexEventEndDate_241.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_241(FIX::UTCTIMESTAMP(6, 6, 9, 11, 3, 2008));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_241);
      ComplexEventDates_NoComplexEventDates_241.insert(ComplexEventStartDate_241.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_241);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_492;
        FIX::ComplexEventEndTime ComplexEventEndTime_492(FIX::UTCTIMEONLY(5, 54, 36));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_492);
        ComplexEventTimes_NoComplexEventTimes_492.insert(ComplexEventEndTime_492.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_492(FIX::UTCTIMEONLY(10, 46, 26));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_492);
        ComplexEventTimes_NoComplexEventTimes_492.insert(ComplexEventStartTime_492.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_492);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_493;
        FIX::ComplexEventEndTime ComplexEventEndTime_493(FIX::UTCTIMEONLY(0, 4, 42));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_493);
        ComplexEventTimes_NoComplexEventTimes_493.insert(ComplexEventEndTime_493.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_493(FIX::UTCTIMEONLY(16, 7, 25));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_493);
        ComplexEventTimes_NoComplexEventTimes_493.insert(ComplexEventStartTime_493.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_493);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_494;
        FIX::ComplexEventEndTime ComplexEventEndTime_494(FIX::UTCTIMEONLY(1, 33, 34));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_494);
        ComplexEventTimes_NoComplexEventTimes_494.insert(ComplexEventEndTime_494.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_494(FIX::UTCTIMEONLY(3, 22, 20));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_494);
        ComplexEventTimes_NoComplexEventTimes_494.insert(ComplexEventStartTime_494.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_494);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_242;
      FIX::ComplexEventEndDate ComplexEventEndDate_242(FIX::UTCTIMESTAMP(5, 29, 24, 7, 12, 2017));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_242);
      ComplexEventDates_NoComplexEventDates_242.insert(ComplexEventEndDate_242.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_242(FIX::UTCTIMESTAMP(8, 57, 12, 12, 8, 2002));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_242);
      ComplexEventDates_NoComplexEventDates_242.insert(ComplexEventStartDate_242.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_242);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_495;
        FIX::ComplexEventEndTime ComplexEventEndTime_495(FIX::UTCTIMEONLY(2, 22, 33));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_495);
        ComplexEventTimes_NoComplexEventTimes_495.insert(ComplexEventEndTime_495.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_495(FIX::UTCTIMEONLY(19, 32, 8));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_495);
        ComplexEventTimes_NoComplexEventTimes_495.insert(ComplexEventStartTime_495.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_495);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_120;
    FIX::ComplexEventCondition ComplexEventCondition_120(1);
    noComplexEvents_0_2.set(ComplexEventCondition_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventCondition_120.getString());
    FIX::ComplexEventPrice ComplexEventPrice_120;
    ComplexEventPrice_120.setString("18055426");
    noComplexEvents_0_2.set(ComplexEventPrice_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPrice_120.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_120(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceBoundaryMethod_120.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_120;
    ComplexEventPriceBoundaryPrecision_120.setString("79.360000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceBoundaryPrecision_120.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_120(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventPriceTimeType_120.getString());
    FIX::ComplexEventType ComplexEventType_120(7);
    noComplexEvents_0_2.set(ComplexEventType_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexEventType_120.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_120;
    ComplexOptPayoutAmount_120.setString("11266127");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_120);
    ComplexEvents_NoComplexEvents_120.insert(ComplexOptPayoutAmount_120.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_120);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_243;
      FIX::ComplexEventEndDate ComplexEventEndDate_243(FIX::UTCTIMESTAMP(8, 26, 53, 3, 7, 2008));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_243);
      ComplexEventDates_NoComplexEventDates_243.insert(ComplexEventEndDate_243.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_243(FIX::UTCTIMESTAMP(14, 53, 59, 23, 6, 2007));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_243);
      ComplexEventDates_NoComplexEventDates_243.insert(ComplexEventStartDate_243.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_243);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_496;
        FIX::ComplexEventEndTime ComplexEventEndTime_496(FIX::UTCTIMEONLY(7, 4, 10));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_496);
        ComplexEventTimes_NoComplexEventTimes_496.insert(ComplexEventEndTime_496.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_496(FIX::UTCTIMEONLY(11, 34, 51));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_496);
        ComplexEventTimes_NoComplexEventTimes_496.insert(ComplexEventStartTime_496.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_496);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_497;
        FIX::ComplexEventEndTime ComplexEventEndTime_497(FIX::UTCTIMEONLY(0, 24, 50));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_497);
        ComplexEventTimes_NoComplexEventTimes_497.insert(ComplexEventEndTime_497.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_497(FIX::UTCTIMEONLY(5, 49, 15));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_497);
        ComplexEventTimes_NoComplexEventTimes_497.insert(ComplexEventStartTime_497.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_497);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_244;
      FIX::ComplexEventEndDate ComplexEventEndDate_244(FIX::UTCTIMESTAMP(1, 34, 24, 0, 5, 2012));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_244);
      ComplexEventDates_NoComplexEventDates_244.insert(ComplexEventEndDate_244.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_244(FIX::UTCTIMESTAMP(18, 6, 58, 13, 4, 2009));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_244);
      ComplexEventDates_NoComplexEventDates_244.insert(ComplexEventStartDate_244.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_244);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_498;
        FIX::ComplexEventEndTime ComplexEventEndTime_498(FIX::UTCTIMEONLY(10, 47, 29));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_498);
        ComplexEventTimes_NoComplexEventTimes_498.insert(ComplexEventEndTime_498.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_498(FIX::UTCTIMEONLY(10, 56, 20));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_498);
        ComplexEventTimes_NoComplexEventTimes_498.insert(ComplexEventStartTime_498.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_498);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_499;
        FIX::ComplexEventEndTime ComplexEventEndTime_499(FIX::UTCTIMEONLY(8, 36, 53));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_499);
        ComplexEventTimes_NoComplexEventTimes_499.insert(ComplexEventEndTime_499.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_499(FIX::UTCTIMEONLY(17, 42, 38));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_499);
        ComplexEventTimes_NoComplexEventTimes_499.insert(ComplexEventStartTime_499.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_499);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_245;
      FIX::ComplexEventEndDate ComplexEventEndDate_245(FIX::UTCTIMESTAMP(23, 12, 8, 24, 9, 2008));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_245);
      ComplexEventDates_NoComplexEventDates_245.insert(ComplexEventEndDate_245.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_245(FIX::UTCTIMESTAMP(2, 18, 46, 20, 10, 2011));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_245);
      ComplexEventDates_NoComplexEventDates_245.insert(ComplexEventStartDate_245.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_245);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_500;
        FIX::ComplexEventEndTime ComplexEventEndTime_500(FIX::UTCTIMEONLY(8, 42, 50));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_500);
        ComplexEventTimes_NoComplexEventTimes_500.insert(ComplexEventEndTime_500.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_500(FIX::UTCTIMEONLY(20, 46, 37));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_500);
        ComplexEventTimes_NoComplexEventTimes_500.insert(ComplexEventStartTime_500.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_500);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_501;
        FIX::ComplexEventEndTime ComplexEventEndTime_501(FIX::UTCTIMEONLY(7, 13, 29));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_501);
        ComplexEventTimes_NoComplexEventTimes_501.insert(ComplexEventEndTime_501.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_501(FIX::UTCTIMEONLY(23, 11, 7));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_501);
        ComplexEventTimes_NoComplexEventTimes_501.insert(ComplexEventStartTime_501.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_501);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassCancelReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_116;
    FIX::EventDate EventDate_116("LOCALMKTDATE_190793319");
    noEvents_0_0.set(EventDate_116);
    EvntGrp_NoEvents_116.insert(EventDate_116.getString());
    FIX::EventPx EventPx_116;
    EventPx_116.setString("13835784");
    noEvents_0_0.set(EventPx_116);
    EvntGrp_NoEvents_116.insert(EventPx_116.getString());
    FIX::EventText EventText_116("STRING_1412854955");
    noEvents_0_0.set(EventText_116);
    EvntGrp_NoEvents_116.insert(EventText_116.getString());
    FIX::EventTime EventTime_116(FIX::UTCTIMESTAMP(19, 55, 14, 2, 3, 2016));
    noEvents_0_0.set(EventTime_116);
    EvntGrp_NoEvents_116.insert(EventTime_116.getString());
    FIX::EventType EventType_116(19);
    noEvents_0_0.set(EventType_116);
    EvntGrp_NoEvents_116.insert(EventType_116.getString());
    all_values.push_back(EvntGrp_NoEvents_116);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_121;
    FIX::InstrumentPartyID InstrumentPartyID_121("STRING_1815754690");
    noInstrumentParties_0_0.set(InstrumentPartyID_121);
    InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyID_121.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_121('6');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_121);
    InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyIDSource_121.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_121(1566615996);
    noInstrumentParties_0_0.set(InstrumentPartyRole_121);
    InstrumentParties_NoInstrumentParties_121.insert(InstrumentPartyRole_121.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_121);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227;
      FIX::InstrumentPartySubID InstrumentPartySubID_227("STRING_1689294015");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_227);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227.insert(InstrumentPartySubID_227.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_227(141480499);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_227);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227.insert(InstrumentPartySubIDType_227.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228;
      FIX::InstrumentPartySubID InstrumentPartySubID_228("STRING_1945532603");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_228);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228.insert(InstrumentPartySubID_228.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_228(110271219);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_228);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228.insert(InstrumentPartySubIDType_228.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_109;
    FIX::SecurityAltID SecurityAltID_109("STRING_1350895012");
    noSecurityAltID_0_0.set(SecurityAltID_109);
    SecAltIDGrp_NoSecurityAltID_109.insert(SecurityAltID_109.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_109("STRING_269981654");
    noSecurityAltID_0_0.set(SecurityAltIDSource_109);
    SecAltIDGrp_NoSecurityAltID_109.insert(SecurityAltIDSource_109.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_109);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_110;
    FIX::SecurityAltID SecurityAltID_110("STRING_315900544");
    noSecurityAltID_0_1.set(SecurityAltID_110);
    SecAltIDGrp_NoSecurityAltID_110.insert(SecurityAltID_110.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_110("STRING_1293645177");
    noSecurityAltID_0_1.set(SecurityAltIDSource_110);
    SecAltIDGrp_NoSecurityAltID_110.insert(SecurityAltIDSource_110.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_110);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_111;
    FIX::SecurityAltID SecurityAltID_111("STRING_572034703");
    noSecurityAltID_0_2.set(SecurityAltID_111);
    SecAltIDGrp_NoSecurityAltID_111.insert(SecurityAltID_111.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_111("STRING_1117140274");
    noSecurityAltID_0_2.set(SecurityAltIDSource_111);
    SecAltIDGrp_NoSecurityAltID_111.insert(SecurityAltIDSource_111.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_111);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_118;
  FIX::SecurityXML SecurityXML_119("XMLDATA_2066890592");
  msg.set(SecurityXML_119);
  FIX::SecurityXMLLen SecurityXMLLen_59(546652487);
  msg.set(SecurityXMLLen_59);
  FIX::SecurityXMLSchema SecurityXMLSchema_59("STRING_845465673");
  msg.set(SecurityXMLSchema_59);
  SecurityXML_118.insert(SecurityXMLSchema_59.getString());
  all_values.push_back(SecurityXML_118);
  all_compo_names.insert("SecurityXML");

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_1;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_1("STRING_737445806");
    noNotAffectedOrders_0_0.set(NotAffOrigClOrdID_1);
    NotAffectedOrdersGrp_NoNotAffectedOrders_1.insert(NotAffOrigClOrdID_1.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_1("STRING_81560437");
    noNotAffectedOrders_0_0.set(NotAffectedOrderID_1);
    NotAffectedOrdersGrp_NoNotAffectedOrders_1.insert(NotAffectedOrderID_1.getString());
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_1);
    all_compo_names.insert("NotAffectedOrdersGrp.NoNotAffectedOrders");

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_89;
    FIX::PartyID PartyID_89("STRING_1348936853");
    noPartyIDs_0_0.set(PartyID_89);
    Parties_NoPartyIDs_89.insert(PartyID_89.getString());
    FIX::PartyIDSource PartyIDSource_89('E');
    noPartyIDs_0_0.set(PartyIDSource_89);
    Parties_NoPartyIDs_89.insert(PartyIDSource_89.getString());
    FIX::PartyRole PartyRole_89(52);
    noPartyIDs_0_0.set(PartyRole_89);
    Parties_NoPartyIDs_89.insert(PartyRole_89.getString());
    all_values.push_back(Parties_NoPartyIDs_89);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_197;
      FIX::PartySubID PartySubID_197("STRING_812781902");
      noPartySubIDs_0_1_0.set(PartySubID_197);
      PtysSubGrp_NoPartySubIDs_197.insert(PartySubID_197.getString());
      FIX::PartySubIDType PartySubIDType_197(21);
      noPartySubIDs_0_1_0.set(PartySubIDType_197);
      PtysSubGrp_NoPartySubIDs_197.insert(PartySubIDType_197.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_197);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_198;
      FIX::PartySubID PartySubID_198("STRING_1811772412");
      noPartySubIDs_0_1_1.set(PartySubID_198);
      PtysSubGrp_NoPartySubIDs_198.insert(PartySubID_198.getString());
      FIX::PartySubIDType PartySubIDType_198(20);
      noPartySubIDs_0_1_1.set(PartySubIDType_198);
      PtysSubGrp_NoPartySubIDs_198.insert(PartySubIDType_198.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_198);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_199;
      FIX::PartySubID PartySubID_199("STRING_1933499607");
      noPartySubIDs_0_1_2.set(PartySubID_199);
      PtysSubGrp_NoPartySubIDs_199.insert(PartySubID_199.getString());
      FIX::PartySubIDType PartySubIDType_199(22);
      noPartySubIDs_0_1_2.set(PartySubIDType_199);
      PtysSubGrp_NoPartySubIDs_199.insert(PartySubIDType_199.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_199);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_8;
    FIX::TargetPartyID TargetPartyID_8("STRING_1352631956");
    noTargetPartyIDs_0_0.set(TargetPartyID_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyID_8.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_8('1');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyIDSource_8.getString());
    FIX::TargetPartyRole TargetPartyRole_8(1626669980);
    noTargetPartyIDs_0_0.set(TargetPartyRole_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyRole_8.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_8);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_9;
    FIX::TargetPartyID TargetPartyID_9("STRING_1494112455");
    noTargetPartyIDs_0_1.set(TargetPartyID_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyID_9.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_9('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyIDSource_9.getString());
    FIX::TargetPartyRole TargetPartyRole_9(1736941199);
    noTargetPartyIDs_0_1.set(TargetPartyRole_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyRole_9.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_9);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_83;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_83("DATA_279519312");
  msg.set(EncodedUnderlyingIssuer_83);
  UnderlyingInstrument_83.insert(EncodedUnderlyingIssuer_83.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_83(592632231);
  msg.set(EncodedUnderlyingIssuerLen_83);
  UnderlyingInstrument_83.insert(EncodedUnderlyingIssuerLen_83.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_83("DATA_2006922854");
  msg.set(EncodedUnderlyingSecurityDesc_83);
  UnderlyingInstrument_83.insert(EncodedUnderlyingSecurityDesc_83.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_83(595419857);
  msg.set(EncodedUnderlyingSecurityDescLen_83);
  UnderlyingInstrument_83.insert(EncodedUnderlyingSecurityDescLen_83.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_83;
  UnderlyingAdjustedQuantity_83.setString("18862774");
  msg.set(UnderlyingAdjustedQuantity_83);
  UnderlyingInstrument_83.insert(UnderlyingAdjustedQuantity_83.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_83;
  UnderlyingAllocationPercent_83.setString("39.090000");
  msg.set(UnderlyingAllocationPercent_83);
  UnderlyingInstrument_83.insert(UnderlyingAllocationPercent_83.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_83;
  UnderlyingAttachmentPoint_83.setString("1.310000");
  msg.set(UnderlyingAttachmentPoint_83);
  UnderlyingInstrument_83.insert(UnderlyingAttachmentPoint_83.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_83("STRING_1805684353");
  msg.set(UnderlyingCFICode_83);
  UnderlyingInstrument_83.insert(UnderlyingCFICode_83.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_83("STRING_978126396");
  msg.set(UnderlyingCPProgram_83);
  UnderlyingInstrument_83.insert(UnderlyingCPProgram_83.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_83("STRING_410542156");
  msg.set(UnderlyingCPRegType_83);
  UnderlyingInstrument_83.insert(UnderlyingCPRegType_83.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_83;
  UnderlyingCapValue_83.setString("7015578");
  msg.set(UnderlyingCapValue_83);
  UnderlyingInstrument_83.insert(UnderlyingCapValue_83.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_83;
  UnderlyingCashAmount_83.setString("17155722");
  msg.set(UnderlyingCashAmount_83);
  UnderlyingInstrument_83.insert(UnderlyingCashAmount_83.getString());
  FIX::UnderlyingCashType UnderlyingCashType_83("STRING_DIFF");
  msg.set(UnderlyingCashType_83);
  UnderlyingInstrument_83.insert(UnderlyingCashType_83.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_83;
  UnderlyingContractMultiplier_83.setString("10102863");
  msg.set(UnderlyingContractMultiplier_83);
  UnderlyingInstrument_83.insert(UnderlyingContractMultiplier_83.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_83(917025407);
  msg.set(UnderlyingContractMultiplierUnit_83);
  UnderlyingInstrument_83.insert(UnderlyingContractMultiplierUnit_83.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_83("COUNTRY_39475650");
  msg.set(UnderlyingCountryOfIssue_83);
  UnderlyingInstrument_83.insert(UnderlyingCountryOfIssue_83.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_83("LOCALMKTDATE_956934141");
  msg.set(UnderlyingCouponPaymentDate_83);
  UnderlyingInstrument_83.insert(UnderlyingCouponPaymentDate_83.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_83;
  UnderlyingCouponRate_83.setString("77.670000");
  msg.set(UnderlyingCouponRate_83);
  UnderlyingInstrument_83.insert(UnderlyingCouponRate_83.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_83("STRING_852257552");
  msg.set(UnderlyingCreditRating_83);
  UnderlyingInstrument_83.insert(UnderlyingCreditRating_83.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_83("EUR");
  msg.set(UnderlyingCurrency_83);
  UnderlyingInstrument_83.insert(UnderlyingCurrency_83.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_83;
  UnderlyingCurrentValue_83.setString("984258");
  msg.set(UnderlyingCurrentValue_83);
  UnderlyingInstrument_83.insert(UnderlyingCurrentValue_83.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_83;
  UnderlyingDetachmentPoint_83.setString("92.120000");
  msg.set(UnderlyingDetachmentPoint_83);
  UnderlyingInstrument_83.insert(UnderlyingDetachmentPoint_83.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_83;
  UnderlyingDirtyPrice_83.setString("4592563");
  msg.set(UnderlyingDirtyPrice_83);
  UnderlyingInstrument_83.insert(UnderlyingDirtyPrice_83.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_83;
  UnderlyingEndPrice_83.setString("358018");
  msg.set(UnderlyingEndPrice_83);
  UnderlyingInstrument_83.insert(UnderlyingEndPrice_83.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_83;
  UnderlyingEndValue_83.setString("19802311");
  msg.set(UnderlyingEndValue_83);
  UnderlyingInstrument_83.insert(UnderlyingEndValue_83.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_83(2050428249);
  msg.set(UnderlyingExerciseStyle_83);
  UnderlyingInstrument_83.insert(UnderlyingExerciseStyle_83.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_83;
  UnderlyingFXRate_83.setString("16624718");
  msg.set(UnderlyingFXRate_83);
  UnderlyingInstrument_83.insert(UnderlyingFXRate_83.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_83('M');
  msg.set(UnderlyingFXRateCalc_83);
  UnderlyingInstrument_83.insert(UnderlyingFXRateCalc_83.getString());
  FIX::UnderlyingFactor UnderlyingFactor_83;
  UnderlyingFactor_83.setString("12921654");
  msg.set(UnderlyingFactor_83);
  UnderlyingInstrument_83.insert(UnderlyingFactor_83.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_83(1251929362);
  msg.set(UnderlyingFlowScheduleType_83);
  UnderlyingInstrument_83.insert(UnderlyingFlowScheduleType_83.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_83("STRING_1606379288");
  msg.set(UnderlyingInstrRegistry_83);
  UnderlyingInstrument_83.insert(UnderlyingInstrRegistry_83.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_83("LOCALMKTDATE_1884797699");
  msg.set(UnderlyingIssueDate_83);
  UnderlyingInstrument_83.insert(UnderlyingIssueDate_83.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_83("STRING_1111368568");
  msg.set(UnderlyingIssuer_83);
  UnderlyingInstrument_83.insert(UnderlyingIssuer_83.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_83("STRING_54315497");
  msg.set(UnderlyingLocaleOfIssue_83);
  UnderlyingInstrument_83.insert(UnderlyingLocaleOfIssue_83.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_83("LOCALMKTDATE_1623591459");
  msg.set(UnderlyingMaturityDate_83);
  UnderlyingInstrument_83.insert(UnderlyingMaturityDate_83.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_83("MONTHYEAR_1542842478");
  msg.set(UnderlyingMaturityMonthYear_83);
  UnderlyingInstrument_83.insert(UnderlyingMaturityMonthYear_83.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_83("TZTIMEONLY_1766875628");
  msg.set(UnderlyingMaturityTime_83);
  UnderlyingInstrument_83.insert(UnderlyingMaturityTime_83.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_83;
  UnderlyingNotionalPercentageOutstanding_83.setString("21.640000");
  msg.set(UnderlyingNotionalPercentageOutstanding_83);
  UnderlyingInstrument_83.insert(UnderlyingNotionalPercentageOutstanding_83.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_83('3');
  msg.set(UnderlyingOptAttribute_83);
  UnderlyingInstrument_83.insert(UnderlyingOptAttribute_83.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_83;
  UnderlyingOriginalNotionalPercentageOutstanding_83.setString("41.360000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_83);
  UnderlyingInstrument_83.insert(UnderlyingOriginalNotionalPercentageOutstanding_83.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_83("STRING_1983350021");
  msg.set(UnderlyingPriceUnitOfMeasure_83);
  UnderlyingInstrument_83.insert(UnderlyingPriceUnitOfMeasure_83.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_83;
  UnderlyingPriceUnitOfMeasureQty_83.setString("20890574");
  msg.set(UnderlyingPriceUnitOfMeasureQty_83);
  UnderlyingInstrument_83.insert(UnderlyingPriceUnitOfMeasureQty_83.getString());
  FIX::UnderlyingProduct UnderlyingProduct_83(522036730);
  msg.set(UnderlyingProduct_83);
  UnderlyingInstrument_83.insert(UnderlyingProduct_83.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_83(846152688);
  msg.set(UnderlyingPutOrCall_83);
  UnderlyingInstrument_83.insert(UnderlyingPutOrCall_83.getString());
  FIX::UnderlyingPx UnderlyingPx_83;
  UnderlyingPx_83.setString("8585991");
  msg.set(UnderlyingPx_83);
  UnderlyingInstrument_83.insert(UnderlyingPx_83.getString());
  FIX::UnderlyingQty UnderlyingQty_83;
  UnderlyingQty_83.setString("5615123");
  msg.set(UnderlyingQty_83);
  UnderlyingInstrument_83.insert(UnderlyingQty_83.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_83("LOCALMKTDATE_1803086829");
  msg.set(UnderlyingRedemptionDate_83);
  UnderlyingInstrument_83.insert(UnderlyingRedemptionDate_83.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_83("STRING_173523307");
  msg.set(UnderlyingRepoCollateralSecurityType_83);
  UnderlyingInstrument_83.insert(UnderlyingRepoCollateralSecurityType_83.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_83;
  UnderlyingRepurchaseRate_83.setString("99.320000");
  msg.set(UnderlyingRepurchaseRate_83);
  UnderlyingInstrument_83.insert(UnderlyingRepurchaseRate_83.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_83(497186434);
  msg.set(UnderlyingRepurchaseTerm_83);
  UnderlyingInstrument_83.insert(UnderlyingRepurchaseTerm_83.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_83("STRING_1300219838");
  msg.set(UnderlyingRestructuringType_83);
  UnderlyingInstrument_83.insert(UnderlyingRestructuringType_83.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_83("STRING_1512195797");
  msg.set(UnderlyingSecurityDesc_83);
  UnderlyingInstrument_83.insert(UnderlyingSecurityDesc_83.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_83("EXCHANGE_1124785646");
  msg.set(UnderlyingSecurityExchange_83);
  UnderlyingInstrument_83.insert(UnderlyingSecurityExchange_83.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_83("STRING_1759476175");
  msg.set(UnderlyingSecurityID_83);
  UnderlyingInstrument_83.insert(UnderlyingSecurityID_83.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_83("STRING_1547997628");
  msg.set(UnderlyingSecurityIDSource_83);
  UnderlyingInstrument_83.insert(UnderlyingSecurityIDSource_83.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_83("STRING_957533167");
  msg.set(UnderlyingSecuritySubType_83);
  UnderlyingInstrument_83.insert(UnderlyingSecuritySubType_83.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_83("STRING_1662420776");
  msg.set(UnderlyingSecurityType_83);
  UnderlyingInstrument_83.insert(UnderlyingSecurityType_83.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_83("STRING_1062985791");
  msg.set(UnderlyingSeniority_83);
  UnderlyingInstrument_83.insert(UnderlyingSeniority_83.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_83("STRING_136909494");
  msg.set(UnderlyingSettlMethod_83);
  UnderlyingInstrument_83.insert(UnderlyingSettlMethod_83.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_83(5);
  msg.set(UnderlyingSettlementType_83);
  UnderlyingInstrument_83.insert(UnderlyingSettlementType_83.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_83;
  UnderlyingStartValue_83.setString("1674315");
  msg.set(UnderlyingStartValue_83);
  UnderlyingInstrument_83.insert(UnderlyingStartValue_83.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_83("STRING_1743288782");
  msg.set(UnderlyingStateOrProvinceOfIssue_83);
  UnderlyingInstrument_83.insert(UnderlyingStateOrProvinceOfIssue_83.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_83("JPY");
  msg.set(UnderlyingStrikeCurrency_83);
  UnderlyingInstrument_83.insert(UnderlyingStrikeCurrency_83.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_83;
  UnderlyingStrikePrice_83.setString("17976042");
  msg.set(UnderlyingStrikePrice_83);
  UnderlyingInstrument_83.insert(UnderlyingStrikePrice_83.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_83("STRING_20524459");
  msg.set(UnderlyingSymbol_83);
  UnderlyingInstrument_83.insert(UnderlyingSymbol_83.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_83("STRING_674158904");
  msg.set(UnderlyingSymbolSfx_83);
  UnderlyingInstrument_83.insert(UnderlyingSymbolSfx_83.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_83("STRING_1416996259");
  msg.set(UnderlyingTimeUnit_83);
  UnderlyingInstrument_83.insert(UnderlyingTimeUnit_83.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_83("STRING_1302316623");
  msg.set(UnderlyingUnitOfMeasure_83);
  UnderlyingInstrument_83.insert(UnderlyingUnitOfMeasure_83.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_83;
  UnderlyingUnitOfMeasureQty_83.setString("10476441");
  msg.set(UnderlyingUnitOfMeasureQty_83);
  UnderlyingInstrument_83.insert(UnderlyingUnitOfMeasureQty_83.getString());
  all_values.push_back(UnderlyingInstrument_83);
  all_compo_names.insert("UnderlyingInstrument");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_167;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_167("STRING_1138182996");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_167);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_167.insert(UnderlyingSecurityAltID_167.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_167("STRING_989217911");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_167);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_167.insert(UnderlyingSecurityAltIDSource_167.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_167);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_168;
    FIX::UnderlyingStipType UnderlyingStipType_168("STRING_1984335684");
    noUnderlyingStips_0_0.set(UnderlyingStipType_168);
    UnderlyingStipulations_NoUnderlyingStips_168.insert(UnderlyingStipType_168.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_168("STRING_1847817100");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_168);
    UnderlyingStipulations_NoUnderlyingStips_168.insert(UnderlyingStipValue_168.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_168);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_169;
    FIX::UnderlyingStipType UnderlyingStipType_169("STRING_382995858");
    noUnderlyingStips_0_1.set(UnderlyingStipType_169);
    UnderlyingStipulations_NoUnderlyingStips_169.insert(UnderlyingStipType_169.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_169("STRING_1639938865");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_169);
    UnderlyingStipulations_NoUnderlyingStips_169.insert(UnderlyingStipValue_169.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_169);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_156;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_156("STRING_1796765790");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_156);
    UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyID_156.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_156('2');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_156);
    UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyIDSource_156.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_156(1174076598);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_156);
    UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyRole_156.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_156);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_309("STRING_1114427298");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_309);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309.insert(UnderlyingInstrumentPartySubID_309.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_309(786069125);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_309);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309.insert(UnderlyingInstrumentPartySubIDType_309.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_310("STRING_561991920");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_310);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310.insert(UnderlyingInstrumentPartySubID_310.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_310(2071960465);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_310);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310.insert(UnderlyingInstrumentPartySubIDType_310.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_157;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_157("STRING_301006254");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_157);
    UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyID_157.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_157('1');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_157);
    UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyIDSource_157.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_157(61386311);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_157);
    UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyRole_157.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_157);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_311("STRING_1792409216");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_311);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311.insert(UnderlyingInstrumentPartySubID_311.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_311(1804675094);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_311);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311.insert(UnderlyingInstrumentPartySubIDType_311.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_312("STRING_1652525498");
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubID_312);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312.insert(UnderlyingInstrumentPartySubID_312.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_312(923725642);
      noUndlyInstrumentPartySubIDs_1_1_1.set(UnderlyingInstrumentPartySubIDType_312);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312.insert(UnderlyingInstrumentPartySubIDType_312.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_313("STRING_1454795725");
      noUndlyInstrumentPartySubIDs_1_1_2.set(UnderlyingInstrumentPartySubID_313);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313.insert(UnderlyingInstrumentPartySubID_313.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_313(1673049957);
      noUndlyInstrumentPartySubIDs_1_1_2.set(UnderlyingInstrumentPartySubIDType_313);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313.insert(UnderlyingInstrumentPartySubIDType_313.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_158;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_158("STRING_1597884546");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_158);
    UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyID_158.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_158('7');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_158);
    UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyIDSource_158.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_158(827882932);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_158);
    UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyRole_158.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_158);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_314("STRING_23755085");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_314);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314.insert(UnderlyingInstrumentPartySubID_314.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_314(1966065929);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_314);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314.insert(UnderlyingInstrumentPartySubIDType_314.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_315("STRING_1487262940");
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubID_315);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315.insert(UnderlyingInstrumentPartySubID_315.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_315(1992722211);
      noUndlyInstrumentPartySubIDs_2_1_1.set(UnderlyingInstrumentPartySubIDType_315);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315.insert(UnderlyingInstrumentPartySubIDType_315.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_316("STRING_1802917965");
      noUndlyInstrumentPartySubIDs_2_1_2.set(UnderlyingInstrumentPartySubID_316);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316.insert(UnderlyingInstrumentPartySubID_316.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_316(1187596392);
      noUndlyInstrumentPartySubIDs_2_1_2.set(UnderlyingInstrumentPartySubIDType_316);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316.insert(UnderlyingInstrumentPartySubIDType_316.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
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
