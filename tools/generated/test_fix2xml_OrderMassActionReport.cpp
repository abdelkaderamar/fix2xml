#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionReport_0;
  set_field(msg, FIX::ClOrdID{"STRING_580039629"}, OrderMassActionReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1160148763"}, OrderMassActionReport_0);
  set_field(msg, FIX::EncodedTextLen{542122308}, OrderMassActionReport_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_582800720"}, OrderMassActionReport_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1804180651"}, OrderMassActionReport_0);
  set_field(msg, FIX::MassActionRejectReason{4}, OrderMassActionReport_0);
  set_field(msg, FIX::MassActionReportID{"STRING_1755246975"}, OrderMassActionReport_0);
  set_field(msg, FIX::MassActionResponse{0}, OrderMassActionReport_0);
  set_field(msg, FIX::MassActionScope{1}, OrderMassActionReport_0);
  set_field(msg, FIX::MassActionType{2}, OrderMassActionReport_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1687891604"}, OrderMassActionReport_0);
  set_field(msg, FIX::Side{'4'}, OrderMassActionReport_0);
  set_field(msg, FIX::Text{"STRING_1025313141"}, OrderMassActionReport_0);
  set_field(msg, FIX::TotalAffectedOrders{728605976}, OrderMassActionReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_3"}, OrderMassActionReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_2"}, OrderMassActionReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(7, 12, 43, 8, 4, 2004)}, OrderMassActionReport_0);
  all_values.push_back(OrderMassActionReport_0);

  all_compo_names.insert("OrderMassActionReport");

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_0;
    set_field(noAffectedOrders_0_0, FIX::AffectedOrderID{"STRING_1121039638"}, AffectedOrdGrp_NoAffectedOrders_0);
    set_field(noAffectedOrders_0_0, FIX::AffectedSecondaryOrderID{"STRING_858694067"}, AffectedOrdGrp_NoAffectedOrders_0);
    set_field(noAffectedOrders_0_0, FIX::OrigClOrdID{"STRING_1248987163"}, AffectedOrdGrp_NoAffectedOrders_0);
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_0);
    all_compo_names.insert("...NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_1;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_1;
    set_field(noAffectedOrders_0_1, FIX::AffectedOrderID{"STRING_1678801585"}, AffectedOrdGrp_NoAffectedOrders_1);
    set_field(noAffectedOrders_0_1, FIX::AffectedSecondaryOrderID{"STRING_1109098361"}, AffectedOrdGrp_NoAffectedOrders_1);
    set_field(noAffectedOrders_0_1, FIX::OrigClOrdID{"STRING_1331139333"}, AffectedOrdGrp_NoAffectedOrders_1);
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_1);
    all_compo_names.insert("...NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_2;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_2;
    set_field(noAffectedOrders_0_2, FIX::AffectedOrderID{"STRING_1042231367"}, AffectedOrdGrp_NoAffectedOrders_2);
    set_field(noAffectedOrders_0_2, FIX::AffectedSecondaryOrderID{"STRING_1689137990"}, AffectedOrdGrp_NoAffectedOrders_2);
    set_field(noAffectedOrders_0_2, FIX::OrigClOrdID{"STRING_343804449"}, AffectedOrdGrp_NoAffectedOrders_2);
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_2);
    all_compo_names.insert("...NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_2);
  }
  // Instrument
  multiset<string> Instrument_44;
  FIX::AttachmentPoint AttachmentPoint_44;
  AttachmentPoint_44.setString("36.750000");
set_field(msg, AttachmentPoint_44, Instrument_44);
  set_field(msg, FIX::CFICode{"STRING_124455062"}, Instrument_44);
  set_field(msg, FIX::CPProgram{99}, Instrument_44);
  set_field(msg, FIX::CPRegType{"STRING_1974503049"}, Instrument_44);
  FIX::CapPrice CapPrice_44;
  CapPrice_44.setString("18797020");
set_field(msg, CapPrice_44, Instrument_44);
  FIX::ContractMultiplier ContractMultiplier_44;
  ContractMultiplier_44.setString("8807458");
