#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::News msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> News_0;
  set_field(msg, FIX::EncodedHeadline{"DATA_1991656575"}, News_0);
  set_field(msg, FIX::EncodedHeadlineLen{1122633565}, News_0);
  set_field(msg, FIX::Headline{"STRING_2004849453"}, News_0);
  set_field(msg, FIX::LanguageCode{"FR"}, News_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1844474687"}, News_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_231759156"}, News_0);
  set_field(msg, FIX::NewsCategory{2}, News_0);
  set_field(msg, FIX::NewsID{"STRING_1561617338"}, News_0);
  set_field(msg, FIX::OrigTime{FIX::UTCTIMESTAMP(14, 12, 20, 9, 5, 2008)}, News_0);
  set_field(msg, FIX::RawData{"DATA_1835842200"}, News_0);
  set_field(msg, FIX::RawDataLength{830353198}, News_0);
  set_field(msg, FIX::URLLink{"STRING_2063146866"}, News_0);
  set_field(msg, FIX::Urgency{'2'}, News_0);
  all_values.push_back(News_0);

  all_compo_names.insert("News");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_10;
  set_field(msg, FIX::ApplID{"STRING_944328704"}, ApplicationSequenceControl_10);
  set_field(msg, FIX::ApplLastSeqNum{1875597432}, ApplicationSequenceControl_10);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_10);
  set_field(msg, FIX::ApplSeqNum{26742343}, ApplicationSequenceControl_10);
  all_values.push_back(ApplicationSequenceControl_10);
  all_compo_names.insert(".");

  // InstrmtGrp
  // Group InstrmtGrp.NoRelatedSym
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_0;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_53;
    FIX::AttachmentPoint AttachmentPoint_53;
    AttachmentPoint_53.setString("11.100000");
set_field(noRelatedSym_0_0, AttachmentPoint_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_1595590809"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_825524204"}, Instrument_53);
    FIX::CapPrice CapPrice_53;
    CapPrice_53.setString("19870769");
set_field(noRelatedSym_0_0, CapPrice_53, Instrument_53);
    FIX::ContractMultiplier ContractMultiplier_53;
    ContractMultiplier_53.setString("14977357");
set_field(noRelatedSym_0_0, ContractMultiplier_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{0}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1831249921"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_472885651"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1977134032"}, Instrument_53);
    FIX::CouponRate CouponRate_53;
    CouponRate_53.setString("87.250000");
set_field(noRelatedSym_0_0, CouponRate_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_169876690"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_61409541"}, Instrument_53);
    FIX::DetachmentPoint DetachmentPoint_53;
    DetachmentPoint_53.setString("22.990000");
set_field(noRelatedSym_0_0, DetachmentPoint_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_1731494029"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{976534643}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_2110385689"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{875115773}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{2}, Instrument_53);
    FIX::Factor Factor_53;
    Factor_53.setString("16437087");
set_field(noRelatedSym_0_0, Factor_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_53);
    FIX::FloorPrice FloorPrice_53;
    FloorPrice_53.setString("13320672");
set_field(noRelatedSym_0_0, FloorPrice_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{4}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_1079992734"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_399942660"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_808106518"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1120657302"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_285059751"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_2131548412"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_2022275813"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_1894431516"}, Instrument_53);
    FIX::MinPriceIncrement MinPriceIncrement_53;
    MinPriceIncrement_53.setString("8095889");
set_field(noRelatedSym_0_0, MinPriceIncrement_53, Instrument_53);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_53;
    MinPriceIncrementAmount_53.setString("18618691");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{1244683602}, Instrument_53);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_53;
    NotionalPercentageOutstanding_53.setString("35.480000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_53);
    FIX::OptPayoutAmount OptPayoutAmount_53;
    OptPayoutAmount_53.setString("17175692");
set_field(noRelatedSym_0_0, OptPayoutAmount_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{3}, Instrument_53);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_53;
    OriginalNotionalPercentageOutstanding_53.setString("5.100000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1887445943"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{672933473}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1471456324"}, Instrument_53);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_53;
    PriceUnitOfMeasureQty_53.setString("16494681");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::Product{7}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_199088449"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{0}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_805429934"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_971832855"}, Instrument_53);
    FIX::RepurchaseRate RepurchaseRate_53;
    RepurchaseRate_53.setString("25.400000");
set_field(noRelatedSym_0_0, RepurchaseRate_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{2137497217}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_XR"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_69051626"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1111010486"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_827389471"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_877158145"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_J"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_1162217896"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_CL"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SD"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_877837873"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_843252151"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"EUR"}, Instrument_53);
    FIX::StrikeMultiplier StrikeMultiplier_53;
    StrikeMultiplier_53.setString("2414039");
set_field(noRelatedSym_0_0, StrikeMultiplier_53, Instrument_53);
    FIX::StrikePrice StrikePrice_53;
    StrikePrice_53.setString("17239349");
set_field(noRelatedSym_0_0, StrikePrice_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{1}, Instrument_53);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_53;
    StrikePriceBoundaryPrecision_53.setString("44.450000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_53);
    FIX::StrikeValue StrikeValue_53;
    StrikeValue_53.setString("7966851");
set_field(noRelatedSym_0_0, StrikeValue_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_2065617255"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Wk"}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_53);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_53;
    UnitOfMeasureQty_53.setString("2708826");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_53, Instrument_53);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_53);
    all_values.push_back(Instrument_53);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_104;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_104);
      FIX::ComplexEventPrice ComplexEventPrice_104;
      ComplexEventPrice_104.setString("20227819");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_104, ComplexEvents_NoComplexEvents_104);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_104);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_104;
      ComplexEventPriceBoundaryPrecision_104.setString("68.390000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_104, ComplexEvents_NoComplexEvents_104);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_104);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_104);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_104;
      ComplexOptPayoutAmount_104.setString("2061513");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_104, ComplexEvents_NoComplexEvents_104);
      all_values.push_back(ComplexEvents_NoComplexEvents_104);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_206;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 44, 50, 2, 10, 2015)}, ComplexEventDates_NoComplexEventDates_206);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 8, 21, 7, 3, 2000)}, ComplexEventDates_NoComplexEventDates_206);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_206);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_412;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 54, 19)}, ComplexEventTimes_NoComplexEventTimes_412);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 23, 50)}, ComplexEventTimes_NoComplexEventTimes_412);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_412);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_413;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 2, 11)}, ComplexEventTimes_NoComplexEventTimes_413);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 48, 47)}, ComplexEventTimes_NoComplexEventTimes_413);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_413);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_414;
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 23, 17)}, ComplexEventTimes_NoComplexEventTimes_414);
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 30, 52)}, ComplexEventTimes_NoComplexEventTimes_414);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_414);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_207;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 5, 10, 16, 10, 2006)}, ComplexEventDates_NoComplexEventDates_207);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 23, 16, 8, 7, 2001)}, ComplexEventDates_NoComplexEventDates_207);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_207);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_415;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 36, 25)}, ComplexEventTimes_NoComplexEventTimes_415);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 5, 47)}, ComplexEventTimes_NoComplexEventTimes_415);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_415);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_416;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 11, 49)}, ComplexEventTimes_NoComplexEventTimes_416);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 11, 25)}, ComplexEventTimes_NoComplexEventTimes_416);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_416);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_208;
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 22, 20, 18, 9, 2006)}, ComplexEventDates_NoComplexEventDates_208);
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 3, 48, 2, 10, 2000)}, ComplexEventDates_NoComplexEventDates_208);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_208);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_417;
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 33, 13)}, ComplexEventTimes_NoComplexEventTimes_417);
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 18, 19)}, ComplexEventTimes_NoComplexEventTimes_417);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_417);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_418;
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 22, 0)}, ComplexEventTimes_NoComplexEventTimes_418);
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 12, 40)}, ComplexEventTimes_NoComplexEventTimes_418);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_418);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_116;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_311156814"}, EvntGrp_NoEvents_116);
      FIX::EventPx EventPx_116;
      EventPx_116.setString("4762322");
