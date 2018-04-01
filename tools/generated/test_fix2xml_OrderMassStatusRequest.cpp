#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderMassStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassStatusRequest_0;
  set_field(msg, FIX::Account{"STRING_417252276"}, OrderMassStatusRequest_0);
  set_field(msg, FIX::AcctIDSource{1}, OrderMassStatusRequest_0);
  set_field(msg, FIX::MassStatusReqID{"STRING_1309754141"}, OrderMassStatusRequest_0);
  set_field(msg, FIX::MassStatusReqType{4}, OrderMassStatusRequest_0);
  set_field(msg, FIX::Side{'8'}, OrderMassStatusRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, OrderMassStatusRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_1"}, OrderMassStatusRequest_0);
  all_values.push_back(OrderMassStatusRequest_0);

  all_compo_names.insert("OrderMassStatusRequest");

  // Instrument
  multiset<string> Instrument_48;
  FIX::AttachmentPoint AttachmentPoint_48;
  AttachmentPoint_48.setString("42.680000");
set_field(msg, AttachmentPoint_48, Instrument_48);
  set_field(msg, FIX::CFICode{"STRING_1960260448"}, Instrument_48);
  set_field(msg, FIX::CPProgram{99}, Instrument_48);
  set_field(msg, FIX::CPRegType{"STRING_854987203"}, Instrument_48);
  FIX::CapPrice CapPrice_48;
  CapPrice_48.setString("11751129");
set_field(msg, CapPrice_48, Instrument_48);
  FIX::ContractMultiplier ContractMultiplier_48;
  ContractMultiplier_48.setString("5978259");
set_field(msg, ContractMultiplier_48, Instrument_48);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_48);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_771922949"}, Instrument_48);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1492962708"}, Instrument_48);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1343322804"}, Instrument_48);
  FIX::CouponRate CouponRate_48;
  CouponRate_48.setString("43.070000");
set_field(msg, CouponRate_48, Instrument_48);
  set_field(msg, FIX::CreditRating{"STRING_296812607"}, Instrument_48);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1329975905"}, Instrument_48);
  FIX::DetachmentPoint DetachmentPoint_48;
  DetachmentPoint_48.setString("1.680000");
set_field(msg, DetachmentPoint_48, Instrument_48);
  set_field(msg, FIX::EncodedIssuer{"DATA_1734674715"}, Instrument_48);
  set_field(msg, FIX::EncodedIssuerLen{891318993}, Instrument_48);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1682560350"}, Instrument_48);
  set_field(msg, FIX::EncodedSecurityDescLen{1428536100}, Instrument_48);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_48);
  FIX::Factor Factor_48;
  Factor_48.setString("3960297");
set_field(msg, Factor_48, Instrument_48);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_48);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_48);
  FIX::FloorPrice FloorPrice_48;
  FloorPrice_48.setString("19471820");
set_field(msg, FloorPrice_48, Instrument_48);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_48);
  set_field(msg, FIX::InstrRegistry{"STRING_24895320"}, Instrument_48);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_48);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_824529667"}, Instrument_48);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_908745163"}, Instrument_48);
  set_field(msg, FIX::Issuer{"STRING_406477062"}, Instrument_48);
  set_field(msg, FIX::ListMethod{1}, Instrument_48);
  set_field(msg, FIX::LocaleOfIssue{"STRING_244531499"}, Instrument_48);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1980571330"}, Instrument_48);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1405334099"}, Instrument_48);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1008145870"}, Instrument_48);
  FIX::MinPriceIncrement MinPriceIncrement_48;
  MinPriceIncrement_48.setString("6880748");
set_field(msg, MinPriceIncrement_48, Instrument_48);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_48;
  MinPriceIncrementAmount_48.setString("4329634");
set_field(msg, MinPriceIncrementAmount_48, Instrument_48);
  set_field(msg, FIX::NTPositionLimit{1605971771}, Instrument_48);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_48;
  NotionalPercentageOutstanding_48.setString("23.730000");
set_field(msg, NotionalPercentageOutstanding_48, Instrument_48);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_48);
  FIX::OptPayoutAmount OptPayoutAmount_48;
  OptPayoutAmount_48.setString("9514508");
set_field(msg, OptPayoutAmount_48, Instrument_48);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_48);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_48;
  OriginalNotionalPercentageOutstanding_48.setString("70.590000");
