#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::TradingSessionStatus msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatus_0;
  set_field(msg, FIX::EncodedText{"DATA_1280465735"}, TradingSessionStatus_0);
  set_field(msg, FIX::EncodedTextLen{1199101546}, TradingSessionStatus_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1768005895"}, TradingSessionStatus_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1180313365"}, TradingSessionStatus_0);
  set_field(msg, FIX::Text{"STRING_2107900964"}, TradingSessionStatus_0);
  FIX::TotalVolumeTraded TotalVolumeTraded_2;
  TotalVolumeTraded_2.setString("9385856");
set_field(msg, TotalVolumeTraded_2, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesCloseTime{FIX::UTCTIMESTAMP(12, 13, 37, 6, 5, 2006)}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesEndTime{FIX::UTCTIMESTAMP(5, 57, 58, 19, 1, 2017)}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesEvent{2}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesMethod{3}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesMode{3}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesOpenTime{FIX::UTCTIMESTAMP(10, 15, 9, 24, 12, 2002)}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesPreCloseTime{FIX::UTCTIMESTAMP(10, 18, 46, 3, 7, 2000)}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesReqID{"STRING_1537505702"}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesStartTime{FIX::UTCTIMESTAMP(0, 31, 41, 20, 8, 2013)}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesStatus{0}, TradingSessionStatus_0);
  set_field(msg, FIX::TradSesStatusRejReason{1}, TradingSessionStatus_0);
  set_field(msg, FIX::TradingSessionID{"STRING_6"}, TradingSessionStatus_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_4"}, TradingSessionStatus_0);
  set_field(msg, FIX::UnsolicitedIndicator{true}, TradingSessionStatus_0);
  all_values.push_back(TradingSessionStatus_0);

  all_compo_names.insert("TradingSessionStatus");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_22;
  set_field(msg, FIX::ApplID{"STRING_803247050"}, ApplicationSequenceControl_22);
  set_field(msg, FIX::ApplLastSeqNum{1724461211}, ApplicationSequenceControl_22);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_22);
  set_field(msg, FIX::ApplSeqNum{1156499516}, ApplicationSequenceControl_22);
  all_values.push_back(ApplicationSequenceControl_22);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_101;
  FIX::AttachmentPoint AttachmentPoint_101;
  AttachmentPoint_101.setString("76.110000");
set_field(msg, AttachmentPoint_101, Instrument_101);
  set_field(msg, FIX::CFICode{"STRING_2113304397"}, Instrument_101);
  set_field(msg, FIX::CPProgram{1}, Instrument_101);
  set_field(msg, FIX::CPRegType{"STRING_1256437960"}, Instrument_101);
  FIX::CapPrice CapPrice_101;
  CapPrice_101.setString("1889969");
set_field(msg, CapPrice_101, Instrument_101);
  FIX::ContractMultiplier ContractMultiplier_101;
  ContractMultiplier_101.setString("16138965");
set_field(msg, ContractMultiplier_101, Instrument_101);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_101);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1314029268"}, Instrument_101);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1354211129"}, Instrument_101);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1839646162"}, Instrument_101);
  FIX::CouponRate CouponRate_101;
  CouponRate_101.setString("38.540000");
set_field(msg, CouponRate_101, Instrument_101);
  set_field(msg, FIX::CreditRating{"STRING_127355472"}, Instrument_101);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1617476529"}, Instrument_101);
  FIX::DetachmentPoint DetachmentPoint_101;
  DetachmentPoint_101.setString("4.530000");
set_field(msg, DetachmentPoint_101, Instrument_101);
  set_field(msg, FIX::EncodedIssuer{"DATA_1664861174"}, Instrument_101);
  set_field(msg, FIX::EncodedIssuerLen{896570148}, Instrument_101);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_2081864325"}, Instrument_101);
  set_field(msg, FIX::EncodedSecurityDescLen{576347737}, Instrument_101);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_101);
  FIX::Factor Factor_101;
  Factor_101.setString("13200281");
