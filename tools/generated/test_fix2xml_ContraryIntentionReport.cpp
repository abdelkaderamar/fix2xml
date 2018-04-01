#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::ContraryIntentionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ContraryIntentionReport_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_147834811"}, ContraryIntentionReport_0);
  set_field(msg, FIX::ContIntRptID{"STRING_119645126"}, ContraryIntentionReport_0);
  set_field(msg, FIX::EncodedText{"DATA_2132107691"}, ContraryIntentionReport_0);
  set_field(msg, FIX::EncodedTextLen{1612176985}, ContraryIntentionReport_0);
  set_field(msg, FIX::InputSource{"STRING_1812368835"}, ContraryIntentionReport_0);
  set_field(msg, FIX::LateIndicator{true}, ContraryIntentionReport_0);
  set_field(msg, FIX::Text{"STRING_1977494431"}, ContraryIntentionReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(12, 42, 20, 6, 11, 2014)}, ContraryIntentionReport_0);
  all_values.push_back(ContraryIntentionReport_0);

  all_compo_names.insert("ContraryIntentionReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_1;
  set_field(msg, FIX::ApplID{"STRING_280307816"}, ApplicationSequenceControl_1);
  set_field(msg, FIX::ApplLastSeqNum{1425622929}, ApplicationSequenceControl_1);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_1);
  set_field(msg, FIX::ApplSeqNum{522375570}, ApplicationSequenceControl_1);
  all_values.push_back(ApplicationSequenceControl_1);
  all_compo_names.insert(".");

  // ExpirationQty
  // Group ExpirationQty.NoExpiration
  {
    FIX50SP2::ContraryIntentionReport::NoExpiration noExpiration_0_0;
    // ExpirationQty.NoExpiration
    multiset<string> ExpirationQty_NoExpiration_0;
    FIX::ExpQty ExpQty_0;
    ExpQty_0.setString("15707686");
set_field(noExpiration_0_0, ExpQty_0, ExpirationQty_NoExpiration_0);
    set_field(noExpiration_0_0, FIX::ExpirationQtyType{2}, ExpirationQty_NoExpiration_0);
    all_values.push_back(ExpirationQty_NoExpiration_0);
    all_compo_names.insert("...NoExpiration");

    msg.addGroup(noExpiration_0_0);
  }
  // Instrument
  multiset<string> Instrument_15;
  FIX::AttachmentPoint AttachmentPoint_15;
  AttachmentPoint_15.setString("81.840000");
set_field(msg, AttachmentPoint_15, Instrument_15);
  set_field(msg, FIX::CFICode{"STRING_1913538311"}, Instrument_15);
  set_field(msg, FIX::CPProgram{2}, Instrument_15);
  set_field(msg, FIX::CPRegType{"STRING_572880439"}, Instrument_15);
  FIX::CapPrice CapPrice_15;
  CapPrice_15.setString("21282966");
set_field(msg, CapPrice_15, Instrument_15);
  FIX::ContractMultiplier ContractMultiplier_15;
  ContractMultiplier_15.setString("13296583");
set_field(msg, ContractMultiplier_15, Instrument_15);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_15);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1105580189"}, Instrument_15);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_306883443"}, Instrument_15);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1571619950"}, Instrument_15);
  FIX::CouponRate CouponRate_15;
  CouponRate_15.setString("50.000000");
set_field(msg, CouponRate_15, Instrument_15);
  set_field(msg, FIX::CreditRating{"STRING_426528569"}, Instrument_15);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1556243994"}, Instrument_15);
  FIX::DetachmentPoint DetachmentPoint_15;
  DetachmentPoint_15.setString("83.370000");
set_field(msg, DetachmentPoint_15, Instrument_15);
  set_field(msg, FIX::EncodedIssuer{"DATA_91413757"}, Instrument_15);
  set_field(msg, FIX::EncodedIssuerLen{1616037020}, Instrument_15);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_548119120"}, Instrument_15);
  set_field(msg, FIX::EncodedSecurityDescLen{626840796}, Instrument_15);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_15);
  FIX::Factor Factor_15;
  Factor_15.setString("446691");
set_field(msg, Factor_15, Instrument_15);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_15);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_15);
  FIX::FloorPrice FloorPrice_15;
  FloorPrice_15.setString("2690374");
