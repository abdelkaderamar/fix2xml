#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/News.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( News, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::News msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> News_0;
  set_field(msg, FIX::EncodedHeadline{"DATA_11476771"}, News_0);
  set_field(msg, FIX::EncodedHeadlineLen{475571020}, News_0);
  set_field(msg, FIX::Headline{"STRING_588033924"}, News_0);
  set_field(msg, FIX::LanguageCode{"FR"}, News_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1129007769"}, News_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_38694312"}, News_0);
  set_field(msg, FIX::NewsCategory{0}, News_0);
  set_field(msg, FIX::NewsID{"STRING_1751834768"}, News_0);
  set_field(msg, FIX::OrigTime{FIX::UTCTIMESTAMP(12, 45, 39, 16, 9, 2016)}, News_0);
  set_field(msg, FIX::RawData{"DATA_494222397"}, News_0);
  set_field(msg, FIX::RawDataLength{534790981}, News_0);
  set_field(msg, FIX::URLLink{"STRING_841752369"}, News_0);
  set_field(msg, FIX::Urgency{'0'}, News_0);
  all_values.push_back(News_0);

  all_compo_names.insert("News");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_10;
  set_field(msg, FIX::ApplID{"STRING_1632473567"}, ApplicationSequenceControl_10);
  set_field(msg, FIX::ApplLastSeqNum{1074981835}, ApplicationSequenceControl_10);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_10);
  set_field(msg, FIX::ApplSeqNum{2089300171}, ApplicationSequenceControl_10);
  all_values.push_back(ApplicationSequenceControl_10);
  all_compo_names.insert(".");

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_41;
    FIX::AttachmentPoint AttachmentPoint_41;
    AttachmentPoint_41.setString("35.530000");
set_field(noRelatedSym_0_0, AttachmentPoint_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_1487828471"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::CPProgram{2}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_653712560"}, Instrument_41);
    FIX::CapPrice CapPrice_41;
    CapPrice_41.setString("5290635");
set_field(noRelatedSym_0_0, CapPrice_41, Instrument_41);
    FIX::ContractMultiplier ContractMultiplier_41;
    ContractMultiplier_41.setString("4737040");
set_field(noRelatedSym_0_0, ContractMultiplier_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{0}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_540540369"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_949275067"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_36554011"}, Instrument_41);
    FIX::CouponRate CouponRate_41;
    CouponRate_41.setString("78.250000");
set_field(noRelatedSym_0_0, CouponRate_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_2078282837"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_75248324"}, Instrument_41);
    FIX::DetachmentPoint DetachmentPoint_41;
    DetachmentPoint_41.setString("24.020000");
set_field(noRelatedSym_0_0, DetachmentPoint_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_1682633957"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{994981216}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1541153254"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1164953034}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{1}, Instrument_41);
    FIX::Factor Factor_41;
    Factor_41.setString("19284335");
set_field(noRelatedSym_0_0, Factor_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_41);
    FIX::FloorPrice FloorPrice_41;
    FloorPrice_41.setString("2751722");
set_field(noRelatedSym_0_0, FloorPrice_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{2}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_2031926904"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_914765771"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_959425092"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_49560335"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::ListMethod{0}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_714834046"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1601033888"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_196927117"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_488180761"}, Instrument_41);
    FIX::MinPriceIncrement MinPriceIncrement_41;
    MinPriceIncrement_41.setString("1072628");
