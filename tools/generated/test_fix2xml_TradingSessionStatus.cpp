#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionStatus, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionStatus msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatus_0;
  set_field(msg, FIX::EncodedText{"DATA_474268040"}, TradingSessionStatus_0);
  set_field(msg, FIX::EncodedTextLen{1119082186}, TradingSessionStatus_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_644990240"}, TradingSessionStatus_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1983149285"}, TradingSessionStatus_0);
  set_field(msg, FIX::Text{"STRING_2058497420"}, TradingSessionStatus_0);
  FIX::TotalVolumeTraded TotalVolumeTraded_3;
  TotalVolumeTraded_3.setString("8059929");
set_field(msg, TotalVolumeTraded_3, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesCloseTime{FIX::UTCTIMESTAMP(11, 13, 31, 12, 1, 2015)}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesEndTime{FIX::UTCTIMESTAMP(10, 42, 59, 11, 7, 2015)}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesEvent{1}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesMethod{2}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesMode{3}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesOpenTime{FIX::UTCTIMESTAMP(6, 44, 59, 4, 6, 2006)}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesPreCloseTime{FIX::UTCTIMESTAMP(18, 11, 42, 3, 12, 2010)}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesReqID{"STRING_1362755263"}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesStartTime{FIX::UTCTIMESTAMP(3, 14, 7, 15, 4, 2007)}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesStatus{1}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesStatusRejReason{99}, TradingSessionStatus_0);
  set_field(msg, FIX::TradingSessionID{"STRING_1"}, TradingSessionStatus_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, TradingSessionStatus_0);
  set_field(msg, FIX::UnsolicitedIndicator{true}, TradingSessionStatus_0);
  all_values.push_back(TradingSessionStatus_0);

  all_compo_names.insert("TradingSessionStatus");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_22;
  set_field(msg, FIX::ApplID{"STRING_647406037"}, ApplicationSequenceControl_22);
  set_field(msg, FIX::ApplLastSeqNum{1073492146}, ApplicationSequenceControl_22);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_22);
  set_field(msg, FIX::ApplSeqNum{171846169}, ApplicationSequenceControl_22);
  all_values.push_back(ApplicationSequenceControl_22);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_86;
  FIX::AttachmentPoint AttachmentPoint_86;
  AttachmentPoint_86.setString("65.860000");
set_field(msg, AttachmentPoint_86, Instrument_86);
  set_field(msg, FIX::CFICode{"STRING_1136848969"}, Instrument_86);
  set_field(msg, FIX::CPProgram{1}, Instrument_86);
  set_field(msg, FIX::CPRegType{"STRING_395967478"}, Instrument_86);
  FIX::CapPrice CapPrice_86;
  CapPrice_86.setString("3280167");
set_field(msg, CapPrice_86, Instrument_86);
  FIX::ContractMultiplier ContractMultiplier_86;
  ContractMultiplier_86.setString("13530389");
set_field(msg, ContractMultiplier_86, Instrument_86);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_86);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1626033451"}, Instrument_86);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1449937993"}, Instrument_86);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_583984105"}, Instrument_86);
  FIX::CouponRate CouponRate_86;
  CouponRate_86.setString("67.850000");
set_field(msg, CouponRate_86, Instrument_86);
  set_field(msg, FIX::CreditRating{"STRING_1382502640"}, Instrument_86);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_74805461"}, Instrument_86);
  FIX::DetachmentPoint DetachmentPoint_86;
  DetachmentPoint_86.setString("30.190000");
set_field(msg, DetachmentPoint_86, Instrument_86);
  set_field(msg, FIX::EncodedIssuer{"DATA_597774255"}, Instrument_86);
  set_field(msg, FIX::EncodedIssuerLen{1364341460}, Instrument_86);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_2071996639"}, Instrument_86);
  set_field(msg, FIX::EncodedSecurityDescLen{381429321}, Instrument_86);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_86);
  FIX::Factor Factor_86;
  Factor_86.setString("7754625");
set_field(msg, Factor_86, Instrument_86);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_86);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_86);
  FIX::FloorPrice FloorPrice_86;
  FloorPrice_86.setString("8025223");
set_field(msg, FloorPrice_86, Instrument_86);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_86);
  set_field(msg, FIX::InstrRegistry{"STRING_391164889"}, Instrument_86);
  set_field(msg, FIX::InstrmtAssignmentMethod{'9'}, Instrument_86);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_559873642"}, Instrument_86);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1038570926"}, Instrument_86);
  set_field(msg, FIX::Issuer{"STRING_2066576964"}, Instrument_86);
  set_field(msg, FIX::ListMethod{0}, Instrument_86);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1210417096"}, Instrument_86);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1587479903"}, Instrument_86);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_964714975"}, Instrument_86);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_793341461"}, Instrument_86);
  FIX::MinPriceIncrement MinPriceIncrement_86;
  MinPriceIncrement_86.setString("19834473");
set_field(msg, MinPriceIncrement_86, Instrument_86);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_86;
  MinPriceIncrementAmount_86.setString("12927316");