set_field(msg, Factor_101, Instrument_101);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_101);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_101);
  FIX::FloorPrice FloorPrice_101;
  FloorPrice_101.setString("11982470");
set_field(msg, FloorPrice_101, Instrument_101);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_101);
  set_field(msg, FIX::InstrRegistry{"STRING_1866632918"}, Instrument_101);
  set_field(msg, FIX::InstrmtAssignmentMethod{'4'}, Instrument_101);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_358269138"}, Instrument_101);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_522396321"}, Instrument_101);
  set_field(msg, FIX::Issuer{"STRING_2135271693"}, Instrument_101);
  set_field(msg, FIX::ListMethod{1}, Instrument_101);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1678895837"}, Instrument_101);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_872985656"}, Instrument_101);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1948828458"}, Instrument_101);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_537976152"}, Instrument_101);
  FIX::MinPriceIncrement MinPriceIncrement_101;
  MinPriceIncrement_101.setString("21294236");
set_field(msg, MinPriceIncrement_101, Instrument_101);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_101;
  MinPriceIncrementAmount_101.setString("21378253");
set_field(msg, MinPriceIncrementAmount_101, Instrument_101);
  set_field(msg, FIX::NTPositionLimit{4389006}, Instrument_101);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_101;
  NotionalPercentageOutstanding_101.setString("30.810000");
set_field(msg, NotionalPercentageOutstanding_101, Instrument_101);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_101);
  FIX::OptPayoutAmount OptPayoutAmount_101;
  OptPayoutAmount_101.setString("13586001");
set_field(msg, OptPayoutAmount_101, Instrument_101);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_101);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_101;
  OriginalNotionalPercentageOutstanding_101.setString("12.150000");
set_field(msg, OriginalNotionalPercentageOutstanding_101, Instrument_101);
  set_field(msg, FIX::Pool{"STRING_1485955608"}, Instrument_101);
  set_field(msg, FIX::PositionLimit{1166328477}, Instrument_101);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_101);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1003333134"}, Instrument_101);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_101;
  PriceUnitOfMeasureQty_101.setString("20628986");
set_field(msg, PriceUnitOfMeasureQty_101, Instrument_101);
  set_field(msg, FIX::Product{13}, Instrument_101);
  set_field(msg, FIX::ProductComplex{"STRING_1579680872"}, Instrument_101);
  set_field(msg, FIX::PutOrCall{0}, Instrument_101);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1919636818"}, Instrument_101);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1434278193"}, Instrument_101);
  FIX::RepurchaseRate RepurchaseRate_101;
  RepurchaseRate_101.setString("76.350000");
set_field(msg, RepurchaseRate_101, Instrument_101);
  set_field(msg, FIX::RepurchaseTerm{970400252}, Instrument_101);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_101);
  set_field(msg, FIX::SecurityDesc{"STRING_169106906"}, Instrument_101);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1381210734"}, Instrument_101);
  set_field(msg, FIX::SecurityGroup{"STRING_1869861252"}, Instrument_101);
  set_field(msg, FIX::SecurityID{"STRING_691503227"}, Instrument_101);
  set_field(msg, FIX::SecurityIDSource{"STRING_7"}, Instrument_101);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_101);
  set_field(msg, FIX::SecuritySubType{"STRING_222915416"}, Instrument_101);
  set_field(msg, FIX::SecurityType{"STRING_YANK"}, Instrument_101);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_101);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_101);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_76440757"}, Instrument_101);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1497071864"}, Instrument_101);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_101);
  FIX::StrikeMultiplier StrikeMultiplier_101;
  StrikeMultiplier_101.setString("6539592");
set_field(msg, StrikeMultiplier_101, Instrument_101);
  FIX::StrikePrice StrikePrice_101;
  StrikePrice_101.setString("21238807");
set_field(msg, StrikePrice_101, Instrument_101);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_101);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_101;
  StrikePriceBoundaryPrecision_101.setString("4.390000");
set_field(msg, StrikePriceBoundaryPrecision_101, Instrument_101);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_101);
  FIX::StrikeValue StrikeValue_101;
  StrikeValue_101.setString("6483106");
