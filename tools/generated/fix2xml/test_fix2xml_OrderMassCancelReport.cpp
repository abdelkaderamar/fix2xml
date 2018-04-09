#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassCancelReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::OrderMassCancelReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelReport_0;
  set_field(msg, FIX::ClOrdID{"STRING_1146735933"}, OrderMassCancelReport_0);
  set_field(msg, FIX::EncodedText{"DATA_568378713"}, OrderMassCancelReport_0);
  set_field(msg, FIX::EncodedTextLen{1190962237}, OrderMassCancelReport_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_62980570"}, OrderMassCancelReport_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1115506587"}, OrderMassCancelReport_0);
  set_field(msg, FIX::MassActionReportID{"STRING_225393927"}, OrderMassCancelReport_0);
  set_field(msg, FIX::MassCancelRejectReason{0}, OrderMassCancelReport_0);
  set_field(msg, FIX::MassCancelRequestType{'9'}, OrderMassCancelReport_0);
  set_field(msg, FIX::MassCancelResponse{'C'}, OrderMassCancelReport_0);
  set_field(msg, FIX::OrderID{"STRING_1259675886"}, OrderMassCancelReport_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1721989450"}, OrderMassCancelReport_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_1272159790"}, OrderMassCancelReport_0);
  set_field(msg, FIX::Side{'2'}, OrderMassCancelReport_0);
  set_field(msg, FIX::Text{"STRING_1415802346"}, OrderMassCancelReport_0);
  set_field(msg, FIX::TotalAffectedOrders{1039839754}, OrderMassCancelReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, OrderMassCancelReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_3"}, OrderMassCancelReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(5, 21, 23, 20, 9, 2010)}, OrderMassCancelReport_0);
  all_values.push_back(OrderMassCancelReport_0);

  all_compo_names.insert("OrderMassCancelReport");

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_3;
    set_field(noAffectedOrders_0_0, FIX::AffectedOrderID{"STRING_1912668200"}, AffectedOrdGrp_NoAffectedOrders_3);
    set_field(noAffectedOrders_0_0, FIX::AffectedSecondaryOrderID{"STRING_1820323078"}, AffectedOrdGrp_NoAffectedOrders_3);
    set_field(noAffectedOrders_0_0, FIX::OrigClOrdID{"STRING_766363673"}, AffectedOrdGrp_NoAffectedOrders_3);
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_3);
    all_compo_names.insert("...NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_1;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_4;
    set_field(noAffectedOrders_0_1, FIX::AffectedOrderID{"STRING_878676983"}, AffectedOrdGrp_NoAffectedOrders_4);
    set_field(noAffectedOrders_0_1, FIX::AffectedSecondaryOrderID{"STRING_1709591039"}, AffectedOrdGrp_NoAffectedOrders_4);
    set_field(noAffectedOrders_0_1, FIX::OrigClOrdID{"STRING_962630892"}, AffectedOrdGrp_NoAffectedOrders_4);
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_4);
    all_compo_names.insert("...NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_2;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_5;
    set_field(noAffectedOrders_0_2, FIX::AffectedOrderID{"STRING_2025412916"}, AffectedOrdGrp_NoAffectedOrders_5);
    set_field(noAffectedOrders_0_2, FIX::AffectedSecondaryOrderID{"STRING_130486104"}, AffectedOrdGrp_NoAffectedOrders_5);
    set_field(noAffectedOrders_0_2, FIX::OrigClOrdID{"STRING_6109481"}, AffectedOrdGrp_NoAffectedOrders_5);
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_5);
    all_compo_names.insert("...NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_2);
  }
  // Instrument
  multiset<string> Instrument_59;
  FIX::AttachmentPoint AttachmentPoint_59;
  AttachmentPoint_59.setString("34.870000");
set_field(msg, AttachmentPoint_59, Instrument_59);
  set_field(msg, FIX::CFICode{"STRING_1245992692"}, Instrument_59);
  set_field(msg, FIX::CPProgram{99}, Instrument_59);
  set_field(msg, FIX::CPRegType{"STRING_1437755748"}, Instrument_59);
  FIX::CapPrice CapPrice_59;
  CapPrice_59.setString("11607924");
