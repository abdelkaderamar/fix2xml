#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::OrderStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderStatusRequest_0;
  set_field(msg, FIX::Account{"STRING_1667998107"}, OrderStatusRequest_0);
  set_field(msg, FIX::AcctIDSource{5}, OrderStatusRequest_0);
  set_field(msg, FIX::ClOrdID{"STRING_524461296"}, OrderStatusRequest_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_825122959"}, OrderStatusRequest_0);
  set_field(msg, FIX::OrdStatusReqID{"STRING_873787524"}, OrderStatusRequest_0);
  set_field(msg, FIX::OrderID{"STRING_997261668"}, OrderStatusRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1531520289"}, OrderStatusRequest_0);
  set_field(msg, FIX::Side{'7'}, OrderStatusRequest_0);
  all_values.push_back(OrderStatusRequest_0);

  all_compo_names.insert("OrderStatusRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_15;
  set_field(msg, FIX::AgreementCurrency{"CAN"}, FinancingDetails_15);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_2077423891"}, FinancingDetails_15);
  set_field(msg, FIX::AgreementDesc{"STRING_1491031903"}, FinancingDetails_15);
  set_field(msg, FIX::AgreementID{"STRING_908037660"}, FinancingDetails_15);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_15);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_2021583826"}, FinancingDetails_15);
  FIX::MarginRatio MarginRatio_15;
  MarginRatio_15.setString("11.130000");
set_field(msg, MarginRatio_15, FinancingDetails_15);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_295759902"}, FinancingDetails_15);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_15);
  all_values.push_back(FinancingDetails_15);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_62;
  FIX::AttachmentPoint AttachmentPoint_62;
  AttachmentPoint_62.setString("11.350000");
set_field(msg, AttachmentPoint_62, Instrument_62);
  set_field(msg, FIX::CFICode{"STRING_1602927052"}, Instrument_62);
  set_field(msg, FIX::CPProgram{1}, Instrument_62);
  set_field(msg, FIX::CPRegType{"STRING_1524978286"}, Instrument_62);
  FIX::CapPrice CapPrice_62;
  CapPrice_62.setString("9441905");
set_field(msg, CapPrice_62, Instrument_62);
  FIX::ContractMultiplier ContractMultiplier_62;
  ContractMultiplier_62.setString("2925785");
set_field(msg, ContractMultiplier_62, Instrument_62);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_62);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_2057333218"}, Instrument_62);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1970011813"}, Instrument_62);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1368260330"}, Instrument_62);
  FIX::CouponRate CouponRate_62;
  CouponRate_62.setString("42.150000");
set_field(msg, CouponRate_62, Instrument_62);
  set_field(msg, FIX::CreditRating{"STRING_1489742914"}, Instrument_62);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_969564035"}, Instrument_62);
  FIX::DetachmentPoint DetachmentPoint_62;
  DetachmentPoint_62.setString("86.740000");
set_field(msg, DetachmentPoint_62, Instrument_62);
  set_field(msg, FIX::EncodedIssuer{"DATA_1929771477"}, Instrument_62);
  set_field(msg, FIX::EncodedIssuerLen{1494025332}, Instrument_62);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_240117985"}, Instrument_62);
  set_field(msg, FIX::EncodedSecurityDescLen{656075353}, Instrument_62);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_62);
  FIX::Factor Factor_62;
  Factor_62.setString("17716382");
set_field(msg, Factor_62, Instrument_62);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_62);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_62);
  FIX::FloorPrice FloorPrice_62;
  FloorPrice_62.setString("11875983");
set_field(msg, FloorPrice_62, Instrument_62);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_62);
  set_field(msg, FIX::InstrRegistry{"STRING_1407406480"}, Instrument_62);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_62);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_945635435"}, Instrument_62);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1281506659"}, Instrument_62);
  set_field(msg, FIX::Issuer{"STRING_466763488"}, Instrument_62);
  set_field(msg, FIX::ListMethod{0}, Instrument_62);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1307906302"}, Instrument_62);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1810864623"}, Instrument_62);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_696838742"}, Instrument_62);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_137811287"}, Instrument_62);
  FIX::MinPriceIncrement MinPriceIncrement_62;
  MinPriceIncrement_62.setString("11883592");
set_field(msg, MinPriceIncrement_62, Instrument_62);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_62;
  MinPriceIncrementAmount_62.setString("16410292");
set_field(msg, MinPriceIncrementAmount_62, Instrument_62);
  set_field(msg, FIX::NTPositionLimit{430389855}, Instrument_62);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_62;
  NotionalPercentageOutstanding_62.setString("26.670000");