set_field(msg, FloorPrice_15, Instrument_15);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_15);
  set_field(msg, FIX::InstrRegistry{"STRING_414139622"}, Instrument_15);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_15);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2030421213"}, Instrument_15);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_936515193"}, Instrument_15);
  set_field(msg, FIX::Issuer{"STRING_1355124542"}, Instrument_15);
  set_field(msg, FIX::ListMethod{1}, Instrument_15);
  set_field(msg, FIX::LocaleOfIssue{"STRING_357209131"}, Instrument_15);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1170519078"}, Instrument_15);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1219760846"}, Instrument_15);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_415056498"}, Instrument_15);
  FIX::MinPriceIncrement MinPriceIncrement_15;
  MinPriceIncrement_15.setString("17433995");
set_field(msg, MinPriceIncrement_15, Instrument_15);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_15;
  MinPriceIncrementAmount_15.setString("12005738");
set_field(msg, MinPriceIncrementAmount_15, Instrument_15);
  set_field(msg, FIX::NTPositionLimit{1744714821}, Instrument_15);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_15;
  NotionalPercentageOutstanding_15.setString("8.080000");
set_field(msg, NotionalPercentageOutstanding_15, Instrument_15);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_15);
  FIX::OptPayoutAmount OptPayoutAmount_15;
  OptPayoutAmount_15.setString("20515982");
set_field(msg, OptPayoutAmount_15, Instrument_15);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_15);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_15;
  OriginalNotionalPercentageOutstanding_15.setString("54.200000");
set_field(msg, OriginalNotionalPercentageOutstanding_15, Instrument_15);
  set_field(msg, FIX::Pool{"STRING_330643186"}, Instrument_15);
  set_field(msg, FIX::PositionLimit{1376611104}, Instrument_15);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_15);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_422056943"}, Instrument_15);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_15;
  PriceUnitOfMeasureQty_15.setString("8451644");
set_field(msg, PriceUnitOfMeasureQty_15, Instrument_15);
  set_field(msg, FIX::Product{9}, Instrument_15);
  set_field(msg, FIX::ProductComplex{"STRING_1048897739"}, Instrument_15);
  set_field(msg, FIX::PutOrCall{0}, Instrument_15);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_575498343"}, Instrument_15);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1930528436"}, Instrument_15);
  FIX::RepurchaseRate RepurchaseRate_15;
  RepurchaseRate_15.setString("82.660000");
set_field(msg, RepurchaseRate_15, Instrument_15);
  set_field(msg, FIX::RepurchaseTerm{844535811}, Instrument_15);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_15);
  set_field(msg, FIX::SecurityDesc{"STRING_594807889"}, Instrument_15);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_391712561"}, Instrument_15);
  set_field(msg, FIX::SecurityGroup{"STRING_2126067408"}, Instrument_15);
  set_field(msg, FIX::SecurityID{"STRING_1531323082"}, Instrument_15);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_15);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_15);
  set_field(msg, FIX::SecuritySubType{"STRING_1888532213"}, Instrument_15);
  set_field(msg, FIX::SecurityType{"STRING_BN"}, Instrument_15);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_15);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_15);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_365788404"}, Instrument_15);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1705141021"}, Instrument_15);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_15);
  FIX::StrikeMultiplier StrikeMultiplier_15;
  StrikeMultiplier_15.setString("18638114");
set_field(msg, StrikeMultiplier_15, Instrument_15);
  FIX::StrikePrice StrikePrice_15;
  StrikePrice_15.setString("18049345");
set_field(msg, StrikePrice_15, Instrument_15);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_15);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_15;
  StrikePriceBoundaryPrecision_15.setString("32.130000");
set_field(msg, StrikePriceBoundaryPrecision_15, Instrument_15);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_15);
  FIX::StrikeValue StrikeValue_15;
  StrikeValue_15.setString("19589974");
set_field(msg, StrikeValue_15, Instrument_15);
  set_field(msg, FIX::Symbol{"STRING_1111123322"}, Instrument_15);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_15);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_15);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_15);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_15);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_15;
  UnitOfMeasureQty_15.setString("7035147");
set_field(msg, UnitOfMeasureQty_15, Instrument_15);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_15);
  all_values.push_back(Instrument_15);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_34;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_34);
    FIX::ComplexEventPrice ComplexEventPrice_34;
    ComplexEventPrice_34.setString("9145030");
