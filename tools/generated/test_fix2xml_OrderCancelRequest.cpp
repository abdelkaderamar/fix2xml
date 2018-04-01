#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelRequest_0;
  set_field(msg, FIX::Account{"STRING_1199702849"}, OrderCancelRequest_0);
  set_field(msg, FIX::AccountType{8}, OrderCancelRequest_0);
  set_field(msg, FIX::AcctIDSource{1}, OrderCancelRequest_0);
  set_field(msg, FIX::ClOrdID{"STRING_301076136"}, OrderCancelRequest_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_1236297365"}, OrderCancelRequest_0);
  set_field(msg, FIX::ComplianceID{"STRING_599618889"}, OrderCancelRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1236475404"}, OrderCancelRequest_0);
  set_field(msg, FIX::EncodedTextLen{2126161567}, OrderCancelRequest_0);
  set_field(msg, FIX::ListID{"STRING_38957113"}, OrderCancelRequest_0);
  set_field(msg, FIX::OrderID{"STRING_501345670"}, OrderCancelRequest_0);
  set_field(msg, FIX::OrigClOrdID{"STRING_1147639725"}, OrderCancelRequest_0);
  set_field(msg, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(8, 46, 51, 15, 9, 2012)}, OrderCancelRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_621917308"}, OrderCancelRequest_0);
  set_field(msg, FIX::Side{'2'}, OrderCancelRequest_0);
  set_field(msg, FIX::Text{"STRING_1485790089"}, OrderCancelRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(15, 42, 45, 5, 7, 2002)}, OrderCancelRequest_0);
  all_values.push_back(OrderCancelRequest_0);

  all_compo_names.insert("OrderCancelRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_14;
  set_field(msg, FIX::AgreementCurrency{"JPY"}, FinancingDetails_14);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1020699809"}, FinancingDetails_14);
  set_field(msg, FIX::AgreementDesc{"STRING_1540844987"}, FinancingDetails_14);
  set_field(msg, FIX::AgreementID{"STRING_1419220325"}, FinancingDetails_14);
  set_field(msg, FIX::DeliveryType{3}, FinancingDetails_14);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1841921123"}, FinancingDetails_14);
  FIX::MarginRatio MarginRatio_14;
  MarginRatio_14.setString("40.430000");
set_field(msg, MarginRatio_14, FinancingDetails_14);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_971140068"}, FinancingDetails_14);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_14);
  all_values.push_back(FinancingDetails_14);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_43;
  FIX::AttachmentPoint AttachmentPoint_43;
  AttachmentPoint_43.setString("19.620000");
set_field(msg, AttachmentPoint_43, Instrument_43);
  set_field(msg, FIX::CFICode{"STRING_1010097182"}, Instrument_43);
  set_field(msg, FIX::CPProgram{99}, Instrument_43);
  set_field(msg, FIX::CPRegType{"STRING_1634351688"}, Instrument_43);
  FIX::CapPrice CapPrice_43;
  CapPrice_43.setString("12249421");
set_field(msg, CapPrice_43, Instrument_43);
  FIX::ContractMultiplier ContractMultiplier_43;
  ContractMultiplier_43.setString("6126141");
set_field(msg, ContractMultiplier_43, Instrument_43);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_43);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_778181080"}, Instrument_43);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1459124218"}, Instrument_43);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_953239510"}, Instrument_43);
  FIX::CouponRate CouponRate_43;
  CouponRate_43.setString("50.240000");
set_field(msg, CouponRate_43, Instrument_43);
  set_field(msg, FIX::CreditRating{"STRING_2081041526"}, Instrument_43);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_323076696"}, Instrument_43);
  FIX::DetachmentPoint DetachmentPoint_43;
  DetachmentPoint_43.setString("14.650000");
set_field(msg, DetachmentPoint_43, Instrument_43);
  set_field(msg, FIX::EncodedIssuer{"DATA_1841697802"}, Instrument_43);
  set_field(msg, FIX::EncodedIssuerLen{249613039}, Instrument_43);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_857261559"}, Instrument_43);
  set_field(msg, FIX::EncodedSecurityDescLen{1121219339}, Instrument_43);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_43);
  FIX::Factor Factor_43;
  Factor_43.setString("6430111");