set_field(msg, ContractMultiplier_44, Instrument_44);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_44);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1942745263"}, Instrument_44);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_421153833"}, Instrument_44);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1574816485"}, Instrument_44);
  FIX::CouponRate CouponRate_44;
  CouponRate_44.setString("47.570000");
set_field(msg, CouponRate_44, Instrument_44);
  set_field(msg, FIX::CreditRating{"STRING_1149759810"}, Instrument_44);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1551592615"}, Instrument_44);
  FIX::DetachmentPoint DetachmentPoint_44;
  DetachmentPoint_44.setString("42.400000");
set_field(msg, DetachmentPoint_44, Instrument_44);
  set_field(msg, FIX::EncodedIssuer{"DATA_594718558"}, Instrument_44);
  set_field(msg, FIX::EncodedIssuerLen{356103750}, Instrument_44);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_676268504"}, Instrument_44);
  set_field(msg, FIX::EncodedSecurityDescLen{1122222401}, Instrument_44);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_44);
  FIX::Factor Factor_44;
  Factor_44.setString("4127633");
set_field(msg, Factor_44, Instrument_44);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_44);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_44);
  FIX::FloorPrice FloorPrice_44;
  FloorPrice_44.setString("15338030");
set_field(msg, FloorPrice_44, Instrument_44);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_44);
  set_field(msg, FIX::InstrRegistry{"STRING_1258795785"}, Instrument_44);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_44);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_449290846"}, Instrument_44);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_442451471"}, Instrument_44);
  set_field(msg, FIX::Issuer{"STRING_2107352309"}, Instrument_44);
  set_field(msg, FIX::ListMethod{1}, Instrument_44);
  set_field(msg, FIX::LocaleOfIssue{"STRING_786255920"}, Instrument_44);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1544222336"}, Instrument_44);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_115400251"}, Instrument_44);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_786757372"}, Instrument_44);
  FIX::MinPriceIncrement MinPriceIncrement_44;
  MinPriceIncrement_44.setString("13712417");
set_field(msg, MinPriceIncrement_44, Instrument_44);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_44;
  MinPriceIncrementAmount_44.setString("19951022");
set_field(msg, MinPriceIncrementAmount_44, Instrument_44);
  set_field(msg, FIX::NTPositionLimit{1667503249}, Instrument_44);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_44;
  NotionalPercentageOutstanding_44.setString("19.950000");
set_field(msg, NotionalPercentageOutstanding_44, Instrument_44);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_44);
  FIX::OptPayoutAmount OptPayoutAmount_44;
  OptPayoutAmount_44.setString("20886570");
set_field(msg, OptPayoutAmount_44, Instrument_44);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_44);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_44;
  OriginalNotionalPercentageOutstanding_44.setString("50.140000");
set_field(msg, OriginalNotionalPercentageOutstanding_44, Instrument_44);
  set_field(msg, FIX::Pool{"STRING_1090933245"}, Instrument_44);
  set_field(msg, FIX::PositionLimit{1064187447}, Instrument_44);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_44);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1685651803"}, Instrument_44);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_44;
  PriceUnitOfMeasureQty_44.setString("14202911");
set_field(msg, PriceUnitOfMeasureQty_44, Instrument_44);
  set_field(msg, FIX::Product{4}, Instrument_44);
  set_field(msg, FIX::ProductComplex{"STRING_660390556"}, Instrument_44);
  set_field(msg, FIX::PutOrCall{0}, Instrument_44);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_489687477"}, Instrument_44);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1289372621"}, Instrument_44);
  FIX::RepurchaseRate RepurchaseRate_44;
  RepurchaseRate_44.setString("63.710000");
set_field(msg, RepurchaseRate_44, Instrument_44);
  set_field(msg, FIX::RepurchaseTerm{2023490482}, Instrument_44);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_44);
  set_field(msg, FIX::SecurityDesc{"STRING_1245228508"}, Instrument_44);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_941127776"}, Instrument_44);
  set_field(msg, FIX::SecurityGroup{"STRING_1078855953"}, Instrument_44);
  set_field(msg, FIX::SecurityID{"STRING_1687679979"}, Instrument_44);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_44);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_44);
  set_field(msg, FIX::SecuritySubType{"STRING_326452251"}, Instrument_44);
  set_field(msg, FIX::SecurityType{"STRING_FADN"}, Instrument_44);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_44);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_44);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1668976864"}, Instrument_44);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1032820035"}, Instrument_44);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_44);
  FIX::StrikeMultiplier StrikeMultiplier_44;
  StrikeMultiplier_44.setString("6757002");
