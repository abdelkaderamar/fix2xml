#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::Email msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Email_0;
  set_field(msg, FIX::ClOrdID{"STRING_1720915946"}, Email_0);
  set_field(msg, FIX::EmailThreadID{"STRING_1883909500"}, Email_0);
  set_field(msg, FIX::EmailType{'0'}, Email_0);
  set_field(msg, FIX::EncodedSubject{"DATA_778854739"}, Email_0);
  set_field(msg, FIX::EncodedSubjectLen{717544225}, Email_0);
  set_field(msg, FIX::OrderID{"STRING_181043136"}, Email_0);
  set_field(msg, FIX::OrigTime{FIX::UTCTIMESTAMP(9, 42, 32, 5, 7, 2010)}, Email_0);
  set_field(msg, FIX::RawData{"DATA_856551721"}, Email_0);
  set_field(msg, FIX::RawDataLength{2041304194}, Email_0);
  set_field(msg, FIX::Subject{"STRING_1352045240"}, Email_0);
  all_values.push_back(Email_0);

  all_compo_names.insert("Email");

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_23;
    FIX::AttachmentPoint AttachmentPoint_23;
    AttachmentPoint_23.setString("9.050000");
set_field(noRelatedSym_0_0, AttachmentPoint_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_583083613"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_1148706756"}, Instrument_23);
    FIX::CapPrice CapPrice_23;
    CapPrice_23.setString("11275069");
set_field(noRelatedSym_0_0, CapPrice_23, Instrument_23);
    FIX::ContractMultiplier ContractMultiplier_23;
    ContractMultiplier_23.setString("9127603");
set_field(noRelatedSym_0_0, ContractMultiplier_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{0}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_919010066"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_906677860"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_576895393"}, Instrument_23);
    FIX::CouponRate CouponRate_23;
    CouponRate_23.setString("54.850000");
set_field(noRelatedSym_0_0, CouponRate_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_666083448"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_1638005910"}, Instrument_23);
    FIX::DetachmentPoint DetachmentPoint_23;
    DetachmentPoint_23.setString("16.340000");
set_field(noRelatedSym_0_0, DetachmentPoint_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_239515746"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1374431762}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_389311433"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1018370485}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{0}, Instrument_23);
    FIX::Factor Factor_23;
    Factor_23.setString("5703545");
set_field(noRelatedSym_0_0, Factor_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_23);
    FIX::FloorPrice FloorPrice_23;
    FloorPrice_23.setString("19258661");
set_field(noRelatedSym_0_0, FloorPrice_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{0}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_2097113158"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1348738434"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_806181232"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1202459723"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::ListMethod{0}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_1111593161"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1718310629"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1136383639"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_300084670"}, Instrument_23);
    FIX::MinPriceIncrement MinPriceIncrement_23;
    MinPriceIncrement_23.setString("7195337");
set_field(noRelatedSym_0_0, MinPriceIncrement_23, Instrument_23);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_23;
    MinPriceIncrementAmount_23.setString("1164069");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{1212845053}, Instrument_23);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_23;
    NotionalPercentageOutstanding_23.setString("53.310000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_23);
    FIX::OptPayoutAmount OptPayoutAmount_23;
    OptPayoutAmount_23.setString("21195229");
set_field(noRelatedSym_0_0, OptPayoutAmount_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{1}, Instrument_23);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_23;
    OriginalNotionalPercentageOutstanding_23.setString("88.630000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_638122713"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{1707462987}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_877638459"}, Instrument_23);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_23;
    PriceUnitOfMeasureQty_23.setString("9344111");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::Product{8}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_1896008945"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1888126499"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_1393683023"}, Instrument_23);
    FIX::RepurchaseRate RepurchaseRate_23;
    RepurchaseRate_23.setString("72.060000");
set_field(noRelatedSym_0_0, RepurchaseRate_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{1666509002}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MR"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_1083676716"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_827664532"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1441208880"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1889857948"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_6"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_853967462"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_TCAL"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SD"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_173001326"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1099815857"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_23);
    FIX::StrikeMultiplier StrikeMultiplier_23;
    StrikeMultiplier_23.setString("21352328");
set_field(noRelatedSym_0_0, StrikeMultiplier_23, Instrument_23);
    FIX::StrikePrice StrikePrice_23;
    StrikePrice_23.setString("1914528");
set_field(noRelatedSym_0_0, StrikePrice_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_23);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_23;
    StrikePriceBoundaryPrecision_23.setString("80.970000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{1}, Instrument_23);
    FIX::StrikeValue StrikeValue_23;
    StrikeValue_23.setString("14424830");
set_field(noRelatedSym_0_0, StrikeValue_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_1409628595"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_D"}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_23);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_23;
    UnitOfMeasureQty_23.setString("11083139");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_23, Instrument_23);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_23);
    all_values.push_back(Instrument_23);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_42;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_42);
      FIX::ComplexEventPrice ComplexEventPrice_42;
      ComplexEventPrice_42.setString("19870687");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_42, ComplexEvents_NoComplexEvents_42);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_42);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_42;
      ComplexEventPriceBoundaryPrecision_42.setString("42.420000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_42, ComplexEvents_NoComplexEvents_42);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_42);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_42);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_42;
      ComplexOptPayoutAmount_42.setString("9209285");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_42, ComplexEvents_NoComplexEvents_42);
      all_values.push_back(ComplexEvents_NoComplexEvents_42);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_85;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 31, 42, 1, 10, 2005)}, ComplexEventDates_NoComplexEventDates_85);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 33, 29, 17, 8, 2006)}, ComplexEventDates_NoComplexEventDates_85);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_85);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_181;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 34, 47)}, ComplexEventTimes_NoComplexEventTimes_181);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 56, 47)}, ComplexEventTimes_NoComplexEventTimes_181);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_181);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_182;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 12, 42)}, ComplexEventTimes_NoComplexEventTimes_182);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 37, 58)}, ComplexEventTimes_NoComplexEventTimes_182);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_182);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_183;
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 30, 44)}, ComplexEventTimes_NoComplexEventTimes_183);
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 35, 10)}, ComplexEventTimes_NoComplexEventTimes_183);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_183);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_43;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_43);
      FIX::ComplexEventPrice ComplexEventPrice_43;
      ComplexEventPrice_43.setString("9101694");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_43, ComplexEvents_NoComplexEvents_43);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_43);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_43;
      ComplexEventPriceBoundaryPrecision_43.setString("58.280000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_43, ComplexEvents_NoComplexEvents_43);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_43);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_43);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_43;
      ComplexOptPayoutAmount_43.setString("296874");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_43, ComplexEvents_NoComplexEvents_43);
      all_values.push_back(ComplexEvents_NoComplexEvents_43);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_86;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 1, 54, 3, 10, 2003)}, ComplexEventDates_NoComplexEventDates_86);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 46, 29, 25, 1, 2001)}, ComplexEventDates_NoComplexEventDates_86);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_86);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_184;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 5, 2)}, ComplexEventTimes_NoComplexEventTimes_184);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 37, 27)}, ComplexEventTimes_NoComplexEventTimes_184);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_184);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_185;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 50, 39)}, ComplexEventTimes_NoComplexEventTimes_185);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 6, 26)}, ComplexEventTimes_NoComplexEventTimes_185);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_185);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_186;
          set_field(noComplexEventTimes_0_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 19, 50)}, ComplexEventTimes_NoComplexEventTimes_186);
          set_field(noComplexEventTimes_0_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 23, 33)}, ComplexEventTimes_NoComplexEventTimes_186);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_186);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_87;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 3, 43, 9, 3, 2001)}, ComplexEventDates_NoComplexEventDates_87);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 16, 45, 8, 6, 2016)}, ComplexEventDates_NoComplexEventDates_87);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_87);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_187;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 10, 56)}, ComplexEventTimes_NoComplexEventTimes_187);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 55, 15)}, ComplexEventTimes_NoComplexEventTimes_187);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_187);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_188;
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 35, 7)}, ComplexEventTimes_NoComplexEventTimes_188);
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 23, 14)}, ComplexEventTimes_NoComplexEventTimes_188);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_188);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_50;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1464597744"}, EvntGrp_NoEvents_50);
      FIX::EventPx EventPx_50;
      EventPx_50.setString("5443636");
