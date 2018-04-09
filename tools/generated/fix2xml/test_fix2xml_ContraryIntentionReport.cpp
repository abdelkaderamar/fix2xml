#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ContraryIntentionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ContraryIntentionReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ContraryIntentionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ContraryIntentionReport_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_398691225"}, ContraryIntentionReport_0);
  set_field(msg, FIX::ContIntRptID{"STRING_1196695874"}, ContraryIntentionReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1105900906"}, ContraryIntentionReport_0);
  set_field(msg, FIX::EncodedTextLen{1483227939}, ContraryIntentionReport_0);
  set_field(msg, FIX::InputSource{"STRING_1764083985"}, ContraryIntentionReport_0);
  set_field(msg, FIX::LateIndicator{true}, ContraryIntentionReport_0);
  set_field(msg, FIX::Text{"STRING_530991560"}, ContraryIntentionReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(18, 16, 42, 2, 1, 2000)}, ContraryIntentionReport_0);
  all_values.push_back(ContraryIntentionReport_0);

  all_compo_names.insert("ContraryIntentionReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_1;
  set_field(msg, FIX::ApplID{"STRING_622334100"}, ApplicationSequenceControl_1);
  set_field(msg, FIX::ApplLastSeqNum{1811532155}, ApplicationSequenceControl_1);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_1);
  set_field(msg, FIX::ApplSeqNum{151572512}, ApplicationSequenceControl_1);
  all_values.push_back(ApplicationSequenceControl_1);
  all_compo_names.insert(".");

  // ExpirationQty
  // Group ExpirationQty.NoExpiration
  {
    FIX50SP2::ContraryIntentionReport::NoExpiration noExpiration_0_0;
    // ExpirationQty.NoExpiration
    multiset<string> ExpirationQty_NoExpiration_0;
    FIX::ExpQty ExpQty_0;
    ExpQty_0.setString("19098556");
set_field(noExpiration_0_0, ExpQty_0, ExpirationQty_NoExpiration_0);
    set_field(noExpiration_0_0, FIX::ExpirationQtyType{2}, ExpirationQty_NoExpiration_0);
    all_values.push_back(ExpirationQty_NoExpiration_0);
    all_compo_names.insert("...NoExpiration");

    msg.addGroup(noExpiration_0_0);
  }
  // Instrument
  multiset<string> Instrument_15;
  FIX::AttachmentPoint AttachmentPoint_15;
  AttachmentPoint_15.setString("93.950000");
set_field(msg, AttachmentPoint_15, Instrument_15);
  set_field(msg, FIX::CFICode{"STRING_2116304621"}, Instrument_15);
  set_field(msg, FIX::CPProgram{99}, Instrument_15);
  set_field(msg, FIX::CPRegType{"STRING_808116650"}, Instrument_15);
  FIX::CapPrice CapPrice_15;
  CapPrice_15.setString("11585862");
set_field(msg, CapPrice_15, Instrument_15);
  FIX::ContractMultiplier ContractMultiplier_15;
  ContractMultiplier_15.setString("3616367");
set_field(msg, ContractMultiplier_15, Instrument_15);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_15);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1256949605"}, Instrument_15);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_302854922"}, Instrument_15);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1655159935"}, Instrument_15);
  FIX::CouponRate CouponRate_15;
  CouponRate_15.setString("8.310000");
set_field(msg, CouponRate_15, Instrument_15);
  set_field(msg, FIX::CreditRating{"STRING_1499550797"}, Instrument_15);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_613577194"}, Instrument_15);
  FIX::DetachmentPoint DetachmentPoint_15;
  DetachmentPoint_15.setString("51.220000");
set_field(msg, DetachmentPoint_15, Instrument_15);
  set_field(msg, FIX::EncodedIssuer{"DATA_1116151134"}, Instrument_15);
  set_field(msg, FIX::EncodedIssuerLen{1122415066}, Instrument_15);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1522376682"}, Instrument_15);
  set_field(msg, FIX::EncodedSecurityDescLen{338298046}, Instrument_15);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_15);
  FIX::Factor Factor_15;
  Factor_15.setString("4445462");
set_field(msg, Factor_15, Instrument_15);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_15);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_15);
  FIX::FloorPrice FloorPrice_15;
  FloorPrice_15.setString("2658278");