set_field(noEvents_0_1_0, EventPx_116, EvntGrp_NoEvents_116);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1706329440"}, EvntGrp_NoEvents_116);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(14, 40, 52, 4, 9, 2015)}, EvntGrp_NoEvents_116);
      set_field(noEvents_0_1_0, FIX::EventType{19}, EvntGrp_NoEvents_116);
      all_values.push_back(EvntGrp_NoEvents_116);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_102;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1463113725"}, InstrumentParties_NoInstrumentParties_102);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_102);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1177253037}, InstrumentParties_NoInstrumentParties_102);
      all_values.push_back(InstrumentParties_NoInstrumentParties_102);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_2091631396"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{530171702}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_109;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_163235926"}, SecAltIDGrp_NoSecurityAltID_109);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_434711172"}, SecAltIDGrp_NoSecurityAltID_109);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_109);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_110;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_1100198392"}, SecAltIDGrp_NoSecurityAltID_110);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_87480177"}, SecAltIDGrp_NoSecurityAltID_110);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_110);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_111;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_1925639821"}, SecAltIDGrp_NoSecurityAltID_111);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_315846487"}, SecAltIDGrp_NoSecurityAltID_111);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_111);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_106;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_964049158"}, SecurityXML_106);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{1872810076}, SecurityXML_106);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1943212725"}, SecurityXML_106);
    all_values.push_back(SecurityXML_106);
    all_compo_names.insert("...NoRelatedSym..");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::News::NoRelatedSym noRelatedSym_0_1;
    // InstrmtGrp.NoRelatedSym
    // Instrument
    multiset<string> Instrument_54;
    FIX::AttachmentPoint AttachmentPoint_54;
    AttachmentPoint_54.setString("77.300000");
set_field(noRelatedSym_0_1, AttachmentPoint_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1577458728"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::CPProgram{2}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_53670896"}, Instrument_54);
    FIX::CapPrice CapPrice_54;
    CapPrice_54.setString("20536909");
set_field(noRelatedSym_0_1, CapPrice_54, Instrument_54);
    FIX::ContractMultiplier ContractMultiplier_54;
    ContractMultiplier_54.setString("12613151");
set_field(noRelatedSym_0_1, ContractMultiplier_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{1}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_1197410329"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_441725929"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_883498629"}, Instrument_54);
    FIX::CouponRate CouponRate_54;
    CouponRate_54.setString("96.290000");
set_field(noRelatedSym_0_1, CouponRate_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_1813591533"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_1551040002"}, Instrument_54);
    FIX::DetachmentPoint DetachmentPoint_54;
    DetachmentPoint_54.setString("47.200000");
set_field(noRelatedSym_0_1, DetachmentPoint_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_228180275"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{866670079}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_1660676703"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{1405433312}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{1}, Instrument_54);
    FIX::Factor Factor_54;
    Factor_54.setString("16048244");
set_field(noRelatedSym_0_1, Factor_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{false}, Instrument_54);
    FIX::FloorPrice FloorPrice_54;
    FloorPrice_54.setString("17680603");
set_field(noRelatedSym_0_1, FloorPrice_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{3}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_2129792813"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_988712"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_298155652"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_672106065"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::ListMethod{0}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_93884729"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_414620147"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_1303773868"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_1796354094"}, Instrument_54);
    FIX::MinPriceIncrement MinPriceIncrement_54;
    MinPriceIncrement_54.setString("4682910");
set_field(noRelatedSym_0_1, MinPriceIncrement_54, Instrument_54);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_54;
    MinPriceIncrementAmount_54.setString("12099811");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{910185603}, Instrument_54);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_54;
    NotionalPercentageOutstanding_54.setString("38.790000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'2'}, Instrument_54);
    FIX::OptPayoutAmount OptPayoutAmount_54;
    OptPayoutAmount_54.setString("13519115");
set_field(noRelatedSym_0_1, OptPayoutAmount_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{3}, Instrument_54);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_54;
    OriginalNotionalPercentageOutstanding_54.setString("74.930000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_1018019418"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{799298862}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_1246199693"}, Instrument_54);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_54;
    PriceUnitOfMeasureQty_54.setString("16659689");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::Product{9}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_504149357"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{1}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_275626071"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_292270723"}, Instrument_54);
    FIX::RepurchaseRate RepurchaseRate_54;
    RepurchaseRate_54.setString("50.540000");
set_field(noRelatedSym_0_1, RepurchaseRate_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{2043686448}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_MM"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_45014220"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_1751743355"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_516091974"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_343169872"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_D"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_1"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_437054602"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_TAXA"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SB"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'C'}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_1159276962"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_608678516"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"USD"}, Instrument_54);
    FIX::StrikeMultiplier StrikeMultiplier_54;
    StrikeMultiplier_54.setString("8685863");