set_field(msg, Factor_43, Instrument_43);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_43);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_43);
  FIX::FloorPrice FloorPrice_43;
  FloorPrice_43.setString("14886291");
set_field(msg, FloorPrice_43, Instrument_43);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_43);
  set_field(msg, FIX::InstrRegistry{"STRING_593827274"}, Instrument_43);
  set_field(msg, FIX::InstrmtAssignmentMethod{'7'}, Instrument_43);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_500852768"}, Instrument_43);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_288264750"}, Instrument_43);
  set_field(msg, FIX::Issuer{"STRING_1268399827"}, Instrument_43);
  set_field(msg, FIX::ListMethod{1}, Instrument_43);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1219177629"}, Instrument_43);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1755111789"}, Instrument_43);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_334606371"}, Instrument_43);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_503952531"}, Instrument_43);
  FIX::MinPriceIncrement MinPriceIncrement_43;
  MinPriceIncrement_43.setString("12419798");
set_field(msg, MinPriceIncrement_43, Instrument_43);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_43;
  MinPriceIncrementAmount_43.setString("15595484");
set_field(msg, MinPriceIncrementAmount_43, Instrument_43);
  set_field(msg, FIX::NTPositionLimit{1116566706}, Instrument_43);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_43;
  NotionalPercentageOutstanding_43.setString("94.160000");
set_field(msg, NotionalPercentageOutstanding_43, Instrument_43);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_43);
  FIX::OptPayoutAmount OptPayoutAmount_43;
  OptPayoutAmount_43.setString("4282072");
set_field(msg, OptPayoutAmount_43, Instrument_43);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_43);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_43;
  OriginalNotionalPercentageOutstanding_43.setString("9.440000");
set_field(msg, OriginalNotionalPercentageOutstanding_43, Instrument_43);
  set_field(msg, FIX::Pool{"STRING_361765154"}, Instrument_43);
  set_field(msg, FIX::PositionLimit{500191974}, Instrument_43);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_43);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_55979308"}, Instrument_43);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_43;
  PriceUnitOfMeasureQty_43.setString("7498050");
set_field(msg, PriceUnitOfMeasureQty_43, Instrument_43);
  set_field(msg, FIX::Product{3}, Instrument_43);
  set_field(msg, FIX::ProductComplex{"STRING_1177198647"}, Instrument_43);
  set_field(msg, FIX::PutOrCall{0}, Instrument_43);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_426307783"}, Instrument_43);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_285830427"}, Instrument_43);
  FIX::RepurchaseRate RepurchaseRate_43;
  RepurchaseRate_43.setString("10.970000");
set_field(msg, RepurchaseRate_43, Instrument_43);
  set_field(msg, FIX::RepurchaseTerm{1914936889}, Instrument_43);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_43);
  set_field(msg, FIX::SecurityDesc{"STRING_1255938372"}, Instrument_43);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_527819025"}, Instrument_43);
  set_field(msg, FIX::SecurityGroup{"STRING_916014784"}, Instrument_43);
  set_field(msg, FIX::SecurityID{"STRING_1544203122"}, Instrument_43);
  set_field(msg, FIX::SecurityIDSource{"STRING_B"}, Instrument_43);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_43);
  set_field(msg, FIX::SecuritySubType{"STRING_615897103"}, Instrument_43);
  set_field(msg, FIX::SecurityType{"STRING_SWING"}, Instrument_43);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_43);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_43);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_498343175"}, Instrument_43);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2134678832"}, Instrument_43);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_43);
  FIX::StrikeMultiplier StrikeMultiplier_43;
  StrikeMultiplier_43.setString("1774411");
set_field(msg, StrikeMultiplier_43, Instrument_43);
  FIX::StrikePrice StrikePrice_43;
  StrikePrice_43.setString("5171399");
set_field(msg, StrikePrice_43, Instrument_43);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_43);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_43;
  StrikePriceBoundaryPrecision_43.setString("83.990000");
set_field(msg, StrikePriceBoundaryPrecision_43, Instrument_43);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_43);
  FIX::StrikeValue StrikeValue_43;
  StrikeValue_43.setString("3995261");
