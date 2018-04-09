#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::OrderMassActionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionReport_0;
  set_field(msg, FIX::ClOrdID{"STRING_111396417"}, OrderMassActionReport_0);
  set_field(msg, FIX::EncodedText{"DATA_60436923"}, OrderMassActionReport_0);
  set_field(msg, FIX::EncodedTextLen{335792826}, OrderMassActionReport_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_279603888"}, OrderMassActionReport_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_292934452"}, OrderMassActionReport_0);
  set_field(msg, FIX::MassActionRejectReason{10}, OrderMassActionReport_0);
  set_field(msg, FIX::MassActionReportID{"STRING_502738493"}, OrderMassActionReport_0);
  set_field(msg, FIX::MassActionResponse{1}, OrderMassActionReport_0);
  set_field(msg, FIX::MassActionScope{4}, OrderMassActionReport_0);
  set_field(msg, FIX::MassActionType{3}, OrderMassActionReport_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_57359815"}, OrderMassActionReport_0);
  set_field(msg, FIX::Side{'B'}, OrderMassActionReport_0);
  set_field(msg, FIX::Text{"STRING_502287506"}, OrderMassActionReport_0);
  set_field(msg, FIX::TotalAffectedOrders{482190387}, OrderMassActionReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, OrderMassActionReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_7"}, OrderMassActionReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(20, 57, 26, 0, 3, 2014)}, OrderMassActionReport_0);
  all_values.push_back(OrderMassActionReport_0);

  all_compo_names.insert("OrderMassActionReport");

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_0;
    set_field(noAffectedOrders_0_0, FIX::AffectedOrderID{"STRING_735667304"}, AffectedOrdGrp_NoAffectedOrders_0);
    set_field(noAffectedOrders_0_0, FIX::AffectedSecondaryOrderID{"STRING_243207621"}, AffectedOrdGrp_NoAffectedOrders_0);
    set_field(noAffectedOrders_0_0, FIX::OrigClOrdID{"STRING_167816522"}, AffectedOrdGrp_NoAffectedOrders_0);
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_0);
    all_compo_names.insert("...NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_1;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_1;
    set_field(noAffectedOrders_0_1, FIX::AffectedOrderID{"STRING_1338752181"}, AffectedOrdGrp_NoAffectedOrders_1);
    set_field(noAffectedOrders_0_1, FIX::AffectedSecondaryOrderID{"STRING_1222713146"}, AffectedOrdGrp_NoAffectedOrders_1);
    set_field(noAffectedOrders_0_1, FIX::OrigClOrdID{"STRING_1645078053"}, AffectedOrdGrp_NoAffectedOrders_1);
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_1);
    all_compo_names.insert("...NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoAffectedOrders noAffectedOrders_0_2;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_2;
    set_field(noAffectedOrders_0_2, FIX::AffectedOrderID{"STRING_174662989"}, AffectedOrdGrp_NoAffectedOrders_2);
    set_field(noAffectedOrders_0_2, FIX::AffectedSecondaryOrderID{"STRING_1334109563"}, AffectedOrdGrp_NoAffectedOrders_2);
    set_field(noAffectedOrders_0_2, FIX::OrigClOrdID{"STRING_1705514976"}, AffectedOrdGrp_NoAffectedOrders_2);
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_2);
    all_compo_names.insert("...NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_2);
  }
  // Instrument
  multiset<string> Instrument_57;
  FIX::AttachmentPoint AttachmentPoint_57;
  AttachmentPoint_57.setString("58.160000");
set_field(msg, AttachmentPoint_57, Instrument_57);
  set_field(msg, FIX::CFICode{"STRING_1613713451"}, Instrument_57);
  set_field(msg, FIX::CPProgram{2}, Instrument_57);
  set_field(msg, FIX::CPRegType{"STRING_752342212"}, Instrument_57);
  FIX::CapPrice CapPrice_57;
  CapPrice_57.setString("21164519");
set_field(msg, CapPrice_57, Instrument_57);
  FIX::ContractMultiplier ContractMultiplier_57;
  ContractMultiplier_57.setString("13079313");
set_field(msg, ContractMultiplier_57, Instrument_57);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_57);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1961362687"}, Instrument_57);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1365291194"}, Instrument_57);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_267938221"}, Instrument_57);
  FIX::CouponRate CouponRate_57;
  CouponRate_57.setString("65.450000");
