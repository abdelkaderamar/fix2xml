#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::AdjustedPositionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AdjustedPositionReport_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_91349213"}, AdjustedPositionReport_0);
  set_field(msg, FIX::PosMaintRptID{"STRING_879879046"}, AdjustedPositionReport_0);
  set_field(msg, FIX::PosMaintRptRefID{"STRING_743400359"}, AdjustedPositionReport_0);
  set_field(msg, FIX::PosReqType{3}, AdjustedPositionReport_0);
  FIX::PriorSettlPrice PriorSettlPrice_0;
  PriorSettlPrice_0.setString("10892417");
set_field(msg, PriorSettlPrice_0, AdjustedPositionReport_0);
  FIX::SettlPrice SettlPrice_0;
  SettlPrice_0.setString("11484783");
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
    AttachmentPoint_0.setString("32.640000");
set_field(noRelatedSym_0_0, AttachmentPoint_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_2104574526"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_727533419"}, Instrument_0);
    FIX::CapPrice CapPrice_0;
    CapPrice_0.setString("14477170");
set_field(noRelatedSym_0_0, CapPrice_0, Instrument_0);
    FIX::ContractMultiplier ContractMultiplier_0;
    ContractMultiplier_0.setString("10700682");
set_field(noRelatedSym_0_0, ContractMultiplier_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{2}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1306419442"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_1095952950"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_721006617"}, Instrument_0);
    FIX::CouponRate CouponRate_0;
    CouponRate_0.setString("57.760000");
set_field(noRelatedSym_0_0, CouponRate_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_933467467"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_305301742"}, Instrument_0);
    FIX::DetachmentPoint DetachmentPoint_0;
    DetachmentPoint_0.setString("54.440000");
set_field(noRelatedSym_0_0, DetachmentPoint_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_505261502"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{2146549818}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1421553838"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{379719443}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{2}, Instrument_0);
    FIX::Factor Factor_0;
    Factor_0.setString("7973337");
set_field(noRelatedSym_0_0, Factor_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_0);
    FIX::FloorPrice FloorPrice_0;
    FloorPrice_0.setString("17220019");
set_field(noRelatedSym_0_0, FloorPrice_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{1}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_392707776"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'3'}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_892571277"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1481949560"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1466396930"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_1915344811"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_5606546"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1573618627"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_2101622777"}, Instrument_0);
    FIX::MinPriceIncrement MinPriceIncrement_0;
    MinPriceIncrement_0.setString("7331399");
set_field(noRelatedSym_0_0, MinPriceIncrement_0, Instrument_0);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_0;
    MinPriceIncrementAmount_0.setString("8738520");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{1024207348}, Instrument_0);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_0;
    NotionalPercentageOutstanding_0.setString("2.560000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'3'}, Instrument_0);
    FIX::OptPayoutAmount OptPayoutAmount_0;
    OptPayoutAmount_0.setString("21201602");
set_field(noRelatedSym_0_0, OptPayoutAmount_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_0);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_0;
    OriginalNotionalPercentageOutstanding_0.setString("35.720000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_906144117"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{247244967}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1411405619"}, Instrument_0);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_0;
    PriceUnitOfMeasureQty_0.setString("2463111");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::Product{10}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_1791125062"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_505199300"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_1138607823"}, Instrument_0);
    FIX::RepurchaseRate RepurchaseRate_0;
    RepurchaseRate_0.setString("82.610000");
set_field(noRelatedSym_0_0, RepurchaseRate_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{79717561}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_FR"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_859496037"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_397636181"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1470011074"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_193961950"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_I"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_2109306761"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_TAXA"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SR"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_455295974"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1239042156"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"USD"}, Instrument_0);
    FIX::StrikeMultiplier StrikeMultiplier_0;
    StrikeMultiplier_0.setString("12718299");
set_field(noRelatedSym_0_0, StrikeMultiplier_0, Instrument_0);
    FIX::StrikePrice StrikePrice_0;
    StrikePrice_0.setString("9128462");
set_field(noRelatedSym_0_0, StrikePrice_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{2}, Instrument_0);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_0;
    StrikePriceBoundaryPrecision_0.setString("98.760000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_0);
    FIX::StrikeValue StrikeValue_0;
    StrikeValue_0.setString("20129044");
set_field(noRelatedSym_0_0, StrikeValue_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_764775245"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Yr"}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_lbs"}, Instrument_0);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_0;
    UnitOfMeasureQty_0.setString("10656914");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_0, Instrument_0);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_0);
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
      ComplexEventPrice_0.setString("10575576");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_0, ComplexEvents_NoComplexEvents_0);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_0);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_0;
      ComplexEventPriceBoundaryPrecision_0.setString("20.960000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_0, ComplexEvents_NoComplexEvents_0);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_0);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_0);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_0;
      ComplexOptPayoutAmount_0.setString("4384540");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_0, ComplexEvents_NoComplexEvents_0);
      all_values.push_back(ComplexEvents_NoComplexEvents_0);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_0;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 58, 10, 10, 1, 2009)}, ComplexEventDates_NoComplexEventDates_0);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 31, 45, 23, 1, 2006)}, ComplexEventDates_NoComplexEventDates_0);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_0);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_0;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 32, 28)}, ComplexEventTimes_NoComplexEventTimes_0);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 32, 25)}, ComplexEventTimes_NoComplexEventTimes_0);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_0);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_1;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 0, 11)}, ComplexEventTimes_NoComplexEventTimes_1);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 37, 16)}, ComplexEventTimes_NoComplexEventTimes_1);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_1);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_0;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_7183529"}, EvntGrp_NoEvents_0);
      FIX::EventPx EventPx_0;
      EventPx_0.setString("19674581");