set_field(msg, CapPrice_59, Instrument_59);
  FIX::ContractMultiplier ContractMultiplier_59;
  ContractMultiplier_59.setString("19534431");
set_field(msg, ContractMultiplier_59, Instrument_59);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_59);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_735298290"}, Instrument_59);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1078119341"}, Instrument_59);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1115569667"}, Instrument_59);
  FIX::CouponRate CouponRate_59;
  CouponRate_59.setString("69.880000");
set_field(msg, CouponRate_59, Instrument_59);
  set_field(msg, FIX::CreditRating{"STRING_2117959095"}, Instrument_59);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_121873996"}, Instrument_59);
  FIX::DetachmentPoint DetachmentPoint_59;
  DetachmentPoint_59.setString("30.700000");
set_field(msg, DetachmentPoint_59, Instrument_59);
  set_field(msg, FIX::EncodedIssuer{"DATA_569606914"}, Instrument_59);
  set_field(msg, FIX::EncodedIssuerLen{455403922}, Instrument_59);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1850317012"}, Instrument_59);
  set_field(msg, FIX::EncodedSecurityDescLen{1225372677}, Instrument_59);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_59);
  FIX::Factor Factor_59;
  Factor_59.setString("3270197");
set_field(msg, Factor_59, Instrument_59);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_59);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_59);
  FIX::FloorPrice FloorPrice_59;
  FloorPrice_59.setString("922043");
set_field(msg, FloorPrice_59, Instrument_59);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_59);
  set_field(msg, FIX::InstrRegistry{"STRING_169856709"}, Instrument_59);
  set_field(msg, FIX::InstrmtAssignmentMethod{'9'}, Instrument_59);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_975230065"}, Instrument_59);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1132487602"}, Instrument_59);
  set_field(msg, FIX::Issuer{"STRING_848810572"}, Instrument_59);
  set_field(msg, FIX::ListMethod{1}, Instrument_59);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1138597083"}, Instrument_59);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_789720411"}, Instrument_59);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_204225213"}, Instrument_59);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1370100492"}, Instrument_59);
  FIX::MinPriceIncrement MinPriceIncrement_59;
  MinPriceIncrement_59.setString("799925");
set_field(msg, MinPriceIncrement_59, Instrument_59);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_59;
  MinPriceIncrementAmount_59.setString("13650177");
set_field(msg, MinPriceIncrementAmount_59, Instrument_59);
  set_field(msg, FIX::NTPositionLimit{1176060043}, Instrument_59);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_59;
  NotionalPercentageOutstanding_59.setString("4.970000");
set_field(msg, NotionalPercentageOutstanding_59, Instrument_59);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_59);
  FIX::OptPayoutAmount OptPayoutAmount_59;
  OptPayoutAmount_59.setString("1066957");
set_field(msg, OptPayoutAmount_59, Instrument_59);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_59);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_59;
  OriginalNotionalPercentageOutstanding_59.setString("29.800000");
set_field(msg, OriginalNotionalPercentageOutstanding_59, Instrument_59);
  set_field(msg, FIX::Pool{"STRING_77171184"}, Instrument_59);
  set_field(msg, FIX::PositionLimit{1867384161}, Instrument_59);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_59);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_646778098"}, Instrument_59);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_59;
  PriceUnitOfMeasureQty_59.setString("1753044");
set_field(msg, PriceUnitOfMeasureQty_59, Instrument_59);
  set_field(msg, FIX::Product{10}, Instrument_59);
  set_field(msg, FIX::ProductComplex{"STRING_1872150776"}, Instrument_59);
  set_field(msg, FIX::PutOrCall{0}, Instrument_59);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_485585535"}, Instrument_59);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1464950372"}, Instrument_59);
  FIX::RepurchaseRate RepurchaseRate_59;
  RepurchaseRate_59.setString("2.540000");