set_field(msg, NotionalPercentageOutstanding_62, Instrument_62);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_62);
  FIX::OptPayoutAmount OptPayoutAmount_62;
  OptPayoutAmount_62.setString("2529180");
set_field(msg, OptPayoutAmount_62, Instrument_62);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_62);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_62;
  OriginalNotionalPercentageOutstanding_62.setString("94.000000");
set_field(msg, OriginalNotionalPercentageOutstanding_62, Instrument_62);
  set_field(msg, FIX::Pool{"STRING_1742660935"}, Instrument_62);
  set_field(msg, FIX::PositionLimit{1154173385}, Instrument_62);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_62);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1524948764"}, Instrument_62);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_62;
  PriceUnitOfMeasureQty_62.setString("5007150");
set_field(msg, PriceUnitOfMeasureQty_62, Instrument_62);
  set_field(msg, FIX::Product{1}, Instrument_62);
  set_field(msg, FIX::ProductComplex{"STRING_33540469"}, Instrument_62);
  set_field(msg, FIX::PutOrCall{1}, Instrument_62);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_724627039"}, Instrument_62);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1958737956"}, Instrument_62);
  FIX::RepurchaseRate RepurchaseRate_62;
  RepurchaseRate_62.setString("29.990000");
set_field(msg, RepurchaseRate_62, Instrument_62);
  set_field(msg, FIX::RepurchaseTerm{1912225401}, Instrument_62);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_62);
  set_field(msg, FIX::SecurityDesc{"STRING_20815831"}, Instrument_62);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1860377776"}, Instrument_62);
  set_field(msg, FIX::SecurityGroup{"STRING_464543826"}, Instrument_62);
  set_field(msg, FIX::SecurityID{"STRING_1302322490"}, Instrument_62);
  set_field(msg, FIX::SecurityIDSource{"STRING_7"}, Instrument_62);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_62);
  set_field(msg, FIX::SecuritySubType{"STRING_462745144"}, Instrument_62);
  set_field(msg, FIX::SecurityType{"STRING_CD"}, Instrument_62);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_62);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_62);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1031397852"}, Instrument_62);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1896323521"}, Instrument_62);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_62);
  FIX::StrikeMultiplier StrikeMultiplier_62;
  StrikeMultiplier_62.setString("12997187");
set_field(msg, StrikeMultiplier_62, Instrument_62);
  FIX::StrikePrice StrikePrice_62;
  StrikePrice_62.setString("12838643");
set_field(msg, StrikePrice_62, Instrument_62);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_62);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_62;
  StrikePriceBoundaryPrecision_62.setString("44.580000");
set_field(msg, StrikePriceBoundaryPrecision_62, Instrument_62);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_62);
  FIX::StrikeValue StrikeValue_62;
  StrikeValue_62.setString("11865296");
set_field(msg, StrikeValue_62, Instrument_62);
  set_field(msg, FIX::Symbol{"STRING_1457948885"}, Instrument_62);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_62);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_62);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_62);
  set_field(msg, FIX::UnitOfMeasure{"STRING_t"}, Instrument_62);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_62;
  UnitOfMeasureQty_62.setString("3842794");
set_field(msg, UnitOfMeasureQty_62, Instrument_62);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_62);
  all_values.push_back(Instrument_62);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_123;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_123);
    FIX::ComplexEventPrice ComplexEventPrice_123;
    ComplexEventPrice_123.setString("9003064");
set_field(noComplexEvents_0_0, ComplexEventPrice_123, ComplexEvents_NoComplexEvents_123);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_123);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_123;
    ComplexEventPriceBoundaryPrecision_123.setString("82.790000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_123, ComplexEvents_NoComplexEvents_123);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_123);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_123);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_123;
    ComplexOptPayoutAmount_123.setString("3208271");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_123, ComplexEvents_NoComplexEvents_123);
    all_values.push_back(ComplexEvents_NoComplexEvents_123);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_238;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 38, 29, 22, 3, 2004)}, ComplexEventDates_NoComplexEventDates_238);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 40, 6, 11, 7, 2008)}, ComplexEventDates_NoComplexEventDates_238);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_238);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_485;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 48, 6)}, ComplexEventTimes_NoComplexEventTimes_485);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 7, 59)}, ComplexEventTimes_NoComplexEventTimes_485);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_485);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_239;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 40, 35, 13, 4, 2016)}, ComplexEventDates_NoComplexEventDates_239);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 2, 38, 15, 9, 2015)}, ComplexEventDates_NoComplexEventDates_239);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_239);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_486;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 45, 8)}, ComplexEventTimes_NoComplexEventTimes_486);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 22, 19)}, ComplexEventTimes_NoComplexEventTimes_486);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_486);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_487;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 59, 9)}, ComplexEventTimes_NoComplexEventTimes_487);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 17, 8)}, ComplexEventTimes_NoComplexEventTimes_487);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_487);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_124;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_124);
    FIX::ComplexEventPrice ComplexEventPrice_124;
    ComplexEventPrice_124.setString("15514084");