set_field(msg, StrikeMultiplier_44, Instrument_44);
  FIX::StrikePrice StrikePrice_44;
  StrikePrice_44.setString("5744026");
set_field(msg, StrikePrice_44, Instrument_44);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_44);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_44;
  StrikePriceBoundaryPrecision_44.setString("53.060000");
set_field(msg, StrikePriceBoundaryPrecision_44, Instrument_44);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_44);
  FIX::StrikeValue StrikeValue_44;
  StrikeValue_44.setString("1835374");
set_field(msg, StrikeValue_44, Instrument_44);
  set_field(msg, FIX::Symbol{"STRING_539810912"}, Instrument_44);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_44);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_44);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_44);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_44);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_44;
  UnitOfMeasureQty_44.setString("15804527");
set_field(msg, UnitOfMeasureQty_44, Instrument_44);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_44);
  all_values.push_back(Instrument_44);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_89;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_89);
    FIX::ComplexEventPrice ComplexEventPrice_89;
    ComplexEventPrice_89.setString("9824293");
set_field(noComplexEvents_0_0, ComplexEventPrice_89, ComplexEvents_NoComplexEvents_89);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_89);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_89;
    ComplexEventPriceBoundaryPrecision_89.setString("3.720000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_89, ComplexEvents_NoComplexEvents_89);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_89);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_89);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_89;
    ComplexOptPayoutAmount_89.setString("2048267");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_89, ComplexEvents_NoComplexEvents_89);
    all_values.push_back(ComplexEvents_NoComplexEvents_89);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_189;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 26, 29, 27, 11, 2008)}, ComplexEventDates_NoComplexEventDates_189);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 8, 57, 24, 7, 2003)}, ComplexEventDates_NoComplexEventDates_189);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_189);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_381;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 35, 20)}, ComplexEventTimes_NoComplexEventTimes_381);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 19, 6)}, ComplexEventTimes_NoComplexEventTimes_381);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_381);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_382;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 42, 32)}, ComplexEventTimes_NoComplexEventTimes_382);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 56, 45)}, ComplexEventTimes_NoComplexEventTimes_382);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_382);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_190;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 11, 0, 3, 2, 2014)}, ComplexEventDates_NoComplexEventDates_190);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 44, 18, 6, 3, 2015)}, ComplexEventDates_NoComplexEventDates_190);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_190);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_383;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 23, 16)}, ComplexEventTimes_NoComplexEventTimes_383);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 27, 2)}, ComplexEventTimes_NoComplexEventTimes_383);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_383);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_90;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_90);
    FIX::ComplexEventPrice ComplexEventPrice_90;
    ComplexEventPrice_90.setString("12054018");
