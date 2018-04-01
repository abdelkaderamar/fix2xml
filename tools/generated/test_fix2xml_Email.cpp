#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Email.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Email, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Email msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Email_0;
  set_field(msg, FIX::ClOrdID{"STRING_215923026"}, Email_0);
  set_field(msg, FIX::EmailThreadID{"STRING_140144717"}, Email_0);
  set_field(msg, FIX::EmailType{'0'}, Email_0);
  set_field(msg, FIX::EncodedSubject{"DATA_1557518454"}, Email_0);
  set_field(msg, FIX::EncodedSubjectLen{1957604048}, Email_0);
  set_field(msg, FIX::OrderID{"STRING_1673766235"}, Email_0);
  set_field(msg, FIX::OrigTime{FIX::UTCTIMESTAMP(12, 43, 50, 20, 7, 2004)}, Email_0);
  set_field(msg, FIX::RawData{"DATA_1246080025"}, Email_0);
  set_field(msg, FIX::RawDataLength{2025549123}, Email_0);
  set_field(msg, FIX::Subject{"STRING_2093149472"}, Email_0);
  all_values.push_back(Email_0);

  all_compo_names.insert("Email");

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_22;
    FIX::AttachmentPoint AttachmentPoint_22;
    AttachmentPoint_22.setString("18.270000");
set_field(noRelatedSym_0_0, AttachmentPoint_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_1689462386"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_478898423"}, Instrument_22);
    FIX::CapPrice CapPrice_22;
    CapPrice_22.setString("17043797");
set_field(noRelatedSym_0_0, CapPrice_22, Instrument_22);
    FIX::ContractMultiplier ContractMultiplier_22;
    ContractMultiplier_22.setString("3040741");
set_field(noRelatedSym_0_0, ContractMultiplier_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{2}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_460224009"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_2075637851"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1884549400"}, Instrument_22);
    FIX::CouponRate CouponRate_22;
    CouponRate_22.setString("14.640000");
set_field(noRelatedSym_0_0, CouponRate_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_1117236484"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_1713721457"}, Instrument_22);
    FIX::DetachmentPoint DetachmentPoint_22;
    DetachmentPoint_22.setString("32.570000");
set_field(noRelatedSym_0_0, DetachmentPoint_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_1333159510"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1853866174}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_760638038"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{743194317}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{2}, Instrument_22);
    FIX::Factor Factor_22;
    Factor_22.setString("2869206");
set_field(noRelatedSym_0_0, Factor_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_22);
    FIX::FloorPrice FloorPrice_22;
    FloorPrice_22.setString("3359994");
set_field(noRelatedSym_0_0, FloorPrice_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{2}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_562022940"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1148852676"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1808102965"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_958014430"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_585613770"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_859972610"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_636497239"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_1533444150"}, Instrument_22);
    FIX::MinPriceIncrement MinPriceIncrement_22;
    MinPriceIncrement_22.setString("13388710");