set_field(noComplexEvents_0_1, ComplexEventPrice_124, ComplexEvents_NoComplexEvents_124);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_124);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_124;
    ComplexEventPriceBoundaryPrecision_124.setString("84.260000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_124, ComplexEvents_NoComplexEvents_124);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_124);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_124);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_124;
    ComplexOptPayoutAmount_124.setString("17366567");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_124, ComplexEvents_NoComplexEvents_124);
    all_values.push_back(ComplexEvents_NoComplexEvents_124);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_240;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 12, 28, 2, 10, 2003)}, ComplexEventDates_NoComplexEventDates_240);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 18, 12, 14, 2, 2004)}, ComplexEventDates_NoComplexEventDates_240);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_240);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_488;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 28, 26)}, ComplexEventTimes_NoComplexEventTimes_488);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 43, 11)}, ComplexEventTimes_NoComplexEventTimes_488);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_488);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_489;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 51, 1)}, ComplexEventTimes_NoComplexEventTimes_489);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 36, 37)}, ComplexEventTimes_NoComplexEventTimes_489);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_489);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_490;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 49, 55)}, ComplexEventTimes_NoComplexEventTimes_490);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 28, 12)}, ComplexEventTimes_NoComplexEventTimes_490);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_490);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_241;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 24, 0, 24, 11, 2005)}, ComplexEventDates_NoComplexEventDates_241);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 57, 35, 4, 10, 2005)}, ComplexEventDates_NoComplexEventDates_241);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_241);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_491;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 43, 1)}, ComplexEventTimes_NoComplexEventTimes_491);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 30, 7)}, ComplexEventTimes_NoComplexEventTimes_491);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_491);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_492;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 57, 56)}, ComplexEventTimes_NoComplexEventTimes_492);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 25, 56)}, ComplexEventTimes_NoComplexEventTimes_492);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_492);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_493;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 20, 38)}, ComplexEventTimes_NoComplexEventTimes_493);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 0, 56)}, ComplexEventTimes_NoComplexEventTimes_493);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_493);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_242;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 24, 42, 22, 12, 2000)}, ComplexEventDates_NoComplexEventDates_242);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 17, 24, 27, 3, 2010)}, ComplexEventDates_NoComplexEventDates_242);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_242);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_494;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 27, 48)}, ComplexEventTimes_NoComplexEventTimes_494);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 13, 54)}, ComplexEventTimes_NoComplexEventTimes_494);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_494);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_495;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 6, 47)}, ComplexEventTimes_NoComplexEventTimes_495);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 47, 52)}, ComplexEventTimes_NoComplexEventTimes_495);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_495);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_496;
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 16, 45)}, ComplexEventTimes_NoComplexEventTimes_496);
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 19, 14)}, ComplexEventTimes_NoComplexEventTimes_496);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_496);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_130;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_603915276"}, EvntGrp_NoEvents_130);
    FIX::EventPx EventPx_130;
    EventPx_130.setString("2109863");
set_field(noEvents_0_0, EventPx_130, EvntGrp_NoEvents_130);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1805757803"}, EvntGrp_NoEvents_130);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(16, 54, 18, 18, 10, 2012)}, EvntGrp_NoEvents_130);
    set_field(noEvents_0_0, FIX::EventType{17}, EvntGrp_NoEvents_130);
    all_values.push_back(EvntGrp_NoEvents_130);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_131;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1341715432"}, EvntGrp_NoEvents_131);
    FIX::EventPx EventPx_131;
    EventPx_131.setString("3330529");
