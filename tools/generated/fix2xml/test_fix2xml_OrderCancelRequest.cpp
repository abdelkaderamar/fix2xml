#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::OrderCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelRequest_0;
  set_field(msg, FIX::Account{"STRING_1564706707"}, OrderCancelRequest_0);
  set_field(msg, FIX::AccountType{8}, OrderCancelRequest_0);
  set_field(msg, FIX::AcctIDSource{2}, OrderCancelRequest_0);
  set_field(msg, FIX::ClOrdID{"STRING_1105445606"}, OrderCancelRequest_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_424947387"}, OrderCancelRequest_0);
  set_field(msg, FIX::ComplianceID{"STRING_1384185238"}, OrderCancelRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1668724042"}, OrderCancelRequest_0);
  set_field(msg, FIX::EncodedTextLen{1223885946}, OrderCancelRequest_0);
  set_field(msg, FIX::ListID{"STRING_1448747372"}, OrderCancelRequest_0);
  set_field(msg, FIX::OrderID{"STRING_408092333"}, OrderCancelRequest_0);
  set_field(msg, FIX::OrigClOrdID{"STRING_197700271"}, OrderCancelRequest_0);
  set_field(msg, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(4, 31, 56, 5, 12, 2004)}, OrderCancelRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_59206063"}, OrderCancelRequest_0);
  set_field(msg, FIX::Side{'7'}, OrderCancelRequest_0);
  set_field(msg, FIX::Text{"STRING_1405215703"}, OrderCancelRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(8, 50, 41, 5, 7, 2010)}, OrderCancelRequest_0);
  all_values.push_back(OrderCancelRequest_0);

  all_compo_names.insert("OrderCancelRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_14;
  set_field(msg, FIX::AgreementCurrency{"EUR"}, FinancingDetails_14);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1126457528"}, FinancingDetails_14);
  set_field(msg, FIX::AgreementDesc{"STRING_1414710204"}, FinancingDetails_14);
  set_field(msg, FIX::AgreementID{"STRING_1098601836"}, FinancingDetails_14);
  set_field(msg, FIX::DeliveryType{0}, FinancingDetails_14);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_372672163"}, FinancingDetails_14);
  FIX::MarginRatio MarginRatio_14;
  MarginRatio_14.setString("92.230000");
set_field(msg, MarginRatio_14, FinancingDetails_14);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_581320158"}, FinancingDetails_14);
  set_field(msg, FIX::TerminationType{2}, FinancingDetails_14);
  all_values.push_back(FinancingDetails_14);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_56;
  FIX::AttachmentPoint AttachmentPoint_56;
  AttachmentPoint_56.setString("15.220000");
set_field(msg, AttachmentPoint_56, Instrument_56);
  set_field(msg, FIX::CFICode{"STRING_2030067530"}, Instrument_56);
  set_field(msg, FIX::CPProgram{99}, Instrument_56);
  set_field(msg, FIX::CPRegType{"STRING_797651793"}, Instrument_56);
  FIX::CapPrice CapPrice_56;
  CapPrice_56.setString("17219465");
set_field(msg, CapPrice_56, Instrument_56);
  FIX::ContractMultiplier ContractMultiplier_56;
  ContractMultiplier_56.setString("12353150");
set_field(msg, ContractMultiplier_56, Instrument_56);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_56);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_389554880"}, Instrument_56);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_828023816"}, Instrument_56);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_604937611"}, Instrument_56);
  FIX::CouponRate CouponRate_56;
  CouponRate_56.setString("96.000000");
set_field(msg, CouponRate_56, Instrument_56);
  set_field(msg, FIX::CreditRating{"STRING_887229879"}, Instrument_56);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2047113682"}, Instrument_56);
  FIX::DetachmentPoint DetachmentPoint_56;
  DetachmentPoint_56.setString("53.030000");
set_field(msg, DetachmentPoint_56, Instrument_56);
  set_field(msg, FIX::EncodedIssuer{"DATA_1742672426"}, Instrument_56);
  set_field(msg, FIX::EncodedIssuerLen{1354608850}, Instrument_56);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_834281426"}, Instrument_56);
  set_field(msg, FIX::EncodedSecurityDescLen{1039115879}, Instrument_56);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_56);
  FIX::Factor Factor_56;
  Factor_56.setString("7033451");