set_field(noRelatedSym_0_0, MinPriceIncrement_22, Instrument_22);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_22;
    MinPriceIncrementAmount_22.setString("1933933");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{1837518331}, Instrument_22);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_22;
    NotionalPercentageOutstanding_22.setString("69.610000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'6'}, Instrument_22);
    FIX::OptPayoutAmount OptPayoutAmount_22;
    OptPayoutAmount_22.setString("17656725");
set_field(noRelatedSym_0_0, OptPayoutAmount_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{3}, Instrument_22);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_22;
    OriginalNotionalPercentageOutstanding_22.setString("51.670000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_735425370"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{1118060522}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_2068584881"}, Instrument_22);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_22;
    PriceUnitOfMeasureQty_22.setString("8244430");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::Product{10}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_664295550"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{0}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_2035107088"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_898660052"}, Instrument_22);
    FIX::RepurchaseRate RepurchaseRate_22;
    RepurchaseRate_22.setString("78.670000");
set_field(noRelatedSym_0_0, RepurchaseRate_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{223622909}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_FR"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_484427159"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1303571864"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1251071093"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_145046476"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_L"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_730660246"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_SUPRA"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SB"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_165462641"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1027996526"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CHF"}, Instrument_22);
    FIX::StrikeMultiplier StrikeMultiplier_22;
    StrikeMultiplier_22.setString("16816138");
set_field(noRelatedSym_0_0, StrikeMultiplier_22, Instrument_22);
    FIX::StrikePrice StrikePrice_22;
    StrikePrice_22.setString("15723279");
set_field(noRelatedSym_0_0, StrikePrice_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{4}, Instrument_22);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_22;
    StrikePriceBoundaryPrecision_22.setString("90.440000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_22);
    FIX::StrikeValue StrikeValue_22;
    StrikeValue_22.setString("3551355");
set_field(noRelatedSym_0_0, StrikeValue_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_738743820"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_D"}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_22);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_22;
    UnitOfMeasureQty_22.setString("15205245");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_22, Instrument_22);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_22);
    all_values.push_back(Instrument_22);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_47;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_47);
      FIX::ComplexEventPrice ComplexEventPrice_47;
      ComplexEventPrice_47.setString("4506929");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_47, ComplexEvents_NoComplexEvents_47);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_47);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_47;
      ComplexEventPriceBoundaryPrecision_47.setString("59.470000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_47, ComplexEvents_NoComplexEvents_47);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_47);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_47);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_47;
      ComplexOptPayoutAmount_47.setString("20724024");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_47, ComplexEvents_NoComplexEvents_47);
      all_values.push_back(ComplexEvents_NoComplexEvents_47);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_100;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 42, 57, 6, 1, 2009)}, ComplexEventDates_NoComplexEventDates_100);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 4, 41, 27, 5, 2010)}, ComplexEventDates_NoComplexEventDates_100);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_100);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_201;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 54, 35)}, ComplexEventTimes_NoComplexEventTimes_201);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 49, 40)}, ComplexEventTimes_NoComplexEventTimes_201);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_201);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_101;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 52, 1, 0, 11, 2016)}, ComplexEventDates_NoComplexEventDates_101);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 10, 41, 18, 10, 2009)}, ComplexEventDates_NoComplexEventDates_101);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_101);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_202;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 50, 44)}, ComplexEventTimes_NoComplexEventTimes_202);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 54, 58)}, ComplexEventTimes_NoComplexEventTimes_202);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_202);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_203;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 44, 38)}, ComplexEventTimes_NoComplexEventTimes_203);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 28, 22)}, ComplexEventTimes_NoComplexEventTimes_203);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_203);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_102;
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 15, 26, 21, 6, 2016)}, ComplexEventDates_NoComplexEventDates_102);
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 45, 9, 25, 11, 2000)}, ComplexEventDates_NoComplexEventDates_102);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_102);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_204;
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 53, 30)}, ComplexEventTimes_NoComplexEventTimes_204);
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 16, 19)}, ComplexEventTimes_NoComplexEventTimes_204);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_204);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_48;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_48);
      FIX::ComplexEventPrice ComplexEventPrice_48;
      ComplexEventPrice_48.setString("4755641");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_48, ComplexEvents_NoComplexEvents_48);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_48);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_48;
      ComplexEventPriceBoundaryPrecision_48.setString("30.660000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_48, ComplexEvents_NoComplexEvents_48);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_48);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_48);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_48;
      ComplexOptPayoutAmount_48.setString("9578853");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_48, ComplexEvents_NoComplexEvents_48);
      all_values.push_back(ComplexEvents_NoComplexEvents_48);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_103;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 19, 18, 25, 1, 2002)}, ComplexEventDates_NoComplexEventDates_103);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 21, 18, 23, 8, 2004)}, ComplexEventDates_NoComplexEventDates_103);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_103);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_205;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 16, 35)}, ComplexEventTimes_NoComplexEventTimes_205);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 51, 3)}, ComplexEventTimes_NoComplexEventTimes_205);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_205);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_50;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1216780146"}, EvntGrp_NoEvents_50);
      FIX::EventPx EventPx_50;
      EventPx_50.setString("10914415");