set_field(msg, MinPriceIncrementAmount_86, Instrument_86);
  set_field(msg, FIX::NTPositionLimit{2146380444}, Instrument_86);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_86;
  NotionalPercentageOutstanding_86.setString("2.550000");
set_field(msg, NotionalPercentageOutstanding_86, Instrument_86);
  set_field(msg, FIX::OptAttribute{'7'}, Instrument_86);
  FIX::OptPayoutAmount OptPayoutAmount_86;
  OptPayoutAmount_86.setString("14488347");
set_field(msg, OptPayoutAmount_86, Instrument_86);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_86);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_86;
  OriginalNotionalPercentageOutstanding_86.setString("46.260000");
set_field(msg, OriginalNotionalPercentageOutstanding_86, Instrument_86);
  set_field(msg, FIX::Pool{"STRING_683853782"}, Instrument_86);
  set_field(msg, FIX::PositionLimit{1498929822}, Instrument_86);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_86);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1281628037"}, Instrument_86);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_86;
  PriceUnitOfMeasureQty_86.setString("7157876");
set_field(msg, PriceUnitOfMeasureQty_86, Instrument_86);
  set_field(msg, FIX::Product{13}, Instrument_86);
  set_field(msg, FIX::ProductComplex{"STRING_1663057359"}, Instrument_86);
  set_field(msg, FIX::PutOrCall{1}, Instrument_86);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_620919563"}, Instrument_86);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_704520920"}, Instrument_86);
  FIX::RepurchaseRate RepurchaseRate_86;
  RepurchaseRate_86.setString("48.120000");
set_field(msg, RepurchaseRate_86, Instrument_86);
  set_field(msg, FIX::RepurchaseTerm{1423441892}, Instrument_86);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_86);
  set_field(msg, FIX::SecurityDesc{"STRING_1263879701"}, Instrument_86);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_269043062"}, Instrument_86);
  set_field(msg, FIX::SecurityGroup{"STRING_1387350153"}, Instrument_86);
  set_field(msg, FIX::SecurityID{"STRING_154966979"}, Instrument_86);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_86);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_86);
  set_field(msg, FIX::SecuritySubType{"STRING_1365384075"}, Instrument_86);
  set_field(msg, FIX::SecurityType{"STRING_ONITE"}, Instrument_86);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_86);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_86);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1611580014"}, Instrument_86);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1325179172"}, Instrument_86);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_86);
  FIX::StrikeMultiplier StrikeMultiplier_86;
  StrikeMultiplier_86.setString("20964606");
set_field(msg, StrikeMultiplier_86, Instrument_86);
  FIX::StrikePrice StrikePrice_86;
  StrikePrice_86.setString("14589734");
set_field(msg, StrikePrice_86, Instrument_86);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_86);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_86;
  StrikePriceBoundaryPrecision_86.setString("52.870000");
set_field(msg, StrikePriceBoundaryPrecision_86, Instrument_86);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_86);
  FIX::StrikeValue StrikeValue_86;
  StrikeValue_86.setString("10798071");
set_field(msg, StrikeValue_86, Instrument_86);
  set_field(msg, FIX::Symbol{"STRING_2062759285"}, Instrument_86);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_86);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_86);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_86);
  set_field(msg, FIX::UnitOfMeasure{"STRING_lbs"}, Instrument_86);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_86;
  UnitOfMeasureQty_86.setString("688397");
set_field(msg, UnitOfMeasureQty_86, Instrument_86);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_86);
  all_values.push_back(Instrument_86);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_172;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_172);
    FIX::ComplexEventPrice ComplexEventPrice_172;
    ComplexEventPrice_172.setString("18050940");
set_field(noComplexEvents_0_0, ComplexEventPrice_172, ComplexEvents_NoComplexEvents_172);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_172);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_172;
    ComplexEventPriceBoundaryPrecision_172.setString("6.010000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_172, ComplexEvents_NoComplexEvents_172);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_172);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_172);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_172;
    ComplexOptPayoutAmount_172.setString("2129175");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_172, ComplexEvents_NoComplexEvents_172);
    all_values.push_back(ComplexEvents_NoComplexEvents_172);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_357;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 16, 10, 9, 3, 2006)}, ComplexEventDates_NoComplexEventDates_357);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 35, 58, 3, 8, 2009)}, ComplexEventDates_NoComplexEventDates_357);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_357);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_727;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 19, 39)}, ComplexEventTimes_NoComplexEventTimes_727);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 29, 52)}, ComplexEventTimes_NoComplexEventTimes_727);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_727);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_728;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 32, 18)}, ComplexEventTimes_NoComplexEventTimes_728);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 39, 33)}, ComplexEventTimes_NoComplexEventTimes_728);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_728);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_358;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 41, 32, 17, 1, 2012)}, ComplexEventDates_NoComplexEventDates_358);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 34, 46, 20, 10, 2001)}, ComplexEventDates_NoComplexEventDates_358);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_358);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_729;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 12, 4)}, ComplexEventTimes_NoComplexEventTimes_729);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 25, 26)}, ComplexEventTimes_NoComplexEventTimes_729);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_729);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_173;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_173);
    FIX::ComplexEventPrice ComplexEventPrice_173;
    ComplexEventPrice_173.setString("11420604");