set_field(noRelatedSym_0_1, StrikeMultiplier_54, Instrument_54);
    FIX::StrikePrice StrikePrice_54;
    StrikePrice_54.setString("2005385");
set_field(noRelatedSym_0_1, StrikePrice_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{3}, Instrument_54);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_54;
    StrikePriceBoundaryPrecision_54.setString("38.730000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{4}, Instrument_54);
    FIX::StrikeValue StrikeValue_54;
    StrikeValue_54.setString("17190785");
set_field(noRelatedSym_0_1, StrikeValue_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_1302742438"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_WI"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_Yr"}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_54);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_54;
    UnitOfMeasureQty_54.setString("2706744");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_54, Instrument_54);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_54);
    all_values.push_back(Instrument_54);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_105;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_105);
      FIX::ComplexEventPrice ComplexEventPrice_105;
      ComplexEventPrice_105.setString("1453729");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_105, ComplexEvents_NoComplexEvents_105);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_105);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_105;
      ComplexEventPriceBoundaryPrecision_105.setString("37.660000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_105, ComplexEvents_NoComplexEvents_105);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_105);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_105);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_105;
      ComplexOptPayoutAmount_105.setString("7215636");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_105, ComplexEvents_NoComplexEvents_105);
      all_values.push_back(ComplexEvents_NoComplexEvents_105);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_209;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 49, 46, 17, 8, 2016)}, ComplexEventDates_NoComplexEventDates_209);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 14, 10, 20, 8, 2008)}, ComplexEventDates_NoComplexEventDates_209);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_209);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_419;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 15, 47)}, ComplexEventTimes_NoComplexEventTimes_419);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 16, 39)}, ComplexEventTimes_NoComplexEventTimes_419);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_419);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_420;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 55, 20)}, ComplexEventTimes_NoComplexEventTimes_420);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 51, 52)}, ComplexEventTimes_NoComplexEventTimes_420);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_420);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_421;
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 41, 27)}, ComplexEventTimes_NoComplexEventTimes_421);
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 2, 7)}, ComplexEventTimes_NoComplexEventTimes_421);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_421);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_210;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 18, 42, 16, 1, 2015)}, ComplexEventDates_NoComplexEventDates_210);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 55, 25, 16, 11, 2015)}, ComplexEventDates_NoComplexEventDates_210);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_210);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_422;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 59, 21)}, ComplexEventTimes_NoComplexEventTimes_422);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 12, 55)}, ComplexEventTimes_NoComplexEventTimes_422);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_422);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_423;
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 28, 6)}, ComplexEventTimes_NoComplexEventTimes_423);
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 8, 50)}, ComplexEventTimes_NoComplexEventTimes_423);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_423);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_106;
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_106);
      FIX::ComplexEventPrice ComplexEventPrice_106;
      ComplexEventPrice_106.setString("18212906");
set_field(noComplexEvents_1_1_1, ComplexEventPrice_106, ComplexEvents_NoComplexEvents_106);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_106);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_106;
      ComplexEventPriceBoundaryPrecision_106.setString("54.780000");
set_field(noComplexEvents_1_1_1, ComplexEventPriceBoundaryPrecision_106, ComplexEvents_NoComplexEvents_106);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_106);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_106);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_106;
      ComplexOptPayoutAmount_106.setString("18559084");
set_field(noComplexEvents_1_1_1, ComplexOptPayoutAmount_106, ComplexEvents_NoComplexEvents_106);
      all_values.push_back(ComplexEvents_NoComplexEvents_106);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_211;
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 23, 4, 7, 9, 2002)}, ComplexEventDates_NoComplexEventDates_211);
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 59, 41, 2, 9, 2009)}, ComplexEventDates_NoComplexEventDates_211);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_211);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_424;
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 6, 41)}, ComplexEventTimes_NoComplexEventTimes_424);
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 41, 0)}, ComplexEventTimes_NoComplexEventTimes_424);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_424);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_107;
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_107);
      FIX::ComplexEventPrice ComplexEventPrice_107;
      ComplexEventPrice_107.setString("2806294");
set_field(noComplexEvents_1_1_2, ComplexEventPrice_107, ComplexEvents_NoComplexEvents_107);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_107);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_107;
      ComplexEventPriceBoundaryPrecision_107.setString("49.380000");
set_field(noComplexEvents_1_1_2, ComplexEventPriceBoundaryPrecision_107, ComplexEvents_NoComplexEvents_107);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_107);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_107);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_107;
      ComplexOptPayoutAmount_107.setString("2953497");
