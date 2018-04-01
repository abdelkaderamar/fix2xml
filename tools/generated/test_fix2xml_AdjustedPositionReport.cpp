#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AdjustedPositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AdjustedPositionReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AdjustedPositionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AdjustedPositionReport_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_948194073"}, AdjustedPositionReport_0);
  set_field(msg, FIX::PosMaintRptID{"STRING_304634111"}, AdjustedPositionReport_0);
  set_field(msg, FIX::PosMaintRptRefID{"STRING_795848266"}, AdjustedPositionReport_0);
  set_field(msg, FIX::PosReqType{2}, AdjustedPositionReport_0);
  FIX::PriorSettlPrice PriorSettlPrice_0;
  PriorSettlPrice_0.setString("12772605");
set_field(msg, PriorSettlPrice_0, AdjustedPositionReport_0);
  FIX::SettlPrice SettlPrice_0;
  SettlPrice_0.setString("17806478");
set_field(msg, SettlPrice_0, AdjustedPositionReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, AdjustedPositionReport_0);
  all_values.push_back(AdjustedPositionReport_0);

  all_compo_names.insert("AdjustedPositionReport");

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::AdjustedPositionReport::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_0;
    FIX::AttachmentPoint AttachmentPoint_0;
    AttachmentPoint_0.setString("92.320000");
set_field(noRelatedSym_0_0, AttachmentPoint_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_425287268"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_944725041"}, Instrument_0);
    FIX::CapPrice CapPrice_0;
    CapPrice_0.setString("4226596");
set_field(noRelatedSym_0_0, CapPrice_0, Instrument_0);
    FIX::ContractMultiplier ContractMultiplier_0;
    ContractMultiplier_0.setString("4574430");
set_field(noRelatedSym_0_0, ContractMultiplier_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{0}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1467069016"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_256132195"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_474599010"}, Instrument_0);
    FIX::CouponRate CouponRate_0;
    CouponRate_0.setString("95.720000");
set_field(noRelatedSym_0_0, CouponRate_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_2119731812"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_665275857"}, Instrument_0);
    FIX::DetachmentPoint DetachmentPoint_0;
    DetachmentPoint_0.setString("47.650000");
set_field(noRelatedSym_0_0, DetachmentPoint_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_1266417391"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1524419556}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1185713427"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1754097207}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{0}, Instrument_0);
    FIX::Factor Factor_0;
    Factor_0.setString("14291056");
set_field(noRelatedSym_0_0, Factor_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_0);
    FIX::FloorPrice FloorPrice_0;
    FloorPrice_0.setString("19407992");
set_field(noRelatedSym_0_0, FloorPrice_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{4}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_195654563"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'5'}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_2136698025"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1472915098"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_222328103"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ListMethod{0}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_213479404"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1945087335"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1778846204"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_521810722"}, Instrument_0);
    FIX::MinPriceIncrement MinPriceIncrement_0;
    MinPriceIncrement_0.setString("7423287");