set_field(msg, FloorPrice_15, Instrument_15);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_15);
  set_field(msg, FIX::InstrRegistry{"STRING_1255560974"}, Instrument_15);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_15);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1616526511"}, Instrument_15);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1407133486"}, Instrument_15);
  set_field(msg, FIX::Issuer{"STRING_611430463"}, Instrument_15);
  set_field(msg, FIX::ListMethod{1}, Instrument_15);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1490672922"}, Instrument_15);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1082839859"}, Instrument_15);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1347719515"}, Instrument_15);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_2072061354"}, Instrument_15);
  FIX::MinPriceIncrement MinPriceIncrement_15;
  MinPriceIncrement_15.setString("18909565");
set_field(msg, MinPriceIncrement_15, Instrument_15);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_15;
  MinPriceIncrementAmount_15.setString("3588221");
set_field(msg, MinPriceIncrementAmount_15, Instrument_15);
  set_field(msg, FIX::NTPositionLimit{286214484}, Instrument_15);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_15;
  NotionalPercentageOutstanding_15.setString("96.330000");
set_field(msg, NotionalPercentageOutstanding_15, Instrument_15);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_15);
  FIX::OptPayoutAmount OptPayoutAmount_15;
  OptPayoutAmount_15.setString("5890694");
set_field(msg, OptPayoutAmount_15, Instrument_15);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_15);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_15;
  OriginalNotionalPercentageOutstanding_15.setString("89.410000");
set_field(msg, OriginalNotionalPercentageOutstanding_15, Instrument_15);
  set_field(msg, FIX::Pool{"STRING_2088620203"}, Instrument_15);
  set_field(msg, FIX::PositionLimit{1781763114}, Instrument_15);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_15);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1057287689"}, Instrument_15);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_15;
  PriceUnitOfMeasureQty_15.setString("7566945");
set_field(msg, PriceUnitOfMeasureQty_15, Instrument_15);
  set_field(msg, FIX::Product{4}, Instrument_15);
  set_field(msg, FIX::ProductComplex{"STRING_1395585736"}, Instrument_15);
  set_field(msg, FIX::PutOrCall{0}, Instrument_15);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1934753329"}, Instrument_15);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_702413856"}, Instrument_15);
  FIX::RepurchaseRate RepurchaseRate_15;
  RepurchaseRate_15.setString("23.380000");
set_field(msg, RepurchaseRate_15, Instrument_15);
  set_field(msg, FIX::RepurchaseTerm{53097564}, Instrument_15);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_15);
  set_field(msg, FIX::SecurityDesc{"STRING_2122523313"}, Instrument_15);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_2130457602"}, Instrument_15);
  set_field(msg, FIX::SecurityGroup{"STRING_1606739426"}, Instrument_15);
  set_field(msg, FIX::SecurityID{"STRING_1382173151"}, Instrument_15);
  set_field(msg, FIX::SecurityIDSource{"STRING_F"}, Instrument_15);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_15);
  set_field(msg, FIX::SecuritySubType{"STRING_725362426"}, Instrument_15);
  set_field(msg, FIX::SecurityType{"STRING_CP"}, Instrument_15);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_15);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_15);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1420717138"}, Instrument_15);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_397212339"}, Instrument_15);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_15);
  FIX::StrikeMultiplier StrikeMultiplier_15;
  StrikeMultiplier_15.setString("20129840");
set_field(msg, StrikeMultiplier_15, Instrument_15);
  FIX::StrikePrice StrikePrice_15;
  StrikePrice_15.setString("15252240");
set_field(msg, StrikePrice_15, Instrument_15);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_15);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_15;
  StrikePriceBoundaryPrecision_15.setString("93.910000");
set_field(msg, StrikePriceBoundaryPrecision_15, Instrument_15);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_15);
  FIX::StrikeValue StrikeValue_15;
  StrikeValue_15.setString("17362085");
set_field(msg, StrikeValue_15, Instrument_15);
  set_field(msg, FIX::Symbol{"STRING_957259807"}, Instrument_15);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_15);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_15);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_15);
  set_field(msg, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_15);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_15;
  UnitOfMeasureQty_15.setString("5791548");
set_field(msg, UnitOfMeasureQty_15, Instrument_15);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_15);
  all_values.push_back(Instrument_15);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_27;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_27);
    FIX::ComplexEventPrice ComplexEventPrice_27;
    ComplexEventPrice_27.setString("1403505");
