#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::OrderMassCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelRequest_0;
  set_field(msg, FIX::ClOrdID{"STRING_492121131"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_2061300972"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::EncodedTextLen{1458232895}, OrderMassCancelRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_613753410"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_94718882"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::MassCancelRequestType{'7'}, OrderMassCancelRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1190521141"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::Side{'7'}, OrderMassCancelRequest_0);
  set_field(msg, FIX::Text{"STRING_907165037"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_3"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_2"}, OrderMassCancelRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(16, 29, 14, 1, 6, 2011)}, OrderMassCancelRequest_0);
  all_values.push_back(OrderMassCancelRequest_0);

  all_compo_names.insert("OrderMassCancelRequest");

  // Instrument
  multiset<string> Instrument_60;
  FIX::AttachmentPoint AttachmentPoint_60;
  AttachmentPoint_60.setString("87.230000");
set_field(msg, AttachmentPoint_60, Instrument_60);
  set_field(msg, FIX::CFICode{"STRING_911403726"}, Instrument_60);
  set_field(msg, FIX::CPProgram{2}, Instrument_60);
  set_field(msg, FIX::CPRegType{"STRING_2086327572"}, Instrument_60);
  FIX::CapPrice CapPrice_60;
  CapPrice_60.setString("5853320");
set_field(msg, CapPrice_60, Instrument_60);
  FIX::ContractMultiplier ContractMultiplier_60;
  ContractMultiplier_60.setString("18433176");
set_field(msg, ContractMultiplier_60, Instrument_60);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_60);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_836298545"}, Instrument_60);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1859140506"}, Instrument_60);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1133896077"}, Instrument_60);
  FIX::CouponRate CouponRate_60;
  CouponRate_60.setString("51.380000");
set_field(msg, CouponRate_60, Instrument_60);
  set_field(msg, FIX::CreditRating{"STRING_742328939"}, Instrument_60);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_675529293"}, Instrument_60);
  FIX::DetachmentPoint DetachmentPoint_60;
  DetachmentPoint_60.setString("26.210000");
set_field(msg, DetachmentPoint_60, Instrument_60);
  set_field(msg, FIX::EncodedIssuer{"DATA_656146264"}, Instrument_60);
  set_field(msg, FIX::EncodedIssuerLen{2133762188}, Instrument_60);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1069256031"}, Instrument_60);
  set_field(msg, FIX::EncodedSecurityDescLen{750865146}, Instrument_60);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_60);
  FIX::Factor Factor_60;
  Factor_60.setString("1122935");
set_field(msg, Factor_60, Instrument_60);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_60);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_60);
  FIX::FloorPrice FloorPrice_60;
  FloorPrice_60.setString("12698597");
set_field(msg, FloorPrice_60, Instrument_60);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_60);
  set_field(msg, FIX::InstrRegistry{"STRING_1538201036"}, Instrument_60);
  set_field(msg, FIX::InstrmtAssignmentMethod{'3'}, Instrument_60);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1066813965"}, Instrument_60);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_741060243"}, Instrument_60);
  set_field(msg, FIX::Issuer{"STRING_236492947"}, Instrument_60);
  set_field(msg, FIX::ListMethod{0}, Instrument_60);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1910717678"}, Instrument_60);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1437601670"}, Instrument_60);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_200921436"}, Instrument_60);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1522990531"}, Instrument_60);
  FIX::MinPriceIncrement MinPriceIncrement_60;
  MinPriceIncrement_60.setString("13764455");
set_field(msg, MinPriceIncrement_60, Instrument_60);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_60;
  MinPriceIncrementAmount_60.setString("7862535");
set_field(msg, MinPriceIncrementAmount_60, Instrument_60);
  set_field(msg, FIX::NTPositionLimit{1218824500}, Instrument_60);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_60;
  NotionalPercentageOutstanding_60.setString("72.440000");
set_field(msg, NotionalPercentageOutstanding_60, Instrument_60);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_60);
  FIX::OptPayoutAmount OptPayoutAmount_60;
  OptPayoutAmount_60.setString("9304813");