set_field(noEvents_0_1_0, EventPx_50, EvntGrp_NoEvents_50);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1642873387"}, EvntGrp_NoEvents_50);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(14, 25, 8, 6, 2, 2001)}, EvntGrp_NoEvents_50);
      set_field(noEvents_0_1_0, FIX::EventType{17}, EvntGrp_NoEvents_50);
      all_values.push_back(EvntGrp_NoEvents_50);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_42;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1077937963"}, InstrumentParties_NoInstrumentParties_42);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_42);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{277059995}, InstrumentParties_NoInstrumentParties_42);
      all_values.push_back(InstrumentParties_NoInstrumentParties_42);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1443535602"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{370962293}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_43;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1440303373"}, InstrumentParties_NoInstrumentParties_43);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_43);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{394156269}, InstrumentParties_NoInstrumentParties_43);
      all_values.push_back(InstrumentParties_NoInstrumentParties_43);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_396265858"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{1579995399}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_805362651"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{772300893}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86;
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubID{"STRING_797098582"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86);
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubIDType{293835324}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_44;
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyID{"STRING_1513516885"}, InstrumentParties_NoInstrumentParties_44);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_44);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyRole{634765644}, InstrumentParties_NoInstrumentParties_44);
      all_values.push_back(InstrumentParties_NoInstrumentParties_44);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87;
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubID{"STRING_585861796"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87);
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubIDType{130155383}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88;
        set_field(noInstrumentPartySubIDs_0_2_2_1, FIX::InstrumentPartySubID{"STRING_1229063839"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88);
        set_field(noInstrumentPartySubIDs_0_2_2_1, FIX::InstrumentPartySubIDType{1380861282}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89;
        set_field(noInstrumentPartySubIDs_0_2_2_2, FIX::InstrumentPartySubID{"STRING_583430509"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89);
        set_field(noInstrumentPartySubIDs_0_2_2_2, FIX::InstrumentPartySubIDType{746540239}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_44;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1307683226"}, SecAltIDGrp_NoSecurityAltID_44);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_811392638"}, SecAltIDGrp_NoSecurityAltID_44);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_44);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_44;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_356258188"}, SecurityXML_44);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{879936824}, SecurityXML_44);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1889330601"}, SecurityXML_44);
    all_values.push_back(SecurityXML_44);
    all_compo_names.insert("...NoRelatedSym..");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_23;
    FIX::AttachmentPoint AttachmentPoint_23;
    AttachmentPoint_23.setString("67.290000");
set_field(noRelatedSym_0_1, AttachmentPoint_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1156996819"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::CPProgram{2}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_973218683"}, Instrument_23);
    FIX::CapPrice CapPrice_23;
    CapPrice_23.setString("15279591");
set_field(noRelatedSym_0_1, CapPrice_23, Instrument_23);
    FIX::ContractMultiplier ContractMultiplier_23;
    ContractMultiplier_23.setString("14291976");
set_field(noRelatedSym_0_1, ContractMultiplier_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{1}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_1922115381"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_2128446647"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1889853255"}, Instrument_23);
    FIX::CouponRate CouponRate_23;
    CouponRate_23.setString("71.320000");
set_field(noRelatedSym_0_1, CouponRate_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_786325651"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_514670500"}, Instrument_23);
    FIX::DetachmentPoint DetachmentPoint_23;
    DetachmentPoint_23.setString("20.660000");
set_field(noRelatedSym_0_1, DetachmentPoint_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_1080160975"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{2028187385}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_1646145992"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{1714926619}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{0}, Instrument_23);
    FIX::Factor Factor_23;
    Factor_23.setString("845241");
set_field(noRelatedSym_0_1, Factor_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{true}, Instrument_23);
    FIX::FloorPrice FloorPrice_23;
    FloorPrice_23.setString("14653854");
set_field(noRelatedSym_0_1, FloorPrice_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{4}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_291637552"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'7'}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1588712090"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_1103030190"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1143933404"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::ListMethod{0}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_844877144"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_673616485"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_1478162085"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_833771383"}, Instrument_23);
    FIX::MinPriceIncrement MinPriceIncrement_23;
    MinPriceIncrement_23.setString("16468351");