set_field(noRelatedSym_0_0, MinPriceIncrement_41, Instrument_41);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_41;
    MinPriceIncrementAmount_41.setString("7259907");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{961884808}, Instrument_41);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_41;
    NotionalPercentageOutstanding_41.setString("65.350000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_41);
    FIX::OptPayoutAmount OptPayoutAmount_41;
    OptPayoutAmount_41.setString("19111598");
set_field(noRelatedSym_0_0, OptPayoutAmount_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_41);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_41;
    OriginalNotionalPercentageOutstanding_41.setString("89.100000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1841959065"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{1815068871}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1377109374"}, Instrument_41);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_41;
    PriceUnitOfMeasureQty_41.setString("6625664");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::Product{11}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_394578760"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{0}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1912610776"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_1289563630"}, Instrument_41);
    FIX::RepurchaseRate RepurchaseRate_41;
    RepurchaseRate_41.setString("89.210000");
set_field(noRelatedSym_0_0, RepurchaseRate_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{40299383}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_810482178"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1410627438"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1486621605"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1769907270"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_C"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_337257668"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_RETIRED"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SR"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_1021000813"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1118638085"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"JPY"}, Instrument_41);
    FIX::StrikeMultiplier StrikeMultiplier_41;
    StrikeMultiplier_41.setString("2376855");
set_field(noRelatedSym_0_0, StrikeMultiplier_41, Instrument_41);
    FIX::StrikePrice StrikePrice_41;
    StrikePrice_41.setString("15509994");
set_field(noRelatedSym_0_0, StrikePrice_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_41);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_41;
    StrikePriceBoundaryPrecision_41.setString("7.840000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_41);
    FIX::StrikeValue StrikeValue_41;
    StrikeValue_41.setString("19841894");
set_field(noRelatedSym_0_0, StrikeValue_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_779588448"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Mo"}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_41);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_41;
    UnitOfMeasureQty_41.setString("2351366");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_41, Instrument_41);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_41);
    all_values.push_back(Instrument_41);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_84;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_84);
      FIX::ComplexEventPrice ComplexEventPrice_84;
      ComplexEventPrice_84.setString("5691922");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_84, ComplexEvents_NoComplexEvents_84);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_84);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_84;
      ComplexEventPriceBoundaryPrecision_84.setString("77.470000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_84, ComplexEvents_NoComplexEvents_84);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_84);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_84);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_84;
      ComplexOptPayoutAmount_84.setString("15940813");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_84, ComplexEvents_NoComplexEvents_84);
      all_values.push_back(ComplexEvents_NoComplexEvents_84);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_178;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 57, 25, 15, 11, 2006)}, ComplexEventDates_NoComplexEventDates_178);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 52, 35, 26, 5, 2016)}, ComplexEventDates_NoComplexEventDates_178);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_178);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_359;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 6, 34)}, ComplexEventTimes_NoComplexEventTimes_359);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 20, 51)}, ComplexEventTimes_NoComplexEventTimes_359);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_359);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_360;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 37, 42)}, ComplexEventTimes_NoComplexEventTimes_360);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 23, 53)}, ComplexEventTimes_NoComplexEventTimes_360);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_360);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_361;
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 51, 1)}, ComplexEventTimes_NoComplexEventTimes_361);
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 23, 40)}, ComplexEventTimes_NoComplexEventTimes_361);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_361);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_85;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_85);
      FIX::ComplexEventPrice ComplexEventPrice_85;
      ComplexEventPrice_85.setString("4453782");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_85, ComplexEvents_NoComplexEvents_85);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_85);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_85;
      ComplexEventPriceBoundaryPrecision_85.setString("26.870000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_85, ComplexEvents_NoComplexEvents_85);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_85);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_85);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_85;
      ComplexOptPayoutAmount_85.setString("13685981");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_85, ComplexEvents_NoComplexEvents_85);
      all_values.push_back(ComplexEvents_NoComplexEvents_85);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_179;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 37, 28, 12, 2, 2008)}, ComplexEventDates_NoComplexEventDates_179);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 57, 9, 4, 3, 2012)}, ComplexEventDates_NoComplexEventDates_179);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_179);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_362;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 28, 20)}, ComplexEventTimes_NoComplexEventTimes_362);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 44, 21)}, ComplexEventTimes_NoComplexEventTimes_362);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_362);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_363;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 20, 57)}, ComplexEventTimes_NoComplexEventTimes_363);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 41, 10)}, ComplexEventTimes_NoComplexEventTimes_363);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_363);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_180;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 48, 39, 24, 2, 2011)}, ComplexEventDates_NoComplexEventDates_180);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 48, 5, 4, 4, 2000)}, ComplexEventDates_NoComplexEventDates_180);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_180);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_364;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 30, 18)}, ComplexEventTimes_NoComplexEventTimes_364);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 2, 0)}, ComplexEventTimes_NoComplexEventTimes_364);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_364);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_365;
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 21, 24)}, ComplexEventTimes_NoComplexEventTimes_365);
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 6, 55)}, ComplexEventTimes_NoComplexEventTimes_365);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_365);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_181;
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 35, 40, 14, 2, 2007)}, ComplexEventDates_NoComplexEventDates_181);
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 20, 16, 2, 4, 2014)}, ComplexEventDates_NoComplexEventDates_181);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_181);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_366;
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 58, 59)}, ComplexEventTimes_NoComplexEventTimes_366);
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 54, 9)}, ComplexEventTimes_NoComplexEventTimes_366);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_366);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_367;
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 22, 34)}, ComplexEventTimes_NoComplexEventTimes_367);
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 32, 4)}, ComplexEventTimes_NoComplexEventTimes_367);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_367);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_86;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_86);
      FIX::ComplexEventPrice ComplexEventPrice_86;
      ComplexEventPrice_86.setString("3877989");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_86, ComplexEvents_NoComplexEvents_86);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_86);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_86;
      ComplexEventPriceBoundaryPrecision_86.setString("30.390000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_86, ComplexEvents_NoComplexEvents_86);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_86);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_86);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_86;
      ComplexOptPayoutAmount_86.setString("707728");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_86, ComplexEvents_NoComplexEvents_86);
      all_values.push_back(ComplexEvents_NoComplexEvents_86);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_182;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 27, 56, 13, 10, 2004)}, ComplexEventDates_NoComplexEventDates_182);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 15, 46, 19, 3, 2004)}, ComplexEventDates_NoComplexEventDates_182);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_182);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_368;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 50, 34)}, ComplexEventTimes_NoComplexEventTimes_368);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 7, 25)}, ComplexEventTimes_NoComplexEventTimes_368);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_368);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_183;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 5, 16, 26, 3, 2007)}, ComplexEventDates_NoComplexEventDates_183);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 33, 49, 9, 4, 2005)}, ComplexEventDates_NoComplexEventDates_183);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_183);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_369;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 33, 11)}, ComplexEventTimes_NoComplexEventTimes_369);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 43, 24)}, ComplexEventTimes_NoComplexEventTimes_369);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_369);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_86;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_73520687"}, EvntGrp_NoEvents_86);
      FIX::EventPx EventPx_86;
      EventPx_86.setString("2238852");
