#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::OrderMassCancelReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelReport_0;
  set_field(msg, FIX::ClOrdID{"STRING_693024688"}, OrderMassCancelReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1127224330"}, OrderMassCancelReport_0);
  set_field(msg, FIX::EncodedTextLen{532238981}, OrderMassCancelReport_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_733273721"}, OrderMassCancelReport_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_3115596"}, OrderMassCancelReport_0);
  set_field(msg, FIX::MassActionReportID{"STRING_1176740868"}, OrderMassCancelReport_0);
  set_field(msg, FIX::MassCancelRejectReason{1}, OrderMassCancelReport_0);
  set_field(msg, FIX::MassCancelRequestType{'7'}, OrderMassCancelReport_0);
  set_field(msg, FIX::MassCancelResponse{'0'}, OrderMassCancelReport_0);
  set_field(msg, FIX::OrderID{"STRING_422809341"}, OrderMassCancelReport_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_2020327310"}, OrderMassCancelReport_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_11665082"}, OrderMassCancelReport_0);
  set_field(msg, FIX::Side{'F'}, OrderMassCancelReport_0);
  set_field(msg, FIX::Text{"STRING_1827237256"}, OrderMassCancelReport_0);
  set_field(msg, FIX::TotalAffectedOrders{1301095588}, OrderMassCancelReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_1"}, OrderMassCancelReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_4"}, OrderMassCancelReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(8, 21, 45, 22, 11, 2001)}, OrderMassCancelReport_0);
  all_values.push_back(OrderMassCancelReport_0);

  all_compo_names.insert("OrderMassCancelReport");

  // AffectedOrdGrp
  // Group AffectedOrdGrp.NoAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoAffectedOrders noAffectedOrders_0_0;
    // AffectedOrdGrp.NoAffectedOrders
    multiset<string> AffectedOrdGrp_NoAffectedOrders_3;
    set_field(noAffectedOrders_0_0, FIX::AffectedOrderID{"STRING_1681528976"}, AffectedOrdGrp_NoAffectedOrders_3);
    set_field(noAffectedOrders_0_0, FIX::AffectedSecondaryOrderID{"STRING_1460549474"}, AffectedOrdGrp_NoAffectedOrders_3);
    set_field(noAffectedOrders_0_0, FIX::OrigClOrdID{"STRING_263721875"}, AffectedOrdGrp_NoAffectedOrders_3);
    all_values.push_back(AffectedOrdGrp_NoAffectedOrders_3);
    all_compo_names.insert("...NoAffectedOrders");

    msg.addGroup(noAffectedOrders_0_0);
  }
  // Instrument
  multiset<string> Instrument_46;
  FIX::AttachmentPoint AttachmentPoint_46;
  AttachmentPoint_46.setString("28.360000");
set_field(msg, AttachmentPoint_46, Instrument_46);
  set_field(msg, FIX::CFICode{"STRING_1912656890"}, Instrument_46);
  set_field(msg, FIX::CPProgram{2}, Instrument_46);
  set_field(msg, FIX::CPRegType{"STRING_1627807524"}, Instrument_46);
  FIX::CapPrice CapPrice_46;
  CapPrice_46.setString("8923975");
set_field(msg, CapPrice_46, Instrument_46);
  FIX::ContractMultiplier ContractMultiplier_46;
  ContractMultiplier_46.setString("3750451");
set_field(msg, ContractMultiplier_46, Instrument_46);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_46);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_895513169"}, Instrument_46);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1551786032"}, Instrument_46);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1535990215"}, Instrument_46);
  FIX::CouponRate CouponRate_46;
  CouponRate_46.setString("62.430000");
set_field(msg, CouponRate_46, Instrument_46);
  set_field(msg, FIX::CreditRating{"STRING_1808489518"}, Instrument_46);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1958799557"}, Instrument_46);
  FIX::DetachmentPoint DetachmentPoint_46;
  DetachmentPoint_46.setString("99.060000");
set_field(msg, DetachmentPoint_46, Instrument_46);
  set_field(msg, FIX::EncodedIssuer{"DATA_1820154601"}, Instrument_46);
  set_field(msg, FIX::EncodedIssuerLen{760346515}, Instrument_46);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_265073514"}, Instrument_46);
  set_field(msg, FIX::EncodedSecurityDescLen{973766541}, Instrument_46);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_46);
  FIX::Factor Factor_46;
  Factor_46.setString("6359402");