set_field(noRelatedSym_0_1, MinPriceIncrement_23, Instrument_23);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_23;
    MinPriceIncrementAmount_23.setString("8586375");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{115485347}, Instrument_23);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_23;
    NotionalPercentageOutstanding_23.setString("89.160000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'6'}, Instrument_23);
    FIX::OptPayoutAmount OptPayoutAmount_23;
    OptPayoutAmount_23.setString("964483");
set_field(noRelatedSym_0_1, OptPayoutAmount_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{1}, Instrument_23);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_23;
    OriginalNotionalPercentageOutstanding_23.setString("64.140000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_882773997"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{1249979024}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_1962934972"}, Instrument_23);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_23;
    PriceUnitOfMeasureQty_23.setString("11306827");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::Product{7}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_1530377944"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{0}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_1575324965"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_1227976299"}, Instrument_23);
    FIX::RepurchaseRate RepurchaseRate_23;
    RepurchaseRate_23.setString("71.950000");
set_field(noRelatedSym_0_1, RepurchaseRate_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{893226740}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_XR"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_1430934747"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_1680901955"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_950233605"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_386481289"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_4"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_1231358433"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_EUSUPRA"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SD"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'C'}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_850319716"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_1460714857"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"EUR"}, Instrument_23);
    FIX::StrikeMultiplier StrikeMultiplier_23;
    StrikeMultiplier_23.setString("20939841");
set_field(noRelatedSym_0_1, StrikeMultiplier_23, Instrument_23);
    FIX::StrikePrice StrikePrice_23;
    StrikePrice_23.setString("1295798");
set_field(noRelatedSym_0_1, StrikePrice_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{4}, Instrument_23);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_23;
    StrikePriceBoundaryPrecision_23.setString("69.050000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{4}, Instrument_23);
    FIX::StrikeValue StrikeValue_23;
    StrikeValue_23.setString("16810625");
set_field(noRelatedSym_0_1, StrikeValue_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_1779051737"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_Yr"}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_23);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_23;
    UnitOfMeasureQty_23.setString("1109778");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_23, Instrument_23);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_FUT"}, Instrument_23);
    all_values.push_back(Instrument_23);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_49;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_49);
      FIX::ComplexEventPrice ComplexEventPrice_49;
      ComplexEventPrice_49.setString("14434369");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_49, ComplexEvents_NoComplexEvents_49);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_49);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_49;
      ComplexEventPriceBoundaryPrecision_49.setString("61.740000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_49, ComplexEvents_NoComplexEvents_49);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_49);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_49);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_49;
      ComplexOptPayoutAmount_49.setString("9202074");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_49, ComplexEvents_NoComplexEvents_49);
      all_values.push_back(ComplexEvents_NoComplexEvents_49);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_104;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 58, 10, 26, 4, 2003)}, ComplexEventDates_NoComplexEventDates_104);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 10, 55, 12, 4, 2015)}, ComplexEventDates_NoComplexEventDates_104);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_104);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_206;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 39, 10)}, ComplexEventTimes_NoComplexEventTimes_206);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 41, 50)}, ComplexEventTimes_NoComplexEventTimes_206);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_206);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_207;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 16, 1)}, ComplexEventTimes_NoComplexEventTimes_207);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 57, 5)}, ComplexEventTimes_NoComplexEventTimes_207);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_207);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_51;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_557011827"}, EvntGrp_NoEvents_51);
      FIX::EventPx EventPx_51;
      EventPx_51.setString("3169554");
set_field(noEvents_1_1_0, EventPx_51, EvntGrp_NoEvents_51);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_2032920899"}, EvntGrp_NoEvents_51);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(22, 30, 38, 26, 5, 2010)}, EvntGrp_NoEvents_51);
      set_field(noEvents_1_1_0, FIX::EventType{4}, EvntGrp_NoEvents_51);
      all_values.push_back(EvntGrp_NoEvents_51);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_52;
      set_field(noEvents_1_1_1, FIX::EventDate{"LOCALMKTDATE_1934315407"}, EvntGrp_NoEvents_52);
      FIX::EventPx EventPx_52;
      EventPx_52.setString("16148336");