set_field(noEvents_0_1, EventPx_131, EvntGrp_NoEvents_131);
    set_field(noEvents_0_1, FIX::EventText{"STRING_944461042"}, EvntGrp_NoEvents_131);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(15, 20, 49, 7, 5, 2004)}, EvntGrp_NoEvents_131);
    set_field(noEvents_0_1, FIX::EventType{17}, EvntGrp_NoEvents_131);
    all_values.push_back(EvntGrp_NoEvents_131);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_118;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1310343245"}, InstrumentParties_NoInstrumentParties_118);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_118);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{897643155}, InstrumentParties_NoInstrumentParties_118);
    all_values.push_back(InstrumentParties_NoInstrumentParties_118);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1667245396"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1012133674}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_126;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1508864100"}, SecAltIDGrp_NoSecurityAltID_126);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1616048950"}, SecAltIDGrp_NoSecurityAltID_126);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_126);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_127;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1991837801"}, SecAltIDGrp_NoSecurityAltID_127);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1167138256"}, SecAltIDGrp_NoSecurityAltID_127);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_127);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_128;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_578614829"}, SecAltIDGrp_NoSecurityAltID_128);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_71707609"}, SecAltIDGrp_NoSecurityAltID_128);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_128);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_124;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1403899870"}, SecurityXML_124);
  set_field(msg, FIX::SecurityXMLLen{1895066687}, SecurityXML_124);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1130621007"}, SecurityXML_124);
  all_values.push_back(SecurityXML_124);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_104;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1272534465"}, Parties_NoPartyIDs_104);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_104);
    set_field(noPartyIDs_0_0, FIX::PartyRole{42}, Parties_NoPartyIDs_104);
    all_values.push_back(Parties_NoPartyIDs_104);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_208;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1197913697"}, PtysSubGrp_NoPartySubIDs_208);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_208);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_208);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_209;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1306441995"}, PtysSubGrp_NoPartySubIDs_209);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_209);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_209);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_210;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1909010878"}, PtysSubGrp_NoPartySubIDs_210);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_210);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_210);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_105;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1689769385"}, Parties_NoPartyIDs_105);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_105);
    set_field(noPartyIDs_0_1, FIX::PartyRole{25}, Parties_NoPartyIDs_105);
    all_values.push_back(Parties_NoPartyIDs_105);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_211;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1330800264"}, PtysSubGrp_NoPartySubIDs_211);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_211);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_211);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_84;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_431032873"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{2066738187}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1950763757"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{64400656}, UnderlyingInstrument_84);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_84;
    UnderlyingAdjustedQuantity_84.setString("14281186");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_84, UnderlyingInstrument_84);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_84;
    UnderlyingAllocationPercent_84.setString("90.600000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_84, UnderlyingInstrument_84);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_84;
    UnderlyingAttachmentPoint_84.setString("84.570000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_447773248"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1997943889"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_2127946066"}, UnderlyingInstrument_84);
    FIX::UnderlyingCapValue UnderlyingCapValue_84;
    UnderlyingCapValue_84.setString("18516731");
set_field(noUnderlyings_0_0, UnderlyingCapValue_84, UnderlyingInstrument_84);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_84;
    UnderlyingCashAmount_84.setString("17455269");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_84);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_84;
    UnderlyingContractMultiplier_84.setString("18371013");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{870577745}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1364536080"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1016761389"}, UnderlyingInstrument_84);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_84;
    UnderlyingCouponRate_84.setString("14.930000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_414966129"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_84);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_84;
    UnderlyingCurrentValue_84.setString("18346705");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_84, UnderlyingInstrument_84);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_84;
    UnderlyingDetachmentPoint_84.setString("36.290000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_84, UnderlyingInstrument_84);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_84;
    UnderlyingDirtyPrice_84.setString("16192862");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_84, UnderlyingInstrument_84);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_84;
    UnderlyingEndPrice_84.setString("13769562");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_84, UnderlyingInstrument_84);
    FIX::UnderlyingEndValue UnderlyingEndValue_84;
    UnderlyingEndValue_84.setString("11035306");
set_field(noUnderlyings_0_0, UnderlyingEndValue_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{324943698}, UnderlyingInstrument_84);
    FIX::UnderlyingFXRate UnderlyingFXRate_84;
    UnderlyingFXRate_84.setString("14179431");
set_field(noUnderlyings_0_0, UnderlyingFXRate_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_84);
    FIX::UnderlyingFactor UnderlyingFactor_84;
    UnderlyingFactor_84.setString("7244364");