set_field(msg, CouponRate_57, Instrument_57);
  set_field(msg, FIX::CreditRating{"STRING_1847481582"}, Instrument_57);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_486751988"}, Instrument_57);
  FIX::DetachmentPoint DetachmentPoint_57;
  DetachmentPoint_57.setString("27.020000");
set_field(msg, DetachmentPoint_57, Instrument_57);
  set_field(msg, FIX::EncodedIssuer{"DATA_19163432"}, Instrument_57);
  set_field(msg, FIX::EncodedIssuerLen{1876763345}, Instrument_57);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_194474711"}, Instrument_57);
  set_field(msg, FIX::EncodedSecurityDescLen{300131278}, Instrument_57);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_57);
  FIX::Factor Factor_57;
  Factor_57.setString("15644089");
set_field(msg, Factor_57, Instrument_57);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_57);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_57);
  FIX::FloorPrice FloorPrice_57;
  FloorPrice_57.setString("1525926");
set_field(msg, FloorPrice_57, Instrument_57);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_57);
  set_field(msg, FIX::InstrRegistry{"STRING_11267866"}, Instrument_57);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_57);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_373995903"}, Instrument_57);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1656345919"}, Instrument_57);
  set_field(msg, FIX::Issuer{"STRING_1666007785"}, Instrument_57);
  set_field(msg, FIX::ListMethod{0}, Instrument_57);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1214377247"}, Instrument_57);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_28979953"}, Instrument_57);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1174335269"}, Instrument_57);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1065343028"}, Instrument_57);
  FIX::MinPriceIncrement MinPriceIncrement_57;
  MinPriceIncrement_57.setString("7813221");
set_field(msg, MinPriceIncrement_57, Instrument_57);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_57;
  MinPriceIncrementAmount_57.setString("11433035");
set_field(msg, MinPriceIncrementAmount_57, Instrument_57);
  set_field(msg, FIX::NTPositionLimit{225790759}, Instrument_57);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_57;
  NotionalPercentageOutstanding_57.setString("2.320000");
set_field(msg, NotionalPercentageOutstanding_57, Instrument_57);
  set_field(msg, FIX::OptAttribute{'9'}, Instrument_57);
  FIX::OptPayoutAmount OptPayoutAmount_57;
  OptPayoutAmount_57.setString("15910819");
set_field(msg, OptPayoutAmount_57, Instrument_57);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_57);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_57;
  OriginalNotionalPercentageOutstanding_57.setString("91.500000");
set_field(msg, OriginalNotionalPercentageOutstanding_57, Instrument_57);
  set_field(msg, FIX::Pool{"STRING_1291079888"}, Instrument_57);
  set_field(msg, FIX::PositionLimit{1113040442}, Instrument_57);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_57);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1310243320"}, Instrument_57);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_57;
  PriceUnitOfMeasureQty_57.setString("8423201");
set_field(msg, PriceUnitOfMeasureQty_57, Instrument_57);
  set_field(msg, FIX::Product{9}, Instrument_57);
  set_field(msg, FIX::ProductComplex{"STRING_1610374598"}, Instrument_57);
  set_field(msg, FIX::PutOrCall{1}, Instrument_57);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_82758226"}, Instrument_57);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_518449735"}, Instrument_57);
  FIX::RepurchaseRate RepurchaseRate_57;
  RepurchaseRate_57.setString("56.570000");
set_field(msg, RepurchaseRate_57, Instrument_57);
  set_field(msg, FIX::RepurchaseTerm{235350841}, Instrument_57);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_57);
  set_field(msg, FIX::SecurityDesc{"STRING_1779433524"}, Instrument_57);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1726695636"}, Instrument_57);
  set_field(msg, FIX::SecurityGroup{"STRING_43728396"}, Instrument_57);
  set_field(msg, FIX::SecurityID{"STRING_1288295795"}, Instrument_57);
  set_field(msg, FIX::SecurityIDSource{"STRING_I"}, Instrument_57);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_57);
  set_field(msg, FIX::SecuritySubType{"STRING_355189395"}, Instrument_57);
  set_field(msg, FIX::SecurityType{"STRING_PFAND"}, Instrument_57);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_57);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_57);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_2055521891"}, Instrument_57);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1921989049"}, Instrument_57);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_57);
  FIX::StrikeMultiplier StrikeMultiplier_57;
  StrikeMultiplier_57.setString("7316880");
set_field(msg, StrikeMultiplier_57, Instrument_57);
  FIX::StrikePrice StrikePrice_57;
  StrikePrice_57.setString("10899214");