set_field(msg, Factor_46, Instrument_46);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_46);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_46);
  FIX::FloorPrice FloorPrice_46;
  FloorPrice_46.setString("1302784");
set_field(msg, FloorPrice_46, Instrument_46);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_46);
  set_field(msg, FIX::InstrRegistry{"STRING_363724784"}, Instrument_46);
  set_field(msg, FIX::InstrmtAssignmentMethod{'3'}, Instrument_46);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_109145305"}, Instrument_46);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1939130777"}, Instrument_46);
  set_field(msg, FIX::Issuer{"STRING_2062671353"}, Instrument_46);
  set_field(msg, FIX::ListMethod{1}, Instrument_46);
  set_field(msg, FIX::LocaleOfIssue{"STRING_55369005"}, Instrument_46);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_849970541"}, Instrument_46);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1334868021"}, Instrument_46);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_2045658835"}, Instrument_46);
  FIX::MinPriceIncrement MinPriceIncrement_46;
  MinPriceIncrement_46.setString("3302944");
set_field(msg, MinPriceIncrement_46, Instrument_46);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_46;
  MinPriceIncrementAmount_46.setString("797819");
set_field(msg, MinPriceIncrementAmount_46, Instrument_46);
  set_field(msg, FIX::NTPositionLimit{273220350}, Instrument_46);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_46;
  NotionalPercentageOutstanding_46.setString("20.150000");
set_field(msg, NotionalPercentageOutstanding_46, Instrument_46);
  set_field(msg, FIX::OptAttribute{'9'}, Instrument_46);
  FIX::OptPayoutAmount OptPayoutAmount_46;
  OptPayoutAmount_46.setString("18250063");
set_field(msg, OptPayoutAmount_46, Instrument_46);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_46);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_46;
  OriginalNotionalPercentageOutstanding_46.setString("13.580000");
set_field(msg, OriginalNotionalPercentageOutstanding_46, Instrument_46);
  set_field(msg, FIX::Pool{"STRING_1486012253"}, Instrument_46);
  set_field(msg, FIX::PositionLimit{1891198139}, Instrument_46);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_46);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1158683206"}, Instrument_46);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_46;
  PriceUnitOfMeasureQty_46.setString("5040610");
set_field(msg, PriceUnitOfMeasureQty_46, Instrument_46);
  set_field(msg, FIX::Product{9}, Instrument_46);
  set_field(msg, FIX::ProductComplex{"STRING_2132449747"}, Instrument_46);
  set_field(msg, FIX::PutOrCall{0}, Instrument_46);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1026621368"}, Instrument_46);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1764291251"}, Instrument_46);
  FIX::RepurchaseRate RepurchaseRate_46;
  RepurchaseRate_46.setString("78.410000");
set_field(msg, RepurchaseRate_46, Instrument_46);
  set_field(msg, FIX::RepurchaseTerm{1156899858}, Instrument_46);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_46);
  set_field(msg, FIX::SecurityDesc{"STRING_1730572625"}, Instrument_46);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1538042235"}, Instrument_46);
  set_field(msg, FIX::SecurityGroup{"STRING_1457164938"}, Instrument_46);
  set_field(msg, FIX::SecurityID{"STRING_1522219755"}, Instrument_46);
  set_field(msg, FIX::SecurityIDSource{"STRING_9"}, Instrument_46);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_46);
  set_field(msg, FIX::SecuritySubType{"STRING_1577588760"}, Instrument_46);
  set_field(msg, FIX::SecurityType{"STRING_OOF"}, Instrument_46);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_46);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_46);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_486011251"}, Instrument_46);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_146542388"}, Instrument_46);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_46);
  FIX::StrikeMultiplier StrikeMultiplier_46;
  StrikeMultiplier_46.setString("11218375");
set_field(msg, StrikeMultiplier_46, Instrument_46);
  FIX::StrikePrice StrikePrice_46;
  StrikePrice_46.setString("14265070");
set_field(msg, StrikePrice_46, Instrument_46);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_46);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_46;
  StrikePriceBoundaryPrecision_46.setString("52.120000");