set_field(noEvents_0_1_0, EventPx_86, EvntGrp_NoEvents_86);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_2078750269"}, EvntGrp_NoEvents_86);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(17, 48, 42, 27, 3, 2015)}, EvntGrp_NoEvents_86);
      set_field(noEvents_0_1_0, FIX::EventType{8}, EvntGrp_NoEvents_86);
      all_values.push_back(EvntGrp_NoEvents_86);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_77;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_626689462"}, InstrumentParties_NoInstrumentParties_77);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_77);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{766185082}, InstrumentParties_NoInstrumentParties_77);
      all_values.push_back(InstrumentParties_NoInstrumentParties_77);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1339992940"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1742449272}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_2096185664"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{37223471}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154;
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubID{"STRING_1044620091"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154);
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubIDType{133524114}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_86;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_450621116"}, SecAltIDGrp_NoSecurityAltID_86);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1779369207"}, SecAltIDGrp_NoSecurityAltID_86);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_86);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_82;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_722662900"}, SecurityXML_82);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{149826457}, SecurityXML_82);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_2002652022"}, SecurityXML_82);
    all_values.push_back(SecurityXML_82);
    all_compo_names.insert("...NoRelatedSym..");

    msg.addGroup(noRelatedSym_0_0);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::News::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_62;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_122188133"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{747560749}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1869695471"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{346073400}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_678827371"}, InstrumentLeg_62);
    FIX::LegContractMultiplier LegContractMultiplier_62;
    LegContractMultiplier_62.setString("17112056");
set_field(noLegs_0_0, LegContractMultiplier_62, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{732936113}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_2000645179"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1659367913"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_14563224"}, InstrumentLeg_62);
    FIX::LegCouponRate LegCouponRate_62;
    LegCouponRate_62.setString("57.810000");
set_field(noLegs_0_0, LegCouponRate_62, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_531984745"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1158674207"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1122322638}, InstrumentLeg_62);
    FIX::LegFactor LegFactor_62;
    LegFactor_62.setString("5607696");
set_field(noLegs_0_0, LegFactor_62, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1465923622}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_314831930"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_155735240"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1414625638"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_352055401"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1200355331"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1548149753"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1390903658"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1650976448"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_62);
    FIX::LegOptionRatio LegOptionRatio_62;
    LegOptionRatio_62.setString("21135665");
set_field(noLegs_0_0, LegOptionRatio_62, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1800802905"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1035203687"}, InstrumentLeg_62);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_62;
    LegPriceUnitOfMeasureQty_62.setString("17622576");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_62, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegProduct{1922991038}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1782764436}, InstrumentLeg_62);
    FIX::LegRatioQty LegRatioQty_62;
    LegRatioQty_62.setString("14844695");
set_field(noLegs_0_0, LegRatioQty_62, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_121580790"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_314108159"}, InstrumentLeg_62);
    FIX::LegRepurchaseRate LegRepurchaseRate_62;
    LegRepurchaseRate_62.setString("15.280000");
set_field(noLegs_0_0, LegRepurchaseRate_62, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{854516904}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_167269691"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_560075793"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_869080128"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_973115472"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1092060538"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_989847900"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegSide{'7'}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_103251097"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_62);
    FIX::LegStrikePrice LegStrikePrice_62;
    LegStrikePrice_62.setString("15691747");
set_field(noLegs_0_0, LegStrikePrice_62, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_279518821"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1484204863"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_836316710"}, InstrumentLeg_62);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_631574223"}, InstrumentLeg_62);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_62;
    LegUnitOfMeasureQty_62.setString("5370765");
set_field(noLegs_0_0, LegUnitOfMeasureQty_62, InstrumentLeg_62);
    all_values.push_back(InstrumentLeg_62);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_125;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_2022477881"}, LegSecAltIDGrp_NoLegSecurityAltID_125);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_40569347"}, LegSecAltIDGrp_NoLegSecurityAltID_125);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_125);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_126;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1417018127"}, LegSecAltIDGrp_NoLegSecurityAltID_126);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1988560791"}, LegSecAltIDGrp_NoLegSecurityAltID_126);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_126);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_127;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1841372252"}, LegSecAltIDGrp_NoLegSecurityAltID_127);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_304738166"}, LegSecAltIDGrp_NoLegSecurityAltID_127);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_127);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::News::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_63;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1603334836"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1616879642}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_2087502603"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{940320705}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1738460433"}, InstrumentLeg_63);
    FIX::LegContractMultiplier LegContractMultiplier_63;
    LegContractMultiplier_63.setString("2541271");