set_field(noRelatedSym_0_0, MinPriceIncrement_0, Instrument_0);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_0;
    MinPriceIncrementAmount_0.setString("540221");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{979253761}, Instrument_0);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_0;
    NotionalPercentageOutstanding_0.setString("64.460000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_0);
    FIX::OptPayoutAmount OptPayoutAmount_0;
    OptPayoutAmount_0.setString("12353859");
set_field(noRelatedSym_0_0, OptPayoutAmount_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{3}, Instrument_0);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_0;
    OriginalNotionalPercentageOutstanding_0.setString("71.070000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1207634121"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{1949461314}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_326567864"}, Instrument_0);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_0;
    PriceUnitOfMeasureQty_0.setString("13263972");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::Product{6}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_2080665071"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{0}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_263873624"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_206194510"}, Instrument_0);
    FIX::RepurchaseRate RepurchaseRate_0;
    RepurchaseRate_0.setString("84.760000");
set_field(noRelatedSym_0_0, RepurchaseRate_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{57189235}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MR"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_1530603039"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_646353113"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1416616046"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_856034489"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_K"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_1069513894"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_FORWARD"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SD"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_1408613633"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_308076057"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_0);
    FIX::StrikeMultiplier StrikeMultiplier_0;
    StrikeMultiplier_0.setString("18291672");
set_field(noRelatedSym_0_0, StrikeMultiplier_0, Instrument_0);
    FIX::StrikePrice StrikePrice_0;
    StrikePrice_0.setString("16584806");
set_field(noRelatedSym_0_0, StrikePrice_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{3}, Instrument_0);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_0;
    StrikePriceBoundaryPrecision_0.setString("43.480000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_0);
    FIX::StrikeValue StrikeValue_0;
    StrikeValue_0.setString("11568795");
set_field(noRelatedSym_0_0, StrikeValue_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_1828602572"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Yr"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_0);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_0;
    UnitOfMeasureQty_0.setString("17797211");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_0);
    all_values.push_back(Instrument_0);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_0;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_0);
      FIX::ComplexEventPrice ComplexEventPrice_0;
      ComplexEventPrice_0.setString("9844334");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_0, ComplexEvents_NoComplexEvents_0);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_0);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_0;
      ComplexEventPriceBoundaryPrecision_0.setString("53.710000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_0, ComplexEvents_NoComplexEvents_0);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_0);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_0);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_0;
      ComplexOptPayoutAmount_0.setString("12063398");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_0, ComplexEvents_NoComplexEvents_0);
      all_values.push_back(ComplexEvents_NoComplexEvents_0);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_0;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 23, 21, 19, 9, 2007)}, ComplexEventDates_NoComplexEventDates_0);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 51, 11, 26, 4, 2008)}, ComplexEventDates_NoComplexEventDates_0);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_0);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_0;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 20, 32)}, ComplexEventTimes_NoComplexEventTimes_0);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 33, 20)}, ComplexEventTimes_NoComplexEventTimes_0);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_0);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_1;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 58, 36, 22, 7, 2001)}, ComplexEventDates_NoComplexEventDates_1);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 36, 24, 7, 1, 2002)}, ComplexEventDates_NoComplexEventDates_1);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_1);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_1;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 9, 40)}, ComplexEventTimes_NoComplexEventTimes_1);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 42, 13)}, ComplexEventTimes_NoComplexEventTimes_1);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_1);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_1;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_1);
      FIX::ComplexEventPrice ComplexEventPrice_1;
      ComplexEventPrice_1.setString("17560482");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_1, ComplexEvents_NoComplexEvents_1);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_1);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_1;
      ComplexEventPriceBoundaryPrecision_1.setString("13.410000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_1, ComplexEvents_NoComplexEvents_1);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_1);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_1);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_1;
      ComplexOptPayoutAmount_1.setString("7627223");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_1, ComplexEvents_NoComplexEvents_1);
      all_values.push_back(ComplexEvents_NoComplexEvents_1);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_2;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 52, 3, 6, 12, 2009)}, ComplexEventDates_NoComplexEventDates_2);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 21, 47, 7, 10, 2011)}, ComplexEventDates_NoComplexEventDates_2);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_2);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_2;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 35, 42)}, ComplexEventTimes_NoComplexEventTimes_2);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 24, 9)}, ComplexEventTimes_NoComplexEventTimes_2);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_2);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_3;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 42, 10, 6, 9, 2011)}, ComplexEventDates_NoComplexEventDates_3);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 36, 13, 7, 7, 2016)}, ComplexEventDates_NoComplexEventDates_3);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_3);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_3;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 1, 8)}, ComplexEventTimes_NoComplexEventTimes_3);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 19, 57)}, ComplexEventTimes_NoComplexEventTimes_3);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_3);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_4;
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 32, 4)}, ComplexEventTimes_NoComplexEventTimes_4);
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 20, 10)}, ComplexEventTimes_NoComplexEventTimes_4);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_4);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_4;
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 52, 32, 14, 6, 2013)}, ComplexEventDates_NoComplexEventDates_4);
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 25, 55, 3, 1, 2011)}, ComplexEventDates_NoComplexEventDates_4);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_4);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_5;
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 45, 54)}, ComplexEventTimes_NoComplexEventTimes_5);
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 13, 17)}, ComplexEventTimes_NoComplexEventTimes_5);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_5);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_2;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_2);
      FIX::ComplexEventPrice ComplexEventPrice_2;
      ComplexEventPrice_2.setString("16001649");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_2, ComplexEvents_NoComplexEvents_2);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_2);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_2;
      ComplexEventPriceBoundaryPrecision_2.setString("30.890000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_2, ComplexEvents_NoComplexEvents_2);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_2);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_2);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_2;
      ComplexOptPayoutAmount_2.setString("15384116");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_2, ComplexEvents_NoComplexEvents_2);
      all_values.push_back(ComplexEvents_NoComplexEvents_2);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_5;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 14, 28, 12, 12, 2011)}, ComplexEventDates_NoComplexEventDates_5);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 34, 46, 7, 11, 2015)}, ComplexEventDates_NoComplexEventDates_5);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_5);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_6;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 12, 30)}, ComplexEventTimes_NoComplexEventTimes_6);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 35, 7)}, ComplexEventTimes_NoComplexEventTimes_6);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_6);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_0;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_55383466"}, EvntGrp_NoEvents_0);
      FIX::EventPx EventPx_0;
      EventPx_0.setString("1903538");
set_field(noEvents_0_1_0, EventPx_0, EvntGrp_NoEvents_0);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1040468823"}, EvntGrp_NoEvents_0);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(15, 45, 28, 3, 8, 2005)}, EvntGrp_NoEvents_0);
      set_field(noEvents_0_1_0, FIX::EventType{12}, EvntGrp_NoEvents_0);
      all_values.push_back(EvntGrp_NoEvents_0);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_1;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_201462091"}, EvntGrp_NoEvents_1);
      FIX::EventPx EventPx_1;
      EventPx_1.setString("5506811");