set_field(msg, OriginalNotionalPercentageOutstanding_48, Instrument_48);
  set_field(msg, FIX::Pool{"STRING_1248263438"}, Instrument_48);
  set_field(msg, FIX::PositionLimit{2126887435}, Instrument_48);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_48);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_835454506"}, Instrument_48);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_48;
  PriceUnitOfMeasureQty_48.setString("8707227");
set_field(msg, PriceUnitOfMeasureQty_48, Instrument_48);
  set_field(msg, FIX::Product{11}, Instrument_48);
  set_field(msg, FIX::ProductComplex{"STRING_116506958"}, Instrument_48);
  set_field(msg, FIX::PutOrCall{1}, Instrument_48);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1896513692"}, Instrument_48);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1286256211"}, Instrument_48);
  FIX::RepurchaseRate RepurchaseRate_48;
  RepurchaseRate_48.setString("69.140000");
set_field(msg, RepurchaseRate_48, Instrument_48);
  set_field(msg, FIX::RepurchaseTerm{1696212074}, Instrument_48);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_48);
  set_field(msg, FIX::SecurityDesc{"STRING_228252234"}, Instrument_48);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_841642728"}, Instrument_48);
  set_field(msg, FIX::SecurityGroup{"STRING_1625561405"}, Instrument_48);
  set_field(msg, FIX::SecurityID{"STRING_1136997397"}, Instrument_48);
  set_field(msg, FIX::SecurityIDSource{"STRING_H"}, Instrument_48);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_48);
  set_field(msg, FIX::SecuritySubType{"STRING_1381528896"}, Instrument_48);
  set_field(msg, FIX::SecurityType{"STRING_OOP"}, Instrument_48);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_48);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_48);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1769282357"}, Instrument_48);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_761448957"}, Instrument_48);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_48);
  FIX::StrikeMultiplier StrikeMultiplier_48;
  StrikeMultiplier_48.setString("19663353");
set_field(msg, StrikeMultiplier_48, Instrument_48);
  FIX::StrikePrice StrikePrice_48;
  StrikePrice_48.setString("6521300");
set_field(msg, StrikePrice_48, Instrument_48);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_48);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_48;
  StrikePriceBoundaryPrecision_48.setString("24.170000");
set_field(msg, StrikePriceBoundaryPrecision_48, Instrument_48);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_48);
  FIX::StrikeValue StrikeValue_48;
  StrikeValue_48.setString("19991863");
set_field(msg, StrikeValue_48, Instrument_48);
  set_field(msg, FIX::Symbol{"STRING_1791805997"}, Instrument_48);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_48);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_48);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_48);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_48);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_48;
  UnitOfMeasureQty_48.setString("13181394");
set_field(msg, UnitOfMeasureQty_48, Instrument_48);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_48);
  all_values.push_back(Instrument_48);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_95;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_95);
    FIX::ComplexEventPrice ComplexEventPrice_95;
    ComplexEventPrice_95.setString("4425647");
set_field(noComplexEvents_0_0, ComplexEventPrice_95, ComplexEvents_NoComplexEvents_95);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_95);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_95;
    ComplexEventPriceBoundaryPrecision_95.setString("85.510000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_95, ComplexEvents_NoComplexEvents_95);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_95);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_95);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_95;
    ComplexOptPayoutAmount_95.setString("7392623");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_95, ComplexEvents_NoComplexEvents_95);
    all_values.push_back(ComplexEvents_NoComplexEvents_95);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_204;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 52, 49, 0, 3, 2008)}, ComplexEventDates_NoComplexEventDates_204);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 36, 44, 0, 10, 2000)}, ComplexEventDates_NoComplexEventDates_204);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_204);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_412;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 43, 25)}, ComplexEventTimes_NoComplexEventTimes_412);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 28, 57)}, ComplexEventTimes_NoComplexEventTimes_412);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_412);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_413;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 46, 18)}, ComplexEventTimes_NoComplexEventTimes_413);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 39, 46)}, ComplexEventTimes_NoComplexEventTimes_413);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_413);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_205;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 31, 27, 21, 10, 2006)}, ComplexEventDates_NoComplexEventDates_205);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 34, 43, 14, 12, 2013)}, ComplexEventDates_NoComplexEventDates_205);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_205);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_414;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 56, 22)}, ComplexEventTimes_NoComplexEventTimes_414);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 50, 57)}, ComplexEventTimes_NoComplexEventTimes_414);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_414);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_206;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 35, 18, 21, 1, 2009)}, ComplexEventDates_NoComplexEventDates_206);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 18, 47, 6, 8, 2006)}, ComplexEventDates_NoComplexEventDates_206);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_206);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_415;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 46, 50)}, ComplexEventTimes_NoComplexEventTimes_415);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 21, 37)}, ComplexEventTimes_NoComplexEventTimes_415);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_415);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_96;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_96);
    FIX::ComplexEventPrice ComplexEventPrice_96;
    ComplexEventPrice_96.setString("5315448");