set_field(msg, StrikePrice_57, Instrument_57);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_57);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_57;
  StrikePriceBoundaryPrecision_57.setString("71.570000");
set_field(msg, StrikePriceBoundaryPrecision_57, Instrument_57);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_57);
  FIX::StrikeValue StrikeValue_57;
  StrikeValue_57.setString("20057173");
set_field(msg, StrikeValue_57, Instrument_57);
  set_field(msg, FIX::Symbol{"STRING_328911714"}, Instrument_57);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_57);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_57);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_57);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_57);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_57;
  UnitOfMeasureQty_57.setString("4777845");
set_field(msg, UnitOfMeasureQty_57, Instrument_57);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_57);
  all_values.push_back(Instrument_57);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_113;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_113);
    FIX::ComplexEventPrice ComplexEventPrice_113;
    ComplexEventPrice_113.setString("13128536");
set_field(noComplexEvents_0_0, ComplexEventPrice_113, ComplexEvents_NoComplexEvents_113);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_113);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_113;
    ComplexEventPriceBoundaryPrecision_113.setString("0.620000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_113, ComplexEvents_NoComplexEvents_113);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_113);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_113);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_113;
    ComplexOptPayoutAmount_113.setString("10187122");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_113, ComplexEvents_NoComplexEvents_113);
    all_values.push_back(ComplexEvents_NoComplexEvents_113);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_222;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 18, 41, 20, 11, 2016)}, ComplexEventDates_NoComplexEventDates_222);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 29, 3, 4, 7, 2011)}, ComplexEventDates_NoComplexEventDates_222);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_222);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_446;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 28, 14)}, ComplexEventTimes_NoComplexEventTimes_446);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 3, 17)}, ComplexEventTimes_NoComplexEventTimes_446);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_446);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_447;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 55, 10)}, ComplexEventTimes_NoComplexEventTimes_447);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 0, 32)}, ComplexEventTimes_NoComplexEventTimes_447);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_447);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_448;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 50, 8)}, ComplexEventTimes_NoComplexEventTimes_448);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 22, 12)}, ComplexEventTimes_NoComplexEventTimes_448);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_448);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_223;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 7, 22, 9, 11, 2001)}, ComplexEventDates_NoComplexEventDates_223);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 27, 4, 17, 2, 2013)}, ComplexEventDates_NoComplexEventDates_223);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_223);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_449;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 10, 23)}, ComplexEventTimes_NoComplexEventTimes_449);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 16, 1)}, ComplexEventTimes_NoComplexEventTimes_449);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_449);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_450;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 43, 55)}, ComplexEventTimes_NoComplexEventTimes_450);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 9, 19)}, ComplexEventTimes_NoComplexEventTimes_450);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_450);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_451;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 26, 17)}, ComplexEventTimes_NoComplexEventTimes_451);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 16, 36)}, ComplexEventTimes_NoComplexEventTimes_451);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_451);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_224;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 40, 28, 16, 12, 2013)}, ComplexEventDates_NoComplexEventDates_224);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 53, 21, 17, 2, 2017)}, ComplexEventDates_NoComplexEventDates_224);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_224);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_452;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 46, 47)}, ComplexEventTimes_NoComplexEventTimes_452);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 56, 0)}, ComplexEventTimes_NoComplexEventTimes_452);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_452);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_453;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 18, 37)}, ComplexEventTimes_NoComplexEventTimes_453);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 45, 40)}, ComplexEventTimes_NoComplexEventTimes_453);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_453);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_454;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 12, 30)}, ComplexEventTimes_NoComplexEventTimes_454);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 13, 19)}, ComplexEventTimes_NoComplexEventTimes_454);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_454);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_114;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_114);
    FIX::ComplexEventPrice ComplexEventPrice_114;
    ComplexEventPrice_114.setString("2472482");