set_field(noComplexEvents_0_1, ComplexEventPrice_90, ComplexEvents_NoComplexEvents_90);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_90);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_90;
    ComplexEventPriceBoundaryPrecision_90.setString("34.840000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_90, ComplexEvents_NoComplexEvents_90);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_90);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_90);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_90;
    ComplexOptPayoutAmount_90.setString("14060412");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_90, ComplexEvents_NoComplexEvents_90);
    all_values.push_back(ComplexEvents_NoComplexEvents_90);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_191;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 5, 53, 24, 7, 2011)}, ComplexEventDates_NoComplexEventDates_191);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 14, 18, 26, 9, 2007)}, ComplexEventDates_NoComplexEventDates_191);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_191);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_384;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 38, 49)}, ComplexEventTimes_NoComplexEventTimes_384);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 17, 15)}, ComplexEventTimes_NoComplexEventTimes_384);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_384);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_385;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 0, 5)}, ComplexEventTimes_NoComplexEventTimes_385);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 37, 3)}, ComplexEventTimes_NoComplexEventTimes_385);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_385);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_192;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 8, 42, 14, 7, 2006)}, ComplexEventDates_NoComplexEventDates_192);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 18, 21, 20, 3, 2014)}, ComplexEventDates_NoComplexEventDates_192);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_192);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_386;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 25, 17)}, ComplexEventTimes_NoComplexEventTimes_386);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 34, 40)}, ComplexEventTimes_NoComplexEventTimes_386);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_386);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_387;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 32, 52)}, ComplexEventTimes_NoComplexEventTimes_387);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 30, 39)}, ComplexEventTimes_NoComplexEventTimes_387);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_387);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_388;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 40, 9)}, ComplexEventTimes_NoComplexEventTimes_388);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 13, 48)}, ComplexEventTimes_NoComplexEventTimes_388);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_388);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_193;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 1, 9, 13, 11, 2014)}, ComplexEventDates_NoComplexEventDates_193);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 21, 18, 7, 1, 2008)}, ComplexEventDates_NoComplexEventDates_193);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_193);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_389;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 23, 28)}, ComplexEventTimes_NoComplexEventTimes_389);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 50, 10)}, ComplexEventTimes_NoComplexEventTimes_389);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_389);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_390;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 50, 28)}, ComplexEventTimes_NoComplexEventTimes_390);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 41, 0)}, ComplexEventTimes_NoComplexEventTimes_390);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_390);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_391;
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 2, 47)}, ComplexEventTimes_NoComplexEventTimes_391);
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 35, 22)}, ComplexEventTimes_NoComplexEventTimes_391);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_391);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_91;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_91);
    FIX::ComplexEventPrice ComplexEventPrice_91;
    ComplexEventPrice_91.setString("1577953");
set_field(noComplexEvents_0_2, ComplexEventPrice_91, ComplexEvents_NoComplexEvents_91);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_91);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_91;
    ComplexEventPriceBoundaryPrecision_91.setString("12.620000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_91, ComplexEvents_NoComplexEvents_91);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_91);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_91);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_91;
    ComplexOptPayoutAmount_91.setString("18992493");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_91, ComplexEvents_NoComplexEvents_91);
    all_values.push_back(ComplexEvents_NoComplexEvents_91);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_194;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 32, 49, 5, 3, 2005)}, ComplexEventDates_NoComplexEventDates_194);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 49, 8, 0, 11, 2005)}, ComplexEventDates_NoComplexEventDates_194);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_194);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_392;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 55, 50)}, ComplexEventTimes_NoComplexEventTimes_392);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 18, 29)}, ComplexEventTimes_NoComplexEventTimes_392);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_392);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_393;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 10, 11)}, ComplexEventTimes_NoComplexEventTimes_393);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 25, 48)}, ComplexEventTimes_NoComplexEventTimes_393);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_393);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_394;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 13, 27)}, ComplexEventTimes_NoComplexEventTimes_394);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 26, 4)}, ComplexEventTimes_NoComplexEventTimes_394);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_394);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_195;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 12, 52, 6, 7, 2003)}, ComplexEventDates_NoComplexEventDates_195);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 40, 20, 2, 4, 2008)}, ComplexEventDates_NoComplexEventDates_195);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_195);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_395;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 18, 20)}, ComplexEventTimes_NoComplexEventTimes_395);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 45, 1)}, ComplexEventTimes_NoComplexEventTimes_395);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_395);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_396;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 6, 25)}, ComplexEventTimes_NoComplexEventTimes_396);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 43, 59)}, ComplexEventTimes_NoComplexEventTimes_396);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_396);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_397;
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 11, 10)}, ComplexEventTimes_NoComplexEventTimes_397);
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 56, 47)}, ComplexEventTimes_NoComplexEventTimes_397);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_397);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_91;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_408822748"}, EvntGrp_NoEvents_91);
    FIX::EventPx EventPx_91;
    EventPx_91.setString("14591740");