set_field(noComplexEvents_0_1, ComplexEventPrice_96, ComplexEvents_NoComplexEvents_96);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_96);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_96;
    ComplexEventPriceBoundaryPrecision_96.setString("33.480000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_96, ComplexEvents_NoComplexEvents_96);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_96);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_96);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_96;
    ComplexOptPayoutAmount_96.setString("1541763");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_96, ComplexEvents_NoComplexEvents_96);
    all_values.push_back(ComplexEvents_NoComplexEvents_96);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_207;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 3, 26, 6, 4, 2016)}, ComplexEventDates_NoComplexEventDates_207);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 26, 41, 11, 10, 2017)}, ComplexEventDates_NoComplexEventDates_207);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_207);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_416;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 37, 21)}, ComplexEventTimes_NoComplexEventTimes_416);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 35, 51)}, ComplexEventTimes_NoComplexEventTimes_416);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_416);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_417;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 17, 20)}, ComplexEventTimes_NoComplexEventTimes_417);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 10, 48)}, ComplexEventTimes_NoComplexEventTimes_417);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_417);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_418;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 43, 35)}, ComplexEventTimes_NoComplexEventTimes_418);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 43, 44)}, ComplexEventTimes_NoComplexEventTimes_418);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_418);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_97;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_97);
    FIX::ComplexEventPrice ComplexEventPrice_97;
    ComplexEventPrice_97.setString("2348980");
set_field(noComplexEvents_0_2, ComplexEventPrice_97, ComplexEvents_NoComplexEvents_97);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_97);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_97;
    ComplexEventPriceBoundaryPrecision_97.setString("39.790000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_97, ComplexEvents_NoComplexEvents_97);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_97);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_97);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_97;
    ComplexOptPayoutAmount_97.setString("12877282");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_97, ComplexEvents_NoComplexEvents_97);
    all_values.push_back(ComplexEvents_NoComplexEvents_97);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_208;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 19, 25, 22, 11, 2008)}, ComplexEventDates_NoComplexEventDates_208);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 25, 11, 12, 11, 2014)}, ComplexEventDates_NoComplexEventDates_208);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_208);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_419;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 19, 9)}, ComplexEventTimes_NoComplexEventTimes_419);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 44, 44)}, ComplexEventTimes_NoComplexEventTimes_419);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_419);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_420;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 54, 0)}, ComplexEventTimes_NoComplexEventTimes_420);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 50, 9)}, ComplexEventTimes_NoComplexEventTimes_420);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_420);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_421;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 20, 25)}, ComplexEventTimes_NoComplexEventTimes_421);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 33, 32)}, ComplexEventTimes_NoComplexEventTimes_421);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_421);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_99;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1992853919"}, EvntGrp_NoEvents_99);
    FIX::EventPx EventPx_99;
    EventPx_99.setString("1776286");
set_field(noEvents_0_0, EventPx_99, EvntGrp_NoEvents_99);
    set_field(noEvents_0_0, FIX::EventText{"STRING_982237666"}, EvntGrp_NoEvents_99);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(13, 31, 59, 3, 3, 2015)}, EvntGrp_NoEvents_99);
    set_field(noEvents_0_0, FIX::EventType{7}, EvntGrp_NoEvents_99);
    all_values.push_back(EvntGrp_NoEvents_99);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_100;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_817912060"}, EvntGrp_NoEvents_100);
    FIX::EventPx EventPx_100;
    EventPx_100.setString("16523488");
set_field(noEvents_0_1, EventPx_100, EvntGrp_NoEvents_100);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1409577342"}, EvntGrp_NoEvents_100);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(15, 36, 41, 14, 11, 2011)}, EvntGrp_NoEvents_100);
    set_field(noEvents_0_1, FIX::EventType{12}, EvntGrp_NoEvents_100);
    all_values.push_back(EvntGrp_NoEvents_100);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_101;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1414560154"}, EvntGrp_NoEvents_101);
    FIX::EventPx EventPx_101;
    EventPx_101.setString("5880310");