set_field(msg, StrikeValue_43, Instrument_43);
  set_field(msg, FIX::Symbol{"STRING_1139947161"}, Instrument_43);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_43);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_43);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_43);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_43);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_43;
  UnitOfMeasureQty_43.setString("6109763");
set_field(msg, UnitOfMeasureQty_43, Instrument_43);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_43);
  all_values.push_back(Instrument_43);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_88;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_88);
    FIX::ComplexEventPrice ComplexEventPrice_88;
    ComplexEventPrice_88.setString("11170048");
set_field(noComplexEvents_0_0, ComplexEventPrice_88, ComplexEvents_NoComplexEvents_88);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_88);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_88;
    ComplexEventPriceBoundaryPrecision_88.setString("21.940000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_88, ComplexEvents_NoComplexEvents_88);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_88);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_88);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_88;
    ComplexOptPayoutAmount_88.setString("19257453");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_88, ComplexEvents_NoComplexEvents_88);
    all_values.push_back(ComplexEvents_NoComplexEvents_88);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_186;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 54, 28, 23, 7, 2010)}, ComplexEventDates_NoComplexEventDates_186);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 35, 29, 3, 12, 2016)}, ComplexEventDates_NoComplexEventDates_186);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_186);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_375;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 14, 2)}, ComplexEventTimes_NoComplexEventTimes_375);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 59, 43)}, ComplexEventTimes_NoComplexEventTimes_375);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_375);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_187;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 28, 44, 25, 3, 2013)}, ComplexEventDates_NoComplexEventDates_187);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 45, 48, 10, 1, 2004)}, ComplexEventDates_NoComplexEventDates_187);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_187);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_376;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 57, 25)}, ComplexEventTimes_NoComplexEventTimes_376);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 21, 43)}, ComplexEventTimes_NoComplexEventTimes_376);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_376);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_377;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 58, 22)}, ComplexEventTimes_NoComplexEventTimes_377);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 13, 48)}, ComplexEventTimes_NoComplexEventTimes_377);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_377);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_188;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 17, 40, 12, 12, 2015)}, ComplexEventDates_NoComplexEventDates_188);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 10, 55, 23, 11, 2017)}, ComplexEventDates_NoComplexEventDates_188);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_188);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_378;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 27, 35)}, ComplexEventTimes_NoComplexEventTimes_378);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 56, 28)}, ComplexEventTimes_NoComplexEventTimes_378);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_378);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_379;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 26, 34)}, ComplexEventTimes_NoComplexEventTimes_379);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 40, 18)}, ComplexEventTimes_NoComplexEventTimes_379);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_379);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_380;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 27, 23)}, ComplexEventTimes_NoComplexEventTimes_380);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 48, 58)}, ComplexEventTimes_NoComplexEventTimes_380);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_380);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_88;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1747609318"}, EvntGrp_NoEvents_88);
    FIX::EventPx EventPx_88;
    EventPx_88.setString("1820790");
set_field(noEvents_0_0, EventPx_88, EvntGrp_NoEvents_88);
    set_field(noEvents_0_0, FIX::EventText{"STRING_261656071"}, EvntGrp_NoEvents_88);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(14, 1, 22, 0, 9, 2015)}, EvntGrp_NoEvents_88);
    set_field(noEvents_0_0, FIX::EventType{10}, EvntGrp_NoEvents_88);
    all_values.push_back(EvntGrp_NoEvents_88);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_89;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_2074572071"}, EvntGrp_NoEvents_89);
    FIX::EventPx EventPx_89;
    EventPx_89.setString("18338892");
set_field(noEvents_0_1, EventPx_89, EvntGrp_NoEvents_89);
    set_field(noEvents_0_1, FIX::EventText{"STRING_830113757"}, EvntGrp_NoEvents_89);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(17, 36, 42, 23, 9, 2004)}, EvntGrp_NoEvents_89);
    set_field(noEvents_0_1, FIX::EventType{6}, EvntGrp_NoEvents_89);
    all_values.push_back(EvntGrp_NoEvents_89);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_90;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_47270475"}, EvntGrp_NoEvents_90);
    FIX::EventPx EventPx_90;
    EventPx_90.setString("10179659");