set_field(noComplexEvents_1_1_2, ComplexOptPayoutAmount_107, ComplexEvents_NoComplexEvents_107);
      all_values.push_back(ComplexEvents_NoComplexEvents_107);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_212;
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 55, 4, 12, 4, 2004)}, ComplexEventDates_NoComplexEventDates_212);
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 56, 5, 2, 5, 2013)}, ComplexEventDates_NoComplexEventDates_212);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_212);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_425;
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 13, 0)}, ComplexEventTimes_NoComplexEventTimes_425);
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 41, 19)}, ComplexEventTimes_NoComplexEventTimes_425);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_425);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_426;
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 19, 10)}, ComplexEventTimes_NoComplexEventTimes_426);
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 18, 13)}, ComplexEventTimes_NoComplexEventTimes_426);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_426);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_213;
        set_field(noComplexEventDates_1_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 0, 45, 24, 8, 2014)}, ComplexEventDates_NoComplexEventDates_213);
        set_field(noComplexEventDates_1_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 38, 30, 17, 11, 2013)}, ComplexEventDates_NoComplexEventDates_213);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_213);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_427;
          set_field(noComplexEventTimes_1_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 6, 42)}, ComplexEventTimes_NoComplexEventTimes_427);
          set_field(noComplexEventTimes_1_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 16, 52)}, ComplexEventTimes_NoComplexEventTimes_427);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_427);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_428;
          set_field(noComplexEventTimes_1_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 4, 46)}, ComplexEventTimes_NoComplexEventTimes_428);
          set_field(noComplexEventTimes_1_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 4, 25)}, ComplexEventTimes_NoComplexEventTimes_428);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_428);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_214;
        set_field(noComplexEventDates_1_2_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 25, 19, 8, 9, 2015)}, ComplexEventDates_NoComplexEventDates_214);
        set_field(noComplexEventDates_1_2_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 39, 10, 4, 2, 2003)}, ComplexEventDates_NoComplexEventDates_214);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_214);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_429;
          set_field(noComplexEventTimes_1_2_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 7, 18)}, ComplexEventTimes_NoComplexEventTimes_429);
          set_field(noComplexEventTimes_1_2_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 26, 48)}, ComplexEventTimes_NoComplexEventTimes_429);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_429);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_0);
        }
        {
          FIX50SP2::News::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_430;
          set_field(noComplexEventTimes_1_2_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 52, 19)}, ComplexEventTimes_NoComplexEventTimes_430);
          set_field(noComplexEventTimes_1_2_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 16, 42)}, ComplexEventTimes_NoComplexEventTimes_430);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_430);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::News::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_117;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_1173151336"}, EvntGrp_NoEvents_117);
      FIX::EventPx EventPx_117;
      EventPx_117.setString("16063790");
set_field(noEvents_1_1_0, EventPx_117, EvntGrp_NoEvents_117);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_1117064917"}, EvntGrp_NoEvents_117);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(7, 38, 56, 23, 6, 2001)}, EvntGrp_NoEvents_117);
      set_field(noEvents_1_1_0, FIX::EventType{99}, EvntGrp_NoEvents_117);
      all_values.push_back(EvntGrp_NoEvents_117);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::News::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_103;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_1689116602"}, InstrumentParties_NoInstrumentParties_103);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_103);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{664925034}, InstrumentParties_NoInstrumentParties_103);
      all_values.push_back(InstrumentParties_NoInstrumentParties_103);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_943665647"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{1166599752}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_1693955388"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{155119417}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::News::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210;
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubID{"STRING_1243250978"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210);
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubIDType{2016835656}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_112;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_1081511735"}, SecAltIDGrp_NoSecurityAltID_112);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_518496200"}, SecAltIDGrp_NoSecurityAltID_112);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_112);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_113;
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltID{"STRING_1555724010"}, SecAltIDGrp_NoSecurityAltID_113);
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltIDSource{"STRING_2125573552"}, SecAltIDGrp_NoSecurityAltID_113);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_113);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::News::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_114;
      set_field(noSecurityAltID_1_1_2, FIX::SecurityAltID{"STRING_2072835124"}, SecAltIDGrp_NoSecurityAltID_114);
      set_field(noSecurityAltID_1_1_2, FIX::SecurityAltIDSource{"STRING_217924358"}, SecAltIDGrp_NoSecurityAltID_114);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_114);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_108;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_1035987086"}, SecurityXML_108);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{1011806114}, SecurityXML_108);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_1391075694"}, SecurityXML_108);
    all_values.push_back(SecurityXML_108);
    all_compo_names.insert("...NoRelatedSym..");

    msg.addGroup(noRelatedSym_0_1);
  }
  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::News::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_86;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_2128871031"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{949651990}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_841785692"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1081113021}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1293972847"}, InstrumentLeg_86);
    FIX::LegContractMultiplier LegContractMultiplier_86;
    LegContractMultiplier_86.setString("10940892");
set_field(noLegs_0_0, LegContractMultiplier_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{450426090}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_367472706"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1148646883"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_282649301"}, InstrumentLeg_86);
    FIX::LegCouponRate LegCouponRate_86;
    LegCouponRate_86.setString("93.080000");
set_field(noLegs_0_0, LegCouponRate_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1281926483"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_78108483"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{2114174087}, InstrumentLeg_86);
    FIX::LegFactor LegFactor_86;
    LegFactor_86.setString("19720022");
set_field(noLegs_0_0, LegFactor_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{233227900}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1209941417"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1841354241"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_871502871"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_143969504"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_212366793"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_279743234"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_122059408"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_137718269"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'4'}, InstrumentLeg_86);
    FIX::LegOptionRatio LegOptionRatio_86;
    LegOptionRatio_86.setString("11580464");
set_field(noLegs_0_0, LegOptionRatio_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1149524384"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1888743287"}, InstrumentLeg_86);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_86;
    LegPriceUnitOfMeasureQty_86.setString("16529289");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegProduct{1130911767}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegPutOrCall{690911629}, InstrumentLeg_86);
    FIX::LegRatioQty LegRatioQty_86;
    LegRatioQty_86.setString("3472310");
set_field(noLegs_0_0, LegRatioQty_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_64541141"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1984884476"}, InstrumentLeg_86);
    FIX::LegRepurchaseRate LegRepurchaseRate_86;
    LegRepurchaseRate_86.setString("2.870000");
set_field(noLegs_0_0, LegRepurchaseRate_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{514967231}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_204873534"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_442483522"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_797616532"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_113979195"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1724410005"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1745190867"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSide{'3'}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1802518488"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_86);
    FIX::LegStrikePrice LegStrikePrice_86;
    LegStrikePrice_86.setString("20357463");
set_field(noLegs_0_0, LegStrikePrice_86, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_774339075"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_2057898866"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_759765612"}, InstrumentLeg_86);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_918308579"}, InstrumentLeg_86);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_86;
    LegUnitOfMeasureQty_86.setString("1227820");