set_field(noEvents_0_1_1, EventPx_1, EvntGrp_NoEvents_1);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_2097833148"}, EvntGrp_NoEvents_1);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(18, 15, 7, 26, 6, 2015)}, EvntGrp_NoEvents_1);
      set_field(noEvents_0_1_1, FIX::EventType{14}, EvntGrp_NoEvents_1);
      all_values.push_back(EvntGrp_NoEvents_1);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_2;
      set_field(noEvents_0_1_2, FIX::EventDate{"LOCALMKTDATE_1052327681"}, EvntGrp_NoEvents_2);
      FIX::EventPx EventPx_2;
      EventPx_2.setString("3112784");
set_field(noEvents_0_1_2, EventPx_2, EvntGrp_NoEvents_2);
      set_field(noEvents_0_1_2, FIX::EventText{"STRING_313180717"}, EvntGrp_NoEvents_2);
      set_field(noEvents_0_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(20, 45, 39, 7, 3, 2013)}, EvntGrp_NoEvents_2);
      set_field(noEvents_0_1_2, FIX::EventType{5}, EvntGrp_NoEvents_2);
      all_values.push_back(EvntGrp_NoEvents_2);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_0;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1938450452"}, InstrumentParties_NoInstrumentParties_0);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_0);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1416637626}, InstrumentParties_NoInstrumentParties_0);
      all_values.push_back(InstrumentParties_NoInstrumentParties_0);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_122693855"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{579781529}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_1108763667"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{415624386}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_0;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1659444806"}, SecAltIDGrp_NoSecurityAltID_0);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_365973887"}, SecAltIDGrp_NoSecurityAltID_0);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_0);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_0;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_1846095502"}, SecurityXML_0);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{2101922216}, SecurityXML_0);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1378065182"}, SecurityXML_0);
    all_values.push_back(SecurityXML_0);
    all_compo_names.insert("...NoRelatedSym..");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_1;
    FIX::AttachmentPoint AttachmentPoint_1;
    AttachmentPoint_1.setString("25.810000");
set_field(noRelatedSym_0_1, AttachmentPoint_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1865127122"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CPProgram{99}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_676844206"}, Instrument_1);
    FIX::CapPrice CapPrice_1;
    CapPrice_1.setString("3998902");
set_field(noRelatedSym_0_1, CapPrice_1, Instrument_1);
    FIX::ContractMultiplier ContractMultiplier_1;
    ContractMultiplier_1.setString("11847664");
set_field(noRelatedSym_0_1, ContractMultiplier_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{2}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_713070964"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_946944824"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_367248257"}, Instrument_1);
    FIX::CouponRate CouponRate_1;
    CouponRate_1.setString("71.690000");
set_field(noRelatedSym_0_1, CouponRate_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_1311825443"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_1731782820"}, Instrument_1);
    FIX::DetachmentPoint DetachmentPoint_1;
    DetachmentPoint_1.setString("91.080000");
set_field(noRelatedSym_0_1, DetachmentPoint_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_1732089529"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{1139187556}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_1706169869"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{1523056333}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{2}, Instrument_1);
    FIX::Factor Factor_1;
    Factor_1.setString("9753238");
set_field(noRelatedSym_0_1, Factor_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{true}, Instrument_1);
    FIX::FloorPrice FloorPrice_1;
    FloorPrice_1.setString("15551053");
set_field(noRelatedSym_0_1, FloorPrice_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{0}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_46219701"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_839660623"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_412193588"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_2034960852"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ListMethod{1}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_1790258770"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_1603199785"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_511742666"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_1922697489"}, Instrument_1);
    FIX::MinPriceIncrement MinPriceIncrement_1;
    MinPriceIncrement_1.setString("1325603");