set_field(noComplexEvents_0_0, ComplexEventPrice_27, ComplexEvents_NoComplexEvents_27);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_27);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_27;
    ComplexEventPriceBoundaryPrecision_27.setString("68.620000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_27, ComplexEvents_NoComplexEvents_27);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_27);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_27);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_27;
    ComplexOptPayoutAmount_27.setString("6558463");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_27, ComplexEvents_NoComplexEvents_27);
    all_values.push_back(ComplexEvents_NoComplexEvents_27);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_56;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 3, 23, 0, 2, 2014)}, ComplexEventDates_NoComplexEventDates_56);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 52, 6, 16, 9, 2016)}, ComplexEventDates_NoComplexEventDates_56);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_56);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_135;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 8, 40)}, ComplexEventTimes_NoComplexEventTimes_135);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 18, 55)}, ComplexEventTimes_NoComplexEventTimes_135);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_135);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_136;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 46, 59)}, ComplexEventTimes_NoComplexEventTimes_136);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 37, 51)}, ComplexEventTimes_NoComplexEventTimes_136);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_136);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_28;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_28);
    FIX::ComplexEventPrice ComplexEventPrice_28;
    ComplexEventPrice_28.setString("15315725");
set_field(noComplexEvents_0_1, ComplexEventPrice_28, ComplexEvents_NoComplexEvents_28);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_28);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_28;
    ComplexEventPriceBoundaryPrecision_28.setString("91.630000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_28, ComplexEvents_NoComplexEvents_28);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_28);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_28);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_28;
    ComplexOptPayoutAmount_28.setString("1060116");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_28, ComplexEvents_NoComplexEvents_28);
    all_values.push_back(ComplexEvents_NoComplexEvents_28);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_57;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 56, 48, 26, 1, 2002)}, ComplexEventDates_NoComplexEventDates_57);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 11, 1, 16, 7, 2007)}, ComplexEventDates_NoComplexEventDates_57);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_57);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_137;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 34, 27)}, ComplexEventTimes_NoComplexEventTimes_137);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 4, 10)}, ComplexEventTimes_NoComplexEventTimes_137);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_137);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_138;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 57, 52)}, ComplexEventTimes_NoComplexEventTimes_138);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 10, 53)}, ComplexEventTimes_NoComplexEventTimes_138);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_138);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_139;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 49, 14)}, ComplexEventTimes_NoComplexEventTimes_139);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 16, 19)}, ComplexEventTimes_NoComplexEventTimes_139);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_139);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_58;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 20, 50, 10, 4, 2011)}, ComplexEventDates_NoComplexEventDates_58);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 3, 24, 9, 10, 2009)}, ComplexEventDates_NoComplexEventDates_58);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_58);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_140;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 21, 55)}, ComplexEventTimes_NoComplexEventTimes_140);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 57, 15)}, ComplexEventTimes_NoComplexEventTimes_140);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_140);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_141;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 4, 29)}, ComplexEventTimes_NoComplexEventTimes_141);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 38, 26)}, ComplexEventTimes_NoComplexEventTimes_141);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_141);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_142;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 46, 18)}, ComplexEventTimes_NoComplexEventTimes_142);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 47, 33)}, ComplexEventTimes_NoComplexEventTimes_142);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_142);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_36;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1405912363"}, EvntGrp_NoEvents_36);
    FIX::EventPx EventPx_36;
    EventPx_36.setString("13372699");
set_field(noEvents_0_0, EventPx_36, EvntGrp_NoEvents_36);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1497087100"}, EvntGrp_NoEvents_36);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(18, 4, 10, 17, 6, 2003)}, EvntGrp_NoEvents_36);
    set_field(noEvents_0_0, FIX::EventType{1}, EvntGrp_NoEvents_36);
    all_values.push_back(EvntGrp_NoEvents_36);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_37;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_70738139"}, EvntGrp_NoEvents_37);
    FIX::EventPx EventPx_37;
    EventPx_37.setString("14695333");