set_field(noEvents_0_1_0, EventPx_50, EvntGrp_NoEvents_50);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1199383758"}, EvntGrp_NoEvents_50);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(23, 29, 25, 19, 10, 2017)}, EvntGrp_NoEvents_50);
      set_field(noEvents_0_1_0, FIX::EventType{8}, EvntGrp_NoEvents_50);
      all_values.push_back(EvntGrp_NoEvents_50);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_51;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_429903079"}, EvntGrp_NoEvents_51);
      FIX::EventPx EventPx_51;
      EventPx_51.setString("9698174");
set_field(noEvents_0_1_1, EventPx_51, EvntGrp_NoEvents_51);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_571844399"}, EvntGrp_NoEvents_51);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(9, 9, 40, 18, 8, 2011)}, EvntGrp_NoEvents_51);
      set_field(noEvents_0_1_1, FIX::EventType{15}, EvntGrp_NoEvents_51);
      all_values.push_back(EvntGrp_NoEvents_51);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_44;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_116588302"}, InstrumentParties_NoInstrumentParties_44);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_44);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1860619856}, InstrumentParties_NoInstrumentParties_44);
      all_values.push_back(InstrumentParties_NoInstrumentParties_44);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_270473177"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{846899411}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_51;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_592892451"}, SecAltIDGrp_NoSecurityAltID_51);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_164013507"}, SecAltIDGrp_NoSecurityAltID_51);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_51);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_46;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_1510164979"}, SecurityXML_46);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{1792276209}, SecurityXML_46);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_731569449"}, SecurityXML_46);
    all_values.push_back(SecurityXML_46);
    all_compo_names.insert("...NoRelatedSym..");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::Email::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_24;
    FIX::AttachmentPoint AttachmentPoint_24;
    AttachmentPoint_24.setString("33.220000");
set_field(noRelatedSym_0_1, AttachmentPoint_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1872906758"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::CPProgram{99}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_800335449"}, Instrument_24);
    FIX::CapPrice CapPrice_24;
    CapPrice_24.setString("4015887");
set_field(noRelatedSym_0_1, CapPrice_24, Instrument_24);
    FIX::ContractMultiplier ContractMultiplier_24;
    ContractMultiplier_24.setString("7878378");
set_field(noRelatedSym_0_1, ContractMultiplier_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{1}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_831491795"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_1757655243"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1173613548"}, Instrument_24);
    FIX::CouponRate CouponRate_24;
    CouponRate_24.setString("83.590000");
set_field(noRelatedSym_0_1, CouponRate_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_227224085"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_385125349"}, Instrument_24);
    FIX::DetachmentPoint DetachmentPoint_24;
    DetachmentPoint_24.setString("29.510000");
set_field(noRelatedSym_0_1, DetachmentPoint_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_1770497051"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{986096120}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_1956938547"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{2075958985}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{2}, Instrument_24);
    FIX::Factor Factor_24;
    Factor_24.setString("20735268");
set_field(noRelatedSym_0_1, Factor_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{true}, Instrument_24);
    FIX::FloorPrice FloorPrice_24;
    FloorPrice_24.setString("15192626");