set_field(noRelatedSym_0_1, MinPriceIncrement_1, Instrument_1);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_1;
    MinPriceIncrementAmount_1.setString("9116329");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{959980242}, Instrument_1);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_1;
    NotionalPercentageOutstanding_1.setString("30.450000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'1'}, Instrument_1);
    FIX::OptPayoutAmount OptPayoutAmount_1;
    OptPayoutAmount_1.setString("19069250");
set_field(noRelatedSym_0_1, OptPayoutAmount_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{3}, Instrument_1);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_1;
    OriginalNotionalPercentageOutstanding_1.setString("73.990000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_1071266862"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{1072230474}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_655872743"}, Instrument_1);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_1;
    PriceUnitOfMeasureQty_1.setString("639343");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::Product{10}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_31445428"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{1}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_1508316577"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_250381226"}, Instrument_1);
    FIX::RepurchaseRate RepurchaseRate_1;
    RepurchaseRate_1.setString("48.040000");
set_field(noRelatedSym_0_1, RepurchaseRate_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{915938306}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_XR"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_1396134505"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_1104803656"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_270257666"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_1808328093"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_B"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_1451103215"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_MIO"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SB"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'C'}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_580557342"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_340248789"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"CHF"}, Instrument_1);
    FIX::StrikeMultiplier StrikeMultiplier_1;
    StrikeMultiplier_1.setString("19649526");
set_field(noRelatedSym_0_1, StrikeMultiplier_1, Instrument_1);
    FIX::StrikePrice StrikePrice_1;
    StrikePrice_1.setString("19457387");
set_field(noRelatedSym_0_1, StrikePrice_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{2}, Instrument_1);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_1;
    StrikePriceBoundaryPrecision_1.setString("64.180000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{1}, Instrument_1);
    FIX::StrikeValue StrikeValue_1;
    StrikeValue_1.setString("21139185");
set_field(noRelatedSym_0_1, StrikeValue_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_1045152926"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_Min"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_1);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_1;
    UnitOfMeasureQty_1.setString("17496887");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_1);
    all_values.push_back(Instrument_1);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_3;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_3);
      FIX::ComplexEventPrice ComplexEventPrice_3;
      ComplexEventPrice_3.setString("18549168");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_3, ComplexEvents_NoComplexEvents_3);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_3);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_3;
      ComplexEventPriceBoundaryPrecision_3.setString("7.510000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_3, ComplexEvents_NoComplexEvents_3);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_3);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_3);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_3;
      ComplexOptPayoutAmount_3.setString("20090988");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_3, ComplexEvents_NoComplexEvents_3);
      all_values.push_back(ComplexEvents_NoComplexEvents_3);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_6;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 29, 52, 16, 12, 2011)}, ComplexEventDates_NoComplexEventDates_6);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 52, 21, 23, 8, 2003)}, ComplexEventDates_NoComplexEventDates_6);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_6);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_7;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 7, 24)}, ComplexEventTimes_NoComplexEventTimes_7);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 28, 28)}, ComplexEventTimes_NoComplexEventTimes_7);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_7);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_8;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 34, 4)}, ComplexEventTimes_NoComplexEventTimes_8);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 40, 21)}, ComplexEventTimes_NoComplexEventTimes_8);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_8);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_7;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 50, 19, 0, 7, 2006)}, ComplexEventDates_NoComplexEventDates_7);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 5, 36, 24, 1, 2013)}, ComplexEventDates_NoComplexEventDates_7);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_7);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_9;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 6, 49)}, ComplexEventTimes_NoComplexEventTimes_9);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 17, 21)}, ComplexEventTimes_NoComplexEventTimes_9);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_9);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_8;
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 55, 44, 17, 2, 2011)}, ComplexEventDates_NoComplexEventDates_8);
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 1, 24, 6, 6, 2004)}, ComplexEventDates_NoComplexEventDates_8);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_8);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_10;
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 4, 52)}, ComplexEventTimes_NoComplexEventTimes_10);
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 53, 49)}, ComplexEventTimes_NoComplexEventTimes_10);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_10);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_11;
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 55, 46)}, ComplexEventTimes_NoComplexEventTimes_11);
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 55, 3)}, ComplexEventTimes_NoComplexEventTimes_11);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_11);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_12;
          set_field(noComplexEventTimes_1_0_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 50, 24)}, ComplexEventTimes_NoComplexEventTimes_12);
          set_field(noComplexEventTimes_1_0_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 41, 49)}, ComplexEventTimes_NoComplexEventTimes_12);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_12);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_3;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_786017494"}, EvntGrp_NoEvents_3);
      FIX::EventPx EventPx_3;
      EventPx_3.setString("15688427");
set_field(noEvents_1_1_0, EventPx_3, EvntGrp_NoEvents_3);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_1420538517"}, EvntGrp_NoEvents_3);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(16, 48, 15, 7, 9, 2013)}, EvntGrp_NoEvents_3);
      set_field(noEvents_1_1_0, FIX::EventType{7}, EvntGrp_NoEvents_3);
      all_values.push_back(EvntGrp_NoEvents_3);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_4;
      set_field(noEvents_1_1_1, FIX::EventDate{"LOCALMKTDATE_1001021896"}, EvntGrp_NoEvents_4);
      FIX::EventPx EventPx_4;
      EventPx_4.setString("13412342");
set_field(noEvents_1_1_1, EventPx_4, EvntGrp_NoEvents_4);
      set_field(noEvents_1_1_1, FIX::EventText{"STRING_1982235976"}, EvntGrp_NoEvents_4);
      set_field(noEvents_1_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(17, 3, 59, 19, 8, 2012)}, EvntGrp_NoEvents_4);
      set_field(noEvents_1_1_1, FIX::EventType{19}, EvntGrp_NoEvents_4);
      all_values.push_back(EvntGrp_NoEvents_4);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_5;
      set_field(noEvents_1_1_2, FIX::EventDate{"LOCALMKTDATE_102743847"}, EvntGrp_NoEvents_5);
      FIX::EventPx EventPx_5;
      EventPx_5.setString("5131883");