set_field(noLegs_0_1, LegContractMultiplier_63, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1988512233}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_445493689"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_421396805"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_401104378"}, InstrumentLeg_63);
    FIX::LegCouponRate LegCouponRate_63;
    LegCouponRate_63.setString("38.170000");
set_field(noLegs_0_1, LegCouponRate_63, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1394512278"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegCurrency{"USD"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_14728636"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1596416014}, InstrumentLeg_63);
    FIX::LegFactor LegFactor_63;
    LegFactor_63.setString("1216249");
set_field(noLegs_0_1, LegFactor_63, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1343198259}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1018107086"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_401143782"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_679919475"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1854423796"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1032718005"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1216996022"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_2091406611"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_907712238"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_63);
    FIX::LegOptionRatio LegOptionRatio_63;
    LegOptionRatio_63.setString("13609410");
set_field(noLegs_0_1, LegOptionRatio_63, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_748789381"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_951453973"}, InstrumentLeg_63);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_63;
    LegPriceUnitOfMeasureQty_63.setString("16656792");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_63, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegProduct{204640570}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegPutOrCall{420849967}, InstrumentLeg_63);
    FIX::LegRatioQty LegRatioQty_63;
    LegRatioQty_63.setString("16056982");
set_field(noLegs_0_1, LegRatioQty_63, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1144961275"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_11826752"}, InstrumentLeg_63);
    FIX::LegRepurchaseRate LegRepurchaseRate_63;
    LegRepurchaseRate_63.setString("53.260000");
set_field(noLegs_0_1, LegRepurchaseRate_63, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{985989860}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_457320441"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_133738484"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1387094238"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1771894259"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1528250762"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_732775507"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1542979398"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_63);
    FIX::LegStrikePrice LegStrikePrice_63;
    LegStrikePrice_63.setString("7386940");
set_field(noLegs_0_1, LegStrikePrice_63, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1199814960"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_304117424"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1418613485"}, InstrumentLeg_63);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_906755108"}, InstrumentLeg_63);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_63;
    LegUnitOfMeasureQty_63.setString("13368354");
set_field(noLegs_0_1, LegUnitOfMeasureQty_63, InstrumentLeg_63);
    all_values.push_back(InstrumentLeg_63);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_128;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_850678071"}, LegSecAltIDGrp_NoLegSecurityAltID_128);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_97064020"}, LegSecAltIDGrp_NoLegSecurityAltID_128);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_128);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_129;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1745691228"}, LegSecAltIDGrp_NoLegSecurityAltID_129);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_64135513"}, LegSecAltIDGrp_NoLegSecurityAltID_129);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_129);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_130;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_845853402"}, LegSecAltIDGrp_NoLegSecurityAltID_130);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_549661553"}, LegSecAltIDGrp_NoLegSecurityAltID_130);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_130);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::News::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_64;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_1729814770"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{1050493972}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_970511520"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1188029334}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_47971599"}, InstrumentLeg_64);
    FIX::LegContractMultiplier LegContractMultiplier_64;
    LegContractMultiplier_64.setString("9823382");
set_field(noLegs_0_2, LegContractMultiplier_64, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{900371013}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1033961459"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_1439658714"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1034109497"}, InstrumentLeg_64);
    FIX::LegCouponRate LegCouponRate_64;
    LegCouponRate_64.setString("20.490000");
set_field(noLegs_0_2, LegCouponRate_64, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1064069325"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegCurrency{"CAN"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_845418006"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1957856009}, InstrumentLeg_64);
    FIX::LegFactor LegFactor_64;
    LegFactor_64.setString("11880554");
set_field(noLegs_0_2, LegFactor_64, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{748391648}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_549066371"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_240386743"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_1052509073"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_1967679856"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1147141851"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_241860855"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_308322067"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1997819922"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'3'}, InstrumentLeg_64);
    FIX::LegOptionRatio LegOptionRatio_64;
    LegOptionRatio_64.setString("20540132");
set_field(noLegs_0_2, LegOptionRatio_64, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_2061955435"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1184778277"}, InstrumentLeg_64);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_64;
    LegPriceUnitOfMeasureQty_64.setString("4561912");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_64, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegProduct{1644286558}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegPutOrCall{87788601}, InstrumentLeg_64);
    FIX::LegRatioQty LegRatioQty_64;
    LegRatioQty_64.setString("14267027");
set_field(noLegs_0_2, LegRatioQty_64, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_684832244"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_135760200"}, InstrumentLeg_64);
    FIX::LegRepurchaseRate LegRepurchaseRate_64;
    LegRepurchaseRate_64.setString("73.460000");