set_field(noEvents_0_1, EventPx_37, EvntGrp_NoEvents_37);
    set_field(noEvents_0_1, FIX::EventText{"STRING_586102095"}, EvntGrp_NoEvents_37);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(15, 20, 36, 2, 11, 2008)}, EvntGrp_NoEvents_37);
    set_field(noEvents_0_1, FIX::EventType{1}, EvntGrp_NoEvents_37);
    all_values.push_back(EvntGrp_NoEvents_37);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_31;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_528756912"}, InstrumentParties_NoInstrumentParties_31);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_31);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{782803064}, InstrumentParties_NoInstrumentParties_31);
    all_values.push_back(InstrumentParties_NoInstrumentParties_31);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_661416195"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{196798703}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_256950552"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{2140269574}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_64);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1602711066"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1594220470}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_65);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_32;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1489873027"}, InstrumentParties_NoInstrumentParties_32);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_32);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1114004960}, InstrumentParties_NoInstrumentParties_32);
    all_values.push_back(InstrumentParties_NoInstrumentParties_32);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1105231817"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{2043863278}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_66);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ContraryIntentionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_39;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1957954514"}, SecAltIDGrp_NoSecurityAltID_39);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_436657910"}, SecAltIDGrp_NoSecurityAltID_39);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_39);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_30;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1488724160"}, SecurityXML_30);
  set_field(msg, FIX::SecurityXMLLen{1280004181}, SecurityXML_30);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1022760005"}, SecurityXML_30);
  all_values.push_back(SecurityXML_30);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ContraryIntentionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_33;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1104920516"}, Parties_NoPartyIDs_33);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_33);
    set_field(noPartyIDs_0_0, FIX::PartyRole{17}, Parties_NoPartyIDs_33);
    all_values.push_back(Parties_NoPartyIDs_33);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_71;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_721192635"}, PtysSubGrp_NoPartySubIDs_71);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_71);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_71);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_72;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_2121074539"}, PtysSubGrp_NoPartySubIDs_72);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_72);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_72);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_73;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_105096262"}, PtysSubGrp_NoPartySubIDs_73);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_73);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_73);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_23;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1953755710"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{60706285}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1551517729"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{63222614}, UnderlyingInstrument_23);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_23;
    UnderlyingAdjustedQuantity_23.setString("534922");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_23, UnderlyingInstrument_23);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_23;
    UnderlyingAllocationPercent_23.setString("51.470000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_23, UnderlyingInstrument_23);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_23;
    UnderlyingAttachmentPoint_23.setString("30.840000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1543365239"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_863943354"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_623964397"}, UnderlyingInstrument_23);
    FIX::UnderlyingCapValue UnderlyingCapValue_23;
    UnderlyingCapValue_23.setString("21119412");
set_field(noUnderlyings_0_0, UnderlyingCapValue_23, UnderlyingInstrument_23);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_23;
    UnderlyingCashAmount_23.setString("19691751");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_23);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_23;
    UnderlyingContractMultiplier_23.setString("13824436");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1779646037}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_957001937"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_723684148"}, UnderlyingInstrument_23);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_23;
    UnderlyingCouponRate_23.setString("65.700000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1979761942"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_23);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_23;
    UnderlyingCurrentValue_23.setString("600187");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_23, UnderlyingInstrument_23);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_23;
    UnderlyingDetachmentPoint_23.setString("74.910000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_23, UnderlyingInstrument_23);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_23;
    UnderlyingDirtyPrice_23.setString("19671334");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_23, UnderlyingInstrument_23);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_23;
    UnderlyingEndPrice_23.setString("7812113");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_23, UnderlyingInstrument_23);
    FIX::UnderlyingEndValue UnderlyingEndValue_23;
    UnderlyingEndValue_23.setString("18726004");
set_field(noUnderlyings_0_0, UnderlyingEndValue_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1940724369}, UnderlyingInstrument_23);
    FIX::UnderlyingFXRate UnderlyingFXRate_23;
    UnderlyingFXRate_23.setString("13531273");
set_field(noUnderlyings_0_0, UnderlyingFXRate_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_23);
    FIX::UnderlyingFactor UnderlyingFactor_23;
    UnderlyingFactor_23.setString("13400144");