set_field(noComplexEvents_0_1, ComplexEventPrice_114, ComplexEvents_NoComplexEvents_114);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_114);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_114;
    ComplexEventPriceBoundaryPrecision_114.setString("19.210000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_114, ComplexEvents_NoComplexEvents_114);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_114);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_114);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_114;
    ComplexOptPayoutAmount_114.setString("16701032");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_114, ComplexEvents_NoComplexEvents_114);
    all_values.push_back(ComplexEvents_NoComplexEvents_114);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_225;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 50, 17, 4, 4, 2003)}, ComplexEventDates_NoComplexEventDates_225);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 28, 30, 16, 8, 2015)}, ComplexEventDates_NoComplexEventDates_225);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_225);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_455;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 8, 39)}, ComplexEventTimes_NoComplexEventTimes_455);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 53, 1)}, ComplexEventTimes_NoComplexEventTimes_455);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_455);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_456;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 41, 13)}, ComplexEventTimes_NoComplexEventTimes_456);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 49, 58)}, ComplexEventTimes_NoComplexEventTimes_456);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_456);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_457;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 41, 26)}, ComplexEventTimes_NoComplexEventTimes_457);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 36, 36)}, ComplexEventTimes_NoComplexEventTimes_457);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_457);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_115;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_115);
    FIX::ComplexEventPrice ComplexEventPrice_115;
    ComplexEventPrice_115.setString("398043");
set_field(noComplexEvents_0_2, ComplexEventPrice_115, ComplexEvents_NoComplexEvents_115);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_115);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_115;
    ComplexEventPriceBoundaryPrecision_115.setString("13.530000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_115, ComplexEvents_NoComplexEvents_115);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_115);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_115);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_115;
    ComplexOptPayoutAmount_115.setString("1645927");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_115, ComplexEvents_NoComplexEvents_115);
    all_values.push_back(ComplexEvents_NoComplexEvents_115);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_226;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 43, 24, 26, 1, 2017)}, ComplexEventDates_NoComplexEventDates_226);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 58, 7, 19, 9, 2003)}, ComplexEventDates_NoComplexEventDates_226);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_226);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_458;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 38, 16)}, ComplexEventTimes_NoComplexEventTimes_458);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 44, 12)}, ComplexEventTimes_NoComplexEventTimes_458);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_458);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_459;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 10, 16)}, ComplexEventTimes_NoComplexEventTimes_459);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 37, 47)}, ComplexEventTimes_NoComplexEventTimes_459);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_459);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::OrderMassActionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_460;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 30, 13)}, ComplexEventTimes_NoComplexEventTimes_460);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 30, 23)}, ComplexEventTimes_NoComplexEventTimes_460);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_460);
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
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_122;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1845561080"}, EvntGrp_NoEvents_122);
    FIX::EventPx EventPx_122;
    EventPx_122.setString("16383935");
set_field(noEvents_0_0, EventPx_122, EvntGrp_NoEvents_122);
    set_field(noEvents_0_0, FIX::EventText{"STRING_2031345446"}, EvntGrp_NoEvents_122);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(8, 23, 34, 16, 7, 2006)}, EvntGrp_NoEvents_122);
    set_field(noEvents_0_0, FIX::EventType{9}, EvntGrp_NoEvents_122);
    all_values.push_back(EvntGrp_NoEvents_122);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_123;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_577635268"}, EvntGrp_NoEvents_123);
    FIX::EventPx EventPx_123;
    EventPx_123.setString("47923");