set_field(noEvents_0_0, EventPx_91, EvntGrp_NoEvents_91);
    set_field(noEvents_0_0, FIX::EventText{"STRING_226382159"}, EvntGrp_NoEvents_91);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 7, 13, 10, 6, 2001)}, EvntGrp_NoEvents_91);
    set_field(noEvents_0_0, FIX::EventType{16}, EvntGrp_NoEvents_91);
    all_values.push_back(EvntGrp_NoEvents_91);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_92;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_898531726"}, EvntGrp_NoEvents_92);
    FIX::EventPx EventPx_92;
    EventPx_92.setString("20507014");
set_field(noEvents_0_1, EventPx_92, EvntGrp_NoEvents_92);
    set_field(noEvents_0_1, FIX::EventText{"STRING_705531628"}, EvntGrp_NoEvents_92);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(6, 35, 9, 25, 6, 2010)}, EvntGrp_NoEvents_92);
    set_field(noEvents_0_1, FIX::EventType{17}, EvntGrp_NoEvents_92);
    all_values.push_back(EvntGrp_NoEvents_92);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_93;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_380269271"}, EvntGrp_NoEvents_93);
    FIX::EventPx EventPx_93;
    EventPx_93.setString("329003");
set_field(noEvents_0_2, EventPx_93, EvntGrp_NoEvents_93);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1310496760"}, EvntGrp_NoEvents_93);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(9, 29, 9, 4, 3, 2002)}, EvntGrp_NoEvents_93);
    set_field(noEvents_0_2, FIX::EventType{12}, EvntGrp_NoEvents_93);
    all_values.push_back(EvntGrp_NoEvents_93);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_82;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1748683114"}, InstrumentParties_NoInstrumentParties_82);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_82);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1261781277}, InstrumentParties_NoInstrumentParties_82);
    all_values.push_back(InstrumentParties_NoInstrumentParties_82);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1643904502"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1808967855}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_83;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_2123997664"}, InstrumentParties_NoInstrumentParties_83);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_83);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{560015933}, InstrumentParties_NoInstrumentParties_83);
    all_values.push_back(InstrumentParties_NoInstrumentParties_83);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_2001256638"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1025433277}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1142502222"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1189596345}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_84;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_316756298"}, InstrumentParties_NoInstrumentParties_84);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_84);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1610494058}, InstrumentParties_NoInstrumentParties_84);
    all_values.push_back(InstrumentParties_NoInstrumentParties_84);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1954219368"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1990763329}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_314447030"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{1117232480}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_90;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1252022496"}, SecAltIDGrp_NoSecurityAltID_90);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1686616849"}, SecAltIDGrp_NoSecurityAltID_90);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_90);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_91;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1400157912"}, SecAltIDGrp_NoSecurityAltID_91);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_215484660"}, SecAltIDGrp_NoSecurityAltID_91);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_91);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_92;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_2113318540"}, SecAltIDGrp_NoSecurityAltID_92);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_116632362"}, SecAltIDGrp_NoSecurityAltID_92);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_92);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_88;
  set_field(msg, FIX::SecurityXML{"XMLDATA_638120852"}, SecurityXML_88);
  set_field(msg, FIX::SecurityXMLLen{618918742}, SecurityXML_88);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1865315476"}, SecurityXML_88);
  all_values.push_back(SecurityXML_88);
  all_compo_names.insert("..");

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_0;
    set_field(noNotAffectedOrders_0_0, FIX::NotAffOrigClOrdID{"STRING_1880700019"}, NotAffectedOrdersGrp_NoNotAffectedOrders_0);
    set_field(noNotAffectedOrders_0_0, FIX::NotAffectedOrderID{"STRING_1418470427"}, NotAffectedOrdersGrp_NoNotAffectedOrders_0);
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_0);
    all_compo_names.insert("...NoNotAffectedOrders");

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoNotAffectedOrders noNotAffectedOrders_0_1;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_1;
    set_field(noNotAffectedOrders_0_1, FIX::NotAffOrigClOrdID{"STRING_1337213155"}, NotAffectedOrdersGrp_NoNotAffectedOrders_1);
    set_field(noNotAffectedOrders_0_1, FIX::NotAffectedOrderID{"STRING_1542184226"}, NotAffectedOrdersGrp_NoNotAffectedOrders_1);
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_1);
    all_compo_names.insert("...NoNotAffectedOrders");

    msg.addGroup(noNotAffectedOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_82;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_485454516"}, Parties_NoPartyIDs_82);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_82);
    set_field(noPartyIDs_0_0, FIX::PartyRole{33}, Parties_NoPartyIDs_82);
    all_values.push_back(Parties_NoPartyIDs_82);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_162;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_980149788"}, PtysSubGrp_NoPartySubIDs_162);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_162);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_162);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_163;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1528823851"}, PtysSubGrp_NoPartySubIDs_163);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_163);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_163);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_83;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_539602348"}, Parties_NoPartyIDs_83);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_83);
    set_field(noPartyIDs_0_1, FIX::PartyRole{75}, Parties_NoPartyIDs_83);
    all_values.push_back(Parties_NoPartyIDs_83);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_164;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_835113942"}, PtysSubGrp_NoPartySubIDs_164);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_164);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_164);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_165;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1463570548"}, PtysSubGrp_NoPartySubIDs_165);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_165);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_165);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_166;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_997438687"}, PtysSubGrp_NoPartySubIDs_166);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_166);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_166);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_1;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_1212923348"}, TargetParties_NoTargetPartyIDs_1);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'9'}, TargetParties_NoTargetPartyIDs_1);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{1149443131}, TargetParties_NoTargetPartyIDs_1);
    all_values.push_back(TargetParties_NoTargetPartyIDs_1);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_2;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_1851044200"}, TargetParties_NoTargetPartyIDs_2);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_2);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{867274959}, TargetParties_NoTargetPartyIDs_2);
    all_values.push_back(TargetParties_NoTargetPartyIDs_2);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_80;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_1544352852"}, UnderlyingInstrument_80);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{1320673755}, UnderlyingInstrument_80);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_138261738"}, UnderlyingInstrument_80);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{734082359}, UnderlyingInstrument_80);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_80;
  UnderlyingAdjustedQuantity_80.setString("7153743");