set_field(msg, StrikePriceBoundaryPrecision_46, Instrument_46);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_46);
  FIX::StrikeValue StrikeValue_46;
  StrikeValue_46.setString("7060163");
set_field(msg, StrikeValue_46, Instrument_46);
  set_field(msg, FIX::Symbol{"STRING_787732828"}, Instrument_46);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_46);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_46);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_46);
  set_field(msg, FIX::UnitOfMeasure{"STRING_oz_tr"}, Instrument_46);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_46;
  UnitOfMeasureQty_46.setString("1525599");
set_field(msg, UnitOfMeasureQty_46, Instrument_46);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_46);
  all_values.push_back(Instrument_46);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderMassCancelReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_93;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_93);
    FIX::ComplexEventPrice ComplexEventPrice_93;
    ComplexEventPrice_93.setString("12144515");
set_field(noComplexEvents_0_0, ComplexEventPrice_93, ComplexEvents_NoComplexEvents_93);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_93);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_93;
    ComplexEventPriceBoundaryPrecision_93.setString("67.730000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_93, ComplexEvents_NoComplexEvents_93);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_93);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_93);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_93;
    ComplexOptPayoutAmount_93.setString("4772328");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_93, ComplexEvents_NoComplexEvents_93);
    all_values.push_back(ComplexEvents_NoComplexEvents_93);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_198;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 31, 33, 23, 3, 2005)}, ComplexEventDates_NoComplexEventDates_198);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 16, 13, 12, 5, 2004)}, ComplexEventDates_NoComplexEventDates_198);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_198);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_400;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 7, 28)}, ComplexEventTimes_NoComplexEventTimes_400);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 7, 4)}, ComplexEventTimes_NoComplexEventTimes_400);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_400);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_401;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 27, 23)}, ComplexEventTimes_NoComplexEventTimes_401);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 43, 59)}, ComplexEventTimes_NoComplexEventTimes_401);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_401);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_199;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 30, 5, 19, 9, 2005)}, ComplexEventDates_NoComplexEventDates_199);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 3, 9, 12, 12, 2011)}, ComplexEventDates_NoComplexEventDates_199);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_199);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_402;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 56, 40)}, ComplexEventTimes_NoComplexEventTimes_402);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 47, 12)}, ComplexEventTimes_NoComplexEventTimes_402);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_402);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_403;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 31, 22)}, ComplexEventTimes_NoComplexEventTimes_403);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 5, 44)}, ComplexEventTimes_NoComplexEventTimes_403);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_403);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_200;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 14, 18, 9, 3, 2015)}, ComplexEventDates_NoComplexEventDates_200);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 0, 31, 19, 4, 2006)}, ComplexEventDates_NoComplexEventDates_200);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_200);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_404;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 20, 8)}, ComplexEventTimes_NoComplexEventTimes_404);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 56, 50)}, ComplexEventTimes_NoComplexEventTimes_404);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_404);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_405;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 22, 30)}, ComplexEventTimes_NoComplexEventTimes_405);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 28, 2)}, ComplexEventTimes_NoComplexEventTimes_405);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_405);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::OrderMassCancelReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_406;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 8, 17)}, ComplexEventTimes_NoComplexEventTimes_406);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 14, 24)}, ComplexEventTimes_NoComplexEventTimes_406);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_406);
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
    FIX50SP2::OrderMassCancelReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_95;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_626394246"}, EvntGrp_NoEvents_95);
    FIX::EventPx EventPx_95;
    EventPx_95.setString("14786995");
set_field(noEvents_0_0, EventPx_95, EvntGrp_NoEvents_95);
    set_field(noEvents_0_0, FIX::EventText{"STRING_752014440"}, EvntGrp_NoEvents_95);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 32, 49, 4, 5, 2016)}, EvntGrp_NoEvents_95);
    set_field(noEvents_0_0, FIX::EventType{8}, EvntGrp_NoEvents_95);
    all_values.push_back(EvntGrp_NoEvents_95);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_96;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_553935774"}, EvntGrp_NoEvents_96);
    FIX::EventPx EventPx_96;
    EventPx_96.setString("2988766");