set_field(noEvents_0_1, EventPx_123, EvntGrp_NoEvents_123);
    set_field(noEvents_0_1, FIX::EventText{"STRING_314440132"}, EvntGrp_NoEvents_123);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(22, 2, 35, 13, 7, 2001)}, EvntGrp_NoEvents_123);
    set_field(noEvents_0_1, FIX::EventType{1}, EvntGrp_NoEvents_123);
    all_values.push_back(EvntGrp_NoEvents_123);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_109;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_327749652"}, InstrumentParties_NoInstrumentParties_109);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_109);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1748895021}, InstrumentParties_NoInstrumentParties_109);
    all_values.push_back(InstrumentParties_NoInstrumentParties_109);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1423011101"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1622733163}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_110;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1582677785"}, InstrumentParties_NoInstrumentParties_110);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_110);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1320810596}, InstrumentParties_NoInstrumentParties_110);
    all_values.push_back(InstrumentParties_NoInstrumentParties_110);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1092659890"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1450397740}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_102092560"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{860761766}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_117;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_896625533"}, SecAltIDGrp_NoSecurityAltID_117);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_186552852"}, SecAltIDGrp_NoSecurityAltID_117);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_117);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_114;
  set_field(msg, FIX::SecurityXML{"XMLDATA_738100900"}, SecurityXML_114);
  set_field(msg, FIX::SecurityXMLLen{171064473}, SecurityXML_114);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_764188120"}, SecurityXML_114);
  all_values.push_back(SecurityXML_114);
  all_compo_names.insert("..");

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassActionReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_0;
    set_field(noNotAffectedOrders_0_0, FIX::NotAffOrigClOrdID{"STRING_485504606"}, NotAffectedOrdersGrp_NoNotAffectedOrders_0);
    set_field(noNotAffectedOrders_0_0, FIX::NotAffectedOrderID{"STRING_1846079400"}, NotAffectedOrdersGrp_NoNotAffectedOrders_0);
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_0);
    all_compo_names.insert("...NoNotAffectedOrders");

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoNotAffectedOrders noNotAffectedOrders_0_1;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_1;
    set_field(noNotAffectedOrders_0_1, FIX::NotAffOrigClOrdID{"STRING_1220902856"}, NotAffectedOrdersGrp_NoNotAffectedOrders_1);
    set_field(noNotAffectedOrders_0_1, FIX::NotAffectedOrderID{"STRING_1318985068"}, NotAffectedOrdersGrp_NoNotAffectedOrders_1);
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_1);
    all_compo_names.insert("...NoNotAffectedOrders");

    msg.addGroup(noNotAffectedOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_94;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1276178369"}, Parties_NoPartyIDs_94);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_94);
    set_field(noPartyIDs_0_0, FIX::PartyRole{46}, Parties_NoPartyIDs_94);
    all_values.push_back(Parties_NoPartyIDs_94);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_185;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_72335146"}, PtysSubGrp_NoPartySubIDs_185);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_185);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_185);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_186;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1109036904"}, PtysSubGrp_NoPartySubIDs_186);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_186);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_186);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassActionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_187;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1380641967"}, PtysSubGrp_NoPartySubIDs_187);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_187);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_187);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassActionReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_3;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_815836104"}, TargetParties_NoTargetPartyIDs_3);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_3);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{469806630}, TargetParties_NoTargetPartyIDs_3);
    all_values.push_back(TargetParties_NoTargetPartyIDs_3);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_79;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_1889423753"}, UnderlyingInstrument_79);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{538538692}, UnderlyingInstrument_79);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_1920204371"}, UnderlyingInstrument_79);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{1991516313}, UnderlyingInstrument_79);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_79;
  UnderlyingAdjustedQuantity_79.setString("13993004");
set_field(msg, UnderlyingAdjustedQuantity_79, UnderlyingInstrument_79);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_79;
  UnderlyingAllocationPercent_79.setString("20.290000");
set_field(msg, UnderlyingAllocationPercent_79, UnderlyingInstrument_79);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_79;
  UnderlyingAttachmentPoint_79.setString("81.980000");
set_field(msg, UnderlyingAttachmentPoint_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_1585853310"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_1677542930"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_911722672"}, UnderlyingInstrument_79);
  FIX::UnderlyingCapValue UnderlyingCapValue_79;
  UnderlyingCapValue_79.setString("2025577");
set_field(msg, UnderlyingCapValue_79, UnderlyingInstrument_79);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_79;
  UnderlyingCashAmount_79.setString("2729525");
set_field(msg, UnderlyingCashAmount_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_79);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_79;
  UnderlyingContractMultiplier_79.setString("20486371");
set_field(msg, UnderlyingContractMultiplier_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{1493855437}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_568728698"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_742654282"}, UnderlyingInstrument_79);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_79;
  UnderlyingCouponRate_79.setString("1.580000");