set_field(noLegs_0_2, LegRepurchaseRate_64, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{1585203257}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_1169721659"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_1701216060"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_471829106"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_1443293709"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_617801738"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_886705717"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegSide{'3'}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1463219744"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_64);
    FIX::LegStrikePrice LegStrikePrice_64;
    LegStrikePrice_64.setString("641277");
set_field(noLegs_0_2, LegStrikePrice_64, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_1246144450"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1730599792"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_1116636818"}, InstrumentLeg_64);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1066340659"}, InstrumentLeg_64);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_64;
    LegUnitOfMeasureQty_64.setString("7302579");
set_field(noLegs_0_2, LegUnitOfMeasureQty_64, InstrumentLeg_64);
    all_values.push_back(InstrumentLeg_64);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_131;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1374662726"}, LegSecAltIDGrp_NoLegSecurityAltID_131);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_580594269"}, LegSecAltIDGrp_NoLegSecurityAltID_131);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_131);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_132;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_1697422548"}, LegSecAltIDGrp_NoLegSecurityAltID_132);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_1281192374"}, LegSecAltIDGrp_NoLegSecurityAltID_132);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_132);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_133;
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltID{"STRING_495066056"}, LegSecAltIDGrp_NoLegSecurityAltID_133);
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltIDSource{"STRING_734717178"}, LegSecAltIDGrp_NoLegSecurityAltID_133);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_133);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_3;
    set_field(noLinesOfText_0_0, FIX::EncodedText{"DATA_2139352614"}, LinesOfTextGrp_NoLinesOfText_3);
    set_field(noLinesOfText_0_0, FIX::EncodedTextLen{822505779}, LinesOfTextGrp_NoLinesOfText_3);
    set_field(noLinesOfText_0_0, FIX::Text{"STRING_1016602647"}, LinesOfTextGrp_NoLinesOfText_3);
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_3);
    all_compo_names.insert("...NoLinesOfText");

    msg.addGroup(noLinesOfText_0_0);
  }
  // NewsRefGrp
  // Group NewsRefGrp.NoNewsRefIDs
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_0;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_0;
    set_field(noNewsRefIDs_0_0, FIX::NewsRefID{"STRING_958265980"}, NewsRefGrp_NoNewsRefIDs_0);
    set_field(noNewsRefIDs_0_0, FIX::NewsRefType{0}, NewsRefGrp_NoNewsRefIDs_0);
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_0);
    all_compo_names.insert("...NoNewsRefIDs");

    msg.addGroup(noNewsRefIDs_0_0);
  }
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_1;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_1;
    set_field(noNewsRefIDs_0_1, FIX::NewsRefID{"STRING_114420820"}, NewsRefGrp_NoNewsRefIDs_1);
    set_field(noNewsRefIDs_0_1, FIX::NewsRefType{0}, NewsRefGrp_NoNewsRefIDs_1);
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_1);
    all_compo_names.insert("...NoNewsRefIDs");

    msg.addGroup(noNewsRefIDs_0_1);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_5;
    set_field(noRoutingIDs_0_0, FIX::RoutingID{"STRING_586249927"}, RoutingGrp_NoRoutingIDs_5);
    set_field(noRoutingIDs_0_0, FIX::RoutingType{1}, RoutingGrp_NoRoutingIDs_5);
    all_values.push_back(RoutingGrp_NoRoutingIDs_5);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_6;
    set_field(noRoutingIDs_0_1, FIX::RoutingID{"STRING_1449694144"}, RoutingGrp_NoRoutingIDs_6);
    set_field(noRoutingIDs_0_1, FIX::RoutingType{1}, RoutingGrp_NoRoutingIDs_6);
    all_values.push_back(RoutingGrp_NoRoutingIDs_6);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_1);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_2;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_7;
    set_field(noRoutingIDs_0_2, FIX::RoutingID{"STRING_1725955318"}, RoutingGrp_NoRoutingIDs_7);
    set_field(noRoutingIDs_0_2, FIX::RoutingType{1}, RoutingGrp_NoRoutingIDs_7);
    all_values.push_back(RoutingGrp_NoRoutingIDs_7);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_73;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1068684719"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{829557985}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1268694526"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{651800863}, UnderlyingInstrument_73);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_73;
    UnderlyingAdjustedQuantity_73.setString("19461948");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_73, UnderlyingInstrument_73);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_73;
    UnderlyingAllocationPercent_73.setString("15.370000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_73, UnderlyingInstrument_73);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_73;
    UnderlyingAttachmentPoint_73.setString("88.580000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1157208828"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1562214263"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1962653127"}, UnderlyingInstrument_73);
    FIX::UnderlyingCapValue UnderlyingCapValue_73;
    UnderlyingCapValue_73.setString("7071477");
