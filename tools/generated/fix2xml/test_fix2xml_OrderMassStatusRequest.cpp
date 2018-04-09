#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::OrderMassStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassStatusRequest_0;
  set_field(msg, FIX::Account{"STRING_1740335231"}, OrderMassStatusRequest_0);
  set_field(msg, FIX::AcctIDSource{5}, OrderMassStatusRequest_0);
  set_field(msg, FIX::MassStatusReqID{"STRING_745971240"}, OrderMassStatusRequest_0);
  set_field(msg, FIX::MassStatusReqType{10}, OrderMassStatusRequest_0);
  set_field(msg, FIX::Side{'7'}, OrderMassStatusRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_5"}, OrderMassStatusRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_2"}, OrderMassStatusRequest_0);
  all_values.push_back(OrderMassStatusRequest_0);

  all_compo_names.insert("OrderMassStatusRequest");

  // Instrument
  multiset<string> Instrument_61;
  FIX::AttachmentPoint AttachmentPoint_61;
  AttachmentPoint_61.setString("20.060000");
set_field(msg, AttachmentPoint_61, Instrument_61);
  set_field(msg, FIX::CFICode{"STRING_1360339832"}, Instrument_61);
  set_field(msg, FIX::CPProgram{1}, Instrument_61);
  set_field(msg, FIX::CPRegType{"STRING_446730496"}, Instrument_61);
  FIX::CapPrice CapPrice_61;
  CapPrice_61.setString("17684822");
set_field(msg, CapPrice_61, Instrument_61);
  FIX::ContractMultiplier ContractMultiplier_61;
  ContractMultiplier_61.setString("20034796");
set_field(msg, ContractMultiplier_61, Instrument_61);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_61);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1529687118"}, Instrument_61);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_539024725"}, Instrument_61);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_737805754"}, Instrument_61);
  FIX::CouponRate CouponRate_61;
  CouponRate_61.setString("45.350000");
set_field(msg, CouponRate_61, Instrument_61);
  set_field(msg, FIX::CreditRating{"STRING_1550441432"}, Instrument_61);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_929258198"}, Instrument_61);
  FIX::DetachmentPoint DetachmentPoint_61;
  DetachmentPoint_61.setString("61.930000");
set_field(msg, DetachmentPoint_61, Instrument_61);
  set_field(msg, FIX::EncodedIssuer{"DATA_1343727096"}, Instrument_61);
  set_field(msg, FIX::EncodedIssuerLen{1260576944}, Instrument_61);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_962795667"}, Instrument_61);
  set_field(msg, FIX::EncodedSecurityDescLen{400630257}, Instrument_61);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_61);
  FIX::Factor Factor_61;
  Factor_61.setString("9627162");
set_field(msg, Factor_61, Instrument_61);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_61);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_61);
  FIX::FloorPrice FloorPrice_61;
  FloorPrice_61.setString("5744524");
set_field(msg, FloorPrice_61, Instrument_61);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_61);
  set_field(msg, FIX::InstrRegistry{"STRING_511592659"}, Instrument_61);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_61);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_807092583"}, Instrument_61);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1339104748"}, Instrument_61);
  set_field(msg, FIX::Issuer{"STRING_196350268"}, Instrument_61);
  set_field(msg, FIX::ListMethod{1}, Instrument_61);
  set_field(msg, FIX::LocaleOfIssue{"STRING_2057369170"}, Instrument_61);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_652092275"}, Instrument_61);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1927665241"}, Instrument_61);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1503586437"}, Instrument_61);
  FIX::MinPriceIncrement MinPriceIncrement_61;
  MinPriceIncrement_61.setString("10988227");
set_field(msg, MinPriceIncrement_61, Instrument_61);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_61;
  MinPriceIncrementAmount_61.setString("15486638");
set_field(msg, MinPriceIncrementAmount_61, Instrument_61);
  set_field(msg, FIX::NTPositionLimit{1359582461}, Instrument_61);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_61;
  NotionalPercentageOutstanding_61.setString("32.050000");
set_field(msg, NotionalPercentageOutstanding_61, Instrument_61);
  set_field(msg, FIX::OptAttribute{'9'}, Instrument_61);
  FIX::OptPayoutAmount OptPayoutAmount_61;
  OptPayoutAmount_61.setString("18986071");