set_field(noEvents_0_1, EventPx_96, EvntGrp_NoEvents_96);
    set_field(noEvents_0_1, FIX::EventText{"STRING_788098949"}, EvntGrp_NoEvents_96);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(18, 43, 33, 27, 3, 2011)}, EvntGrp_NoEvents_96);
    set_field(noEvents_0_1, FIX::EventType{10}, EvntGrp_NoEvents_96);
    all_values.push_back(EvntGrp_NoEvents_96);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_97;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_390761017"}, EvntGrp_NoEvents_97);
    FIX::EventPx EventPx_97;
    EventPx_97.setString("2458794");
set_field(noEvents_0_2, EventPx_97, EvntGrp_NoEvents_97);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1584409958"}, EvntGrp_NoEvents_97);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(1, 17, 8, 21, 3, 2014)}, EvntGrp_NoEvents_97);
    set_field(noEvents_0_2, FIX::EventType{13}, EvntGrp_NoEvents_97);
    all_values.push_back(EvntGrp_NoEvents_97);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_88;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_611857707"}, InstrumentParties_NoInstrumentParties_88);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_88);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{517265991}, InstrumentParties_NoInstrumentParties_88);
    all_values.push_back(InstrumentParties_NoInstrumentParties_88);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1537640502"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{412709916}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_604814587"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{885494481}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_966645690"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{903691193}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175);
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
    multiset<string> SecAltIDGrp_NoSecurityAltID_95;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1984188932"}, SecAltIDGrp_NoSecurityAltID_95);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_925281131"}, SecAltIDGrp_NoSecurityAltID_95);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_95);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_96;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_2134600054"}, SecAltIDGrp_NoSecurityAltID_96);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1915768497"}, SecAltIDGrp_NoSecurityAltID_96);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_96);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_97;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1624235386"}, SecAltIDGrp_NoSecurityAltID_97);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1207022404"}, SecAltIDGrp_NoSecurityAltID_97);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_97);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_92;
  set_field(msg, FIX::SecurityXML{"XMLDATA_481843002"}, SecurityXML_92);
  set_field(msg, FIX::SecurityXMLLen{2031538336}, SecurityXML_92);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1597783421"}, SecurityXML_92);
  all_values.push_back(SecurityXML_92);
  all_compo_names.insert("..");

  // NotAffectedOrdersGrp
  // Group NotAffectedOrdersGrp.NoNotAffectedOrders
  {
    FIX50SP2::OrderMassCancelReport::NoNotAffectedOrders noNotAffectedOrders_0_0;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_2;
    set_field(noNotAffectedOrders_0_0, FIX::NotAffOrigClOrdID{"STRING_1468464646"}, NotAffectedOrdersGrp_NoNotAffectedOrders_2);
    set_field(noNotAffectedOrders_0_0, FIX::NotAffectedOrderID{"STRING_26649027"}, NotAffectedOrdersGrp_NoNotAffectedOrders_2);
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_2);
    all_compo_names.insert("...NoNotAffectedOrders");

    msg.addGroup(noNotAffectedOrders_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoNotAffectedOrders noNotAffectedOrders_0_1;
    // NotAffectedOrdersGrp.NoNotAffectedOrders
    multiset<string> NotAffectedOrdersGrp_NoNotAffectedOrders_3;
    set_field(noNotAffectedOrders_0_1, FIX::NotAffOrigClOrdID{"STRING_1816735670"}, NotAffectedOrdersGrp_NoNotAffectedOrders_3);
    set_field(noNotAffectedOrders_0_1, FIX::NotAffectedOrderID{"STRING_99063775"}, NotAffectedOrdersGrp_NoNotAffectedOrders_3);
    all_values.push_back(NotAffectedOrdersGrp_NoNotAffectedOrders_3);
    all_compo_names.insert("...NoNotAffectedOrders");

    msg.addGroup(noNotAffectedOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_85;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_14832719"}, Parties_NoPartyIDs_85);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_85);
    set_field(noPartyIDs_0_0, FIX::PartyRole{31}, Parties_NoPartyIDs_85);
    all_values.push_back(Parties_NoPartyIDs_85);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_170;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1678046148"}, PtysSubGrp_NoPartySubIDs_170);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_170);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_170);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_171;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1464166304"}, PtysSubGrp_NoPartySubIDs_171);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_171);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_171);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_172;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_930217697"}, PtysSubGrp_NoPartySubIDs_172);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_172);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_172);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_86;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_460538408"}, Parties_NoPartyIDs_86);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_86);
    set_field(noPartyIDs_0_1, FIX::PartyRole{65}, Parties_NoPartyIDs_86);
    all_values.push_back(Parties_NoPartyIDs_86);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_173;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_291239829"}, PtysSubGrp_NoPartySubIDs_173);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_173);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_173);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_174;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1263889382"}, PtysSubGrp_NoPartySubIDs_174);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_174);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_174);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_175;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1253043828"}, PtysSubGrp_NoPartySubIDs_175);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_175);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_175);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_87;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_693272699"}, Parties_NoPartyIDs_87);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_87);
    set_field(noPartyIDs_0_2, FIX::PartyRole{60}, Parties_NoPartyIDs_87);
    all_values.push_back(Parties_NoPartyIDs_87);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_176;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1910366005"}, PtysSubGrp_NoPartySubIDs_176);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_176);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_176);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_177;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_2045792033"}, PtysSubGrp_NoPartySubIDs_177);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_177);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_177);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_5;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_2144855808"}, TargetParties_NoTargetPartyIDs_5);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_5);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{1925824444}, TargetParties_NoTargetPartyIDs_5);
    all_values.push_back(TargetParties_NoTargetPartyIDs_5);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_6;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_509919901"}, TargetParties_NoTargetPartyIDs_6);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_6);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{1617453727}, TargetParties_NoTargetPartyIDs_6);
    all_values.push_back(TargetParties_NoTargetPartyIDs_6);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_7;
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyID{"STRING_40482402"}, TargetParties_NoTargetPartyIDs_7);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_7);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyRole{934136384}, TargetParties_NoTargetPartyIDs_7);
    all_values.push_back(TargetParties_NoTargetPartyIDs_7);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_82;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_88310894"}, UnderlyingInstrument_82);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{138756310}, UnderlyingInstrument_82);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_1788459542"}, UnderlyingInstrument_82);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{548849302}, UnderlyingInstrument_82);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_82;
  UnderlyingAdjustedQuantity_82.setString("16737885");