set_field(msg, OptPayoutAmount_60, Instrument_60);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_60);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_60;
  OriginalNotionalPercentageOutstanding_60.setString("35.420000");
set_field(msg, OriginalNotionalPercentageOutstanding_60, Instrument_60);
  set_field(msg, FIX::Pool{"STRING_1672810298"}, Instrument_60);
  set_field(msg, FIX::PositionLimit{24358967}, Instrument_60);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_60);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_181472914"}, Instrument_60);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_60;
  PriceUnitOfMeasureQty_60.setString("106375");
set_field(msg, PriceUnitOfMeasureQty_60, Instrument_60);
  set_field(msg, FIX::Product{3}, Instrument_60);
  set_field(msg, FIX::ProductComplex{"STRING_932338060"}, Instrument_60);
  set_field(msg, FIX::PutOrCall{0}, Instrument_60);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1075502072"}, Instrument_60);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1565643965"}, Instrument_60);
  FIX::RepurchaseRate RepurchaseRate_60;
  RepurchaseRate_60.setString("59.350000");
set_field(msg, RepurchaseRate_60, Instrument_60);
  set_field(msg, FIX::RepurchaseTerm{197878158}, Instrument_60);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_60);
  set_field(msg, FIX::SecurityDesc{"STRING_896423323"}, Instrument_60);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_573856508"}, Instrument_60);
  set_field(msg, FIX::SecurityGroup{"STRING_948712437"}, Instrument_60);
  set_field(msg, FIX::SecurityID{"STRING_1637483566"}, Instrument_60);
  set_field(msg, FIX::SecurityIDSource{"STRING_4"}, Instrument_60);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_60);
  set_field(msg, FIX::SecuritySubType{"STRING_1400717597"}, Instrument_60);
  set_field(msg, FIX::SecurityType{"STRING_PROV"}, Instrument_60);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_60);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_60);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1476913072"}, Instrument_60);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1225405091"}, Instrument_60);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_60);
  FIX::StrikeMultiplier StrikeMultiplier_60;
  StrikeMultiplier_60.setString("7004734");
set_field(msg, StrikeMultiplier_60, Instrument_60);
  FIX::StrikePrice StrikePrice_60;
  StrikePrice_60.setString("7780466");
set_field(msg, StrikePrice_60, Instrument_60);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_60);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_60;
  StrikePriceBoundaryPrecision_60.setString("33.900000");
set_field(msg, StrikePriceBoundaryPrecision_60, Instrument_60);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_60);
  FIX::StrikeValue StrikeValue_60;
  StrikeValue_60.setString("12125189");
set_field(msg, StrikeValue_60, Instrument_60);
  set_field(msg, FIX::Symbol{"STRING_32875906"}, Instrument_60);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_60);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_60);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_60);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_60);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_60;
  UnitOfMeasureQty_60.setString("15277456");
set_field(msg, UnitOfMeasureQty_60, Instrument_60);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_60);
  all_values.push_back(Instrument_60);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_118;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_118);
    FIX::ComplexEventPrice ComplexEventPrice_118;
    ComplexEventPrice_118.setString("1219810");
set_field(noComplexEvents_0_0, ComplexEventPrice_118, ComplexEvents_NoComplexEvents_118);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_118);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_118;
    ComplexEventPriceBoundaryPrecision_118.setString("12.780000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_118, ComplexEvents_NoComplexEvents_118);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_118);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_118);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_118;
    ComplexOptPayoutAmount_118.setString("12723911");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_118, ComplexEvents_NoComplexEvents_118);
    all_values.push_back(ComplexEvents_NoComplexEvents_118);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_231;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 37, 9, 14, 11, 2014)}, ComplexEventDates_NoComplexEventDates_231);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 36, 51, 5, 7, 2005)}, ComplexEventDates_NoComplexEventDates_231);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_231);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_469;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 16, 37)}, ComplexEventTimes_NoComplexEventTimes_469);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 35, 6)}, ComplexEventTimes_NoComplexEventTimes_469);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_469);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_470;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 53, 40)}, ComplexEventTimes_NoComplexEventTimes_470);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 28, 47)}, ComplexEventTimes_NoComplexEventTimes_470);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_470);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_471;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 16, 43)}, ComplexEventTimes_NoComplexEventTimes_471);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 56, 11)}, ComplexEventTimes_NoComplexEventTimes_471);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_471);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_119;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_119);
    FIX::ComplexEventPrice ComplexEventPrice_119;
    ComplexEventPrice_119.setString("1095372");