set_field(noEvents_0_1_0, EventPx_0, EvntGrp_NoEvents_0);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_464292280"}, EvntGrp_NoEvents_0);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(7, 19, 3, 22, 3, 2012)}, EvntGrp_NoEvents_0);
      set_field(noEvents_0_1_0, FIX::EventType{10}, EvntGrp_NoEvents_0);
      all_values.push_back(EvntGrp_NoEvents_0);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_1;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_1231795350"}, EvntGrp_NoEvents_1);
      FIX::EventPx EventPx_1;
      EventPx_1.setString("12948818");
set_field(noEvents_0_1_1, EventPx_1, EvntGrp_NoEvents_1);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_1199742167"}, EvntGrp_NoEvents_1);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(10, 19, 36, 13, 1, 2008)}, EvntGrp_NoEvents_1);
      set_field(noEvents_0_1_1, FIX::EventType{4}, EvntGrp_NoEvents_1);
      all_values.push_back(EvntGrp_NoEvents_1);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_0;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_154706310"}, InstrumentParties_NoInstrumentParties_0);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_0);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1599358907}, InstrumentParties_NoInstrumentParties_0);
      all_values.push_back(InstrumentParties_NoInstrumentParties_0);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1000513277"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1206265277}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_0);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_1130080674"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{542915086}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_1);
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
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_950055180"}, SecAltIDGrp_NoSecurityAltID_0);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1007207366"}, SecAltIDGrp_NoSecurityAltID_0);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_0);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_1;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_1536871737"}, SecAltIDGrp_NoSecurityAltID_1);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_2119224979"}, SecAltIDGrp_NoSecurityAltID_1);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_1);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_0;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_1484948625"}, SecurityXML_0);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{969220012}, SecurityXML_0);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_18855357"}, SecurityXML_0);
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
    AttachmentPoint_1.setString("51.680000");
set_field(noRelatedSym_0_1, AttachmentPoint_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_423339873"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CPProgram{2}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_184796870"}, Instrument_1);
    FIX::CapPrice CapPrice_1;
    CapPrice_1.setString("17182216");
set_field(noRelatedSym_0_1, CapPrice_1, Instrument_1);
    FIX::ContractMultiplier ContractMultiplier_1;
    ContractMultiplier_1.setString("19093152");
set_field(noRelatedSym_0_1, ContractMultiplier_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{0}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_1641810454"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_1582330125"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1674195942"}, Instrument_1);
    FIX::CouponRate CouponRate_1;
    CouponRate_1.setString("99.520000");
set_field(noRelatedSym_0_1, CouponRate_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_794309186"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_1234796922"}, Instrument_1);
    FIX::DetachmentPoint DetachmentPoint_1;
    DetachmentPoint_1.setString("17.350000");
set_field(noRelatedSym_0_1, DetachmentPoint_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_1077732122"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{1389503232}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_1287259870"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{529607381}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{2}, Instrument_1);
    FIX::Factor Factor_1;
    Factor_1.setString("1402894");
set_field(noRelatedSym_0_1, Factor_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{true}, Instrument_1);
    FIX::FloorPrice FloorPrice_1;
    FloorPrice_1.setString("6832045");
set_field(noRelatedSym_0_1, FloorPrice_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{1}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_1378677276"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_191225905"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_1350418608"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1027876930"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ListMethod{0}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_1369273965"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_2128362098"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_1583785791"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_2078847032"}, Instrument_1);
    FIX::MinPriceIncrement MinPriceIncrement_1;
    MinPriceIncrement_1.setString("1656753");