set_field(noRelatedSym_0_1, FloorPrice_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{0}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_2011106347"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'3'}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_876774247"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_27636207"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1847745364"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::ListMethod{0}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_759205656"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_16495039"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_246989919"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_195463203"}, Instrument_24);
    FIX::MinPriceIncrement MinPriceIncrement_24;
    MinPriceIncrement_24.setString("8168304");
set_field(noRelatedSym_0_1, MinPriceIncrement_24, Instrument_24);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_24;
    MinPriceIncrementAmount_24.setString("6485786");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{983301041}, Instrument_24);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_24;
    NotionalPercentageOutstanding_24.setString("96.370000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'1'}, Instrument_24);
    FIX::OptPayoutAmount OptPayoutAmount_24;
    OptPayoutAmount_24.setString("5934726");
set_field(noRelatedSym_0_1, OptPayoutAmount_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{1}, Instrument_24);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_24;
    OriginalNotionalPercentageOutstanding_24.setString("51.410000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_820696722"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{829854886}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_443710125"}, Instrument_24);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_24;
    PriceUnitOfMeasureQty_24.setString("18159510");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::Product{9}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_372185463"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{1}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_1593536192"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_385594081"}, Instrument_24);
    FIX::RepurchaseRate RepurchaseRate_24;
    RepurchaseRate_24.setString("13.750000");
set_field(noRelatedSym_0_1, RepurchaseRate_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{965315228}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_MR"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_2147367723"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_1302895614"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_1546250124"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_27520282"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_B"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_1"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_786725938"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_TBA"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SD"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'C'}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_1836482858"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_815901838"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"CAN"}, Instrument_24);
    FIX::StrikeMultiplier StrikeMultiplier_24;
    StrikeMultiplier_24.setString("1484886");
set_field(noRelatedSym_0_1, StrikeMultiplier_24, Instrument_24);
    FIX::StrikePrice StrikePrice_24;
    StrikePrice_24.setString("4114791");
set_field(noRelatedSym_0_1, StrikePrice_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{1}, Instrument_24);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_24;
    StrikePriceBoundaryPrecision_24.setString("37.610000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_24);
    FIX::StrikeValue StrikeValue_24;
    StrikeValue_24.setString("2346996");
set_field(noRelatedSym_0_1, StrikeValue_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_945768206"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_H"}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_24);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_24;
    UnitOfMeasureQty_24.setString("10227050");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_24, Instrument_24);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_24);
    all_values.push_back(Instrument_24);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_44;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_44);
      FIX::ComplexEventPrice ComplexEventPrice_44;
      ComplexEventPrice_44.setString("8771453");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_44, ComplexEvents_NoComplexEvents_44);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_44);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_44;
      ComplexEventPriceBoundaryPrecision_44.setString("5.190000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_44, ComplexEvents_NoComplexEvents_44);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_44);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_44);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_44;
      ComplexOptPayoutAmount_44.setString("11863708");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_44, ComplexEvents_NoComplexEvents_44);
      all_values.push_back(ComplexEvents_NoComplexEvents_44);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_88;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 28, 37, 22, 11, 2000)}, ComplexEventDates_NoComplexEventDates_88);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 56, 22, 23, 3, 2002)}, ComplexEventDates_NoComplexEventDates_88);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_88);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_189;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 0, 25)}, ComplexEventTimes_NoComplexEventTimes_189);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 59, 0)}, ComplexEventTimes_NoComplexEventTimes_189);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_189);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_190;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 45, 5)}, ComplexEventTimes_NoComplexEventTimes_190);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 39, 21)}, ComplexEventTimes_NoComplexEventTimes_190);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_190);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_191;
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 42, 6)}, ComplexEventTimes_NoComplexEventTimes_191);
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 34, 54)}, ComplexEventTimes_NoComplexEventTimes_191);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_191);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_89;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 8, 25, 17, 6, 2008)}, ComplexEventDates_NoComplexEventDates_89);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 56, 46, 21, 3, 2002)}, ComplexEventDates_NoComplexEventDates_89);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_89);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_192;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 50, 9)}, ComplexEventTimes_NoComplexEventTimes_192);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 48, 20)}, ComplexEventTimes_NoComplexEventTimes_192);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_192);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::Email::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_193;
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 2, 5)}, ComplexEventTimes_NoComplexEventTimes_193);
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 39, 23)}, ComplexEventTimes_NoComplexEventTimes_193);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_193);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_52;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_1927904762"}, EvntGrp_NoEvents_52);
      FIX::EventPx EventPx_52;
      EventPx_52.setString("11897499");
set_field(noEvents_1_1_0, EventPx_52, EvntGrp_NoEvents_52);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_3727546"}, EvntGrp_NoEvents_52);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 42, 28, 2, 4, 2001)}, EvntGrp_NoEvents_52);
      set_field(noEvents_1_1_0, FIX::EventType{12}, EvntGrp_NoEvents_52);
      all_values.push_back(EvntGrp_NoEvents_52);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_53;
      set_field(noEvents_1_1_1, FIX::EventDate{"LOCALMKTDATE_12406077"}, EvntGrp_NoEvents_53);
      FIX::EventPx EventPx_53;
      EventPx_53.setString("19030249");
set_field(noEvents_1_1_1, EventPx_53, EvntGrp_NoEvents_53);
      set_field(noEvents_1_1_1, FIX::EventText{"STRING_2080498144"}, EvntGrp_NoEvents_53);
      set_field(noEvents_1_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(1, 46, 10, 7, 1, 2015)}, EvntGrp_NoEvents_53);
      set_field(noEvents_1_1_1, FIX::EventType{8}, EvntGrp_NoEvents_53);
      all_values.push_back(EvntGrp_NoEvents_53);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_54;
      set_field(noEvents_1_1_2, FIX::EventDate{"LOCALMKTDATE_1098834570"}, EvntGrp_NoEvents_54);
      FIX::EventPx EventPx_54;
      EventPx_54.setString("4275553");