set_field(noLegs_0_0, LegUnitOfMeasureQty_86, InstrumentLeg_86);
    all_values.push_back(InstrumentLeg_86);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_173;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1040367987"}, LegSecAltIDGrp_NoLegSecurityAltID_173);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_260500280"}, LegSecAltIDGrp_NoLegSecurityAltID_173);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_173);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_174;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1537176439"}, LegSecAltIDGrp_NoLegSecurityAltID_174);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_50930833"}, LegSecAltIDGrp_NoLegSecurityAltID_174);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_174);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_175;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1410024664"}, LegSecAltIDGrp_NoLegSecurityAltID_175);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1278436078"}, LegSecAltIDGrp_NoLegSecurityAltID_175);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_175);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::News::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_87;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1703859812"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{393452784}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1969347707"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{2051090836}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_457993925"}, InstrumentLeg_87);
    FIX::LegContractMultiplier LegContractMultiplier_87;
    LegContractMultiplier_87.setString("18067485");
set_field(noLegs_0_1, LegContractMultiplier_87, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1344927475}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_972961156"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_2011622070"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1787410997"}, InstrumentLeg_87);
    FIX::LegCouponRate LegCouponRate_87;
    LegCouponRate_87.setString("76.890000");
set_field(noLegs_0_1, LegCouponRate_87, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_2125601265"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_370143657"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1019372195}, InstrumentLeg_87);
    FIX::LegFactor LegFactor_87;
    LegFactor_87.setString("9326825");
set_field(noLegs_0_1, LegFactor_87, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{586688282}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_907634936"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1707021642"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_497103500"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1667400548"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_477846574"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_619885511"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_559425747"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1518214561"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'8'}, InstrumentLeg_87);
    FIX::LegOptionRatio LegOptionRatio_87;
    LegOptionRatio_87.setString("20966021");
set_field(noLegs_0_1, LegOptionRatio_87, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1569145395"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_142926808"}, InstrumentLeg_87);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_87;
    LegPriceUnitOfMeasureQty_87.setString("12275546");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_87, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegProduct{1125521559}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegPutOrCall{536379592}, InstrumentLeg_87);
    FIX::LegRatioQty LegRatioQty_87;
    LegRatioQty_87.setString("10494186");
set_field(noLegs_0_1, LegRatioQty_87, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1029128747"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_994373517"}, InstrumentLeg_87);
    FIX::LegRepurchaseRate LegRepurchaseRate_87;
    LegRepurchaseRate_87.setString("35.630000");
set_field(noLegs_0_1, LegRepurchaseRate_87, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{226572574}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1967334674"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_572821986"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_2013983571"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1590428715"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_550939603"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1230837278"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegSide{'8'}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_921083261"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_87);
    FIX::LegStrikePrice LegStrikePrice_87;
    LegStrikePrice_87.setString("15077715");
set_field(noLegs_0_1, LegStrikePrice_87, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1010360761"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1303450537"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_2004875044"}, InstrumentLeg_87);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_530277661"}, InstrumentLeg_87);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_87;
    LegUnitOfMeasureQty_87.setString("17812971");
set_field(noLegs_0_1, LegUnitOfMeasureQty_87, InstrumentLeg_87);
    all_values.push_back(InstrumentLeg_87);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_176;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1089703408"}, LegSecAltIDGrp_NoLegSecurityAltID_176);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1152028024"}, LegSecAltIDGrp_NoLegSecurityAltID_176);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_176);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::News::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_177;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1357662699"}, LegSecAltIDGrp_NoLegSecurityAltID_177);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1038821946"}, LegSecAltIDGrp_NoLegSecurityAltID_177);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_177);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // LinesOfTextGrp
  // Group LinesOfTextGrp.NoLinesOfText
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_0;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_3;
    set_field(noLinesOfText_0_0, FIX::EncodedText{"DATA_1500589508"}, LinesOfTextGrp_NoLinesOfText_3);
    set_field(noLinesOfText_0_0, FIX::EncodedTextLen{118892914}, LinesOfTextGrp_NoLinesOfText_3);
    set_field(noLinesOfText_0_0, FIX::Text{"STRING_1699211331"}, LinesOfTextGrp_NoLinesOfText_3);
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_3);
    all_compo_names.insert("...NoLinesOfText");

    msg.addGroup(noLinesOfText_0_0);
  }
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_1;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_4;
    set_field(noLinesOfText_0_1, FIX::EncodedText{"DATA_2036969100"}, LinesOfTextGrp_NoLinesOfText_4);
    set_field(noLinesOfText_0_1, FIX::EncodedTextLen{1168311590}, LinesOfTextGrp_NoLinesOfText_4);
    set_field(noLinesOfText_0_1, FIX::Text{"STRING_580856430"}, LinesOfTextGrp_NoLinesOfText_4);
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_4);
    all_compo_names.insert("...NoLinesOfText");

    msg.addGroup(noLinesOfText_0_1);
  }
  {
    FIX50SP2::News::NoLinesOfText noLinesOfText_0_2;
    // LinesOfTextGrp.NoLinesOfText
    multiset<string> LinesOfTextGrp_NoLinesOfText_5;
    set_field(noLinesOfText_0_2, FIX::EncodedText{"DATA_883858970"}, LinesOfTextGrp_NoLinesOfText_5);
    set_field(noLinesOfText_0_2, FIX::EncodedTextLen{1876995153}, LinesOfTextGrp_NoLinesOfText_5);
    set_field(noLinesOfText_0_2, FIX::Text{"STRING_807429005"}, LinesOfTextGrp_NoLinesOfText_5);
    all_values.push_back(LinesOfTextGrp_NoLinesOfText_5);
    all_compo_names.insert("...NoLinesOfText");

    msg.addGroup(noLinesOfText_0_2);
  }
  // NewsRefGrp
  // Group NewsRefGrp.NoNewsRefIDs
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_0;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_0;
    set_field(noNewsRefIDs_0_0, FIX::NewsRefID{"STRING_302333491"}, NewsRefGrp_NoNewsRefIDs_0);
    set_field(noNewsRefIDs_0_0, FIX::NewsRefType{0}, NewsRefGrp_NoNewsRefIDs_0);
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_0);
    all_compo_names.insert("...NoNewsRefIDs");

    msg.addGroup(noNewsRefIDs_0_0);
  }
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_1;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_1;
    set_field(noNewsRefIDs_0_1, FIX::NewsRefID{"STRING_146655063"}, NewsRefGrp_NoNewsRefIDs_1);
    set_field(noNewsRefIDs_0_1, FIX::NewsRefType{0}, NewsRefGrp_NoNewsRefIDs_1);
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_1);
    all_compo_names.insert("...NoNewsRefIDs");

    msg.addGroup(noNewsRefIDs_0_1);
  }
  {
    FIX50SP2::News::NoNewsRefIDs noNewsRefIDs_0_2;
    // NewsRefGrp.NoNewsRefIDs
    multiset<string> NewsRefGrp_NoNewsRefIDs_2;
    set_field(noNewsRefIDs_0_2, FIX::NewsRefID{"STRING_1904766206"}, NewsRefGrp_NoNewsRefIDs_2);
    set_field(noNewsRefIDs_0_2, FIX::NewsRefType{2}, NewsRefGrp_NoNewsRefIDs_2);
    all_values.push_back(NewsRefGrp_NoNewsRefIDs_2);
    all_compo_names.insert("...NoNewsRefIDs");

    msg.addGroup(noNewsRefIDs_0_2);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_6;
    set_field(noRoutingIDs_0_0, FIX::RoutingID{"STRING_2007492031"}, RoutingGrp_NoRoutingIDs_6);
    set_field(noRoutingIDs_0_0, FIX::RoutingType{2}, RoutingGrp_NoRoutingIDs_6);
    all_values.push_back(RoutingGrp_NoRoutingIDs_6);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_7;
    set_field(noRoutingIDs_0_1, FIX::RoutingID{"STRING_1134644251"}, RoutingGrp_NoRoutingIDs_7);
    set_field(noRoutingIDs_0_1, FIX::RoutingType{1}, RoutingGrp_NoRoutingIDs_7);
    all_values.push_back(RoutingGrp_NoRoutingIDs_7);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_1);
  }
  {
    FIX50SP2::News::NoRoutingIDs noRoutingIDs_0_2;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_8;
    set_field(noRoutingIDs_0_2, FIX::RoutingID{"STRING_1857764470"}, RoutingGrp_NoRoutingIDs_8);
    set_field(noRoutingIDs_0_2, FIX::RoutingType{4}, RoutingGrp_NoRoutingIDs_8);
    all_values.push_back(RoutingGrp_NoRoutingIDs_8);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_74;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1491577933"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1469312555}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_342866566"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{496122309}, UnderlyingInstrument_74);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_74;
    UnderlyingAdjustedQuantity_74.setString("6794916");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_74, UnderlyingInstrument_74);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_74;
    UnderlyingAllocationPercent_74.setString("85.130000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_74, UnderlyingInstrument_74);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_74;
    UnderlyingAttachmentPoint_74.setString("20.810000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_32597466"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1500581427"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_621539764"}, UnderlyingInstrument_74);
    FIX::UnderlyingCapValue UnderlyingCapValue_74;
    UnderlyingCapValue_74.setString("20695665");