set_field(noEvents_1_1_2, EventPx_5, EvntGrp_NoEvents_5);
      set_field(noEvents_1_1_2, FIX::EventText{"STRING_1660612868"}, EvntGrp_NoEvents_5);
      set_field(noEvents_1_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(20, 52, 25, 2, 8, 2017)}, EvntGrp_NoEvents_5);
      set_field(noEvents_1_1_2, FIX::EventType{17}, EvntGrp_NoEvents_5);
      all_values.push_back(EvntGrp_NoEvents_5);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_1;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_961452403"}, InstrumentParties_NoInstrumentParties_1);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_1);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{463851453}, InstrumentParties_NoInstrumentParties_1);
      all_values.push_back(InstrumentParties_NoInstrumentParties_1);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_905039428"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{922789697}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_545752670"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{1560355794}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4;
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubID{"STRING_1923811594"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4);
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubIDType{1886986963}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_2;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_1395108122"}, InstrumentParties_NoInstrumentParties_2);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_2);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{1856669836}, InstrumentParties_NoInstrumentParties_2);
      all_values.push_back(InstrumentParties_NoInstrumentParties_2);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_571473751"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{1877244451}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6;
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubID{"STRING_1900365173"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6);
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubIDType{209120657}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_1;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_2003109020"}, SecAltIDGrp_NoSecurityAltID_1);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_722309038"}, SecAltIDGrp_NoSecurityAltID_1);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_1);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_2;
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltID{"STRING_281947182"}, SecAltIDGrp_NoSecurityAltID_2);
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltIDSource{"STRING_1302657723"}, SecAltIDGrp_NoSecurityAltID_2);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_2);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_3;
      set_field(noSecurityAltID_1_1_2, FIX::SecurityAltID{"STRING_633501827"}, SecAltIDGrp_NoSecurityAltID_3);
      set_field(noSecurityAltID_1_1_2, FIX::SecurityAltIDSource{"STRING_163263686"}, SecAltIDGrp_NoSecurityAltID_3);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_3);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_2;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_63726080"}, SecurityXML_2);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{138789077}, SecurityXML_2);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_727906701"}, SecurityXML_2);
    all_values.push_back(SecurityXML_2);
    all_compo_names.insert("...NoRelatedSym..");

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoRelatedSym noRelatedSym_0_2;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_2;
    FIX::AttachmentPoint AttachmentPoint_2;
    AttachmentPoint_2.setString("55.800000");