set_field(noComplexEvents_0_0, ComplexEventPrice_34, ComplexEvents_NoComplexEvents_34);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_34);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_34;
    ComplexEventPriceBoundaryPrecision_34.setString("8.710000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_34, ComplexEvents_NoComplexEvents_34);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_34);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_34);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_34;
    ComplexOptPayoutAmount_34.setString("8628303");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_34, ComplexEvents_NoComplexEvents_34);
    all_values.push_back(ComplexEvents_NoComplexEvents_34);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_72;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 49, 42, 10, 2, 2005)}, ComplexEventDates_NoComplexEventDates_72);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 28, 44, 20, 10, 2015)}, ComplexEventDates_NoComplexEventDates_72);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_72);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_143;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 34, 6)}, ComplexEventTimes_NoComplexEventTimes_143);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 44, 48)}, ComplexEventTimes_NoComplexEventTimes_143);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_143);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_144;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 24, 28)}, ComplexEventTimes_NoComplexEventTimes_144);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 34, 27)}, ComplexEventTimes_NoComplexEventTimes_144);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_144);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_145;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 9, 43)}, ComplexEventTimes_NoComplexEventTimes_145);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 18, 22)}, ComplexEventTimes_NoComplexEventTimes_145);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_145);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_73;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 6, 24, 23, 10, 2011)}, ComplexEventDates_NoComplexEventDates_73);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 49, 12, 1, 9, 2002)}, ComplexEventDates_NoComplexEventDates_73);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_73);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_146;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 17, 37)}, ComplexEventTimes_NoComplexEventTimes_146);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 11, 9)}, ComplexEventTimes_NoComplexEventTimes_146);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_146);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_147;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 10, 42)}, ComplexEventTimes_NoComplexEventTimes_147);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 52, 54)}, ComplexEventTimes_NoComplexEventTimes_147);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_147);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_148;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 53, 21)}, ComplexEventTimes_NoComplexEventTimes_148);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 36, 27)}, ComplexEventTimes_NoComplexEventTimes_148);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_148);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_35;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_35);
    FIX::ComplexEventPrice ComplexEventPrice_35;
    ComplexEventPrice_35.setString("19785491");
set_field(noComplexEvents_0_1, ComplexEventPrice_35, ComplexEvents_NoComplexEvents_35);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_35);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_35;
    ComplexEventPriceBoundaryPrecision_35.setString("69.140000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_35, ComplexEvents_NoComplexEvents_35);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_35);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_35);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_35;
    ComplexOptPayoutAmount_35.setString("19929659");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_35, ComplexEvents_NoComplexEvents_35);
    all_values.push_back(ComplexEvents_NoComplexEvents_35);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_74;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 36, 3, 7, 4, 2016)}, ComplexEventDates_NoComplexEventDates_74);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 15, 29, 12, 5, 2013)}, ComplexEventDates_NoComplexEventDates_74);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_74);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_149;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 11, 42)}, ComplexEventTimes_NoComplexEventTimes_149);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 10, 17)}, ComplexEventTimes_NoComplexEventTimes_149);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_149);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_150;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 48, 41)}, ComplexEventTimes_NoComplexEventTimes_150);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 28, 15)}, ComplexEventTimes_NoComplexEventTimes_150);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_150);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_151;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 43, 24)}, ComplexEventTimes_NoComplexEventTimes_151);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 28, 50)}, ComplexEventTimes_NoComplexEventTimes_151);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_151);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_75;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 11, 47, 15, 1, 2017)}, ComplexEventDates_NoComplexEventDates_75);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 17, 18, 10, 12, 2008)}, ComplexEventDates_NoComplexEventDates_75);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_75);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_152;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 39, 51)}, ComplexEventTimes_NoComplexEventTimes_152);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 11, 12)}, ComplexEventTimes_NoComplexEventTimes_152);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_152);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_153;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 48, 16)}, ComplexEventTimes_NoComplexEventTimes_153);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 37, 21)}, ComplexEventTimes_NoComplexEventTimes_153);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_153);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_154;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 32, 57)}, ComplexEventTimes_NoComplexEventTimes_154);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 54, 4)}, ComplexEventTimes_NoComplexEventTimes_154);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_154);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_36;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_36);
    FIX::ComplexEventPrice ComplexEventPrice_36;
    ComplexEventPrice_36.setString("9525447");