set_field(msg, RepurchaseRate_59, Instrument_59);
  set_field(msg, FIX::RepurchaseTerm{577789856}, Instrument_59);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_59);
  set_field(msg, FIX::SecurityDesc{"STRING_1333816964"}, Instrument_59);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1548671160"}, Instrument_59);
  set_field(msg, FIX::SecurityGroup{"STRING_1705819463"}, Instrument_59);
  set_field(msg, FIX::SecurityID{"STRING_318820918"}, Instrument_59);
  set_field(msg, FIX::SecurityIDSource{"STRING_8"}, Instrument_59);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_59);
  set_field(msg, FIX::SecuritySubType{"STRING_1457418001"}, Instrument_59);
  set_field(msg, FIX::SecurityType{"STRING_CMBS"}, Instrument_59);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_59);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_59);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1119711008"}, Instrument_59);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_85811251"}, Instrument_59);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_59);
  FIX::StrikeMultiplier StrikeMultiplier_59;
  StrikeMultiplier_59.setString("386435");
set_field(msg, StrikeMultiplier_59, Instrument_59);
  FIX::StrikePrice StrikePrice_59;
  StrikePrice_59.setString("19627906");
set_field(msg, StrikePrice_59, Instrument_59);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_59);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_59;
  StrikePriceBoundaryPrecision_59.setString("65.760000");
set_field(msg, StrikePriceBoundaryPrecision_59, Instrument_59);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_59);
  FIX::StrikeValue StrikeValue_59;
  StrikeValue_59.setString("10675785");
set_field(msg, StrikeValue_59, Instrument_59);
  set_field(msg, FIX::Symbol{"STRING_450825331"}, Instrument_59);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_59);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_59);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_59);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_59);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_59;
  UnitOfMeasureQty_59.setString("8558665");
set_field(msg, UnitOfMeasureQty_59, Instrument_59);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_59);
  all_values.push_back(Instrument_59);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_117;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_117);
    FIX::ComplexEventPrice ComplexEventPrice_117;
    ComplexEventPrice_117.setString("16727664");
set_field(noComplexEvents_0_0, ComplexEventPrice_117, ComplexEvents_NoComplexEvents_117);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_117);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_117;
    ComplexEventPriceBoundaryPrecision_117.setString("1.120000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_117, ComplexEvents_NoComplexEvents_117);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_117);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_117);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_117;
    ComplexOptPayoutAmount_117.setString("15249810");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_117, ComplexEvents_NoComplexEvents_117);
    all_values.push_back(ComplexEvents_NoComplexEvents_117);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_229;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 36, 27, 9, 9, 2010)}, ComplexEventDates_NoComplexEventDates_229);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 54, 6, 12, 11, 2003)}, ComplexEventDates_NoComplexEventDates_229);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_229);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_465;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 55, 3)}, ComplexEventTimes_NoComplexEventTimes_465);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 36, 26)}, ComplexEventTimes_NoComplexEventTimes_465);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_465);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_466;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 55, 29)}, ComplexEventTimes_NoComplexEventTimes_466);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 59, 20)}, ComplexEventTimes_NoComplexEventTimes_466);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_466);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_230;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 56, 48, 27, 9, 2008)}, ComplexEventDates_NoComplexEventDates_230);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 24, 51, 14, 11, 2017)}, ComplexEventDates_NoComplexEventDates_230);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_230);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_467;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 29, 34)}, ComplexEventTimes_NoComplexEventTimes_467);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 3, 2)}, ComplexEventTimes_NoComplexEventTimes_467);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_467);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_468;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 50, 12)}, ComplexEventTimes_NoComplexEventTimes_468);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 3, 27)}, ComplexEventTimes_NoComplexEventTimes_468);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_468);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderMassCancelReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_126;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1039478658"}, EvntGrp_NoEvents_126);
    FIX::EventPx EventPx_126;
    EventPx_126.setString("7426695");