set_field(noUnderlyings_0_0, UnderlyingFactor_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{209089606}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_717880138"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_643691029"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_12369715"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_782280795"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2071809669"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1431698775"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_691035604"}, UnderlyingInstrument_84);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_84;
    UnderlyingNotionalPercentageOutstanding_84.setString("92.690000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_84);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_84;
    UnderlyingOriginalNotionalPercentageOutstanding_84.setString("80.230000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_76288739"}, UnderlyingInstrument_84);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_84;
    UnderlyingPriceUnitOfMeasureQty_84.setString("8802022");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1782581448}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1913390101}, UnderlyingInstrument_84);
    FIX::UnderlyingPx UnderlyingPx_84;
    UnderlyingPx_84.setString("17507800");
set_field(noUnderlyings_0_0, UnderlyingPx_84, UnderlyingInstrument_84);
    FIX::UnderlyingQty UnderlyingQty_84;
    UnderlyingQty_84.setString("9996338");
set_field(noUnderlyings_0_0, UnderlyingQty_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_782667842"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2079461534"}, UnderlyingInstrument_84);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_84;
    UnderlyingRepurchaseRate_84.setString("0.100000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{2104214241}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1567101375"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1101786869"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1039804223"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1038904006"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_331259464"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_2143334871"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1363847705"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1749202635"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_282698488"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_84);
    FIX::UnderlyingStartValue UnderlyingStartValue_84;
    UnderlyingStartValue_84.setString("19582922");
set_field(noUnderlyings_0_0, UnderlyingStartValue_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1000578627"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_84);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_84;
    UnderlyingStrikePrice_84.setString("17828594");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_84, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_508817598"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1254877084"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_326411378"}, UnderlyingInstrument_84);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_880916867"}, UnderlyingInstrument_84);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_84;
    UnderlyingUnitOfMeasureQty_84.setString("3895524");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_84, UnderlyingInstrument_84);
    all_values.push_back(UnderlyingInstrument_84);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_174;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_957205607"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_174);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1269754749"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_174);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_174);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_170;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_723112060"}, UnderlyingStipulations_NoUnderlyingStips_170);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_873051143"}, UnderlyingStipulations_NoUnderlyingStips_170);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_170);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_171;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1632641083"}, UnderlyingStipulations_NoUnderlyingStips_171);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1505779902"}, UnderlyingStipulations_NoUnderlyingStips_171);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_171);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_172;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_805029029"}, UnderlyingStipulations_NoUnderlyingStips_172);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_899757445"}, UnderlyingStipulations_NoUnderlyingStips_172);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_172);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_181;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_224646756"}, UndlyInstrumentParties_NoUndlyInstrumentParties_181);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_181);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{354831071}, UndlyInstrumentParties_NoUndlyInstrumentParties_181);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_181);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_185320131"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{350682294}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_479914820"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1934522766}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_633380783"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{420715367}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_182;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1745331360"}, UndlyInstrumentParties_NoUndlyInstrumentParties_182);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_182);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1005206943}, UndlyInstrumentParties_NoUndlyInstrumentParties_182);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_182);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1269335184"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1514024541}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_675903105"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1595746562}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_183;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_247457761"}, UndlyInstrumentParties_NoUndlyInstrumentParties_183);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_183);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{446172316}, UndlyInstrumentParties_NoUndlyInstrumentParties_183);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_183);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_187726660"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1079179518}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_85;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1927775428"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1060777803}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_564336953"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1286071682}, UnderlyingInstrument_85);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_85;
    UnderlyingAdjustedQuantity_85.setString("18658068");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_85, UnderlyingInstrument_85);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_85;
    UnderlyingAllocationPercent_85.setString("43.980000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_85, UnderlyingInstrument_85);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_85;
    UnderlyingAttachmentPoint_85.setString("85.300000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_2090453589"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1318155065"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_955929601"}, UnderlyingInstrument_85);
    FIX::UnderlyingCapValue UnderlyingCapValue_85;
    UnderlyingCapValue_85.setString("12065207");
set_field(noUnderlyings_0_1, UnderlyingCapValue_85, UnderlyingInstrument_85);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_85;
    UnderlyingCashAmount_85.setString("15034751");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_85);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_85;
    UnderlyingContractMultiplier_85.setString("16864355");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1290514314}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1939992679"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2107150891"}, UnderlyingInstrument_85);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_85;
    UnderlyingCouponRate_85.setString("20.260000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1426468441"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_85);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_85;
    UnderlyingCurrentValue_85.setString("5483199");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_85, UnderlyingInstrument_85);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_85;
    UnderlyingDetachmentPoint_85.setString("50.800000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_85, UnderlyingInstrument_85);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_85;
    UnderlyingDirtyPrice_85.setString("9852911");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_85, UnderlyingInstrument_85);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_85;
    UnderlyingEndPrice_85.setString("21440665");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_85, UnderlyingInstrument_85);
    FIX::UnderlyingEndValue UnderlyingEndValue_85;
    UnderlyingEndValue_85.setString("5788728");