set_field(noRelatedSym_0_1, MinPriceIncrement_1, Instrument_1);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_1;
    MinPriceIncrementAmount_1.setString("11545238");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{1840678618}, Instrument_1);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_1;
    NotionalPercentageOutstanding_1.setString("79.460000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'6'}, Instrument_1);
    FIX::OptPayoutAmount OptPayoutAmount_1;
    OptPayoutAmount_1.setString("12755250");
set_field(noRelatedSym_0_1, OptPayoutAmount_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{1}, Instrument_1);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_1;
    OriginalNotionalPercentageOutstanding_1.setString("5.770000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_2069834281"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{429843515}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_1000082755"}, Instrument_1);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_1;
    PriceUnitOfMeasureQty_1.setString("18193467");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::Product{3}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_1529690137"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{1}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_122024386"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_1118079147"}, Instrument_1);
    FIX::RepurchaseRate RepurchaseRate_1;
    RepurchaseRate_1.setString("2.650000");
set_field(noRelatedSym_0_1, RepurchaseRate_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{805228972}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_FR"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_777703894"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_348157277"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_2111142869"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_2128122502"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_A"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_1349912819"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_GO"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SR"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'P'}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_1522587977"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_1714931101"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"USD"}, Instrument_1);
    FIX::StrikeMultiplier StrikeMultiplier_1;
    StrikeMultiplier_1.setString("2162980");
set_field(noRelatedSym_0_1, StrikeMultiplier_1, Instrument_1);
    FIX::StrikePrice StrikePrice_1;
    StrikePrice_1.setString("1025126");
set_field(noRelatedSym_0_1, StrikePrice_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{4}, Instrument_1);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_1;
    StrikePriceBoundaryPrecision_1.setString("86.560000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_1);
    FIX::StrikeValue StrikeValue_1;
    StrikeValue_1.setString("8158123");
set_field(noRelatedSym_0_1, StrikeValue_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_480283673"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_Min"}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_1);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_1;
    UnitOfMeasureQty_1.setString("16055636");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_1, Instrument_1);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_FUT"}, Instrument_1);
    all_values.push_back(Instrument_1);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_1;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_1);
      FIX::ComplexEventPrice ComplexEventPrice_1;
      ComplexEventPrice_1.setString("13892719");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_1, ComplexEvents_NoComplexEvents_1);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_1);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_1;
      ComplexEventPriceBoundaryPrecision_1.setString("41.640000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_1, ComplexEvents_NoComplexEvents_1);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_1);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_1);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_1;
      ComplexOptPayoutAmount_1.setString("17629330");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_1, ComplexEvents_NoComplexEvents_1);
      all_values.push_back(ComplexEvents_NoComplexEvents_1);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_1;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 24, 38, 25, 6, 2001)}, ComplexEventDates_NoComplexEventDates_1);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 30, 59, 2, 12, 2016)}, ComplexEventDates_NoComplexEventDates_1);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_1);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_2;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 16, 12)}, ComplexEventTimes_NoComplexEventTimes_2);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 18, 21)}, ComplexEventTimes_NoComplexEventTimes_2);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_2);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_3;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 36, 7)}, ComplexEventTimes_NoComplexEventTimes_3);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 5, 52)}, ComplexEventTimes_NoComplexEventTimes_3);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_3);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_4;
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 16, 5)}, ComplexEventTimes_NoComplexEventTimes_4);
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 37, 10)}, ComplexEventTimes_NoComplexEventTimes_4);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_4);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_2;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 1, 29, 2, 4, 2009)}, ComplexEventDates_NoComplexEventDates_2);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 19, 54, 6, 5, 2013)}, ComplexEventDates_NoComplexEventDates_2);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_2);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_5;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 8, 18)}, ComplexEventTimes_NoComplexEventTimes_5);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 15, 16)}, ComplexEventTimes_NoComplexEventTimes_5);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_5);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_6;
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 25, 45)}, ComplexEventTimes_NoComplexEventTimes_6);
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 14, 47)}, ComplexEventTimes_NoComplexEventTimes_6);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_6);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_7;
          set_field(noComplexEventTimes_1_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 41, 28)}, ComplexEventTimes_NoComplexEventTimes_7);
          set_field(noComplexEventTimes_1_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 31, 54)}, ComplexEventTimes_NoComplexEventTimes_7);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_7);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_3;
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 49, 50, 27, 7, 2014)}, ComplexEventDates_NoComplexEventDates_3);
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 14, 45, 0, 3, 2004)}, ComplexEventDates_NoComplexEventDates_3);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_3);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_8;
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 14, 43)}, ComplexEventTimes_NoComplexEventTimes_8);
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 57, 3)}, ComplexEventTimes_NoComplexEventTimes_8);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_8);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_9;
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 36, 55)}, ComplexEventTimes_NoComplexEventTimes_9);
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 18, 1)}, ComplexEventTimes_NoComplexEventTimes_9);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_9);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_2;
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_2);
      FIX::ComplexEventPrice ComplexEventPrice_2;
      ComplexEventPrice_2.setString("2718770");
set_field(noComplexEvents_1_1_1, ComplexEventPrice_2, ComplexEvents_NoComplexEvents_2);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_2);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_2;
      ComplexEventPriceBoundaryPrecision_2.setString("75.510000");
set_field(noComplexEvents_1_1_1, ComplexEventPriceBoundaryPrecision_2, ComplexEvents_NoComplexEvents_2);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_2);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_2);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_2;
      ComplexOptPayoutAmount_2.setString("13227921");
set_field(noComplexEvents_1_1_1, ComplexOptPayoutAmount_2, ComplexEvents_NoComplexEvents_2);
      all_values.push_back(ComplexEvents_NoComplexEvents_2);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_4;
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 27, 17, 11, 1, 2012)}, ComplexEventDates_NoComplexEventDates_4);
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 12, 28, 2, 10, 2013)}, ComplexEventDates_NoComplexEventDates_4);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_4);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_10;
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 38, 48)}, ComplexEventTimes_NoComplexEventTimes_10);
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 6, 27)}, ComplexEventTimes_NoComplexEventTimes_10);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_10);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_11;
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 9, 8)}, ComplexEventTimes_NoComplexEventTimes_11);
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 14, 14)}, ComplexEventTimes_NoComplexEventTimes_11);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_11);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_12;
          set_field(noComplexEventTimes_1_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 33, 38)}, ComplexEventTimes_NoComplexEventTimes_12);
          set_field(noComplexEventTimes_1_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 44, 50)}, ComplexEventTimes_NoComplexEventTimes_12);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_12);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_5;
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 18, 34, 21, 12, 2000)}, ComplexEventDates_NoComplexEventDates_5);
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 7, 2, 13, 11, 2002)}, ComplexEventDates_NoComplexEventDates_5);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_5);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_13;
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 33, 47)}, ComplexEventTimes_NoComplexEventTimes_13);
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 53, 37)}, ComplexEventTimes_NoComplexEventTimes_13);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_13);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_14;
          set_field(noComplexEventTimes_1_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 11, 18)}, ComplexEventTimes_NoComplexEventTimes_14);
          set_field(noComplexEventTimes_1_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 54, 7)}, ComplexEventTimes_NoComplexEventTimes_14);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_14);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_15;
          set_field(noComplexEventTimes_1_1_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 18, 51)}, ComplexEventTimes_NoComplexEventTimes_15);
          set_field(noComplexEventTimes_1_1_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 19, 18)}, ComplexEventTimes_NoComplexEventTimes_15);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_15);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_6;
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 12, 45, 13, 2, 2005)}, ComplexEventDates_NoComplexEventDates_6);
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 50, 51, 8, 1, 2000)}, ComplexEventDates_NoComplexEventDates_6);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_6);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_16;
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 17, 50)}, ComplexEventTimes_NoComplexEventTimes_16);
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 36, 4)}, ComplexEventTimes_NoComplexEventTimes_16);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_16);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_17;
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 22, 57)}, ComplexEventTimes_NoComplexEventTimes_17);
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 16, 18)}, ComplexEventTimes_NoComplexEventTimes_17);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_17);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_18;
          set_field(noComplexEventTimes_1_1_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 31, 25)}, ComplexEventTimes_NoComplexEventTimes_18);
          set_field(noComplexEventTimes_1_1_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 43, 4)}, ComplexEventTimes_NoComplexEventTimes_18);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_18);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_3;
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_3);
      FIX::ComplexEventPrice ComplexEventPrice_3;
      ComplexEventPrice_3.setString("8976075");