set_field(noRelatedSym_0_2, AttachmentPoint_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CFICode{"STRING_1212919073"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CPProgram{99}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CPRegType{"STRING_572264335"}, Instrument_2);
    FIX::CapPrice CapPrice_2;
    CapPrice_2.setString("18524358");
set_field(noRelatedSym_0_2, CapPrice_2, Instrument_2);
    FIX::ContractMultiplier ContractMultiplier_2;
    ContractMultiplier_2.setString("10294560");
set_field(noRelatedSym_0_2, ContractMultiplier_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ContractMultiplierUnit{0}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ContractSettlMonth{"MONTHYEAR_609991617"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CountryOfIssue{"COUNTRY_1952245736"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CouponPaymentDate{"LOCALMKTDATE_1708918055"}, Instrument_2);
    FIX::CouponRate CouponRate_2;
    CouponRate_2.setString("37.640000");
set_field(noRelatedSym_0_2, CouponRate_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CreditRating{"STRING_1728573682"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::DatedDate{"LOCALMKTDATE_1448421370"}, Instrument_2);
    FIX::DetachmentPoint DetachmentPoint_2;
    DetachmentPoint_2.setString("18.860000");
set_field(noRelatedSym_0_2, DetachmentPoint_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::EncodedIssuer{"DATA_589621133"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::EncodedIssuerLen{1157607559}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::EncodedSecurityDesc{"DATA_1894747904"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::EncodedSecurityDescLen{1161094884}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ExerciseStyle{0}, Instrument_2);
    FIX::Factor Factor_2;
    Factor_2.setString("16476294");
set_field(noRelatedSym_0_2, Factor_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::FlexProductEligibilityIndicator{true}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::FlexibleIndicator{true}, Instrument_2);
    FIX::FloorPrice FloorPrice_2;
    FloorPrice_2.setString("15032548");
set_field(noRelatedSym_0_2, FloorPrice_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::FlowScheduleType{0}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::InstrRegistry{"STRING_1938133506"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::InstrmtAssignmentMethod{'6'}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::InterestAccrualDate{"LOCALMKTDATE_578542759"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::IssueDate{"LOCALMKTDATE_2101397192"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::Issuer{"STRING_722154957"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ListMethod{0}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::LocaleOfIssue{"STRING_681820245"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::MaturityDate{"LOCALMKTDATE_332966889"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::MaturityMonthYear{"MONTHYEAR_1930250909"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::MaturityTime{"TZTIMEONLY_1247424830"}, Instrument_2);
    FIX::MinPriceIncrement MinPriceIncrement_2;
    MinPriceIncrement_2.setString("9052312");
set_field(noRelatedSym_0_2, MinPriceIncrement_2, Instrument_2);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_2;
    MinPriceIncrementAmount_2.setString("16352030");
set_field(noRelatedSym_0_2, MinPriceIncrementAmount_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::NTPositionLimit{129397221}, Instrument_2);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_2;
    NotionalPercentageOutstanding_2.setString("66.100000");
set_field(noRelatedSym_0_2, NotionalPercentageOutstanding_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::OptAttribute{'9'}, Instrument_2);
    FIX::OptPayoutAmount OptPayoutAmount_2;
    OptPayoutAmount_2.setString("20816429");
set_field(noRelatedSym_0_2, OptPayoutAmount_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::OptPayoutType{3}, Instrument_2);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_2;
    OriginalNotionalPercentageOutstanding_2.setString("48.320000");
set_field(noRelatedSym_0_2, OriginalNotionalPercentageOutstanding_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::Pool{"STRING_1662732991"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::PositionLimit{930768740}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::PriceUnitOfMeasure{"STRING_104870476"}, Instrument_2);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_2;
    PriceUnitOfMeasureQty_2.setString("20883762");
set_field(noRelatedSym_0_2, PriceUnitOfMeasureQty_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::Product{8}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ProductComplex{"STRING_1265965361"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::PutOrCall{1}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::RedemptionDate{"LOCALMKTDATE_785956757"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::RepoCollateralSecurityType{"STRING_488697255"}, Instrument_2);
    FIX::RepurchaseRate RepurchaseRate_2;
    RepurchaseRate_2.setString("36.890000");
set_field(noRelatedSym_0_2, RepurchaseRate_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::RepurchaseTerm{141727910}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::RestructuringType{"STRING_XR"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityDesc{"STRING_127613547"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityExchange{"EXCHANGE_800156787"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityGroup{"STRING_1012280947"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityID{"STRING_81527091"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityIDSource{"STRING_A"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityStatus{"STRING_2"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecuritySubType{"STRING_763347336"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityType{"STRING_CTB"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::Seniority{"STRING_SB"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SettlMethod{'P'}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SettleOnOpenFlag{"STRING_613026211"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::StateOrProvinceOfIssue{"STRING_1000099496"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::StrikeCurrency{"EUR"}, Instrument_2);
    FIX::StrikeMultiplier StrikeMultiplier_2;
    StrikeMultiplier_2.setString("10978105");
set_field(noRelatedSym_0_2, StrikeMultiplier_2, Instrument_2);
    FIX::StrikePrice StrikePrice_2;
    StrikePrice_2.setString("20743286");
set_field(noRelatedSym_0_2, StrikePrice_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::StrikePriceBoundaryMethod{3}, Instrument_2);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_2;
    StrikePriceBoundaryPrecision_2.setString("53.970000");
set_field(noRelatedSym_0_2, StrikePriceBoundaryPrecision_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::StrikePriceDeterminationMethod{1}, Instrument_2);
    FIX::StrikeValue StrikeValue_2;
    StrikeValue_2.setString("9470552");
set_field(noRelatedSym_0_2, StrikeValue_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::Symbol{"STRING_609448468"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SymbolSfx{"STRING_CD"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::TimeUnit{"STRING_Mo"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_2);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_2;
    UnitOfMeasureQty_2.setString("17162089");
set_field(noRelatedSym_0_2, UnitOfMeasureQty_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_2);
    all_values.push_back(Instrument_2);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_4;
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_4);
      FIX::ComplexEventPrice ComplexEventPrice_4;
      ComplexEventPrice_4.setString("6754604");
set_field(noComplexEvents_2_1_0, ComplexEventPrice_4, ComplexEvents_NoComplexEvents_4);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_4);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_4;
      ComplexEventPriceBoundaryPrecision_4.setString("25.360000");
set_field(noComplexEvents_2_1_0, ComplexEventPriceBoundaryPrecision_4, ComplexEvents_NoComplexEvents_4);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_4);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_4);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_4;
      ComplexOptPayoutAmount_4.setString("1148296");
set_field(noComplexEvents_2_1_0, ComplexOptPayoutAmount_4, ComplexEvents_NoComplexEvents_4);
      all_values.push_back(ComplexEvents_NoComplexEvents_4);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_9;
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 34, 51, 3, 6, 2015)}, ComplexEventDates_NoComplexEventDates_9);
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 24, 32, 12, 10, 2002)}, ComplexEventDates_NoComplexEventDates_9);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_9);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_13;
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 28, 16)}, ComplexEventTimes_NoComplexEventTimes_13);
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 49, 46)}, ComplexEventTimes_NoComplexEventTimes_13);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_13);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_10;
        set_field(noComplexEventDates_2_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 50, 52, 14, 2, 2005)}, ComplexEventDates_NoComplexEventDates_10);
        set_field(noComplexEventDates_2_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 43, 28, 15, 3, 2009)}, ComplexEventDates_NoComplexEventDates_10);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_10);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_14;
          set_field(noComplexEventTimes_2_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 27, 53)}, ComplexEventTimes_NoComplexEventTimes_14);
          set_field(noComplexEventTimes_2_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 37, 30)}, ComplexEventTimes_NoComplexEventTimes_14);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_14);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_6;
      set_field(noEvents_2_1_0, FIX::EventDate{"LOCALMKTDATE_1652010770"}, EvntGrp_NoEvents_6);
      FIX::EventPx EventPx_6;
      EventPx_6.setString("9573425");
set_field(noEvents_2_1_0, EventPx_6, EvntGrp_NoEvents_6);
      set_field(noEvents_2_1_0, FIX::EventText{"STRING_546748141"}, EvntGrp_NoEvents_6);
      set_field(noEvents_2_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(2, 42, 50, 26, 11, 2009)}, EvntGrp_NoEvents_6);
      set_field(noEvents_2_1_0, FIX::EventType{19}, EvntGrp_NoEvents_6);
      all_values.push_back(EvntGrp_NoEvents_6);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_7;
      set_field(noEvents_2_1_1, FIX::EventDate{"LOCALMKTDATE_1751706761"}, EvntGrp_NoEvents_7);
      FIX::EventPx EventPx_7;
      EventPx_7.setString("7423123");
set_field(noEvents_2_1_1, EventPx_7, EvntGrp_NoEvents_7);
      set_field(noEvents_2_1_1, FIX::EventText{"STRING_471825410"}, EvntGrp_NoEvents_7);
      set_field(noEvents_2_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(6, 25, 55, 10, 5, 2008)}, EvntGrp_NoEvents_7);
      set_field(noEvents_2_1_1, FIX::EventType{14}, EvntGrp_NoEvents_7);
      all_values.push_back(EvntGrp_NoEvents_7);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_2_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_8;
      set_field(noEvents_2_1_2, FIX::EventDate{"LOCALMKTDATE_1975662385"}, EvntGrp_NoEvents_8);
      FIX::EventPx EventPx_8;
      EventPx_8.setString("1382835");
set_field(noEvents_2_1_2, EventPx_8, EvntGrp_NoEvents_8);
      set_field(noEvents_2_1_2, FIX::EventText{"STRING_2073419220"}, EvntGrp_NoEvents_8);
      set_field(noEvents_2_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(10, 44, 40, 13, 2, 2016)}, EvntGrp_NoEvents_8);
      set_field(noEvents_2_1_2, FIX::EventType{5}, EvntGrp_NoEvents_8);
      all_values.push_back(EvntGrp_NoEvents_8);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_3;
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyID{"STRING_1053554906"}, InstrumentParties_NoInstrumentParties_3);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_3);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyRole{247987333}, InstrumentParties_NoInstrumentParties_3);
      all_values.push_back(InstrumentParties_NoInstrumentParties_3);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7;
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubID{"STRING_129841733"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7);
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubIDType{389142899}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_4;
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltID{"STRING_1717592511"}, SecAltIDGrp_NoSecurityAltID_4);
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltIDSource{"STRING_2140849660"}, SecAltIDGrp_NoSecurityAltID_4);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_4);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_4;
    set_field(noRelatedSym_0_2, FIX::SecurityXML{"XMLDATA_170163840"}, SecurityXML_4);
    set_field(noRelatedSym_0_2, FIX::SecurityXMLLen{41934273}, SecurityXML_4);
    set_field(noRelatedSym_0_2, FIX::SecurityXMLSchema{"STRING_2058585667"}, SecurityXML_4);
    all_values.push_back(SecurityXML_4);
    all_compo_names.insert("...NoRelatedSym..");

    msg.addGroup(noRelatedSym_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_0;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_276011279"}, Parties_NoPartyIDs_0);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_0);
    set_field(noPartyIDs_0_0, FIX::PartyRole{51}, Parties_NoPartyIDs_0);
    all_values.push_back(Parties_NoPartyIDs_0);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_0;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1385616614"}, PtysSubGrp_NoPartySubIDs_0);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_0);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_0);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_1;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_841984100"}, Parties_NoPartyIDs_1);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_1);
    set_field(noPartyIDs_0_1, FIX::PartyRole{28}, Parties_NoPartyIDs_1);
    all_values.push_back(Parties_NoPartyIDs_1);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_1;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_689450532"}, PtysSubGrp_NoPartySubIDs_1);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_1);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_1);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_2;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_2003058664"}, PtysSubGrp_NoPartySubIDs_2);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_2);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_2);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_3;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1353201735"}, PtysSubGrp_NoPartySubIDs_3);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_3);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_3);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::AdjustedPositionReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_0;
    FIX::LongQty LongQty_0;
    LongQty_0.setString("15949674");