set_field(noEvents_0_0, EventPx_126, EvntGrp_NoEvents_126);
    set_field(noEvents_0_0, FIX::EventText{"STRING_944348611"}, EvntGrp_NoEvents_126);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 9, 38, 26, 11, 2004)}, EvntGrp_NoEvents_126);
    set_field(noEvents_0_0, FIX::EventType{17}, EvntGrp_NoEvents_126);
    all_values.push_back(EvntGrp_NoEvents_126);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_114;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_2096293413"}, InstrumentParties_NoInstrumentParties_114);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_114);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{172992876}, InstrumentParties_NoInstrumentParties_114);
    all_values.push_back(InstrumentParties_NoInstrumentParties_114);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_436251591"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1963971370}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_233);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1758167279"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{591999810}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_234);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_989884265"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{551058234}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_121;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1070981699"}, SecAltIDGrp_NoSecurityAltID_121);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_971845064"}, SecAltIDGrp_NoSecurityAltID_121);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_121);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_122;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_903032238"}, SecAltIDGrp_NoSecurityAltID_122);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1133734025"}, SecAltIDGrp_NoSecurityAltID_122);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_122);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_118;
  set_field(msg, FIX::SecurityXML{"XMLDATA_743359446"}, SecurityXML_118);
  set_field(msg, FIX::SecurityXMLLen{1641973941}, SecurityXML_118);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_354609684"}, SecurityXML_118);
  all_values.push_back(SecurityXML_118);
  all_compo_names.insert("..");

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_2;
    set_field(noNotAffectedOrders_0_0, FIX::NotAffOrigClOrdID{"STRING_533968951"}, NotAffectedOrdersGrp_NoNotAffectedOrders_2);
    set_field(noNotAffectedOrders_0_0, FIX::NotAffectedOrderID{"STRING_1097279260"}, NotAffectedOrdersGrp_NoNotAffectedOrders_2);
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_2);
    all_compo_names.insert("...NoNotAffectedOrders");

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoNotAffectedOrders noNotAffectedOrders_0_1;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_3;
    set_field(noNotAffectedOrders_0_1, FIX::NotAffOrigClOrdID{"STRING_1344317300"}, NotAffectedOrdersGrp_NoNotAffectedOrders_3);
    set_field(noNotAffectedOrders_0_1, FIX::NotAffectedOrderID{"STRING_1241451145"}, NotAffectedOrdersGrp_NoNotAffectedOrders_3);
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_3);
    all_compo_names.insert("...NoNotAffectedOrders");

    msg.addGroup(noNotAffectedOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_98;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_769893741"}, Parties_NoPartyIDs_98);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_98);
    set_field(noPartyIDs_0_0, FIX::PartyRole{24}, Parties_NoPartyIDs_98);
    all_values.push_back(Parties_NoPartyIDs_98);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_195;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_2075011697"}, PtysSubGrp_NoPartySubIDs_195);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_195);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_195);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_196;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1168220460"}, PtysSubGrp_NoPartySubIDs_196);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_196);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_196);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_197;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1239184552"}, PtysSubGrp_NoPartySubIDs_197);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_197);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_197);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_99;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_2010046857"}, Parties_NoPartyIDs_99);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_99);
    set_field(noPartyIDs_0_1, FIX::PartyRole{40}, Parties_NoPartyIDs_99);
    all_values.push_back(Parties_NoPartyIDs_99);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_198;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_119952305"}, PtysSubGrp_NoPartySubIDs_198);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_198);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_198);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_199;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_24305075"}, PtysSubGrp_NoPartySubIDs_199);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_199);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_199);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_100;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1071083375"}, Parties_NoPartyIDs_100);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_100);
    set_field(noPartyIDs_0_2, FIX::PartyRole{18}, Parties_NoPartyIDs_100);
    all_values.push_back(Parties_NoPartyIDs_100);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_200;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1739509585"}, PtysSubGrp_NoPartySubIDs_200);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_200);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_200);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_201;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_411943437"}, PtysSubGrp_NoPartySubIDs_201);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_201);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_201);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_202;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_681155894"}, PtysSubGrp_NoPartySubIDs_202);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_202);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_202);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_7;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_1922607039"}, TargetParties_NoTargetPartyIDs_7);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_7);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{2106205667}, TargetParties_NoTargetPartyIDs_7);
    all_values.push_back(TargetParties_NoTargetPartyIDs_7);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_8;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_468138086"}, TargetParties_NoTargetPartyIDs_8);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_8);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{162519387}, TargetParties_NoTargetPartyIDs_8);
    all_values.push_back(TargetParties_NoTargetPartyIDs_8);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_9;
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyID{"STRING_395666136"}, TargetParties_NoTargetPartyIDs_9);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyIDSource{'9'}, TargetParties_NoTargetPartyIDs_9);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyRole{1330739847}, TargetParties_NoTargetPartyIDs_9);
    all_values.push_back(TargetParties_NoTargetPartyIDs_9);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_81;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_272003950"}, UnderlyingInstrument_81);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{14031509}, UnderlyingInstrument_81);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_524469535"}, UnderlyingInstrument_81);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{134567160}, UnderlyingInstrument_81);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_81;
  UnderlyingAdjustedQuantity_81.setString("16894676");