set_field(noUnderlyings_0_0, UnderlyingFactor_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{560362726}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1783968814"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1400720745"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_2111880455"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1847191429"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1454212957"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_971141955"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1357150865"}, UnderlyingInstrument_23);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_23;
    UnderlyingNotionalPercentageOutstanding_23.setString("45.480000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_23);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_23;
    UnderlyingOriginalNotionalPercentageOutstanding_23.setString("52.620000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_814552162"}, UnderlyingInstrument_23);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_23;
    UnderlyingPriceUnitOfMeasureQty_23.setString("16567768");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{353975641}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{49512150}, UnderlyingInstrument_23);
    FIX::UnderlyingPx UnderlyingPx_23;
    UnderlyingPx_23.setString("12889392");
set_field(noUnderlyings_0_0, UnderlyingPx_23, UnderlyingInstrument_23);
    FIX::UnderlyingQty UnderlyingQty_23;
    UnderlyingQty_23.setString("13109775");
set_field(noUnderlyings_0_0, UnderlyingQty_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_773196298"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_53622144"}, UnderlyingInstrument_23);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_23;
    UnderlyingRepurchaseRate_23.setString("58.730000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{2034222773}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_2070709231"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1203274625"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_35516617"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1890359061"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1984486012"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1908117107"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1683599782"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1190129713"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1738330211"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_23);
    FIX::UnderlyingStartValue UnderlyingStartValue_23;
    UnderlyingStartValue_23.setString("17504924");
set_field(noUnderlyings_0_0, UnderlyingStartValue_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1374815378"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_23);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_23;
    UnderlyingStrikePrice_23.setString("10745231");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1583580648"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_538547554"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_284190376"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_286191548"}, UnderlyingInstrument_23);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_23;
    UnderlyingUnitOfMeasureQty_23.setString("2261492");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_23, UnderlyingInstrument_23);
    all_values.push_back(UnderlyingInstrument_23);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_46;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1100743710"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_46);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1882926047"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_46);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_46);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_40;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1150255860"}, UnderlyingStipulations_NoUnderlyingStips_40);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1024381621"}, UnderlyingStipulations_NoUnderlyingStips_40);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_40);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_41;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1782775211"}, UnderlyingStipulations_NoUnderlyingStips_41);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1923452158"}, UnderlyingStipulations_NoUnderlyingStips_41);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_41);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_46;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_778547436"}, UndlyInstrumentParties_NoUndlyInstrumentParties_46);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_46);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1001229348}, UndlyInstrumentParties_NoUndlyInstrumentParties_46);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_46);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1845707901"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{744104761}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1818824425"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1606341360}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_280220895"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{861470491}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_47;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1197187923"}, UndlyInstrumentParties_NoUndlyInstrumentParties_47);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_47);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{464479283}, UndlyInstrumentParties_NoUndlyInstrumentParties_47);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_47);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1285719180"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{31884882}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_24;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1499042812"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{721816180}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_570432437"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1783233189}, UnderlyingInstrument_24);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_24;
    UnderlyingAdjustedQuantity_24.setString("10080077");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_24, UnderlyingInstrument_24);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_24;
    UnderlyingAllocationPercent_24.setString("16.520000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_24, UnderlyingInstrument_24);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_24;
    UnderlyingAttachmentPoint_24.setString("51.800000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_2108751439"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_532024052"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_225369164"}, UnderlyingInstrument_24);
    FIX::UnderlyingCapValue UnderlyingCapValue_24;
    UnderlyingCapValue_24.setString("11115236");
set_field(noUnderlyings_0_1, UnderlyingCapValue_24, UnderlyingInstrument_24);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_24;
    UnderlyingCashAmount_24.setString("15564056");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_24);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_24;
    UnderlyingContractMultiplier_24.setString("8874921");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{486925790}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_639208163"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_550199798"}, UnderlyingInstrument_24);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_24;
    UnderlyingCouponRate_24.setString("51.380000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_473546576"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_24);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_24;
    UnderlyingCurrentValue_24.setString("1448873");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_24, UnderlyingInstrument_24);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_24;
    UnderlyingDetachmentPoint_24.setString("54.110000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_24, UnderlyingInstrument_24);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_24;
    UnderlyingDirtyPrice_24.setString("3649971");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_24, UnderlyingInstrument_24);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_24;
    UnderlyingEndPrice_24.setString("10063578");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_24, UnderlyingInstrument_24);
    FIX::UnderlyingEndValue UnderlyingEndValue_24;
    UnderlyingEndValue_24.setString("9044696");