set_field(noEvents_0_2, EventPx_90, EvntGrp_NoEvents_90);
    set_field(noEvents_0_2, FIX::EventText{"STRING_51967884"}, EvntGrp_NoEvents_90);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(8, 26, 19, 26, 3, 2010)}, EvntGrp_NoEvents_90);
    set_field(noEvents_0_2, FIX::EventType{16}, EvntGrp_NoEvents_90);
    all_values.push_back(EvntGrp_NoEvents_90);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_80;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_181916354"}, InstrumentParties_NoInstrumentParties_80);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_80);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{776835615}, InstrumentParties_NoInstrumentParties_80);
    all_values.push_back(InstrumentParties_NoInstrumentParties_80);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_2141742342"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{2112910955}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_284243186"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{189612263}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_81;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_2039999378"}, InstrumentParties_NoInstrumentParties_81);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_81);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1019726020}, InstrumentParties_NoInstrumentParties_81);
    all_values.push_back(InstrumentParties_NoInstrumentParties_81);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1926520769"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1727699416}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_2145670408"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1107115448}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_88;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1535696382"}, SecAltIDGrp_NoSecurityAltID_88);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_911556365"}, SecAltIDGrp_NoSecurityAltID_88);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_88);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_89;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_138587636"}, SecAltIDGrp_NoSecurityAltID_89);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_406178651"}, SecAltIDGrp_NoSecurityAltID_89);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_89);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_86;
  set_field(msg, FIX::SecurityXML{"XMLDATA_963524249"}, SecurityXML_86);
  set_field(msg, FIX::SecurityXMLLen{1791866855}, SecurityXML_86);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_164474003"}, SecurityXML_86);
  all_values.push_back(SecurityXML_86);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_15;
  FIX::CashOrderQty CashOrderQty_15;
  CashOrderQty_15.setString("8403473");
set_field(msg, CashOrderQty_15, OrderQtyData_15);
  FIX::OrderPercent OrderPercent_15;
  OrderPercent_15.setString("1.260000");
set_field(msg, OrderPercent_15, OrderQtyData_15);
  FIX::OrderQty OrderQty_23;
  OrderQty_23.setString("15769770");
set_field(msg, OrderQty_23, OrderQtyData_15);
  set_field(msg, FIX::RoundingDirection{'2'}, OrderQtyData_15);
  FIX::RoundingModulus RoundingModulus_15;
  RoundingModulus_15.setString("12479827");
set_field(msg, RoundingModulus_15, OrderQtyData_15);
  all_values.push_back(OrderQtyData_15);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_81;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1064089012"}, Parties_NoPartyIDs_81);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_81);
    set_field(noPartyIDs_0_0, FIX::PartyRole{65}, Parties_NoPartyIDs_81);
    all_values.push_back(Parties_NoPartyIDs_81);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_160;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_355514860"}, PtysSubGrp_NoPartySubIDs_160);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_160);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_160);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_161;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1806351934"}, PtysSubGrp_NoPartySubIDs_161);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_161);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_161);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_79;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1698867665"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{610406838}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1341947309"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{593090383}, UnderlyingInstrument_79);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_79;
    UnderlyingAdjustedQuantity_79.setString("3894439");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_79, UnderlyingInstrument_79);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_79;
    UnderlyingAllocationPercent_79.setString("30.770000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_79, UnderlyingInstrument_79);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_79;
    UnderlyingAttachmentPoint_79.setString("71.430000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1496559408"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1013480238"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_2126973525"}, UnderlyingInstrument_79);
    FIX::UnderlyingCapValue UnderlyingCapValue_79;
    UnderlyingCapValue_79.setString("2606321");