set_field(msg, StrikeValue_101, Instrument_101);
  set_field(msg, FIX::Symbol{"STRING_388174811"}, Instrument_101);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_101);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_101);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_101);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_101);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_101;
  UnitOfMeasureQty_101.setString("9990390");
set_field(msg, UnitOfMeasureQty_101, Instrument_101);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_101);
  all_values.push_back(Instrument_101);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_208;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_208);
    FIX::ComplexEventPrice ComplexEventPrice_208;
    ComplexEventPrice_208.setString("17303369");
set_field(noComplexEvents_0_0, ComplexEventPrice_208, ComplexEvents_NoComplexEvents_208);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_208);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_208;
    ComplexEventPriceBoundaryPrecision_208.setString("35.730000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_208, ComplexEvents_NoComplexEvents_208);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_208);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_208);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_208;
    ComplexOptPayoutAmount_208.setString("1621231");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_208, ComplexEvents_NoComplexEvents_208);
    all_values.push_back(ComplexEvents_NoComplexEvents_208);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_420;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 57, 14, 8, 12, 2008)}, ComplexEventDates_NoComplexEventDates_420);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 14, 32, 5, 11, 2006)}, ComplexEventDates_NoComplexEventDates_420);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_420);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_840;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 14, 18)}, ComplexEventTimes_NoComplexEventTimes_840);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 36, 57)}, ComplexEventTimes_NoComplexEventTimes_840);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_840);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_841;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 57, 49)}, ComplexEventTimes_NoComplexEventTimes_841);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 21, 45)}, ComplexEventTimes_NoComplexEventTimes_841);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_841);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_842;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 42, 37)}, ComplexEventTimes_NoComplexEventTimes_842);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 27, 0)}, ComplexEventTimes_NoComplexEventTimes_842);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_842);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_421;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 32, 40, 8, 8, 2009)}, ComplexEventDates_NoComplexEventDates_421);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 35, 27, 9, 2, 2010)}, ComplexEventDates_NoComplexEventDates_421);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_421);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_843;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 59, 59)}, ComplexEventTimes_NoComplexEventTimes_843);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 12, 48)}, ComplexEventTimes_NoComplexEventTimes_843);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_843);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_844;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 22, 2)}, ComplexEventTimes_NoComplexEventTimes_844);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 29, 19)}, ComplexEventTimes_NoComplexEventTimes_844);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_844);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_209;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_209);
    FIX::ComplexEventPrice ComplexEventPrice_209;
    ComplexEventPrice_209.setString("16063471");
set_field(noComplexEvents_0_1, ComplexEventPrice_209, ComplexEvents_NoComplexEvents_209);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_209);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_209;
    ComplexEventPriceBoundaryPrecision_209.setString("88.000000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_209, ComplexEvents_NoComplexEvents_209);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_209);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_209);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_209;
    ComplexOptPayoutAmount_209.setString("11387108");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_209, ComplexEvents_NoComplexEvents_209);
    all_values.push_back(ComplexEvents_NoComplexEvents_209);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_422;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 52, 22, 14, 1, 2007)}, ComplexEventDates_NoComplexEventDates_422);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 24, 54, 26, 6, 2001)}, ComplexEventDates_NoComplexEventDates_422);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_422);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_845;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 9, 44)}, ComplexEventTimes_NoComplexEventTimes_845);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 5, 32)}, ComplexEventTimes_NoComplexEventTimes_845);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_845);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_846;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 8, 52)}, ComplexEventTimes_NoComplexEventTimes_846);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 6, 33)}, ComplexEventTimes_NoComplexEventTimes_846);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_846);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_423;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 26, 34, 13, 7, 2011)}, ComplexEventDates_NoComplexEventDates_423);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 24, 39, 4, 10, 2016)}, ComplexEventDates_NoComplexEventDates_423);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_423);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_847;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 56, 51)}, ComplexEventTimes_NoComplexEventTimes_847);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 49, 31)}, ComplexEventTimes_NoComplexEventTimes_847);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_847);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::TradingSessionStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_848;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 31, 58)}, ComplexEventTimes_NoComplexEventTimes_848);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 4, 32)}, ComplexEventTimes_NoComplexEventTimes_848);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_848);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_196;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_904378911"}, EvntGrp_NoEvents_196);
    FIX::EventPx EventPx_196;
    EventPx_196.setString("4154342");