set_field(noEvents_1_1_1, EventPx_52, EvntGrp_NoEvents_52);
      set_field(noEvents_1_1_1, FIX::EventText{"STRING_189620388"}, EvntGrp_NoEvents_52);
      set_field(noEvents_1_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(12, 19, 46, 15, 11, 2001)}, EvntGrp_NoEvents_52);
      set_field(noEvents_1_1_1, FIX::EventType{14}, EvntGrp_NoEvents_52);
      all_values.push_back(EvntGrp_NoEvents_52);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_45;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_2021374544"}, InstrumentParties_NoInstrumentParties_45);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_45);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{950253231}, InstrumentParties_NoInstrumentParties_45);
      all_values.push_back(InstrumentParties_NoInstrumentParties_45);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_420125736"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{1503182808}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_1433179036"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{976623205}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_45;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_1750134491"}, SecAltIDGrp_NoSecurityAltID_45);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_862060456"}, SecAltIDGrp_NoSecurityAltID_45);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_45);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_46;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_391451232"}, SecurityXML_46);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{1627617554}, SecurityXML_46);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_1537152346"}, SecurityXML_46);
    all_values.push_back(SecurityXML_46);
    all_compo_names.insert("...NoRelatedSym..");

    msg.addGroup(noRelatedSym_0_1);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Email::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_35;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_761403208"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{800915718}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1343091385"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1730058611}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_587747477"}, InstrumentLeg_35);
    FIX::LegContractMultiplier LegContractMultiplier_35;
    LegContractMultiplier_35.setString("8104413");
set_field(noLegs_0_0, LegContractMultiplier_35, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1919678999}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_529215712"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_54906538"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1994526018"}, InstrumentLeg_35);
    FIX::LegCouponRate LegCouponRate_35;
    LegCouponRate_35.setString("93.380000");
set_field(noLegs_0_0, LegCouponRate_35, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1434670029"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_2093440322"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1235625018}, InstrumentLeg_35);
    FIX::LegFactor LegFactor_35;
    LegFactor_35.setString("3723021");
set_field(noLegs_0_0, LegFactor_35, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{683931063}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_38394601"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_198733657"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1104056799"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1541577410"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1631912693"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_2080680004"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1454288397"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1234563536"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'7'}, InstrumentLeg_35);
    FIX::LegOptionRatio LegOptionRatio_35;
    LegOptionRatio_35.setString("18457396");
set_field(noLegs_0_0, LegOptionRatio_35, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_714697442"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_184925510"}, InstrumentLeg_35);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_35;
    LegPriceUnitOfMeasureQty_35.setString("5233073");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_35, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegProduct{1476100651}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegPutOrCall{985841228}, InstrumentLeg_35);
    FIX::LegRatioQty LegRatioQty_35;
    LegRatioQty_35.setString("18663987");
set_field(noLegs_0_0, LegRatioQty_35, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1058675614"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1573588705"}, InstrumentLeg_35);
    FIX::LegRepurchaseRate LegRepurchaseRate_35;
    LegRepurchaseRate_35.setString("64.960000");
set_field(noLegs_0_0, LegRepurchaseRate_35, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{830870966}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_2102804417"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_584263034"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_677913336"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1703010108"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_2018933063"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_596007237"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegSide{'5'}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1964889737"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_35);
    FIX::LegStrikePrice LegStrikePrice_35;
    LegStrikePrice_35.setString("5013371");
set_field(noLegs_0_0, LegStrikePrice_35, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1870026857"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_624973593"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1605393951"}, InstrumentLeg_35);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1264120619"}, InstrumentLeg_35);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_35;
    LegUnitOfMeasureQty_35.setString("1094026");