set_field(msg, UnderlyingAdjustedQuantity_80, UnderlyingInstrument_80);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_80;
  UnderlyingAllocationPercent_80.setString("61.810000");
set_field(msg, UnderlyingAllocationPercent_80, UnderlyingInstrument_80);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_80;
  UnderlyingAttachmentPoint_80.setString("68.760000");
set_field(msg, UnderlyingAttachmentPoint_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_670090845"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_660478776"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1558764382"}, UnderlyingInstrument_80);
  FIX::UnderlyingCapValue UnderlyingCapValue_80;
  UnderlyingCapValue_80.setString("16502406");
set_field(msg, UnderlyingCapValue_80, UnderlyingInstrument_80);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_80;
  UnderlyingCashAmount_80.setString("9302135");
set_field(msg, UnderlyingCashAmount_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_80);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_80;
  UnderlyingContractMultiplier_80.setString("7996630");
set_field(msg, UnderlyingContractMultiplier_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{1469815942}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_1931938847"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_230632233"}, UnderlyingInstrument_80);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_80;
  UnderlyingCouponRate_80.setString("40.100000");
set_field(msg, UnderlyingCouponRate_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_619569142"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_80);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_80;
  UnderlyingCurrentValue_80.setString("2522219");
set_field(msg, UnderlyingCurrentValue_80, UnderlyingInstrument_80);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_80;
  UnderlyingDetachmentPoint_80.setString("71.120000");
set_field(msg, UnderlyingDetachmentPoint_80, UnderlyingInstrument_80);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_80;
  UnderlyingDirtyPrice_80.setString("21349446");
set_field(msg, UnderlyingDirtyPrice_80, UnderlyingInstrument_80);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_80;
  UnderlyingEndPrice_80.setString("12850327");
set_field(msg, UnderlyingEndPrice_80, UnderlyingInstrument_80);
  FIX::UnderlyingEndValue UnderlyingEndValue_80;
  UnderlyingEndValue_80.setString("389268");
set_field(msg, UnderlyingEndValue_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingExerciseStyle{955999655}, UnderlyingInstrument_80);
  FIX::UnderlyingFXRate UnderlyingFXRate_80;
  UnderlyingFXRate_80.setString("2869922");
set_field(msg, UnderlyingFXRate_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_80);
  FIX::UnderlyingFactor UnderlyingFactor_80;
  UnderlyingFactor_80.setString("3959733");
set_field(msg, UnderlyingFactor_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingFlowScheduleType{1154267210}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_1286840217"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1716647146"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_1292528948"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_2020922576"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_284537832"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_678291481"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1092975804"}, UnderlyingInstrument_80);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_80;
  UnderlyingNotionalPercentageOutstanding_80.setString("86.780000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_80);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_80;
  UnderlyingOriginalNotionalPercentageOutstanding_80.setString("65.390000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_457385664"}, UnderlyingInstrument_80);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_80;
  UnderlyingPriceUnitOfMeasureQty_80.setString("1215002");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingProduct{1444361125}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingPutOrCall{1257048736}, UnderlyingInstrument_80);
  FIX::UnderlyingPx UnderlyingPx_80;
  UnderlyingPx_80.setString("15913161");
set_field(msg, UnderlyingPx_80, UnderlyingInstrument_80);
  FIX::UnderlyingQty UnderlyingQty_80;
  UnderlyingQty_80.setString("12288163");
set_field(msg, UnderlyingQty_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1487680970"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1259986508"}, UnderlyingInstrument_80);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_80;
  UnderlyingRepurchaseRate_80.setString("54.660000");