set_field(msg, UnderlyingAdjustedQuantity_82, UnderlyingInstrument_82);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_82;
  UnderlyingAllocationPercent_82.setString("35.340000");
set_field(msg, UnderlyingAllocationPercent_82, UnderlyingInstrument_82);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_82;
  UnderlyingAttachmentPoint_82.setString("34.000000");
set_field(msg, UnderlyingAttachmentPoint_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_1965028424"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_499237308"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1092439134"}, UnderlyingInstrument_82);
  FIX::UnderlyingCapValue UnderlyingCapValue_82;
  UnderlyingCapValue_82.setString("10340657");
set_field(msg, UnderlyingCapValue_82, UnderlyingInstrument_82);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_82;
  UnderlyingCashAmount_82.setString("17522811");
set_field(msg, UnderlyingCashAmount_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_82);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_82;
  UnderlyingContractMultiplier_82.setString("17273384");
set_field(msg, UnderlyingContractMultiplier_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{2064863720}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_1491146953"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_157182174"}, UnderlyingInstrument_82);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_82;
  UnderlyingCouponRate_82.setString("60.770000");
set_field(msg, UnderlyingCouponRate_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_1585403008"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_82);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_82;
  UnderlyingCurrentValue_82.setString("13489110");
set_field(msg, UnderlyingCurrentValue_82, UnderlyingInstrument_82);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_82;
  UnderlyingDetachmentPoint_82.setString("27.190000");
set_field(msg, UnderlyingDetachmentPoint_82, UnderlyingInstrument_82);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_82;
  UnderlyingDirtyPrice_82.setString("4988439");
set_field(msg, UnderlyingDirtyPrice_82, UnderlyingInstrument_82);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_82;
  UnderlyingEndPrice_82.setString("11272518");
set_field(msg, UnderlyingEndPrice_82, UnderlyingInstrument_82);
  FIX::UnderlyingEndValue UnderlyingEndValue_82;
  UnderlyingEndValue_82.setString("5627826");
set_field(msg, UnderlyingEndValue_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingExerciseStyle{311709444}, UnderlyingInstrument_82);
  FIX::UnderlyingFXRate UnderlyingFXRate_82;
  UnderlyingFXRate_82.setString("5972219");
set_field(msg, UnderlyingFXRate_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_82);
  FIX::UnderlyingFactor UnderlyingFactor_82;
  UnderlyingFactor_82.setString("16677317");
set_field(msg, UnderlyingFactor_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingFlowScheduleType{1531358346}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_691575917"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1806488014"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_1172334240"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_1240425219"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1332792961"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_405644126"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1068974971"}, UnderlyingInstrument_82);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_82;
  UnderlyingNotionalPercentageOutstanding_82.setString("77.370000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_82);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_82;
  UnderlyingOriginalNotionalPercentageOutstanding_82.setString("4.570000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_36919825"}, UnderlyingInstrument_82);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_82;
  UnderlyingPriceUnitOfMeasureQty_82.setString("5096789");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingProduct{2138543824}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingPutOrCall{1764258261}, UnderlyingInstrument_82);
  FIX::UnderlyingPx UnderlyingPx_82;
  UnderlyingPx_82.setString("4270589");
set_field(msg, UnderlyingPx_82, UnderlyingInstrument_82);
  FIX::UnderlyingQty UnderlyingQty_82;
  UnderlyingQty_82.setString("14822071");
set_field(msg, UnderlyingQty_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1921440435"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_107321423"}, UnderlyingInstrument_82);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_82;
  UnderlyingRepurchaseRate_82.setString("64.890000");