set_field(noComplexEvents_1_1_2, ComplexEventPrice_3, ComplexEvents_NoComplexEvents_3);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_3);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_3;
      ComplexEventPriceBoundaryPrecision_3.setString("86.330000");
set_field(noComplexEvents_1_1_2, ComplexEventPriceBoundaryPrecision_3, ComplexEvents_NoComplexEvents_3);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_3);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_3);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_3;
      ComplexOptPayoutAmount_3.setString("18783298");
set_field(noComplexEvents_1_1_2, ComplexOptPayoutAmount_3, ComplexEvents_NoComplexEvents_3);
      all_values.push_back(ComplexEvents_NoComplexEvents_3);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_7;
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 40, 7, 10, 9, 2017)}, ComplexEventDates_NoComplexEventDates_7);
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 33, 5, 4, 9, 2013)}, ComplexEventDates_NoComplexEventDates_7);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_7);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_19;
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 1, 38)}, ComplexEventTimes_NoComplexEventTimes_19);
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 13, 44)}, ComplexEventTimes_NoComplexEventTimes_19);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_19);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_20;
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 31, 8)}, ComplexEventTimes_NoComplexEventTimes_20);
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 47, 54)}, ComplexEventTimes_NoComplexEventTimes_20);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_20);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_21;
          set_field(noComplexEventTimes_1_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 26, 4)}, ComplexEventTimes_NoComplexEventTimes_21);
          set_field(noComplexEventTimes_1_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 15, 38)}, ComplexEventTimes_NoComplexEventTimes_21);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_21);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_8;
        set_field(noComplexEventDates_1_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 35, 7, 0, 1, 2007)}, ComplexEventDates_NoComplexEventDates_8);
        set_field(noComplexEventDates_1_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 31, 3, 5, 9, 2008)}, ComplexEventDates_NoComplexEventDates_8);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_8);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_22;
          set_field(noComplexEventTimes_1_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 9, 35)}, ComplexEventTimes_NoComplexEventTimes_22);
          set_field(noComplexEventTimes_1_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 22, 21)}, ComplexEventTimes_NoComplexEventTimes_22);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_22);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_23;
          set_field(noComplexEventTimes_1_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 48, 57)}, ComplexEventTimes_NoComplexEventTimes_23);
          set_field(noComplexEventTimes_1_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 4, 50)}, ComplexEventTimes_NoComplexEventTimes_23);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_23);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_2;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_1078040084"}, EvntGrp_NoEvents_2);
      FIX::EventPx EventPx_2;
      EventPx_2.setString("16830815");
set_field(noEvents_1_1_0, EventPx_2, EvntGrp_NoEvents_2);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_150574621"}, EvntGrp_NoEvents_2);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(6, 38, 13, 19, 2, 2014)}, EvntGrp_NoEvents_2);
      set_field(noEvents_1_1_0, FIX::EventType{9}, EvntGrp_NoEvents_2);
      all_values.push_back(EvntGrp_NoEvents_2);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_3;
      set_field(noEvents_1_1_1, FIX::EventDate{"LOCALMKTDATE_1327340170"}, EvntGrp_NoEvents_3);
      FIX::EventPx EventPx_3;
      EventPx_3.setString("4133576");
set_field(noEvents_1_1_1, EventPx_3, EvntGrp_NoEvents_3);
      set_field(noEvents_1_1_1, FIX::EventText{"STRING_512864586"}, EvntGrp_NoEvents_3);
      set_field(noEvents_1_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(7, 16, 20, 2, 1, 2010)}, EvntGrp_NoEvents_3);
      set_field(noEvents_1_1_1, FIX::EventType{12}, EvntGrp_NoEvents_3);
      all_values.push_back(EvntGrp_NoEvents_3);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_4;
      set_field(noEvents_1_1_2, FIX::EventDate{"LOCALMKTDATE_426802197"}, EvntGrp_NoEvents_4);
      FIX::EventPx EventPx_4;
      EventPx_4.setString("17097555");