set_field(noLegs_0_0, LegUnitOfMeasureQty_35, InstrumentLeg_35);
    all_values.push_back(InstrumentLeg_35);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_71;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_570925369"}, LegSecAltIDGrp_NoLegSecurityAltID_71);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1343966174"}, LegSecAltIDGrp_NoLegSecurityAltID_71);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_71);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_72;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_186363471"}, LegSecAltIDGrp_NoLegSecurityAltID_72);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_269181351"}, LegSecAltIDGrp_NoLegSecurityAltID_72);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_72);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_73;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_2058663617"}, LegSecAltIDGrp_NoLegSecurityAltID_73);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_371288981"}, LegSecAltIDGrp_NoLegSecurityAltID_73);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_73);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_0;
    set_field(noLinesOfText_0_0, FIX::EncodedText{"DATA_1387280620"}, LinesOfTextGrp_NoLinesOfText_0);
    set_field(noLinesOfText_0_0, FIX::EncodedTextLen{1357130209}, LinesOfTextGrp_NoLinesOfText_0);
    set_field(noLinesOfText_0_0, FIX::Text{"STRING_511403874"}, LinesOfTextGrp_NoLinesOfText_0);
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_0);
    all_compo_names.insert("...NoLinesOfText");

    msg.addGroup(noLinesOfText_0_0);
  }
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_1;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_1;
    set_field(noLinesOfText_0_1, FIX::EncodedText{"DATA_298472586"}, LinesOfTextGrp_NoLinesOfText_1);
    set_field(noLinesOfText_0_1, FIX::EncodedTextLen{783235266}, LinesOfTextGrp_NoLinesOfText_1);
    set_field(noLinesOfText_0_1, FIX::Text{"STRING_1040760370"}, LinesOfTextGrp_NoLinesOfText_1);
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_1);
    all_compo_names.insert("...NoLinesOfText");

    msg.addGroup(noLinesOfText_0_1);
  }
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_2;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_2;
    set_field(noLinesOfText_0_2, FIX::EncodedText{"DATA_1129343552"}, LinesOfTextGrp_NoLinesOfText_2);
    set_field(noLinesOfText_0_2, FIX::EncodedTextLen{738556035}, LinesOfTextGrp_NoLinesOfText_2);
    set_field(noLinesOfText_0_2, FIX::Text{"STRING_1625023404"}, LinesOfTextGrp_NoLinesOfText_2);
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_2);
    all_compo_names.insert("...NoLinesOfText");

    msg.addGroup(noLinesOfText_0_2);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::Email::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_0;
    set_field(noRoutingIDs_0_0, FIX::RoutingID{"STRING_294082495"}, RoutingGrp_NoRoutingIDs_0);
    set_field(noRoutingIDs_0_0, FIX::RoutingType{4}, RoutingGrp_NoRoutingIDs_0);
    all_values.push_back(RoutingGrp_NoRoutingIDs_0);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_38;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_348020245"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1313878908}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2087412734"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{774260181}, UnderlyingInstrument_38);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_38;
    UnderlyingAdjustedQuantity_38.setString("18152160");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_38, UnderlyingInstrument_38);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_38;
    UnderlyingAllocationPercent_38.setString("59.440000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_38, UnderlyingInstrument_38);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_38;
    UnderlyingAttachmentPoint_38.setString("37.740000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1273126363"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_926592915"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1508636412"}, UnderlyingInstrument_38);
    FIX::UnderlyingCapValue UnderlyingCapValue_38;
    UnderlyingCapValue_38.setString("6642330");
set_field(noUnderlyings_0_0, UnderlyingCapValue_38, UnderlyingInstrument_38);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_38;
    UnderlyingCashAmount_38.setString("14975182");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_38);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_38;
    UnderlyingContractMultiplier_38.setString("8505964");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1766699635}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_616298908"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1221885474"}, UnderlyingInstrument_38);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_38;
    UnderlyingCouponRate_38.setString("47.310000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_2003579528"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_38);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_38;
    UnderlyingCurrentValue_38.setString("1545684");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_38, UnderlyingInstrument_38);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_38;
    UnderlyingDetachmentPoint_38.setString("73.010000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_38, UnderlyingInstrument_38);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_38;
    UnderlyingDirtyPrice_38.setString("19638689");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_38, UnderlyingInstrument_38);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_38;
    UnderlyingEndPrice_38.setString("12839120");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_38, UnderlyingInstrument_38);
    FIX::UnderlyingEndValue UnderlyingEndValue_38;
    UnderlyingEndValue_38.setString("19533233");
set_field(noUnderlyings_0_0, UnderlyingEndValue_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1441408731}, UnderlyingInstrument_38);
    FIX::UnderlyingFXRate UnderlyingFXRate_38;
    UnderlyingFXRate_38.setString("9436852");
set_field(noUnderlyings_0_0, UnderlyingFXRate_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_38);
    FIX::UnderlyingFactor UnderlyingFactor_38;
    UnderlyingFactor_38.setString("7903979");