set_field(msg, OptPayoutAmount_61, Instrument_61);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_61);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_61;
  OriginalNotionalPercentageOutstanding_61.setString("82.430000");
set_field(msg, OriginalNotionalPercentageOutstanding_61, Instrument_61);
  set_field(msg, FIX::Pool{"STRING_1301564971"}, Instrument_61);
  set_field(msg, FIX::PositionLimit{458953510}, Instrument_61);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_61);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_497808419"}, Instrument_61);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_61;
  PriceUnitOfMeasureQty_61.setString("17195304");
set_field(msg, PriceUnitOfMeasureQty_61, Instrument_61);
  set_field(msg, FIX::Product{5}, Instrument_61);
  set_field(msg, FIX::ProductComplex{"STRING_898438676"}, Instrument_61);
  set_field(msg, FIX::PutOrCall{1}, Instrument_61);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1504942730"}, Instrument_61);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1755828973"}, Instrument_61);
  FIX::RepurchaseRate RepurchaseRate_61;
  RepurchaseRate_61.setString("87.190000");
set_field(msg, RepurchaseRate_61, Instrument_61);
  set_field(msg, FIX::RepurchaseTerm{2079395182}, Instrument_61);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_61);
  set_field(msg, FIX::SecurityDesc{"STRING_1344441378"}, Instrument_61);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1204310708"}, Instrument_61);
  set_field(msg, FIX::SecurityGroup{"STRING_476559251"}, Instrument_61);
  set_field(msg, FIX::SecurityID{"STRING_536062478"}, Instrument_61);
  set_field(msg, FIX::SecurityIDSource{"STRING_2"}, Instrument_61);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_61);
  set_field(msg, FIX::SecuritySubType{"STRING_445948000"}, Instrument_61);
  set_field(msg, FIX::SecurityType{"STRING_UST"}, Instrument_61);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_61);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_61);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1004092375"}, Instrument_61);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_225246491"}, Instrument_61);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_61);
  FIX::StrikeMultiplier StrikeMultiplier_61;
  StrikeMultiplier_61.setString("11561138");
set_field(msg, StrikeMultiplier_61, Instrument_61);
  FIX::StrikePrice StrikePrice_61;
  StrikePrice_61.setString("9127567");
set_field(msg, StrikePrice_61, Instrument_61);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_61);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_61;
  StrikePriceBoundaryPrecision_61.setString("20.910000");
set_field(msg, StrikePriceBoundaryPrecision_61, Instrument_61);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_61);
  FIX::StrikeValue StrikeValue_61;
  StrikeValue_61.setString("19321144");
set_field(msg, StrikeValue_61, Instrument_61);
  set_field(msg, FIX::Symbol{"STRING_1155562879"}, Instrument_61);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_61);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_61);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_61);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_61);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_61;
  UnitOfMeasureQty_61.setString("14182688");
set_field(msg, UnitOfMeasureQty_61, Instrument_61);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_61);
  all_values.push_back(Instrument_61);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_120;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_120);
    FIX::ComplexEventPrice ComplexEventPrice_120;
    ComplexEventPrice_120.setString("9871599");
set_field(noComplexEvents_0_0, ComplexEventPrice_120, ComplexEvents_NoComplexEvents_120);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_120);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_120;
    ComplexEventPriceBoundaryPrecision_120.setString("53.010000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_120, ComplexEvents_NoComplexEvents_120);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_120);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_120);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_120;
    ComplexOptPayoutAmount_120.setString("19841377");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_120, ComplexEvents_NoComplexEvents_120);
    all_values.push_back(ComplexEvents_NoComplexEvents_120);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_234;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 32, 59, 17, 9, 2005)}, ComplexEventDates_NoComplexEventDates_234);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 10, 14, 14, 10, 2012)}, ComplexEventDates_NoComplexEventDates_234);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_234);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_478;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 42, 20)}, ComplexEventTimes_NoComplexEventTimes_478);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 57, 17)}, ComplexEventTimes_NoComplexEventTimes_478);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_478);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_235;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 0, 12, 27, 11, 2003)}, ComplexEventDates_NoComplexEventDates_235);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 35, 24, 24, 2, 2008)}, ComplexEventDates_NoComplexEventDates_235);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_235);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_479;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 25, 56)}, ComplexEventTimes_NoComplexEventTimes_479);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 44, 56)}, ComplexEventTimes_NoComplexEventTimes_479);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_479);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_121;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_121);
    FIX::ComplexEventPrice ComplexEventPrice_121;
    ComplexEventPrice_121.setString("14751843");