set_field(noComplexEvents_0_1, ComplexEventPrice_173, ComplexEvents_NoComplexEvents_173);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_173);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_173;
    ComplexEventPriceBoundaryPrecision_173.setString("45.060000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_173, ComplexEvents_NoComplexEvents_173);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_173);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_173);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_173;
    ComplexOptPayoutAmount_173.setString("19441581");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_173, ComplexEvents_NoComplexEvents_173);
    all_values.push_back(ComplexEvents_NoComplexEvents_173);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_359;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 58, 29, 22, 3, 2016)}, ComplexEventDates_NoComplexEventDates_359);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 2, 4, 23, 12, 2011)}, ComplexEventDates_NoComplexEventDates_359);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_359);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_730;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 47, 45)}, ComplexEventTimes_NoComplexEventTimes_730);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 2, 27)}, ComplexEventTimes_NoComplexEventTimes_730);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_730);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_731;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 25, 34)}, ComplexEventTimes_NoComplexEventTimes_731);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 40, 3)}, ComplexEventTimes_NoComplexEventTimes_731);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_731);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_360;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 54, 20, 23, 9, 2000)}, ComplexEventDates_NoComplexEventDates_360);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 42, 29, 18, 10, 2016)}, ComplexEventDates_NoComplexEventDates_360);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_360);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_732;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 53, 23)}, ComplexEventTimes_NoComplexEventTimes_732);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 17, 33)}, ComplexEventTimes_NoComplexEventTimes_732);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_732);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_361;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 59, 43, 7, 5, 2015)}, ComplexEventDates_NoComplexEventDates_361);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 44, 48, 12, 4, 2003)}, ComplexEventDates_NoComplexEventDates_361);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_361);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_733;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 19, 45)}, ComplexEventTimes_NoComplexEventTimes_733);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 23, 17)}, ComplexEventTimes_NoComplexEventTimes_733);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_733);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_177;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_790303889"}, EvntGrp_NoEvents_177);
    FIX::EventPx EventPx_177;
    EventPx_177.setString("20344542");
set_field(noEvents_0_0, EventPx_177, EvntGrp_NoEvents_177);
    set_field(noEvents_0_0, FIX::EventText{"STRING_165985921"}, EvntGrp_NoEvents_177);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(7, 19, 9, 8, 8, 2012)}, EvntGrp_NoEvents_177);
    set_field(noEvents_0_0, FIX::EventType{1}, EvntGrp_NoEvents_177);
    all_values.push_back(EvntGrp_NoEvents_177);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_178;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1122215782"}, EvntGrp_NoEvents_178);
    FIX::EventPx EventPx_178;
    EventPx_178.setString("9088256");
set_field(noEvents_0_1, EventPx_178, EvntGrp_NoEvents_178);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1523214467"}, EvntGrp_NoEvents_178);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(16, 32, 5, 16, 12, 2002)}, EvntGrp_NoEvents_178);
    set_field(noEvents_0_1, FIX::EventType{13}, EvntGrp_NoEvents_178);
    all_values.push_back(EvntGrp_NoEvents_178);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_169;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1983734403"}, InstrumentParties_NoInstrumentParties_169);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_169);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{2138154017}, InstrumentParties_NoInstrumentParties_169);
    all_values.push_back(InstrumentParties_NoInstrumentParties_169);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1780720700"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{799077993}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_170;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1200765803"}, InstrumentParties_NoInstrumentParties_170);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_170);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1589381882}, InstrumentParties_NoInstrumentParties_170);
    all_values.push_back(InstrumentParties_NoInstrumentParties_170);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_168573180"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{618870689}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1304994921"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1157944459}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_171;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_579078870"}, InstrumentParties_NoInstrumentParties_171);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_171);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{844543842}, InstrumentParties_NoInstrumentParties_171);
    all_values.push_back(InstrumentParties_NoInstrumentParties_171);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_801487189"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1966759625}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_1269868567"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{177218009}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_171;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_986538447"}, SecAltIDGrp_NoSecurityAltID_171);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1709676001"}, SecAltIDGrp_NoSecurityAltID_171);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_171);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_172;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_2136384499"}, SecAltIDGrp_NoSecurityAltID_172);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1079210203"}, SecAltIDGrp_NoSecurityAltID_172);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_172);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_173;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1682283256"}, SecAltIDGrp_NoSecurityAltID_173);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1420456226"}, SecAltIDGrp_NoSecurityAltID_173);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_173);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_172;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1471898075"}, SecurityXML_172);
  set_field(msg, FIX::SecurityXMLLen{402816820}, SecurityXML_172);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1256706981"}, SecurityXML_172);
  all_values.push_back(SecurityXML_172);
  all_compo_names.insert("..");


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