set_field(noUnderlyings_0_0, UnderlyingCapValue_74, UnderlyingInstrument_74);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_74;
    UnderlyingCashAmount_74.setString("5214093");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_74);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_74;
    UnderlyingContractMultiplier_74.setString("8059418");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{250920875}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_2009825199"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1509651885"}, UnderlyingInstrument_74);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_74;
    UnderlyingCouponRate_74.setString("43.660000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_536270480"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_74);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_74;
    UnderlyingCurrentValue_74.setString("2935530");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_74, UnderlyingInstrument_74);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_74;
    UnderlyingDetachmentPoint_74.setString("83.380000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_74, UnderlyingInstrument_74);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_74;
    UnderlyingDirtyPrice_74.setString("10334001");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_74, UnderlyingInstrument_74);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_74;
    UnderlyingEndPrice_74.setString("1535614");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_74, UnderlyingInstrument_74);
    FIX::UnderlyingEndValue UnderlyingEndValue_74;
    UnderlyingEndValue_74.setString("10210222");
set_field(noUnderlyings_0_0, UnderlyingEndValue_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{20560773}, UnderlyingInstrument_74);
    FIX::UnderlyingFXRate UnderlyingFXRate_74;
    UnderlyingFXRate_74.setString("10239305");
set_field(noUnderlyings_0_0, UnderlyingFXRate_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_74);
    FIX::UnderlyingFactor UnderlyingFactor_74;
    UnderlyingFactor_74.setString("10125964");
set_field(noUnderlyings_0_0, UnderlyingFactor_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{277093724}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_75397378"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_334425327"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_619960291"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_571519688"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1013916934"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2001648804"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1641331769"}, UnderlyingInstrument_74);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_74;
    UnderlyingNotionalPercentageOutstanding_74.setString("44.000000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_74);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_74;
    UnderlyingOriginalNotionalPercentageOutstanding_74.setString("78.850000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_968597319"}, UnderlyingInstrument_74);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_74;
    UnderlyingPriceUnitOfMeasureQty_74.setString("18761559");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1317784079}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1774539208}, UnderlyingInstrument_74);
    FIX::UnderlyingPx UnderlyingPx_74;
    UnderlyingPx_74.setString("21270768");
set_field(noUnderlyings_0_0, UnderlyingPx_74, UnderlyingInstrument_74);
    FIX::UnderlyingQty UnderlyingQty_74;
    UnderlyingQty_74.setString("11801256");
set_field(noUnderlyings_0_0, UnderlyingQty_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1136707445"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_532847546"}, UnderlyingInstrument_74);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_74;
    UnderlyingRepurchaseRate_74.setString("61.110000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{645530745}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1939375008"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_2009949149"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1112239084"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_825291529"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_16026923"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_2133261355"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_845852302"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1039957490"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_717080801"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_74);
    FIX::UnderlyingStartValue UnderlyingStartValue_74;
    UnderlyingStartValue_74.setString("13170512");