set_field(noEvents_0_0, EventPx_196, EvntGrp_NoEvents_196);
    set_field(noEvents_0_0, FIX::EventText{"STRING_746217433"}, EvntGrp_NoEvents_196);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(20, 12, 16, 14, 5, 2001)}, EvntGrp_NoEvents_196);
    set_field(noEvents_0_0, FIX::EventType{99}, EvntGrp_NoEvents_196);
    all_values.push_back(EvntGrp_NoEvents_196);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_197;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1922129282"}, EvntGrp_NoEvents_197);
    FIX::EventPx EventPx_197;
    EventPx_197.setString("18336434");
set_field(noEvents_0_1, EventPx_197, EvntGrp_NoEvents_197);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1845351534"}, EvntGrp_NoEvents_197);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(8, 42, 53, 16, 4, 2000)}, EvntGrp_NoEvents_197);
    set_field(noEvents_0_1, FIX::EventType{12}, EvntGrp_NoEvents_197);
    all_values.push_back(EvntGrp_NoEvents_197);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_194;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_352135824"}, InstrumentParties_NoInstrumentParties_194);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_194);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1371519906}, InstrumentParties_NoInstrumentParties_194);
    all_values.push_back(InstrumentParties_NoInstrumentParties_194);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_2007454309"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{889107902}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1774256034"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{2000352028}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_195;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1793486813"}, InstrumentParties_NoInstrumentParties_195);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_195);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{599085813}, InstrumentParties_NoInstrumentParties_195);
    all_values.push_back(InstrumentParties_NoInstrumentParties_195);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1274802273"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{210237637}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_495418654"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{438318623}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradingSessionStatus::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_196;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1761803766"}, InstrumentParties_NoInstrumentParties_196);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_196);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{754749202}, InstrumentParties_NoInstrumentParties_196);
    all_values.push_back(InstrumentParties_NoInstrumentParties_196);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradingSessionStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1168274223"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{452617088}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_202;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1501986863"}, SecAltIDGrp_NoSecurityAltID_202);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1272703310"}, SecAltIDGrp_NoSecurityAltID_202);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_202);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradingSessionStatus::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_203;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1245725634"}, SecAltIDGrp_NoSecurityAltID_203);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1972321723"}, SecAltIDGrp_NoSecurityAltID_203);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_203);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_202;
  set_field(msg, FIX::SecurityXML{"XMLDATA_150426705"}, SecurityXML_202);
  set_field(msg, FIX::SecurityXMLLen{195567508}, SecurityXML_202);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1820988747"}, SecurityXML_202);
  all_values.push_back(SecurityXML_202);
  all_compo_names.insert("..");

  // header
  multiset<string> header_103;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_103);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_547703332"}, header_103);
  set_header_field(msg.getHeader(), FIX::BodyLength{1994122722}, header_103);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1886747400"}, header_103);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1530608055"}, header_103);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1854093383"}, header_103);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_628371655"}, header_103);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1157380441}, header_103);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_103);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{274374820}, header_103);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1199587118"}, header_103);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_158563928"}, header_103);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_217454758"}, header_103);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(22, 32, 26, 16, 6, 2001)}, header_103);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_103);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_103);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1972590657"}, header_103);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{90817957}, header_103);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_570281652"}, header_103);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1097810320"}, header_103);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1336543592"}, header_103);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(1, 0, 6, 19, 6, 2000)}, header_103);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1502728272"}, header_103);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1462938840"}, header_103);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1769357284"}, header_103);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_2131099927"}, header_103);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{472835633}, header_103);
  all_values.push_back(header_103);
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