set_field(noComplexEvents_0_2, ComplexEventPrice_36, ComplexEvents_NoComplexEvents_36);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_36);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_36;
    ComplexEventPriceBoundaryPrecision_36.setString("19.950000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_36, ComplexEvents_NoComplexEvents_36);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_36);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_36);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_36;
    ComplexOptPayoutAmount_36.setString("7499674");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_36, ComplexEvents_NoComplexEvents_36);
    all_values.push_back(ComplexEvents_NoComplexEvents_36);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_76;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 19, 20, 17, 7, 2001)}, ComplexEventDates_NoComplexEventDates_76);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 13, 18, 5, 9, 2013)}, ComplexEventDates_NoComplexEventDates_76);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_76);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_155;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 6, 15)}, ComplexEventTimes_NoComplexEventTimes_155);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 1, 24)}, ComplexEventTimes_NoComplexEventTimes_155);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_155);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_77;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 31, 26, 15, 11, 2008)}, ComplexEventDates_NoComplexEventDates_77);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 10, 3, 22, 8, 2010)}, ComplexEventDates_NoComplexEventDates_77);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_77);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ContraryIntentionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_156;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 56, 22)}, ComplexEventTimes_NoComplexEventTimes_156);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 9, 19)}, ComplexEventTimes_NoComplexEventTimes_156);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_156);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_35;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_302927469"}, EvntGrp_NoEvents_35);
    FIX::EventPx EventPx_35;
    EventPx_35.setString("113815");
set_field(noEvents_0_0, EventPx_35, EvntGrp_NoEvents_35);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1025007869"}, EvntGrp_NoEvents_35);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(3, 23, 52, 3, 9, 2005)}, EvntGrp_NoEvents_35);
    set_field(noEvents_0_0, FIX::EventType{2}, EvntGrp_NoEvents_35);
    all_values.push_back(EvntGrp_NoEvents_35);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_36;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_133667615"}, EvntGrp_NoEvents_36);
    FIX::EventPx EventPx_36;
    EventPx_36.setString("21012289");
set_field(noEvents_0_1, EventPx_36, EvntGrp_NoEvents_36);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1076385966"}, EvntGrp_NoEvents_36);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(4, 8, 23, 10, 8, 2007)}, EvntGrp_NoEvents_36);
    set_field(noEvents_0_1, FIX::EventType{19}, EvntGrp_NoEvents_36);
    all_values.push_back(EvntGrp_NoEvents_36);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_27;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_202077733"}, InstrumentParties_NoInstrumentParties_27);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_27);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1672278054}, InstrumentParties_NoInstrumentParties_27);
    all_values.push_back(InstrumentParties_NoInstrumentParties_27);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_317816791"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{2062168083}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1031126417"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1514126573}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ContraryIntentionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_28;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_217611904"}, InstrumentParties_NoInstrumentParties_28);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_28);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{391650795}, InstrumentParties_NoInstrumentParties_28);
    all_values.push_back(InstrumentParties_NoInstrumentParties_28);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_332173049"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{456750878}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_253063285"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1385784884}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_514487938"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{1668855109}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ContraryIntentionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_29;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_648155553"}, SecAltIDGrp_NoSecurityAltID_29);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1622600403"}, SecAltIDGrp_NoSecurityAltID_29);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_29);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_30;
  set_field(msg, FIX::SecurityXML{"XMLDATA_2078444184"}, SecurityXML_30);
  set_field(msg, FIX::SecurityXMLLen{1074480413}, SecurityXML_30);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_362755103"}, SecurityXML_30);
  all_values.push_back(SecurityXML_30);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ContraryIntentionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_35;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_19286228"}, Parties_NoPartyIDs_35);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_35);
    set_field(noPartyIDs_0_0, FIX::PartyRole{45}, Parties_NoPartyIDs_35);
    all_values.push_back(Parties_NoPartyIDs_35);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ContraryIntentionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_76;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_291800747"}, PtysSubGrp_NoPartySubIDs_76);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_76);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_76);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ContraryIntentionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_28;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1731036022"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1841473140}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_938829548"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{2048852813}, UnderlyingInstrument_28);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_28;
    UnderlyingAdjustedQuantity_28.setString("17561575");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_28, UnderlyingInstrument_28);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_28;
    UnderlyingAllocationPercent_28.setString("59.650000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_28, UnderlyingInstrument_28);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_28;
    UnderlyingAttachmentPoint_28.setString("57.380000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1973769480"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_864980331"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1807146533"}, UnderlyingInstrument_28);
    FIX::UnderlyingCapValue UnderlyingCapValue_28;
    UnderlyingCapValue_28.setString("16349898");