set_field(noEvents_0_2, EventPx_101, EvntGrp_NoEvents_101);
    set_field(noEvents_0_2, FIX::EventText{"STRING_2102961251"}, EvntGrp_NoEvents_101);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(19, 9, 32, 27, 4, 2017)}, EvntGrp_NoEvents_101);
    set_field(noEvents_0_2, FIX::EventType{15}, EvntGrp_NoEvents_101);
    all_values.push_back(EvntGrp_NoEvents_101);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_90;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1076508760"}, InstrumentParties_NoInstrumentParties_90);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_90);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1223554621}, InstrumentParties_NoInstrumentParties_90);
    all_values.push_back(InstrumentParties_NoInstrumentParties_90);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_11983975"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{924727483}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1106272361"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1774503901}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_91;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1742639543"}, InstrumentParties_NoInstrumentParties_91);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_91);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1036597596}, InstrumentParties_NoInstrumentParties_91);
    all_values.push_back(InstrumentParties_NoInstrumentParties_91);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_474211257"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{659075104}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_184353217"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{794035000}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_92;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_501961410"}, InstrumentParties_NoInstrumentParties_92);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_92);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{4864283}, InstrumentParties_NoInstrumentParties_92);
    all_values.push_back(InstrumentParties_NoInstrumentParties_92);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1121678127"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{2107825535}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_1385761495"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{1507043554}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_100;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1117930880"}, SecAltIDGrp_NoSecurityAltID_100);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_129540305"}, SecAltIDGrp_NoSecurityAltID_100);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_100);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_96;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1331421088"}, SecurityXML_96);
  set_field(msg, FIX::SecurityXMLLen{695470535}, SecurityXML_96);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1077149359"}, SecurityXML_96);
  all_values.push_back(SecurityXML_96);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_89;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1771979296"}, Parties_NoPartyIDs_89);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_89);
    set_field(noPartyIDs_0_0, FIX::PartyRole{25}, Parties_NoPartyIDs_89);
    all_values.push_back(Parties_NoPartyIDs_89);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_180;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1367294170"}, PtysSubGrp_NoPartySubIDs_180);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_180);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_180);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_90;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_308001861"}, Parties_NoPartyIDs_90);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_90);
    set_field(noPartyIDs_0_1, FIX::PartyRole{52}, Parties_NoPartyIDs_90);
    all_values.push_back(Parties_NoPartyIDs_90);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_181;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_2030912020"}, PtysSubGrp_NoPartySubIDs_181);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_181);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_181);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_182;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1393350705"}, PtysSubGrp_NoPartySubIDs_182);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_182);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_182);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_183;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_92718264"}, PtysSubGrp_NoPartySubIDs_183);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_183);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_183);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_11;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_626365345"}, TargetParties_NoTargetPartyIDs_11);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'4'}, TargetParties_NoTargetPartyIDs_11);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{813502803}, TargetParties_NoTargetPartyIDs_11);
    all_values.push_back(TargetParties_NoTargetPartyIDs_11);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_12;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_1748043472"}, TargetParties_NoTargetPartyIDs_12);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'5'}, TargetParties_NoTargetPartyIDs_12);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{51780651}, TargetParties_NoTargetPartyIDs_12);
    all_values.push_back(TargetParties_NoTargetPartyIDs_12);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_84;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_1107603378"}, UnderlyingInstrument_84);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{775231424}, UnderlyingInstrument_84);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_1169711531"}, UnderlyingInstrument_84);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{1237143683}, UnderlyingInstrument_84);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_84;
  UnderlyingAdjustedQuantity_84.setString("21066525");
set_field(msg, UnderlyingAdjustedQuantity_84, UnderlyingInstrument_84);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_84;
  UnderlyingAllocationPercent_84.setString("20.660000");
set_field(msg, UnderlyingAllocationPercent_84, UnderlyingInstrument_84);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_84;
  UnderlyingAttachmentPoint_84.setString("93.940000");
set_field(msg, UnderlyingAttachmentPoint_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_686641862"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_1489677714"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1522119590"}, UnderlyingInstrument_84);
  FIX::UnderlyingCapValue UnderlyingCapValue_84;
  UnderlyingCapValue_84.setString("4901858");
set_field(msg, UnderlyingCapValue_84, UnderlyingInstrument_84);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_84;
  UnderlyingCashAmount_84.setString("6914072");
set_field(msg, UnderlyingCashAmount_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_84);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_84;
  UnderlyingContractMultiplier_84.setString("12184572");
set_field(msg, UnderlyingContractMultiplier_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{999409075}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_1736244536"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1541884637"}, UnderlyingInstrument_84);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_84;
  UnderlyingCouponRate_84.setString("85.230000");