set_field(noEvents_1_1_2, EventPx_4, EvntGrp_NoEvents_4);
      set_field(noEvents_1_1_2, FIX::EventText{"STRING_629611171"}, EvntGrp_NoEvents_4);
      set_field(noEvents_1_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(1, 46, 50, 16, 1, 2004)}, EvntGrp_NoEvents_4);
      set_field(noEvents_1_1_2, FIX::EventType{6}, EvntGrp_NoEvents_4);
      all_values.push_back(EvntGrp_NoEvents_4);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_1;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_1044003562"}, InstrumentParties_NoInstrumentParties_1);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_1);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{1080675560}, InstrumentParties_NoInstrumentParties_1);
      all_values.push_back(InstrumentParties_NoInstrumentParties_1);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_107754670"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{1358292261}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_2);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_2;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_1324506704"}, InstrumentParties_NoInstrumentParties_2);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_2);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{538148783}, InstrumentParties_NoInstrumentParties_2);
      all_values.push_back(InstrumentParties_NoInstrumentParties_2);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_1493190225"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{5549640}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_3);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4;
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubID{"STRING_2003618456"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4);
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubIDType{660540533}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_4);
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
      multiset<string> SecAltIDGrp_NoSecurityAltID_2;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_830755758"}, SecAltIDGrp_NoSecurityAltID_2);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_150366537"}, SecAltIDGrp_NoSecurityAltID_2);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_2);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_3;
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltID{"STRING_1176912227"}, SecAltIDGrp_NoSecurityAltID_3);
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltIDSource{"STRING_227994481"}, SecAltIDGrp_NoSecurityAltID_3);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_3);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_4;
      set_field(noSecurityAltID_1_1_2, FIX::SecurityAltID{"STRING_577168734"}, SecAltIDGrp_NoSecurityAltID_4);
      set_field(noSecurityAltID_1_1_2, FIX::SecurityAltIDSource{"STRING_739184164"}, SecAltIDGrp_NoSecurityAltID_4);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_4);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_2;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_857605653"}, SecurityXML_2);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{483464920}, SecurityXML_2);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_1402846061"}, SecurityXML_2);
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
    AttachmentPoint_2.setString("1.990000");