set_field(noUnderlyings_0_0, UnderlyingCapValue_28, UnderlyingInstrument_28);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_28;
    UnderlyingCashAmount_28.setString("11971533");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_28);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_28;
    UnderlyingContractMultiplier_28.setString("18880531");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{435454617}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_630901701"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1409424640"}, UnderlyingInstrument_28);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_28;
    UnderlyingCouponRate_28.setString("28.350000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1279057255"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_28);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_28;
    UnderlyingCurrentValue_28.setString("2060540");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_28, UnderlyingInstrument_28);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_28;
    UnderlyingDetachmentPoint_28.setString("64.980000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_28, UnderlyingInstrument_28);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_28;
    UnderlyingDirtyPrice_28.setString("19192786");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_28, UnderlyingInstrument_28);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_28;
    UnderlyingEndPrice_28.setString("2253402");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_28, UnderlyingInstrument_28);
    FIX::UnderlyingEndValue UnderlyingEndValue_28;
    UnderlyingEndValue_28.setString("8583134");
set_field(noUnderlyings_0_0, UnderlyingEndValue_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{864837450}, UnderlyingInstrument_28);
    FIX::UnderlyingFXRate UnderlyingFXRate_28;
    UnderlyingFXRate_28.setString("2539148");
set_field(noUnderlyings_0_0, UnderlyingFXRate_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_28);
    FIX::UnderlyingFactor UnderlyingFactor_28;
    UnderlyingFactor_28.setString("10340325");
set_field(noUnderlyings_0_0, UnderlyingFactor_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{484567135}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_733666569"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_728022029"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1423396683"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_635035734"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_336695957"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1245869000"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2050531472"}, UnderlyingInstrument_28);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_28;
    UnderlyingNotionalPercentageOutstanding_28.setString("17.890000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_28);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_28;
    UnderlyingOriginalNotionalPercentageOutstanding_28.setString("43.580000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1797971683"}, UnderlyingInstrument_28);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_28;
    UnderlyingPriceUnitOfMeasureQty_28.setString("11605190");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1826608121}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1538541214}, UnderlyingInstrument_28);
    FIX::UnderlyingPx UnderlyingPx_28;
    UnderlyingPx_28.setString("15959736");
set_field(noUnderlyings_0_0, UnderlyingPx_28, UnderlyingInstrument_28);
    FIX::UnderlyingQty UnderlyingQty_28;
    UnderlyingQty_28.setString("3100261");
set_field(noUnderlyings_0_0, UnderlyingQty_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_800482206"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_886002867"}, UnderlyingInstrument_28);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_28;
    UnderlyingRepurchaseRate_28.setString("34.300000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1685023601}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_106992590"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1795137450"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_784836451"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_2026271205"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_2020477698"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1643149898"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_743625007"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_126908875"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_645780445"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_28);
    FIX::UnderlyingStartValue UnderlyingStartValue_28;
    UnderlyingStartValue_28.setString("6114760");
set_field(noUnderlyings_0_0, UnderlyingStartValue_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1379447014"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_28);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_28;
    UnderlyingStrikePrice_28.setString("20144827");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_28, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_694891882"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1133258045"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1917530573"}, UnderlyingInstrument_28);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_857873671"}, UnderlyingInstrument_28);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_28;
    UnderlyingUnitOfMeasureQty_28.setString("10966237");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_28, UnderlyingInstrument_28);
    all_values.push_back(UnderlyingInstrument_28);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_63;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_508361706"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_63);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_109659143"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_63);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_63);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_57;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_2046902920"}, UnderlyingStipulations_NoUnderlyingStips_57);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1705632824"}, UnderlyingStipulations_NoUnderlyingStips_57);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_57);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_57;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_699901478"}, UndlyInstrumentParties_NoUndlyInstrumentParties_57);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_57);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{910991713}, UndlyInstrumentParties_NoUndlyInstrumentParties_57);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_57);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_551144634"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{558645515}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1022277882"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{429932191}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_431639565"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{517944133}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_58;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1173557199"}, UndlyInstrumentParties_NoUndlyInstrumentParties_58);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_58);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1163724578}, UndlyInstrumentParties_NoUndlyInstrumentParties_58);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_58);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1170024450"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{395687945}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112);
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
    multiset<string> UnderlyingInstrument_29;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1161927020"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1057413495}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_262687045"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1856818902}, UnderlyingInstrument_29);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_29;
    UnderlyingAdjustedQuantity_29.setString("431878");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_29, UnderlyingInstrument_29);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_29;
    UnderlyingAllocationPercent_29.setString("39.700000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_29, UnderlyingInstrument_29);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_29;
    UnderlyingAttachmentPoint_29.setString("89.250000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1139811620"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1512975253"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1075570632"}, UnderlyingInstrument_29);
    FIX::UnderlyingCapValue UnderlyingCapValue_29;
    UnderlyingCapValue_29.setString("12494707");