set_field(msg, Factor_56, Instrument_56);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_56);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_56);
  FIX::FloorPrice FloorPrice_56;
  FloorPrice_56.setString("5893849");
set_field(msg, FloorPrice_56, Instrument_56);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_56);
  set_field(msg, FIX::InstrRegistry{"STRING_1698822177"}, Instrument_56);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_56);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1805252972"}, Instrument_56);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_2071494340"}, Instrument_56);
  set_field(msg, FIX::Issuer{"STRING_1064052350"}, Instrument_56);
  set_field(msg, FIX::ListMethod{0}, Instrument_56);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1965406898"}, Instrument_56);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1664003872"}, Instrument_56);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_121673364"}, Instrument_56);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_119928140"}, Instrument_56);
  FIX::MinPriceIncrement MinPriceIncrement_56;
  MinPriceIncrement_56.setString("3141720");
set_field(msg, MinPriceIncrement_56, Instrument_56);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_56;
  MinPriceIncrementAmount_56.setString("18436199");
set_field(msg, MinPriceIncrementAmount_56, Instrument_56);
  set_field(msg, FIX::NTPositionLimit{1355243187}, Instrument_56);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_56;
  NotionalPercentageOutstanding_56.setString("23.620000");
set_field(msg, NotionalPercentageOutstanding_56, Instrument_56);
  set_field(msg, FIX::OptAttribute{'8'}, Instrument_56);
  FIX::OptPayoutAmount OptPayoutAmount_56;
  OptPayoutAmount_56.setString("357833");
set_field(msg, OptPayoutAmount_56, Instrument_56);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_56);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_56;
  OriginalNotionalPercentageOutstanding_56.setString("7.690000");
set_field(msg, OriginalNotionalPercentageOutstanding_56, Instrument_56);
  set_field(msg, FIX::Pool{"STRING_923013235"}, Instrument_56);
  set_field(msg, FIX::PositionLimit{275496359}, Instrument_56);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_56);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_518202013"}, Instrument_56);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_56;
  PriceUnitOfMeasureQty_56.setString("16301052");
set_field(msg, PriceUnitOfMeasureQty_56, Instrument_56);
  set_field(msg, FIX::Product{10}, Instrument_56);
  set_field(msg, FIX::ProductComplex{"STRING_1557317893"}, Instrument_56);
  set_field(msg, FIX::PutOrCall{1}, Instrument_56);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_90665367"}, Instrument_56);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_891494768"}, Instrument_56);
  FIX::RepurchaseRate RepurchaseRate_56;
  RepurchaseRate_56.setString("20.100000");
set_field(msg, RepurchaseRate_56, Instrument_56);
  set_field(msg, FIX::RepurchaseTerm{680050305}, Instrument_56);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_56);
  set_field(msg, FIX::SecurityDesc{"STRING_1899664188"}, Instrument_56);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_220553432"}, Instrument_56);
  set_field(msg, FIX::SecurityGroup{"STRING_1009898496"}, Instrument_56);
  set_field(msg, FIX::SecurityID{"STRING_1823674880"}, Instrument_56);
  set_field(msg, FIX::SecurityIDSource{"STRING_L"}, Instrument_56);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_56);
  set_field(msg, FIX::SecuritySubType{"STRING_1641598130"}, Instrument_56);
  set_field(msg, FIX::SecurityType{"STRING_DEFLTED"}, Instrument_56);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_56);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_56);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1115298023"}, Instrument_56);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1066797631"}, Instrument_56);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_56);
  FIX::StrikeMultiplier StrikeMultiplier_56;
  StrikeMultiplier_56.setString("11524888");
set_field(msg, StrikeMultiplier_56, Instrument_56);
  FIX::StrikePrice StrikePrice_56;
  StrikePrice_56.setString("10050691");
set_field(msg, StrikePrice_56, Instrument_56);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_56);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_56;
  StrikePriceBoundaryPrecision_56.setString("95.690000");
set_field(msg, StrikePriceBoundaryPrecision_56, Instrument_56);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_56);
  FIX::StrikeValue StrikeValue_56;
  StrikeValue_56.setString("15375894");