set_field(noUnderlyings_0_0, UnderlyingCapValue_79, UnderlyingInstrument_79);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_79;
    UnderlyingCashAmount_79.setString("11520678");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_79);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_79;
    UnderlyingContractMultiplier_79.setString("12241563");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{796451081}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_550142531"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2064503703"}, UnderlyingInstrument_79);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_79;
    UnderlyingCouponRate_79.setString("12.070000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_2127119625"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_79);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_79;
    UnderlyingCurrentValue_79.setString("10037115");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_79, UnderlyingInstrument_79);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_79;
    UnderlyingDetachmentPoint_79.setString("73.780000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_79, UnderlyingInstrument_79);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_79;
    UnderlyingDirtyPrice_79.setString("19729693");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_79, UnderlyingInstrument_79);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_79;
    UnderlyingEndPrice_79.setString("11420618");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_79, UnderlyingInstrument_79);
    FIX::UnderlyingEndValue UnderlyingEndValue_79;
    UnderlyingEndValue_79.setString("4221983");
set_field(noUnderlyings_0_0, UnderlyingEndValue_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{181000559}, UnderlyingInstrument_79);
    FIX::UnderlyingFXRate UnderlyingFXRate_79;
    UnderlyingFXRate_79.setString("12746709");
set_field(noUnderlyings_0_0, UnderlyingFXRate_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_79);
    FIX::UnderlyingFactor UnderlyingFactor_79;
    UnderlyingFactor_79.setString("8207586");
set_field(noUnderlyings_0_0, UnderlyingFactor_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1596892204}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1779934309"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1431165444"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_791355865"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_225541044"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1820609404"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1713518943"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_816818187"}, UnderlyingInstrument_79);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_79;
    UnderlyingNotionalPercentageOutstanding_79.setString("51.640000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_79);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_79;
    UnderlyingOriginalNotionalPercentageOutstanding_79.setString("80.640000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1430317290"}, UnderlyingInstrument_79);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_79;
    UnderlyingPriceUnitOfMeasureQty_79.setString("17315834");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1181976592}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{506990018}, UnderlyingInstrument_79);
    FIX::UnderlyingPx UnderlyingPx_79;
    UnderlyingPx_79.setString("3805508");
set_field(noUnderlyings_0_0, UnderlyingPx_79, UnderlyingInstrument_79);
    FIX::UnderlyingQty UnderlyingQty_79;
    UnderlyingQty_79.setString("17321191");
set_field(noUnderlyings_0_0, UnderlyingQty_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_424010073"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1823122047"}, UnderlyingInstrument_79);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_79;
    UnderlyingRepurchaseRate_79.setString("51.010000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{88678439}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_218708675"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_567983012"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_817435818"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_44194374"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1710044903"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1239634176"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_225194933"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_837232171"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1320700820"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_79);
    FIX::UnderlyingStartValue UnderlyingStartValue_79;
    UnderlyingStartValue_79.setString("2866407");
set_field(noUnderlyings_0_0, UnderlyingStartValue_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_953151482"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_79);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_79;
    UnderlyingStrikePrice_79.setString("11786925");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_79, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_2761091"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_644031888"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1995510714"}, UnderlyingInstrument_79);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1172446255"}, UnderlyingInstrument_79);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_79;
    UnderlyingUnitOfMeasureQty_79.setString("12235474");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_79, UnderlyingInstrument_79);
    all_values.push_back(UnderlyingInstrument_79);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_166;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_455279898"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_166);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_807647180"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_166);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_166);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_167;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1826311723"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_167);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_962269916"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_167);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_167);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_168;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1188198020"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_168);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1410947199"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_168);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_168);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_159;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_863836419"}, UnderlyingStipulations_NoUnderlyingStips_159);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_975218652"}, UnderlyingStipulations_NoUnderlyingStips_159);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_159);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_160;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1474958429"}, UnderlyingStipulations_NoUnderlyingStips_160);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1082545095"}, UnderlyingStipulations_NoUnderlyingStips_160);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_160);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_161;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1543201665"}, UnderlyingStipulations_NoUnderlyingStips_161);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_144910599"}, UnderlyingStipulations_NoUnderlyingStips_161);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_161);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_162;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1105762920"}, UndlyInstrumentParties_NoUndlyInstrumentParties_162);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_162);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1351934403}, UndlyInstrumentParties_NoUndlyInstrumentParties_162);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_162);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_557761947"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{250404294}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_82152170"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1510913429}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
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