set_field(noRelatedSym_0_2, AttachmentPoint_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CFICode{"STRING_1014429450"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CPProgram{2}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CPRegType{"STRING_691683060"}, Instrument_2);
    FIX::CapPrice CapPrice_2;
    CapPrice_2.setString("4759504");
set_field(noRelatedSym_0_2, CapPrice_2, Instrument_2);
    FIX::ContractMultiplier ContractMultiplier_2;
    ContractMultiplier_2.setString("18641563");
set_field(noRelatedSym_0_2, ContractMultiplier_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ContractMultiplierUnit{2}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ContractSettlMonth{"MONTHYEAR_1519953979"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CountryOfIssue{"COUNTRY_1594775850"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CouponPaymentDate{"LOCALMKTDATE_1082216101"}, Instrument_2);
    FIX::CouponRate CouponRate_2;
    CouponRate_2.setString("5.470000");
set_field(noRelatedSym_0_2, CouponRate_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::CreditRating{"STRING_1702530521"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::DatedDate{"LOCALMKTDATE_293024715"}, Instrument_2);
    FIX::DetachmentPoint DetachmentPoint_2;
    DetachmentPoint_2.setString("72.510000");
set_field(noRelatedSym_0_2, DetachmentPoint_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::EncodedIssuer{"DATA_535372512"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::EncodedIssuerLen{831173498}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::EncodedSecurityDesc{"DATA_1610627964"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::EncodedSecurityDescLen{2028562737}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ExerciseStyle{0}, Instrument_2);
    FIX::Factor Factor_2;
    Factor_2.setString("14667627");
set_field(noRelatedSym_0_2, Factor_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::FlexProductEligibilityIndicator{false}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::FlexibleIndicator{false}, Instrument_2);
    FIX::FloorPrice FloorPrice_2;
    FloorPrice_2.setString("1500348");
set_field(noRelatedSym_0_2, FloorPrice_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::FlowScheduleType{0}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::InstrRegistry{"STRING_1648029698"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::InstrmtAssignmentMethod{'3'}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::InterestAccrualDate{"LOCALMKTDATE_1269154895"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::IssueDate{"LOCALMKTDATE_239730214"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::Issuer{"STRING_1235635017"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ListMethod{1}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::LocaleOfIssue{"STRING_1642576276"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::MaturityDate{"LOCALMKTDATE_620551568"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::MaturityMonthYear{"MONTHYEAR_619565618"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::MaturityTime{"TZTIMEONLY_287053029"}, Instrument_2);
    FIX::MinPriceIncrement MinPriceIncrement_2;
    MinPriceIncrement_2.setString("13122346");
set_field(noRelatedSym_0_2, MinPriceIncrement_2, Instrument_2);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_2;
    MinPriceIncrementAmount_2.setString("10955160");
set_field(noRelatedSym_0_2, MinPriceIncrementAmount_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::NTPositionLimit{3725688}, Instrument_2);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_2;
    NotionalPercentageOutstanding_2.setString("51.700000");
set_field(noRelatedSym_0_2, NotionalPercentageOutstanding_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::OptAttribute{'4'}, Instrument_2);
    FIX::OptPayoutAmount OptPayoutAmount_2;
    OptPayoutAmount_2.setString("15985015");
set_field(noRelatedSym_0_2, OptPayoutAmount_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::OptPayoutType{2}, Instrument_2);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_2;
    OriginalNotionalPercentageOutstanding_2.setString("69.120000");
set_field(noRelatedSym_0_2, OriginalNotionalPercentageOutstanding_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::Pool{"STRING_1153548412"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::PositionLimit{541532338}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::PriceUnitOfMeasure{"STRING_1688920924"}, Instrument_2);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_2;
    PriceUnitOfMeasureQty_2.setString("13727058");
set_field(noRelatedSym_0_2, PriceUnitOfMeasureQty_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::Product{9}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ProductComplex{"STRING_1570000013"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::PutOrCall{0}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::RedemptionDate{"LOCALMKTDATE_1966397605"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::RepoCollateralSecurityType{"STRING_2111619636"}, Instrument_2);
    FIX::RepurchaseRate RepurchaseRate_2;
    RepurchaseRate_2.setString("27.990000");
set_field(noRelatedSym_0_2, RepurchaseRate_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::RepurchaseTerm{2116432487}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::RestructuringType{"STRING_MR"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityDesc{"STRING_33608850"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityExchange{"EXCHANGE_346978203"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityGroup{"STRING_1925277044"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityID{"STRING_273339064"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityIDSource{"STRING_D"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityStatus{"STRING_2"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecuritySubType{"STRING_1915915340"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SecurityType{"STRING_CB"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::Seniority{"STRING_SD"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SettlMethod{'C'}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SettleOnOpenFlag{"STRING_1367915769"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::StateOrProvinceOfIssue{"STRING_1098011216"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::StrikeCurrency{"CHF"}, Instrument_2);
    FIX::StrikeMultiplier StrikeMultiplier_2;
    StrikeMultiplier_2.setString("15659975");
set_field(noRelatedSym_0_2, StrikeMultiplier_2, Instrument_2);
    FIX::StrikePrice StrikePrice_2;
    StrikePrice_2.setString("16577119");
set_field(noRelatedSym_0_2, StrikePrice_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::StrikePriceBoundaryMethod{1}, Instrument_2);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_2;
    StrikePriceBoundaryPrecision_2.setString("8.460000");
set_field(noRelatedSym_0_2, StrikePriceBoundaryPrecision_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::StrikePriceDeterminationMethod{2}, Instrument_2);
    FIX::StrikeValue StrikeValue_2;
    StrikeValue_2.setString("13242472");
set_field(noRelatedSym_0_2, StrikeValue_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::Symbol{"STRING_1618731362"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::SymbolSfx{"STRING_WI"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::TimeUnit{"STRING_Wk"}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_2);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_2;
    UnitOfMeasureQty_2.setString("6114147");
set_field(noRelatedSym_0_2, UnitOfMeasureQty_2, Instrument_2);
    set_field(noRelatedSym_0_2, FIX::ValuationMethod{"STRING_FUT"}, Instrument_2);
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
      ComplexEventPrice_4.setString("19062289");
set_field(noComplexEvents_2_1_0, ComplexEventPrice_4, ComplexEvents_NoComplexEvents_4);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_4);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_4;
      ComplexEventPriceBoundaryPrecision_4.setString("64.200000");
set_field(noComplexEvents_2_1_0, ComplexEventPriceBoundaryPrecision_4, ComplexEvents_NoComplexEvents_4);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_4);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_4);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_4;
      ComplexOptPayoutAmount_4.setString("14514254");
set_field(noComplexEvents_2_1_0, ComplexOptPayoutAmount_4, ComplexEvents_NoComplexEvents_4);
      all_values.push_back(ComplexEvents_NoComplexEvents_4);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_9;
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 8, 21, 27, 10, 2009)}, ComplexEventDates_NoComplexEventDates_9);
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 51, 51, 8, 2, 2004)}, ComplexEventDates_NoComplexEventDates_9);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_9);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_24;
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 4, 57)}, ComplexEventTimes_NoComplexEventTimes_24);
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 21, 32)}, ComplexEventTimes_NoComplexEventTimes_24);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_24);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_25;
          set_field(noComplexEventTimes_2_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 5, 48)}, ComplexEventTimes_NoComplexEventTimes_25);
          set_field(noComplexEventTimes_2_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 33, 29)}, ComplexEventTimes_NoComplexEventTimes_25);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_25);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_10;
        set_field(noComplexEventDates_2_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 29, 19, 9, 4, 2004)}, ComplexEventDates_NoComplexEventDates_10);
        set_field(noComplexEventDates_2_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 11, 45, 20, 1, 2014)}, ComplexEventDates_NoComplexEventDates_10);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_10);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_26;
          set_field(noComplexEventTimes_2_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 49, 33)}, ComplexEventTimes_NoComplexEventTimes_26);
          set_field(noComplexEventTimes_2_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 46, 29)}, ComplexEventTimes_NoComplexEventTimes_26);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_26);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_27;
          set_field(noComplexEventTimes_2_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 26, 53)}, ComplexEventTimes_NoComplexEventTimes_27);
          set_field(noComplexEventTimes_2_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 18, 54)}, ComplexEventTimes_NoComplexEventTimes_27);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_27);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_28;
          set_field(noComplexEventTimes_2_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 23, 56)}, ComplexEventTimes_NoComplexEventTimes_28);
          set_field(noComplexEventTimes_2_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 25, 7)}, ComplexEventTimes_NoComplexEventTimes_28);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_28);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_5;
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_5);
      FIX::ComplexEventPrice ComplexEventPrice_5;
      ComplexEventPrice_5.setString("12690686");
set_field(noComplexEvents_2_1_1, ComplexEventPrice_5, ComplexEvents_NoComplexEvents_5);
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_5);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_5;
      ComplexEventPriceBoundaryPrecision_5.setString("53.980000");
set_field(noComplexEvents_2_1_1, ComplexEventPriceBoundaryPrecision_5, ComplexEvents_NoComplexEvents_5);
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_5);
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_5);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_5;
      ComplexOptPayoutAmount_5.setString("5544155");