set_field(msg, StrikeValue_56, Instrument_56);
  set_field(msg, FIX::Symbol{"STRING_469768346"}, Instrument_56);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_56);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_56);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_56);
  set_field(msg, FIX::UnitOfMeasure{"STRING_lbs"}, Instrument_56);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_56;
  UnitOfMeasureQty_56.setString("9369410");
set_field(msg, UnitOfMeasureQty_56, Instrument_56);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_56);
  all_values.push_back(Instrument_56);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_111;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_111);
    FIX::ComplexEventPrice ComplexEventPrice_111;
    ComplexEventPrice_111.setString("6278042");
set_field(noComplexEvents_0_0, ComplexEventPrice_111, ComplexEvents_NoComplexEvents_111);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_111);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_111;
    ComplexEventPriceBoundaryPrecision_111.setString("35.720000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_111, ComplexEvents_NoComplexEvents_111);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_111);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_111);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_111;
    ComplexOptPayoutAmount_111.setString("5661548");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_111, ComplexEvents_NoComplexEvents_111);
    all_values.push_back(ComplexEvents_NoComplexEvents_111);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_220;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 34, 35, 2, 11, 2016)}, ComplexEventDates_NoComplexEventDates_220);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 38, 27, 26, 8, 2013)}, ComplexEventDates_NoComplexEventDates_220);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_220);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_442;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 21, 15)}, ComplexEventTimes_NoComplexEventTimes_442);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 12, 42)}, ComplexEventTimes_NoComplexEventTimes_442);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_442);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_443;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 48, 40)}, ComplexEventTimes_NoComplexEventTimes_443);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 5, 30)}, ComplexEventTimes_NoComplexEventTimes_443);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_443);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_444;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 4, 49)}, ComplexEventTimes_NoComplexEventTimes_444);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 47, 4)}, ComplexEventTimes_NoComplexEventTimes_444);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_444);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_112;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_112);
    FIX::ComplexEventPrice ComplexEventPrice_112;
    ComplexEventPrice_112.setString("11291263");
set_field(noComplexEvents_0_1, ComplexEventPrice_112, ComplexEvents_NoComplexEvents_112);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_112);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_112;
    ComplexEventPriceBoundaryPrecision_112.setString("62.040000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_112, ComplexEvents_NoComplexEvents_112);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_112);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_112);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_112;
    ComplexOptPayoutAmount_112.setString("7989483");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_112, ComplexEvents_NoComplexEvents_112);
    all_values.push_back(ComplexEvents_NoComplexEvents_112);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_221;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 22, 40, 26, 4, 2008)}, ComplexEventDates_NoComplexEventDates_221);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 54, 27, 27, 5, 2006)}, ComplexEventDates_NoComplexEventDates_221);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_221);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_445;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 42, 12)}, ComplexEventTimes_NoComplexEventTimes_445);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 52, 49)}, ComplexEventTimes_NoComplexEventTimes_445);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_445);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_119;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_561059461"}, EvntGrp_NoEvents_119);
    FIX::EventPx EventPx_119;
    EventPx_119.setString("2022586");
set_field(noEvents_0_0, EventPx_119, EvntGrp_NoEvents_119);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1470528887"}, EvntGrp_NoEvents_119);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(23, 40, 37, 25, 4, 2006)}, EvntGrp_NoEvents_119);
    set_field(noEvents_0_0, FIX::EventType{14}, EvntGrp_NoEvents_119);
    all_values.push_back(EvntGrp_NoEvents_119);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_120;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1006066762"}, EvntGrp_NoEvents_120);
    FIX::EventPx EventPx_120;
    EventPx_120.setString("15142070");
set_field(noEvents_0_1, EventPx_120, EvntGrp_NoEvents_120);
    set_field(noEvents_0_1, FIX::EventText{"STRING_252094140"}, EvntGrp_NoEvents_120);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(17, 54, 35, 0, 4, 2016)}, EvntGrp_NoEvents_120);
    set_field(noEvents_0_1, FIX::EventType{15}, EvntGrp_NoEvents_120);
    all_values.push_back(EvntGrp_NoEvents_120);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderCancelRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_121;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1332186806"}, EvntGrp_NoEvents_121);
    FIX::EventPx EventPx_121;
    EventPx_121.setString("1209895");