set_field(noComplexEvents_0_1, ComplexEventPrice_119, ComplexEvents_NoComplexEvents_119);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_119);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_119;
    ComplexEventPriceBoundaryPrecision_119.setString("93.430000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_119, ComplexEvents_NoComplexEvents_119);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_119);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_119);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_119;
    ComplexOptPayoutAmount_119.setString("6681915");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_119, ComplexEvents_NoComplexEvents_119);
    all_values.push_back(ComplexEvents_NoComplexEvents_119);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_232;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 23, 26, 21, 4, 2014)}, ComplexEventDates_NoComplexEventDates_232);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 26, 55, 14, 1, 2012)}, ComplexEventDates_NoComplexEventDates_232);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_232);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_472;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 45, 58)}, ComplexEventTimes_NoComplexEventTimes_472);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 54, 5)}, ComplexEventTimes_NoComplexEventTimes_472);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_472);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_473;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 51, 12)}, ComplexEventTimes_NoComplexEventTimes_473);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 18, 46)}, ComplexEventTimes_NoComplexEventTimes_473);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_473);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_474;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 1, 2)}, ComplexEventTimes_NoComplexEventTimes_474);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 35, 57)}, ComplexEventTimes_NoComplexEventTimes_474);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_474);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_233;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 53, 17, 25, 10, 2002)}, ComplexEventDates_NoComplexEventDates_233);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 23, 45, 1, 4, 2015)}, ComplexEventDates_NoComplexEventDates_233);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_233);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_475;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 41, 1)}, ComplexEventTimes_NoComplexEventTimes_475);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 12, 35)}, ComplexEventTimes_NoComplexEventTimes_475);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_475);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_476;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 37, 54)}, ComplexEventTimes_NoComplexEventTimes_476);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 21, 0)}, ComplexEventTimes_NoComplexEventTimes_476);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_476);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderMassCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_477;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 45, 57)}, ComplexEventTimes_NoComplexEventTimes_477);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 35, 27)}, ComplexEventTimes_NoComplexEventTimes_477);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_477);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_127;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1275899279"}, EvntGrp_NoEvents_127);
    FIX::EventPx EventPx_127;
    EventPx_127.setString("6495118");
set_field(noEvents_0_0, EventPx_127, EvntGrp_NoEvents_127);
    set_field(noEvents_0_0, FIX::EventText{"STRING_870156390"}, EvntGrp_NoEvents_127);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(4, 20, 19, 5, 6, 2013)}, EvntGrp_NoEvents_127);
    set_field(noEvents_0_0, FIX::EventType{99}, EvntGrp_NoEvents_127);
    all_values.push_back(EvntGrp_NoEvents_127);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_115;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_330921985"}, InstrumentParties_NoInstrumentParties_115);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_115);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{38779200}, InstrumentParties_NoInstrumentParties_115);
    all_values.push_back(InstrumentParties_NoInstrumentParties_115);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1896215263"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1313924155}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1652421672"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1955131685}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_116;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_2094143656"}, InstrumentParties_NoInstrumentParties_116);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_116);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{252844905}, InstrumentParties_NoInstrumentParties_116);
    all_values.push_back(InstrumentParties_NoInstrumentParties_116);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_46414601"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{291265843}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_123;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_242043567"}, SecAltIDGrp_NoSecurityAltID_123);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_372611598"}, SecAltIDGrp_NoSecurityAltID_123);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_123);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_120;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1450977921"}, SecurityXML_120);
  set_field(msg, FIX::SecurityXMLLen{28870744}, SecurityXML_120);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1648510877"}, SecurityXML_120);
  all_values.push_back(SecurityXML_120);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_101;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_899027134"}, Parties_NoPartyIDs_101);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_101);
    set_field(noPartyIDs_0_0, FIX::PartyRole{80}, Parties_NoPartyIDs_101);
    all_values.push_back(Parties_NoPartyIDs_101);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_203;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1881121859"}, PtysSubGrp_NoPartySubIDs_203);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_203);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_203);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_102;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_2109144587"}, Parties_NoPartyIDs_102);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_102);
    set_field(noPartyIDs_0_1, FIX::PartyRole{7}, Parties_NoPartyIDs_102);
    all_values.push_back(Parties_NoPartyIDs_102);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_204;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_329568989"}, PtysSubGrp_NoPartySubIDs_204);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_204);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_204);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_205;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1809198176"}, PtysSubGrp_NoPartySubIDs_205);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_205);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_205);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_10;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_975638683"}, TargetParties_NoTargetPartyIDs_10);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'2'}, TargetParties_NoTargetPartyIDs_10);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{1229596149}, TargetParties_NoTargetPartyIDs_10);
    all_values.push_back(TargetParties_NoTargetPartyIDs_10);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_82;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_922298691"}, UnderlyingInstrument_82);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{832376859}, UnderlyingInstrument_82);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_1482441055"}, UnderlyingInstrument_82);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{1152173166}, UnderlyingInstrument_82);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_82;
  UnderlyingAdjustedQuantity_82.setString("8787914");