set_field(noUnderlyings_0_0, UnderlyingStartValue_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_792478179"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_74);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_74;
    UnderlyingStrikePrice_74.setString("13639978");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_74, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1059307336"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1791176661"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_857845988"}, UnderlyingInstrument_74);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_2105821737"}, UnderlyingInstrument_74);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_74;
    UnderlyingUnitOfMeasureQty_74.setString("9984395");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_74, UnderlyingInstrument_74);
    all_values.push_back(UnderlyingInstrument_74);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_156;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_926935408"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_156);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_727111902"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_156);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_156);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_148;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_553990969"}, UnderlyingStipulations_NoUnderlyingStips_148);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_706705082"}, UnderlyingStipulations_NoUnderlyingStips_148);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_148);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_149;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1323659936"}, UnderlyingStipulations_NoUnderlyingStips_149);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1690698414"}, UnderlyingStipulations_NoUnderlyingStips_149);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_149);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_162;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_892572399"}, UndlyInstrumentParties_NoUndlyInstrumentParties_162);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_162);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1031443988}, UndlyInstrumentParties_NoUndlyInstrumentParties_162);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_162);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1300984596"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1856735518}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_322);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_163;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_771064824"}, UndlyInstrumentParties_NoUndlyInstrumentParties_163);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_163);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{555104172}, UndlyInstrumentParties_NoUndlyInstrumentParties_163);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_163);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2003843104"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{266069247}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_323);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_980589880"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{648837636}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_324);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_311459650"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{770117738}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_325);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_75;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_2012835503"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1370766986}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_413810751"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{723197844}, UnderlyingInstrument_75);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_75;
    UnderlyingAdjustedQuantity_75.setString("13291050");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_75, UnderlyingInstrument_75);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_75;
    UnderlyingAllocationPercent_75.setString("3.480000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_75, UnderlyingInstrument_75);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_75;
    UnderlyingAttachmentPoint_75.setString("17.170000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_108556836"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_2139362250"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1839966022"}, UnderlyingInstrument_75);
    FIX::UnderlyingCapValue UnderlyingCapValue_75;
    UnderlyingCapValue_75.setString("6625478");
set_field(noUnderlyings_0_1, UnderlyingCapValue_75, UnderlyingInstrument_75);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_75;
    UnderlyingCashAmount_75.setString("6985836");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_75);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_75;
    UnderlyingContractMultiplier_75.setString("2057625");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1938136313}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1908714709"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_394508083"}, UnderlyingInstrument_75);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_75;
    UnderlyingCouponRate_75.setString("66.530000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_516268962"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_75);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_75;
    UnderlyingCurrentValue_75.setString("12873337");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_75, UnderlyingInstrument_75);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_75;
    UnderlyingDetachmentPoint_75.setString("13.350000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_75, UnderlyingInstrument_75);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_75;
    UnderlyingDirtyPrice_75.setString("10864526");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_75, UnderlyingInstrument_75);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_75;
    UnderlyingEndPrice_75.setString("9508724");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_75, UnderlyingInstrument_75);
    FIX::UnderlyingEndValue UnderlyingEndValue_75;
    UnderlyingEndValue_75.setString("6911307");
set_field(noUnderlyings_0_1, UnderlyingEndValue_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1352521943}, UnderlyingInstrument_75);
    FIX::UnderlyingFXRate UnderlyingFXRate_75;
    UnderlyingFXRate_75.setString("19314623");
set_field(noUnderlyings_0_1, UnderlyingFXRate_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_75);
    FIX::UnderlyingFactor UnderlyingFactor_75;
    UnderlyingFactor_75.setString("16639815");
set_field(noUnderlyings_0_1, UnderlyingFactor_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{554096422}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1205320283"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_887264932"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_967907174"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1928518127"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_68886359"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_232673874"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1477466196"}, UnderlyingInstrument_75);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_75;
    UnderlyingNotionalPercentageOutstanding_75.setString("31.950000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_75);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_75;
    UnderlyingOriginalNotionalPercentageOutstanding_75.setString("85.710000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_839991000"}, UnderlyingInstrument_75);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_75;
    UnderlyingPriceUnitOfMeasureQty_75.setString("9231361");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{38607233}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1045753572}, UnderlyingInstrument_75);
    FIX::UnderlyingPx UnderlyingPx_75;
    UnderlyingPx_75.setString("7137888");
set_field(noUnderlyings_0_1, UnderlyingPx_75, UnderlyingInstrument_75);
    FIX::UnderlyingQty UnderlyingQty_75;
    UnderlyingQty_75.setString("19473219");
set_field(noUnderlyings_0_1, UnderlyingQty_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1440261655"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1535885480"}, UnderlyingInstrument_75);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_75;
    UnderlyingRepurchaseRate_75.setString("72.570000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{988270687}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_2067234003"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1603441043"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1823042022"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1006203051"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_406829847"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_366689165"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_211241347"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_190808531"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1706657593"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_75);
    FIX::UnderlyingStartValue UnderlyingStartValue_75;
    UnderlyingStartValue_75.setString("7449049");
set_field(noUnderlyings_0_1, UnderlyingStartValue_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_764494228"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_75);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_75;
    UnderlyingStrikePrice_75.setString("5455287");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_75, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_683890584"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1945486002"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_2022994903"}, UnderlyingInstrument_75);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_861333779"}, UnderlyingInstrument_75);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_75;
    UnderlyingUnitOfMeasureQty_75.setString("225548");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_75, UnderlyingInstrument_75);
    all_values.push_back(UnderlyingInstrument_75);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_157;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1701324780"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_157);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_945690993"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_157);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_157);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_158;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1084067060"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_158);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_599594704"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_158);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_158);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_159;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1659479819"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_159);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_883905355"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_159);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_159);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_150;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1047881651"}, UnderlyingStipulations_NoUnderlyingStips_150);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1200012612"}, UnderlyingStipulations_NoUnderlyingStips_150);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_150);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_151;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_880643398"}, UnderlyingStipulations_NoUnderlyingStips_151);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_967632007"}, UnderlyingStipulations_NoUnderlyingStips_151);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_151);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_152;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_655970007"}, UnderlyingStipulations_NoUnderlyingStips_152);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_556201772"}, UnderlyingStipulations_NoUnderlyingStips_152);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_152);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_164;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1062799854"}, UndlyInstrumentParties_NoUndlyInstrumentParties_164);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_164);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{37592757}, UndlyInstrumentParties_NoUndlyInstrumentParties_164);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_164);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_482064883"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1912815698}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_326);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1998513339"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1246559111}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_327);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_380336274"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1563841819}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_328);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_165;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1792087818"}, UndlyInstrumentParties_NoUndlyInstrumentParties_165);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_165);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1361844174}, UndlyInstrumentParties_NoUndlyInstrumentParties_165);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_165);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1925560638"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1384399005}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_565575252"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1479401770}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_182606350"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1649642312}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::News::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_76;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_2078996474"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1842086170}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_386064019"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1971369185}, UnderlyingInstrument_76);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_76;
    UnderlyingAdjustedQuantity_76.setString("7424841");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_76, UnderlyingInstrument_76);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_76;
    UnderlyingAllocationPercent_76.setString("66.310000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_76, UnderlyingInstrument_76);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_76;
    UnderlyingAttachmentPoint_76.setString("89.360000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1710116180"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_94562990"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1260730708"}, UnderlyingInstrument_76);
    FIX::UnderlyingCapValue UnderlyingCapValue_76;
    UnderlyingCapValue_76.setString("15364675");