set_field(noComplexEvents_0_1, ComplexEventPrice_121, ComplexEvents_NoComplexEvents_121);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_121);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_121;
    ComplexEventPriceBoundaryPrecision_121.setString("22.320000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_121, ComplexEvents_NoComplexEvents_121);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_121);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_121);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_121;
    ComplexOptPayoutAmount_121.setString("9570744");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_121, ComplexEvents_NoComplexEvents_121);
    all_values.push_back(ComplexEvents_NoComplexEvents_121);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_236;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 57, 20, 16, 1, 2016)}, ComplexEventDates_NoComplexEventDates_236);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 43, 49, 4, 9, 2007)}, ComplexEventDates_NoComplexEventDates_236);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_236);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_480;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 25, 50)}, ComplexEventTimes_NoComplexEventTimes_480);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 34, 47)}, ComplexEventTimes_NoComplexEventTimes_480);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_480);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_481;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 18, 32)}, ComplexEventTimes_NoComplexEventTimes_481);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 53, 7)}, ComplexEventTimes_NoComplexEventTimes_481);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_481);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_482;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 57, 57)}, ComplexEventTimes_NoComplexEventTimes_482);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 13, 35)}, ComplexEventTimes_NoComplexEventTimes_482);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_482);
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
    multiset<string> ComplexEvents_NoComplexEvents_122;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_122);
    FIX::ComplexEventPrice ComplexEventPrice_122;
    ComplexEventPrice_122.setString("20626384");
set_field(noComplexEvents_0_2, ComplexEventPrice_122, ComplexEvents_NoComplexEvents_122);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_122);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_122;
    ComplexEventPriceBoundaryPrecision_122.setString("52.380000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_122, ComplexEvents_NoComplexEvents_122);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_122);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_122);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_122;
    ComplexOptPayoutAmount_122.setString("6564804");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_122, ComplexEvents_NoComplexEvents_122);
    all_values.push_back(ComplexEvents_NoComplexEvents_122);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_237;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 45, 47, 26, 12, 2008)}, ComplexEventDates_NoComplexEventDates_237);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 36, 50, 24, 5, 2005)}, ComplexEventDates_NoComplexEventDates_237);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_237);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_483;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 49, 29)}, ComplexEventTimes_NoComplexEventTimes_483);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 34, 59)}, ComplexEventTimes_NoComplexEventTimes_483);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_483);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_484;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 7, 17)}, ComplexEventTimes_NoComplexEventTimes_484);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 15, 27)}, ComplexEventTimes_NoComplexEventTimes_484);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_484);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
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
    multiset<string> EvntGrp_NoEvents_128;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_532626629"}, EvntGrp_NoEvents_128);
    FIX::EventPx EventPx_128;
    EventPx_128.setString("19850312");
set_field(noEvents_0_0, EventPx_128, EvntGrp_NoEvents_128);
    set_field(noEvents_0_0, FIX::EventText{"STRING_17773216"}, EvntGrp_NoEvents_128);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(15, 42, 58, 21, 11, 2017)}, EvntGrp_NoEvents_128);
    set_field(noEvents_0_0, FIX::EventType{2}, EvntGrp_NoEvents_128);
    all_values.push_back(EvntGrp_NoEvents_128);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_129;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1049883914"}, EvntGrp_NoEvents_129);
    FIX::EventPx EventPx_129;
    EventPx_129.setString("3302985");