set_field(msg, UnderlyingRepurchaseRate_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{1463729395}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_244743771"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_2100607465"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_289732859"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_232204784"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_1238156585"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_328659672"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_1188204439"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_1525148836"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_71147036"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_80);
  FIX::UnderlyingStartValue UnderlyingStartValue_80;
  UnderlyingStartValue_80.setString("5319323");
set_field(msg, UnderlyingStartValue_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1357987253"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_80);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_80;
  UnderlyingStrikePrice_80.setString("12314261");
set_field(msg, UnderlyingStrikePrice_80, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_1437879161"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_355269180"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_176918338"}, UnderlyingInstrument_80);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_245024191"}, UnderlyingInstrument_80);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_80;
  UnderlyingUnitOfMeasureQty_80.setString("16940394");
set_field(msg, UnderlyingUnitOfMeasureQty_80, UnderlyingInstrument_80);
  all_values.push_back(UnderlyingInstrument_80);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_169;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_702409855"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_169);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1815539641"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_169);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_169);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_170;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_2125536002"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_170);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1959458591"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_170);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_170);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_162;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_1206868679"}, UnderlyingStipulations_NoUnderlyingStips_162);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_1299655913"}, UnderlyingStipulations_NoUnderlyingStips_162);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_162);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_163;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_907770497"}, UndlyInstrumentParties_NoUndlyInstrumentParties_163);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_163);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{616618770}, UndlyInstrumentParties_NoUndlyInstrumentParties_163);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_163);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_905634520"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{848823554}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2099050900"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{1234294192}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322;
      set_field(noUndlyInstrumentPartySubIDs_0_1_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2037027993"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322);
      set_field(noUndlyInstrumentPartySubIDs_0_1_2, FIX::UnderlyingInstrumentPartySubIDType{1476716089}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";cout << "////////////////////////////////////////////" << endl;
cout << msg.toXML() << endl;
cout << "////////////////////////////////////////////" << endl << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    BOOST_LOG_TRIVIAL(debug) << "XML Elements are:";
    cout << "	[";
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

    BOOST_LOG_TRIVIAL(debug) << "FIX Components are:"; 
    cout << "	[";
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

  }
  BOOST_LOG_TRIVIAL(debug) << "All FIX components";
  for (const auto& l : all_values) {
    cout << "	[";
copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }
  BOOST_LOG_TRIVIAL(debug) << "All XML components";
  for (const auto& l : elt_lists) {
    cout << "	[";
copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;

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
      BOOST_LOG_TRIVIAL(debug) << "[TO CHECK] This XML component was not found in FIX message";
      cout << "	 ---> [";
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << "]" << endl << endl;
    } // end if ! found
  } // end for elt_lists
}