set_field(msg, UnderlyingAdjustedQuantity_82, UnderlyingInstrument_82);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_82;
  UnderlyingAllocationPercent_82.setString("68.980000");
set_field(msg, UnderlyingAllocationPercent_82, UnderlyingInstrument_82);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_82;
  UnderlyingAttachmentPoint_82.setString("54.010000");
set_field(msg, UnderlyingAttachmentPoint_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_1120835027"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_2146318496"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1378629674"}, UnderlyingInstrument_82);
  FIX::UnderlyingCapValue UnderlyingCapValue_82;
  UnderlyingCapValue_82.setString("11497057");
set_field(msg, UnderlyingCapValue_82, UnderlyingInstrument_82);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_82;
  UnderlyingCashAmount_82.setString("16473457");
set_field(msg, UnderlyingCashAmount_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_82);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_82;
  UnderlyingContractMultiplier_82.setString("20487329");
set_field(msg, UnderlyingContractMultiplier_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{2113499026}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_330023090"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1910659271"}, UnderlyingInstrument_82);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_82;
  UnderlyingCouponRate_82.setString("72.370000");
set_field(msg, UnderlyingCouponRate_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_1596022370"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_82);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_82;
  UnderlyingCurrentValue_82.setString("5160330");
set_field(msg, UnderlyingCurrentValue_82, UnderlyingInstrument_82);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_82;
  UnderlyingDetachmentPoint_82.setString("55.370000");
set_field(msg, UnderlyingDetachmentPoint_82, UnderlyingInstrument_82);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_82;
  UnderlyingDirtyPrice_82.setString("278695");
set_field(msg, UnderlyingDirtyPrice_82, UnderlyingInstrument_82);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_82;
  UnderlyingEndPrice_82.setString("417659");
set_field(msg, UnderlyingEndPrice_82, UnderlyingInstrument_82);
  FIX::UnderlyingEndValue UnderlyingEndValue_82;
  UnderlyingEndValue_82.setString("11569700");
set_field(msg, UnderlyingEndValue_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingExerciseStyle{447653314}, UnderlyingInstrument_82);
  FIX::UnderlyingFXRate UnderlyingFXRate_82;
  UnderlyingFXRate_82.setString("14637140");
set_field(msg, UnderlyingFXRate_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_82);
  FIX::UnderlyingFactor UnderlyingFactor_82;
  UnderlyingFactor_82.setString("3723750");
set_field(msg, UnderlyingFactor_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingFlowScheduleType{545826535}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_907423792"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1204751928"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_2028267590"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_2059596958"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2083543388"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1654490840"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1987248711"}, UnderlyingInstrument_82);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_82;
  UnderlyingNotionalPercentageOutstanding_82.setString("47.670000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_82);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_82;
  UnderlyingOriginalNotionalPercentageOutstanding_82.setString("47.380000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_59116890"}, UnderlyingInstrument_82);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_82;
  UnderlyingPriceUnitOfMeasureQty_82.setString("11531877");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingProduct{402546870}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingPutOrCall{2107849795}, UnderlyingInstrument_82);
  FIX::UnderlyingPx UnderlyingPx_82;
  UnderlyingPx_82.setString("11192031");
set_field(msg, UnderlyingPx_82, UnderlyingInstrument_82);
  FIX::UnderlyingQty UnderlyingQty_82;
  UnderlyingQty_82.setString("7325699");
set_field(msg, UnderlyingQty_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1871025418"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_818856734"}, UnderlyingInstrument_82);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_82;
  UnderlyingRepurchaseRate_82.setString("86.830000");