set_field(msg, UnderlyingCouponRate_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_431423237"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_79);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_79;
  UnderlyingCurrentValue_79.setString("5037583");
set_field(msg, UnderlyingCurrentValue_79, UnderlyingInstrument_79);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_79;
  UnderlyingDetachmentPoint_79.setString("10.400000");
set_field(msg, UnderlyingDetachmentPoint_79, UnderlyingInstrument_79);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_79;
  UnderlyingDirtyPrice_79.setString("777266");
set_field(msg, UnderlyingDirtyPrice_79, UnderlyingInstrument_79);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_79;
  UnderlyingEndPrice_79.setString("1775049");
set_field(msg, UnderlyingEndPrice_79, UnderlyingInstrument_79);
  FIX::UnderlyingEndValue UnderlyingEndValue_79;
  UnderlyingEndValue_79.setString("4286193");
set_field(msg, UnderlyingEndValue_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingExerciseStyle{462290993}, UnderlyingInstrument_79);
  FIX::UnderlyingFXRate UnderlyingFXRate_79;
  UnderlyingFXRate_79.setString("14739845");
set_field(msg, UnderlyingFXRate_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_79);
  FIX::UnderlyingFactor UnderlyingFactor_79;
  UnderlyingFactor_79.setString("20556534");
set_field(msg, UnderlyingFactor_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingFlowScheduleType{1943791215}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_986395568"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_446708488"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_1716511938"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_830428234"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1846008946"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_508470319"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1571086432"}, UnderlyingInstrument_79);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_79;
  UnderlyingNotionalPercentageOutstanding_79.setString("86.090000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_79);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_79;
  UnderlyingOriginalNotionalPercentageOutstanding_79.setString("54.560000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1486936392"}, UnderlyingInstrument_79);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_79;
  UnderlyingPriceUnitOfMeasureQty_79.setString("3114821");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingProduct{1732552734}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingPutOrCall{1388089927}, UnderlyingInstrument_79);
  FIX::UnderlyingPx UnderlyingPx_79;
  UnderlyingPx_79.setString("18053376");
set_field(msg, UnderlyingPx_79, UnderlyingInstrument_79);
  FIX::UnderlyingQty UnderlyingQty_79;
  UnderlyingQty_79.setString("1537977");
set_field(msg, UnderlyingQty_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2130744209"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_280404129"}, UnderlyingInstrument_79);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_79;
  UnderlyingRepurchaseRate_79.setString("10.220000");
set_field(msg, UnderlyingRepurchaseRate_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{788443396}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_1396577509"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_1088979405"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_1983904436"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_1474304145"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_1266484307"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_265040147"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_1936595139"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_592985243"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_1509495611"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_79);
  FIX::UnderlyingStartValue UnderlyingStartValue_79;
  UnderlyingStartValue_79.setString("3892928");
set_field(msg, UnderlyingStartValue_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_348407531"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_79);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_79;
  UnderlyingStrikePrice_79.setString("11788357");
set_field(msg, UnderlyingStrikePrice_79, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_1989998721"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_466791420"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_602438550"}, UnderlyingInstrument_79);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_1126893682"}, UnderlyingInstrument_79);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_79;
  UnderlyingUnitOfMeasureQty_79.setString("5053210");
set_field(msg, UnderlyingUnitOfMeasureQty_79, UnderlyingInstrument_79);
  all_values.push_back(UnderlyingInstrument_79);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_166;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_466346426"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_166);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_816803203"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_166);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_166);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_159;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_1854436353"}, UnderlyingStipulations_NoUnderlyingStips_159);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_474657174"}, UnderlyingStipulations_NoUnderlyingStips_159);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_159);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_160;
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipType{"STRING_676630878"}, UnderlyingStipulations_NoUnderlyingStips_160);
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipValue{"STRING_1837696914"}, UnderlyingStipulations_NoUnderlyingStips_160);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_160);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::OrderMassActionReport::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_161;
    set_field(noUnderlyingStips_0_2, FIX::UnderlyingStipType{"STRING_755061304"}, UnderlyingStipulations_NoUnderlyingStips_161);
    set_field(noUnderlyingStips_0_2, FIX::UnderlyingStipValue{"STRING_1261851900"}, UnderlyingStipulations_NoUnderlyingStips_161);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_161);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_170;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_4155165"}, UndlyInstrumentParties_NoUndlyInstrumentParties_170);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_170);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{315077451}, UndlyInstrumentParties_NoUndlyInstrumentParties_170);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_170);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1469831964"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{580117599}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassActionReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1267570802"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{2062817207}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  // header
  multiset<string> header_59;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_0"}, header_59);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_964852088"}, header_59);
  set_header_field(msg.getHeader(), FIX::BodyLength{304626370}, header_59);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_290537093"}, header_59);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1108841863"}, header_59);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_262947470"}, header_59);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1469372859"}, header_59);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{951356936}, header_59);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_59);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{2071811409}, header_59);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_2078250618"}, header_59);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1235059912"}, header_59);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_862091767"}, header_59);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(11, 0, 1, 26, 7, 2001)}, header_59);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_59);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_59);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_272936030"}, header_59);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1138253111}, header_59);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1379271647"}, header_59);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_588013482"}, header_59);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_469228774"}, header_59);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(9, 36, 43, 23, 2, 2017)}, header_59);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1400797736"}, header_59);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1663009880"}, header_59);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1184527363"}, header_59);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_722686947"}, header_59);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{466883168}, header_59);
  all_values.push_back(header_59);
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