set_field(msg, UnderlyingAdjustedQuantity_81, UnderlyingInstrument_81);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_81;
  UnderlyingAllocationPercent_81.setString("5.930000");
set_field(msg, UnderlyingAllocationPercent_81, UnderlyingInstrument_81);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_81;
  UnderlyingAttachmentPoint_81.setString("76.490000");
set_field(msg, UnderlyingAttachmentPoint_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_1809419958"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_1682272269"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1779602724"}, UnderlyingInstrument_81);
  FIX::UnderlyingCapValue UnderlyingCapValue_81;
  UnderlyingCapValue_81.setString("15590843");
set_field(msg, UnderlyingCapValue_81, UnderlyingInstrument_81);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_81;
  UnderlyingCashAmount_81.setString("6058719");
set_field(msg, UnderlyingCashAmount_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_81);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_81;
  UnderlyingContractMultiplier_81.setString("642973");
set_field(msg, UnderlyingContractMultiplier_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{663205749}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_220295152"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_211484312"}, UnderlyingInstrument_81);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_81;
  UnderlyingCouponRate_81.setString("91.860000");
set_field(msg, UnderlyingCouponRate_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_212289778"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_81);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_81;
  UnderlyingCurrentValue_81.setString("15486017");
set_field(msg, UnderlyingCurrentValue_81, UnderlyingInstrument_81);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_81;
  UnderlyingDetachmentPoint_81.setString("35.970000");
set_field(msg, UnderlyingDetachmentPoint_81, UnderlyingInstrument_81);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_81;
  UnderlyingDirtyPrice_81.setString("2013006");
set_field(msg, UnderlyingDirtyPrice_81, UnderlyingInstrument_81);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_81;
  UnderlyingEndPrice_81.setString("15073237");
set_field(msg, UnderlyingEndPrice_81, UnderlyingInstrument_81);
  FIX::UnderlyingEndValue UnderlyingEndValue_81;
  UnderlyingEndValue_81.setString("11359016");
set_field(msg, UnderlyingEndValue_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingExerciseStyle{1322054687}, UnderlyingInstrument_81);
  FIX::UnderlyingFXRate UnderlyingFXRate_81;
  UnderlyingFXRate_81.setString("16698431");
set_field(msg, UnderlyingFXRate_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_81);
  FIX::UnderlyingFactor UnderlyingFactor_81;
  UnderlyingFactor_81.setString("969016");
set_field(msg, UnderlyingFactor_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingFlowScheduleType{853099309}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_1803571770"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_110933153"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_1377568844"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_1938138930"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1800400805"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_912255790"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1545952931"}, UnderlyingInstrument_81);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_81;
  UnderlyingNotionalPercentageOutstanding_81.setString("71.150000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_81);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_81;
  UnderlyingOriginalNotionalPercentageOutstanding_81.setString("20.070000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_873937836"}, UnderlyingInstrument_81);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_81;
  UnderlyingPriceUnitOfMeasureQty_81.setString("10529164");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingProduct{1806341222}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingPutOrCall{938235206}, UnderlyingInstrument_81);
  FIX::UnderlyingPx UnderlyingPx_81;
  UnderlyingPx_81.setString("17161221");
set_field(msg, UnderlyingPx_81, UnderlyingInstrument_81);
  FIX::UnderlyingQty UnderlyingQty_81;
  UnderlyingQty_81.setString("20266363");
set_field(msg, UnderlyingQty_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1149719519"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_643787695"}, UnderlyingInstrument_81);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_81;
  UnderlyingRepurchaseRate_81.setString("25.040000");