set_field(msg, UnderlyingCouponRate_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_1619672908"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_84);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_84;
  UnderlyingCurrentValue_84.setString("146927");
set_field(msg, UnderlyingCurrentValue_84, UnderlyingInstrument_84);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_84;
  UnderlyingDetachmentPoint_84.setString("79.480000");
set_field(msg, UnderlyingDetachmentPoint_84, UnderlyingInstrument_84);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_84;
  UnderlyingDirtyPrice_84.setString("12043176");
set_field(msg, UnderlyingDirtyPrice_84, UnderlyingInstrument_84);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_84;
  UnderlyingEndPrice_84.setString("10591576");
set_field(msg, UnderlyingEndPrice_84, UnderlyingInstrument_84);
  FIX::UnderlyingEndValue UnderlyingEndValue_84;
  UnderlyingEndValue_84.setString("218496");
set_field(msg, UnderlyingEndValue_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingExerciseStyle{1249083977}, UnderlyingInstrument_84);
  FIX::UnderlyingFXRate UnderlyingFXRate_84;
  UnderlyingFXRate_84.setString("18726604");
set_field(msg, UnderlyingFXRate_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_84);
  FIX::UnderlyingFactor UnderlyingFactor_84;
  UnderlyingFactor_84.setString("12541922");
set_field(msg, UnderlyingFactor_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingFlowScheduleType{1924441078}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_730012847"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2029423629"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_946668961"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_1967156530"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1988592493"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_664367380"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2133965924"}, UnderlyingInstrument_84);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_84;
  UnderlyingNotionalPercentageOutstanding_84.setString("7.070000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingOptAttribute{'6'}, UnderlyingInstrument_84);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_84;
  UnderlyingOriginalNotionalPercentageOutstanding_84.setString("18.660000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1017936540"}, UnderlyingInstrument_84);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_84;
  UnderlyingPriceUnitOfMeasureQty_84.setString("6979686");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingProduct{103048331}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingPutOrCall{88910179}, UnderlyingInstrument_84);
  FIX::UnderlyingPx UnderlyingPx_84;
  UnderlyingPx_84.setString("16973777");
set_field(msg, UnderlyingPx_84, UnderlyingInstrument_84);
  FIX::UnderlyingQty UnderlyingQty_84;
  UnderlyingQty_84.setString("18392928");
set_field(msg, UnderlyingQty_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1630794817"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1468442611"}, UnderlyingInstrument_84);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_84;
  UnderlyingRepurchaseRate_84.setString("21.280000");
set_field(msg, UnderlyingRepurchaseRate_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{933560853}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_485374543"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_1326174865"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_329045153"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_1689692180"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_237848841"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_350894798"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_791292510"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_2110509268"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_2120787915"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_84);
  FIX::UnderlyingStartValue UnderlyingStartValue_84;
  UnderlyingStartValue_84.setString("18874666");
set_field(msg, UnderlyingStartValue_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_703317114"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_84);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_84;
  UnderlyingStrikePrice_84.setString("5229899");
set_field(msg, UnderlyingStrikePrice_84, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_1768533541"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_1351019392"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_509472272"}, UnderlyingInstrument_84);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_148800600"}, UnderlyingInstrument_84);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_84;
  UnderlyingUnitOfMeasureQty_84.setString("13575808");
set_field(msg, UnderlyingUnitOfMeasureQty_84, UnderlyingInstrument_84);
  all_values.push_back(UnderlyingInstrument_84);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_179;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_1166737140"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_179);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2055549500"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_179);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_179);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_180;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_2121122470"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_180);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1255647319"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_180);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_180);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_181;
    set_field(noUnderlyingSecurityAltID_0_2, FIX::UnderlyingSecurityAltID{"STRING_1605443588"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_181);
    set_field(noUnderlyingSecurityAltID_0_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1812931689"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_181);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_181);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_169;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_926402552"}, UnderlyingStipulations_NoUnderlyingStips_169);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_976930169"}, UnderlyingStipulations_NoUnderlyingStips_169);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_169);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_172;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_1411777095"}, UndlyInstrumentParties_NoUndlyInstrumentParties_172);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_172);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{2001564494}, UndlyInstrumentParties_NoUndlyInstrumentParties_172);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_172);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_393470227"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{204975644}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1745278138"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{356495848}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
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