set_field(noEvents_1_1_2, EventPx_54, EvntGrp_NoEvents_54);
      set_field(noEvents_1_1_2, FIX::EventText{"STRING_1937747049"}, EvntGrp_NoEvents_54);
      set_field(noEvents_1_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(7, 28, 7, 10, 10, 2001)}, EvntGrp_NoEvents_54);
      set_field(noEvents_1_1_2, FIX::EventType{6}, EvntGrp_NoEvents_54);
      all_values.push_back(EvntGrp_NoEvents_54);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_45;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_1654073169"}, InstrumentParties_NoInstrumentParties_45);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_45);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{685324406}, InstrumentParties_NoInstrumentParties_45);
      all_values.push_back(InstrumentParties_NoInstrumentParties_45);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_987465084"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{1197497285}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_341955516"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{1131847455}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96;
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubID{"STRING_1209903362"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96);
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubIDType{97496833}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Email::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_46;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_1064861951"}, InstrumentParties_NoInstrumentParties_46);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_46);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{1996364042}, InstrumentParties_NoInstrumentParties_46);
      all_values.push_back(InstrumentParties_NoInstrumentParties_46);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_2019788053"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{175902342}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::Email::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_52;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_441648776"}, SecAltIDGrp_NoSecurityAltID_52);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_546589789"}, SecAltIDGrp_NoSecurityAltID_52);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_52);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_48;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_626319284"}, SecurityXML_48);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{869204079}, SecurityXML_48);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_336853191"}, SecurityXML_48);
    all_values.push_back(SecurityXML_48);
    all_compo_names.insert("...NoRelatedSym..");

    msg.addGroup(noRelatedSym_0_1);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Email::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_36;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_120020270"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{666969199}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1662914538"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{2079923372}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1214212216"}, InstrumentLeg_36);
    FIX::LegContractMultiplier LegContractMultiplier_36;
    LegContractMultiplier_36.setString("6613224");
set_field(noLegs_0_0, LegContractMultiplier_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{934609109}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1765182779"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_167911933"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1729171635"}, InstrumentLeg_36);
    FIX::LegCouponRate LegCouponRate_36;
    LegCouponRate_36.setString("35.370000");
set_field(noLegs_0_0, LegCouponRate_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_202929522"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_544885039"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1701000526}, InstrumentLeg_36);
    FIX::LegFactor LegFactor_36;
    LegFactor_36.setString("5629405");
set_field(noLegs_0_0, LegFactor_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{642381872}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_618378829"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1566863779"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_491262267"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_50213859"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1439168185"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_667164609"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1725182220"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1880816961"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_36);
    FIX::LegOptionRatio LegOptionRatio_36;
    LegOptionRatio_36.setString("2040178");
set_field(noLegs_0_0, LegOptionRatio_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_602537392"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1550607589"}, InstrumentLeg_36);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_36;
    LegPriceUnitOfMeasureQty_36.setString("5014619");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegProduct{722557662}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegPutOrCall{70093140}, InstrumentLeg_36);
    FIX::LegRatioQty LegRatioQty_36;
    LegRatioQty_36.setString("168928");
set_field(noLegs_0_0, LegRatioQty_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_654997386"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1284305356"}, InstrumentLeg_36);
    FIX::LegRepurchaseRate LegRepurchaseRate_36;
    LegRepurchaseRate_36.setString("52.900000");
set_field(noLegs_0_0, LegRepurchaseRate_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1589606496}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_902004488"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_846127223"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1171294483"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1205028025"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1049056746"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1740447555"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSide{'5'}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1593941785"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_36);
    FIX::LegStrikePrice LegStrikePrice_36;
    LegStrikePrice_36.setString("888400");
set_field(noLegs_0_0, LegStrikePrice_36, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1912343263"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_540385868"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_580102276"}, InstrumentLeg_36);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1962557122"}, InstrumentLeg_36);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_36;
    LegUnitOfMeasureQty_36.setString("19795540");
set_field(noLegs_0_0, LegUnitOfMeasureQty_36, InstrumentLeg_36);
    all_values.push_back(InstrumentLeg_36);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_75;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1540255694"}, LegSecAltIDGrp_NoLegSecurityAltID_75);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1712887366"}, LegSecAltIDGrp_NoLegSecurityAltID_75);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_75);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_76;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_313537636"}, LegSecAltIDGrp_NoLegSecurityAltID_76);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1744273551"}, LegSecAltIDGrp_NoLegSecurityAltID_76);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_76);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Email::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_37;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_167941111"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1864145225}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_98251891"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{890498773}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1934238366"}, InstrumentLeg_37);
    FIX::LegContractMultiplier LegContractMultiplier_37;
    LegContractMultiplier_37.setString("1151447");
set_field(noLegs_0_1, LegContractMultiplier_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1545496160}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1071060074"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_793360060"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_987619008"}, InstrumentLeg_37);
    FIX::LegCouponRate LegCouponRate_37;
    LegCouponRate_37.setString("45.620000");
set_field(noLegs_0_1, LegCouponRate_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1639487283"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_541060381"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1751877398}, InstrumentLeg_37);
    FIX::LegFactor LegFactor_37;
    LegFactor_37.setString("15886741");
set_field(noLegs_0_1, LegFactor_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{2135002166}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_898358184"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_562196228"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_76358528"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_663217799"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1102582096"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_656460804"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_478291273"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_934652501"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_37);
    FIX::LegOptionRatio LegOptionRatio_37;
    LegOptionRatio_37.setString("20185469");
set_field(noLegs_0_1, LegOptionRatio_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_500056220"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_69781678"}, InstrumentLeg_37);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_37;
    LegPriceUnitOfMeasureQty_37.setString("16153368");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegProduct{667997331}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1933926903}, InstrumentLeg_37);
    FIX::LegRatioQty LegRatioQty_37;
    LegRatioQty_37.setString("17135887");