set_field(msg, UnderlyingRepurchaseRate_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{1976930995}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_1724598884"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_121553927"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_2029793714"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_75959168"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_1248805810"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_445092687"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_387668612"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_1846027772"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_1048357710"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_82);
  FIX::UnderlyingStartValue UnderlyingStartValue_82;
  UnderlyingStartValue_82.setString("12299024");
set_field(msg, UnderlyingStartValue_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1739933627"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_82);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_82;
  UnderlyingStrikePrice_82.setString("8328751");
set_field(msg, UnderlyingStrikePrice_82, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_899713996"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_660397189"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_1901850169"}, UnderlyingInstrument_82);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_2050051733"}, UnderlyingInstrument_82);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_82;
  UnderlyingUnitOfMeasureQty_82.setString("15652786");
set_field(msg, UnderlyingUnitOfMeasureQty_82, UnderlyingInstrument_82);
  all_values.push_back(UnderlyingInstrument_82);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_174;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_2086971559"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_174);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2074957546"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_174);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_174);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_175;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_1906840803"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_175);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1703746172"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_175);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_175);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_164;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_1241564284"}, UnderlyingStipulations_NoUnderlyingStips_164);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_1477702959"}, UnderlyingStipulations_NoUnderlyingStips_164);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_164);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_165;
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipType{"STRING_461854316"}, UnderlyingStipulations_NoUnderlyingStips_165);
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipValue{"STRING_14207125"}, UnderlyingStipulations_NoUnderlyingStips_165);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_165);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_166;
    set_field(noUnderlyingStips_0_2, FIX::UnderlyingStipType{"STRING_1307150306"}, UnderlyingStipulations_NoUnderlyingStips_166);
    set_field(noUnderlyingStips_0_2, FIX::UnderlyingStipValue{"STRING_38969552"}, UnderlyingStipulations_NoUnderlyingStips_166);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_166);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_167;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_1189460373"}, UndlyInstrumentParties_NoUndlyInstrumentParties_167);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_167);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{1384566863}, UndlyInstrumentParties_NoUndlyInstrumentParties_167);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_167);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_502597333"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{1083110987}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_168;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_535427123"}, UndlyInstrumentParties_NoUndlyInstrumentParties_168);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_168);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{165529809}, UndlyInstrumentParties_NoUndlyInstrumentParties_168);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_168);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2124918686"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{420282871}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331;
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_960752301"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331);
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubIDType{877149034}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderMassCancelReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332;
      set_field(noUndlyInstrumentPartySubIDs_1_1_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1080680060"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332);
      set_field(noUndlyInstrumentPartySubIDs_1_1_2, FIX::UnderlyingInstrumentPartySubIDType{715118822}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
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