set_field(noEvents_0_2, EventPx_121, EvntGrp_NoEvents_121);
    set_field(noEvents_0_2, FIX::EventText{"STRING_810999548"}, EvntGrp_NoEvents_121);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(2, 36, 14, 8, 8, 2016)}, EvntGrp_NoEvents_121);
    set_field(noEvents_0_2, FIX::EventType{2}, EvntGrp_NoEvents_121);
    all_values.push_back(EvntGrp_NoEvents_121);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_107;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1657218766"}, InstrumentParties_NoInstrumentParties_107);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_107);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{139077458}, InstrumentParties_NoInstrumentParties_107);
    all_values.push_back(InstrumentParties_NoInstrumentParties_107);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_206878598"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1225592382}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderCancelRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_108;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_984772096"}, InstrumentParties_NoInstrumentParties_108);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_108);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{84175496}, InstrumentParties_NoInstrumentParties_108);
    all_values.push_back(InstrumentParties_NoInstrumentParties_108);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1241842771"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1102607584}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_2017986316"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{657283878}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_968698412"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{272970776}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_116;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1231379844"}, SecAltIDGrp_NoSecurityAltID_116);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_128073202"}, SecAltIDGrp_NoSecurityAltID_116);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_116);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_112;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1077055419"}, SecurityXML_112);
  set_field(msg, FIX::SecurityXMLLen{1352369385}, SecurityXML_112);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_939072750"}, SecurityXML_112);
  all_values.push_back(SecurityXML_112);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_19;
  FIX::CashOrderQty CashOrderQty_19;
  CashOrderQty_19.setString("20706912");
set_field(msg, CashOrderQty_19, OrderQtyData_19);
  FIX::OrderPercent OrderPercent_19;
  OrderPercent_19.setString("64.520000");
set_field(msg, OrderPercent_19, OrderQtyData_19);
  FIX::OrderQty OrderQty_28;
  OrderQty_28.setString("18161687");
set_field(msg, OrderQty_28, OrderQtyData_19);
  set_field(msg, FIX::RoundingDirection{'1'}, OrderQtyData_19);
  FIX::RoundingModulus RoundingModulus_19;
  RoundingModulus_19.setString("5044718");
set_field(msg, RoundingModulus_19, OrderQtyData_19);
  all_values.push_back(OrderQtyData_19);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_93;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1335405032"}, Parties_NoPartyIDs_93);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_93);
    set_field(noPartyIDs_0_0, FIX::PartyRole{17}, Parties_NoPartyIDs_93);
    all_values.push_back(Parties_NoPartyIDs_93);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_183;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1894874654"}, PtysSubGrp_NoPartySubIDs_183);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_183);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_183);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_184;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_585169346"}, PtysSubGrp_NoPartySubIDs_184);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_184);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_184);
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
    multiset<string> UnderlyingInstrument_78;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1569941442"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{944018235}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1828653032"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1921436957}, UnderlyingInstrument_78);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_78;
    UnderlyingAdjustedQuantity_78.setString("383773");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_78, UnderlyingInstrument_78);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_78;
    UnderlyingAllocationPercent_78.setString("69.690000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_78, UnderlyingInstrument_78);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_78;
    UnderlyingAttachmentPoint_78.setString("96.250000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_695661237"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1752475381"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_2064910402"}, UnderlyingInstrument_78);
    FIX::UnderlyingCapValue UnderlyingCapValue_78;
    UnderlyingCapValue_78.setString("4405298");
set_field(noUnderlyings_0_0, UnderlyingCapValue_78, UnderlyingInstrument_78);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_78;
    UnderlyingCashAmount_78.setString("8363715");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_78);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_78;
    UnderlyingContractMultiplier_78.setString("15175852");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{41257314}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_984572707"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1440792890"}, UnderlyingInstrument_78);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_78;
    UnderlyingCouponRate_78.setString("37.660000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_653257806"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_78);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_78;
    UnderlyingCurrentValue_78.setString("10159815");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_78, UnderlyingInstrument_78);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_78;
    UnderlyingDetachmentPoint_78.setString("8.700000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_78, UnderlyingInstrument_78);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_78;
    UnderlyingDirtyPrice_78.setString("17569314");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_78, UnderlyingInstrument_78);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_78;
    UnderlyingEndPrice_78.setString("13957892");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_78, UnderlyingInstrument_78);
    FIX::UnderlyingEndValue UnderlyingEndValue_78;
    UnderlyingEndValue_78.setString("18226310");