set_field(msg, UnderlyingRepurchaseRate_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{1595861980}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_517157328"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_697141755"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_943633870"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_545026912"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_738907677"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_2100603935"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_992680226"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_55138063"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_2085729036"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_82);
  FIX::UnderlyingStartValue UnderlyingStartValue_82;
  UnderlyingStartValue_82.setString("6009645");
set_field(msg, UnderlyingStartValue_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_845669180"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_82);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_82;
  UnderlyingStrikePrice_82.setString("7577824");
set_field(msg, UnderlyingStrikePrice_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_358383317"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_2136239381"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_597547554"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_1415278084"}, UnderlyingInstrument_82);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_82;
  UnderlyingUnitOfMeasureQty_82.setString("16420814");
set_field(msg, UnderlyingUnitOfMeasureQty_82, UnderlyingInstrument_82);
  all_values.push_back(UnderlyingInstrument_82);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_170;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_1474394975"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_170);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_647785541"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_170);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_170);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_171;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_71005514"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_171);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1434761122"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_171);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_171);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_165;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_803575475"}, UnderlyingStipulations_NoUnderlyingStips_165);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_1158302893"}, UnderlyingStipulations_NoUnderlyingStips_165);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_165);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_166;
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipType{"STRING_438361773"}, UnderlyingStipulations_NoUnderlyingStips_166);
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipValue{"STRING_984684158"}, UnderlyingStipulations_NoUnderlyingStips_166);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_166);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::OrderMassCancelRequest::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_167;
    set_field(noUnderlyingStips_0_2, FIX::UnderlyingStipType{"STRING_606681225"}, UnderlyingStipulations_NoUnderlyingStips_167);
    set_field(noUnderlyingStips_0_2, FIX::UnderlyingStipValue{"STRING_955519101"}, UnderlyingStipulations_NoUnderlyingStips_167);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_167);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_177;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_1550315095"}, UndlyInstrumentParties_NoUndlyInstrumentParties_177);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_177);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{273249943}, UndlyInstrumentParties_NoUndlyInstrumentParties_177);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_177);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_345742592"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{328388006}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1441680771"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{1710797888}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358;
      set_field(noUndlyInstrumentPartySubIDs_0_1_2, FIX::UnderlyingInstrumentPartySubID{"STRING_929352604"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358);
      set_field(noUndlyInstrumentPartySubIDs_0_1_2, FIX::UnderlyingInstrumentPartySubIDType{139866303}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  // header
  multiset<string> header_62;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_62);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1411101145"}, header_62);
  set_header_field(msg.getHeader(), FIX::BodyLength{897648793}, header_62);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_344021133"}, header_62);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1399856879"}, header_62);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1495196347"}, header_62);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1759299218"}, header_62);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{894454653}, header_62);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_62);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1086210545}, header_62);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1542240195"}, header_62);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1234660506"}, header_62);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_373488019"}, header_62);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(5, 32, 6, 0, 7, 2002)}, header_62);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_62);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_62);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1908688473"}, header_62);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{683028701}, header_62);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_897255320"}, header_62);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_106947417"}, header_62);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1011416707"}, header_62);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(17, 11, 6, 2, 6, 2008)}, header_62);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2147404255"}, header_62);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_456760040"}, header_62);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_576680239"}, header_62);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1759219825"}, header_62);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1351214693}, header_62);
  all_values.push_back(header_62);
  all_compo_names.insert(".header");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";
  cout << "////////////////////////////////////////////" << endl;
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