set_field(noUnderlyings_0_1, UnderlyingCapValue_29, UnderlyingInstrument_29);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_29;
    UnderlyingCashAmount_29.setString("5248573");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_29);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_29;
    UnderlyingContractMultiplier_29.setString("8076199");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1994249293}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1674891383"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1251771983"}, UnderlyingInstrument_29);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_29;
    UnderlyingCouponRate_29.setString("73.590000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1912332814"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_29);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_29;
    UnderlyingCurrentValue_29.setString("7871270");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_29, UnderlyingInstrument_29);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_29;
    UnderlyingDetachmentPoint_29.setString("51.610000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_29, UnderlyingInstrument_29);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_29;
    UnderlyingDirtyPrice_29.setString("17480424");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_29, UnderlyingInstrument_29);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_29;
    UnderlyingEndPrice_29.setString("13050711");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_29, UnderlyingInstrument_29);
    FIX::UnderlyingEndValue UnderlyingEndValue_29;
    UnderlyingEndValue_29.setString("12589223");
set_field(noUnderlyings_0_1, UnderlyingEndValue_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{159107232}, UnderlyingInstrument_29);
    FIX::UnderlyingFXRate UnderlyingFXRate_29;
    UnderlyingFXRate_29.setString("3213121");
set_field(noUnderlyings_0_1, UnderlyingFXRate_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_29);
    FIX::UnderlyingFactor UnderlyingFactor_29;
    UnderlyingFactor_29.setString("13291316");
set_field(noUnderlyings_0_1, UnderlyingFactor_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{717000057}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1077096827"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_239061530"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_979687103"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_786432081"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_282249423"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1012421073"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1353641006"}, UnderlyingInstrument_29);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_29;
    UnderlyingNotionalPercentageOutstanding_29.setString("10.430000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_29);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_29;
    UnderlyingOriginalNotionalPercentageOutstanding_29.setString("79.900000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_524048159"}, UnderlyingInstrument_29);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_29;
    UnderlyingPriceUnitOfMeasureQty_29.setString("9027700");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1256717895}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1331668099}, UnderlyingInstrument_29);
    FIX::UnderlyingPx UnderlyingPx_29;
    UnderlyingPx_29.setString("7495356");
set_field(noUnderlyings_0_1, UnderlyingPx_29, UnderlyingInstrument_29);
    FIX::UnderlyingQty UnderlyingQty_29;
    UnderlyingQty_29.setString("7841256");
set_field(noUnderlyings_0_1, UnderlyingQty_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_435956435"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1507293045"}, UnderlyingInstrument_29);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_29;
    UnderlyingRepurchaseRate_29.setString("47.960000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{91389404}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_676212272"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1336101845"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_176754565"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_276771064"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_493689379"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1435676925"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_435878296"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_815001492"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1350846732"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_29);
    FIX::UnderlyingStartValue UnderlyingStartValue_29;
    UnderlyingStartValue_29.setString("15320015");
set_field(noUnderlyings_0_1, UnderlyingStartValue_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_280459911"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_29);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_29;
    UnderlyingStrikePrice_29.setString("10668919");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_29, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_138837285"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1376626078"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_273049351"}, UnderlyingInstrument_29);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1560898328"}, UnderlyingInstrument_29);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_29;
    UnderlyingUnitOfMeasureQty_29.setString("17545387");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_29, UnderlyingInstrument_29);
    all_values.push_back(UnderlyingInstrument_29);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_64;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_2084946488"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_64);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_509825150"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_64);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_64);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_65;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1811495236"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_65);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1269130939"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_65);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_65);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_58;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_448137218"}, UnderlyingStipulations_NoUnderlyingStips_58);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1705087374"}, UnderlyingStipulations_NoUnderlyingStips_58);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_58);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_59;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_619170234"}, UnderlyingStipulations_NoUnderlyingStips_59);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_997112015"}, UnderlyingStipulations_NoUnderlyingStips_59);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_59);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_59;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1295382506"}, UndlyInstrumentParties_NoUndlyInstrumentParties_59);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_59);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1973231344}, UndlyInstrumentParties_NoUndlyInstrumentParties_59);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_59);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ContraryIntentionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_679419592"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1261424622}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
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