set_field(msg, UnderlyingRepurchaseRate_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{2042359725}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_1080675930"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_1640044208"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_562639675"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_1281976614"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_999884284"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_1698541359"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_456547653"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_522243746"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_1082625531"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_81);
  FIX::UnderlyingStartValue UnderlyingStartValue_81;
  UnderlyingStartValue_81.setString("13753430");
set_field(msg, UnderlyingStartValue_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_738713653"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_81);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_81;
  UnderlyingStrikePrice_81.setString("5293689");
set_field(msg, UnderlyingStrikePrice_81, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_317299607"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_1517684042"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_2075321867"}, UnderlyingInstrument_81);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_1779636723"}, UnderlyingInstrument_81);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_81;
  UnderlyingUnitOfMeasureQty_81.setString("19647284");
set_field(msg, UnderlyingUnitOfMeasureQty_81, UnderlyingInstrument_81);
  all_values.push_back(UnderlyingInstrument_81);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_168;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_506090911"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_168);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_870161214"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_168);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_168);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_169;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_764767801"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_169);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1444326118"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_169);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_169);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_163;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_643920528"}, UnderlyingStipulations_NoUnderlyingStips_163);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_446561989"}, UnderlyingStipulations_NoUnderlyingStips_163);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_163);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_164;
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipType{"STRING_1082587418"}, UnderlyingStipulations_NoUnderlyingStips_164);
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipValue{"STRING_735363032"}, UnderlyingStipulations_NoUnderlyingStips_164);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_164);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_174;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_15779700"}, UndlyInstrumentParties_NoUndlyInstrumentParties_174);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_174);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{904077741}, UndlyInstrumentParties_NoUndlyInstrumentParties_174);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_174);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1227807877"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{455135452}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_351);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_175;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_1754303967"}, UndlyInstrumentParties_NoUndlyInstrumentParties_175);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_175);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{1537760983}, UndlyInstrumentParties_NoUndlyInstrumentParties_175);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_175);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_977911031"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{128990989}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_352);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353;
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_824652066"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353);
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubIDType{1583339284}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_353);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_176;
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyID{"STRING_658359925"}, UndlyInstrumentParties_NoUndlyInstrumentParties_176);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_176);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyRole{953539678}, UndlyInstrumentParties_NoUndlyInstrumentParties_176);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_176);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354;
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_774104748"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354);
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubIDType{770784484}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_354);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355;
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1692108371"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355);
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubIDType{1280195660}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_355);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
  }
  // header
  multiset<string> header_61;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_8"}, header_61);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_309392525"}, header_61);
  set_header_field(msg.getHeader(), FIX::BodyLength{577038130}, header_61);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_2079745421"}, header_61);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_953313053"}, header_61);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1023600119"}, header_61);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1014849191"}, header_61);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1688676085}, header_61);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_61);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1030628891}, header_61);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1916599678"}, header_61);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_121632279"}, header_61);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_180901557"}, header_61);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(19, 24, 23, 19, 5, 2004)}, header_61);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_61);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_61);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1013258550"}, header_61);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{754395981}, header_61);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1914595232"}, header_61);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1966798229"}, header_61);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1340594125"}, header_61);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(1, 29, 32, 16, 11, 2016)}, header_61);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_15822889"}, header_61);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_440779"}, header_61);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1274566593"}, header_61);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1030672081"}, header_61);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1689116864}, header_61);
  all_values.push_back(header_61);
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