set_field(noComplexEvents_2_1_1, ComplexOptPayoutAmount_5, ComplexEvents_NoComplexEvents_5);
      all_values.push_back(ComplexEvents_NoComplexEvents_5);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_11;
        set_field(noComplexEventDates_2_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 45, 20, 21, 12, 2005)}, ComplexEventDates_NoComplexEventDates_11);
        set_field(noComplexEventDates_2_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 8, 39, 14, 5, 2001)}, ComplexEventDates_NoComplexEventDates_11);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_11);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_29;
          set_field(noComplexEventTimes_2_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 59, 14)}, ComplexEventTimes_NoComplexEventTimes_29);
          set_field(noComplexEventTimes_2_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 31, 25)}, ComplexEventTimes_NoComplexEventTimes_29);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_29);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_30;
          set_field(noComplexEventTimes_2_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 10, 15)}, ComplexEventTimes_NoComplexEventTimes_30);
          set_field(noComplexEventTimes_2_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 19, 41)}, ComplexEventTimes_NoComplexEventTimes_30);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_30);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_1);
        }
        {
          FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_31;
          set_field(noComplexEventTimes_2_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 18, 12)}, ComplexEventTimes_NoComplexEventTimes_31);
          set_field(noComplexEventTimes_2_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 46, 32)}, ComplexEventTimes_NoComplexEventTimes_31);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_31);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_2);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_5;
      set_field(noEvents_2_1_0, FIX::EventDate{"LOCALMKTDATE_528565486"}, EvntGrp_NoEvents_5);
      FIX::EventPx EventPx_5;
      EventPx_5.setString("3584138");
set_field(noEvents_2_1_0, EventPx_5, EvntGrp_NoEvents_5);
      set_field(noEvents_2_1_0, FIX::EventText{"STRING_2139416817"}, EvntGrp_NoEvents_5);
      set_field(noEvents_2_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(4, 33, 35, 5, 2, 2011)}, EvntGrp_NoEvents_5);
      set_field(noEvents_2_1_0, FIX::EventType{99}, EvntGrp_NoEvents_5);
      all_values.push_back(EvntGrp_NoEvents_5);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_6;
      set_field(noEvents_2_1_1, FIX::EventDate{"LOCALMKTDATE_1186967891"}, EvntGrp_NoEvents_6);
      FIX::EventPx EventPx_6;
      EventPx_6.setString("19842322");
set_field(noEvents_2_1_1, EventPx_6, EvntGrp_NoEvents_6);
      set_field(noEvents_2_1_1, FIX::EventText{"STRING_431708936"}, EvntGrp_NoEvents_6);
      set_field(noEvents_2_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(12, 7, 22, 4, 9, 2009)}, EvntGrp_NoEvents_6);
      set_field(noEvents_2_1_1, FIX::EventType{14}, EvntGrp_NoEvents_6);
      all_values.push_back(EvntGrp_NoEvents_6);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_3;
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyID{"STRING_177089190"}, InstrumentParties_NoInstrumentParties_3);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_3);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyRole{1403101241}, InstrumentParties_NoInstrumentParties_3);
      all_values.push_back(InstrumentParties_NoInstrumentParties_3);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5;
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubID{"STRING_41027526"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5);
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubIDType{99977779}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_5);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6;
        set_field(noInstrumentPartySubIDs_2_0_2_1, FIX::InstrumentPartySubID{"STRING_1933132368"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6);
        set_field(noInstrumentPartySubIDs_2_0_2_1, FIX::InstrumentPartySubIDType{1814601313}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_6);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_4;
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyID{"STRING_628543265"}, InstrumentParties_NoInstrumentParties_4);
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_4);
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyRole{1806534483}, InstrumentParties_NoInstrumentParties_4);
      all_values.push_back(InstrumentParties_NoInstrumentParties_4);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7;
        set_field(noInstrumentPartySubIDs_2_1_2_0, FIX::InstrumentPartySubID{"STRING_855080495"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7);
        set_field(noInstrumentPartySubIDs_2_1_2_0, FIX::InstrumentPartySubIDType{1067746468}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_7);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8;
        set_field(noInstrumentPartySubIDs_2_1_2_1, FIX::InstrumentPartySubID{"STRING_2005151279"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8);
        set_field(noInstrumentPartySubIDs_2_1_2_1, FIX::InstrumentPartySubIDType{1990402128}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9;
        set_field(noInstrumentPartySubIDs_2_1_2_2, FIX::InstrumentPartySubID{"STRING_1540396013"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9);
        set_field(noInstrumentPartySubIDs_2_1_2_2, FIX::InstrumentPartySubIDType{1216230152}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_5;
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltID{"STRING_579880256"}, SecAltIDGrp_NoSecurityAltID_5);
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltIDSource{"STRING_1052978797"}, SecAltIDGrp_NoSecurityAltID_5);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_5);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_6;
      set_field(noSecurityAltID_2_1_1, FIX::SecurityAltID{"STRING_56742727"}, SecAltIDGrp_NoSecurityAltID_6);
      set_field(noSecurityAltID_2_1_1, FIX::SecurityAltIDSource{"STRING_1043426644"}, SecAltIDGrp_NoSecurityAltID_6);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_6);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_4;
    set_field(noRelatedSym_0_2, FIX::SecurityXML{"XMLDATA_636982241"}, SecurityXML_4);
    set_field(noRelatedSym_0_2, FIX::SecurityXMLLen{1323484874}, SecurityXML_4);
    set_field(noRelatedSym_0_2, FIX::SecurityXMLSchema{"STRING_686563278"}, SecurityXML_4);
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
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1154413131"}, Parties_NoPartyIDs_0);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_0);
    set_field(noPartyIDs_0_0, FIX::PartyRole{4}, Parties_NoPartyIDs_0);
    all_values.push_back(Parties_NoPartyIDs_0);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_0;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_240794894"}, PtysSubGrp_NoPartySubIDs_0);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_0);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_0);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_1;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_86749913"}, PtysSubGrp_NoPartySubIDs_1);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_1);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_1);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_2;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1449801245"}, PtysSubGrp_NoPartySubIDs_2);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_2);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_2);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_1;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_904998730"}, Parties_NoPartyIDs_1);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_1);
    set_field(noPartyIDs_0_1, FIX::PartyRole{56}, Parties_NoPartyIDs_1);
    all_values.push_back(Parties_NoPartyIDs_1);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_3;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_775969745"}, PtysSubGrp_NoPartySubIDs_3);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_3);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_3);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_4;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1904141788"}, PtysSubGrp_NoPartySubIDs_4);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_4);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_4);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AdjustedPositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_5;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1140134553"}, PtysSubGrp_NoPartySubIDs_5);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_5);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_5);
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
    LongQty_0.setString("2088810");