set_field(noEvents_0_1, EventPx_129, EvntGrp_NoEvents_129);
    set_field(noEvents_0_1, FIX::EventText{"STRING_142842505"}, EvntGrp_NoEvents_129);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(10, 14, 16, 10, 9, 2014)}, EvntGrp_NoEvents_129);
    set_field(noEvents_0_1, FIX::EventType{18}, EvntGrp_NoEvents_129);
    all_values.push_back(EvntGrp_NoEvents_129);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_117;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_188988013"}, InstrumentParties_NoInstrumentParties_117);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_117);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1866263705}, InstrumentParties_NoInstrumentParties_117);
    all_values.push_back(InstrumentParties_NoInstrumentParties_117);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1891353932"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{420360432}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_124;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_454972321"}, SecAltIDGrp_NoSecurityAltID_124);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_952987062"}, SecAltIDGrp_NoSecurityAltID_124);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_124);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_125;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_775323488"}, SecAltIDGrp_NoSecurityAltID_125);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_472745537"}, SecAltIDGrp_NoSecurityAltID_125);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_125);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_122;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1171888822"}, SecurityXML_122);
  set_field(msg, FIX::SecurityXMLLen{1001680583}, SecurityXML_122);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1660018199"}, SecurityXML_122);
  all_values.push_back(SecurityXML_122);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_103;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_638871372"}, Parties_NoPartyIDs_103);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_103);
    set_field(noPartyIDs_0_0, FIX::PartyRole{55}, Parties_NoPartyIDs_103);
    all_values.push_back(Parties_NoPartyIDs_103);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_206;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_646376415"}, PtysSubGrp_NoPartySubIDs_206);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_206);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_206);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_207;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_285592391"}, PtysSubGrp_NoPartySubIDs_207);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_207);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_207);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassStatusRequest::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_11;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_1779587006"}, TargetParties_NoTargetPartyIDs_11);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'5'}, TargetParties_NoTargetPartyIDs_11);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{902757602}, TargetParties_NoTargetPartyIDs_11);
    all_values.push_back(TargetParties_NoTargetPartyIDs_11);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_83;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_1822812466"}, UnderlyingInstrument_83);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{680032448}, UnderlyingInstrument_83);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_1176946959"}, UnderlyingInstrument_83);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{1496492606}, UnderlyingInstrument_83);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_83;
  UnderlyingAdjustedQuantity_83.setString("8690204");
set_field(msg, UnderlyingAdjustedQuantity_83, UnderlyingInstrument_83);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_83;
  UnderlyingAllocationPercent_83.setString("28.230000");
set_field(msg, UnderlyingAllocationPercent_83, UnderlyingInstrument_83);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_83;
  UnderlyingAttachmentPoint_83.setString("26.640000");
set_field(msg, UnderlyingAttachmentPoint_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_516251039"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_1234743107"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1635633096"}, UnderlyingInstrument_83);
  FIX::UnderlyingCapValue UnderlyingCapValue_83;
  UnderlyingCapValue_83.setString("14540269");
set_field(msg, UnderlyingCapValue_83, UnderlyingInstrument_83);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_83;
  UnderlyingCashAmount_83.setString("16897154");
set_field(msg, UnderlyingCashAmount_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_83);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_83;
  UnderlyingContractMultiplier_83.setString("818667");
set_field(msg, UnderlyingContractMultiplier_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{14977318}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_1613025332"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1083547348"}, UnderlyingInstrument_83);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_83;
  UnderlyingCouponRate_83.setString("55.180000");
set_field(msg, UnderlyingCouponRate_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_1834511085"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_83);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_83;
  UnderlyingCurrentValue_83.setString("8237012");
set_field(msg, UnderlyingCurrentValue_83, UnderlyingInstrument_83);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_83;
  UnderlyingDetachmentPoint_83.setString("86.060000");
set_field(msg, UnderlyingDetachmentPoint_83, UnderlyingInstrument_83);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_83;
  UnderlyingDirtyPrice_83.setString("19178644");
set_field(msg, UnderlyingDirtyPrice_83, UnderlyingInstrument_83);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_83;
  UnderlyingEndPrice_83.setString("1431898");
set_field(msg, UnderlyingEndPrice_83, UnderlyingInstrument_83);
  FIX::UnderlyingEndValue UnderlyingEndValue_83;
  UnderlyingEndValue_83.setString("32773");
set_field(msg, UnderlyingEndValue_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingExerciseStyle{245324589}, UnderlyingInstrument_83);
  FIX::UnderlyingFXRate UnderlyingFXRate_83;
  UnderlyingFXRate_83.setString("634070");
set_field(msg, UnderlyingFXRate_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_83);
  FIX::UnderlyingFactor UnderlyingFactor_83;
  UnderlyingFactor_83.setString("7657164");
set_field(msg, UnderlyingFactor_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingFlowScheduleType{966164682}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_1458193174"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1445748875"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_2143111641"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_807202133"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_167285689"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1486500816"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2022474797"}, UnderlyingInstrument_83);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_83;
  UnderlyingNotionalPercentageOutstanding_83.setString("67.290000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_83);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_83;
  UnderlyingOriginalNotionalPercentageOutstanding_83.setString("42.450000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2137563653"}, UnderlyingInstrument_83);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_83;
  UnderlyingPriceUnitOfMeasureQty_83.setString("1159920");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingProduct{1951760756}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingPutOrCall{71946769}, UnderlyingInstrument_83);
  FIX::UnderlyingPx UnderlyingPx_83;
  UnderlyingPx_83.setString("1309693");
set_field(msg, UnderlyingPx_83, UnderlyingInstrument_83);
  FIX::UnderlyingQty UnderlyingQty_83;
  UnderlyingQty_83.setString("14173024");
set_field(msg, UnderlyingQty_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1155494117"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1805964893"}, UnderlyingInstrument_83);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_83;
  UnderlyingRepurchaseRate_83.setString("98.770000");