set_field(noLegs_0_1, LegRatioQty_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1558496104"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1720681621"}, InstrumentLeg_37);
    FIX::LegRepurchaseRate LegRepurchaseRate_37;
    LegRepurchaseRate_37.setString("35.310000");
set_field(noLegs_0_1, LegRepurchaseRate_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{956508616}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_644258048"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_474609943"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1944127624"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_469838962"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_2114097226"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1955557468"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_507673960"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_37);
    FIX::LegStrikePrice LegStrikePrice_37;
    LegStrikePrice_37.setString("4951924");
set_field(noLegs_0_1, LegStrikePrice_37, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_310825754"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1503834623"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_571551006"}, InstrumentLeg_37);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_974043553"}, InstrumentLeg_37);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_37;
    LegUnitOfMeasureQty_37.setString("4589330");
set_field(noLegs_0_1, LegUnitOfMeasureQty_37, InstrumentLeg_37);
    all_values.push_back(InstrumentLeg_37);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_77;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1452334826"}, LegSecAltIDGrp_NoLegSecurityAltID_77);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1393585573"}, LegSecAltIDGrp_NoLegSecurityAltID_77);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_77);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_78;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_984255853"}, LegSecAltIDGrp_NoLegSecurityAltID_78);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1323398146"}, LegSecAltIDGrp_NoLegSecurityAltID_78);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_78);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::Email::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_38;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_1893641793"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{1054037531}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_791251368"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{414155476}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_840480786"}, InstrumentLeg_38);
    FIX::LegContractMultiplier LegContractMultiplier_38;
    LegContractMultiplier_38.setString("3573564");
set_field(noLegs_0_2, LegContractMultiplier_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1972651580}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_413678760"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_38606365"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_781676549"}, InstrumentLeg_38);
    FIX::LegCouponRate LegCouponRate_38;
    LegCouponRate_38.setString("68.080000");
set_field(noLegs_0_2, LegCouponRate_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_513216308"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegCurrency{"USD"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_479829886"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{386394345}, InstrumentLeg_38);
    FIX::LegFactor LegFactor_38;
    LegFactor_38.setString("8807400");
set_field(noLegs_0_2, LegFactor_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{987503846}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_1946345564"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1822378419"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_1482696325"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_109687670"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1178729394"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_2054247331"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1083731224"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1637662466"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_38);
    FIX::LegOptionRatio LegOptionRatio_38;
    LegOptionRatio_38.setString("3885824");
set_field(noLegs_0_2, LegOptionRatio_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_883764391"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_2119031347"}, InstrumentLeg_38);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_38;
    LegPriceUnitOfMeasureQty_38.setString("17119805");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegProduct{629922536}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegPutOrCall{1025585230}, InstrumentLeg_38);
    FIX::LegRatioQty LegRatioQty_38;
    LegRatioQty_38.setString("3557482");
set_field(noLegs_0_2, LegRatioQty_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1044078012"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1866066017"}, InstrumentLeg_38);
    FIX::LegRepurchaseRate LegRepurchaseRate_38;
    LegRepurchaseRate_38.setString("47.510000");
set_field(noLegs_0_2, LegRepurchaseRate_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{869245944}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_132261129"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_751711116"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1650922493"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_1190197937"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1264927424"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_81759371"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSide{'5'}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1744757310"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_38);
    FIX::LegStrikePrice LegStrikePrice_38;
    LegStrikePrice_38.setString("5847775");
set_field(noLegs_0_2, LegStrikePrice_38, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_267015632"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1126124856"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_2067473834"}, InstrumentLeg_38);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_376703303"}, InstrumentLeg_38);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_38;
    LegUnitOfMeasureQty_38.setString("1573706");
set_field(noLegs_0_2, LegUnitOfMeasureQty_38, InstrumentLeg_38);
    all_values.push_back(InstrumentLeg_38);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_79;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1460434527"}, LegSecAltIDGrp_NoLegSecurityAltID_79);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_1795033068"}, LegSecAltIDGrp_NoLegSecurityAltID_79);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_79);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::Email::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_80;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_961529364"}, LegSecAltIDGrp_NoLegSecurityAltID_80);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_1849016929"}, LegSecAltIDGrp_NoLegSecurityAltID_80);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_80);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_0;
    set_field(noLinesOfText_0_0, FIX::EncodedText{"DATA_933077063"}, LinesOfTextGrp_NoLinesOfText_0);
    set_field(noLinesOfText_0_0, FIX::EncodedTextLen{1413513830}, LinesOfTextGrp_NoLinesOfText_0);
    set_field(noLinesOfText_0_0, FIX::Text{"STRING_1161236347"}, LinesOfTextGrp_NoLinesOfText_0);
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_0);
    all_compo_names.insert("...NoLinesOfText");

    msg.addGroup(noLinesOfText_0_0);
  }
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_1;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_1;
    set_field(noLinesOfText_0_1, FIX::EncodedText{"DATA_1958662294"}, LinesOfTextGrp_NoLinesOfText_1);
    set_field(noLinesOfText_0_1, FIX::EncodedTextLen{1769262099}, LinesOfTextGrp_NoLinesOfText_1);
    set_field(noLinesOfText_0_1, FIX::Text{"STRING_57830711"}, LinesOfTextGrp_NoLinesOfText_1);
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_1);
    all_compo_names.insert("...NoLinesOfText");

    msg.addGroup(noLinesOfText_0_1);
  }
  {
    FIX50SP2::Email::NoLinesOfText noLinesOfText_0_2;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_2;
    set_field(noLinesOfText_0_2, FIX::EncodedText{"DATA_1677244663"}, LinesOfTextGrp_NoLinesOfText_2);
    set_field(noLinesOfText_0_2, FIX::EncodedTextLen{334883202}, LinesOfTextGrp_NoLinesOfText_2);
    set_field(noLinesOfText_0_2, FIX::Text{"STRING_927076656"}, LinesOfTextGrp_NoLinesOfText_2);
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
    set_field(noRoutingIDs_0_0, FIX::RoutingID{"STRING_1086594318"}, RoutingGrp_NoRoutingIDs_0);
    set_field(noRoutingIDs_0_0, FIX::RoutingType{2}, RoutingGrp_NoRoutingIDs_0);
    all_values.push_back(RoutingGrp_NoRoutingIDs_0);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::Email::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_1;
    set_field(noRoutingIDs_0_1, FIX::RoutingID{"STRING_852220081"}, RoutingGrp_NoRoutingIDs_1);
    set_field(noRoutingIDs_0_1, FIX::RoutingType{3}, RoutingGrp_NoRoutingIDs_1);
    all_values.push_back(RoutingGrp_NoRoutingIDs_1);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_31;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1422710140"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1948795404}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_980428589"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{726456577}, UnderlyingInstrument_31);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_31;
    UnderlyingAdjustedQuantity_31.setString("3860892");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_31, UnderlyingInstrument_31);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_31;
    UnderlyingAllocationPercent_31.setString("42.210000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_31, UnderlyingInstrument_31);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_31;
    UnderlyingAttachmentPoint_31.setString("14.330000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_306079451"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1624147524"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_2009952035"}, UnderlyingInstrument_31);
    FIX::UnderlyingCapValue UnderlyingCapValue_31;
    UnderlyingCapValue_31.setString("1328333");