set_field(noUnderlyings_0_0, UnderlyingEndValue_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1504322490}, UnderlyingInstrument_78);
    FIX::UnderlyingFXRate UnderlyingFXRate_78;
    UnderlyingFXRate_78.setString("19146744");
set_field(noUnderlyings_0_0, UnderlyingFXRate_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_78);
    FIX::UnderlyingFactor UnderlyingFactor_78;
    UnderlyingFactor_78.setString("14585920");
set_field(noUnderlyings_0_0, UnderlyingFactor_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1511668323}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1830258162"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_255126681"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1192837707"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1604211471"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_293504040"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1976614676"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1248667449"}, UnderlyingInstrument_78);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_78;
    UnderlyingNotionalPercentageOutstanding_78.setString("52.770000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_78);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_78;
    UnderlyingOriginalNotionalPercentageOutstanding_78.setString("42.030000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1429695127"}, UnderlyingInstrument_78);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_78;
    UnderlyingPriceUnitOfMeasureQty_78.setString("2704943");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1211594159}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{799796748}, UnderlyingInstrument_78);
    FIX::UnderlyingPx UnderlyingPx_78;
    UnderlyingPx_78.setString("3117516");
set_field(noUnderlyings_0_0, UnderlyingPx_78, UnderlyingInstrument_78);
    FIX::UnderlyingQty UnderlyingQty_78;
    UnderlyingQty_78.setString("486832");
set_field(noUnderlyings_0_0, UnderlyingQty_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_93105991"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_820705419"}, UnderlyingInstrument_78);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_78;
    UnderlyingRepurchaseRate_78.setString("10.240000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1882675477}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1834131014"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1717922608"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_712682700"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1443578850"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_966228240"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_387830073"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_800417692"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_733419027"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_648146792"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_78);
    FIX::UnderlyingStartValue UnderlyingStartValue_78;
    UnderlyingStartValue_78.setString("976037");
set_field(noUnderlyings_0_0, UnderlyingStartValue_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_330921306"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_78);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_78;
    UnderlyingStrikePrice_78.setString("19351327");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_660156860"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1119572438"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1036316579"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1649322137"}, UnderlyingInstrument_78);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_78;
    UnderlyingUnitOfMeasureQty_78.setString("5536951");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_78, UnderlyingInstrument_78);
    all_values.push_back(UnderlyingInstrument_78);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_163;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_931533617"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_163);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_824189538"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_163);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_163);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_164;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1266521293"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_164);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1731330365"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_164);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_164);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_165;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1135941191"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_165);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1315204512"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_165);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_165);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_158;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1956646610"}, UnderlyingStipulations_NoUnderlyingStips_158);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_2017145536"}, UnderlyingStipulations_NoUnderlyingStips_158);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_158);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_169;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1643293976"}, UndlyInstrumentParties_NoUndlyInstrumentParties_169);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_169);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{124827238}, UndlyInstrumentParties_NoUndlyInstrumentParties_169);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_169);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_406329089"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{512657311}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_58;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_0"}, header_58);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1139748116"}, header_58);
  set_header_field(msg.getHeader(), FIX::BodyLength{1160804103}, header_58);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1851333008"}, header_58);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1237351818"}, header_58);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1491725410"}, header_58);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_70502180"}, header_58);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{380309580}, header_58);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_58);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{730659040}, header_58);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1499882018"}, header_58);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_168207471"}, header_58);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_232497529"}, header_58);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(5, 6, 7, 10, 5, 2012)}, header_58);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_58);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_58);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1675387261"}, header_58);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{527038651}, header_58);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1984458758"}, header_58);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1171197589"}, header_58);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_2114623148"}, header_58);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(8, 29, 59, 26, 3, 2015)}, header_58);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1406759351"}, header_58);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_603084876"}, header_58);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_979505525"}, header_58);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1477261531"}, header_58);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{983394456}, header_58);
  all_values.push_back(header_58);
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