set_field(noUnderlyings_0_0, UnderlyingCapValue_73, UnderlyingInstrument_73);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_73;
    UnderlyingCashAmount_73.setString("6959229");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_73);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_73;
    UnderlyingContractMultiplier_73.setString("14418649");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{285822916}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_302104502"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_116887038"}, UnderlyingInstrument_73);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_73;
    UnderlyingCouponRate_73.setString("55.630000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_978805713"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_73);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_73;
    UnderlyingCurrentValue_73.setString("10932265");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_73, UnderlyingInstrument_73);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_73;
    UnderlyingDetachmentPoint_73.setString("70.100000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_73, UnderlyingInstrument_73);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_73;
    UnderlyingDirtyPrice_73.setString("12649943");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_73, UnderlyingInstrument_73);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_73;
    UnderlyingEndPrice_73.setString("16794764");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_73, UnderlyingInstrument_73);
    FIX::UnderlyingEndValue UnderlyingEndValue_73;
    UnderlyingEndValue_73.setString("3319710");
set_field(noUnderlyings_0_0, UnderlyingEndValue_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{567204811}, UnderlyingInstrument_73);
    FIX::UnderlyingFXRate UnderlyingFXRate_73;
    UnderlyingFXRate_73.setString("10049484");
set_field(noUnderlyings_0_0, UnderlyingFXRate_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_73);
    FIX::UnderlyingFactor UnderlyingFactor_73;
    UnderlyingFactor_73.setString("13326350");
set_field(noUnderlyings_0_0, UnderlyingFactor_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1027498533}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_979127452"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_14709389"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_148709411"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1630928316"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1960904192"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_336260948"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_865503526"}, UnderlyingInstrument_73);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_73;
    UnderlyingNotionalPercentageOutstanding_73.setString("93.730000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_73);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_73;
    UnderlyingOriginalNotionalPercentageOutstanding_73.setString("30.060000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1677777102"}, UnderlyingInstrument_73);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_73;
    UnderlyingPriceUnitOfMeasureQty_73.setString("4469145");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{990908542}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{972158361}, UnderlyingInstrument_73);
    FIX::UnderlyingPx UnderlyingPx_73;
    UnderlyingPx_73.setString("7327374");
set_field(noUnderlyings_0_0, UnderlyingPx_73, UnderlyingInstrument_73);
    FIX::UnderlyingQty UnderlyingQty_73;
    UnderlyingQty_73.setString("12930130");
set_field(noUnderlyings_0_0, UnderlyingQty_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1089045399"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2035163032"}, UnderlyingInstrument_73);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_73;
    UnderlyingRepurchaseRate_73.setString("51.100000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{16714770}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_320781293"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1217561644"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1072371780"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1585775608"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_749554457"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1404342842"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_5496771"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1754502914"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1314785575"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_73);
    FIX::UnderlyingStartValue UnderlyingStartValue_73;
    UnderlyingStartValue_73.setString("6345177");
set_field(noUnderlyings_0_0, UnderlyingStartValue_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_146429380"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_73);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_73;
    UnderlyingStrikePrice_73.setString("17773576");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1166261756"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1119488158"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_495377574"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_2136891129"}, UnderlyingInstrument_73);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_73;
    UnderlyingUnitOfMeasureQty_73.setString("8704797");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_73, UnderlyingInstrument_73);
    all_values.push_back(UnderlyingInstrument_73);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_155;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1667184583"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_155);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1317394275"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_155);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_155);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_143;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_491859296"}, UnderlyingStipulations_NoUnderlyingStips_143);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_2050131744"}, UnderlyingStipulations_NoUnderlyingStips_143);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_143);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_144;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1312488519"}, UnderlyingStipulations_NoUnderlyingStips_144);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1580904696"}, UnderlyingStipulations_NoUnderlyingStips_144);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_144);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_145;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1937811128"}, UnderlyingStipulations_NoUnderlyingStips_145);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1436823629"}, UnderlyingStipulations_NoUnderlyingStips_145);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_145);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_151;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_111108774"}, UndlyInstrumentParties_NoUndlyInstrumentParties_151);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_151);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{522507598}, UndlyInstrumentParties_NoUndlyInstrumentParties_151);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_151);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1256456082"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1926850440}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1702381154"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{863475348}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_74;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1094152368"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{893029329}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1497993148"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1240581748}, UnderlyingInstrument_74);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_74;
    UnderlyingAdjustedQuantity_74.setString("983868");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_74, UnderlyingInstrument_74);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_74;
    UnderlyingAllocationPercent_74.setString("67.100000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_74, UnderlyingInstrument_74);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_74;
    UnderlyingAttachmentPoint_74.setString("57.960000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1264648649"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1253224869"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1365833370"}, UnderlyingInstrument_74);
    FIX::UnderlyingCapValue UnderlyingCapValue_74;
    UnderlyingCapValue_74.setString("12540561");
