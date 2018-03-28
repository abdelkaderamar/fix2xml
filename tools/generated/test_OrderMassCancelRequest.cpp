#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderMassCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderMassCancelRequest_0;
  FIX::ClOrdID ClOrdID_39("STRING_1290471494");
  msg.set(ClOrdID_39);
  OrderMassCancelRequest_0.insert(ClOrdID_39.getString());
  FIX::EncodedText EncodedText_64("DATA_2070373063");
  msg.set(EncodedText_64);
  OrderMassCancelRequest_0.insert(EncodedText_64.getString());
  FIX::EncodedTextLen EncodedTextLen_64(1295522164);
  msg.set(EncodedTextLen_64);
  OrderMassCancelRequest_0.insert(EncodedTextLen_64.getString());
  FIX::MarketID MarketID_11("EXCHANGE_2075192224");
  msg.set(MarketID_11);
  OrderMassCancelRequest_0.insert(MarketID_11.getString());
  FIX::MarketSegmentID MarketSegmentID_11("STRING_1603344663");
  msg.set(MarketSegmentID_11);
  OrderMassCancelRequest_0.insert(MarketSegmentID_11.getString());
  FIX::MassCancelRequestType MassCancelRequestType_1('5');
  msg.set(MassCancelRequestType_1);
  OrderMassCancelRequest_0.insert(MassCancelRequestType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_37("STRING_2116091500");
  msg.set(SecondaryClOrdID_37);
  OrderMassCancelRequest_0.insert(SecondaryClOrdID_37.getString());
  FIX::Side Side_31('F');
  msg.set(Side_31);
  OrderMassCancelRequest_0.insert(Side_31.getString());
  FIX::Text Text_64("STRING_658628284");
  msg.set(Text_64);
  OrderMassCancelRequest_0.insert(Text_64.getString());
  FIX::TradingSessionID TradingSessionID_56("STRING_4");
  msg.set(TradingSessionID_56);
  OrderMassCancelRequest_0.insert(TradingSessionID_56.getString());
  FIX::TradingSessionSubID TradingSessionSubID_56("STRING_3");
  msg.set(TradingSessionSubID_56);
  OrderMassCancelRequest_0.insert(TradingSessionSubID_56.getString());
  FIX::TransactTime TransactTime_49(FIX::UTCTIMESTAMP(18, 18, 14, 9, 1, 2015));
  msg.set(TransactTime_49);
  OrderMassCancelRequest_0.insert(TransactTime_49.getString());
  all_values.push_back(OrderMassCancelRequest_0);

  // Instrument
  multiset<string> Instrument_59;
  FIX::AttachmentPoint AttachmentPoint_59;
  AttachmentPoint_59.setString("35.300000");
  msg.set(AttachmentPoint_59);
  Instrument_59.insert(AttachmentPoint_59.getString());
  FIX::CFICode CFICode_59("STRING_1881164532");
  msg.set(CFICode_59);
  Instrument_59.insert(CFICode_59.getString());
  FIX::CPProgram CPProgram_59(1);
  msg.set(CPProgram_59);
  Instrument_59.insert(CPProgram_59.getString());
  FIX::CPRegType CPRegType_59("STRING_604326504");
  msg.set(CPRegType_59);
  Instrument_59.insert(CPRegType_59.getString());
  FIX::CapPrice CapPrice_59;
  CapPrice_59.setString("6250388");
  msg.set(CapPrice_59);
  Instrument_59.insert(CapPrice_59.getString());
  FIX::ContractMultiplier ContractMultiplier_59;
  ContractMultiplier_59.setString("5198511");
  msg.set(ContractMultiplier_59);
  Instrument_59.insert(ContractMultiplier_59.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_59(2);
  msg.set(ContractMultiplierUnit_59);
  Instrument_59.insert(ContractMultiplierUnit_59.getString());
  FIX::ContractSettlMonth ContractSettlMonth_59("MONTHYEAR_792227490");
  msg.set(ContractSettlMonth_59);
  Instrument_59.insert(ContractSettlMonth_59.getString());
  FIX::CountryOfIssue CountryOfIssue_59("COUNTRY_1442994063");
  msg.set(CountryOfIssue_59);
  Instrument_59.insert(CountryOfIssue_59.getString());
  FIX::CouponPaymentDate CouponPaymentDate_59("LOCALMKTDATE_1673715632");
  msg.set(CouponPaymentDate_59);
  Instrument_59.insert(CouponPaymentDate_59.getString());
  FIX::CouponRate CouponRate_59;
  CouponRate_59.setString("75.760000");
  msg.set(CouponRate_59);
  Instrument_59.insert(CouponRate_59.getString());
  FIX::CreditRating CreditRating_59("STRING_1954686323");
  msg.set(CreditRating_59);
  Instrument_59.insert(CreditRating_59.getString());
  FIX::DatedDate DatedDate_59("LOCALMKTDATE_570401292");
  msg.set(DatedDate_59);
  Instrument_59.insert(DatedDate_59.getString());
  FIX::DetachmentPoint DetachmentPoint_59;
  DetachmentPoint_59.setString("54.220000");
  msg.set(DetachmentPoint_59);
  Instrument_59.insert(DetachmentPoint_59.getString());
  FIX::EncodedIssuer EncodedIssuer_59("DATA_1877575738");
  msg.set(EncodedIssuer_59);
  Instrument_59.insert(EncodedIssuer_59.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_59(1865923456);
  msg.set(EncodedIssuerLen_59);
  Instrument_59.insert(EncodedIssuerLen_59.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_59("DATA_730073999");
  msg.set(EncodedSecurityDesc_59);
  Instrument_59.insert(EncodedSecurityDesc_59.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_59(1333436753);
  msg.set(EncodedSecurityDescLen_59);
  Instrument_59.insert(EncodedSecurityDescLen_59.getString());
  FIX::ExerciseStyle ExerciseStyle_59(0);
  msg.set(ExerciseStyle_59);
  Instrument_59.insert(ExerciseStyle_59.getString());
  FIX::Factor Factor_59;
  Factor_59.setString("6986818");
  msg.set(Factor_59);
  Instrument_59.insert(Factor_59.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_59(true);
  msg.set(FlexProductEligibilityIndicator_59);
  Instrument_59.insert(FlexProductEligibilityIndicator_59.getString());
  FIX::FlexibleIndicator FlexibleIndicator_59(true);
  msg.set(FlexibleIndicator_59);
  Instrument_59.insert(FlexibleIndicator_59.getString());
  FIX::FloorPrice FloorPrice_59;
  FloorPrice_59.setString("7166281");
  msg.set(FloorPrice_59);
  Instrument_59.insert(FloorPrice_59.getString());
  FIX::FlowScheduleType FlowScheduleType_59(3);
  msg.set(FlowScheduleType_59);
  Instrument_59.insert(FlowScheduleType_59.getString());
  FIX::InstrRegistry InstrRegistry_59("STRING_723068339");
  msg.set(InstrRegistry_59);
  Instrument_59.insert(InstrRegistry_59.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_59('3');
  msg.set(InstrmtAssignmentMethod_59);
  Instrument_59.insert(InstrmtAssignmentMethod_59.getString());
  FIX::InterestAccrualDate InterestAccrualDate_59("LOCALMKTDATE_2081699492");
  msg.set(InterestAccrualDate_59);
  Instrument_59.insert(InterestAccrualDate_59.getString());
  FIX::IssueDate IssueDate_59("LOCALMKTDATE_913918633");
  msg.set(IssueDate_59);
  Instrument_59.insert(IssueDate_59.getString());
  FIX::Issuer Issuer_59("STRING_1363825412");
  msg.set(Issuer_59);
  Instrument_59.insert(Issuer_59.getString());
  FIX::ListMethod ListMethod_59(0);
  msg.set(ListMethod_59);
  Instrument_59.insert(ListMethod_59.getString());
  FIX::LocaleOfIssue LocaleOfIssue_59("STRING_1554564821");
  msg.set(LocaleOfIssue_59);
  Instrument_59.insert(LocaleOfIssue_59.getString());
  FIX::MaturityDate MaturityDate_59("LOCALMKTDATE_985715294");
  msg.set(MaturityDate_59);
  Instrument_59.insert(MaturityDate_59.getString());
  FIX::MaturityMonthYear MaturityMonthYear_59("MONTHYEAR_1914058116");
  msg.set(MaturityMonthYear_59);
  Instrument_59.insert(MaturityMonthYear_59.getString());
  FIX::MaturityTime MaturityTime_59("TZTIMEONLY_2074322954");
  msg.set(MaturityTime_59);
  Instrument_59.insert(MaturityTime_59.getString());
  FIX::MinPriceIncrement MinPriceIncrement_59;
  MinPriceIncrement_59.setString("15900417");
  msg.set(MinPriceIncrement_59);
  Instrument_59.insert(MinPriceIncrement_59.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_59;
  MinPriceIncrementAmount_59.setString("3916133");
  msg.set(MinPriceIncrementAmount_59);
  Instrument_59.insert(MinPriceIncrementAmount_59.getString());
  FIX::NTPositionLimit NTPositionLimit_59(446690493);
  msg.set(NTPositionLimit_59);
  Instrument_59.insert(NTPositionLimit_59.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_59;
  NotionalPercentageOutstanding_59.setString("92.170000");
  msg.set(NotionalPercentageOutstanding_59);
  Instrument_59.insert(NotionalPercentageOutstanding_59.getString());
  FIX::OptAttribute OptAttribute_59('1');
  msg.set(OptAttribute_59);
  Instrument_59.insert(OptAttribute_59.getString());
  FIX::OptPayoutAmount OptPayoutAmount_59;
  OptPayoutAmount_59.setString("18896845");
  msg.set(OptPayoutAmount_59);
  Instrument_59.insert(OptPayoutAmount_59.getString());
  FIX::OptPayoutType OptPayoutType_59(3);
  msg.set(OptPayoutType_59);
  Instrument_59.insert(OptPayoutType_59.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_59;
  OriginalNotionalPercentageOutstanding_59.setString("47.590000");
  msg.set(OriginalNotionalPercentageOutstanding_59);
  Instrument_59.insert(OriginalNotionalPercentageOutstanding_59.getString());
  FIX::Pool Pool_59("STRING_1696887231");
  msg.set(Pool_59);
  Instrument_59.insert(Pool_59.getString());
  FIX::PositionLimit PositionLimit_59(440062494);
  msg.set(PositionLimit_59);
  Instrument_59.insert(PositionLimit_59.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_59("STRING_INX");
  msg.set(PriceQuoteMethod_59);
  Instrument_59.insert(PriceQuoteMethod_59.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_59("STRING_1426979322");
  msg.set(PriceUnitOfMeasure_59);
  Instrument_59.insert(PriceUnitOfMeasure_59.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_59;
  PriceUnitOfMeasureQty_59.setString("1585023");
  msg.set(PriceUnitOfMeasureQty_59);
  Instrument_59.insert(PriceUnitOfMeasureQty_59.getString());
  FIX::Product Product_61(1);
  msg.set(Product_61);
  Instrument_59.insert(Product_61.getString());
  FIX::ProductComplex ProductComplex_59("STRING_612932427");
  msg.set(ProductComplex_59);
  Instrument_59.insert(ProductComplex_59.getString());
  FIX::PutOrCall PutOrCall_59(0);
  msg.set(PutOrCall_59);
  Instrument_59.insert(PutOrCall_59.getString());
  FIX::RedemptionDate RedemptionDate_59("LOCALMKTDATE_779372384");
  msg.set(RedemptionDate_59);
  Instrument_59.insert(RedemptionDate_59.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_59("STRING_1980491131");
  msg.set(RepoCollateralSecurityType_59);
  Instrument_59.insert(RepoCollateralSecurityType_59.getString());
  FIX::RepurchaseRate RepurchaseRate_59;
  RepurchaseRate_59.setString("46.660000");
  msg.set(RepurchaseRate_59);
  Instrument_59.insert(RepurchaseRate_59.getString());
  FIX::RepurchaseTerm RepurchaseTerm_59(1496000509);
  msg.set(RepurchaseTerm_59);
  Instrument_59.insert(RepurchaseTerm_59.getString());
  FIX::RestructuringType RestructuringType_59("STRING_MR");
  msg.set(RestructuringType_59);
  Instrument_59.insert(RestructuringType_59.getString());
  FIX::SecurityDesc SecurityDesc_59("STRING_677169358");
  msg.set(SecurityDesc_59);
  Instrument_59.insert(SecurityDesc_59.getString());
  FIX::SecurityExchange SecurityExchange_59("EXCHANGE_1852712140");
  msg.set(SecurityExchange_59);
  Instrument_59.insert(SecurityExchange_59.getString());
  FIX::SecurityGroup SecurityGroup_59("STRING_1475641441");
  msg.set(SecurityGroup_59);
  Instrument_59.insert(SecurityGroup_59.getString());
  FIX::SecurityID SecurityID_59("STRING_1591087991");
  msg.set(SecurityID_59);
  Instrument_59.insert(SecurityID_59.getString());
  FIX::SecurityIDSource SecurityIDSource_59("STRING_7");
  msg.set(SecurityIDSource_59);
  Instrument_59.insert(SecurityIDSource_59.getString());
  FIX::SecurityStatus SecurityStatus_59("STRING_2");
  msg.set(SecurityStatus_59);
  Instrument_59.insert(SecurityStatus_59.getString());
  FIX::SecuritySubType SecuritySubType_60("STRING_998169164");
  msg.set(SecuritySubType_60);
  Instrument_59.insert(SecuritySubType_60.getString());
  FIX::SecurityType SecurityType_61("STRING_CTB");
  msg.set(SecurityType_61);
  Instrument_59.insert(SecurityType_61.getString());
  FIX::Seniority Seniority_59("STRING_SB");
  msg.set(Seniority_59);
  Instrument_59.insert(Seniority_59.getString());
  FIX::SettlMethod SettlMethod_59('C');
  msg.set(SettlMethod_59);
  Instrument_59.insert(SettlMethod_59.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_59("STRING_1497327349");
  msg.set(SettleOnOpenFlag_59);
  Instrument_59.insert(SettleOnOpenFlag_59.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_59("STRING_1666722834");
  msg.set(StateOrProvinceOfIssue_59);
  Instrument_59.insert(StateOrProvinceOfIssue_59.getString());
  FIX::StrikeCurrency StrikeCurrency_59("USD");
  msg.set(StrikeCurrency_59);
  Instrument_59.insert(StrikeCurrency_59.getString());
  FIX::StrikeMultiplier StrikeMultiplier_59;
  StrikeMultiplier_59.setString("7030800");
  msg.set(StrikeMultiplier_59);
  Instrument_59.insert(StrikeMultiplier_59.getString());
  FIX::StrikePrice StrikePrice_59;
  StrikePrice_59.setString("11138998");
  msg.set(StrikePrice_59);
  Instrument_59.insert(StrikePrice_59.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_59(4);
  msg.set(StrikePriceBoundaryMethod_59);
  Instrument_59.insert(StrikePriceBoundaryMethod_59.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_59;
  StrikePriceBoundaryPrecision_59.setString("47.750000");
  msg.set(StrikePriceBoundaryPrecision_59);
  Instrument_59.insert(StrikePriceBoundaryPrecision_59.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_59(4);
  msg.set(StrikePriceDeterminationMethod_59);
  Instrument_59.insert(StrikePriceDeterminationMethod_59.getString());
  FIX::StrikeValue StrikeValue_59;
  StrikeValue_59.setString("29966");
  msg.set(StrikeValue_59);
  Instrument_59.insert(StrikeValue_59.getString());
  FIX::Symbol Symbol_59("STRING_749431309");
  msg.set(Symbol_59);
  Instrument_59.insert(Symbol_59.getString());
  FIX::SymbolSfx SymbolSfx_59("STRING_WI");
  msg.set(SymbolSfx_59);
  Instrument_59.insert(SymbolSfx_59.getString());
  FIX::TimeUnit TimeUnit_59("STRING_Mo");
  msg.set(TimeUnit_59);
  Instrument_59.insert(TimeUnit_59.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_59(2);
  msg.set(UnderlyingPriceDeterminationMethod_59);
  Instrument_59.insert(UnderlyingPriceDeterminationMethod_59.getString());
  FIX::UnitOfMeasure UnitOfMeasure_59("STRING_MWh");
  msg.set(UnitOfMeasure_59);
  Instrument_59.insert(UnitOfMeasure_59.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_59;
  UnitOfMeasureQty_59.setString("9622282");
  msg.set(UnitOfMeasureQty_59);
  Instrument_59.insert(UnitOfMeasureQty_59.getString());
  FIX::ValuationMethod ValuationMethod_59("STRING_EQTY");
  msg.set(ValuationMethod_59);
  Instrument_59.insert(ValuationMethod_59.getString());
  all_values.push_back(Instrument_59);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_116;
    FIX::ComplexEventCondition ComplexEventCondition_116(2);
    noComplexEvents_0_0.set(ComplexEventCondition_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventCondition_116.getString());
    FIX::ComplexEventPrice ComplexEventPrice_116;
    ComplexEventPrice_116.setString("9580110");
    noComplexEvents_0_0.set(ComplexEventPrice_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPrice_116.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_116(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceBoundaryMethod_116.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_116;
    ComplexEventPriceBoundaryPrecision_116.setString("86.350000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceBoundaryPrecision_116.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_116(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventPriceTimeType_116.getString());
    FIX::ComplexEventType ComplexEventType_116(4);
    noComplexEvents_0_0.set(ComplexEventType_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexEventType_116.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_116;
    ComplexOptPayoutAmount_116.setString("10371029");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_116);
    ComplexEvents_NoComplexEvents_116.insert(ComplexOptPayoutAmount_116.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_116);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_241;
      FIX::ComplexEventEndDate ComplexEventEndDate_241(FIX::UTCTIMESTAMP(23, 13, 40, 1, 7, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_241);
      ComplexEventDates_NoComplexEventDates_241.insert(ComplexEventEndDate_241.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_241(FIX::UTCTIMESTAMP(4, 43, 12, 25, 11, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_241);
      ComplexEventDates_NoComplexEventDates_241.insert(ComplexEventStartDate_241.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_241);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_481;
        FIX::ComplexEventEndTime ComplexEventEndTime_481(FIX::UTCTIMEONLY(8, 44, 53));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_481);
        ComplexEventTimes_NoComplexEventTimes_481.insert(ComplexEventEndTime_481.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_481(FIX::UTCTIMEONLY(10, 30, 25));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_481);
        ComplexEventTimes_NoComplexEventTimes_481.insert(ComplexEventStartTime_481.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_481);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_482;
        FIX::ComplexEventEndTime ComplexEventEndTime_482(FIX::UTCTIMEONLY(21, 54, 26));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_482);
        ComplexEventTimes_NoComplexEventTimes_482.insert(ComplexEventEndTime_482.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_482(FIX::UTCTIMEONLY(0, 57, 50));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_482);
        ComplexEventTimes_NoComplexEventTimes_482.insert(ComplexEventStartTime_482.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_482);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_242;
      FIX::ComplexEventEndDate ComplexEventEndDate_242(FIX::UTCTIMESTAMP(12, 55, 43, 17, 2, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_242);
      ComplexEventDates_NoComplexEventDates_242.insert(ComplexEventEndDate_242.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_242(FIX::UTCTIMESTAMP(21, 37, 43, 6, 4, 2010));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_242);
      ComplexEventDates_NoComplexEventDates_242.insert(ComplexEventStartDate_242.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_242);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_483;
        FIX::ComplexEventEndTime ComplexEventEndTime_483(FIX::UTCTIMEONLY(19, 58, 24));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_483);
        ComplexEventTimes_NoComplexEventTimes_483.insert(ComplexEventEndTime_483.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_483(FIX::UTCTIMEONLY(0, 54, 1));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_483);
        ComplexEventTimes_NoComplexEventTimes_483.insert(ComplexEventStartTime_483.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_483);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_484;
        FIX::ComplexEventEndTime ComplexEventEndTime_484(FIX::UTCTIMEONLY(19, 55, 22));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_484);
        ComplexEventTimes_NoComplexEventTimes_484.insert(ComplexEventEndTime_484.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_484(FIX::UTCTIMEONLY(23, 19, 21));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_484);
        ComplexEventTimes_NoComplexEventTimes_484.insert(ComplexEventStartTime_484.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_484);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_485;
        FIX::ComplexEventEndTime ComplexEventEndTime_485(FIX::UTCTIMEONLY(19, 8, 49));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_485);
        ComplexEventTimes_NoComplexEventTimes_485.insert(ComplexEventEndTime_485.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_485(FIX::UTCTIMEONLY(1, 51, 19));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_485);
        ComplexEventTimes_NoComplexEventTimes_485.insert(ComplexEventStartTime_485.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_485);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_243;
      FIX::ComplexEventEndDate ComplexEventEndDate_243(FIX::UTCTIMESTAMP(20, 54, 29, 0, 6, 2005));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_243);
      ComplexEventDates_NoComplexEventDates_243.insert(ComplexEventEndDate_243.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_243(FIX::UTCTIMESTAMP(0, 33, 47, 20, 2, 2017));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_243);
      ComplexEventDates_NoComplexEventDates_243.insert(ComplexEventStartDate_243.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_243);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_486;
        FIX::ComplexEventEndTime ComplexEventEndTime_486(FIX::UTCTIMEONLY(1, 0, 4));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_486);
        ComplexEventTimes_NoComplexEventTimes_486.insert(ComplexEventEndTime_486.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_486(FIX::UTCTIMEONLY(11, 15, 9));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_486);
        ComplexEventTimes_NoComplexEventTimes_486.insert(ComplexEventStartTime_486.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_486);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_487;
        FIX::ComplexEventEndTime ComplexEventEndTime_487(FIX::UTCTIMEONLY(11, 9, 14));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_487);
        ComplexEventTimes_NoComplexEventTimes_487.insert(ComplexEventEndTime_487.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_487(FIX::UTCTIMEONLY(10, 58, 31));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_487);
        ComplexEventTimes_NoComplexEventTimes_487.insert(ComplexEventStartTime_487.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_487);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_488;
        FIX::ComplexEventEndTime ComplexEventEndTime_488(FIX::UTCTIMEONLY(18, 26, 41));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_488);
        ComplexEventTimes_NoComplexEventTimes_488.insert(ComplexEventEndTime_488.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_488(FIX::UTCTIMEONLY(7, 16, 41));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_488);
        ComplexEventTimes_NoComplexEventTimes_488.insert(ComplexEventStartTime_488.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_488);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_120;
    FIX::EventDate EventDate_120("LOCALMKTDATE_953638901");
    noEvents_0_0.set(EventDate_120);
    EvntGrp_NoEvents_120.insert(EventDate_120.getString());
    FIX::EventPx EventPx_120;
    EventPx_120.setString("3969072");
    noEvents_0_0.set(EventPx_120);
    EvntGrp_NoEvents_120.insert(EventPx_120.getString());
    FIX::EventText EventText_120("STRING_153986175");
    noEvents_0_0.set(EventText_120);
    EvntGrp_NoEvents_120.insert(EventText_120.getString());
    FIX::EventTime EventTime_120(FIX::UTCTIMESTAMP(10, 20, 52, 11, 9, 2002));
    noEvents_0_0.set(EventTime_120);
    EvntGrp_NoEvents_120.insert(EventTime_120.getString());
    FIX::EventType EventType_120(8);
    noEvents_0_0.set(EventType_120);
    EvntGrp_NoEvents_120.insert(EventType_120.getString());
    all_values.push_back(EvntGrp_NoEvents_120);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_121;
    FIX::EventDate EventDate_121("LOCALMKTDATE_1927289611");
    noEvents_0_1.set(EventDate_121);
    EvntGrp_NoEvents_121.insert(EventDate_121.getString());
    FIX::EventPx EventPx_121;
    EventPx_121.setString("15607536");
    noEvents_0_1.set(EventPx_121);
    EvntGrp_NoEvents_121.insert(EventPx_121.getString());
    FIX::EventText EventText_121("STRING_2014783216");
    noEvents_0_1.set(EventText_121);
    EvntGrp_NoEvents_121.insert(EventText_121.getString());
    FIX::EventTime EventTime_121(FIX::UTCTIMESTAMP(3, 17, 2, 7, 4, 2016));
    noEvents_0_1.set(EventTime_121);
    EvntGrp_NoEvents_121.insert(EventTime_121.getString());
    FIX::EventType EventType_121(3);
    noEvents_0_1.set(EventType_121);
    EvntGrp_NoEvents_121.insert(EventType_121.getString());
    all_values.push_back(EvntGrp_NoEvents_121);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_122;
    FIX::EventDate EventDate_122("LOCALMKTDATE_288760347");
    noEvents_0_2.set(EventDate_122);
    EvntGrp_NoEvents_122.insert(EventDate_122.getString());
    FIX::EventPx EventPx_122;
    EventPx_122.setString("7540733");
    noEvents_0_2.set(EventPx_122);
    EvntGrp_NoEvents_122.insert(EventPx_122.getString());
    FIX::EventText EventText_122("STRING_1488788228");
    noEvents_0_2.set(EventText_122);
    EvntGrp_NoEvents_122.insert(EventText_122.getString());
    FIX::EventTime EventTime_122(FIX::UTCTIMESTAMP(5, 51, 17, 3, 7, 2017));
    noEvents_0_2.set(EventTime_122);
    EvntGrp_NoEvents_122.insert(EventTime_122.getString());
    FIX::EventType EventType_122(12);
    noEvents_0_2.set(EventType_122);
    EvntGrp_NoEvents_122.insert(EventType_122.getString());
    all_values.push_back(EvntGrp_NoEvents_122);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_123;
    FIX::InstrumentPartyID InstrumentPartyID_123("STRING_401321470");
    noInstrumentParties_0_0.set(InstrumentPartyID_123);
    InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyID_123.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_123('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_123);
    InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyIDSource_123.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_123(691316309);
    noInstrumentParties_0_0.set(InstrumentPartyRole_123);
    InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyRole_123.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_123);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258;
      FIX::InstrumentPartySubID InstrumentPartySubID_258("STRING_209624212");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_258);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258.insert(InstrumentPartySubID_258.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_258(1698270349);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_258);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258.insert(InstrumentPartySubIDType_258.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259;
      FIX::InstrumentPartySubID InstrumentPartySubID_259("STRING_1851906959");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_259);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259.insert(InstrumentPartySubID_259.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_259(264518579);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_259);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259.insert(InstrumentPartySubIDType_259.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260;
      FIX::InstrumentPartySubID InstrumentPartySubID_260("STRING_1478076312");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_260);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260.insert(InstrumentPartySubID_260.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_260(1265176983);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_260);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260.insert(InstrumentPartySubIDType_260.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_133;
    FIX::SecurityAltID SecurityAltID_133("STRING_242704372");
    noSecurityAltID_0_0.set(SecurityAltID_133);
    SecAltIDGrp_NoSecurityAltID_133.insert(SecurityAltID_133.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_133("STRING_173530066");
    noSecurityAltID_0_0.set(SecurityAltIDSource_133);
    SecAltIDGrp_NoSecurityAltID_133.insert(SecurityAltIDSource_133.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_133);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_134;
    FIX::SecurityAltID SecurityAltID_134("STRING_351489324");
    noSecurityAltID_0_1.set(SecurityAltID_134);
    SecAltIDGrp_NoSecurityAltID_134.insert(SecurityAltID_134.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_134("STRING_165503267");
    noSecurityAltID_0_1.set(SecurityAltIDSource_134);
    SecAltIDGrp_NoSecurityAltID_134.insert(SecurityAltIDSource_134.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_134);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_118;
  FIX::SecurityXML SecurityXML_119("XMLDATA_1380960717");
  msg.set(SecurityXML_119);
  FIX::SecurityXMLLen SecurityXMLLen_59(1265807199);
  msg.set(SecurityXMLLen_59);
  FIX::SecurityXMLSchema SecurityXMLSchema_59("STRING_352471839");
  msg.set(SecurityXMLSchema_59);
  SecurityXML_118.insert(SecurityXMLSchema_59.getString());
  all_values.push_back(SecurityXML_118);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_83;
    FIX::PartyID PartyID_83("STRING_1554567547");
    noPartyIDs_0_0.set(PartyID_83);
    Parties_NoPartyIDs_83.insert(PartyID_83.getString());
    FIX::PartyIDSource PartyIDSource_83('E');
    noPartyIDs_0_0.set(PartyIDSource_83);
    Parties_NoPartyIDs_83.insert(PartyIDSource_83.getString());
    FIX::PartyRole PartyRole_83(78);
    noPartyIDs_0_0.set(PartyRole_83);
    Parties_NoPartyIDs_83.insert(PartyRole_83.getString());
    all_values.push_back(Parties_NoPartyIDs_83);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_169;
      FIX::PartySubID PartySubID_169("STRING_1000761012");
      noPartySubIDs_0_1_0.set(PartySubID_169);
      PtysSubGrp_NoPartySubIDs_169.insert(PartySubID_169.getString());
      FIX::PartySubIDType PartySubIDType_169(18);
      noPartySubIDs_0_1_0.set(PartySubIDType_169);
      PtysSubGrp_NoPartySubIDs_169.insert(PartySubIDType_169.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_169);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_170;
      FIX::PartySubID PartySubID_170("STRING_1023879325");
      noPartySubIDs_0_1_1.set(PartySubID_170);
      PtysSubGrp_NoPartySubIDs_170.insert(PartySubID_170.getString());
      FIX::PartySubIDType PartySubIDType_170(10);
      noPartySubIDs_0_1_1.set(PartySubIDType_170);
      PtysSubGrp_NoPartySubIDs_170.insert(PartySubIDType_170.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_170);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_171;
      FIX::PartySubID PartySubID_171("STRING_2126355738");
      noPartySubIDs_0_1_2.set(PartySubID_171);
      PtysSubGrp_NoPartySubIDs_171.insert(PartySubID_171.getString());
      FIX::PartySubIDType PartySubIDType_171(26);
      noPartySubIDs_0_1_2.set(PartySubIDType_171);
      PtysSubGrp_NoPartySubIDs_171.insert(PartySubIDType_171.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_171);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_84;
    FIX::PartyID PartyID_84("STRING_1682762566");
    noPartyIDs_0_1.set(PartyID_84);
    Parties_NoPartyIDs_84.insert(PartyID_84.getString());
    FIX::PartyIDSource PartyIDSource_84('3');
    noPartyIDs_0_1.set(PartyIDSource_84);
    Parties_NoPartyIDs_84.insert(PartyIDSource_84.getString());
    FIX::PartyRole PartyRole_84(76);
    noPartyIDs_0_1.set(PartyRole_84);
    Parties_NoPartyIDs_84.insert(PartyRole_84.getString());
    all_values.push_back(Parties_NoPartyIDs_84);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_172;
      FIX::PartySubID PartySubID_172("STRING_1129811329");
      noPartySubIDs_1_1_0.set(PartySubID_172);
      PtysSubGrp_NoPartySubIDs_172.insert(PartySubID_172.getString());
      FIX::PartySubIDType PartySubIDType_172(21);
      noPartySubIDs_1_1_0.set(PartySubIDType_172);
      PtysSubGrp_NoPartySubIDs_172.insert(PartySubIDType_172.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_172);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_173;
      FIX::PartySubID PartySubID_173("STRING_132441364");
      noPartySubIDs_1_1_1.set(PartySubID_173);
      PtysSubGrp_NoPartySubIDs_173.insert(PartySubID_173.getString());
      FIX::PartySubIDType PartySubIDType_173(25);
      noPartySubIDs_1_1_1.set(PartySubIDType_173);
      PtysSubGrp_NoPartySubIDs_173.insert(PartySubIDType_173.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_173);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_174;
      FIX::PartySubID PartySubID_174("STRING_786086540");
      noPartySubIDs_1_1_2.set(PartySubID_174);
      PtysSubGrp_NoPartySubIDs_174.insert(PartySubID_174.getString());
      FIX::PartySubIDType PartySubIDType_174(8);
      noPartySubIDs_1_1_2.set(PartySubIDType_174);
      PtysSubGrp_NoPartySubIDs_174.insert(PartySubIDType_174.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_174);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_8;
    FIX::TargetPartyID TargetPartyID_8("STRING_2051263523");
    noTargetPartyIDs_0_0.set(TargetPartyID_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyID_8.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_8('5');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyIDSource_8.getString());
    FIX::TargetPartyRole TargetPartyRole_8(253895067);
    noTargetPartyIDs_0_0.set(TargetPartyRole_8);
    TargetParties_NoTargetPartyIDs_8.insert(TargetPartyRole_8.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_8);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_9;
    FIX::TargetPartyID TargetPartyID_9("STRING_77309941");
    noTargetPartyIDs_0_1.set(TargetPartyID_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyID_9.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_9('8');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyIDSource_9.getString());
    FIX::TargetPartyRole TargetPartyRole_9(419398334);
    noTargetPartyIDs_0_1.set(TargetPartyRole_9);
    TargetParties_NoTargetPartyIDs_9.insert(TargetPartyRole_9.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_9);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_10;
    FIX::TargetPartyID TargetPartyID_10("STRING_1458270658");
    noTargetPartyIDs_0_2.set(TargetPartyID_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyID_10.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_10('2');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyIDSource_10.getString());
    FIX::TargetPartyRole TargetPartyRole_10(771870174);
    noTargetPartyIDs_0_2.set(TargetPartyRole_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyRole_10.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_10);

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_80;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_80("DATA_1921714409");
  msg.set(EncodedUnderlyingIssuer_80);
  UnderlyingInstrument_80.insert(EncodedUnderlyingIssuer_80.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_80(1553158514);
  msg.set(EncodedUnderlyingIssuerLen_80);
  UnderlyingInstrument_80.insert(EncodedUnderlyingIssuerLen_80.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_80("DATA_1878415364");
  msg.set(EncodedUnderlyingSecurityDesc_80);
  UnderlyingInstrument_80.insert(EncodedUnderlyingSecurityDesc_80.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_80(1726462741);
  msg.set(EncodedUnderlyingSecurityDescLen_80);
  UnderlyingInstrument_80.insert(EncodedUnderlyingSecurityDescLen_80.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_80;
  UnderlyingAdjustedQuantity_80.setString("338751");
  msg.set(UnderlyingAdjustedQuantity_80);
  UnderlyingInstrument_80.insert(UnderlyingAdjustedQuantity_80.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_80;
  UnderlyingAllocationPercent_80.setString("27.280000");
  msg.set(UnderlyingAllocationPercent_80);
  UnderlyingInstrument_80.insert(UnderlyingAllocationPercent_80.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_80;
  UnderlyingAttachmentPoint_80.setString("80.770000");
  msg.set(UnderlyingAttachmentPoint_80);
  UnderlyingInstrument_80.insert(UnderlyingAttachmentPoint_80.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_80("STRING_1057754440");
  msg.set(UnderlyingCFICode_80);
  UnderlyingInstrument_80.insert(UnderlyingCFICode_80.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_80("STRING_1875000903");
  msg.set(UnderlyingCPProgram_80);
  UnderlyingInstrument_80.insert(UnderlyingCPProgram_80.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_80("STRING_1378570167");
  msg.set(UnderlyingCPRegType_80);
  UnderlyingInstrument_80.insert(UnderlyingCPRegType_80.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_80;
  UnderlyingCapValue_80.setString("12834680");
  msg.set(UnderlyingCapValue_80);
  UnderlyingInstrument_80.insert(UnderlyingCapValue_80.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_80;
  UnderlyingCashAmount_80.setString("14102798");
  msg.set(UnderlyingCashAmount_80);
  UnderlyingInstrument_80.insert(UnderlyingCashAmount_80.getString());
  FIX::UnderlyingCashType UnderlyingCashType_80("STRING_FIXED");
  msg.set(UnderlyingCashType_80);
  UnderlyingInstrument_80.insert(UnderlyingCashType_80.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_80;
  UnderlyingContractMultiplier_80.setString("19105032");
  msg.set(UnderlyingContractMultiplier_80);
  UnderlyingInstrument_80.insert(UnderlyingContractMultiplier_80.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_80(1333096974);
  msg.set(UnderlyingContractMultiplierUnit_80);
  UnderlyingInstrument_80.insert(UnderlyingContractMultiplierUnit_80.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_80("COUNTRY_799392867");
  msg.set(UnderlyingCountryOfIssue_80);
  UnderlyingInstrument_80.insert(UnderlyingCountryOfIssue_80.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_80("LOCALMKTDATE_844682804");
  msg.set(UnderlyingCouponPaymentDate_80);
  UnderlyingInstrument_80.insert(UnderlyingCouponPaymentDate_80.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_80;
  UnderlyingCouponRate_80.setString("83.380000");
  msg.set(UnderlyingCouponRate_80);
  UnderlyingInstrument_80.insert(UnderlyingCouponRate_80.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_80("STRING_1479990898");
  msg.set(UnderlyingCreditRating_80);
  UnderlyingInstrument_80.insert(UnderlyingCreditRating_80.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_80("GBP");
  msg.set(UnderlyingCurrency_80);
  UnderlyingInstrument_80.insert(UnderlyingCurrency_80.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_80;
  UnderlyingCurrentValue_80.setString("14911815");
  msg.set(UnderlyingCurrentValue_80);
  UnderlyingInstrument_80.insert(UnderlyingCurrentValue_80.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_80;
  UnderlyingDetachmentPoint_80.setString("92.190000");
  msg.set(UnderlyingDetachmentPoint_80);
  UnderlyingInstrument_80.insert(UnderlyingDetachmentPoint_80.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_80;
  UnderlyingDirtyPrice_80.setString("2437927");
  msg.set(UnderlyingDirtyPrice_80);
  UnderlyingInstrument_80.insert(UnderlyingDirtyPrice_80.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_80;
  UnderlyingEndPrice_80.setString("17450766");
  msg.set(UnderlyingEndPrice_80);
  UnderlyingInstrument_80.insert(UnderlyingEndPrice_80.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_80;
  UnderlyingEndValue_80.setString("16118591");
  msg.set(UnderlyingEndValue_80);
  UnderlyingInstrument_80.insert(UnderlyingEndValue_80.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_80(1124060142);
  msg.set(UnderlyingExerciseStyle_80);
  UnderlyingInstrument_80.insert(UnderlyingExerciseStyle_80.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_80;
  UnderlyingFXRate_80.setString("169913");
  msg.set(UnderlyingFXRate_80);
  UnderlyingInstrument_80.insert(UnderlyingFXRate_80.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_80('D');
  msg.set(UnderlyingFXRateCalc_80);
  UnderlyingInstrument_80.insert(UnderlyingFXRateCalc_80.getString());
  FIX::UnderlyingFactor UnderlyingFactor_80;
  UnderlyingFactor_80.setString("11226511");
  msg.set(UnderlyingFactor_80);
  UnderlyingInstrument_80.insert(UnderlyingFactor_80.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_80(788861521);
  msg.set(UnderlyingFlowScheduleType_80);
  UnderlyingInstrument_80.insert(UnderlyingFlowScheduleType_80.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_80("STRING_696876931");
  msg.set(UnderlyingInstrRegistry_80);
  UnderlyingInstrument_80.insert(UnderlyingInstrRegistry_80.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_80("LOCALMKTDATE_528325976");
  msg.set(UnderlyingIssueDate_80);
  UnderlyingInstrument_80.insert(UnderlyingIssueDate_80.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_80("STRING_519793237");
  msg.set(UnderlyingIssuer_80);
  UnderlyingInstrument_80.insert(UnderlyingIssuer_80.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_80("STRING_275856025");
  msg.set(UnderlyingLocaleOfIssue_80);
  UnderlyingInstrument_80.insert(UnderlyingLocaleOfIssue_80.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_80("LOCALMKTDATE_562201090");
  msg.set(UnderlyingMaturityDate_80);
  UnderlyingInstrument_80.insert(UnderlyingMaturityDate_80.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_80("MONTHYEAR_1251485966");
  msg.set(UnderlyingMaturityMonthYear_80);
  UnderlyingInstrument_80.insert(UnderlyingMaturityMonthYear_80.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_80("TZTIMEONLY_1675554102");
  msg.set(UnderlyingMaturityTime_80);
  UnderlyingInstrument_80.insert(UnderlyingMaturityTime_80.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_80;
  UnderlyingNotionalPercentageOutstanding_80.setString("55.300000");
  msg.set(UnderlyingNotionalPercentageOutstanding_80);
  UnderlyingInstrument_80.insert(UnderlyingNotionalPercentageOutstanding_80.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_80('9');
  msg.set(UnderlyingOptAttribute_80);
  UnderlyingInstrument_80.insert(UnderlyingOptAttribute_80.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_80;
  UnderlyingOriginalNotionalPercentageOutstanding_80.setString("6.210000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_80);
  UnderlyingInstrument_80.insert(UnderlyingOriginalNotionalPercentageOutstanding_80.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_80("STRING_755939979");
  msg.set(UnderlyingPriceUnitOfMeasure_80);
  UnderlyingInstrument_80.insert(UnderlyingPriceUnitOfMeasure_80.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_80;
  UnderlyingPriceUnitOfMeasureQty_80.setString("2417993");
  msg.set(UnderlyingPriceUnitOfMeasureQty_80);
  UnderlyingInstrument_80.insert(UnderlyingPriceUnitOfMeasureQty_80.getString());
  FIX::UnderlyingProduct UnderlyingProduct_80(576222159);
  msg.set(UnderlyingProduct_80);
  UnderlyingInstrument_80.insert(UnderlyingProduct_80.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_80(518959554);
  msg.set(UnderlyingPutOrCall_80);
  UnderlyingInstrument_80.insert(UnderlyingPutOrCall_80.getString());
  FIX::UnderlyingPx UnderlyingPx_80;
  UnderlyingPx_80.setString("15748963");
  msg.set(UnderlyingPx_80);
  UnderlyingInstrument_80.insert(UnderlyingPx_80.getString());
  FIX::UnderlyingQty UnderlyingQty_80;
  UnderlyingQty_80.setString("13756150");
  msg.set(UnderlyingQty_80);
  UnderlyingInstrument_80.insert(UnderlyingQty_80.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_80("LOCALMKTDATE_1363642358");
  msg.set(UnderlyingRedemptionDate_80);
  UnderlyingInstrument_80.insert(UnderlyingRedemptionDate_80.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_80("STRING_892951060");
  msg.set(UnderlyingRepoCollateralSecurityType_80);
  UnderlyingInstrument_80.insert(UnderlyingRepoCollateralSecurityType_80.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_80;
  UnderlyingRepurchaseRate_80.setString("22.770000");
  msg.set(UnderlyingRepurchaseRate_80);
  UnderlyingInstrument_80.insert(UnderlyingRepurchaseRate_80.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_80(846928054);
  msg.set(UnderlyingRepurchaseTerm_80);
  UnderlyingInstrument_80.insert(UnderlyingRepurchaseTerm_80.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_80("STRING_607965694");
  msg.set(UnderlyingRestructuringType_80);
  UnderlyingInstrument_80.insert(UnderlyingRestructuringType_80.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_80("STRING_51820222");
  msg.set(UnderlyingSecurityDesc_80);
  UnderlyingInstrument_80.insert(UnderlyingSecurityDesc_80.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_80("EXCHANGE_233993625");
  msg.set(UnderlyingSecurityExchange_80);
  UnderlyingInstrument_80.insert(UnderlyingSecurityExchange_80.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_80("STRING_851758420");
  msg.set(UnderlyingSecurityID_80);
  UnderlyingInstrument_80.insert(UnderlyingSecurityID_80.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_80("STRING_1796896882");
  msg.set(UnderlyingSecurityIDSource_80);
  UnderlyingInstrument_80.insert(UnderlyingSecurityIDSource_80.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_80("STRING_1845852785");
  msg.set(UnderlyingSecuritySubType_80);
  UnderlyingInstrument_80.insert(UnderlyingSecuritySubType_80.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_80("STRING_1975818562");
  msg.set(UnderlyingSecurityType_80);
  UnderlyingInstrument_80.insert(UnderlyingSecurityType_80.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_80("STRING_1813888229");
  msg.set(UnderlyingSeniority_80);
  UnderlyingInstrument_80.insert(UnderlyingSeniority_80.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_80("STRING_621015307");
  msg.set(UnderlyingSettlMethod_80);
  UnderlyingInstrument_80.insert(UnderlyingSettlMethod_80.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_80(4);
  msg.set(UnderlyingSettlementType_80);
  UnderlyingInstrument_80.insert(UnderlyingSettlementType_80.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_80;
  UnderlyingStartValue_80.setString("4552661");
  msg.set(UnderlyingStartValue_80);
  UnderlyingInstrument_80.insert(UnderlyingStartValue_80.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_80("STRING_1317892238");
  msg.set(UnderlyingStateOrProvinceOfIssue_80);
  UnderlyingInstrument_80.insert(UnderlyingStateOrProvinceOfIssue_80.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_80("USD");
  msg.set(UnderlyingStrikeCurrency_80);
  UnderlyingInstrument_80.insert(UnderlyingStrikeCurrency_80.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_80;
  UnderlyingStrikePrice_80.setString("15937482");
  msg.set(UnderlyingStrikePrice_80);
  UnderlyingInstrument_80.insert(UnderlyingStrikePrice_80.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_80("STRING_2041513090");
  msg.set(UnderlyingSymbol_80);
  UnderlyingInstrument_80.insert(UnderlyingSymbol_80.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_80("STRING_79061658");
  msg.set(UnderlyingSymbolSfx_80);
  UnderlyingInstrument_80.insert(UnderlyingSymbolSfx_80.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_80("STRING_1121818717");
  msg.set(UnderlyingTimeUnit_80);
  UnderlyingInstrument_80.insert(UnderlyingTimeUnit_80.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_80("STRING_1513984973");
  msg.set(UnderlyingUnitOfMeasure_80);
  UnderlyingInstrument_80.insert(UnderlyingUnitOfMeasure_80.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_80;
  UnderlyingUnitOfMeasureQty_80.setString("10580648");
  msg.set(UnderlyingUnitOfMeasureQty_80);
  UnderlyingInstrument_80.insert(UnderlyingUnitOfMeasureQty_80.getString());
  all_values.push_back(UnderlyingInstrument_80);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_155;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_155("STRING_122441304");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_155);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_155.insert(UnderlyingSecurityAltID_155.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_155("STRING_1299864275");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_155);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_155.insert(UnderlyingSecurityAltIDSource_155.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_155);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_156;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_156("STRING_457197850");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_156);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_156.insert(UnderlyingSecurityAltID_156.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_156("STRING_641400858");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_156);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_156.insert(UnderlyingSecurityAltIDSource_156.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_156);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_157;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_157("STRING_727276996");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltID_157);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_157.insert(UnderlyingSecurityAltID_157.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_157("STRING_1832812877");
    noUnderlyingSecurityAltID_0_2.set(UnderlyingSecurityAltIDSource_157);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_157.insert(UnderlyingSecurityAltIDSource_157.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_157);

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_139;
    FIX::UnderlyingStipType UnderlyingStipType_139("STRING_1620228056");
    noUnderlyingStips_0_0.set(UnderlyingStipType_139);
    UnderlyingStipulations_NoUnderlyingStips_139.insert(UnderlyingStipType_139.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_139("STRING_393451506");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_139);
    UnderlyingStipulations_NoUnderlyingStips_139.insert(UnderlyingStipValue_139.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_139);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_140;
    FIX::UnderlyingStipType UnderlyingStipType_140("STRING_704487622");
    noUnderlyingStips_0_1.set(UnderlyingStipType_140);
    UnderlyingStipulations_NoUnderlyingStips_140.insert(UnderlyingStipType_140.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_140("STRING_80710103");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_140);
    UnderlyingStipulations_NoUnderlyingStips_140.insert(UnderlyingStipValue_140.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_140);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_141;
    FIX::UnderlyingStipType UnderlyingStipType_141("STRING_445271728");
    noUnderlyingStips_0_2.set(UnderlyingStipType_141);
    UnderlyingStipulations_NoUnderlyingStips_141.insert(UnderlyingStipType_141.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_141("STRING_938481247");
    noUnderlyingStips_0_2.set(UnderlyingStipValue_141);
    UnderlyingStipulations_NoUnderlyingStips_141.insert(UnderlyingStipValue_141.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_141);

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_172;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_172("STRING_94684962");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_172);
    UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyID_172.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_172('6');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_172);
    UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyIDSource_172.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_172(760803438);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_172);
    UndlyInstrumentParties_NoUndlyInstrumentParties_172.insert(UnderlyingInstrumentPartyRole_172.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_172);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_334("STRING_1257865691");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_334);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334.insert(UnderlyingInstrumentPartySubID_334.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_334(1711789462);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_334);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334.insert(UnderlyingInstrumentPartySubIDType_334.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334);

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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