set_field(noPositions_0_0, LongQty_0, PositionQty_NoPositions_0);
    set_field(noPositions_0_0, FIX::PosQtyStatus{1}, PositionQty_NoPositions_0);
    set_field(noPositions_0_0, FIX::PosType{"STRING_AS"}, PositionQty_NoPositions_0);
    set_field(noPositions_0_0, FIX::QuantityDate{"LOCALMKTDATE_1261859854"}, PositionQty_NoPositions_0);
    FIX::ShortQty ShortQty_0;
    ShortQty_0.setString("14288367");
set_field(noPositions_0_0, ShortQty_0, PositionQty_NoPositions_0);
    all_values.push_back(PositionQty_NoPositions_0);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_0;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1898842095"}, NestedParties_NoNestedPartyIDs_0);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_0);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1399015110}, NestedParties_NoNestedPartyIDs_0);
      all_values.push_back(NestedParties_NoNestedPartyIDs_0);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_0;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1759251144"}, NstdPtysSubGrp_NoNestedPartySubIDs_0);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1462720814}, NstdPtysSubGrp_NoNestedPartySubIDs_0);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_0);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_1;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_199370388"}, NstdPtysSubGrp_NoNestedPartySubIDs_1);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{442899816}, NstdPtysSubGrp_NoNestedPartySubIDs_1);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_1);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_2;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_1703515708"}, NstdPtysSubGrp_NoNestedPartySubIDs_2);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1608144107}, NstdPtysSubGrp_NoNestedPartySubIDs_2);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_2);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::AdjustedPositionReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_1;
    FIX::LongQty LongQty_1;
    LongQty_1.setString("5296497");
set_field(noPositions_0_1, LongQty_1, PositionQty_NoPositions_1);
    set_field(noPositions_0_1, FIX::PosQtyStatus{2}, PositionQty_NoPositions_1);
    set_field(noPositions_0_1, FIX::PosType{"STRING_PNTN"}, PositionQty_NoPositions_1);
    set_field(noPositions_0_1, FIX::QuantityDate{"LOCALMKTDATE_716377422"}, PositionQty_NoPositions_1);
    FIX::ShortQty ShortQty_1;
    ShortQty_1.setString("15803808");
set_field(noPositions_0_1, ShortQty_1, PositionQty_NoPositions_1);
    all_values.push_back(PositionQty_NoPositions_1);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_1;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1531648381"}, NestedParties_NoNestedPartyIDs_1);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_1);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{655866712}, NestedParties_NoNestedPartyIDs_1);
      all_values.push_back(NestedParties_NoNestedPartyIDs_1);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_3;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_238616585"}, NstdPtysSubGrp_NoNestedPartySubIDs_3);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{352099278}, NstdPtysSubGrp_NoNestedPartySubIDs_3);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_3);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_4;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1806766208"}, NstdPtysSubGrp_NoNestedPartySubIDs_4);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{1985676853}, NstdPtysSubGrp_NoNestedPartySubIDs_4);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_4);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AdjustedPositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_5;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_1588727857"}, NstdPtysSubGrp_NoNestedPartySubIDs_5);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{2015647265}, NstdPtysSubGrp_NoNestedPartySubIDs_5);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_5);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noPositions_0_1);
  }
  // header
  multiset<string> header_0;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_0);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1257753045"}, header_0);
  set_header_field(msg.getHeader(), FIX::BodyLength{1130023472}, header_0);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_491640403"}, header_0);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1970204877"}, header_0);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_881381919"}, header_0);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1096478416"}, header_0);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1221736340}, header_0);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_0);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{708245912}, header_0);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_536973506"}, header_0);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_895915008"}, header_0);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1151145728"}, header_0);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(3, 37, 37, 15, 1, 2006)}, header_0);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_0);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_0);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_683243235"}, header_0);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1802800850}, header_0);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_300485620"}, header_0);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_921859821"}, header_0);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_7416480"}, header_0);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(2, 37, 45, 3, 4, 2003)}, header_0);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_314497046"}, header_0);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_529134964"}, header_0);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1839337189"}, header_0);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1410975462"}, header_0);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1750871304}, header_0);
  all_values.push_back(header_0);
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