set_field(noUnderlyings_0_0, UnderlyingCapValue_31, UnderlyingInstrument_31);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_31;
    UnderlyingCashAmount_31.setString("9370984");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_31);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_31;
    UnderlyingContractMultiplier_31.setString("10943626");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{638631685}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_41331619"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2027439748"}, UnderlyingInstrument_31);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_31;
    UnderlyingCouponRate_31.setString("55.150000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1202567967"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_31);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_31;
    UnderlyingCurrentValue_31.setString("12603986");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_31, UnderlyingInstrument_31);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_31;
    UnderlyingDetachmentPoint_31.setString("94.090000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_31, UnderlyingInstrument_31);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_31;
    UnderlyingDirtyPrice_31.setString("20088071");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_31, UnderlyingInstrument_31);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_31;
    UnderlyingEndPrice_31.setString("399916");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_31, UnderlyingInstrument_31);
    FIX::UnderlyingEndValue UnderlyingEndValue_31;
    UnderlyingEndValue_31.setString("10304015");
set_field(noUnderlyings_0_0, UnderlyingEndValue_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{947917838}, UnderlyingInstrument_31);
    FIX::UnderlyingFXRate UnderlyingFXRate_31;
    UnderlyingFXRate_31.setString("4705071");
set_field(noUnderlyings_0_0, UnderlyingFXRate_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_31);
    FIX::UnderlyingFactor UnderlyingFactor_31;
    UnderlyingFactor_31.setString("11519559");
set_field(noUnderlyings_0_0, UnderlyingFactor_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{982782060}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1157848127"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_953267688"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1963210649"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1884304704"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1339356954"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1063171223"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1589402489"}, UnderlyingInstrument_31);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_31;
    UnderlyingNotionalPercentageOutstanding_31.setString("64.050000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_31);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_31;
    UnderlyingOriginalNotionalPercentageOutstanding_31.setString("8.760000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1778269726"}, UnderlyingInstrument_31);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_31;
    UnderlyingPriceUnitOfMeasureQty_31.setString("14769335");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{961888684}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{725148763}, UnderlyingInstrument_31);
    FIX::UnderlyingPx UnderlyingPx_31;
    UnderlyingPx_31.setString("21155651");
set_field(noUnderlyings_0_0, UnderlyingPx_31, UnderlyingInstrument_31);
    FIX::UnderlyingQty UnderlyingQty_31;
    UnderlyingQty_31.setString("10032203");
set_field(noUnderlyings_0_0, UnderlyingQty_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_605104864"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2020227055"}, UnderlyingInstrument_31);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_31;
    UnderlyingRepurchaseRate_31.setString("46.230000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{296239610}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1546667373"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1318703301"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1664619020"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1407990893"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1358694988"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_547536925"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_208425083"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1829202176"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_282674912"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_31);
    FIX::UnderlyingStartValue UnderlyingStartValue_31;
    UnderlyingStartValue_31.setString("6645005");
set_field(noUnderlyings_0_0, UnderlyingStartValue_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1440523039"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_31);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_31;
    UnderlyingStrikePrice_31.setString("11773440");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_31, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1505522009"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1543398813"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_619262936"}, UnderlyingInstrument_31);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1003474767"}, UnderlyingInstrument_31);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_31;
    UnderlyingUnitOfMeasureQty_31.setString("20832339");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_31, UnderlyingInstrument_31);
    all_values.push_back(UnderlyingInstrument_31);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_61;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_634260845"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_61);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1412683767"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_61);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_61);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_62;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_885538849"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1359409609"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_54;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1888759153"}, UnderlyingStipulations_NoUnderlyingStips_54);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1964514473"}, UnderlyingStipulations_NoUnderlyingStips_54);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_54);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_55;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1253508714"}, UnderlyingStipulations_NoUnderlyingStips_55);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1947063776"}, UnderlyingStipulations_NoUnderlyingStips_55);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_55);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_66;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_652692439"}, UndlyInstrumentParties_NoUndlyInstrumentParties_66);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_66);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1777889455}, UndlyInstrumentParties_NoUndlyInstrumentParties_66);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_66);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_329494769"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{177942733}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_67;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_121624767"}, UndlyInstrumentParties_NoUndlyInstrumentParties_67);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_67);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{460617645}, UndlyInstrumentParties_NoUndlyInstrumentParties_67);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_67);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_675713886"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1901140684}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1648170838"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1155941476}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_68;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_931001131"}, UndlyInstrumentParties_NoUndlyInstrumentParties_68);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_68);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{551856641}, UndlyInstrumentParties_NoUndlyInstrumentParties_68);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_68);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2009683966"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{487606905}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_32;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1473914231"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{496461164}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1900290673"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{211969432}, UnderlyingInstrument_32);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_32;
    UnderlyingAdjustedQuantity_32.setString("18558707");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_32, UnderlyingInstrument_32);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_32;
    UnderlyingAllocationPercent_32.setString("23.320000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_32, UnderlyingInstrument_32);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_32;
    UnderlyingAttachmentPoint_32.setString("85.850000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1672901598"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_239597399"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1900308713"}, UnderlyingInstrument_32);
    FIX::UnderlyingCapValue UnderlyingCapValue_32;
    UnderlyingCapValue_32.setString("17861720");