set_field(msg, UnderlyingRepurchaseRate_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{730429190}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_929969265"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_1928031088"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_448114148"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_700350052"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_2071220932"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_451391498"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_945674641"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_2134628013"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_86772206"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_83);
  FIX::UnderlyingStartValue UnderlyingStartValue_83;
  UnderlyingStartValue_83.setString("9533090");
set_field(msg, UnderlyingStartValue_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1544965381"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_83);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_83;
  UnderlyingStrikePrice_83.setString("2046838");
set_field(msg, UnderlyingStrikePrice_83, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_1176941985"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_287954209"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_79675015"}, UnderlyingInstrument_83);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_1860478714"}, UnderlyingInstrument_83);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_83;
  UnderlyingUnitOfMeasureQty_83.setString("8617144");
set_field(msg, UnderlyingUnitOfMeasureQty_83, UnderlyingInstrument_83);
  all_values.push_back(UnderlyingInstrument_83);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_172;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_1850558719"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_172);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_977706542"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_172);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_172);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_173;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_1394576368"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_173);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1922505488"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_173);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_173);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_168;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_664395161"}, UnderlyingStipulations_NoUnderlyingStips_168);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_930515958"}, UnderlyingStipulations_NoUnderlyingStips_168);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_168);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_169;
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipType{"STRING_767157163"}, UnderlyingStipulations_NoUnderlyingStips_169);
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipValue{"STRING_1768725038"}, UnderlyingStipulations_NoUnderlyingStips_169);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_169);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_178;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_1697126428"}, UndlyInstrumentParties_NoUndlyInstrumentParties_178);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_178);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{2109059296}, UndlyInstrumentParties_NoUndlyInstrumentParties_178);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_178);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1473009763"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{412967147}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_179;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_1195667473"}, UndlyInstrumentParties_NoUndlyInstrumentParties_179);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_179);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{499739353}, UndlyInstrumentParties_NoUndlyInstrumentParties_179);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_179);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_265979527"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{2044704734}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_180;
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyID{"STRING_1769231189"}, UndlyInstrumentParties_NoUndlyInstrumentParties_180);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_180);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyRole{101904952}, UndlyInstrumentParties_NoUndlyInstrumentParties_180);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_180);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassStatusRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361;
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1502870778"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361);
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubIDType{181579967}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
  }
  // header
  multiset<string> header_63;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_63);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_217101615"}, header_63);
  set_header_field(msg.getHeader(), FIX::BodyLength{1771879228}, header_63);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_214759663"}, header_63);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1194808158"}, header_63);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1018971948"}, header_63);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_2137265151"}, header_63);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{156000428}, header_63);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_63);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{920297461}, header_63);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_923157591"}, header_63);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1304608500"}, header_63);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_433758961"}, header_63);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(2, 10, 24, 1, 10, 2014)}, header_63);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_63);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_63);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_530551923"}, header_63);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1758057101}, header_63);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1205262197"}, header_63);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_152299464"}, header_63);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_825490021"}, header_63);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(6, 11, 57, 6, 4, 2017)}, header_63);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1677433245"}, header_63);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1592786925"}, header_63);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_2132114645"}, header_63);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1667214749"}, header_63);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1748787353}, header_63);
  all_values.push_back(header_63);
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