set_field(noUnderlyings_0_0, UnderlyingFactor_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1199465738}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_447942429"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2104276810"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1139394825"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1222202611"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1772009222"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_801867121"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_473952737"}, UnderlyingInstrument_38);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_38;
    UnderlyingNotionalPercentageOutstanding_38.setString("19.370000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_38);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_38;
    UnderlyingOriginalNotionalPercentageOutstanding_38.setString("91.500000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1561884959"}, UnderlyingInstrument_38);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_38;
    UnderlyingPriceUnitOfMeasureQty_38.setString("10784946");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{540224441}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{264997804}, UnderlyingInstrument_38);
    FIX::UnderlyingPx UnderlyingPx_38;
    UnderlyingPx_38.setString("6977106");
set_field(noUnderlyings_0_0, UnderlyingPx_38, UnderlyingInstrument_38);
    FIX::UnderlyingQty UnderlyingQty_38;
    UnderlyingQty_38.setString("11565233");
set_field(noUnderlyings_0_0, UnderlyingQty_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1486883278"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1109415392"}, UnderlyingInstrument_38);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_38;
    UnderlyingRepurchaseRate_38.setString("92.290000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1918415313}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_2032523997"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1167187695"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_985698966"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1848909325"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_303616066"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_791538655"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1142834408"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1247301326"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_891460839"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_38);
    FIX::UnderlyingStartValue UnderlyingStartValue_38;
    UnderlyingStartValue_38.setString("2992834");
set_field(noUnderlyings_0_0, UnderlyingStartValue_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1339403268"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_38);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_38;
    UnderlyingStrikePrice_38.setString("4141222");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_38, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1514551048"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_93061715"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_888074969"}, UnderlyingInstrument_38);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_264719337"}, UnderlyingInstrument_38);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_38;
    UnderlyingUnitOfMeasureQty_38.setString("18215217");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_38, UnderlyingInstrument_38);
    all_values.push_back(UnderlyingInstrument_38);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_80;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1826604297"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_80);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_752532776"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_80);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_80);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_76;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_2091602101"}, UnderlyingStipulations_NoUnderlyingStips_76);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1450243437"}, UnderlyingStipulations_NoUnderlyingStips_76);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_76);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_77;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_272444613"}, UnderlyingStipulations_NoUnderlyingStips_77);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1431001732"}, UnderlyingStipulations_NoUnderlyingStips_77);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_77);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_78;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_412175181"}, UnderlyingStipulations_NoUnderlyingStips_78);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1285063842"}, UnderlyingStipulations_NoUnderlyingStips_78);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_78);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_74;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_297215530"}, UndlyInstrumentParties_NoUndlyInstrumentParties_74);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_74);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{40148716}, UndlyInstrumentParties_NoUndlyInstrumentParties_74);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_74);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_608383956"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{831687371}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1141475616"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1855685282}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1723148210"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{927224279}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_75;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_7485051"}, UndlyInstrumentParties_NoUndlyInstrumentParties_75);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_75);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{669766104}, UndlyInstrumentParties_NoUndlyInstrumentParties_75);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_75);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1329190062"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{36833504}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_76;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1539225008"}, UndlyInstrumentParties_NoUndlyInstrumentParties_76);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_76);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{301552842}, UndlyInstrumentParties_NoUndlyInstrumentParties_76);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_76);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_792961854"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{2128157139}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1965795888"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{2056366766}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_39;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_2072275592"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1268555677}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_181327731"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1355793676}, UnderlyingInstrument_39);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_39;
    UnderlyingAdjustedQuantity_39.setString("16807308");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_39, UnderlyingInstrument_39);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_39;
    UnderlyingAllocationPercent_39.setString("15.730000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_39, UnderlyingInstrument_39);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_39;
    UnderlyingAttachmentPoint_39.setString("34.260000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1977946389"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1771159462"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_450392142"}, UnderlyingInstrument_39);
    FIX::UnderlyingCapValue UnderlyingCapValue_39;
    UnderlyingCapValue_39.setString("19765875");
set_field(noUnderlyings_0_1, UnderlyingCapValue_39, UnderlyingInstrument_39);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_39;
    UnderlyingCashAmount_39.setString("2320597");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_39);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_39;
    UnderlyingContractMultiplier_39.setString("9705795");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{2087745053}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_857744075"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1897803843"}, UnderlyingInstrument_39);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_39;
    UnderlyingCouponRate_39.setString("1.040000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1772811905"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_39);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_39;
    UnderlyingCurrentValue_39.setString("9545183");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_39, UnderlyingInstrument_39);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_39;
    UnderlyingDetachmentPoint_39.setString("98.040000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_39, UnderlyingInstrument_39);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_39;
    UnderlyingDirtyPrice_39.setString("7856511");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_39, UnderlyingInstrument_39);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_39;
    UnderlyingEndPrice_39.setString("10242997");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_39, UnderlyingInstrument_39);
    FIX::UnderlyingEndValue UnderlyingEndValue_39;
    UnderlyingEndValue_39.setString("7584726");