set_field(noPositions_0_0, LongQty_0, PositionQty_NoPositions_0);
    set_field(noPositions_0_0, FIX::PosQtyStatus{0}, PositionQty_NoPositions_0);
    set_field(noPositions_0_0, FIX::PosType{"STRING_TOT"}, PositionQty_NoPositions_0);
    set_field(noPositions_0_0, FIX::QuantityDate{"LOCALMKTDATE_1842954778"}, PositionQty_NoPositions_0);
    FIX::ShortQty ShortQty_0;
    ShortQty_0.setString("4858856");
set_field(noPositions_0_0, ShortQty_0, PositionQty_NoPositions_0);
    all_values.push_back(PositionQty_NoPositions_0);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_0;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_84614030"}, NestedParties_NoNestedPartyIDs_0);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_0);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{380809044}, NestedParties_NoNestedPartyIDs_0);
      all_values.push_back(NestedParties_NoNestedPartyIDs_0);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_0;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_83901020"}, NstdPtysSubGrp_NoNestedPartySubIDs_0);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{422743317}, NstdPtysSubGrp_NoNestedPartySubIDs_0);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_0);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_1;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_2136565710"}, NstdPtysSubGrp_NoNestedPartySubIDs_1);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{983843907}, NstdPtysSubGrp_NoNestedPartySubIDs_1);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_1);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_1;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_698754596"}, NestedParties_NoNestedPartyIDs_1);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_1);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{737396}, NestedParties_NoNestedPartyIDs_1);
      all_values.push_back(NestedParties_NoNestedPartyIDs_1);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_2;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_2075289931"}, NstdPtysSubGrp_NoNestedPartySubIDs_2);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1511491986}, NstdPtysSubGrp_NoNestedPartySubIDs_2);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_2);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_3;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_407060412"}, NstdPtysSubGrp_NoNestedPartySubIDs_3);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{1451706452}, NstdPtysSubGrp_NoNestedPartySubIDs_3);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_3);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_4;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_800698500"}, NstdPtysSubGrp_NoNestedPartySubIDs_4);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{828604175}, NstdPtysSubGrp_NoNestedPartySubIDs_4);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_4);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_1;
    FIX::LongQty LongQty_1;
    LongQty_1.setString("21411569");
