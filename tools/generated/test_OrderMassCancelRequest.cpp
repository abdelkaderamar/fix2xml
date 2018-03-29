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
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelRequest_0;
  FIX::ClOrdID ClOrdID_40("STRING_228234421");
  msg.set(ClOrdID_40);
  OrderMassCancelRequest_0.insert(ClOrdID_40.getString());
  FIX::EncodedText EncodedText_71("DATA_1295373183");
  msg.set(EncodedText_71);
  OrderMassCancelRequest_0.insert(EncodedText_71.getString());
  FIX::EncodedTextLen EncodedTextLen_71(1061453152);
  msg.set(EncodedTextLen_71);
  OrderMassCancelRequest_0.insert(EncodedTextLen_71.getString());
  FIX::MarketID MarketID_14("EXCHANGE_2025000211");
  msg.set(MarketID_14);
  OrderMassCancelRequest_0.insert(MarketID_14.getString());
  FIX::MarketSegmentID MarketSegmentID_14("STRING_1285014834");
  msg.set(MarketSegmentID_14);
  OrderMassCancelRequest_0.insert(MarketSegmentID_14.getString());
  FIX::MassCancelRequestType MassCancelRequestType_1('3');
  msg.set(MassCancelRequestType_1);
  OrderMassCancelRequest_0.insert(MassCancelRequestType_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_38("STRING_1038994503");
  msg.set(SecondaryClOrdID_38);
  OrderMassCancelRequest_0.insert(SecondaryClOrdID_38.getString());
  FIX::Side Side_38('5');
  msg.set(Side_38);
  OrderMassCancelRequest_0.insert(Side_38.getString());
  FIX::Text Text_71("STRING_874115227");
  msg.set(Text_71);
  OrderMassCancelRequest_0.insert(Text_71.getString());
  FIX::TradingSessionID TradingSessionID_73("STRING_4");
  msg.set(TradingSessionID_73);
  OrderMassCancelRequest_0.insert(TradingSessionID_73.getString());
  FIX::TradingSessionSubID TradingSessionSubID_73("STRING_1");
  msg.set(TradingSessionSubID_73);
  OrderMassCancelRequest_0.insert(TradingSessionSubID_73.getString());
  FIX::TransactTime TransactTime_53(FIX::UTCTIMESTAMP(22, 33, 44, 15, 12, 2010));
  msg.set(TransactTime_53);
  OrderMassCancelRequest_0.insert(TransactTime_53.getString());
  all_values.push_back(OrderMassCancelRequest_0);

  all_compo_names.insert("OrderMassCancelRequest");

  // Instrument
  multiset<string> Instrument_60;
  FIX::AttachmentPoint AttachmentPoint_60;
  AttachmentPoint_60.setString("16.970000");
  msg.set(AttachmentPoint_60);
  Instrument_60.insert(AttachmentPoint_60.getString());
  FIX::CFICode CFICode_60("STRING_1349808784");
  msg.set(CFICode_60);
  Instrument_60.insert(CFICode_60.getString());
  FIX::CPProgram CPProgram_60(99);
  msg.set(CPProgram_60);
  Instrument_60.insert(CPProgram_60.getString());
  FIX::CPRegType CPRegType_60("STRING_1097532596");
  msg.set(CPRegType_60);
  Instrument_60.insert(CPRegType_60.getString());
  FIX::CapPrice CapPrice_60;
  CapPrice_60.setString("20741171");
  msg.set(CapPrice_60);
  Instrument_60.insert(CapPrice_60.getString());
  FIX::ContractMultiplier ContractMultiplier_60;
  ContractMultiplier_60.setString("21417214");
  msg.set(ContractMultiplier_60);
  Instrument_60.insert(ContractMultiplier_60.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_60(1);
  msg.set(ContractMultiplierUnit_60);
  Instrument_60.insert(ContractMultiplierUnit_60.getString());
  FIX::ContractSettlMonth ContractSettlMonth_60("MONTHYEAR_2097872206");
  msg.set(ContractSettlMonth_60);
  Instrument_60.insert(ContractSettlMonth_60.getString());
  FIX::CountryOfIssue CountryOfIssue_60("COUNTRY_1960303704");
  msg.set(CountryOfIssue_60);
  Instrument_60.insert(CountryOfIssue_60.getString());
  FIX::CouponPaymentDate CouponPaymentDate_60("LOCALMKTDATE_935356917");
  msg.set(CouponPaymentDate_60);
  Instrument_60.insert(CouponPaymentDate_60.getString());
  FIX::CouponRate CouponRate_60;
  CouponRate_60.setString("7.690000");
  msg.set(CouponRate_60);
  Instrument_60.insert(CouponRate_60.getString());
  FIX::CreditRating CreditRating_60("STRING_1615738022");
  msg.set(CreditRating_60);
  Instrument_60.insert(CreditRating_60.getString());
  FIX::DatedDate DatedDate_60("LOCALMKTDATE_2122953310");
  msg.set(DatedDate_60);
  Instrument_60.insert(DatedDate_60.getString());
  FIX::DetachmentPoint DetachmentPoint_60;
  DetachmentPoint_60.setString("15.420000");
  msg.set(DetachmentPoint_60);
  Instrument_60.insert(DetachmentPoint_60.getString());
  FIX::EncodedIssuer EncodedIssuer_60("DATA_763627557");
  msg.set(EncodedIssuer_60);
  Instrument_60.insert(EncodedIssuer_60.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_60(1036922814);
  msg.set(EncodedIssuerLen_60);
  Instrument_60.insert(EncodedIssuerLen_60.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_60("DATA_2048861754");
  msg.set(EncodedSecurityDesc_60);
  Instrument_60.insert(EncodedSecurityDesc_60.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_60(2048642391);
  msg.set(EncodedSecurityDescLen_60);
  Instrument_60.insert(EncodedSecurityDescLen_60.getString());
  FIX::ExerciseStyle ExerciseStyle_60(2);
  msg.set(ExerciseStyle_60);
  Instrument_60.insert(ExerciseStyle_60.getString());
  FIX::Factor Factor_60;
  Factor_60.setString("9403726");
  msg.set(Factor_60);
  Instrument_60.insert(Factor_60.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_60(true);
  msg.set(FlexProductEligibilityIndicator_60);
  Instrument_60.insert(FlexProductEligibilityIndicator_60.getString());
  FIX::FlexibleIndicator FlexibleIndicator_60(false);
  msg.set(FlexibleIndicator_60);
  Instrument_60.insert(FlexibleIndicator_60.getString());
  FIX::FloorPrice FloorPrice_60;
  FloorPrice_60.setString("3938753");
  msg.set(FloorPrice_60);
  Instrument_60.insert(FloorPrice_60.getString());
  FIX::FlowScheduleType FlowScheduleType_60(4);
  msg.set(FlowScheduleType_60);
  Instrument_60.insert(FlowScheduleType_60.getString());
  FIX::InstrRegistry InstrRegistry_60("STRING_1026721977");
  msg.set(InstrRegistry_60);
  Instrument_60.insert(InstrRegistry_60.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_60('1');
  msg.set(InstrmtAssignmentMethod_60);
  Instrument_60.insert(InstrmtAssignmentMethod_60.getString());
  FIX::InterestAccrualDate InterestAccrualDate_60("LOCALMKTDATE_567374142");
  msg.set(InterestAccrualDate_60);
  Instrument_60.insert(InterestAccrualDate_60.getString());
  FIX::IssueDate IssueDate_60("LOCALMKTDATE_1162468661");
  msg.set(IssueDate_60);
  Instrument_60.insert(IssueDate_60.getString());
  FIX::Issuer Issuer_60("STRING_48278278");
  msg.set(Issuer_60);
  Instrument_60.insert(Issuer_60.getString());
  FIX::ListMethod ListMethod_60(1);
  msg.set(ListMethod_60);
  Instrument_60.insert(ListMethod_60.getString());
  FIX::LocaleOfIssue LocaleOfIssue_60("STRING_803257195");
  msg.set(LocaleOfIssue_60);
  Instrument_60.insert(LocaleOfIssue_60.getString());
  FIX::MaturityDate MaturityDate_60("LOCALMKTDATE_1695409976");
  msg.set(MaturityDate_60);
  Instrument_60.insert(MaturityDate_60.getString());
  FIX::MaturityMonthYear MaturityMonthYear_60("MONTHYEAR_1812195986");
  msg.set(MaturityMonthYear_60);
  Instrument_60.insert(MaturityMonthYear_60.getString());
  FIX::MaturityTime MaturityTime_60("TZTIMEONLY_2117095686");
  msg.set(MaturityTime_60);
  Instrument_60.insert(MaturityTime_60.getString());
  FIX::MinPriceIncrement MinPriceIncrement_60;
  MinPriceIncrement_60.setString("6454589");
  msg.set(MinPriceIncrement_60);
  Instrument_60.insert(MinPriceIncrement_60.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_60;
  MinPriceIncrementAmount_60.setString("17388294");
  msg.set(MinPriceIncrementAmount_60);
  Instrument_60.insert(MinPriceIncrementAmount_60.getString());
  FIX::NTPositionLimit NTPositionLimit_60(2111333461);
  msg.set(NTPositionLimit_60);
  Instrument_60.insert(NTPositionLimit_60.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_60;
  NotionalPercentageOutstanding_60.setString("29.010000");
  msg.set(NotionalPercentageOutstanding_60);
  Instrument_60.insert(NotionalPercentageOutstanding_60.getString());
  FIX::OptAttribute OptAttribute_60('1');
  msg.set(OptAttribute_60);
  Instrument_60.insert(OptAttribute_60.getString());
  FIX::OptPayoutAmount OptPayoutAmount_60;
  OptPayoutAmount_60.setString("19241535");
  msg.set(OptPayoutAmount_60);
  Instrument_60.insert(OptPayoutAmount_60.getString());
  FIX::OptPayoutType OptPayoutType_60(2);
  msg.set(OptPayoutType_60);
  Instrument_60.insert(OptPayoutType_60.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_60;
  OriginalNotionalPercentageOutstanding_60.setString("51.390000");
  msg.set(OriginalNotionalPercentageOutstanding_60);
  Instrument_60.insert(OriginalNotionalPercentageOutstanding_60.getString());
  FIX::Pool Pool_60("STRING_1392407892");
  msg.set(Pool_60);
  Instrument_60.insert(Pool_60.getString());
  FIX::PositionLimit PositionLimit_60(1004379480);
  msg.set(PositionLimit_60);
  Instrument_60.insert(PositionLimit_60.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_60("STRING_INT");
  msg.set(PriceQuoteMethod_60);
  Instrument_60.insert(PriceQuoteMethod_60.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_60("STRING_8551801");
  msg.set(PriceUnitOfMeasure_60);
  Instrument_60.insert(PriceUnitOfMeasure_60.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_60;
  PriceUnitOfMeasureQty_60.setString("20413022");
  msg.set(PriceUnitOfMeasureQty_60);
  Instrument_60.insert(PriceUnitOfMeasureQty_60.getString());
  FIX::Product Product_62(9);
  msg.set(Product_62);
  Instrument_60.insert(Product_62.getString());
  FIX::ProductComplex ProductComplex_60("STRING_2057194192");
  msg.set(ProductComplex_60);
  Instrument_60.insert(ProductComplex_60.getString());
  FIX::PutOrCall PutOrCall_60(0);
  msg.set(PutOrCall_60);
  Instrument_60.insert(PutOrCall_60.getString());
  FIX::RedemptionDate RedemptionDate_60("LOCALMKTDATE_202973749");
  msg.set(RedemptionDate_60);
  Instrument_60.insert(RedemptionDate_60.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_60("STRING_62827772");
  msg.set(RepoCollateralSecurityType_60);
  Instrument_60.insert(RepoCollateralSecurityType_60.getString());
  FIX::RepurchaseRate RepurchaseRate_60;
  RepurchaseRate_60.setString("80.580000");
  msg.set(RepurchaseRate_60);
  Instrument_60.insert(RepurchaseRate_60.getString());
  FIX::RepurchaseTerm RepurchaseTerm_60(596849134);
  msg.set(RepurchaseTerm_60);
  Instrument_60.insert(RepurchaseTerm_60.getString());
  FIX::RestructuringType RestructuringType_60("STRING_MM");
  msg.set(RestructuringType_60);
  Instrument_60.insert(RestructuringType_60.getString());
  FIX::SecurityDesc SecurityDesc_60("STRING_1897110035");
  msg.set(SecurityDesc_60);
  Instrument_60.insert(SecurityDesc_60.getString());
  FIX::SecurityExchange SecurityExchange_60("EXCHANGE_2069205006");
  msg.set(SecurityExchange_60);
  Instrument_60.insert(SecurityExchange_60.getString());
  FIX::SecurityGroup SecurityGroup_60("STRING_959754444");
  msg.set(SecurityGroup_60);
  Instrument_60.insert(SecurityGroup_60.getString());
  FIX::SecurityID SecurityID_60("STRING_912095048");
  msg.set(SecurityID_60);
  Instrument_60.insert(SecurityID_60.getString());
  FIX::SecurityIDSource SecurityIDSource_60("STRING_5");
  msg.set(SecurityIDSource_60);
  Instrument_60.insert(SecurityIDSource_60.getString());
  FIX::SecurityStatus SecurityStatus_60("STRING_1");
  msg.set(SecurityStatus_60);
  Instrument_60.insert(SecurityStatus_60.getString());
  FIX::SecuritySubType SecuritySubType_61("STRING_1715352243");
  msg.set(SecuritySubType_61);
  Instrument_60.insert(SecuritySubType_61.getString());
  FIX::SecurityType SecurityType_62("STRING_AN");
  msg.set(SecurityType_62);
  Instrument_60.insert(SecurityType_62.getString());
  FIX::Seniority Seniority_60("STRING_SR");
  msg.set(Seniority_60);
  Instrument_60.insert(Seniority_60.getString());
  FIX::SettlMethod SettlMethod_60('P');
  msg.set(SettlMethod_60);
  Instrument_60.insert(SettlMethod_60.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_60("STRING_163384888");
  msg.set(SettleOnOpenFlag_60);
  Instrument_60.insert(SettleOnOpenFlag_60.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_60("STRING_678199795");
  msg.set(StateOrProvinceOfIssue_60);
  Instrument_60.insert(StateOrProvinceOfIssue_60.getString());
  FIX::StrikeCurrency StrikeCurrency_60("CAN");
  msg.set(StrikeCurrency_60);
  Instrument_60.insert(StrikeCurrency_60.getString());
  FIX::StrikeMultiplier StrikeMultiplier_60;
  StrikeMultiplier_60.setString("2199341");
  msg.set(StrikeMultiplier_60);
  Instrument_60.insert(StrikeMultiplier_60.getString());
  FIX::StrikePrice StrikePrice_60;
  StrikePrice_60.setString("14254839");
  msg.set(StrikePrice_60);
  Instrument_60.insert(StrikePrice_60.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_60(4);
  msg.set(StrikePriceBoundaryMethod_60);
  Instrument_60.insert(StrikePriceBoundaryMethod_60.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_60;
  StrikePriceBoundaryPrecision_60.setString("93.050000");
  msg.set(StrikePriceBoundaryPrecision_60);
  Instrument_60.insert(StrikePriceBoundaryPrecision_60.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_60(1);
  msg.set(StrikePriceDeterminationMethod_60);
  Instrument_60.insert(StrikePriceDeterminationMethod_60.getString());
  FIX::StrikeValue StrikeValue_60;
  StrikeValue_60.setString("1427434");
  msg.set(StrikeValue_60);
  Instrument_60.insert(StrikeValue_60.getString());
  FIX::Symbol Symbol_60("STRING_1066002339");
  msg.set(Symbol_60);
  Instrument_60.insert(Symbol_60.getString());
  FIX::SymbolSfx SymbolSfx_60("STRING_WI");
  msg.set(SymbolSfx_60);
  Instrument_60.insert(SymbolSfx_60.getString());
  FIX::TimeUnit TimeUnit_60("STRING_S");
  msg.set(TimeUnit_60);
  Instrument_60.insert(TimeUnit_60.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_60(4);
  msg.set(UnderlyingPriceDeterminationMethod_60);
  Instrument_60.insert(UnderlyingPriceDeterminationMethod_60.getString());
  FIX::UnitOfMeasure UnitOfMeasure_60("STRING_Bbl");
  msg.set(UnitOfMeasure_60);
  Instrument_60.insert(UnitOfMeasure_60.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_60;
  UnitOfMeasureQty_60.setString("10553496");
  msg.set(UnitOfMeasureQty_60);
  Instrument_60.insert(UnitOfMeasureQty_60.getString());
  FIX::ValuationMethod ValuationMethod_60("STRING_CDS");
  msg.set(ValuationMethod_60);
  Instrument_60.insert(ValuationMethod_60.getString());
  all_values.push_back(Instrument_60);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_121;
    FIX::ComplexEventCondition ComplexEventCondition_121(2);
    noComplexEvents_0_0.set(ComplexEventCondition_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventCondition_121.getString());
    FIX::ComplexEventPrice ComplexEventPrice_121;
    ComplexEventPrice_121.setString("11284263");
    noComplexEvents_0_0.set(ComplexEventPrice_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPrice_121.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_121(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceBoundaryMethod_121.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_121;
    ComplexEventPriceBoundaryPrecision_121.setString("40.940000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceBoundaryPrecision_121.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_121(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventPriceTimeType_121.getString());
    FIX::ComplexEventType ComplexEventType_121(1);
    noComplexEvents_0_0.set(ComplexEventType_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexEventType_121.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_121;
    ComplexOptPayoutAmount_121.setString("4399754");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_121);
    ComplexEvents_NoComplexEvents_121.insert(ComplexOptPayoutAmount_121.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_121);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_246;
      FIX::ComplexEventEndDate ComplexEventEndDate_246(FIX::UTCTIMESTAMP(1, 42, 7, 22, 11, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_246);
      ComplexEventDates_NoComplexEventDates_246.insert(ComplexEventEndDate_246.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_246(FIX::UTCTIMESTAMP(16, 28, 33, 24, 10, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_246);
      ComplexEventDates_NoComplexEventDates_246.insert(ComplexEventStartDate_246.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_246);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_502;
        FIX::ComplexEventEndTime ComplexEventEndTime_502(FIX::UTCTIMEONLY(15, 27, 3));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_502);
        ComplexEventTimes_NoComplexEventTimes_502.insert(ComplexEventEndTime_502.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_502(FIX::UTCTIMEONLY(17, 23, 4));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_502);
        ComplexEventTimes_NoComplexEventTimes_502.insert(ComplexEventStartTime_502.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_502);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_503;
        FIX::ComplexEventEndTime ComplexEventEndTime_503(FIX::UTCTIMEONLY(2, 12, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_503);
        ComplexEventTimes_NoComplexEventTimes_503.insert(ComplexEventEndTime_503.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_503(FIX::UTCTIMEONLY(13, 17, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_503);
        ComplexEventTimes_NoComplexEventTimes_503.insert(ComplexEventStartTime_503.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_503);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_504;
        FIX::ComplexEventEndTime ComplexEventEndTime_504(FIX::UTCTIMEONLY(19, 59, 47));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_504);
        ComplexEventTimes_NoComplexEventTimes_504.insert(ComplexEventEndTime_504.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_504(FIX::UTCTIMEONLY(13, 50, 26));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_504);
        ComplexEventTimes_NoComplexEventTimes_504.insert(ComplexEventStartTime_504.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_504);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_122;
    FIX::ComplexEventCondition ComplexEventCondition_122(2);
    noComplexEvents_0_1.set(ComplexEventCondition_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventCondition_122.getString());
    FIX::ComplexEventPrice ComplexEventPrice_122;
    ComplexEventPrice_122.setString("10268623");
    noComplexEvents_0_1.set(ComplexEventPrice_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPrice_122.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_122(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceBoundaryMethod_122.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_122;
    ComplexEventPriceBoundaryPrecision_122.setString("20.610000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceBoundaryPrecision_122.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_122(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventPriceTimeType_122.getString());
    FIX::ComplexEventType ComplexEventType_122(5);
    noComplexEvents_0_1.set(ComplexEventType_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexEventType_122.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_122;
    ComplexOptPayoutAmount_122.setString("18897354");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_122);
    ComplexEvents_NoComplexEvents_122.insert(ComplexOptPayoutAmount_122.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_122);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_247;
      FIX::ComplexEventEndDate ComplexEventEndDate_247(FIX::UTCTIMESTAMP(21, 6, 55, 26, 6, 2005));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_247);
      ComplexEventDates_NoComplexEventDates_247.insert(ComplexEventEndDate_247.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_247(FIX::UTCTIMESTAMP(0, 3, 30, 11, 10, 2005));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_247);
      ComplexEventDates_NoComplexEventDates_247.insert(ComplexEventStartDate_247.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_247);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_505;
        FIX::ComplexEventEndTime ComplexEventEndTime_505(FIX::UTCTIMEONLY(10, 7, 53));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_505);
        ComplexEventTimes_NoComplexEventTimes_505.insert(ComplexEventEndTime_505.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_505(FIX::UTCTIMEONLY(21, 35, 54));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_505);
        ComplexEventTimes_NoComplexEventTimes_505.insert(ComplexEventStartTime_505.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_505);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_506;
        FIX::ComplexEventEndTime ComplexEventEndTime_506(FIX::UTCTIMEONLY(1, 46, 16));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_506);
        ComplexEventTimes_NoComplexEventTimes_506.insert(ComplexEventEndTime_506.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_506(FIX::UTCTIMEONLY(12, 10, 35));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_506);
        ComplexEventTimes_NoComplexEventTimes_506.insert(ComplexEventStartTime_506.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_506);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_248;
      FIX::ComplexEventEndDate ComplexEventEndDate_248(FIX::UTCTIMESTAMP(19, 33, 17, 14, 3, 2014));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_248);
      ComplexEventDates_NoComplexEventDates_248.insert(ComplexEventEndDate_248.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_248(FIX::UTCTIMESTAMP(6, 3, 39, 18, 1, 2006));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_248);
      ComplexEventDates_NoComplexEventDates_248.insert(ComplexEventStartDate_248.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_248);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_507;
        FIX::ComplexEventEndTime ComplexEventEndTime_507(FIX::UTCTIMEONLY(5, 6, 27));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_507);
        ComplexEventTimes_NoComplexEventTimes_507.insert(ComplexEventEndTime_507.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_507(FIX::UTCTIMEONLY(19, 54, 27));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_507);
        ComplexEventTimes_NoComplexEventTimes_507.insert(ComplexEventStartTime_507.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_507);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_508;
        FIX::ComplexEventEndTime ComplexEventEndTime_508(FIX::UTCTIMEONLY(19, 6, 57));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_508);
        ComplexEventTimes_NoComplexEventTimes_508.insert(ComplexEventEndTime_508.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_508(FIX::UTCTIMEONLY(18, 7, 22));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_508);
        ComplexEventTimes_NoComplexEventTimes_508.insert(ComplexEventStartTime_508.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_508);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_249;
      FIX::ComplexEventEndDate ComplexEventEndDate_249(FIX::UTCTIMESTAMP(15, 55, 57, 1, 2, 2009));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_249);
      ComplexEventDates_NoComplexEventDates_249.insert(ComplexEventEndDate_249.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_249(FIX::UTCTIMESTAMP(20, 1, 29, 26, 6, 2011));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_249);
      ComplexEventDates_NoComplexEventDates_249.insert(ComplexEventStartDate_249.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_249);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_509;
        FIX::ComplexEventEndTime ComplexEventEndTime_509(FIX::UTCTIMEONLY(16, 2, 22));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_509);
        ComplexEventTimes_NoComplexEventTimes_509.insert(ComplexEventEndTime_509.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_509(FIX::UTCTIMEONLY(13, 16, 37));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_509);
        ComplexEventTimes_NoComplexEventTimes_509.insert(ComplexEventStartTime_509.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_509);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_510;
        FIX::ComplexEventEndTime ComplexEventEndTime_510(FIX::UTCTIMEONLY(15, 43, 40));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_510);
        ComplexEventTimes_NoComplexEventTimes_510.insert(ComplexEventEndTime_510.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_510(FIX::UTCTIMEONLY(17, 48, 48));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_510);
        ComplexEventTimes_NoComplexEventTimes_510.insert(ComplexEventStartTime_510.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_510);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_123;
    FIX::ComplexEventCondition ComplexEventCondition_123(1);
    noComplexEvents_0_2.set(ComplexEventCondition_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventCondition_123.getString());
    FIX::ComplexEventPrice ComplexEventPrice_123;
    ComplexEventPrice_123.setString("15620799");
    noComplexEvents_0_2.set(ComplexEventPrice_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPrice_123.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_123(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceBoundaryMethod_123.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_123;
    ComplexEventPriceBoundaryPrecision_123.setString("35.550000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceBoundaryPrecision_123.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_123(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventPriceTimeType_123.getString());
    FIX::ComplexEventType ComplexEventType_123(8);
    noComplexEvents_0_2.set(ComplexEventType_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexEventType_123.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_123;
    ComplexOptPayoutAmount_123.setString("11703161");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_123);
    ComplexEvents_NoComplexEvents_123.insert(ComplexOptPayoutAmount_123.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_123);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_250;
      FIX::ComplexEventEndDate ComplexEventEndDate_250(FIX::UTCTIMESTAMP(2, 27, 3, 19, 3, 2011));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_250);
      ComplexEventDates_NoComplexEventDates_250.insert(ComplexEventEndDate_250.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_250(FIX::UTCTIMESTAMP(23, 2, 53, 0, 4, 2002));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_250);
      ComplexEventDates_NoComplexEventDates_250.insert(ComplexEventStartDate_250.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_250);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_511;
        FIX::ComplexEventEndTime ComplexEventEndTime_511(FIX::UTCTIMEONLY(5, 28, 19));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_511);
        ComplexEventTimes_NoComplexEventTimes_511.insert(ComplexEventEndTime_511.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_511(FIX::UTCTIMEONLY(14, 7, 48));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_511);
        ComplexEventTimes_NoComplexEventTimes_511.insert(ComplexEventStartTime_511.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_511);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_512;
        FIX::ComplexEventEndTime ComplexEventEndTime_512(FIX::UTCTIMEONLY(14, 24, 47));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_512);
        ComplexEventTimes_NoComplexEventTimes_512.insert(ComplexEventEndTime_512.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_512(FIX::UTCTIMEONLY(5, 0, 24));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_512);
        ComplexEventTimes_NoComplexEventTimes_512.insert(ComplexEventStartTime_512.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_512);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_513;
        FIX::ComplexEventEndTime ComplexEventEndTime_513(FIX::UTCTIMEONLY(6, 51, 25));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_513);
        ComplexEventTimes_NoComplexEventTimes_513.insert(ComplexEventEndTime_513.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_513(FIX::UTCTIMEONLY(21, 24, 13));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_513);
        ComplexEventTimes_NoComplexEventTimes_513.insert(ComplexEventStartTime_513.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_513);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_251;
      FIX::ComplexEventEndDate ComplexEventEndDate_251(FIX::UTCTIMESTAMP(6, 58, 5, 18, 1, 2008));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_251);
      ComplexEventDates_NoComplexEventDates_251.insert(ComplexEventEndDate_251.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_251(FIX::UTCTIMESTAMP(6, 11, 11, 10, 6, 2010));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_251);
      ComplexEventDates_NoComplexEventDates_251.insert(ComplexEventStartDate_251.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_251);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_514;
        FIX::ComplexEventEndTime ComplexEventEndTime_514(FIX::UTCTIMEONLY(16, 38, 36));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_514);
        ComplexEventTimes_NoComplexEventTimes_514.insert(ComplexEventEndTime_514.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_514(FIX::UTCTIMEONLY(19, 29, 18));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_514);
        ComplexEventTimes_NoComplexEventTimes_514.insert(ComplexEventStartTime_514.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_514);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_515;
        FIX::ComplexEventEndTime ComplexEventEndTime_515(FIX::UTCTIMEONLY(15, 1, 6));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_515);
        ComplexEventTimes_NoComplexEventTimes_515.insert(ComplexEventEndTime_515.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_515(FIX::UTCTIMEONLY(3, 23, 6));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_515);
        ComplexEventTimes_NoComplexEventTimes_515.insert(ComplexEventStartTime_515.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_515);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_117;
    FIX::EventDate EventDate_117("LOCALMKTDATE_148846893");
    noEvents_0_0.set(EventDate_117);
    EvntGrp_NoEvents_117.insert(EventDate_117.getString());
    FIX::EventPx EventPx_117;
    EventPx_117.setString("13997665");
    noEvents_0_0.set(EventPx_117);
    EvntGrp_NoEvents_117.insert(EventPx_117.getString());
    FIX::EventText EventText_117("STRING_373612176");
    noEvents_0_0.set(EventText_117);
    EvntGrp_NoEvents_117.insert(EventText_117.getString());
    FIX::EventTime EventTime_117(FIX::UTCTIMESTAMP(5, 27, 32, 27, 7, 2011));
    noEvents_0_0.set(EventTime_117);
    EvntGrp_NoEvents_117.insert(EventTime_117.getString());
    FIX::EventType EventType_117(14);
    noEvents_0_0.set(EventType_117);
    EvntGrp_NoEvents_117.insert(EventType_117.getString());
    all_values.push_back(EvntGrp_NoEvents_117);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_122;
    FIX::InstrumentPartyID InstrumentPartyID_122("STRING_217259138");
    noInstrumentParties_0_0.set(InstrumentPartyID_122);
    InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyID_122.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_122('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_122);
    InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyIDSource_122.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_122(1372335156);
    noInstrumentParties_0_0.set(InstrumentPartyRole_122);
    InstrumentParties_NoInstrumentParties_122.insert(InstrumentPartyRole_122.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_122);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229;
      FIX::InstrumentPartySubID InstrumentPartySubID_229("STRING_2136098406");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_229);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229.insert(InstrumentPartySubID_229.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_229(549739264);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_229);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229.insert(InstrumentPartySubIDType_229.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_123;
    FIX::InstrumentPartyID InstrumentPartyID_123("STRING_1680217261");
    noInstrumentParties_0_1.set(InstrumentPartyID_123);
    InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyID_123.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_123('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_123);
    InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyIDSource_123.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_123(1796053593);
    noInstrumentParties_0_1.set(InstrumentPartyRole_123);
    InstrumentParties_NoInstrumentParties_123.insert(InstrumentPartyRole_123.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_123);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230;
      FIX::InstrumentPartySubID InstrumentPartySubID_230("STRING_276252771");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_230);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230.insert(InstrumentPartySubID_230.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_230(680689313);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_230);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230.insert(InstrumentPartySubIDType_230.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231;
      FIX::InstrumentPartySubID InstrumentPartySubID_231("STRING_1450006625");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_231);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231.insert(InstrumentPartySubID_231.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_231(1552438858);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_231);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231.insert(InstrumentPartySubIDType_231.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232;
      FIX::InstrumentPartySubID InstrumentPartySubID_232("STRING_2093128554");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_232);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232.insert(InstrumentPartySubID_232.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_232(303834948);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_232);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232.insert(InstrumentPartySubIDType_232.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_124;
    FIX::InstrumentPartyID InstrumentPartyID_124("STRING_243097633");
    noInstrumentParties_0_2.set(InstrumentPartyID_124);
    InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyID_124.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_124('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_124);
    InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyIDSource_124.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_124(1306921107);
    noInstrumentParties_0_2.set(InstrumentPartyRole_124);
    InstrumentParties_NoInstrumentParties_124.insert(InstrumentPartyRole_124.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_124);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233;
      FIX::InstrumentPartySubID InstrumentPartySubID_233("STRING_474259970");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_233);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233.insert(InstrumentPartySubID_233.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_233(1680533284);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_233);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233.insert(InstrumentPartySubIDType_233.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234;
      FIX::InstrumentPartySubID InstrumentPartySubID_234("STRING_1894660654");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_234);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234.insert(InstrumentPartySubID_234.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_234(2116484935);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_234);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234.insert(InstrumentPartySubIDType_234.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_112;
    FIX::SecurityAltID SecurityAltID_112("STRING_543177118");
    noSecurityAltID_0_0.set(SecurityAltID_112);
    SecAltIDGrp_NoSecurityAltID_112.insert(SecurityAltID_112.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_112("STRING_1286656227");
    noSecurityAltID_0_0.set(SecurityAltIDSource_112);
    SecAltIDGrp_NoSecurityAltID_112.insert(SecurityAltIDSource_112.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_112);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_113;
    FIX::SecurityAltID SecurityAltID_113("STRING_1981232933");
    noSecurityAltID_0_1.set(SecurityAltID_113);
    SecAltIDGrp_NoSecurityAltID_113.insert(SecurityAltID_113.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_113("STRING_1287017373");
    noSecurityAltID_0_1.set(SecurityAltIDSource_113);
    SecAltIDGrp_NoSecurityAltID_113.insert(SecurityAltIDSource_113.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_113);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_114;
    FIX::SecurityAltID SecurityAltID_114("STRING_404544932");
    noSecurityAltID_0_2.set(SecurityAltID_114);
    SecAltIDGrp_NoSecurityAltID_114.insert(SecurityAltID_114.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_114("STRING_779790752");
    noSecurityAltID_0_2.set(SecurityAltIDSource_114);
    SecAltIDGrp_NoSecurityAltID_114.insert(SecurityAltIDSource_114.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_114);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_120;
  FIX::SecurityXML SecurityXML_121("XMLDATA_1504276511");
  msg.set(SecurityXML_121);
  FIX::SecurityXMLLen SecurityXMLLen_60(1174622460);
  msg.set(SecurityXMLLen_60);
  FIX::SecurityXMLSchema SecurityXMLSchema_60("STRING_4642260");
  msg.set(SecurityXMLSchema_60);
  SecurityXML_120.insert(SecurityXMLSchema_60.getString());
  all_values.push_back(SecurityXML_120);
  all_compo_names.insert("SecurityXML");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_90;
    FIX::PartyID PartyID_90("STRING_1163237219");
    noPartyIDs_0_0.set(PartyID_90);
    Parties_NoPartyIDs_90.insert(PartyID_90.getString());
    FIX::PartyIDSource PartyIDSource_90('I');
    noPartyIDs_0_0.set(PartyIDSource_90);
    Parties_NoPartyIDs_90.insert(PartyIDSource_90.getString());
    FIX::PartyRole PartyRole_90(25);
    noPartyIDs_0_0.set(PartyRole_90);
    Parties_NoPartyIDs_90.insert(PartyRole_90.getString());
    all_values.push_back(Parties_NoPartyIDs_90);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_200;
      FIX::PartySubID PartySubID_200("STRING_202951470");
      noPartySubIDs_0_1_0.set(PartySubID_200);
      PtysSubGrp_NoPartySubIDs_200.insert(PartySubID_200.getString());
      FIX::PartySubIDType PartySubIDType_200(12);
      noPartySubIDs_0_1_0.set(PartySubIDType_200);
      PtysSubGrp_NoPartySubIDs_200.insert(PartySubIDType_200.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_200);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_91;
    FIX::PartyID PartyID_91("STRING_1184821320");
    noPartyIDs_0_1.set(PartyID_91);
    Parties_NoPartyIDs_91.insert(PartyID_91.getString());
    FIX::PartyIDSource PartyIDSource_91('B');
    noPartyIDs_0_1.set(PartyIDSource_91);
    Parties_NoPartyIDs_91.insert(PartyIDSource_91.getString());
    FIX::PartyRole PartyRole_91(85);
    noPartyIDs_0_1.set(PartyRole_91);
    Parties_NoPartyIDs_91.insert(PartyRole_91.getString());
    all_values.push_back(Parties_NoPartyIDs_91);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_201;
      FIX::PartySubID PartySubID_201("STRING_829285689");
      noPartySubIDs_1_1_0.set(PartySubID_201);
      PtysSubGrp_NoPartySubIDs_201.insert(PartySubID_201.getString());
      FIX::PartySubIDType PartySubIDType_201(21);
      noPartySubIDs_1_1_0.set(PartySubIDType_201);
      PtysSubGrp_NoPartySubIDs_201.insert(PartySubIDType_201.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_201);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_202;
      FIX::PartySubID PartySubID_202("STRING_832874163");
      noPartySubIDs_1_1_1.set(PartySubID_202);
      PtysSubGrp_NoPartySubIDs_202.insert(PartySubID_202.getString());
      FIX::PartySubIDType PartySubIDType_202(9);
      noPartySubIDs_1_1_1.set(PartySubIDType_202);
      PtysSubGrp_NoPartySubIDs_202.insert(PartySubIDType_202.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_202);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_203;
      FIX::PartySubID PartySubID_203("STRING_55143379");
      noPartySubIDs_1_1_2.set(PartySubID_203);
      PtysSubGrp_NoPartySubIDs_203.insert(PartySubID_203.getString());
      FIX::PartySubIDType PartySubIDType_203(30);
      noPartySubIDs_1_1_2.set(PartySubIDType_203);
      PtysSubGrp_NoPartySubIDs_203.insert(PartySubIDType_203.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_203);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_10;
    FIX::TargetPartyID TargetPartyID_10("STRING_1735676663");
    noTargetPartyIDs_0_0.set(TargetPartyID_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyID_10.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_10('9');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyIDSource_10.getString());
    FIX::TargetPartyRole TargetPartyRole_10(347040392);
    noTargetPartyIDs_0_0.set(TargetPartyRole_10);
    TargetParties_NoTargetPartyIDs_10.insert(TargetPartyRole_10.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_10);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_11;
    FIX::TargetPartyID TargetPartyID_11("STRING_895657658");
    noTargetPartyIDs_0_1.set(TargetPartyID_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyID_11.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_11('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyIDSource_11.getString());
    FIX::TargetPartyRole TargetPartyRole_11(1633696619);
    noTargetPartyIDs_0_1.set(TargetPartyRole_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyRole_11.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_11);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_12;
    FIX::TargetPartyID TargetPartyID_12("STRING_729406943");
    noTargetPartyIDs_0_2.set(TargetPartyID_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyID_12.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_12('6');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyIDSource_12.getString());
    FIX::TargetPartyRole TargetPartyRole_12(2038241551);
    noTargetPartyIDs_0_2.set(TargetPartyRole_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyRole_12.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_12);
    all_compo_names.insert("TargetParties.NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_84;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_84("DATA_1509197695");
  msg.set(EncodedUnderlyingIssuer_84);
  UnderlyingInstrument_84.insert(EncodedUnderlyingIssuer_84.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_84(11499403);
  msg.set(EncodedUnderlyingIssuerLen_84);
  UnderlyingInstrument_84.insert(EncodedUnderlyingIssuerLen_84.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_84("DATA_1065380364");
  msg.set(EncodedUnderlyingSecurityDesc_84);
  UnderlyingInstrument_84.insert(EncodedUnderlyingSecurityDesc_84.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_84(1513839955);
  msg.set(EncodedUnderlyingSecurityDescLen_84);
  UnderlyingInstrument_84.insert(EncodedUnderlyingSecurityDescLen_84.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_84;
  UnderlyingAdjustedQuantity_84.setString("1466290");
  msg.set(UnderlyingAdjustedQuantity_84);
  UnderlyingInstrument_84.insert(UnderlyingAdjustedQuantity_84.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_84;
  UnderlyingAllocationPercent_84.setString("39.350000");
  msg.set(UnderlyingAllocationPercent_84);
  UnderlyingInstrument_84.insert(UnderlyingAllocationPercent_84.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_84;
  UnderlyingAttachmentPoint_84.setString("14.790000");
  msg.set(UnderlyingAttachmentPoint_84);
  UnderlyingInstrument_84.insert(UnderlyingAttachmentPoint_84.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_84("STRING_1961975884");
  msg.set(UnderlyingCFICode_84);
  UnderlyingInstrument_84.insert(UnderlyingCFICode_84.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_84("STRING_989702484");
  msg.set(UnderlyingCPProgram_84);
  UnderlyingInstrument_84.insert(UnderlyingCPProgram_84.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_84("STRING_123689301");
  msg.set(UnderlyingCPRegType_84);
  UnderlyingInstrument_84.insert(UnderlyingCPRegType_84.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_84;
  UnderlyingCapValue_84.setString("11038402");
  msg.set(UnderlyingCapValue_84);
  UnderlyingInstrument_84.insert(UnderlyingCapValue_84.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_84;
  UnderlyingCashAmount_84.setString("270401");
  msg.set(UnderlyingCashAmount_84);
  UnderlyingInstrument_84.insert(UnderlyingCashAmount_84.getString());
  FIX::UnderlyingCashType UnderlyingCashType_84("STRING_FIXED");
  msg.set(UnderlyingCashType_84);
  UnderlyingInstrument_84.insert(UnderlyingCashType_84.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_84;
  UnderlyingContractMultiplier_84.setString("16957112");
  msg.set(UnderlyingContractMultiplier_84);
  UnderlyingInstrument_84.insert(UnderlyingContractMultiplier_84.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_84(616816687);
  msg.set(UnderlyingContractMultiplierUnit_84);
  UnderlyingInstrument_84.insert(UnderlyingContractMultiplierUnit_84.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_84("COUNTRY_1836615774");
  msg.set(UnderlyingCountryOfIssue_84);
  UnderlyingInstrument_84.insert(UnderlyingCountryOfIssue_84.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_84("LOCALMKTDATE_443933473");
  msg.set(UnderlyingCouponPaymentDate_84);
  UnderlyingInstrument_84.insert(UnderlyingCouponPaymentDate_84.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_84;
  UnderlyingCouponRate_84.setString("8.500000");
  msg.set(UnderlyingCouponRate_84);
  UnderlyingInstrument_84.insert(UnderlyingCouponRate_84.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_84("STRING_1740394908");
  msg.set(UnderlyingCreditRating_84);
  UnderlyingInstrument_84.insert(UnderlyingCreditRating_84.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_84("JPY");
  msg.set(UnderlyingCurrency_84);
  UnderlyingInstrument_84.insert(UnderlyingCurrency_84.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_84;
  UnderlyingCurrentValue_84.setString("21184340");
  msg.set(UnderlyingCurrentValue_84);
  UnderlyingInstrument_84.insert(UnderlyingCurrentValue_84.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_84;
  UnderlyingDetachmentPoint_84.setString("98.670000");
  msg.set(UnderlyingDetachmentPoint_84);
  UnderlyingInstrument_84.insert(UnderlyingDetachmentPoint_84.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_84;
  UnderlyingDirtyPrice_84.setString("14990215");
  msg.set(UnderlyingDirtyPrice_84);
  UnderlyingInstrument_84.insert(UnderlyingDirtyPrice_84.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_84;
  UnderlyingEndPrice_84.setString("3179907");
  msg.set(UnderlyingEndPrice_84);
  UnderlyingInstrument_84.insert(UnderlyingEndPrice_84.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_84;
  UnderlyingEndValue_84.setString("9829275");
  msg.set(UnderlyingEndValue_84);
  UnderlyingInstrument_84.insert(UnderlyingEndValue_84.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_84(866710754);
  msg.set(UnderlyingExerciseStyle_84);
  UnderlyingInstrument_84.insert(UnderlyingExerciseStyle_84.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_84;
  UnderlyingFXRate_84.setString("19516873");
  msg.set(UnderlyingFXRate_84);
  UnderlyingInstrument_84.insert(UnderlyingFXRate_84.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_84('D');
  msg.set(UnderlyingFXRateCalc_84);
  UnderlyingInstrument_84.insert(UnderlyingFXRateCalc_84.getString());
  FIX::UnderlyingFactor UnderlyingFactor_84;
  UnderlyingFactor_84.setString("15214172");
  msg.set(UnderlyingFactor_84);
  UnderlyingInstrument_84.insert(UnderlyingFactor_84.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_84(1842445279);
  msg.set(UnderlyingFlowScheduleType_84);
  UnderlyingInstrument_84.insert(UnderlyingFlowScheduleType_84.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_84("STRING_1074048515");
  msg.set(UnderlyingInstrRegistry_84);
  UnderlyingInstrument_84.insert(UnderlyingInstrRegistry_84.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_84("LOCALMKTDATE_1532916697");
  msg.set(UnderlyingIssueDate_84);
  UnderlyingInstrument_84.insert(UnderlyingIssueDate_84.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_84("STRING_760341995");
  msg.set(UnderlyingIssuer_84);
  UnderlyingInstrument_84.insert(UnderlyingIssuer_84.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_84("STRING_440404822");
  msg.set(UnderlyingLocaleOfIssue_84);
  UnderlyingInstrument_84.insert(UnderlyingLocaleOfIssue_84.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_84("LOCALMKTDATE_1679545710");
  msg.set(UnderlyingMaturityDate_84);
  UnderlyingInstrument_84.insert(UnderlyingMaturityDate_84.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_84("MONTHYEAR_841475930");
  msg.set(UnderlyingMaturityMonthYear_84);
  UnderlyingInstrument_84.insert(UnderlyingMaturityMonthYear_84.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_84("TZTIMEONLY_361142654");
  msg.set(UnderlyingMaturityTime_84);
  UnderlyingInstrument_84.insert(UnderlyingMaturityTime_84.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_84;
  UnderlyingNotionalPercentageOutstanding_84.setString("79.460000");
  msg.set(UnderlyingNotionalPercentageOutstanding_84);
  UnderlyingInstrument_84.insert(UnderlyingNotionalPercentageOutstanding_84.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_84('1');
  msg.set(UnderlyingOptAttribute_84);
  UnderlyingInstrument_84.insert(UnderlyingOptAttribute_84.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_84;
  UnderlyingOriginalNotionalPercentageOutstanding_84.setString("19.550000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_84);
  UnderlyingInstrument_84.insert(UnderlyingOriginalNotionalPercentageOutstanding_84.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_84("STRING_450394528");
  msg.set(UnderlyingPriceUnitOfMeasure_84);
  UnderlyingInstrument_84.insert(UnderlyingPriceUnitOfMeasure_84.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_84;
  UnderlyingPriceUnitOfMeasureQty_84.setString("18582185");
  msg.set(UnderlyingPriceUnitOfMeasureQty_84);
  UnderlyingInstrument_84.insert(UnderlyingPriceUnitOfMeasureQty_84.getString());
  FIX::UnderlyingProduct UnderlyingProduct_84(1492162040);
  msg.set(UnderlyingProduct_84);
  UnderlyingInstrument_84.insert(UnderlyingProduct_84.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_84(2146105730);
  msg.set(UnderlyingPutOrCall_84);
  UnderlyingInstrument_84.insert(UnderlyingPutOrCall_84.getString());
  FIX::UnderlyingPx UnderlyingPx_84;
  UnderlyingPx_84.setString("3275516");
  msg.set(UnderlyingPx_84);
  UnderlyingInstrument_84.insert(UnderlyingPx_84.getString());
  FIX::UnderlyingQty UnderlyingQty_84;
  UnderlyingQty_84.setString("11812941");
  msg.set(UnderlyingQty_84);
  UnderlyingInstrument_84.insert(UnderlyingQty_84.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_84("LOCALMKTDATE_442555556");
  msg.set(UnderlyingRedemptionDate_84);
  UnderlyingInstrument_84.insert(UnderlyingRedemptionDate_84.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_84("STRING_1777242460");
  msg.set(UnderlyingRepoCollateralSecurityType_84);
  UnderlyingInstrument_84.insert(UnderlyingRepoCollateralSecurityType_84.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_84;
  UnderlyingRepurchaseRate_84.setString("54.260000");
  msg.set(UnderlyingRepurchaseRate_84);
  UnderlyingInstrument_84.insert(UnderlyingRepurchaseRate_84.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_84(941632408);
  msg.set(UnderlyingRepurchaseTerm_84);
  UnderlyingInstrument_84.insert(UnderlyingRepurchaseTerm_84.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_84("STRING_156784705");
  msg.set(UnderlyingRestructuringType_84);
  UnderlyingInstrument_84.insert(UnderlyingRestructuringType_84.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_84("STRING_745155791");
  msg.set(UnderlyingSecurityDesc_84);
  UnderlyingInstrument_84.insert(UnderlyingSecurityDesc_84.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_84("EXCHANGE_1028902276");
  msg.set(UnderlyingSecurityExchange_84);
  UnderlyingInstrument_84.insert(UnderlyingSecurityExchange_84.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_84("STRING_1655806293");
  msg.set(UnderlyingSecurityID_84);
  UnderlyingInstrument_84.insert(UnderlyingSecurityID_84.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_84("STRING_1063146548");
  msg.set(UnderlyingSecurityIDSource_84);
  UnderlyingInstrument_84.insert(UnderlyingSecurityIDSource_84.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_84("STRING_2011829801");
  msg.set(UnderlyingSecuritySubType_84);
  UnderlyingInstrument_84.insert(UnderlyingSecuritySubType_84.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_84("STRING_375033400");
  msg.set(UnderlyingSecurityType_84);
  UnderlyingInstrument_84.insert(UnderlyingSecurityType_84.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_84("STRING_867350276");
  msg.set(UnderlyingSeniority_84);
  UnderlyingInstrument_84.insert(UnderlyingSeniority_84.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_84("STRING_1576680622");
  msg.set(UnderlyingSettlMethod_84);
  UnderlyingInstrument_84.insert(UnderlyingSettlMethod_84.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_84(4);
  msg.set(UnderlyingSettlementType_84);
  UnderlyingInstrument_84.insert(UnderlyingSettlementType_84.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_84;
  UnderlyingStartValue_84.setString("5623119");
  msg.set(UnderlyingStartValue_84);
  UnderlyingInstrument_84.insert(UnderlyingStartValue_84.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_84("STRING_503245489");
  msg.set(UnderlyingStateOrProvinceOfIssue_84);
  UnderlyingInstrument_84.insert(UnderlyingStateOrProvinceOfIssue_84.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_84("EUR");
  msg.set(UnderlyingStrikeCurrency_84);
  UnderlyingInstrument_84.insert(UnderlyingStrikeCurrency_84.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_84;
  UnderlyingStrikePrice_84.setString("9436503");
  msg.set(UnderlyingStrikePrice_84);
  UnderlyingInstrument_84.insert(UnderlyingStrikePrice_84.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_84("STRING_813945805");
  msg.set(UnderlyingSymbol_84);
  UnderlyingInstrument_84.insert(UnderlyingSymbol_84.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_84("STRING_16646186");
  msg.set(UnderlyingSymbolSfx_84);
  UnderlyingInstrument_84.insert(UnderlyingSymbolSfx_84.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_84("STRING_1304792966");
  msg.set(UnderlyingTimeUnit_84);
  UnderlyingInstrument_84.insert(UnderlyingTimeUnit_84.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_84("STRING_160500103");
  msg.set(UnderlyingUnitOfMeasure_84);
  UnderlyingInstrument_84.insert(UnderlyingUnitOfMeasure_84.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_84;
  UnderlyingUnitOfMeasureQty_84.setString("18478246");
  msg.set(UnderlyingUnitOfMeasureQty_84);
  UnderlyingInstrument_84.insert(UnderlyingUnitOfMeasureQty_84.getString());
  all_values.push_back(UnderlyingInstrument_84);
  all_compo_names.insert("UnderlyingInstrument");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_168;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_168("STRING_610894631");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_168);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_168.insert(UnderlyingSecurityAltID_168.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_168("STRING_1558559523");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_168);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_168.insert(UnderlyingSecurityAltIDSource_168.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_168);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_169;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_169("STRING_1134303313");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_169);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_169.insert(UnderlyingSecurityAltID_169.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_169("STRING_609516714");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_169);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_169.insert(UnderlyingSecurityAltIDSource_169.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_169);
    all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_170;
    FIX::UnderlyingStipType UnderlyingStipType_170("STRING_168113831");
    noUnderlyingStips_0_0.set(UnderlyingStipType_170);
    UnderlyingStipulations_NoUnderlyingStips_170.insert(UnderlyingStipType_170.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_170("STRING_1052072270");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_170);
    UnderlyingStipulations_NoUnderlyingStips_170.insert(UnderlyingStipValue_170.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_170);
    all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_159;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_159("STRING_942319258");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_159);
    UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyID_159.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_159('1');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_159);
    UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyIDSource_159.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_159(1672654651);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_159);
    UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyRole_159.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_159);
    all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_317("STRING_875123306");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_317);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317.insert(UnderlyingInstrumentPartySubID_317.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_317(1180977296);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_317);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317.insert(UnderlyingInstrumentPartySubIDType_317.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317);
      all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

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