set_field(noUnderlyings_0_2, UnderlyingCapValue_76, UnderlyingInstrument_76);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_76;
    UnderlyingCashAmount_76.setString("11573628");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_76);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_76;
    UnderlyingContractMultiplier_76.setString("15740603");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{263487581}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_518202881"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1339392398"}, UnderlyingInstrument_76);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_76;
    UnderlyingCouponRate_76.setString("72.730000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1764761992"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_76);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_76;
    UnderlyingCurrentValue_76.setString("14093661");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_76, UnderlyingInstrument_76);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_76;
    UnderlyingDetachmentPoint_76.setString("18.830000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_76, UnderlyingInstrument_76);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_76;
    UnderlyingDirtyPrice_76.setString("8927196");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_76, UnderlyingInstrument_76);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_76;
    UnderlyingEndPrice_76.setString("9294815");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_76, UnderlyingInstrument_76);
    FIX::UnderlyingEndValue UnderlyingEndValue_76;
    UnderlyingEndValue_76.setString("4145488");
set_field(noUnderlyings_0_2, UnderlyingEndValue_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{129634976}, UnderlyingInstrument_76);
    FIX::UnderlyingFXRate UnderlyingFXRate_76;
    UnderlyingFXRate_76.setString("14950568");
set_field(noUnderlyings_0_2, UnderlyingFXRate_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_76);
    FIX::UnderlyingFactor UnderlyingFactor_76;
    UnderlyingFactor_76.setString("3122413");
set_field(noUnderlyings_0_2, UnderlyingFactor_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{997215504}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1825463469"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_6843848"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_1383279523"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_1649349007"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_749328022"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_821872506"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_206394295"}, UnderlyingInstrument_76);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_76;
    UnderlyingNotionalPercentageOutstanding_76.setString("5.540000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_76);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_76;
    UnderlyingOriginalNotionalPercentageOutstanding_76.setString("50.030000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1848428145"}, UnderlyingInstrument_76);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_76;
    UnderlyingPriceUnitOfMeasureQty_76.setString("20737983");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{1503263002}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1275004846}, UnderlyingInstrument_76);
    FIX::UnderlyingPx UnderlyingPx_76;
    UnderlyingPx_76.setString("1898022");
set_field(noUnderlyings_0_2, UnderlyingPx_76, UnderlyingInstrument_76);
    FIX::UnderlyingQty UnderlyingQty_76;
    UnderlyingQty_76.setString("20214658");
set_field(noUnderlyings_0_2, UnderlyingQty_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_466913596"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_304319546"}, UnderlyingInstrument_76);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_76;
    UnderlyingRepurchaseRate_76.setString("42.280000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{39158621}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_1982678639"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_900626742"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_675630505"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_727914609"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1830108330"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1090179378"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_857549585"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1177681522"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_836646374"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_76);
    FIX::UnderlyingStartValue UnderlyingStartValue_76;
    UnderlyingStartValue_76.setString("274133");
set_field(noUnderlyings_0_2, UnderlyingStartValue_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_514626195"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_76);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_76;
    UnderlyingStrikePrice_76.setString("164915");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1925962782"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_85081759"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_222885849"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_90439689"}, UnderlyingInstrument_76);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_76;
    UnderlyingUnitOfMeasureQty_76.setString("10015172");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_76, UnderlyingInstrument_76);
    all_values.push_back(UnderlyingInstrument_76);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_160;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1938867834"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_160);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_927831947"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_160);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_160);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_153;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_1066389032"}, UnderlyingStipulations_NoUnderlyingStips_153);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1117634221"}, UnderlyingStipulations_NoUnderlyingStips_153);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_153);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_154;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_919772442"}, UnderlyingStipulations_NoUnderlyingStips_154);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1533302629"}, UnderlyingStipulations_NoUnderlyingStips_154);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_154);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::News::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_155;
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipType{"STRING_1421953767"}, UnderlyingStipulations_NoUnderlyingStips_155);
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipValue{"STRING_411033022"}, UnderlyingStipulations_NoUnderlyingStips_155);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_155);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_166;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1257148758"}, UndlyInstrumentParties_NoUndlyInstrumentParties_166);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_166);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{100608107}, UndlyInstrumentParties_NoUndlyInstrumentParties_166);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_166);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_994284447"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1190787486}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::News::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_695129305"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{24482322}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // header
  multiset<string> header_55;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_0"}, header_55);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1864920217"}, header_55);
  set_header_field(msg.getHeader(), FIX::BodyLength{51895700}, header_55);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_394576407"}, header_55);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_894071330"}, header_55);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1462588602"}, header_55);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_411067962"}, header_55);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{672550464}, header_55);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_55);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{633953811}, header_55);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_762990153"}, header_55);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_401703969"}, header_55);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_176481016"}, header_55);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(20, 3, 52, 25, 11, 2015)}, header_55);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_55);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_55);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_431559956"}, header_55);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{831305367}, header_55);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1717252805"}, header_55);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_532168063"}, header_55);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_668885087"}, header_55);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(13, 13, 7, 9, 7, 2015)}, header_55);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1997482169"}, header_55);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1975522292"}, header_55);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_2103020229"}, header_55);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_261066483"}, header_55);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{500589109}, header_55);
  all_values.push_back(header_55);
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