set_field(noUnderlyings_0_1, UnderlyingCapValue_74, UnderlyingInstrument_74);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_74;
    UnderlyingCashAmount_74.setString("21237045");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_74);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_74;
    UnderlyingContractMultiplier_74.setString("7737570");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1293615218}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_413875777"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1265616363"}, UnderlyingInstrument_74);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_74;
    UnderlyingCouponRate_74.setString("33.140000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1726364296"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_74);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_74;
    UnderlyingCurrentValue_74.setString("10157042");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_74, UnderlyingInstrument_74);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_74;
    UnderlyingDetachmentPoint_74.setString("32.290000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_74, UnderlyingInstrument_74);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_74;
    UnderlyingDirtyPrice_74.setString("10976995");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_74, UnderlyingInstrument_74);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_74;
    UnderlyingEndPrice_74.setString("15226059");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_74, UnderlyingInstrument_74);
    FIX::UnderlyingEndValue UnderlyingEndValue_74;
    UnderlyingEndValue_74.setString("6716808");
set_field(noUnderlyings_0_1, UnderlyingEndValue_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{647100303}, UnderlyingInstrument_74);
    FIX::UnderlyingFXRate UnderlyingFXRate_74;
    UnderlyingFXRate_74.setString("6315783");
set_field(noUnderlyings_0_1, UnderlyingFXRate_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_74);
    FIX::UnderlyingFactor UnderlyingFactor_74;
    UnderlyingFactor_74.setString("2019978");
set_field(noUnderlyings_0_1, UnderlyingFactor_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1495053685}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1545199987"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1095027138"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_845563185"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_638298087"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1193414031"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_979299895"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1508753883"}, UnderlyingInstrument_74);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_74;
    UnderlyingNotionalPercentageOutstanding_74.setString("90.320000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_74);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_74;
    UnderlyingOriginalNotionalPercentageOutstanding_74.setString("36.060000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1564635163"}, UnderlyingInstrument_74);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_74;
    UnderlyingPriceUnitOfMeasureQty_74.setString("612620");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1121503909}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{190908582}, UnderlyingInstrument_74);
    FIX::UnderlyingPx UnderlyingPx_74;
    UnderlyingPx_74.setString("13548772");
set_field(noUnderlyings_0_1, UnderlyingPx_74, UnderlyingInstrument_74);
    FIX::UnderlyingQty UnderlyingQty_74;
    UnderlyingQty_74.setString("15353796");
set_field(noUnderlyings_0_1, UnderlyingQty_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1456524945"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_403656943"}, UnderlyingInstrument_74);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_74;
    UnderlyingRepurchaseRate_74.setString("3.350000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{8078708}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1390247738"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_2129964612"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_157251937"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_340463658"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1505086867"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_828932764"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_987563961"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_2136665203"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1279980383"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_74);
    FIX::UnderlyingStartValue UnderlyingStartValue_74;
    UnderlyingStartValue_74.setString("14842352");
set_field(noUnderlyings_0_1, UnderlyingStartValue_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_677696723"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_74);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_74;
    UnderlyingStrikePrice_74.setString("13159948");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1330519291"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1161614673"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_677265046"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1641098324"}, UnderlyingInstrument_74);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_74;
    UnderlyingUnitOfMeasureQty_74.setString("12466557");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_74, UnderlyingInstrument_74);
    all_values.push_back(UnderlyingInstrument_74);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_156;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1058249839"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_156);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1307917849"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_156);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_156);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_146;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1249158421"}, UnderlyingStipulations_NoUnderlyingStips_146);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_515311478"}, UnderlyingStipulations_NoUnderlyingStips_146);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_146);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_147;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1913768599"}, UnderlyingStipulations_NoUnderlyingStips_147);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_558199718"}, UnderlyingStipulations_NoUnderlyingStips_147);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_147);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_148;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_918968422"}, UnderlyingStipulations_NoUnderlyingStips_148);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_880545286"}, UnderlyingStipulations_NoUnderlyingStips_148);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_148);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_152;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_161732512"}, UndlyInstrumentParties_NoUndlyInstrumentParties_152);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_152);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{723530363}, UndlyInstrumentParties_NoUndlyInstrumentParties_152);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_152);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_220629470"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1552463127}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1489760132"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{209811025}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_153;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_684959863"}, UndlyInstrumentParties_NoUndlyInstrumentParties_153);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_153);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1694046266}, UndlyInstrumentParties_NoUndlyInstrumentParties_153);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_153);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_668943515"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1876361043}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_75;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_531167748"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1999462806}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_890492068"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1208432794}, UnderlyingInstrument_75);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_75;
    UnderlyingAdjustedQuantity_75.setString("14930774");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_75, UnderlyingInstrument_75);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_75;
    UnderlyingAllocationPercent_75.setString("78.580000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_75, UnderlyingInstrument_75);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_75;
    UnderlyingAttachmentPoint_75.setString("77.980000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_403843674"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1297582059"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_843706711"}, UnderlyingInstrument_75);
    FIX::UnderlyingCapValue UnderlyingCapValue_75;
    UnderlyingCapValue_75.setString("16530020");