set_field(noUnderlyings_0_1, UnderlyingCapValue_32, UnderlyingInstrument_32);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_32;
    UnderlyingCashAmount_32.setString("8922898");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_32);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_32;
    UnderlyingContractMultiplier_32.setString("14165778");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{805489523}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1200603264"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1594520574"}, UnderlyingInstrument_32);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_32;
    UnderlyingCouponRate_32.setString("42.900000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1211816562"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_32);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_32;
    UnderlyingCurrentValue_32.setString("18875304");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_32, UnderlyingInstrument_32);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_32;
    UnderlyingDetachmentPoint_32.setString("52.550000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_32, UnderlyingInstrument_32);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_32;
    UnderlyingDirtyPrice_32.setString("19098072");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_32, UnderlyingInstrument_32);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_32;
    UnderlyingEndPrice_32.setString("8959882");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_32, UnderlyingInstrument_32);
    FIX::UnderlyingEndValue UnderlyingEndValue_32;
    UnderlyingEndValue_32.setString("5923127");
set_field(noUnderlyings_0_1, UnderlyingEndValue_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{768532814}, UnderlyingInstrument_32);
    FIX::UnderlyingFXRate UnderlyingFXRate_32;
    UnderlyingFXRate_32.setString("14478449");
set_field(noUnderlyings_0_1, UnderlyingFXRate_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_32);
    FIX::UnderlyingFactor UnderlyingFactor_32;
    UnderlyingFactor_32.setString("6307331");
set_field(noUnderlyings_0_1, UnderlyingFactor_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1935451822}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1469007388"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1127194297"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1688258847"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1680976821"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_835581422"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_674347532"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1634221758"}, UnderlyingInstrument_32);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_32;
    UnderlyingNotionalPercentageOutstanding_32.setString("93.720000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_32);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_32;
    UnderlyingOriginalNotionalPercentageOutstanding_32.setString("68.240000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2147171405"}, UnderlyingInstrument_32);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_32;
    UnderlyingPriceUnitOfMeasureQty_32.setString("18062347");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{110671671}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1416265598}, UnderlyingInstrument_32);
    FIX::UnderlyingPx UnderlyingPx_32;
    UnderlyingPx_32.setString("4642406");
set_field(noUnderlyings_0_1, UnderlyingPx_32, UnderlyingInstrument_32);
    FIX::UnderlyingQty UnderlyingQty_32;
    UnderlyingQty_32.setString("13112749");
set_field(noUnderlyings_0_1, UnderlyingQty_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_863302524"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1391354935"}, UnderlyingInstrument_32);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_32;
    UnderlyingRepurchaseRate_32.setString("78.490000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{770957095}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1652991360"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_115654649"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_432268702"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1415314975"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1011642925"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1024581440"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_36364141"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_312004194"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1019674597"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_32);
    FIX::UnderlyingStartValue UnderlyingStartValue_32;
    UnderlyingStartValue_32.setString("999723");
set_field(noUnderlyings_0_1, UnderlyingStartValue_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_341198338"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_32);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_32;
    UnderlyingStrikePrice_32.setString("20221751");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_32, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_482389345"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_315095100"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1508913269"}, UnderlyingInstrument_32);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_843388717"}, UnderlyingInstrument_32);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_32;
    UnderlyingUnitOfMeasureQty_32.setString("12290400");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_32, UnderlyingInstrument_32);
    all_values.push_back(UnderlyingInstrument_32);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_63;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_843076475"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_63);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_887791153"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_63);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_63);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_64;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_859148116"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_64);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_111858425"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_64);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_64);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_56;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_22939404"}, UnderlyingStipulations_NoUnderlyingStips_56);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_975160950"}, UnderlyingStipulations_NoUnderlyingStips_56);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_56);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_57;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_595903084"}, UnderlyingStipulations_NoUnderlyingStips_57);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_398547253"}, UnderlyingStipulations_NoUnderlyingStips_57);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_57);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_58;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_1746118045"}, UnderlyingStipulations_NoUnderlyingStips_58);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_101410796"}, UnderlyingStipulations_NoUnderlyingStips_58);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_58);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_69;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_30903100"}, UndlyInstrumentParties_NoUndlyInstrumentParties_69);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_69);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1525844828}, UndlyInstrumentParties_NoUndlyInstrumentParties_69);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_69);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1553089913"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1837849023}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_70;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2075159138"}, UndlyInstrumentParties_NoUndlyInstrumentParties_70);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_70);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1937821392}, UndlyInstrumentParties_NoUndlyInstrumentParties_70);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_70);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1866995111"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1578568960}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_143565339"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{201900808}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::Email::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_33;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1893664061"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1652478608}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1045289526"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{975220444}, UnderlyingInstrument_33);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_33;
    UnderlyingAdjustedQuantity_33.setString("2534714");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_33, UnderlyingInstrument_33);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_33;
    UnderlyingAllocationPercent_33.setString("60.010000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_33, UnderlyingInstrument_33);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_33;
    UnderlyingAttachmentPoint_33.setString("15.970000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1112619522"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_2000224426"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1067559747"}, UnderlyingInstrument_33);
    FIX::UnderlyingCapValue UnderlyingCapValue_33;
    UnderlyingCapValue_33.setString("11355589");