set_field(noUnderlyings_0_1, UnderlyingEndValue_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{2050746711}, UnderlyingInstrument_85);
    FIX::UnderlyingFXRate UnderlyingFXRate_85;
    UnderlyingFXRate_85.setString("4427552");
set_field(noUnderlyings_0_1, UnderlyingFXRate_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_85);
    FIX::UnderlyingFactor UnderlyingFactor_85;
    UnderlyingFactor_85.setString("909897");
set_field(noUnderlyings_0_1, UnderlyingFactor_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1521934725}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1563827989"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1151767526"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_2086271678"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_702416023"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_870090711"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1402882429"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1303514554"}, UnderlyingInstrument_85);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_85;
    UnderlyingNotionalPercentageOutstanding_85.setString("6.520000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_85);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_85;
    UnderlyingOriginalNotionalPercentageOutstanding_85.setString("5.070000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2019581356"}, UnderlyingInstrument_85);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_85;
    UnderlyingPriceUnitOfMeasureQty_85.setString("20770290");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1418572403}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1558533232}, UnderlyingInstrument_85);
    FIX::UnderlyingPx UnderlyingPx_85;
    UnderlyingPx_85.setString("12200597");
set_field(noUnderlyings_0_1, UnderlyingPx_85, UnderlyingInstrument_85);
    FIX::UnderlyingQty UnderlyingQty_85;
    UnderlyingQty_85.setString("12110814");
set_field(noUnderlyings_0_1, UnderlyingQty_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1518200475"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2108421735"}, UnderlyingInstrument_85);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_85;
    UnderlyingRepurchaseRate_85.setString("62.270000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{335591013}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_270326134"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1038386204"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_667006093"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1255617287"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1034969096"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1245878934"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1158880351"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1477724303"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_881931495"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_85);
    FIX::UnderlyingStartValue UnderlyingStartValue_85;
    UnderlyingStartValue_85.setString("8521753");
set_field(noUnderlyings_0_1, UnderlyingStartValue_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_298275836"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_85);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_85;
    UnderlyingStrikePrice_85.setString("10006918");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1124244664"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_46362192"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_156722766"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1937305316"}, UnderlyingInstrument_85);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_85;
    UnderlyingUnitOfMeasureQty_85.setString("6199160");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_85, UnderlyingInstrument_85);
    all_values.push_back(UnderlyingInstrument_85);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_175;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1809403024"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_175);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_549461432"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_175);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_175);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_173;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1220452608"}, UnderlyingStipulations_NoUnderlyingStips_173);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1769521141"}, UnderlyingStipulations_NoUnderlyingStips_173);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_173);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_184;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_591169435"}, UndlyInstrumentParties_NoUndlyInstrumentParties_184);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_184);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1240919691}, UndlyInstrumentParties_NoUndlyInstrumentParties_184);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_184);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2000785362"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{131822247}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1593766542"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1108919002}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_185;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1166791343"}, UndlyInstrumentParties_NoUndlyInstrumentParties_185);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_185);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{120315705}, UndlyInstrumentParties_NoUndlyInstrumentParties_185);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_185);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1574093324"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1370185779}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_186;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1349207380"}, UndlyInstrumentParties_NoUndlyInstrumentParties_186);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_186);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{1624339732}, UndlyInstrumentParties_NoUndlyInstrumentParties_186);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_186);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_725577372"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{601100748}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_39049336"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{882300138}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_390922416"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{658965374}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_64;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_64);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_52841792"}, header_64);
  set_header_field(msg.getHeader(), FIX::BodyLength{1208426807}, header_64);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_690755441"}, header_64);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1273294400"}, header_64);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_830464300"}, header_64);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1441608904"}, header_64);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1864463835}, header_64);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_64);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{535044947}, header_64);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_643740636"}, header_64);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_266741594"}, header_64);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_666867195"}, header_64);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(12, 38, 38, 1, 10, 2002)}, header_64);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_64);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_64);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_2081164195"}, header_64);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{195534517}, header_64);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1525101413"}, header_64);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_659257919"}, header_64);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_796635266"}, header_64);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(18, 2, 15, 22, 12, 2014)}, header_64);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1235813263"}, header_64);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_366210227"}, header_64);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_2114523582"}, header_64);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_529938519"}, header_64);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{83190415}, header_64);
  all_values.push_back(header_64);
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
