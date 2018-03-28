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
  FIX::ClOrdID ClOrdID_39("STRING_1674501687");
  msg.set(ClOrdID_39);
  OrderMassCancelReport_0.insert(ClOrdID_39.getString());
  FIX::EncodedText EncodedText_74("DATA_1406200903");
  msg.set(EncodedText_74);
  OrderMassCancelReport_0.insert(EncodedText_74.getString());
  FIX::EncodedTextLen EncodedTextLen_74(389613091);
  msg.set(EncodedTextLen_74);
  OrderMassCancelReport_0.insert(EncodedTextLen_74.getString());
  FIX::MarketID MarketID_12("EXCHANGE_1700814683");
  msg.set(MarketID_12);
  OrderMassCancelReport_0.insert(MarketID_12.getString());
  FIX::MarketSegmentID MarketSegmentID_12("STRING_812583380");
  msg.set(MarketSegmentID_12);
  OrderMassCancelReport_0.insert(MarketSegmentID_12.getString());
  FIX::MassActionReportID MassActionReportID_1("STRING_899279579");
  msg.set(MassActionReportID_1);
  OrderMassCancelReport_0.insert(MassActionReportID_1.getString());
  FIX::MassCancelRejectReason MassCancelRejectReason_0(1);
  msg.set(MassCancelRejectReason_0);
  OrderMassCancelReport_0.insert(MassCancelRejectReason_0.getString());
  FIX::MassCancelRequestType MassCancelRequestType_0('8');
  msg.set(MassCancelRequestType_0);
  OrderMassCancelReport_0.insert(MassCancelRequestType_0.getString());
  FIX::MassCancelResponse MassCancelResponse_0('4');
  msg.set(MassCancelResponse_0);
  OrderMassCancelReport_0.insert(MassCancelResponse_0.getString());
  FIX::OrderID OrderID_32("STRING_1422649946");
  msg.set(OrderID_32);
  OrderMassCancelReport_0.insert(OrderID_32.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_37("STRING_433332053");
  msg.set(SecondaryClOrdID_37);
  OrderMassCancelReport_0.insert(SecondaryClOrdID_37.getString());
  FIX::SecondaryOrderID SecondaryOrderID_23("STRING_994490819");
  msg.set(SecondaryOrderID_23);
  OrderMassCancelReport_0.insert(SecondaryOrderID_23.getString());
  FIX::Side Side_37('3');
  msg.set(Side_37);
  OrderMassCancelReport_0.insert(Side_37.getString());
  FIX::Text Text_74("STRING_648082992");
  msg.set(Text_74);
  OrderMassCancelReport_0.insert(Text_74.getString());
  FIX::TotalAffectedOrders TotalAffectedOrders_1(1662097133);
  msg.set(TotalAffectedOrders_1);
  OrderMassCancelReport_0.insert(TotalAffectedOrders_1.getString());
  FIX::TradingSessionID TradingSessionID_57("STRING_6");
  msg.set(TradingSessionID_57);
  OrderMassCancelReport_0.insert(TradingSessionID_57.getString());
  FIX::TradingSessionSubID TradingSessionSubID_57("STRING_6");
  msg.set(TradingSessionSubID_57);
  OrderMassCancelReport_0.insert(TradingSessionSubID_57.getString());
  FIX::TransactTime TransactTime_44(FIX::UTCTIMESTAMP(14, 54, 38, 8, 5, 2010));
  msg.set(TransactTime_44);
  OrderMassCancelReport_0.insert(TransactTime_44.getString());
  all_values.push_back(OrderMassCancelReport_0);

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_3;
    FIX::AffectedOrderID AffectedOrderID_3("STRING_1230736016");
    noAffectedOrders_0_0.set(AffectedOrderID_3);
    AffectedOrdGrp_NoAffectedOrders_3.insert(AffectedOrderID_3.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_3("STRING_1983168151");
    noAffectedOrders_0_0.set(AffectedSecondaryOrderID_3);
    AffectedOrdGrp_NoAffectedOrders_3.insert(AffectedSecondaryOrderID_3.getString());
    FIX::OrigClOrdID OrigClOrdID_16("STRING_1283169950");
    noAffectedOrders_0_0.set(OrigClOrdID_16);
    AffectedOrdGrp_NoAffectedOrders_3.insert(OrigClOrdID_16.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_3);

    msg.addGroup(noAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_1;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_4;
    FIX::AffectedOrderID AffectedOrderID_4("STRING_699991831");
    noAffectedOrders_0_1.set(AffectedOrderID_4);
    AffectedOrdGrp_NoAffectedOrders_4.insert(AffectedOrderID_4.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_4("STRING_1718408385");
    noAffectedOrders_0_1.set(AffectedSecondaryOrderID_4);
    AffectedOrdGrp_NoAffectedOrders_4.insert(AffectedSecondaryOrderID_4.getString());
    FIX::OrigClOrdID OrigClOrdID_17("STRING_254299664");
    noAffectedOrders_0_1.set(OrigClOrdID_17);
    AffectedOrdGrp_NoAffectedOrders_4.insert(OrigClOrdID_17.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_4);

    msg.addGroup(noAffectedOrders_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_2;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_5;
    FIX::AffectedOrderID AffectedOrderID_5("STRING_227009870");
    noAffectedOrders_0_2.set(AffectedOrderID_5);
    AffectedOrdGrp_NoAffectedOrders_5.insert(AffectedOrderID_5.getString());
    FIX::AffectedSecondaryOrderID AffectedSecondaryOrderID_5("STRING_977125640");
    noAffectedOrders_0_2.set(AffectedSecondaryOrderID_5);
    AffectedOrdGrp_NoAffectedOrders_5.insert(AffectedSecondaryOrderID_5.getString());
    FIX::OrigClOrdID OrigClOrdID_18("STRING_643912756");
    noAffectedOrders_0_2.set(OrigClOrdID_18);
    AffectedOrdGrp_NoAffectedOrders_5.insert(OrigClOrdID_18.getString());
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_5);

    msg.addGroup(noAffectedOrders_0_2);
  }
  // Instrument
  multiset<string> Instrument_53;
  FIX::AttachmentPoint AttachmentPoint_53;
  AttachmentPoint_53.setString("45.530000");
  msg.set(AttachmentPoint_53);
  Instrument_53.insert(AttachmentPoint_53.getString());
  FIX::CFICode CFICode_53("STRING_1789709020");
  msg.set(CFICode_53);
  Instrument_53.insert(CFICode_53.getString());
  FIX::CPProgram CPProgram_53(1);
  msg.set(CPProgram_53);
  Instrument_53.insert(CPProgram_53.getString());
  FIX::CPRegType CPRegType_53("STRING_1802652145");
  msg.set(CPRegType_53);
  Instrument_53.insert(CPRegType_53.getString());
  FIX::CapPrice CapPrice_53;
  CapPrice_53.setString("4408164");
  msg.set(CapPrice_53);
  Instrument_53.insert(CapPrice_53.getString());
  FIX::ContractMultiplier ContractMultiplier_53;
  ContractMultiplier_53.setString("4839100");
  msg.set(ContractMultiplier_53);
  Instrument_53.insert(ContractMultiplier_53.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_53(1);
  msg.set(ContractMultiplierUnit_53);
  Instrument_53.insert(ContractMultiplierUnit_53.getString());
  FIX::ContractSettlMonth ContractSettlMonth_53("MONTHYEAR_874148552");
  msg.set(ContractSettlMonth_53);
  Instrument_53.insert(ContractSettlMonth_53.getString());
  FIX::CountryOfIssue CountryOfIssue_53("COUNTRY_1478400832");
  msg.set(CountryOfIssue_53);
  Instrument_53.insert(CountryOfIssue_53.getString());
  FIX::CouponPaymentDate CouponPaymentDate_53("LOCALMKTDATE_881523198");
  msg.set(CouponPaymentDate_53);
  Instrument_53.insert(CouponPaymentDate_53.getString());
  FIX::CouponRate CouponRate_53;
  CouponRate_53.setString("15.440000");
  msg.set(CouponRate_53);
  Instrument_53.insert(CouponRate_53.getString());
  FIX::CreditRating CreditRating_53("STRING_993014317");
  msg.set(CreditRating_53);
  Instrument_53.insert(CreditRating_53.getString());
  FIX::DatedDate DatedDate_53("LOCALMKTDATE_1895442647");
  msg.set(DatedDate_53);
  Instrument_53.insert(DatedDate_53.getString());
  FIX::DetachmentPoint DetachmentPoint_53;
  DetachmentPoint_53.setString("60.820000");
  msg.set(DetachmentPoint_53);
  Instrument_53.insert(DetachmentPoint_53.getString());
  FIX::EncodedIssuer EncodedIssuer_53("DATA_62250854");
  msg.set(EncodedIssuer_53);
  Instrument_53.insert(EncodedIssuer_53.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_53(1425118061);
  msg.set(EncodedIssuerLen_53);
  Instrument_53.insert(EncodedIssuerLen_53.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_53("DATA_2074968436");
  msg.set(EncodedSecurityDesc_53);
  Instrument_53.insert(EncodedSecurityDesc_53.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_53(1109960573);
  msg.set(EncodedSecurityDescLen_53);
  Instrument_53.insert(EncodedSecurityDescLen_53.getString());
  FIX::ExerciseStyle ExerciseStyle_53(0);
  msg.set(ExerciseStyle_53);
  Instrument_53.insert(ExerciseStyle_53.getString());
  FIX::Factor Factor_53;
  Factor_53.setString("11849235");
  msg.set(Factor_53);
  Instrument_53.insert(Factor_53.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_53(false);
  msg.set(FlexProductEligibilityIndicator_53);
  Instrument_53.insert(FlexProductEligibilityIndicator_53.getString());
  FIX::FlexibleIndicator FlexibleIndicator_53(true);
  msg.set(FlexibleIndicator_53);
  Instrument_53.insert(FlexibleIndicator_53.getString());
  FIX::FloorPrice FloorPrice_53;
  FloorPrice_53.setString("2681759");
  msg.set(FloorPrice_53);
  Instrument_53.insert(FloorPrice_53.getString());
  FIX::FlowScheduleType FlowScheduleType_53(4);
  msg.set(FlowScheduleType_53);
  Instrument_53.insert(FlowScheduleType_53.getString());
  FIX::InstrRegistry InstrRegistry_53("STRING_1077667820");
  msg.set(InstrRegistry_53);
  Instrument_53.insert(InstrRegistry_53.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_53('9');
  msg.set(InstrmtAssignmentMethod_53);
  Instrument_53.insert(InstrmtAssignmentMethod_53.getString());
  FIX::InterestAccrualDate InterestAccrualDate_53("LOCALMKTDATE_1341782542");
  msg.set(InterestAccrualDate_53);
  Instrument_53.insert(InterestAccrualDate_53.getString());
  FIX::IssueDate IssueDate_53("LOCALMKTDATE_1331967485");
  msg.set(IssueDate_53);
  Instrument_53.insert(IssueDate_53.getString());
  FIX::Issuer Issuer_53("STRING_1195177654");
  msg.set(Issuer_53);
  Instrument_53.insert(Issuer_53.getString());
  FIX::ListMethod ListMethod_53(0);
  msg.set(ListMethod_53);
  Instrument_53.insert(ListMethod_53.getString());
  FIX::LocaleOfIssue LocaleOfIssue_53("STRING_1975880241");
  msg.set(LocaleOfIssue_53);
  Instrument_53.insert(LocaleOfIssue_53.getString());
  FIX::MaturityDate MaturityDate_53("LOCALMKTDATE_975518559");
  msg.set(MaturityDate_53);
  Instrument_53.insert(MaturityDate_53.getString());
  FIX::MaturityMonthYear MaturityMonthYear_53("MONTHYEAR_1961133555");
  msg.set(MaturityMonthYear_53);
  Instrument_53.insert(MaturityMonthYear_53.getString());
  FIX::MaturityTime MaturityTime_53("TZTIMEONLY_1371588928");
  msg.set(MaturityTime_53);
  Instrument_53.insert(MaturityTime_53.getString());
  FIX::MinPriceIncrement MinPriceIncrement_53;
  MinPriceIncrement_53.setString("6306870");
  msg.set(MinPriceIncrement_53);
  Instrument_53.insert(MinPriceIncrement_53.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_53;
  MinPriceIncrementAmount_53.setString("2544664");
  msg.set(MinPriceIncrementAmount_53);
  Instrument_53.insert(MinPriceIncrementAmount_53.getString());
  FIX::NTPositionLimit NTPositionLimit_53(1855498941);
  msg.set(NTPositionLimit_53);
  Instrument_53.insert(NTPositionLimit_53.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_53;
  NotionalPercentageOutstanding_53.setString("54.990000");
  msg.set(NotionalPercentageOutstanding_53);
  Instrument_53.insert(NotionalPercentageOutstanding_53.getString());
  FIX::OptAttribute OptAttribute_53('1');
  msg.set(OptAttribute_53);
  Instrument_53.insert(OptAttribute_53.getString());
  FIX::OptPayoutAmount OptPayoutAmount_53;
  OptPayoutAmount_53.setString("11864161");
  msg.set(OptPayoutAmount_53);
  Instrument_53.insert(OptPayoutAmount_53.getString());
  FIX::OptPayoutType OptPayoutType_53(2);
  msg.set(OptPayoutType_53);
  Instrument_53.insert(OptPayoutType_53.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_53;
  OriginalNotionalPercentageOutstanding_53.setString("28.550000");
  msg.set(OriginalNotionalPercentageOutstanding_53);
  Instrument_53.insert(OriginalNotionalPercentageOutstanding_53.getString());
  FIX::Pool Pool_53("STRING_31946795");
  msg.set(Pool_53);
  Instrument_53.insert(Pool_53.getString());
  FIX::PositionLimit PositionLimit_53(190504048);
  msg.set(PositionLimit_53);
  Instrument_53.insert(PositionLimit_53.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_53("STRING_INT");
  msg.set(PriceQuoteMethod_53);
  Instrument_53.insert(PriceQuoteMethod_53.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_53("STRING_94197649");
  msg.set(PriceUnitOfMeasure_53);
  Instrument_53.insert(PriceUnitOfMeasure_53.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_53;
  PriceUnitOfMeasureQty_53.setString("16156221");
  msg.set(PriceUnitOfMeasureQty_53);
  Instrument_53.insert(PriceUnitOfMeasureQty_53.getString());
  FIX::Product Product_55(13);
  msg.set(Product_55);
  Instrument_53.insert(Product_55.getString());
  FIX::ProductComplex ProductComplex_53("STRING_1204158222");
  msg.set(ProductComplex_53);
  Instrument_53.insert(ProductComplex_53.getString());
  FIX::PutOrCall PutOrCall_53(0);
  msg.set(PutOrCall_53);
  Instrument_53.insert(PutOrCall_53.getString());
  FIX::RedemptionDate RedemptionDate_53("LOCALMKTDATE_477163663");
  msg.set(RedemptionDate_53);
  Instrument_53.insert(RedemptionDate_53.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_53("STRING_991847876");
  msg.set(RepoCollateralSecurityType_53);
  Instrument_53.insert(RepoCollateralSecurityType_53.getString());
  FIX::RepurchaseRate RepurchaseRate_53;
  RepurchaseRate_53.setString("42.440000");
  msg.set(RepurchaseRate_53);
  Instrument_53.insert(RepurchaseRate_53.getString());
  FIX::RepurchaseTerm RepurchaseTerm_53(745339616);
  msg.set(RepurchaseTerm_53);
  Instrument_53.insert(RepurchaseTerm_53.getString());
  FIX::RestructuringType RestructuringType_53("STRING_FR");
  msg.set(RestructuringType_53);
  Instrument_53.insert(RestructuringType_53.getString());
  FIX::SecurityDesc SecurityDesc_53("STRING_1660352065");
  msg.set(SecurityDesc_53);
  Instrument_53.insert(SecurityDesc_53.getString());
  FIX::SecurityExchange SecurityExchange_53("EXCHANGE_1713507400");
  msg.set(SecurityExchange_53);
  Instrument_53.insert(SecurityExchange_53.getString());
  FIX::SecurityGroup SecurityGroup_53("STRING_1957004574");
  msg.set(SecurityGroup_53);
  Instrument_53.insert(SecurityGroup_53.getString());
  FIX::SecurityID SecurityID_53("STRING_844835902");
  msg.set(SecurityID_53);
  Instrument_53.insert(SecurityID_53.getString());
  FIX::SecurityIDSource SecurityIDSource_53("STRING_L");
  msg.set(SecurityIDSource_53);
  Instrument_53.insert(SecurityIDSource_53.getString());
  FIX::SecurityStatus SecurityStatus_53("STRING_2");
  msg.set(SecurityStatus_53);
  Instrument_53.insert(SecurityStatus_53.getString());
  FIX::SecuritySubType SecuritySubType_54("STRING_673232495");
  msg.set(SecuritySubType_54);
  Instrument_53.insert(SecuritySubType_54.getString());
  FIX::SecurityType SecurityType_55("STRING_GO");
  msg.set(SecurityType_55);
  Instrument_53.insert(SecurityType_55.getString());
  FIX::Seniority Seniority_53("STRING_SD");
  msg.set(Seniority_53);
  Instrument_53.insert(Seniority_53.getString());
  FIX::SettlMethod SettlMethod_53('P');
  msg.set(SettlMethod_53);
  Instrument_53.insert(SettlMethod_53.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_53("STRING_219923373");
  msg.set(SettleOnOpenFlag_53);
  Instrument_53.insert(SettleOnOpenFlag_53.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_53("STRING_49061774");
  msg.set(StateOrProvinceOfIssue_53);
  Instrument_53.insert(StateOrProvinceOfIssue_53.getString());
  FIX::StrikeCurrency StrikeCurrency_53("USD");
  msg.set(StrikeCurrency_53);
  Instrument_53.insert(StrikeCurrency_53.getString());
  FIX::StrikeMultiplier StrikeMultiplier_53;
  StrikeMultiplier_53.setString("11776767");
  msg.set(StrikeMultiplier_53);
  Instrument_53.insert(StrikeMultiplier_53.getString());
  FIX::StrikePrice StrikePrice_53;
  StrikePrice_53.setString("7917691");
  msg.set(StrikePrice_53);
  Instrument_53.insert(StrikePrice_53.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_53(5);
  msg.set(StrikePriceBoundaryMethod_53);
  Instrument_53.insert(StrikePriceBoundaryMethod_53.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_53;
  StrikePriceBoundaryPrecision_53.setString("95.890000");
  msg.set(StrikePriceBoundaryPrecision_53);
  Instrument_53.insert(StrikePriceBoundaryPrecision_53.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_53(1);
  msg.set(StrikePriceDeterminationMethod_53);
  Instrument_53.insert(StrikePriceDeterminationMethod_53.getString());
  FIX::StrikeValue StrikeValue_53;
  StrikeValue_53.setString("4139943");
  msg.set(StrikeValue_53);
  Instrument_53.insert(StrikeValue_53.getString());
  FIX::Symbol Symbol_53("STRING_1045794879");
  msg.set(Symbol_53);
  Instrument_53.insert(Symbol_53.getString());
  FIX::SymbolSfx SymbolSfx_53("STRING_CD");
  msg.set(SymbolSfx_53);
  Instrument_53.insert(SymbolSfx_53.getString());
  FIX::TimeUnit TimeUnit_53("STRING_Wk");
  msg.set(TimeUnit_53);
  Instrument_53.insert(TimeUnit_53.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_53(2);
  msg.set(UnderlyingPriceDeterminationMethod_53);
  Instrument_53.insert(UnderlyingPriceDeterminationMethod_53.getString());
  FIX::UnitOfMeasure UnitOfMeasure_53("STRING_Alw");
  msg.set(UnitOfMeasure_53);
  Instrument_53.insert(UnitOfMeasure_53.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_53;
  UnitOfMeasureQty_53.setString("6703191");
  msg.set(UnitOfMeasureQty_53);
  Instrument_53.insert(UnitOfMeasureQty_53.getString());
  FIX::ValuationMethod ValuationMethod_53("STRING_EQTY");
  msg.set(ValuationMethod_53);
  Instrument_53.insert(ValuationMethod_53.getString());
  all_values.push_back(Instrument_53);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_104;
    FIX::ComplexEventCondition ComplexEventCondition_104(2);
    noComplexEvents_0_0.set(ComplexEventCondition_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventCondition_104.getString());
    FIX::ComplexEventPrice ComplexEventPrice_104;
    ComplexEventPrice_104.setString("15605382");
    noComplexEvents_0_0.set(ComplexEventPrice_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPrice_104.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_104(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceBoundaryMethod_104.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_104;
    ComplexEventPriceBoundaryPrecision_104.setString("18.200000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceBoundaryPrecision_104.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_104(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceTimeType_104.getString());
    FIX::ComplexEventType ComplexEventType_104(7);
    noComplexEvents_0_0.set(ComplexEventType_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventType_104.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_104;
    ComplexOptPayoutAmount_104.setString("16107077");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexOptPayoutAmount_104.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_104);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_216;
      FIX::ComplexEventEndDate ComplexEventEndDate_216(FIX::UTCTIMESTAMP(9, 51, 16, 24, 1, 2001));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_216);
      ComplexEventDates_NoComplexEventDates_216.insert(ComplexEventEndDate_216.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_216(FIX::UTCTIMESTAMP(5, 56, 25, 15, 2, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_216);
      ComplexEventDates_NoComplexEventDates_216.insert(ComplexEventStartDate_216.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_216);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_443;
        FIX::ComplexEventEndTime ComplexEventEndTime_443(FIX::UTCTIMEONLY(8, 9, 54));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_443);
        ComplexEventTimes_NoComplexEventTimes_443.insert(ComplexEventEndTime_443.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_443(FIX::UTCTIMEONLY(0, 34, 5));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_443);
        ComplexEventTimes_NoComplexEventTimes_443.insert(ComplexEventStartTime_443.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_443);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_217;
      FIX::ComplexEventEndDate ComplexEventEndDate_217(FIX::UTCTIMESTAMP(3, 38, 15, 7, 6, 2003));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_217);
      ComplexEventDates_NoComplexEventDates_217.insert(ComplexEventEndDate_217.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_217(FIX::UTCTIMESTAMP(10, 6, 1, 2, 3, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_217);
      ComplexEventDates_NoComplexEventDates_217.insert(ComplexEventStartDate_217.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_217);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_444;
        FIX::ComplexEventEndTime ComplexEventEndTime_444(FIX::UTCTIMEONLY(3, 22, 39));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_444);
        ComplexEventTimes_NoComplexEventTimes_444.insert(ComplexEventEndTime_444.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_444(FIX::UTCTIMEONLY(15, 53, 39));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_444);
        ComplexEventTimes_NoComplexEventTimes_444.insert(ComplexEventStartTime_444.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_444);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_445;
        FIX::ComplexEventEndTime ComplexEventEndTime_445(FIX::UTCTIMEONLY(13, 41, 22));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_445);
        ComplexEventTimes_NoComplexEventTimes_445.insert(ComplexEventEndTime_445.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_445(FIX::UTCTIMEONLY(21, 48, 31));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_445);
        ComplexEventTimes_NoComplexEventTimes_445.insert(ComplexEventStartTime_445.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_445);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_218;
      FIX::ComplexEventEndDate ComplexEventEndDate_218(FIX::UTCTIMESTAMP(7, 9, 43, 11, 7, 2002));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_218);
      ComplexEventDates_NoComplexEventDates_218.insert(ComplexEventEndDate_218.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_218(FIX::UTCTIMESTAMP(4, 30, 50, 15, 9, 2014));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_218);
      ComplexEventDates_NoComplexEventDates_218.insert(ComplexEventStartDate_218.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_218);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_446;
        FIX::ComplexEventEndTime ComplexEventEndTime_446(FIX::UTCTIMEONLY(11, 26, 25));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_446);
        ComplexEventTimes_NoComplexEventTimes_446.insert(ComplexEventEndTime_446.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_446(FIX::UTCTIMEONLY(22, 19, 13));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_446);
        ComplexEventTimes_NoComplexEventTimes_446.insert(ComplexEventStartTime_446.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_446);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_447;
        FIX::ComplexEventEndTime ComplexEventEndTime_447(FIX::UTCTIMEONLY(0, 46, 48));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_447);
        ComplexEventTimes_NoComplexEventTimes_447.insert(ComplexEventEndTime_447.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_447(FIX::UTCTIMEONLY(19, 28, 45));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_447);
        ComplexEventTimes_NoComplexEventTimes_447.insert(ComplexEventStartTime_447.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_447);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_105;
    FIX::ComplexEventCondition ComplexEventCondition_105(2);
    noComplexEvents_0_1.set(ComplexEventCondition_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventCondition_105.getString());
    FIX::ComplexEventPrice ComplexEventPrice_105;
    ComplexEventPrice_105.setString("10852929");
    noComplexEvents_0_1.set(ComplexEventPrice_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPrice_105.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_105(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceBoundaryMethod_105.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_105;
    ComplexEventPriceBoundaryPrecision_105.setString("32.820000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceBoundaryPrecision_105.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_105(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceTimeType_105.getString());
    FIX::ComplexEventType ComplexEventType_105(5);
    noComplexEvents_0_1.set(ComplexEventType_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventType_105.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_105;
    ComplexOptPayoutAmount_105.setString("3789769");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexOptPayoutAmount_105.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_105);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_219;
      FIX::ComplexEventEndDate ComplexEventEndDate_219(FIX::UTCTIMESTAMP(12, 38, 32, 24, 12, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_219);
      ComplexEventDates_NoComplexEventDates_219.insert(ComplexEventEndDate_219.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_219(FIX::UTCTIMESTAMP(2, 55, 7, 20, 10, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_219);
      ComplexEventDates_NoComplexEventDates_219.insert(ComplexEventStartDate_219.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_219);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_448;
        FIX::ComplexEventEndTime ComplexEventEndTime_448(FIX::UTCTIMEONLY(19, 51, 51));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_448);
        ComplexEventTimes_NoComplexEventTimes_448.insert(ComplexEventEndTime_448.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_448(FIX::UTCTIMEONLY(2, 20, 7));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_448);
        ComplexEventTimes_NoComplexEventTimes_448.insert(ComplexEventStartTime_448.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_448);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_449;
        FIX::ComplexEventEndTime ComplexEventEndTime_449(FIX::UTCTIMEONLY(12, 1, 3));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_449);
        ComplexEventTimes_NoComplexEventTimes_449.insert(ComplexEventEndTime_449.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_449(FIX::UTCTIMEONLY(14, 57, 3));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_449);
        ComplexEventTimes_NoComplexEventTimes_449.insert(ComplexEventStartTime_449.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_449);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_450;
        FIX::ComplexEventEndTime ComplexEventEndTime_450(FIX::UTCTIMEONLY(13, 41, 12));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_450);
        ComplexEventTimes_NoComplexEventTimes_450.insert(ComplexEventEndTime_450.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_450(FIX::UTCTIMEONLY(8, 41, 51));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_450);
        ComplexEventTimes_NoComplexEventTimes_450.insert(ComplexEventStartTime_450.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_450);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_106;
    FIX::ComplexEventCondition ComplexEventCondition_106(2);
    noComplexEvents_0_2.set(ComplexEventCondition_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventCondition_106.getString());
    FIX::ComplexEventPrice ComplexEventPrice_106;
    ComplexEventPrice_106.setString("16968309");
    noComplexEvents_0_2.set(ComplexEventPrice_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPrice_106.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_106(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceBoundaryMethod_106.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_106;
    ComplexEventPriceBoundaryPrecision_106.setString("78.990000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceBoundaryPrecision_106.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_106(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceTimeType_106.getString());
    FIX::ComplexEventType ComplexEventType_106(1);
    noComplexEvents_0_2.set(ComplexEventType_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventType_106.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_106;
    ComplexOptPayoutAmount_106.setString("3257503");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexOptPayoutAmount_106.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_106);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_220;
      FIX::ComplexEventEndDate ComplexEventEndDate_220(FIX::UTCTIMESTAMP(3, 9, 37, 21, 6, 2008));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_220);
      ComplexEventDates_NoComplexEventDates_220.insert(ComplexEventEndDate_220.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_220(FIX::UTCTIMESTAMP(9, 38, 57, 12, 9, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_220);
      ComplexEventDates_NoComplexEventDates_220.insert(ComplexEventStartDate_220.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_220);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_451;
        FIX::ComplexEventEndTime ComplexEventEndTime_451(FIX::UTCTIMEONLY(23, 37, 25));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_451);
        ComplexEventTimes_NoComplexEventTimes_451.insert(ComplexEventEndTime_451.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_451(FIX::UTCTIMEONLY(21, 6, 51));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_451);
        ComplexEventTimes_NoComplexEventTimes_451.insert(ComplexEventStartTime_451.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_451);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_221;
      FIX::ComplexEventEndDate ComplexEventEndDate_221(FIX::UTCTIMESTAMP(11, 33, 15, 18, 7, 2017));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_221);
      ComplexEventDates_NoComplexEventDates_221.insert(ComplexEventEndDate_221.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_221(FIX::UTCTIMESTAMP(22, 26, 25, 20, 12, 2017));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_221);
      ComplexEventDates_NoComplexEventDates_221.insert(ComplexEventStartDate_221.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_221);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_452;
        FIX::ComplexEventEndTime ComplexEventEndTime_452(FIX::UTCTIMEONLY(0, 42, 46));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_452);
        ComplexEventTimes_NoComplexEventTimes_452.insert(ComplexEventEndTime_452.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_452(FIX::UTCTIMEONLY(19, 32, 20));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_452);
        ComplexEventTimes_NoComplexEventTimes_452.insert(ComplexEventStartTime_452.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_452);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_453;
        FIX::ComplexEventEndTime ComplexEventEndTime_453(FIX::UTCTIMEONLY(11, 49, 44));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_453);
        ComplexEventTimes_NoComplexEventTimes_453.insert(ComplexEventEndTime_453.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_453(FIX::UTCTIMEONLY(23, 43, 14));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_453);
        ComplexEventTimes_NoComplexEventTimes_453.insert(ComplexEventStartTime_453.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_453);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_222;
      FIX::ComplexEventEndDate ComplexEventEndDate_222(FIX::UTCTIMESTAMP(18, 48, 31, 0, 11, 2000));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_222);
      ComplexEventDates_NoComplexEventDates_222.insert(ComplexEventEndDate_222.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_222(FIX::UTCTIMESTAMP(13, 57, 34, 1, 1, 2001));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_222);
      ComplexEventDates_NoComplexEventDates_222.insert(ComplexEventStartDate_222.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_222);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_454;
        FIX::ComplexEventEndTime ComplexEventEndTime_454(FIX::UTCTIMEONLY(1, 12, 4));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_454);
        ComplexEventTimes_NoComplexEventTimes_454.insert(ComplexEventEndTime_454.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_454(FIX::UTCTIMEONLY(7, 29, 15));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_454);
        ComplexEventTimes_NoComplexEventTimes_454.insert(ComplexEventStartTime_454.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_454);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_455;
        FIX::ComplexEventEndTime ComplexEventEndTime_455(FIX::UTCTIMEONLY(16, 4, 15));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_455);
        ComplexEventTimes_NoComplexEventTimes_455.insert(ComplexEventEndTime_455.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_455(FIX::UTCTIMEONLY(7, 58, 22));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_455);
        ComplexEventTimes_NoComplexEventTimes_455.insert(ComplexEventStartTime_455.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_455);

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
    multiset<string> EvntGrp_NoEvents_97;
    FIX::EventDate EventDate_97("LOCALMKTDATE_1459525148");
    noEvents_0_0.set(EventDate_97);
    EvntGrp_NoEvents_97.insert(EventDate_97.getString());
    FIX::EventPx EventPx_97;
    EventPx_97.setString("14051421");
    noEvents_0_0.set(EventPx_97);
    EvntGrp_NoEvents_97.insert(EventPx_97.getString());
    FIX::EventText EventText_97("STRING_1390860330");
    noEvents_0_0.set(EventText_97);
    EvntGrp_NoEvents_97.insert(EventText_97.getString());
    FIX::EventTime EventTime_97(FIX::UTCTIMESTAMP(13, 52, 17, 26, 6, 2003));
    noEvents_0_0.set(EventTime_97);
    EvntGrp_NoEvents_97.insert(EventTime_97.getString());
    FIX::EventType EventType_97(4);
    noEvents_0_0.set(EventType_97);
    EvntGrp_NoEvents_97.insert(EventType_97.getString());
    all_values.push_back(EvntGrp_NoEvents_97);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_98;
    FIX::EventDate EventDate_98("LOCALMKTDATE_761556438");
    noEvents_0_1.set(EventDate_98);
    EvntGrp_NoEvents_98.insert(EventDate_98.getString());
    FIX::EventPx EventPx_98;
    EventPx_98.setString("3706213");
    noEvents_0_1.set(EventPx_98);
    EvntGrp_NoEvents_98.insert(EventPx_98.getString());
    FIX::EventText EventText_98("STRING_1563386980");
    noEvents_0_1.set(EventText_98);
    EvntGrp_NoEvents_98.insert(EventText_98.getString());
    FIX::EventTime EventTime_98(FIX::UTCTIMESTAMP(22, 44, 40, 24, 4, 2007));
    noEvents_0_1.set(EventTime_98);
    EvntGrp_NoEvents_98.insert(EventTime_98.getString());
    FIX::EventType EventType_98(16);
    noEvents_0_1.set(EventType_98);
    EvntGrp_NoEvents_98.insert(EventType_98.getString());
    all_values.push_back(EvntGrp_NoEvents_98);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_99;
    FIX::EventDate EventDate_99("LOCALMKTDATE_1986379834");
    noEvents_0_2.set(EventDate_99);
    EvntGrp_NoEvents_99.insert(EventDate_99.getString());
    FIX::EventPx EventPx_99;
    EventPx_99.setString("7005031");
    noEvents_0_2.set(EventPx_99);
    EvntGrp_NoEvents_99.insert(EventPx_99.getString());
    FIX::EventText EventText_99("STRING_948056072");
    noEvents_0_2.set(EventText_99);
    EvntGrp_NoEvents_99.insert(EventText_99.getString());
    FIX::EventTime EventTime_99(FIX::UTCTIMESTAMP(18, 7, 31, 20, 7, 2001));
    noEvents_0_2.set(EventTime_99);
    EvntGrp_NoEvents_99.insert(EventTime_99.getString());
    FIX::EventType EventType_99(12);
    noEvents_0_2.set(EventType_99);
    EvntGrp_NoEvents_99.insert(EventType_99.getString());
    all_values.push_back(EvntGrp_NoEvents_99);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_100;
    FIX::InstrumentPartyID InstrumentPartyID_100("STRING_1998204820");
    noInstrumentParties_0_0.set(InstrumentPartyID_100);
    InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyID_100.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_100('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_100);
    InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyIDSource_100.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_100(841349901);
    noInstrumentParties_0_0.set(InstrumentPartyRole_100);
    InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyRole_100.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_100);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218;
      FIX::InstrumentPartySubID InstrumentPartySubID_218("STRING_1689700858");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_218);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218.insert(InstrumentPartySubID_218.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_218(1205253782);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_218);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218.insert(InstrumentPartySubIDType_218.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219;
      FIX::InstrumentPartySubID InstrumentPartySubID_219("STRING_647722113");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_219);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219.insert(InstrumentPartySubID_219.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_219(2093924521);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_219);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219.insert(InstrumentPartySubIDType_219.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220;
      FIX::InstrumentPartySubID InstrumentPartySubID_220("STRING_1966810220");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_220);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220.insert(InstrumentPartySubID_220.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_220(1018343430);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_220);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220.insert(InstrumentPartySubIDType_220.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_101;
    FIX::InstrumentPartyID InstrumentPartyID_101("STRING_1509827853");
    noInstrumentParties_0_1.set(InstrumentPartyID_101);
    InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyID_101.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_101('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_101);
    InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyIDSource_101.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_101(10448036);
    noInstrumentParties_0_1.set(InstrumentPartyRole_101);
    InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyRole_101.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_101);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221;
      FIX::InstrumentPartySubID InstrumentPartySubID_221("STRING_24130341");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_221);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221.insert(InstrumentPartySubID_221.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_221(1419332964);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_221);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221.insert(InstrumentPartySubIDType_221.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_115;
    FIX::SecurityAltID SecurityAltID_115("STRING_1119712462");
    noSecurityAltID_0_0.set(SecurityAltID_115);
    SecAltIDGrp_NoSecurityAltID_115.insert(SecurityAltID_115.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_115("STRING_336976972");
    noSecurityAltID_0_0.set(SecurityAltIDSource_115);
    SecAltIDGrp_NoSecurityAltID_115.insert(SecurityAltIDSource_115.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_115);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_116;
    FIX::SecurityAltID SecurityAltID_116("STRING_1772760159");
    noSecurityAltID_0_1.set(SecurityAltID_116);
    SecAltIDGrp_NoSecurityAltID_116.insert(SecurityAltID_116.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_116("STRING_1820215568");
    noSecurityAltID_0_1.set(SecurityAltIDSource_116);
    SecAltIDGrp_NoSecurityAltID_116.insert(SecurityAltIDSource_116.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_116);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_106;
  FIX::SecurityXML SecurityXML_107("XMLDATA_1285033044");
  msg.set(SecurityXML_107);
  FIX::SecurityXMLLen SecurityXMLLen_53(907692132);
  msg.set(SecurityXMLLen_53);
  FIX::SecurityXMLSchema SecurityXMLSchema_53("STRING_91808034");
  msg.set(SecurityXMLSchema_53);
  SecurityXML_106.insert(SecurityXMLSchema_53.getString());
  all_values.push_back(SecurityXML_106);

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_1;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_1("STRING_2145222403");
    noNotAffectedOrders_0_0.set(NotAffOrigClOrdID_1);
    NotAffectedOrdersGrp_NoNotAffectedOrders_1.insert(NotAffOrigClOrdID_1.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_1("STRING_2046953471");
    noNotAffectedOrders_0_0.set(NotAffectedOrderID_1);
    NotAffectedOrdersGrp_NoNotAffectedOrders_1.insert(NotAffectedOrderID_1.getString());
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_1);

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoNotAffectedOrders noNotAffectedOrders_0_1;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_2;
    FIX::NotAffOrigClOrdID NotAffOrigClOrdID_2("STRING_412187610");
    noNotAffectedOrders_0_1.set(NotAffOrigClOrdID_2);
    NotAffectedOrdersGrp_NoNotAffectedOrders_2.insert(NotAffOrigClOrdID_2.getString());
    FIX::NotAffectedOrderID NotAffectedOrderID_2("STRING_547310527");
    noNotAffectedOrders_0_1.set(NotAffectedOrderID_2);
    NotAffectedOrdersGrp_NoNotAffectedOrders_2.insert(NotAffectedOrderID_2.getString());
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_2);

    msg.addGroup(noNotAffectedOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_92;
    FIX::PartyID PartyID_92("STRING_830706778");
    noPartyIDs_0_0.set(PartyID_92);
    Parties_NoPartyIDs_92.insert(PartyID_92.getString());
    FIX::PartyIDSource PartyIDSource_92('9');
    noPartyIDs_0_0.set(PartyIDSource_92);
    Parties_NoPartyIDs_92.insert(PartyIDSource_92.getString());
    FIX::PartyRole PartyRole_92(84);
    noPartyIDs_0_0.set(PartyRole_92);
    Parties_NoPartyIDs_92.insert(PartyRole_92.getString());
    all_values.push_back(Parties_NoPartyIDs_92);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_187;
      FIX::PartySubID PartySubID_187("STRING_1168617329");
      noPartySubIDs_0_1_0.set(PartySubID_187);
      PtysSubGrp_NoPartySubIDs_187.insert(PartySubID_187.getString());
      FIX::PartySubIDType PartySubIDType_187(27);
      noPartySubIDs_0_1_0.set(PartySubIDType_187);
      PtysSubGrp_NoPartySubIDs_187.insert(PartySubIDType_187.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_187);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_188;
      FIX::PartySubID PartySubID_188("STRING_729826814");
      noPartySubIDs_0_1_1.set(PartySubID_188);
      PtysSubGrp_NoPartySubIDs_188.insert(PartySubID_188.getString());
      FIX::PartySubIDType PartySubIDType_188(7);
      noPartySubIDs_0_1_1.set(PartySubIDType_188);
      PtysSubGrp_NoPartySubIDs_188.insert(PartySubIDType_188.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_188);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_93;
    FIX::PartyID PartyID_93("STRING_1766599525");
    noPartyIDs_0_1.set(PartyID_93);
    Parties_NoPartyIDs_93.insert(PartyID_93.getString());
    FIX::PartyIDSource PartyIDSource_93('4');
    noPartyIDs_0_1.set(PartyIDSource_93);
    Parties_NoPartyIDs_93.insert(PartyIDSource_93.getString());
    FIX::PartyRole PartyRole_93(14);
    noPartyIDs_0_1.set(PartyRole_93);
    Parties_NoPartyIDs_93.insert(PartyRole_93.getString());
    all_values.push_back(Parties_NoPartyIDs_93);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_189;
      FIX::PartySubID PartySubID_189("STRING_803565915");
      noPartySubIDs_1_1_0.set(PartySubID_189);
      PtysSubGrp_NoPartySubIDs_189.insert(PartySubID_189.getString());
      FIX::PartySubIDType PartySubIDType_189(4);
      noPartySubIDs_1_1_0.set(PartySubIDType_189);
      PtysSubGrp_NoPartySubIDs_189.insert(PartySubIDType_189.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_189);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_190;
      FIX::PartySubID PartySubID_190("STRING_1009369080");
      noPartySubIDs_1_1_1.set(PartySubID_190);
      PtysSubGrp_NoPartySubIDs_190.insert(PartySubID_190.getString());
      FIX::PartySubIDType PartySubIDType_190(25);
      noPartySubIDs_1_1_1.set(PartySubIDType_190);
      PtysSubGrp_NoPartySubIDs_190.insert(PartySubIDType_190.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_190);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_191;
      FIX::PartySubID PartySubID_191("STRING_2116980225");
      noPartySubIDs_1_1_2.set(PartySubID_191);
      PtysSubGrp_NoPartySubIDs_191.insert(PartySubID_191.getString());
      FIX::PartySubIDType PartySubIDType_191(13);
      noPartySubIDs_1_1_2.set(PartySubIDType_191);
      PtysSubGrp_NoPartySubIDs_191.insert(PartySubIDType_191.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_191);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_94;
    FIX::PartyID PartyID_94("STRING_1947408718");
    noPartyIDs_0_2.set(PartyID_94);
    Parties_NoPartyIDs_94.insert(PartyID_94.getString());
    FIX::PartyIDSource PartyIDSource_94('1');
    noPartyIDs_0_2.set(PartyIDSource_94);
    Parties_NoPartyIDs_94.insert(PartyIDSource_94.getString());
    FIX::PartyRole PartyRole_94(27);
    noPartyIDs_0_2.set(PartyRole_94);
    Parties_NoPartyIDs_94.insert(PartyRole_94.getString());
    all_values.push_back(Parties_NoPartyIDs_94);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_192;
      FIX::PartySubID PartySubID_192("STRING_1591506593");
      noPartySubIDs_2_1_0.set(PartySubID_192);
      PtysSubGrp_NoPartySubIDs_192.insert(PartySubID_192.getString());
      FIX::PartySubIDType PartySubIDType_192(12);
      noPartySubIDs_2_1_0.set(PartySubIDType_192);
      PtysSubGrp_NoPartySubIDs_192.insert(PartySubIDType_192.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_192);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_193;
      FIX::PartySubID PartySubID_193("STRING_1711948673");
      noPartySubIDs_2_1_1.set(PartySubID_193);
      PtysSubGrp_NoPartySubIDs_193.insert(PartySubID_193.getString());
      FIX::PartySubIDType PartySubIDType_193(27);
      noPartySubIDs_2_1_1.set(PartySubIDType_193);
      PtysSubGrp_NoPartySubIDs_193.insert(PartySubIDType_193.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_193);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_194;
      FIX::PartySubID PartySubID_194("STRING_1326456805");
      noPartySubIDs_2_1_2.set(PartySubID_194);
      PtysSubGrp_NoPartySubIDs_194.insert(PartySubID_194.getString());
      FIX::PartySubIDType PartySubIDType_194(18);
      noPartySubIDs_2_1_2.set(PartySubIDType_194);
      PtysSubGrp_NoPartySubIDs_194.insert(PartySubIDType_194.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_194);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_6;
    FIX::TargetPartyID TargetPartyID_6("STRING_1873767332");
    noTargetPartyIDs_0_0.set(TargetPartyID_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyID_6.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_6('5');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyIDSource_6.getString());
    FIX::TargetPartyRole TargetPartyRole_6(2071446105);
    noTargetPartyIDs_0_0.set(TargetPartyRole_6);
    TargetParties_NoTargetPartyIDs_6.insert(TargetPartyRole_6.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_6);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_7;
    FIX::TargetPartyID TargetPartyID_7("STRING_124315384");
    noTargetPartyIDs_0_1.set(TargetPartyID_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyID_7.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_7('7');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyIDSource_7.getString());
    FIX::TargetPartyRole TargetPartyRole_7(1596019137);
    noTargetPartyIDs_0_1.set(TargetPartyRole_7);
    TargetParties_NoTargetPartyIDs_7.insert(TargetPartyRole_7.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_7);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_8;
    FIX::TargetPartyID TargetPartyID_8("STRING_1292932713");
    noTargetPartyIDs_0_2.set(TargetPartyID_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyID_8.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_8('3');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyIDSource_8.getString());
    FIX::TargetPartyRole TargetPartyRole_8(178362303);
    noTargetPartyIDs_0_2.set(TargetPartyRole_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyRole_8.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_8);

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_77;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_77("DATA_961788508");
  msg.set(EncodedUnderlyingIssuer_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingIssuer_77.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_77(2145940885);
  msg.set(EncodedUnderlyingIssuerLen_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingIssuerLen_77.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_77("DATA_727515689");
  msg.set(EncodedUnderlyingSecurityDesc_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingSecurityDesc_77.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_77(1648987733);
  msg.set(EncodedUnderlyingSecurityDescLen_77);
  UnderlyingInstrument_77.insert(EncodedUnderlyingSecurityDescLen_77.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_77;
  UnderlyingAdjustedQuantity_77.setString("11274009");
  msg.set(UnderlyingAdjustedQuantity_77);
  UnderlyingInstrument_77.insert(UnderlyingAdjustedQuantity_77.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_77;
  UnderlyingAllocationPercent_77.setString("16.040000");
  msg.set(UnderlyingAllocationPercent_77);
  UnderlyingInstrument_77.insert(UnderlyingAllocationPercent_77.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_77;
  UnderlyingAttachmentPoint_77.setString("13.460000");
  msg.set(UnderlyingAttachmentPoint_77);
  UnderlyingInstrument_77.insert(UnderlyingAttachmentPoint_77.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_77("STRING_2136770048");
  msg.set(UnderlyingCFICode_77);
  UnderlyingInstrument_77.insert(UnderlyingCFICode_77.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_77("STRING_211294212");
  msg.set(UnderlyingCPProgram_77);
  UnderlyingInstrument_77.insert(UnderlyingCPProgram_77.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_77("STRING_168647924");
  msg.set(UnderlyingCPRegType_77);
  UnderlyingInstrument_77.insert(UnderlyingCPRegType_77.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_77;
  UnderlyingCapValue_77.setString("7850358");
  msg.set(UnderlyingCapValue_77);
  UnderlyingInstrument_77.insert(UnderlyingCapValue_77.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_77;
  UnderlyingCashAmount_77.setString("112192");
  msg.set(UnderlyingCashAmount_77);
  UnderlyingInstrument_77.insert(UnderlyingCashAmount_77.getString());
  FIX::UnderlyingCashType UnderlyingCashType_77("STRING_DIFF");
  msg.set(UnderlyingCashType_77);
  UnderlyingInstrument_77.insert(UnderlyingCashType_77.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_77;
  UnderlyingContractMultiplier_77.setString("12060617");
  msg.set(UnderlyingContractMultiplier_77);
  UnderlyingInstrument_77.insert(UnderlyingContractMultiplier_77.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_77(1631359922);
  msg.set(UnderlyingContractMultiplierUnit_77);
  UnderlyingInstrument_77.insert(UnderlyingContractMultiplierUnit_77.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_77("COUNTRY_2066628067");
  msg.set(UnderlyingCountryOfIssue_77);
  UnderlyingInstrument_77.insert(UnderlyingCountryOfIssue_77.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_77("LOCALMKTDATE_387296126");
  msg.set(UnderlyingCouponPaymentDate_77);
  UnderlyingInstrument_77.insert(UnderlyingCouponPaymentDate_77.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_77;
  UnderlyingCouponRate_77.setString("49.470000");
  msg.set(UnderlyingCouponRate_77);
  UnderlyingInstrument_77.insert(UnderlyingCouponRate_77.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_77("STRING_747696136");
  msg.set(UnderlyingCreditRating_77);
  UnderlyingInstrument_77.insert(UnderlyingCreditRating_77.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_77("USD");
  msg.set(UnderlyingCurrency_77);
  UnderlyingInstrument_77.insert(UnderlyingCurrency_77.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_77;
  UnderlyingCurrentValue_77.setString("19884354");
  msg.set(UnderlyingCurrentValue_77);
  UnderlyingInstrument_77.insert(UnderlyingCurrentValue_77.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_77;
  UnderlyingDetachmentPoint_77.setString("66.160000");
  msg.set(UnderlyingDetachmentPoint_77);
  UnderlyingInstrument_77.insert(UnderlyingDetachmentPoint_77.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_77;
  UnderlyingDirtyPrice_77.setString("12359683");
  msg.set(UnderlyingDirtyPrice_77);
  UnderlyingInstrument_77.insert(UnderlyingDirtyPrice_77.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_77;
  UnderlyingEndPrice_77.setString("19123979");
  msg.set(UnderlyingEndPrice_77);
  UnderlyingInstrument_77.insert(UnderlyingEndPrice_77.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_77;
  UnderlyingEndValue_77.setString("15643520");
  msg.set(UnderlyingEndValue_77);
  UnderlyingInstrument_77.insert(UnderlyingEndValue_77.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_77(1942634715);
  msg.set(UnderlyingExerciseStyle_77);
  UnderlyingInstrument_77.insert(UnderlyingExerciseStyle_77.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_77;
  UnderlyingFXRate_77.setString("13609334");
  msg.set(UnderlyingFXRate_77);
  UnderlyingInstrument_77.insert(UnderlyingFXRate_77.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_77('M');
  msg.set(UnderlyingFXRateCalc_77);
  UnderlyingInstrument_77.insert(UnderlyingFXRateCalc_77.getString());
  FIX::UnderlyingFactor UnderlyingFactor_77;
  UnderlyingFactor_77.setString("1744924");
  msg.set(UnderlyingFactor_77);
  UnderlyingInstrument_77.insert(UnderlyingFactor_77.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_77(1539295712);
  msg.set(UnderlyingFlowScheduleType_77);
  UnderlyingInstrument_77.insert(UnderlyingFlowScheduleType_77.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_77("STRING_1671589574");
  msg.set(UnderlyingInstrRegistry_77);
  UnderlyingInstrument_77.insert(UnderlyingInstrRegistry_77.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_77("LOCALMKTDATE_172949665");
  msg.set(UnderlyingIssueDate_77);
  UnderlyingInstrument_77.insert(UnderlyingIssueDate_77.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_77("STRING_119327754");
  msg.set(UnderlyingIssuer_77);
  UnderlyingInstrument_77.insert(UnderlyingIssuer_77.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_77("STRING_1173093659");
  msg.set(UnderlyingLocaleOfIssue_77);
  UnderlyingInstrument_77.insert(UnderlyingLocaleOfIssue_77.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_77("LOCALMKTDATE_1300350633");
  msg.set(UnderlyingMaturityDate_77);
  UnderlyingInstrument_77.insert(UnderlyingMaturityDate_77.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_77("MONTHYEAR_1650409358");
  msg.set(UnderlyingMaturityMonthYear_77);
  UnderlyingInstrument_77.insert(UnderlyingMaturityMonthYear_77.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_77("TZTIMEONLY_1372245006");
  msg.set(UnderlyingMaturityTime_77);
  UnderlyingInstrument_77.insert(UnderlyingMaturityTime_77.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_77;
  UnderlyingNotionalPercentageOutstanding_77.setString("70.330000");
  msg.set(UnderlyingNotionalPercentageOutstanding_77);
  UnderlyingInstrument_77.insert(UnderlyingNotionalPercentageOutstanding_77.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_77('1');
  msg.set(UnderlyingOptAttribute_77);
  UnderlyingInstrument_77.insert(UnderlyingOptAttribute_77.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_77;
  UnderlyingOriginalNotionalPercentageOutstanding_77.setString("29.300000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_77);
  UnderlyingInstrument_77.insert(UnderlyingOriginalNotionalPercentageOutstanding_77.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_77("STRING_2074672840");
  msg.set(UnderlyingPriceUnitOfMeasure_77);
  UnderlyingInstrument_77.insert(UnderlyingPriceUnitOfMeasure_77.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_77;
  UnderlyingPriceUnitOfMeasureQty_77.setString("18729228");
  msg.set(UnderlyingPriceUnitOfMeasureQty_77);
  UnderlyingInstrument_77.insert(UnderlyingPriceUnitOfMeasureQty_77.getString());
  FIX::UnderlyingProduct UnderlyingProduct_77(2016014403);
  msg.set(UnderlyingProduct_77);
  UnderlyingInstrument_77.insert(UnderlyingProduct_77.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_77(1133250916);
  msg.set(UnderlyingPutOrCall_77);
  UnderlyingInstrument_77.insert(UnderlyingPutOrCall_77.getString());
  FIX::UnderlyingPx UnderlyingPx_77;
  UnderlyingPx_77.setString("13567991");
  msg.set(UnderlyingPx_77);
  UnderlyingInstrument_77.insert(UnderlyingPx_77.getString());
  FIX::UnderlyingQty UnderlyingQty_77;
  UnderlyingQty_77.setString("19351588");
  msg.set(UnderlyingQty_77);
  UnderlyingInstrument_77.insert(UnderlyingQty_77.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_77("LOCALMKTDATE_1520547042");
  msg.set(UnderlyingRedemptionDate_77);
  UnderlyingInstrument_77.insert(UnderlyingRedemptionDate_77.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_77("STRING_405140427");
  msg.set(UnderlyingRepoCollateralSecurityType_77);
  UnderlyingInstrument_77.insert(UnderlyingRepoCollateralSecurityType_77.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_77;
  UnderlyingRepurchaseRate_77.setString("13.100000");
  msg.set(UnderlyingRepurchaseRate_77);
  UnderlyingInstrument_77.insert(UnderlyingRepurchaseRate_77.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_77(1086816325);
  msg.set(UnderlyingRepurchaseTerm_77);
  UnderlyingInstrument_77.insert(UnderlyingRepurchaseTerm_77.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_77("STRING_1064900223");
  msg.set(UnderlyingRestructuringType_77);
  UnderlyingInstrument_77.insert(UnderlyingRestructuringType_77.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_77("STRING_376323125");
  msg.set(UnderlyingSecurityDesc_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityDesc_77.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_77("EXCHANGE_379369293");
  msg.set(UnderlyingSecurityExchange_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityExchange_77.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_77("STRING_153384934");
  msg.set(UnderlyingSecurityID_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityID_77.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_77("STRING_141237398");
  msg.set(UnderlyingSecurityIDSource_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityIDSource_77.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_77("STRING_1943721293");
  msg.set(UnderlyingSecuritySubType_77);
  UnderlyingInstrument_77.insert(UnderlyingSecuritySubType_77.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_77("STRING_2096019649");
  msg.set(UnderlyingSecurityType_77);
  UnderlyingInstrument_77.insert(UnderlyingSecurityType_77.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_77("STRING_1502170807");
  msg.set(UnderlyingSeniority_77);
  UnderlyingInstrument_77.insert(UnderlyingSeniority_77.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_77("STRING_506038711");
  msg.set(UnderlyingSettlMethod_77);
  UnderlyingInstrument_77.insert(UnderlyingSettlMethod_77.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_77(2);
  msg.set(UnderlyingSettlementType_77);
  UnderlyingInstrument_77.insert(UnderlyingSettlementType_77.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_77;
  UnderlyingStartValue_77.setString("8939828");
  msg.set(UnderlyingStartValue_77);
  UnderlyingInstrument_77.insert(UnderlyingStartValue_77.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_77("STRING_30144637");
  msg.set(UnderlyingStateOrProvinceOfIssue_77);
  UnderlyingInstrument_77.insert(UnderlyingStateOrProvinceOfIssue_77.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_77("GBP");
  msg.set(UnderlyingStrikeCurrency_77);
  UnderlyingInstrument_77.insert(UnderlyingStrikeCurrency_77.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_77;
  UnderlyingStrikePrice_77.setString("12032382");
  msg.set(UnderlyingStrikePrice_77);
  UnderlyingInstrument_77.insert(UnderlyingStrikePrice_77.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_77("STRING_1596328726");
  msg.set(UnderlyingSymbol_77);
  UnderlyingInstrument_77.insert(UnderlyingSymbol_77.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_77("STRING_516236336");
  msg.set(UnderlyingSymbolSfx_77);
  UnderlyingInstrument_77.insert(UnderlyingSymbolSfx_77.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_77("STRING_427999654");
  msg.set(UnderlyingTimeUnit_77);
  UnderlyingInstrument_77.insert(UnderlyingTimeUnit_77.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_77("STRING_738482112");
  msg.set(UnderlyingUnitOfMeasure_77);
  UnderlyingInstrument_77.insert(UnderlyingUnitOfMeasure_77.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_77;
  UnderlyingUnitOfMeasureQty_77.setString("2304562");
  msg.set(UnderlyingUnitOfMeasureQty_77);
  UnderlyingInstrument_77.insert(UnderlyingUnitOfMeasureQty_77.getString());
  all_values.push_back(UnderlyingInstrument_77);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_162;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_162("STRING_665671304");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_162);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_162.insert(UnderlyingSecurityAltID_162.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_162("STRING_2103379113");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_162);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_162.insert(UnderlyingSecurityAltIDSource_162.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_162);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_148;
    FIX::UnderlyingStipType UnderlyingStipType_148("STRING_1798922220");
    noUnderlyingStips_0_0.set(UnderlyingStipType_148);
    UnderlyingStipulations_NoUnderlyingStips_148.insert(UnderlyingStipType_148.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_148("STRING_1312694593");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_148);
    UnderlyingStipulations_NoUnderlyingStips_148.insert(UnderlyingStipValue_148.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_148);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_149;
    FIX::UnderlyingStipType UnderlyingStipType_149("STRING_1625098514");
    noUnderlyingStips_0_1.set(UnderlyingStipType_149);
    UnderlyingStipulations_NoUnderlyingStips_149.insert(UnderlyingStipType_149.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_149("STRING_1171985614");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_149);
    UnderlyingStipulations_NoUnderlyingStips_149.insert(UnderlyingStipValue_149.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_149);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_150;
    FIX::UnderlyingStipType UnderlyingStipType_150("STRING_1717835021");
    noUnderlyingStips_0_2.set(UnderlyingStipType_150);
    UnderlyingStipulations_NoUnderlyingStips_150.insert(UnderlyingStipType_150.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_150("STRING_12986177");
    noUnderlyingStips_0_2.set(UnderlyingStipValue_150);
    UnderlyingStipulations_NoUnderlyingStips_150.insert(UnderlyingStipValue_150.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_150);

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_160;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_160("STRING_635251596");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_160);
    UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyID_160.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_160('3');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_160);
    UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyIDSource_160.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_160(490687585);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_160);
    UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyRole_160.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_160);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_323("STRING_530546700");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_323);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323.insert(UnderlyingInstrumentPartySubID_323.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_323(286925230);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_323);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323.insert(UnderlyingInstrumentPartySubIDType_323.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_324("STRING_737172531");
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubID_324);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324.insert(UnderlyingInstrumentPartySubID_324.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_324(2032717508);
      noUndlyInstrumentPartySubIDs_0_1_1.set(UnderlyingInstrumentPartySubIDType_324);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324.insert(UnderlyingInstrumentPartySubIDType_324.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324);

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