set_field(noUnderlyings_0_2, UnderlyingCapValue_33, UnderlyingInstrument_33);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_33;
    UnderlyingCashAmount_33.setString("8279017");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_33);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_33;
    UnderlyingContractMultiplier_33.setString("15341061");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{426536126}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1764873628"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2048308083"}, UnderlyingInstrument_33);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_33;
    UnderlyingCouponRate_33.setString("92.260000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1134115751"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_33);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_33;
    UnderlyingCurrentValue_33.setString("5397220");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_33, UnderlyingInstrument_33);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_33;
    UnderlyingDetachmentPoint_33.setString("46.380000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_33, UnderlyingInstrument_33);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_33;
    UnderlyingDirtyPrice_33.setString("14405992");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_33, UnderlyingInstrument_33);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_33;
    UnderlyingEndPrice_33.setString("6124255");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_33, UnderlyingInstrument_33);
    FIX::UnderlyingEndValue UnderlyingEndValue_33;
    UnderlyingEndValue_33.setString("9073723");
set_field(noUnderlyings_0_2, UnderlyingEndValue_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1709473084}, UnderlyingInstrument_33);
    FIX::UnderlyingFXRate UnderlyingFXRate_33;
    UnderlyingFXRate_33.setString("3319370");
set_field(noUnderlyings_0_2, UnderlyingFXRate_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_33);
    FIX::UnderlyingFactor UnderlyingFactor_33;
    UnderlyingFactor_33.setString("18530384");
set_field(noUnderlyings_0_2, UnderlyingFactor_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{533837827}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_84638108"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1358033384"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_1579127353"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_1059858552"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1611504790"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1320009706"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_775386502"}, UnderlyingInstrument_33);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_33;
    UnderlyingNotionalPercentageOutstanding_33.setString("6.640000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_33);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_33;
    UnderlyingOriginalNotionalPercentageOutstanding_33.setString("62.490000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1712199591"}, UnderlyingInstrument_33);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_33;
    UnderlyingPriceUnitOfMeasureQty_33.setString("20006522");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{1358925432}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1098822123}, UnderlyingInstrument_33);
    FIX::UnderlyingPx UnderlyingPx_33;
    UnderlyingPx_33.setString("2797046");
set_field(noUnderlyings_0_2, UnderlyingPx_33, UnderlyingInstrument_33);
    FIX::UnderlyingQty UnderlyingQty_33;
    UnderlyingQty_33.setString("9763154");
set_field(noUnderlyings_0_2, UnderlyingQty_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_999646558"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_737143917"}, UnderlyingInstrument_33);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_33;
    UnderlyingRepurchaseRate_33.setString("11.640000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{278832173}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_102584036"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_502669532"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1395866812"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1543183292"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1115095088"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_155755546"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1105172729"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1447032107"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_494213241"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_33);
    FIX::UnderlyingStartValue UnderlyingStartValue_33;
    UnderlyingStartValue_33.setString("19808699");
set_field(noUnderlyings_0_2, UnderlyingStartValue_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_578851349"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_33);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_33;
    UnderlyingStrikePrice_33.setString("16387099");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_33, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1632782030"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_585039699"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_266612756"}, UnderlyingInstrument_33);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_61939047"}, UnderlyingInstrument_33);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_33;
    UnderlyingUnitOfMeasureQty_33.setString("17577901");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_33, UnderlyingInstrument_33);
    all_values.push_back(UnderlyingInstrument_33);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_65;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1774138638"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_65);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1610958749"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_65);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_65);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_59;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_725477113"}, UnderlyingStipulations_NoUnderlyingStips_59);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1890663441"}, UnderlyingStipulations_NoUnderlyingStips_59);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_59);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_60;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_149832554"}, UnderlyingStipulations_NoUnderlyingStips_60);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1725123671"}, UnderlyingStipulations_NoUnderlyingStips_60);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_60);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_71;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_112780070"}, UndlyInstrumentParties_NoUndlyInstrumentParties_71);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_71);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{582907746}, UndlyInstrumentParties_NoUndlyInstrumentParties_71);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_71);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1252339008"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2126091039}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1730544691"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1408094555}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_72;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1083780120"}, UndlyInstrumentParties_NoUndlyInstrumentParties_72);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_72);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{1902307796}, UndlyInstrumentParties_NoUndlyInstrumentParties_72);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_72);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_863479437"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{333675498}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::Email::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1915784865"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{128509430}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // header
  multiset<string> header_30;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_0"}, header_30);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1401083247"}, header_30);
  set_header_field(msg.getHeader(), FIX::BodyLength{713549129}, header_30);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_91514508"}, header_30);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1463022294"}, header_30);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_323855665"}, header_30);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_53589865"}, header_30);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1089677284}, header_30);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_30);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1374590654}, header_30);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1815154397"}, header_30);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1677994207"}, header_30);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1524423208"}, header_30);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(22, 18, 17, 0, 10, 2003)}, header_30);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_30);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_30);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1762216532"}, header_30);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1656129527}, header_30);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_718323426"}, header_30);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1517040681"}, header_30);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1403153504"}, header_30);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(3, 21, 54, 15, 5, 2015)}, header_30);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1767132439"}, header_30);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1888076615"}, header_30);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_600233440"}, header_30);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1820722304"}, header_30);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{830270251}, header_30);
  all_values.push_back(header_30);
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