set_field(noUnderlyings_0_1, UnderlyingEndValue_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1521348636}, UnderlyingInstrument_24);
    FIX::UnderlyingFXRate UnderlyingFXRate_24;
    UnderlyingFXRate_24.setString("14708371");
set_field(noUnderlyings_0_1, UnderlyingFXRate_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_24);
    FIX::UnderlyingFactor UnderlyingFactor_24;
    UnderlyingFactor_24.setString("6595841");
set_field(noUnderlyings_0_1, UnderlyingFactor_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1502722010}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_680548504"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1381400349"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_2073154447"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_316298045"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_241924429"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_722252452"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_69869577"}, UnderlyingInstrument_24);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_24;
    UnderlyingNotionalPercentageOutstanding_24.setString("22.200000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_24);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_24;
    UnderlyingOriginalNotionalPercentageOutstanding_24.setString("87.420000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1314715872"}, UnderlyingInstrument_24);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_24;
    UnderlyingPriceUnitOfMeasureQty_24.setString("6631985");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{155899469}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{54724386}, UnderlyingInstrument_24);
    FIX::UnderlyingPx UnderlyingPx_24;
    UnderlyingPx_24.setString("11501243");
set_field(noUnderlyings_0_1, UnderlyingPx_24, UnderlyingInstrument_24);
    FIX::UnderlyingQty UnderlyingQty_24;
    UnderlyingQty_24.setString("7951076");
set_field(noUnderlyings_0_1, UnderlyingQty_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_604924184"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_490795809"}, UnderlyingInstrument_24);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_24;
    UnderlyingRepurchaseRate_24.setString("42.090000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{853348235}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_575572060"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1413541563"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_560629998"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_940569206"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_272415760"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1465099684"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_314434194"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1743252888"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_646605376"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_24);
    FIX::UnderlyingStartValue UnderlyingStartValue_24;
    UnderlyingStartValue_24.setString("10984912");
set_field(noUnderlyings_0_1, UnderlyingStartValue_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1327153881"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_24);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_24;
    UnderlyingStrikePrice_24.setString("16434519");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_449859493"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1746414502"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1713321504"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_653051714"}, UnderlyingInstrument_24);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_24;
    UnderlyingUnitOfMeasureQty_24.setString("8532073");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_24, UnderlyingInstrument_24);
    all_values.push_back(UnderlyingInstrument_24);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_47;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1967767586"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_47);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1516405887"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_47);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_47);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_42;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_2022491972"}, UnderlyingStipulations_NoUnderlyingStips_42);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_519046558"}, UnderlyingStipulations_NoUnderlyingStips_42);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_42);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_48;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_479932508"}, UndlyInstrumentParties_NoUndlyInstrumentParties_48);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_48);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{2080737910}, UndlyInstrumentParties_NoUndlyInstrumentParties_48);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_48);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1585414427"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1346795825}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1893910741"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{378499986}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_49;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1619211586"}, UndlyInstrumentParties_NoUndlyInstrumentParties_49);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_49);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{692934180}, UndlyInstrumentParties_NoUndlyInstrumentParties_49);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_49);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1858132154"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1666952543}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_165988429"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1037802387}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1874887607"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1190150480}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_50;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_533770665"}, UndlyInstrumentParties_NoUndlyInstrumentParties_50);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_50);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{789081334}, UndlyInstrumentParties_NoUndlyInstrumentParties_50);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_50);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_830315167"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1642288693}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2108168767"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{650599105}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_23;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_23);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_2125144835"}, header_23);
  set_header_field(msg.getHeader(), FIX::BodyLength{525607429}, header_23);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1530257491"}, header_23);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_789744887"}, header_23);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1005539937"}, header_23);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_392616210"}, header_23);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{722999149}, header_23);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_23);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1978030638}, header_23);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_2069794975"}, header_23);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2085247773"}, header_23);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_209046976"}, header_23);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(22, 16, 51, 20, 9, 2017)}, header_23);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_23);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_23);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1965159001"}, header_23);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{284028813}, header_23);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_326117464"}, header_23);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_606756687"}, header_23);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_383637334"}, header_23);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(20, 34, 36, 25, 2, 2011)}, header_23);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_495546508"}, header_23);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1111728528"}, header_23);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1190695454"}, header_23);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_888162718"}, header_23);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1834727678}, header_23);
  all_values.push_back(header_23);
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