set_field(noPositions_0_1, LongQty_1, PositionQty_NoPositions_1);
    set_field(noPositions_0_1, FIX::PosQtyStatus{2}, PositionQty_NoPositions_1);
    set_field(noPositions_0_1, FIX::PosType{"STRING_AS"}, PositionQty_NoPositions_1);
    set_field(noPositions_0_1, FIX::QuantityDate{"LOCALMKTDATE_1544488581"}, PositionQty_NoPositions_1);
    FIX::ShortQty ShortQty_1;
    ShortQty_1.setString("16646007");
set_field(noPositions_0_1, ShortQty_1, PositionQty_NoPositions_1);
    all_values.push_back(PositionQty_NoPositions_1);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_2;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_619043774"}, NestedParties_NoNestedPartyIDs_2);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_2);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1473484527}, NestedParties_NoNestedPartyIDs_2);
      all_values.push_back(NestedParties_NoNestedPartyIDs_2);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_5;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_807555681"}, NstdPtysSubGrp_NoNestedPartySubIDs_5);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1959370213}, NstdPtysSubGrp_NoNestedPartySubIDs_5);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_5);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_6;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_2110602402"}, NstdPtysSubGrp_NoNestedPartySubIDs_6);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{892169711}, NstdPtysSubGrp_NoNestedPartySubIDs_6);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_6);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_7;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_1873107393"}, NstdPtysSubGrp_NoNestedPartySubIDs_7);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{343927798}, NstdPtysSubGrp_NoNestedPartySubIDs_7);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_7);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_3;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_970149754"}, NestedParties_NoNestedPartyIDs_3);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_3);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{766671116}, NestedParties_NoNestedPartyIDs_3);
      all_values.push_back(NestedParties_NoNestedPartyIDs_3);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_8;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_793368673"}, NstdPtysSubGrp_NoNestedPartySubIDs_8);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1465425712}, NstdPtysSubGrp_NoNestedPartySubIDs_8);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_8);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_9;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_1648905132"}, NstdPtysSubGrp_NoNestedPartySubIDs_9);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{794106069}, NstdPtysSubGrp_NoNestedPartySubIDs_9);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_9);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_10;
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubID{"STRING_1030502024"}, NstdPtysSubGrp_NoNestedPartySubIDs_10);
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubIDType{1576711415}, NstdPtysSubGrp_NoNestedPartySubIDs_10);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_10);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_4;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_158114408"}, NestedParties_NoNestedPartyIDs_4);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_4);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{880934220}, NestedParties_NoNestedPartyIDs_4);
      all_values.push_back(NestedParties_NoNestedPartyIDs_4);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_11;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_118682963"}, NstdPtysSubGrp_NoNestedPartySubIDs_11);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{874607556}, NstdPtysSubGrp_NoNestedPartySubIDs_11);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_11);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_12;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_1270211927"}, NstdPtysSubGrp_NoNestedPartySubIDs_12);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{802862155}, NstdPtysSubGrp_NoNestedPartySubIDs_12);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_12);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_13;
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubID{"STRING_271612490"}, NstdPtysSubGrp_NoNestedPartySubIDs_13);
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubIDType{787329032}, NstdPtysSubGrp_NoNestedPartySubIDs_13);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_13);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noPositions_0_1);
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