set_field(noUnderlyings_0_2, UnderlyingCapValue_75, UnderlyingInstrument_75);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_75;
    UnderlyingCashAmount_75.setString("18128935");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_75);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_75;
    UnderlyingContractMultiplier_75.setString("637181");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{584378311}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1490536949"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_629996592"}, UnderlyingInstrument_75);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_75;
    UnderlyingCouponRate_75.setString("8.230000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_206079552"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_75);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_75;
    UnderlyingCurrentValue_75.setString("4267090");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_75, UnderlyingInstrument_75);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_75;
    UnderlyingDetachmentPoint_75.setString("64.350000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_75, UnderlyingInstrument_75);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_75;
    UnderlyingDirtyPrice_75.setString("5905834");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_75, UnderlyingInstrument_75);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_75;
    UnderlyingEndPrice_75.setString("6365200");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_75, UnderlyingInstrument_75);
    FIX::UnderlyingEndValue UnderlyingEndValue_75;
    UnderlyingEndValue_75.setString("14434662");
set_field(noUnderlyings_0_2, UnderlyingEndValue_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1122421732}, UnderlyingInstrument_75);
    FIX::UnderlyingFXRate UnderlyingFXRate_75;
    UnderlyingFXRate_75.setString("1830826");
set_field(noUnderlyings_0_2, UnderlyingFXRate_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_75);
    FIX::UnderlyingFactor UnderlyingFactor_75;
    UnderlyingFactor_75.setString("17913652");
set_field(noUnderlyings_0_2, UnderlyingFactor_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{2059443709}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1189806985"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1643344406"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_802452130"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_250756131"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_988938240"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_792116340"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_716073930"}, UnderlyingInstrument_75);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_75;
    UnderlyingNotionalPercentageOutstanding_75.setString("19.140000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_75);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_75;
    UnderlyingOriginalNotionalPercentageOutstanding_75.setString("6.410000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_898300362"}, UnderlyingInstrument_75);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_75;
    UnderlyingPriceUnitOfMeasureQty_75.setString("17551082");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{22288656}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{962018528}, UnderlyingInstrument_75);
    FIX::UnderlyingPx UnderlyingPx_75;
    UnderlyingPx_75.setString("1920029");
set_field(noUnderlyings_0_2, UnderlyingPx_75, UnderlyingInstrument_75);
    FIX::UnderlyingQty UnderlyingQty_75;
    UnderlyingQty_75.setString("15128256");
set_field(noUnderlyings_0_2, UnderlyingQty_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1592015120"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_938113775"}, UnderlyingInstrument_75);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_75;
    UnderlyingRepurchaseRate_75.setString("51.580000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{798058428}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_38937121"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_2145614181"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1556564864"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_629520599"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_634650581"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_852547514"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1751942332"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_817733247"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_1511186751"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_75);
    FIX::UnderlyingStartValue UnderlyingStartValue_75;
    UnderlyingStartValue_75.setString("7296933");
set_field(noUnderlyings_0_2, UnderlyingStartValue_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_553510088"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_75);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_75;
    UnderlyingStrikePrice_75.setString("8042662");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1880622930"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_176778130"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1520340149"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1125921196"}, UnderlyingInstrument_75);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_75;
    UnderlyingUnitOfMeasureQty_75.setString("1189928");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_75, UnderlyingInstrument_75);
    all_values.push_back(UnderlyingInstrument_75);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_157;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_2024221558"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_157);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1874101170"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_157);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_157);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_158;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_954925799"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_158);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_838756438"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_158);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_158);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_159;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_2066104122"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_159);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_320267757"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_159);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_159);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_149;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_856734249"}, UnderlyingStipulations_NoUnderlyingStips_149);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_2039172916"}, UnderlyingStipulations_NoUnderlyingStips_149);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_149);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_150;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_1081346339"}, UnderlyingStipulations_NoUnderlyingStips_150);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_895671371"}, UnderlyingStipulations_NoUnderlyingStips_150);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_150);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_151;
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipType{"STRING_2037303449"}, UnderlyingStipulations_NoUnderlyingStips_151);
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipValue{"STRING_490427555"}, UnderlyingStipulations_NoUnderlyingStips_151);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_151);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_154;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_524470382"}, UndlyInstrumentParties_NoUndlyInstrumentParties_154);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_154);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1129650654}, UndlyInstrumentParties_NoUndlyInstrumentParties_154);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_154);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_706678173"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{377990938}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2071896937"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1260188261}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1269675627"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1456558728}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_155;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2064454480"}, UndlyInstrumentParties_NoUndlyInstrumentParties_155);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_155);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{1633336858}, UndlyInstrumentParties_NoUndlyInstrumentParties_155);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_155);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2128736106"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1752329740}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_222464477"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{2005474016}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1478947262"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1177390276}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
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