set_field(noUnderlyings_0_1, UnderlyingEndValue_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1998914222}, UnderlyingInstrument_39);
    FIX::UnderlyingFXRate UnderlyingFXRate_39;
    UnderlyingFXRate_39.setString("18172615");
set_field(noUnderlyings_0_1, UnderlyingFXRate_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_39);
    FIX::UnderlyingFactor UnderlyingFactor_39;
    UnderlyingFactor_39.setString("18172264");
set_field(noUnderlyings_0_1, UnderlyingFactor_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1726144674}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_663938082"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_938298492"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1907472405"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_2019731758"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_471545703"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1226380330"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_282491536"}, UnderlyingInstrument_39);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_39;
    UnderlyingNotionalPercentageOutstanding_39.setString("84.440000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_39);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_39;
    UnderlyingOriginalNotionalPercentageOutstanding_39.setString("36.780000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_131112392"}, UnderlyingInstrument_39);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_39;
    UnderlyingPriceUnitOfMeasureQty_39.setString("10821159");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{2014963191}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1101691957}, UnderlyingInstrument_39);
    FIX::UnderlyingPx UnderlyingPx_39;
    UnderlyingPx_39.setString("10223773");
set_field(noUnderlyings_0_1, UnderlyingPx_39, UnderlyingInstrument_39);
    FIX::UnderlyingQty UnderlyingQty_39;
    UnderlyingQty_39.setString("7252236");
set_field(noUnderlyings_0_1, UnderlyingQty_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_852012152"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_970123777"}, UnderlyingInstrument_39);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_39;
    UnderlyingRepurchaseRate_39.setString("18.760000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1272098452}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_216549879"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1305070195"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1729018257"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1002200989"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_181886250"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_340007255"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_853631564"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1999147806"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1079153393"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_39);
    FIX::UnderlyingStartValue UnderlyingStartValue_39;
    UnderlyingStartValue_39.setString("15778088");
set_field(noUnderlyings_0_1, UnderlyingStartValue_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1743091475"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_39);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_39;
    UnderlyingStrikePrice_39.setString("16153395");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_39, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1933218574"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_416694273"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1897831122"}, UnderlyingInstrument_39);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_87743370"}, UnderlyingInstrument_39);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_39;
    UnderlyingUnitOfMeasureQty_39.setString("12667504");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_39, UnderlyingInstrument_39);
    all_values.push_back(UnderlyingInstrument_39);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_81;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_218855763"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_81);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_201382685"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_81);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_81);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_82;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_350710696"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_82);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1320547720"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_82);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_82);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_83;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1223760006"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_83);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1075934314"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_83);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_83);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_79;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_46400135"}, UnderlyingStipulations_NoUnderlyingStips_79);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1426486190"}, UnderlyingStipulations_NoUnderlyingStips_79);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_79);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_80;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1297174677"}, UnderlyingStipulations_NoUnderlyingStips_80);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_262950014"}, UnderlyingStipulations_NoUnderlyingStips_80);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_80);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_77;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_878709286"}, UndlyInstrumentParties_NoUndlyInstrumentParties_77);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_77);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{765958988}, UndlyInstrumentParties_NoUndlyInstrumentParties_77);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_77);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2118782567"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{617623146}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_78;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_150386286"}, UndlyInstrumentParties_NoUndlyInstrumentParties_78);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_78);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{47948331}, UndlyInstrumentParties_NoUndlyInstrumentParties_78);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_78);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1956346170"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1385745922}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1361333699"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1742081096}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1802440195"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1111681173}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_79;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1829824467"}, UndlyInstrumentParties_NoUndlyInstrumentParties_79);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_79);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{1594912325}, UndlyInstrumentParties_NoUndlyInstrumentParties_79);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_79);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1123089650"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1945623021}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
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
