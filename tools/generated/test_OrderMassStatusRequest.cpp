#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderMassStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassStatusRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderMassStatusRequest_0;
  FIX::Account Account_26("STRING_399184042");
  msg.set(Account_26);
  OrderMassStatusRequest_0.insert(Account_26.getString());
  FIX::AcctIDSource AcctIDSource_19(3);
  msg.set(AcctIDSource_19);
  OrderMassStatusRequest_0.insert(AcctIDSource_19.getString());
  FIX::MassStatusReqID MassStatusReqID_1("STRING_194309864");
  msg.set(MassStatusReqID_1);
  OrderMassStatusRequest_0.insert(MassStatusReqID_1.getString());
  FIX::MassStatusReqType MassStatusReqType_0(7);
  msg.set(MassStatusReqType_0);
  OrderMassStatusRequest_0.insert(MassStatusReqType_0.getString());
  FIX::Side Side_37('9');
  msg.set(Side_37);
  OrderMassStatusRequest_0.insert(Side_37.getString());
  FIX::TradingSessionID TradingSessionID_55("STRING_6");
  msg.set(TradingSessionID_55);
  OrderMassStatusRequest_0.insert(TradingSessionID_55.getString());
  FIX::TradingSessionSubID TradingSessionSubID_55("STRING_1");
  msg.set(TradingSessionSubID_55);
  OrderMassStatusRequest_0.insert(TradingSessionSubID_55.getString());
  all_values.push_back(OrderMassStatusRequest_0);

  // Instrument
  multiset<string> Instrument_51;
  FIX::AttachmentPoint AttachmentPoint_51;
  AttachmentPoint_51.setString("50.990000");
  msg.set(AttachmentPoint_51);
  Instrument_51.insert(AttachmentPoint_51.getString());
  FIX::CFICode CFICode_51("STRING_91827295");
  msg.set(CFICode_51);
  Instrument_51.insert(CFICode_51.getString());
  FIX::CPProgram CPProgram_51(1);
  msg.set(CPProgram_51);
  Instrument_51.insert(CPProgram_51.getString());
  FIX::CPRegType CPRegType_51("STRING_577215861");
  msg.set(CPRegType_51);
  Instrument_51.insert(CPRegType_51.getString());
  FIX::CapPrice CapPrice_51;
  CapPrice_51.setString("21121125");
  msg.set(CapPrice_51);
  Instrument_51.insert(CapPrice_51.getString());
  FIX::ContractMultiplier ContractMultiplier_51;
  ContractMultiplier_51.setString("18093431");
  msg.set(ContractMultiplier_51);
  Instrument_51.insert(ContractMultiplier_51.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_51(0);
  msg.set(ContractMultiplierUnit_51);
  Instrument_51.insert(ContractMultiplierUnit_51.getString());
  FIX::ContractSettlMonth ContractSettlMonth_51("MONTHYEAR_517410176");
  msg.set(ContractSettlMonth_51);
  Instrument_51.insert(ContractSettlMonth_51.getString());
  FIX::CountryOfIssue CountryOfIssue_51("COUNTRY_1063836197");
  msg.set(CountryOfIssue_51);
  Instrument_51.insert(CountryOfIssue_51.getString());
  FIX::CouponPaymentDate CouponPaymentDate_51("LOCALMKTDATE_526486781");
  msg.set(CouponPaymentDate_51);
  Instrument_51.insert(CouponPaymentDate_51.getString());
  FIX::CouponRate CouponRate_51;
  CouponRate_51.setString("38.390000");
  msg.set(CouponRate_51);
  Instrument_51.insert(CouponRate_51.getString());
  FIX::CreditRating CreditRating_51("STRING_876618216");
  msg.set(CreditRating_51);
  Instrument_51.insert(CreditRating_51.getString());
  FIX::DatedDate DatedDate_51("LOCALMKTDATE_1957208346");
  msg.set(DatedDate_51);
  Instrument_51.insert(DatedDate_51.getString());
  FIX::DetachmentPoint DetachmentPoint_51;
  DetachmentPoint_51.setString("76.590000");
  msg.set(DetachmentPoint_51);
  Instrument_51.insert(DetachmentPoint_51.getString());
  FIX::EncodedIssuer EncodedIssuer_51("DATA_1146524656");
  msg.set(EncodedIssuer_51);
  Instrument_51.insert(EncodedIssuer_51.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_51(773572061);
  msg.set(EncodedIssuerLen_51);
  Instrument_51.insert(EncodedIssuerLen_51.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_51("DATA_593026993");
  msg.set(EncodedSecurityDesc_51);
  Instrument_51.insert(EncodedSecurityDesc_51.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_51(806983336);
  msg.set(EncodedSecurityDescLen_51);
  Instrument_51.insert(EncodedSecurityDescLen_51.getString());
  FIX::ExerciseStyle ExerciseStyle_51(0);
  msg.set(ExerciseStyle_51);
  Instrument_51.insert(ExerciseStyle_51.getString());
  FIX::Factor Factor_51;
  Factor_51.setString("13775577");
  msg.set(Factor_51);
  Instrument_51.insert(Factor_51.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_51(false);
  msg.set(FlexProductEligibilityIndicator_51);
  Instrument_51.insert(FlexProductEligibilityIndicator_51.getString());
  FIX::FlexibleIndicator FlexibleIndicator_51(true);
  msg.set(FlexibleIndicator_51);
  Instrument_51.insert(FlexibleIndicator_51.getString());
  FIX::FloorPrice FloorPrice_51;
  FloorPrice_51.setString("15297308");
  msg.set(FloorPrice_51);
  Instrument_51.insert(FloorPrice_51.getString());
  FIX::FlowScheduleType FlowScheduleType_51(0);
  msg.set(FlowScheduleType_51);
  Instrument_51.insert(FlowScheduleType_51.getString());
  FIX::InstrRegistry InstrRegistry_51("STRING_358668246");
  msg.set(InstrRegistry_51);
  Instrument_51.insert(InstrRegistry_51.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_51('7');
  msg.set(InstrmtAssignmentMethod_51);
  Instrument_51.insert(InstrmtAssignmentMethod_51.getString());
  FIX::InterestAccrualDate InterestAccrualDate_51("LOCALMKTDATE_1252163145");
  msg.set(InterestAccrualDate_51);
  Instrument_51.insert(InterestAccrualDate_51.getString());
  FIX::IssueDate IssueDate_51("LOCALMKTDATE_450894732");
  msg.set(IssueDate_51);
  Instrument_51.insert(IssueDate_51.getString());
  FIX::Issuer Issuer_51("STRING_1409568407");
  msg.set(Issuer_51);
  Instrument_51.insert(Issuer_51.getString());
  FIX::ListMethod ListMethod_51(0);
  msg.set(ListMethod_51);
  Instrument_51.insert(ListMethod_51.getString());
  FIX::LocaleOfIssue LocaleOfIssue_51("STRING_1455802965");
  msg.set(LocaleOfIssue_51);
  Instrument_51.insert(LocaleOfIssue_51.getString());
  FIX::MaturityDate MaturityDate_51("LOCALMKTDATE_2096363507");
  msg.set(MaturityDate_51);
  Instrument_51.insert(MaturityDate_51.getString());
  FIX::MaturityMonthYear MaturityMonthYear_51("MONTHYEAR_1245772028");
  msg.set(MaturityMonthYear_51);
  Instrument_51.insert(MaturityMonthYear_51.getString());
  FIX::MaturityTime MaturityTime_51("TZTIMEONLY_1664981595");
  msg.set(MaturityTime_51);
  Instrument_51.insert(MaturityTime_51.getString());
  FIX::MinPriceIncrement MinPriceIncrement_51;
  MinPriceIncrement_51.setString("5260957");
  msg.set(MinPriceIncrement_51);
  Instrument_51.insert(MinPriceIncrement_51.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_51;
  MinPriceIncrementAmount_51.setString("12104009");
  msg.set(MinPriceIncrementAmount_51);
  Instrument_51.insert(MinPriceIncrementAmount_51.getString());
  FIX::NTPositionLimit NTPositionLimit_51(1326841068);
  msg.set(NTPositionLimit_51);
  Instrument_51.insert(NTPositionLimit_51.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_51;
  NotionalPercentageOutstanding_51.setString("49.430000");
  msg.set(NotionalPercentageOutstanding_51);
  Instrument_51.insert(NotionalPercentageOutstanding_51.getString());
  FIX::OptAttribute OptAttribute_51('1');
  msg.set(OptAttribute_51);
  Instrument_51.insert(OptAttribute_51.getString());
  FIX::OptPayoutAmount OptPayoutAmount_51;
  OptPayoutAmount_51.setString("2431936");
  msg.set(OptPayoutAmount_51);
  Instrument_51.insert(OptPayoutAmount_51.getString());
  FIX::OptPayoutType OptPayoutType_51(2);
  msg.set(OptPayoutType_51);
  Instrument_51.insert(OptPayoutType_51.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_51;
  OriginalNotionalPercentageOutstanding_51.setString("12.820000");
  msg.set(OriginalNotionalPercentageOutstanding_51);
  Instrument_51.insert(OriginalNotionalPercentageOutstanding_51.getString());
  FIX::Pool Pool_51("STRING_1119811834");
  msg.set(Pool_51);
  Instrument_51.insert(Pool_51.getString());
  FIX::PositionLimit PositionLimit_51(630776423);
  msg.set(PositionLimit_51);
  Instrument_51.insert(PositionLimit_51.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_51("STRING_INX");
  msg.set(PriceQuoteMethod_51);
  Instrument_51.insert(PriceQuoteMethod_51.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_51("STRING_118852842");
  msg.set(PriceUnitOfMeasure_51);
  Instrument_51.insert(PriceUnitOfMeasure_51.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_51;
  PriceUnitOfMeasureQty_51.setString("14043484");
  msg.set(PriceUnitOfMeasureQty_51);
  Instrument_51.insert(PriceUnitOfMeasureQty_51.getString());
  FIX::Product Product_53(9);
  msg.set(Product_53);
  Instrument_51.insert(Product_53.getString());
  FIX::ProductComplex ProductComplex_51("STRING_925836179");
  msg.set(ProductComplex_51);
  Instrument_51.insert(ProductComplex_51.getString());
  FIX::PutOrCall PutOrCall_51(0);
  msg.set(PutOrCall_51);
  Instrument_51.insert(PutOrCall_51.getString());
  FIX::RedemptionDate RedemptionDate_51("LOCALMKTDATE_1787440070");
  msg.set(RedemptionDate_51);
  Instrument_51.insert(RedemptionDate_51.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_51("STRING_126410082");
  msg.set(RepoCollateralSecurityType_51);
  Instrument_51.insert(RepoCollateralSecurityType_51.getString());
  FIX::RepurchaseRate RepurchaseRate_51;
  RepurchaseRate_51.setString("89.600000");
  msg.set(RepurchaseRate_51);
  Instrument_51.insert(RepurchaseRate_51.getString());
  FIX::RepurchaseTerm RepurchaseTerm_51(1169687242);
  msg.set(RepurchaseTerm_51);
  Instrument_51.insert(RepurchaseTerm_51.getString());
  FIX::RestructuringType RestructuringType_51("STRING_MM");
  msg.set(RestructuringType_51);
  Instrument_51.insert(RestructuringType_51.getString());
  FIX::SecurityDesc SecurityDesc_51("STRING_1987397206");
  msg.set(SecurityDesc_51);
  Instrument_51.insert(SecurityDesc_51.getString());
  FIX::SecurityExchange SecurityExchange_51("EXCHANGE_1961260153");
  msg.set(SecurityExchange_51);
  Instrument_51.insert(SecurityExchange_51.getString());
  FIX::SecurityGroup SecurityGroup_51("STRING_288942859");
  msg.set(SecurityGroup_51);
  Instrument_51.insert(SecurityGroup_51.getString());
  FIX::SecurityID SecurityID_51("STRING_290808290");
  msg.set(SecurityID_51);
  Instrument_51.insert(SecurityID_51.getString());
  FIX::SecurityIDSource SecurityIDSource_51("STRING_M");
  msg.set(SecurityIDSource_51);
  Instrument_51.insert(SecurityIDSource_51.getString());
  FIX::SecurityStatus SecurityStatus_51("STRING_1");
  msg.set(SecurityStatus_51);
  Instrument_51.insert(SecurityStatus_51.getString());
  FIX::SecuritySubType SecuritySubType_52("STRING_1746611255");
  msg.set(SecuritySubType_52);
  Instrument_51.insert(SecuritySubType_52.getString());
  FIX::SecurityType SecurityType_53("STRING_FORWARD");
  msg.set(SecurityType_53);
  Instrument_51.insert(SecurityType_53.getString());
  FIX::Seniority Seniority_51("STRING_SB");
  msg.set(Seniority_51);
  Instrument_51.insert(Seniority_51.getString());
  FIX::SettlMethod SettlMethod_51('C');
  msg.set(SettlMethod_51);
  Instrument_51.insert(SettlMethod_51.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_51("STRING_1698320492");
  msg.set(SettleOnOpenFlag_51);
  Instrument_51.insert(SettleOnOpenFlag_51.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_51("STRING_1751576887");
  msg.set(StateOrProvinceOfIssue_51);
  Instrument_51.insert(StateOrProvinceOfIssue_51.getString());
  FIX::StrikeCurrency StrikeCurrency_51("CHF");
  msg.set(StrikeCurrency_51);
  Instrument_51.insert(StrikeCurrency_51.getString());
  FIX::StrikeMultiplier StrikeMultiplier_51;
  StrikeMultiplier_51.setString("13319043");
  msg.set(StrikeMultiplier_51);
  Instrument_51.insert(StrikeMultiplier_51.getString());
  FIX::StrikePrice StrikePrice_51;
  StrikePrice_51.setString("6866602");
  msg.set(StrikePrice_51);
  Instrument_51.insert(StrikePrice_51.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_51(3);
  msg.set(StrikePriceBoundaryMethod_51);
  Instrument_51.insert(StrikePriceBoundaryMethod_51.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_51;
  StrikePriceBoundaryPrecision_51.setString("56.120000");
  msg.set(StrikePriceBoundaryPrecision_51);
  Instrument_51.insert(StrikePriceBoundaryPrecision_51.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_51(4);
  msg.set(StrikePriceDeterminationMethod_51);
  Instrument_51.insert(StrikePriceDeterminationMethod_51.getString());
  FIX::StrikeValue StrikeValue_51;
  StrikeValue_51.setString("12972299");
  msg.set(StrikeValue_51);
  Instrument_51.insert(StrikeValue_51.getString());
  FIX::Symbol Symbol_51("STRING_1852010905");
  msg.set(Symbol_51);
  Instrument_51.insert(Symbol_51.getString());
  FIX::SymbolSfx SymbolSfx_51("STRING_CD");
  msg.set(SymbolSfx_51);
  Instrument_51.insert(SymbolSfx_51.getString());
  FIX::TimeUnit TimeUnit_51("STRING_H");
  msg.set(TimeUnit_51);
  Instrument_51.insert(TimeUnit_51.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_51(1);
  msg.set(UnderlyingPriceDeterminationMethod_51);
  Instrument_51.insert(UnderlyingPriceDeterminationMethod_51.getString());
  FIX::UnitOfMeasure UnitOfMeasure_51("STRING_Gal");
  msg.set(UnitOfMeasure_51);
  Instrument_51.insert(UnitOfMeasure_51.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_51;
  UnitOfMeasureQty_51.setString("758558");
  msg.set(UnitOfMeasureQty_51);
  Instrument_51.insert(UnitOfMeasureQty_51.getString());
  FIX::ValuationMethod ValuationMethod_51("STRING_CDSD");
  msg.set(ValuationMethod_51);
  Instrument_51.insert(ValuationMethod_51.getString());
  all_values.push_back(Instrument_51);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_97;
    FIX::ComplexEventCondition ComplexEventCondition_97(1);
    noComplexEvents_0_0.set(ComplexEventCondition_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventCondition_97.getString());
    FIX::ComplexEventPrice ComplexEventPrice_97;
    ComplexEventPrice_97.setString("9240532");
    noComplexEvents_0_0.set(ComplexEventPrice_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventPrice_97.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_97(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventPriceBoundaryMethod_97.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_97;
    ComplexEventPriceBoundaryPrecision_97.setString("83.980000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventPriceBoundaryPrecision_97.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_97(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventPriceTimeType_97.getString());
    FIX::ComplexEventType ComplexEventType_97(9);
    noComplexEvents_0_0.set(ComplexEventType_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexEventType_97.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_97;
    ComplexOptPayoutAmount_97.setString("18353066");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_97);
    ComplexEvents_NoComplexEvents_97.insert(ComplexOptPayoutAmount_97.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_97);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_199;
      FIX::ComplexEventEndDate ComplexEventEndDate_199(FIX::UTCTIMESTAMP(15, 11, 9, 25, 122008));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_199);
      ComplexEventDates_NoComplexEventDates_199.insert(ComplexEventEndDate_199.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_199(FIX::UTCTIMESTAMP(6, 30, 33, 27, 112009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_199);
      ComplexEventDates_NoComplexEventDates_199.insert(ComplexEventStartDate_199.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_199);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_390;
        FIX::ComplexEventEndTime ComplexEventEndTime_390(FIX::UTCTIMEONLY(3, 54, 35));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_390);
        ComplexEventTimes_NoComplexEventTimes_390.insert(ComplexEventEndTime_390.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_390(FIX::UTCTIMEONLY(10, 2, 23));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_390);
        ComplexEventTimes_NoComplexEventTimes_390.insert(ComplexEventStartTime_390.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_390);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_391;
        FIX::ComplexEventEndTime ComplexEventEndTime_391(FIX::UTCTIMEONLY(2, 8, 44));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_391);
        ComplexEventTimes_NoComplexEventTimes_391.insert(ComplexEventEndTime_391.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_391(FIX::UTCTIMEONLY(13, 24, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_391);
        ComplexEventTimes_NoComplexEventTimes_391.insert(ComplexEventStartTime_391.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_391);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_392;
        FIX::ComplexEventEndTime ComplexEventEndTime_392(FIX::UTCTIMEONLY(7, 26, 51));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_392);
        ComplexEventTimes_NoComplexEventTimes_392.insert(ComplexEventEndTime_392.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_392(FIX::UTCTIMEONLY(1, 51, 25));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_392);
        ComplexEventTimes_NoComplexEventTimes_392.insert(ComplexEventStartTime_392.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_392);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_200;
      FIX::ComplexEventEndDate ComplexEventEndDate_200(FIX::UTCTIMESTAMP(13, 59, 51, 11, 12011));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_200);
      ComplexEventDates_NoComplexEventDates_200.insert(ComplexEventEndDate_200.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_200(FIX::UTCTIMESTAMP(19, 48, 6, 11, 32008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_200);
      ComplexEventDates_NoComplexEventDates_200.insert(ComplexEventStartDate_200.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_200);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_393;
        FIX::ComplexEventEndTime ComplexEventEndTime_393(FIX::UTCTIMEONLY(11, 38, 37));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_393);
        ComplexEventTimes_NoComplexEventTimes_393.insert(ComplexEventEndTime_393.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_393(FIX::UTCTIMEONLY(16, 2, 51));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_393);
        ComplexEventTimes_NoComplexEventTimes_393.insert(ComplexEventStartTime_393.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_393);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_201;
      FIX::ComplexEventEndDate ComplexEventEndDate_201(FIX::UTCTIMESTAMP(13, 9, 18, 2, 122013));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_201);
      ComplexEventDates_NoComplexEventDates_201.insert(ComplexEventEndDate_201.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_201(FIX::UTCTIMESTAMP(23, 15, 55, 18, 72001));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_201);
      ComplexEventDates_NoComplexEventDates_201.insert(ComplexEventStartDate_201.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_201);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_394;
        FIX::ComplexEventEndTime ComplexEventEndTime_394(FIX::UTCTIMEONLY(14, 11, 32));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_394);
        ComplexEventTimes_NoComplexEventTimes_394.insert(ComplexEventEndTime_394.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_394(FIX::UTCTIMEONLY(14, 40, 39));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_394);
        ComplexEventTimes_NoComplexEventTimes_394.insert(ComplexEventStartTime_394.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_394);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_395;
        FIX::ComplexEventEndTime ComplexEventEndTime_395(FIX::UTCTIMEONLY(19, 9, 56));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_395);
        ComplexEventTimes_NoComplexEventTimes_395.insert(ComplexEventEndTime_395.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_395(FIX::UTCTIMEONLY(13, 50, 42));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_395);
        ComplexEventTimes_NoComplexEventTimes_395.insert(ComplexEventStartTime_395.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_395);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_396;
        FIX::ComplexEventEndTime ComplexEventEndTime_396(FIX::UTCTIMEONLY(4, 51, 46));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_396);
        ComplexEventTimes_NoComplexEventTimes_396.insert(ComplexEventEndTime_396.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_396(FIX::UTCTIMEONLY(14, 39, 58));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_396);
        ComplexEventTimes_NoComplexEventTimes_396.insert(ComplexEventStartTime_396.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_396);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_98;
    FIX::ComplexEventCondition ComplexEventCondition_98(2);
    noComplexEvents_0_1.set(ComplexEventCondition_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventCondition_98.getString());
    FIX::ComplexEventPrice ComplexEventPrice_98;
    ComplexEventPrice_98.setString("14439256");
    noComplexEvents_0_1.set(ComplexEventPrice_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventPrice_98.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_98(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceBoundaryMethod_98.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_98;
    ComplexEventPriceBoundaryPrecision_98.setString("4.590000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceBoundaryPrecision_98.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_98(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceTimeType_98.getString());
    FIX::ComplexEventType ComplexEventType_98(5);
    noComplexEvents_0_1.set(ComplexEventType_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexEventType_98.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_98;
    ComplexOptPayoutAmount_98.setString("21178984");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_98);
    ComplexEvents_NoComplexEvents_98.insert(ComplexOptPayoutAmount_98.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_98);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_202;
      FIX::ComplexEventEndDate ComplexEventEndDate_202(FIX::UTCTIMESTAMP(10, 38, 55, 24, 82014));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_202);
      ComplexEventDates_NoComplexEventDates_202.insert(ComplexEventEndDate_202.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_202(FIX::UTCTIMESTAMP(18, 36, 20, 9, 22004));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_202);
      ComplexEventDates_NoComplexEventDates_202.insert(ComplexEventStartDate_202.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_202);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_397;
        FIX::ComplexEventEndTime ComplexEventEndTime_397(FIX::UTCTIMEONLY(6, 15, 43));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_397);
        ComplexEventTimes_NoComplexEventTimes_397.insert(ComplexEventEndTime_397.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_397(FIX::UTCTIMEONLY(21, 15, 3));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_397);
        ComplexEventTimes_NoComplexEventTimes_397.insert(ComplexEventStartTime_397.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_397);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_398;
        FIX::ComplexEventEndTime ComplexEventEndTime_398(FIX::UTCTIMEONLY(9, 57, 2));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_398);
        ComplexEventTimes_NoComplexEventTimes_398.insert(ComplexEventEndTime_398.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_398(FIX::UTCTIMEONLY(1, 37, 57));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_398);
        ComplexEventTimes_NoComplexEventTimes_398.insert(ComplexEventStartTime_398.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_398);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_399;
        FIX::ComplexEventEndTime ComplexEventEndTime_399(FIX::UTCTIMEONLY(16, 35, 23));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_399);
        ComplexEventTimes_NoComplexEventTimes_399.insert(ComplexEventEndTime_399.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_399(FIX::UTCTIMEONLY(10, 50, 36));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_399);
        ComplexEventTimes_NoComplexEventTimes_399.insert(ComplexEventStartTime_399.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_399);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_203;
      FIX::ComplexEventEndDate ComplexEventEndDate_203(FIX::UTCTIMESTAMP(14, 48, 10, 11, 112014));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_203);
      ComplexEventDates_NoComplexEventDates_203.insert(ComplexEventEndDate_203.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_203(FIX::UTCTIMESTAMP(17, 41, 20, 6, 72017));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_203);
      ComplexEventDates_NoComplexEventDates_203.insert(ComplexEventStartDate_203.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_203);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_400;
        FIX::ComplexEventEndTime ComplexEventEndTime_400(FIX::UTCTIMEONLY(21, 14, 20));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_400);
        ComplexEventTimes_NoComplexEventTimes_400.insert(ComplexEventEndTime_400.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_400(FIX::UTCTIMEONLY(16, 49, 24));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_400);
        ComplexEventTimes_NoComplexEventTimes_400.insert(ComplexEventStartTime_400.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_400);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_401;
        FIX::ComplexEventEndTime ComplexEventEndTime_401(FIX::UTCTIMEONLY(5, 52, 55));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_401);
        ComplexEventTimes_NoComplexEventTimes_401.insert(ComplexEventEndTime_401.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_401(FIX::UTCTIMEONLY(14, 37, 46));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_401);
        ComplexEventTimes_NoComplexEventTimes_401.insert(ComplexEventStartTime_401.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_401);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_204;
      FIX::ComplexEventEndDate ComplexEventEndDate_204(FIX::UTCTIMESTAMP(19, 34, 10, 7, 12012));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_204);
      ComplexEventDates_NoComplexEventDates_204.insert(ComplexEventEndDate_204.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_204(FIX::UTCTIMESTAMP(21, 9, 48, 15, 82000));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_204);
      ComplexEventDates_NoComplexEventDates_204.insert(ComplexEventStartDate_204.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_204);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_402;
        FIX::ComplexEventEndTime ComplexEventEndTime_402(FIX::UTCTIMEONLY(1, 27, 21));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_402);
        ComplexEventTimes_NoComplexEventTimes_402.insert(ComplexEventEndTime_402.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_402(FIX::UTCTIMEONLY(11, 10, 45));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_402);
        ComplexEventTimes_NoComplexEventTimes_402.insert(ComplexEventStartTime_402.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_402);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_403;
        FIX::ComplexEventEndTime ComplexEventEndTime_403(FIX::UTCTIMEONLY(20, 37, 43));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_403);
        ComplexEventTimes_NoComplexEventTimes_403.insert(ComplexEventEndTime_403.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_403(FIX::UTCTIMEONLY(7, 12, 56));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_403);
        ComplexEventTimes_NoComplexEventTimes_403.insert(ComplexEventStartTime_403.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_403);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_99;
    FIX::ComplexEventCondition ComplexEventCondition_99(2);
    noComplexEvents_0_2.set(ComplexEventCondition_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventCondition_99.getString());
    FIX::ComplexEventPrice ComplexEventPrice_99;
    ComplexEventPrice_99.setString("16766428");
    noComplexEvents_0_2.set(ComplexEventPrice_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventPrice_99.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_99(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceBoundaryMethod_99.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_99;
    ComplexEventPriceBoundaryPrecision_99.setString("5.770000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceBoundaryPrecision_99.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_99(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceTimeType_99.getString());
    FIX::ComplexEventType ComplexEventType_99(5);
    noComplexEvents_0_2.set(ComplexEventType_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexEventType_99.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_99;
    ComplexOptPayoutAmount_99.setString("20199304");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_99);
    ComplexEvents_NoComplexEvents_99.insert(ComplexOptPayoutAmount_99.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_99);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_205;
      FIX::ComplexEventEndDate ComplexEventEndDate_205(FIX::UTCTIMESTAMP(18, 59, 7, 9, 42002));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_205);
      ComplexEventDates_NoComplexEventDates_205.insert(ComplexEventEndDate_205.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_205(FIX::UTCTIMESTAMP(16, 48, 59, 5, 122004));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_205);
      ComplexEventDates_NoComplexEventDates_205.insert(ComplexEventStartDate_205.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_205);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_404;
        FIX::ComplexEventEndTime ComplexEventEndTime_404(FIX::UTCTIMEONLY(22, 59, 34));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_404);
        ComplexEventTimes_NoComplexEventTimes_404.insert(ComplexEventEndTime_404.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_404(FIX::UTCTIMEONLY(10, 38, 24));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_404);
        ComplexEventTimes_NoComplexEventTimes_404.insert(ComplexEventStartTime_404.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_404);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_405;
        FIX::ComplexEventEndTime ComplexEventEndTime_405(FIX::UTCTIMEONLY(10, 46, 22));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_405);
        ComplexEventTimes_NoComplexEventTimes_405.insert(ComplexEventEndTime_405.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_405(FIX::UTCTIMEONLY(20, 7, 32));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_405);
        ComplexEventTimes_NoComplexEventTimes_405.insert(ComplexEventStartTime_405.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_405);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_206;
      FIX::ComplexEventEndDate ComplexEventEndDate_206(FIX::UTCTIMESTAMP(1, 32, 52, 3, 42012));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_206);
      ComplexEventDates_NoComplexEventDates_206.insert(ComplexEventEndDate_206.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_206(FIX::UTCTIMESTAMP(20, 52, 9, 9, 92011));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_206);
      ComplexEventDates_NoComplexEventDates_206.insert(ComplexEventStartDate_206.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_206);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_406;
        FIX::ComplexEventEndTime ComplexEventEndTime_406(FIX::UTCTIMEONLY(9, 46, 21));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_406);
        ComplexEventTimes_NoComplexEventTimes_406.insert(ComplexEventEndTime_406.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_406(FIX::UTCTIMEONLY(8, 59, 57));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_406);
        ComplexEventTimes_NoComplexEventTimes_406.insert(ComplexEventStartTime_406.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_406);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_407;
        FIX::ComplexEventEndTime ComplexEventEndTime_407(FIX::UTCTIMEONLY(14, 43, 12));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_407);
        ComplexEventTimes_NoComplexEventTimes_407.insert(ComplexEventEndTime_407.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_407(FIX::UTCTIMEONLY(19, 20, 32));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_407);
        ComplexEventTimes_NoComplexEventTimes_407.insert(ComplexEventStartTime_407.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_407);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_207;
      FIX::ComplexEventEndDate ComplexEventEndDate_207(FIX::UTCTIMESTAMP(13, 56, 44, 12, 122012));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_207);
      ComplexEventDates_NoComplexEventDates_207.insert(ComplexEventEndDate_207.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_207(FIX::UTCTIMESTAMP(23, 41, 47, 8, 62010));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_207);
      ComplexEventDates_NoComplexEventDates_207.insert(ComplexEventStartDate_207.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_207);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_408;
        FIX::ComplexEventEndTime ComplexEventEndTime_408(FIX::UTCTIMEONLY(11, 29, 29));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_408);
        ComplexEventTimes_NoComplexEventTimes_408.insert(ComplexEventEndTime_408.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_408(FIX::UTCTIMEONLY(2, 20, 41));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_408);
        ComplexEventTimes_NoComplexEventTimes_408.insert(ComplexEventStartTime_408.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_408);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_101;
    FIX::EventDate EventDate_101("LOCALMKTDATE_1828015798");
    noEvents_0_0.set(EventDate_101);
    EvntGrp_NoEvents_101.insert(EventDate_101.getString());
    FIX::EventPx EventPx_101;
    EventPx_101.setString("2783842");
    noEvents_0_0.set(EventPx_101);
    EvntGrp_NoEvents_101.insert(EventPx_101.getString());
    FIX::EventText EventText_101("STRING_519757628");
    noEvents_0_0.set(EventText_101);
    EvntGrp_NoEvents_101.insert(EventText_101.getString());
    FIX::EventTime EventTime_101(FIX::UTCTIMESTAMP(11, 20, 14, 11, 112016));
    noEvents_0_0.set(EventTime_101);
    EvntGrp_NoEvents_101.insert(EventTime_101.getString());
    FIX::EventType EventType_101(12);
    noEvents_0_0.set(EventType_101);
    EvntGrp_NoEvents_101.insert(EventType_101.getString());
    all_values.push_back(EvntGrp_NoEvents_101);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_102;
    FIX::EventDate EventDate_102("LOCALMKTDATE_100027502");
    noEvents_0_1.set(EventDate_102);
    EvntGrp_NoEvents_102.insert(EventDate_102.getString());
    FIX::EventPx EventPx_102;
    EventPx_102.setString("16334460");
    noEvents_0_1.set(EventPx_102);
    EvntGrp_NoEvents_102.insert(EventPx_102.getString());
    FIX::EventText EventText_102("STRING_854960620");
    noEvents_0_1.set(EventText_102);
    EvntGrp_NoEvents_102.insert(EventText_102.getString());
    FIX::EventTime EventTime_102(FIX::UTCTIMESTAMP(17, 13, 27, 9, 72007));
    noEvents_0_1.set(EventTime_102);
    EvntGrp_NoEvents_102.insert(EventTime_102.getString());
    FIX::EventType EventType_102(14);
    noEvents_0_1.set(EventType_102);
    EvntGrp_NoEvents_102.insert(EventType_102.getString());
    all_values.push_back(EvntGrp_NoEvents_102);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_93;
    FIX::InstrumentPartyID InstrumentPartyID_93("STRING_1514994688");
    noInstrumentParties_0_0.set(InstrumentPartyID_93);
    InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyID_93.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_93('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_93);
    InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyIDSource_93.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_93(586378699);
    noInstrumentParties_0_0.set(InstrumentPartyRole_93);
    InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyRole_93.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_93);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186;
      FIX::InstrumentPartySubID InstrumentPartySubID_186("STRING_1944748096");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_186);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186.insert(InstrumentPartySubID_186.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_186(980831619);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_186);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186.insert(InstrumentPartySubIDType_186.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_94;
    FIX::InstrumentPartyID InstrumentPartyID_94("STRING_903552885");
    noInstrumentParties_0_1.set(InstrumentPartyID_94);
    InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyID_94.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_94('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_94);
    InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyIDSource_94.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_94(661363770);
    noInstrumentParties_0_1.set(InstrumentPartyRole_94);
    InstrumentParties_NoInstrumentParties_94.insert(InstrumentPartyRole_94.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_94);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187;
      FIX::InstrumentPartySubID InstrumentPartySubID_187("STRING_1597524501");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_187);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187.insert(InstrumentPartySubID_187.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_187(1461792140);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_187);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187.insert(InstrumentPartySubIDType_187.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188;
      FIX::InstrumentPartySubID InstrumentPartySubID_188("STRING_1854081625");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_188);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188.insert(InstrumentPartySubID_188.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_188(2053857581);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_188);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188.insert(InstrumentPartySubIDType_188.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_100;
    FIX::SecurityAltID SecurityAltID_100("STRING_857630612");
    noSecurityAltID_0_0.set(SecurityAltID_100);
    SecAltIDGrp_NoSecurityAltID_100.insert(SecurityAltID_100.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_100("STRING_1975257307");
    noSecurityAltID_0_0.set(SecurityAltIDSource_100);
    SecAltIDGrp_NoSecurityAltID_100.insert(SecurityAltIDSource_100.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_100);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_101;
    FIX::SecurityAltID SecurityAltID_101("STRING_1526655936");
    noSecurityAltID_0_1.set(SecurityAltID_101);
    SecAltIDGrp_NoSecurityAltID_101.insert(SecurityAltID_101.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_101("STRING_1017169284");
    noSecurityAltID_0_1.set(SecurityAltIDSource_101);
    SecAltIDGrp_NoSecurityAltID_101.insert(SecurityAltIDSource_101.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_101);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_102;
  FIX::SecurityXML SecurityXML_103("XMLDATA_2075284810");
  msg.set(SecurityXML_103);
  FIX::SecurityXMLLen SecurityXMLLen_51(1012618385);
  msg.set(SecurityXMLLen_51);
  FIX::SecurityXMLSchema SecurityXMLSchema_51("STRING_1872129904");
  msg.set(SecurityXMLSchema_51);
  SecurityXML_102.insert(SecurityXMLSchema_51.getString());
  all_values.push_back(SecurityXML_102);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_93;
    FIX::PartyID PartyID_93("STRING_1128034498");
    noPartyIDs_0_0.set(PartyID_93);
    Parties_NoPartyIDs_93.insert(PartyID_93.getString());
    FIX::PartyIDSource PartyIDSource_93('5');
    noPartyIDs_0_0.set(PartyIDSource_93);
    Parties_NoPartyIDs_93.insert(PartyIDSource_93.getString());
    FIX::PartyRole PartyRole_93(19);
    noPartyIDs_0_0.set(PartyRole_93);
    Parties_NoPartyIDs_93.insert(PartyRole_93.getString());
    all_values.push_back(Parties_NoPartyIDs_93);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_181;
      FIX::PartySubID PartySubID_181("STRING_1285240971");
      noPartySubIDs_0_1_0.set(PartySubID_181);
      PtysSubGrp_NoPartySubIDs_181.insert(PartySubID_181.getString());
      FIX::PartySubIDType PartySubIDType_181(15);
      noPartySubIDs_0_1_0.set(PartySubIDType_181);
      PtysSubGrp_NoPartySubIDs_181.insert(PartySubIDType_181.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_181);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_182;
      FIX::PartySubID PartySubID_182("STRING_1257692593");
      noPartySubIDs_0_1_1.set(PartySubID_182);
      PtysSubGrp_NoPartySubIDs_182.insert(PartySubID_182.getString());
      FIX::PartySubIDType PartySubIDType_182(30);
      noPartySubIDs_0_1_1.set(PartySubIDType_182);
      PtysSubGrp_NoPartySubIDs_182.insert(PartySubIDType_182.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_182);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_94;
    FIX::PartyID PartyID_94("STRING_700466096");
    noPartyIDs_0_1.set(PartyID_94);
    Parties_NoPartyIDs_94.insert(PartyID_94.getString());
    FIX::PartyIDSource PartyIDSource_94('7');
    noPartyIDs_0_1.set(PartyIDSource_94);
    Parties_NoPartyIDs_94.insert(PartyIDSource_94.getString());
    FIX::PartyRole PartyRole_94(26);
    noPartyIDs_0_1.set(PartyRole_94);
    Parties_NoPartyIDs_94.insert(PartyRole_94.getString());
    all_values.push_back(Parties_NoPartyIDs_94);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_183;
      FIX::PartySubID PartySubID_183("STRING_133584496");
      noPartySubIDs_1_1_0.set(PartySubID_183);
      PtysSubGrp_NoPartySubIDs_183.insert(PartySubID_183.getString());
      FIX::PartySubIDType PartySubIDType_183(20);
      noPartySubIDs_1_1_0.set(PartySubIDType_183);
      PtysSubGrp_NoPartySubIDs_183.insert(PartySubIDType_183.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_183);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_95;
    FIX::PartyID PartyID_95("STRING_1475733706");
    noPartyIDs_0_2.set(PartyID_95);
    Parties_NoPartyIDs_95.insert(PartyID_95.getString());
    FIX::PartyIDSource PartyIDSource_95('A');
    noPartyIDs_0_2.set(PartyIDSource_95);
    Parties_NoPartyIDs_95.insert(PartyIDSource_95.getString());
    FIX::PartyRole PartyRole_95(75);
    noPartyIDs_0_2.set(PartyRole_95);
    Parties_NoPartyIDs_95.insert(PartyRole_95.getString());
    all_values.push_back(Parties_NoPartyIDs_95);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_184;
      FIX::PartySubID PartySubID_184("STRING_661392221");
      noPartySubIDs_2_1_0.set(PartySubID_184);
      PtysSubGrp_NoPartySubIDs_184.insert(PartySubID_184.getString());
      FIX::PartySubIDType PartySubIDType_184(14);
      noPartySubIDs_2_1_0.set(PartySubIDType_184);
      PtysSubGrp_NoPartySubIDs_184.insert(PartySubIDType_184.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_184);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_11;
    FIX::TargetPartyID TargetPartyID_11("STRING_567766155");
    noTargetPartyIDs_0_0.set(TargetPartyID_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyID_11.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_11('2');
    noTargetPartyIDs_0_0.set(TargetPartyIDSource_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyIDSource_11.getString());
    FIX::TargetPartyRole TargetPartyRole_11(1074415829);
    noTargetPartyIDs_0_0.set(TargetPartyRole_11);
    TargetParties_NoTargetPartyIDs_11.insert(TargetPartyRole_11.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_11);

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_12;
    FIX::TargetPartyID TargetPartyID_12("STRING_395539814");
    noTargetPartyIDs_0_1.set(TargetPartyID_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyID_12.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_12('1');
    noTargetPartyIDs_0_1.set(TargetPartyIDSource_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyIDSource_12.getString());
    FIX::TargetPartyRole TargetPartyRole_12(2091585113);
    noTargetPartyIDs_0_1.set(TargetPartyRole_12);
    TargetParties_NoTargetPartyIDs_12.insert(TargetPartyRole_12.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_12);

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_13;
    FIX::TargetPartyID TargetPartyID_13("STRING_323340976");
    noTargetPartyIDs_0_2.set(TargetPartyID_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyID_13.getString());
    FIX::TargetPartyIDSource TargetPartyIDSource_13('5');
    noTargetPartyIDs_0_2.set(TargetPartyIDSource_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyIDSource_13.getString());
    FIX::TargetPartyRole TargetPartyRole_13(1816231369);
    noTargetPartyIDs_0_2.set(TargetPartyRole_13);
    TargetParties_NoTargetPartyIDs_13.insert(TargetPartyRole_13.getString());
    all_values.push_back(TargetParties_NoTargetPartyIDs_13);

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_78;
  FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_78("DATA_1633493647");
  msg.set(EncodedUnderlyingIssuer_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingIssuer_78.getString());
  FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_78(1724239091);
  msg.set(EncodedUnderlyingIssuerLen_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingIssuerLen_78.getString());
  FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_78("DATA_2044515298");
  msg.set(EncodedUnderlyingSecurityDesc_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingSecurityDesc_78.getString());
  FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_78(867689897);
  msg.set(EncodedUnderlyingSecurityDescLen_78);
  UnderlyingInstrument_78.insert(EncodedUnderlyingSecurityDescLen_78.getString());
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_78;
  UnderlyingAdjustedQuantity_78.setString("19539449");
  msg.set(UnderlyingAdjustedQuantity_78);
  UnderlyingInstrument_78.insert(UnderlyingAdjustedQuantity_78.getString());
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_78;
  UnderlyingAllocationPercent_78.setString("26.210000");
  msg.set(UnderlyingAllocationPercent_78);
  UnderlyingInstrument_78.insert(UnderlyingAllocationPercent_78.getString());
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_78;
  UnderlyingAttachmentPoint_78.setString("13.040000");
  msg.set(UnderlyingAttachmentPoint_78);
  UnderlyingInstrument_78.insert(UnderlyingAttachmentPoint_78.getString());
  FIX::UnderlyingCFICode UnderlyingCFICode_78("STRING_1064153936");
  msg.set(UnderlyingCFICode_78);
  UnderlyingInstrument_78.insert(UnderlyingCFICode_78.getString());
  FIX::UnderlyingCPProgram UnderlyingCPProgram_78("STRING_229185854");
  msg.set(UnderlyingCPProgram_78);
  UnderlyingInstrument_78.insert(UnderlyingCPProgram_78.getString());
  FIX::UnderlyingCPRegType UnderlyingCPRegType_78("STRING_753627400");
  msg.set(UnderlyingCPRegType_78);
  UnderlyingInstrument_78.insert(UnderlyingCPRegType_78.getString());
  FIX::UnderlyingCapValue UnderlyingCapValue_78;
  UnderlyingCapValue_78.setString("14004739");
  msg.set(UnderlyingCapValue_78);
  UnderlyingInstrument_78.insert(UnderlyingCapValue_78.getString());
  FIX::UnderlyingCashAmount UnderlyingCashAmount_78;
  UnderlyingCashAmount_78.setString("20099614");
  msg.set(UnderlyingCashAmount_78);
  UnderlyingInstrument_78.insert(UnderlyingCashAmount_78.getString());
  FIX::UnderlyingCashType UnderlyingCashType_78("STRING_DIFF");
  msg.set(UnderlyingCashType_78);
  UnderlyingInstrument_78.insert(UnderlyingCashType_78.getString());
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_78;
  UnderlyingContractMultiplier_78.setString("15340584");
  msg.set(UnderlyingContractMultiplier_78);
  UnderlyingInstrument_78.insert(UnderlyingContractMultiplier_78.getString());
  FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_78(476601337);
  msg.set(UnderlyingContractMultiplierUnit_78);
  UnderlyingInstrument_78.insert(UnderlyingContractMultiplierUnit_78.getString());
  FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_78("COUNTRY_654058279");
  msg.set(UnderlyingCountryOfIssue_78);
  UnderlyingInstrument_78.insert(UnderlyingCountryOfIssue_78.getString());
  FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_78("LOCALMKTDATE_597926200");
  msg.set(UnderlyingCouponPaymentDate_78);
  UnderlyingInstrument_78.insert(UnderlyingCouponPaymentDate_78.getString());
  FIX::UnderlyingCouponRate UnderlyingCouponRate_78;
  UnderlyingCouponRate_78.setString("86.590000");
  msg.set(UnderlyingCouponRate_78);
  UnderlyingInstrument_78.insert(UnderlyingCouponRate_78.getString());
  FIX::UnderlyingCreditRating UnderlyingCreditRating_78("STRING_1164245518");
  msg.set(UnderlyingCreditRating_78);
  UnderlyingInstrument_78.insert(UnderlyingCreditRating_78.getString());
  FIX::UnderlyingCurrency UnderlyingCurrency_78("GBP");
  msg.set(UnderlyingCurrency_78);
  UnderlyingInstrument_78.insert(UnderlyingCurrency_78.getString());
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_78;
  UnderlyingCurrentValue_78.setString("13810307");
  msg.set(UnderlyingCurrentValue_78);
  UnderlyingInstrument_78.insert(UnderlyingCurrentValue_78.getString());
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_78;
  UnderlyingDetachmentPoint_78.setString("45.770000");
  msg.set(UnderlyingDetachmentPoint_78);
  UnderlyingInstrument_78.insert(UnderlyingDetachmentPoint_78.getString());
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_78;
  UnderlyingDirtyPrice_78.setString("3988147");
  msg.set(UnderlyingDirtyPrice_78);
  UnderlyingInstrument_78.insert(UnderlyingDirtyPrice_78.getString());
  FIX::UnderlyingEndPrice UnderlyingEndPrice_78;
  UnderlyingEndPrice_78.setString("3079629");
  msg.set(UnderlyingEndPrice_78);
  UnderlyingInstrument_78.insert(UnderlyingEndPrice_78.getString());
  FIX::UnderlyingEndValue UnderlyingEndValue_78;
  UnderlyingEndValue_78.setString("751407");
  msg.set(UnderlyingEndValue_78);
  UnderlyingInstrument_78.insert(UnderlyingEndValue_78.getString());
  FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_78(2129884599);
  msg.set(UnderlyingExerciseStyle_78);
  UnderlyingInstrument_78.insert(UnderlyingExerciseStyle_78.getString());
  FIX::UnderlyingFXRate UnderlyingFXRate_78;
  UnderlyingFXRate_78.setString("2520643");
  msg.set(UnderlyingFXRate_78);
  UnderlyingInstrument_78.insert(UnderlyingFXRate_78.getString());
  FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_78('D');
  msg.set(UnderlyingFXRateCalc_78);
  UnderlyingInstrument_78.insert(UnderlyingFXRateCalc_78.getString());
  FIX::UnderlyingFactor UnderlyingFactor_78;
  UnderlyingFactor_78.setString("5786055");
  msg.set(UnderlyingFactor_78);
  UnderlyingInstrument_78.insert(UnderlyingFactor_78.getString());
  FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_78(2068295750);
  msg.set(UnderlyingFlowScheduleType_78);
  UnderlyingInstrument_78.insert(UnderlyingFlowScheduleType_78.getString());
  FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_78("STRING_2031975367");
  msg.set(UnderlyingInstrRegistry_78);
  UnderlyingInstrument_78.insert(UnderlyingInstrRegistry_78.getString());
  FIX::UnderlyingIssueDate UnderlyingIssueDate_78("LOCALMKTDATE_155360988");
  msg.set(UnderlyingIssueDate_78);
  UnderlyingInstrument_78.insert(UnderlyingIssueDate_78.getString());
  FIX::UnderlyingIssuer UnderlyingIssuer_78("STRING_1965327400");
  msg.set(UnderlyingIssuer_78);
  UnderlyingInstrument_78.insert(UnderlyingIssuer_78.getString());
  FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_78("STRING_752181616");
  msg.set(UnderlyingLocaleOfIssue_78);
  UnderlyingInstrument_78.insert(UnderlyingLocaleOfIssue_78.getString());
  FIX::UnderlyingMaturityDate UnderlyingMaturityDate_78("LOCALMKTDATE_2109305979");
  msg.set(UnderlyingMaturityDate_78);
  UnderlyingInstrument_78.insert(UnderlyingMaturityDate_78.getString());
  FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_78("MONTHYEAR_1000116373");
  msg.set(UnderlyingMaturityMonthYear_78);
  UnderlyingInstrument_78.insert(UnderlyingMaturityMonthYear_78.getString());
  FIX::UnderlyingMaturityTime UnderlyingMaturityTime_78("TZTIMEONLY_805342920");
  msg.set(UnderlyingMaturityTime_78);
  UnderlyingInstrument_78.insert(UnderlyingMaturityTime_78.getString());
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_78;
  UnderlyingNotionalPercentageOutstanding_78.setString("62.680000");
  msg.set(UnderlyingNotionalPercentageOutstanding_78);
  UnderlyingInstrument_78.insert(UnderlyingNotionalPercentageOutstanding_78.getString());
  FIX::UnderlyingOptAttribute UnderlyingOptAttribute_78('1');
  msg.set(UnderlyingOptAttribute_78);
  UnderlyingInstrument_78.insert(UnderlyingOptAttribute_78.getString());
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_78;
  UnderlyingOriginalNotionalPercentageOutstanding_78.setString("3.210000");
  msg.set(UnderlyingOriginalNotionalPercentageOutstanding_78);
  UnderlyingInstrument_78.insert(UnderlyingOriginalNotionalPercentageOutstanding_78.getString());
  FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_78("STRING_278966604");
  msg.set(UnderlyingPriceUnitOfMeasure_78);
  UnderlyingInstrument_78.insert(UnderlyingPriceUnitOfMeasure_78.getString());
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_78;
  UnderlyingPriceUnitOfMeasureQty_78.setString("10917800");
  msg.set(UnderlyingPriceUnitOfMeasureQty_78);
  UnderlyingInstrument_78.insert(UnderlyingPriceUnitOfMeasureQty_78.getString());
  FIX::UnderlyingProduct UnderlyingProduct_78(737294894);
  msg.set(UnderlyingProduct_78);
  UnderlyingInstrument_78.insert(UnderlyingProduct_78.getString());
  FIX::UnderlyingPutOrCall UnderlyingPutOrCall_78(1813025084);
  msg.set(UnderlyingPutOrCall_78);
  UnderlyingInstrument_78.insert(UnderlyingPutOrCall_78.getString());
  FIX::UnderlyingPx UnderlyingPx_78;
  UnderlyingPx_78.setString("15683813");
  msg.set(UnderlyingPx_78);
  UnderlyingInstrument_78.insert(UnderlyingPx_78.getString());
  FIX::UnderlyingQty UnderlyingQty_78;
  UnderlyingQty_78.setString("13913531");
  msg.set(UnderlyingQty_78);
  UnderlyingInstrument_78.insert(UnderlyingQty_78.getString());
  FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_78("LOCALMKTDATE_263467636");
  msg.set(UnderlyingRedemptionDate_78);
  UnderlyingInstrument_78.insert(UnderlyingRedemptionDate_78.getString());
  FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_78("STRING_1172986361");
  msg.set(UnderlyingRepoCollateralSecurityType_78);
  UnderlyingInstrument_78.insert(UnderlyingRepoCollateralSecurityType_78.getString());
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_78;
  UnderlyingRepurchaseRate_78.setString("50.430000");
  msg.set(UnderlyingRepurchaseRate_78);
  UnderlyingInstrument_78.insert(UnderlyingRepurchaseRate_78.getString());
  FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_78(1522786058);
  msg.set(UnderlyingRepurchaseTerm_78);
  UnderlyingInstrument_78.insert(UnderlyingRepurchaseTerm_78.getString());
  FIX::UnderlyingRestructuringType UnderlyingRestructuringType_78("STRING_1367387186");
  msg.set(UnderlyingRestructuringType_78);
  UnderlyingInstrument_78.insert(UnderlyingRestructuringType_78.getString());
  FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_78("STRING_1789145778");
  msg.set(UnderlyingSecurityDesc_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityDesc_78.getString());
  FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_78("EXCHANGE_1202386987");
  msg.set(UnderlyingSecurityExchange_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityExchange_78.getString());
  FIX::UnderlyingSecurityID UnderlyingSecurityID_78("STRING_1766201930");
  msg.set(UnderlyingSecurityID_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityID_78.getString());
  FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_78("STRING_2097108694");
  msg.set(UnderlyingSecurityIDSource_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityIDSource_78.getString());
  FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_78("STRING_1277527731");
  msg.set(UnderlyingSecuritySubType_78);
  UnderlyingInstrument_78.insert(UnderlyingSecuritySubType_78.getString());
  FIX::UnderlyingSecurityType UnderlyingSecurityType_78("STRING_1748602881");
  msg.set(UnderlyingSecurityType_78);
  UnderlyingInstrument_78.insert(UnderlyingSecurityType_78.getString());
  FIX::UnderlyingSeniority UnderlyingSeniority_78("STRING_201689427");
  msg.set(UnderlyingSeniority_78);
  UnderlyingInstrument_78.insert(UnderlyingSeniority_78.getString());
  FIX::UnderlyingSettlMethod UnderlyingSettlMethod_78("STRING_1676009451");
  msg.set(UnderlyingSettlMethod_78);
  UnderlyingInstrument_78.insert(UnderlyingSettlMethod_78.getString());
  FIX::UnderlyingSettlementType UnderlyingSettlementType_78(4);
  msg.set(UnderlyingSettlementType_78);
  UnderlyingInstrument_78.insert(UnderlyingSettlementType_78.getString());
  FIX::UnderlyingStartValue UnderlyingStartValue_78;
  UnderlyingStartValue_78.setString("1225015");
  msg.set(UnderlyingStartValue_78);
  UnderlyingInstrument_78.insert(UnderlyingStartValue_78.getString());
  FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_78("STRING_1560501170");
  msg.set(UnderlyingStateOrProvinceOfIssue_78);
  UnderlyingInstrument_78.insert(UnderlyingStateOrProvinceOfIssue_78.getString());
  FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_78("EUR");
  msg.set(UnderlyingStrikeCurrency_78);
  UnderlyingInstrument_78.insert(UnderlyingStrikeCurrency_78.getString());
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_78;
  UnderlyingStrikePrice_78.setString("1651991");
  msg.set(UnderlyingStrikePrice_78);
  UnderlyingInstrument_78.insert(UnderlyingStrikePrice_78.getString());
  FIX::UnderlyingSymbol UnderlyingSymbol_78("STRING_296908097");
  msg.set(UnderlyingSymbol_78);
  UnderlyingInstrument_78.insert(UnderlyingSymbol_78.getString());
  FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_78("STRING_940461654");
  msg.set(UnderlyingSymbolSfx_78);
  UnderlyingInstrument_78.insert(UnderlyingSymbolSfx_78.getString());
  FIX::UnderlyingTimeUnit UnderlyingTimeUnit_78("STRING_970542058");
  msg.set(UnderlyingTimeUnit_78);
  UnderlyingInstrument_78.insert(UnderlyingTimeUnit_78.getString());
  FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_78("STRING_1322884365");
  msg.set(UnderlyingUnitOfMeasure_78);
  UnderlyingInstrument_78.insert(UnderlyingUnitOfMeasure_78.getString());
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_78;
  UnderlyingUnitOfMeasureQty_78.setString("222802");
  msg.set(UnderlyingUnitOfMeasureQty_78);
  UnderlyingInstrument_78.insert(UnderlyingUnitOfMeasureQty_78.getString());
  all_values.push_back(UnderlyingInstrument_78);

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_155;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_155("STRING_1601850969");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltID_155);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_155.insert(UnderlyingSecurityAltID_155.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_155("STRING_1114060246");
    noUnderlyingSecurityAltID_0_0.set(UnderlyingSecurityAltIDSource_155);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_155.insert(UnderlyingSecurityAltIDSource_155.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_155);

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_156;
    FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_156("STRING_1119323625");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltID_156);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_156.insert(UnderlyingSecurityAltID_156.getString());
    FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_156("STRING_1267392405");
    noUnderlyingSecurityAltID_0_1.set(UnderlyingSecurityAltIDSource_156);
    UndSecAltIDGrp_NoUnderlyingSecurityAltID_156.insert(UnderlyingSecurityAltIDSource_156.getString());
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_156);

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_146;
    FIX::UnderlyingStipType UnderlyingStipType_146("STRING_363193150");
    noUnderlyingStips_0_0.set(UnderlyingStipType_146);
    UnderlyingStipulations_NoUnderlyingStips_146.insert(UnderlyingStipType_146.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_146("STRING_1530860042");
    noUnderlyingStips_0_0.set(UnderlyingStipValue_146);
    UnderlyingStipulations_NoUnderlyingStips_146.insert(UnderlyingStipValue_146.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_146);

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_147;
    FIX::UnderlyingStipType UnderlyingStipType_147("STRING_1707944310");
    noUnderlyingStips_0_1.set(UnderlyingStipType_147);
    UnderlyingStipulations_NoUnderlyingStips_147.insert(UnderlyingStipType_147.getString());
    FIX::UnderlyingStipValue UnderlyingStipValue_147("STRING_771308194");
    noUnderlyingStips_0_1.set(UnderlyingStipValue_147);
    UnderlyingStipulations_NoUnderlyingStips_147.insert(UnderlyingStipValue_147.getString());
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_147);

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_155;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_155("STRING_927847848");
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyID_155);
    UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyID_155.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_155('4');
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyIDSource_155);
    UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyIDSource_155.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_155(2108549440);
    noUndlyInstrumentParties_0_0.set(UnderlyingInstrumentPartyRole_155);
    UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyRole_155.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_155);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_301("STRING_362595371");
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubID_301);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301.insert(UnderlyingInstrumentPartySubID_301.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_301(1238593523);
      noUndlyInstrumentPartySubIDs_0_1_0.set(UnderlyingInstrumentPartySubIDType_301);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301.insert(UnderlyingInstrumentPartySubIDType_301.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301);

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_156;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_156("STRING_147685364");
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyID_156);
    UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyID_156.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_156('5');
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyIDSource_156);
    UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyIDSource_156.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_156(767119326);
    noUndlyInstrumentParties_0_1.set(UnderlyingInstrumentPartyRole_156);
    UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyRole_156.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_156);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_302("STRING_686786328");
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubID_302);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302.insert(UnderlyingInstrumentPartySubID_302.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_302(180136848);
      noUndlyInstrumentPartySubIDs_1_1_0.set(UnderlyingInstrumentPartySubIDType_302);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302.insert(UnderlyingInstrumentPartySubIDType_302.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302);

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_157;
    FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_157("STRING_662495908");
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyID_157);
    UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyID_157.getString());
    FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_157('6');
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyIDSource_157);
    UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyIDSource_157.getString());
    FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_157(345335986);
    noUndlyInstrumentParties_0_2.set(UnderlyingInstrumentPartyRole_157);
    UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyRole_157.getString());
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_157);

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303;
      FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_303("STRING_1567593264");
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubID_303);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303.insert(UnderlyingInstrumentPartySubID_303.getString());
      FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_303(1315878044);
      noUndlyInstrumentPartySubIDs_2_1_0.set(UnderlyingInstrumentPartySubIDType_303);
      UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303.insert(UnderlyingInstrumentPartySubIDType_303.getString());
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303);

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
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
